#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QObject::connect(ui->sliderGreen, SIGNAL(valueChanged(int)),
                                             this, SLOT(on_sliderRed_valueChanged(int)));
    QObject::connect(ui->sliderBlue, SIGNAL(valueChanged(int)),
                                             this, SLOT(on_sliderRed_valueChanged(int)));
    QObject::connect(ui->sliderAlpha, SIGNAL(valueChanged(int)),
                                             this, SLOT(on_sliderRed_valueChanged(int)));
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_sliderRed_valueChanged(int value)
{
    // 拖动RED、Gree、Blue滑动条时设置textEdit的底色
    Q_UNUSED(value);
    QColor color;
    int R = ui->sliderRed->value();
    int G = ui->sliderGreen->value();
    int B = ui->sliderBlue->value();
    int alpha = ui->sliderAlpha->value();
    color.setRgb(R, G, B, alpha);   // 使用QColor的setRgb()函数获得颜色
    QPalette pal = ui->textEdit->palette();
    pal.setColor(QPalette::Base, color);
    ui->textEdit->setPalette(pal);
}


void Widget::on_dial_valueChanged(int value)
{
    // 设置LCD的显示值等于Dial的值
    ui->lcdNumber->display(value);
}


void Widget::on_radioBtnDec_clicked()
{
    // 设置LCD显示十进制
    ui->lcdNumber->setDigitCount(3);    // 设置位数
    ui->lcdNumber->setDecMode();
}


void Widget::on_radioBtnBin_clicked()
{
    ui->lcdNumber->setDigitCount(8);    // 设置位数
    ui->lcdNumber->setBinMode();
}


void Widget::on_radioBtnOct_clicked()
{
    ui->lcdNumber->setDigitCount(4);    // 设置位数
    ui->lcdNumber->setOctMode();
}


void Widget::on_radioBtnHex_clicked()
{
    ui->lcdNumber->setDigitCount(3);    // 设置位数
    ui->lcdNumber->setHexMode();
}

