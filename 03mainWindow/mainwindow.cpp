
#include "mainwindow.h"
#include<QMenuBar>
#include<QToolBar>
#include<QDebug>
#include<QPushButton>
#include<QStatusBar>
#include<QLabel>
#include<QDockWidget>
#include<QTextEdit>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow{parent}
{
    //重置窗口大小
    resize(600,400);

    //1、创建菜单栏,菜单栏只能有一个
    QMenuBar * bar = menuBar();
    //将菜单栏放入窗口
    setMenuBar(bar);
    //创建菜单
    QMenu * fileMenu = bar->addMenu("文件");
    QMenu * editMenu = bar->addMenu("编辑");


    //创建菜单项（下拉菜单）
    QAction* newFile =  fileMenu->addAction("新建");
    //添加分隔线
    fileMenu->addSeparator();
    QAction* openFile =  fileMenu->addAction("打开");

    //2、创建工具栏
    QToolBar * toolBar = new QToolBar(this);
    //添加工具栏到左边
    addToolBar(Qt::LeftToolBarArea,toolBar);
    //设置工具栏为只允许左右停靠
    toolBar->setAllowedAreas(Qt::LeftToolBarArea|Qt::RightToolBarArea);
    //设置不能浮动（默认可以浮动）
    toolBar->setFloatable(false);
    //设置移动性（总开关）
//    toolBar->setMovable(false);//相当于固定不能动了，这是总开关

    //工具栏设置功能,这里添加的是上面菜单栏中下拉菜单中的两个功能
    toolBar->addAction(newFile);
    toolBar->addSeparator();//添加分隔线
    toolBar->addAction(openFile);
    //工具栏中添加控件
    QPushButton* btn = new QPushButton("你干嘛",this);
    toolBar->addWidget(btn);

    //3、状态栏，最多只有一个
    QStatusBar * stBar = new QStatusBar();
    setStatusBar(stBar);
    //放标签控件
    QLabel * label1 = new QLabel("多一眼看一眼就会爆炸",this);
    stBar->addWidget(label1);
    //在右边放标签控件
    QLabel * label2 = new QLabel("近一点靠近点快被融化",this);
    stBar->addPermanentWidget(label2);

    //4、铆接部件（浮动窗口）可以有多个dock栏
    QDockWidget * dockWidget = new QDockWidget("一个真正的dock",this);
    addDockWidget(Qt::BottomDockWidgetArea,dockWidget);
    //设置为只能上下停靠
    dockWidget->setAllowedAreas(Qt::TopDockWidgetArea|Qt::BottomDockWidgetArea);

    //设置中心部件,只能有一个
    QTextEdit* edit = new QTextEdit(this);
    setCentralWidget(edit);

}










