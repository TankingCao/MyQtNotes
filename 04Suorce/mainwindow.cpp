
#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //    ui->actionnew->setIcon(QIcon("C:\\Users\\onebot\\Pictures\\图标\\java.ico"));
    //添加图片资源
    //使用添加资源+":+前缀名+文件名"
    ui->actionnew->setIcon(QIcon(":/image/kun.gif"));

    /**
     * 1、把图片文件复制到项目文件夹下面
     * 2、右键项目添加新文件
     * 3、添加Qt source文件->起个名字（res）
     * 4、添加前缀（/），添加文件（选中文件夹中所有图片打开）
     * 5、构建后qrc文件展开就能看到图片文件了
     * */


}

MainWindow::~MainWindow()
{
    delete ui;
}


