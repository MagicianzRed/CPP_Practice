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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QListView *listView;
    QTableView *tableView;
    QTreeView *treeView;
    QGroupBox *groupBox;
    QLabel *labFileName;
    QLabel *labFileSize;
    QLabel *labTpye;
    QLabel *labPath;
    QCheckBox *chkIsDir;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(634, 408);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        listView = new QListView(centralwidget);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(320, 20, 256, 141));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(320, 180, 256, 101));
        treeView = new QTreeView(centralwidget);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        treeView->setGeometry(QRect(40, 20, 261, 261));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(40, 289, 531, 91));
        labFileName = new QLabel(groupBox);
        labFileName->setObjectName(QString::fromUtf8("labFileName"));
        labFileName->setGeometry(QRect(10, 30, 61, 20));
        labFileSize = new QLabel(groupBox);
        labFileSize->setObjectName(QString::fromUtf8("labFileSize"));
        labFileSize->setGeometry(QRect(130, 30, 81, 20));
        labTpye = new QLabel(groupBox);
        labTpye->setObjectName(QString::fromUtf8("labTpye"));
        labTpye->setGeometry(QRect(230, 30, 71, 20));
        labPath = new QLabel(groupBox);
        labPath->setObjectName(QString::fromUtf8("labPath"));
        labPath->setGeometry(QRect(10, 60, 101, 21));
        chkIsDir = new QCheckBox(groupBox);
        chkIsDir->setObjectName(QString::fromUtf8("chkIsDir"));
        chkIsDir->setGeometry(QRect(350, 30, 71, 18));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 634, 17));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "GroupBox", nullptr));
        labFileName->setText(QString());
        labFileSize->setText(QString());
        labTpye->setText(QString());
        labPath->setText(QString());
        chkIsDir->setText(QCoreApplication::translate("MainWindow", "\350\212\202\347\202\271\346\230\257\347\233\256\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
