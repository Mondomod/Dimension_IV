/** Mondomatic */

#include "Heavy_Dimension_IV.hpp"

#include <new>

#define Context(_c) static_cast<Heavy_Dimension_IV *>(_c)


/*
 * C Functions
 */

extern "C" {
  HV_EXPORT HeavyContextInterface *hv_Dimension_IV_new(double sampleRate) {
    // allocate aligned memory
    void *ptr = hv_malloc(sizeof(Heavy_Dimension_IV));
    // ensure non-null
    if (!ptr) return nullptr;
    // call constructor
    new(ptr) Heavy_Dimension_IV(sampleRate);
    return Context(ptr);
  }

  HV_EXPORT HeavyContextInterface *hv_Dimension_IV_new_with_options(double sampleRate,
      int poolKb, int inQueueKb, int outQueueKb) {
    // allocate aligned memory
    void *ptr = hv_malloc(sizeof(Heavy_Dimension_IV));
    // ensure non-null
    if (!ptr) return nullptr;
    // call constructor
    new(ptr) Heavy_Dimension_IV(sampleRate, poolKb, inQueueKb, outQueueKb);
    return Context(ptr);
  }

  HV_EXPORT void hv_Dimension_IV_free(HeavyContextInterface *instance) {
    // call destructor
    Context(instance)->~Heavy_Dimension_IV();
    // free memory
    hv_free(instance);
  }
} // extern "C"







/*
 * Class Functions
 */

Heavy_Dimension_IV::Heavy_Dimension_IV(double sampleRate, int poolKb, int inQueueKb, int outQueueKb)
    : HeavyContext(sampleRate, poolKb, inQueueKb, outQueueKb) {
  numBytes += sRPole_init(&sRPole_yJkqsOWs);
  numBytes += sDel1_init(&sDel1_bKNb6xfQ);
  numBytes += sTabwrite_init(&sTabwrite_kNrGeE75, &hTable_d584osai);
  numBytes += sRPole_init(&sRPole_B6tizhNi);
  numBytes += sDel1_init(&sDel1_9GYbsUVB);
  numBytes += sTabwrite_init(&sTabwrite_uPTFUHla, &hTable_GQgbfLs6);
  numBytes += sPhasor_k_init(&sPhasor_8EBJRmUP, 0.0f, sampleRate);
  numBytes += sLine_init(&sLine_0aqFSFyw);
  numBytes += sLine_init(&sLine_OeQUql55);
  numBytes += sLine_init(&sLine_Y7u6gEuZ);
  numBytes += sTabhead_init(&sTabhead_KmM0OA08, &hTable_d584osai);
  numBytes += sTabread_init(&sTabread_xrVQDJad, &hTable_d584osai, false);
  numBytes += sTabread_init(&sTabread_Wt7FYrlg, &hTable_d584osai, false);
  numBytes += sRPole_init(&sRPole_9w6sBVI4);
  numBytes += sDel1_init(&sDel1_AqTUIBk1);
  numBytes += sRPole_init(&sRPole_XTNPwsfc);
  numBytes += sDel1_init(&sDel1_MfItPE2Y);
  numBytes += sRPole_init(&sRPole_vZotdVpl);
  numBytes += sLine_init(&sLine_mdjCpycV);
  numBytes += sTabhead_init(&sTabhead_HA6aLQ0T, &hTable_GQgbfLs6);
  numBytes += sTabread_init(&sTabread_iac1o6Pf, &hTable_GQgbfLs6, false);
  numBytes += sTabread_init(&sTabread_JlcE9hWp, &hTable_GQgbfLs6, false);
  numBytes += sRPole_init(&sRPole_2DlLEgje);
  numBytes += sDel1_init(&sDel1_ZMOEznWG);
  numBytes += sRPole_init(&sRPole_rsSmCyDa);
  numBytes += sDel1_init(&sDel1_jgmOg17Y);
  numBytes += sRPole_init(&sRPole_3HgeMWz6);
  numBytes += sLine_init(&sLine_xXJUErlp);
  numBytes += sLine_init(&sLine_KPZGeOQc);
  numBytes += sLine_init(&sLine_gzcbqRWL);
  numBytes += sLine_init(&sLine_eECy3UwU);
  numBytes += sLine_init(&sLine_0loD7HCQ);
  numBytes += sBiquad_init(&sBiquad_s_UDfReyvo);
  numBytes += sRPole_init(&sRPole_D4wPSGtA);
  numBytes += sDel1_init(&sDel1_bzumvG94);
  numBytes += sLine_init(&sLine_wPo7YUmJ);
  numBytes += sLine_init(&sLine_SjrZRvQT);
  numBytes += sLine_init(&sLine_gMqoMLjT);
  numBytes += sLine_init(&sLine_M3vTPHHM);
  numBytes += sLine_init(&sLine_lBcUu4iW);
  numBytes += sBiquad_init(&sBiquad_s_5EaqLgZT);
  numBytes += sRPole_init(&sRPole_F8rRMWAU);
  numBytes += sDel1_init(&sDel1_gu7NQk89);
  numBytes += cDelay_init(this, &cDelay_xHmLwC71, 0.0f);
  numBytes += cDelay_init(this, &cDelay_ezynu2zZ, 0.0f);
  numBytes += hTable_init(&hTable_d584osai, 256);
  numBytes += cDelay_init(this, &cDelay_GuxFICCp, 0.0f);
  numBytes += cDelay_init(this, &cDelay_p6x4YPsM, 0.0f);
  numBytes += hTable_init(&hTable_GQgbfLs6, 256);
  numBytes += cVar_init_s(&cVar_qNyntKA3, "del-1001-LineB");
  numBytes += sVarf_init(&sVarf_TCuf1qBE, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_bHicGd0o, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_12kvfsYV, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_H9funCWt, "del-1001-LineA");
  numBytes += sVarf_init(&sVarf_cU2hJl0C, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_4oeu0cT9, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_05eGEJGO, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_5AgafKcL, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_UNdpukpd, 120.0f);
  numBytes += cBinop_init(&cBinop_wHhzbdYv, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_laWSALbJ, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_4CybKame, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_nmCkcfpl, 120.0f);
  numBytes += cBinop_init(&cBinop_m8RFjsyD, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_SB6IZdtd, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_FN1DUfwf, 8000.0f);
  numBytes += cBinop_init(&cBinop_GHEN39CY, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_gGPZVcvt, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_OJVPUYTj, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_FZ4jlUXs, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_mr5NdLRk, 120.0f);
  numBytes += cBinop_init(&cBinop_TRk5V4pS, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_REV2tlhc, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_VpuSgB3p, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_mIS8wCBu, 120.0f);
  numBytes += cBinop_init(&cBinop_UqmT9fsf, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_LHcnDwRA, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_tP7ms9Z1, 8000.0f);
  numBytes += cBinop_init(&cBinop_j1wTKpVB, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_J25kRHdF, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_hXYkM96z, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_65j8LF0Q, 0.0f);
  numBytes += cBinop_init(&cBinop_7nWhj02F, 44100.0f); // __div
  numBytes += cBinop_init(&cBinop_mxPaElou, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_Njv0FtIU, 0.0f);
  numBytes += cBinop_init(&cBinop_CkOss9Sp, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_TeeZ0VC9, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_I8SX8Kk6, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_hUcs8xIL, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_V8ItgYPl, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_W6vLUkn4, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_Pzgw7xSO, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_O0HDjMhc, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_nsZac7lJ, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_TbIGE1qf, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_sHWdlj1v, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_ZHFOUfL5, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_upxWc9cR, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_T7UA2EFM, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_4hUjL8bH, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_S46aHneN, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_ZA2gFl3W, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_B3FwqVoJ, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_4PClvS35, 0.0f); // __add
  numBytes += cVar_init_f(&cVar_jsSqGdqy, 120.0f);
  numBytes += cVar_init_f(&cVar_diwjWQ7G, 10.0f);
  numBytes += cVar_init_f(&cVar_kEVDppdZ, 1.12f);
  numBytes += cBinop_init(&cBinop_IMfq9w2V, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_QcLIWWlN, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_So7uOCn8, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_PttLenyj, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_oksGr1or, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_Q5AHbu4B, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_awT8munB, 0.0f); // __pow
  numBytes += cBinop_init(&cBinop_JVBQ3Ozn, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_bVMq2OdI, 44100.0f); // __div
  numBytes += cBinop_init(&cBinop_v6PvByk4, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_x9CGKPAa, 0.0f);
  numBytes += cBinop_init(&cBinop_mHxDAfqN, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_5uZARbGc, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_ULN8aVde, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_bDJdX0W0, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_4OWd75vm, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_5jmOTYMt, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_ihrV1zo3, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_0CBOLA3d, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_2bTOGfvW, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_HzmMY42T, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_wn138dsI, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_MGe94hVu, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_t7qvBzBt, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_fAOGFhSt, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_dgSz6T9g, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_OFOwn2rG, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_ohcMBPrs, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_AwvEYPy0, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_fIpbPDQy, 0.0f); // __add
  numBytes += cVar_init_f(&cVar_AV4q85Rh, 120.0f);
  numBytes += cVar_init_f(&cVar_4XRiQrU3, 10.0f);
  numBytes += cVar_init_f(&cVar_J6800kbr, 1.12f);
  numBytes += cBinop_init(&cBinop_rgPI5FzF, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_krb2cUdC, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_VSY0S014, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_EqcICuWj, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_ZYAuuNx1, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_1Tq6gAI9, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_13vWqUPA, 0.0f); // __pow
  numBytes += cBinop_init(&cBinop_I9Ceerl8, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_QCi4FuVN, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_PGfM5dM0, 3.0f);
  numBytes += cBinop_init(&cBinop_5CGfnGsu, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_i6ccyuZr, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_AT9DVWJ1, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_gHBXrADA, 3.0f);
  numBytes += cBinop_init(&cBinop_Dxv6qrna, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_0UK0A91d, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_RCpm0g1F, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_W67IyX8v, 3.0f);
  numBytes += cBinop_init(&cBinop_GBO8ZwnA, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_pstujCpM, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_GAUsqdOy, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_kt8qFGOL, 3.0f);
  numBytes += cBinop_init(&cBinop_Hbt8C2cY, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_xvxdu86S, 0.0f, 0.0f, false);
  numBytes += cPack_init(&cPack_c9tEtBnm, 2, 0.0f, 20.0f);
  numBytes += cPack_init(&cPack_oubHUGQi, 2, 0.0f, 20.0f);
  numBytes += cPack_init(&cPack_c38Kjo0h, 2, 0.0f, 20.0f);
  numBytes += cPack_init(&cPack_vNW7GnRq, 2, 0.0f, 20.0f);
  numBytes += sVarf_init(&sVarf_E4FRy0sH, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_n78mI8e1, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_ssVPuSfX, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_TAKDbpYv, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_SqNh46ez, 0.5f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_LpkHT1bh, 0.5f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_ODRqlTpl, 0.7f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_D4ODvP70, 0.7f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_i4RI4iwR, 1.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_qc8xQRU0, 1.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_NovCeAsg, 0.8f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_D8Y0gDHD, 0.8f, 0.0f, false);
  
  // schedule a message to trigger all loadbangs via the __hv_init receiver
  scheduleMessageForReceiver(0xCE5CC65B, msg_initWithBang(HV_MESSAGE_ON_STACK(1), 0));
}

Heavy_Dimension_IV::~Heavy_Dimension_IV() {
  hTable_free(&hTable_d584osai);
  hTable_free(&hTable_GQgbfLs6);
  cPack_free(&cPack_c9tEtBnm);
  cPack_free(&cPack_oubHUGQi);
  cPack_free(&cPack_c38Kjo0h);
  cPack_free(&cPack_vNW7GnRq);
}

HvTable *Heavy_Dimension_IV::getTableForHash(hv_uint32_t tableHash) {switch (tableHash) {
    case 0x89F43834: return &hTable_d584osai; // del-1001-LineA
    case 0xE753F82B: return &hTable_GQgbfLs6; // del-1001-LineB
    default: return nullptr;
  }
}

