#include <QDebug>
#include "global.cpp"

QTextStream cout(stdout);




//  ==========================================  MyDimServer  =============================================

MyDimServer::MyDimServer(QString dns_node,QString server_name)  :   QObject(nullptr),
                                                                    pm1(1,this)
{
    dnsNode = dns_node;
    serverName = server_name;
    setDnsNode(qPrintable(dnsNode));
}

MyDimServer::~MyDimServer()
{

}

template<class Y>
void MyDimServer::emitSignal(m_setPMChSignal<Y> pSignal,quint8 PMid,quint8 Chid, Y val)
{
    emit (this->*pSignal)(PMid,Chid,val);
}

void MyDimServer::emitSignal(m_appPMChSignal pSignal, quint8 PMid, quint8 Chid)
{
    emit (this->*pSignal)(PMid,Chid);
}

//  ===================================================================================================








//  #################################### SETnAPPCommand #################################################

template <class T>
SETnAPPCommand<T>::SETnAPPCommand(QString _name, MyDimServer* _server)  :   PM(0), Ch(0)
{
    name = _name;
    pServer = _server;

    pSet = returnSetPointerToSignal<T>(name);
    pApp = returnAppPointerToSignal(name);

    //All initialize except pSet and pApp
}


        //  Without Ch option don't realised
template<class T>
void SETnAPPCommand<T>::publishCommand()
{
    QString convert;

    switch (sizeof(T)) {
//    case 1: setCmnd = new DimCommand(qPrintable("SET_FT0/PM"+QString(PM)+"/Ch"+QString(Ch)+"/"+name),"C:1",this);
//        break;
    case 2: setCmnd = new DimCommand(qPrintable("SET_FT0/PM"+QString("%1").arg(PM,2,10,QLatin1Char('0'))+"/Ch"+QString("%1").arg(Ch,2,10,QLatin1Char('0'))+"/control"+"/"+name),"S:1",this);
        break;
    case 4: setCmnd = new DimCommand(qPrintable("SET_FT0/PM"+QString("%1").arg(PM,2,10,QLatin1Char('0'))+"/Ch"+QString("%1").arg(Ch,2,10,QLatin1Char('0'))+"/control"+"/"+name),"I:1",this);
        break;
    case 8: setCmnd = new DimCommand(qPrintable("SET_FT0/PM"+QString("%1").arg(PM,2,10,QLatin1Char('0'))+"/Ch"+QString("%1").arg(Ch,2,10,QLatin1Char('0'))+"/control"+"/"+name),"X:1",this);
        break;
    default:
        Q_ASSERT(1);
    }

    appCmnd = new DimCommand(qPrintable("APP_FT0/PM"+QString("%1").arg(PM,2,10,QLatin1Char('0'))+"/Ch"+QString("%1").arg(Ch,2,10,QLatin1Char('0'))+"/control"+"/"+name),"C:1",this);

}


template <class T>
void SETnAPPCommand<T>::commandHandler()
{
    DimCommand* currCmnd = getCommand();
    if(currCmnd == setCmnd) {
        switch (sizeof(T)) {
////        case 1: pServer->emitSignal<T>(pSet,PM,Ch,QString(setCmnd->getString()).toUShort());
////            break;
        case 2:
            pServer->emitSignal(pSet,PM,Ch,static_cast<T>(setCmnd->getShort()));
            break;
        case 4:
            pServer->emitSignal(pSet,PM,Ch,static_cast<T>(setCmnd->getInt()));
            break;
        case 8:
            pServer->emitSignal(pSet,PM,Ch,static_cast<T>(setCmnd->getLonglong()));
            break;
        default:
            Q_ASSERT(1);
        }
    }
    if(currCmnd == appCmnd) {
        pServer->emitSignal(pApp,PM,Ch);
    }
}

//  #########################################################################################################

