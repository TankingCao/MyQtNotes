
#ifndef MYLABEL_H
#define MYLABEL_H


#include <QLabel>


class myLabel : public QLabel
{
    Q_OBJECT
public:
    explicit myLabel(QWidget *parent = nullptr);

    //重写事件

    void leaveEvent(QEvent *event);

    void enterEvent(QEnterEvent *event);

    void mousePressEvent(QMouseEvent *ev);

    void mouseReleaseEvent(QMouseEvent *ev);

    void mouseMoveEvent(QMouseEvent *ev);

    //通过重写event时间分发器拦截鼠标按下事件
    bool event(QEvent *e);



signals:

};

#endif // MYLABEL_H
