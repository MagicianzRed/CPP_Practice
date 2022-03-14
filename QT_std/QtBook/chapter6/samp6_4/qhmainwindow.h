#ifndef QHMAINWINDOW_H
#define QHMAINWINDOW_H

#include <QMainWindow>
#include <QMdiSubWindow>

namespace Ui {
class QHMainWindow;
}

class QHMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit QHMainWindow(QWidget *parent = nullptr);
    ~QHMainWindow();

private slots:
    void on_actDocNew_triggered();

    void on_actDocOpen_triggered();

    void on_actCascade_triggered();

    void on_actTile_triggered();

    void on_actCloseALL_triggered();


    void on_actViewMode_triggered(bool checked);


    void on_mdiArea_subWindowActivated(QMdiSubWindow *arg1);

private:
    Ui::QHMainWindow *ui;
};

#endif // QHMAINWINDOW_H
