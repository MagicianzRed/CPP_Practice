#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_btnOpen_clicked()
{
    // 选择单个文件
    QString curPath = QDir::currentPath();  // 获取应用程序当前目录
    QString dlgTitle = "选择一个文件";
    QString filter = "文本文件(*.txt);;图片文件(*.jpg *.gif);;所有文件(*.*)";
    QString aFileName = QFileDialog::getOpenFileName(this, dlgTitle, curPath, filter);
    if (!aFileName.isEmpty())
    {
        ui->plainTextEdit->appendPlainText(aFileName);
    }
}


void Dialog::on_btnOpenMulti_clicked()
{
    // 选择多个文件
    QString curPath = QDir::currentPath();  // 获取应用程序当前目录
    QString dlgTitle = "选择一个文件";
    QString filter = "文本文件(*.txt);;图片文件(*.jpg *.gif);;所有文件(*.*)";
    QStringList aFileList = QFileDialog::getOpenFileNames(this, dlgTitle, curPath, filter);
    for (int i = 0; i < aFileList.count(); i++)
    {
        ui->plainTextEdit->appendPlainText(aFileList.at(i));
    }
}


void Dialog::on_brnSelDir_clicked()
{
    // 选择文件夹
    QString curPath = QCoreApplication::applicationDirPath();
    QString dlgTitle = "选择一个目录";
    QString selectedDir = QFileDialog::getExistingDirectory(this, dlgTitle, curPath,
                                                            QFileDialog::ShowDirsOnly);
    if (!selectedDir.isEmpty())
    {
        ui->plainTextEdit->appendPlainText(selectedDir);
    }
}


void Dialog::on_btnSave_clicked()
{
    // 保存文件
    QString curPath   = QCoreApplication::applicationDirPath();
    QString dlgTitle  = "保存文件";
    QString filter    = "h 文件(*.h);;C++文件(.cpp);;所有文件(*.*)";
    QString aFileName = QFileDialog::getSaveFileName(this, dlgTitle, curPath, filter);

    if (!aFileName.isEmpty())
    {
        ui->plainTextEdit->appendPlainText(aFileName);
    }
}


void Dialog::on_pushButton_5_clicked()
{
    // 选择颜色
    QPalette pal = ui->plainTextEdit->palette();    // 获取现有的 palette(调色板)
    QColor iniColor = pal.color(QPalette::Text);    // 现在有的文字颜色
    QColor color = QColorDialog::getColor(iniColor, this, "选择颜色");

    if (color.isValid())
    {
        pal.setColor(QPalette::Text, color);
        ui->plainTextEdit->setPalette(pal);
    }
}


void Dialog::on_btnFont_clicked()
{
    // 选择字体
    QFont iniFont = ui->plainTextEdit->font();
    bool ok = false;
    QFont font = QFontDialog::getFont(&ok, iniFont);
    if (ok)
    {
        ui->plainTextEdit->setFont(font);
    }
}


void Dialog::on_btnIputString_clicked()
{
    // 输入字符串
    QString dlgTile  = "输入文字对话框";
    QString txtLabel = "请输入文件名";
    QString defalutInput = "新建文件.txt";
    QLineEdit::EchoMode echoMoed = QLineEdit::Normal;
    bool ok = false;
    QString text = QInputDialog::getText(this, dlgTile, txtLabel,
                                         echoMoed, defalutInput, &ok);

    if (ok && !text.isEmpty())
    {
        ui->plainTextEdit->appendPlainText(text);
    }
}


void Dialog::on_btnIputInt_clicked()
{
    // 输入整数
    QString dlgTitle = "输入整数";
    QString txtLabel = "设置字体大小";
    int deaultValue  = ui->plainTextEdit->font().pointSize();
    int minValue = 6, maxValue = 50, stepValue = 1;
    bool ok = false;
    int inputValue = QInputDialog::getInt(this, dlgTitle, txtLabel, deaultValue,
                                          minValue, maxValue, stepValue, &ok);
    if (ok)
    {
        QFont font = ui->plainTextEdit->font();
        font.setPixelSize(inputValue);
        ui->plainTextEdit->setFont(font);
    }
}


void Dialog::on_btnInputFloat_clicked()
{
    // 输入浮点数
    QString dlgTitle = "输入浮点数";
    QString txtLabel = "输入一个浮点数";
    float defaultValue = 3.13f;
    float minValue = 0.0f, maxValue = 10000.0f;
    int decimas = 2;    // 指定小数点
    bool ok = false;
    float inputValue = QInputDialog::getDouble(this, dlgTitle, txtLabel,
                                               defaultValue, minValue, maxValue, decimas, &ok,Qt::WindowFlags(), 0.1);
    if (ok)
    {
        QString str = QString::asprintf("输入了一个浮点数:%.3f", inputValue);
        ui->plainTextEdit->appendPlainText(str);
    }

}


void Dialog::on_btnInputItem_clicked()
{
    // 条目选择输入
    QStringList items;
    items << "优秀" << "良好" << "合格" << "不合格";
    QString dlgTitle = "条目选择对话框";
    QString txtLabel = "请选择级别";
    int     curIndex = 0;       // 初始选择项
    bool    editable = true;    // ComboBox是否可编辑
    bool    ok       = false;

    QString text = QInputDialog::getItem(this, dlgTitle, txtLabel,
                                         items, curIndex, editable, &ok);
    if (ok && !text.isEmpty())
    {
        ui->plainTextEdit->appendPlainText(text);
    }
}


void Dialog::on_btnMsgInformation_clicked()
{
    // information
    QString dlgTitle = "information 消息框";
    QString strInfo  = "文件已经打开，字体大小已设置";
    QMessageBox::information(this, dlgTitle, strInfo,
                             QMessageBox::Ok);

}


void Dialog::on_btnMsgWarning_2_clicked()
{
    // warning
    QString dlgTitle = "warning 消息框";
    QString strInfo = "文件内容已经被修改";
    QMessageBox::warning(this, dlgTitle, strInfo);
}


void Dialog::on_btnMsgCritical_clicked()
{
    // critical
    QString dlgTitle = "critical 消息框";
    QString strInfo = "侦测到在途的聚变打击";
    QMessageBox::critical(this, dlgTitle, strInfo);
}


void Dialog::on_btnMsgQuestion_clicked()
{
    // question
    QString dlgTitle = "Question 消息框";
    QString strInfo  = "文件已经被修改，是否保存修改";
    QMessageBox::StandardButton defaultBtn = QMessageBox::NoButton;
    QMessageBox::StandardButton result; // 返回选择的按钮

    result = QMessageBox::question(this, dlgTitle, strInfo,
                                   QMessageBox::Cancel | QMessageBox::No | QMessageBox::Yes,
                                   defaultBtn);

    if (result == QMessageBox::Yes)
    {
        ui->plainTextEdit->appendPlainText("Question 消息框: Yes 被选择");
    }
    else if (result == QMessageBox::No)
    {
        ui->plainTextEdit->appendPlainText("Question 消息框: No 被选择");
    }
    else if (result == QMessageBox::Cancel)
    {
        ui->plainTextEdit->appendPlainText("Question 消息框: Cancel 被选择");
    }
    else
    {
        ui->plainTextEdit->appendPlainText("Question 消息框: 无选择");
    }
}

