
#include "student.h"
#include "QDebug"

Student::Student(QObject *parent)
    : QObject{parent}
{

}

void Student::treat(){
    qDebug()<<"请老师吃饭";
}

void Student::treat(QString foodName){
    //去除QString的引号，QString->utf8->char*
    qDebug()<<"请老师吃饭，老师要吃:"<<foodName.toUtf8().data();
}
