#include<QDebug>
#include "widget.h"
#include "ui_widget.h"
#include"teacher.h"
#include"student.h"
#include<QPushButton>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //创建学生老师对象
    s = new Student(this);
    t = new Teacher(this);

    //    //连接,老师发出饿了的信号，学生接受信号然后请老师吃饭
    //    connect(t,&Teacher::hungry,s,&Student::treat);

    //    //下课
    //    classIsOver();

    //连接带参数且为重载版本的信号和槽
    //函数指针 -> 函数地址
    //分别创建两个重载版本有参函数的函数指针
    void(Teacher::*tSignal)(QString) =&Teacher::hungry;
    void(Student::*sSignal)(QString) = &Student::treat;
    connect(t,tSignal,s,sSignal);


    //点击下课按钮才触发下课事件
    //    classIsOver();
    QPushButton *btn = new QPushButton("下课",this);

    //点击按钮，执行classIsOver函数
//    connect(btn,&QPushButton::clicked,this,&Widget::classIsOver);


    //无参版本
    void(Teacher::*tSignal2)(void) =&Teacher::hungry;
    void(Student::*sSignal2)(void) = &Student::treat;
    connect(t,tSignal2,s,sSignal2);
    //信号连接信号，点击信号触发老师饿了信号再触发学生请老师吃饭的槽函数
    connect(btn,&QPushButton::clicked,t,tSignal2);

    //断开老师和学生之间的信号
//    disconnect(t,tSignal2,s,sSignal2);

    //拓展
    //信号可以连接信号
    //一个信号可以连接多个槽函数
    //多个信号可以连接同一个槽函数
    //信号和槽函数的参数的类型必须一一对应，有顺序要求
    //信号的参数个数必须>=槽函数的参数个数

    //Qt4版本连接方法
//    connect(s,SIGNAL(hungry()),t,SLOT(treat()));

    //mutable 修饰值传递的变量，使其能被修改,修改的是拷贝版本
//    QPushButton * myBtn = new QPushButton("你干嘛",this);
//    myBtn->move(100,100);
//    int num=10;
//    connect(myBtn,&QPushButton::clicked,this,[num]()mutable{
//        num++;
//        qDebug()<<num;});
//    qDebug()<<num;


//    int ret = [](){return 666;}();
//    qDebug()<<ret;

    //使用lambda表达式实现点击按钮关闭窗口
    QPushButton * closeBtn = new QPushButton("关闭",this);
    closeBtn->move(200,0);
    connect(closeBtn,&QPushButton::clicked,this,[=](){
        this->close();
        emit t->hungry();
    });


}

Widget::~Widget()
{
    delete ui;
}

void Widget::classIsOver(){
    //emit 触发事件的关键字
    //    emit t->hungry();
    emit t->hungry("我家鸽鸽做的坤排");
}


