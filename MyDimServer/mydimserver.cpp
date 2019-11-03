#include <QDebug>
#include "global.cpp"


QTextStream cout(stdout);




//  ==========================================  MyDimServer  =============================================

MyDimServer::MyDimServer(QString dns_node,QString server_name)  :   QObject(nullptr), pm(1,PMPars(this))
{
    dnsNode = dns_node;
    serverName = server_name;
    setDnsNode(qPrintable(dnsNode));

    for(quint8 i=0;i<1;i++) {
        pm[i].PMid = i+1;
    }

}

MyDimServer::~MyDimServer()
{

}

template<class Y>
void MyDimServer::emitSignal(m_setPMChSignal<Y> pSignal,quint8 PMid,quint8 Chid, Y val)
{
    if(pSignal != nullptr)
    emit (this->*pSignal)(PMid,Chid,val);
}

void MyDimServer::emitSignal(m_appPMChSignal pSignal, quint8 PMid, quint8 Chid)
{
    if(pSignal != nullptr)
    emit (this->*pSignal)(PMid,Chid);
}

template<class Y>
void MyDimServer::emitSignal(m_setPMSignal<Y> pSignal,quint8 PMid, Y val)
{
    if(pSignal != nullptr)
    emit (this->*pSignal)(PMid,val);
}

void MyDimServer::emitSignal(m_appPMSignal pSignal, quint8 PMid)
{
    if(pSignal != nullptr)
    emit (this->*pSignal)(PMid);
}



//  ===================================================================================================


//  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ PMPars @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

