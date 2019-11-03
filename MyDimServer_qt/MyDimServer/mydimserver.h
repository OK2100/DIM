#ifndef MYDIMSERVER_H
#define MYDIMSERVER_H

#include <QObject>
#include <QTextStream>
#include <QFile>
#include <QVector>

#include "../../dim_v20r26/dim/dis.hxx"


class MyDimServer;
template<class T>
class PMCHfullPar;


/////////////////////////////////////////////////////////////////
template <class T>
using m_setPMChSignal = void(MyDimServer::*)(quint8,quint8,T);          //  for PM & Ch
using m_appPMChSignal = void(MyDimServer::*)(quint8,quint8);

template <class T>
using m_setPMSignal = void(MyDimServer::*)(quint8,T);                   //  for PM only
using m_appPMSignal = void(MyDimServer::*)(quint8);
/////////////////////////////////////////////////////////////////



template <class T>
class PMCHfullPar : public DimCommandHandler
{
public:
    PMCHfullPar(QString _name, MyDimServer* _server);

    QString name;
    quint8 PM;      //  default is 0
    quint8 Ch;      //  default is 0
    MyDimServer* pServer;

    //  Command part
    DimCommand* setCmnd;
    DimCommand* appCmnd;
    m_setPMChSignal<T> pSet;
    m_appPMChSignal pApp;
    void publishCommand();
    void commandHandler();

    //  Service part
    DimService* actServ;
    DimService* newServ;
    T actValue;     //  default is 0
    T newValue;     //  default is 0
    void publishServices();
    void updateNew(T t_val){ newValue = t_val; newServ->updateService(); }
    void updateAct(T t_val){ actValue = t_val; actServ->updateService(); }
};

//  ===================================================================================

class PMCHonlyAppPar : public DimCommandHandler
{
public:
    PMCHonlyAppPar(QString _name, MyDimServer* _server);

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

template<class T>
class PMCHonlyActPar
{
public:
    PMCHonlyActPar(QString _name, MyDimServer* _server);

    QString name;

    MyDimServer* pServer;
    quint8 PM;
    quint8 Ch;

    DimService* actServ;
    DimService* newServ;
    T actValue;     //  default is 0
    void publishServices();
    void updateAct(T t_val){ actValue = t_val; actServ->updateService(); }
};

//  ===================================================================================
//  ===================================================================================

template <class T>
class PMfullPar : public DimCommandHandler
{
public:
    PMfullPar(QString _name, MyDimServer* _server);

    QString name;
    quint8 PM;      //  default is 0
    MyDimServer* pServer;

    //  Command part
    DimCommand* setCmnd;
    DimCommand* appCmnd;
    m_setPMSignal<T> pSet;
    m_appPMSignal pApp;
    void publishCommand();
    void commandHandler();

    //  Service part
    DimService* actServ;
    DimService* newServ;
    T actValue;     //  default is 0
    T newValue;     //  default is 0
    bool doPublishNew = true;
    void publishServices();
    void updateNew(T t_val){ newValue = t_val; newServ->updateService(); }
    void updateAct(T t_val){ actValue = t_val; actServ->updateService(); }
};

//  ===================================================================================

class PMonlyAppPar : public DimCommandHandler
{
public:
    PMonlyAppPar(QString _name, MyDimServer* _server);

    QString name;

    DimCommand* appCmnd;
    m_appPMSignal pApp;

    MyDimServer* pServer;
    quint8 PM;

    void publishCommand();
    void commandHandler();
};

//  ===================================================================================

template<class T>
class PMonlyActPar
{
public:
    PMonlyActPar(QString _name, MyDimServer* _server);

    QString name;

    MyDimServer* pServer;
    quint8 PM;

    DimService* actServ;
    DimService* newServ;
    T actValue;     //  default is 0
    void publishServices();
    void updateAct(T t_val){ actValue = t_val; actServ->updateService(); }
};


//  ===================================================================================


class PMPars
{
public:
    PMPars(quint8 PMid,MyDimServer* _server);

