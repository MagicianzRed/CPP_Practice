#include "dialog.h"
#include "mainwindow.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::setSpinValue(int rowNo, int colNo)
{
    // 设置SpinBox组件的数值
    ui->spinBoxColumn->setValue(colNo);
    ui->spinBoxRow->setValue(rowNo);
}

void Dialog::on_btnSetText_clicked()
{
    // 定位到单元格，并设置字符串
    int col = ui->spinBoxColumn->value();   // 行号
    int row = ui->spinBoxRow->value();      // 列号
    MainWindow *parWindow = (MainWindow*)parentWidget();    //获取主窗口
    parWindow->setACellText(row, col, ui->lineEdit->text());    // 写入文字
    if (ui->checkBoxRow->isChecked())   // 行增
    {
        ui->spinBoxRow->setValue(1 + ui->spinBoxRow->value());
    }
    if (ui->checkBoxColumn->isChecked())
    {
        ui->spinBoxColumn->setValue(1 + ui->spinBoxColumn->value());
    }
}

void Dialog::closeEvent(QCloseEvent *event)
{
    // 窗口关闭 event
    MainWindow *parWindow = (MainWindow*)parentWidget();    // 获取父窗口指针
    parWindow->setActLocateEnable(true);    // 使能按钮（actTabLocate）
    parWindow->setDlgLocateNull();          // 将窗口指针设为 无
}

