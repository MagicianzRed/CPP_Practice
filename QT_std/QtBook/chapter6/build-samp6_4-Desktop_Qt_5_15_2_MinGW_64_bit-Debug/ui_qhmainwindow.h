/********************************************************************************
** Form generated from reading UI file 'qhmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QHMAINWINDOW_H
#define UI_QHMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QHMainWindow
{
public:
    QAction *actDocNew;
    QAction *actDocOpen;
    QAction *actCascade;
    QAction *actTile;
    QAction *actCloseALL;
    QAction *actViewMode;
    QWidget *centralwidget;
    QMdiArea *mdiArea;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *QHMainWindow)
    {
        if (QHMainWindow->objectName().isEmpty())
            QHMainWindow->setObjectName(QString::fromUtf8("QHMainWindow"));
        QHMainWindow->resize(800, 600);
        actDocNew = new QAction(QHMainWindow);
        actDocNew->setObjectName(QString::fromUtf8("actDocNew"));
        actDocOpen = new QAction(QHMainWindow);
        actDocOpen->setObjectName(QString::fromUtf8("actDocOpen"));
        actCascade = new QAction(QHMainWindow);
        actCascade->setObjectName(QString::fromUtf8("actCascade"));
        actTile = new QAction(QHMainWindow);
        actTile->setObjectName(QString::fromUtf8("actTile"));
        actCloseALL = new QAction(QHMainWindow);
        actCloseALL->setObjectName(QString::fromUtf8("actCloseALL"));
        actViewMode = new QAction(QHMainWindow);
        actViewMode->setObjectName(QString::fromUtf8("actViewMode"));
        actViewMode->setCheckable(true);
        centralwidget = new QWidget(QHMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        mdiArea = new QMdiArea(centralwidget);
        mdiArea->setObjectName(QString::fromUtf8("mdiArea"));
        mdiArea->setGeometry(QRect(40, 40, 541, 311));
        QHMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(QHMainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 17));
        QHMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(QHMainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        QHMainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(QHMainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        QHMainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actDocNew);
        toolBar->addAction(actDocOpen);
        toolBar->addAction(actViewMode);
        toolBar->addAction(actCascade);
        toolBar->addAction(actTile);
        toolBar->addAction(actCloseALL);

        retranslateUi(QHMainWindow);

        QMetaObject::connectSlotsByName(QHMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *QHMainWindow)
    {
        QHMainWindow->setWindowTitle(QCoreApplication::translate("QHMainWindow", "MainWindow", nullptr));
        actDocNew->setText(QCoreApplication::translate("QHMainWindow", "\346\226\260\345\273\272", nullptr));
        actDocOpen->setText(QCoreApplication::translate("QHMainWindow", "\346\211\223\345\274\200\346\226\207\346\241\243", nullptr));
        actCascade->setText(QCoreApplication::translate("QHMainWindow", "\347\272\247\350\201\224\345\261\225\345\274\200", nullptr));
        actTile->setText(QCoreApplication::translate("QHMainWindow", "\345\271\263\351\223\272\345\261\225\345\274\200", nullptr));
        actCloseALL->setText(QCoreApplication::translate("QHMainWindow", "\345\205\263\351\227\255\346\211\200\346\234\211\345\255\220\347\252\227\345\217\243", nullptr));
        actViewMode->setText(QCoreApplication::translate("QHMainWindow", "MDI\346\250\241\345\274\217", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("QHMainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QHMainWindow: public Ui_QHMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QHMAINWINDOW_H
