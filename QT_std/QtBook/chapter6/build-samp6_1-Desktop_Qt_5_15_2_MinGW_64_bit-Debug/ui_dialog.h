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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGroupBox *groupBox;
    QPushButton *btnOpen;
    QPushButton *btnOpenMulti;
    QPushButton *brnSelDir;
    QPushButton *btnSave;
    QPushButton *pushButton_5;
    QPushButton *btnFont;
    QGroupBox *groupBox_2;
    QPushButton *btnMsgQuestion;
    QPushButton *btnMsgInformation;
    QPushButton *btnMsgWarning_2;
    QPushButton *btnMsgCritical;
    QPushButton *pushButton_17;
    QPushButton *pushButton_18;
    QGroupBox *groupBox_3;
    QPushButton *btnIputString;
    QPushButton *btnIputInt;
    QPushButton *btnInputFloat;
    QPushButton *btnInputItem;
    QPlainTextEdit *plainTextEdit;
    QPushButton *pushButton_23;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(582, 404);
        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 30, 201, 131));
        btnOpen = new QPushButton(groupBox);
        btnOpen->setObjectName(QString::fromUtf8("btnOpen"));
        btnOpen->setGeometry(QRect(10, 30, 80, 18));
        btnOpenMulti = new QPushButton(groupBox);
        btnOpenMulti->setObjectName(QString::fromUtf8("btnOpenMulti"));
        btnOpenMulti->setGeometry(QRect(110, 30, 80, 18));
        brnSelDir = new QPushButton(groupBox);
        brnSelDir->setObjectName(QString::fromUtf8("brnSelDir"));
        brnSelDir->setGeometry(QRect(10, 60, 80, 18));
        btnSave = new QPushButton(groupBox);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));
        btnSave->setGeometry(QRect(110, 60, 80, 18));
        pushButton_5 = new QPushButton(groupBox);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(10, 90, 80, 18));
        btnFont = new QPushButton(groupBox);
        btnFont->setObjectName(QString::fromUtf8("btnFont"));
        btnFont->setGeometry(QRect(110, 90, 80, 18));
        groupBox_2 = new QGroupBox(Dialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(280, 30, 211, 121));
        btnMsgQuestion = new QPushButton(groupBox_2);
        btnMsgQuestion->setObjectName(QString::fromUtf8("btnMsgQuestion"));
        btnMsgQuestion->setGeometry(QRect(10, 30, 80, 18));
        btnMsgInformation = new QPushButton(groupBox_2);
        btnMsgInformation->setObjectName(QString::fromUtf8("btnMsgInformation"));
        btnMsgInformation->setGeometry(QRect(120, 30, 80, 18));
        btnMsgWarning_2 = new QPushButton(groupBox_2);
        btnMsgWarning_2->setObjectName(QString::fromUtf8("btnMsgWarning_2"));
        btnMsgWarning_2->setGeometry(QRect(10, 60, 80, 18));
        btnMsgCritical = new QPushButton(groupBox_2);
        btnMsgCritical->setObjectName(QString::fromUtf8("btnMsgCritical"));
        btnMsgCritical->setGeometry(QRect(120, 60, 80, 18));
        pushButton_17 = new QPushButton(groupBox_2);
        pushButton_17->setObjectName(QString::fromUtf8("pushButton_17"));
        pushButton_17->setGeometry(QRect(120, 90, 80, 18));
        pushButton_18 = new QPushButton(groupBox_2);
        pushButton_18->setObjectName(QString::fromUtf8("pushButton_18"));
        pushButton_18->setGeometry(QRect(10, 90, 80, 18));
        groupBox_3 = new QGroupBox(Dialog);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 190, 201, 121));
        btnIputString = new QPushButton(groupBox_3);
        btnIputString->setObjectName(QString::fromUtf8("btnIputString"));
        btnIputString->setGeometry(QRect(10, 30, 80, 18));
        btnIputInt = new QPushButton(groupBox_3);
        btnIputInt->setObjectName(QString::fromUtf8("btnIputInt"));
        btnIputInt->setGeometry(QRect(110, 30, 80, 18));
        btnInputFloat = new QPushButton(groupBox_3);
        btnInputFloat->setObjectName(QString::fromUtf8("btnInputFloat"));
        btnInputFloat->setGeometry(QRect(10, 80, 80, 18));
        btnInputItem = new QPushButton(groupBox_3);
        btnInputItem->setObjectName(QString::fromUtf8("btnInputItem"));
        btnInputItem->setGeometry(QRect(110, 80, 80, 18));
        plainTextEdit = new QPlainTextEdit(Dialog);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(20, 330, 531, 64));
        pushButton_23 = new QPushButton(Dialog);
        pushButton_23->setObjectName(QString::fromUtf8("pushButton_23"));
        pushButton_23->setGeometry(QRect(290, 250, 171, 20));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Dialog", "\346\240\207\345\207\206\345\257\271\350\257\235\346\241\206", nullptr));
        btnOpen->setText(QCoreApplication::translate("Dialog", "\346\211\223\345\274\200\344\270\200\344\270\252\346\226\207\344\273\266", nullptr));
        btnOpenMulti->setText(QCoreApplication::translate("Dialog", "\346\211\223\345\274\200\345\244\232\344\270\252\346\226\207\344\273\266", nullptr));
        brnSelDir->setText(QCoreApplication::translate("Dialog", "\351\200\211\346\213\251\345\267\262\346\234\211\347\233\256\345\275\225", nullptr));
        btnSave->setText(QCoreApplication::translate("Dialog", "\344\277\235\345\255\230\346\226\207\344\273\266", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Dialog", "\351\200\211\346\213\251\351\242\234\350\211\262", nullptr));
        btnFont->setText(QCoreApplication::translate("Dialog", "\351\200\211\346\213\251\345\255\227\344\275\223", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Dialog", "\346\240\207\345\207\206\346\266\210\346\201\257\346\241\206 QMessageBox", nullptr));
        btnMsgQuestion->setText(QCoreApplication::translate("Dialog", "question", nullptr));
        btnMsgInformation->setText(QCoreApplication::translate("Dialog", "information", nullptr));
        btnMsgWarning_2->setText(QCoreApplication::translate("Dialog", "warning", nullptr));
        btnMsgCritical->setText(QCoreApplication::translate("Dialog", "critical", nullptr));
        pushButton_17->setText(QCoreApplication::translate("Dialog", "aboutQt", nullptr));
        pushButton_18->setText(QCoreApplication::translate("Dialog", "about", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Dialog", "\346\240\207\345\207\206\350\276\223\345\205\245\345\257\271\350\257\235\346\241\206", nullptr));
        btnIputString->setText(QCoreApplication::translate("Dialog", "\350\276\223\345\205\245\345\255\227\347\254\246\344\270\262", nullptr));
        btnIputInt->setText(QCoreApplication::translate("Dialog", "\350\276\223\345\205\245\346\225\264\346\225\260", nullptr));
        btnInputFloat->setText(QCoreApplication::translate("Dialog", "\350\276\223\345\205\245\346\265\256\347\202\271\346\225\260", nullptr));
        btnInputItem->setText(QCoreApplication::translate("Dialog", "\346\235\241\347\233\256\351\200\211\346\213\251\350\276\223\345\205\245", nullptr));
        pushButton_23->setText(QCoreApplication::translate("Dialog", "\346\270\205\351\231\244\346\226\207\346\234\254\346\241\206\345\206\205\345\256\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
