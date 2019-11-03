#include "parameterstructure.h"


Parameter::Parameter(QString _name, bool _isControl) :
    data(0)
{
    name = _name;
    isControl = _isControl;
}

//-------------------------------------------------------------------------------

PMChannel::PMChannel(QString _name)
{
    name = _name;

    vPars.reserve(16);

    //      Control parameters in channel
    vPars.push_back(new Parameter(name+ "ADC_ZERO"      ,1));
    vPars.push_back(new Parameter(name+ "ADC_DELAY"     ,1));
    vPars.push_back(new Parameter(name+ "ADC0_OFFSET"   ,1));
    vPars.push_back(new Parameter(name+ "ADC1_OFFSET"   ,1));
    vPars.push_back(new Parameter(name+ "ADC0_RANGE"    ,1));
    vPars.push_back(new Parameter(name+ "ADC1_RANGE"    ,1));
    vPars.push_back(new Parameter(name+ "TIME_ALIN"     ,1));
    vPars.push_back(new Parameter(name+ "CFD_TRASHOLD"  ,1));
    vPars.push_back(new Parameter(name+ "CFD_ZERO"      ,1));

    //      Status parameters in channel
    vPars.push_back(new Parameter(name+ "ADC0_MEANAMPL" ,0));
    vPars.push_back(new Parameter(name+ "ADC1_MEANAMPL" ,0));
    vPars.push_back(new Parameter(name+ "ADC0_ZEROLVL"  ,0));
    vPars.push_back(new Parameter(name+ "ADC1_ZEROLVL"  ,0));
    vPars.push_back(new Parameter(name+ "CFD_CNT"       ,0));
    vPars.push_back(new Parameter(name+ "TRG_CNT"       ,0));
    vPars.push_back(new Parameter(name+ "MEAN_TIME"     ,0));

}

PMChannel::~PMChannel()
{
    foreach(Parameter* pPar,vPars) delete pPar;
}

//-------------------------------------------------------------------------------

PM::PM(QString _name)
{
    name = _name;

    vPars.reserve(15);

    vPars.push_back( new Parameter(name+ "OR_GATE"  ,0));
    vPars.push_back( new Parameter(name+ "SFD_SATR" ,0));
    vPars.push_back( new Parameter(name+ "CH_MASK"  ,0));

    //                  PM BOARD_STATUS
    vPars.push_back( new Parameter(name+ "BOARD_STATUS/RESET_COUNTERS"  ,1));
    vPars.push_back( new Parameter(name+ "BOARD_STATUS/JUMP1"           ,0));
    vPars.push_back( new Parameter(name+ "BOARD_STATUS/JUMP2"           ,0));
    vPars.push_back( new Parameter(name+ "BOARD_STATUS/JUMP3"           ,0));
    vPars.push_back( new Parameter(name+ "BOARD_STATUS/GBTXERR"         ,0));
    vPars.push_back( new Parameter(name+ "BOARD_STATUS/GBTRX_READY"     ,0));
    vPars.push_back( new Parameter(name+ "BOARD_STATUS/LOCK300_3"       ,0));
    vPars.push_back( new Parameter(name+ "BOARD_STATUS/LOCK300_2"       ,0));
    vPars.push_back( new Parameter(name+ "BOARD_STATUS/LOCK300_1"       ,0));
    vPars.push_back( new Parameter(name+ "BOARD_STATUS/LOCK320"         ,0));

    vChans.reserve(12);

    vChans.push_back(new PMChannel(name+"CH01/"));
//    vChans.push_back(new PMChannel(name+"CH02/"));
//    vChans.push_back(new PMChannel(name+"CH03/"));
//    vChans.push_back(new PMChannel(name+"CH04/"));
//    vChans.push_back(new PMChannel(name+"CH05/"));
//    vChans.push_back(new PMChannel(name+"CH06/"));
//    vChans.push_back(new PMChannel(name+"CH07/"));
//    vChans.push_back(new PMChannel(name+"CH08/"));
//    vChans.push_back(new PMChannel(name+"CH09/"));
//    vChans.push_back(new PMChannel(name+"CH10/"));
//    vChans.push_back(new PMChannel(name+"CH11/"));
//    vChans.push_back(new PMChannel(name+"CH12/"));

}

PM::~PM()
{
    foreach(PMChannel* pChan,vChans) delete pChan;
}

//-------------------------------------------------------------------------------

AllParameters::AllParameters() :
    name("/")
{
    vPMs.reserve(20);

    vPMs.push_back(new PM(name+"PM01/"));
//    vPMs.push_back(new PM(name+"PM02/"));
//    vPMs.push_back(new PM(name+"PM03/"));
//    vPMs.push_back(new PM(name+"PM04/"));
//    vPMs.push_back(new PM(name+"PM05/"));
//    vPMs.push_back(new PM(name+"PM06/"));
//    vPMs.push_back(new PM(name+"PM07/"));
//    vPMs.push_back(new PM(name+"PM08/"));
//    vPMs.push_back(new PM(name+"PM09/"));
//    vPMs.push_back(new PM(name+"PM10/"));
//    vPMs.push_back(new PM(name+"PM11/"));
//    vPMs.push_back(new PM(name+"PM12/"));
//    vPMs.push_back(new PM(name+"PM13/"));
//    vPMs.push_back(new PM(name+"PM14/"));
//    vPMs.push_back(new PM(name+"PM15/"));
//    vPMs.push_back(new PM(name+"PM16/"));
//    vPMs.push_back(new PM(name+"PM17/"));
//    vPMs.push_back(new PM(name+"PM18/"));
//    vPMs.push_back(new PM(name+"PM19/"));
//    vPMs.push_back(new PM(name+"PM20/"));

}

AllParameters::~AllParameters()
{
    foreach(PM* pPM, vPMs) {
        delete pPM;
    }
}
