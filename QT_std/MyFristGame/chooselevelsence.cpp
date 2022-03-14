#include "chooselevelsence.h"
#include <QMenuBar>
#include <QDebug>
#include <QLabel>
#include "mypushbutton.h"
ChooseLevelSence::ChooseLevelSence(QWidget *parent) : QMainWindow(parent)
{
    // 选择关卡景配置
    // 界面固定大小
    this->setFixedSize(500, 1000);
    // 设置图标
    setWindowIcon(QIcon(":/res/Coin0001.png"));
    // 设置标题
    setWindowTitle("选择关卡");

    // 创建菜单栏
    QMenuBar * Bar = menuBar();
    setMenuBar(Bar);

    // 创建开始菜单
    QMenu* startMenu = Bar->addMenu("开始");

    QAction* endMenu = startMenu->addAction("退出");

    connect(endMenu, &QAction::triggered, [=](){
        this->close();
    });

    // 创建返回按钮
    MyPushButton* backbtn = new MyPushButton(":/res/BackButton.png", ":/res/BackButtonSelected.png");
    backbtn->setParent(this);
    backbtn->move(this->width() - backbtn->width(), this->height() - backbtn->height());

    // 创建选择关卡音效
    QSound* choosesound = new QSound(":/res/TapButtonSound.wav");
    // 创建退出音效
    QSound* backsound = new QSound(":/res/BackButtonSound.wav");

    // 点击返回
    connect(backbtn, &QPushButton::clicked, [=](){
        qDebug() << "点击返回";
        backsound->play();
        // 告诉主场景我返回了，主场景监听ChooseLevelSence的返回类型
        emit this->chooseSenceBack();
    });


    // 创建关卡按钮
    for (int i = 0; i < 20; i++)
    {
        MyPushButton* menubtn  = new MyPushButton(":/res/LevelIcon.png");
        menubtn->setParent(this);
        menubtn->move(90 + i%4 * 90, 300 + i/4 * 100); // 认真思考一下为什么 这里为什么画出了矩阵

        // 监听每个按钮点击事件
        connect(menubtn, &QPushButton::clicked, [=](){
            QString str = QString("选择第 %1 关").arg(i + 1);
            qDebug() << str;
            // 播放音效
            choosesound->play();

            // 进入游戏场景
            this->hide();
            play = new PlaySence(i + 1);
            play->show();
            // 设置游戏场景初始位置
            play->setGeometry(this->geometry());
            // 监听选择关卡场景的返回按钮信号
            connect(play, &PlaySence::playsceneback, this, [=](){
                // 延时返回
                QTimer::singleShot(200, this, [=](){
                    play->hide();
                    this->show();
                    delete play;
                    play = nullptr;
                });
            });
        });
        QLabel* label = new QLabel;
        label->setParent(this);
        label->setFixedSize(menubtn->width(), menubtn->height());
        label->setText(QString::number(i+1));
        label->move(90 + i%4 * 90, 300 + i/4 * 100);

        // 设置文字对其方式
        label->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        // 设置鼠标穿透  51号
        label->setAttribute(Qt::WA_TransparentForMouseEvents);
    }


}

void ChooseLevelSence::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QPixmap pix;
    // 加载图片至主场景，拉伸满整个屏幕
    pix.load(":/res/OtherSceneBg.png");
    painter.drawPixmap(0, 0, this->width(), this->height(),pix);

    // 加载标题
    pix.load(":/res/Title.png");
    //pix = pix.scaled(pix.width() * 0.5, pix.height() * 0.5);
    painter.drawPixmap((this->width() - pix.width()) * 0.5, 30, pix.width(),pix.height(), pix);
}
