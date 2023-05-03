
#include "widget.h"
#include "ui_widget.h"
#include<QTimer>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //启动定时器，返回值是定时器的id(int)
    id1 = startTimer(10);//参数1是间隔，单位是ms
    id2 = startTimer(100);

    //第二种方式
    QTimer * timer = new QTimer(this);
    //启动定时器,参数是间隔ms
    timer->start(1);

    //连接
    connect(timer,&QTimer::timeout,this,[=](){
        static int num = 1;
        ui->label_4->setText(QString::number(num++));
    });

    //定义一个暂停的按钮
    connect(ui->btn,&QPushButton::clicked,this,[=](){
        bool flag = ui->btn->text()=="暂停";
        if(flag){
           timer->stop();
        }else{
           timer->start();
        }
        ui->btn->setText(flag?"开始":"暂停");
    });

}

//定时器事件
void Widget::timerEvent(QTimerEvent *event)
{
    //如果定时器事件的id==id1，10ms +1
    if(event->timerId() == id1){
        static int num = 1;
        ui->label_2->setText(QString::number(num++));
    }

    if(event->timerId() == id2 ){
        static int num2 = 1;
        ui->label_3->setText(QString::number(num2++));
    }

}


Widget::~Widget()
{
    delete ui;
}


