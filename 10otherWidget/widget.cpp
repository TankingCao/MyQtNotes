
#include "widget.h"
#include "ui_widget.h"
#include<QMovie>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //1、栈控件使用

    //设置默认显示页面
    ui->stackedWidget->setCurrentIndex(0);

    //设置滚动页面
    connect(ui->btn_sroll,&QPushButton::clicked,this,[=](){
        ui->stackedWidget->setCurrentIndex(0);
    });

    //设置网页页面
    connect(ui->btn_Web,&QPushButton::clicked,this,[=](){
        ui->stackedWidget->setCurrentIndex(1);
    });

    //设置工具箱页面
    connect(ui->btn_toolBox,&QPushButton::clicked,this,[=](){
        ui->stackedWidget->setCurrentIndex(2);
    });

    //2、下拉框
    ui->comboBox->addItem("奔驰");
    ui->comboBox->addItem("宝马");
    ui->comboBox->addItem("拖拉机");
    //点击按钮选中拖拉机选项
    connect(ui->btn_tlj,&QPushButton::clicked,this,[=](){
//        ui->comboBox->setCurrentIndex(2);
        ui->comboBox->setCurrentText("拖拉机");
    });

    //3、使用QLabel显示图片
//    ui->label->setPixmap(QPixmap(":/html.svg"));

    //显示动图
    QMovie * movie = new QMovie(":/kun.gif");
    ui->label->setMovie(movie);
    //播放动图
    movie->start();
}

Widget::~Widget()
{
    delete ui;
}


