
#ifndef TEACHER_H
#define TEACHER_H


#include <QObject>


class Teacher : public QObject
{
    Q_OBJECT
public:
    explicit Teacher(QObject *parent = nullptr);

signals:
    //下课后，老师发出饿了的信号
    void hungry();

    //重载版本，传入老师具体想吃的东西
    void hungry(QString foodName);

};

#endif // TEACHER_H
