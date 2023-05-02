
#include "widget.h"
#include "ui_widget.h"


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //    //设置为3列
    //    ui->tableWidget->setColumnCount(3);

    //    //设置水平表头
    //    ui->tableWidget->setHorizontalHeaderLabels(QStringList()<<"时间"<<"执行"<<"就绪");

    //    //设置行数
    //    ui->tableWidget->setRowCount(info.size());

    //    //设置正文
    //    int x=0;
    //    for(auto i :info){
    //        int y=0;
    //        ui->tableWidget->setItem(x,y++,new QTableWidgetItem(QString::fromStdString(i.time)));
    //        ui->tableWidget->setItem(x,y++,new QTableWidgetItem(QString::fromStdString(i.run)));
    //        ui->tableWidget->setItem(x,y,new QTableWidgetItem(QString::fromStdString(i.wait)));
    //    }

}

Widget::~Widget()
{
    delete ui;
}