void Heavy_Dimension_IV::scheduleMessageForReceiver(hv_uint32_t receiverHash, HvMessage *m) {
  switch (receiverHash) {
    case 0xBA57CCA1: { // LFObase
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_DojPRBMy_sendMessage);
      break;
    }
    case 0xC43489A7: { // LFOchange
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_8EuBvbt0_sendMessage);
      break;
    }
    case 0x9ADF5716: { // 1097-A
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_F6ciV941_sendMessage);
      break;
    }
    case 0x6373C1AD: { // 1097-sqrtA-alpha-2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_J5iExtZf_sendMessage);
      break;
    }
    case 0x7F559C24: { // 1097-wcos
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_0EqsUe2W_sendMessage);
      break;
    }
    case 0xD372982E: { // 1097-wsin
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_X1nRU1Am_sendMessage);
      break;
    }
    case 0x716BD636: { // 1141-A
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_2f48L1OJ_sendMessage);
      break;
    }
    case 0x75C10660: { // 1141-sqrtA-alpha-2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_WGhQqN8D_sendMessage);
      break;
    }
    case 0xFF3BBBD1: { // 1141-wcos
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_E8LRXCtP_sendMessage);
      break;
    }
    case 0x5E8CFA8A: { // 1141-wsin
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_XRqLXnxz_sendMessage);
      break;
    }
    case 0xCE5CC65B: { // __hv_init
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Hqn4cPu6_sendMessage);
      break;
    }
    case 0xD342C35: { // antiL
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_dqpm6hd3_sendMessage);
      break;
    }
    case 0x6365CD33: { // antiR
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_5jrppcBk_sendMessage);
      break;
    }
    case 0x899A1AC4: { // antiphase
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_J5aGE3Or_sendMessage);
      break;
    }
    case 0x2A709A4C: { // combo
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_nLVGpZPm_sendMessage);
      break;
    }
    case 0x4612B591: { // dimension
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_lt9stiv3_sendMessage);
      break;
    }
    case 0x4FFE8B0E: { // four
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_9k43IDLo_sendMessage);
      break;
    }
    case 0x76F157D3: { // one
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_HUAGuLaH_sendMessage);
      break;
    }
    case 0x97419B4D: { // three
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_O0XUVNQQ_sendMessage);
      break;
    }
    case 0x578A346C: { // two
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_R2nMPido_sendMessage);
      break;
    }
    default: return;
  }
}

int Heavy_Dimension_IV::getParameterInfo(int index, HvParameterInfo *info) {
  if (info != nullptr) {
    switch (index) {
      case 0: {
        info->name = "antiphase";
        info->hash = 0x899A1AC4;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 2.0f;
        info->defaultVal = 1.0f;
        break;
      }
      case 1: {
        info->name = "dimension";
        info->hash = 0x4612B591;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 1.0f;
        info->maxVal = 4.0f;
        info->defaultVal = 1.0f;
        break;
      }
      default: {
        info->name = "invalid parameter index";
        info->hash = 0;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 0.0f;
        info->defaultVal = 0.0f;
        break;
      }
    }
  }
  return 2;
}



/*
 * Send Function Implementations
 */


void Heavy_Dimension_IV::cMsg_WFBa3wZq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_aW5CUqh1_sendMessage);
}

void Heavy_Dimension_IV::cSystem_aW5CUqh1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_q6sa3MGu_sendMessage);
}

void Heavy_Dimension_IV::cDelay_xHmLwC71_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_xHmLwC71, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_ezynu2zZ, 0, m, &cDelay_ezynu2zZ_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_xHmLwC71, 0, m, &cDelay_xHmLwC71_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_kNrGeE75, 1, m, NULL);
}

void Heavy_Dimension_IV::cDelay_ezynu2zZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_ezynu2zZ, m);
  cMsg_sUm25uXO_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cSwitchcase_bfJ7olq8_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_IDCQm4K7_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Dimension_IV::cBinop_dLymxlJT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_9mzl8gj6_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::hTable_d584osai_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_wYNpbCYL_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_xHmLwC71, 2, m, &cDelay_xHmLwC71_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_C56Jxdpp_sendMessage);
}

void Heavy_Dimension_IV::cMsg_9mzl8gj6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_d584osai, 0, m, &hTable_d584osai_sendMessage);
}

void Heavy_Dimension_IV::cBinop_q6sa3MGu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 50.0f, 0, m, &cBinop_dLymxlJT_sendMessage);
}

void Heavy_Dimension_IV::cMsg_sUm25uXO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_d584osai, 0, m, &hTable_d584osai_sendMessage);
}

void Heavy_Dimension_IV::cCast_C56Jxdpp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_xHmLwC71, 0, m, &cDelay_xHmLwC71_sendMessage);
}

void Heavy_Dimension_IV::cMsg_wYNpbCYL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_ezynu2zZ, 2, m, &cDelay_ezynu2zZ_sendMessage);
}

void Heavy_Dimension_IV::cMsg_IDCQm4K7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_kNrGeE75, 1, m, NULL);
}

void Heavy_Dimension_IV::cMsg_0wgUPipF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_BCoECvPv_sendMessage);
}

void Heavy_Dimension_IV::cSystem_BCoECvPv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_gIt5gaBp_sendMessage);
}

void Heavy_Dimension_IV::cDelay_GuxFICCp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_GuxFICCp, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_p6x4YPsM, 0, m, &cDelay_p6x4YPsM_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_GuxFICCp, 0, m, &cDelay_GuxFICCp_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_uPTFUHla, 1, m, NULL);
}

void Heavy_Dimension_IV::cDelay_p6x4YPsM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_p6x4YPsM, m);
  cMsg_IrkB5lEu_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cSwitchcase_ZFnWNZDB_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_cYBQIy5m_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Dimension_IV::cBinop_n4qLVOll_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_CQN6Fllu_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::hTable_GQgbfLs6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_yiJcKjLt_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_GuxFICCp, 2, m, &cDelay_GuxFICCp_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_APLG9Tq3_sendMessage);
}

void Heavy_Dimension_IV::cMsg_CQN6Fllu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_GQgbfLs6, 0, m, &hTable_GQgbfLs6_sendMessage);
}

void Heavy_Dimension_IV::cBinop_gIt5gaBp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 50.0f, 0, m, &cBinop_n4qLVOll_sendMessage);
}

void Heavy_Dimension_IV::cMsg_IrkB5lEu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_GQgbfLs6, 0, m, &hTable_GQgbfLs6_sendMessage);
}

void Heavy_Dimension_IV::cCast_APLG9Tq3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_GuxFICCp, 0, m, &cDelay_GuxFICCp_sendMessage);
}

void Heavy_Dimension_IV::cMsg_yiJcKjLt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_p6x4YPsM, 2, m, &cDelay_p6x4YPsM_sendMessage);
}

void Heavy_Dimension_IV::cMsg_cYBQIy5m_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_uPTFUHla, 1, m, NULL);
}

void Heavy_Dimension_IV::cMsg_p19UgGcW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_GtrXDYml_sendMessage);
}

void Heavy_Dimension_IV::cSystem_GtrXDYml_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_oXA2alEk_sendMessage);
}

void Heavy_Dimension_IV::cVar_qNyntKA3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_6SotWGWL_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cSystem_Px6cuUKv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_zvWbdVNa_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_TCuf1qBE, m);
}

void Heavy_Dimension_IV::cBinop_oXA2alEk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_bHicGd0o, m);
}

void Heavy_Dimension_IV::cMsg_6SotWGWL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_Px6cuUKv_sendMessage);
}

void Heavy_Dimension_IV::cBinop_zvWbdVNa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_12kvfsYV, m);
}

void Heavy_Dimension_IV::cMsg_utZKs9Jn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_DZYwITZ3_sendMessage);
}

void Heavy_Dimension_IV::cSystem_DZYwITZ3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_Dae6YPjW_sendMessage);
}

void Heavy_Dimension_IV::cVar_H9funCWt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_rHZGj0Dp_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cSystem_MqDeAeYF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_I1tELXM9_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_cU2hJl0C, m);
}

void Heavy_Dimension_IV::cBinop_Dae6YPjW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_4oeu0cT9, m);
}

void Heavy_Dimension_IV::cMsg_rHZGj0Dp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_MqDeAeYF_sendMessage);
}

void Heavy_Dimension_IV::cBinop_I1tELXM9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_05eGEJGO, m);
}

void Heavy_Dimension_IV::cBinop_GESQPTLA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_CdVoDWN4_sendMessage);
}

void Heavy_Dimension_IV::cBinop_CdVoDWN4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_Srlu8Dn0_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_U0oV832E_sendMessage);
}

void Heavy_Dimension_IV::cVar_UNdpukpd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_V3Z4SIwv_sendMessage);
}

void Heavy_Dimension_IV::cMsg_p0rtoJcK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_FbqrsWw6_sendMessage);
}

void Heavy_Dimension_IV::cSystem_FbqrsWw6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_wHhzbdYv, HV_BINOP_DIVIDE, 1, m, &cBinop_wHhzbdYv_sendMessage);
}

void Heavy_Dimension_IV::cBinop_Srlu8Dn0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_HTJtTani_sendMessage);
}

void Heavy_Dimension_IV::cBinop_HTJtTani_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_laWSALbJ, m);
}

void Heavy_Dimension_IV::cMsg_JSdddPTW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_5PFrAp5k_sendMessage);
}

void Heavy_Dimension_IV::cBinop_5PFrAp5k_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_GESQPTLA_sendMessage);
}

void Heavy_Dimension_IV::cBinop_U0oV832E_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_5AgafKcL, m);
}

void Heavy_Dimension_IV::cBinop_V3Z4SIwv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_RclG6UPf_sendMessage);
}

void Heavy_Dimension_IV::cBinop_RclG6UPf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_wHhzbdYv, HV_BINOP_DIVIDE, 0, m, &cBinop_wHhzbdYv_sendMessage);
}

void Heavy_Dimension_IV::cBinop_wHhzbdYv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_JSdddPTW_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cBinop_yZmWG1Sb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_dPchIcbW_sendMessage);
}

void Heavy_Dimension_IV::cBinop_dPchIcbW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_iOdd8KPq_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_QWsOvp2y_sendMessage);
}

void Heavy_Dimension_IV::cVar_nmCkcfpl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_O9PidjU9_sendMessage);
}

void Heavy_Dimension_IV::cMsg_I5EfyBrf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_zxnIYJko_sendMessage);
}

void Heavy_Dimension_IV::cSystem_zxnIYJko_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_m8RFjsyD, HV_BINOP_DIVIDE, 1, m, &cBinop_m8RFjsyD_sendMessage);
}

void Heavy_Dimension_IV::cBinop_iOdd8KPq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_b56yia6P_sendMessage);
}

void Heavy_Dimension_IV::cBinop_b56yia6P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_SB6IZdtd, m);
}

void Heavy_Dimension_IV::cMsg_LiOTpTRN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_u8feyEt6_sendMessage);
}

void Heavy_Dimension_IV::cBinop_u8feyEt6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_yZmWG1Sb_sendMessage);
}

void Heavy_Dimension_IV::cBinop_QWsOvp2y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_4CybKame, m);
}

void Heavy_Dimension_IV::cBinop_O9PidjU9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_HdJ7mFaW_sendMessage);
}

void Heavy_Dimension_IV::cBinop_HdJ7mFaW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_m8RFjsyD, HV_BINOP_DIVIDE, 0, m, &cBinop_m8RFjsyD_sendMessage);
}

void Heavy_Dimension_IV::cBinop_m8RFjsyD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_LiOTpTRN_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cVar_FN1DUfwf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_GHEN39CY, HV_BINOP_MULTIPLY, 0, m, &cBinop_GHEN39CY_sendMessage);
}

void Heavy_Dimension_IV::cMsg_Z2KQ6zZ7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_Nt1S9rEb_sendMessage);
}

void Heavy_Dimension_IV::cSystem_Nt1S9rEb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_IX6axZFj_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cBinop_GHEN39CY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_wLGYozTZ_sendMessage);
}

void Heavy_Dimension_IV::cBinop_hYOXP09y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_GHEN39CY, HV_BINOP_MULTIPLY, 1, m, &cBinop_GHEN39CY_sendMessage);
}

void Heavy_Dimension_IV::cMsg_IX6axZFj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_hYOXP09y_sendMessage);
}

void Heavy_Dimension_IV::cBinop_wLGYozTZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_5HwgZEa9_sendMessage);
}

void Heavy_Dimension_IV::cBinop_5HwgZEa9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_go2nrpiW_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_OJVPUYTj, m);
}

void Heavy_Dimension_IV::cBinop_go2nrpiW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_gGPZVcvt, m);
}

void Heavy_Dimension_IV::cBinop_zqk02RN7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_VYaficbq_sendMessage);
}

void Heavy_Dimension_IV::cBinop_VYaficbq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_arSjRIU1_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_ehgS7r61_sendMessage);
}

void Heavy_Dimension_IV::cVar_mr5NdLRk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_F7kZWSNk_sendMessage);
}

void Heavy_Dimension_IV::cMsg_w9gNYUcg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_apTBrSZC_sendMessage);
}

void Heavy_Dimension_IV::cSystem_apTBrSZC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_TRk5V4pS, HV_BINOP_DIVIDE, 1, m, &cBinop_TRk5V4pS_sendMessage);
}

void Heavy_Dimension_IV::cBinop_arSjRIU1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_H1LPdEns_sendMessage);
}

