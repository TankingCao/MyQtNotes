#include "diy.h"
#include "ui_diy.h"

DIY::DIY(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DIY)
{
    ui->setupUi(this);

    //spinBox改变数值，horizontalSlider自己滑动
    void(QSpinBox::*spin)(int) = &QSpinBox::valueChanged;
    connect(ui->spinBox,spin,ui->horizontalSlider,&QSlider::setValue);

    //条滑动，数值跟着变化
    connect(ui->horizontalSlider,&QSlider::valueChanged,ui->spinBox,&QSpinBox::setValue);

}

DIY::~DIY()
{
    delete ui;
}

void DIY::setNum(int n){
    ui->spinBox->setValue(n);
}
