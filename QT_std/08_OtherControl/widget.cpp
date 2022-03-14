#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // 栈控件的使用

    //默认定位到 btn_ScorllArea
    ui->stackedWidget->setCurrentIndex(0);

    connect(ui->btn_ScorllArea, &QPushButton::clicked, [=](){
            ui->stackedWidget->setCurrentIndex(0);
    });

    connect(ui->btn_TabWidget, &QPushButton::clicked, [=](){
            ui->stackedWidget->setCurrentIndex(1);
    });

    connect(ui->btn_ToolBox, &QPushButton::clicked, [=](){
            ui->stackedWidget->setCurrentIndex(2);
    });

    // 下拉框
    ui->comboBox->addItem("大剑");
    ui->comboBox->addItem("太刀");
    ui->comboBox->addItem("盾斧");

    connect(ui->pushButton_9, &QPushButton::clicked, [=](){
//        ui->comboBox->setCurrentIndex(2);
        ui->comboBox->setCurrentText("盾斧");
    });
}

Widget::~Widget()
{
    delete ui;
}

