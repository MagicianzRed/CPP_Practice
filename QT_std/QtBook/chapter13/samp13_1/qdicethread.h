#ifndef QDICETHREAD_H
#define QDICETHREAD_H

#include <QThread>
#include <QMutex>

/*线程同步概念（自我理解）见书本（QT 368）：
 * 当有多个线程存在时 且 线程之间可能需要访问同一个变量
 * 或者说一个线程需要等待另外一个线程完成某个操作之后才能产生相应的动作
 * 我们不期望出现，线程之间访问同一个变量后结果出现混乱 以及 其中某个线程被打断的现象
 * 于是我们为了保证这些 计算结果的完整性 ，提出了线程同步的概念。
*/
class QDiceThread : public QThread
{
    Q_OBJECT
private:
    /*基于互斥量的线程同步，接下来将不使用信号与槽的机制
     * 提供一个函数用于主线程读取数据（使用信号与槽的版本见（e9984b1））
    */
    QMutex mutex;           // 互斥量
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
    bool ReadValue(int *seq, int *diceValue);   // 用于主线程读取数据的函数
signals:
    void NewValue(int seq, int diceValue);  // 产生新点数的信号
};

#endif // QDICETHREAD_H
