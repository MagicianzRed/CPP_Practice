#ifndef MYCOIN_H
#define MYCOIN_H

#include <QWidget>
#include <QPushButton>
#include <QDebug>
#include <QTimer>
class MyCoin : public QPushButton
{
    Q_OBJECT
public:
//    explicit MyCoin(QWidget *parent = nullptr);
    MyCoin(QString coinpathImg);

    QString coinPath = nullptr;

    // 金币属性
    int pox;
    int poy;
    bool flag;  // 正反属性

    // 正反面执行效果
    void changeFlag();
    QTimer* timer1 = nullptr;
    QTimer* timer2 = nullptr;
    int min = 1;
    int max = 8;

    // 动画执行标志
    bool isAnimation = false;

    // 重写按下的状态
    void mousePressEvent(QMouseEvent *event);
    bool isWin = false;

signals:

};

#endif // MYCOIN_H
