#include "playsence.h"
#include <QDebug>
#include <QMenuBar>
#include <QLabel>
#include <QPropertyAnimation>
#include "mycoin.h"
#include "dataconfig.h"
PlaySence::PlaySence(int levelnum)
{
    QString str = QString("第 %1 关").arg(levelnum);
    qDebug() << str;
    this->levelindex = levelnum;

    // 初始化游戏场景
    // 界面固定大小
    this->setFixedSize(800, 600);
    // 设置图标
    setWindowIcon(QIcon(":/res/Coin0001.png"));
    // 设置标题
    setWindowTitle(str);

    // 创建菜单栏
    QMenuBar * Bar = menuBar();
    setMenuBar(Bar);

    // 创建开始菜单
    QMenu* startMenu = Bar->addMenu("开始");

    QAction* endMenu = startMenu->addAction("退出");

    connect(endMenu, &QAction::triggered, [=](){
        this->close();
    });
    // 创建退出音效
    QSound* backsound = new QSound(":/res/BackButtonSound.wav");

    // 创建翻金币音效
    QSound* coinsound = new QSound(":/res/ConFlipSound.wav");

    // 创建胜利音效
    QSound* winsound = new QSound(":/res/LevelWinSound.wav");
    // 创建返回按钮
    MyPushButton* backbtn = new MyPushButton(":/res/BackButton.png", ":/res/BackButtonSelected.png");
    backbtn->setParent(this);
    backbtn->move(this->width() - backbtn->width(), this->height() - backbtn->height());

    // 点击返回
    connect(backbtn, &QPushButton::clicked, [=](){
        qDebug() << "点击返回";
        backsound->play();
        // 告诉选择关卡场景我返回了，主场景监听playsceneback的返回类型
        emit this->playsceneback();
    });

    // 显示关卡数
    QLabel* label = new QLabel;
    label->setParent(this);
    QFont font;
    font.setFamily("华文新魏");
    font.setPointSize(20);
    // 将字体设置到标签控中
    label->setFont(font);
    QString str1 = QString("Level: %1").arg(this->levelindex);
    label->setText(str1);
    label->setGeometry(20, this->height() - 50, 200, 50);

    // 创建胜利的图片
    QLabel* winlabel = new QLabel;
    QPixmap tempix;
    tempix.load(":/res/LevelCompletedDialogBg.png");
    winlabel->setGeometry(0, 0, tempix.width(), tempix.height());
    winlabel->setPixmap(tempix);
    winlabel->setParent(this);
    winlabel->move((this->width() - tempix.width()) * 0.5, -(tempix.height() + 30));

    dataConfig conFig;
    // 初始化每个关卡的二位数组
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
             this->gameArray[i][j] = conFig.mData[this->levelindex][i][j];
        }
    }
    // 显示金币背景图案
    for(int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
               QPixmap pix = QPixmap(":/res/BoardNode(1).png");
               QLabel* label = new QLabel;
               label->setPixmap(pix);
               label->setGeometry(0, 0, pix.width(), pix.height());
               label->setParent(this);
               label->move(100 + i*50, 200 + j*50);

               // 创建金币
               QString str2;
               if (this->gameArray[i][j] == 1)
               {
                    str2 = ":/res/Coin0001.png";
               }
               else
               {
                    str2 = ":/res/Coin0008.png";
               }
               MyCoin* coin = new MyCoin(str2);
               coin->setParent(this);
               coin->move(102 + i*50, 204 + j*50);

               // 赋予每个金币属性
               coin->pox = i;
               coin->poy = j;
               coin->flag = this->gameArray[i][j];  // 1 金币，0 银币

               // 将金币放入 金币二维数组 以便以后维护
               coinbtn[i][j] = coin;

               // 点击金币进行翻转
               connect(coin, &MyCoin::clicked, [=](){
                   // 翻金币声音
                   coinsound->play();
                   // 翻转标志
                   coin->changeFlag();
                   // 维护每个关卡的数据
                   this->gameArray[i][j] = this->gameArray[i][j] = 0 ? 1 : 0;

                   // 反转周围的硬币，延时反转
                   QTimer::singleShot(300, this, [=](){
                       // 右侧硬币
                       if (coin->pox + 1 <= 3)
                       {
                           coinbtn[coin->pox + 1][coin->poy]->changeFlag();
                           // 维护每个金币
                           this->gameArray[coin->pox + 1][coin->poy] = this->gameArray[coin->pox + 1][coin->poy] = 0 ? 1 : 0;
                       }
                       // 左侧硬币
                       if (coin->pox - 1 >= 0)
                       {
                           coinbtn[coin->pox - 1][coin->poy]->changeFlag();
                           // 维护每个金币
                           this->gameArray[coin->pox - 1][coin->poy] = this->gameArray[coin->pox - 1][coin->poy] = 0 ? 1 : 0;
                       }
                       // 上侧硬币
                       if (coin->poy + 1 <= 3)
                       {
                           coinbtn[coin->pox][coin->poy + 1]->changeFlag();
                           // 维护每个金币
                           this->gameArray[coin->pox][coin->poy + 1] = this->gameArray[coin->pox][coin->poy + 1] = 0 ? 1 : 0;
                       }
                       // 下侧硬币
                       if (coin->poy - 1 >= 0)
                       {
                           coinbtn[coin->pox][coin->poy - 1]->changeFlag();
                           // 维护每个金币
                           this->gameArray[coin->pox][coin->poy - 1] = this->gameArray[coin->pox][coin->poy - 1] = 0 ? 1 : 0;
                       }
                       // 胜利判断
                       this->isWin = true;
                       for (int i = 0; i < 4; i++)
                       {
                           for (int j = 0; j < 4; j++)
                           {
                               if (coinbtn[i][j]->flag == false)
                               {
                                   this->isWin = false;
                                   break;
                               }
                           }
                       }
                       if (this->isWin == true)
                       {
                           winsound->play();
                            qDebug() << "胜利！";
                            for (int i = 0; i < 4; i++)
                            {
                                for (int j = 0; j < 4; j++)
                                {
                                     coinbtn[i][j]->isWin = true;
                                }
                            }
                            //落下胜利的图片
                            QPropertyAnimation * animation = new QPropertyAnimation(winlabel, "geometry");
                            // 设置动画时间间隔
                            animation->setDuration(200);

                            // 起始位置
                            animation->setStartValue(QRect(winlabel->x(), winlabel->y(), winlabel->width(), winlabel->height()));
                            // 结束位置
                            animation->setEndValue(QRect(winlabel->x(), winlabel->y() + 220, winlabel->width(), winlabel->height()));

                            // 设置弹跳曲线
                            animation->setEasingCurve(QEasingCurve::OutBounce);

                            animation->start();
                       }

                   });
               });


        }
    }

}

void PlaySence::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QPixmap pix;
    // 加载图片至主场景，拉伸满整个屏幕
    pix.load(":/res/OtherSceneBg.png");
    painter.drawPixmap(0, 0, this->width(), this->height(),pix);

    // 加载标题
    pix.load(":/res/Title.png");
    pix = pix.scaled(pix.width() * 0.8, pix.height() * 0.8);
    painter.drawPixmap((this->width() - pix.width()) * 0.1, 30, pix.width(),pix.height(), pix);
}
