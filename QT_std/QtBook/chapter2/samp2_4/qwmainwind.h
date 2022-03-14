#ifndef QWMAINWIND_H
#define QWMAINWIND_H

#include <QMainWindow>
#include <QLabel>
#include <QProgressBar>
#include <QSpinBox>
#include <QFontComboBox>

QT_BEGIN_NAMESPACE
namespace Ui { class QWMainWind; }
QT_END_NAMESPACE

class QWMainWind : public QMainWindow
{
    Q_OBJECT

public:
    QWMainWind(QWidget *parent = nullptr);
    ~QWMainWind();

private slots:
    void on_actBold_toggled(bool checked);

    void on_txtEdit_copyAvailable(bool b);

    void on_txtEdit_selectionChanged();

    void on_actFontItalic_toggled(bool arg1);

    void on_actFontUnderLine_toggled(bool arg1);

private:
    QLabel *fLabCurFile;        // 状态栏里显示当前文件的Label
    QProgressBar *progressBar1; // 状态栏上的进度条
    QSpinBox *spinFontSize;     // 字体大小 spinBox
    QFontComboBox *comboFont;   // 字体名称 comboBox
    void iniUI();
    Ui::QWMainWind *ui;
};
#endif // QWMAINWIND_H
