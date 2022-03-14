/********************************************************************************
** Form generated from reading UI file 'qformdoc.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QFORMDOC_H
#define UI_QFORMDOC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QFormDoc
{
public:
    QAction *actOpen;
    QAction *actCut;
    QAction *actCopy;
    QAction *actPaste;
    QAction *actFont;
    QAction *actClose;
    QAction *actUndo;
    QAction *actRedo;

    void setupUi(QWidget *QFormDoc)
    {
        if (QFormDoc->objectName().isEmpty())
            QFormDoc->setObjectName(QString::fromUtf8("QFormDoc"));
        QFormDoc->resize(400, 300);
        actOpen = new QAction(QFormDoc);
        actOpen->setObjectName(QString::fromUtf8("actOpen"));
        actCut = new QAction(QFormDoc);
        actCut->setObjectName(QString::fromUtf8("actCut"));
        actCopy = new QAction(QFormDoc);
        actCopy->setObjectName(QString::fromUtf8("actCopy"));
        actPaste = new QAction(QFormDoc);
        actPaste->setObjectName(QString::fromUtf8("actPaste"));
        actFont = new QAction(QFormDoc);
        actFont->setObjectName(QString::fromUtf8("actFont"));
        actClose = new QAction(QFormDoc);
        actClose->setObjectName(QString::fromUtf8("actClose"));
        actUndo = new QAction(QFormDoc);
        actUndo->setObjectName(QString::fromUtf8("actUndo"));
        actRedo = new QAction(QFormDoc);
        actRedo->setObjectName(QString::fromUtf8("actRedo"));

        retranslateUi(QFormDoc);

        QMetaObject::connectSlotsByName(QFormDoc);
    } // setupUi

    void retranslateUi(QWidget *QFormDoc)
    {
        QFormDoc->setWindowTitle(QCoreApplication::translate("QFormDoc", "Form", nullptr));
        actOpen->setText(QCoreApplication::translate("QFormDoc", "\346\211\223\345\274\200", nullptr));
        actCut->setText(QCoreApplication::translate("QFormDoc", "\345\211\252\345\210\207", nullptr));
        actCopy->setText(QCoreApplication::translate("QFormDoc", "\345\244\215\345\210\266", nullptr));
        actPaste->setText(QCoreApplication::translate("QFormDoc", "\347\262\230\350\264\264", nullptr));
        actFont->setText(QCoreApplication::translate("QFormDoc", "\345\255\227\344\275\223", nullptr));
        actClose->setText(QCoreApplication::translate("QFormDoc", "\345\205\263\351\227\255", nullptr));
        actUndo->setText(QCoreApplication::translate("QFormDoc", "\346\222\244\351\224\200", nullptr));
        actRedo->setText(QCoreApplication::translate("QFormDoc", "\351\207\215\345\244\215", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QFormDoc: public Ui_QFormDoc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QFORMDOC_H
