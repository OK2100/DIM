#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mydimserver.h"
#include <QInputDialog>
#include <QMessageBox>
#include <QtGui>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
//    ui->setupUi(this);

//    serv = new MyDimServer("hplu-Notebook-PC");

///*  Example of using without gui

    QString node = "FIT DIM SERVER";

    serv = new MyDimServer(node);
    serv->startServer();
//    serv->start("FIT DIM SERVER");
//*/
}

MainWindow::~MainWindow()
{
//    delete serv;
  //  delete ui;
}

//void MainWindow::on_setDnsButton_clicked()
//{
//    serv->dnsNode = ui->lineEdit->text();
//}

//void MainWindow::on_setNameButton_clicked()
//{
//    serv->serverName = ui->lineEdit_2->text();
//}

//void MainWindow::on_startbutton_clicked()
//{
//    if((!serv->serverName.isEmpty()) && (!serv->dnsNode.isEmpty())) {
//        serv->startServer();
//        ui->lineEdit->setReadOnly(1);
//        ui->lineEdit_2->setReadOnly(1);
//    }
//    else {
//        QMessageBox::question(this, "Message", "Please set 'server name' and 'dns node'",QMessageBox::Ok);
//    }
//}

//void MainWindow::on_stoButton_clicked()
//{
//    serv->stopServer();
//    ui->setDnsButton->setChecked(0);
//    ui->setNameButton->setChecked(0);
//    ui->lineEdit->setReadOnly(0);
//    ui->lineEdit_2->setReadOnly(0);
//}
