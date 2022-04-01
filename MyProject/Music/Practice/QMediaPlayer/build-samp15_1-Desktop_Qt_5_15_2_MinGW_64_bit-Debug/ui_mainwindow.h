/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QPushButton *btnAdd;
    QPushButton *btnDel;
    QPushButton *btnClear;
    QListWidget *listWidget;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QSlider *horizontalSlider;
    QLabel *labCurMedia;
    QPushButton *btnPause;
    QPushButton *btnStop;
    QPushButton *btnNext;
    QPushButton *btnPre;
    QPushButton *btnPlay;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(627, 413);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 10, 471, 201));
        btnAdd = new QPushButton(groupBox);
        btnAdd->setObjectName(QString::fromUtf8("btnAdd"));
        btnAdd->setGeometry(QRect(40, 40, 80, 18));
        btnDel = new QPushButton(groupBox);
        btnDel->setObjectName(QString::fromUtf8("btnDel"));
        btnDel->setGeometry(QRect(200, 40, 80, 18));
        btnClear = new QPushButton(groupBox);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));
        btnClear->setGeometry(QRect(350, 40, 80, 18));
        listWidget = new QListWidget(groupBox);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(0, 80, 471, 121));
        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(320, 210, 181, 43));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        horizontalSlider = new QSlider(gridLayoutWidget_2);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(horizontalSlider, 0, 1, 1, 1);

        labCurMedia = new QLabel(centralwidget);
        labCurMedia->setObjectName(QString::fromUtf8("labCurMedia"));
        labCurMedia->setGeometry(QRect(70, 290, 40, 12));
        btnPause = new QPushButton(centralwidget);
        btnPause->setObjectName(QString::fromUtf8("btnPause"));
        btnPause->setGeometry(QRect(78, 221, 43, 31));
        btnStop = new QPushButton(centralwidget);
        btnStop->setObjectName(QString::fromUtf8("btnStop"));
        btnStop->setGeometry(QRect(125, 221, 42, 31));
        btnNext = new QPushButton(centralwidget);
        btnNext->setObjectName(QString::fromUtf8("btnNext"));
        btnNext->setGeometry(QRect(218, 221, 42, 31));
        btnPre = new QPushButton(centralwidget);
        btnPre->setObjectName(QString::fromUtf8("btnPre"));
        btnPre->setGeometry(QRect(171, 221, 43, 31));
        btnPlay = new QPushButton(centralwidget);
        btnPlay->setObjectName(QString::fromUtf8("btnPlay"));
        btnPlay->setGeometry(QRect(31, 221, 43, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 627, 17));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\346\222\255\346\224\276\345\210\227\350\241\250", nullptr));
        btnAdd->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240", nullptr));
        btnDel->setText(QCoreApplication::translate("MainWindow", "\347\247\273\351\231\244", nullptr));
        btnClear->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        labCurMedia->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        btnPause->setText(QCoreApplication::translate("MainWindow", "\346\232\202\345\201\234", nullptr));
        btnStop->setText(QCoreApplication::translate("MainWindow", "\345\201\234\346\255\242", nullptr));
        btnNext->setText(QCoreApplication::translate("MainWindow", "\344\270\213\344\270\200\351\246\226", nullptr));
        btnPre->setText(QCoreApplication::translate("MainWindow", "\344\270\212\344\270\200\351\246\226", nullptr));
        btnPlay->setText(QCoreApplication::translate("MainWindow", "\346\222\255\346\224\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
