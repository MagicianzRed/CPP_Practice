#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    // 重置窗口大小
    resize(800, 600);

    // 菜单栏创建
    QMenuBar* bar = menuBar();
    // 将菜单栏放入窗口中
    setMenuBar(bar);

    // 菜单栏最多只有一个
    // 创建菜单
    QMenu* flieMenu = bar->addMenu("文件");
    QMenu* editMenu = bar->addMenu("编辑");

    // 创建菜单项目
    QAction* Createaction =  flieMenu->addAction("新建");
    // 添加分隔符
    flieMenu->addSeparator();
    editMenu->addAction("打开");

    // 工具栏目 可以有多个

    QToolBar* toolbar = new QToolBar(this);
    addToolBar(Qt::LeftToolBarArea, toolbar);

    // 后期设置只允许左右停靠
    toolbar->setAllowedAreas(Qt::LeftToolBarArea | Qt::RightToolBarArea);
    // 设置浮动
    toolbar->setFloatable(false);
    // 设置移动
    toolbar->setMovable(false);

    // 工具栏 可以有多个
    // 观察这个addAction参数。
    toolbar->addAction(Createaction);

    // 工具栏中添加一些控件
    QPushButton* btn = new QPushButton("删除", this);
    toolbar->addWidget(btn);

    // 状态栏 最多只有一个
    QStatusBar* stbar = statusBar();

    setStatusBar(stbar);

    // 放置标签控件
    QLabel* label = new QLabel("提示信息", this);
    stbar->addWidget(label);

    QLabel* label2 = new QLabel("右侧提示信息", this);
    stbar->addPermanentWidget(label2);

    // 铆接部件（浮动窗口）可以有多个
    QDockWidget* dockwidget = new QDockWidget("asd", this);
    addDockWidget(Qt::BottomDockWidgetArea, dockwidget);

    // 设置中心部件
    QTextEdit* edit = new QTextEdit(this);

    setCentralWidget(edit);
}

MainWindow::~MainWindow()
{
}

