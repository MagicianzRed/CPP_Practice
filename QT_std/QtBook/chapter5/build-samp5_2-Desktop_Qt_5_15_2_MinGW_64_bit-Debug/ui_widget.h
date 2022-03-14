/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QListView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QPushButton *btnListAppend;
    QPushButton *btnListDelete;
    QPushButton *btnListInsert;
    QPushButton *btnListClear;
    QListView *listView;
    QGroupBox *groupBox_2;
    QPushButton *pushButton_6;
    QPushButton *btnTextImport;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(40, 40, 250, 250));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 20, 80, 18));
        btnListAppend = new QPushButton(groupBox);
        btnListAppend->setObjectName(QString::fromUtf8("btnListAppend"));
        btnListAppend->setGeometry(QRect(10, 50, 80, 18));
        btnListDelete = new QPushButton(groupBox);
        btnListDelete->setObjectName(QString::fromUtf8("btnListDelete"));
        btnListDelete->setGeometry(QRect(10, 80, 80, 18));
        btnListInsert = new QPushButton(groupBox);
        btnListInsert->setObjectName(QString::fromUtf8("btnListInsert"));
        btnListInsert->setGeometry(QRect(100, 50, 80, 18));
        btnListClear = new QPushButton(groupBox);
        btnListClear->setObjectName(QString::fromUtf8("btnListClear"));
        btnListClear->setGeometry(QRect(100, 80, 80, 18));
        listView = new QListView(groupBox);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(10, 110, 191, 111));
        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(310, 40, 250, 250));
        pushButton_6 = new QPushButton(groupBox_2);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(10, 40, 221, 20));
        btnTextImport = new QPushButton(groupBox_2);
        btnTextImport->setObjectName(QString::fromUtf8("btnTextImport"));
        btnTextImport->setGeometry(QRect(9, 80, 221, 20));
        plainTextEdit = new QPlainTextEdit(groupBox_2);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(13, 113, 211, 111));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "QListView", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "\346\201\242\345\244\215\345\210\227\350\241\250", nullptr));
        btnListAppend->setText(QCoreApplication::translate("Widget", "\346\267\273\345\212\240\351\241\271", nullptr));
        btnListDelete->setText(QCoreApplication::translate("Widget", "\345\210\240\351\231\244\345\275\223\345\211\215\351\241\271", nullptr));
        btnListInsert->setText(QCoreApplication::translate("Widget", "\346\217\222\345\205\245\351\241\271", nullptr));
        btnListClear->setText(QCoreApplication::translate("Widget", "\346\270\205\351\231\244\345\210\227\350\241\250", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "QPlainTextEdit", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Widget", "\346\270\205\347\251\272\346\226\207\346\234\254", nullptr));
        btnTextImport->setText(QCoreApplication::translate("Widget", "\346\230\276\347\244\272\346\225\260\346\215\256\346\250\241\345\236\213\347\232\204StringList", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
