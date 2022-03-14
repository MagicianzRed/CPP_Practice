#include "mypushbutton.h"
#include <QDebug>
#include <QPropertyAnimation>
MyPushButton::MyPushButton(QString normalImg, QString pressImg)
{
    // 保存接收到的路径
    this->normalpath = normalImg;
    this->presspath = pressImg;

    // 创建按钮
    QPixmap pix;
    bool ret = pix.load(normalImg);
    if (!ret)
    {
        qDebug() << "图片加载失败";
        return;
    }

//    pix = pix.scaled(pix.width() * 1.5, pix.height() * 1.5);
    // 设置按钮固定大小
    this->setFixedSize(pix.width(), pix.height());

    // 设置不规则图片样式
    this->setStyleSheet("QPushButton{border:0px}");

    // 设置图标
    this->setIcon(pix);

    // 设置图标大小
    this->setIconSize(QSize(pix.width(), pix.height()));

}

void MyPushButton::Zoom1()
{
    // 设置动画对象
    QPropertyAnimation* aniamtion = new QPropertyAnimation(this,"geometry");
    // 设置动画时间间隔
    aniamtion->setDuration(200);

    // 起始位置
    aniamtion->setStartValue(QRect(this->x(), this->y(), this->width(), this->height()));
    // 结束位置
    aniamtion->setEndValue(QRect(this->x(), this->y() + 10, this->width(), this->height()));

    // 设置弹跳曲线
    aniamtion->setEasingCurve(QEasingCurve::OutBounce);

    aniamtion->start();

}

void MyPushButton::Zoom2()
{
    // 设置动画对象
    QPropertyAnimation* aniamtion = new QPropertyAnimation(this,"geometry");
    // 设置动画时间间隔
    aniamtion->setDuration(200);

    // 起始位置
    aniamtion->setStartValue(QRect(this->x(), this->y() + 10, this->width(), this->height()));
    // 结束位置
    aniamtion->setEndValue(QRect(this->x(), this->y(), this->width(), this->height()));

    // 设置弹跳曲线
    aniamtion->setEasingCurve(QEasingCurve::OutBounce);

    aniamtion->start();
}



void MyPushButton::mousePressEvent(QMouseEvent *event)
{
    // 按下，这个状态的图片不是空，说明需要有按下状态，切换到按下的图片
    if(this->presspath != "")
    {
        QPixmap pix;
        //
        bool ret = pix.load(this->presspath);
        if (!ret)
        {
            qDebug() << "图片加载失败";
            return;
        }
        // 设置图片固定大小
        this->setFixedSize(pix.width(), pix.height());

        // 设置不规则图片样式
        this->setStyleSheet("QPushButton{border:0px}");

        // 设置图标
        this->setIcon(pix);

        // 设置图标大小
        this->setIconSize(QSize(pix.width(), pix.height()));
    }
    // 上面的 if 将按下的操作拦截，如果发生了其他事件就不会响应了，return 这里将其它任务交给父类
    return QPushButton::mousePressEvent(event);

}

void MyPushButton::mouseReleaseEvent(QMouseEvent *event)
{
    if(this->normalpath != "")
    {
        QPixmap pix;
        bool ret = pix.load(this->normalpath);
        if (!ret)
        {
            qDebug() << "图片加载失败";
            return;
        }
        // 设置图片固定大小
        this->setFixedSize(pix.width(), pix.height());

        // 设置不规则图片样式
        this->setStyleSheet("QPushButton{border:0px}");

        // 设置图标
        this->setIcon(pix);

        // 设置图标大小
        this->setIconSize(QSize(pix.width(), pix.height()));
    }
    // 上面的 if 将按下的操作拦截，如果发生了其他事件就不会响应了，return 这里将其它任务交给父类
    return QPushButton::mouseReleaseEvent(event);

}















