#include "mydimserver.h"
#include <QDebug>

//  ################################## PMCH ############################################

template<class T>
QHash<QString,m_setPMChSignal<T>> PMCHSetHash;

void fillPMCHSetHash()
{
    PMCHSetHash<quint16>.insert("ADC_ZERO",    &MyDimServer::set_ADC_ZERO_requested);
    PMCHSetHash<quint16>.insert("ADC_DELAY",   &MyDimServer::set_ADC_DELAY_requested);
    PMCHSetHash<quint16>.insert("ADC0_OFFSET", &MyDimServer::set_ADC0_OFFSET_requested);
    PMCHSetHash<quint16>.insert("ADC1_OFFSET", &MyDimServer::set_ADC1_OFFSET_requested);
    PMCHSetHash<quint16>.insert("ADC0_RANGE",  &MyDimServer::set_ADC0_RANGE_requested);
    PMCHSetHash<quint16>.insert("ADC1_RANGE",  &MyDimServer::set_ADC1_RANGE_requested);
    PMCHSetHash<quint16>.insert("TIME_ALIN",   &MyDimServer::set_TIME_ALIN_requested);
    PMCHSetHash<quint16>.insert("CFD_TRESHOLD",&MyDimServer::set_CFD_TRESHOLD_requested);
    PMCHSetHash<quint16>.insert("CFD_ZERO",    &MyDimServer::set_CFD_ZERO_requested);
};

template<class T>
m_setPMChSignal<T> returnPMCHSetPointerToSignal(QString PARname)
{
//    qDebug() << PARname;
//    qDebug() <<PMCHSetHash<T>["ADC_ZERO"];
    return PMCHSetHash<T>[PARname];
};




QHash<QString,m_appPMChSignal> PMCHAppHash;

void fillPMCHAppHash()
{
    PMCHAppHash.insert("ADC_ZERO",    &MyDimServer::apply_ADC_ZERO_requested);
    PMCHAppHash.insert("ADC_DELAY",   &MyDimServer::apply_ADC_DELAY_requested);
    PMCHAppHash.insert("ADC0_OFFSET", &MyDimServer::apply_ADC0_OFFSET_requested);
    PMCHAppHash.insert("ADC1_OFFSET", &MyDimServer::apply_ADC1_OFFSET_requested);
    PMCHAppHash.insert("ADC0_RANGE",  &MyDimServer::apply_ADC0_RANGE_requested);
    PMCHAppHash.insert("ADC1_RANGE",  &MyDimServer::apply_ADC1_RANGE_requested);
    PMCHAppHash.insert("TIME_ALIN",   &MyDimServer::apply_TIME_ALIN_requested);
    PMCHAppHash.insert("CFD_TRESHOLD",&MyDimServer::apply_CFD_TRESHOLD_requested);
    PMCHAppHash.insert("CFD_ZERO",    &MyDimServer::apply_CFD_ZERO_requested);
    PMCHAppHash.insert("ALLtoCH",     &MyDimServer::apply_ALLtoCH_requested);
};


m_appPMChSignal returnPMCHAppPointerToSignal(QString PARname)
{
    return PMCHAppHash[PARname];
};






//  ####################################### PM only #############################################

template<class T>
QHash<QString,m_setPMSignal<T>> PMSetHash;

void fillPMSetHash()
{
    PMSetHash<quint16>.insert("CH_MASK",    &MyDimServer::set_CH_MASKrequested);
    PMSetHash<quint16>.insert("CFD_SATR",   &MyDimServer::set_CFD_SATR_requested);
    PMSetHash<quint8>.insert("OR_GATE",     &MyDimServer::set_OR_GATE_requested);
    PMSetHash<quint8>.insert("TG_MODE",                nullptr);
    PMSetHash<quint64>.insert("TG_PATTERN",             &MyDimServer::set_TG_PATTERN_requested);
    PMSetHash<quint16>.insert("TG_CONT_VALUE",          &MyDimServer::set_TG_CONT_VALUE_requested);
    PMSetHash<quint16>.insert("TG_BUNCH_FREQ",          &MyDimServer::set_TG_BUNCH_FREQ_requested);
    PMSetHash<quint16>.insert("TG_FREQ_OFFSET",         &MyDimServer::set_TG_FREQ_OFFSET_requested);
    PMSetHash<quint16>.insert("DG_MODE",                nullptr);
    PMSetHash<quint16>.insert("DG_TRG_RESPOND_MASK",    &MyDimServer::set_DG_TRG_RESPOND_MASK_requested);
    PMSetHash<quint16>.insert("DG_BUNCH_PATTERN",       &MyDimServer::set_DG_BUNCH_PATTERN_requested);
    PMSetHash<quint16>.insert("DG_BUNCH_FREQ",          &MyDimServer::set_DG_BUNCH_FREQ_requested);
    PMSetHash<quint16>.insert("DG_FREQ_OFFSET",         &MyDimServer::set_DG_FREQ_OFFSET_requested);
    PMSetHash<quint16>.insert("RDH_FEE_ID",             &MyDimServer::set_RDH_FEE_ID_requested);
    PMSetHash<quint16>.insert("RDH_PAR",                &MyDimServer::set_RDH_PAR_requested);
    PMSetHash<quint16>.insert("RDH_MAX_PAYLOAD",        &MyDimServer::set_RDH_MAX_PAYLOAD_requested);
    PMSetHash<quint16>.insert("RDH_DET_FIELD",          &MyDimServer::set_RDH_DET_FIELD_requested);
    PMSetHash<quint16>.insert("CRU_TRG_COMPARE_DELAY",  &MyDimServer::set_CRU_TRG_COMPARE_DELAY_requested);
    PMSetHash<quint16>.insert("BCID_DELAY",             &MyDimServer::set_BCID_DELAY_requested);
};

