#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "mydimserver.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    MyDimServer* serv;

private slots:

//    void on_setDnsButton_clicked();

//    void on_setNameButton_clicked();

//    void on_startbutton_clicked();

//    void on_stoButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
