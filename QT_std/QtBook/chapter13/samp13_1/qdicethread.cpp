#include "qdicethread.h"
#include <QTime>
#include <QRandomGenerator>

/*线程任务*/
void QDiceThread::run()
{
    mStop = false;  // 启动线程时 令 mStop = false
    mSeq = 0;       // 刷新掷骰子次数
    qsrand(QTime::currentTime().msec());    // 随机数初始化，
    while (!mStop)
    {
        if (!mPaused)
        {
            mutex.lock();   // 锁定互斥量，如果另外一个线程锁定了这个互斥量，它将阻塞执行到其他线程解锁这个互斥量
            mDiceValue = qrand();   // 获取随机数
            mDiceValue = (mDiceValue % 6) + 1;
            mSeq++;
            mutex.unlock(); // 解锁一个互斥量，需要与lock()配对使用
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

bool QDiceThread::ReadValue(int *seq, int *diceValue)
{
    if (mutex.tryLock())    // 试图锁定一个互斥量，如果成功锁定就返回 true。
                            // 如果其他线程已经锁定了这个互斥量，就返回false
                            // 不阻塞程序执行
    {
        *seq = mSeq;
        *diceValue = mDiceValue;
        /*保证数据赋值不会被其他线程赋值*/
        mutex.unlock();
        return true;
    }
    /*如果其他线程正在执行锁的任务就不赋值*/
    else
    {
        return false;
    }
}



