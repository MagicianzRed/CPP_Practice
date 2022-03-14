#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // 点击获取当前的值
    connect(ui->pushButton, &QPushButton::clicked,[=](){
        qDebug() << ui->widget->getnum();
    });

    // 获取当前一半的值
    connect(ui->pushButton_2, &QPushButton::clicked,[=](){
        ui->widget->setnum(50);
    });
}

Widget::~Widget()
{
    delete ui;
}

