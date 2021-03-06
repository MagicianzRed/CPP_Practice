#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTimer>
#include <QTime>
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_btnGetTime_clicked();

    void on_btnSetTime_clicked();

    void on_calendarWidget_selectionChanged();

    void on_timer_timeout();    // 定时溢出处理槽函数

    void on_btnStart_clicked();

    void on_btnStop_clicked();

private:
    QTimer *fTimer;             // 定时器
    QTime fTimerCounter;       // 计时器
    Ui::Widget *ui;
};
#endif // WIDGET_H
