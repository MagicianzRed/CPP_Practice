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
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLineEdit *editDateTime;
    QDateTimeEdit *dateTimeEdit;
    QLineEdit *editTime;
    QLabel *label_2;
    QDateEdit *dateEdit;
    QPushButton *pushButton_3;
    QLabel *label;
    QLineEdit *editDate;
    QPushButton *btnSetTime;
    QTimeEdit *timeEdit;
    QLabel *label_4;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QPushButton *btnGetTime;
    QGroupBox *groupBox_2;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_4;
    QSpinBox *spinBox;
    QLCDNumber *LCDHour;
    QPushButton *btnStop;
    QPushButton *btnSetIntv;
    QProgressBar *progressBar;
    QPushButton *btnStart;
    QLCDNumber *LCDSec;
    QLCDNumber *LCDMin;
    QLabel *label_5;
    QLineEdit *labElapsTime;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QCalendarWidget *calendarWidget;
    QLabel *label_6;
    QLineEdit *editCalendar;
    QPushButton *pushButton_8;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(849, 491);
        gridLayoutWidget = new QWidget(Widget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 20, 511, 371));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(gridLayoutWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setAlignment(Qt::AlignJustify|Qt::AlignTop);
        groupBox->setCheckable(false);
        gridLayoutWidget_2 = new QWidget(groupBox);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(0, 17, 501, 171));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetMaximumSize);
        gridLayout_2->setContentsMargins(4, 4, 4, 4);
        editDateTime = new QLineEdit(gridLayoutWidget_2);
        editDateTime->setObjectName(QString::fromUtf8("editDateTime"));

        gridLayout_2->addWidget(editDateTime, 3, 2, 1, 1);

        dateTimeEdit = new QDateTimeEdit(gridLayoutWidget_2);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));
        dateTimeEdit->setTimeSpec(Qt::LocalTime);

        gridLayout_2->addWidget(dateTimeEdit, 3, 1, 1, 1);

        editTime = new QLineEdit(gridLayoutWidget_2);
        editTime->setObjectName(QString::fromUtf8("editTime"));

        gridLayout_2->addWidget(editTime, 1, 2, 1, 1);

        label_2 = new QLabel(gridLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        dateEdit = new QDateEdit(gridLayoutWidget_2);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setCorrectionMode(QAbstractSpinBox::CorrectToPreviousValue);

        gridLayout_2->addWidget(dateEdit, 2, 1, 1, 1);

        pushButton_3 = new QPushButton(gridLayoutWidget_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout_2->addWidget(pushButton_3, 2, 3, 1, 1);

        label = new QLabel(gridLayoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 2, 1, 2);

        editDate = new QLineEdit(gridLayoutWidget_2);
        editDate->setObjectName(QString::fromUtf8("editDate"));

        gridLayout_2->addWidget(editDate, 2, 2, 1, 1);

        btnSetTime = new QPushButton(gridLayoutWidget_2);
        btnSetTime->setObjectName(QString::fromUtf8("btnSetTime"));

        gridLayout_2->addWidget(btnSetTime, 3, 3, 1, 1);

        timeEdit = new QTimeEdit(gridLayoutWidget_2);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
        timeEdit->setDateTime(QDateTime(QDate(2011, 1, 1), QTime(0, 0, 0)));
        timeEdit->setTimeSpec(Qt::LocalTime);

        gridLayout_2->addWidget(timeEdit, 1, 1, 1, 1);

        label_4 = new QLabel(gridLayoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        pushButton_2 = new QPushButton(gridLayoutWidget_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout_2->addWidget(pushButton_2, 1, 3, 1, 1);

        label_3 = new QLabel(gridLayoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        btnGetTime = new QPushButton(gridLayoutWidget_2);
        btnGetTime->setObjectName(QString::fromUtf8("btnGetTime"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnGetTime->sizePolicy().hasHeightForWidth());
        btnGetTime->setSizePolicy(sizePolicy1);
        btnGetTime->setMaximumSize(QSize(16777215, 16777215));
        btnGetTime->setFocusPolicy(Qt::NoFocus);
        btnGetTime->setAutoDefault(false);

        gridLayout_2->addWidget(btnGetTime, 0, 0, 1, 2);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(gridLayoutWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayoutWidget_4 = new QWidget(groupBox_2);
        gridLayoutWidget_4->setObjectName(QString::fromUtf8("gridLayoutWidget_4"));
        gridLayoutWidget_4->setGeometry(QRect(10, 20, 491, 161));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(4, 4, 4, 4);
        spinBox = new QSpinBox(gridLayoutWidget_4);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        gridLayout_4->addWidget(spinBox, 1, 1, 1, 1);

        LCDHour = new QLCDNumber(gridLayoutWidget_4);
        LCDHour->setObjectName(QString::fromUtf8("LCDHour"));

        gridLayout_4->addWidget(LCDHour, 2, 0, 1, 1);

        btnStop = new QPushButton(gridLayoutWidget_4);
        btnStop->setObjectName(QString::fromUtf8("btnStop"));
        btnStop->setCheckable(false);
        btnStop->setAutoRepeat(false);
        btnStop->setFlat(false);

        gridLayout_4->addWidget(btnStop, 0, 1, 1, 1);

        btnSetIntv = new QPushButton(gridLayoutWidget_4);
        btnSetIntv->setObjectName(QString::fromUtf8("btnSetIntv"));

        gridLayout_4->addWidget(btnSetIntv, 1, 2, 1, 1);

        progressBar = new QProgressBar(gridLayoutWidget_4);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(0);

        gridLayout_4->addWidget(progressBar, 3, 0, 1, 3);

        btnStart = new QPushButton(gridLayoutWidget_4);
        btnStart->setObjectName(QString::fromUtf8("btnStart"));

        gridLayout_4->addWidget(btnStart, 0, 0, 1, 1);

        LCDSec = new QLCDNumber(gridLayoutWidget_4);
        LCDSec->setObjectName(QString::fromUtf8("LCDSec"));

        gridLayout_4->addWidget(LCDSec, 2, 2, 1, 1);

        LCDMin = new QLCDNumber(gridLayoutWidget_4);
        LCDMin->setObjectName(QString::fromUtf8("LCDMin"));

        gridLayout_4->addWidget(LCDMin, 2, 1, 1, 1);

        label_5 = new QLabel(gridLayoutWidget_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_4->addWidget(label_5, 1, 0, 1, 1);

        labElapsTime = new QLineEdit(gridLayoutWidget_4);
        labElapsTime->setObjectName(QString::fromUtf8("labElapsTime"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labElapsTime->sizePolicy().hasHeightForWidth());
        labElapsTime->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(labElapsTime, 0, 2, 1, 1);


        gridLayout->addWidget(groupBox_2, 1, 0, 1, 1);

        gridLayoutWidget_3 = new QWidget(Widget);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(520, 20, 271, 371));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        calendarWidget = new QCalendarWidget(gridLayoutWidget_3);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));

        gridLayout_3->addWidget(calendarWidget, 1, 0, 1, 2);

        label_6 = new QLabel(gridLayoutWidget_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_3->addWidget(label_6, 0, 0, 1, 1);

        editCalendar = new QLineEdit(gridLayoutWidget_3);
        editCalendar->setObjectName(QString::fromUtf8("editCalendar"));

        gridLayout_3->addWidget(editCalendar, 0, 1, 1, 1);

        pushButton_8 = new QPushButton(gridLayoutWidget_3);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        gridLayout_3->addWidget(pushButton_8, 2, 0, 1, 2);


        retranslateUi(Widget);
        QObject::connect(pushButton_8, SIGNAL(clicked()), Widget, SLOT(close()));

        btnGetTime->setDefault(false);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "\346\227\245\346\234\237\346\227\266\351\227\264", nullptr));
        dateTimeEdit->setDisplayFormat(QCoreApplication::translate("Widget", "yyyy/MM/dd HH:mm:ss", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\346\227\266 \351\227\264", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Widget", "\350\256\276\347\275\256\346\227\245\346\234\237", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\345\255\227\347\254\246\344\270\262\346\230\276\347\244\272", nullptr));
        btnSetTime->setText(QCoreApplication::translate("Widget", "\350\256\276\347\275\256\346\227\266\351\227\264\346\227\245\346\234\237", nullptr));
        timeEdit->setDisplayFormat(QCoreApplication::translate("Widget", "HH:mm:ss", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "\346\227\245\346\234\237\346\227\266\351\227\264", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Widget", "\350\256\276\347\275\256\346\227\266\351\227\264", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\346\227\245 \346\234\237", nullptr));
        btnGetTime->setText(QCoreApplication::translate("Widget", "\350\257\273\345\217\226\345\275\223\345\211\215\346\227\245\346\234\237\346\227\266\351\227\264", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "\345\256\232\346\227\266\345\231\250", nullptr));
        spinBox->setSuffix(QCoreApplication::translate("Widget", " ms", nullptr));
        btnStop->setText(QCoreApplication::translate("Widget", "\345\201\234\346\255\242", nullptr));
        btnSetIntv->setText(QCoreApplication::translate("Widget", "\350\256\276\347\275\256\345\221\250\346\234\237", nullptr));
        btnStart->setText(QCoreApplication::translate("Widget", "\345\274\200\345\247\213", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "\345\256\232\346\227\266\345\231\250", nullptr));
        label_6->setText(QCoreApplication::translate("Widget", "\351\200\211\346\213\251\347\232\204\346\227\245\346\234\237", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Widget", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
