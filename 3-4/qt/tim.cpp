#include "tim.h"
#include <QTimer>
#include <QDebug>
#include "controlwindow.h"
#include "ui_controlwindow.h"

Ui::ControlWindow *ui;


QTimer  *tim1;
QTimer  *tim2;

tim *tim;

bool cnt=0;

void tim_init(QMainWindow *ControlWindow)
{
    // tim *tim;

    tim1=new QTimer(ControlWindow);
    tim1->stop();
    tim1->setTimerType(Qt::PreciseTimer);
    tim1->setInterval(50);
    tim1->setSingleShot(false);
    QObject::connect(tim1,&QTimer::timeout,ControlWindow,[&](){
        qDebug()<<"n";

        if (cnt)
        {
            ui->pushButton_5->setStyleSheet("background-color:rgb(0, 250, 0)");
            cnt=false;
            qDebug()<<"f";
        }
        else
        {
            ui->pushButton_5->setStyleSheet("background-color:rgb(250, 0, 0)");
            cnt=true;
            qDebug()<<"t";

        }
    });
    tim1->start();
    qDebug()<<"i";

}

// void tim2_init(QMainWindow *ControlWindow)
// {
//     tim2=new QTimer(ControlWindow);
//     tim2->stop();
//     tim2->setTimerType(Qt::CoarseTimer);

//     QObject::connect(tim2,SIGNAL(timeout),timer,SLOT(tim2_timeout()));
// }



void tim::tim1_timeout()
{
    qDebug()<<"n";

    if (cnt)
    {
        ui->pushButton_5->setStyleSheet("background-color:rgb(0, 250, 0)");
        cnt=false;
        qDebug()<<"f";
    }
    else
    {
        ui->pushButton_5->setStyleSheet("background-color:rgb(250, 0, 0)");
        cnt=true;
        qDebug()<<"t";

    }
}

void tim::tim2_timeout()
{
    ;
}


