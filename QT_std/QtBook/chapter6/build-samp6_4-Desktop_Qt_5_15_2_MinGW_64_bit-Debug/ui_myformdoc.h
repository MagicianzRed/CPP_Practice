/********************************************************************************
** Form generated from reading UI file 'myformdoc.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYFORMDOC_H
#define UI_MYFORMDOC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyFormDoc
{
public:
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *MyFormDoc)
    {
        if (MyFormDoc->objectName().isEmpty())
            MyFormDoc->setObjectName(QString::fromUtf8("MyFormDoc"));
        MyFormDoc->resize(800, 600);
        verticalLayout = new QVBoxLayout(MyFormDoc);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        plainTextEdit = new QPlainTextEdit(MyFormDoc);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        verticalLayout->addWidget(plainTextEdit);


        retranslateUi(MyFormDoc);

        QMetaObject::connectSlotsByName(MyFormDoc);
    } // setupUi

    void retranslateUi(QWidget *MyFormDoc)
    {
        MyFormDoc->setWindowTitle(QCoreApplication::translate("MyFormDoc", "MyFormDoc", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyFormDoc: public Ui_MyFormDoc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYFORMDOC_H
