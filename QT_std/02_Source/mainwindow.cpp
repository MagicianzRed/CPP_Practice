#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //ui->actionnew->setIcon(QIcon("D:/GAME_yuanshen/Genshin Impact Game/ScreenShot/202161317938.png"));

    // 使用添加Qt资源 "：+ 前缀名 + 文件名  "
    ui->actionnew->setIcon(QIcon("://ScreenShot/202161317938.png"));
    ui->actionopen->setIcon(QIcon("://ScreenShot/2021616202827.png"));

}

MainWindow::~MainWindow()
{
    delete ui;
}

