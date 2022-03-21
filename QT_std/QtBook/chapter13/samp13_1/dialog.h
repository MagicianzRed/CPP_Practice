#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QTimer>

#include "qdicethread.h"
QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_btnStart_clicked();
    // 自定义槽函数
    void on_threadA_start();
    void on_threadA_finished();
    void on_threadA_newValue(int seq, int diceValue);

    void on_btnStop_clicked();

    void on_btnThreadFinishA_clicked();

    void on_btnThreadStartA_clicked();

    void on_TimeOut();
private:
    int mSeq, mDiceValue;
    QDiceThread threadA;
    QTimer mTimer;  // 定时器
    Ui::Dialog *ui;
protected:
    void closeEvent(QCloseEvent *event);
};
#endif // DIALOG_H
