
#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QPushButton>


class Widget : public QWidget

{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    QWidget * qw;

};

#endif // WIDGET_H
