#ifndef DIY_H
#define DIY_H

#include <QWidget>

namespace Ui {
class DIY;
}

class DIY : public QWidget
{
    Q_OBJECT

public:
    explicit DIY(QWidget *parent = nullptr);
    ~DIY();

    void setNum(int n);

private:
    Ui::DIY *ui;
};

#endif // DIY_H
