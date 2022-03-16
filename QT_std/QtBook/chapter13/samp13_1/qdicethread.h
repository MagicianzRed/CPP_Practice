#ifndef QDICETHREAD_H
#define QDICETHREAD_H

#include <QThread>

class QDiceThread : public QThread
{
    Q_OBJECT
private:
    int mSeq = 0;           // 投骰子次数序号
    int mDiceValue;         // 骰子点数
    bool mPaused = true;    // 暂停
    bool mStop = false;     // 停止
protected:
    void run()  Q_DECL_OVERRIDE;    // 线程任务
public:
    QDiceThread();
    void DiceBegin();   // 头一次骰子
    void DicePause();   // 暂停
    void StopThread();  // 结束线程
signals:
    void NewValue(int seq, int diceValue);  // 产生新点数的信号
};

#endif // QDICETHREAD_H