void Heavy_Dimension_IV::cBinop_H1LPdEns_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_REV2tlhc, m);
}

void Heavy_Dimension_IV::cMsg_EMfJDRbc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_FAUPo2us_sendMessage);
}

void Heavy_Dimension_IV::cBinop_FAUPo2us_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_zqk02RN7_sendMessage);
}

void Heavy_Dimension_IV::cBinop_ehgS7r61_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_FZ4jlUXs, m);
}

void Heavy_Dimension_IV::cBinop_F7kZWSNk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_iagOXqfG_sendMessage);
}

void Heavy_Dimension_IV::cBinop_iagOXqfG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_TRk5V4pS, HV_BINOP_DIVIDE, 0, m, &cBinop_TRk5V4pS_sendMessage);
}

void Heavy_Dimension_IV::cBinop_TRk5V4pS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_EMfJDRbc_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cBinop_jC7z0nxC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_8haGyWJ4_sendMessage);
}

void Heavy_Dimension_IV::cBinop_8haGyWJ4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_zm2nta8x_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_5TSTDxVX_sendMessage);
}

void Heavy_Dimension_IV::cVar_mIS8wCBu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_B9taHB2l_sendMessage);
}

void Heavy_Dimension_IV::cMsg_VY0rN2bh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_3UY15acu_sendMessage);
}

void Heavy_Dimension_IV::cSystem_3UY15acu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_UqmT9fsf, HV_BINOP_DIVIDE, 1, m, &cBinop_UqmT9fsf_sendMessage);
}

void Heavy_Dimension_IV::cBinop_zm2nta8x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_Tx3ueZ6h_sendMessage);
}

void Heavy_Dimension_IV::cBinop_Tx3ueZ6h_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_LHcnDwRA, m);
}

void Heavy_Dimension_IV::cMsg_kuSqwlcL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_kuxqOLlJ_sendMessage);
}

void Heavy_Dimension_IV::cBinop_kuxqOLlJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_jC7z0nxC_sendMessage);
}

void Heavy_Dimension_IV::cBinop_5TSTDxVX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_VpuSgB3p, m);
}

void Heavy_Dimension_IV::cBinop_B9taHB2l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_LQxTadJL_sendMessage);
}

void Heavy_Dimension_IV::cBinop_LQxTadJL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_UqmT9fsf, HV_BINOP_DIVIDE, 0, m, &cBinop_UqmT9fsf_sendMessage);
}

void Heavy_Dimension_IV::cBinop_UqmT9fsf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_kuSqwlcL_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cVar_tP7ms9Z1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_j1wTKpVB, HV_BINOP_MULTIPLY, 0, m, &cBinop_j1wTKpVB_sendMessage);
}

void Heavy_Dimension_IV::cMsg_X8e0Say7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_i9fz0wHC_sendMessage);
}

void Heavy_Dimension_IV::cSystem_i9fz0wHC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_zdJn4nb1_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cBinop_j1wTKpVB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_RjyhhU3p_sendMessage);
}

void Heavy_Dimension_IV::cBinop_0jpoBBPs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_j1wTKpVB, HV_BINOP_MULTIPLY, 1, m, &cBinop_j1wTKpVB_sendMessage);
}

void Heavy_Dimension_IV::cMsg_zdJn4nb1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_0jpoBBPs_sendMessage);
}

void Heavy_Dimension_IV::cBinop_RjyhhU3p_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_DVDlxvCi_sendMessage);
}

void Heavy_Dimension_IV::cBinop_DVDlxvCi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_FjahBf9N_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_hXYkM96z, m);
}

void Heavy_Dimension_IV::cBinop_FjahBf9N_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_J25kRHdF, m);
}

void Heavy_Dimension_IV::cVar_65j8LF0Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_ZfVrlSKl_sendMessage);
}

void Heavy_Dimension_IV::cSwitchcase_r2N5BXcO_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_RmUVGn5b_sendMessage);
      break;
    }
    case 0x40000000: { // "2.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_IkYflTaI_sendMessage);
      break;
    }
    case 0x40400000: { // "3.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_K1VtFVgm_sendMessage);
      break;
    }
    case 0x40800000: { // "4.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_4nYxpx5b_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Dimension_IV::cCast_RmUVGn5b_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_Cc8QJqUx_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cCast_IkYflTaI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_wg5z2rNF_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cCast_K1VtFVgm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_2kesTgWZ_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cCast_4nYxpx5b_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_9p9Y1Bk6_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cMsg_4GMxgvPA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_xXJUErlp, 0, m, NULL);
}

void Heavy_Dimension_IV::cMsg_01ggos7b_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_KPZGeOQc, 0, m, NULL);
}

void Heavy_Dimension_IV::cMsg_aJxD4WJx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_gzcbqRWL, 0, m, NULL);
}

void Heavy_Dimension_IV::cMsg_MPkV4IiU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_eECy3UwU, 0, m, NULL);
}

void Heavy_Dimension_IV::cMsg_wDjGelSH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_0loD7HCQ, 0, m, NULL);
}

void Heavy_Dimension_IV::cMsg_drkbRkyc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_n1jc7N4I_sendMessage);
}

void Heavy_Dimension_IV::cSystem_n1jc7N4I_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_7nWhj02F, HV_BINOP_DIVIDE, 1, m, &cBinop_7nWhj02F_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ckr2SeLd_sendMessage);
}

void Heavy_Dimension_IV::cUnop_pxKSvGdN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 8.0f, 0, m, &cBinop_Zj1WiP1Q_sendMessage);
}

void Heavy_Dimension_IV::cMsg_slRCWUUi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cUnop_onMessage(_c, HV_UNOP_ATAN, m, &cUnop_pxKSvGdN_sendMessage);
}

void Heavy_Dimension_IV::cBinop_Zj1WiP1Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_7nWhj02F, HV_BINOP_DIVIDE, 0, m, &cBinop_7nWhj02F_sendMessage);
}

void Heavy_Dimension_IV::cCast_ckr2SeLd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_slRCWUUi_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cBinop_7nWhj02F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_mxPaElou, HV_BINOP_MULTIPLY, 1, m, &cBinop_mxPaElou_sendMessage);
}

void Heavy_Dimension_IV::cBinop_mxPaElou_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Xs5ZqFMt_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_uw4ZAhOO_sendMessage);
}

void Heavy_Dimension_IV::cUnop_u2MTloqB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_5JCNLSYD_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cUnop_vuizH48B_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_VLtq8899_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cBinop_OtD5FoIC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 20.0f, 0, m, &cBinop_xtaLYTRS_sendMessage);
}

void Heavy_Dimension_IV::cBinop_xtaLYTRS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_mxPaElou, HV_BINOP_MULTIPLY, 0, m, &cBinop_mxPaElou_sendMessage);
}

void Heavy_Dimension_IV::cBinop_uhYG1Qyn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.1f, 0, m, &cBinop_PCAsc0jE_sendMessage);
}

void Heavy_Dimension_IV::cBinop_PCAsc0jE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ms0HKU47_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cVar_Njv0FtIU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_w85Lr4sA_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cBinop_ZMk0avUU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_JsHZCfc0_sendMessage);
}

void Heavy_Dimension_IV::cBinop_CkOss9Sp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_I8SX8Kk6, HV_BINOP_ADD, 0, m, &cBinop_I8SX8Kk6_sendMessage);
}

void Heavy_Dimension_IV::cBinop_GFKstdMH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_I8SX8Kk6, HV_BINOP_ADD, 1, m, &cBinop_I8SX8Kk6_sendMessage);
}

void Heavy_Dimension_IV::cCast_ShysAkK7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_TeeZ0VC9, HV_BINOP_MULTIPLY, 1, m, &cBinop_TeeZ0VC9_sendMessage);
}

void Heavy_Dimension_IV::cCast_rsBLe81t_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_ZMk0avUU_sendMessage);
}

void Heavy_Dimension_IV::cCast_TYe7YUR5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_GFKstdMH_sendMessage);
}

void Heavy_Dimension_IV::cBinop_TeeZ0VC9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_QcLIWWlN, HV_BINOP_MULTIPLY, 1, m, &cBinop_QcLIWWlN_sendMessage);
}

void Heavy_Dimension_IV::cBinop_I8SX8Kk6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_hUcs8xIL, HV_BINOP_ADD, 0, m, &cBinop_hUcs8xIL_sendMessage);
}

void Heavy_Dimension_IV::cBinop_JsHZCfc0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_CkOss9Sp, HV_BINOP_MULTIPLY, 1, m, &cBinop_CkOss9Sp_sendMessage);
}

void Heavy_Dimension_IV::cBinop_hUcs8xIL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_TeeZ0VC9, HV_BINOP_MULTIPLY, 0, m, &cBinop_TeeZ0VC9_sendMessage);
}

void Heavy_Dimension_IV::cBinop_RpjVuMpC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Pzgw7xSO, HV_BINOP_ADD, 1, m, &cBinop_Pzgw7xSO_sendMessage);
}

void Heavy_Dimension_IV::cBinop_Y0alFD62_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_FG0oZfvs_sendMessage);
}

void Heavy_Dimension_IV::cBinop_V8ItgYPl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Pzgw7xSO, HV_BINOP_ADD, 0, m, &cBinop_Pzgw7xSO_sendMessage);
}

void Heavy_Dimension_IV::cCast_X5iqPVCh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_Y0alFD62_sendMessage);
}

void Heavy_Dimension_IV::cCast_1Prari8S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_RpjVuMpC_sendMessage);
}

void Heavy_Dimension_IV::cCast_tRnuma2n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_z8ZaLxyi_sendMessage);
}

void Heavy_Dimension_IV::cBinop_z8ZaLxyi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_W6vLUkn4, HV_BINOP_MULTIPLY, 1, m, &cBinop_W6vLUkn4_sendMessage);
}

void Heavy_Dimension_IV::cBinop_W6vLUkn4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_So7uOCn8, HV_BINOP_MULTIPLY, 1, m, &cBinop_So7uOCn8_sendMessage);
}

void Heavy_Dimension_IV::cBinop_Pzgw7xSO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_W6vLUkn4, HV_BINOP_MULTIPLY, 0, m, &cBinop_W6vLUkn4_sendMessage);
}

void Heavy_Dimension_IV::cBinop_FG0oZfvs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_V8ItgYPl, HV_BINOP_MULTIPLY, 1, m, &cBinop_V8ItgYPl_sendMessage);
}

void Heavy_Dimension_IV::cBinop_DN1SMaf4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_9ql3kzGv_sendMessage);
}

void Heavy_Dimension_IV::cBinop_O0HDjMhc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_nsZac7lJ, HV_BINOP_ADD, 0, m, &cBinop_nsZac7lJ_sendMessage);
}

void Heavy_Dimension_IV::cBinop_nsZac7lJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_TbIGE1qf, HV_BINOP_SUBTRACT, 0, m, &cBinop_TbIGE1qf_sendMessage);
}

void Heavy_Dimension_IV::cBinop_cl5O6DOG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_nsZac7lJ, HV_BINOP_ADD, 1, m, &cBinop_nsZac7lJ_sendMessage);
}

void Heavy_Dimension_IV::cBinop_TbIGE1qf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_sHWdlj1v, HV_BINOP_MULTIPLY, 0, m, &cBinop_sHWdlj1v_sendMessage);
}

void Heavy_Dimension_IV::cCast_1JDiMDql_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_sHWdlj1v, HV_BINOP_MULTIPLY, 1, m, &cBinop_sHWdlj1v_sendMessage);
}

void Heavy_Dimension_IV::cCast_lthgOs9c_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_DN1SMaf4_sendMessage);
}

void Heavy_Dimension_IV::cCast_CDmsJayJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_cl5O6DOG_sendMessage);
}

void Heavy_Dimension_IV::cBinop_sHWdlj1v_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_PttLenyj, HV_BINOP_MULTIPLY, 1, m, &cBinop_PttLenyj_sendMessage);
}

void Heavy_Dimension_IV::cBinop_9ql3kzGv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_O0HDjMhc, HV_BINOP_MULTIPLY, 1, m, &cBinop_O0HDjMhc_sendMessage);
}

void Heavy_Dimension_IV::cBinop_tlHGLnqW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ZHFOUfL5, HV_BINOP_ADD, 1, m, &cBinop_ZHFOUfL5_sendMessage);
}

void Heavy_Dimension_IV::cBinop_ZHFOUfL5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -2.0f, 0, m, &cBinop_5Q61V04I_sendMessage);
}

void Heavy_Dimension_IV::cBinop_hZeVajfe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_upxWc9cR, HV_BINOP_MULTIPLY, 1, m, &cBinop_upxWc9cR_sendMessage);
}

void Heavy_Dimension_IV::cBinop_upxWc9cR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ZHFOUfL5, HV_BINOP_ADD, 0, m, &cBinop_ZHFOUfL5_sendMessage);
}

