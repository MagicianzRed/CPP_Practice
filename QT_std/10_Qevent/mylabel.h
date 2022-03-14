#ifndef MYLABEL_H
#define MYLABEL_H

#include <QWidget>
#include <QLabel>
class myLabel : public QLabel
{
    Q_OBJECT
public:
    explicit myLabel(QWidget *parent = nullptr);

    // 鼠标进入事件
    void enterEvent(QEvent *event);

    // 鼠标离开事件
    void leaveEvent(QEvent *event);

    // 鼠标事件
    void mouseMoveEvent(QMouseEvent *ev);
    void mousePressEvent(QMouseEvent *ev);
    void mouseReleaseEvent(QMouseEvent *ev);

    // 通过事件分发器 拦截鼠标按下事件
    bool event(QEvent* e);

signals:

};

#endif // MYLABEL_H
