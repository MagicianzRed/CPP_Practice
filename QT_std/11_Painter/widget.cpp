#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // 点击按钮移动图片
    connect(ui->pushButton, &QPushButton::clicked, [=](){
        // 手动调用paintEvent
           update();
    });
}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent* pe)
{
//    // 指定绘图设备——当前窗口下画图
//    QPainter painter(this);

//    //设置颜色
//    QPen pen(QColor(255, 0, 0));

//    pen.setWidth(1);

//    pen.setStyle(Qt::DashLine);

//    // 让画家使用笔
//    painter.setPen(pen);

//    // 画直线
//    painter.drawLine(QPoint(0,0), QPoint(100, 100));

//    // 画圆
//    painter.drawEllipse(QPoint(100, 100), 50, 50);

//    // 画矩形
//    painter.drawRect(QRect(20,20,50,50));

//    // 画文字
//    painter.drawText(QRect(10,200,200,50), "我辈岂是蓬蒿人？");

    /******************************** 高级绘图设置 *********************************************/
//    QPainter painter(this);

//    painter.drawEllipse(QPoint(100, 200), 100, 100);

//    // 设置抗锯齿 效率相对较低
//    painter.setRenderHint(QPainter::Antialiasing);
//    painter.drawEllipse(QPoint(300, 200), 100, 100);

//    painter.drawRect(QRect(20,20,50,50));
//    // 让画家从(100,0)开始画
//    painter.translate(100,0);

//    // 保存画家状态
//    painter.save();

//    painter.drawRect(QRect(20,20,50,50));

//    painter.translate(100,0);

//    // 还原画家状态
//    painter.restore();

//    painter.drawRect(QRect(20,20,50,50));

    /******************************** 用画家画图片资源 *********************************************/

    QPainter painter(this);

    if (Pox > this->width())
    {
        Pox = 0;
    }
    Pox += 20;
    painter.drawPixmap(Pox, 0, QPixmap(":/ScreenShot/202161317938.png"));

}
