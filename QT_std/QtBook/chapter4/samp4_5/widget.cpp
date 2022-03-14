#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    fTimer = new QTimer(this);
    fTimer->stop();
    fTimer->setInterval(5000);  // 设置定时周期，单位：毫秒
    connect(fTimer, SIGNAL(timeout()), this, SLOT(on_timer_timeout()));
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_btnGetTime_clicked()
{
    // 获取当前日期时间，为三个专用编辑器设置日期时间数据，并转换为字符串
    QDateTime curDateTime = QDateTime::currentDateTime();
    ui->timeEdit->setTime(curDateTime.time());
    ui->editTime->setText(curDateTime.toString("hh:mm:ss"));
    ui->dateEdit->setDate(curDateTime.date());
    ui->editDate->setText(curDateTime.toString("yyyy-MM-dd"));
    ui->dateTimeEdit->setDateTime(curDateTime);
    ui->editDateTime->setText(curDateTime.toString("yyyy-MM-dd hh:mm:ss"));
}

void Widget::on_btnSetTime_clicked()
{
    // 字符串转化为QDateTime
    QString str = ui->editDateTime->text();
    str = str.trimmed();
    if (!str.isEmpty())
    {
        QDateTime datetime = QDateTime::fromString(str, "yyyy-MM-dd hh:mm:ss");
        ui->dateTimeEdit->setDateTime(datetime);
    }
}


void Widget::on_calendarWidget_selectionChanged()
{
    QDate dt = ui->calendarWidget->selectedDate();
    QString str = dt.toString("yyyy年M月d日");
    ui->editCalendar->setText(str);
}

void Widget::on_timer_timeout()
{
    QTime curTime = QTime::currentTime();   // 获取当前时间
    ui->LCDHour->display(curTime.hour());   // 显示   小时
    ui->LCDMin->display(curTime.minute());  // 显示   分钟
    ui->LCDSec->display(curTime.second());  // 显示   秒
    int va = ui->progressBar->value();
    va++;
    if (va > 100)
    {
        va = 0;
    }
    ui->progressBar->setValue(va);
}



void Widget::on_btnStart_clicked()
{
    fTimer->start();        // 定时器开始工作
    fTimerCounter.start();  // 计时器开始工作
    ui->btnStart->setEnabled(false);
    ui->btnStop->setEnabled(true);
    ui->btnSetIntv->setEnabled(false);
}


void Widget::on_btnStop_clicked()
{
    fTimer->stop(); // 定时器停止
    int tmMsec = fTimerCounter.elapsed();   // 毫秒数
    int ms = tmMsec % 1000;
    int sec = tmMsec / 1000;

    QString str = QString::asprintf("流逝时间：%d 秒, %d 毫秒", sec, ms);
    ui->labElapsTime->setText(str);
    ui->btnStart->setEnabled(true);
    ui->btnStop->setEnabled(false);
    ui->btnSetIntv->setEnabled(true);
}

