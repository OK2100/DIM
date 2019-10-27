#include "mydimserver.h"



template<class T>
QHash<QString,m_setPMChSignal<T>> SetHash;

void fillSetHash()
{
    SetHash<quint16>.insert("ADC_ZERO",    &MyDimServer::set_ADC_ZERO_requested);
    SetHash<quint16>.insert("ADC_DELAY",   &MyDimServer::set_ADC_DELAY_requested);
    SetHash<quint16>.insert("ADC0_OFFSET", &MyDimServer::set_ADC0_OFFSET_requested);
    SetHash<quint16>.insert("ADC1_OFFSET", &MyDimServer::set_ADC1_OFFSET_requested);
    SetHash<quint16>.insert("ADC0_RANGE",  &MyDimServer::set_ADC0_RANGE_requested);
    SetHash<quint16>.insert("ADC1_RANGE",  &MyDimServer::set_ADC1_RANGE_requested);
    SetHash<quint16>.insert("TIME_ALIN",   &MyDimServer::set_TIME_ALIN_requested);
    SetHash<quint16>.insert("CFD_TRESHOLD",&MyDimServer::set_CFD_TRESHOLD_requested);
    SetHash<quint16>.insert("CFD_ZERO",    &MyDimServer::set_CFD_ZERO_requested);
};

template<class T>
m_setPMChSignal<T> returnSetPointerToSignal(QString PARname)
{
    return SetHash<T>[PARname];
};












QHash<QString,m_appPMChSignal> AppHash;

void fillAppHash()
{
    AppHash.insert("ADC_ZERO",    &MyDimServer::apply_ADC_ZERO_requested);
    AppHash.insert("ADC_DELAY",   &MyDimServer::apply_ADC_DELAY_requested);
    AppHash.insert("ADC0_OFFSET", &MyDimServer::apply_ADC0_OFFSET_requested);
    AppHash.insert("ADC1_OFFSET", &MyDimServer::apply_ADC1_OFFSET_requested);
    AppHash.insert("ADC0_RANGE",  &MyDimServer::apply_ADC0_RANGE_requested);
    AppHash.insert("ADC1_RANGE",  &MyDimServer::apply_ADC1_RANGE_requested);
    AppHash.insert("TIME_ALIN",   &MyDimServer::apply_TIME_ALIN_requested);
    AppHash.insert("CFD_TRESHOLD",&MyDimServer::apply_CFD_TRESHOLD_requested);
    AppHash.insert("CFD_ZERO",    &MyDimServer::apply_CFD_ZERO_requested);
    AppHash.insert("ALLtoCH",     &MyDimServer::apply_ALLtoCH_requested);

};


m_appPMChSignal returnAppPointerToSignal(QString PARname)
{
    return AppHash[PARname];
};