void Heavy_Dimension_IV::cCast_G32UQDMK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_hZeVajfe_sendMessage);
}

void Heavy_Dimension_IV::cCast_VHteAef5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_tlHGLnqW_sendMessage);
}

void Heavy_Dimension_IV::cBinop_5Q61V04I_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_oksGr1or, HV_BINOP_MULTIPLY, 1, m, &cBinop_oksGr1or_sendMessage);
}

void Heavy_Dimension_IV::cBinop_x0LByhgp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_T7UA2EFM, HV_BINOP_MULTIPLY, 1, m, &cBinop_T7UA2EFM_sendMessage);
}

void Heavy_Dimension_IV::cBinop_T7UA2EFM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_4hUjL8bH, HV_BINOP_ADD, 0, m, &cBinop_4hUjL8bH_sendMessage);
}

void Heavy_Dimension_IV::cBinop_4hUjL8bH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_S46aHneN, HV_BINOP_SUBTRACT, 0, m, &cBinop_S46aHneN_sendMessage);
}

void Heavy_Dimension_IV::cBinop_J0JVRGDL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_4hUjL8bH, HV_BINOP_ADD, 1, m, &cBinop_4hUjL8bH_sendMessage);
}

void Heavy_Dimension_IV::cCast_YXv8rKfW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_J0JVRGDL_sendMessage);
}

void Heavy_Dimension_IV::cCast_V5cHG0iy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_x0LByhgp_sendMessage);
}

void Heavy_Dimension_IV::cBinop_S46aHneN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Q5AHbu4B, HV_BINOP_MULTIPLY, 1, m, &cBinop_Q5AHbu4B_sendMessage);
}

void Heavy_Dimension_IV::cBinop_hVh8vgyI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, -24.0f, 0, m, &cBinop_ikKehIyy_sendMessage);
}

void Heavy_Dimension_IV::cBinop_ikKehIyy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 40.0f, 0, m, &cBinop_q3YZYW7Q_sendMessage);
}

void Heavy_Dimension_IV::cBinop_PyC7ZIFh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ZA2gFl3W, HV_BINOP_MULTIPLY, 1, m, &cBinop_ZA2gFl3W_sendMessage);
}

void Heavy_Dimension_IV::cBinop_ZA2gFl3W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_B3FwqVoJ, HV_BINOP_ADD, 0, m, &cBinop_B3FwqVoJ_sendMessage);
}

void Heavy_Dimension_IV::cBinop_B3FwqVoJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_4PClvS35, HV_BINOP_ADD, 0, m, &cBinop_4PClvS35_sendMessage);
}

void Heavy_Dimension_IV::cBinop_9rErwQOa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_B3FwqVoJ, HV_BINOP_ADD, 1, m, &cBinop_B3FwqVoJ_sendMessage);
}

void Heavy_Dimension_IV::cCast_Y1iKSR0h_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_9rErwQOa_sendMessage);
}

void Heavy_Dimension_IV::cCast_xBjPP60g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_PyC7ZIFh_sendMessage);
}

void Heavy_Dimension_IV::cBinop_4PClvS35_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Njv0FtIU, 1, m, &cVar_Njv0FtIU_sendMessage);
}

void Heavy_Dimension_IV::cVar_jsSqGdqy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_tD74JLJf_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 20000.0f, 0, m, &cBinop_OtD5FoIC_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_084AbyUJ_sendMessage);
}

void Heavy_Dimension_IV::cVar_diwjWQ7G_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 100.0f, 0, m, &cBinop_uhYG1Qyn_sendMessage);
}

void Heavy_Dimension_IV::cVar_kEVDppdZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 24.0f, 0, m, &cBinop_hVh8vgyI_sendMessage);
}

void Heavy_Dimension_IV::cUnop_9HfKc3an_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_F38XQOhw_sendMessage);
}

void Heavy_Dimension_IV::cCast_Xs5ZqFMt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SIN, m, &cUnop_u2MTloqB_sendMessage);
}

void Heavy_Dimension_IV::cCast_uw4ZAhOO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_vuizH48B_sendMessage);
}

void Heavy_Dimension_IV::cSend_5JCNLSYD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_X1nRU1Am_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cSend_VLtq8899_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_0EqsUe2W_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cSend_yLTVw4W3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Dimension_IV::cMsg_ms0HKU47_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_zRBrD9jx_sendMessage);
}

void Heavy_Dimension_IV::cBinop_zRBrD9jx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_IMfq9w2V, HV_BINOP_MULTIPLY, 1, m, &cBinop_IMfq9w2V_sendMessage);
}

void Heavy_Dimension_IV::cBinop_IMfq9w2V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_ArN51F5T_sendMessage);
}

void Heavy_Dimension_IV::cBinop_ArN51F5T_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_q5vURpJ2_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_SrIgFSHn_sendMessage);
}

void Heavy_Dimension_IV::cMsg_w85Lr4sA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_T4xHcPlw_sendMessage);
}

void Heavy_Dimension_IV::cBinop_T4xHcPlw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_UiJ90pIJ_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_e5Y0W46q_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_jTrI7FyA_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_MhONM58Q_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_95m9lRxy_sendMessage);
}

void Heavy_Dimension_IV::cBinop_QcLIWWlN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_4GMxgvPA_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cBinop_So7uOCn8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_01ggos7b_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cBinop_PttLenyj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_aJxD4WJx_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cBinop_oksGr1or_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_MPkV4IiU_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cBinop_Q5AHbu4B_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_wDjGelSH_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cCast_Rcg55Uaf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_diwjWQ7G, 1, m, &cVar_diwjWQ7G_sendMessage);
}

void Heavy_Dimension_IV::cCast_gul4mIu7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_jsSqGdqy, 0, m, &cVar_jsSqGdqy_sendMessage);
}

void Heavy_Dimension_IV::cCast_084AbyUJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Njv0FtIU, 0, m, &cVar_Njv0FtIU_sendMessage);
}

void Heavy_Dimension_IV::cCast_tD74JLJf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_diwjWQ7G, 0, m, &cVar_diwjWQ7G_sendMessage);
}

void Heavy_Dimension_IV::cSend_FEsHmdGV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_F6ciV941_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cBinop_q3YZYW7Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_4mOiNShw_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_E7sfHYK2_sendMessage);
}

void Heavy_Dimension_IV::cCast_E7sfHYK2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Z5ZjbfHF_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cCast_4mOiNShw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_awT8munB, HV_BINOP_POW, 1, m, &cBinop_awT8munB_sendMessage);
}

void Heavy_Dimension_IV::cMsg_Z5ZjbfHF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_awT8munB, HV_BINOP_POW, 0, m, &cBinop_awT8munB_sendMessage);
}

void Heavy_Dimension_IV::cBinop_awT8munB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_33DIFwfu_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_S5zlKeLV_sendMessage);
}

void Heavy_Dimension_IV::cCast_rtInSWOM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_jsSqGdqy, 0, m, &cVar_jsSqGdqy_sendMessage);
}

void Heavy_Dimension_IV::cCast_2z2ceBb9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_kEVDppdZ, 0, m, &cVar_kEVDppdZ_sendMessage);
}

void Heavy_Dimension_IV::cCast_Rn5nIYmo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_jsSqGdqy, 0, m, &cVar_jsSqGdqy_sendMessage);
}

void Heavy_Dimension_IV::cCast_NAC9jAFs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_kEVDppdZ, 0, m, &cVar_kEVDppdZ_sendMessage);
}

void Heavy_Dimension_IV::cBinop_F38XQOhw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_JVBQ3Ozn, HV_BINOP_MULTIPLY, 1, m, &cBinop_JVBQ3Ozn_sendMessage);
}

void Heavy_Dimension_IV::cBinop_JVBQ3Ozn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_IcmFDXVl_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cCast_q5vURpJ2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_yLTVw4W3_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cCast_SrIgFSHn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_JVBQ3Ozn, HV_BINOP_MULTIPLY, 0, m, &cBinop_JVBQ3Ozn_sendMessage);
}

void Heavy_Dimension_IV::cCast_e5Y0W46q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_oksGr1or, HV_BINOP_MULTIPLY, 0, m, &cBinop_oksGr1or_sendMessage);
}

void Heavy_Dimension_IV::cCast_95m9lRxy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_QcLIWWlN, HV_BINOP_MULTIPLY, 0, m, &cBinop_QcLIWWlN_sendMessage);
}

void Heavy_Dimension_IV::cCast_MhONM58Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_So7uOCn8, HV_BINOP_MULTIPLY, 0, m, &cBinop_So7uOCn8_sendMessage);
}

void Heavy_Dimension_IV::cCast_UiJ90pIJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Q5AHbu4B, HV_BINOP_MULTIPLY, 0, m, &cBinop_Q5AHbu4B_sendMessage);
}

void Heavy_Dimension_IV::cCast_jTrI7FyA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_PttLenyj, HV_BINOP_MULTIPLY, 0, m, &cBinop_PttLenyj_sendMessage);
}

void Heavy_Dimension_IV::cCast_33DIFwfu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_FEsHmdGV_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cCast_S5zlKeLV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SQRT, m, &cUnop_9HfKc3an_sendMessage);
}

void Heavy_Dimension_IV::cSend_IcmFDXVl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_J5iExtZf_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cMsg_YiSASNPv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_wPo7YUmJ, 0, m, NULL);
}

void Heavy_Dimension_IV::cMsg_l1S2S2Af_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_SjrZRvQT, 0, m, NULL);
}

void Heavy_Dimension_IV::cMsg_QlWbZFHU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_gMqoMLjT, 0, m, NULL);
}

void Heavy_Dimension_IV::cMsg_basIlXbR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_M3vTPHHM, 0, m, NULL);
}

void Heavy_Dimension_IV::cMsg_EuK86c4Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_lBcUu4iW, 0, m, NULL);
}

void Heavy_Dimension_IV::cMsg_COOcoQPU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_cLnz9mK5_sendMessage);
}

void Heavy_Dimension_IV::cSystem_cLnz9mK5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_bVMq2OdI, HV_BINOP_DIVIDE, 1, m, &cBinop_bVMq2OdI_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_yFuPgMzE_sendMessage);
}

void Heavy_Dimension_IV::cUnop_W4usx4rD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 8.0f, 0, m, &cBinop_iTrAzvHg_sendMessage);
}

void Heavy_Dimension_IV::cMsg_J1BAp6m3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cUnop_onMessage(_c, HV_UNOP_ATAN, m, &cUnop_W4usx4rD_sendMessage);
}

void Heavy_Dimension_IV::cBinop_iTrAzvHg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_bVMq2OdI, HV_BINOP_DIVIDE, 0, m, &cBinop_bVMq2OdI_sendMessage);
}

void Heavy_Dimension_IV::cCast_yFuPgMzE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_J1BAp6m3_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cBinop_bVMq2OdI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_v6PvByk4, HV_BINOP_MULTIPLY, 1, m, &cBinop_v6PvByk4_sendMessage);
}

void Heavy_Dimension_IV::cBinop_v6PvByk4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_gFtupXne_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_hkMtVIc1_sendMessage);
}

void Heavy_Dimension_IV::cUnop_yny8KCGg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_Y3G5yE7k_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cUnop_NYuj2mDl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_zi1zMyj9_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cBinop_ylYPehHh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 20.0f, 0, m, &cBinop_NUHQCuB3_sendMessage);
}

void Heavy_Dimension_IV::cBinop_NUHQCuB3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_v6PvByk4, HV_BINOP_MULTIPLY, 0, m, &cBinop_v6PvByk4_sendMessage);
}

void Heavy_Dimension_IV::cBinop_h61FkCUi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.1f, 0, m, &cBinop_ozeAPyUW_sendMessage);
}

void Heavy_Dimension_IV::cBinop_ozeAPyUW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_m5zxzSFI_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cVar_x9CGKPAa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_zkB0ZXoT_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cBinop_a9nVHQJB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_ZwHsjHJo_sendMessage);
}

void Heavy_Dimension_IV::cBinop_mHxDAfqN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ULN8aVde, HV_BINOP_ADD, 0, m, &cBinop_ULN8aVde_sendMessage);
}

void Heavy_Dimension_IV::cBinop_zD1AUlDy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ULN8aVde, HV_BINOP_ADD, 1, m, &cBinop_ULN8aVde_sendMessage);
}

void Heavy_Dimension_IV::cCast_xhDHlg8Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_a9nVHQJB_sendMessage);
}

void Heavy_Dimension_IV::cCast_rwSDRuaJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_5uZARbGc, HV_BINOP_MULTIPLY, 1, m, &cBinop_5uZARbGc_sendMessage);
}

void Heavy_Dimension_IV::cCast_iTbWM4qY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_zD1AUlDy_sendMessage);
}

