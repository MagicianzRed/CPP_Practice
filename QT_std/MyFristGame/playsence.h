#ifndef PLAYSENCE_H
#define PLAYSENCE_H

#include <QMainWindow>
#include <QPainter>
#include <QSound>
#include "mypushbutton.h"
#include "mycoin.h"
class PlaySence : public QMainWindow
{
    Q_OBJECT
public:
//    explicit PlaySence(QWidget *parent = nullptr);
    PlaySence(int levelnum);
    // 重写绘图事件
    void paintEvent(QPaintEvent *event);
    int levelindex;

    // 维护每个关卡的具体数值
    int gameArray[4][4];

    // 维护每个硬币
    MyCoin* coinbtn[4][4];

    // 胜利标志
    bool isWin = true;

signals:
    void playsceneback();

};

#endif // PLAYSENCE_H
