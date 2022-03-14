#include "mylabel.h"
#include <QDebug>
#include <QMouseEvent>
myLabel::myLabel(QWidget *parent) : QLabel(parent)
{

}

void myLabel::enterEvent(QEvent *event)
{
//    qDebug() << "鼠标进入";
}

void myLabel::leaveEvent(QEvent *event)
{
//    qDebug() << "鼠标离开";
}

// 鼠标移动
void myLabel::mouseMoveEvent(QMouseEvent *ev)
{
//    qDebug() << "鼠标移动";
}

// 左键鼠标按下有信息，右键按下无信息
void myLabel::mousePressEvent(QMouseEvent *ev)
{
    if (ev->button() == Qt::LeftButton)
    {
        QString str = QString("鼠标左键按下 x = %1 y = %2").arg(ev->x()).arg(ev->y());
        qDebug() << str;
    }
    else if (ev->button() == Qt::RightButton)
    {
        qDebug() << "右键按下";
    }
}

// 鼠标释放
void myLabel::mouseReleaseEvent(QMouseEvent *ev)
{
    if (ev->button() == Qt::LeftButton)
    {
        QString str = QString("鼠标左键释放 x = %1 y = %2").arg(ev->x()).arg(ev->y());
        qDebug() << str;
    }
}

bool myLabel::event(QEvent* e)
{
    //如果是鼠标按下，在event事件分发中做出拦截操作
}


