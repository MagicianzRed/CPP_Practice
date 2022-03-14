#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mypushbutton.h"
#include <QDebug>
#include <QTimer>
#include <QHBoxLayout>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 主场景配置
    // 界面固定大小
    this->setMinimumSize(200, 500);
    // 设置图标
    setWindowIcon(QIcon(":/res/Coin0001.png"));
    // 设置标题
    setWindowTitle("金币之王");

    // 退出按钮实现
    connect(ui->actiontuichu, &QAction::triggered, [=](){
        this->close();
    });
    // 创建音效
    QSound * startsound = new QSound(":/res/TapButtonSound.wav");
    // 创建开始按钮
    MyPushButton* start = new MyPushButton(":/res/MenuSceneStartButton.png");
    start->setParent(this);
    start->setGeometry(this->width() * 0.5 - start->width() * 0.5, this->height() * 0.7, 50, 50);
    start->styleSheet();
    // 创建选择关卡场景
    chooseSence = new ChooseLevelSence;

    // 监听选择关卡场景的返回按钮信号
    connect(chooseSence, &ChooseLevelSence::chooseSenceBack, this, [=](){
        this->setGeometry(chooseSence->geometry());
        chooseSence->hide();
        this->show();
    });

    // 开始按钮点击效果
    connect(start, &QPushButton::clicked, [=](){
        qDebug() << "点击了开始";

        // 播放音效
        startsound->play();
        // 做一个弹起的特效
        start->Zoom1();
        start->Zoom2();
        // 进入选择关卡的场景(延时)
        QTimer::singleShot(200, this, [=](){
            // 设置 choosescene 场景的位置
            chooseSence->setGeometry(this->geometry());
            // 自身隐藏
            this->hide();
            // 显示选择关卡的场景
            chooseSence->show();
        });

    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QPixmap pix;
    // 加载图片至主场景，拉伸满整个屏幕
    pix.load(":/res/PlayLevelSceneBg.png");
    painter.drawPixmap(0, 0, this->width(), this->height(),pix);

    // 加载标题
    pix.load(":/res/Title.png");
    //pix = pix.scaled(pix.width() * 0.5, pix.height() * 0.5);
    painter.drawPixmap(0, 0, pix);
}

