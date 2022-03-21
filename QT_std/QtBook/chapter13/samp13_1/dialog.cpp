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
    connect(&mTimer,SIGNAL(timeout()), this, SLOT(on_TimeOut()));
}

Dialog::~Dialog()
{
    delete ui;
}


/*开始掷骰子按钮*/
void Dialog::on_btnStart_clicked()
{
    threadA.DiceBegin();
    mTimer.start(100);
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
{// 暂停掷骰子
    threadA.DicePause();
    // 停止计时
    mTimer.stop();
    ui->btnStart->setEnabled(true);
    ui->btnStop->setEnabled(false);
}


void Dialog::on_btnThreadFinishA_clicked()
{// 结束线程
    threadA.StopThread();   // 结束线程 run() 函数执行
    threadA.wait();
    ui->btnThreadStartA->setEnabled(true);
    ui->btnThreadFinishA->setEnabled(false);
    ui->btnStart->setEnabled(false);
    ui->btnStop->setEnabled(false);
}


void Dialog::on_btnThreadStartA_clicked()
{//启动线程
    mSeq = 0;
    threadA.start();
    ui->btnThreadStartA->setEnabled(false);
    ui->btnThreadFinishA->setEnabled(true);
    ui->btnStart->setEnabled(true);
    ui->btnStop->setEnabled(false);
}

void Dialog::on_TimeOut()
{
    // 定时器溢出处理函数
    int tmpSeq = 0, tmpValue = 0;
    bool valid = threadA.ReadValue(&tmpSeq, &tmpValue);
    if (valid && (tmpSeq != mSeq))  // 回复有效且是新数据
    {
        mSeq = tmpSeq;
        mDiceValue = tmpValue;
        QString str = QString::asprintf("第 %d 次掷骰子, 点数为：%d", mSeq, mDiceValue);
        ui->plainTextEdit->appendPlainText(str);
        QPixmap pic;    // 图片显示
        QString fileName = QString::asprintf(":/ScreenShot/p%d.png", mDiceValue);
        pic.load(fileName);
        ui->labPic->setPixmap(pic);
    }
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

