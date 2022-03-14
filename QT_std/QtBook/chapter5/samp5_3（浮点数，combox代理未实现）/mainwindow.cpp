#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // 初始化
    setCentralWidget(ui->splitter);
    theModel = new QStandardItemModel(2, FIXED_COLUMN_COUNT, this); // 数据模型
    theSelectModel = new QItemSelectionModel(theModel);
    connect(theSelectModel, SIGNAL(currentChanged(QModelIndex, QModelIndex)),
            this, SLOT(on_currentChanged(QModelIndex, QModelIndex)));
    ui->tableView->setModel(theModel);  // 设置数据模型
    ui->tableView->setSelectionModel(theSelectModel);   // 设置选择模型
    ui->tableView->setSelectionMode(QAbstractItemView::ExtendedSelection);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectItems);

    // 状态栏设置
    labCurFile  = new QLabel(this);
    labeCellPos = new QLabel(this);
    labeCellText = new QLabel(this);

    labeCellPos->setMargin(10);
    labCurFile->setMargin(20);
    ui->statusbar->addWidget(labCurFile);
    ui->statusbar->addWidget(labeCellPos);
    ui->statusbar->addWidget(labeCellText);

    // 为各列设置自定义代理组件
    ui->tableView->setItemDelegateForColumn(0, &intSpinDelegate);
    ui->tableView->setItemDelegateForColumn(1, &intSpinDelegate);
    ui->tableView->setItemDelegateForColumn(2, &intSpinDelegate);
    ui->tableView->setItemDelegateForColumn(3, &intSpinDelegate);
    ui->tableView->setItemDelegateForColumn(4, &intSpinDelegate);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::iniModelFormStringList(QStringList & aFileContent)
{
    // 从一个 QStringList 获取数据，初始化数据模型
    int rowCnt = aFileContent.count();      // 文本行数，第1行是标题
    theModel->setRowCount(rowCnt - 1);
    // 设置表头，一个或者多个空格，TAB等分隔符隔开的字符串，分解为 QStringList
    QString header = aFileContent.at(0);    // 第一行是表头
    QStringList headerList =
            header.split(QRegExp("\\s+"), QString::SkipEmptyParts);
    theModel->setHorizontalHeaderLabels(headerList);
    // 设置表格数据
    QStandardItem *aItem;
    QStringList tmpList;
    int j;
    // 第二行开始
    for (int i = 1; i < rowCnt; i++)
    {
        QString aLineText = aFileContent.at(i);
        tmpList = aLineText.split(QRegExp("\\s+"), QString::SkipEmptyParts);
        for (j = 0; j < FIXED_COLUMN_COUNT - 1; j++)
        {
            // 不包含最后一列
            aItem = new QStandardItem(tmpList.at(j));
            theModel->setItem(i-1, j, aItem);   // 为模型的某个行列位置设置Item
        }
        aItem = new QStandardItem(tmpList.at(j));
        aItem->setCheckable(true); // 设置为 Checkable
        if (tmpList.at(j) == "0")
        {
            aItem->setCheckState(Qt::Unchecked);
        }
        else
        {
            aItem->setCheckState(Qt::Checked);
        }
        theModel->setItem(i-1, j, aItem);
    }
}

void MainWindow::on_currentChanged(const QModelIndex &current, const QModelIndex &previos)
{
    if (current.isValid())
    {
        labeCellPos->setText(QString::asprintf("当前单元格： %d行, %d列",
                                               current.row(), current.column()));
        QStandardItem *aItem = theModel->itemFromIndex(current);
        this->labeCellText->setText("单元格内容：" + aItem->text());
        QFont font = aItem->font();
        ui->actFontBold->setChecked(font.bold());
    }
}


void MainWindow::on_actOpen_triggered()
{
    // 打开文件
    QString curPath = QCoreApplication::applicationDirPath();
    QString aFileName = QFileDialog::getOpenFileName(this, "打开一个文件");
    if (aFileName.isEmpty())
    {
        return;
    }
    QStringList fFileContent;
    QFile aFile(aFileName);
    if (aFile.open(QIODevice::ReadOnly | QIODevice::Text))  // 打开文件
    {
        QTextStream aStream(&aFile);
        ui->plainTextEdit->clear();
        while (!aStream.atEnd())
        {
            QString str = aStream.readLine();
            ui->plainTextEdit->appendPlainText(str);
            fFileContent.append(str);
        }
        aFile.close();
        this->labCurFile->setText("当前文件: " + aFileName);
        iniModelFormStringList(fFileContent);
    }

}


