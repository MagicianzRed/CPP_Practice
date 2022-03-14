#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QPushButton* btn = new QPushButton("打开", this);
    QWidget* windowS = new QWidget;

    // 设置按钮位置
    btn->move(200,200);

    // 设置窗口大小
    windowS->resize(400, 200);
    this->resize(800, 600);

    // 设置按钮效果
    connect(btn, &QPushButton::clicked, windowS, [=]()
    {
            windowS->show();
            btn->setText("关闭");
    });
}

Widget::~Widget()
{
}

