/**
 *  <h1 color="#10ac84">Created by 木杉 on 「2023/4/29/ 029」 「下午  22:40:44」</h1>
 */

#ifndef MYQT_MYPUSHBUTTON_H
#define MYQT_MYPUSHBUTTON_H

#include<QPushButton>
#include<QDebug>

class MyPushButton : public QPushButton {
public:
    MyPushButton(QWidget *parent = 0);

    ~MyPushButton();

};

MyPushButton::MyPushButton(QWidget *parent) : QPushButton(parent) {
    qDebug()<<"我的按钮类构造";
}

MyPushButton::~MyPushButton() {
    qDebug()<<"我的按钮类析构";
}

#endif //MYQT_MYPUSHBUTTON_H
