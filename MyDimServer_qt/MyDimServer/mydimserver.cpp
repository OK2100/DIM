#include "mydimserver.h"
#include <QDebug>

MyDimServer::MyDimServer(): QObject()
{

    fillServisesVector();
    fillCommandsVector();
    printServicesVector();
    printCommandsVector();

    publishServices();
    publishCommands();

    connect(this,&MyDimServer::commandRecieved,this,&MyDimServer::updateService);       // emulator mode
}

MyDimServer::~MyDimServer()
{

    foreach(DimService* pServ, vServises) {
        delete pServ;
    }
    foreach(DimCommand* pCmd, vCommands) {
        delete pCmd;
    }
    stopServer();
}

void MyDimServer::startServer()
{
    qDebug() << serverName;
    qDebug() << dnsNode;

    setDnsNode(qPrintable(dnsNode));
    start(qPrintable(serverName));
    qDebug()
             << "###################################################" << endl
             << "Start DIM server on" << dnsNode << endl
             << "###################################################" << endl;

}

void MyDimServer::stopServer()
{
    stop();
    qDebug()
             << "###################################################" << endl
             << "Stop DIM server"  << endl
             << "###################################################" << endl;
}

void MyDimServer::fillServisesVector()
{
    vServisPars.reserve(4200);

    foreach(PM* pPM,allPars.vPMs) {

        //      Common parameters in PM
        foreach(Parameter* pPar,pPM->vPars) {
            vServisPars.push_back(pPar);
        }

        //      Channel parameters in PM
        foreach(PMChannel* pChan,pPM->vChans) {
            foreach(Parameter* pPar,pChan->vPars)  {
                vServisPars.push_back(pPar);
            }
        }
    }
}

void MyDimServer::fillCommandsVector()
{
    vCmdPars.reserve(2000);

    foreach(PM* pPM,allPars.vPMs) {

        //      Common parameters in PM
        foreach(Parameter* pPar,pPM->vPars) {  if(pPar->isControl) vCmdPars.push_back(pPar);    }

        //      Channel parameters in PM
        foreach(PMChannel* pChan,pPM->vChans) {
            foreach(Parameter* pPar,pChan->vPars)  {  if(!pPar->isControl) vCmdPars.push_back(pPar);    }
        }
    }
}

void MyDimServer::printServicesVector()
{
    QFile servList("Services_list.txt");
    servList.open(QIODevice::WriteOnly);
    QTextStream out(&servList);

    foreach(Parameter* pPar,vServisPars) {
        out << pPar->name << endl;
    }

    servList.close();
}

void MyDimServer::printCommandsVector()
{
    QFile cmdList("Commands_list.txt");
    cmdList.open(QIODevice::WriteOnly);
    QTextStream out(&cmdList);

    foreach(Parameter* pPar,vCmdPars) {
        out << pPar->name << endl;
    }

    cmdList.close();
}

void MyDimServer::publishServices()
{
    vServises.reserve(4200);
    foreach(Parameter* pPar,vServisPars) {
        vServises.push_back(new DimService(qPrintable(pPar->name+"_S"),pPar->data));
    }
}

void MyDimServer::publishCommands()
{
    vCommands.reserve(2000);
    foreach(Parameter* pPar,vCmdPars) {
        vCommands.push_back(new DimCommand(qPrintable(pPar->name+"_C"),"I",this));
    }
}

void MyDimServer::commandHandler()
{
    DimCommand *currCmnd = getCommand();

    qDebug() << "Recieve command"               // emulator mode
             << currCmnd->getName()
             << currCmnd->getInt();


    QString name(currCmnd->getName());
    name.chop(2);   // cut "_C"
    emit commandRecieved(name,currCmnd->getInt());
}

void MyDimServer::updateService(QString parName,qint32 parValue)
{
    foreach(Parameter* pPar,vServisPars) {
        if(pPar->name == parName){
            pPar->data = parValue;

            qDebug() << "@ Service" << pPar->name + "_S" << "is updated" << endl;          // emulator mode

            return;
        }
    }
}
