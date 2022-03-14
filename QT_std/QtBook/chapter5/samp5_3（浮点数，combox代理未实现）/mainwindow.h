#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QStandardItemModel>
#include <QItemSelectionModel>
#include <QAbstractItemView>
#include <QFileDialog>
#include <QTextStream>
#include "qwintspindelegate.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE
#define FIXED_COLUMN_COUNT 6
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    QLabel *labCurFile;     // 当前文件
    QLabel *labeCellPos;    // 当前单元格行列号
    QLabel *labeCellText;   // 当前单元格内容
    QStandardItemModel *theModel;           // 数据模型
    QItemSelectionModel *theSelectModel;    // 选择模型
    void iniModelFormStringList(QStringList& ); // 从QStringList初始化数据
    QWIntSpinDelegate intSpinDelegate;  // 整型数

    Ui::MainWindow *ui;
private slots:
    void on_currentChanged(const QModelIndex &current, const QModelIndex &previos);

    void on_actOpen_triggered();
    void on_actAppend_triggered();
    void on_actDelete_triggered();
    void on_actAlignLeft_triggered();

    void on_actFontBold_triggered(bool checked);
    void on_actSave_triggered();
};
#endif // MAINWINDOW_H
