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
    ui->setupUi(this);
    server = new MyDimServer();
//    server->serverName = "TEST";
//    server->dnsNode = "hplu-Notebook-PC";
//    server->setDnsNode("hplu-Notebook-PC");
//    server->start("TEST");
//    server->startServer();
}

MainWindow::~MainWindow()
{
    delete server;
    delete ui;
}

void MainWindow::on_setDnsButton_clicked()
{
    server->dnsNode = ui->lineEdit->text();
}

void MainWindow::on_setNameButton_clicked()
{
    server->serverName = ui->lineEdit_2->text();
}

void MainWindow::on_startbutton_clicked()
{
    if((!server->serverName.isEmpty()) && (!server->dnsNode.isEmpty())) {
        server->startServer();
        ui->lineEdit->setReadOnly(1);
        ui->lineEdit_2->setReadOnly(1);
    }
    else {
        QMessageBox::question(0, "Message", "Please set 'server name' and 'dns node'",QMessageBox::Ok);
    }
}

void MainWindow::on_stoButton_clicked()
{
    server->stopServer();
    ui->setDnsButton->setChecked(0);
    ui->setNameButton->setChecked(0);
    ui->lineEdit->setReadOnly(0);
    ui->lineEdit_2->setReadOnly(0);
}
