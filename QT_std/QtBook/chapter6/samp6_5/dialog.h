#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QMouseEvent>

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private:
    bool m_moving = false;          // 表示窗口
    QPoint m_lastPos;               // 上一次的鼠标位置
    QString m_user = "Wudi";        // 初始化用户名
    QString m_pswd = "as145768";    // 初始化密码
    int m_tryCout = 3;              // 试错次数

    void ReadSettings();            // 读取设置，注册表
    void WriteSettings();           // 写入设置，注册表
    QString Encrtpt(const QString& str);    //字符串加密
    Ui::Dialog *ui;

protected:
// 用于鼠标拖动窗口的鼠标事件
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);



private slots:
    void on_pushButtonOk_clicked();
};
#endif // DIALOG_H
