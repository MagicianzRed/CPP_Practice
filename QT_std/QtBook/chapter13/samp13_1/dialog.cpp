#include "dialog.h"
#include "ui_dialog.h"
#include <QPixmap>
#include <QPushButton>
#include <QThread>
Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    connect(&threadA,SIGNAL(started()),this, SLOT(on_threadA_start()));
    connect(&threadA,SIGNAL(finished()),this, SLOT(on_threadA_finished()));
    connect(&threadA,SIGNAL(NewValue(int, int)), this,
            SLOT(on_threadA_newValue(int, int)));
}

Dialog::~Dialog()
{
    delete ui;
}


/*开始掷骰子按钮*/
void Dialog::on_btnStart_clicked()
{
    threadA.DiceBegin();
    ui->btnStart->setEnabled(false);
    ui->btnStop->setEnabled(true);
}

/*线程的 started() 的响应函数*/
void Dialog::on_threadA_start()
{
    ui->labA->setText("线程状态：线程 启动");
}

/**/
void Dialog::on_threadA_finished()
{
    ui->labA->setText("线程状态：线程 结束");
}

/*QDiceThread 的 newValue() 信号相应函数，显示骰子次数和点数*/
void Dialog::on_threadA_newValue(int seq, int diceValue)
{
    QString str = QString::asprintf("第 %d 次掷骰子, 点数为：%d", seq, diceValue);
    ui->plainTextEdit->appendPlainText(str);
    QPixmap pic;    // 图片显示
    QString fileName = QString::asprintf(":/ScreenShot/p%d.png", diceValue);
    pic.load(fileName);
    ui->labPic->setPixmap(pic);
}



void Dialog::on_btnStop_clicked()
{
    threadA.DicePause();
    ui->btnStart->setEnabled(true);
    ui->btnStop->setEnabled(false);
}


void Dialog::on_btnThreadFinishA_clicked()
{
    threadA.StopThread();   // 结束线程 run() 函数执行
    threadA.wait();
    ui->btnThreadStartA->setEnabled(true);
    ui->btnThreadFinishA->setEnabled(false);
    ui->btnStart->setEnabled(false);
    ui->btnStop->setEnabled(false);
}


void Dialog::on_btnThreadStartA_clicked()
{
    threadA.start();
    ui->btnThreadStartA->setEnabled(false);
    ui->btnThreadFinishA->setEnabled(true);
    ui->btnStart->setEnabled(true);
    ui->btnStop->setEnabled(false);
}

void Dialog::closeEvent(QCloseEvent *event)
{
    // 窗口关闭事件，必须结束线程
    if (threadA.isRunning())
    {
        threadA.StopThread();
        threadA.wait();
    }
    event->accept();
}

