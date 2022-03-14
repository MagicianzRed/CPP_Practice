#include "widget.h"
#include <QPushButton>
#include <QDebug>
#include "ui_widget.h"
// Teacher 类
// Student 类
// 下课后老师会发出信号，饿了，学生相响应信号，请客吃饭


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    this->zt = new Teacher(this);
    this->st = new Student(this);

//    connect(zt, &Teacher::hungry, st, &Student::treat);
    // 调用下课函数
//    classisover();

    // 信号重载
    // 指针 -> 地址

    void(Teacher::*teachersingal)(QString) = &Teacher::hungry;
    void(Student::*studentsingal)(QString) = &Student::treat;

    connect(zt, teachersingal, st, studentsingal);
    //classisover();

    // 点击一个下课的按钮再触发上面的东西
    QPushButton* btn = new QPushButton("下课", this);

    this->resize(800, 600);

//    connect(btn, &QPushButton::clicked, this, &Widget::classisover);


    // 无参信号和槽函数

    void(Teacher::*teachersingal2)(void) = &Teacher::hungry;
    void(Student::*studentsingal2)(void) = &Student::treat;

    connect(zt, teachersingal2, st, studentsingal2);

    // 信号连接信号
    connect(btn, &QPushButton::clicked, zt, teachersingal2);

//    disconnect(zt, teachersingal2, st, studentsingal2);

    // 1.信号可以连接信号
    // 2.信号可以连接多个槽函数
    // 3.多个信号可以连接同一个槽函数
    // 4.信号和槽函数的参数 必须一一对应
    // 5.信号和槽函数参数个数 是不是要一致？ 信号的参数，可以多于槽函数。反之不行。

//    // [],标识一个Lambda的开始，不能省略
//    [=](){
//        btn->setText("aaaa");
//    } ();// 最后的括号表示调用 这个 Lambda函数


//    // mutable关键字 用于修饰值传递的变量，修改的是拷贝而不是本体
//    QPushButton* mybtn = new QPushButton(this);
//    QPushButton* mybtn2 = new QPushButton(this);
//    mybtn2->move(100, 100);
//    int m = 10;

//    connect(mybtn, &QPushButton::clicked, this, [m] ()mutable {m = 100 + 10; qDebug() << m;});
//    connect(mybtn2, &QPushButton::clicked, this, [=] () { qDebug() << m;});

//    qDebug() << m;

//    int ret = []()->int {return 1000;}();
//    qDebug() << ret;

    QPushButton* btn2 = new QPushButton(this);
    btn2->move(200,0);
    btn2->setText("关闭");
    connect(btn2, &QPushButton::clicked, this, [=](){
//            emit zt->hungry("汉堡");
//            this->close();
            btn2->setText("aaaa");
    });
}

void Widget::classisover()
{
    // 下课后出发出发老师饿了的信号
    //emit zt->hungry();
    emit zt->hungry("汉堡");
}

Widget::~Widget()
{
    delete ui;
}

