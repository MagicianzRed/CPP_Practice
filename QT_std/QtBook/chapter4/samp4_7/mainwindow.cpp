#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMenu>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    SetActionsForButton();
    CreateSelectionPopMenu();
    ui->listWidget->setContextMenuPolicy(Qt::CustomContextMenu);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actListIni_triggered()
{
    QListWidgetItem *aItem;         // 每一行是一个QListWidgetItem
    QIcon aIcon;
    aIcon.addFile(":/res/2021_11_13_0001.png");
    bool chk = ui->chkBoxListEditable->isChecked(); //是否可编辑

    ui->listWidget->clear();
    for (int i = 0; i < 10; i++)
    {
        QString str = QString::asprintf("Item %d", i);
        aItem = new QListWidgetItem();
        aItem->setIcon(aIcon);
        aItem->setCheckState(Qt::Checked);
        if (chk)
        {
            aItem->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEditable |
                            Qt::ItemIsUserCheckable | Qt::ItemIsEnabled);
        }
        else
        {
            aItem->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable
                            | Qt::ItemIsEnabled);
        }
        ui->listWidget->addItem(aItem);
    }
}


void MainWindow::on_actListInsert_triggered()
{
    QIcon aIcon;
    aIcon.addFile(":/res/2021_12_02_0017.png");
    bool chk = ui->chkBoxListEditable->isChecked(); //是否可编辑

    QListWidgetItem *aItem = new QListWidgetItem("New Inserted Item");
    aItem->setIcon(aIcon);
    aItem->setCheckState(Qt::Checked);
    if (chk)
    {
        aItem->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEditable |
                        Qt::ItemIsUserCheckable | Qt::ItemIsEnabled);
    }
    else
    {
        aItem->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable
                        | Qt::ItemIsEnabled);
    }
    ui->listWidget->insertItem(ui->listWidget->currentRow(), aItem);
}


void MainWindow::on_actListDelete_triggered()
{
    // 删除当前项
    int cut = ui->listWidget->currentRow();
    QListWidgetItem *aItem = ui->listWidget->takeItem(cut);
    delete aItem;
}


void MainWindow::on_listWidget_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous)
{
    // listWidget 当前选项发生变化
    QString str;
    if (current != NULL)
    {
        if (previous == NULL)
        {
            str = "当前项：" + current->text();
        }
        else
        {
            str = "前一项：" + previous->text() + "; 当前项：" + current->text();
        }
        ui->lineEdit->setText(str);
    }
}


void MainWindow::on_actSelAll_triggered()
{
    // 全选
    int cnt = ui->listWidget->count();  // 个数
    for (int i = 0; i < cnt; i++)
    {
        QListWidgetItem *aItem = ui->listWidget->item(i);
        aItem->setCheckState(Qt::Checked);
    }
}

void MainWindow::SetActionsForButton()
{
    // 为QToolButton按钮设置Action
    ui->tBtnListIni->setDefaultAction(ui->actListIni);
    ui->tBtnListClear->setDefaultAction(ui->actListClear);
    ui->tBtnListInsert->setDefaultAction(ui->actListInsert);
    ui->tBtnListDelete->setDefaultAction(ui->actListDelete);

    ui->tBtnSelAll->setDefaultAction(ui->actSelAll);

}

void MainWindow::CreateSelectionPopMenu()
{
    // 创建下拉菜单
    QMenu *menuSelection = new QMenu(this);     // 创建弹出式菜单
    menuSelection->addAction(ui->actSelAll);
    menuSelection->addAction(ui->actSelNone);
    menuSelection->addAction(ui->actSelInvs);

    // listWidget 上方 tBtnSelectItem 按钮
    ui->tBtnSelectItem->setPopupMode(QToolButton::MenuButtonPopup);
    ui->tBtnSelectItem->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    ui->tBtnSelectItem->setDefaultAction(ui->actSelPopMenu);
    ui->tBtnSelectItem->setMenu(menuSelection);     //设置下拉菜单栏目
}


void MainWindow::on_listWidget_customContextMenuRequested(const QPoint &pos)
{
    Q_UNUSED(pos);
    QMenu *menuList = new QMenu(this);
    // 添加 Actions 创建菜单项目
    menuList->addAction(ui->actListIni);
    menuList->addAction(ui->actListClear);
    menuList->addAction(ui->actListInsert);
    menuList->addAction(ui->actListAppend);
    menuList->addAction(ui->actListDelete);
    menuList->addSeparator();
    menuList->addAction(ui->actSelAll);
    menuList->addAction(ui->actSelNone);
    menuList->addAction(ui->actSelInvs);
    menuList->exec(QCursor::pos());
    delete menuList;
}

