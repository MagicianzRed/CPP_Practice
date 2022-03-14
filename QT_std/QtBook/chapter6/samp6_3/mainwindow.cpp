#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qformdoc.h"
#include <QPainter>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    ui->tabWidget->setVisible(false);
    ui->tabWidget->clear();   // 清除所有页面
    ui->tabWidget->setTabsClosable(true);   // Page有关闭按钮可以被关闭
    this->setCentralWidget(ui->tabWidget);
    this->setWindowState(Qt::WindowMaximized);  // 最大化显示
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter painter(this);
    painter.drawPixmap(0, ui->mainToolBar->height(),this->width(),
                       this->height() - ui->mainToolBar->height() - ui->statusbar->height(),
                       QPixmap(":/ScreenShot/2022116102642.png"));
}


void MainWindow::on_actWidgetInsite_triggered()
{
    // 创建 QFormDoc 窗体，并在 tabWidget 中显示
    QFormDoc *formDoc = new QFormDoc(this);
    formDoc->setAttribute(Qt::WA_DeleteOnClose);    // 关闭时自动删除
    int cur = ui->tabWidget->addTab(formDoc,
                                    QString::asprintf("Doc %d", ui->tabWidget->count()));
    /*退出时隐藏 tabWidget */
    connect(formDoc, &QFormDoc::TabWidgetShow, this, [=](bool result){
        ui->tabWidget->setVisible(result);
    });
    ui->tabWidget->setCurrentIndex(cur);
    ui->tabWidget->setVisible(true);
}



void MainWindow::on_actWidget_triggered()
{
    QFormDoc *formDoc = new QFormDoc(); // 指定父窗口的时候，不会在 Windows 下面显示
    formDoc->setAttribute(Qt::WA_DeleteOnClose);
    formDoc->setWindowTitle("基于 QWidget 的窗体，无父窗口，关闭时删除");

    formDoc->setWindowFlag(Qt::Window, true);
//    formDoc->setWindowFlag(Qt::CustomizeWindowHint, true);
//    formDoc->setWindowFlag(Qt::WindowCloseButtonHint, true);
//    formDoc->setWindowFlag(Qt::WindowStaysOnTopHint, true);
    formDoc->setWindowOpacity(0.9);
    formDoc->setWindowModality(Qt::WindowModal);
    formDoc->show();    // 在单独的窗口中显示
}

