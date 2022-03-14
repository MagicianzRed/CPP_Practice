#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QDir>
#include <QFileDialog>
#include <QColorDialog>
#include <QFontDialog>
#include <QInputDialog>
#include <QLineEdit>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_btnOpen_clicked();

    void on_btnOpenMulti_clicked();

    void on_brnSelDir_clicked();

    void on_btnSave_clicked();

    void on_pushButton_5_clicked();

    void on_btnFont_clicked();

    void on_btnIputString_clicked();

    void on_btnIputInt_clicked();

    void on_btnInputFloat_clicked();

    void on_btnInputItem_clicked();

    void on_btnMsgInformation_clicked();

    void on_btnMsgWarning_2_clicked();

    void on_btnMsgCritical_clicked();

    void on_btnMsgQuestion_clicked();

private:
    Ui::Dialog *ui;
};
#endif // DIALOG_H
