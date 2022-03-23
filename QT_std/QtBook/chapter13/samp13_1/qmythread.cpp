#include "qmythread.h"
#include <QWaitCondition>
#include <QMutex>
#include <QTime>

QMutex mutex;
QWaitCondition newDataAvaliable;
int seq = 0;
int diceValue = 0;

void QThreadProducer::run()
{
    mStop = false;
    seq = 0;
    qsrand(QTime::currentTime().msec());
    while (!mStop)
    {
        mutex.lock();   // 锁定互斥量，如果另外一个线程锁定了这个互斥量，它将阻塞执行到其他线程解锁这个互斥量
        diceValue = qrand();   // 获取随机数
        diceValue = (diceValue % 6) + 1;
        seq++;
        mutex.unlock(); // 解锁一个互斥量，需要与lock()配对使用
        newDataAvaliable.wakeAll(); // 唤醒所有线程，告诉大家数据被更新了
        msleep(500);    // 线程休眠
    }
}

QThreadProducer::QThreadProducer()
{

}

void QThreadConsumer::run()
{
    mStop = false;
    while (!mStop)
    {
        mutex.lock();
        newDataAvaliable.wait(&mutex);  // 只有先解锁 mutex，其他线程可以使用 mutex
        emit NewValue(seq, diceValue);
        mutex.unlock();
    }
}
