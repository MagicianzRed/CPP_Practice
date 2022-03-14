#include "qwmainwind.h"
#include "ui_qwmainwind.h"

QWMainWind::QWMainWind(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::QWMainWind)
{
    ui->setupUi(this);
    iniUI();
}

QWMainWind::~QWMainWind()
{
    delete ui;
}

void QWMainWind::iniUI()
{
    // 状态栏组件
    fLabCurFile = new QLabel;
    fLabCurFile->setMinimumWidth(150);
    fLabCurFile->setText("当前文件: ");
    ui->statusBar->addWidget(fLabCurFile);

    progressBar1 = new QProgressBar;
    progressBar1->setMaximumWidth(200);
    progressBar1->setMinimum(5);
    progressBar1->setMaximum(50);
    progressBar1->setValue(ui->txtEdit->font().pointSize());
    ui->statusBar->addWidget(progressBar1);

    // 工具栏上添加组件
    spinFontSize = new QSpinBox;
    spinFontSize->setMinimum(5);
    spinFontSize->setMaximum(50);
    spinFontSize->setValue(ui->txtEdit->font().pointSize());
    spinFontSize->setMaximumWidth(50);
    ui->toolBar->addWidget(new QLabel("字体大小 "));
    ui->toolBar->addWidget(spinFontSize);   // SpionBox添加到工具栏

    ui->toolBar->addSeparator();            // 分割条
    ui->toolBar->addWidget(new QLabel(" 字体 "));
    comboFont = new QFontComboBox;
    comboFont->setMinimumWidth(150);
    ui->toolBar->addWidget(comboFont);      // 添加到工具栏

    setCentralWidget(ui->txtEdit);
}


void QWMainWind::on_actBold_toggled(bool checked)
{
    QTextCharFormat fmt;
    fmt = ui->txtEdit->currentCharFormat();
    if (checked)
    {
        fmt.setFontWeight(QFont::Bold);
    }
    else
    {
        fmt.setFontWeight(QFont::Normal);
    }
    ui->txtEdit->mergeCurrentCharFormat(fmt);
}


void QWMainWind::on_txtEdit_copyAvailable(bool b)
{
    // 更新cut, copy, paste的enabled的属性
    ui->actCut->setEnabled(b);
    ui->actCopy->setEnabled(b);
    ui->actPaste->setEnabled(ui->txtEdit->canPaste());
}


void QWMainWind::on_txtEdit_selectionChanged()
{
    // 更新粗体、斜体和下划线3种action的checked属性
    QTextCharFormat fmt;
    fmt = ui->txtEdit->currentCharFormat();     // 获取文字格式
    ui->actFontItalic->setChecked(fmt.fontItalic());
    ui->actBold->setChecked(fmt.font().bold());         //
    ui->actFontItalic->setChecked(fmt.fontUnderline()); // 是否有下划线
}





void QWMainWind::on_actFontItalic_toggled(bool arg1)
{
    QTextCharFormat fmt;
    fmt = ui->txtEdit->currentCharFormat();
    if (arg1)
    {
        fmt.setFontItalic(arg1);
    }
    else
    {
        fmt.setFontItalic(0);
    }
    ui->txtEdit->mergeCurrentCharFormat(fmt);
}


void QWMainWind::on_actFontUnderLine_toggled(bool arg1)
{
    QTextCharFormat fmt;
    fmt = ui->txtEdit->currentCharFormat();
    if (arg1)
    {
        fmt.setFontUnderline(arg1);
    }
    else
    {
        fmt.setFontUnderline(0);
    }
    ui->txtEdit->mergeCurrentCharFormat(fmt);
}

