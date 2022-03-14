#include "myformdoc.h"
#include "ui_myformdoc.h"
#include <QMessageBox>
#include <QIODevice>
#include <QTextStream>
#include <QFileInfo>
#include <QFontDialog>

MyFormDoc::MyFormDoc(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MyFormDoc)
{
    ui->setupUi(this);
    this->setWindowTitle("新建文档");           // 窗口标题
    this->setAttribute(Qt::WA_DeleteOnClose);  // 关闭时自动删除
}

MyFormDoc::~MyFormDoc()
{
//    QMessageBox::information(this, "信息", "文档窗口被释放");
    delete ui;
}

void MyFormDoc::loadFromFile(QString &aFileName)
{
    // 打开文件
    QFile aFile(aFileName);
    if (aFile.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream aStream(&aFile); // 用文本流读取文件
        ui->plainTextEdit->clear();  // 清除文本后再读取
        ui->plainTextEdit->setPlainText(aStream.readAll()); // 读取文本文件
        aFile.close();              // 关闭文件
        mCurrentFile = aFileName;   //保存文件名称
        QFileInfo fileInfo(aFileName);      // 文件信息
        QString str = fileInfo.fileName();  // 去除路径后的文件名
        this->setWindowTitle(str);  // 更新标题
        mFileOpened = true;         // 更新标志位
    }
}

QString MyFormDoc::currentFileName()
{
    if (mCurrentFile == nullptr)
    {
        QString infoHint("无文件信息");
        return infoHint;
    }
    else
    {
        return mCurrentFile;
    }
}

bool MyFormDoc::isFileOpened()
{
    return mFileOpened;
}

void MyFormDoc::setEditFont()
{
    QFont font = ui->plainTextEdit->font();
    bool ok = true;
    /*打开字体选择对话框*/
    font = QFontDialog::getFont(&ok, font);
    ui->plainTextEdit->setFont(font);
}

void MyFormDoc::textCut()
{
    ui->plainTextEdit->cut();
}

void MyFormDoc::textCopy()
{
    ui->plainTextEdit->copy();
}

void MyFormDoc::textPaste()
{
    ui->plainTextEdit->paste();
}


