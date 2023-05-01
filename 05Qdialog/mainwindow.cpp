
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDebug>
#include<QDialog>
#include<QMessageBox>
#include<QColorDialog>
#include<QFileDialog>
#include<QFontDialog>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //点击新建弹出对话框,triggered触发
    connect(ui->actionnew,&QAction::triggered,this,[=](){
        //对话框分类
        //模态对话框（可以对其他窗口进行操作）非模态对话框（不能……）
        //1、模态创建
        //        QDialog dlg(this);
        //        dlg.resize(200,100);
        //        dlg.exec();

        //        qDebug()<<"模态对话框弹出了";


        //2、非模态创建,要用指针，因为lambda表达式执行完就消失了，所以要用堆区创建对象
        //        QDialog *dlg2 = new QDialog(this);
        //        dlg2->resize(200,100);
        //        dlg2->show();
        //        dlg2->setAttribute(Qt::WA_DeleteOnClose);//关闭后释放堆区对象，否则一直点，叉掉只是不显示，并没有释放内存，可能导致内存泄漏
        //        qDebug()<<"非模态窗口弹出了";

        //消息对话框
        //1、错误对话框
        //QMessageBox::critical(this,"错误","发生错误了");

        //2、信息对话框
        //QMessageBox::information(this,"info","这是信息");

        //3、提问对话框 QMessageBox::Save|QMessageBox::Cancel是两个按钮类型，最后的参数是默认回车关联的按钮
//        if(QMessageBox::Save == QMessageBox::question(this,"ques","是否保存？",QMessageBox::Save|QMessageBox::Cancel,QMessageBox::Cancel))
//        {
//            qDebug()<<"点击的是保存";
//        }else{
//            qDebug()<<"点击的是取消";
//        }

        //4、警告对话框
        //QMessageBox::warning(this,"waring","警告！！！");

        //其他对话框
        //1、颜色对话框
//        QColor color = QColorDialog::getColor(QColor(100,100,100));
//        qDebug()<<"rgb="<<color.red()<<color.green()<<color.blue();

        //2、文件对话框,参数1：父亲；参数2：对话框标题；参数3：默认打开的路径；参数4：默认过滤条件
        //返回值是打开的文件路径
//        QString str =  QFileDialog::getOpenFileName(this,"打开文件","C:\\Users\\onebot\\Desktop","(*.md)");
//        qDebug()<<str;

        //3、字体对话框
        bool flag;
        QFont font =  QFontDialog::getFont(&flag,QFont("微软雅黑",16));
        qDebug()<<font;
        qDebug()<<"字体:"<<font.family().toUtf8().data()<<"字号:"<<font.pointSize()<<"是否加粗:"<<font.bold()<<"是否倾斜:"<<font.italic();

    });
}

MainWindow::~MainWindow()
{
    delete ui;
}


