
#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QProgressBar>


QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget

{
    Q_OBJECT

public:
    Widget(int arr[],int,QWidget *parent = nullptr);
    ~Widget();

    void showBar(QProgressBar* bar[],int arr[],int len);

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
