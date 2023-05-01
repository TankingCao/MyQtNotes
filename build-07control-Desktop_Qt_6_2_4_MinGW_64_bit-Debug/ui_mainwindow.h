/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *rBtnMan;
    QRadioButton *rBtnWoman;
    QToolButton *toolButton;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButton_2;
    QRadioButton *rBtnNoMarry;
    QPushButton *pushButton;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *ngm;
    QCheckBox *baozha;
    QCheckBox *ronghua;
    QCheckBox *rap;
    QListWidget *listWidget;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(835, 554);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setAnimated(true);
        MainWindow->setDockNestingEnabled(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        rBtnMan = new QRadioButton(groupBox);
        rBtnMan->setObjectName(QString::fromUtf8("rBtnMan"));

        verticalLayout->addWidget(rBtnMan);

        rBtnWoman = new QRadioButton(groupBox);
        rBtnWoman->setObjectName(QString::fromUtf8("rBtnWoman"));

        verticalLayout->addWidget(rBtnWoman);


        gridLayout->addWidget(groupBox, 1, 0, 1, 1);

        toolButton = new QToolButton(widget);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/Python.svg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon);
        toolButton->setIconSize(QSize(50, 50));
        toolButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButton->setAutoRaise(true);

        gridLayout->addWidget(toolButton, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        radioButton_2 = new QRadioButton(groupBox_2);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        verticalLayout_2->addWidget(radioButton_2);

        rBtnNoMarry = new QRadioButton(groupBox_2);
        rBtnNoMarry->setObjectName(QString::fromUtf8("rBtnNoMarry"));

        verticalLayout_2->addWidget(rBtnNoMarry);


        gridLayout->addWidget(groupBox_2, 1, 1, 1, 1);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 0, 1, 1, 1);

        groupBox_3 = new QGroupBox(widget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        sizePolicy.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        ngm = new QCheckBox(groupBox_3);
        ngm->setObjectName(QString::fromUtf8("ngm"));
        ngm->setTristate(true);

        verticalLayout_3->addWidget(ngm);

        baozha = new QCheckBox(groupBox_3);
        baozha->setObjectName(QString::fromUtf8("baozha"));

        verticalLayout_3->addWidget(baozha);

        ronghua = new QCheckBox(groupBox_3);
        ronghua->setObjectName(QString::fromUtf8("ronghua"));

        verticalLayout_3->addWidget(ronghua);

        rap = new QCheckBox(groupBox_3);
        rap->setObjectName(QString::fromUtf8("rap"));

        verticalLayout_3->addWidget(rap);


        gridLayout->addWidget(groupBox_3, 2, 1, 1, 1);

        listWidget = new QListWidget(widget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        gridLayout->addWidget(listWidget, 2, 0, 1, 1);


        horizontalLayout->addWidget(widget);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\346\200\247\345\210\253", nullptr));
        rBtnMan->setText(QCoreApplication::translate("MainWindow", "\347\224\267", nullptr));
        rBtnWoman->setText(QCoreApplication::translate("MainWindow", "\345\245\263", nullptr));
        toolButton->setText(QCoreApplication::translate("MainWindow", "python", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\345\251\232\345\220\246", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "\345\267\262\345\251\232", nullptr));
        rBtnNoMarry->setText(QCoreApplication::translate("MainWindow", "\346\234\252\345\251\232", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\347\231\273\345\275\225", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\351\270\241\344\275\240\345\244\252\347\276\216\346\255\214\350\257\215", nullptr));
        ngm->setText(QCoreApplication::translate("MainWindow", "\344\275\240\345\271\262\345\230\233\345\223\210\345\223\210\345\223\216\345\223\237", nullptr));
        baozha->setText(QCoreApplication::translate("MainWindow", "\345\244\232\344\270\200\347\234\274\345\274\200\344\270\200\347\234\274\345\260\261\344\274\232\347\210\206\347\202\270", nullptr));
        ronghua->setText(QCoreApplication::translate("MainWindow", "\350\277\221\344\270\200\347\202\271\351\235\240\350\277\221\347\202\271\345\277\253\350\242\253\350\236\215\345\214\226", nullptr));
        rap->setText(QCoreApplication::translate("MainWindow", "\345\224\261\350\267\263rap\347\257\256\347\220\203music", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
