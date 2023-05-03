
#include "widget.h"

#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    int len=10;

    int arr[len];

    for(int i=0;i<len;i++){
        arr[i] = 20-i;
    }



    Widget w(arr,len);
    w.show();
    return a.exec();
}
