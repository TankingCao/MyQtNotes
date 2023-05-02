

#include "widget.h"

#include <QApplication>
#include<iostream>
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    Process p1("A", 0, 3);
    Process p2("B", 2, 6);
    Process p3("C", 4, 4);
    Process p4("D", 6, 5);
    Process p5("E", 8, 2);

    vector<Process> plist = {p1, p5, p3, p4, p2};

    QVector<Info> v =  getFCFS(plist);
    for(auto i:v){
        QDebug()<<i.time<<i.run<<i.wait<<endl;
    }

//    Widget w;
//    w.show();


    return a.exec();
}

