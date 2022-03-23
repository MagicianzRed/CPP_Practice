#ifndef QMYTHREAD_H
#define QMYTHREAD_H

#include <QThread>

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

#endif // QMYTHREAD_H