    MyDimServer* pServer;
    quint8 PMid;

    QVector<PMCHfullPar<quint16>> adczero;
    QVector<PMCHfullPar<quint16>> adcdelay;
    QVector<PMCHfullPar<quint16>> adc0offset;
    QVector<PMCHfullPar<quint16>> adc1offset;
    QVector<PMCHfullPar<quint16>> adc0range;
    QVector<PMCHfullPar<quint16>> adc1range;
    QVector<PMCHfullPar<quint16>> timealin;
    QVector<PMCHfullPar<quint16>> cfdtreshold;
    QVector<PMCHfullPar<quint16>> cfdzero;

    PMCHonlyAppPar alltoch;

    QVector<PMCHonlyActPar<quint16>> adc0meanampl;
    QVector<PMCHonlyActPar<quint16>> adc1meanampl;
    QVector<PMCHonlyActPar<quint16>> adc0zerolvl;
    QVector<PMCHonlyActPar<quint16>> adc1zerolvl;
    QVector<PMCHonlyActPar<quint32>> cfdcnt;
    QVector<PMCHonlyActPar<quint32>> trgcnt;
    QVector<PMCHonlyActPar<quint16>> meantime;

    PMfullPar<quint16> chmask;
    PMfullPar<quint16> cfdsatr;
    PMfullPar<quint16> orgate;
    PMonlyAppPar resetcounters;
    PMonlyAppPar zerolvlcalibration;

    ///////////////////////////////////////////

    PMonlyAppPar resetorbitsync;
    PMonlyAppPar resetdroppinghitcounters;
    PMonlyAppPar resetgenbunchoffset;
    PMonlyAppPar resetgbterrors;
    PMonlyAppPar resetgbt;
    PMonlyAppPar resetrxphaseerror;
    PMonlyAppPar sendsinglecommand;
    PMfullPar<quint16> tgmode;
    PMfullPar<quint16> tgpattern;
    PMfullPar<quint16> tgcontvalue;
    PMonlyAppPar tgsendsingle;
    PMfullPar<quint16> tgbunchfreq;
    PMfullPar<quint16> tgfreqoffset;
    PMfullPar<quint16> dgmode;
    PMfullPar<quint16> dgtrgrespondmask;
    PMfullPar<quint16> dgbunchpattern;
    PMfullPar<quint16> dgbunchfreq;
    PMfullPar<quint16> dgfreqoffset;
    PMfullPar<quint16> rdhfeeid;
    PMfullPar<quint16> rdhpar;
    PMfullPar<quint16> rdhmaxpayload;
    PMfullPar<quint16> rdhdetfield;
    PMfullPar<quint16> crutrgcomparedelay;
    PMfullPar<quint16> bciddelay;
    PMonlyAppPar alltopm;

    PMonlyActPar<quint16> boardstatus;
    PMonlyActPar<quint16> temperature;
    PMonlyActPar<quint16> hdmilink;
    PMonlyActPar<quint16> bits;
    PMonlyActPar<quint16> readoutmode;
    PMonlyActPar<quint16> bcidsyncmode;
    PMonlyActPar<quint16> rxphase;
    PMonlyActPar<quint16> cruorbit;
    PMonlyActPar<quint16> crubc;
    PMonlyActPar<quint16> rawfifo;
    PMonlyActPar<quint16> selfifo;
    PMonlyActPar<quint16> selfirsthit;
    PMonlyActPar<quint16> sellasthit;
    PMonlyActPar<quint16> selhitsdropped;
    PMonlyActPar<quint16> readoutrate;

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

    QVector<PMPars> pm;
//    PMPars pm

    template<class Y>
    void emitSignal(m_setPMChSignal<Y> pSignal,quint8 PMid,quint8 Chid, Y val);
    void emitSignal(m_appPMChSignal pSignal,quint8 PMid,quint8 Chid);

    template<class Y>
    void emitSignal(m_setPMSignal<Y> pSignal,quint8 PMid, Y val);
    void emitSignal(m_appPMSignal pSignal,quint8 PMid);

signals:
    void test();
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



