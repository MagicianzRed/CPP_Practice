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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QSpinBox *spinBoxColumn;
    QSpinBox *spinBoxRow;
    QLineEdit *lineEdit;
    QCheckBox *checkBoxRow;
    QCheckBox *checkBoxColumn;
    QPushButton *btnSetText;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(400, 300);
        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 30, 201, 121));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 30, 40, 20));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 60, 40, 16));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 90, 51, 16));
        spinBoxColumn = new QSpinBox(groupBox);
        spinBoxColumn->setObjectName(QString::fromUtf8("spinBoxColumn"));
        spinBoxColumn->setGeometry(QRect(60, 31, 42, 20));
        spinBoxRow = new QSpinBox(groupBox);
        spinBoxRow->setObjectName(QString::fromUtf8("spinBoxRow"));
        spinBoxRow->setGeometry(QRect(60, 60, 42, 20));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(60, 90, 113, 20));
        checkBoxRow = new QCheckBox(groupBox);
        checkBoxRow->setObjectName(QString::fromUtf8("checkBoxRow"));
        checkBoxRow->setGeometry(QRect(120, 30, 61, 18));
        checkBoxColumn = new QCheckBox(groupBox);
        checkBoxColumn->setObjectName(QString::fromUtf8("checkBoxColumn"));
        checkBoxColumn->setGeometry(QRect(120, 60, 61, 18));
        btnSetText = new QPushButton(Dialog);
        btnSetText->setObjectName(QString::fromUtf8("btnSetText"));
        btnSetText->setGeometry(QRect(250, 50, 80, 18));
        pushButton_2 = new QPushButton(Dialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(250, 130, 80, 18));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Dialog", "GroupBox", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "\345\210\227    \345\217\267", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "\350\241\214    \345\217\267", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "\350\256\276\345\256\232\346\226\207\345\255\227", nullptr));
        checkBoxRow->setText(QCoreApplication::translate("Dialog", "\345\210\227\345\242\236", nullptr));
        checkBoxColumn->setText(QCoreApplication::translate("Dialog", "\350\241\214\345\242\236", nullptr));
        btnSetText->setText(QCoreApplication::translate("Dialog", "\350\256\276\345\256\232\346\226\207\345\255\227", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dialog", "\345\205\263\351\227\255", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
