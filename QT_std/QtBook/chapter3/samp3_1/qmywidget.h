#ifndef QMYWIDGET_H
#define QMYWIDGET_H

#include <QWidget>
#include <QString>
#include <QMetaProperty>
#include "qperson.h"
QT_BEGIN_NAMESPACE
namespace Ui { class QmyWidget; }
QT_END_NAMESPACE

class QmyWidget : public QWidget
{
    Q_OBJECT

public:
    QmyWidget(QWidget *parent = nullptr);
    ~QmyWidget();

private:
    QPerson *boy;
    QPerson *girl;
    Ui::QmyWidget *ui;
private slots:
    // 自定义槽函数
    void on_ageChanged(int value);
    void on_spin_valueChanged(int argl);
    // 界面按钮槽函数
    void on_btnBoyInc_clicked();
    void on_btnClassInfo_clicked();
};
#endif // QMYWIDGET_H
