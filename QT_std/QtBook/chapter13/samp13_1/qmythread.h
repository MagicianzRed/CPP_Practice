#ifndef QMYTHREAD_H
#define QMYTHREAD_H

#include <QThread>

/* 基于 QWaiCondtion 的线程同步 */
class QThreadProducer : public QThread
{
    Q_OBJECT
private:
    bool mStop = false; // 停止线程
protected:
    void run() Q_DECL_OVERRIDE;
public:
    QThreadProducer();
    void StopThread();
};

class QThreadConsumer : public QThread
{
    Q_OBJECT
private:
    bool mStop = false; // 停止线程
protected:
    void run() Q_DECL_OVERRIDE;
public:
    QThreadConsumer();
    void StopThread();
signals:
    void NewValue(int seq, int diceValue);
};
/* 基于 QWaiCondtion 的线程同步 */



/* 基于信号量的线程同步 */
class QThreadDAQ : public QThread
{
    Q_OBJECT
private:
    bool mStop = false; // 停止线程
protected:
    void run() Q_DECL_OVERRIDE;
public:
    QThreadDAQ();
    void StopThread();
};

class QThreadShow : public QThread
{

private:
    bool mStop = false; // 停止线程
protected:
    void run() Q_DECL_OVERRIDE;
public:
    QThreadShow();
    void StopThread();
signals:
    void NewValue(int *data,int count, int seq);
};

/* 基于信号量的线程同步 */
#endif // QMYTHREAD_H