PMPars::PMPars(MyDimServer* _server):
            PMid(0),
            adczero     ( 12,PMCHfullPar<quint16>("ADC_ZERO",_server) ),
            adcdelay    ( 12,PMCHfullPar<quint16>("ADC_DELAY",_server) ),
            adc0offset  ( 12,PMCHfullPar<quint16>("ADC0_OFFSET",_server) ),
            adc1offset  ( 12,PMCHfullPar<quint16>("ADC1_OFFSET",_server) ),
            adc0range   ( 12,PMCHfullPar<quint16>("ADC0_RANGE",_server) ),
            adc1range   ( 12,PMCHfullPar<quint16>("ADC1_RANGE",_server) ),
            timealin    ( 12,PMCHfullPar<quint16>("TIME_ALIN",_server) ),
            cfdtreshold ( 12,PMCHfullPar<quint16>("CFD_TRESHOLD",_server) ),
            cfdzero     ( 12,PMCHfullPar<quint16>("CFD_ZERO",_server) ),
            alltoch     ("ALLtoCH",_server),
            adc0meanampl(12, PMCHonlyActPar<quint16>("ADC0_MEANAMPL",_server) ),
            adc1meanampl(12, PMCHonlyActPar<quint16>("ADC1_MEANAMPL",_server) ),
            adc0zerolvl (12, PMCHonlyActPar<quint16>("ADC0_ZEROLVL",_server) ),
            adc1zerolvl (12, PMCHonlyActPar<quint16>("ADC1_ZEROLVL",_server) ),
            cfdcnt      (12, PMCHonlyActPar<quint32>("CFD_CNT",_server) ),
            trgcnt      (12, PMCHonlyActPar<quint32>("TRG_CNT",_server) ),
            meantime    (12, PMCHonlyActPar<quint16>("MEAN_TIME",_server) ),

            chmask      ("CH_MASK",_server),
            cfdsatr     ("CFD_SATR",_server),
            orgate      ("OR_GATE",_server),
            resetcounters           ("RESET_COUNTERS",_server),
            zerolvlcalibration      ("ZERO_LVL_CALIBR",_server),
            resetorbitsync          ("RESET_ORBIT_SYNC",_server),
            resetdroppinghitcounters("RESET_DROPPING_HIT_COUNTERS",_server),
            resetgenbunchoffset     ("RESET_GEN_BUNCH_OFFSET",_server),
            resetgbterrors          ("RESET_GBT_ERRORS",_server),
            resetgbt                ("RESET_GBT",_server),
            resetrxphaseerror       ("RESET_RX_PHASE_ERROR",_server),
            sendsinglecommand       ("SEND_COMMAND",_server),
            tgmode                  ("TG_MODE",_server),
            tgpattern               ("TG_PATTERN",_server),
            tgcontvalue             ("TG_CONT_VALUE",_server),
            tgsendsingle            ("TG_SEND_SINGLE",_server),
            tgbunchfreq             ("TG_BUNCH_FREQ",_server),
            tgfreqoffset            ("TG_FREQ_OFFSET",_server),
            dgmode                  ("DG_MODE",_server),
            dgtrgrespondmask        ("DG_TRG_RESPOND_MASK",_server),
            dgbunchpattern          ("DG_BUNCH_PATTERN",_server),
            dgbunchfreq             ("DG_BUNCH_FREQ",_server),
            dgfreqoffset            ("DG_FREQ_OFFSET",_server),
            rdhfeeid                ("RDH_FEE_ID",_server),
            rdhpar                  ("RDH_PAR",_server),
            rdhmaxpayload           ("RDH_MAX_PAYLOAD",_server),
            rdhdetfield             ("RDH_DET_FIELD",_server),
            crutrgcomparedelay      ("CRU_TRG_COMPARE_DELAY",_server),
            bciddelay               ("BCID_DELAY",_server),
            alltopm                 ("ALLtoPM",_server),
            boardstatus     ("BOARD_STATUS",_server),
            temperature     ("TEMPERATURE",_server),
            hdmilink        ("HDMI_LINK",_server),
            bits            ("BITS",_server),
            readoutmode     ("READOUT_MODE",_server),
            bcidsyncmode    ("BCID_SYNC_MODE",_server),
            rxphase         ("RX_PHASE",_server),
            cruorbit        ("CRU_ORBIT",_server),
            crubc           ("CRU_BC",_server),
            rawfifo         ("RAW_FIFO",_server),
            selfifo         ("SEL_FIFO",_server),
            selfirsthit     ("SEL_FIRST_HIT_DROPPED_ORBIT",_server),
            sellasthit      ("SEL_LAST_HIT_DROPPED_ORBIT",_server),
            selhitsdropped  ("SEL_HITS_DROPPED",_server),
            readoutrate     ("REDOUT_RATE",_server)

{
    pServer = _server;
    publish();

}