void MainWindow::on_actAppend_triggered()
{
    // 在表格最后添加行
    QList<QStandardItem*> aItemList;    // 列表类
    QStandardItem *aItem;
    for (int i = 0; i< FIXED_COLUMN_COUNT - 1; i++)
    {
        aItem = new QStandardItem("0"); // 创建Item
        aItemList << aItem; // 添加到列表
    }
    // 获取最后一列的表头文字
    QString str = theModel->headerData(theModel->columnCount() - 1, Qt::Horizontal,
                                       Qt::DisplayRole).toString();
    aItem = new QStandardItem(str); // 创建 "" Item
    aItem->setCheckable(true);
    aItemList << aItem;     // 添加到列表

    theModel->insertRow(theModel->rowCount(), aItemList);  // 插入一行
    QModelIndex curIndex = theModel->index(theModel->rowCount() - 1, 0);
    theSelectModel->setCurrentIndex(curIndex, QItemSelectionModel::Select);

}

void MainWindow::on_actDelete_triggered()
{
    // 删除行
    QModelIndex curIndex = theSelectModel->currentIndex();      // 获取模型的索引
    if (curIndex.row() == theModel->rowCount() - 1)
    {
        theModel->removeRow(curIndex.row());    // 删除最后一行
    }
    else
    {
        theModel->removeRow(curIndex.row());    // 删除一行，并重新设置当前选择行
        theSelectModel->setCurrentIndex(curIndex, QItemSelectionModel::Select);
    }
}

void MainWindow::on_actAlignLeft_triggered()
{
    // 设置文字居左对齐
    if (!theSelectModel->hasSelection())
    {
        return;
    }
    // 获取选择的单元格的模型索引列表，可以是多选
    QModelIndexList selecedIndex = theSelectModel->selectedIndexes();
    for (int i = 0; i < selecedIndex.count(); i++)
    {
        QModelIndex aIndex = selecedIndex.at(i);
        QStandardItem *aItem = theModel->itemFromIndex(aIndex);
        aItem->setTextAlignment(Qt::AlignLeft);
    }
}




void MainWindow::on_actFontBold_triggered(bool checked)
{
    if (!theSelectModel->hasSelection())
    {
        return;
    }
    QModelIndexList selectedIndex = theSelectModel->selectedIndexes();
    for (int i = 0; i < selectedIndex.count(); i++)
    {
        QModelIndex aIndex = selectedIndex.at(i); // 获取一个模型索引
        QStandardItem *aItem = theModel->itemFromIndex(aIndex); // 获取数据项
        QFont font = aItem->font();
        font.setBold(checked);
        aItem->setFont(font);
    }
}


void MainWindow::on_actSave_triggered()
{
    // 保存为文件
    QString curPath = QCoreApplication::applicationDirPath();
    QString aFileName = QFileDialog::getSaveFileName(this, "选择一个文件", curPath,
                                                      "王之数据文件(*.txt);;所有文件(*.*)");
    if (aFileName.isEmpty())
    {
        return;
    }
    QFile aFile(aFileName);
    if (!(aFile.open(QIODevice::ReadWrite | QIODevice::Text | QIODevice::Truncate)))
    {
        return; // 以读写、覆盖原有内容的方式打开文件
    }
    QTextStream aStream(&aFile);
    QStandardItem *aItem;
    int i = 0, j = 0;
    QString str;
    ui->plainTextEdit->clear();
    // 获取表头文字
    for (i = 0; i < theModel->columnCount(); i++)
    {
        aItem = theModel->horizontalHeaderItem(i);  // 获取表头的项数据
        str = str + aItem->text() + "\t\t"; // 以Tab隔开
    }
    aStream << str << "\n"; // 文件里需要加入换行符号
    ui->plainTextEdit->appendPlainText(str);
    // 获取数据区文字
    for (i = 0; i < theModel->rowCount(); i++)
    {
        str = "";
        for (j = 0; j < theModel->columnCount() - 1; j++)
        {
            aItem = theModel->item(i, j);
            str = str + aItem->text() + QString::asprintf("\t\t");
        }
        aItem = theModel->item(i, j);   // 最后一列是逻辑型
        if (aItem->checkState() == Qt::Checked)
        {
            str = str + "1";
        }
        else
        {
            str = str + "0";
        }
        ui->plainTextEdit->appendPlainText(str);
        aStream << str << "\n";
    }
}

