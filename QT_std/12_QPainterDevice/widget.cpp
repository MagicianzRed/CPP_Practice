#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QPainter painter(this);
//    // Pixmap 绘图设备 专门为平台做显示优化
//    QPixmap pix(300, 300);

//    // 设置填充色
//    pix.fill(Qt::white);

//    QPainter painter(&pix);
//    painter.setPen(QPen(Qt::green));
//    painter.drawEllipse(QPoint(150,150), 100, 100);

//    // 保存
//    pix.save("E:\\pix.png");

    // QImage 绘图设备

//    QImage imge(300, 300, QImage::Format_RGB32);

//        // 设置填充色
//        imge.fill(Qt::white);

//        QPainter painter(&imge);
//        painter.setPen(QPen(Qt::blue));
//        painter.drawEllipse(QPoint(150,150), 100, 100);

//        // 保存
//        imge.save("E:\\img.png");
    // QPicture 绘图设备 可以记录和重现绘图指令
    QPicture pic;
    // 开始画图
    painter.begin(&pic);

    painter.setPen(QPen(Qt::cyan));
    painter.drawEllipse(QPoint(150,150), 100, 100);

    painter.end(); //结束画图
    pic.save("E:\\pic.zt");


}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent* ev)
{
        // 利用QImage 对像素进行修改
//    QImage img;
//    img.load(":/ScreenShot/2021616202827.png");

//    // 修改像素点
//    for (int i = 50; i < 100; i++)
//    {
//        for(int j = 50; j < 100; j++)
//        {
//            QRgb value = qRgb(255, 0, 0);
//            img.setPixel(i, j, value);
//        }
//    }
//    painter.drawImage(0, 0, img);

    // 重现QPicture绘图指令
    QPainter painter(this);
    QPicture pic;
    pic.load("E:\\pic.zt");
    painter.drawPicture(0,0,pic);



}
