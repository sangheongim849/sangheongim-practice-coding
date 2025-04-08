/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLCDNumber *lcdNumber;
    QPushButton *pb10;
    QPushButton *pb50;
    QPushButton *pb100;
    QPushButton *pb500;
    QPushButton *pbCoffee;
    QPushButton *pbReset;
    QPushButton *pbTea;
    QPushButton *pbCola;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(498, 257);
        lcdNumber = new QLCDNumber(Widget);
        lcdNumber->setObjectName("lcdNumber");
        lcdNumber->setGeometry(QRect(160, 10, 181, 61));
        pb10 = new QPushButton(Widget);
        pb10->setObjectName("pb10");
        pb10->setGeometry(QRect(160, 80, 89, 26));
        pb50 = new QPushButton(Widget);
        pb50->setObjectName("pb50");
        pb50->setGeometry(QRect(160, 110, 89, 26));
        pb100 = new QPushButton(Widget);
        pb100->setObjectName("pb100");
        pb100->setGeometry(QRect(160, 140, 89, 26));
        pb500 = new QPushButton(Widget);
        pb500->setObjectName("pb500");
        pb500->setGeometry(QRect(160, 170, 89, 26));
        pbCoffee = new QPushButton(Widget);
        pbCoffee->setObjectName("pbCoffee");
        pbCoffee->setGeometry(QRect(270, 80, 89, 26));
        pbReset = new QPushButton(Widget);
        pbReset->setObjectName("pbReset");
        pbReset->setGeometry(QRect(270, 170, 89, 26));
        pbTea = new QPushButton(Widget);
        pbTea->setObjectName("pbTea");
        pbTea->setGeometry(QRect(270, 110, 89, 26));
        pbCola = new QPushButton(Widget);
        pbCola->setObjectName("pbCola");
        pbCola->setGeometry(QRect(270, 140, 89, 26));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pb10->setText(QCoreApplication::translate("Widget", "10", nullptr));
        pb50->setText(QCoreApplication::translate("Widget", "50", nullptr));
        pb100->setText(QCoreApplication::translate("Widget", "100", nullptr));
        pb500->setText(QCoreApplication::translate("Widget", "500", nullptr));
        pbCoffee->setText(QCoreApplication::translate("Widget", "Coffee(100)", nullptr));
        pbReset->setText(QCoreApplication::translate("Widget", "Reset", nullptr));
        pbTea->setText(QCoreApplication::translate("Widget", "Tea(500)", nullptr));
        pbCola->setText(QCoreApplication::translate("Widget", "Cola(1000)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
