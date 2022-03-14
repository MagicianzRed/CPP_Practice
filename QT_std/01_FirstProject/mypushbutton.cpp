#include "mypushbutton.h"
#include <QDebug> // 打印一些信息

// 继承QPushButton所有的public接口
myPushButton::myPushButton(QWidget *parent) : QPushButton(parent)
{
    qDebug() << "我的按钮类的构造函数";
}

myPushButton::~myPushButton()
{
    qDebug() << "我的按钮类的析构函数";
}
