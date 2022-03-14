#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    labFileName = new QLabel("");
    ui->statusbar->addWidget(labFileName);
    this->setCentralWidget(ui->scrollArea);
    IniTree();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::IniTree()
{
    // 初始化目录树
    QString dataStr = "";   // 存储
    ui->treeWidget->clear();
    QIcon icon;
    icon.addFile(":/Image/game/2021_11_09_0000.png");

    QTreeWidgetItem *item = new QTreeWidgetItem(MainWindow::itTopItem);
    item->setIcon(MainWindow::colItem, icon);          // 第 1 列的图标
    item->setText(MainWindow::colItem, "图片文件");     // 第 1 列的文字
    item->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable
                   | Qt::ItemIsEnabled | Qt::ItemIsAutoTristate);
    item->setCheckState(colItem, Qt::Checked);

    item->setData(MainWindow::colItem, Qt::UserRole, QVariant(dataStr));
    ui->treeWidget->addTopLevelItem(item);              // 添加顶层节点
}

void MainWindow::AddFolderItem(QTreeWidgetItem *parItem, QString dirName)
{
    // 添加一个组节点
    QIcon icon(":/Image/game/2021_11_09_0001.png");
    // 获得最后的文件夹名称
    QString nodeText = GetFinalFolderName(dirName);

    QTreeWidgetItem *item;
    item = new QTreeWidgetItem(MainWindow::itGroupItem);    // 节点类型
    item->setIcon(colItem, icon);
    item->setText(colItem, nodeText);
    item->setText(colItemType, "type = itGroupItem");
    item->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable
                   | Qt::ItemIsEnabled | Qt::ItemIsAutoTristate);
    item->setCheckState(colItem, Qt::Checked);
    item->setData(colItem, Qt::UserRole, QVariant(dirName));
    parItem->addChild(item);
}

QString MainWindow::GetFinalFolderName(const QString &fullPathName)
{
    // 从一个完整目录名称里，获得最后的文件名称
    int cnt = fullPathName.length();
    int i = fullPathName.lastIndexOf("/");
    QString str = fullPathName.right(cnt - i - 1);
    return str;
}

void MainWindow::AddImageItem(QTreeWidgetItem *parItemm, QString aFileName)
{
    // 添加一个图片文件节点
    QIcon icon(":/Image/game/2021_11_09_0002.png");
    QString nodeText = GetFinalFolderName(aFileName);       // 获得最后的文件名称
    QTreeWidgetItem *item;
    item = new QTreeWidgetItem(MainWindow::itImageItem);    // 节点类型
    item->setIcon(colItem, icon);
    item->setText(colItem, nodeText);
    item->setText(colItemType, "type = itImageItem");
    item->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable
                   | Qt::ItemIsEnabled | Qt::ItemIsAutoTristate);
    item->setCheckState(colItem, Qt::Checked);
    item->setData(colItem, Qt::UserRole, QVariant(aFileName));  // 完整文件名称
    parItemm->addChild(item);   // 在父节点下面添加子节点
}

void MainWindow::DisplayImage(QTreeWidgetItem *item)
{
    // 显示图片, 节点item存储了图片文件名
    QString fileName = item->data(colItem, Qt::UserRole).toString();    // 文件名
    labFileName->setText(fileName);
    curPixMap.load(fileName);
    on_actZoomFitH_triggered();
}


void MainWindow::on_actAddFolder_triggered()
{
    QString dir = QFileDialog::getExistingDirectory();  // 选择目录
    if (!dir.isEmpty())
    {
        QTreeWidgetItem *parItem = ui->treeWidget->currentItem();   // 当前节点
        AddFolderItem(parItem, dir);    // 在父节点下面添加一个组节点
    }
}


