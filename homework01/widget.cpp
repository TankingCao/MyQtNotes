#include<QDebug>
#include"widget.h"
#include"QPushButton"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    qw = new QWidget;
    QPushButton* btn = new QPushButton("open",this);
    resize(100,50);
    connect(btn,&QPushButton::clicked,this,[=](){
        if(btn->text()=="open"){
            qw->show();
            btn->setText("close");
        }else{
            qw->close();
            btn->setText("open");
        }
    });
}

Widget::~Widget()
{
}

