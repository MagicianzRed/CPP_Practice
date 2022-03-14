#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    theModel = new QStandardItemModel(0, 0, this);
    theSelction = new QItemSelectionModel(theModel);
    ui->tableView->setModel(theModel);
    ui->tableView->setSelectionModel(theSelction);

    ui->tableView->setSelectionMode(QAbstractItemView::ExtendedSelection);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectItems);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setACellText(int row, int column, QString text)
{
    // 定位到单元格，并设置字符
    QModelIndex index = theModel->index(row, column);    //获取模型索引
    theSelction->clearSelection();
    theSelction->setCurrentIndex(index, QItemSelectionModel::Select);
    theModel->setData(index, text, Qt::DisplayRole);    //设置单元格字符串
}

void MainWindow::setActLocateEnable(bool enable)
{
    ui->actTabLocate->setEnabled(enable);
}

void MainWindow::setDlgLocateNull()
{
    dlgLocate = nullptr;
}


void MainWindow::on_actTabSetSize_triggered()
{
    // 创建模态对话框，动态创建，使用后删除
    QWDialogSize *dlgTableSize = new QWDialogSize(this);
    // ?
    Qt::WindowFlags flags = dlgTableSize->windowFlags();
    dlgTableSize->setWindowFlags(flags | Qt::MSWindowsFixedSizeDialogHint);
    dlgTableSize->setRowColum(theModel->rowCount(),
                              theModel->columnCount());
    int ret = dlgTableSize->exec();
    // OK 按钮按下，获取对话框的输入，设置行数和列数
    if (ret == QDialog::Accepted)
    {
        int cols = dlgTableSize->columnCount();
        theModel->setColumnCount(cols);
        int rows = dlgTableSize->rowCount();
        theModel->setRowCount(rows);
    }
    delete dlgTableSize;
}


void MainWindow::on_actTabSetHeader_triggered()
{
    // 一次创建，多次调用，对话框关闭时只是隐藏
    if (dlgSetHeaders == nullptr)
    {
        dlgSetHeaders = new QWDialogHeaders(this);
    }
    // 如果表头列数变化，重新初始化
    if (dlgSetHeaders->headerList().count() != theModel->columnCount())
    {
        QStringList strList;
        for (int i = 0; i < theModel->columnCount(); i++)
        {
            strList.append(theModel->headerData(i, Qt::Horizontal,
                                                Qt::DisplayRole).toString());
            dlgSetHeaders->setHeaderList(strList);
        }
    }
    int ret = dlgSetHeaders->exec();    // 模态对话框
    if (ret == QDialog::Accepted)
    {
        QStringList strList = dlgSetHeaders->headerList();
        theModel->setHorizontalHeaderLabels(strList);
    }

}


void MainWindow::on_actTabLocate_triggered()
{
    //  创建 StayOnTop 的对话框，对话框关闭时删除
    ui->actTabLocate->setEnabled(false);
    dlgLocate = new Dialog(this);
    dlgLocate->setAttribute(Qt::WA_DeleteOnClose);  // 对话框关闭时自动删除
    Qt::WindowFlags flags = dlgLocate->windowFlags();   // 获取已有的 flags
    dlgLocate->setWindowFlags(flags | Qt::WindowStaysOnTopHint);    // StayOnTop

    dlgLocate->setSpinRange(theModel->rowCount(), theModel->columnCount());
    QModelIndex curIndex = theSelction->currentIndex();
    if (curIndex.isValid())
    {
        dlgLocate->setSpinValue(curIndex.row(), curIndex.column());
    }
    dlgLocate->show();
}


void MainWindow::on_tableView_clicked(const QModelIndex &index)
{
    // 单击单元格，并设置字符串
    if (dlgLocate != nullptr)
    {
        dlgLocate->setSpinValue(index.row(), index.column());
    }
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    // 关闭窗口时询问退出
    QMessageBox::StandardButton result=  QMessageBox::question(this, "确认",
                                                               "确定要退出本程序吗？",
                                                               QMessageBox::Yes | QMessageBox::No | QMessageBox::Cancel,
                                                               QMessageBox::No);
    if (result == QMessageBox::Yes)
    {
        event->accept();
    }
    else
    {
        event->ignore();
    }
}

