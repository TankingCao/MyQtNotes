
#ifndef STUDENT_H
#define STUDENT_H


#include <QObject>


class Student : public QObject
{
    Q_OBJECT
public:
    explicit Student(QObject *parent = nullptr);

signals:

public slots:
    //自定义槽，请老师吃饭
    void treat();

    void treat(QString foodName);

};

#endif // STUDENT_H
