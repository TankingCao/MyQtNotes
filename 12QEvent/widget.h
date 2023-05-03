
#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>



QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget

{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    void timerEvent(QTimerEvent *event);

    int id1;//定时器1的唯一标识
    int id2;

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
