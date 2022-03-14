#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // QTableWidget控件
    // 设置列数
    ui->tableWidget->setColumnCount(3);

    // 设置水平表头
    ui->tableWidget->setHorizontalHeaderLabels(QStringList() << "姓名" << "性别" << "年龄");

    // 设置行数
    ui->tableWidget->setRowCount(5);

    // 设置正文
//    ui->tableWidget->setItem(0,0, new QTableWidgetItem("杰兰特"));
    QStringList namelist;
    namelist << "贝思科德" << "阿尔杰塔" << "阿依夏" << "巴尔纳" << "提尔";

    QList<QString> sexlist;
    sexlist << "男" << "女" << "女" << "男" << "女";

    for(int i = 0; i < 5; i++)
    {
        int col = 0;
        ui->tableWidget->setItem(i,col++, new QTableWidgetItem(namelist[i]));
        ui->tableWidget->setItem(i,col++, new QTableWidgetItem(sexlist.at(i))); // 超出界限抛出异常
        // int 转 QString
        ui->tableWidget->setItem(i,col++, new QTableWidgetItem(QString::number(i+18)));
    }
}

Widget::~Widget()
{
    delete ui;
}