void Heavy_Dimension_IV::cBinop_5uZARbGc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_krb2cUdC, HV_BINOP_MULTIPLY, 1, m, &cBinop_krb2cUdC_sendMessage);
}

void Heavy_Dimension_IV::cBinop_ULN8aVde_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_bDJdX0W0, HV_BINOP_ADD, 0, m, &cBinop_bDJdX0W0_sendMessage);
}

void Heavy_Dimension_IV::cBinop_ZwHsjHJo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_mHxDAfqN, HV_BINOP_MULTIPLY, 1, m, &cBinop_mHxDAfqN_sendMessage);
}

void Heavy_Dimension_IV::cBinop_bDJdX0W0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_5uZARbGc, HV_BINOP_MULTIPLY, 0, m, &cBinop_5uZARbGc_sendMessage);
}

void Heavy_Dimension_IV::cBinop_DWoG8cRN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ihrV1zo3, HV_BINOP_ADD, 1, m, &cBinop_ihrV1zo3_sendMessage);
}

void Heavy_Dimension_IV::cBinop_E3ovtXde_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_tQ3ykAWH_sendMessage);
}

void Heavy_Dimension_IV::cBinop_4OWd75vm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ihrV1zo3, HV_BINOP_ADD, 0, m, &cBinop_ihrV1zo3_sendMessage);
}

void Heavy_Dimension_IV::cCast_H9s5oMpe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_DWoG8cRN_sendMessage);
}

void Heavy_Dimension_IV::cCast_qa9t50vT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_E9o39Q2z_sendMessage);
}

void Heavy_Dimension_IV::cCast_vIWhppUf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_E3ovtXde_sendMessage);
}

void Heavy_Dimension_IV::cBinop_E9o39Q2z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_5jmOTYMt, HV_BINOP_MULTIPLY, 1, m, &cBinop_5jmOTYMt_sendMessage);
}

void Heavy_Dimension_IV::cBinop_5jmOTYMt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_VSY0S014, HV_BINOP_MULTIPLY, 1, m, &cBinop_VSY0S014_sendMessage);
}

void Heavy_Dimension_IV::cBinop_ihrV1zo3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_5jmOTYMt, HV_BINOP_MULTIPLY, 0, m, &cBinop_5jmOTYMt_sendMessage);
}

void Heavy_Dimension_IV::cBinop_tQ3ykAWH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_4OWd75vm, HV_BINOP_MULTIPLY, 1, m, &cBinop_4OWd75vm_sendMessage);
}

void Heavy_Dimension_IV::cBinop_mYgRZIpY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_7Knwl344_sendMessage);
}

void Heavy_Dimension_IV::cBinop_0CBOLA3d_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_2bTOGfvW, HV_BINOP_ADD, 0, m, &cBinop_2bTOGfvW_sendMessage);
}

void Heavy_Dimension_IV::cBinop_2bTOGfvW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_HzmMY42T, HV_BINOP_SUBTRACT, 0, m, &cBinop_HzmMY42T_sendMessage);
}

void Heavy_Dimension_IV::cBinop_zc3E6MJo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_2bTOGfvW, HV_BINOP_ADD, 1, m, &cBinop_2bTOGfvW_sendMessage);
}

void Heavy_Dimension_IV::cBinop_HzmMY42T_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_wn138dsI, HV_BINOP_MULTIPLY, 0, m, &cBinop_wn138dsI_sendMessage);
}

void Heavy_Dimension_IV::cCast_ic0nMzxU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_zc3E6MJo_sendMessage);
}

void Heavy_Dimension_IV::cCast_IZ4n5Qqa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_wn138dsI, HV_BINOP_MULTIPLY, 1, m, &cBinop_wn138dsI_sendMessage);
}

void Heavy_Dimension_IV::cCast_78vwWyvB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_mYgRZIpY_sendMessage);
}

void Heavy_Dimension_IV::cBinop_wn138dsI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_EqcICuWj, HV_BINOP_MULTIPLY, 1, m, &cBinop_EqcICuWj_sendMessage);
}

void Heavy_Dimension_IV::cBinop_7Knwl344_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_0CBOLA3d, HV_BINOP_MULTIPLY, 1, m, &cBinop_0CBOLA3d_sendMessage);
}

void Heavy_Dimension_IV::cBinop_mGBKu7xe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_MGe94hVu, HV_BINOP_ADD, 1, m, &cBinop_MGe94hVu_sendMessage);
}

void Heavy_Dimension_IV::cBinop_MGe94hVu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -2.0f, 0, m, &cBinop_O6POQkpC_sendMessage);
}

void Heavy_Dimension_IV::cBinop_QepwjTJS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_t7qvBzBt, HV_BINOP_MULTIPLY, 1, m, &cBinop_t7qvBzBt_sendMessage);
}

void Heavy_Dimension_IV::cBinop_t7qvBzBt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_MGe94hVu, HV_BINOP_ADD, 0, m, &cBinop_MGe94hVu_sendMessage);
}

void Heavy_Dimension_IV::cCast_w2iXuwwi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_QepwjTJS_sendMessage);
}

void Heavy_Dimension_IV::cCast_qpl8MVNC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_mGBKu7xe_sendMessage);
}

void Heavy_Dimension_IV::cBinop_O6POQkpC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ZYAuuNx1, HV_BINOP_MULTIPLY, 1, m, &cBinop_ZYAuuNx1_sendMessage);
}

void Heavy_Dimension_IV::cBinop_0JPSeX10_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_fAOGFhSt, HV_BINOP_MULTIPLY, 1, m, &cBinop_fAOGFhSt_sendMessage);
}

void Heavy_Dimension_IV::cBinop_fAOGFhSt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_dgSz6T9g, HV_BINOP_ADD, 0, m, &cBinop_dgSz6T9g_sendMessage);
}

void Heavy_Dimension_IV::cBinop_dgSz6T9g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_OFOwn2rG, HV_BINOP_SUBTRACT, 0, m, &cBinop_OFOwn2rG_sendMessage);
}

void Heavy_Dimension_IV::cBinop_vQwKtxDd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_dgSz6T9g, HV_BINOP_ADD, 1, m, &cBinop_dgSz6T9g_sendMessage);
}

void Heavy_Dimension_IV::cCast_NFL6SbgB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_0JPSeX10_sendMessage);
}

void Heavy_Dimension_IV::cCast_YFWiVtjG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_vQwKtxDd_sendMessage);
}

void Heavy_Dimension_IV::cBinop_OFOwn2rG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_1Tq6gAI9, HV_BINOP_MULTIPLY, 1, m, &cBinop_1Tq6gAI9_sendMessage);
}

void Heavy_Dimension_IV::cBinop_9dPGv7Dl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, -24.0f, 0, m, &cBinop_Ln1JFVBt_sendMessage);
}

void Heavy_Dimension_IV::cBinop_Ln1JFVBt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 40.0f, 0, m, &cBinop_XhkDkFye_sendMessage);
}

void Heavy_Dimension_IV::cBinop_eR8681yf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ohcMBPrs, HV_BINOP_MULTIPLY, 1, m, &cBinop_ohcMBPrs_sendMessage);
}

void Heavy_Dimension_IV::cBinop_ohcMBPrs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_AwvEYPy0, HV_BINOP_ADD, 0, m, &cBinop_AwvEYPy0_sendMessage);
}

void Heavy_Dimension_IV::cBinop_AwvEYPy0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_fIpbPDQy, HV_BINOP_ADD, 0, m, &cBinop_fIpbPDQy_sendMessage);
}

void Heavy_Dimension_IV::cBinop_oIDUziTj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_AwvEYPy0, HV_BINOP_ADD, 1, m, &cBinop_AwvEYPy0_sendMessage);
}

void Heavy_Dimension_IV::cCast_vBFhUvZu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_eR8681yf_sendMessage);
}

void Heavy_Dimension_IV::cCast_kcrScl7f_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_oIDUziTj_sendMessage);
}

void Heavy_Dimension_IV::cBinop_fIpbPDQy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_x9CGKPAa, 1, m, &cVar_x9CGKPAa_sendMessage);
}

void Heavy_Dimension_IV::cVar_AV4q85Rh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Mkdwd4Gj_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 20000.0f, 0, m, &cBinop_ylYPehHh_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_3xtJ4J9k_sendMessage);
}

void Heavy_Dimension_IV::cVar_4XRiQrU3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 100.0f, 0, m, &cBinop_h61FkCUi_sendMessage);
}

void Heavy_Dimension_IV::cVar_J6800kbr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 24.0f, 0, m, &cBinop_9dPGv7Dl_sendMessage);
}

void Heavy_Dimension_IV::cUnop_5M1gMDWj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_z0ahPR8F_sendMessage);
}

void Heavy_Dimension_IV::cCast_gFtupXne_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SIN, m, &cUnop_yny8KCGg_sendMessage);
}

void Heavy_Dimension_IV::cCast_hkMtVIc1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_NYuj2mDl_sendMessage);
}

void Heavy_Dimension_IV::cSend_Y3G5yE7k_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_XRqLXnxz_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cSend_zi1zMyj9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_E8LRXCtP_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cSend_8optOBET_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Dimension_IV::cMsg_m5zxzSFI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_xeYWf5Ib_sendMessage);
}

void Heavy_Dimension_IV::cBinop_xeYWf5Ib_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_rgPI5FzF, HV_BINOP_MULTIPLY, 1, m, &cBinop_rgPI5FzF_sendMessage);
}

void Heavy_Dimension_IV::cBinop_rgPI5FzF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_ozu3z3W3_sendMessage);
}

void Heavy_Dimension_IV::cBinop_ozu3z3W3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_kCtucUQA_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_jQYXOcjM_sendMessage);
}

void Heavy_Dimension_IV::cMsg_zkB0ZXoT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_cwGgJCzo_sendMessage);
}

void Heavy_Dimension_IV::cBinop_cwGgJCzo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_cvWiHVpR_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_tZWd8g7i_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_JLAYrsmj_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_CM7rbepg_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_a7ewOXTr_sendMessage);
}

void Heavy_Dimension_IV::cBinop_krb2cUdC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_YiSASNPv_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cBinop_VSY0S014_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_l1S2S2Af_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cBinop_EqcICuWj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_QlWbZFHU_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cBinop_ZYAuuNx1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_basIlXbR_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cBinop_1Tq6gAI9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_EuK86c4Q_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cCast_3wBchCaS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_4XRiQrU3, 1, m, &cVar_4XRiQrU3_sendMessage);
}

void Heavy_Dimension_IV::cCast_gDXzXbC6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_AV4q85Rh, 0, m, &cVar_AV4q85Rh_sendMessage);
}

void Heavy_Dimension_IV::cCast_3xtJ4J9k_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_x9CGKPAa, 0, m, &cVar_x9CGKPAa_sendMessage);
}

void Heavy_Dimension_IV::cCast_Mkdwd4Gj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_4XRiQrU3, 0, m, &cVar_4XRiQrU3_sendMessage);
}

void Heavy_Dimension_IV::cSend_Z6c72rsT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_2f48L1OJ_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cBinop_XhkDkFye_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_92QEVusP_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_v1iKgigj_sendMessage);
}

void Heavy_Dimension_IV::cCast_v1iKgigj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_jU9jfXWB_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cCast_92QEVusP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_13vWqUPA, HV_BINOP_POW, 1, m, &cBinop_13vWqUPA_sendMessage);
}

void Heavy_Dimension_IV::cMsg_jU9jfXWB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_13vWqUPA, HV_BINOP_POW, 0, m, &cBinop_13vWqUPA_sendMessage);
}

void Heavy_Dimension_IV::cBinop_13vWqUPA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_KocO3gHN_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_GfUbFONX_sendMessage);
}

void Heavy_Dimension_IV::cCast_ge9bW6ND_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_AV4q85Rh, 0, m, &cVar_AV4q85Rh_sendMessage);
}

void Heavy_Dimension_IV::cCast_gGa0GKnq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_J6800kbr, 0, m, &cVar_J6800kbr_sendMessage);
}

void Heavy_Dimension_IV::cCast_RUyFQu2J_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_AV4q85Rh, 0, m, &cVar_AV4q85Rh_sendMessage);
}

void Heavy_Dimension_IV::cCast_QwoJX9mc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_J6800kbr, 0, m, &cVar_J6800kbr_sendMessage);
}

void Heavy_Dimension_IV::cBinop_z0ahPR8F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_I9Ceerl8, HV_BINOP_MULTIPLY, 1, m, &cBinop_I9Ceerl8_sendMessage);
}

void Heavy_Dimension_IV::cBinop_I9Ceerl8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_46SxfBJi_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cCast_jQYXOcjM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_I9Ceerl8, HV_BINOP_MULTIPLY, 0, m, &cBinop_I9Ceerl8_sendMessage);
}

