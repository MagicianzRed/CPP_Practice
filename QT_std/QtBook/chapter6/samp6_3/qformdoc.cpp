#include "qformdoc.h"
#include "ui_qformdoc.h"
#include "mainwindow.h"
#include <QToolBar>
#include <QMessageBox>

QFormDoc::QFormDoc(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::QFormDoc)
{
    ui->setupUi(this);
    QToolBar *locToolBar = new QToolBar("文档", this); // 创建工具栏
    locToolBar->addAction(ui->actOpen);
    locToolBar->addAction(ui->actFont);
    locToolBar->addSeparator();
    locToolBar->addAction(ui->actCut);
    locToolBar->addAction(ui->actCopy);
    locToolBar->addAction(ui->actPaste);
    locToolBar->addAction(ui->actRedo);
    locToolBar->addAction(ui->actUndo);
    locToolBar->addSeparator();
    locToolBar->addAction(ui->actClose);
    locToolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);


}

QFormDoc::~QFormDoc()
{
    QMessageBox::information(this, "消息", "QFormDoc 对象被和删除和释放");
    delete ui;
}



void QFormDoc::on_actClose_triggered()
{
    this->close();
    emit TabWidgetShow(false);
}

