#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // treeWidget树控件使用
    // 水平头
    ui->treeWidget->setHeaderLabels(QStringList() << "英雄" << "英雄介绍");

   QTreeWidgetItem* Poweritem = new QTreeWidgetItem(QStringList() << "力量");
   QTreeWidgetItem* sharpitem = new QTreeWidgetItem(QStringList() << "敏捷");
   QTreeWidgetItem* intitem = new QTreeWidgetItem(QStringList() << "智力");
    // 加载顶层节点
   ui->treeWidget->addTopLevelItem(Poweritem);
   ui->treeWidget->addTopLevelItem(sharpitem);
   ui->treeWidget->addTopLevelItem(intitem);

   // 追加子节点
   QStringList Character1;
   Character1 << "战士" << "使用双手剑、战锤、斧头与敌人进行搏杀的近战职业";
   QTreeWidgetItem* zhanitem = new QTreeWidgetItem(Character1);
   Poweritem->addChild(zhanitem);
}

Widget::~Widget()
{
    delete ui;
}

