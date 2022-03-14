#ifndef SMALLWIDGET_H
#define SMALLWIDGET_H

#include <QWidget>

namespace Ui {
class smallwidget;
}

class smallwidget : public QWidget
{
    Q_OBJECT

public:
    explicit smallwidget(QWidget *parent = nullptr);
    ~smallwidget();

     void setnum(int num);
     int getnum(void);

private:
    Ui::smallwidget *ui;
};

#endif // SMALLWIDGET_H
