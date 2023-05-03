/********************************************************************************
** Form generated from reading UI file 'diy.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIY_H
#define UI_DIY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DIY
{
public:
    QHBoxLayout *horizontalLayout;
    QSpinBox *spinBox;
    QSlider *horizontalSlider;

    void setupUi(QWidget *DIY)
    {
        if (DIY->objectName().isEmpty())
            DIY->setObjectName(QString::fromUtf8("DIY"));
        DIY->resize(361, 72);
        horizontalLayout = new QHBoxLayout(DIY);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        spinBox = new QSpinBox(DIY);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        horizontalLayout->addWidget(spinBox);

        horizontalSlider = new QSlider(DIY);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSlider);


        retranslateUi(DIY);

        QMetaObject::connectSlotsByName(DIY);
    } // setupUi

    void retranslateUi(QWidget *DIY)
    {
        DIY->setWindowTitle(QCoreApplication::translate("DIY", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DIY: public Ui_DIY {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIY_H