void PMPars::publish()
{

//    /*
        //  loop for channels
        for(quint8 i=0; i<1; i++) {

            adczero[i].Ch = i+1; adczero[i].PM = PMid; adczero[i].publishServices(); adczero[i].publishCommand();
            adcdelay[i].Ch = i+1; adcdelay[i].PM = PMid; adcdelay[i].publishServices(); adcdelay[i].publishCommand();
            adc0offset[i].Ch = i+1; adc0offset[i].PM = PMid; adc0offset[i].publishServices(); adc0offset[i].publishCommand();
            adc1offset[i].Ch = i+1; adc1offset[i].PM = PMid; adc1offset[i].publishServices();adc1offset[i].publishCommand();
            adc0range[i].Ch = i+1; adc0range[i].PM = PMid; adc0range[i].publishServices(); adc0range[i].publishCommand();
            adc1range[i].Ch = i+1; adc1range[i].PM = PMid; adc1range[i].publishServices(); adc1range[i].publishCommand();
            timealin[i].Ch = i+1; timealin[i].PM = PMid; timealin[i].publishServices(); timealin[i].publishCommand();
            cfdtreshold[i].Ch = i+1; cfdtreshold[i].PM = PMid; cfdtreshold[i].publishServices(); cfdtreshold[i].publishCommand();
            cfdzero[i].Ch = i+1; cfdzero[i].PM = PMid; cfdzero[i].publishServices(); cfdzero[i].publishCommand();

            alltoch.Ch = i+1; alltoch.PM = PMid; alltoch.publishCommand();

            adc0meanampl[i].Ch = i+1; adc0meanampl[i].PM = PMid; adc0meanampl[i].publishServices();
            adc1meanampl[i].Ch = i+1; adc1meanampl[i].PM = PMid; adc1meanampl[i].publishServices();
            adc0zerolvl[i].Ch = i+1; adc0zerolvl[i].PM = PMid; adc0zerolvl[i].publishServices();
            adc1zerolvl[i].Ch = i+1; adc1zerolvl[i].PM = PMid; adc1zerolvl[i].publishServices();
            cfdcnt[i].Ch = i+1; cfdcnt[i].PM = PMid; cfdcnt[i].publishServices();
            trgcnt[i].Ch = i+1; trgcnt[i].PM = PMid; trgcnt[i].publishServices();
            meantime[i].Ch = i+1; meantime[i].PM = PMid; meantime[i].publishServices();
        }

        chmask.PM = PMid; chmask.publishCommand(); chmask.publishServices();
        cfdsatr.PM = PMid; cfdsatr.publishCommand(); cfdsatr.publishServices();
        orgate.PM = PMid; orgate.publishCommand(); orgate.publishServices();
        resetcounters.PM = PMid; resetcounters.publishCommand();
        zerolvlcalibration.PM = PMid; zerolvlcalibration.publishCommand();

        resetorbitsync.PM = PMid;           resetorbitsync.publishCommand();
        resetdroppinghitcounters.PM = PMid; resetdroppinghitcounters.publishCommand();
        resetgenbunchoffset.PM = PMid;      resetgenbunchoffset.publishCommand();
        resetgbterrors.PM = PMid;           resetgbterrors.publishCommand();
        resetgbt.PM = PMid;                 resetgbt.publishCommand();
        resetrxphaseerror.PM = PMid;        resetrxphaseerror.publishCommand();
        sendsinglecommand.PM = PMid;        sendsinglecommand.publishCommand();
        tgmode.PM = PMid;                   tgmode.publishCommand();                    tgmode.doPublishNew=false; tgmode.publishServices();
        tgpattern.PM = PMid;                tgpattern.publishCommand();                 tgpattern.publishServices();
        tgcontvalue.PM = PMid;              tgcontvalue.publishCommand();               tgcontvalue.publishServices();
        tgsendsingle.PM = PMid;             tgsendsingle.publishCommand();
        tgbunchfreq.PM = PMid;              tgbunchfreq.publishCommand();               tgbunchfreq.publishServices();
        tgfreqoffset.PM = PMid;             tgfreqoffset.publishCommand();              tgfreqoffset.publishServices();
        dgmode.PM = PMid;                   dgmode.publishCommand();                    dgmode.doPublishNew=false; dgmode.publishServices();
        dgtrgrespondmask.PM = PMid;         dgtrgrespondmask.publishCommand();          dgtrgrespondmask.publishServices();
        dgbunchpattern.PM = PMid;           dgbunchpattern.publishCommand();            dgbunchpattern.publishServices();
        dgbunchfreq.PM = PMid;              dgbunchfreq.publishCommand();               dgbunchfreq.publishServices();
        dgfreqoffset.PM = PMid;             dgfreqoffset.publishCommand();              dgfreqoffset.publishServices();
        rdhfeeid.PM = PMid;                 rdhfeeid.publishCommand();                  rdhfeeid.publishServices();
        rdhpar.PM = PMid;                   rdhpar.publishCommand();                    rdhpar.publishServices();
        rdhmaxpayload.PM = PMid;            rdhmaxpayload.publishCommand();             rdhmaxpayload.publishServices();
        rdhdetfield.PM = PMid;              rdhdetfield.publishCommand();               rdhdetfield.publishServices();
        crutrgcomparedelay.PM = PMid;       crutrgcomparedelay.publishCommand();        crutrgcomparedelay.publishServices();
        bciddelay.PM = PMid;                bciddelay.publishCommand();                 bciddelay.publishServices();
        alltopm.PM = PMid;                  alltopm.publishCommand();

        boardstatus.PM = PMid;      boardstatus.publishServices();
        temperature.PM = PMid;      temperature.publishServices();
        hdmilink.PM = PMid;         hdmilink.publishServices();
        bits.PM = PMid;             bits.publishServices();
        readoutmode.PM = PMid;      readoutmode.publishServices();
        bcidsyncmode.PM = PMid;     bcidsyncmode.publishServices();
        rxphase.PM = PMid;          rxphase.publishServices();
        cruorbit.PM = PMid;         cruorbit.publishServices();
        crubc.PM = PMid;            crubc.publishServices();
        rawfifo.PM = PMid;          rawfifo.publishServices();
        selfifo.PM = PMid;          selfifo.publishServices();
        selfirsthit.PM = PMid;      selfirsthit.publishServices();
        sellasthit.PM = PMid;       sellasthit.publishServices();
        selhitsdropped.PM = PMid;   selhitsdropped.publishServices();
        readoutrate.PM = PMid;      readoutrate.publishServices();
//    */


}