APPCommand::APPCommand(QString _name, MyDimServer* _server)  :   PM(0), Ch(0)
{
    name = _name;
    pServer = _server;

    pApp = returnAppPointerToSignal(name);

    //All initialize except pSet and pApp
}


        //  Without Ch option don't realised
void APPCommand::publishCommand()
{
    QString convert;
    appCmnd = new DimCommand(qPrintable("APP_FT0/PM"+QString("%1").arg(PM,2,10,QLatin1Char('0'))+"/Ch"+QString("%1").arg(Ch,2,10,QLatin1Char('0'))+"/control"+"/"+name),"C:1",this);
}



void APPCommand::commandHandler()
{
    DimCommand* currCmnd = getCommand();
    if(currCmnd == appCmnd) {
        pServer->emitSignal(pApp,PM,Ch);
    }
}

//  #########################################################################################################









//  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ PMPars @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

PMPars::PMPars(quint8 _PMid,MyDimServer* _server)
        :   adczero     ( 12,SETnAPPCommand<quint16>("ADC_ZERO",_server) ),
            adcdelay    ( 12,SETnAPPCommand<quint16>("ADC_DELAY",_server) ),
            adc0offset  ( 12,SETnAPPCommand<quint16>("ADC0_OFFSET",_server) ),
            adc1offset  ( 12,SETnAPPCommand<quint16>("ADC1_OFFSET",_server) ),
            adc0range   ( 12,SETnAPPCommand<quint16>("ADC0_RANGE",_server) ),
            adc1range   ( 12,SETnAPPCommand<quint16>("ADC1_RANGE",_server) ),
            timealin    ( 12,SETnAPPCommand<quint16>("TIME_ALIN",_server) ),
            cfdtreshold ( 12,SETnAPPCommand<quint16>("CFD_TRESHOLD",_server) ),
            cfdzero     ( 12,SETnAPPCommand<quint16>("CFD_ZERO",_server) ),
            alltoch     ("ALLtoCH",_server)
{
    PMid = _PMid;
    pServer = _server;
    for(quint8 i=0; i<1; i++) {
        adczero[i].Ch = i+1; adczero[i].PM = PMid; adczero[i].publishCommand();
        adcdelay[i].Ch = i+1; adcdelay[i].PM = PMid; adcdelay[i].publishCommand();
        adc0offset[i].Ch = i+1; adc0offset[i].PM = PMid; adc0offset[i].publishCommand();
        adc1offset[i].Ch = i+1; adc1offset[i].PM = PMid; adc1offset[i].publishCommand();
        adc0range[i].Ch = i+1; adc0range[i].PM = PMid; adc0range[i].publishCommand();
        adc1range[i].Ch = i+1; adc1range[i].PM = PMid; adc1range[i].publishCommand();
        timealin[i].Ch = i+1; timealin[i].PM = PMid; timealin[i].publishCommand();
        cfdtreshold[i].Ch = i+1; cfdtreshold[i].PM = PMid; cfdtreshold[i].publishCommand();
        cfdzero[i].Ch = i+1; cfdzero[i].PM = PMid; cfdzero[i].publishCommand();
        alltoch.Ch = i+1; alltoch.PM = PMid; alltoch.publishCommand();
    }

}

//  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@




















//Parameter::Parameter(QString _name, bool _isControl) :
//    data(0)
//{
//    name = _name;
//    isControl = _isControl;
//}

//MyDimServer::MyDimServer(QString dns_node,QString server_name): QObject()
//{
//    dnsNode = dns_node;
//    serverName = server_name;
//}

//MyDimServer::~MyDimServer()
//{
//    stopServer();

//    foreach(Parameter* pPar,vServiceParameters) {
//        delete pPar;
//    }
//    foreach(Parameter* pPar,vCommandParameters) {
//        delete pPar;
//    }
//}

//bool MyDimServer::setServicesSrc(QString t_servSrc)
//{
//    QString str;
//    QFile src_file(t_servSrc);