    void set_CH_MASKrequested   (quint8 PMid, quint16 val);
    void set_CFD_SATR_requested (quint8 PMid, quint16 val);
    void set_OR_GATE_requested  (quint8 PMid, quint16 val);

    void apply_CH_MASK_requested        (quint8 PMid);
    void apply_CFD_SATR_requested       (quint8 PMid);
    void apply_OR_GATE_requested        (quint8 PMid);
    void apply_RESET_COUNTERS_requested (quint8 PMid);
    void apply_ZERO_LVL_CALIBR_requested(quint8 PMid);

    /////////////////////////////////////////////////////////////

    void apply_RESET_ORBIT_SYNC_requested           (quint8 PMid);
    void apply_RESET_DROPPING_HIT_COUNTERS_requested(quint8 PMid);
    void apply_RESET_GEN_BUNCH_OFFSET_requested     (quint8 PMid);
    void apply_RESET_GBT_ERRORS_requested           (quint8 PMid);
    void apply_RESET_GBT_requested                  (quint8 PMid);
    void apply_RESET_RX_PHASE_ERROR_requested       (quint8 PMid);
    void apply_SEND_COMMAND_requested               (quint8 PMid);
    void apply_TG_MODE_requested            (quint8 PMid);
    void apply_TG_PATTERN_requested         (quint8 PMid);
    void apply_TG_CONT_VALUE_requested      (quint8 PMid);
    void apply_TG_SEND_SINGLE_requested     (quint8 PMid);
    void apply_TG_BUNCH_FREQ_requested      (quint8 PMid);
    void apply_TG_FREQ_OFFSET_requested     (quint8 PMid);
    void apply_DG_MODE_requested            (quint8 PMid);
    void apply_DG_TRG_RESPOND_MASK_requested(quint8 PMid);
    void apply_DG_BUNCH_PATTERN_requested   (quint8 PMid);
    void apply_DG_BUNCH_FREQ_requested      (quint8 PMid);
    void apply_DG_FREQ_OFFSET_requested     (quint8 PMid);
    void apply_RDH_FEE_ID_requested         (quint8 PMid);
    void apply_RDH_PAR_requested            (quint8 PMid);
    void apply_RDH_MAX_PAYLOAD_requested    (quint8 PMid);
    void apply_RDH_DET_FIELD_requested      (quint8 PMid);
    void apply_CRU_TRG_COMPARE_DELAY_requested  (quint8 PMid);
    void apply_BCID_DELAY_requested             (quint8 PMid);

    void set_TG_PATTERN_requested       (quint8 PMid, quint16 val);
    void set_TG_CONT_VALUE_requested    (quint8 PMid, quint16 val);
    void set_TG_BUNCH_FREQ_requested    (quint8 PMid, quint16 val);
    void set_TG_FREQ_OFFSET_requested   (quint8 PMid, quint16 val);

    void set_DG_TRG_RESPOND_MASK_requested  (quint8 PMid, quint16 val);
    void set_DG_BUNCH_PATTERN_requested     (quint8 PMid, quint16 val);
    void set_DG_BUNCH_FREQ_requested        (quint8 PMid, quint16 val);
    void set_DG_FREQ_OFFSET_requested       (quint8 PMid, quint16 val);
    void set_RDH_FEE_ID_requested           (quint8 PMid, quint16 val);
    void set_RDH_PAR_requested              (quint8 PMid, quint16 val);
    void set_RDH_MAX_PAYLOAD_requested      (quint8 PMid, quint16 val);
    void set_RDH_DET_FIELD_requested        (quint8 PMid, quint16 val);
    void set_CRU_TRG_COMPARE_DELAY_requested(quint8 PMid, quint16 val);
    void set_BCID_DELAY_requested           (quint8 PMid, quint16 val);

    void apply_ALLtoPM_requested    (quint8 PMid);

