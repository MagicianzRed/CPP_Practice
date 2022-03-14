#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_btnCal_clicked()
{
    QString str = ui->editNum->text();  // 读取数量
    int num = str.toInt();
    str = ui->editPrice->text();        // 读取单价
    float price = str.toFloat();
    float total = price * num;          // 计算总价
    str = str.sprintf("%.2f", total);
    ui->editToal->setText(str);
}



void Widget::on_btnDec_clicked()
{
    // 读取十进制，转换为其他进制
    QString str = ui->editDec->text();
    int val = str.toInt();
//    str = QString::number(val, 16); 转化为16进制的字符串
    str = str.setNum(val, 16);
    str = str.toUpper();
    ui->editHex->setText(str);

    str = str.setNum(val, 2);
    ui->editBin->setText(str);
}



void Widget::on_btnBin_clicked()
{
    // 读取二进制，转换为其他进制
    QString str = ui->editBin->text();
    bool ok;
    int val = str.toInt(&ok, 2);
//    str = QString::number(val, 16); 转化为16进制的字符串
    str = str.setNum(val, 10);
    ui->editDec->setText(str);

    str = str.setNum(val, 16);
    str = str.toUpper();
    ui->editHex->setText(str);
}

