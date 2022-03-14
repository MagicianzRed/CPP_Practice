#include "smallwidget.h"
#include "ui_smallwidget.h"

smallwidget::smallwidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::smallwidget)
{
    ui->setupUi(this);

    // QSpinBox移动 QSlider跟着移动

    // 重载的函数要用函数指针表示他使用那个版本的函数
    void(QSpinBox::* spSingal)(int) =  &QSpinBox::valueChanged;
    connect(ui->spinBox, spSingal, ui->horizontalSlider, &QSlider::setValue);


    // QSlider移动 QSpinBox跟着移动
    connect(ui->horizontalSlider, &QSlider::valueChanged, ui->spinBox, &QSpinBox::setValue);
}

smallwidget::~smallwidget()
{
    delete ui;
}

void smallwidget::setnum(int num)
{
    ui->spinBox->setValue(num);
}

int smallwidget::getnum()
{
    return ui->spinBox->value();
}