//  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@










//  #################################### PMCHfullPar #################################################

template <class T>
PMCHfullPar<T>::PMCHfullPar(QString _name, MyDimServer* _server)  :   PM(0), Ch(0), actValue(0), newValue(0)
{
    name = _name;
    pServer = _server;

    fillPMAppHash();
    fillPMSetHash();
    fillPMCHAppHash();
    fillPMCHSetHash();
    pSet = returnPMCHSetPointerToSignal<T>(name);       //  Change here
    pApp = returnPMCHAppPointerToSignal(name);

}


template<class T>
void PMCHfullPar<T>::publishCommand()
{

    if(pSet != nullptr)
    switch (sizeof(T)) {
//    case 1: setCmnd = new DimCommand(qPrintable("set_FT0/PM"+QString(PM)+"/Ch"+QString(Ch)+"/"+name),"C:1",this);
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
    if(pApp != nullptr)
    appCmnd = new DimCommand(qPrintable("APP_FT0/PM"+QString("%1").arg(PM,2,10,QLatin1Char('0'))+"/Ch"+QString("%1").arg(Ch,2,10,QLatin1Char('0'))+"/control"+"/"+name),"C:1",this);

}

template <class T>
void PMCHfullPar<T>::commandHandler()
{
    DimCommand* currCmnd = getCommand();
    if(currCmnd == setCmnd) {
        switch (sizeof(T)) {
////        case 1: pServer->emitSignal<T>(pset,PM,Ch,QString(setCmnd->getString()).toUShort());
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

template <class T>
void PMCHfullPar<T>::publishServices()
{
    switch (sizeof(T)) {
    case 2:
        actServ = new DimService(qPrintable("ACT_FT0/PM"+QString("%1").arg(PM,2,10,QLatin1Char('0'))+"/Ch"+QString("%1").arg(Ch,2,10,QLatin1Char('0'))+"/control"+"/"+name),"S",&actValue,1);
        break;
    case 4:
        actServ = new DimService(qPrintable("ACT_FT0/PM"+QString("%1").arg(PM,2,10,QLatin1Char('0'))+"/Ch"+QString("%1").arg(Ch,2,10,QLatin1Char('0'))+"/control"+"/"+name),"I",&actValue,1);
        break;
    case 8:
        actServ = new DimService(qPrintable("ACT_FT0/PM"+QString("%1").arg(PM,2,10,QLatin1Char('0'))+"/Ch"+QString("%1").arg(Ch,2,10,QLatin1Char('0'))+"/control"+"/"+name),"X",&actValue,1);
        break;
    default:
        Q_ASSERT(1);
    }

    switch (sizeof(T)) {
    case 2:
        newServ = new DimService(qPrintable("NEW_FT0/PM"+QString("%1").arg(PM,2,10,QLatin1Char('0'))+"/Ch"+QString("%1").arg(Ch,2,10,QLatin1Char('0'))+"/control"+"/"+name),"S",&newValue,1);
        break;
    case 4:
        newServ = new DimService(qPrintable("NEW_FT0/PM"+QString("%1").arg(PM,2,10,QLatin1Char('0'))+"/Ch"+QString("%1").arg(Ch,2,10,QLatin1Char('0'))+"/control"+"/"+name),"I",&newValue,1);
        break;
    case 8:
        newServ = new DimService(qPrintable("NEW_FT0/PM"+QString("%1").arg(PM,2,10,QLatin1Char('0'))+"/Ch"+QString("%1").arg(Ch,2,10,QLatin1Char('0'))+"/control"+"/"+name),"X",&newValue,1);
        break;
    default:
        Q_ASSERT(1);
    }


}



//  #########################################################################################################

PMCHonlyAppPar::PMCHonlyAppPar(QString _name, MyDimServer* _server)  :   PM(0), Ch(0)
{
    name = _name;
    pServer = _server;

    pApp = returnPMCHAppPointerToSignal(name);
}


        //  Without Ch option don't realised
void PMCHonlyAppPar::publishCommand()
{
    appCmnd = new DimCommand(qPrintable("APP_FT0/PM"+QString("%1").arg(PM,2,10,QLatin1Char('0'))+"/Ch"+QString("%1").arg(Ch,2,10,QLatin1Char('0'))+"/control"+"/"+name),"C:1",this);
}



void PMCHonlyAppPar::commandHandler()
{
    DimCommand* currCmnd = getCommand();
    if(currCmnd == appCmnd) {
        pServer->emitSignal(pApp,PM,Ch);
    }
}

//  #########################################################################################################

template<class T>
PMCHonlyActPar<T>::PMCHonlyActPar(QString _name, MyDimServer* _server)  :   PM(0), Ch(0)
{
    name = _name;
    pServer = _server;
}

template<class T>
void PMCHonlyActPar<T>::publishServices()
{
    actServ = new DimService(qPrintable("ACT_FT0/PM"+QString("%1").arg(PM,2,10,QLatin1Char('0'))+"/Ch"+QString("%1").arg(Ch,2,10,QLatin1Char('0'))+"/status"+"/"+name),"S",&actValue,1);
}

//  #########################################################################################################














//  #################################### PMfullPar #################################################

template <class T>
PMfullPar<T>::PMfullPar(QString _name, MyDimServer* _server)  :   PM(0), actValue(0), newValue(0)
{
    name = _name;
    pServer = _server;

    pSet = returnPMSetPointerToSignal<T>(name);       //  Change here

    pApp = returnPMAppPointerToSignal(name);
}


template<class T>
void PMfullPar<T>::publishCommand()
{
    QString convert;
    if(pSet!= nullptr)
    switch (sizeof(T)) {
//    case 1: setCmnd = new DimCommand(qPrintable("set_FT0/PM"+QString(PM)+"/Ch"+QString(Ch)+"/"+name),"C:1",this);
//        break;
    case 2: setCmnd = new DimCommand(qPrintable("SET_FT0/PM"+QString("%1").arg(PM,2,10,QLatin1Char('0'))+"/control"+"/"+name),"S:1",this);
        break;
    case 4: setCmnd = new DimCommand(qPrintable("SET_FT0/PM"+QString("%1").arg(PM,2,10,QLatin1Char('0'))+"/control"+"/"+name),"I:1",this);
        break;
    case 8: setCmnd = new DimCommand(qPrintable("SET_FT0/PM"+QString("%1").arg(PM,2,10,QLatin1Char('0'))+"/control"+"/"+name),"X:1",this);
        break;
    default:
        Q_ASSERT(1);
    }
    if(pApp != nullptr)
    appCmnd = new DimCommand(qPrintable("APP_FT0/PM"+QString("%1").arg(PM,2,10,QLatin1Char('0'))+"/control"+"/"+name),"C:1",this);

}

template <class T>
void PMfullPar<T>::commandHandler()
{
    DimCommand* currCmnd = getCommand();
    if(currCmnd == setCmnd) {
        switch (sizeof(T)) {
////        case 1: pServer->emitSignal<T>(pset,PM,Ch,QString(setCmnd->getString()).toUShort());
////            break;
        case 2:
            pServer->emitSignal(pSet,PM,static_cast<T>(setCmnd->getShort()));
            break;
        case 4:
            pServer->emitSignal(pSet,PM,static_cast<T>(setCmnd->getInt()));
            break;
        case 8:
            pServer->emitSignal(pSet,PM,static_cast<T>(setCmnd->getLonglong()));
            break;
        default:
            Q_ASSERT(1);
        }
    }
    if(currCmnd == appCmnd) {
        pServer->emitSignal(pApp,PM);
    }
}

template <class T>
void PMfullPar<T>::publishServices()
{
    switch (sizeof(T)) {
    case 2:
        actServ = new DimService(qPrintable("ACT_FT0/PM"+QString("%1").arg(PM,2,10,QLatin1Char('0'))+"/control"+"/"+name),"S",&actValue,1);
        break;
    case 4:
        actServ = new DimService(qPrintable("ACT_FT0/PM"+QString("%1").arg(PM,2,10,QLatin1Char('0'))+"/control"+"/"+name),"I",&actValue,1);
        break;
    case 8:
        actServ = new DimService(qPrintable("ACT_FT0/PM"+QString("%1").arg(PM,2,10,QLatin1Char('0'))+"/control"+"/"+name),"X",&actValue,1);
        break;
    default:
        Q_ASSERT(1);
    }

    if(doPublishNew)
    switch (sizeof(T)) {
    case 2:
        newServ = new DimService(qPrintable("NEW_FT0/PM"+QString("%1").arg(PM,2,10,QLatin1Char('0'))+"/control"+"/"+name),"S",&newValue,1);
        break;
    case 4:
        newServ = new DimService(qPrintable("NEW_FT0/PM"+QString("%1").arg(PM,2,10,QLatin1Char('0'))+"/control"+"/"+name),"I",&newValue,1);
        break;
    case 8:
        newServ = new DimService(qPrintable("NEW_FT0/PM"+QString("%1").arg(PM,2,10,QLatin1Char('0'))+"/control"+"/"+name),"X",&newValue,1);
        break;
    default:
        Q_ASSERT(1);
    }

}

//  #########################################################################################################

PMonlyAppPar::PMonlyAppPar(QString _name, MyDimServer* _server)  :   PM(0)
{
    name = _name;
    pServer = _server;

    pApp = returnPMAppPointerToSignal(name);
}


        //  Without Ch option don't realised
void PMonlyAppPar::publishCommand()
{
    appCmnd = new DimCommand(qPrintable("APP_FT0/PM"+QString("%1").arg(PM,2,10,QLatin1Char('0'))+"/control"+"/"+name),"C:1",this);
}



void PMonlyAppPar::commandHandler()
{
    DimCommand* currCmnd = getCommand();
    if(currCmnd == appCmnd) {
        pServer->emitSignal(pApp,PM);
    }
}

//  #########################################################################################################

template<class T>
PMonlyActPar<T>::PMonlyActPar(QString _name, MyDimServer* _server)  :   PM(0)
{
    name = _name;
    pServer = _server;
}

template<class T>
void PMonlyActPar<T>::publishServices()
{
    actServ = new DimService(qPrintable("ACT_FT0/PM"+QString("%1").arg(PM,2,10,QLatin1Char('0'))+"/status"+"/"+name),"S",&actValue,1);
}






















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



















