#include "widget.h"
#include "ui_widget.h"
#include <QFileDialog>
#include <QFile>
#include <QFileInfo>
#include <QDebug>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // 点击文件按钮，弹出文件对话框

    connect(ui->pushButton, &QPushButton::clicked, [=](){
       QString path = QFileDialog::getOpenFileName(this, "打开文件","C:\\Users\\Hu\\Desktop");
       // 将路径放入到lineEdit中
       ui->lineEdit->setText(path);

       // 读取的内容 放入到 textEdit中
        QFile flie(path);   // 参数就是读取文件路径
        // 设置打开方式
        flie.open(QIODevice::ReadOnly);
        QByteArray array = flie.readAll();
        ui->textEdit->setText(array);

        flie.close();

        // 进行写文件
//        flie.open(QIODevice::Append);
//        flie.write("嗷嗷嗷啊");
//        flie.close();

        // 读取文件信息
        // QFileinfo 文件信息类
        QFileInfo info(path);

    });
}

Widget::~Widget()
{
    delete ui;
}

