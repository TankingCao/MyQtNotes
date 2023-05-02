
#ifndef WIDGET_H
#define WIDGET_H
#include<iostream>
#include<algorithm>
#include<string>
#include<QVector>
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

private:
    Ui::Widget *ui;
};


//定义进程类
class Process {
public:
    Process() = default;

    Process(QString n, int ct, int nt) {
        name = n;
        createTime = ct;
        needTime = nt;
    }

    QString name;//进程名
    int createTime = 0;//创建时间
    int needTime = 0;//需要运行的时间
    int runTime = 0;//已经运行的时间
};

class Info{
public:

    QString time = "#";
    QString run = "#";
    QString wait = "#";
};

////获取所有进程并根据时间排序
//vector<Process> getProcessList() {
//    vector<Process> pcb;
//    int processNum;
//    cout << "\n输入被调度的<进程的数目>：";
//    cin >> processNum;
//    for (int i = 0; i < processNum; i++) {
//        Process p;
//        cout << "输入<进程名>、<创建时间>、<需要运行时间>:";
//        cin >> p.name;
//        cin >> p.createTime;
//        cin >> p.needTime;
//        pcb.push_back(p);
//    }
//    sort(pcb.begin(), pcb.end(), [](Process p1, Process p2) { return p1.createTime < p2.createTime; });
//    return pcb;
//}

QVector<Info> getFCFS(QVector<Process> plist) {
    int time = 0;
    QVector<Info> v;
    while (!plist.empty()) {
        Info i;
        i.time = (QString::number(time)+QString("~")+ QString::number(time+1));

        plist[0].runTime++;
        i.run = ((plist[0].runTime == plist[0].needTime) ? plist[0].name + QString()<<"△" : plist[0].name);

        bool empty = true;
        string str;
        for (int j = 1; j < plist.size(); j++) {
            if (plist[j].createTime <= time) {
                str+=plist[j].name;
                empty = false;
            }
        }
        i.wait = (empty ? QSTR : str);

        v.push_back(i);

        if (plist[0].runTime == plist[0].needTime) {
            plist.erase(plist.begin());
        }

        time++;
    }
    return v;
}

#endif // WIDGET_H
