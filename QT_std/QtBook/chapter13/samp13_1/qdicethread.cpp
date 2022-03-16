#include "qdicethread.h"
#include <QTime>
#include <QRandomGenerator>

/*线程任务*/
void QDiceThread::run()
{
    mStop = false;  // 启动线程时 令 mStop = false
    mSeq = 0;       // 刷新掷骰子次数
    qsrand(QTime::currentTime().msec());    // 随机数初始化，
    while (mStop == true)
    {
        if (mPaused == false)
        {
            mDiceValue = qrand();   // 获取随机数
            mDiceValue = (mDiceValue % 6) + 1;
            mSeq++;
            emit NewValue(mSeq, mDiceValue);    // 发送信号
        }
        msleep(500);    // 线程休息 500ms
    }
    quit(); // 相当于 exit(0), 退出线程的事件循环
}

QDiceThread::QDiceThread()
{

}

/*开始掷骰子*/
void QDiceThread::DiceBegin()
{
    mPaused = false;
}

/*停止掷骰子*/
void QDiceThread::DicePause()
{
    mPaused = true;
}

/*停止线程*/
void QDiceThread::StopThread()
{
    mStop = true;
}



