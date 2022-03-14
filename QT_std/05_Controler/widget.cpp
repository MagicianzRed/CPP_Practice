#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // 默认男生被选中
    ui->radioButtonMan->setChecked(true);
    // 选中女生后打印信息
    connect(ui->radioButtonWoman, &QRadioButton::clicked, [=](){
        qDebug() << "选中女生了";
    });\

    // 多选按钮 2是选中，0是未选，1半选
    connect(ui->cBox, &QCheckBox::stateChanged, [=](int state){
        qDebug() <<state;
    });

    // 用QListWidgetItem写诗
//    QListWidgetItem* Item = new QListWidgetItem("锄禾日当午");
    // 将第一行诗词放入到 QListWidgetItem
//    ui->listWidget->addItem(Item);

//    Item->setTextAlignment(Qt::AlignHCenter);
    // QStringList Qlist<Qstring>
    QStringList list;
    list << "仰天大笑出门去" << "我辈岂是蓬蒿人？";
    ui->listWidget->addItems(list);

}

Widget::~Widget()
{
    delete ui;
}