    ////////////////////////////////////////////////////////////////////////////


public slots:
    void update_act_ADC_ZERO    (quint8 PMid, quint8 CHid, quint16 val){pm[PMid-1].adczero[CHid-1].updateAct(val);}
    void update_act_ADC_DELAY   (quint8 PMid, quint8 CHid, quint16 val){pm[PMid-1].adcdelay[CHid-1].updateAct(val);}
    void update_act_ADC0_OFFSET (quint8 PMid, quint8 CHid, quint16 val){pm[PMid-1].adc0offset[CHid-1].updateAct(val);}
    void update_act_ADC1_OFFSET (quint8 PMid, quint8 CHid, quint16 val){pm[PMid-1].adc1offset[CHid-1].updateAct(val);}
    void update_act_ADC0_RANGE  (quint8 PMid, quint8 CHid, quint16 val){pm[PMid-1].adc0range[CHid-1].updateAct(val);}
    void update_act_ADC1_RANGE  (quint8 PMid, quint8 CHid, quint16 val){pm[PMid-1].adc1range[CHid-1].updateAct(val);}
    void update_act_TIME_ALIN   (quint8 PMid, quint8 CHid, quint16 val){pm[PMid-1].timealin[CHid-1].updateAct(val);}
    void update_act_CFD_TRESHOLD(quint8 PMid, quint8 CHid, quint16 val){pm[PMid-1].cfdtreshold[CHid-1].updateAct(val);}
    void update_act_CFD_ZERO    (quint8 PMid, quint8 CHid, quint16 val){pm[PMid-1].cfdzero[CHid-1].updateAct(val);}

    void update_new_ADC_ZERO    (quint8 PMid, quint8 CHid, quint16 val){pm[PMid-1].adczero[CHid-1].updateNew(val);}
    void update_new_ADC_DELAY   (quint8 PMid, quint8 CHid, quint16 val){pm[PMid-1].adcdelay[CHid-1].updateNew(val);}
    void update_new_ADC0_OFFSET (quint8 PMid, quint8 CHid, quint16 val){pm[PMid-1].adc0offset[CHid-1].updateNew(val);}
    void update_new_ADC1_OFFSET (quint8 PMid, quint8 CHid, quint16 val){pm[PMid-1].adc1offset[CHid-1].updateNew(val);}
    void update_new_ADC0_RANGE  (quint8 PMid, quint8 CHid, quint16 val){pm[PMid-1].adc0range[CHid-1].updateNew(val);}
    void update_new_ADC1_RANGE  (quint8 PMid, quint8 CHid, quint16 val){pm[PMid-1].adc1range[CHid-1].updateNew(val);}
    void update_new_TIME_ALIN   (quint8 PMid, quint8 CHid, quint16 val){pm[PMid-1].timealin[CHid-1].updateNew(val);}
    void update_new_CFD_TRESHOLD(quint8 PMid, quint8 CHid, quint16 val){pm[PMid-1].cfdtreshold[CHid-1].updateNew(val);}
    void update_new_CFD_ZERO    (quint8 PMid, quint8 CHid, quint16 val){pm[PMid-1].cfdzero[CHid-1].updateNew(val);}

    void update_act_ADC0_MEANAMPL   (quint8 PMid, quint8 CHid, quint16 val){pm[PMid-1].adc0meanampl[CHid-1].updateAct(val);}
    void update_act_ADC1_MEANAMPL   (quint8 PMid, quint8 CHid, quint16 val){pm[PMid-1].adc1meanampl[CHid-1].updateAct(val);}
    void update_act_ADC0_ZEROLVL    (quint8 PMid, quint8 CHid, quint16 val){pm[PMid-1].adc0zerolvl[CHid-1].updateAct(val);}
    void update_act_ADC1_ZEROLVL    (quint8 PMid, quint8 CHid, quint16 val){pm[PMid-1].adc1zerolvl[CHid-1].updateAct(val);}
    void update_act_CFD_CNT         (quint8 PMid, quint8 CHid, quint32 val){pm[PMid-1].cfdcnt[CHid-1].updateAct(val);}
    void update_act_TRG_CNT         (quint8 PMid, quint8 CHid, quint32 val){pm[PMid-1].trgcnt[CHid-1].updateAct(val);}
    void update_act_MEAN_TIME       (quint8 PMid, quint8 CHid, quint16 val){pm[PMid-1].meantime[CHid-1].updateAct(val);}