void Heavy_Dimension_IV::cCast_kCtucUQA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_8optOBET_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cCast_a7ewOXTr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_krb2cUdC, HV_BINOP_MULTIPLY, 0, m, &cBinop_krb2cUdC_sendMessage);
}

void Heavy_Dimension_IV::cCast_CM7rbepg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_VSY0S014, HV_BINOP_MULTIPLY, 0, m, &cBinop_VSY0S014_sendMessage);
}

void Heavy_Dimension_IV::cCast_JLAYrsmj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_EqcICuWj, HV_BINOP_MULTIPLY, 0, m, &cBinop_EqcICuWj_sendMessage);
}

void Heavy_Dimension_IV::cCast_cvWiHVpR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_1Tq6gAI9, HV_BINOP_MULTIPLY, 0, m, &cBinop_1Tq6gAI9_sendMessage);
}

void Heavy_Dimension_IV::cCast_tZWd8g7i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ZYAuuNx1, HV_BINOP_MULTIPLY, 0, m, &cBinop_ZYAuuNx1_sendMessage);
}

void Heavy_Dimension_IV::cCast_KocO3gHN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_Z6c72rsT_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cCast_GfUbFONX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SQRT, m, &cUnop_5M1gMDWj_sendMessage);
}

void Heavy_Dimension_IV::cSend_46SxfBJi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_WGhQqN8D_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cBinop_AmrMUlcc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_1vqVZe0j_sendMessage);
}

void Heavy_Dimension_IV::cBinop_1vqVZe0j_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_mGr2y17k_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_AWeRYvXW_sendMessage);
}

void Heavy_Dimension_IV::cVar_PGfM5dM0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_50JIcUk0_sendMessage);
}

void Heavy_Dimension_IV::cMsg_1rIi3Gml_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_DfXELHEs_sendMessage);
}

void Heavy_Dimension_IV::cSystem_DfXELHEs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_5CGfnGsu, HV_BINOP_DIVIDE, 1, m, &cBinop_5CGfnGsu_sendMessage);
}

void Heavy_Dimension_IV::cBinop_mGr2y17k_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_QpQnwMS7_sendMessage);
}

void Heavy_Dimension_IV::cBinop_QpQnwMS7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_i6ccyuZr, m);
}

void Heavy_Dimension_IV::cMsg_Npb4onHp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_uXr84Afn_sendMessage);
}

void Heavy_Dimension_IV::cBinop_uXr84Afn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_AmrMUlcc_sendMessage);
}

void Heavy_Dimension_IV::cBinop_AWeRYvXW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_QCi4FuVN, m);
}

void Heavy_Dimension_IV::cBinop_50JIcUk0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_vb0RakH5_sendMessage);
}

void Heavy_Dimension_IV::cBinop_vb0RakH5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_5CGfnGsu, HV_BINOP_DIVIDE, 0, m, &cBinop_5CGfnGsu_sendMessage);
}

void Heavy_Dimension_IV::cBinop_5CGfnGsu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Npb4onHp_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cBinop_hW1qx8NV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_5qUiMrFS_sendMessage);
}

void Heavy_Dimension_IV::cBinop_5qUiMrFS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_m3u5xhHr_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_62302CmA_sendMessage);
}

void Heavy_Dimension_IV::cVar_gHBXrADA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_Xf9zFw9l_sendMessage);
}

void Heavy_Dimension_IV::cMsg_gv6GKRae_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_1DRbsgTl_sendMessage);
}

void Heavy_Dimension_IV::cSystem_1DRbsgTl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Dxv6qrna, HV_BINOP_DIVIDE, 1, m, &cBinop_Dxv6qrna_sendMessage);
}

void Heavy_Dimension_IV::cBinop_m3u5xhHr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_xq69fYyO_sendMessage);
}

void Heavy_Dimension_IV::cBinop_xq69fYyO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_0UK0A91d, m);
}

void Heavy_Dimension_IV::cMsg_NWgok6Hb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_FmEp0Wxe_sendMessage);
}

void Heavy_Dimension_IV::cBinop_FmEp0Wxe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_hW1qx8NV_sendMessage);
}

void Heavy_Dimension_IV::cBinop_62302CmA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_AT9DVWJ1, m);
}

void Heavy_Dimension_IV::cBinop_Xf9zFw9l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_QKO3Zahs_sendMessage);
}

void Heavy_Dimension_IV::cBinop_QKO3Zahs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Dxv6qrna, HV_BINOP_DIVIDE, 0, m, &cBinop_Dxv6qrna_sendMessage);
}

void Heavy_Dimension_IV::cBinop_Dxv6qrna_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_NWgok6Hb_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cBinop_aovikIjO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_fEOG6qR4_sendMessage);
}

void Heavy_Dimension_IV::cBinop_fEOG6qR4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_LjW4KTKw_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_Zk6Vjyqy_sendMessage);
}

void Heavy_Dimension_IV::cVar_W67IyX8v_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_pl5DGcHA_sendMessage);
}

void Heavy_Dimension_IV::cMsg_r7m7bO1b_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_ansuIV7g_sendMessage);
}

void Heavy_Dimension_IV::cSystem_ansuIV7g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_GBO8ZwnA, HV_BINOP_DIVIDE, 1, m, &cBinop_GBO8ZwnA_sendMessage);
}

void Heavy_Dimension_IV::cBinop_LjW4KTKw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_JZgFAm0s_sendMessage);
}

void Heavy_Dimension_IV::cBinop_JZgFAm0s_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_pstujCpM, m);
}

void Heavy_Dimension_IV::cMsg_rhuLI5Ls_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_8oQP67UK_sendMessage);
}

void Heavy_Dimension_IV::cBinop_8oQP67UK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_aovikIjO_sendMessage);
}

void Heavy_Dimension_IV::cBinop_Zk6Vjyqy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_RCpm0g1F, m);
}

void Heavy_Dimension_IV::cBinop_pl5DGcHA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_0HCEV0X5_sendMessage);
}

void Heavy_Dimension_IV::cBinop_0HCEV0X5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_GBO8ZwnA, HV_BINOP_DIVIDE, 0, m, &cBinop_GBO8ZwnA_sendMessage);
}

void Heavy_Dimension_IV::cBinop_GBO8ZwnA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_rhuLI5Ls_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cBinop_SsZxtGDf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_vQYLAU9D_sendMessage);
}

void Heavy_Dimension_IV::cBinop_vQYLAU9D_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_ehnFVgzA_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_kR9lk5af_sendMessage);
}

void Heavy_Dimension_IV::cVar_kt8qFGOL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_j2y5zevU_sendMessage);
}

void Heavy_Dimension_IV::cMsg_xAwgMkWo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_DPYitlhC_sendMessage);
}

void Heavy_Dimension_IV::cSystem_DPYitlhC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Hbt8C2cY, HV_BINOP_DIVIDE, 1, m, &cBinop_Hbt8C2cY_sendMessage);
}

void Heavy_Dimension_IV::cBinop_ehnFVgzA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_h80sGwtz_sendMessage);
}

void Heavy_Dimension_IV::cBinop_h80sGwtz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_xvxdu86S, m);
}

void Heavy_Dimension_IV::cMsg_3oBY7acJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_MCQiWgds_sendMessage);
}

void Heavy_Dimension_IV::cBinop_MCQiWgds_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_SsZxtGDf_sendMessage);
}

void Heavy_Dimension_IV::cBinop_kR9lk5af_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_GAUsqdOy, m);
}

void Heavy_Dimension_IV::cBinop_j2y5zevU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_9pWDqoEc_sendMessage);
}

void Heavy_Dimension_IV::cBinop_9pWDqoEc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Hbt8C2cY, HV_BINOP_DIVIDE, 0, m, &cBinop_Hbt8C2cY_sendMessage);
}

void Heavy_Dimension_IV::cBinop_Hbt8C2cY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_3oBY7acJ_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cPack_c9tEtBnm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_0aqFSFyw, 0, m, NULL);
}

void Heavy_Dimension_IV::cPack_oubHUGQi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_OeQUql55, 0, m, NULL);
}

void Heavy_Dimension_IV::cPack_c38Kjo0h_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_Y7u6gEuZ, 0, m, NULL);
}

void Heavy_Dimension_IV::cPack_vNW7GnRq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_mdjCpycV, 0, m, NULL);
}

void Heavy_Dimension_IV::cSwitchcase_e1qSSq6v_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_pRNBjtk2_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_8DJUgz2a_sendMessage);
      break;
    }
    case 0x40000000: { // "2.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_wjKn37FL_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Dimension_IV::cCast_pRNBjtk2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_5JH6sVaH_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cCast_8DJUgz2a_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_xh4IeFUL_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cCast_wjKn37FL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_b5FH3wcf_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cMsg_dmkFdgWo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.25f);
  sPhasor_k_onMessage(_c, &Context(_c)->sPhasor_8EBJRmUP, 0, m);
}

void Heavy_Dimension_IV::cMsg_ayH3scj9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.5f);
  sPhasor_k_onMessage(_c, &Context(_c)->sPhasor_8EBJRmUP, 0, m);
}

void Heavy_Dimension_IV::cMsg_ddbKHW0i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 4.0f);
  cSend_bDrwIAPe_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cMsg_frBjoT2t_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 5.0f);
  cSend_bDrwIAPe_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cMsg_rMowJOiZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 3.0f);
  cSend_bDrwIAPe_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cMsg_q4jNSXHn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 8.0f);
  cSend_9OHbzFzm_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cMsg_cqGMXPRn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 5.0f);
  cSend_9OHbzFzm_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cMsg_7zFjbISf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.0f);
  cSend_9OHbzFzm_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cSend_9OHbzFzm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_DojPRBMy_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cSend_bDrwIAPe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_8EuBvbt0_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cBinop_ZfVrlSKl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_r2N5BXcO_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Dimension_IV::cSend_Cc8QJqUx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_HUAGuLaH_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cSend_wg5z2rNF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_R2nMPido_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cSend_2kesTgWZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_O0XUVNQQ_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cSend_9p9Y1Bk6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_9k43IDLo_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cSend_Nd3aj4zQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_nLVGpZPm_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cMsg_77VAweId_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.8f);
  sVarf_onMessage(_c, &Context(_c)->sVarf_NovCeAsg, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_D8Y0gDHD, m);
}

void Heavy_Dimension_IV::cMsg_dhOCHTjp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  sVarf_onMessage(_c, &Context(_c)->sVarf_NovCeAsg, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_D8Y0gDHD, m);
}

void Heavy_Dimension_IV::cMsg_QFLOWVvg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.79f);
  sVarf_onMessage(_c, &Context(_c)->sVarf_i4RI4iwR, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_qc8xQRU0, m);
}

void Heavy_Dimension_IV::cMsg_AxoaU6RY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.63f);
  sVarf_onMessage(_c, &Context(_c)->sVarf_SqNh46ez, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_LpkHT1bh, m);
}

void Heavy_Dimension_IV::cMsg_EhKMCsQI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.12f);
  sVarf_onMessage(_c, &Context(_c)->sVarf_i4RI4iwR, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_qc8xQRU0, m);
}

void Heavy_Dimension_IV::cMsg_hmqlBAJ1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.5f);
  sVarf_onMessage(_c, &Context(_c)->sVarf_SqNh46ez, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_LpkHT1bh, m);
}

void Heavy_Dimension_IV::cMsg_5JH6sVaH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cSend_yLGdC8K5_sendMessage(_c, 0, m);
  cSend_HZtdqTAH_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cMsg_xh4IeFUL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.7f);
  cSend_yLGdC8K5_sendMessage(_c, 0, m);
  cSend_HZtdqTAH_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cMsg_b5FH3wcf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cSend_yLGdC8K5_sendMessage(_c, 0, m);
  cSend_HZtdqTAH_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cSend_HZtdqTAH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_dqpm6hd3_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cSend_yLGdC8K5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_5jrppcBk_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cReceive_Hqn4cPu6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_drkbRkyc_sendMessage(_c, 0, m);
  cMsg_COOcoQPU_sendMessage(_c, 0, m);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_NAC9jAFs_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Rn5nIYmo_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_QwoJX9mc_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_RUyFQu2J_sendMessage);
  cMsg_WFBa3wZq_sendMessage(_c, 0, m);
  cMsg_0wgUPipF_sendMessage(_c, 0, m);
  cMsg_p0rtoJcK_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_UNdpukpd, 0, m, &cVar_UNdpukpd_sendMessage);
  cMsg_I5EfyBrf_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_nmCkcfpl, 0, m, &cVar_nmCkcfpl_sendMessage);
  cMsg_Z2KQ6zZ7_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_FN1DUfwf, 0, m, &cVar_FN1DUfwf_sendMessage);
  cMsg_w9gNYUcg_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_mr5NdLRk, 0, m, &cVar_mr5NdLRk_sendMessage);
  cMsg_VY0rN2bh_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_mIS8wCBu, 0, m, &cVar_mIS8wCBu_sendMessage);
  cMsg_X8e0Say7_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_tP7ms9Z1, 0, m, &cVar_tP7ms9Z1_sendMessage);
  cMsg_1rIi3Gml_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_PGfM5dM0, 0, m, &cVar_PGfM5dM0_sendMessage);
  cMsg_gv6GKRae_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_gHBXrADA, 0, m, &cVar_gHBXrADA_sendMessage);
  cMsg_r7m7bO1b_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_W67IyX8v, 0, m, &cVar_W67IyX8v_sendMessage);
  cMsg_xAwgMkWo_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_kt8qFGOL, 0, m, &cVar_kt8qFGOL_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_qNyntKA3, 0, m, &cVar_qNyntKA3_sendMessage);
  cMsg_p19UgGcW_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_H9funCWt, 0, m, &cVar_H9funCWt_sendMessage);
  cMsg_utZKs9Jn_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cReceive_DojPRBMy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_c38Kjo0h, 0, m, &cPack_c38Kjo0h_sendMessage);
  cPack_onMessage(_c, &Context(_c)->cPack_vNW7GnRq, 0, m, &cPack_vNW7GnRq_sendMessage);
}

