#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QStringList theStrList;
    theStrList << "北京" << "上海" << "天津" << "河北" << "湖南" << "山东" << "四川" << "吉林";
    theModel = new QStringListModel(this);
    theModel->setStringList(theStrList);
    ui->listView->setModel(theModel);
    ui->listView->setEditTriggers(QAbstractItemView::DoubleClicked |
                                  QAbstractItemView::SelectedClicked);// 在选中后双击
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_btnListAppend_clicked()
{
    // 添加一行
    theModel->insertRow(theModel->rowCount()); // 在尾部插入一行空行
    QModelIndex index = theModel->index(theModel->rowCount() - 1, 0);
    ui->listView->setCurrentIndex(index);
}


void Widget::on_btnListInsert_clicked()
{
    // 插入一行
    QModelIndex index = ui->listView->currentIndex();
    theModel->insertRow(index.row());
    theModel->setData(index, "新来的", Qt::DisplayRole);
    ui->listView->setCurrentIndex(index);
}


void Widget::on_btnListDelete_clicked()
{
    // 删除当前项
    QModelIndex index = ui->listView->currentIndex();
    theModel->removeRow(index.row());
}


void Widget::on_btnListClear_clicked()
{
    // 删除列表
    theModel->removeRows(0, theModel->rowCount());
}


void Widget::on_btnTextImport_clicked()
{
    // 显示数据模型的 StringList
    QStringList tmpList = theModel->stringList();
    ui->plainTextEdit->clear();
    for (int i = 0; i < tmpList.count(); i++)
    {
        ui->plainTextEdit->appendPlainText(tmpList.at(i));
    }
}

