#include "qhmainwindow.h"
#include "ui_qhmainwindow.h"
#include "myformdoc.h"
#include <QDir>
#include <QFileDialog>

/*Multi-document Interface*/
QHMainWindow::QHMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QHMainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->mdiArea);       // 将组件居中
    this->setWindowState(Qt::WindowMaximized); // 设置窗口大小
    ui->toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);   // 设置工具栏显示方式
}

QHMainWindow::~QHMainWindow()
{
    delete ui;
}

void QHMainWindow::on_actDocNew_triggered()
{
    // 新建文档
    MyFormDoc *formDoc = new MyFormDoc(this);
    ui->mdiArea->addSubWindow(formDoc);     // 文档窗口添加到 MDI
    formDoc->show();
}


void QHMainWindow::on_actDocOpen_triggered()
{
    // 打开文件
    bool needNew = false;   // 新建窗口标志
    MyFormDoc *formDoc;
    /*获取当前活动窗口，去查看 activeSubWindow() 的函数注释*/
    if (ui->mdiArea->subWindowList().count() > 0)
    {
        formDoc = static_cast<MyFormDoc*>(ui->mdiArea->activeSubWindow()->widget());    // 为活动窗口初始化
        needNew = formDoc->isFileOpened();  // 检查是否有文件被打开
    }
    else
    {
        needNew = true;
    }
    /*获取文件信息*/
    QString curPath = QDir::currentPath();
    QString aFileName = QFileDialog::getOpenFileName(this, "打开一个文件",
                                                     curPath, "C类型程序文件(*.h *cpp);;所有文件(*.*)");
    /*检查文件信息是否为空*/
    if (aFileName.isEmpty())
    {
        return;
    }
    /*如果没有窗口，则新建一个窗口*/
    if (needNew)
    {
        formDoc = new MyFormDoc(this);      // 没有窗口则为自己创建堆
        ui->mdiArea->addSubWindow(formDoc);
    }
    formDoc->loadFromFile(aFileName);
    formDoc->show();
}


void QHMainWindow::on_actCascade_triggered()
{
    // 窗口级联展开
    ui->mdiArea->cascadeSubWindows();
}


void QHMainWindow::on_actTile_triggered()
{
    // 窗口平铺展开
    ui->mdiArea->tileSubWindows();
}


void QHMainWindow::on_actCloseALL_triggered()
{
    // 关闭所有子窗口
    ui->mdiArea->closeAllSubWindows();
}



void QHMainWindow::on_actViewMode_triggered(bool checked)
{
    if (checked)    // Tab 多页模式
    {
        ui->mdiArea->setViewMode(QMdiArea::TabbedView); // Tab 多页模式
        ui->mdiArea->setTabsClosable(true);             // 页面可关闭
        ui->actCascade->setEnabled(false);              // 关闭级联展开
        ui->actTile->setEnabled(false);                 // 关闭平铺展开
    }
    else
    {
        ui->mdiArea->setViewMode(QMdiArea::SubWindowView);
        ui->actCascade->setEnabled(true);
        ui->actTile->setEnabled(true);
    }
}



/*在当前活动窗口切换时，发射信号，利用此信号可以在活动窗口切换的时候进行一些处理
 * 例如：在状态栏显示活动的MDI子窗口的文件名。
 *      在没有子窗口的时候，将工具栏上面的编辑按钮禁用
*/
void QHMainWindow::on_mdiArea_subWindowActivated(QMdiSubWindow *arg1)
{
    // 当前活动子窗口切换的时候

    // 如果子窗口个数为0
    if (ui->mdiArea->subWindowList().count() == 0)
    {
        ui->statusbar->clearMessage();
    }
    else
    {
        QMdiSubWindow *myMDI = ui->mdiArea->activeSubWindow();
        MyFormDoc *formDoc = static_cast<MyFormDoc*>(myMDI->widget());
        ui->statusbar->showMessage(formDoc->currentFileName());
    }
}

