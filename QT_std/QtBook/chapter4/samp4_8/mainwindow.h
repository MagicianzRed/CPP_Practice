#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QPixmap>
#include <QTreeWidgetItem>
#include <QFileDialog>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actAddFolder_triggered();

    void on_actAddFiles_triggered();

    void on_treeWidget_currentItemChanged(QTreeWidgetItem *current, QTreeWidgetItem *previous);

    void on_actDeleteItem_triggered();

    void on_actScanItems_triggered();

    void on_actZoomFitH_triggered();

    void on_actZoomMin_triggered();

    void on_actZoomReealSize_triggered();


    void on_actDockVisibel_triggered(bool checked);

    void on_actDockFloat_triggered(bool checked);

    void on_dockWidget_3_visibilityChanged(bool visible);

    void on_dockWidget_3_topLevelChanged(bool topLevel);

private:
    // 枚举类型 treeItemType, 创建节点时候用作 type参数，自定义类型必须大于 1000
    enum treeItemType{itTopItem = 1001, itGroupItem, itImageItem};
    enum treeColNum{colItem = 0, colItemType = 1};                  // 目录树列的编号
    QLabel *labFileName;   // 用于状态栏文件名显示
    QPixmap curPixMap;     // 当前的图片
    float   pixRatio;      // 当前图片缩放比例

    void IniTree();        // 目录树初始化
    void AddFolderItem(QTreeWidgetItem* parItem, QString dirName);  // 添加目录
    QString GetFinalFolderName(const QString &fullPathName);        // 提取目录名称
    void AddImageItem(QTreeWidgetItem *parItemm, QString aFileName);// 添加图片
    void DisplayImage(QTreeWidgetItem *item);                       // 显示一个图片节点的图片
    void changeItemCaption(QTreeWidgetItem *item);                  // 遍历改变节点标题
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
