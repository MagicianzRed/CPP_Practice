/********************************************************************************
** Form generated from reading UI file 'qmywidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMYWIDGET_H
#define UI_QMYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QmyWidget
{
public:
    QLabel *label;
    QLabel *label_2;
    QSpinBox *spinBoy;
    QSpinBox *spinGirl;
    QPushButton *btnBoyInc;
    QPushButton *btnGirlInc;
    QPushButton *btnClassInfo;
    QPushButton *btnClear;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *QmyWidget)
    {
        if (QmyWidget->objectName().isEmpty())
            QmyWidget->setObjectName(QString::fromUtf8("QmyWidget"));
        QmyWidget->resize(800, 600);
        label = new QLabel(QmyWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 25, 71, 31));
        label_2 = new QLabel(QmyWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 50, 71, 31));
        spinBoy = new QSpinBox(QmyWidget);
        spinBoy->setObjectName(QString::fromUtf8("spinBoy"));
        spinBoy->setGeometry(QRect(120, 30, 91, 22));
        spinGirl = new QSpinBox(QmyWidget);
        spinGirl->setObjectName(QString::fromUtf8("spinGirl"));
        spinGirl->setGeometry(QRect(120, 60, 91, 22));
        btnBoyInc = new QPushButton(QmyWidget);
        btnBoyInc->setObjectName(QString::fromUtf8("btnBoyInc"));
        btnBoyInc->setGeometry(QRect(250, 30, 80, 18));
        btnGirlInc = new QPushButton(QmyWidget);
        btnGirlInc->setObjectName(QString::fromUtf8("btnGirlInc"));
        btnGirlInc->setGeometry(QRect(250, 60, 80, 21));
        btnClassInfo = new QPushButton(QmyWidget);
        btnClassInfo->setObjectName(QString::fromUtf8("btnClassInfo"));
        btnClassInfo->setGeometry(QRect(350, 30, 101, 21));
        btnClear = new QPushButton(QmyWidget);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));
        btnClear->setGeometry(QRect(350, 60, 80, 18));
        plainTextEdit = new QPlainTextEdit(QmyWidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(43, 83, 381, 281));

        retranslateUi(QmyWidget);
        QObject::connect(btnClear, SIGNAL(clicked()), plainTextEdit, SLOT(clear()));
        QObject::connect(btnBoyInc, SIGNAL(clicked()), spinBoy, SLOT(stepUp()));
        QObject::connect(btnGirlInc, SIGNAL(clicked()), spinGirl, SLOT(stepUp()));

        QMetaObject::connectSlotsByName(QmyWidget);
    } // setupUi

    void retranslateUi(QWidget *QmyWidget)
    {
        QmyWidget->setWindowTitle(QCoreApplication::translate("QmyWidget", "QmyWidget", nullptr));
        label->setText(QCoreApplication::translate("QmyWidget", "\350\256\276\347\275\256\347\224\267\347\224\237\345\271\264\351\276\204", nullptr));
        label_2->setText(QCoreApplication::translate("QmyWidget", "\350\256\276\347\275\256\345\245\263\347\224\237\345\271\264\351\276\204", nullptr));
        btnBoyInc->setText(QCoreApplication::translate("QmyWidget", "boy\351\225\277\345\244\247\344\270\200\345\262\201", nullptr));
        btnGirlInc->setText(QCoreApplication::translate("QmyWidget", "girl\351\225\277\345\244\247\344\270\200\345\262\201", nullptr));
        btnClassInfo->setText(QCoreApplication::translate("QmyWidget", "\347\261\273\347\232\204\345\205\203\345\257\271\350\261\241\344\277\241\346\201\257", nullptr));
        btnClear->setText(QCoreApplication::translate("QmyWidget", "\346\270\205\347\251\272\346\226\207\346\234\254\346\241\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QmyWidget: public Ui_QmyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMYWIDGET_H
