#include "mywidget.h"

#include <QApplication>// 包含一个应用类程序头文件

/*对于嵌套窗口，坐标是相对于父窗口来说的 ———— 从窗口的左上角为原点*/


int main(int argc, char *argv[])
{
    // a 应用程序对象，在QT中，应用程序对象 有且仅有一个
    QApplication a(argc, argv);
    // 窗口对象，myWidget父类 -> QWidget
    myWidget w;
    w.show();
    return a.exec();
}
