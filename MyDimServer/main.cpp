//#include "mainwindow.h"
#include "mydimserver.h"

#include <QApplication>
#include <QStyleFactory>


class XHandler : public DimCommandHandler
{
    DimCommand* currCmnd;
    quint64 val;
    void commandHandler() {
        currCmnd = getCommand();
        val = *static_cast<quint64*>(currCmnd->getData());
        qDebug() << currCmnd->getSize();
        qDebug() << sizeof(val);
        qDebug() << val;
        qDebug() << currCmnd->getLonglong();
    }
};


int main(int argc, char *argv[])
{
    QApplication::setStyle(QStyleFactory::create("Fusion"));
    QApplication a(argc, argv);

    MyDimServer* serv;
    QString node;

    qDebug() << "\nInput dns node: ";
    cin >> node;

    int test = 13;
    quint64 val = 0x1111111111111111;
    DimService service("AAA TEST SERVICE","X:1",(void*)&val,sizeof(val));
    XHandler handl;
    DimCommand command("AAA TEST 64bit COMMAND","X:1",&handl);

//    node = "hplu-Notebook-PC";
    serv = new MyDimServer(node);
    serv->startServer();

//    MainWindow w;
//    w.show();

//    QObject::connect(serv,&MyDimServer::set_ADC_ZERO_requested,serv,&MyDimServer::update_new_ADC_ZERO);
//    QObject::connect(serv,&MyDimServer::set_OR_GATE_requested,serv,&MyDimServer::update_new_OR_GATE);
//    QObject::connect(serv,&MyDimServer::set_TG_PATTERN_requested,serv,&MyDimServer::update_new_TG_PATTERN);




    return a.exec();
}
