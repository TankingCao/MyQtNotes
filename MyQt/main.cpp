#include "Qapplication.h"
#include "myWidget.h"
//argc命令行变量个数，argv命令行变量数组
int main(int argc, char *argv[]) {
    //应用程序对象，有且仅有一个
    QApplication a(argc, argv);

    //窗口对象,默认不显示，需要调用show方法
    myWidget mw;
    mw.show();


    //让应用程序对象进入消息循环，不会一闪而过
    return QApplication::exec();
}
