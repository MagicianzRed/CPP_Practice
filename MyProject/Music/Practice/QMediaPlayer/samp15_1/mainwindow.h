#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMediaPlayer>
#include <QMediaPlaylist>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    QMediaPlayer *player;      // 播放器
    QMediaPlaylist  *playlist;  // 播放列表
    QString  durationTime;      // 总长度
    QString  positionTime;      // 当前播放到的位置
    Ui::MainWindow *ui;

private slots:
    // 定义槽函数
//    void OnStateChanged(QMediaPlayer::State state);
//    void OnPlaylistChanged(int positon);
//    void OnDurationChanged(qint64 duration);
//    void OnPositionChanged(qint64 positon);
};
#endif // MAINWINDOW_H