void MainWindow::on_actAddFiles_triggered()
{
    // 添加图片文件节点
    QStringList files = QFileDialog::getOpenFileNames(this,
                                                      "选择一个或者多个文件,","","Images(*.png)");
    if (files.isEmpty())
    {
        return;
    }
    QTreeWidgetItem *parItem, *item;
    item = ui->treeWidget->currentItem();
    if (item->type() == itImageItem)    // 当前节点是图片节点
    {
        parItem = item->parent();
    }
    else
    {
        parItem = item;
    }

    for (int i = 0; i < files.size(); ++i)
    {
        QString aFilename = files.at(i);    // 得到一个文件名
        AddImageItem(parItem, aFilename);   // 添加一个图片节点
    }
}


void MainWindow::on_treeWidget_currentItemChanged(QTreeWidgetItem *current,
                                                  QTreeWidgetItem *previous)
{
    // 当前节点变化时的处理
    Q_UNUSED(previous);
    if (current == NULL)
    {
        return;
    }
    int var = current->type();  // 节点的类型
    switch (var)
    {
        case itTopItem: // 顶层节点
        {
            ui->actAddFolder->setEnabled(true);
            ui->actAddFiles->setEnabled(true);
            ui->actDeleteItem->setEnabled(false);   // 顶层节点不能删除
            break;
        }
        case itGroupItem:   // 组节点
        {
            ui->actAddFolder->setEnabled(true);
            ui->actAddFiles->setEnabled(true);
            ui->actDeleteItem->setEnabled(true);
            break;
        }
        case itImageItem:   // 图片文件节点
        {
            ui->actAddFolder->setEnabled(false); // 图片节点不能添加目录节点
            ui->actAddFiles->setEnabled(true);
            ui->actDeleteItem->setEnabled(true);
            DisplayImage(current);  // 显示图片
            break;
        }


    }
}


void MainWindow::on_actDeleteItem_triggered()
{
    // 删除节点
    QTreeWidgetItem *item = ui->treeWidget->currentItem();  // 当前节点
    QTreeWidgetItem *parItem = item->parent();  // 父节点
    parItem->removeChild(item); //移除一个子节点，不会删除
    delete item;
}

void MainWindow::changeItemCaption(QTreeWidgetItem *item)
{
    // 改变节点的标题文字
    QString str = "*" + item->text(colItem);
    item->setText(colItem, str);
    for (int i = 0; i < item->childCount(); i++)
    {
        changeItemCaption(item->child(i));
    }
}

void MainWindow::on_actScanItems_triggered()
{
    // 遍历节点
    for (int i = 0; i < ui->treeWidget->topLevelItemCount(); i++)
    {
        QTreeWidgetItem *item = ui->treeWidget->topLevelItem(i);
        changeItemCaption(item);    // 更改节点标题
    }
}


void MainWindow::on_actZoomFitH_triggered()
{
    int H = ui->scrollArea->height();
    int realH = curPixMap.height();
    pixRatio = float(H) / realH;    // 当前显示比例，必须转换为浮点数
    QPixmap pix = curPixMap.scaledToHeight(H - 30);
    ui->label->setPixmap(pix);
}


void MainWindow::on_actZoomMin_triggered()
{
    pixRatio = pixRatio * 0.8;
    int w = pixRatio * curPixMap.width();
    int h = pixRatio * curPixMap.height();
    QPixmap pix = curPixMap.scaled(w, h);
    ui->label->setPixmap(pix);
}


void MainWindow::on_actZoomReealSize_triggered()
{
    pixRatio = 1;
    ui->label->setPixmap(curPixMap);
}



void MainWindow::on_actDockVisibel_triggered(bool checked)
{
    // 停靠区的可见性
    ui->dockWidget_3->setVisible(checked);
}


void MainWindow::on_actDockFloat_triggered(bool checked)
{
    // 停靠区的浮动性
    ui->dockWidget_3->setFloating(checked);
}


void MainWindow::on_dockWidget_3_visibilityChanged(bool visible)
{
    // 停靠区可见性变化
    ui->actDockVisibel->setChecked(visible);
}


void MainWindow::on_dockWidget_3_topLevelChanged(bool topLevel)
{
    // 停靠区浮动性变换
    ui->actDockFloat->setChecked(topLevel);
}

