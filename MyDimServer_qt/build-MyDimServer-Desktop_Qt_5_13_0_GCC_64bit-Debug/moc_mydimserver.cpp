/****************************************************************************
** Meta object code from reading C++ file 'mydimserver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../MyDimServer/mydimserver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mydimserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MyDimServer_t {
    QByteArrayData data[152];
    char stringdata0[3711];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyDimServer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyDimServer_t qt_meta_stringdata_MyDimServer = {
    {
QT_MOC_LITERAL(0, 0, 11), // "MyDimServer"
QT_MOC_LITERAL(1, 12, 4), // "test"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 22), // "set_ADC_ZERO_requested"
QT_MOC_LITERAL(4, 41, 4), // "PMid"
QT_MOC_LITERAL(5, 46, 4), // "CHid"
QT_MOC_LITERAL(6, 51, 3), // "val"
QT_MOC_LITERAL(7, 55, 23), // "set_ADC_DELAY_requested"
QT_MOC_LITERAL(8, 79, 25), // "set_ADC0_OFFSET_requested"
QT_MOC_LITERAL(9, 105, 25), // "set_ADC1_OFFSET_requested"
QT_MOC_LITERAL(10, 131, 24), // "set_ADC0_RANGE_requested"
QT_MOC_LITERAL(11, 156, 24), // "set_ADC1_RANGE_requested"
QT_MOC_LITERAL(12, 181, 23), // "set_TIME_ALIN_requested"
QT_MOC_LITERAL(13, 205, 26), // "set_CFD_TRESHOLD_requested"
QT_MOC_LITERAL(14, 232, 22), // "set_CFD_ZERO_requested"
QT_MOC_LITERAL(15, 255, 24), // "apply_ADC_ZERO_requested"
QT_MOC_LITERAL(16, 280, 2), // "PM"
QT_MOC_LITERAL(17, 283, 2), // "Ch"
QT_MOC_LITERAL(18, 286, 25), // "apply_ADC_DELAY_requested"
QT_MOC_LITERAL(19, 312, 27), // "apply_ADC0_OFFSET_requested"
QT_MOC_LITERAL(20, 340, 27), // "apply_ADC1_OFFSET_requested"
QT_MOC_LITERAL(21, 368, 26), // "apply_ADC0_RANGE_requested"
QT_MOC_LITERAL(22, 395, 26), // "apply_ADC1_RANGE_requested"
QT_MOC_LITERAL(23, 422, 25), // "apply_TIME_ALIN_requested"
QT_MOC_LITERAL(24, 448, 28), // "apply_CFD_TRESHOLD_requested"
QT_MOC_LITERAL(25, 477, 24), // "apply_CFD_ZERO_requested"
QT_MOC_LITERAL(26, 502, 23), // "apply_ALLtoCH_requested"
QT_MOC_LITERAL(27, 526, 20), // "set_CH_MASKrequested"
QT_MOC_LITERAL(28, 547, 22), // "set_CFD_SATR_requested"
QT_MOC_LITERAL(29, 570, 21), // "set_OR_GATE_requested"
QT_MOC_LITERAL(30, 592, 23), // "apply_CH_MASK_requested"
QT_MOC_LITERAL(31, 616, 24), // "apply_CFD_SATR_requested"
QT_MOC_LITERAL(32, 641, 23), // "apply_OR_GATE_requested"
QT_MOC_LITERAL(33, 665, 30), // "apply_RESET_COUNTERS_requested"
QT_MOC_LITERAL(34, 696, 31), // "apply_ZERO_LVL_CALIBR_requested"
QT_MOC_LITERAL(35, 728, 32), // "apply_RESET_ORBIT_SYNC_requested"
QT_MOC_LITERAL(36, 761, 43), // "apply_RESET_DROPPING_HIT_COUN..."
QT_MOC_LITERAL(37, 805, 38), // "apply_RESET_GEN_BUNCH_OFFSET_..."
QT_MOC_LITERAL(38, 844, 32), // "apply_RESET_GBT_ERRORS_requested"
QT_MOC_LITERAL(39, 877, 25), // "apply_RESET_GBT_requested"
QT_MOC_LITERAL(40, 903, 36), // "apply_RESET_RX_PHASE_ERROR_re..."
QT_MOC_LITERAL(41, 940, 28), // "apply_SEND_COMMAND_requested"
QT_MOC_LITERAL(42, 969, 23), // "apply_TG_MODE_requested"
QT_MOC_LITERAL(43, 993, 26), // "apply_TG_PATTERN_requested"
QT_MOC_LITERAL(44, 1020, 29), // "apply_TG_CONT_VALUE_requested"
QT_MOC_LITERAL(45, 1050, 30), // "apply_TG_SEND_SINGLE_requested"
QT_MOC_LITERAL(46, 1081, 29), // "apply_TG_BUNCH_FREQ_requested"
QT_MOC_LITERAL(47, 1111, 30), // "apply_TG_FREQ_OFFSET_requested"
QT_MOC_LITERAL(48, 1142, 23), // "apply_DG_MODE_requested"
QT_MOC_LITERAL(49, 1166, 35), // "apply_DG_TRG_RESPOND_MASK_req..."
QT_MOC_LITERAL(50, 1202, 32), // "apply_DG_BUNCH_PATTERN_requested"
QT_MOC_LITERAL(51, 1235, 29), // "apply_DG_BUNCH_FREQ_requested"
QT_MOC_LITERAL(52, 1265, 30), // "apply_DG_FREQ_OFFSET_requested"
QT_MOC_LITERAL(53, 1296, 26), // "apply_RDH_FEE_ID_requested"
QT_MOC_LITERAL(54, 1323, 23), // "apply_RDH_PAR_requested"
QT_MOC_LITERAL(55, 1347, 31), // "apply_RDH_MAX_PAYLOAD_requested"
QT_MOC_LITERAL(56, 1379, 29), // "apply_RDH_DET_FIELD_requested"
QT_MOC_LITERAL(57, 1409, 37), // "apply_CRU_TRG_COMPARE_DELAY_r..."
QT_MOC_LITERAL(58, 1447, 26), // "apply_BCID_DELAY_requested"
QT_MOC_LITERAL(59, 1474, 24), // "set_TG_PATTERN_requested"
QT_MOC_LITERAL(60, 1499, 27), // "set_TG_CONT_VALUE_requested"
QT_MOC_LITERAL(61, 1527, 27), // "set_TG_BUNCH_FREQ_requested"
QT_MOC_LITERAL(62, 1555, 28), // "set_TG_FREQ_OFFSET_requested"
QT_MOC_LITERAL(63, 1584, 33), // "set_DG_TRG_RESPOND_MASK_reque..."
QT_MOC_LITERAL(64, 1618, 30), // "set_DG_BUNCH_PATTERN_requested"
QT_MOC_LITERAL(65, 1649, 27), // "set_DG_BUNCH_FREQ_requested"
QT_MOC_LITERAL(66, 1677, 28), // "set_DG_FREQ_OFFSET_requested"
QT_MOC_LITERAL(67, 1706, 24), // "set_RDH_FEE_ID_requested"
QT_MOC_LITERAL(68, 1731, 21), // "set_RDH_PAR_requested"
QT_MOC_LITERAL(69, 1753, 29), // "set_RDH_MAX_PAYLOAD_requested"
QT_MOC_LITERAL(70, 1783, 27), // "set_RDH_DET_FIELD_requested"
QT_MOC_LITERAL(71, 1811, 35), // "set_CRU_TRG_COMPARE_DELAY_req..."
QT_MOC_LITERAL(72, 1847, 24), // "set_BCID_DELAY_requested"
QT_MOC_LITERAL(73, 1872, 23), // "apply_ALLtoPM_requested"
QT_MOC_LITERAL(74, 1896, 19), // "update_act_ADC_ZERO"
QT_MOC_LITERAL(75, 1916, 20), // "update_act_ADC_DELAY"
QT_MOC_LITERAL(76, 1937, 22), // "update_act_ADC0_OFFSET"
QT_MOC_LITERAL(77, 1960, 22), // "update_act_ADC1_OFFSET"
QT_MOC_LITERAL(78, 1983, 21), // "update_act_ADC0_RANGE"
QT_MOC_LITERAL(79, 2005, 21), // "update_act_ADC1_RANGE"
QT_MOC_LITERAL(80, 2027, 20), // "update_act_TIME_ALIN"
QT_MOC_LITERAL(81, 2048, 23), // "update_act_CFD_TRESHOLD"
QT_MOC_LITERAL(82, 2072, 19), // "update_act_CFD_ZERO"
QT_MOC_LITERAL(83, 2092, 19), // "update_new_ADC_ZERO"
QT_MOC_LITERAL(84, 2112, 20), // "update_new_ADC_DELAY"
QT_MOC_LITERAL(85, 2133, 22), // "update_new_ADC0_OFFSET"
QT_MOC_LITERAL(86, 2156, 22), // "update_new_ADC1_OFFSET"
QT_MOC_LITERAL(87, 2179, 21), // "update_new_ADC0_RANGE"
QT_MOC_LITERAL(88, 2201, 21), // "update_new_ADC1_RANGE"
QT_MOC_LITERAL(89, 2223, 20), // "update_new_TIME_ALIN"
QT_MOC_LITERAL(90, 2244, 23), // "update_new_CFD_TRESHOLD"
QT_MOC_LITERAL(91, 2268, 19), // "update_new_CFD_ZERO"
QT_MOC_LITERAL(92, 2288, 24), // "update_act_ADC0_MEANAMPL"
QT_MOC_LITERAL(93, 2313, 24), // "update_act_ADC1_MEANAMPL"
QT_MOC_LITERAL(94, 2338, 23), // "update_act_ADC0_ZEROLVL"
QT_MOC_LITERAL(95, 2362, 23), // "update_act_ADC1_ZEROLVL"
QT_MOC_LITERAL(96, 2386, 18), // "update_act_CFD_CNT"
QT_MOC_LITERAL(97, 2405, 18), // "update_act_TRG_CNT"
QT_MOC_LITERAL(98, 2424, 20), // "update_act_MEAN_TIME"
QT_MOC_LITERAL(99, 2445, 18), // "update_act_CH_MASK"
QT_MOC_LITERAL(100, 2464, 19), // "update_act_CFD_SATR"
QT_MOC_LITERAL(101, 2484, 18), // "update_act_OR_GATE"
QT_MOC_LITERAL(102, 2503, 18), // "update_new_CH_MASK"
QT_MOC_LITERAL(103, 2522, 19), // "update_new_CFD_SATR"
QT_MOC_LITERAL(104, 2542, 18), // "update_new_OR_GATE"
QT_MOC_LITERAL(105, 2561, 18), // "update_act_TG_MODE"
QT_MOC_LITERAL(106, 2580, 21), // "update_act_TG_PATTERN"
QT_MOC_LITERAL(107, 2602, 24), // "update_act_TG_CONT_VALUE"
QT_MOC_LITERAL(108, 2627, 24), // "update_act_TG_BUNCH_FREQ"
QT_MOC_LITERAL(109, 2652, 25), // "update_act_TG_FREQ_OFFSET"
QT_MOC_LITERAL(110, 2678, 18), // "update_act_DG_MODE"
QT_MOC_LITERAL(111, 2697, 30), // "update_act_DG_TRG_RESPOND_MASK"
QT_MOC_LITERAL(112, 2728, 27), // "update_act_DG_BUNCH_PATTERN"
QT_MOC_LITERAL(113, 2756, 24), // "update_act_DG_BUNCH_FREQ"
QT_MOC_LITERAL(114, 2781, 25), // "update_act_DG_FREQ_OFFSET"
QT_MOC_LITERAL(115, 2807, 21), // "update_act_RDH_FEE_ID"
QT_MOC_LITERAL(116, 2829, 18), // "update_act_RDH_PAR"
QT_MOC_LITERAL(117, 2848, 26), // "update_act_RDH_MAX_PAYLOAD"
QT_MOC_LITERAL(118, 2875, 24), // "update_act_RDH_DET_FIELD"
QT_MOC_LITERAL(119, 2900, 32), // "update_act_CRU_TRG_COMPARE_DELAY"
QT_MOC_LITERAL(120, 2933, 21), // "update_act_BCID_DELAY"
QT_MOC_LITERAL(121, 2955, 18), // "update_new_TG_MODE"
QT_MOC_LITERAL(122, 2974, 21), // "update_new_TG_PATTERN"
QT_MOC_LITERAL(123, 2996, 24), // "update_new_TG_CONT_VALUE"
QT_MOC_LITERAL(124, 3021, 24), // "update_new_TG_BUNCH_FREQ"
QT_MOC_LITERAL(125, 3046, 25), // "update_new_TG_FREQ_OFFSET"
QT_MOC_LITERAL(126, 3072, 18), // "update_new_DG_MODE"
QT_MOC_LITERAL(127, 3091, 30), // "update_new_DG_TRG_RESPOND_MASK"
QT_MOC_LITERAL(128, 3122, 27), // "update_new_DG_BUNCH_PATTERN"
QT_MOC_LITERAL(129, 3150, 24), // "update_new_DG_BUNCH_FREQ"
QT_MOC_LITERAL(130, 3175, 25), // "update_new_DG_FREQ_OFFSET"
QT_MOC_LITERAL(131, 3201, 21), // "update_new_RDH_FEE_ID"
QT_MOC_LITERAL(132, 3223, 18), // "update_new_RDH_PAR"
QT_MOC_LITERAL(133, 3242, 26), // "update_new_RDH_MAX_PAYLOAD"
QT_MOC_LITERAL(134, 3269, 24), // "update_new_RDH_DET_FIELD"
QT_MOC_LITERAL(135, 3294, 32), // "update_new_CRU_TRG_COMPARE_DELAY"
QT_MOC_LITERAL(136, 3327, 21), // "update_new_BCID_DELAY"
QT_MOC_LITERAL(137, 3349, 23), // "update_act_BOARD_STATUS"
QT_MOC_LITERAL(138, 3373, 22), // "update_act_TEMPERATURE"
QT_MOC_LITERAL(139, 3396, 20), // "update_act_HDMI_LINK"
QT_MOC_LITERAL(140, 3417, 15), // "update_act_BITS"
QT_MOC_LITERAL(141, 3433, 23), // "update_act_READOUT_MODE"
QT_MOC_LITERAL(142, 3457, 25), // "update_act_BCID_SYNC_MODE"
QT_MOC_LITERAL(143, 3483, 19), // "update_act_RX_PHASE"
QT_MOC_LITERAL(144, 3503, 20), // "update_act_CRU_ORBIT"
QT_MOC_LITERAL(145, 3524, 17), // "update_act_CRU_BC"
QT_MOC_LITERAL(146, 3542, 19), // "update_act_RAW_FIFO"
QT_MOC_LITERAL(147, 3562, 19), // "update_act_SEL_FIFO"
QT_MOC_LITERAL(148, 3582, 38), // "update_act_SEL_FIRST_HIT_DROP..."
QT_MOC_LITERAL(149, 3621, 37), // "update_act_SEL_LAST_HIT_DROPP..."
QT_MOC_LITERAL(150, 3659, 27), // "update_act_SEL_HITS_DROPPED"
QT_MOC_LITERAL(151, 3687, 23) // "update_act_READOUT_RATE"

    },
    "MyDimServer\0test\0\0set_ADC_ZERO_requested\0"
    "PMid\0CHid\0val\0set_ADC_DELAY_requested\0"
    "set_ADC0_OFFSET_requested\0"
    "set_ADC1_OFFSET_requested\0"
    "set_ADC0_RANGE_requested\0"
    "set_ADC1_RANGE_requested\0"
    "set_TIME_ALIN_requested\0"
    "set_CFD_TRESHOLD_requested\0"
    "set_CFD_ZERO_requested\0apply_ADC_ZERO_requested\0"
    "PM\0Ch\0apply_ADC_DELAY_requested\0"
    "apply_ADC0_OFFSET_requested\0"
    "apply_ADC1_OFFSET_requested\0"
    "apply_ADC0_RANGE_requested\0"
    "apply_ADC1_RANGE_requested\0"
    "apply_TIME_ALIN_requested\0"
    "apply_CFD_TRESHOLD_requested\0"
    "apply_CFD_ZERO_requested\0"
    "apply_ALLtoCH_requested\0set_CH_MASKrequested\0"
    "set_CFD_SATR_requested\0set_OR_GATE_requested\0"
    "apply_CH_MASK_requested\0"
    "apply_CFD_SATR_requested\0"
    "apply_OR_GATE_requested\0"
    "apply_RESET_COUNTERS_requested\0"
    "apply_ZERO_LVL_CALIBR_requested\0"
    "apply_RESET_ORBIT_SYNC_requested\0"
    "apply_RESET_DROPPING_HIT_COUNTERS_requested\0"
    "apply_RESET_GEN_BUNCH_OFFSET_requested\0"
    "apply_RESET_GBT_ERRORS_requested\0"
    "apply_RESET_GBT_requested\0"
    "apply_RESET_RX_PHASE_ERROR_requested\0"
    "apply_SEND_COMMAND_requested\0"
    "apply_TG_MODE_requested\0"
    "apply_TG_PATTERN_requested\0"
    "apply_TG_CONT_VALUE_requested\0"
    "apply_TG_SEND_SINGLE_requested\0"
    "apply_TG_BUNCH_FREQ_requested\0"
    "apply_TG_FREQ_OFFSET_requested\0"
    "apply_DG_MODE_requested\0"
    "apply_DG_TRG_RESPOND_MASK_requested\0"
    "apply_DG_BUNCH_PATTERN_requested\0"
    "apply_DG_BUNCH_FREQ_requested\0"
    "apply_DG_FREQ_OFFSET_requested\0"
    "apply_RDH_FEE_ID_requested\0"
    "apply_RDH_PAR_requested\0"
    "apply_RDH_MAX_PAYLOAD_requested\0"
    "apply_RDH_DET_FIELD_requested\0"
    "apply_CRU_TRG_COMPARE_DELAY_requested\0"
    "apply_BCID_DELAY_requested\0"
    "set_TG_PATTERN_requested\0"
    "set_TG_CONT_VALUE_requested\0"
    "set_TG_BUNCH_FREQ_requested\0"
    "set_TG_FREQ_OFFSET_requested\0"
    "set_DG_TRG_RESPOND_MASK_requested\0"
    "set_DG_BUNCH_PATTERN_requested\0"
    "set_DG_BUNCH_FREQ_requested\0"
    "set_DG_FREQ_OFFSET_requested\0"
    "set_RDH_FEE_ID_requested\0set_RDH_PAR_requested\0"
    "set_RDH_MAX_PAYLOAD_requested\0"
    "set_RDH_DET_FIELD_requested\0"
    "set_CRU_TRG_COMPARE_DELAY_requested\0"
    "set_BCID_DELAY_requested\0"
    "apply_ALLtoPM_requested\0update_act_ADC_ZERO\0"
    "update_act_ADC_DELAY\0update_act_ADC0_OFFSET\0"
    "update_act_ADC1_OFFSET\0update_act_ADC0_RANGE\0"
    "update_act_ADC1_RANGE\0update_act_TIME_ALIN\0"
    "update_act_CFD_TRESHOLD\0update_act_CFD_ZERO\0"
    "update_new_ADC_ZERO\0update_new_ADC_DELAY\0"
    "update_new_ADC0_OFFSET\0update_new_ADC1_OFFSET\0"
    "update_new_ADC0_RANGE\0update_new_ADC1_RANGE\0"
    "update_new_TIME_ALIN\0update_new_CFD_TRESHOLD\0"
    "update_new_CFD_ZERO\0update_act_ADC0_MEANAMPL\0"
    "update_act_ADC1_MEANAMPL\0"
    "update_act_ADC0_ZEROLVL\0update_act_ADC1_ZEROLVL\0"
    "update_act_CFD_CNT\0update_act_TRG_CNT\0"
    "update_act_MEAN_TIME\0update_act_CH_MASK\0"
    "update_act_CFD_SATR\0update_act_OR_GATE\0"
    "update_new_CH_MASK\0update_new_CFD_SATR\0"
    "update_new_OR_GATE\0update_act_TG_MODE\0"
    "update_act_TG_PATTERN\0update_act_TG_CONT_VALUE\0"
    "update_act_TG_BUNCH_FREQ\0"
    "update_act_TG_FREQ_OFFSET\0update_act_DG_MODE\0"
    "update_act_DG_TRG_RESPOND_MASK\0"
    "update_act_DG_BUNCH_PATTERN\0"
    "update_act_DG_BUNCH_FREQ\0"
    "update_act_DG_FREQ_OFFSET\0"
    "update_act_RDH_FEE_ID\0update_act_RDH_PAR\0"
    "update_act_RDH_MAX_PAYLOAD\0"
    "update_act_RDH_DET_FIELD\0"
    "update_act_CRU_TRG_COMPARE_DELAY\0"
    "update_act_BCID_DELAY\0update_new_TG_MODE\0"
    "update_new_TG_PATTERN\0update_new_TG_CONT_VALUE\0"
    "update_new_TG_BUNCH_FREQ\0"
    "update_new_TG_FREQ_OFFSET\0update_new_DG_MODE\0"
    "update_new_DG_TRG_RESPOND_MASK\0"
    "update_new_DG_BUNCH_PATTERN\0"
    "update_new_DG_BUNCH_FREQ\0"
    "update_new_DG_FREQ_OFFSET\0"
    "update_new_RDH_FEE_ID\0update_new_RDH_PAR\0"
    "update_new_RDH_MAX_PAYLOAD\0"
    "update_new_RDH_DET_FIELD\0"
    "update_new_CRU_TRG_COMPARE_DELAY\0"
    "update_new_BCID_DELAY\0update_act_BOARD_STATUS\0"
    "update_act_TEMPERATURE\0update_act_HDMI_LINK\0"
    "update_act_BITS\0update_act_READOUT_MODE\0"
    "update_act_BCID_SYNC_MODE\0update_act_RX_PHASE\0"
    "update_act_CRU_ORBIT\0update_act_CRU_BC\0"
    "update_act_RAW_FIFO\0update_act_SEL_FIFO\0"
    "update_act_SEL_FIRST_HIT_DROPPED_ORBIT\0"
    "update_act_SEL_LAST_HIT_DROPPED_ORBIT\0"
    "update_act_SEL_HITS_DROPPED\0"
    "update_act_READOUT_RATE"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyDimServer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     145,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      67,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  739,    2, 0x06 /* Public */,
       3,    3,  740,    2, 0x06 /* Public */,
       7,    3,  747,    2, 0x06 /* Public */,
       8,    3,  754,    2, 0x06 /* Public */,
       9,    3,  761,    2, 0x06 /* Public */,
      10,    3,  768,    2, 0x06 /* Public */,
      11,    3,  775,    2, 0x06 /* Public */,
      12,    3,  782,    2, 0x06 /* Public */,
      13,    3,  789,    2, 0x06 /* Public */,
      14,    3,  796,    2, 0x06 /* Public */,
      15,    2,  803,    2, 0x06 /* Public */,
      18,    2,  808,    2, 0x06 /* Public */,
      19,    2,  813,    2, 0x06 /* Public */,
      20,    2,  818,    2, 0x06 /* Public */,
      21,    2,  823,    2, 0x06 /* Public */,
      22,    2,  828,    2, 0x06 /* Public */,
      23,    2,  833,    2, 0x06 /* Public */,
      24,    2,  838,    2, 0x06 /* Public */,
      25,    2,  843,    2, 0x06 /* Public */,
      26,    2,  848,    2, 0x06 /* Public */,
      27,    2,  853,    2, 0x06 /* Public */,
      28,    2,  858,    2, 0x06 /* Public */,
      29,    2,  863,    2, 0x06 /* Public */,
      30,    1,  868,    2, 0x06 /* Public */,
      31,    1,  871,    2, 0x06 /* Public */,
      32,    1,  874,    2, 0x06 /* Public */,
      33,    1,  877,    2, 0x06 /* Public */,
      34,    1,  880,    2, 0x06 /* Public */,
      35,    1,  883,    2, 0x06 /* Public */,
      36,    1,  886,    2, 0x06 /* Public */,
      37,    1,  889,    2, 0x06 /* Public */,
      38,    1,  892,    2, 0x06 /* Public */,
      39,    1,  895,    2, 0x06 /* Public */,
      40,    1,  898,    2, 0x06 /* Public */,
      41,    1,  901,    2, 0x06 /* Public */,
      42,    1,  904,    2, 0x06 /* Public */,
      43,    1,  907,    2, 0x06 /* Public */,
      44,    1,  910,    2, 0x06 /* Public */,
      45,    1,  913,    2, 0x06 /* Public */,
      46,    1,  916,    2, 0x06 /* Public */,
      47,    1,  919,    2, 0x06 /* Public */,
      48,    1,  922,    2, 0x06 /* Public */,
      49,    1,  925,    2, 0x06 /* Public */,
      50,    1,  928,    2, 0x06 /* Public */,
      51,    1,  931,    2, 0x06 /* Public */,
      52,    1,  934,    2, 0x06 /* Public */,
      53,    1,  937,    2, 0x06 /* Public */,
      54,    1,  940,    2, 0x06 /* Public */,
      55,    1,  943,    2, 0x06 /* Public */,
      56,    1,  946,    2, 0x06 /* Public */,
      57,    1,  949,    2, 0x06 /* Public */,
      58,    1,  952,    2, 0x06 /* Public */,
      59,    2,  955,    2, 0x06 /* Public */,
      60,    2,  960,    2, 0x06 /* Public */,
      61,    2,  965,    2, 0x06 /* Public */,
      62,    2,  970,    2, 0x06 /* Public */,
      63,    2,  975,    2, 0x06 /* Public */,
      64,    2,  980,    2, 0x06 /* Public */,
      65,    2,  985,    2, 0x06 /* Public */,
      66,    2,  990,    2, 0x06 /* Public */,
      67,    2,  995,    2, 0x06 /* Public */,
      68,    2, 1000,    2, 0x06 /* Public */,
      69,    2, 1005,    2, 0x06 /* Public */,
      70,    2, 1010,    2, 0x06 /* Public */,
      71,    2, 1015,    2, 0x06 /* Public */,
      72,    2, 1020,    2, 0x06 /* Public */,
      73,    1, 1025,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      74,    3, 1028,    2, 0x0a /* Public */,
      75,    3, 1035,    2, 0x0a /* Public */,
      76,    3, 1042,    2, 0x0a /* Public */,
      77,    3, 1049,    2, 0x0a /* Public */,
      78,    3, 1056,    2, 0x0a /* Public */,
      79,    3, 1063,    2, 0x0a /* Public */,
      80,    3, 1070,    2, 0x0a /* Public */,
      81,    3, 1077,    2, 0x0a /* Public */,
      82,    3, 1084,    2, 0x0a /* Public */,
      83,    3, 1091,    2, 0x0a /* Public */,
      84,    3, 1098,    2, 0x0a /* Public */,
      85,    3, 1105,    2, 0x0a /* Public */,
      86,    3, 1112,    2, 0x0a /* Public */,
      87,    3, 1119,    2, 0x0a /* Public */,
      88,    3, 1126,    2, 0x0a /* Public */,
      89,    3, 1133,    2, 0x0a /* Public */,
      90,    3, 1140,    2, 0x0a /* Public */,
      91,    3, 1147,    2, 0x0a /* Public */,
      92,    3, 1154,    2, 0x0a /* Public */,
      93,    3, 1161,    2, 0x0a /* Public */,
      94,    3, 1168,    2, 0x0a /* Public */,
      95,    3, 1175,    2, 0x0a /* Public */,
      96,    3, 1182,    2, 0x0a /* Public */,
      97,    3, 1189,    2, 0x0a /* Public */,
      98,    3, 1196,    2, 0x0a /* Public */,
      99,    2, 1203,    2, 0x0a /* Public */,
     100,    2, 1208,    2, 0x0a /* Public */,
     101,    2, 1213,    2, 0x0a /* Public */,
     102,    2, 1218,    2, 0x0a /* Public */,
     103,    2, 1223,    2, 0x0a /* Public */,
     104,    2, 1228,    2, 0x0a /* Public */,
     105,    2, 1233,    2, 0x0a /* Public */,
     106,    2, 1238,    2, 0x0a /* Public */,
     107,    2, 1243,    2, 0x0a /* Public */,
     108,    2, 1248,    2, 0x0a /* Public */,
     109,    2, 1253,    2, 0x0a /* Public */,
     110,    2, 1258,    2, 0x0a /* Public */,
     111,    2, 1263,    2, 0x0a /* Public */,
     112,    2, 1268,    2, 0x0a /* Public */,
     113,    2, 1273,    2, 0x0a /* Public */,
     114,    2, 1278,    2, 0x0a /* Public */,
     115,    2, 1283,    2, 0x0a /* Public */,
     116,    2, 1288,    2, 0x0a /* Public */,
     117,    2, 1293,    2, 0x0a /* Public */,
     118,    2, 1298,    2, 0x0a /* Public */,
     119,    2, 1303,    2, 0x0a /* Public */,
     120,    2, 1308,    2, 0x0a /* Public */,
     121,    2, 1313,    2, 0x0a /* Public */,
     122,    2, 1318,    2, 0x0a /* Public */,
     123,    2, 1323,    2, 0x0a /* Public */,
     124,    2, 1328,    2, 0x0a /* Public */,
     125,    2, 1333,    2, 0x0a /* Public */,
     126,    2, 1338,    2, 0x0a /* Public */,
     127,    2, 1343,    2, 0x0a /* Public */,
     128,    2, 1348,    2, 0x0a /* Public */,
     129,    2, 1353,    2, 0x0a /* Public */,
     130,    2, 1358,    2, 0x0a /* Public */,
     131,    2, 1363,    2, 0x0a /* Public */,
     132,    2, 1368,    2, 0x0a /* Public */,
     133,    2, 1373,    2, 0x0a /* Public */,
     134,    2, 1378,    2, 0x0a /* Public */,
     135,    2, 1383,    2, 0x0a /* Public */,
     136,    2, 1388,    2, 0x0a /* Public */,
     137,    2, 1393,    2, 0x0a /* Public */,
     138,    2, 1398,    2, 0x0a /* Public */,
     139,    2, 1403,    2, 0x0a /* Public */,
     140,    2, 1408,    2, 0x0a /* Public */,
     141,    2, 1413,    2, 0x0a /* Public */,
     142,    2, 1418,    2, 0x0a /* Public */,
     143,    2, 1423,    2, 0x0a /* Public */,
     144,    2, 1428,    2, 0x0a /* Public */,
     145,    2, 1433,    2, 0x0a /* Public */,
     146,    2, 1438,    2, 0x0a /* Public */,
     147,    2, 1443,    2, 0x0a /* Public */,
     148,    2, 1448,    2, 0x0a /* Public */,
     149,    2, 1453,    2, 0x0a /* Public */,
     150,    2, 1458,    2, 0x0a /* Public */,
     151,    2, 1463,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar, QMetaType::UShort,    4,    5,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar, QMetaType::UShort,    4,    5,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar, QMetaType::UShort,    4,    5,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar, QMetaType::UShort,    4,    5,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar, QMetaType::UShort,    4,    5,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar, QMetaType::UShort,    4,    5,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar, QMetaType::UShort,    4,    5,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar, QMetaType::UShort,    4,    5,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar, QMetaType::UShort,    4,    5,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar,   16,   17,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar,   16,   17,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar,   16,   17,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar,   16,   17,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar,   16,   17,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar,   16,   17,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar,   16,   17,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar,   16,   17,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar,   16,   17,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar,   16,   17,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UChar,    4,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar, QMetaType::UShort,    4,    5,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar, QMetaType::UShort,    4,    5,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar, QMetaType::UShort,    4,    5,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar, QMetaType::UShort,    4,    5,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar, QMetaType::UShort,    4,    5,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar, QMetaType::UShort,    4,    5,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar, QMetaType::UShort,    4,    5,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar, QMetaType::UShort,    4,    5,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar, QMetaType::UShort,    4,    5,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar, QMetaType::UShort,    4,    5,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar, QMetaType::UShort,    4,    5,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar, QMetaType::UShort,    4,    5,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar, QMetaType::UShort,    4,    5,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar, QMetaType::UShort,    4,    5,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar, QMetaType::UShort,    4,    5,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar, QMetaType::UShort,    4,    5,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar, QMetaType::UShort,    4,    5,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar, QMetaType::UShort,    4,    5,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar, QMetaType::UShort,    4,    5,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar, QMetaType::UShort,    4,    5,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar, QMetaType::UShort,    4,    5,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar, QMetaType::UShort,    4,    5,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar, QMetaType::UInt,    4,    5,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar, QMetaType::UInt,    4,    5,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar, QMetaType::UShort,    4,    5,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UShort,    4,    6,

       0        // eod
};

void MyDimServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MyDimServer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->test(); break;
        case 1: _t->set_ADC_ZERO_requested((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 2: _t->set_ADC_DELAY_requested((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 3: _t->set_ADC0_OFFSET_requested((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 4: _t->set_ADC1_OFFSET_requested((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 5: _t->set_ADC0_RANGE_requested((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 6: _t->set_ADC1_RANGE_requested((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 7: _t->set_TIME_ALIN_requested((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 8: _t->set_CFD_TRESHOLD_requested((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 9: _t->set_CFD_ZERO_requested((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 10: _t->apply_ADC_ZERO_requested((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 11: _t->apply_ADC_DELAY_requested((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 12: _t->apply_ADC0_OFFSET_requested((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 13: _t->apply_ADC1_OFFSET_requested((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 14: _t->apply_ADC0_RANGE_requested((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 15: _t->apply_ADC1_RANGE_requested((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 16: _t->apply_TIME_ALIN_requested((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 17: _t->apply_CFD_TRESHOLD_requested((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 18: _t->apply_CFD_ZERO_requested((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 19: _t->apply_ALLtoCH_requested((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 20: _t->set_CH_MASKrequested((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 21: _t->set_CFD_SATR_requested((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 22: _t->set_OR_GATE_requested((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 23: _t->apply_CH_MASK_requested((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 24: _t->apply_CFD_SATR_requested((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 25: _t->apply_OR_GATE_requested((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 26: _t->apply_RESET_COUNTERS_requested((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 27: _t->apply_ZERO_LVL_CALIBR_requested((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 28: _t->apply_RESET_ORBIT_SYNC_requested((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 29: _t->apply_RESET_DROPPING_HIT_COUNTERS_requested((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 30: _t->apply_RESET_GEN_BUNCH_OFFSET_requested((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 31: _t->apply_RESET_GBT_ERRORS_requested((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 32: _t->apply_RESET_GBT_requested((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 33: _t->apply_RESET_RX_PHASE_ERROR_requested((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 34: _t->apply_SEND_COMMAND_requested((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 35: _t->apply_TG_MODE_requested((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 36: _t->apply_TG_PATTERN_requested((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 37: _t->apply_TG_CONT_VALUE_requested((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 38: _t->apply_TG_SEND_SINGLE_requested((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 39: _t->apply_TG_BUNCH_FREQ_requested((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 40: _t->apply_TG_FREQ_OFFSET_requested((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 41: _t->apply_DG_MODE_requested((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 42: _t->apply_DG_TRG_RESPOND_MASK_requested((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 43: _t->apply_DG_BUNCH_PATTERN_requested((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 44: _t->apply_DG_BUNCH_FREQ_requested((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 45: _t->apply_DG_FREQ_OFFSET_requested((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 46: _t->apply_RDH_FEE_ID_requested((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 47: _t->apply_RDH_PAR_requested((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 48: _t->apply_RDH_MAX_PAYLOAD_requested((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 49: _t->apply_RDH_DET_FIELD_requested((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 50: _t->apply_CRU_TRG_COMPARE_DELAY_requested((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 51: _t->apply_BCID_DELAY_requested((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 52: _t->set_TG_PATTERN_requested((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 53: _t->set_TG_CONT_VALUE_requested((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 54: _t->set_TG_BUNCH_FREQ_requested((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 55: _t->set_TG_FREQ_OFFSET_requested((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 56: _t->set_DG_TRG_RESPOND_MASK_requested((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 57: _t->set_DG_BUNCH_PATTERN_requested((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 58: _t->set_DG_BUNCH_FREQ_requested((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 59: _t->set_DG_FREQ_OFFSET_requested((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 60: _t->set_RDH_FEE_ID_requested((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 61: _t->set_RDH_PAR_requested((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 62: _t->set_RDH_MAX_PAYLOAD_requested((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 63: _t->set_RDH_DET_FIELD_requested((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 64: _t->set_CRU_TRG_COMPARE_DELAY_requested((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 65: _t->set_BCID_DELAY_requested((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 66: _t->apply_ALLtoPM_requested((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 67: _t->update_act_ADC_ZERO((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 68: _t->update_act_ADC_DELAY((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 69: _t->update_act_ADC0_OFFSET((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 70: _t->update_act_ADC1_OFFSET((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 71: _t->update_act_ADC0_RANGE((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 72: _t->update_act_ADC1_RANGE((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 73: _t->update_act_TIME_ALIN((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 74: _t->update_act_CFD_TRESHOLD((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 75: _t->update_act_CFD_ZERO((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 76: _t->update_new_ADC_ZERO((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 77: _t->update_new_ADC_DELAY((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 78: _t->update_new_ADC0_OFFSET((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 79: _t->update_new_ADC1_OFFSET((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 80: _t->update_new_ADC0_RANGE((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 81: _t->update_new_ADC1_RANGE((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 82: _t->update_new_TIME_ALIN((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 83: _t->update_new_CFD_TRESHOLD((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 84: _t->update_new_CFD_ZERO((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 85: _t->update_act_ADC0_MEANAMPL((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 86: _t->update_act_ADC1_MEANAMPL((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 87: _t->update_act_ADC0_ZEROLVL((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 88: _t->update_act_ADC1_ZEROLVL((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 89: _t->update_act_CFD_CNT((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint32(*)>(_a[3]))); break;
        case 90: _t->update_act_TRG_CNT((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint32(*)>(_a[3]))); break;
        case 91: _t->update_act_MEAN_TIME((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 92: _t->update_act_CH_MASK((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 93: _t->update_act_CFD_SATR((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 94: _t->update_act_OR_GATE((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 95: _t->update_new_CH_MASK((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 96: _t->update_new_CFD_SATR((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 97: _t->update_new_OR_GATE((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 98: _t->update_act_TG_MODE((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 99: _t->update_act_TG_PATTERN((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 100: _t->update_act_TG_CONT_VALUE((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 101: _t->update_act_TG_BUNCH_FREQ((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 102: _t->update_act_TG_FREQ_OFFSET((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 103: _t->update_act_DG_MODE((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 104: _t->update_act_DG_TRG_RESPOND_MASK((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 105: _t->update_act_DG_BUNCH_PATTERN((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 106: _t->update_act_DG_BUNCH_FREQ((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 107: _t->update_act_DG_FREQ_OFFSET((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 108: _t->update_act_RDH_FEE_ID((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 109: _t->update_act_RDH_PAR((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 110: _t->update_act_RDH_MAX_PAYLOAD((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 111: _t->update_act_RDH_DET_FIELD((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 112: _t->update_act_CRU_TRG_COMPARE_DELAY((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 113: _t->update_act_BCID_DELAY((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 114: _t->update_new_TG_MODE((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 115: _t->update_new_TG_PATTERN((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 116: _t->update_new_TG_CONT_VALUE((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 117: _t->update_new_TG_BUNCH_FREQ((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 118: _t->update_new_TG_FREQ_OFFSET((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 119: _t->update_new_DG_MODE((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 120: _t->update_new_DG_TRG_RESPOND_MASK((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 121: _t->update_new_DG_BUNCH_PATTERN((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 122: _t->update_new_DG_BUNCH_FREQ((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 123: _t->update_new_DG_FREQ_OFFSET((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 124: _t->update_new_RDH_FEE_ID((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 125: _t->update_new_RDH_PAR((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 126: _t->update_new_RDH_MAX_PAYLOAD((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 127: _t->update_new_RDH_DET_FIELD((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 128: _t->update_new_CRU_TRG_COMPARE_DELAY((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 129: _t->update_new_BCID_DELAY((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 130: _t->update_act_BOARD_STATUS((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 131: _t->update_act_TEMPERATURE((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 132: _t->update_act_HDMI_LINK((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 133: _t->update_act_BITS((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 134: _t->update_act_READOUT_MODE((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 135: _t->update_act_BCID_SYNC_MODE((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 136: _t->update_act_RX_PHASE((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 137: _t->update_act_CRU_ORBIT((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 138: _t->update_act_CRU_BC((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 139: _t->update_act_RAW_FIFO((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 140: _t->update_act_SEL_FIFO((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 141: _t->update_act_SEL_FIRST_HIT_DROPPED_ORBIT((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 142: _t->update_act_SEL_LAST_HIT_DROPPED_ORBIT((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 143: _t->update_act_SEL_HITS_DROPPED((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 144: _t->update_act_READOUT_RATE((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MyDimServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::test)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 , quint8 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_ADC_ZERO_requested)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 , quint8 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_ADC_DELAY_requested)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 , quint8 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_ADC0_OFFSET_requested)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 , quint8 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_ADC1_OFFSET_requested)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 , quint8 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_ADC0_RANGE_requested)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 , quint8 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_ADC1_RANGE_requested)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 , quint8 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_TIME_ALIN_requested)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 , quint8 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_CFD_TRESHOLD_requested)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 , quint8 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_CFD_ZERO_requested)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_ADC_ZERO_requested)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_ADC_DELAY_requested)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_ADC0_OFFSET_requested)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_ADC1_OFFSET_requested)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_ADC0_RANGE_requested)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_ADC1_RANGE_requested)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_TIME_ALIN_requested)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_CFD_TRESHOLD_requested)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_CFD_ZERO_requested)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_ALLtoCH_requested)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_CH_MASKrequested)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_CFD_SATR_requested)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_OR_GATE_requested)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_CH_MASK_requested)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_CFD_SATR_requested)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_OR_GATE_requested)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_RESET_COUNTERS_requested)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_ZERO_LVL_CALIBR_requested)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_RESET_ORBIT_SYNC_requested)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_RESET_DROPPING_HIT_COUNTERS_requested)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_RESET_GEN_BUNCH_OFFSET_requested)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_RESET_GBT_ERRORS_requested)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_RESET_GBT_requested)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_RESET_RX_PHASE_ERROR_requested)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_SEND_COMMAND_requested)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_TG_MODE_requested)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_TG_PATTERN_requested)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_TG_CONT_VALUE_requested)) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_TG_SEND_SINGLE_requested)) {
                *result = 38;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_TG_BUNCH_FREQ_requested)) {
                *result = 39;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_TG_FREQ_OFFSET_requested)) {
                *result = 40;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_DG_MODE_requested)) {
                *result = 41;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_DG_TRG_RESPOND_MASK_requested)) {
                *result = 42;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_DG_BUNCH_PATTERN_requested)) {
                *result = 43;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_DG_BUNCH_FREQ_requested)) {
                *result = 44;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_DG_FREQ_OFFSET_requested)) {
                *result = 45;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_RDH_FEE_ID_requested)) {
                *result = 46;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_RDH_PAR_requested)) {
                *result = 47;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_RDH_MAX_PAYLOAD_requested)) {
                *result = 48;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_RDH_DET_FIELD_requested)) {
                *result = 49;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_CRU_TRG_COMPARE_DELAY_requested)) {
                *result = 50;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_BCID_DELAY_requested)) {
                *result = 51;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_TG_PATTERN_requested)) {
                *result = 52;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_TG_CONT_VALUE_requested)) {
                *result = 53;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_TG_BUNCH_FREQ_requested)) {
                *result = 54;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_TG_FREQ_OFFSET_requested)) {
                *result = 55;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_DG_TRG_RESPOND_MASK_requested)) {
                *result = 56;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_DG_BUNCH_PATTERN_requested)) {
                *result = 57;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_DG_BUNCH_FREQ_requested)) {
                *result = 58;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_DG_FREQ_OFFSET_requested)) {
                *result = 59;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_RDH_FEE_ID_requested)) {
                *result = 60;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_RDH_PAR_requested)) {
                *result = 61;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_RDH_MAX_PAYLOAD_requested)) {
                *result = 62;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_RDH_DET_FIELD_requested)) {
                *result = 63;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_CRU_TRG_COMPARE_DELAY_requested)) {
                *result = 64;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::set_BCID_DELAY_requested)) {
                *result = 65;
                return;
            }
        }
        {
            using _t = void (MyDimServer::*)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyDimServer::apply_ALLtoPM_requested)) {
                *result = 66;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MyDimServer::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_MyDimServer.data,
    qt_meta_data_MyDimServer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MyDimServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyDimServer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyDimServer.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "DimServer"))
        return static_cast< DimServer*>(this);
    return QObject::qt_metacast(_clname);
}

int MyDimServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 145)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 145;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 145)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 145;
    }
    return _id;
}

// SIGNAL 0
void MyDimServer::test()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MyDimServer::set_ADC_ZERO_requested(quint8 _t1, quint8 _t2, quint16 _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MyDimServer::set_ADC_DELAY_requested(quint8 _t1, quint8 _t2, quint16 _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MyDimServer::set_ADC0_OFFSET_requested(quint8 _t1, quint8 _t2, quint16 _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MyDimServer::set_ADC1_OFFSET_requested(quint8 _t1, quint8 _t2, quint16 _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MyDimServer::set_ADC0_RANGE_requested(quint8 _t1, quint8 _t2, quint16 _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MyDimServer::set_ADC1_RANGE_requested(quint8 _t1, quint8 _t2, quint16 _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MyDimServer::set_TIME_ALIN_requested(quint8 _t1, quint8 _t2, quint16 _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void MyDimServer::set_CFD_TRESHOLD_requested(quint8 _t1, quint8 _t2, quint16 _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void MyDimServer::set_CFD_ZERO_requested(quint8 _t1, quint8 _t2, quint16 _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void MyDimServer::apply_ADC_ZERO_requested(quint8 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void MyDimServer::apply_ADC_DELAY_requested(quint8 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void MyDimServer::apply_ADC0_OFFSET_requested(quint8 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void MyDimServer::apply_ADC1_OFFSET_requested(quint8 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void MyDimServer::apply_ADC0_RANGE_requested(quint8 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void MyDimServer::apply_ADC1_RANGE_requested(quint8 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void MyDimServer::apply_TIME_ALIN_requested(quint8 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void MyDimServer::apply_CFD_TRESHOLD_requested(quint8 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void MyDimServer::apply_CFD_ZERO_requested(quint8 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void MyDimServer::apply_ALLtoCH_requested(quint8 _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void MyDimServer::set_CH_MASKrequested(quint8 _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void MyDimServer::set_CFD_SATR_requested(quint8 _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void MyDimServer::set_OR_GATE_requested(quint8 _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void MyDimServer::apply_CH_MASK_requested(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void MyDimServer::apply_CFD_SATR_requested(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void MyDimServer::apply_OR_GATE_requested(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void MyDimServer::apply_RESET_COUNTERS_requested(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void MyDimServer::apply_ZERO_LVL_CALIBR_requested(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void MyDimServer::apply_RESET_ORBIT_SYNC_requested(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void MyDimServer::apply_RESET_DROPPING_HIT_COUNTERS_requested(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void MyDimServer::apply_RESET_GEN_BUNCH_OFFSET_requested(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void MyDimServer::apply_RESET_GBT_ERRORS_requested(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void MyDimServer::apply_RESET_GBT_requested(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void MyDimServer::apply_RESET_RX_PHASE_ERROR_requested(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void MyDimServer::apply_SEND_COMMAND_requested(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void MyDimServer::apply_TG_MODE_requested(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void MyDimServer::apply_TG_PATTERN_requested(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void MyDimServer::apply_TG_CONT_VALUE_requested(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void MyDimServer::apply_TG_SEND_SINGLE_requested(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void MyDimServer::apply_TG_BUNCH_FREQ_requested(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void MyDimServer::apply_TG_FREQ_OFFSET_requested(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void MyDimServer::apply_DG_MODE_requested(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}

// SIGNAL 42
void MyDimServer::apply_DG_TRG_RESPOND_MASK_requested(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
}

// SIGNAL 43
void MyDimServer::apply_DG_BUNCH_PATTERN_requested(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 43, _a);
}

// SIGNAL 44
void MyDimServer::apply_DG_BUNCH_FREQ_requested(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 44, _a);
}

// SIGNAL 45
void MyDimServer::apply_DG_FREQ_OFFSET_requested(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 45, _a);
}

// SIGNAL 46
void MyDimServer::apply_RDH_FEE_ID_requested(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 46, _a);
}

// SIGNAL 47
void MyDimServer::apply_RDH_PAR_requested(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 47, _a);
}

// SIGNAL 48
void MyDimServer::apply_RDH_MAX_PAYLOAD_requested(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 48, _a);
}

// SIGNAL 49
void MyDimServer::apply_RDH_DET_FIELD_requested(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 49, _a);
}

// SIGNAL 50
void MyDimServer::apply_CRU_TRG_COMPARE_DELAY_requested(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 50, _a);
}

// SIGNAL 51
void MyDimServer::apply_BCID_DELAY_requested(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 51, _a);
}

// SIGNAL 52
void MyDimServer::set_TG_PATTERN_requested(quint8 _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 52, _a);
}

// SIGNAL 53
void MyDimServer::set_TG_CONT_VALUE_requested(quint8 _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 53, _a);
}

// SIGNAL 54
void MyDimServer::set_TG_BUNCH_FREQ_requested(quint8 _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 54, _a);
}

// SIGNAL 55
void MyDimServer::set_TG_FREQ_OFFSET_requested(quint8 _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 55, _a);
}

// SIGNAL 56
void MyDimServer::set_DG_TRG_RESPOND_MASK_requested(quint8 _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 56, _a);
}

// SIGNAL 57
void MyDimServer::set_DG_BUNCH_PATTERN_requested(quint8 _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 57, _a);
}

// SIGNAL 58
void MyDimServer::set_DG_BUNCH_FREQ_requested(quint8 _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 58, _a);
}

// SIGNAL 59
void MyDimServer::set_DG_FREQ_OFFSET_requested(quint8 _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 59, _a);
}

// SIGNAL 60
void MyDimServer::set_RDH_FEE_ID_requested(quint8 _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 60, _a);
}

// SIGNAL 61
void MyDimServer::set_RDH_PAR_requested(quint8 _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 61, _a);
}

// SIGNAL 62
void MyDimServer::set_RDH_MAX_PAYLOAD_requested(quint8 _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 62, _a);
}

// SIGNAL 63
void MyDimServer::set_RDH_DET_FIELD_requested(quint8 _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 63, _a);
}

// SIGNAL 64
void MyDimServer::set_CRU_TRG_COMPARE_DELAY_requested(quint8 _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 64, _a);
}

// SIGNAL 65
void MyDimServer::set_BCID_DELAY_requested(quint8 _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 65, _a);
}

// SIGNAL 66
void MyDimServer::apply_ALLtoPM_requested(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 66, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
