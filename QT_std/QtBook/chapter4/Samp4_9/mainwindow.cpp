#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
// 状态栏初始化
    labCellIndex = new QLabel("当前单元格坐标: ", this);
    labCellIndex->setMinimumWidth(250);
    labCellType = new QLabel("当前单元格类型: ", this);
    labCellType->setMinimumWidth(200);
    labStudID = new QLabel("学生ID: ", this);
    // 添加到状态栏
    ui->statusbar->addWidget(labCellIndex);
    ui->statusbar->addWidget(labCellType);
    ui->statusbar->addWidget(labStudID);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnSetHeader_clicked()
{
    // 设置表头
    QTableWidgetItem *headerItem;
    QStringList headerText;
    headerText << "姓 名" << "性 别" << "出生日期" << "民 族" << "分 数" << "形状";
    ui->tableWidget->setColumnCount(headerText.count());
    for (int i = 0; i < ui->tableWidget->columnCount(); i++)
    {
        headerItem = new QTableWidgetItem(headerText.at(i));
        QFont font = headerItem->font();
        font.setBold(true);     // 粗体
        font.setPointSize(12);  // 字体大小
        headerItem->setTextColor(Qt::red);
        headerItem->setFont(font);
        ui->tableWidget->setHorizontalHeaderItem(i, headerItem);
    }
}


void MainWindow::on_btnIniData_clicked()
{
    // 初始化表格内容
    QString strName, strSex;
    bool isParty = false;
    QDate birth;
    birth.setDate(2077, 12, 30);    // 初始化一个日期
    ui->tableWidget->clearContents();   // 只清除工作区，不清除表头
    int rows = ui->tableWidget->rowCount(); // 数据区行数
    for (int i = 0; i < rows; i++)
    {
        strName = QString::asprintf("学生%d", i);
        if ((i % 2) == 0)   // 奇偶数设置性别，以及图标
        {
            strSex = "男";
        }
        else
        {
            strSex = "女";
        }
        createItemARow(i, strName, strSex, birth, "不死族", isParty, 70);
        birth = birth.addDays(20);  //日期加20天
        isParty = !isParty;
    }
}

void MainWindow::createItemARow(int rowNo, QString name, QString sex, QDate brith, QString nation, bool isPM, int score)
{
    // 为一行的单元格创建 Items
    QTableWidgetItem *item;
    QString str;
    uint studID = 1511741;    // 学号基数
    // 姓名
    item = new QTableWidgetItem(name, MainWindow::ctName);
    item->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    studID += rowNo;    // 学号 = 基数 + 行号
    item->setData(Qt::UserRole, QVariant(studID));  // 设置 studID 为data
    ui->tableWidget->setItem(rowNo, MainWindow::colName, item);
    // 性别
    QIcon icon;
    if (sex == "男")
    {
        icon.addFile(":/Imge/pic/me.png");
    }
    else
    {
        icon.addFile(":/Imge/pic/huangnv.png");
    }
    item = new QTableWidgetItem(sex, MainWindow::ctSex);
    item->setIcon(icon);
    item->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    ui->tableWidget->setItem(rowNo, MainWindow::colSex, item);
    // 出生日期
    str = brith.toString("yyyy-MM-dd");
    item = new QTableWidgetItem(str, MainWindow::ctBrith);
    item->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    ui->tableWidget->setItem(rowNo, MainWindow::colBrith, item);
    // 民族
    item = new QTableWidgetItem(nation, MainWindow::ctNation);
    item->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    ui->tableWidget->setItem(rowNo,MainWindow::colNation, item);
    // 是否为人
    item = new QTableWidgetItem("非人", MainWindow::ctPartyM);
    item->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    if (isPM)
    {
        item->setCheckState(Qt::Checked);
    }
    else
    {
        item->setCheckState(Qt::Unchecked);
    }
    item->setBackgroundColor(Qt::yellow);
    ui->tableWidget->setItem(rowNo, MainWindow::colPartyM, item);
    // 分数
    str.setNum(score);
    item = new QTableWidgetItem(str, MainWindow::ctScore);
    item->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    ui->tableWidget->setItem(rowNo, MainWindow::colScore, item);

}


