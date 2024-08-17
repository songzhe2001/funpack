/********************************************************************************
** Form generated from reading UI file 'controlwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
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
#include <QtWidgets/QPushButton>
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
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_7;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;

    void setupUi(QMainWindow *ControlWindow)
    {
        if (ControlWindow->objectName().isEmpty())
            ControlWindow->setObjectName("ControlWindow");
        ControlWindow->resize(700, 480);
        ControlWindow->setMinimumSize(QSize(300, 300));
        ControlWindow->setBaseSize(QSize(0, 0));
        QFont font;
        font.setHintingPreference(QFont::PreferDefaultHinting);
        ControlWindow->setFont(font);
        ControlWindow->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        ControlWindow->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        ControlWindow->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextOnly);
        ControlWindow->setAnimated(false);
        ControlWindow->setTabShape(QTabWidget::TabShape::Rounded);
        centralwidget = new QWidget(ControlWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setEnabled(true);
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setHintingPreference(QFont::PreferDefaultHinting);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_2->addWidget(label_2);

        doubleSpinBox = new QDoubleSpinBox(centralwidget);
        doubleSpinBox->setObjectName("doubleSpinBox");
        doubleSpinBox->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(doubleSpinBox->sizePolicy().hasHeightForWidth());
        doubleSpinBox->setSizePolicy(sizePolicy);
        doubleSpinBox->setFont(font1);
        doubleSpinBox->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        doubleSpinBox->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        doubleSpinBox->setStyleSheet(QString::fromUtf8(""));
        doubleSpinBox->setFrame(true);
        doubleSpinBox->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);
        doubleSpinBox->setKeyboardTracking(false);
        doubleSpinBox->setDecimals(4);
        doubleSpinBox->setMaximum(300.000000000000000);
        doubleSpinBox->setSingleStep(60.000000000000000);
        doubleSpinBox->setStepType(QAbstractSpinBox::StepType::AdaptiveDecimalStepType);

        horizontalLayout_2->addWidget(doubleSpinBox);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setEnabled(true);
        label->setFont(font1);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_5->addWidget(label);

        doubleSpinBox_2 = new QDoubleSpinBox(centralwidget);
        doubleSpinBox_2->setObjectName("doubleSpinBox_2");
        doubleSpinBox_2->setEnabled(true);
        sizePolicy.setHeightForWidth(doubleSpinBox_2->sizePolicy().hasHeightForWidth());
        doubleSpinBox_2->setSizePolicy(sizePolicy);
        doubleSpinBox_2->setFont(font1);
        doubleSpinBox_2->setMouseTracking(false);
        doubleSpinBox_2->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        doubleSpinBox_2->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        doubleSpinBox_2->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);
        doubleSpinBox_2->setDecimals(0);

        horizontalLayout_5->addWidget(doubleSpinBox_2);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_3->addWidget(label_3);

        doubleSpinBox_3 = new QDoubleSpinBox(centralwidget);
        doubleSpinBox_3->setObjectName("doubleSpinBox_3");
        sizePolicy.setHeightForWidth(doubleSpinBox_3->sizePolicy().hasHeightForWidth());
        doubleSpinBox_3->setSizePolicy(sizePolicy);
        doubleSpinBox_3->setFont(font1);
        doubleSpinBox_3->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        doubleSpinBox_3->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);
        doubleSpinBox_3->setDecimals(0);

        horizontalLayout_3->addWidget(doubleSpinBox_3);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setEnabled(false);
        pushButton_7->setFont(font1);
        pushButton_7->setFocusPolicy(Qt::FocusPolicy::NoFocus);

        horizontalLayout->addWidget(pushButton_7);

        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setEnabled(false);
        pushButton_5->setFont(font1);
        pushButton_5->setFocusPolicy(Qt::FocusPolicy::NoFocus);

        horizontalLayout->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setEnabled(false);
        pushButton_6->setFont(font1);
        pushButton_6->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        pushButton_6->setCheckable(false);

        horizontalLayout->addWidget(pushButton_6);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setEnabled(true);
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
        pushButton->setFont(font1);

        verticalLayout->addWidget(pushButton);


        verticalLayout_2->addLayout(verticalLayout);

        ControlWindow->setCentralWidget(centralwidget);

        retranslateUi(ControlWindow);

        QMetaObject::connectSlotsByName(ControlWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ControlWindow)
    {
        ControlWindow->setWindowTitle(QCoreApplication::translate("ControlWindow", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("ControlWindow", "\346\270\251\345\272\246", nullptr));
        label->setText(QCoreApplication::translate("ControlWindow", "WAKE\346\214\211\344\270\213\346\225\260", nullptr));
        label_3->setText(QCoreApplication::translate("ControlWindow", "ISP\346\214\211\344\270\213\346\225\260", nullptr));
        pushButton_7->setText(QCoreApplication::translate("ControlWindow", "WAKE", nullptr));
        pushButton_5->setText(QCoreApplication::translate("ControlWindow", "ISP", nullptr));
        pushButton_6->setText(QCoreApplication::translate("ControlWindow", "\350\247\246\346\221\270", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ControlWindow", "R", nullptr));
        pushButton_3->setText(QCoreApplication::translate("ControlWindow", "G", nullptr));
        pushButton_4->setText(QCoreApplication::translate("ControlWindow", "B", nullptr));
        pushButton->setText(QCoreApplication::translate("ControlWindow", "\346\226\255\345\274\200\350\277\236\346\216\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ControlWindow: public Ui_ControlWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLWINDOW_H
