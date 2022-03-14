#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();
    void setSpinRange(int rowCount, int colCount);  // 设置最大值
    void setSpinValue(int rowNo, int colNo);        // 设置初始值
private slots:
    void on_btnSetText_clicked();

private:
    void closeEvent(QCloseEvent *event);
    Ui::Dialog *ui;
};

#endif // DIALOG_H
