#include "controlwindow.h"
#include "ui_controlwindow.h"

#include "mainwindow.h"



// #include"tim.h"

#include<QDebug>
#include<QMessageBox>

bool cn1=0;
bool cn2=0;

int i=0;
int key_last_i=1;
int key_last_w=1;
int key_value_i;
int key_value_w;

static QFont font_mid;
static QFont font_left;


ControlWindow::ControlWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ControlWindow)
{
    ui->setupUi(this);

    GSocket->write("lr0");
    for(i=0;i<=9999999;i++);
    GSocket->write("lg0");
    for(i=0;i<=9999999;i++);
    GSocket->write("lb0");

    for(i=0;i<=9999999;i++);
    GSocket->write("lg0");
    for(i=0;i<=9999999;i++);
    GSocket->write("lb0");
    for(i=0;i<=9999999;i++);
    GSocket->write("lr0");

    for(i=0;i<=9999999;i++);
    GSocket->write("lb0");
    for(i=0;i<=9999999;i++);
    GSocket->write("lr0");
    for(i=0;i<=9999999;i++);
    GSocket->write("lg0");

    font_mid=ui->pushButton->font();
    font_left=ui->doubleSpinBox->font();


    ui->pushButton_5->setStyleSheet("background-color:rgb(250, 0, 0)");
    ui->pushButton_6->setStyleSheet("background-color:rgb(250, 0, 0)");

    QObject::connect(GSocket,&QTcpSocket::readyRead,this,[&](){
re:     QByteArray flag = GSocket->read(1);
re1:    QString flag_str(flag);
        int flag_int=*flag_str.toUtf8().data();
        double  t=0;
        QByteArray arr ;
        qDebug()<<"flag:"<<flag;

        switch (flag_int)
        {
        case 'r':
            ;
            break;

        case 's':
            arr =GSocket->read(1);
            t=arr.toInt();
            qDebug()<<"touch:"<<t;
            if (t)
            {
                ui->pushButton_6->setStyleSheet("background-color:rgb(0, 250, 0)");
            }
            else
            {
                ui->pushButton_6->setStyleSheet("background-color:rgb(250, 0, 0)");
            }
            break;

        case 'i':
            arr =GSocket->read(1);
            t=arr.toInt();
            qDebug()<<"key_isp:"<<t;
            if (!t)
            {
                ui->pushButton_5->setStyleSheet("background-color:rgb(0, 250, 0)");
            }
            else
            {
                ui->pushButton_5->setStyleSheet("background-color:rgb(250, 0, 0)");
            }

            key_value_i=ui->doubleSpinBox_2->value();
            if(t>key_last_i)
                ui->doubleSpinBox_2->setValue(key_value_i+1);
            key_last_i=t;
            break;

        case 'w':
            arr =GSocket->read(1);
            t=arr.toInt();
            qDebug()<<"key_WAKEUP:"<<t;
            if (!t)
            {
                ui->pushButton_7->setStyleSheet("background-color:rgb(0, 250, 0)");
            }
            else
            {
                ui->pushButton_7->setStyleSheet("background-color:rgb(250, 0, 0)");
            }

            key_value_w=ui->doubleSpinBox_3->value();
            if(t>key_last_w)
                ui->doubleSpinBox_3->setValue(key_value_w+1);
            key_last_w=t;
            break;


        case 't' :
            arr =GSocket->read(sizeof(t));
            t=arr.toDouble();
            ui->doubleSpinBox->setValue(t);
            qDebug()<<"Temp:"<<t;
            break;

        case '\n' :
            goto re;
            break;

        case '0' :
            GSocket->read(1);
            goto re;
            break;

        case '1' :
            GSocket->read(1);
            goto re;
            break;

        default:
            arr =GSocket->readAll();
            ;

        //     arr =GSocket->readAll();
        //     qDebug()<<arr;
        }

            flag = GSocket->read(1);
        if (flag!="")
            goto re1;

        arr =GSocket->readAll();
        qDebug()<<"other"<<arr;


    });

    tim1=new QTimer(this);
    tim1->stop();
    tim1->setTimerType(Qt::PreciseTimer);
    tim1->setInterval(10);
    tim1->setSingleShot(false);
    QObject::connect(tim1,&QTimer::timeout,this,[&](){
        if (cn1)
        {
            // ui->pushButton_5->setStyleSheet("background-color:rgb(0, 250, 0)");
            // GSocket->write("s");
            cn1=false;
        }
        else
        {
            cn1=true;
        }
    });

    tim2=new QTimer(this);
    tim2->stop();
    tim2->setTimerType(Qt::PreciseTimer);
    tim2->setInterval(200);
    tim2->setSingleShot(false);
    QObject::connect(tim2,&QTimer::timeout,this,[&](){
        // GSocket->write("t");
    });
    tim1->start();
    tim2->start();


}

