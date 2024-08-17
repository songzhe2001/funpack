#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QtNetwork>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_pushButton_clicked();


private:
    Ui::MainWindow *ui;

    uint16_t io=0;

public:
    QTcpSocket *mSocket;
    QTcpSocket *reSocket;

protected:
   void resizeEvent(QResizeEvent *event);

};


#endif // MAINWINDOW_H
