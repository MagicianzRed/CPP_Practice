#ifndef MYPUSHBUTTON_H
#define MYPUSHBUTTON_H

#include <QWidget>
#include <QPushButton>
#include <QMouseEvent>
class MyPushButton : public QPushButton
{
    Q_OBJECT
public:
    // 参数1 正常显示图片的路径 参数2 按下状态图片的路径
    MyPushButton(QString normalImg, QString pressImg = "");

    // 路径信息
    QString normalpath;
    QString presspath;

    // 弹起效果
    void Zoom1();
    void Zoom2();

    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);

signals:

};

#endif // MYPUSHBUTTON_H
