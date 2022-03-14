#include "widget.h"
#include "ui_widget.h"
#include <QIcon>
#include <QTextBlock>
#include <QMenu>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_btnIniTtems_clicked()
{
    QIcon icon;
    icon.addFile(":/image/20.png");
    ui->comboBox->clear();
    for (int i = 0; i < 20; i++)
    {
        ui->comboBox->addItem(icon, QString::asprintf("Item %d", i + 1));   //带图片
    }
}


void Widget::on_btnIni2_clicked()
{
    QMap<QString, int> cityZone;
    cityZone.insert("北京", 10);
    cityZone.insert("天津", 21);
    cityZone.insert("大连", 22);
    cityZone.insert("赛博坦", 422);
    cityZone.insert("M78星云", 146);
    cityZone.insert("阿斯加德", 456);
    ui->comboBox_2->clear();
    foreach(const QString &str, cityZone.keys())
    {
        ui->comboBox_2->addItem(str, cityZone.value(str));
    }

}




void Widget::on_comboBox_currentTextChanged(const QString &arg1)
{
    ui->plainTextEdit->appendPlainText(arg1);
}


void Widget::on_comboBox_2_currentTextChanged(const QString &arg1)
{
    QString zone = ui->comboBox_2->currentData().toString();    // 项关联数据
    ui->plainTextEdit->appendPlainText(arg1+":区号="+zone);
}


void Widget::on_btnToComboBox_clicked()
{
    // plainTextEdit  的内容逐行添加为 comboBox 的项
    QTextDocument* doc = ui->plainTextEdit->document(); // 文本对象
    int cnt = doc->blockCount();
    QIcon icon(":/image/20.png");
    ui->comboBox->clear();
    for (int i = 0; i < cnt; i++)
    {
        QTextBlock textLine = doc->findBlockByLineNumber(i);    // 文本中的一段
        QString str = textLine.text();
        ui->comboBox->addItem(icon, str);
    }
}


void Widget::on_plainTextEdit_customContextMenuRequested(const QPoint &pos)
{
    QMenu* menu = ui->plainTextEdit->createStandardContextMenu();
    menu->exec(pos);
}

