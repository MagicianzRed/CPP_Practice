#ifndef QWDIALOGSIZE_H
#define QWDIALOGSIZE_H

#include <QDialog>
#include <QMessageBox>

namespace Ui {
class QWDialogSize;
}

class QWDialogSize : public QDialog
{
    Q_OBJECT

public:
    explicit QWDialogSize(QWidget *parent = nullptr);
    ~QWDialogSize();

    int  rowCount();     // 返回对话框输入的行数
    int  columnCount();  // 返回对话框输入的列数
    void setRowColum(int row, int column);  // 初始对话框上两个 SpinBox 的值

private:
    Ui::QWDialogSize *ui;
};

#endif // QWDIALOGSIZE_H
