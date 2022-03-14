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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGroupBox *groupBox;
    QPushButton *btnIniTtems;
    QPushButton *btnClean;
    QCheckBox *checkBox;
    QComboBox *comboBox;
    QGroupBox *groupBox_2;
    QPushButton *btnIni2;
    QComboBox *comboBox_2;
    QGroupBox *groupBox_3;
    QPlainTextEdit *plainTextEdit;
    QPushButton *btnToComboBox;
    QPushButton *pushButton_2;
    QCheckBox *checkBox_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(684, 469);
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 50, 251, 141));
        btnIniTtems = new QPushButton(groupBox);
        btnIniTtems->setObjectName(QString::fromUtf8("btnIniTtems"));
        btnIniTtems->setGeometry(QRect(10, 30, 80, 18));
        btnClean = new QPushButton(groupBox);
        btnClean->setObjectName(QString::fromUtf8("btnClean"));
        btnClean->setGeometry(QRect(100, 30, 80, 18));
        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(190, 30, 61, 18));
        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(10, 70, 171, 22));
        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(310, 50, 241, 141));
        btnIni2 = new QPushButton(groupBox_2);
        btnIni2->setObjectName(QString::fromUtf8("btnIni2"));
        btnIni2->setGeometry(QRect(10, 40, 221, 20));
        comboBox_2 = new QComboBox(groupBox_2);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(10, 90, 221, 22));
        groupBox_3 = new QGroupBox(Widget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(30, 200, 521, 211));
        plainTextEdit = new QPlainTextEdit(groupBox_3);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(20, 60, 481, 131));
        btnToComboBox = new QPushButton(groupBox_3);
        btnToComboBox->setObjectName(QString::fromUtf8("btnToComboBox"));
        btnToComboBox->setGeometry(QRect(30, 37, 161, 21));
        pushButton_2 = new QPushButton(groupBox_3);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(210, 35, 131, 21));
        checkBox_2 = new QCheckBox(groupBox_3);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(360, 40, 81, 18));

        retranslateUi(Widget);
        QObject::connect(btnClean, SIGNAL(clicked()), comboBox, SLOT(clear()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), plainTextEdit, SLOT(clear()));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "\347\256\200\345\215\225\347\232\204comboBox", nullptr));
        btnIniTtems->setText(QCoreApplication::translate("Widget", "\345\210\235\345\247\213\345\214\226\345\210\227\350\241\250", nullptr));
        btnClean->setText(QCoreApplication::translate("Widget", "\346\270\205\351\231\244\345\210\227\350\241\250", nullptr));
        checkBox->setText(QCoreApplication::translate("Widget", "\345\217\257\347\274\226\350\276\221", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "\346\234\211\347\224\250\346\210\267\346\225\260\346\215\256\347\232\204ComboBox", nullptr));
        btnIni2->setText(QCoreApplication::translate("Widget", "\345\210\235\345\247\213\345\214\226\345\237\216\345\270\202 + \345\214\272\345\217\267", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Widget", "QPlainTextEdit\357\274\210\345\205\267\346\234\211\346\240\207\345\207\206\345\277\253\346\215\267\350\217\234\345\215\225\357\274\211", nullptr));
        btnToComboBox->setText(QCoreApplication::translate("Widget", "\346\226\207\346\234\254\346\241\206\345\206\205\345\256\271\346\267\273\345\212\240\345\210\260ComboBox", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Widget", "\346\270\205\351\231\244\346\226\207\346\234\254\346\241\206", nullptr));
        checkBox_2->setText(QCoreApplication::translate("Widget", "Read Only", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