    void update_act_CH_MASK (quint8 PMid, quint16 val){pm[PMid-1].chmask.updateAct(val);}
    void update_act_CFD_SATR(quint8 PMid, quint16 val){pm[PMid-1].cfdsatr.updateAct(val);}
    void update_act_OR_GATE (quint8 PMid, quint16 val){pm[PMid-1].orgate.updateAct(val);}

    void update_new_CH_MASK (quint8 PMid, quint16 val){pm[PMid-1].chmask.updateNew(val);}
    void update_new_CFD_SATR(quint8 PMid, quint16 val){pm[PMid-1].cfdsatr.updateNew(val);}
    void update_new_OR_GATE (quint8 PMid, quint16 val){pm[PMid-1].orgate.updateNew(val);}

    void update_act_TG_MODE                 (quint8 PMid, quint16 val){pm[PMid-1].tgmode.updateAct(val);}
    void update_act_TG_PATTERN              (quint8 PMid, quint16 val){pm[PMid-1].tgpattern.updateAct(val);}
    void update_act_TG_CONT_VALUE           (quint8 PMid, quint16 val){pm[PMid-1].tgcontvalue.updateAct(val);}
    void update_act_TG_BUNCH_FREQ           (quint8 PMid, quint16 val){pm[PMid-1].tgbunchfreq.updateAct(val);}
    void update_act_TG_FREQ_OFFSET          (quint8 PMid, quint16 val){pm[PMid-1].tgfreqoffset.updateAct(val);}
    void update_act_DG_MODE                 (quint8 PMid, quint16 val){pm[PMid-1].dgmode.updateAct(val);}
    void update_act_DG_TRG_RESPOND_MASK     (quint8 PMid, quint16 val){pm[PMid-1].dgtrgrespondmask.updateAct(val);}
    void update_act_DG_BUNCH_PATTERN        (quint8 PMid, quint16 val){pm[PMid-1].dgbunchpattern.updateAct(val);}
    void update_act_DG_BUNCH_FREQ           (quint8 PMid, quint16 val){pm[PMid-1].dgbunchfreq.updateAct(val);}
    void update_act_DG_FREQ_OFFSET          (quint8 PMid, quint16 val){pm[PMid-1].dgfreqoffset.updateAct(val);}
    void update_act_RDH_FEE_ID              (quint8 PMid, quint16 val){pm[PMid-1].rdhfeeid.updateAct(val);}
    void update_act_RDH_PAR                 (quint8 PMid, quint16 val){pm[PMid-1].rdhpar.updateAct(val);}
    void update_act_RDH_MAX_PAYLOAD         (quint8 PMid, quint16 val){pm[PMid-1].rdhmaxpayload.updateAct(val);}
    void update_act_RDH_DET_FIELD           (quint8 PMid, quint16 val){pm[PMid-1].rdhdetfield.updateAct(val);}
    void update_act_CRU_TRG_COMPARE_DELAY   (quint8 PMid, quint16 val){pm[PMid-1].crutrgcomparedelay.updateAct(val);}
    void update_act_BCID_DELAY              (quint8 PMid, quint16 val){pm[PMid-1].bciddelay.updateAct(val);}