ControlWindow::~ControlWindow()
{
    ui->doubleSpinBox->setValue(0);
    GSocket->disconnectFromHost();
    delete ui;
}

void ControlWindow::on_pushButton_clicked()
{
    GSocket->disconnectFromHost();
    MainWindow *mw=new MainWindow;
    this->close();
    mw->show();
    this->deleteLater();
}


void ControlWindow::on_pushButton_2_clicked(bool checked)//IO1
{
    if (checked)
    {
        GSocket->write("lr1");
        for(i=0;i<=999999;i++);
        GSocket->write("lr1");
        for(i=0;i<=999999;i++);
        GSocket->write("lr1");
    }
    else
    {
        GSocket->write("lr0");
        for(i=0;i<=999999;i++);
        GSocket->write("lr0");
        for(i=0;i<=999999;i++);
        GSocket->write("lr0");
    }

}


void ControlWindow::on_pushButton_3_clicked(bool checked)//IO2
{
    if (checked)
    {
        GSocket->write("lg1");
        for(i=0;i<=999999;i++);
        GSocket->write("lg1");
        for(i=0;i<=999999;i++);
        GSocket->write("lg1");
    }
    else
    {
        GSocket->write("lg0");
        for(i=0;i<=999999;i++);
        GSocket->write("lg0");
        for(i=0;i<=999999;i++);
        GSocket->write("lg0");
    }
}


void ControlWindow::on_pushButton_4_clicked(bool checked)//IO3
{
    if (checked)
    {
        GSocket->write("lb1");
        for(i=0;i<=999999;i++);
        GSocket->write("lb1");
        for(i=0;i<=999999;i++);
        GSocket->write("lb1");
    }
    else
    {
        GSocket->write("lb0");
        for(i=0;i<=999999;i++);
        GSocket->write("lb0");
        for(i=0;i<=999999;i++);
        GSocket->write("lb0");
    }
}

void ControlWindow::on_doubleSpinBox_valueChanged(double arg1)//voltage
{
    ;
}



void ControlWindow::on_pushButton_5_clicked(bool checked)
{
    if(checked)
        ui->pushButton_5->setStyleSheet("background-color:rgb(0, 250, 0)");
    else
        ui->pushButton_5->setStyleSheet("background-color:rgb(250,0, 0)");

}


void ControlWindow::on_pushButton_6_clicked(bool checked)
{
    if(checked)
        ui->pushButton_6->setStyleSheet("background-color:rgb(0, 250, 0)");
    else
        ui->pushButton_6->setStyleSheet("background-color:rgb(250,0, 0)");


}

void ControlWindow::resizeEvent(QResizeEvent *event)
{
    int width = this->size().width();
    int height = this->size().height();
    width/=15;
    height/=15;
    if(width>height)
    {
        font_left.setPixelSize(height);
        font_mid.setPixelSize(height);

        ui->doubleSpinBox->setFont(font_left);
        ui->doubleSpinBox_2->setFont(font_left);
        ui->doubleSpinBox_3->setFont(font_left);

        ui->label->setFont(font_mid);
        ui->label_2->setFont(font_mid);
        ui->label_3->setFont(font_mid);

        ui->pushButton->setFont(font_mid);
        ui->pushButton_2->setFont(font_mid);
        ui->pushButton_3->setFont(font_mid);
        ui->pushButton_4->setFont(font_mid);
        ui->pushButton_5->setFont(font_mid);
        ui->pushButton_6->setFont(font_mid);
        ui->pushButton_7->setFont(font_mid);
    }
    else
    {
        font_left.setPixelSize(width);
        font_mid.setPixelSize(width);

        ui->doubleSpinBox->setFont(font_left);
        ui->doubleSpinBox_2->setFont(font_left);
        ui->doubleSpinBox_3->setFont(font_left);

        ui->label->setFont(font_mid);
        ui->label_2->setFont(font_mid);
        ui->label_3->setFont(font_mid);

        ui->pushButton->setFont(font_mid);
        ui->pushButton_2->setFont(font_mid);
        ui->pushButton_3->setFont(font_mid);
        ui->pushButton_4->setFont(font_mid);
        ui->pushButton_5->setFont(font_mid);
        ui->pushButton_6->setFont(font_mid);
        ui->pushButton_7->setFont(font_mid);

    }



}

