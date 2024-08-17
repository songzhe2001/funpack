/********************************************************************************
** Form generated from reading UI file 'controlwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROLWINDOW_H
#define UI_CONTROLWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ControlWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QDoubleSpinBox *doubleSpinBox_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ControlWindow)
    {
        if (ControlWindow->objectName().isEmpty())
            ControlWindow->setObjectName("ControlWindow");
        ControlWindow->resize(700, 480);
        centralwidget = new QWidget(ControlWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_2);

        doubleSpinBox = new QDoubleSpinBox(centralwidget);
        doubleSpinBox->setObjectName("doubleSpinBox");
        doubleSpinBox->setEnabled(true);
        doubleSpinBox->setFont(font);
        doubleSpinBox->setStyleSheet(QString::fromUtf8(""));
        doubleSpinBox->setDecimals(1);
        doubleSpinBox->setMaximum(300.000000000000000);
        doubleSpinBox->setSingleStep(60.000000000000000);

        horizontalLayout_2->addWidget(doubleSpinBox);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label);

        doubleSpinBox_2 = new QDoubleSpinBox(centralwidget);
        doubleSpinBox_2->setObjectName("doubleSpinBox_2");
        doubleSpinBox_2->setFont(font);
        doubleSpinBox_2->setDecimals(1);

        horizontalLayout_5->addWidget(doubleSpinBox_2);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setEnabled(false);
        pushButton_5->setFont(font);

        horizontalLayout->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setEnabled(true);
        pushButton_6->setFont(font);
        pushButton_6->setCheckable(true);

        horizontalLayout->addWidget(pushButton_6);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setEnabled(true);
        QFont font1;
        font1.setPointSize(20);
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8(""));
        pushButton_2->setCheckable(true);

        horizontalLayout_4->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setEnabled(true);
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QString::fromUtf8(""));
        pushButton_3->setCheckable(true);

        horizontalLayout_4->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setEnabled(true);
        pushButton_4->setFont(font1);
        pushButton_4->setStyleSheet(QString::fromUtf8(""));
        pushButton_4->setCheckable(true);

        horizontalLayout_4->addWidget(pushButton_4);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setFont(font);

        verticalLayout->addWidget(pushButton);


        verticalLayout_2->addLayout(verticalLayout);

        ControlWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ControlWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 700, 17));
        ControlWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ControlWindow);
        statusbar->setObjectName("statusbar");
        ControlWindow->setStatusBar(statusbar);

        retranslateUi(ControlWindow);

        QMetaObject::connectSlotsByName(ControlWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ControlWindow)
    {
        ControlWindow->setWindowTitle(QCoreApplication::translate("ControlWindow", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("ControlWindow", "\346\270\251\345\272\246", nullptr));
        label->setText(QCoreApplication::translate("ControlWindow", "\346\214\211\351\224\256\346\254\241\346\225\260", nullptr));
        pushButton_5->setText(QCoreApplication::translate("ControlWindow", "\346\214\211\351\224\256", nullptr));
        pushButton_6->setText(QCoreApplication::translate("ControlWindow", "\350\247\246\346\221\270", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ControlWindow", "\350\264\237\350\275\2751", nullptr));
        pushButton_3->setText(QCoreApplication::translate("ControlWindow", "\350\264\237\350\275\2752", nullptr));
        pushButton_4->setText(QCoreApplication::translate("ControlWindow", "\350\264\237\350\275\2753", nullptr));
        pushButton->setText(QCoreApplication::translate("ControlWindow", "\346\226\255\345\274\200\350\277\236\346\216\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ControlWindow: public Ui_ControlWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLWINDOW_H
