#include "mycoin.h"

MyCoin::MyCoin(QString coinpathImg)
{
    //
    QPixmap pix;
    bool ret = pix.load(coinpathImg);
    if (!ret)
    {
        qDebug() << "图片加载失败";
        return;
    }

    // 设置按钮固定大小
    this->setFixedSize(pix.width(), pix.height());

    // 设置不规则图片样式
    this->setStyleSheet("QPushButton{border:0px}");

    // 设置图标
    this->setIcon(pix);

    // 设置图标大小
    this->setIconSize(QSize(pix.width(), pix.height()));

    // 初始化定时器对象
    timer1 = new QTimer(this);
    timer2 = new QTimer(this);

    // 监听正面翻反面
    connect(timer1, &QTimer::timeout, [=](){
        QPixmap pix;
        QString str = QString(":/res/Coin000%1.png").arg(this->min++);
        pix.load(str);
        this->setFixedSize(pix.width(), pix.height());
        this->setStyleSheet("QPushButton{border:0px}");
        this->setIcon(pix);
        this->setIconSize(QSize(pix.width(), pix.height()));
        // 如果翻完了，将min重置为1
        if (this->min > this->max)
        {
            this->min = 1;
            isAnimation = false;
            timer1->stop();
        }

    });
    // 监听反面翻正面面
    connect(timer2, &QTimer::timeout, [=](){
        QPixmap pix;
        QString str = QString(":/res/Coin000%1.png").arg(this->max--);
        pix.load(str);
        this->setFixedSize(pix.width(), pix.height());
        this->setStyleSheet("QPushButton{border:0px}");
        this->setIcon(pix);
        this->setIconSize(QSize(pix.width(), pix.height()));
        // 如果翻完了，将min重置为1
        if (this->max < this->min)
        {
            this->max = 8;
            isAnimation = false;
            timer2->stop();
        }

    });
}

// 改变正反面
void MyCoin::changeFlag()
{

    // 如果是正面 翻成反面
    if (this->flag)
    {
        // 开始正面到反面的定时器
        timer1->start(20);
        // 开始翻金币动画
        isAnimation = true;
        this->flag = false;
    }
    else
    {
        timer2->start(20);
        // 开始翻金币动画
        isAnimation = true;
        this->flag = true;
    }
}

// 反转金币的时候拦截鼠标操作
void MyCoin::mousePressEvent(QMouseEvent *event)
{
    if (this->isAnimation == true || this->isWin == true)
    {
        return;
    }
    else
    {
        return QPushButton::mousePressEvent(event);
    }
}








