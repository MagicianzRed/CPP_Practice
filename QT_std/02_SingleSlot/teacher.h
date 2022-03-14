#ifndef TEACHER_H
#define TEACHER_H

#include <QObject>

class Teacher : public QObject
{
    Q_OBJECT
public:
    explicit Teacher(QObject *parent = nullptr);

signals:
    // 信号不需要实现，无返回值
    void hungry();

    void hungry(QString foodname);

};

#endif // TEACHER_H
