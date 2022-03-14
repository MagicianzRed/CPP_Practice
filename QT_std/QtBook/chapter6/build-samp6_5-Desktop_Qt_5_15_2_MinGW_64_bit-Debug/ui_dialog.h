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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *lineEditName;
    QLineEdit *lineEditPassWrd;
    QLabel *labelName;
    QLabel *labelPasswrd;
    QPushButton *pushButtonOk;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(600, 351);
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 20, 311, 231));
        label->setPixmap(QPixmap(QString::fromUtf8(":/backgrounds/ScreenShot/2022116102642.png")));
        label->setScaledContents(true);
        gridLayoutWidget = new QWidget(Dialog);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 270, 521, 80));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEditName = new QLineEdit(gridLayoutWidget);
        lineEditName->setObjectName(QString::fromUtf8("lineEditName"));

        gridLayout->addWidget(lineEditName, 0, 1, 1, 1, Qt::AlignLeft);

        lineEditPassWrd = new QLineEdit(gridLayoutWidget);
        lineEditPassWrd->setObjectName(QString::fromUtf8("lineEditPassWrd"));

        gridLayout->addWidget(lineEditPassWrd, 0, 3, 1, 1, Qt::AlignLeft);

        labelName = new QLabel(gridLayoutWidget);
        labelName->setObjectName(QString::fromUtf8("labelName"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        labelName->setFont(font);
        labelName->setTextFormat(Qt::RichText);

        gridLayout->addWidget(labelName, 0, 0, 1, 1, Qt::AlignLeft);

        labelPasswrd = new QLabel(gridLayoutWidget);
        labelPasswrd->setObjectName(QString::fromUtf8("labelPasswrd"));
        labelPasswrd->setFont(font);

        gridLayout->addWidget(labelPasswrd, 0, 2, 1, 1, Qt::AlignLeft);

        pushButtonOk = new QPushButton(gridLayoutWidget);
        pushButtonOk->setObjectName(QString::fromUtf8("pushButtonOk"));

        gridLayout->addWidget(pushButtonOk, 0, 4, 1, 1);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QString());
        labelName->setText(QCoreApplication::translate("Dialog", "\347\224\250\346\210\267\345\220\215", nullptr));
        labelPasswrd->setText(QCoreApplication::translate("Dialog", "\345\257\206\347\240\201", nullptr));
        pushButtonOk->setText(QCoreApplication::translate("Dialog", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
