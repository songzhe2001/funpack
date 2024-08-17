#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "controlwindow.h"

#include<QDebug>
#include<QMessageBox>

QTcpSocket *GSocket;

static QFont font_mid;
static QFont font_left;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    font_mid=ui->pushButton->font();
    font_left=ui->lineEdit->font();

}

MainWindow::~MainWindow()
{
    GSocket->disconnectFromHost();
    delete ui;
}




void MainWindow::on_pushButton_clicked()
{
    mSocket=new QTcpSocket(this);
    QObject::connect(mSocket,&QTcpSocket::connected,this,[&](){
        GSocket=mSocket;
        ControlWindow *cw=new ControlWindow;
        cw->show();
        this->close();

    });

    QString ip=ui->lineEdit->text();
    quint16 port=ui->spinBox->value();
    mSocket->connectToHost(ip,port);
    if(!mSocket->waitForConnected(5000))
    {
        QMessageBox::warning(this, QObject::tr("连接电源"), QObject::tr("连接失败"));
    }
}

void MainWindow::resizeEvent(QResizeEvent *event)
{
    int width = this->size().width();
    int height = this->size().height();
    width/=20;
    height/=1;
    if(width>height)
    {
        font_left.setPixelSize(height);
        font_mid.setPixelSize(height);

        ui->spinBox->setFont(font_left);
        ui->lineEdit->setFont(font_left);

        ui->label->setFont(font_mid);
        ui->label_3->setFont(font_mid);

        ui->pushButton->setFont(font_mid);
    }
    else
    {
        font_left.setPixelSize(width);
        font_mid.setPixelSize(width);

        ui->spinBox->setFont(font_left);
        ui->lineEdit->setFont(font_left);

        ui->label->setFont(font_mid);
        ui->label_3->setFont(font_mid);

        ui->pushButton->setFont(font_mid);
    }

}


