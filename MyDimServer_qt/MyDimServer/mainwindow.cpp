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

}

MainWindow::~MainWindow()
{
    delete server;
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    server->serverName = ui->lineEdit->text();
}

void MainWindow::on_pushButton_2_clicked()
{
    server->dnsNode = ui->lineEdit_2->text();
}

void MainWindow::on_pushButton_4_clicked()
{
    if(!server->serverName.isEmpty() && !server->dnsNode.isEmpty()) {
        server->startServer();
        ui->lineEdit->setReadOnly(1);
        ui->lineEdit_2->setReadOnly(1);
    }
    else {
        QMessageBox::question(0, "Message", "Please set 'server name' and 'dns node'",QMessageBox::Ok);
    }
}

void MainWindow::on_pushButton_3_clicked()
{
    server->stopServer();
    ui->lineEdit->setReadOnly(0);
    ui->lineEdit_2->setReadOnly(0);

}
