#ifndef MYDIMSERVER_H
#define MYDIMSERVER_H

#include <QObject>
#include <QTextStream>
#include <QFile>
#include <QVector>

#include "../../dim_v20r26/dim/dis.hxx"

class MyDimServer;
template<class T>
class SETnAPPCommand;


/////////////////////////////////////////////////////////////////
template <class T>
using m_setPMChSignal = void(MyDimServer::*)(quint8,quint8,T);          //  for PM & Ch
using m_appPMChSignal = void(MyDimServer::*)(quint8,quint8);

template <class T>
using m_setPMSignal = void(MyDimServer::*)(quint8,T);                   //  for PM only
using m_appPMSignal = void(MyDimServer::*)(quint8);
/////////////////////////////////////////////////////////////////



template <class T>
class SETnAPPCommand : public DimCommandHandler
{
public:
    SETnAPPCommand(QString _name, MyDimServer* _server);

    QString name;

    DimCommand* setCmnd;
    DimCommand* appCmnd;

    m_setPMChSignal<T> pSet;
    m_appPMChSignal pApp;

    MyDimServer* pServer;
    quint8 PM;
    quint8 Ch;


    void publishCommand();
    void commandHandler();
};

//  ===================================================================================

class APPCommand : public DimCommandHandler
{
public:
    APPCommand(QString _name, MyDimServer* _server);

    QString name;

    DimCommand* appCmnd;

    m_appPMChSignal pApp;

    MyDimServer* pServer;
    quint8 PM;
    quint8 Ch;

    void publishCommand();
    void commandHandler();
};

//  ===================================================================================

class PMPars
{
public:
    PMPars(quint8 PMid,MyDimServer* _server);

    MyDimServer* pServer;
    quint8 PMid;


    QVector<SETnAPPCommand<quint16>> adczero;
    QVector<SETnAPPCommand<quint16>> adcdelay;
    QVector<SETnAPPCommand<quint16>> adc0offset;
    QVector<SETnAPPCommand<quint16>> adc1offset;
    QVector<SETnAPPCommand<quint16>> adc0range;
    QVector<SETnAPPCommand<quint16>> adc1range;
    QVector<SETnAPPCommand<quint16>> timealin;
    QVector<SETnAPPCommand<quint16>> cfdtreshold;
    QVector<SETnAPPCommand<quint16>> cfdzero;

    APPCommand alltoch;

};

//  #####################################################################################


class MyDimServer   :   QObject, public DimServer
{
    Q_OBJECT
public:
    MyDimServer(QString dns_node, QString server_name="FIT DIM SERVER");
    ~MyDimServer();

    QString serverName;
    QString dnsNode;

    PMPars pm1;



    template<class Y>
    void emitSignal(m_setPMChSignal<Y> pSignal,quint8 PMid,quint8 Chid, Y val);
    void emitSignal(m_appPMChSignal pSignal,quint8 PMid,quint8 Chid);

signals:
    void set_ADC_ZERO_requested     (quint8 PMid, quint8 CHid, quint16 val);
    void set_ADC_DELAY_requested    (quint8 PMid, quint8 CHid, quint16 val);
    void set_ADC0_OFFSET_requested  (quint8 PMid, quint8 CHid, quint16 val);
    void set_ADC1_OFFSET_requested  (quint8 PMid, quint8 CHid, quint16 val);
    void set_ADC0_RANGE_requested   (quint8 PMid, quint8 CHid, quint16 val);
    void set_ADC1_RANGE_requested   (quint8 PMid, quint8 CHid, quint16 val);
    void set_TIME_ALIN_requested    (quint8 PMid, quint8 CHid, quint16 val);
    void set_CFD_TRESHOLD_requested (quint8 PMid, quint8 CHid, quint16 val);
    void set_CFD_ZERO_requested     (quint8 PMid, quint8 CHid, quint16 val);

    void apply_ADC_ZERO_requested       (quint8 PM,quint8 Ch);
    void apply_ADC_DELAY_requested      (quint8 PM,quint8 Ch);
    void apply_ADC0_OFFSET_requested    (quint8 PM,quint8 Ch);
    void apply_ADC1_OFFSET_requested    (quint8 PM,quint8 Ch);
    void apply_ADC0_RANGE_requested     (quint8 PM,quint8 Ch);
    void apply_ADC1_RANGE_requested     (quint8 PM,quint8 Ch);
    void apply_TIME_ALIN_requested      (quint8 PM,quint8 Ch);
    void apply_CFD_TRESHOLD_requested   (quint8 PM,quint8 Ch);
    void apply_CFD_ZERO_requested       (quint8 PM,quint8 Ch);
    void apply_ALLtoCH_requested        (quint8 PM,quint8 Ch);

};


































//struct Parameter
//{
//    QString name;
//    qint32 data;
//    bool isControl;
//    Parameter(QString _name, bool _isControl);
//};

//class MyDimServer:public QObject, public DimServer
//{
//    Q_OBJECT
//public:
//    MyDimServer(QString dns_node, QString server_name="FIT DIM SERVER");
//    ~MyDimServer();

//    QString serverName;
//    QString dnsNode;

//    bool setServicesSrc(QString t_servSrc);
//    bool setCommandsSrc(QString t_cmndSrc);
//    void startServer();
//    void stopServer();

//signals:
//    void commandRecieved(QString parName,qint32 parValue);      // prototype of emitor commands

//public slots:
//    void updateActual(QString parName,qint32 parValue);         // prototype of reciever from driver
//    void updateNew(QString parName,qint32 parValue);            //              --//--


//private:
//    QString servicesSrc;
//    QString commandsSrc;

//    QVector<Parameter*> vServiceParameters;
//    QVector<Parameter*> vCommandParameters;
//    QVector<DimService*> vDimServices;
//    QVector<DimCommand*> vDimCommands;

//    void commandHandler();
//    void publishServices();
//    void publishCommands();

//};
















#endif // MYDIMSERVER_H
