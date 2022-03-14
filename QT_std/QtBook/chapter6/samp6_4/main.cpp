#include "myformdoc.h"
#include "qhmainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QApplication a(argc, argv);
    QHMainWindow w;
    w.show();
    return a.exec();
}
