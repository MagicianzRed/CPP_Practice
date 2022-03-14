#include "widget.h"
#include "ui_widget.h"
#include <QTimer>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // 启动定时器 ms单位
     id1 = startTimer(1000);

     id2 = startTimer(2000);

     // 定时器第二种方式
     QTimer* timer = new QTimer(this);

     //启动定时器
     timer->start(500);

     connect(timer, &QTimer::timeout, [=](){
         static int num2 = 1;
         ui->label_4->setText(QString::number(num2++));
     });

     // 点击暂停按钮停止定时器
     connect(ui->pushButton, &QPushButton::clicked, [=]()
     {
         timer->stop();
     });


}

Widget::~Widget()
{
    delete ui;
}

void Widget::timerEvent(QTimerEvent *e)
{
    if (e->timerId() == id1)
    {
        static int num = 1;
        ui->label_2->setText(QString::number(num++));
    }
    if (e->timerId() == id2)
    {
        static int num1 = 1;
        ui->label_3->setText(QString::number(num1++));
    }
}