template<class T>
m_setPMSignal<T> returnPMSetPointerToSignal(QString PARname)
{
    return PMSetHash<T>[PARname];
};



QHash<QString,m_appPMSignal> PMAppHash;

void fillPMAppHash()
{
    PMAppHash.insert("CH_MASK",         &MyDimServer::apply_CH_MASK_requested);
    PMAppHash.insert("CFD_SATR",        &MyDimServer::apply_CFD_SATR_requested);
    PMAppHash.insert("OR_GATE",         &MyDimServer::apply_OR_GATE_requested);
    PMAppHash.insert("RESET_COUNTERS",  &MyDimServer::apply_RESET_COUNTERS_requested);
    PMAppHash.insert("ZERO_LVL_CALIBR", &MyDimServer::apply_ZERO_LVL_CALIBR_requested);

    PMAppHash.insert("RESET_ORBIT_SYNC",            &MyDimServer::apply_RESET_ORBIT_SYNC_requested);
    PMAppHash.insert("RESET_DROPPING_HIT_COUNTERS", &MyDimServer::apply_RESET_DROPPING_HIT_COUNTERS_requested);
    PMAppHash.insert("RESET_GEN_BUNCH_OFFSET",      &MyDimServer::apply_RESET_GEN_BUNCH_OFFSET_requested);
    PMAppHash.insert("RESET_GBT_ERRORS",            &MyDimServer::apply_RESET_GBT_ERRORS_requested);
    PMAppHash.insert("RESET_GBT",                   &MyDimServer::apply_RESET_GBT_requested);
    PMAppHash.insert("RESET_RX_PHASE_ERROR",        &MyDimServer::apply_RESET_RX_PHASE_ERROR_requested);
    PMAppHash.insert("SEND_COMMAND",                &MyDimServer::apply_SEND_COMMAND_requested);
    PMAppHash.insert("TG_MODE",                     &MyDimServer::apply_TG_MODE_requested);
    PMAppHash.insert("TG_PATTERN",                  &MyDimServer::apply_TG_PATTERN_requested);
    PMAppHash.insert("TG_CONT_VALUE",               &MyDimServer::apply_TG_CONT_VALUE_requested);
    PMAppHash.insert("TG_SEND_SINGLE",              &MyDimServer::apply_TG_SEND_SINGLE_requested);
    PMAppHash.insert("TG_BUNCH_FREQ",               &MyDimServer::apply_TG_BUNCH_FREQ_requested);
    PMAppHash.insert("TG_FREQ_OFFSET",              &MyDimServer::apply_TG_FREQ_OFFSET_requested);
    PMAppHash.insert("DG_MODE",                     &MyDimServer::apply_DG_MODE_requested);
    PMAppHash.insert("DG_TRG_RESPOND_MASK",         &MyDimServer::apply_DG_TRG_RESPOND_MASK_requested);
    PMAppHash.insert("DG_BUNCH_PATTERN",            &MyDimServer::apply_DG_BUNCH_PATTERN_requested);
    PMAppHash.insert("DG_BUNCH_FREQ",               &MyDimServer::apply_DG_BUNCH_FREQ_requested);
    PMAppHash.insert("DG_FREQ_OFFSET",              &MyDimServer::apply_DG_FREQ_OFFSET_requested);
    PMAppHash.insert("RDH_FEE_ID",                  &MyDimServer::apply_RDH_FEE_ID_requested);
    PMAppHash.insert("RDH_PAR",                     &MyDimServer::apply_RDH_PAR_requested);
    PMAppHash.insert("RDH_MAX_PAYLOAD",             &MyDimServer::apply_RDH_MAX_PAYLOAD_requested);
    PMAppHash.insert("RDH_DET_FIELD",               &MyDimServer::apply_RDH_DET_FIELD_requested);
    PMAppHash.insert("CRU_TRG_COMPARE_DELAY",       &MyDimServer::apply_CRU_TRG_COMPARE_DELAY_requested);
    PMAppHash.insert("BCID_DELAY",                  &MyDimServer::apply_BCID_DELAY_requested);
    PMAppHash.insert("ALLtoPM",                     &MyDimServer::apply_ALLtoPM_requested);
};


m_appPMSignal returnPMAppPointerToSignal(QString PARname)
{
    return PMAppHash[PARname];
};
