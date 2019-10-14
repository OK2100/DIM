#ifndef MYDIMSERVER_H
#define MYDIMSERVER_H

#include <QObject>
#include <QTextStream>
#include <QFile>

#include "parameterstructure.h"
#include "../../dim_v20r26/dim/dis.hxx"


class MyDimServer:public QObject, public DimServer
{
    Q_OBJECT
public:
    QString serverName;
    QString dnsNode;

    AllParameters allPars;
    QVector<Parameter*> vServisPars;
    QVector<Parameter*> vCmdPars;

    QVector<DimService*> vServises;
    QVector<DimCommand*> vCommands;

    MyDimServer();
    ~MyDimServer();

    void fillServisesVector();
    void fillCommandsVector();
    void printServicesVector();         // print list of services to file
    void printCommandsVector();         // print list of commands to file

    void startServer();
    void stopServer();

    void commandHandler();

private slots:
    void publishServices();
    void publishCommands();
    void updateService(QString parName,qint32 parValue);

signals:
    void commandRecieved(QString parName,qint32 parValue);
};



#endif // MYDIMSERVER_H
