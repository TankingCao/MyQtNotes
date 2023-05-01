
#include "widget.h"
#include "ui_widget.h"


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //treeWidget使用

    //设置水平头
    ui->treeWidget->setHeaderLabels(QStringList()<<"人物"<<"人物介绍");

    QTreeWidgetItem*liItem = new QTreeWidgetItem(QStringList()<<"力量");
    QTreeWidgetItem*minItem = new QTreeWidgetItem(QStringList()<<"敏捷");
    QTreeWidgetItem*zhiItem = new QTreeWidgetItem(QStringList()<<"智力");

    ui->treeWidget->addTopLevelItem(liItem);
    ui->treeWidget->addTopLevelItem(minItem);
    ui->treeWidget->addTopLevelItem(zhiItem);

    //创建子节点
    QTreeWidgetItem *l1 = new QTreeWidgetItem(QStringList()<<"坤"<<"你干嘛哈哈哎哟");
    liItem->addChild(l1);



}

Widget::~Widget()
{
    delete ui;
}


