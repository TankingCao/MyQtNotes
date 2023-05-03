
#include "widget.h"
#include "ui_widget.h"
#include<QDebug>
#include <iostream>
#include <chrono>
#include <thread>


Widget::Widget(int arr[],int len,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    connect(ui->pushButton,&QPushButton::clicked,this,[=](){
        for(int i=0;i<len;i++){
            ui->diy1->setNum(arr[i]);
            qDebug()<<arr[i];
        }
    });

}

Widget::~Widget()
{
    delete ui;
}


