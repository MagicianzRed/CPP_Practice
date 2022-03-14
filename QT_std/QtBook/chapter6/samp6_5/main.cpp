#include "dialog.h"

#include <QApplication>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog *dlgLogin = new Dialog;
    if(dlgLogin->exec() == QDialog::Accepted)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
