
#pragma once

#ifndef FCFS_H
#define FCFS_H

#include<iostream>
#include<algorithm>
#include<QVector>
#include"string"
#include<QTextStream>

using namespace std;

/*
 * FCFS调度算法
 * */

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


//获取所有进程并根据时间排序
QVector<Process> getProcess() {
    QVector<Process> pcb;
    int processNum;
    cout << "\n输入被调度的<进程的数目>：";
    cin >> processNum;
    for (int i = 0; i < processNum; i++) {
        Process p;
        cout << "输入<进程名>、<创建时间>、<需要运行时间>:";
        QTextStream cin (stdin);
        cin >> p.name;
        cin >> p.createTime;
        cin >> p.needTime;
        pcb.push_back(p);
    }
    sort(pcb.begin(), pcb.end(), [](Process p1, Process p2) { return p1.createTime < p2.createTime; });
    return pcb;
}


QVector<Info> getFcfs(QVector<Process> plist) {
    int time = 0;
    QVector<Info> v;

    while (!plist.empty()) {
        Info i;
        i.time = QString::number(time)+QString("~")+  QString::number(time+1);

        plist[0].runTime++;
        //运行完成的进程名字加上"△"
        i.run = ((plist[0].runTime == plist[0].needTime) ? plist[0].name + QString("△") : plist[0].name);

        bool empty = true;
        QString str;
        for (int j = 1; j < plist.size(); j++) {
            if (plist[j].createTime <= time) {
                str+=plist[j].name;
                empty = false;
            }
        }
        i.wait = (empty ? QString("<空>") : str);

        v.push_back(i);

        //如果运行时间满了
        if (plist[0].runTime == plist[0].needTime) {
            plist.erase(plist.begin());
        }

        time++;
    }
    return v;
}


#endif // FCFS_H
