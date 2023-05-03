

#include "widget.h"
#include<QDebug>
#include <QApplication>
#include<QVector>
#include<iostream>
#include"fcfs.h"

using namespace std;


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    Process p1("A", 0, 3);
    Process p2("B", 2, 6);
    Process p3("C", 4, 4);
    Process p4("D", 6, 5);
    Process p5("E", 8, 2);

    QVector<Process> plist = {p1, p5, p3, p4, p2};

    QVector<Info> info =  getFcfs(plist);



    Widget w(info);
    w.show();


    return a.exec();
}

