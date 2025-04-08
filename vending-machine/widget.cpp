#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>






Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

// 버튼 활성화/비활성화 관리 함수
void Widget::updateButtons() {
    ui->pbCoffee->setEnabled(money >= 100);
    ui->pbTea->setEnabled(money >= 500);
    ui->pbCola->setEnabled(money >= 1000);
}


void Widget::changeMoney(int diff) {
    //money += diff;
    //ui->lcdNumber->display(money);
    if (money + diff < 0) {
        QMessageBox::warning(this, "잔액 부족", "잔액이 부족합니다!");
        return;
    }
    money += diff;
    ui->lcdNumber->display(money);
    updateButtons();
}







void Widget::on_pb10_clicked()
{
    changeMoney(10);
}


void Widget::on_pb50_clicked()
{
    changeMoney(50);
}


void Widget::on_pb100_clicked()
{
   changeMoney(100);
}


void Widget::on_pb500_clicked()
{
    changeMoney(500);
}


void Widget::on_pbCoffee_clicked()
{
    changeMoney(-100);
}

void Widget::on_pbTea_clicked()
{
    changeMoney(-500);
}

void Widget::on_pbCola_clicked()
{
    changeMoney(-1000);
}



void Widget::on_pbReset_clicked()
{
    QMessageBox mb;
    //mb.information(nullptr,"title","aaa");
    mb.information(this, "거래 완료", QString("반환된 금액: %1원\n좋은 거래였습니다!").arg(money));

    money = 0;  // 잔액을 0으로 초기화
    ui->lcdNumber->display(money);  // LCD 디스플레이 업데이트

}





