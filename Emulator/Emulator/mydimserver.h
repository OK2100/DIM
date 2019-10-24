#ifndef MYDIMSERVER_H
#define MYDIMSERVER_H

#include <QObject>
#include <QTextStream>
#include <QFile>
#include <QVector>

#include "../../dim_v20r26/dim/dis.hxx"


struct Parameter
{
    QString name;
    qint32 data;
    bool isControl;
    Parameter(QString _name, bool _isControl);
};

class MyDimServer:public QObject, public DimServer
{
    Q_OBJECT
public:
    MyDimServer(QString dns_node, QString server_name="FIT DIM SERVER");
    ~MyDimServer();

    QString serverName;
    QString dnsNode;

    bool setServicesSrc(QString t_servSrc);
    bool setCommandsSrc(QString t_cmndSrc);
    void startServer();
    void stopServer();

signals:
    void commandRecieved(QString parName,qint32 parValue);      // prototype of emitor commands

public slots:
    void updateActual(QString parName,qint32 parValue);         // prototype of reciever from driver
    void updateNew(QString parName,qint32 parValue);            //              --//--


private:
    QString servicesSrc;
    QString commandsSrc;

    QVector<Parameter*> vServiceParameters;
    QVector<Parameter*> vCommandParameters;
    QVector<DimService*> vDimServices;
    QVector<DimCommand*> vDimCommands;

    void commandHandler();
    void publishServices();
    void publishCommands();

    class PMControlAllApply:public DimCommandHandler
    {
        MyDimServer* const my_server;
        PMControlAllApply(MyDimServer& owner): my_server(&owner){}
        void commandHandler();

    };


};
















#endif // MYDIMSERVER_H
