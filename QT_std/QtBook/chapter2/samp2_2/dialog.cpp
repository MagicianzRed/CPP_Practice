#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    connect(ui->rBtnBlack, SIGNAL(clicked()), this, SLOT(setTextFontColor()));
    connect(ui->rBtnRed, SIGNAL(clicked()), this, SLOT(setTextFontColor()));
    connect(ui->rBtnBlue, SIGNAL(clicked()), this, SLOT(setTextFontColor()));
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_checkBoxUnder_clicked(bool checked)
{
    QFont font = ui->txtEdit->font();
    font.setUnderline(checked);
    ui->txtEdit->setFont(font);
}


void Dialog::on_checkBoxItalic_clicked(bool checked)
{
    QFont font = ui->txtEdit->font();
    font.setItalic(checked);
    ui->txtEdit->setFont(font);
}


void Dialog::on_checkBoxBold_clicked(bool checked)
{
    QFont font = ui->txtEdit->font();
    font.setBold(checked);
    ui->txtEdit->setFont(font);
}

void Dialog::setTextFontColor()
{
    QPalette plet = ui->txtEdit->palette();
    if (ui->rBtnBlue->isChecked())
    {
        plet.setColor(QPalette::Text, Qt::blue);
    }
    else if (ui->rBtnRed->isChecked())
    {
        plet.setColor(QPalette::Text, Qt::red);
    }
    else if (ui->rBtnBlack->isChecked())
    {
        plet.setColor(QPalette::Text, Qt::black);
    }
    else
    {
        plet.setColor(QPalette::Text, Qt::black);
    }
    ui->txtEdit->setPalette(plet);
}




