#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actOpen_triggered();

    void on_actSave_triggered();

private:
    typedef enum{
        lineReading = 0,
        textReading,
    }TextReadingStaus;

    bool OpenTextByIODevice(const QString &aFileName);
    bool SaveTextByIODevice(const QString &aFileName);
    bool OpenTextByStream(const QString &aFileName, TextReadingStaus status = textReading);
    bool SaveTextByStream(const QString &aFileName);
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
