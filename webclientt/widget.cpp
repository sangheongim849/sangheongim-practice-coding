#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //socket_.connected();
    QObject::connect(&socket_, &QAbstractSocket::connected, this, &Widget::doConnected );
     QObject::connect(&socket_, &QAbstractSocket::disconnected, this, &Widget::doDisconnected );
    QObject::connect(&socket_, &QIODevice::readyRead, this, &Widget::doReadyRead );
}

Widget::~Widget()
{
    delete ui;
}

void Widget::doConnected(){
    QString msg = "connected\r\n";
    ui->pteMessage->insertPlainText(msg);
}

void Widget::doDisconnected(){
    QString msg = "disconnected\r\n";
    ui->pteMessage->insertPlainText(msg);
}

void Widget::doReadyRead(){
    QString msg = socket_.readAll();
    ui->pteMessage->insertPlainText(msg);
}

void Widget::on_pbConnect_clicked()
{
    //socket_.connectToHost(ui->leHost->text(),ui->lePort->text().toUShort());
    socket_.connectToHostEncrypted(ui->leHost->text(),ui->lePort->text().toUShort());
}


void Widget::on_pbDisconnect_clicked()
{
    socket_.disconnectFromHost();
}


void Widget::on_pbSend_clicked()
{
    socket_.write(ui->pteSend->toPlainText().toUtf8());
}


void Widget::on_Cb010_checkStateChanged(const Qt::CheckState &arg1)
{

}


void Widget::on_Chssl_checkStateChanged(const Qt::CheckState &arg1)
{


}

