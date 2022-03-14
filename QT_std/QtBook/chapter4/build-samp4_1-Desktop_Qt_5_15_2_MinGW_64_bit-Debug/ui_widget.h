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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLineEdit *editPrice;
    QPushButton *btnCal;
    QLabel *label;
    QLineEdit *editToal;
    QLabel *label_2;
    QLineEdit *editNum;
    QLabel *label_3;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_2;
    QLineEdit *editHex;
    QPushButton *btnHex;
    QPushButton *btnDec;
    QLabel *label_6;
    QLineEdit *editDec;
    QLineEdit *editBin;
    QPushButton *btnBin;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(381, 335);
        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(60, 60, 240, 188));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMaximumSize);
        gridLayout->setContentsMargins(4, 4, 4, 4);
        editPrice = new QLineEdit(widget);
        editPrice->setObjectName(QString::fromUtf8("editPrice"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(editPrice->sizePolicy().hasHeightForWidth());
        editPrice->setSizePolicy(sizePolicy);

        gridLayout->addWidget(editPrice, 0, 3, 1, 1);

        btnCal = new QPushButton(widget);
        btnCal->setObjectName(QString::fromUtf8("btnCal"));
        sizePolicy.setHeightForWidth(btnCal->sizePolicy().hasHeightForWidth());
        btnCal->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnCal, 1, 1, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        editToal = new QLineEdit(widget);
        editToal->setObjectName(QString::fromUtf8("editToal"));
        sizePolicy.setHeightForWidth(editToal->sizePolicy().hasHeightForWidth());
        editToal->setSizePolicy(sizePolicy);

        gridLayout->addWidget(editToal, 1, 3, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        editNum = new QLineEdit(widget);
        editNum->setObjectName(QString::fromUtf8("editNum"));
        sizePolicy.setHeightForWidth(editNum->sizePolicy().hasHeightForWidth());
        editNum->setSizePolicy(sizePolicy);

        gridLayout->addWidget(editNum, 0, 1, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_3, 1, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout->addItem(verticalSpacer);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetMaximumSize);
        gridLayout_2->setContentsMargins(4, 4, 4, 4);
        editHex = new QLineEdit(widget);
        editHex->setObjectName(QString::fromUtf8("editHex"));
        sizePolicy.setHeightForWidth(editHex->sizePolicy().hasHeightForWidth());
        editHex->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(editHex, 2, 1, 1, 1);

        btnHex = new QPushButton(widget);
        btnHex->setObjectName(QString::fromUtf8("btnHex"));
        sizePolicy.setHeightForWidth(btnHex->sizePolicy().hasHeightForWidth());
        btnHex->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(btnHex, 2, 2, 1, 1);

        btnDec = new QPushButton(widget);
        btnDec->setObjectName(QString::fromUtf8("btnDec"));
        sizePolicy.setHeightForWidth(btnDec->sizePolicy().hasHeightForWidth());
        btnDec->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(btnDec, 0, 2, 1, 1);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_6, 2, 0, 1, 1);

        editDec = new QLineEdit(widget);
        editDec->setObjectName(QString::fromUtf8("editDec"));
        sizePolicy.setHeightForWidth(editDec->sizePolicy().hasHeightForWidth());
        editDec->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(editDec, 0, 1, 1, 1);

        editBin = new QLineEdit(widget);
        editBin->setObjectName(QString::fromUtf8("editBin"));
        sizePolicy.setHeightForWidth(editBin->sizePolicy().hasHeightForWidth());
        editBin->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(editBin, 1, 1, 1, 1);

        btnBin = new QPushButton(widget);
        btnBin->setObjectName(QString::fromUtf8("btnBin"));
        sizePolicy.setHeightForWidth(btnBin->sizePolicy().hasHeightForWidth());
        btnBin->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(btnBin, 1, 2, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_5, 1, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_2);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        btnCal->setText(QCoreApplication::translate("Widget", "\350\256\241\347\256\227", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\346\225\260\351\207\217", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\345\215\225\344\273\267", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\346\200\273\344\273\267", nullptr));
        btnHex->setText(QCoreApplication::translate("Widget", "\350\275\254\345\214\226\344\270\272\345\205\266\344\273\226\350\277\233\345\210\266", nullptr));
        btnDec->setText(QCoreApplication::translate("Widget", "\350\275\254\345\214\226\344\270\272\345\205\266\344\273\226\350\277\233\345\210\266", nullptr));
        label_6->setText(QCoreApplication::translate("Widget", "\345\215\201\345\205\255\350\277\233\345\210\266", nullptr));
        btnBin->setText(QCoreApplication::translate("Widget", "\350\275\254\345\214\226\344\270\272\345\205\266\344\273\226\350\277\233\345\210\266", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "\345\215\201 \350\277\233 \345\210\266", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "\344\272\214 \350\277\233 \345\210\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
