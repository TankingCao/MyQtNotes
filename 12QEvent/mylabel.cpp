
#include "mylabel.h"
#include<QDebug>
#include<QMouseEvent>


myLabel::myLabel(QWidget *parent)
    : QLabel{parent}
{
    //设置鼠标追踪，不需要点击就能打印信息，但是不能只设置鼠标左键
    setMouseTracking(true);
}

void myLabel::leaveEvent(QEvent *event)
{
    qDebug()<<"鼠标离开";
}

void myLabel::enterEvent(QEnterEvent *event)
{
    qDebug()<<"鼠标进入";
}

void myLabel::mousePressEvent(QMouseEvent *ev)
{
    //设置为左键按下才有用
//    if(ev->button()==Qt::LeftButton){
        QString str = QString("鼠标按下 x= %1 y= %2 globalx= %3 globaly= %4").arg(ev->x()).arg(ev->y()).arg(ev->globalX()).arg(ev->globalY());
        qDebug()<<str;
//    }
}

void myLabel::mouseReleaseEvent(QMouseEvent *ev)
{
//    if(ev->button()==Qt::LeftButton){
        QString str = QString("鼠标释放 x= %1 y= %2 globalx= %3 globaly= %4").arg(ev->x()).arg(ev->y()).arg(ev->globalX()).arg(ev->globalY());
        qDebug()<<str;
//    }
}

void myLabel::mouseMoveEvent(QMouseEvent *ev)
{
    //移动是一个状态，在这个过程中全部都是左键才是移动，否则就不是，&相同为真，不同为假
//    if(ev->buttons() & Qt::LeftButton){
        QString str = QString("鼠标移动 x= %1 y= %2 globalx= %3 globaly= %4").arg(ev->x()).arg(ev->y()).arg(ev->globalX()).arg(ev->globalY());
        qDebug()<<str;
        //    }
}

bool myLabel::event(QEvent *e)
{
        //如果是鼠标按下事件，用事件分发器拦截
        if(e->type()==QEvent::MouseButtonPress){
            //父类转子类
            QMouseEvent*ev = static_cast<QMouseEvent*>(e);
            QString str = QString("Event鼠标按下 x= %1 y= %2 globalx= %3 globaly= %4").arg(ev->x()).arg(ev->y()).arg(ev->globalX()).arg(ev->globalY());
            qDebug()<<str;
            return true;//代表用户自己处理，不想下分发
        }

        //其他事件交给父类处理
        return QLabel::event(e);
}

