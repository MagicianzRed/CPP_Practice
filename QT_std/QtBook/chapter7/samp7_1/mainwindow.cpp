#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QDir>
#include <QFileDialog>
#include <QTextStream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->tabWidget);
    /*初始化文本框*/
    ui->tabWidget->setGeometry(0,0,this->width(), this->height());
    ui->plainTextEdit->setGeometry(0, 0, ui->tabWidget->width(), ui->tabWidget->height());
    ui->plainTextStream->setGeometry(0, 0, ui->tabWidget->width(), ui->tabWidget->height());
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actOpen_triggered()
{
    // 打开文件
    QString curPath = QDir::currentPath();
    QString dlgTitle = "选择你的英雄";
    QString filter = "程序文件(*.h *.cpp);;文本文件(*.txt);;所有文件(*.*)";
    QString aFileName = QFileDialog::getOpenFileName(this, dlgTitle,
                                                     curPath, filter);  /*父窗口，标题，可打开文件类型，路径*/
    if (aFileName.isEmpty())
    {
        return;
    }
    OpenTextByStream(aFileName, textReading);
}

bool MainWindow::OpenTextByIODevice(const QString &aFileName)
{
    // 用 IODevice 的方式打开文件
    QFile aFile(aFileName);
    if (!aFile.exists()) // 文件不存在
    {
        return false;
    }
    if(!aFile.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        return false;
    }
    ui->plainTextEdit->setPlainText(aFile.readAll());
    aFile.close();
    ui->tabWidget->setCurrentIndex(0);
    return true;
}

bool MainWindow::SaveTextByIODevice(const QString &aFileName)
{
    // 用 IODevidce 方式保存文本文件
    QFile aFile(aFileName);
    if (!aFile.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        return false;
    }
    QString str = ui->plainTextEdit->toPlainText(); // 整个内容作为字符串
    QByteArray strBytes = str.toUtf8();       // 转换为字节数组
    aFile.write(strBytes, strBytes.length());   // 写入文件
    aFile.close();
    ui->tabWidget->setCurrentIndex(0);
    return true;
}

bool MainWindow::OpenTextByStream(const QString &aFileName, TextReadingStaus status)
{
    QFile aFile(aFileName);
    if (!aFile.exists()) // 文件不存在
    {
        return false;
    }
    if(!aFile.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        return false;
    }
    QTextStream aStream(&aFile);// 用文本流读取文件
//    aStream.setAutoDetectUnicode(true); // 自动检测Unicode，才能显示汉字 改选项无用
    ui->plainTextStream->clear();
    if (status)
    {
        aStream.setAutoDetectUnicode(true);
        ui->plainTextStream->setPlainText(aStream.readAll());
    }
    else
    {
        while (!aStream.atEnd())
        {
            QString str = aStream.readLine();   // 读取文件一行的文本
            ui->plainTextStream->appendPlainText(str);
        }
    }
    aFile.close();
    ui->tabWidget->setCurrentIndex(1);
    return true;
}

bool MainWindow::SaveTextByStream(const QString &aFileName)
{
    // 用QTextStream 把保存文件
    QFile aFile(aFileName);
    if (!aFile.exists())    // 文件不存在
    {
        return false;
    }
    if (!aFile.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        return false;
    }
}


void MainWindow::on_actSave_triggered()
{
    QString curPath = QDir::currentPath();
    QString dlgTitle = "保存你的英雄";
    QString filter = "h 文件(*.h);;c++文件(*.cpp);;所有文件(*.*)";
    QString aFileName = QFileDialog::getSaveFileName(this, dlgTitle,
                                                     curPath, filter);
    if (aFileName.isEmpty())
    {
        return;
    }
    SaveTextByIODevice(aFileName);

}

