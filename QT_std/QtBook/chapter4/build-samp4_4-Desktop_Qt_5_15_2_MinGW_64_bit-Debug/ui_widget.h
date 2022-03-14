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
#include <QtWidgets/QDial>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QDial *dial;
    QSlider *sliderAlpha;
    QProgressBar *progressBarV;
    QLabel *label_2;
    QSlider *sliderBlue;
    QLabel *label;
    QLabel *label_3;
    QTextEdit *textEdit;
    QSlider *sliderGreen;
    QScrollBar *horizontalScrollBarV;
    QLabel *label_12;
    QSlider *horizontalSlider;
    QRadioButton *radioBtnDec;
    QLabel *label_11;
    QRadioButton *radioBtnBin;
    QLabel *label_9;
    QLCDNumber *lcdNumber;
    QRadioButton *radioBtnHex;
    QRadioButton *radioBtnOct;
    QSlider *sliderRed;
    QLabel *label_13;
    QGridLayout *gridLayout_2;
    QLabel *label_7;
    QSlider *verticalSlider;
    QProgressBar *progressBar_2;
    QScrollBar *verticalScrollBar;
    QSpacerItem *verticalSpacer;
    QPushButton *btnClose;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(377, 299);
        horizontalLayout = new QHBoxLayout(Widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout->setContentsMargins(4, -1, 4, -1);
        dial = new QDial(Widget);
        dial->setObjectName(QString::fromUtf8("dial"));
        dial->setWrapping(false);
        dial->setNotchesVisible(true);

        gridLayout->addWidget(dial, 9, 0, 5, 1);

        sliderAlpha = new QSlider(Widget);
        sliderAlpha->setObjectName(QString::fromUtf8("sliderAlpha"));
        sliderAlpha->setMaximum(255);
        sliderAlpha->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(sliderAlpha, 3, 1, 1, 1);

        progressBarV = new QProgressBar(Widget);
        progressBarV->setObjectName(QString::fromUtf8("progressBarV"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(progressBarV->sizePolicy().hasHeightForWidth());
        progressBarV->setSizePolicy(sizePolicy);
        progressBarV->setValue(0);

        gridLayout->addWidget(progressBarV, 7, 0, 1, 3);

        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMargin(4);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        sliderBlue = new QSlider(Widget);
        sliderBlue->setObjectName(QString::fromUtf8("sliderBlue"));
        sliderBlue->setMaximum(255);
        sliderBlue->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(sliderBlue, 2, 1, 1, 1);

        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMargin(4);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_3 = new QLabel(Widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 4, 0, 1, 3);

        textEdit = new QTextEdit(Widget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout->addWidget(textEdit, 0, 2, 4, 1);

        sliderGreen = new QSlider(Widget);
        sliderGreen->setObjectName(QString::fromUtf8("sliderGreen"));
        sliderGreen->setMaximum(255);
        sliderGreen->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(sliderGreen, 1, 1, 1, 1);

        horizontalScrollBarV = new QScrollBar(Widget);
        horizontalScrollBarV->setObjectName(QString::fromUtf8("horizontalScrollBarV"));
        horizontalScrollBarV->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalScrollBarV, 6, 0, 1, 3);

        label_12 = new QLabel(Widget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout->addWidget(label_12, 8, 0, 1, 3);

        horizontalSlider = new QSlider(Widget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setTickPosition(QSlider::TicksAbove);

        gridLayout->addWidget(horizontalSlider, 5, 0, 1, 3);

        radioBtnDec = new QRadioButton(Widget);
        radioBtnDec->setObjectName(QString::fromUtf8("radioBtnDec"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(radioBtnDec->sizePolicy().hasHeightForWidth());
        radioBtnDec->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(radioBtnDec, 10, 2, 1, 1);

        label_11 = new QLabel(Widget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setMargin(4);

        gridLayout->addWidget(label_11, 2, 0, 1, 1);

        radioBtnBin = new QRadioButton(Widget);
        radioBtnBin->setObjectName(QString::fromUtf8("radioBtnBin"));
        sizePolicy1.setHeightForWidth(radioBtnBin->sizePolicy().hasHeightForWidth());
        radioBtnBin->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(radioBtnBin, 11, 2, 1, 1);

        label_9 = new QLabel(Widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMargin(4);

        gridLayout->addWidget(label_9, 3, 0, 1, 1);

        lcdNumber = new QLCDNumber(Widget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setSmallDecimalPoint(false);

        gridLayout->addWidget(lcdNumber, 9, 1, 5, 1);

        radioBtnHex = new QRadioButton(Widget);
        radioBtnHex->setObjectName(QString::fromUtf8("radioBtnHex"));
        sizePolicy1.setHeightForWidth(radioBtnHex->sizePolicy().hasHeightForWidth());
        radioBtnHex->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(radioBtnHex, 13, 2, 1, 1);

        radioBtnOct = new QRadioButton(Widget);
        radioBtnOct->setObjectName(QString::fromUtf8("radioBtnOct"));
        sizePolicy1.setHeightForWidth(radioBtnOct->sizePolicy().hasHeightForWidth());
        radioBtnOct->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(radioBtnOct, 12, 2, 1, 1);

        sliderRed = new QSlider(Widget);
        sliderRed->setObjectName(QString::fromUtf8("sliderRed"));
        sliderRed->setMaximum(255);
        sliderRed->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(sliderRed, 0, 1, 1, 1);

        label_13 = new QLabel(Widget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(label_13, 9, 2, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetMaximumSize);
        gridLayout_2->setContentsMargins(-1, -1, 4, -1);
        label_7 = new QLabel(Widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFrameShadow(QFrame::Plain);
        label_7->setTextFormat(Qt::AutoText);

        gridLayout_2->addWidget(label_7, 0, 0, 1, 5);

        verticalSlider = new QSlider(Widget);
        verticalSlider->setObjectName(QString::fromUtf8("verticalSlider"));
        verticalSlider->setOrientation(Qt::Vertical);

        gridLayout_2->addWidget(verticalSlider, 1, 0, 1, 1);

        progressBar_2 = new QProgressBar(Widget);
        progressBar_2->setObjectName(QString::fromUtf8("progressBar_2"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(progressBar_2->sizePolicy().hasHeightForWidth());
        progressBar_2->setSizePolicy(sizePolicy3);
        progressBar_2->setValue(24);
        progressBar_2->setTextVisible(true);
        progressBar_2->setOrientation(Qt::Vertical);
        progressBar_2->setInvertedAppearance(false);
        progressBar_2->setTextDirection(QProgressBar::TopToBottom);

        gridLayout_2->addWidget(progressBar_2, 1, 2, 1, 1);

        verticalScrollBar = new QScrollBar(Widget);
        verticalScrollBar->setObjectName(QString::fromUtf8("verticalScrollBar"));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(verticalScrollBar->sizePolicy().hasHeightForWidth());
        verticalScrollBar->setSizePolicy(sizePolicy4);
        verticalScrollBar->setOrientation(Qt::Vertical);

        gridLayout_2->addWidget(verticalScrollBar, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout_2->addItem(verticalSpacer, 2, 0, 1, 3);

        btnClose = new QPushButton(Widget);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        sizePolicy4.setHeightForWidth(btnClose->sizePolicy().hasHeightForWidth());
        btnClose->setSizePolicy(sizePolicy4);

        gridLayout_2->addWidget(btnClose, 3, 0, 1, 3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_2->addItem(verticalSpacer_2, 4, 0, 1, 3);


        horizontalLayout->addLayout(gridLayout_2);


        retranslateUi(Widget);
        QObject::connect(btnClose, SIGNAL(clicked()), Widget, SLOT(close()));
        QObject::connect(horizontalScrollBarV, SIGNAL(valueChanged(int)), progressBarV, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "Green", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Red", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\346\260\264\345\271\263", nullptr));
        label_12->setText(QCoreApplication::translate("Widget", "Dial \345\222\214 LCDNumber", nullptr));
        radioBtnDec->setText(QCoreApplication::translate("Widget", "\345\215\201\350\277\233\345\210\266", nullptr));
        label_11->setText(QCoreApplication::translate("Widget", "Blue", nullptr));
        radioBtnBin->setText(QCoreApplication::translate("Widget", "\344\272\214\350\277\233\345\210\266", nullptr));
        label_9->setText(QCoreApplication::translate("Widget", "Alpha", nullptr));
        radioBtnHex->setText(QCoreApplication::translate("Widget", "\345\215\201\345\205\255\350\277\233\345\210\266", nullptr));
        radioBtnOct->setText(QCoreApplication::translate("Widget", "\345\205\253\350\277\233\345\210\266", nullptr));
        label_13->setText(QCoreApplication::translate("Widget", "LCD\350\277\233\345\210\266\346\230\276\347\244\272", nullptr));
        label_7->setText(QCoreApplication::translate("Widget", "\345\236\202\347\233\264", nullptr));
        btnClose->setText(QCoreApplication::translate("Widget", "\345\205\263\351\227\255", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
