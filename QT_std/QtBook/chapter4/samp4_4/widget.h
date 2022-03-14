#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QSlider>
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_sliderRed_valueChanged(int value);

    void on_dial_valueChanged(int value);

    void on_radioBtnDec_clicked();

    void on_radioBtnBin_clicked();

    void on_radioBtnOct_clicked();

    void on_radioBtnHex_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
