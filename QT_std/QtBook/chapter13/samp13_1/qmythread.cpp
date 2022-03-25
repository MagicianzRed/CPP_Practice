#include "qmythread.h"
#include <QWaitCondition>
#include <QMutex>
#include <QTime>
#include <QSemaphore>
/* 基于信号量的线程同步 */
const int bufferSize = 8;
int buffer1[bufferSize];
int buffer2[bufferSize];

int curBuf = 1; // 当前正在写入的buffer
int bufNo = 0;  // 采集的缓冲区序号
quint8 counter = 0; // 数据生成器

QSemaphore emptyBufs(2);    // 信号量，空的缓冲区个数，初始资源个数为2
QSemaphore fullBuf;         // 满的缓冲区个数，初始资源为0
/* 基于信号量的线程同步 */


/* 基于 QWaiCondtion 的线程同步 */

QMutex mutex;
QWaitCondition newDataAvaliable;
int seq = 0;
int diceValue = 0;
/* 基于 QWaiCondtion 的线程同步 */


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
        emit this->NewValue(seq, diceValue);
        mutex.unlock();
    }
}
/* 基于 QWaiCondtion 的线程同步 */



/* 基于信号量的线程同步 */

/*用于生成*/
void QThreadDAQ::run()
{
    mStop = false;      // 启动时令线程为 false
    bufNo = 0;          // 缓冲区序号
    curBuf = 1;         // 当前写入使用的缓冲区
    counter = 0;        // 数据生成器

    int n = emptyBufs.available();  // 返回当前信号量可用的资源个数
    /*保证线程启动时 n == 2（保证资源个数是全部能用）*/
    if (n < 2)
    {
        /*当发现由资源被占用时释放对应*/
        emptyBufs.release(2 - n);
    }
    while (!mStop)
    {
        emptyBufs.acquire();    // 获取一个空的缓冲区
        /*产生缓冲区的数据*/
        for (int i = 0; i < bufferSize; i++)
        {
            if (curBuf == 1)
            {
                buffer1[i] = counter;           // 向缓冲区写入数据
            }
            else
            {
                buffer2[i] = counter;
            }
            counter++;      // 模拟数据采集产生数据
            msleep(50);     // 每 50ms 产生一个数据
        }
        bufNo++;    // 缓冲区序号
        if(curBuf == 1)
        {
            curBuf = 2;
        }
        else
        {
            curBuf = 1;
        }
        fullBuf.release();  // 有了一个满的缓冲区，available == 1
    }
}

/*用于显示*/
void QThreadShow::run()
{
    mStop = false;

    int n = fullBuf.available(); // 检查当前可用资源个数

    /*若至少有一个资源可用*/
    if (n > 0)
    {
        fullBuf.acquire(n); // 获得可用资源
    }
    while (!mStop)
    {
        fullBuf.acquire();  // 使用默认值 1，阻塞等待至少有一个缓冲区被填满
        int bufferData[bufferSize];
        int seq = bufNo;

        /*检查当前正在写入的缓冲区*/
        if (curBuf == 1)
        {
            for (int i = 0; i < bufferSize; i++)
            {
                /*如果为 1 则 把2的缓冲区放入临时变量*/
                bufferData[i] = buffer2[i];
            }
        }
        else
        {
            for (int i = 0; i < bufferSize; i++)
            {
                bufferData[i] = buffer1[i];
            }
        }
        emptyBufs.release();    // 释放一个已经使用完毕的缓冲区
        emit NewValue(bufferData, bufferSize, seq);
    }
}
/* 基于信号量的线程同步 */
