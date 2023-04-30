/**
 *  <h1 color="#10ac84">Created by 木杉 on 「2023/4/29/ 029」 「下午  21:47:35」</h1>
 */

#include<QPushButton>
#include"MyPushButton.h"
#include<QDebug>
class myWidget : public QWidget {
public:
    myWidget(QWidget *parent = 0);

    ~myWidget();
};

//构造函数
myWidget::myWidget(QWidget *parent) : QWidget(parent) {
    //创建一个按钮，btn的show方法会单独显示一个窗口
    auto *btn = new QPushButton;

    //将btn依赖在这个窗口中
    btn->setParent(this);
    btn->setText("你干嘛哈哈哎哟~");
    //----------------------------------------------

    //创建第二个按钮,窗口大小根据控件大小创建
    auto *btn2 = new QPushButton("第二个窗口", this);

    //移动btn2
    btn2->move(100, 100);
    //----------------------------------------------

    //重置窗口大小,参数为宽和高
    resize(500, 300);

    //设置固定的窗口大小,不能用鼠标拖拽改变大小
    setFixedSize(600, 400);

    //设置窗口标题
    setWindowTitle("鸡你太美");
    //----------------------------------------------

    //创建一个自定义按钮
    auto myBtn = new MyPushButton;
    myBtn->move(200, 200);
    myBtn->setParent(this);
    myBtn->setText("自定义按钮,点击关闭窗口");

    //需求：点击按钮，关闭窗口
    //参数:参数1->信号的发送者，参数2->发送的信号（函数地址）,参数3->信号的接收者，参数4->处理的槽函数
    connect(myBtn, &QPushButton::clicked, this, &myWidget::close);

}

//析构函数
myWidget::~myWidget(){
    qDebug()<<"myWidget析构函数调用";
}