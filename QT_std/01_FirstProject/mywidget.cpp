#include "mywidget.h"
#include <QPushButton>
#include <mypushbutton.h>
#include <QDebug>
myWidget::myWidget(QWidget *parent)
    : QWidget(parent)
{
    //创建一个按钮
    QPushButton* btn = new QPushButton;
    btn->setParent(this);

    // 显示文本
    btn->setText("第一个按钮");

    // 创建第二个按钮
    QPushButton* btn2 = new QPushButton("第二个按钮", this);
    // 移动第二个按钮
    btn2->move(100, 100);
    // 按钮重新指定大小
    btn2->resize(100, 100);
    // 重置窗口大小
    resize(800, 600);
    // 设置固定的窗口大小
    setFixedSize(800, 600);
    // 设置窗口标题
    setWindowTitle("风暴英雄");

    myPushButton* btn3 = new myPushButton;
    btn3->setText("我自己的按钮");

    btn3->move(100,300);
    btn3->setParent(this);  // 设置到对象树中，会自动调用析构函数

    // 需求 点击我的按钮 关闭窗口
    // 参数1 信号发送者  参数2 发送信号（函数的地址）参数3 信号接收者 参数4 处理的槽函数
    connect(btn3, &myPushButton::clicked, this, &myWidget::close);

}

// 观察打印顺序，思考实际析构顺序
myWidget::~myWidget()
{
    qDebug() << "mywidget的析构调用";
}