void Heavy_Dimension_IV::cReceive_8EuBvbt0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_c9tEtBnm, 0, m, &cPack_c9tEtBnm_sendMessage);
  cPack_onMessage(_c, &Context(_c)->cPack_oubHUGQi, 0, m, &cPack_oubHUGQi_sendMessage);
}

void Heavy_Dimension_IV::cReceive_HUAGuLaH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ddbKHW0i_sendMessage(_c, 0, m);
  cMsg_dmkFdgWo_sendMessage(_c, 0, m);
  cMsg_q4jNSXHn_sendMessage(_c, 0, m);
  cSend_Nd3aj4zQ_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cReceive_R2nMPido_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_dmkFdgWo_sendMessage(_c, 0, m);
  cMsg_frBjoT2t_sendMessage(_c, 0, m);
  cMsg_cqGMXPRn_sendMessage(_c, 0, m);
  cSend_Nd3aj4zQ_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cReceive_O0XUVNQQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ayH3scj9_sendMessage(_c, 0, m);
  cMsg_rMowJOiZ_sendMessage(_c, 0, m);
  cMsg_7zFjbISf_sendMessage(_c, 0, m);
  cSend_Nd3aj4zQ_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cReceive_9k43IDLo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ayH3scj9_sendMessage(_c, 0, m);
  cMsg_rMowJOiZ_sendMessage(_c, 0, m);
  cMsg_7zFjbISf_sendMessage(_c, 0, m);
  cMsg_EhKMCsQI_sendMessage(_c, 0, m);
  cMsg_dhOCHTjp_sendMessage(_c, 0, m);
  cMsg_hmqlBAJ1_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cReceive_nLVGpZPm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_QFLOWVvg_sendMessage(_c, 0, m);
  cMsg_77VAweId_sendMessage(_c, 0, m);
  cMsg_AxoaU6RY_sendMessage(_c, 0, m);
}

void Heavy_Dimension_IV::cReceive_X1nRU1Am_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_IMfq9w2V, HV_BINOP_MULTIPLY, 0, m, &cBinop_IMfq9w2V_sendMessage);
}

void Heavy_Dimension_IV::cReceive_0EqsUe2W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_CkOss9Sp, HV_BINOP_MULTIPLY, 0, m, &cBinop_CkOss9Sp_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_V8ItgYPl, HV_BINOP_MULTIPLY, 0, m, &cBinop_V8ItgYPl_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_O0HDjMhc, HV_BINOP_MULTIPLY, 0, m, &cBinop_O0HDjMhc_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_upxWc9cR, HV_BINOP_MULTIPLY, 0, m, &cBinop_upxWc9cR_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_T7UA2EFM, HV_BINOP_MULTIPLY, 0, m, &cBinop_T7UA2EFM_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_ZA2gFl3W, HV_BINOP_MULTIPLY, 0, m, &cBinop_ZA2gFl3W_sendMessage);
}

void Heavy_Dimension_IV::cReceive_F6ciV941_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ShysAkK7_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_TYe7YUR5_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_rsBLe81t_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_tRnuma2n_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_1Prari8S_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_X5iqPVCh_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_1JDiMDql_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_CDmsJayJ_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_lthgOs9c_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_VHteAef5_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_G32UQDMK_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_YXv8rKfW_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_V5cHG0iy_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Y1iKSR0h_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_xBjPP60g_sendMessage);
}

void Heavy_Dimension_IV::cReceive_J5iExtZf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_hUcs8xIL, HV_BINOP_ADD, 1, m, &cBinop_hUcs8xIL_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_TbIGE1qf, HV_BINOP_SUBTRACT, 1, m, &cBinop_TbIGE1qf_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_S46aHneN, HV_BINOP_SUBTRACT, 1, m, &cBinop_S46aHneN_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_4PClvS35, HV_BINOP_ADD, 1, m, &cBinop_4PClvS35_sendMessage);
}

void Heavy_Dimension_IV::cReceive_XRqLXnxz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_rgPI5FzF, HV_BINOP_MULTIPLY, 0, m, &cBinop_rgPI5FzF_sendMessage);
}

void Heavy_Dimension_IV::cReceive_E8LRXCtP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_mHxDAfqN, HV_BINOP_MULTIPLY, 0, m, &cBinop_mHxDAfqN_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_4OWd75vm, HV_BINOP_MULTIPLY, 0, m, &cBinop_4OWd75vm_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_0CBOLA3d, HV_BINOP_MULTIPLY, 0, m, &cBinop_0CBOLA3d_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_t7qvBzBt, HV_BINOP_MULTIPLY, 0, m, &cBinop_t7qvBzBt_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_fAOGFhSt, HV_BINOP_MULTIPLY, 0, m, &cBinop_fAOGFhSt_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_ohcMBPrs, HV_BINOP_MULTIPLY, 0, m, &cBinop_ohcMBPrs_sendMessage);
}

void Heavy_Dimension_IV::cReceive_2f48L1OJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_rwSDRuaJ_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_iTbWM4qY_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_xhDHlg8Z_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_qa9t50vT_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_H9s5oMpe_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_vIWhppUf_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_IZ4n5Qqa_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ic0nMzxU_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_78vwWyvB_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_qpl8MVNC_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_w2iXuwwi_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_YFWiVtjG_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_NFL6SbgB_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_kcrScl7f_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_vBFhUvZu_sendMessage);
}

void Heavy_Dimension_IV::cReceive_WGhQqN8D_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_bDJdX0W0, HV_BINOP_ADD, 1, m, &cBinop_bDJdX0W0_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_HzmMY42T, HV_BINOP_SUBTRACT, 1, m, &cBinop_HzmMY42T_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_OFOwn2rG, HV_BINOP_SUBTRACT, 1, m, &cBinop_OFOwn2rG_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_fIpbPDQy, HV_BINOP_ADD, 1, m, &cBinop_fIpbPDQy_sendMessage);
}

void Heavy_Dimension_IV::cReceive_lt9stiv3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_r2N5BXcO_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Dimension_IV::cReceive_dqpm6hd3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_ODRqlTpl, m);
}

void Heavy_Dimension_IV::cReceive_J5aGE3Or_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_e1qSSq6v_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Dimension_IV::cReceive_5jrppcBk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_D4ODvP70, m);
}



/*
 * Code for expr~ implementation
 * Write out the generic implementation code
 */

 // per class code

 // per object code


/*
 * Context Process Implementation
 */

