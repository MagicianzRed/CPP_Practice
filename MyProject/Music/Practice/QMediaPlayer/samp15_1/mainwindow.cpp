#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QListWidgetItem>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    player = new QMediaPlayer(this);        // 创建播放器
    playlist = new QMediaPlaylist(this);    // 创建播放列表

    player->setPlaylist(playlist);                      // 设置播放器的播放列表
    playlist->setPlaybackMode(QMediaPlaylist::Loop);    // 循环播放模式

}

MainWindow::~MainWindow()
{
    delete ui;
}

/**
 * @brief MainWindow::OnStateChanged
 * 播放状态变化，更新按钮状体
 * @param state
 * 用于接受 QMediaPlayer 发出的播放状态变换信号
 */
//void MainWindow::OnStateChanged(QMediaPlayer::State state)
//{
//    ui->btnPlay->setEnabled(!(state == QMediaPlayer::PlayingState));
//    ui->btnPause->setEnabled(state == QMediaPlayer::PlayingState);
//    ui->btnStop->setEnabled(state == QMediaPlayer::PlayingState);
//}

/**
 * @brief MainWindow::OnPlaylistChanged
 * 播放放列表变化，更新当前播放文件名显示
 * @param positon
 */
//void MainWindow::OnPlaylistChanged(int positon)
//{
//    ui->listWidget->setCurrentRow(positon);
//}

