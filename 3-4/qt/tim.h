#ifndef TIM_H
#define TIM_H

#include <QMainWindow>
#include <QObject>

class tim : public QObject
{
    Q_OBJECT
private slots:
    void tim1_timeout();
    void tim2_timeout();
};

void    tim_init(QMainWindow *ControlWindow);
// void    tim2_init(QMainWindow *ControlWindow);



#endif // TIM_H