int Heavy_Dimension_IV::process(float **inputBuffers, float **outputBuffers, int n) {
  while (hLp_hasData(&inQueue)) {
    hv_uint32_t numBytes = 0;
    ReceiverMessagePair *p = reinterpret_cast<ReceiverMessagePair *>(hLp_getReadBuffer(&inQueue, &numBytes));
    hv_assert(numBytes >= sizeof(ReceiverMessagePair));
    scheduleMessageForReceiver(p->receiverHash, &p->msg);
    hLp_consume(&inQueue);
  }

  sendBangToReceiver(0xDD21C0EB); // send to __hv_bang~ on next cycle
  const int n4 = n & ~HV_N_SIMD_MASK; // ensure that the block size is a multiple of HV_N_SIMD

  // temporary signal vars
  hv_bufferf_t Bf0, Bf1, Bf2, Bf3, Bf4, Bf5, Bf6, Bf7, Bf8, Bf9;
  hv_bufferi_t Bi0, Bi1;

  // input and output vars
  hv_bufferf_t O0, O1;
  hv_bufferf_t I0, I1;

  // declare and init the zero buffer
  hv_bufferf_t ZERO; __hv_zero_f(VOf(ZERO));

  hv_uint32_t nextBlock = blockStartTimestamp;
  for (int n = 0; n < n4; n += HV_N_SIMD) {

    // process all of the messages for this block
    nextBlock += HV_N_SIMD;
    while (mq_hasMessageBefore(&mq, nextBlock)) {
      MessageNode *const node = mq_peek(&mq);
      node->sendMessage(this, node->let, node->m);
      mq_pop(&mq);
    }

    // load input buffers
    __hv_load_f(inputBuffers[0]+n, VOf(I0));
    __hv_load_f(inputBuffers[1]+n, VOf(I1));

    // zero output buffers
    __hv_zero_f(VOf(O0));
    __hv_zero_f(VOf(O1));

    // process all signal functions
    __hv_varread_f(&sVarf_QCi4FuVN, VOf(Bf0));
    __hv_rpole_f(&sRPole_yJkqsOWs, VIf(I0), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf1), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_bKNb6xfQ, VIf(Bf0), VOf(Bf2));
    __hv_mul_f(VIf(Bf2), VIf(Bf1), VOf(Bf1));
    __hv_sub_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_i6ccyuZr, VOf(Bf0));
    __hv_mul_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf1), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_min_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf0), -1.0f, -1.0f, -1.0f, -1.0f, -1.0f, -1.0f, -1.0f, -1.0f);
    __hv_max_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_tabwrite_f(&sTabwrite_kNrGeE75, VIf(Bf0));
    __hv_varread_f(&sVarf_AT9DVWJ1, VOf(Bf1));
    __hv_rpole_f(&sRPole_B6tizhNi, VIf(I1), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf2), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_9GYbsUVB, VIf(Bf1), VOf(Bf3));
    __hv_mul_f(VIf(Bf3), VIf(Bf2), VOf(Bf2));
    __hv_sub_f(VIf(Bf1), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_0UK0A91d, VOf(Bf1));
    __hv_mul_f(VIf(Bf2), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf2), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_min_f(VIf(Bf1), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf1), -1.0f, -1.0f, -1.0f, -1.0f, -1.0f, -1.0f, -1.0f, -1.0f);
    __hv_max_f(VIf(Bf2), VIf(Bf1), VOf(Bf1));
    __hv_tabwrite_f(&sTabwrite_uPTFUHla, VIf(Bf1));
    __hv_phasor_k_f(&sPhasor_8EBJRmUP, VOf(Bf2));
    __hv_var_k_f(VOf(Bf3), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_abs_f(VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf2), 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f);
    __hv_mul_f(VIf(Bf3), VIf(Bf2), VOf(Bf2));
    __hv_line_f(&sLine_0aqFSFyw, VOf(Bf3));
    __hv_mul_f(VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_varwrite_f(&sVarf_E4FRy0sH, VIf(Bf3));
    __hv_neg_f(VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf3), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_add_f(VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_line_f(&sLine_OeQUql55, VOf(Bf2));
    __hv_mul_f(VIf(Bf3), VIf(Bf2), VOf(Bf2));
    __hv_varwrite_f(&sVarf_n78mI8e1, VIf(Bf2));
    __hv_line_f(&sLine_Y7u6gEuZ, VOf(Bf2));
    __hv_varread_f(&sVarf_E4FRy0sH, VOf(Bf3));
    __hv_add_f(VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_tabhead_f(&sTabhead_KmM0OA08, VOf(Bf2));
    __hv_var_k_f_r(VOf(Bf4), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf2), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_4oeu0cT9, VOf(Bf2));
    __hv_mul_f(VIf(Bf3), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_05eGEJGO, VOf(Bf3));
    __hv_min_f(VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_zero_f(VOf(Bf2));
    __hv_max_f(VIf(Bf3), VIf(Bf2), VOf(Bf2));
    __hv_sub_f(VIf(Bf4), VIf(Bf2), VOf(Bf2));
    __hv_floor_f(VIf(Bf2), VOf(Bf4));
    __hv_varread_f(&sVarf_cU2hJl0C, VOf(Bf3));
    __hv_zero_f(VOf(Bf5));
    __hv_lt_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_and_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_add_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_cast_fi(VIf(Bf5), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_xrVQDJad, VIi(Bi1), VOf(Bf5));
    __hv_tabread_if(&sTabread_Wt7FYrlg, VIi(Bi0), VOf(Bf3));
    __hv_sub_f(VIf(Bf5), VIf(Bf3), VOf(Bf5));
    __hv_sub_f(VIf(Bf2), VIf(Bf4), VOf(Bf4));
    __hv_fma_f(VIf(Bf5), VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_FZ4jlUXs, VOf(Bf4));
    __hv_rpole_f(&sRPole_9w6sBVI4, VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf3), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_AqTUIBk1, VIf(Bf4), VOf(Bf5));
    __hv_mul_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_sub_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_REV2tlhc, VOf(Bf4));
    __hv_mul_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_VpuSgB3p, VOf(Bf3));
    __hv_rpole_f(&sRPole_XTNPwsfc, VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf4), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_MfItPE2Y, VIf(Bf3), VOf(Bf5));
    __hv_mul_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_sub_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_LHcnDwRA, VOf(Bf3));
    __hv_mul_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_hXYkM96z, VOf(Bf4));
    __hv_mul_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_J25kRHdF, VOf(Bf3));
    __hv_rpole_f(&sRPole_vZotdVpl, VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_i4RI4iwR, VOf(Bf4));
    __hv_mul_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_varwrite_f(&sVarf_ssVPuSfX, VIf(Bf4));
    __hv_line_f(&sLine_mdjCpycV, VOf(Bf4));
    __hv_varread_f(&sVarf_n78mI8e1, VOf(Bf3));
    __hv_add_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_tabhead_f(&sTabhead_HA6aLQ0T, VOf(Bf4));
    __hv_var_k_f_r(VOf(Bf5), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_bHicGd0o, VOf(Bf4));
    __hv_mul_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_12kvfsYV, VOf(Bf3));
    __hv_min_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_zero_f(VOf(Bf4));
    __hv_max_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_sub_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_floor_f(VIf(Bf4), VOf(Bf5));
    __hv_varread_f(&sVarf_TCuf1qBE, VOf(Bf3));
    __hv_zero_f(VOf(Bf2));
    __hv_lt_f(VIf(Bf5), VIf(Bf2), VOf(Bf2));
    __hv_and_f(VIf(Bf3), VIf(Bf2), VOf(Bf2));
    __hv_add_f(VIf(Bf5), VIf(Bf2), VOf(Bf2));
    __hv_cast_fi(VIf(Bf2), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_iac1o6Pf, VIi(Bi1), VOf(Bf2));
    __hv_tabread_if(&sTabread_JlcE9hWp, VIi(Bi0), VOf(Bf3));
    __hv_sub_f(VIf(Bf2), VIf(Bf3), VOf(Bf2));
    __hv_sub_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_fma_f(VIf(Bf2), VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_5AgafKcL, VOf(Bf5));
    __hv_rpole_f(&sRPole_2DlLEgje, VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf3), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_ZMOEznWG, VIf(Bf5), VOf(Bf2));
    __hv_mul_f(VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_sub_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_laWSALbJ, VOf(Bf5));
    __hv_mul_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_4CybKame, VOf(Bf3));
    __hv_rpole_f(&sRPole_rsSmCyDa, VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf5), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_jgmOg17Y, VIf(Bf3), VOf(Bf2));
    __hv_mul_f(VIf(Bf2), VIf(Bf5), VOf(Bf5));
    __hv_sub_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_SB6IZdtd, VOf(Bf3));
    __hv_mul_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_OJVPUYTj, VOf(Bf5));
    __hv_mul_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_gGPZVcvt, VOf(Bf3));
    __hv_rpole_f(&sRPole_3HgeMWz6, VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_qc8xQRU0, VOf(Bf5));
    __hv_mul_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_varwrite_f(&sVarf_TAKDbpYv, VIf(Bf5));
    __hv_varread_f(&sVarf_ssVPuSfX, VOf(Bf5));
    __hv_varread_f(&sVarf_ODRqlTpl, VOf(Bf3));
    __hv_mul_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_neg_f(VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_D8Y0gDHD, VOf(Bf2));
    __hv_line_f(&sLine_xXJUErlp, VOf(Bf4));
    __hv_line_f(&sLine_KPZGeOQc, VOf(Bf6));
    __hv_line_f(&sLine_gzcbqRWL, VOf(Bf7));
    __hv_line_f(&sLine_eECy3UwU, VOf(Bf8));
    __hv_line_f(&sLine_0loD7HCQ, VOf(Bf9));
    __hv_biquad_f(&sBiquad_s_UDfReyvo, VIf(Bf1), VIf(Bf4), VIf(Bf6), VIf(Bf7), VIf(Bf8), VIf(Bf9), VOf(Bf9));
    __hv_add_f(VIf(Bf1), VIf(Bf9), VOf(Bf9));
    __hv_varread_f(&sVarf_SqNh46ez, VOf(Bf1));
    __hv_varread_f(&sVarf_TAKDbpYv, VOf(Bf8));
    __hv_fma_f(VIf(Bf9), VIf(Bf1), VIf(Bf8), VOf(Bf1));
    __hv_fma_f(VIf(Bf3), VIf(Bf2), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_GAUsqdOy, VOf(Bf2));
    __hv_rpole_f(&sRPole_D4wPSGtA, VIf(Bf1), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf1), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_bzumvG94, VIf(Bf2), VOf(Bf3));
    __hv_mul_f(VIf(Bf3), VIf(Bf1), VOf(Bf1));
    __hv_sub_f(VIf(Bf2), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_xvxdu86S, VOf(Bf2));
    __hv_mul_f(VIf(Bf1), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf1), 0.63f, 0.63f, 0.63f, 0.63f, 0.63f, 0.63f, 0.63f, 0.63f);
    __hv_mul_f(VIf(Bf2), VIf(Bf1), VOf(Bf1));
    __hv_add_f(VIf(Bf1), VIf(O1), VOf(O1));
    __hv_varread_f(&sVarf_D4ODvP70, VOf(Bf1));
    __hv_mul_f(VIf(Bf8), VIf(Bf1), VOf(Bf1));
    __hv_neg_f(VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_NovCeAsg, VOf(Bf8));
    __hv_line_f(&sLine_wPo7YUmJ, VOf(Bf2));
    __hv_line_f(&sLine_SjrZRvQT, VOf(Bf3));
    __hv_line_f(&sLine_gMqoMLjT, VOf(Bf9));
    __hv_line_f(&sLine_M3vTPHHM, VOf(Bf7));
    __hv_line_f(&sLine_lBcUu4iW, VOf(Bf6));
    __hv_biquad_f(&sBiquad_s_5EaqLgZT, VIf(Bf0), VIf(Bf2), VIf(Bf3), VIf(Bf9), VIf(Bf7), VIf(Bf6), VOf(Bf6));
    __hv_add_f(VIf(Bf0), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_LpkHT1bh, VOf(Bf0));
    __hv_fma_f(VIf(Bf6), VIf(Bf0), VIf(Bf5), VOf(Bf5));
    __hv_fma_f(VIf(Bf1), VIf(Bf8), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_RCpm0g1F, VOf(Bf8));
    __hv_rpole_f(&sRPole_F8rRMWAU, VIf(Bf5), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf5), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_gu7NQk89, VIf(Bf8), VOf(Bf1));
    __hv_mul_f(VIf(Bf1), VIf(Bf5), VOf(Bf5));
    __hv_sub_f(VIf(Bf8), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_pstujCpM, VOf(Bf8));
    __hv_mul_f(VIf(Bf5), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf5), 0.63f, 0.63f, 0.63f, 0.63f, 0.63f, 0.63f, 0.63f, 0.63f);
    __hv_mul_f(VIf(Bf8), VIf(Bf5), VOf(Bf5));
    __hv_add_f(VIf(Bf5), VIf(O0), VOf(O0));

    // save output vars to output buffer
    __hv_store_f(outputBuffers[0]+n, VIf(O0));
    __hv_store_f(outputBuffers[1]+n, VIf(O1));
  }

  blockStartTimestamp = nextBlock;

  return n4; // return the number of frames processed

}

int Heavy_Dimension_IV::processInline(float *inputBuffers, float *outputBuffers, int n4) {
  hv_assert(!(n4 & HV_N_SIMD_MASK)); // ensure that n4 is a multiple of HV_N_SIMD

  // define the heavy input buffer for 2 channel(s)
  float **const bIn = reinterpret_cast<float **>(hv_alloca(2*sizeof(float *)));
  bIn[0] = inputBuffers+(0*n4);
  bIn[1] = inputBuffers+(1*n4);

  // define the heavy output buffer for 2 channel(s)
  float **const bOut = reinterpret_cast<float **>(hv_alloca(2*sizeof(float *)));
  bOut[0] = outputBuffers+(0*n4);
  bOut[1] = outputBuffers+(1*n4);

  int n = process(bIn, bOut, n4);
  return n;
}

int Heavy_Dimension_IV::processInlineInterleaved(float *inputBuffers, float *outputBuffers, int n4) {
  hv_assert(n4 & ~HV_N_SIMD_MASK); // ensure that n4 is a multiple of HV_N_SIMD

  // define the heavy input buffer for 2 channel(s), uninterleave
  float *const bIn = reinterpret_cast<float *>(hv_alloca(2*n4*sizeof(float)));
  #if HV_SIMD_SSE || HV_SIMD_AVX
  for (int i = 0, j = 0; j < n4; j += 4, i += 8) {
    __m128 a = _mm_load_ps(inputBuffers+i);                // LRLR
    __m128 b = _mm_load_ps(inputBuffers+4+i);              // LRLR
    __m128 x = _mm_shuffle_ps(a, b, _MM_SHUFFLE(2,0,2,0)); // LLLL
    __m128 y = _mm_shuffle_ps(a, b, _MM_SHUFFLE(3,1,3,1)); // RRRR
    _mm_store_ps(bIn+j, x);
    _mm_store_ps(bIn+n4+j, y);
  }
  #elif HV_SIMD_NEON
  for (int i = 0, j = 0; j < n4; j += 4, i += 8) {
    float32x4x2_t a = vld2q_f32(inputBuffers+i); // load and uninterleave
    vst1q_f32(bIn+j, a.val[0]);
    vst1q_f32(bIn+n4+j, a.val[1]);
  }
  #else // HV_SIMD_NONE
  for (int j = 0; j < n4; ++j) {
    bIn[0*n4+j] = inputBuffers[0+2*j];
    bIn[1*n4+j] = inputBuffers[1+2*j];
  }
  #endif

  // define the heavy output buffer for 2 channel(s)
  float *const bOut = reinterpret_cast<float *>(hv_alloca(2*n4*sizeof(float)));

  int n = processInline(bIn, bOut, n4);

  // interleave the heavy output into the output buffer
  #if HV_SIMD_AVX
  for (int i = 0, j = 0; j < n4; j += 8, i += 16) {
    __m256 x = _mm256_load_ps(bOut+j);    // LLLLLLLL
    __m256 y = _mm256_load_ps(bOut+n4+j); // RRRRRRRR
    __m256 a = _mm256_unpacklo_ps(x, y);  // LRLRLRLR
    __m256 b = _mm256_unpackhi_ps(x, y);  // LRLRLRLR
    _mm256_store_ps(outputBuffers+i, a);
    _mm256_store_ps(outputBuffers+8+i, b);
  }
  #elif HV_SIMD_SSE
  for (int i = 0, j = 0; j < n4; j += 4, i += 8) {
    __m128 x = _mm_load_ps(bOut+j);    // LLLL
    __m128 y = _mm_load_ps(bOut+n4+j); // RRRR
    __m128 a = _mm_unpacklo_ps(x, y);  // LRLR
    __m128 b = _mm_unpackhi_ps(x, y);  // LRLR
    _mm_store_ps(outputBuffers+i, a);
    _mm_store_ps(outputBuffers+4+i, b);
  }
  #elif HV_SIMD_NEON
  // https://community.arm.com/groups/processors/blog/2012/03/13/coding-for-neon--part-5-rearranging-vectors
  for (int i = 0, j = 0; j < n4; j += 4, i += 8) {
    float32x4_t x = vld1q_f32(bOut+j);
    float32x4_t y = vld1q_f32(bOut+n4+j);
    float32x4x2_t z = {x, y};
    vst2q_f32(outputBuffers+i, z); // interleave and store
  }
  #else // HV_SIMD_NONE
  for (int i = 0; i < 2; ++i) {
    for (int j = 0; j < n4; ++j) {
      outputBuffers[i+2*j] = bOut[i*n4+j];
    }
  }
  #endif

  return n;
}
