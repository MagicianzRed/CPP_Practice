#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "dialog.h"
#include "qwdialogheaders.h"
#include "qwdialogsize.h"
#include <QMainWindow>
#include <QStandardItemModel>
#include <QItemSelectionModel>
#include <QCloseEvent>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void setACellText(int row, int column, QString text);
    void setActLocateEnable(bool enable);
    void setDlgLocateNull();


private slots:
    void on_actTabSetSize_triggered();

    void on_actTabSetHeader_triggered();

    void on_actTabLocate_triggered();

    void on_tableView_clicked(const QModelIndex &index);

private:
    void closeEvent(QCloseEvent *event);
    Dialog *dlgLocate = nullptr;
    QWDialogHeaders *dlgSetHeaders = nullptr;   // 全局的原因是因为仅初始化一次
    QStandardItemModel *theModel;       // 标准数据模型
    QItemSelectionModel *theSelction;   // 选择模型
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
