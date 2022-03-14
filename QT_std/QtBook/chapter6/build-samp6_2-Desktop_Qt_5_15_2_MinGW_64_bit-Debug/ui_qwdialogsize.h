/********************************************************************************
** Form generated from reading UI file 'qwdialogsize.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QWDIALOGSIZE_H
#define UI_QWDIALOGSIZE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_QWDialogSize
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QSpinBox *spinBoxColumn;
    QSpinBox *spinBoxRow;
    QPushButton *btnOk;
    QPushButton *btnCancel;

    void setupUi(QDialog *QWDialogSize)
    {
        if (QWDialogSize->objectName().isEmpty())
            QWDialogSize->setObjectName(QString::fromUtf8("QWDialogSize"));
        QWDialogSize->resize(365, 180);
        groupBox = new QGroupBox(QWDialogSize);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 20, 211, 111));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(9, 31, 51, 21));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(9, 81, 51, 21));
        spinBoxColumn = new QSpinBox(groupBox);
        spinBoxColumn->setObjectName(QString::fromUtf8("spinBoxColumn"));
        spinBoxColumn->setGeometry(QRect(70, 30, 111, 22));
        spinBoxRow = new QSpinBox(groupBox);
        spinBoxRow->setObjectName(QString::fromUtf8("spinBoxRow"));
        spinBoxRow->setGeometry(QRect(70, 80, 111, 22));
        btnOk = new QPushButton(QWDialogSize);
        btnOk->setObjectName(QString::fromUtf8("btnOk"));
        btnOk->setGeometry(QRect(240, 30, 80, 18));
        btnCancel = new QPushButton(QWDialogSize);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setGeometry(QRect(240, 110, 80, 18));

        retranslateUi(QWDialogSize);
        QObject::connect(btnOk, SIGNAL(clicked()), QWDialogSize, SLOT(accept()));
        QObject::connect(btnCancel, SIGNAL(clicked()), QWDialogSize, SLOT(reject()));

        QMetaObject::connectSlotsByName(QWDialogSize);
    } // setupUi

    void retranslateUi(QDialog *QWDialogSize)
    {
        QWDialogSize->setWindowTitle(QCoreApplication::translate("QWDialogSize", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QWDialogSize", "\350\256\276\347\275\256\350\241\250\346\240\274\345\207\275\346\225\260\345\222\214\345\210\227\346\225\260", nullptr));
        label->setText(QCoreApplication::translate("QWDialogSize", "\345\210\227    \346\225\260", nullptr));
        label_2->setText(QCoreApplication::translate("QWDialogSize", "\350\241\214    \346\225\260", nullptr));
        btnOk->setText(QCoreApplication::translate("QWDialogSize", "\347\241\256\345\256\232", nullptr));
        btnCancel->setText(QCoreApplication::translate("QWDialogSize", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QWDialogSize: public Ui_QWDialogSize {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QWDIALOGSIZE_H
