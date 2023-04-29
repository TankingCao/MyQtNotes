/**
 *  <h1 color="#10ac84">Created by 木杉 on 「2023/4/29/ 029」 「下午  21:47:35」</h1>
 */

#include<QPushButton>

class myWidget :  public QWidget {
public:
    myWidget(QWidget *parent = 0);

};

myWidget::myWidget(QWidget *parent): QWidget(parent) {
    //创建一个按钮，btn的show方法会单独显示一个窗口
    auto *btn = new QPushButton;

    //将btn依赖在这个窗口中
    btn->setParent(this);
    btn->setText("你干嘛哈哈哎哟~");

    //创建第二个按钮,窗口大小根据控件大小创建
    auto *btn2 = new QPushButton("第二个窗口", this);

    //移动btn2
    btn2->move(100, 100);

    //重置窗口大小,参数为宽和高
    resize(500,300);

    //设置固定的窗口大小,不能用鼠标拖拽改变大小
    setFixedSize(600, 400);

    //设置窗口标题
    setWindowTitle("鸡你太美");

}