//    if(src_file.open(QIODevice::ReadOnly)) {
//        QTextStream inf(&src_file);
//        Parameter* pPar;
//        int count(0);
//        while(not inf.atEnd()) {
//            inf >> str;
//            pPar = new Parameter(str,false);
//            vServiceParameters.push_back(pPar);
//            count++;
//        }
//        cout << "@ Find " << count << " DIM services" << endl;
//        return true;
//    }

//    else {
//        cout << "@ Can't open file" << endl;
//        return false;
//    }
//}

//bool MyDimServer::setCommandsSrc(QString t_cmndSrc)
//{
//    QString str;
//    QFile src_file(t_cmndSrc);

//    if(src_file.open(QIODevice::ReadOnly)) {
//        QTextStream inf(&src_file);
//        Parameter* pPar;
//        int count(0);
//        while(not inf.atEnd()) {
//            inf >> str;
//            pPar = new Parameter(str,true);
//            vCommandParameters.push_back(pPar);
//            count++;
//        }
//        cout << "@ Find " << count << " DIM commands" << endl;
//        return true;
//    }
//    else {
//        cout << "@ Can't open file" << endl;
//        return false;
//    }
//}

//void MyDimServer::startServer()
//{
//    cout << "Server name: " <<serverName << endl;
//    cout << "DNS node: "<< dnsNode << endl;

//    publishServices();
//    publishCommands();

//    setDnsNode(qPrintable(dnsNode));
//    start(qPrintable(serverName));

//    cout     << "###################################################" << endl
//             << "@ Start DIM server on " << dnsNode << endl
//             << "###################################################" << endl;

//}

//void MyDimServer::publishServices()
//{
//    vDimServices.reserve(5000);
//    foreach(Parameter* pPar,vServiceParameters) {
//        vDimServices.push_back(new DimService(qPrintable(pPar->name),pPar->data));
//    }
//    cout << "@ Publish " << vDimServices.count() << " services" << endl;
//}

//void MyDimServer::publishCommands()
//{
//    vDimCommands.reserve(5000);
//    foreach(Parameter* pPar,vCommandParameters) {
//        vDimCommands.push_back(new DimCommand(qPrintable(pPar->name),"I",this));
//    }
//    cout << "@ Publish " << vDimCommands.count() << " services" << endl;
//}

//void MyDimServer::stopServer()
//{
//    stop();
//    cout
//             << "###################################################" << endl
//             << "Stop DIM server"  << endl
//             << "###################################################" << endl;

////    cout << vDimServices.size() << endl;
//    foreach(DimService* pServ,vDimServices) {
//        delete pServ;
//    }
//    vDimServices.resize(0);
////    cout << vDimCommands.size() << endl;
//    foreach(DimCommand* pCmnd,vDimCommands) {
//        delete pCmnd;
//    }
//    vDimCommands.resize(0);
//}

//void MyDimServer::commandHandler()
//{
//    DimCommand *currCmnd = getCommand();

//    cout << "~Recieve command " << currCmnd->getName() << " " << currCmnd->getInt() << endl;

//    cout << "Position: " << vDimCommands.indexOf(currCmnd) + 1 << endl;


//    /*      emiting signal will be here         */
//}

////  Prototypes :
//void MyDimServer::updateActual(QString parName,qint32 parValue)
//{
////    foreach(Parameter* pPar,vServiceParameters) {
////        if(pPar->name == parName){
////            pPar->Actual_data = parValue;
////            cout << "@ Service" << pPar->name<< "is updated" << endl;
////            return;
////        }
////    }
//}

//void MyDimServer::updateNew(QString parName,qint32 parValue)
//{
////    foreach(Parameter* pPar,vServiceParameters) {
////        if(pPar->name == parName){
////            pPar->New_data = parValue;
////            cout << "@ Service" << pPar->name<< "is updated" << endl;
////            return;
////        }
////    }
//}

////===================================================================================================



















