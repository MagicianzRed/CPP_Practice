/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QPushButton *btnSetHeader;
    QPushButton *btnSetRow;
    QSpinBox *spinNum;
    QPushButton *btnIniData;
    QPushButton *btnInsertRow;
    QPushButton *btnDelCurRow;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *btnReadToEdit;
    QCheckBox *checkBoxEditable;
    QCheckBox *checkBoxHeaderH;
    QCheckBox *checkBoxRowColor;
    QCheckBox *checkBoxHeaderV;
    QRadioButton *radioButton_2;
    QPushButton *btnAppendRow;
    QRadioButton *radioButton;
    QSplitter *splitter;
    QTableWidget *tableWidget;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 200, 541));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setHorizontalSpacing(3);
        formLayout->setVerticalSpacing(20);
        btnSetHeader = new QPushButton(groupBox);
        btnSetHeader->setObjectName(QString::fromUtf8("btnSetHeader"));

        formLayout->setWidget(0, QFormLayout::SpanningRole, btnSetHeader);

        btnSetRow = new QPushButton(groupBox);
        btnSetRow->setObjectName(QString::fromUtf8("btnSetRow"));

        formLayout->setWidget(1, QFormLayout::LabelRole, btnSetRow);

        spinNum = new QSpinBox(groupBox);
        spinNum->setObjectName(QString::fromUtf8("spinNum"));

        formLayout->setWidget(1, QFormLayout::FieldRole, spinNum);

        btnIniData = new QPushButton(groupBox);
        btnIniData->setObjectName(QString::fromUtf8("btnIniData"));

        formLayout->setWidget(3, QFormLayout::SpanningRole, btnIniData);

        btnInsertRow = new QPushButton(groupBox);
        btnInsertRow->setObjectName(QString::fromUtf8("btnInsertRow"));

        formLayout->setWidget(5, QFormLayout::LabelRole, btnInsertRow);

        btnDelCurRow = new QPushButton(groupBox);
        btnDelCurRow->setObjectName(QString::fromUtf8("btnDelCurRow"));

        formLayout->setWidget(7, QFormLayout::SpanningRole, btnDelCurRow);

        pushButton_7 = new QPushButton(groupBox);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        formLayout->setWidget(9, QFormLayout::LabelRole, pushButton_7);

        pushButton_8 = new QPushButton(groupBox);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        formLayout->setWidget(9, QFormLayout::FieldRole, pushButton_8);

        btnReadToEdit = new QPushButton(groupBox);
        btnReadToEdit->setObjectName(QString::fromUtf8("btnReadToEdit"));

        formLayout->setWidget(11, QFormLayout::SpanningRole, btnReadToEdit);

        checkBoxEditable = new QCheckBox(groupBox);
        checkBoxEditable->setObjectName(QString::fromUtf8("checkBoxEditable"));
        checkBoxEditable->setChecked(true);

        formLayout->setWidget(13, QFormLayout::LabelRole, checkBoxEditable);

        checkBoxHeaderH = new QCheckBox(groupBox);
        checkBoxHeaderH->setObjectName(QString::fromUtf8("checkBoxHeaderH"));
        checkBoxHeaderH->setChecked(true);

        formLayout->setWidget(15, QFormLayout::LabelRole, checkBoxHeaderH);

        checkBoxRowColor = new QCheckBox(groupBox);
        checkBoxRowColor->setObjectName(QString::fromUtf8("checkBoxRowColor"));
        checkBoxRowColor->setChecked(false);

        formLayout->setWidget(13, QFormLayout::FieldRole, checkBoxRowColor);

        checkBoxHeaderV = new QCheckBox(groupBox);
        checkBoxHeaderV->setObjectName(QString::fromUtf8("checkBoxHeaderV"));
        checkBoxHeaderV->setChecked(true);

        formLayout->setWidget(15, QFormLayout::FieldRole, checkBoxHeaderV);

        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        formLayout->setWidget(16, QFormLayout::FieldRole, radioButton_2);

        btnAppendRow = new QPushButton(groupBox);
        btnAppendRow->setObjectName(QString::fromUtf8("btnAppendRow"));

        formLayout->setWidget(5, QFormLayout::FieldRole, btnAppendRow);

        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        formLayout->setWidget(16, QFormLayout::LabelRole, radioButton);

        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(220, 20, 501, 501));
        splitter->setOrientation(Qt::Vertical);
        tableWidget = new QTableWidget(splitter);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        splitter->addWidget(tableWidget);
        plainTextEdit = new QPlainTextEdit(splitter);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        splitter->addWidget(plainTextEdit);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "GroupBox", nullptr));
        btnSetHeader->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\350\241\250\345\244\264", nullptr));
        btnSetRow->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\350\241\214\346\225\260", nullptr));
        btnIniData->setText(QCoreApplication::translate("MainWindow", "\345\210\235\345\247\213\345\214\226\350\241\250\346\240\274\346\225\260\346\215\256", nullptr));
        btnInsertRow->setText(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\350\241\214", nullptr));
        btnDelCurRow->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\345\275\223\345\211\215\350\241\214", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "\350\207\252\345\212\250\350\260\203\350\212\202\350\241\214\351\253\230(\346\234\252\345\256\236\347\216\260)", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "\350\207\252\345\212\250\350\260\203\350\212\202\345\210\227\345\256\275(\346\234\252\345\256\236\347\216\260)", nullptr));
        btnReadToEdit->setText(QCoreApplication::translate("MainWindow", "\350\257\273\345\217\226\350\241\250\346\240\274\345\206\205\345\256\271\345\210\260\346\226\207\346\234\254", nullptr));
        checkBoxEditable->setText(QCoreApplication::translate("MainWindow", "\350\241\250\346\240\274\345\217\257\347\274\226\350\276\221", nullptr));
        checkBoxHeaderH->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\350\241\214\350\241\250\345\244\264", nullptr));
        checkBoxRowColor->setText(QCoreApplication::translate("MainWindow", "\351\227\264\351\232\224\350\241\214\345\272\225\350\211\262", nullptr));
        checkBoxHeaderV->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\345\210\227\350\241\250\345\244\264", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "RadioButton", nullptr));
        btnAppendRow->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\350\241\214", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "RadioButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
