#ifndef CHOOSELEVELSENCE_H
#define CHOOSELEVELSENCE_H

#include <QMainWindow>
#include <QPainter>
#include <QTimer>
#include <QSound>
#include "playsence.h"
class ChooseLevelSence : public QMainWindow
{
    Q_OBJECT
public:
    explicit ChooseLevelSence(QWidget *parent = nullptr);

    // 重写绘图事件
    void paintEvent(QPaintEvent *event);
    PlaySence * play = nullptr;
signals:
    // 写一个自定义信号
    void chooseSenceBack();
};

#endif // CHOOSELEVELSENCE_H
