#ifndef CONTROLWINDOW_H
#define CONTROLWINDOW_H

#include <QMainWindow>
#include<QtNetwork>


namespace Ui {
class ControlWindow;
}

class ControlWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ControlWindow(QWidget *parent = nullptr);
    ~ControlWindow();


private slots:
    void on_pushButton_clicked();

    void on_doubleSpinBox_valueChanged(double arg1);



    void on_pushButton_2_clicked(bool checked);

    void on_pushButton_3_clicked(bool checked);

    void on_pushButton_4_clicked(bool checked);

    void on_pushButton_5_clicked(bool checked);


    void on_pushButton_6_clicked(bool checked);

private:
    Ui::ControlWindow *ui;

    QTimer  *tim1;
    QTimer  *tim2;

protected:
    void resizeEvent(QResizeEvent *event) ;


};

extern QTcpSocket *GSocket;

#endif // CONTROLWINDOW_H
