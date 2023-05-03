
#include "widget.h"

#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    int arr[100];

    for(int i=0;i<100;i++){
        arr[i] = i;
    }

    int len = sizeof(arr)/sizeof(int);

    Widget w(arr,len);
    w.show();
    return a.exec();
}
