#include "mydimserver.h"
#include <QDebug>

QTextStream cout(stdout);

Parameter::Parameter(QString _name, bool _isControl) :
    data(0)
{
    name = _name;
    isControl = _isControl;
}

MyDimServer::MyDimServer(QString dns_node,QString server_name): QObject()
{
    dnsNode = dns_node;
    serverName = server_name;
}

MyDimServer::~MyDimServer()
{
    stopServer();

    foreach(Parameter* pPar,vServiceParameters) {
        delete pPar;
    }
    foreach(Parameter* pPar,vCommandParameters) {
        delete pPar;
    }
}

bool MyDimServer::setServicesSrc(QString t_servSrc)
{
    QString str;
    QFile src_file(t_servSrc);

    if(src_file.open(QIODevice::ReadOnly)) {
        QTextStream inf(&src_file);
        Parameter* pPar;
        int count(0);
        while(not inf.atEnd()) {
            inf >> str;
            pPar = new Parameter(str,false);
            vServiceParameters.push_back(pPar);
            count++;
        }
        cout << "@ Find " << count << " DIM services" << endl;
        return true;
    }

    else {
        cout << "@ Can't open file" << endl;
        return false;
    }
}

bool MyDimServer::setCommandsSrc(QString t_cmndSrc)
{
    QString str;
    QFile src_file(t_cmndSrc);

    if(src_file.open(QIODevice::ReadOnly)) {
        QTextStream inf(&src_file);
        Parameter* pPar;
        int count(0);
        while(not inf.atEnd()) {
            inf >> str;
            pPar = new Parameter(str,true);
            vCommandParameters.push_back(pPar);
            count++;
        }
        cout << "@ Find " << count << " DIM commands" << endl;
        return true;
    }
    else {
        cout << "@ Can't open file" << endl;
        return false;
    }
}

void MyDimServer::startServer()
{
    cout << "Server name: " <<serverName << endl;
    cout << "DNS node: "<< dnsNode << endl;

    publishServices();
    publishCommands();

    setDnsNode(qPrintable(dnsNode));
    start(qPrintable(serverName));

    cout     << "###################################################" << endl
             << "@ Start DIM server on " << dnsNode << endl
             << "###################################################" << endl;

}

void MyDimServer::publishServices()
{
    vDimServices.reserve(5000);
    foreach(Parameter* pPar,vServiceParameters) {
        vDimServices.push_back(new DimService(qPrintable(pPar->name),pPar->data));
    }
    cout << "@ Publish " << vDimServices.count() << " services" << endl;
}

void MyDimServer::publishCommands()
{
    vDimCommands.reserve(5000);
    foreach(Parameter* pPar,vCommandParameters) {
        vDimCommands.push_back(new DimCommand(qPrintable(pPar->name),"I",this));
    }
    cout << "@ Publish " << vDimCommands.count() << " services" << endl;
}

void MyDimServer::stopServer()
{
    stop();
    cout
             << "###################################################" << endl
             << "Stop DIM server"  << endl
             << "###################################################" << endl;

//    cout << vDimServices.size() << endl;
    foreach(DimService* pServ,vDimServices) {
        delete pServ;
    }
    vDimServices.resize(0);
//    cout << vDimCommands.size() << endl;
    foreach(DimCommand* pCmnd,vDimCommands) {
        delete pCmnd;
    }
    vDimCommands.resize(0);
}

void MyDimServer::commandHandler()
{
    DimCommand *currCmnd = getCommand();

    cout << "~Recieve command " << currCmnd->getName() << " " << currCmnd->getInt() << endl;
//    cout << "Position: " << vDimCommands.indexOf(currCmnd) + 1 << endl;
    int idx = vDimCommands.indexOf(currCmnd);
    QString name(currCmnd->getName());
    if(name.left(2)=="S/"){
        vServiceParameters[idx]->data = currCmnd->getInt();
        cout << "@ Set as new " << vCommandParameters[idx]->name << vCommandParameters[idx]->data;
    }


    /*      emiting signal will be here         */
}

//  Prototypes :
void MyDimServer::updateActual(QString parName,qint32 parValue)
{
//    foreach(Parameter* pPar,vServiceParameters) {
//        if(pPar->name == parName){
//            pPar->Actual_data = parValue;
//            cout << "@ Service" << pPar->name<< "is updated" << endl;
//            return;
//        }
//    }
}

void MyDimServer::updateNew(QString parName,qint32 parValue)
{
//    foreach(Parameter* pPar,vServiceParameters) {
//        if(pPar->name == parName){
//            pPar->New_data = parValue;
//            cout << "@ Service" << pPar->name<< "is updated" << endl;
//            return;
//        }
//    }
}

//===================================================================================================

void MyDimServer::PMControlAllApply::commandHandler()
{
    DimCommand* currCmnd = getCommand();
    int idx = my_server->vDimCommands.indexOf(currCmnd)+1;
    if(idx!=-1) {
        for(uint i=1;i<30;i++) {

        }
    }

}


