void MainWindow::on_tableWidget_currentCellChanged(int currentRow, int currentColumn,
                                                   int previousRow, int previousColumn)
{
    // 当前单元格发生变化时的相应
    QTableWidgetItem *item = ui->tableWidget->item(currentRow, currentColumn);
    if (item == NULL)
    {
        return;
    }
    labCellIndex->setText(QString::asprintf("当前单元格坐标: %d 行, %d 列",
                                            currentRow, currentColumn));
    int cellType = item->type();
    labCellType->setText(QString::asprintf("当前单元格类型: %d", cellType));
    item = ui->tableWidget->item(currentRow, MainWindow::colName);  // 第一列的 item
    int ID = item->data(Qt::UserRole).toInt();  // 读取用户自定义数据
    labStudID->setText(QString::asprintf("学生ID: %d", ID));
}


void MainWindow::on_btnSetRow_clicked()
{
    // 设置行数
    int num = ui->spinNum->value();
    ui->tableWidget->setRowCount(num);
}


void MainWindow::on_btnInsertRow_clicked()
{
    // 插入一行
    int curRow = ui->tableWidget->currentRow();
    ui->tableWidget->insertRow(curRow);
    createItemARow(curRow, "转校生", "男",
                   QDate::fromString("1999-1-1", "yyyy-M-d"), "神族", true, 70);
}


void MainWindow::on_btnAppendRow_clicked()
{
    // 添加一行
    int lastRow = ui->tableWidget->rowCount();
    ui->tableWidget->insertRow(lastRow);
    createItemARow(lastRow, "新生", "女",
                   QDate::fromString("2999-8-9", "yyyy-M-d"), "巨人族", true, 70);
}


void MainWindow::on_btnDelCurRow_clicked()
{
    // 删除当前行及其 items
    int curRow = ui->tableWidget->currentRow();
    ui->tableWidget->removeRow(curRow);
}

void MainWindow::on_checkBoxEditable_clicked(bool checked)
{
    // 设置编辑模式
    if (checked)
    {
        ui->tableWidget->setEditTriggers(QAbstractItemView::DoubleClicked |
                                         QAbstractItemView::SelectedClicked);
    }
    else
    {
        ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    }
}


void MainWindow::on_checkBoxHeaderH_clicked(bool checked)
{
    // 是否显示行表头
    ui->tableWidget->horizontalHeader()->setVisible(checked);
}


void MainWindow::on_checkBoxHeaderV_clicked(bool checked)
{
    // 是否显示列表头
    ui->tableWidget->verticalHeader()->setVisible(checked);
}


void MainWindow::on_checkBoxRowColor_clicked(bool checked)
{
    ui->tableWidget->setAlternatingRowColors(checked);
}


void MainWindow::on_btnReadToEdit_clicked()
{
    // 将所有单元格的内容提取字符串, 显示在PlainTextEdit 组件里
    QString str;
    QTableWidgetItem *cellItem;
    ui->plainTextEdit->clear();
    for (int i = 0; i < ui->tableWidget->rowCount(); i++)
    {
        str = QString::asprintf("第 %d 行:   ", i + 1);
        for (int j = 0; j < ui->tableWidget->columnCount() - 1; j++)
        {
            cellItem = ui->tableWidget->item(i, j);     // 获取单元格的 item
            str = str + cellItem->text() + "    ";      // 字符串连接
        }
        cellItem = ui->tableWidget->item(i, colPartyM);          // 最后一列
        if (cellItem->checkState() == Qt::Checked)
        {
            str = str + "非人";
        }
        else
        {
            str = str + "人";
        }
        ui->plainTextEdit->appendPlainText(str);
    }
}