    void update_new_TG_MODE                 (quint8 PMid, quint16 val){pm[PMid-1].tgmode.updateNew(val);}
    void update_new_TG_PATTERN              (quint8 PMid, quint16 val){pm[PMid-1].tgpattern.updateNew(val);}
    void update_new_TG_CONT_VALUE           (quint8 PMid, quint16 val){pm[PMid-1].tgcontvalue.updateNew(val);}
    void update_new_TG_BUNCH_FREQ           (quint8 PMid, quint16 val){pm[PMid-1].tgbunchfreq.updateNew(val);}
    void update_new_TG_FREQ_OFFSET          (quint8 PMid, quint16 val){pm[PMid-1].tgfreqoffset.updateNew(val);}
    void update_new_DG_MODE                 (quint8 PMid, quint16 val){pm[PMid-1].dgmode.updateNew(val);}
    void update_new_DG_TRG_RESPOND_MASK     (quint8 PMid, quint16 val){pm[PMid-1].dgtrgrespondmask.updateNew(val);}
    void update_new_DG_BUNCH_PATTERN        (quint8 PMid, quint16 val){pm[PMid-1].dgbunchpattern.updateNew(val);}
    void update_new_DG_BUNCH_FREQ           (quint8 PMid, quint16 val){pm[PMid-1].dgbunchfreq.updateNew(val);}
    void update_new_DG_FREQ_OFFSET          (quint8 PMid, quint16 val){pm[PMid-1].dgfreqoffset.updateNew(val);}
    void update_new_RDH_FEE_ID              (quint8 PMid, quint16 val){pm[PMid-1].rdhfeeid.updateNew(val);}
    void update_new_RDH_PAR                 (quint8 PMid, quint16 val){pm[PMid-1].rdhpar.updateNew(val);}
    void update_new_RDH_MAX_PAYLOAD         (quint8 PMid, quint16 val){pm[PMid-1].rdhmaxpayload.updateNew(val);}
    void update_new_RDH_DET_FIELD           (quint8 PMid, quint16 val){pm[PMid-1].rdhdetfield.updateNew(val);}
    void update_new_CRU_TRG_COMPARE_DELAY   (quint8 PMid, quint16 val){pm[PMid-1].crutrgcomparedelay.updateNew(val);}
    void update_new_BCID_DELAY              (quint8 PMid, quint16 val){pm[PMid-1].bciddelay.updateNew(val);}

    void update_act_BOARD_STATUS                (quint8 PMid, quint16 val){pm[PMid-1].boardstatus.updateAct(val);}
    void update_act_TEMPERATURE                 (quint8 PMid, quint16 val){pm[PMid-1].temperature.updateAct(val);}
    void update_act_HDMI_LINK                   (quint8 PMid, quint16 val){pm[PMid-1].hdmilink.updateAct(val);}
    void update_act_BITS                        (quint8 PMid, quint16 val){pm[PMid-1].bits.updateAct(val);}
    void update_act_READOUT_MODE                (quint8 PMid, quint16 val){pm[PMid-1].readoutmode.updateAct(val);}
    void update_act_BCID_SYNC_MODE              (quint8 PMid, quint16 val){pm[PMid-1].bcidsyncmode.updateAct(val);}
    void update_act_RX_PHASE                    (quint8 PMid, quint16 val){pm[PMid-1].rxphase.updateAct(val);}
    void update_act_CRU_ORBIT                   (quint8 PMid, quint16 val){pm[PMid-1].cruorbit.updateAct(val);}
    void update_act_CRU_BC                      (quint8 PMid, quint16 val){pm[PMid-1].crubc.updateAct(val);}
    void update_act_RAW_FIFO                    (quint8 PMid, quint16 val){pm[PMid-1].rawfifo.updateAct(val);}
    void update_act_SEL_FIFO                    (quint8 PMid, quint16 val){pm[PMid-1].selfifo.updateAct(val);}
    void update_act_SEL_FIRST_HIT_DROPPED_ORBIT (quint8 PMid, quint16 val){pm[PMid-1].selfirsthit.updateAct(val);}
    void update_act_SEL_LAST_HIT_DROPPED_ORBIT  (quint8 PMid, quint16 val){pm[PMid-1].sellasthit.updateAct(val);}
    void update_act_SEL_HITS_DROPPED            (quint8 PMid, quint16 val){pm[PMid-1].selhitsdropped.updateAct(val);}
    void update_act_READOUT_RATE                (quint8 PMid, quint16 val){pm[PMid-1].readoutrate.updateAct(val);}


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
