
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //设置单选框默认为男
    ui->rBtnMan->setChecked(true);

    //设置默认为未婚
    ui->rBtnNoMarry->setChecked(true);

    //选中女后，打印信息
    connect(ui->rBtnWoman,&QRadioButton::clicked,this,[=](){
        qDebug()<<"女";
    });

    //ikun
    //stateChanged，state--状态 0->选中（1->半选）2->选中
    connect(ui->ngm,&QCheckBox::stateChanged,this,[=](int state){
        qDebug()<<"你干嘛哈哈哎哟"<<state;
    });

    connect(ui->baozha,&QCheckBox::clicked,this,[=](){
        qDebug()<<"多一眼看一眼就会爆炸";
    });

    connect(ui->ronghua,&QCheckBox::clicked,this,[=](){
        qDebug()<<"近一点靠近点快被融化";
    });

    connect(ui->rap,&QCheckBox::clicked,[=](){
        qDebug()<<"唱跳rap篮球music";
    });

    //使用QListWidget写一首诗
//    QListWidgetItem*item = new QListWidgetItem("锄禾日当午");
//    //把诗放到listWidget控件中
//    ui->listWidget->addItem(item);
//    item->setTextAlignment(Qt::AlignHCenter);

    //创建QStringList容器,一次性全部加进去
    QStringList list;
    list<<"锄禾日当午"<<"汗滴禾下土"<<"谁知盘中餐"<<"粒粒皆辛苦";
    ui->listWidget->addItems(list);


}

MainWindow::~MainWindow()
{
    delete ui;
}


