/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPlainTextEdit *plainTextEdit;
    QLabel *labA;
    QPushButton *btnThreadStartA;
    QPushButton *btnStart;
    QPushButton *btnStop;
    QPushButton *btnThreadFinishA;
    QPushButton *btnClear;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(658, 415);
        plainTextEdit = new QPlainTextEdit(Dialog);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(30, 130, 411, 251));
        labA = new QLabel(Dialog);
        labA->setObjectName(QString::fromUtf8("labA"));
        labA->setGeometry(QRect(40, 390, 141, 20));
        btnThreadStartA = new QPushButton(Dialog);
        btnThreadStartA->setObjectName(QString::fromUtf8("btnThreadStartA"));
        btnThreadStartA->setGeometry(QRect(20, 80, 80, 18));
        btnStart = new QPushButton(Dialog);
        btnStart->setObjectName(QString::fromUtf8("btnStart"));
        btnStart->setGeometry(QRect(120, 80, 80, 18));
        btnStop = new QPushButton(Dialog);
        btnStop->setObjectName(QString::fromUtf8("btnStop"));
        btnStop->setGeometry(QRect(220, 80, 80, 18));
        btnThreadFinishA = new QPushButton(Dialog);
        btnThreadFinishA->setObjectName(QString::fromUtf8("btnThreadFinishA"));
        btnThreadFinishA->setGeometry(QRect(310, 80, 80, 18));
        btnClear = new QPushButton(Dialog);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));
        btnClear->setGeometry(QRect(410, 80, 80, 18));

        retranslateUi(Dialog);
        QObject::connect(btnClear, SIGNAL(clicked()), plainTextEdit, SLOT(clear()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        labA->setText(QCoreApplication::translate("Dialog", "TextLabel", nullptr));
        btnThreadStartA->setText(QCoreApplication::translate("Dialog", "\345\220\257\345\212\250\347\272\277\347\250\213", nullptr));
        btnStart->setText(QCoreApplication::translate("Dialog", "\345\274\200\345\247\213", nullptr));
        btnStop->setText(QCoreApplication::translate("Dialog", "\346\232\202\345\201\234", nullptr));
        btnThreadFinishA->setText(QCoreApplication::translate("Dialog", "\347\273\223\346\235\237\347\272\277\347\250\213", nullptr));
        btnClear->setText(QCoreApplication::translate("Dialog", "\346\270\205\347\251\272\346\226\207\346\234\254", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
