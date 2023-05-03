
#include "widget.h"
#include "ui_widget.h"
#include<QTimer>
#include"Sort.h"
#include<QProgressBar>
#include<QDebug>

Widget::Widget(int arr[],int len,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //创建定时器类
    QTimer * timer = new QTimer(this);

    //连接按钮，使用按钮控制开始和暂停
    connect(ui->pushButton,&QPushButton::clicked,this,[=](){
        bool flag = ui->pushButton->text()=="开始";
        if(flag){
            timer->start(1000);
            ui->pushButton->setText("暂停");
        }else{
            timer->stop();
            ui->pushButton->setText("开始");
        }
    });

    //数组排序可视化

    // 创建包含len个进度条的数组
    QProgressBar *progressBars[len];

    QHBoxLayout*layout = new QHBoxLayout(ui->barWidget);
    ui->barWidget->setLayout(layout);

    // 初始化进度条数组并添加到布局管理器中
    for (int i = 0; i < len; ++i) {
        progressBars[i] = new QProgressBar();
        progressBars[i]->setValue(0);
        progressBars[i]->setRange(0,100);
        progressBars[i]->setOrientation(Qt::Vertical);
        layout->addWidget(progressBars[i]);
    }

//    connect(timer,&QTimer::timeout,this,[=,&progressBars](){
//        for(int i=0;i<len-1;i++){
//            for(int j=0;j<len-i-1;j++){
//                if(arr[j]>arr[j+1]){
//                    int temp = arr[j];
//                    arr[j] = arr[j+1];
//                    arr[j+1] = temp;
//                }
//            }
//            for(int k=0;k<len;k++){
//                progressBars[k]->setValue(arr[k]);
//            }
//        }
//    });


    //    QList<QProgressBar*> barList = ui->BarWidget->findChildren<QProgressBar*>();
    //启动定时器
    //    timer->start(50);

    //    connect(timer,&QTimer::timeout,this,[=](){
    //        int n=0;
    //        for(int i=0;i<barList.size();i++){
    //            barList[i]->setValue((i+n)%100);
    //            n++;
    //        }
    //    });
    //    connect(timer,&QTimer::timeout,this,[=](){
    //        static int num = 0;
    //        ui->progressBar_2->setValue(num++);
    //    });
}

Widget::~Widget()
{
    delete ui;
}

//void Widget::showBar(QProgressBar *progressBars[], int arr[], int len)
//{
//    for(int i=0;i<len-1;i++){
//        for(int j=0;j<i-len-1;j++){
//            if(arr[j]>arr[j+1]){
//                int temp = arr[j];
//                arr[j] = arr[j+1];
//                arr[j+1] = temp;
//                for(int i=0;i<len;i++){
//                    progressBars[i]->setValue(arr[i]);
//                    qDebug()<<arr[i];
//                }
//            }
//        }
//    }
//}


