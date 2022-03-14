#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    void timerEvent(QTimerEvent *e);

    // 定时器表示

private:
    Ui::Widget *ui;
    int id1;
    int id2;
};
#endif // WIDGET_H
