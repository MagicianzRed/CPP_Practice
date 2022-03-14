/********************************************************************************
** Form generated from reading UI file 'qwdialogheaders.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QWDIALOGHEADERS_H
#define UI_QWDIALOGHEADERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_QWDialogHeaders
{
public:
    QGroupBox *groupBox;
    QListView *listView;
    QPushButton *btnOk;
    QPushButton *btnCancel;

    void setupUi(QDialog *QWDialogHeaders)
    {
        if (QWDialogHeaders->objectName().isEmpty())
            QWDialogHeaders->setObjectName(QString::fromUtf8("QWDialogHeaders"));
        QWDialogHeaders->resize(400, 300);
        groupBox = new QGroupBox(QWDialogHeaders);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 30, 181, 161));
        listView = new QListView(groupBox);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(10, 30, 141, 111));
        btnOk = new QPushButton(QWDialogHeaders);
        btnOk->setObjectName(QString::fromUtf8("btnOk"));
        btnOk->setGeometry(QRect(240, 70, 80, 18));
        btnCancel = new QPushButton(QWDialogHeaders);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setGeometry(QRect(240, 120, 80, 18));

        retranslateUi(QWDialogHeaders);
        QObject::connect(btnOk, SIGNAL(clicked()), QWDialogHeaders, SLOT(accept()));
        QObject::connect(btnCancel, SIGNAL(clicked()), QWDialogHeaders, SLOT(reject()));

        QMetaObject::connectSlotsByName(QWDialogHeaders);
    } // setupUi

    void retranslateUi(QDialog *QWDialogHeaders)
    {
        QWDialogHeaders->setWindowTitle(QCoreApplication::translate("QWDialogHeaders", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QWDialogHeaders", "\350\241\250\345\244\264\346\240\207\351\242\230", nullptr));
        btnOk->setText(QCoreApplication::translate("QWDialogHeaders", "\347\241\256\345\256\232", nullptr));
        btnCancel->setText(QCoreApplication::translate("QWDialogHeaders", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QWDialogHeaders: public Ui_QWDialogHeaders {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QWDIALOGHEADERS_H
