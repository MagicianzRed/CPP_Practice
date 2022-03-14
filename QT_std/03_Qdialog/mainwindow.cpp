#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 点击新建按钮，弹出一个对话框
    connect(ui->actionnew, &QAction::triggered, [=](){
        // 对话框分类
        // 模态对话框（不可以~~~~~~） 和 非模态对话框（可以对其他窗口进行其他操作）

//        // 模态
//        QDialog* dig = new QDialog(this); // 这里写成堆的形式，是应为只用 dig->show()，就会一闪而过。为什么一闪而过呢？
//        dig->resize(100, 100);
//        dig->show(); // 把这里改成 dig->exec();就变成模态了
//        dig->setAttribute(Qt::WA_DeleteOnClose);
//        qDebug() << "模态对话框弹出";

        // 消息对话框
        // 错误对话框
//        QMessageBox::critical(this, "Critical", "错误");

        // 信息对话框
//        QMessageBox::information(this, "info", "你好");

        // 问题对话框
//        if(QMessageBox::Save == QMessageBox::question(this, "qes", "你在 干什么？", QMessageBox::Save | QMessageBox::Cancel, QMessageBox::Cancel))
//        {
//            qDebug() << "保存成功";
//        }
//        else
//        {
//            qDebug() << "取消";
//        }

        // 警告对话框
//        QMessageBox::warning(this, "Warning", "警告");

        // 其他标准对话框
        // 颜色对话框
        // 返回值是在这个对话框中保存的颜色
//       QColor color =  QColorDialog::getColor(QColor(255, 0, 0)); // 第四个参数是透明度，默认255——不透明
//       qDebug() << "r = " << color.red() << "g = " << color.green() << "b = " << color.blue();

        // 文件对话框
        // 返回值是你打开文件的路径
//        QFileDialog::getOpenFileName(this, "不吃早饭", "C:\\Users\\Hu\\Desktop", "(*.txt)");// 最后一个参数是过滤器，只看txt的文件

        // 字体对话框
        bool flag;
        QFont sb = QFontDialog::getFont(&flag, QFont("华文彩云", 36));
        qDebug() << "字体：" << sb.family() << " 字号：" << sb.pointSize() << " 是否加粗：" << sb.bold() << " 是否倾斜" << sb.italic();
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

