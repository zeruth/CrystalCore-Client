#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: hkMonitorStreamAnalyzer::Node::ScaleTimerRecursive */
GEN_LIB GEN_FRAME unsigned int F_00daa340(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xdaa340u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  int iVar1;
  
  *((float *)GEN_TOP((param_1 + param_2 * 4))) = *((float *)GEN_TOP((param_1 + param_2 * 4))) * param_3;
  *((undefined2 *)GEN_TOP((param_1 + 0x30 + param_2 * 2))) = 0;
  iVar1 = 0;
  if (0 < *((int *)GEN_TOP((param_1 + 0x4c)))) {
    do {
      F_00daa340(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x48))) + iVar1 * 4))),param_2,param_3);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *((int *)GEN_TOP((param_1 + 0x4c))));
  }
  return;
}

/* ref: hkMonitorStreamAnalyzer::NavigateMonitors */
GEN_LIB GEN_FRAME uint F_00daa3a0(GEN_P(char * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdaa3a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint * puVar5;
  uint uVar6;
  uint * puVar7;
  
  if (param_2 == 0) {
    return 0;
  }
  if (*param_1 != '\0') {
    uVar6 = *((uint *)GEN_TOP((param_2 + 0x60)));
    puVar7 = *((uint * PTR32 *)GEN_TOP((uVar6 + 0x48)));
    uVar3 = *puVar7;
    if (uVar3 == param_2) {
      if (*((int *)GEN_TOP((uVar6 + 0x60))) != 0) {
        param_2 = uVar6;
      }
    }
    else {
      iVar2 = 0;
      puVar5 = puVar7;
      if (0 < *((int *)GEN_TOP((uVar6 + 0x4c)))) {
        do {
          if (*puVar5 == param_2) {
            uVar3 = puVar7[iVar2 - 1];
            break;
          }
          iVar2 = iVar2 + 1;
          puVar5 = puVar5 + 1;
        } while (iVar2 < *((int *)GEN_TOP((uVar6 + 0x4c))));
      }
      iVar2 = *((int *)GEN_TOP((uVar3 + 0x4c)));
      param_2 = uVar3;
      while ((0 < iVar2 && ((*((byte *)GEN_TOP((param_2 + 0x68))) & 1) != 0))) {
        param_2 = *((uint *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x48))) - 4 + iVar2 * 4)));
        iVar2 = *((int *)GEN_TOP((param_2 + 0x4c)));
      }
    }
  }
  uVar6 = param_2;
  if (param_1[1] != '\0') {
    uVar3 = param_2;
    if ((*((int *)GEN_TOP((param_2 + 0x4c))) < 1) || (uVar3 = param_2, (*((byte *)GEN_TOP((param_2 + 0x68))) & 1) == 0)) {
      do {
        uVar1 = *((uint *)GEN_TOP((uVar3 + 0x60)));
        iVar2 = *((int *)GEN_TOP((uVar1 + 0x4c)));
        iVar4 = 0;
        if (0 < iVar2) {
          puVar7 = *((uint * PTR32 *)GEN_TOP((uVar1 + 0x48)));
          do {
            if ((*puVar7 == uVar3) && (iVar4 < iVar2 - 1)) {
              uVar6 = *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar1 + 0x48))) + 4 + iVar4 * 4)));
              goto LAB_00daa46a;
            }
            iVar4 = iVar4 + 1;
            puVar7 = puVar7 + 1;
          } while (iVar4 < iVar2);
        }
        uVar3 = uVar1;
      } while (*((int *)GEN_TOP((uVar1 + 0x60))) != 0);
    }
    else {
      uVar6 = **((uint * PTR32 *)GEN_TOP((param_2 + 0x48)));
    }
  }
LAB_00daa46a: ;
  if (param_1[2] != '\0') {
    if ((*((uint *)GEN_TOP((uVar6 + 0x68))) & 1) == 0) {
      uVar3 = *((uint *)GEN_TOP((uVar6 + 0x60)));
      if (*((int *)GEN_TOP((uVar3 + 0x60))) != 0) {
        *((uint *)GEN_TOP((uVar3 + 0x68))) = *((uint *)GEN_TOP((uVar3 + 0x68))) & 0xfffffffe;
        uVar6 = uVar3;
      }
    }
    else {
      *((uint *)GEN_TOP((uVar6 + 0x68))) = *((uint *)GEN_TOP((uVar6 + 0x68))) & 0xfffffffe;
    }
  }
  if (param_1[3] != '\0') {
    if ((*((uint *)GEN_TOP((uVar6 + 0x68))) & 1) == 0) {
      *((uint *)GEN_TOP((uVar6 + 0x68))) = *((uint *)GEN_TOP((uVar6 + 0x68))) | 1;
    }
    *((uint *)GEN_TOP((uVar6 + 0x68))) = *((uint *)GEN_TOP((uVar6 + 0x68))) | 1;
  }
  return uVar6;
}

/* ref: hkMonitorStreamAnalyzer::GetMaxNameWidth */
GEN_LIB GEN_FRAME uint F_00daa4c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xdaa4c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = F_00da0e60(*((undefined4 *)GEN_TOP((param_1 + 100))));
  uVar1 = uVar1 + 8 + param_2 * param_3;
  if (((char)param_4 != '\0') && ((*((byte *)GEN_TOP((param_1 + 0x68))) & 1) == 0)) {
    return uVar1;
  }
  iVar3 = 0;
  if (0 < *((int *)GEN_TOP((param_1 + 0x4c)))) {
    do {
      uVar2 = F_00daa4c0(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x48))) + iVar3 * 4))),param_2 + 1,
                              param_3,param_4);
      if ((int)uVar1 < (int)uVar2) {
        uVar1 = uVar2;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *((int *)GEN_TOP((param_1 + 0x4c))));
  }
  return uVar1;
}

/* ref: hkMonitorStreamAnalyzer::WriteStatisticsRec */
GEN_LIB GEN_FRAME unsigned int F_00daa540(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(ushort * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0xdaa540u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(ushort * param_2 = (ushort *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_FRAME_DECL_TOP(0x108, 8, 4);
  ushort uVar1;
  int iVar2;
  uint uVar3;
  ushort * puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  float fVar8;
  char * pcVar9;
  
  iVar2 = (int)param_2;
  if (param_3 != 0) {
    if (1 < param_3) {
      iVar5 = param_3 - 1;
      do {
        F_00da00e0(param_1,&REFG(undefined, 0x113c4f0));
        iVar5 = iVar5 - 1;
      } while (iVar5 != 0);
    }
    uVar6 = 0;
    iVar7 = 0;
    puVar4 = ((ushort *)GEN_TOP(((int)param_2 + 0x32)));
    iVar5 = 2;
    do {
      uVar1 = puVar4[-1];
      if ((uVar1 != 0) && (iVar7 = iVar7 + 1, uVar6 < uVar1)) {
        uVar6 = (uint)uVar1;
      }
      uVar1 = *puVar4;
      if ((uVar1 != 0) && (iVar7 = iVar7 + 1, uVar6 < uVar1)) {
        uVar6 = (uint)uVar1;
      }
      uVar1 = puVar4[1];
      if ((uVar1 != 0) && (iVar7 = iVar7 + 1, uVar6 < uVar1)) {
        uVar6 = (uint)uVar1;
      }
      uVar1 = puVar4[2];
      if ((uVar1 != 0) && (iVar7 = iVar7 + 1, uVar6 < uVar1)) {
        uVar6 = (uint)uVar1;
      }
      uVar1 = puVar4[3];
      if ((uVar1 != 0) && (iVar7 = iVar7 + 1, uVar6 < uVar1)) {
        uVar6 = (uint)uVar1;
      }
      uVar1 = puVar4[4];
      if ((uVar1 != 0) && (iVar7 = iVar7 + 1, uVar6 < uVar1)) {
        uVar6 = (uint)uVar1;
      }
      puVar4 = puVar4 + 6;
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
    F_00da0ce0(((undefined1 *)(gen_frame + 0x0)),200,((char *)REFP(0x113c4e8)),*((undefined4 *)GEN_TOP(((int)param_2 + 100))),uVar6);
    if (uVar6 < 2) {
      F_00da0ce0(((undefined1 *)(gen_frame + 0x0)),200,&REFG(undefined, 0x113bdcc),*((undefined4 *)GEN_TOP(((int)param_2 + 100))));
    }
    else if ((GEN_ISNAN(param_4) || GEN_ISNAN(REFG(float, 0x1087f04))) ==
             ((GEN_ISNAN(param_4) || GEN_ISNAN(REFG(float, 0x1087f04))) || param_4 == REFG(float, 0x1087f04))) {
      F_00da0ce0(((undefined1 *)(gen_frame + 0x0)),200,((char *)REFP(0x113c4dc)),*((undefined4 *)GEN_TOP(((int)param_2 + 100))),
                         (int)(ulonglong)gen_d2bits((double)((float)uVar6 * param_4)),
                         (int)((ulonglong)gen_d2bits((double)((float)uVar6 * param_4)) >> 0x20));
    }
    else {
      F_00da0ce0(((undefined1 *)(gen_frame + 0x0)),200,((char *)REFP(0x113c4a0)),*((undefined4 *)GEN_TOP(((int)param_2 + 100))),uVar6);
    }
    F_00da00e0(param_1,((char *)REFP(0x113c4d4)),((undefined1 *)(gen_frame + 0x0)));
    iVar5 = 3;
    do {
      F_00da00e0(param_1,&REFG(undefined, 0x113c4f0));
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
    if (iVar7 < 1) {
      F_00da00e0(param_1,((char *)REFP(0x113c4c8)),0,0);
    }
    else {
      param_2 = ((ushort *)GEN_TOP(((int)param_2 + 0x30)));
      (*(int *)(gen_frame + 0x100)) = iVar7;
      iVar5 = 0;
      do {
        uVar3 = (uint)*param_2;
        if (uVar3 != 0) {
          fVar8 = *((float *)GEN_TOP((iVar2 + iVar5 * 4))) * param_4;
          if (uVar3 < uVar6) {
            fVar8 = fVar8 * ((float)uVar6 / (float)uVar3);
          }
          iVar7 = (*(int *)(gen_frame + 0x100)) - 1;
          (*(int *)(gen_frame + 0x100)) = iVar7;
          if (iVar7 == 0) {
            pcVar9 = ((char *)REFP(0x113c4c8));
          }
          else {
            pcVar9 = ((char *)REFP(0x113c488));
          }
          F_00da00e0(param_1,pcVar9,GEN_LO32((undefined8)gen_d2bits((double)fVar8)),GEN_HI32((undefined8)gen_d2bits((double)fVar8)));
        }
        param_2 = param_2 + 1;
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0xc);
    }
  }
  iVar5 = 0;
  if (0 < *((int *)GEN_TOP((iVar2 + 0x4c)))) {
    do {
      F_00daa540(param_1,((ushort *)GEN_TOP(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 0x48))) + iVar5 * 4))))),
                         param_3 + 1,param_4);
      iVar5 = iVar5 + 1;
    } while (iVar5 < *((int *)GEN_TOP((iVar2 + 0x4c))));
  }
  return;
}

/* ref: hkMonitorStreamAnalyzer::Node::FindChildByName */
GEN_LIB GEN_FRAME uint F_00daa7a0(GEN_P(int in_edi, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdaa7a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_edi = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *((int *)GEN_TOP((in_edi + 0x4c)))) {
    do {
      uVar1 = F_00da0d20(param_2,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((in_edi + 0x48))) + iVar2 * 4))) + 100))));
      if (uVar1 == 0) {
        return *((uint *)GEN_TOP((*((int *)GEN_TOP((in_edi + 0x48))) + iVar2 * 4)));
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *((int *)GEN_TOP((in_edi + 0x4c))));
  }
  if ((param_3 != '\0') && (0 < *((int *)GEN_TOP((in_edi + 0x4c))))) {
    return **((uint * PTR32 *)GEN_TOP((in_edi + 0x48)));
  }
  return 0;
}

/* ref: hkMonitorStreamAnalyzer::Node::FindNextChildByName */
GEN_LIB GEN_FRAME uint F_00daa800(GEN_P(int in_edx, unsigned int gen_a0), GEN_P(int in_edi, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdaa800u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_edx = (int)gen_a0;)
  GEN_PIN(int in_edi = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  int iVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  iVar1 = *((int *)GEN_TOP((in_edi + 0x4c)));
  iVar4 = 0;
  if (0 < iVar1) {
    piVar3 = *((int * PTR32 *)GEN_TOP((in_edi + 0x48)));
    do {
      if (*piVar3 == in_edx) break;
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar4 < iVar1);
  }
  iVar4 = iVar4 + 1;
  if (iVar4 < iVar1) {
    do {
      uVar2 = F_00da0d20(param_3,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((in_edi + 0x48))) + iVar4 * 4))) + 100))));
      if (uVar2 == 0) {
        return *((uint *)GEN_TOP((*((int *)GEN_TOP((in_edi + 0x48))) + iVar4 * 4)));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *((int *)GEN_TOP((in_edi + 0x4c))));
  }
  return 0;
}

/* ref: hkMonitorStreamAnalyzer::FindDeepestNodeAtTime */
GEN_LIB GEN_FRAME uint F_00daa860(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(double param_3, double gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xdaa860u, gen_a0, gen_a1, (unsigned int)gen_trace_d(gen_a2), (unsigned int)(gen_trace_d(gen_a2) >> 32));
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(double param_3 = (double)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if ((param_2 == 0) ||
     (uVar3 = param_2, uVar2 = param_2,
     !(param_3 <= (double)*((float *)GEN_TOP((param_2 + param_4 * 4))) + *((double *)GEN_TOP((param_2 + 0x58)))))) {
    uVar3 = param_1;
    uVar2 = param_1;
  }
  while (uVar1 = uVar3, uVar1 != 0) {
    uVar3 = F_00daf820(uVar1,param_3,param_4);
    uVar2 = uVar1;
  }
  return uVar2;
}

/* ref: hkMonitorStreamAnalyzer::ColorTable::FindColor */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daa8c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdaa8c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 0xc)))) {
    do {
      uVar1 = F_00da0d70(*((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + iVar2 * 8))) & 0xfffffffe,param_1);
      if (uVar1 == 0) {
        return *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4 + iVar2 * 8)));
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *((int *)GEN_TOP(((int)this + 0xc))));
  }
  return *((uint *)GEN_TOP(((int)this + 0x14)));
}

/* ref: hkMonitorStreamAnalyzer::ShiftStartTimes */
GEN_LIB GEN_FRAME unsigned int F_00daa920(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(double param_2, double gen_a1), GEN_P(double param_3, double gen_a2))
{
  GEN_ENTER(0xdaa920u, gen_a0, (unsigned int)gen_trace_d(gen_a1), (unsigned int)(gen_trace_d(gen_a1) >> 32), (unsigned int)gen_trace_d(gen_a2));
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(double param_2 = (double)gen_a1;)
  GEN_PIN(double param_3 = (double)gen_a2;)
  double * pdVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = *((int *)GEN_TOP((*param_1 + iVar3 * 4)));
      if ((*((int *)GEN_TOP((iVar2 + 0x6c))) != 2) &&
         (pdVar1 = ((double *)GEN_TOP((iVar2 + 0x58))),
         (!GEN_ISNAN(param_2) && !GEN_ISNAN(*pdVar1)) && (!(param_2 < *pdVar1) && param_2 != *pdVar1))) {
        *((double *)GEN_TOP((iVar2 + 0x58))) = *((double *)GEN_TOP((iVar2 + 0x58))) + param_3;
      }
      F_00daa920(((int *)GEN_TOP((*((int *)GEN_TOP((*param_1 + iVar3 * 4))) + 0x48))),param_2,param_3);
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  return;
}

/* ref: FUN_00daa990 */
GEN_LIB GEN_FRAME byte F_00daa990(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(double param_2, double gen_a1), GEN_P(double * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdaa990u, gen_a0, (unsigned int)gen_trace_d(gen_a1), (unsigned int)(gen_trace_d(gen_a1) >> 32), gen_a2);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(double param_2 = (double)gen_a1;)
  GEN_PIN(double * param_3 = (double *)(uintptr_t)gen_a2;)
  int iVar1;
  byte bVar2;
  int iVar3;
  double dVar4;
  
  iVar3 = 0;
  if (0 < param_1[1]) {
    do {
      iVar1 = *((int *)GEN_TOP((iVar3 * 4 + *param_1)));
      if (*((int *)GEN_TOP((iVar1 + 0x6c))) != 2) {
        dVar4 = *((double *)GEN_TOP((iVar1 + 0x58)));
        if ((dVar4 < param_2) &&
           ((!GEN_ISNAN(*param_3 - dVar4) && !GEN_ISNAN(param_2)) && !(*param_3 - dVar4 <= param_2))) {
          return 1;
        }
        if (dVar4 < *param_3) {
          dVar4 = *param_3;
        }
        *param_3 = dVar4;
      }
      bVar2 = F_00daa990(((int *)GEN_TOP((*((int *)GEN_TOP((*param_1 + iVar3 * 4))) + 0x48))),param_2,param_3);
      if (bVar2 != 0) {
        return 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  return 0;
}

/* ref: hkMonitorStreamAnalyzer::ExtractStringMap */
GEN_LIB GEN_FRAME unsigned int F_00daaa30(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdaaa30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  uint uVar1;
  uint * puVar2;
  
  puVar2 = param_1;
  if (param_1 < param_2) {
    do {
      uVar1 = *puVar2;
      if (uVar1 < 0x15) {
switchD_00daaa6c_caseD_4e: ;
        puVar2 = puVar2 + 1;
      }
      else {
        F_00dbd8b0(param_3 GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),uVar1,uVar1);
        switch((unsigned int)(uintptr_t)(*((undefined1 *)GEN_TOP(*puVar2)))) {
        case 0x45: ;
        case 0x53: ;
        case 0x54: ;
        case 0x6c: ;
          puVar2 = puVar2 + 3;
          break;
        default: ;
          goto switchD_00daaa6c_caseD_46;
        case 0x4c: ;
        case 0x4f: ;
          F_00dbd8b0(param_3 GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),puVar2[3],puVar2[3]);
          puVar2 = puVar2 + 4;
          break;
        case 0x4d: ;
          puVar2 = puVar2 + 2;
          break;
        case 0x4e: ;
        case 0x50: ;
        case 0x70: ;
          goto switchD_00daaa6c_caseD_4e;
        }
      }
    } while (puVar2 < param_2);
switchD_00daaa6c_caseD_46: ;
  }
  return;
}

/* ref: hkMonitorStreamAnalyzer::CaptureFrameDetails */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daaae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xdaaae0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  int * piVar1;
  undefined * pvVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_3 - param_2;
  if ((int)((*((uint *)GEN_TOP(((int)this + 0x14))) & 0x3fffffff) - *((int *)GEN_TOP(((int)this + 0x10)))) < iVar4) {
    *param_1 = 0;
    return (uint)param_1;
  }
  piVar1 = ((int *)GEN_TOP((*(int *)this + *((int *)GEN_TOP((param_4 + 0x18))) * 0xc)));
  if (piVar1[1] == (*((uint *)GEN_TOP((*(int *)this + 8 + *((int *)GEN_TOP((param_4 + 0x18))) * 0xc))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar1,0x24);
  }
  pvVar2 = ((undefined *)GEN_TOP((*piVar1 + piVar1[1] * 0x24)));
  if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
    F_00da9f50(pvVar2 GEN_EDX_ARG);
  }
  pvVar2 = ((undefined *)GEN_TOP((*piVar1 + piVar1[1] * 0x24)));
  piVar1[1] = piVar1[1] + 1;
  F_00d91540(pvVar2 GEN_EDX_ARG,param_4);
  *((undefined4 *)GEN_TOP(((int)pvVar2 + 4))) = *((undefined4 *)GEN_TOP((param_4 + 4)));
  *((undefined4 *)GEN_TOP(((int)pvVar2 + 8))) = *((undefined4 *)GEN_TOP((param_4 + 8)));
  *((undefined4 *)GEN_TOP(((int)pvVar2 + 0xc))) = *((undefined4 *)GEN_TOP((param_4 + 0xc)));
  *((undefined4 *)GEN_TOP(((int)pvVar2 + 0x10))) = *((undefined4 *)GEN_TOP((param_4 + 0x10)));
  *((undefined4 *)GEN_TOP(((int)pvVar2 + 0x14))) = *((undefined4 *)GEN_TOP((param_4 + 0x14)));
  *((undefined4 *)GEN_TOP(((int)pvVar2 + 0x18))) = *((undefined4 *)GEN_TOP((param_4 + 0x18)));
  *((undefined4 *)GEN_TOP(((int)pvVar2 + 0x1c))) = *((undefined4 *)GEN_TOP((param_4 + 0x1c)));
  *((undefined4 *)GEN_TOP(((int)pvVar2 + 0x20))) = *((undefined4 *)GEN_TOP((param_4 + 0x20)));
  iVar3 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((int *)GEN_TOP(((int)pvVar2 + 0x1c))) = iVar3;
  *((int *)GEN_TOP(((int)pvVar2 + 0x20))) = iVar3 + iVar4;
  iVar3 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((int *)GEN_TOP(((int)this + 0x10))) = iVar3 + iVar4;
  F_00da1010(*((int *)GEN_TOP(((int)this + 0xc))) + iVar3,param_2,iVar4);
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: hkMonitorStreamAnalyzer::GetTimerSamples */
GEN_LIB GEN_FRAME uint F_00daabe0(GEN_P(int * in_esi, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(uint param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xdaabe0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(int * in_esi = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(uint param_6 = (uint)gen_a5;)
  int iVar1;
  uint * puVar2;
  int * piVar3;
  int * piVar4;
  int iVar5;
  uint uVar6;
  double dVar7;
  double dVar8;
  double local_10;
  int local_8;
  
  piVar3 = *((int * PTR32 *)GEN_TOP((param_2 + 0x48)));
  iVar5 = *piVar3;
  iVar1 = 0;
  piVar4 = piVar3;
  while( true ) {
    if ((iVar5 == 0) || (*((int *)GEN_TOP((iVar5 + 0x6c))) != 2)) goto LAB_00daac11;
    iVar1 = iVar1 + 1;
    piVar4 = piVar4 + 1;
    if (*((int *)GEN_TOP((param_2 + 0x4c))) <= iVar1) break;
    iVar5 = *piVar4;
  }
  iVar5 = 0;
LAB_00daac11: ;
  iVar1 = piVar3[*((int *)GEN_TOP((param_2 + 0x4c))) - 1];
  puVar2 = ((uint *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x4c))) - 1)));
  if (iVar1 != 0) {
    piVar3 = piVar3 + (int)puVar2;
    while (*((int *)GEN_TOP((iVar1 + 0x6c))) == 2) {
      piVar3 = piVar3 - 1;
      puVar2 = ((uint *)GEN_TOP(((int)puVar2 - 1)));
      if ((int)puVar2 < 0) {
        return (uint)puVar2;
      }
      iVar1 = *piVar3;
      if (iVar1 == 0) {
        return (uint)puVar2;
      }
    }
    if (iVar5 != 0) {
      dVar7 = *((double *)GEN_TOP((iVar5 + 0x58)));
      local_10 = 0.0;
      local_8 = param_5;
      while ((local_8 != 0 && (local_10 < dVar7 - (double)param_3))) {
        local_10 = local_10 + (double)param_4;
        if (in_esi[1] == (in_esi[2] & 0x3fffffffU)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),in_esi,4);
        }
        *((undefined4 *)GEN_TOP((*in_esi + in_esi[1] * 4))) = 0;
        in_esi[1] = in_esi[1] + 1;
        local_8 = local_8 - 1;
      }
      dVar7 = ((double)*((float *)GEN_TOP((iVar1 + param_6 * 4))) + *((double *)GEN_TOP((iVar1 + 0x58)))) -
              (double)param_3;
      dVar8 = (((double)param_3 + dVar7) - *((double *)GEN_TOP((iVar5 + 0x58)))) + REFG(double, 0x1088130);
      *((double *)GEN_TOP((param_2 + 0x58))) = *((double *)GEN_TOP((iVar5 + 0x58)));
      uVar6 = 0;
      *((float *)GEN_TOP((param_2 + param_6 * 4))) = (float)dVar8;
      if (local_8 == 0) {
        return param_6;
      }
      do {
        if (!(local_10 < dVar7)) {
          return param_6;
        }
        uVar6 = F_00daa860(param_2,uVar6,(double)param_3 + local_10,param_6);
        puVar2 = ((uint *)GEN_TOP(0x0));
        if (uVar6 != 0) {
          if (in_esi[1] == (in_esi[2] & 0x3fffffffU)) {
            F_00d95710(&REFG(undefined * PTR32, 0x13516ac),in_esi,4);
          }
          puVar2 = ((uint *)GEN_TOP((*in_esi + in_esi[1] * 4)));
          *puVar2 = uVar6;
          in_esi[1] = in_esi[1] + 1;
        }
        local_8 = local_8 - 1;
        local_10 = (double)param_4 + local_10;
      } while (local_8 != 0);
    }
  }
  return (uint)puVar2;
}

/* ref: hkMonitorStreamAnalyzer::Node::Node */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daada0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdaada0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int iVar1;
  undefined2 * puVar2;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0x80000000;
  *((int *)GEN_TOP(((int)this + 0x60))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = param_3;
  if (param_1 != 0) {
    if (*((uint *)GEN_TOP((param_1 + 0x4c))) == (*((uint *)GEN_TOP((param_1 + 0x50))) & 0x3fffffff)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),((int *)GEN_TOP((param_1 + 0x48))),4);
    }
    *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x48))) + *((int *)GEN_TOP((param_1 + 0x4c))) * 4))) = this;
    *((int *)GEN_TOP((param_1 + 0x4c))) = *((int *)GEN_TOP((param_1 + 0x4c))) + 1;
  }
  iVar1 = 0;
  puVar2 = ((undefined2 *)GEN_TOP(((int)this + 0x30)));
  do {
    *((undefined4 *)GEN_TOP(((int)this + iVar1 * 4))) = 0;
    *puVar2 = 0;
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar1 < 0xc);
  *((undefined8 *)GEN_TOP(((int)this + 0x58))) = 0;
  return (uint)this;
}

/* ref: hkMonitorStreamAnalyzer::Node::~Node */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00daae40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdaae40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (0 < *((int *)GEN_TOP(((int)this + 0x4c)))) {
    iVar3 = 0;
    do {
      iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x48))) + iVar3 * 4)));
      if (iVar1 != 0) {
        F_00db0890(iVar1 GEN_EDX_FWD,1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *((int *)GEN_TOP(((int)this + 0x4c))));
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x50)));
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x48))),uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  return uVar2;
}

/* ref: hkMonitorStreamAnalyzer::CreateChildNode */
GEN_LIB GEN_FRAME uint F_00daaea0(GEN_P(int in_edi, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xdaaea0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int in_edi = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  int iVar1;
  uint uVar2;
  LPVOID pvVar3;
  undefined * this;
  int iVar4;
  
  if ((param_4 != '\0') && (iVar4 = 0, in_edi != 0)) {
    for (; (param_2 != 0 && (iVar4 < *((int *)GEN_TOP((in_edi + 0x4c))))); iVar4 = iVar4 + 1) {
      iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((in_edi + 0x48))) + iVar4 * 4)));
      if (*((int *)GEN_TOP((iVar1 + 100))) != 0) {
        uVar2 = F_00da0d20(*((undefined4 *)GEN_TOP((iVar1 + 100))),param_2);
        if (uVar2 == 0) {
          return *((uint *)GEN_TOP((*((int *)GEN_TOP((in_edi + 0x48))) + iVar4 * 4)));
        }
      }
    }
  }
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar3 + 0x2c))) + 4))))
                           (*((int * PTR32 *)GEN_TOP(((int)pvVar3 + 0x2c))) GEN_EDX_ARG,0x70)));
  if (this != ((undefined *)GEN_TOP(0x0))) {
    uVar2 = F_00daada0(this GEN_EDX_ARG,in_edi,param_2,param_3);
    return uVar2;
  }
  return 0;
}

/* ref: hkMonitorStreamAnalyzer::MergeTreeIntoColumn */
GEN_LIB GEN_FRAME unsigned int F_00daaf20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4)
{
  GEN_ENTER(0xdaaf20u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  memcpy(&gen_args[4], &gen_a4, sizeof gen_a4);
  int iVar1;
  int iVar2;
  byte bVar3;
  LPVOID pvVar4;
  undefined * this;
  uint uVar5;
  int iVar6;
  float fVar7;
  int local_8;
  
  iVar6 = (*(int *)&gen_args[2]);
  if (0xb < (*(int *)&gen_args[2])) {
    iVar6 = 0xb;
  }
  (*(int *)&gen_args[2]) = 0;
  local_8 = 0;
  if (0 < *((int *)GEN_TOP(((*(int *)&gen_args[1]) + 0x4c)))) {
    fVar7 = REFG(float, 0x1087f04) - (*(float *)&gen_args[4]);
    do {
      iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((*(int *)&gen_args[1]) + 0x48))) + local_8 * 4)));
      bVar3 = F_00daa2c0((*(int *)&gen_args[0]),*((undefined4 *)GEN_TOP((iVar1 + 100))),&(*(int *)&gen_args[2]));
      iVar2 = (*(int *)&gen_args[2]);
      if (bVar3 == 0) {
        pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
        this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar4 + 0x2c))) + 4))))
                                 (*((int * PTR32 *)GEN_TOP(((int)pvVar4 + 0x2c))) GEN_EDX_ARG,0x70)));
        if (this == ((undefined *)GEN_TOP(0x0))) {
          uVar5 = 0;
        }
        else {
          uVar5 = F_00daada0(this GEN_EDX_ARG,(*(int *)&gen_args[0]),*((undefined4 *)GEN_TOP((iVar1 + 100))),*((undefined4 *)GEN_TOP((iVar1 + 0x6c)))
                            );
        }
      }
      else {
        uVar5 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((*(int *)&gen_args[0]) + 0x48))) + (*(int *)&gen_args[2]) * 4)));
      }
      *((float *)GEN_TOP((uVar5 + iVar6 * 4))) =
           *((float *)GEN_TOP((iVar1 + (*(int *)&gen_args[3]) * 4))) * fVar7 + *((float *)GEN_TOP((uVar5 + iVar6 * 4)));
      *((undefined2 *)GEN_TOP((uVar5 + 0x30 + iVar6 * 2))) = *((undefined2 *)GEN_TOP((iVar1 + 0x30 + (*(int *)&gen_args[3]) * 2)));
      F_00daaf20(uVar5,iVar1,iVar6,(*(int *)&gen_args[3]),(*(float *)&gen_args[4]));
      iVar1 = *((int *)GEN_TOP(((*(int *)&gen_args[1]) + 0x4c)));
      if (iVar2 < iVar1 - 1) {
        (*(int *)&gen_args[2]) = iVar2 + 1;
      }
      local_8 = local_8 + 1;
    } while (local_8 < iVar1);
  }
  return 0;
}

/* ref: hkMonitorStreamAnalyzer::MergeTreesWithScale */
GEN_LIB GEN_FRAME unsigned int F_00dab030(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(float param_5, float gen_a4))
{
  GEN_ENTER(0xdab030u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  F_00daa340(param_1,param_3,param_5);
  F_00daaf20(param_1,param_2,param_3,param_4,param_5);
  return;
}

/* ref: hkMonitorStreamAnalyzer::ShowCombinedThreadSummaryRec */
GEN_LIB GEN_FRAME uint F_00dab070(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(int * param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xdab070u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(int * param_6 = (int *)(uintptr_t)gen_a5;)
  GEN_FRAME_DECL_TOP(0x30, 0, 4);
  int * piVar1;
  undefined4 uVar2;
  int iVar3;
  ushort * puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  double dVar10;
  
  piVar1 = param_6;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0x80000000;
  F_00da04b0(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
  iVar8 = param_4 + param_5;
  (*(int *)(gen_frame + 0x28)) = iVar8;
  if (param_3 != 0) {
    if ((char)param_6[4] != '\0') {
      if (param_6[5] == param_2) {
        uVar2 = CONCAT31((int3)((uint)param_6[5] >> 8),(char)param_6[6]);
      }
      else {
        uVar2 = 0x20;
      }
      F_00d9fe60(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,uVar2);
    }
    iVar3 = param_6[2] * (param_3 - 1);
    if (0 < iVar3) {
      do {
        F_00d9fe60(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,0x20);
        iVar3 = iVar3 - 1;
      } while (iVar3 != 0);
    }
    if ((char)param_6[4] != '\0') {
      if (*((int *)GEN_TOP((param_2 + 0x4c))) < 1) {
        uVar6 = 0x20;
      }
      else if ((*((byte *)GEN_TOP((param_2 + 0x68))) & 1) == 0) {
        uVar6 = (uint)*(byte *)(param_6 + 6);
      }
      else {
        uVar6 = CONCAT31((int3)((uint)param_2 >> 8),*((undefined1 *)GEN_TOP(((int)param_6 + 0x19))));
      }
      F_00d9fe60(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,uVar6);
    }
    iVar7 = 0;
    iVar9 = 0;
    iVar3 = 0;
    (*(int *)(gen_frame + 0x18)) = 0;
    if (1 < iVar8) {
      puVar4 = ((ushort *)GEN_TOP((param_2 + 0x32)));
      iVar5 = (iVar8 - 2U >> 1) + 1;
      iVar3 = iVar5 * 2;
      do {
        iVar7 = iVar7 + (uint)puVar4[-1];
        iVar9 = iVar9 + (uint)*puVar4;
        puVar4 = puVar4 + 2;
        iVar5 = iVar5 - 1;
        iVar8 = (*(int *)(gen_frame + 0x28));
      } while (iVar5 != 0);
    }
    uVar6 = 0;
    if (iVar3 < iVar8) {
      uVar6 = (uint)*((ushort *)GEN_TOP((param_2 + 0x30 + iVar3 * 2)));
    }
    if ((*((char *)GEN_TOP(((int)param_6 + 0x1b))) == '\0') || (*((int *)GEN_TOP((param_2 + 0x6c))) != 0)) {
      uVar2 = *((undefined4 *)GEN_TOP((param_2 + 100)));
    }
    else {
      iVar3 = *((int *)GEN_TOP((param_2 + 0x4c)));
      if (0 < iVar3) {
        do {
          iVar3 = iVar3 - 1;
        } while (iVar3 != 0);
      }
      uVar2 = *((undefined4 *)GEN_TOP((param_2 + 100)));
    }
    F_00da00e0(((undefined1 *)(gen_frame + 0xc)),((char *)REFP(0x113c500)),uVar2,uVar6 + iVar7 + iVar9);
    iVar3 = 0;
    (*(float *)(gen_frame + 0x24)) = 0.0;
    param_6 = ((int *)GEN_TOP(0x0));
    (*(float *)(gen_frame + 0x1c)) = 0.0;
    (*(int *)(gen_frame + 0x20)) = 0;
    if (0 < iVar8) {
      puVar4 = ((ushort *)GEN_TOP((param_2 + 0x30)));
      do {
        if (*((char *)GEN_TOP(((int)piVar1 + 0x1a))) == '\0') {
          iVar8 = ((piVar1[3] * (param_3 - 1) + piVar1[1] * iVar3) - (*(int *)(gen_frame + 0x4))) + *piVar1;
          if (0 < iVar8) {
            (*(int *)(gen_frame + 0x18)) = iVar8;
            do {
              F_00d9fe60(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,0x20);
              iVar8 = (*(int *)(gen_frame + 0x18)) - 1;
              (*(int *)(gen_frame + 0x18)) = iVar8;
            } while (iVar8 != 0);
          }
        }
        else {
          F_00d9fe60(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,9);
        }
        dVar10 = (double)*((float *)GEN_TOP((param_2 + iVar3 * 4)));
        F_00da00e0(((undefined1 *)(gen_frame + 0xc)),((char *)REFP(0x113c4f4)),(int)(ulonglong)gen_d2bits(dVar10),
                          (int)((ulonglong)gen_d2bits(dVar10) >> 0x20),(uint)*puVar4);
        if (iVar3 < param_4) {
          param_6 = ((int *)GEN_TOP(((int)param_6 + (uint)*puVar4)));
          (*(float *)(gen_frame + 0x24)) = *((float *)GEN_TOP((param_2 + iVar3 * 4))) + (*(float *)(gen_frame + 0x24));
        }
        else {
          (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x20)) + (uint)*puVar4;
          (*(float *)(gen_frame + 0x1c)) = *((float *)GEN_TOP((param_2 + iVar3 * 4))) + (*(float *)(gen_frame + 0x1c));
        }
        iVar3 = iVar3 + 1;
        puVar4 = puVar4 + 1;
        iVar8 = (*(int *)(gen_frame + 0x28));
      } while (iVar3 < (*(int *)(gen_frame + 0x28)));
    }
    if (1 < param_4) {
      if (*((char *)GEN_TOP(((int)piVar1 + 0x1a))) == '\0') {
        iVar3 = ((piVar1[3] * (param_3 - 1) + piVar1[1] * iVar8) - (*(int *)(gen_frame + 0x4))) + *piVar1;
        if (0 < iVar3) {
          do {
            F_00d9fe60(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,0x20);
            iVar3 = iVar3 - 1;
          } while (iVar3 != 0);
        }
      }
      else {
        F_00d9fe60(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,9);
      }
      iVar8 = iVar8 + 1;
      F_00da00e0(((undefined1 *)(gen_frame + 0xc)),((char *)REFP(0x113c4f4)),
                        (int)(ulonglong)gen_d2bits((double)((*(float *)(gen_frame + 0x24)) / (float)param_4)),
                        (int)((ulonglong)gen_d2bits((double)((*(float *)(gen_frame + 0x24)) / (float)param_4)) >> 0x20),
                        param_6);
    }
    if (1 < param_5) {
      if (*((char *)GEN_TOP(((int)piVar1 + 0x1a))) == '\0') {
        iVar8 = ((piVar1[3] * (param_3 - 1) + piVar1[1] * iVar8) - (*(int *)(gen_frame + 0x4))) + *piVar1;
        if (0 < iVar8) {
          do {
            F_00d9fe60(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,0x20);
            iVar8 = iVar8 - 1;
          } while (iVar8 != 0);
        }
      }
      else {
        F_00d9fe60(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,9);
      }
      F_00da00e0(((undefined1 *)(gen_frame + 0xc)),((char *)REFP(0x113c4f4)),
                        (int)(ulonglong)gen_d2bits((double)((*(float *)(gen_frame + 0x1c)) / (float)param_5)),
                        (int)((ulonglong)gen_d2bits((double)((*(float *)(gen_frame + 0x1c)) / (float)param_5)) >> 0x20),
                        (*(int *)(gen_frame + 0x20)));
    }
    F_00d9fe80(param_1 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x0)));
    F_00d9fe60(param_1 GEN_EDX_ARG,10);
  }
  if ((((char)piVar1[4] == '\0') || ((*((byte *)GEN_TOP((param_2 + 0x68))) & 1) != 0)) &&
     (iVar8 = 0, 0 < *((int *)GEN_TOP((param_2 + 0x4c))))) {
    do {
      F_00dab070(param_1,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x48))) + iVar8 * 4))),param_3 + 1,param_4,
                 param_5,piVar1);
      iVar8 = iVar8 + 1;
    } while (iVar8 < *((int *)GEN_TOP((param_2 + 0x4c))));
  }
  F_00d9fda0(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  (*(int *)(gen_frame + 0x4)) = 0;
  uVar6 = (*(uint *)(gen_frame + 0x8));
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) & 0x3fffffff);
  }
  return uVar6;
}

/* ref: hkMonitorStreamAnalyzer::ShowCombinedThreadSummary */
GEN_LIB GEN_FRAME uint F_00dab400(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined * param_4, unsigned int gen_a3), GEN_P(uint * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xdab400u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined * param_4 = (undefined *)(uintptr_t)gen_a3;)
  GEN_PIN(uint * param_5 = (uint *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar1 = F_00daa4c0(param_1,0,param_5[2],(uint)(byte)param_5[4]);
  *param_5 = uVar1;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0x80000000;
  F_00da04b0(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
  F_00da00e0(((undefined1 *)(gen_frame + 0xc)),((char *)REFP(0x113c53c)));
  if ((1 < param_2) || (0 < param_3)) {
    if (0 < param_2) {
      do {
        if (*((char *)GEN_TOP(((int)param_5 + 0x1a))) == '\0') {
          iVar2 = (param_5[1] * iVar3 - (*(int *)(gen_frame + 0x4))) + *param_5;
          if (0 < iVar2) {
            do {
              F_00d9fe60(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,0x20);
              iVar2 = iVar2 - 1;
            } while (iVar2 != 0);
          }
        }
        else {
          F_00d9fe60(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,9);
        }
        F_00da00e0(((undefined1 *)(gen_frame + 0xc)),((char *)REFP(0x113c530)),iVar3);
        iVar3 = iVar3 + 1;
      } while (iVar3 < param_2);
    }
    if (0 < param_3) {
      iVar3 = 0;
      do {
        if (*((char *)GEN_TOP(((int)param_5 + 0x1a))) == '\0') {
          iVar2 = ((iVar3 + param_2) * param_5[1] - (*(int *)(gen_frame + 0x4))) + *param_5;
          if (0 < iVar2) {
            do {
              F_00d9fe60(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,0x20);
              iVar2 = iVar2 - 1;
            } while (iVar2 != 0);
          }
        }
        else {
          F_00d9fe60(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,9);
        }
        F_00da00e0(((undefined1 *)(gen_frame + 0xc)),((char *)REFP(0x113c528)),iVar3);
        iVar3 = iVar3 + 1;
      } while (iVar3 < param_3);
    }
    iVar3 = param_2 + param_3;
    if (1 < param_2) {
      if (*((char *)GEN_TOP(((int)param_5 + 0x1a))) == '\0') {
        iVar2 = (param_5[1] * iVar3 - (*(int *)(gen_frame + 0x4))) + *param_5;
        if (0 < iVar2) {
          do {
            F_00d9fe60(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,0x20);
            iVar2 = iVar2 - 1;
          } while (iVar2 != 0);
        }
      }
      else {
        F_00d9fe60(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,9);
      }
      iVar3 = iVar3 + 1;
      F_00da00e0(((undefined1 *)(gen_frame + 0xc)),((char *)REFP(0x113c51c)));
    }
    if (1 < param_3) {
      if (*((char *)GEN_TOP(((int)param_5 + 0x1a))) == '\0') {
        iVar3 = (param_5[1] * iVar3 - (*(int *)(gen_frame + 0x4))) + *param_5;
        if (0 < iVar3) {
          do {
            F_00d9fe60(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,0x20);
            iVar3 = iVar3 - 1;
          } while (iVar3 != 0);
        }
      }
      else {
        F_00d9fe60(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,9);
      }
      F_00da00e0(((undefined1 *)(gen_frame + 0xc)),((char *)REFP(0x113c510)));
    }
  }
  F_00d9fe80(param_4 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x0)));
  F_00da00e0(param_4,&REFG(undefined, 0x113c50c));
  F_00dab070(param_4,param_1,0,param_2,param_3,param_5);
  F_00d9fda0(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  (*(int *)(gen_frame + 0x4)) = 0;
  uVar1 = (*(uint *)(gen_frame + 0x8));
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) & 0x3fffffff);
  }
  return uVar1;
}

/* ref: hkMonitorStreamAnalyzer::MergeTreesForCombinedThreadSummary */
GEN_LIB GEN_FRAME unsigned int F_00dab620(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdab620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int iVar1;
  uint uVar2;
  LPVOID pvVar3;
  undefined * this;
  short * psVar4;
  float * pfVar5;
  short * psVar6;
  float * pfVar7;
  int local_10;
  int local_c;
  
  local_10 = 0;
  if (0 < *((int *)GEN_TOP((param_2 + 0x4c)))) {
    do {
      iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x48))) + local_10 * 4)));
      uVar2 = F_00daa7a0(param_1,*((undefined4 *)GEN_TOP((iVar1 + 100))),0);
      if (uVar2 == 0) {
        pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
        this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar3 + 0x2c))) + 4))))
                                 (*((int * PTR32 *)GEN_TOP(((int)pvVar3 + 0x2c))) GEN_EDX_ARG,0x70)));
        if (this == ((undefined *)GEN_TOP(0x0))) {
          uVar2 = 0;
        }
        else {
          uVar2 = F_00daada0(this GEN_EDX_ARG,param_1,*((undefined4 *)GEN_TOP((iVar1 + 100))),*((undefined4 *)GEN_TOP((iVar1 + 0x6c)))
                            );
        }
      }
      pfVar5 = ((float *)GEN_TOP((uVar2 + 4)));
      psVar4 = ((short *)GEN_TOP((uVar2 + 0x30)));
      pfVar7 = ((float *)GEN_TOP((iVar1 + 0xc)));
      psVar6 = ((short *)GEN_TOP((iVar1 + 0x34)));
      local_c = 2;
      do {
        pfVar5[-1] = pfVar7[-3] + pfVar5[-1];
        *psVar4 = *psVar4 + *((short *)GEN_TOP(((iVar1 - uVar2) + (int)psVar4)));
        *pfVar5 = *((float *)GEN_TOP(((iVar1 - uVar2) + (int)pfVar5))) + *pfVar5;
        psVar4[1] = psVar4[1] + psVar6[-1];
        pfVar5[1] = pfVar7[-1] + pfVar5[1];
        psVar4[2] = psVar4[2] + *psVar6;
        pfVar5[2] = pfVar5[2] + *pfVar7;
        psVar4[3] = psVar4[3] + psVar6[1];
        pfVar5[3] = pfVar7[1] + pfVar5[3];
        psVar4[4] = psVar4[4] + psVar6[2];
        pfVar5[4] = pfVar7[2] + pfVar5[4];
        psVar4[5] = psVar4[5] + psVar6[3];
        psVar4 = psVar4 + 6;
        psVar6 = psVar6 + 6;
        pfVar5 = pfVar5 + 6;
        pfVar7 = pfVar7 + 6;
        local_c = local_c - 1;
      } while (local_c != 0);
      F_00dab620(uVar2,iVar1);
      local_10 = local_10 + 1;
    } while (local_10 < *((int *)GEN_TOP((param_2 + 0x4c))));
  }
  return 0;
}

/* ref: hkMonitorStreamAnalyzer::ColorTable::AddColor */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dab780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdab780u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined * this_00;
  uint uVar1;
  
  F_00d91480(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,param_1);
  (*(undefined4 *)(gen_frame + 0x4)) = param_2;
  if (*((uint *)GEN_TOP(((int)this + 0xc))) == (*((uint *)GEN_TOP(((int)this + 0x10))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),((int *)GEN_TOP(((int)this + 8))),8);
  }
  this_00 = ((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + *((int *)GEN_TOP(((int)this + 0xc))) * 8)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    F_00d914e0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    *((undefined4 *)GEN_TOP(((int)this_00 + 4))) = (*(undefined4 *)(gen_frame + 0x4));
  }
  *((int *)GEN_TOP(((int)this + 0xc))) = *((int *)GEN_TOP(((int)this + 0xc))) + 1;
  uVar1 = F_00d91510(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: hkMonitorStreamAnalyzer::GetNodeAtSample */
GEN_LIB GEN_FRAME uint F_00dab7f0(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(float in_xmm0, float gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(int * param_6, unsigned int gen_a5), GEN_P(float param_7, float gen_a6))
{
  GEN_ENTER(0xdab7f0u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(float in_xmm0 = (float)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(int * param_6 = (int *)(uintptr_t)gen_a5;)
  GEN_PIN(float param_7 = (float)gen_a6;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int * piVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = 0;
  (*(float *)(gen_frame + 0xc)) = in_xmm0 / (float)in_eax;
  (*(int *)(gen_frame + 0x0)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(int *)(gen_frame + 0x8)) = ((int)0x80000000);
  if (0 < in_eax) {
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x0)),in_eax,4);
  }
  piVar1 = ((int *)GEN_TOP((*param_6 + param_4 * 4)));
  if (0 < *((int *)GEN_TOP((*piVar1 + 0x4c)))) {
    (*(int *)(gen_frame + 0x4)) = 0;
    if (*((int *)GEN_TOP((param_3 + 0xc))) == 0) {
      uVar2 = *((undefined4 *)GEN_TOP((param_3 + 4)));
    }
    else {
      uVar2 = *((undefined4 *)GEN_TOP((param_3 + 8)));
    }
    F_00daabe0(&(*(int *)(gen_frame + 0x0)),*piVar1,param_7,(*(float *)(gen_frame + 0xc)),in_eax,uVar2);
    if (param_5 < (*(int *)(gen_frame + 0x4))) {
      uVar3 = *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + param_5 * 4)));
    }
  }
  (*(int *)(gen_frame + 0x4)) = 0;
  if (-1 < (*(int *)(gen_frame + 0x8))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0x8)) * 4);
  }
  return uVar3;
}

/* ref: hkMonitorStreamAnalyzer::FillSampleColors */
GEN_LIB GEN_FRAME uint F_00dab8d0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, float gen_a8, float gen_a9, unsigned int gen_a10)
{
  GEN_ENTER(0xdab8d0u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  int in_eax = (int)gen_a0;
  unsigned int gen_args[10];
  memcpy(&gen_args[0], &gen_a1, sizeof gen_a1);
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  gen_args[5] = gen_a6;
  gen_args[6] = gen_a7;
  memcpy(&gen_args[7], &gen_a8, sizeof gen_a8);
  memcpy(&gen_args[8], &gen_a9, sizeof gen_a9);
  gen_args[9] = gen_a10;
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  undefined4 uVar1;
  uint uVar2;
  float * pfVar3;
  int iVar4;
  int iVar5;
  int * piVar6;
  
  iVar4 = (*(int *)&gen_args[6]);
  (*(float *)&gen_args[7]) = (*(float *)&gen_args[7]) / (float)(*(int *)&gen_args[6]);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x14)) = ((int)0x80000000);
  if (0 < (*(int *)&gen_args[6])) {
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0xc)),(*(int *)&gen_args[6]),4);
  }
  piVar6 = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + (int)gen_fl2bits((*(float *)&gen_args[0])) * 4)));
  if (0 < *((int *)GEN_TOP((*piVar6 + 0x4c)))) {
    (*(int *)(gen_frame + 0x10)) = 0;
    if (*((int *)GEN_TOP((in_eax + 0xc))) == 0) {
      uVar1 = *((undefined4 *)GEN_TOP((in_eax + 4)));
    }
    else {
      uVar1 = *((undefined4 *)GEN_TOP((in_eax + 8)));
    }
    F_00daabe0(&(*(int *)(gen_frame + 0xc)),*piVar6,(*(float *)&gen_args[8]),(*(float *)&gen_args[7]),iVar4,uVar1);
    (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x10));
    (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(0x0));
    if (0 < (*(int *)(gen_frame + 0x10))) {
      do {
        if (iVar4 <= (int)(*(int * PTR32 *)&gen_args[1])) break;
        (*(float *)&gen_args[7]) = -1.7014118e+38;
        piVar6 = (*(int * PTR32 *)&gen_args[1]);
        if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + (int)(*(int * PTR32 *)&gen_args[1]) * 4))) != 0) {
          iVar4 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + (int)(*(int * PTR32 *)&gen_args[1]) * 4)));
          (*(float *)&gen_args[7]) = -NAN;
          for (; iVar4 != 0; iVar4 = *((int *)GEN_TOP((iVar4 + 0x60)))) {
            uVar1 = *((undefined4 *)GEN_TOP((iVar4 + 100)));
            uVar2 = F_00dbd9c0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar1,&(*(float *)(gen_frame + 0x1c)));
            if (uVar2 == 0) {
              (*(float *)&gen_args[7]) = (*(float *)(gen_frame + 0x1c));
              break;
            }
            uVar2 = F_00dbd9c0((*(undefined * PTR32 *)&gen_args[9]) GEN_EDX_ARG,uVar1,&(*(float *)&gen_args[0]));
            if (uVar2 == 0) {
              (*(float *)&gen_args[7]) = (*(float *)&gen_args[0]);
            }
            else {
              iVar5 = 0;
              if (0 < *((int *)GEN_TOP(((*(int *)&gen_args[4]) + 0xc)))) {
                do {
                  uVar2 = F_00da0d70(*((uint *)GEN_TOP((*((int *)GEN_TOP(((*(int *)&gen_args[4]) + 8))) + iVar5 * 8))) & 0xfffffffe,uVar1
                                    );
                  if (uVar2 == 0) {
                    (*(float *)&gen_args[7]) = *((float *)GEN_TOP((*((int *)GEN_TOP(((*(int *)&gen_args[4]) + 8))) + 4 + iVar5 * 8)));
                    F_00dbd8b0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),uVar1,
                                      (undefined4)gen_fl2bits((*(float *)&gen_args[7])));
                    piVar6 = (*(int * PTR32 *)&gen_args[1]);
                    goto LAB_00daba5c;
                  }
                  iVar5 = iVar5 + 1;
                } while (iVar5 < *((int *)GEN_TOP(((*(int *)&gen_args[4]) + 0xc))));
              }
              F_00dbd8b0((*(undefined * PTR32 *)&gen_args[9]) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),uVar1,
                                (undefined4)gen_fl2bits((*(float *)&gen_args[7])));
              piVar6 = (*(int * PTR32 *)&gen_args[1]);
            }
          }
        }
LAB_00daba5c: ;
        if (0 < (*(int *)&gen_args[3])) {
          pfVar3 = ((float *)GEN_TOP(((*(int *)&gen_args[2]) + (int)((int)(uintptr_t)piVar6) * 4)));
          iVar4 = (*(int *)&gen_args[3]);
          do {
            *pfVar3 = (*(float *)&gen_args[7]);
            pfVar3 = pfVar3 + (*(int *)&gen_args[5]);
            iVar4 = iVar4 - 1;
          } while (iVar4 != 0);
        }
        (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((int)piVar6 + 1)));
        iVar4 = (*(int *)&gen_args[6]);
      } while ((int)(*(int * PTR32 *)&gen_args[1]) < (*(int *)(gen_frame + 0x18)));
    }
  }
  (*(int *)(gen_frame + 0x10)) = 0;
  if (-1 < (*(int *)(gen_frame + 0x14))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0xc)),(*(int *)(gen_frame + 0x14)) * 4);
  }
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0x80000000;
  uVar2 = F_00dbdb20(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  return uVar2;
}

/* ref: hkMonitorStreamAnalyzer::ResetFrameStatistics */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dabae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdabae0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  int iVar1;
  int * piVar2;
  int local_c;
  int local_8;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  local_c = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 4)))) {
    local_8 = 0;
    do {
      piVar2 = ((int *)GEN_TOP((*(int *)this + local_8)));
      iVar1 = piVar2[1] - 1;
      if (-1 < iVar1) {
        this_00 = ((undefined *)GEN_TOP((*piVar2 + iVar1 * 0x24)));
        do {
          F_00d91510(this_00 GEN_EDX_FWD);
          this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x24)));
          iVar1 = iVar1 - 1;
        } while (-1 < iVar1);
      }
      local_8 = local_8 + 0xc;
      local_c = local_c + 1;
      piVar2[1] = 0;
    } while (local_c < *((int *)GEN_TOP(((int)this + 4))));
  }
  return;
}

/* ref: hkMonitorStreamAnalyzer::MakeStatisticsTreeForSingleFrame */
GEN_LIB GEN_FRAME uint F_00dabb40(GEN_P(undefined8 * param_1, unsigned int gen_a0), GEN_P(undefined8 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(char param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xdabb40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(char param_5 = (char)gen_a4;)
  GEN_FRAME_DECL_TOP(0x1c8, 8, 4);
  undefined4 * puVar1;
  undefined8 * puVar2;
  int * piVar3;
  float fVar4;
  float fVar5;
  undefined1 * puVar6;
  code * pcVar7;
  int iVar8;
  undefined4 uVar9;
  LPVOID pvVar10;
  undefined * pvVar11;
  uint uVar12;
  undefined * pvVar13;
  float * pfVar14;
  uint uVar15;
  undefined8 * puVar16;
  bool bVar17;
  
  pvVar10 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  pvVar11 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar10 + 0x2c))) + 4))))
                              (*((int * PTR32 *)GEN_TOP(((int)pvVar10 + 0x2c))) GEN_EDX_ARG,0x70)));
  if (pvVar11 == ((undefined *)GEN_TOP(0x0))) {
    pvVar11 = ((undefined *)GEN_TOP(0x0));
  }
  else {
    pvVar11 = ((undefined *)GEN_TOP(F_00daada0(pvVar11 GEN_EDX_ARG,0,param_4,1)));
  }
  uVar15 = 0x80000010;
  (*(undefined1 * PTR32 *)(gen_frame + 0xcc)) = ((undefined1 *)(gen_frame + 0xd8));
  uVar12 = 0x80000010;
  (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = ((undefined1 *)(gen_frame + 0xc));
  (*(uint *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0x80000010;
  (*(uint *)(gen_frame + 0xd0)) = 0;
  (*(uint *)(gen_frame + 0xd4)) = 0x80000010;
  puVar16 = param_1;
  pvVar13 = pvVar11;
  while (puVar16 < param_2) {
    puVar6 = *(undefined1 * PTR32 *)puVar16;
    (*(undefined1 * PTR32 *)(gen_frame + 0x1c0)) = puVar6;
    if (puVar6 < ((undefined1 *)GEN_TOP(0x15))) {
      puVar16 = ((undefined8 *)GEN_TOP(((int)puVar16 + 4)));
      goto switchD_00dabbec_caseD_46;
    }
    switch((unsigned int)(uintptr_t)(*puVar6)) {
    case 0x45: ;
      if ((*(uint *)(gen_frame + 0x4)) != 0) {
        piVar3 = (int *)((*(undefined1 * PTR32 *)(gen_frame + 0x0)) + (*(uint *)(gen_frame + 0x4)) * 0xc - 0xc);
        if ((puVar6[2] == '\0') ||
           (iVar8 = *piVar3, uVar15 = F_00da0d20(iVar8 + 2,puVar6 + 2), uVar15 == 0)) {
          F_00daa1f0(pvVar13 GEN_EDX_ARG,param_3,piVar3,puVar16);
          pvVar13 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar13 + 0x60)));
          (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) - 1;
          uVar15 = (*(uint *)(gen_frame + 0xd0)) - 1;
          if ((int)((*(uint *)(gen_frame + 0xd4)) & 0x3fffffff) < (int)uVar15) {
            uVar12 = ((*(uint *)(gen_frame + 0xd4)) & 0x3fffffff) * 2;
            if ((int)uVar12 <= (int)uVar15) {
              uVar12 = uVar15;
            }
LAB_00dabdec: ;
            F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined1 * PTR32 *)(gen_frame + 0xcc)),uVar12,0xc);
          }
          goto LAB_00dabdff;
        }
        (*(uint *)(gen_frame + 0xd0)) = 0;
        if (-1 < (int)(*(uint *)(gen_frame + 0xd4))) {
          ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                    (&REFG(undefined * PTR32, 0x13516ac),(*(undefined1 * PTR32 *)(gen_frame + 0xcc)),((*(uint *)(gen_frame + 0xd4)) & 0x3fffffff) * 0xc);
        }
        (*(undefined1 * PTR32 *)(gen_frame + 0xcc)) = ((undefined1 *)GEN_TOP(0x0));
        (*(uint *)(gen_frame + 0xd4)) = 0x80000000;
        (*(uint *)(gen_frame + 0x4)) = 0;
        uVar15 = (*(uint *)(gen_frame + 0x8));
        if ((int)(*(uint *)(gen_frame + 0x8)) < 0) {
          return (uint)pvVar11;
        }
        goto LAB_00dabd47;
      }
      (*(uint *)(gen_frame + 0xd0)) = 0;
      if (-1 < (int)uVar12) {
        pcVar7 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10)));
        (*pcVar7)(&REFG(undefined * PTR32, 0x13516ac),(*(undefined1 * PTR32 *)(gen_frame + 0xcc)),(uVar12 & 0x3fffffff) * 0xc);
        uVar15 = (*(uint *)(gen_frame + 0x8));
      }
      (*(undefined1 * PTR32 *)(gen_frame + 0xcc)) = ((undefined1 *)GEN_TOP(0x0));
      (*(uint *)(gen_frame + 0x4)) = 0;
      goto LAB_00dabd30;
    case 0x46: ;
      break;
    default: ;
      goto switchD_00dabbec_caseD_47;
    case 0x4c: ;
      if ((*(uint *)(gen_frame + 0x4)) == (uVar15 & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),0xc);
        uVar12 = (*(uint *)(gen_frame + 0xd4));
      }
      puVar2 = (undefined8 *)((*(undefined1 * PTR32 *)(gen_frame + 0x0)) + (*(uint *)(gen_frame + 0x4)) * 0xc);
      if (puVar2 != ((undefined8 *)GEN_TOP(0x0))) {
        *puVar2 = *puVar16;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar16 + 1);
        uVar12 = (*(uint *)(gen_frame + 0xd4));
      }
      (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) + 1;
      if ((*(uint *)(gen_frame + 0xd0)) == (uVar12 & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined1 * PTR32 *)(gen_frame + 0xcc)),0xc);
      }
      puVar2 = (undefined8 *)((*(undefined1 * PTR32 *)(gen_frame + 0xcc)) + (*(uint *)(gen_frame + 0xd0)) * 0xc);
      if (puVar2 != ((undefined8 *)GEN_TOP(0x0))) {
        *puVar2 = *puVar16;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar16 + 1);
      }
      (*(uint *)(gen_frame + 0xd0)) = (*(uint *)(gen_frame + 0xd0)) + 1;
      bVar17 = param_5 != '\0';
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x19c)) + 0)) = bVar17;
      (*(undefined4 *)(gen_frame + 0x19c)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x19c)), 1, 3),bVar17);
      uVar15 = F_00daaea0(pvVar13,(*(undefined1 * PTR32 *)(gen_frame + 0x1c0)) + 2,0,bVar17);
      iVar8 = *((int *)GEN_TOP(((int)puVar16 + 0xc)));
      (*(int *)(gen_frame + 0x1b4)) = *(undefined4 *)puVar16;
      (*(int *)(gen_frame + 0x1b8)) = *((int *)GEN_TOP(((int)puVar16 + 4)));
      (*(int *)(gen_frame + 0x1bc)) = *(int *)(puVar16 + 1);
      (*(int *)(gen_frame + 0x1b4)) = iVar8;
      if ((*(uint *)(gen_frame + 0x4)) == ((*(uint *)(gen_frame + 0x8)) & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),0xc);
      }
      piVar3 = (int *)((*(undefined1 * PTR32 *)(gen_frame + 0x0)) + (*(uint *)(gen_frame + 0x4)) * 0xc);
      if (piVar3 != ((int *)GEN_TOP(0x0))) {
        *piVar3 = (*(int *)(gen_frame + 0x1b4));
        piVar3[1] = (*(int *)(gen_frame + 0x1b8));
        piVar3[2] = (*(int *)(gen_frame + 0x1bc));
      }
      (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) + 1;
      if ((*(uint *)(gen_frame + 0xd0)) == ((*(uint *)(gen_frame + 0xd4)) & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined1 * PTR32 *)(gen_frame + 0xcc)),0xc);
      }
      piVar3 = (int *)((*(undefined1 * PTR32 *)(gen_frame + 0xcc)) + (*(uint *)(gen_frame + 0xd0)) * 0xc);
      if (piVar3 != ((int *)GEN_TOP(0x0))) {
        *piVar3 = (*(int *)(gen_frame + 0x1b4));
        piVar3[1] = (*(int *)(gen_frame + 0x1b8));
        piVar3[2] = (*(int *)(gen_frame + 0x1bc));
      }
      (*(uint *)(gen_frame + 0xd0)) = (*(uint *)(gen_frame + 0xd0)) + 1;
      bVar17 = param_5 != '\0';
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x1a4)) + 0)) = bVar17;
      (*(undefined4 *)(gen_frame + 0x1a4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x1a4)), 1, 3),bVar17);
      pvVar13 = ((undefined *)GEN_TOP(F_00daaea0(uVar15,iVar8 + 2,0,bVar17)));
      puVar16 = puVar16 + 2;
      uVar12 = (*(uint *)(gen_frame + 0xd4));
      uVar15 = (*(uint *)(gen_frame + 0x8));
      break;
    case 0x4d: ;
      bVar17 = param_5 != '\0';
      uVar15 = (uint)(*(undefined4 *)(gen_frame + 0x1ac)) >> 8;
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x1ac)) + 0)) = bVar17;
      (*(undefined4 *)(gen_frame + 0x1ac)) = CONCAT31((int3)uVar15,bVar17);
      pfVar14 = ((float *)GEN_TOP(F_00daaea0(pvVar13,puVar6 + 2,2,bVar17)));
      fVar4 = *((float *)GEN_TOP(((int)puVar16 + 4)));
      fVar5 = *pfVar14;
      *(short *)(pfVar14 + 0xc) = *(short *)(pfVar14 + 0xc) + 1;
      *pfVar14 = fVar4 + fVar5;
      puVar16 = puVar16 + 1;
      uVar12 = (*(uint *)(gen_frame + 0xd4));
      uVar15 = (*(uint *)(gen_frame + 0x8));
      break;
    case 0x4e: ;
      goto switchD_00dabbec_caseD_4e;
    case 0x4f: ;
      if ((*(uint *)(gen_frame + 0x4)) == (uVar15 & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),0xc);
      }
      puVar1 = (undefined4 *)((*(undefined1 * PTR32 *)(gen_frame + 0x0)) + (*(uint *)(gen_frame + 0x4)) * 0xc);
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        uVar9 = *((undefined4 *)GEN_TOP(((int)puVar16 + 4)));
        *puVar1 = *(undefined4 *)puVar16;
        puVar1[1] = uVar9;
        puVar1[2] = *(undefined4 *)(puVar16 + 1);
      }
      (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) + 1;
      bVar17 = param_5 != '\0';
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x1a0)) + 0)) = bVar17;
      (*(undefined4 *)(gen_frame + 0x1a0)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x1a0)), 1, 3),bVar17);
      pvVar13 = ((undefined *)GEN_TOP(F_00daaea0(pvVar13,*((undefined4 *)GEN_TOP(((int)puVar16 + 0xc))),0,bVar17)));
      if ((*(uint *)(gen_frame + 0xd0)) == ((*(uint *)(gen_frame + 0xd4)) & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined1 * PTR32 *)(gen_frame + 0xcc)),0xc);
      }
      puVar1 = (undefined4 *)((*(undefined1 * PTR32 *)(gen_frame + 0xcc)) + (*(uint *)(gen_frame + 0xd0)) * 0xc);
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        uVar9 = *((undefined4 *)GEN_TOP(((int)puVar16 + 4)));
        *puVar1 = *(undefined4 *)puVar16;
        puVar1[1] = uVar9;
        puVar1[2] = *(undefined4 *)(puVar16 + 1);
      }
      (*(uint *)(gen_frame + 0xd0)) = (*(uint *)(gen_frame + 0xd0)) + 1;
      puVar16 = puVar16 + 2;
      uVar12 = (*(uint *)(gen_frame + 0xd4));
      uVar15 = (*(uint *)(gen_frame + 0x8));
      break;
    case 0x50: ;
      bVar17 = param_5 != '\0';
      uVar15 = (uint)(*(undefined4 *)(gen_frame + 0x1a8)) >> 8;
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x1a8)) + 0)) = bVar17;
      (*(undefined4 *)(gen_frame + 0x1a8)) = CONCAT31((int3)uVar15,bVar17);
      pvVar13 = ((undefined *)GEN_TOP(F_00daaea0(pvVar13,puVar6 + 2,1,bVar17)));
      puVar16 = ((undefined8 *)GEN_TOP(((int)puVar16 + 4)));
      uVar12 = (*(uint *)(gen_frame + 0xd4));
      uVar15 = (*(uint *)(gen_frame + 0x8));
      break;
    case 0x53: ;
      if ((*(uint *)(gen_frame + 0x4)) != 0) {
        puVar1 = (undefined4 *)((*(undefined1 * PTR32 *)(gen_frame + 0x0)) + (*(uint *)(gen_frame + 0x4)) * 0xc - 0xc);
        F_00daa1f0(pvVar13 GEN_EDX_ARG,param_3,puVar1,puVar16);
        bVar17 = param_5 != '\0';
        (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x1b0)) + 0)) = bVar17;
        (*(undefined4 *)(gen_frame + 0x1b0)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x1b0)), 1, 3),bVar17);
        pvVar13 = ((undefined *)GEN_TOP(F_00daaea0(*((undefined4 *)GEN_TOP(((int)pvVar13 + 0x60))),(*(undefined1 * PTR32 *)(gen_frame + 0x1c0)) + 2,0,bVar17)))
        ;
        uVar9 = *((undefined4 *)GEN_TOP(((int)puVar16 + 4)));
        *puVar1 = *(undefined4 *)puVar16;
        puVar1[1] = uVar9;
        puVar1[2] = *(undefined4 *)(puVar16 + 1);
        uVar12 = (*(uint *)(gen_frame + 0xd4));
        uVar15 = (*(uint *)(gen_frame + 0x8));
        goto switchD_00dabbec_caseD_6d;
      }
LAB_00dac32a: ;
      (*(uint *)(gen_frame + 0xd0)) = 0;
      if (-1 < (int)uVar12) {
        pcVar7 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10)));
        (*pcVar7)(&REFG(undefined * PTR32, 0x13516ac),(*(undefined1 * PTR32 *)(gen_frame + 0xcc)),(uVar12 & 0x3fffffff) * 0xc);
        uVar15 = (*(uint *)(gen_frame + 0x8));
      }
      (*(undefined1 * PTR32 *)(gen_frame + 0xcc)) = ((undefined1 *)GEN_TOP(0x0));
      (*(uint *)(gen_frame + 0x4)) = 0;
      goto LAB_00dabd30;
    case 0x54: ;
      bVar17 = param_5 != '\0';
      uVar15 = (uint)(*(undefined4 *)(gen_frame + 0x198)) >> 8;
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x198)) + 0)) = bVar17;
      (*(undefined4 *)(gen_frame + 0x198)) = CONCAT31((int3)uVar15,bVar17);
      pvVar13 = ((undefined *)GEN_TOP(F_00daaea0(pvVar13,puVar6 + 2,0,bVar17)));
      if ((*(uint *)(gen_frame + 0x4)) == ((*(uint *)(gen_frame + 0x8)) & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),0xc);
      }
      puVar1 = (undefined4 *)((*(undefined1 * PTR32 *)(gen_frame + 0x0)) + (*(uint *)(gen_frame + 0x4)) * 0xc);
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        uVar9 = *((undefined4 *)GEN_TOP(((int)puVar16 + 4)));
        *puVar1 = *(undefined4 *)puVar16;
        puVar1[1] = uVar9;
        puVar1[2] = *(undefined4 *)(puVar16 + 1);
      }
      (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) + 1;
      if ((*(uint *)(gen_frame + 0xd0)) == ((*(uint *)(gen_frame + 0xd4)) & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined1 * PTR32 *)(gen_frame + 0xcc)),0xc);
      }
      puVar1 = (undefined4 *)((*(undefined1 * PTR32 *)(gen_frame + 0xcc)) + (*(uint *)(gen_frame + 0xd0)) * 0xc);
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        uVar9 = *((undefined4 *)GEN_TOP(((int)puVar16 + 4)));
        *puVar1 = *(undefined4 *)puVar16;
        puVar1[1] = uVar9;
        puVar1[2] = *(undefined4 *)(puVar16 + 1);
      }
      (*(uint *)(gen_frame + 0xd0)) = (*(uint *)(gen_frame + 0xd0)) + 1;
      uVar12 = (*(uint *)(gen_frame + 0xd4));
      uVar15 = (*(uint *)(gen_frame + 0x8));
    case 0x6d: ;
switchD_00dabbec_caseD_6d: ;
      puVar16 = ((undefined8 *)GEN_TOP(((int)puVar16 + 0xc)));
      break;
    case 0x6c: ;
      if ((1 < (int)(*(uint *)(gen_frame + 0x4))) && (**(char * PTR32 *)((*(undefined1 * PTR32 *)(gen_frame + 0x0)) + (*(uint *)(gen_frame + 0x4)) * 0xc - 0xc) == 'S')) {
        F_00daa1f0(pvVar13 GEN_EDX_ARG,param_3,(*(undefined1 * PTR32 *)(gen_frame + 0x0)) + (*(uint *)(gen_frame + 0x4)) * 0xc - 0xc,puVar16);
        pvVar13 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar13 + 0x60)));
        (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) - 1;
        uVar15 = (*(uint *)(gen_frame + 0xd0)) - 1;
        if ((int)((*(uint *)(gen_frame + 0xd4)) & 0x3fffffff) < (int)uVar15) {
          uVar12 = ((*(uint *)(gen_frame + 0xd4)) & 0x3fffffff) * 2;
          if ((int)uVar12 <= (int)uVar15) {
            uVar12 = uVar15;
          }
          F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined1 * PTR32 *)(gen_frame + 0xcc)),uVar12,0xc);
        }
        (*(uint *)(gen_frame + 0xd0)) = uVar15;
        F_00daa1f0(pvVar13 GEN_EDX_ARG,param_3,(*(undefined1 * PTR32 *)(gen_frame + 0x0)) + (*(uint *)(gen_frame + 0x4)) * 0xc - 0xc,puVar16);
        pvVar13 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar13 + 0x60)));
        (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) - 1;
        uVar15 = (*(uint *)(gen_frame + 0xd0)) - 1;
        if ((int)((*(uint *)(gen_frame + 0xd4)) & 0x3fffffff) < (int)uVar15) {
          uVar12 = ((*(uint *)(gen_frame + 0xd4)) & 0x3fffffff) * 2;
          if ((int)uVar12 <= (int)uVar15) {
            uVar12 = uVar15;
          }
          goto LAB_00dabdec;
        }
LAB_00dabdff: ;
        (*(uint *)(gen_frame + 0xd0)) = uVar15;
        uVar12 = (*(uint *)(gen_frame + 0xd4));
        uVar15 = (*(uint *)(gen_frame + 0x8));
        goto switchD_00dabbec_caseD_6d;
      }
      goto switchD_00dabbec_caseD_47;
    case 0x70: ;
      pvVar13 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar13 + 0x60)));
      if (pvVar13 == ((undefined *)GEN_TOP(0x0))) goto LAB_00dac32a;
switchD_00dabbec_caseD_4e: ;
      puVar16 = ((undefined8 *)GEN_TOP(((int)puVar16 + 4)));
    }
switchD_00dabbec_caseD_46: ;
  }
switchD_00dabbec_caseD_47: ;
  (*(uint *)(gen_frame + 0xd0)) = 0;
  if (-1 < (int)uVar12) {
    pcVar7 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10)));
    (*pcVar7)(&REFG(undefined * PTR32, 0x13516ac),(*(undefined1 * PTR32 *)(gen_frame + 0xcc)),(uVar12 & 0x3fffffff) * 0xc);
    uVar15 = (*(uint *)(gen_frame + 0x8));
  }
  (*(uint *)(gen_frame + 0x4)) = 0;
  (*(undefined1 * PTR32 *)(gen_frame + 0xcc)) = ((undefined1 *)GEN_TOP(0x0));
LAB_00dabd30: ;
  (*(uint *)(gen_frame + 0xd4)) = 0x80000000;
  if (-1 < (int)uVar15) {
LAB_00dabd47: ;
    (*(uint *)(gen_frame + 0xd4)) = 0x80000000;
    (*(undefined1 * PTR32 *)(gen_frame + 0xcc)) = ((undefined1 *)GEN_TOP(0x0));
    (*(uint *)(gen_frame + 0x4)) = 0;
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(uVar15 & 0x3fffffff) * 0xc);
  }
  return (uint)pvVar11;
}

/* ref: hkMonitorStreamAnalyzer::MakeStatisticsTreeForMultipleFrames */
GEN_LIB GEN_FRAME uint F_00dac3d0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdac3d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  int iVar1;
  LPVOID pvVar2;
  undefined * this;
  uint uVar3;
  int iVar4;
  uint * puVar5;
  int * piVar6;
  int iVar7;
  uint local_8;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 4))))
                           (*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,0x70)));
  if (this == ((undefined *)GEN_TOP(0x0))) {
    local_8 = 0;
  }
  else {
    local_8 = F_00daada0(this GEN_EDX_ARG,0,&REFG(undefined, 0x1080808),1);
  }
  iVar1 = param_2 * 0xc;
  iVar7 = *((int *)GEN_TOP((iVar1 + 4 + *param_1)));
  uVar3 = *((uint *)GEN_TOP((local_8 + 0x50))) & 0x3fffffff;
  if ((int)uVar3 < iVar7) {
    iVar4 = uVar3 * 2;
    if (iVar4 <= iVar7) {
      iVar4 = iVar7;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),local_8 + 0x48,iVar4,4);
  }
  *((int *)GEN_TOP((local_8 + 0x4c))) = iVar7;
  iVar7 = 0;
  piVar6 = ((int *)GEN_TOP((iVar1 + *param_1)));
  if (0 < *((int *)GEN_TOP((iVar1 + 4 + *param_1)))) {
    param_2 = 0;
    do {
      puVar5 = ((uint *)GEN_TOP((*piVar6 + param_2)));
      iVar4 = *((int *)GEN_TOP((local_8 + 0x48)));
      uVar3 = F_00dabb40(puVar5[7] + param_1[3],puVar5[8] + param_1[3],puVar5,*puVar5 & 0xfffffffe,
                         (undefined1)param_3);
      param_2 = param_2 + 0x24;
      *((uint *)GEN_TOP((iVar4 + iVar7 * 4))) = uVar3;
      piVar6 = ((int *)GEN_TOP((iVar1 + *param_1)));
      iVar7 = iVar7 + 1;
    } while (iVar7 < piVar6[1]);
  }
  return local_8;
}

/* ref: hkMonitorStreamAnalyzer::WriteRawStatistics */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dac4d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdac4d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  float fVar1;
  undefined1 * puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code * pcVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  char * pcVar11;
  int * piVar12;
  uint * puVar13;
  undefined8 uVar14;
  
  uVar7 = param_1;
  (*(int * PTR32 *)(gen_frame + 0x10)) = this;
  (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = ((undefined1 *)GEN_TOP(0x0));
  (*(uint *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0x80000000;
  F_00d95690(&REFG(undefined * PTR32, 0x13516a8),&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),0x40,1);
  if ((*(uint *)(gen_frame + 0x4)) == ((*(uint *)(gen_frame + 0x8)) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516a8),&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),1);
  }
  (*(undefined1 * PTR32 *)(gen_frame + 0x0))[(*(uint *)(gen_frame + 0x4))] = 0;
  (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) + 1;
  F_00da00e0(param_1,((char *)REFP(0x113c660)),
                    *((undefined4 *)GEN_TOP(((int)this + 0x18))),*((undefined4 *)GEN_TOP(((int)this + 0x1c))),
                    *((undefined4 *)GEN_TOP((*(int *)this + 4))));
  (*(int *)(gen_frame + 0xc)) = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 4)))) {
    (*(int *)(gen_frame + 0x18)) = 0;
    do {
      param_1 = 0;
      (*(int * PTR32 *)(gen_frame + 0x14)) = ((int *)GEN_TOP((*(int *)this + (*(int *)(gen_frame + 0x18)))));
      if (0 < (((int *)GEN_TOP((*(int *)this + (*(int *)(gen_frame + 0x18))))))[1]) {
        (*(int *)(gen_frame + 0x1c)) = 0;
        do {
          puVar13 = ((uint *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x14)) + (*(int *)(gen_frame + 0x1c)))));
          F_00da00e0(uVar7,
                            ((char *)REFP(0x113c618)),
                            *puVar13 & 0xfffffffe,param_1,puVar13[6],puVar13[3]);
          iVar9 = *((int *)GEN_TOP(((int)this + 0xc)));
          uVar10 = puVar13[8];
          piVar12 = ((int *)GEN_TOP((puVar13[7] + iVar9)));
          if (((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) == 0) {
            F_00d95690(&REFG(undefined * PTR32, 0x13516a8),&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),1,1);
          }
          (*(uint *)(gen_frame + 0x4)) = 1;
          *(*(undefined1 * PTR32 *)(gen_frame + 0x0)) = 0;
          uVar8 = (*(uint *)(gen_frame + 0x4));
          this = (*(int * PTR32 *)(gen_frame + 0x10));
          while ((*(uint *)(gen_frame + 0x4)) = uVar8, (*(int * PTR32 *)(gen_frame + 0x10)) = this, piVar12 < ((int *)GEN_TOP((uVar10 + iVar9)))) {
            puVar2 = ((undefined1 *)GEN_TOP(*piVar12));
            switch((unsigned int)(uintptr_t)(*puVar2)) {
            case 0x45: ;
              (*(uint *)(gen_frame + 0x4)) = uVar8 - 2;
              (*(undefined1 * PTR32 *)(gen_frame + 0x0))[uVar8 - 3] = 0;
              iVar5 = piVar12[2];
              iVar3 = piVar12[1];
              iVar4 = *piVar12;
              F_00da00e0(uVar7,((char *)REFP(0x113c5e0)),(*(undefined1 * PTR32 *)(gen_frame + 0x0)),iVar4 + 2,iVar3,iVar5);
              goto LAB_00dac848;
            case 0x46: ;
            case 0x4f: ;
            case 0x50: ;
            case 0x70: ;
              break;
            default: ;
              (*(uint *)(gen_frame + 0x4)) = 0;
              if ((int)(*(uint *)(gen_frame + 0x8)) < 0) {
                return (*(uint *)(gen_frame + 0x8));
              }
              pcVar6 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a8) + 0x10)));
              uVar10 = (*pcVar6)(&REFG(undefined * PTR32, 0x13516a8),(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) & 0x3fffffff);
              return uVar10;
            case 0x4c: ;
              iVar5 = piVar12[2];
              iVar3 = piVar12[1];
              F_00da00e0(uVar7,((char *)REFP(0x113c5c4)),(*(undefined1 * PTR32 *)(gen_frame + 0x0)),puVar2 + 2,iVar3,
                                iVar5);
              F_00da00e0(uVar7,((char *)REFP(0x113c5a8)),(*(undefined1 * PTR32 *)(gen_frame + 0x0)),piVar12[3] + 2,
                                piVar12[1],piVar12[2]);
              (*(undefined1 * PTR32 *)(gen_frame + 0x0))[(*(uint *)(gen_frame + 0x4)) - 1] = 0x20;
              if ((*(uint *)(gen_frame + 0x4)) == ((*(uint *)(gen_frame + 0x8)) & 0x3fffffff)) {
                F_00d95710(&REFG(undefined * PTR32, 0x13516a8),&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),1);
              }
              (*(undefined1 * PTR32 *)(gen_frame + 0x0))[(*(uint *)(gen_frame + 0x4))] = 0x20;
              uVar8 = (*(uint *)(gen_frame + 0x4)) + 1;
              (*(uint *)(gen_frame + 0x4)) = uVar8;
              if (uVar8 == ((*(uint *)(gen_frame + 0x8)) & 0x3fffffff)) {
                F_00d95710(&REFG(undefined * PTR32, 0x13516a8),&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),1);
              }
              (*(undefined1 * PTR32 *)(gen_frame + 0x0))[(*(uint *)(gen_frame + 0x4))] = 0;
              (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) + 1;
              piVar12 = piVar12 + 4;
              break;
            case 0x4d: ;
              fVar1 = gen_bits2f(piVar12[1]);
              F_00da00e0(uVar7,((char *)REFP(0x113c578)),(*(undefined1 * PTR32 *)(gen_frame + 0x0)),puVar2 + 1,
                                (int)(ulonglong)gen_d2bits((double)fVar1),
                                (int)((ulonglong)gen_d2bits((double)fVar1) >> 0x20));
              piVar12 = piVar12 + 2;
              break;
            case 0x4e: ;
              piVar12 = piVar12 + 1;
              break;
            case 0x53: ;
              (*(uint *)(gen_frame + 0x4)) = uVar8 - 2;
              (*(undefined1 * PTR32 *)(gen_frame + 0x0))[uVar8 - 3] = 0;
              uVar14 = *(undefined8 *)(piVar12 + 1);
              puVar2 = ((undefined1 *)GEN_TOP(*piVar12));
              pcVar11 = ((char *)REFP(0x113c5a8));
              goto LAB_00dac62b;
            case 0x54: ;
              uVar14 = *(undefined8 *)(piVar12 + 1);
              pcVar11 = ((char *)REFP(0x113c5f8));
LAB_00dac62b: ;
              F_00da00e0(uVar7,pcVar11,(*(undefined1 * PTR32 *)(gen_frame + 0x0)),puVar2 + 2,GEN_LO32(uVar14),GEN_HI32(uVar14));
              (*(undefined1 * PTR32 *)(gen_frame + 0x0))[(*(uint *)(gen_frame + 0x4)) - 1] = 0x20;
              if ((*(uint *)(gen_frame + 0x4)) == ((*(uint *)(gen_frame + 0x8)) & 0x3fffffff)) {
                F_00d95710(&REFG(undefined * PTR32, 0x13516a8),&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),1);
              }
              (*(undefined1 * PTR32 *)(gen_frame + 0x0))[(*(uint *)(gen_frame + 0x4))] = 0x20;
              uVar8 = (*(uint *)(gen_frame + 0x4)) + 1;
              (*(uint *)(gen_frame + 0x4)) = uVar8;
              if (uVar8 == ((*(uint *)(gen_frame + 0x8)) & 0x3fffffff)) {
                F_00d95710(&REFG(undefined * PTR32, 0x13516a8),&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),1);
              }
              (*(undefined1 * PTR32 *)(gen_frame + 0x0))[(*(uint *)(gen_frame + 0x4))] = 0;
              (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) + 1;
              goto LAB_00dac848;
            case 0x6c: ;
              (*(uint *)(gen_frame + 0x4)) = uVar8 - 2;
              (*(undefined1 * PTR32 *)(gen_frame + 0x0))[uVar8 - 3] = 0;
              iVar5 = piVar12[2];
              iVar3 = piVar12[1];
              iVar4 = *piVar12;
              F_00da00e0(uVar7,((char *)REFP(0x113c58c)),(*(undefined1 * PTR32 *)(gen_frame + 0x0)),iVar4 + 2,iVar3,iVar5)
              ;
              goto LAB_00dac848;
            case 0x6d: ;
              uVar8 = piVar12[2];
              pcVar11 = ((char *)REFP(0x113c570));
              if (-1 < (int)uVar8) {
                pcVar11 = ((char *)REFP(0x113c568));
              }
              iVar5 = piVar12[1];
              F_00da00e0(uVar7,((char *)REFP(0x113c548)),(*(undefined1 * PTR32 *)(gen_frame + 0x0)),pcVar11,puVar2 + 1,
                                iVar5,uVar8 & 0x7fffffff);
LAB_00dac848: ;
              piVar12 = piVar12 + 3;
            }
            uVar8 = (*(uint *)(gen_frame + 0x4));
            this = (*(int * PTR32 *)(gen_frame + 0x10));
          }
          (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x1c)) + 0x24;
          param_1 = param_1 + 1;
        } while (param_1 < (*(int * PTR32 *)(gen_frame + 0x14))[1]);
      }
      (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + 0xc;
      iVar9 = (*(int *)(gen_frame + 0xc)) + 1;
      (*(int *)(gen_frame + 0xc)) = iVar9;
    } while (iVar9 < *((int *)GEN_TOP(((int)this + 4))));
  }
  (*(uint *)(gen_frame + 0x4)) = 0;
  uVar10 = (*(uint *)(gen_frame + 0x8));
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    uVar10 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a8) + 0x10))))
                       (&REFG(undefined * PTR32, 0x13516a8),(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) & 0x3fffffff);
  }
  return uVar10;
}

/* ref: hkMonitorStreamAnalyzer::GetTimerLimits */
GEN_LIB GEN_FRAME unsigned int F_00dace30(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(float * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xdace30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL_TOP(0x34, 12, 4);
  int iVar1;
  byte bVar2;
  undefined8 * puVar3;
  uint uVar4;
  double * pdVar5;
  int iVar6;
  int iVar7;
  int * piVar8;
  int iVar9;
  undefined4 * puVar10;
  undefined8 * puVar11;
  float10 fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  
  iVar6 = *((int *)GEN_TOP((**((int * PTR32 *)GEN_TOP(param_1)) + 0x4c)));
  (*(int *)(gen_frame + 0x2c)) = *((int *)GEN_TOP((param_1 + 4)));
  (*(int *)(gen_frame + 0x8)) = param_2[1];
  iVar9 = *param_2 + (*(int *)(gen_frame + 0x8));
  (*(int *)(gen_frame + 0x20)) = iVar9;
  if (iVar6 < iVar9) {
    (*(int *)(gen_frame + 0x8)) = iVar6 - *param_2;
    (*(int *)(gen_frame + 0x20)) = iVar6;
  }
  if (0 < (*(int *)(gen_frame + 0x8))) {
    iVar9 = param_2[1];
    if ((int)(param_5[2] & 0x3fffffffU) < iVar9) {
      iVar6 = (param_5[2] & 0x3fffffffU) * 2;
      if (iVar6 <= iVar9) {
        iVar6 = iVar9;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516ac),param_5,iVar6,4);
    }
    iVar6 = iVar9 - param_5[1];
    puVar10 = ((undefined4 *)GEN_TOP((*param_5 + param_5[1] * 4)));
    if (0 < iVar6) {
      for (; iVar6 != 0; iVar6 = iVar6 - 1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
    }
    param_5[1] = iVar9;
    *param_4 = 0.0;
    iVar9 = *param_2;
    (*(int *)(gen_frame + 0x28)) = iVar9;
    if (iVar9 < (*(int *)(gen_frame + 0x20))) {
      (*(int *)(gen_frame + 0x14)) = iVar9 * 0x24;
      do {
        (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x28)) - *param_2;
        iVar9 = *((int *)GEN_TOP(*param_3));
        if (*((int *)GEN_TOP((iVar9 + 0xc + (*(int *)(gen_frame + 0x14))))) == 0) {
          iVar9 = *((int *)GEN_TOP((iVar9 + 4 + (*(int *)(gen_frame + 0x14)))));
        }
        else {
          iVar9 = *((int *)GEN_TOP((iVar9 + 8 + (*(int *)(gen_frame + 0x14)))));
        }
        (*(int *)(gen_frame + 0xc)) = iVar9;
        iVar9 = *((int *)GEN_TOP(*param_3));
        if (*((int *)GEN_TOP((iVar9 + 0xc + (*(int *)(gen_frame + 0x14))))) == 0) {
          fVar13 = *((float *)GEN_TOP((iVar9 + 0x10 + (*(int *)(gen_frame + 0x14)))));
        }
        else {
          fVar13 = *((float *)GEN_TOP((iVar9 + 0x14 + (*(int *)(gen_frame + 0x14)))));
        }
        dVar16 = GEN_X87((double)fVar13 * *(double *)&REFG(undefined, 0x113cb80));
        iVar9 = 0;
        dVar17 = GEN_X87(dVar16 * REFG(double, 0x1088108));
        (*(longlong *)(gen_frame + 0x0)) = 0;
        if (0 < (*(int *)(gen_frame + 0x2c))) {
          piVar8 = *((int * PTR32 *)GEN_TOP(param_1));
LAB_00dacf50: ;
          bVar2 = F_00daa990(*((int *)GEN_TOP((*((int *)GEN_TOP((*piVar8 + 0x48))) + (*(int *)(gen_frame + 0x28)) * 4))) + 0x48,dVar17,
                               &(*(longlong *)(gen_frame + 0x0)));
          if (bVar2 == 0) goto code_r0x00dacf77;
          iVar9 = 0;
          do {
            F_00daa920(*((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(param_1)) + iVar9 * 4))) + 0x48))) +
                                    (*(int *)(gen_frame + 0x28)) * 4))) + 0x48,dVar17,dVar16);
            iVar9 = iVar9 + 1;
          } while (iVar9 < (*(int *)(gen_frame + 0x2c)));
        }
LAB_00dacfb5: ;
        iVar9 = (*(int *)(gen_frame + 0x2c));
        if ((*(int *)(gen_frame + 0x2c)) == 0) {
          (*(undefined8 * PTR32 *)(gen_frame + 0x24)) = ((undefined8 *)GEN_TOP(0x0));
LAB_00dacff4: ;
          (*(uint *)(gen_frame + 0x18)) = 0x80000000;
        }
        else {
          (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x2c)) * 8;
          puVar3 = ((undefined8 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x10)))));
          (*(undefined8 * PTR32 *)(gen_frame + 0x24)) = puVar3;
          uVar4 = (int)((*(int *)(gen_frame + 0x10)) + ((*(int *)(gen_frame + 0x10)) >> 0x1f & 7U)) >> 3;
          (*(uint *)(gen_frame + 0x18)) = uVar4;
          if (uVar4 == 0) goto LAB_00dacff4;
        }
        if (0 < iVar9) {
          *(*(undefined8 * PTR32 *)(gen_frame + 0x24)) = GEN_FLT_TO(*(*(undefined8 * PTR32 *)(gen_frame + 0x24)), REFG(double, 0x10e1668));
          puVar3 = (*(undefined8 * PTR32 *)(gen_frame + 0x24));
          puVar11 = (*(undefined8 * PTR32 *)(gen_frame + 0x24)) + 1;
          for (uVar4 = (*(int *)(gen_frame + 0x2c)) * 8 - 5U >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined4 *)puVar11 = *(undefined4 *)puVar3;
            puVar3 = ((undefined8 *)GEN_TOP(((int)puVar3 + 4)));
            puVar11 = ((undefined8 *)GEN_TOP(((int)puVar11 + 4)));
          }
        }
        iVar9 = 0;
        if (0 < (*(int *)(gen_frame + 0x2c))) {
          do {
            iVar6 = *((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(param_1)) + iVar9 * 4))) + 0x48))) + (*(int *)(gen_frame + 0x28)) * 4)));
            iVar7 = 0;
            if (0 < *((int *)GEN_TOP((iVar6 + 0x4c)))) {
              do {
                iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((iVar6 + 0x48))) + iVar7 * 4)));
                if (*((int *)GEN_TOP((iVar1 + 0x6c))) != 2) {
                  dVar16 = *((double *)GEN_TOP((iVar1 + 0x58)));
                  if (!(dVar16 < gen_bits2d((*(undefined8 * PTR32 *)(gen_frame + 0x24))[iVar9]))) {
                    dVar16 = gen_bits2d((*(undefined8 * PTR32 *)(gen_frame + 0x24))[iVar9]);
                  }
                  (*(undefined8 * PTR32 *)(gen_frame + 0x24))[iVar9] = (undefined8)gen_d2bits(dVar16);
                }
                iVar7 = iVar7 + 1;
              } while (iVar7 < *((int *)GEN_TOP((iVar6 + 0x4c))));
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < (*(int *)(gen_frame + 0x2c)));
        }
        iVar9 = 0;
        *((undefined4 *)GEN_TOP((*param_5 + (*(int *)(gen_frame + 0x1c)) * 4))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP((*param_5 + (*(int *)(gen_frame + 0x1c)) * 4))), REFG(float, 0x1136c54));
        if (3 < (*(int *)(gen_frame + 0x2c))) {
          pdVar5 = (double *)((*(undefined8 * PTR32 *)(gen_frame + 0x24)) + 2);
          iVar6 = ((*(int *)(gen_frame + 0x2c)) - 4U >> 2) + 1;
          iVar9 = iVar6 * 4;
          do {
            fVar13 = *((float *)GEN_TOP((*param_5 + (*(int *)(gen_frame + 0x1c)) * 4)));
            fVar15 = (float)pdVar5[-2];
            if (!((float)pdVar5[-2] < fVar13)) {
              fVar15 = fVar13;
            }
            *((float *)GEN_TOP((*param_5 + (*(int *)(gen_frame + 0x1c)) * 4))) = fVar15;
            fVar13 = *((float *)GEN_TOP((*param_5 + (*(int *)(gen_frame + 0x1c)) * 4)));
            fVar15 = (float)pdVar5[-1];
            if (!((float)pdVar5[-1] < fVar13)) {
              fVar15 = fVar13;
            }
            *((float *)GEN_TOP((*param_5 + (*(int *)(gen_frame + 0x1c)) * 4))) = fVar15;
            fVar13 = *((float *)GEN_TOP((*param_5 + (*(int *)(gen_frame + 0x1c)) * 4)));
            fVar15 = (float)*pdVar5;
            if (!((float)*pdVar5 < fVar13)) {
              fVar15 = fVar13;
            }
            *((float *)GEN_TOP((*param_5 + (*(int *)(gen_frame + 0x1c)) * 4))) = fVar15;
            fVar13 = *((float *)GEN_TOP((*param_5 + (*(int *)(gen_frame + 0x1c)) * 4)));
            fVar15 = (float)pdVar5[1];
            if (!((float)pdVar5[1] < fVar13)) {
              fVar15 = fVar13;
            }
            pdVar5 = pdVar5 + 4;
            iVar6 = iVar6 - 1;
            *((float *)GEN_TOP((*param_5 + (*(int *)(gen_frame + 0x1c)) * 4))) = fVar15;
          } while (iVar6 != 0);
        }
        for (; iVar9 < (*(int *)(gen_frame + 0x2c)); iVar9 = iVar9 + 1) {
          iVar6 = *param_5;
          fVar13 = *((float *)GEN_TOP((iVar6 + (*(int *)(gen_frame + 0x1c)) * 4)));
          fVar15 = ((float)GEN_TOF(gen_bits2d((*(undefined8 * PTR32 *)(gen_frame + 0x24))[iVar9])));
          if (!(((float)GEN_TOF(gen_bits2d((*(undefined8 * PTR32 *)(gen_frame + 0x24))[iVar9]))) < fVar13)) {
            fVar15 = fVar13;
          }
          *((float *)GEN_TOP((iVar6 + (*(int *)(gen_frame + 0x1c)) * 4))) = fVar15;
        }
        iVar9 = 0;
        if (0 < (*(int *)(gen_frame + 0x2c))) {
          do {
            iVar6 = *((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(param_1)) + iVar9 * 4))) + 0x48))) + (*(int *)(gen_frame + 0x28)) * 4)));
            iVar7 = 0;
            if (0 < *((int *)GEN_TOP((iVar6 + 0x4c)))) {
              do {
                iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((iVar6 + 0x48))) + iVar7 * 4)));
                if (*((int *)GEN_TOP((iVar1 + 0x6c))) != 2) {
                  fVar13 = ((float)GEN_TOF((((double)*((float *)GEN_TOP((iVar1 + (*(int *)(gen_frame + 0xc)) * 4))) +
                                   *((double *)GEN_TOP((iVar1 + 0x58)))) -
                                  (double)*((float *)GEN_TOP((*param_5 + (*(int *)(gen_frame + 0x1c)) * 4))))));
                  if (!(*param_4 < fVar13)) {
                    fVar13 = *param_4;
                  }
                  *param_4 = fVar13;
                }
                iVar7 = iVar7 + 1;
              } while (iVar7 < *((int *)GEN_TOP((iVar6 + 0x4c))));
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < (*(int *)(gen_frame + 0x2c)));
        }
        if (((*(uint *)(gen_frame + 0x18)) & 0x80000000) == 0) {
          ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined8 * PTR32 *)(gen_frame + 0x24)),(*(uint *)(gen_frame + 0x18)) * 8);
        }
        (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 0x24;
        iVar9 = (*(int *)(gen_frame + 0x28)) + 1;
        (*(int *)(gen_frame + 0x28)) = iVar9;
      } while (iVar9 < (*(int *)(gen_frame + 0x20)));
    }
    if ((0.0 < gen_bits2f(param_2[7])) && (iVar9 = *param_2, iVar9 < (*(int *)(gen_frame + 0x20)))) {
      if (3 < (*(int *)(gen_frame + 0x20)) - iVar9) {
        do {
          *((float *)GEN_TOP((*param_5 + (iVar9 - *param_2) * 4))) =
               *((float *)GEN_TOP((*param_5 + (iVar9 - *param_2) * 4))) + gen_bits2f(param_2[7]);
          *((float *)GEN_TOP((*param_5 + 4 + (iVar9 - *param_2) * 4))) =
               *((float *)GEN_TOP((*param_5 + 4 + (iVar9 - *param_2) * 4))) + gen_bits2f(param_2[7]);
          *((float *)GEN_TOP((*param_5 + 8 + (iVar9 - *param_2) * 4))) =
               gen_bits2f(param_2[7]) + *((float *)GEN_TOP((*param_5 + 8 + (iVar9 - *param_2) * 4)));
          iVar6 = iVar9 - *param_2;
          iVar9 = iVar9 + 4;
          *((float *)GEN_TOP((*param_5 + 0xc + iVar6 * 4))) =
               gen_bits2f(param_2[7]) + *((float *)GEN_TOP((*param_5 + 0xc + iVar6 * 4)));
        } while (iVar9 < (*(int *)(gen_frame + 0x20)) - 3);
      }
      for (; iVar9 < (*(int *)(gen_frame + 0x20)); iVar9 = iVar9 + 1) {
        iVar6 = *param_5;
        iVar7 = *param_2;
        fVar13 = *((float *)GEN_TOP((iVar6 + (iVar9 - iVar7) * 4)));
        fVar15 = gen_bits2f(param_2[7]);
        *((float *)GEN_TOP((iVar6 + (iVar9 - iVar7) * 4))) = fVar13 + fVar15;
      }
    }
    fVar13 = REFG(float, 0x113cb7c);
    if (0.0 < gen_bits2f(param_2[6])) {
      *param_4 = gen_bits2f(param_2[6]);
      return 0;
    }
    if ((*(int *)(gen_frame + 0x8)) == 1) {
      fVar15 = *param_4;
      gen_set_x87_cw((unsigned short)gen_x87_cw | 0xc00);
      (*(longlong *)(gen_frame + 0x0)) = (longlong)TRUNC((float10)fVar15 * (float10)REFG(float, 0x10947f8));
      (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x0)) + 0)) = (uint)(longlong)TRUNC((float10)fVar15 * (float10)REFG(float, 0x10947f8));
      uVar4 = (uint)(*(longlong *)(gen_frame + 0x0)) | (uint)(*(longlong *)(gen_frame + 0x0)) >> 1;
      gen_set_x87_cw((unsigned short)gen_x87_cw);
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      iVar9 = (uVar4 >> 0x10 | uVar4) + 1;
      fVar12 = (float10)iVar9;
      if (iVar9 < 0) {
        fVar12 = GEN_X87(fVar12 + (float10)*(float *)&REFG(undefined, 0x1088110));
      }
      fVar15 = (float)(fVar12 * (float10)REFG(float, 0x1094724) - (float10)REFG(float, 0x135259c));
      fVar14 = REFG(float, 0x135259c) * REFG(float, 0x1094808);
      if (!(REFG(float, 0x135259c) * REFG(float, 0x1094808) < fVar15)) {
        fVar14 = fVar15;
      }
      fVar15 = fVar14 * REFG(float, 0x10c75a0) + REFG(float, 0x135259c);
      *param_4 = fVar15;
      REFG(float, 0x135259c) = fVar15;
      if (fVar15 < fVar13) {
        REFG(float, 0x135259c) = fVar13;
      }
      *param_4 = GEN_FLT_TO(*param_4, REFG(float, 0x135259c));
    }
  }
  return 0;
code_r0x00dacf77: ;
  iVar9 = iVar9 + 1;
  piVar8 = piVar8 + 1;
  if ((*(int *)(gen_frame + 0x2c)) <= iVar9) goto LAB_00dacfb5;
  goto LAB_00dacf50;
}

/* ref: hkMonitorStreamAnalyzer::DrawThreadsToTexture */
GEN_LIB GEN_FRAME uint F_00dad3e0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(uint * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4), GEN_P(float * param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xdad3e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(uint * param_4 = (uint *)(uintptr_t)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  GEN_PIN(float * param_6 = (float *)(uintptr_t)gen_a5;)
  GEN_FRAME_DECL_TOP(0x44, 12, 4);
  int iVar1;
  LPVOID pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int * piVar6;
  uint uVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  
  iVar3 = param_1[1];
  ((int *)(gen_frame + 0xc))[4] = iVar3;
  piVar6 = param_1;
  if (0 < iVar3) {
    ((int *)(gen_frame + 0x0))[0] = 0;
    ((int *)(gen_frame + 0x0))[1] = 0;
    (*(float *)(gen_frame + 0x34)) = REFG(float, 0x1090708);
    (*(int * PTR32 *)(gen_frame + 0x8)) = ((int *)GEN_TOP(0x80000000));
    F_00dace30((uint)param_1,param_2,param_3,&(*(float *)(gen_frame + 0x34)),((int *)(gen_frame + 0x0)));
    (*(int *)(gen_frame + 0x2c)) = param_2[1];
    iVar1 = *((int *)GEN_TOP((*param_3 + 4))) - *param_2;
    if (iVar1 < (*(int *)(gen_frame + 0x2c))) {
      (*(int *)(gen_frame + 0x2c)) = iVar1;
    }
    else {
    }
    (*(int *)(gen_frame + 0x20)) = param_2[3] + param_2[2];
    iVar1 = ((param_2[3] + param_2[2]) * iVar3 + param_2[4]) * (*(int *)(gen_frame + 0x2c));
    iVar3 = param_2[5];
    ((int *)(gen_frame + 0xc))[3] = *param_2 + (*(int *)(gen_frame + 0x2c));
    (*(int *)(gen_frame + 0x3c)) = iVar1;
    uVar7 = ((*(int *)(gen_frame + 0x2c)) < 2) - 1 & 0x20;
    (*(int *)(gen_frame + 0x24)) = iVar3 - uVar7;
    (*(uint *)(gen_frame + 0x30)) = uVar7;
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    iVar3 = (iVar3 + 1) * iVar1 * 4;
    (*(int *)(gen_frame + 0x28)) = iVar3;
    uVar7 = F_00d92460(*((undefined4 *)GEN_TOP(((int)pvVar2 + 0x2c))),iVar3);
    *param_4 = uVar7;
    *param_5 = iVar1;
    F_00da1030(*param_4,0,(*(int *)(gen_frame + 0x28)));
    if (param_6 != ((float *)GEN_TOP(0x0))) {
      *param_6 = (*(float *)(gen_frame + 0x34));
    }
    (*(int *)(gen_frame + 0x38)) = *param_2;
    ((int *)(gen_frame + 0xc))[0] = 0;
    ((int *)(gen_frame + 0xc))[1] = 0;
    ((int *)(gen_frame + 0xc))[2] = -1;
    if ((*(int *)(gen_frame + 0x38)) < ((int *)(gen_frame + 0xc))[3]) {
      do {
        iVar3 = (*(int *)(gen_frame + 0x3c)) - param_2[4];
        (*(int *)(gen_frame + 0x3c)) = iVar3;
        if (1 < (*(int *)(gen_frame + 0x2c))) {
          F_00da9e60(*param_4 + (iVar3 - (*(int *)(gen_frame + 0x20))) * param_2[5] * 4,(*(int *)(gen_frame + 0x38)),param_2[5]);
        }
        iVar3 = 0;
        if (0 < ((int *)(gen_frame + 0xc))[4]) {
          (*(int *)(gen_frame + 0x28)) = 0;
          do {
            iVar4 = (*(int *)(gen_frame + 0x3c)) - (*(int *)(gen_frame + 0x20));
            (*(int *)(gen_frame + 0x3c)) = iVar4;
            F_00dab8d0(*((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x28)) + *param_3))),gen_bits2f((unsigned int)((*(int *)(gen_frame + 0x38)))),
                             *((int *)GEN_TOP((*param_1 + iVar3 * 4))) + 0x48,
                             *param_4 + (param_2[5] * iVar4 + (*(uint *)(gen_frame + 0x30))) * 4,param_2[2],param_2[9],
                             param_2[5],(*(int *)(gen_frame + 0x24)),(*(float *)(gen_frame + 0x34)),GEN_ARGF(*((float *)GEN_TOP((((int *)(gen_frame + 0x0))[0] + ((*(int *)(gen_frame + 0x38)) - *param_2) * 4)))),((int *)(gen_frame + 0xc)));
            (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) + 0xc;
            iVar3 = iVar3 + 1;
          } while (iVar3 < ((int *)(gen_frame + 0xc))[4]);
        }
        (*(int *)(gen_frame + 0x38)) = (*(int *)(gen_frame + 0x38)) + 1;
      } while ((*(int *)(gen_frame + 0x38)) < ((int *)(gen_frame + 0xc))[3]);
    }
    fVar10 = REFG(float, 0x1087f04) / (*(float *)(gen_frame + 0x34));
    fVar9 = (float)((*(int *)(gen_frame + 0x24)) * 1000) * fVar10;
    iVar3 = (int)(((float)((int)gen_bits2f(param_2[7]) % 1000) * REFG(float, 0x10947f8)) * fVar9);
    ((int *)(gen_frame + 0xc))[4] = iVar3;
    if ((!GEN_ISNAN(fVar9) && !GEN_ISNAN(REFG(float, 0x10a509c))) && !(fVar9 <= REFG(float, 0x10a509c))) {
      iVar4 = (*(uint *)(gen_frame + 0x30)) - iVar3;
      ((int *)(gen_frame + 0xc))[3] = 0;
      if (iVar4 < param_2[5]) {
        do {
          if ((-1 < iVar4) && (param_1 = ((int *)GEN_TOP(0x0)), 0 < iVar1)) {
            do {
              *((undefined4 *)GEN_TOP((*param_4 + (param_2[5] * (int)param_1 + iVar4) * 4))) = 0xff0000ff;
              param_1 = ((int *)GEN_TOP(((int)param_1 + 1)));
            } while ((int)param_1 < iVar1);
          }
          iVar4 = ((int *)(gen_frame + 0xc))[3] + 1;
          ((int *)(gen_frame + 0xc))[3] = iVar4;
          iVar4 = ((int)((float)iVar4 * fVar9) - iVar3) + (*(uint *)(gen_frame + 0x30));
        } while (iVar4 < param_2[5]);
      }
    }
    iVar4 = (int)((float)((*(int *)(gen_frame + 0x24)) * 0x411a) * fVar10);
    ((int *)(gen_frame + 0xc))[3] = iVar4;
    if ((0 < iVar4) && (iVar3 = (*(uint *)(gen_frame + 0x30)) - iVar3, iVar3 < param_2[5])) {
      do {
        if ((-1 < iVar3) && (iVar5 = 0, 0 < iVar1)) {
          do {
            *((undefined4 *)GEN_TOP((*param_4 + (param_2[5] * iVar5 + iVar3) * 4))) = 0xff00ff00;
            iVar8 = param_2[5] * iVar5;
            iVar5 = iVar5 + 1;
            *((undefined4 *)GEN_TOP((*param_4 + 4 + (iVar8 + iVar3) * 4))) = 0xff00ff00;
          } while (iVar5 < iVar1);
        }
        iVar3 = iVar3 + iVar4;
      } while (iVar3 < param_2[5]);
    }
    if ((char)param_2[8] != '\0') {
      iVar3 = 0;
      if (-1 < ((int *)(gen_frame + 0xc))[2]) {
        do {
          if (*((int *)GEN_TOP((((int *)(gen_frame + 0xc))[0] + iVar3 * 8))) != -1) break;
          iVar3 = iVar3 + 1;
        } while (iVar3 <= ((int *)(gen_frame + 0xc))[2]);
      }
      do {
        if ((((int *)(gen_frame + 0xc))[2] < iVar3) || (iVar3 = iVar3 + 1, ((int *)(gen_frame + 0xc))[2] < iVar3)) break;
        do {
          if (*((int *)GEN_TOP((((int *)(gen_frame + 0xc))[0] + iVar3 * 8))) != -1) break;
          iVar3 = iVar3 + 1;
        } while (iVar3 <= ((int *)(gen_frame + 0xc))[2]);
      } while( true );
    }
    F_00dbdb20(((int *)(gen_frame + 0xc)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
    F_00dbd5e0();
    ((int *)(gen_frame + 0x0))[1] = 0;
    piVar6 = (*(int * PTR32 *)(gen_frame + 0x8));
    if (-1 < (int)(*(int * PTR32 *)(gen_frame + 0x8))) {
      piVar6 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                                (&REFG(undefined * PTR32, 0x13516ac),((int *)(gen_frame + 0x0))[0],(int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x8))) * 4)));
    }
  }
  return (uint)piVar6;
}

/* ref: hkMonitorStreamAnalyzer::DrawThreadsToTga */
GEN_LIB GEN_FRAME uint F_00dad770(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xdad770u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int iVar1;
  uint uVar2;
  LPVOID pvVar3;
  
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  uVar2 = F_00dad3e0(param_1,param_2,param_3,&(*(int *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x0)),param_5);
  iVar1 = (*(int *)(gen_frame + 0x4));
  if ((*(int *)(gen_frame + 0x4)) != 0) {
    F_00da9d20((*(int *)(gen_frame + 0x4)),param_4,*((undefined4 *)GEN_TOP((param_2 + 0x14))),(*(undefined4 *)(gen_frame + 0x0)));
    pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar2 = F_00d924b0(*((undefined4 *)GEN_TOP(((int)pvVar3 + 0x2c))),iVar1);
  }
  return uVar2;
}

/* ref: hkMonitorStreamAnalyzer::DrawThreadsToTga_00dad7f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dad7f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdad7f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x28, 8, 4);
  int iVar1;
  uint uVar2;
  LPVOID pvVar3;
  undefined * extraout_ECX = 0;
  undefined * pvVar4;
  undefined * extraout_ECX_00 = 0;
  int iVar5;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = ((undefined1 *)(gen_frame + 0xc));
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0x80000006;
  pvVar4 = this;
  if (6 < iVar1) {
    iVar5 = 0xc;
    if (0xb < iVar1) {
      iVar5 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),iVar5,4);
    pvVar4 = extraout_ECX;
  }
  iVar5 = 0;
  (*(int *)(gen_frame + 0x4)) = iVar1;
  if (0 < iVar1) {
    do {
      uVar2 = F_00dac3d0(this,iVar5,(uint)pvVar4 & 0xffffff00);
      *(uint *)((*(undefined1 * PTR32 *)(gen_frame + 0x0)) + iVar5 * 4) = uVar2;
      iVar5 = iVar5 + 1;
      pvVar4 = extraout_ECX_00;
    } while (iVar5 < iVar1);
  }
  F_00dad770(&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),param_1,this,param_2,0);
  iVar5 = 0;
  if (0 < iVar1) {
    do {
      pvVar4 = *(undefined * PTR32 *)((*(undefined1 * PTR32 *)(gen_frame + 0x0)) + iVar5 * 4);
      if (pvVar4 != ((undefined *)GEN_TOP(0x0))) {
        F_00daae40(pvVar4 GEN_EDX_ARG);
        pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar3 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar3 + 0x2c))) GEN_EDX_ARG,pvVar4,0x70) ;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
  }
  (*(int *)(gen_frame + 0x4)) = 0;
  uVar2 = (*(uint *)(gen_frame + 0x8));
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) * 4);
  }
  return uVar2;
}

/* ref: hkMonitorStreamAnalyzer::GetNodeAtPixel */
GEN_LIB GEN_FRAME uint F_00dad8e0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xdad8e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  fVar1 = gen_bits2f(param_3[1]);
  iVar2 = *((int *)GEN_TOP((param_4 + 4)));
  (*(float *)(gen_frame + 0x14)) = fVar1;
  if ((int)gen_fl2bits(fVar1) < 1) {
    return 0;
  }
  uVar4 = (iVar2 < 2) - 1 & 0x20;
  (*(uint *)(gen_frame + 0x10)) = uVar4;
  if (((int)uVar4 <= param_1) && (param_1 < *((int *)GEN_TOP((param_4 + 0x14))))) {
    iVar6 = *((int *)GEN_TOP((param_4 + 0xc))) + *((int *)GEN_TOP((param_4 + 8)));
    iVar5 = iVar6 * (int)gen_fl2bits(fVar1) + *((int *)GEN_TOP((param_4 + 0x10)));
    ((int *)(gen_frame + 0x0))[3] = *((int *)GEN_TOP((param_4 + 0x14))) - uVar4;
    iVar2 = iVar5 * iVar2;
    if ((-1 < param_2) && (param_2 < iVar2)) {
      iVar2 = (iVar2 - param_2) - 1;
      iVar3 = iVar2 / iVar5;
      (*(float *)(gen_frame + 0x14)) = REFG(float, 0x1090708);
      ((int *)(gen_frame + 0x0))[2] = ((int)0x80000000);
      iVar6 = (iVar2 % iVar5) / iVar6;
      ((int *)(gen_frame + 0x0))[0] = 0;
      ((int *)(gen_frame + 0x0))[1] = 0;
      F_00dace30((uint)param_3,param_4,param_5,&(*(float *)(gen_frame + 0x14)),((int *)(gen_frame + 0x0)));
      uVar4 = F_00dab7f0(((int *)(gen_frame + 0x0))[3],(*(float *)(gen_frame + 0x14)),*((undefined4 *)GEN_TOP((*param_5 + iVar6 * 0xc))),iVar3,
                              param_1 - (*(uint *)(gen_frame + 0x10)),*((int *)GEN_TOP((*param_3 + iVar6 * 4))) + 0x48,GEN_ARGF(*((float *)GEN_TOP((((int *)(gen_frame + 0x0))[0] + iVar3 * 4)))));
      ((int *)(gen_frame + 0x0))[1] = 0;
      if (-1 < ((int *)(gen_frame + 0x0))[2]) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),((int *)(gen_frame + 0x0))[0],((int *)(gen_frame + 0x0))[2] * 4);
      }
      return uVar4;
    }
    return 0;
  }
  return 0;
}

/* ref: FUN_00dada40 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dada40(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdada40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return in_ecx;
}

/* ref: hkMonitorStreamAnalyzer::AccumulatePerTypeTimes */
GEN_LIB GEN_FRAME unsigned int F_00dada50(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdada50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  int iVar2;
  undefined * pvVar3;
  LPVOID pvVar4;
  uint uVar5;
  short * psVar6;
  short * psVar7;
  int iVar8;
  float * pfVar9;
  float * pfVar10;
  int iVar11;
  int * piVar12;
  int iVar13;
  uint uVar14;
  undefined * this;
  int local_18;
  int local_14;
  int local_10;
  
  uVar1 = *((undefined4 *)GEN_TOP((param_1 + 100)));
  pvVar3 = ((undefined *)GEN_TOP(F_00da4190(param_2 GEN_EDX_ARG,uVar1,0)));
  if (pvVar3 == ((undefined *)GEN_TOP(0x0))) {
    pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar4 + 0x30))) + 4))))
                               (*((int * PTR32 *)GEN_TOP(((int)pvVar4 + 0x30))) GEN_EDX_ARG,0x88)));
    if (pvVar3 == ((undefined *)GEN_TOP(0x0))) {
      pvVar3 = ((undefined *)GEN_TOP(0x0));
    }
    else {
      F_00daada0(pvVar3 GEN_EDX_ARG,0,0,0);
      *((undefined4 *)GEN_TOP(((int)pvVar3 + 0x70))) = 0;
      *((undefined4 *)GEN_TOP(((int)pvVar3 + 0x74))) = 0;
      *((undefined4 *)GEN_TOP(((int)pvVar3 + 0x78))) = 0x80000000;
      *((undefined4 *)GEN_TOP(((int)pvVar3 + 0x7c))) = 0;
      *((undefined4 *)GEN_TOP(((int)pvVar3 + 0x80))) = 0;
      *((undefined4 *)GEN_TOP(((int)pvVar3 + 0x84))) = 0x80000000;
    }
    *((undefined4 *)GEN_TOP(((int)pvVar3 + 100))) = uVar1;
    F_00da3a20(param_2 GEN_EDX_ARG,uVar1,pvVar3);
  }
  pfVar9 = ((float *)GEN_TOP((param_1 + 0xc)));
  psVar6 = ((short *)GEN_TOP((param_1 + 0x34)));
  pfVar10 = ((float *)GEN_TOP(((int)pvVar3 + 4)));
  psVar7 = ((short *)GEN_TOP(((int)pvVar3 + 0x30)));
  local_10 = 2;
  do {
    pfVar10[-1] = pfVar9[-3] + pfVar10[-1];
    *psVar7 = *psVar7 + *((short *)GEN_TOP(((param_1 - (int)pvVar3) + (int)psVar7)));
    *pfVar10 = *((float *)GEN_TOP(((param_1 - (int)pvVar3) + (int)pfVar10))) + *pfVar10;
    psVar7[1] = psVar7[1] + psVar6[-1];
    pfVar10[1] = pfVar9[-1] + pfVar10[1];
    psVar7[2] = psVar7[2] + *psVar6;
    pfVar10[2] = pfVar10[2] + *pfVar9;
    psVar7[3] = psVar7[3] + psVar6[1];
    pfVar10[3] = pfVar9[1] + pfVar10[3];
    psVar7[4] = psVar7[4] + psVar6[2];
    pfVar10[4] = pfVar9[2] + pfVar10[4];
    psVar7[5] = psVar7[5] + psVar6[3];
    psVar7 = psVar7 + 6;
    psVar6 = psVar6 + 6;
    pfVar10 = pfVar10 + 6;
    pfVar9 = pfVar9 + 6;
    local_10 = local_10 - 1;
  } while (local_10 != 0);
  local_18 = 0;
  if (0 < *((int *)GEN_TOP((param_1 + 0x4c)))) {
    do {
      iVar13 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x48))) + local_18 * 4)));
      F_00dada50(iVar13,param_2);
      uVar1 = *((undefined4 *)GEN_TOP((iVar13 + 100)));
      iVar11 = *((int *)GEN_TOP(((int)pvVar3 + 0x80))) - 1;
      if (-1 < iVar11) {
        iVar8 = iVar11 * 0x70;
        do {
          uVar14 = *((int *)GEN_TOP(((int)pvVar3 + 0x7c))) + iVar8;
          uVar5 = F_00da0d20(uVar1,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar3 + 0x7c))) + 100 + iVar8)))
                                  );
          if (uVar5 == 0) {
            if (-1 < iVar11) goto LAB_00dadc74;
            break;
          }
          iVar8 = iVar8 - 0x70;
          iVar11 = iVar11 - 1;
        } while (-1 < iVar11);
      }
      iVar8 = *((int *)GEN_TOP(((int)pvVar3 + 0x80)));
      piVar12 = ((int *)GEN_TOP(((int)pvVar3 + 0x7c)));
      iVar11 = iVar8 + 1;
      uVar5 = *((uint *)GEN_TOP(((int)pvVar3 + 0x84))) & 0x3fffffff;
      if ((int)uVar5 < iVar11) {
        iVar2 = uVar5 * 2;
        if (iVar11 < iVar2) {
          iVar11 = iVar2;
        }
        F_00d95690(&REFG(undefined * PTR32, 0x13516a8),piVar12,iVar11,0x70);
      }
      iVar11 = *((int *)GEN_TOP(((int)pvVar3 + 0x80))) * 0x70 + *piVar12;
      if (iVar11 != 0) {
        *((undefined4 *)GEN_TOP((iVar11 + 0x48))) = 0;
        *((undefined4 *)GEN_TOP((iVar11 + 0x4c))) = 0;
        *((undefined4 *)GEN_TOP((iVar11 + 0x50))) = 0x80000000;
      }
      *((int *)GEN_TOP(((int)pvVar3 + 0x80U))) = *((int *)GEN_TOP(((int)pvVar3 + 0x80U))) + 1;
      this = ((undefined *)GEN_TOP((iVar8 * 0x70 + *piVar12)));
      if (this == ((undefined *)GEN_TOP(0x0))) {
        uVar14 = 0;
      }
      else {
        uVar14 = F_00daada0(this GEN_EDX_ARG,0,uVar1,0);
      }
LAB_00dadc74: ;
      pfVar9 = ((float *)GEN_TOP((uVar14 + 4)));
      psVar6 = ((short *)GEN_TOP((uVar14 + 0x30)));
      pfVar10 = ((float *)GEN_TOP((iVar13 + 0xc)));
      psVar7 = ((short *)GEN_TOP((iVar13 + 0x34)));
      local_14 = 2;
      do {
        pfVar9[-1] = pfVar10[-3] + pfVar9[-1];
        *psVar6 = *psVar6 + *((short *)GEN_TOP(((iVar13 - uVar14) + (int)psVar6)));
        *pfVar9 = *((float *)GEN_TOP(((iVar13 - uVar14) + (int)pfVar9))) + *pfVar9;
        psVar6[1] = psVar6[1] + psVar7[-1];
        pfVar9[1] = pfVar10[-1] + pfVar9[1];
        psVar6[2] = psVar6[2] + *psVar7;
        pfVar9[2] = pfVar9[2] + *pfVar10;
        psVar6[3] = psVar6[3] + psVar7[1];
        pfVar9[3] = pfVar10[1] + pfVar9[3];
        psVar6[4] = psVar6[4] + psVar7[2];
        pfVar9[4] = pfVar10[2] + pfVar9[4];
        psVar6[5] = psVar6[5] + psVar7[3];
        psVar6 = psVar6 + 6;
        psVar7 = psVar7 + 6;
        pfVar9 = pfVar9 + 6;
        pfVar10 = pfVar10 + 6;
        local_14 = local_14 - 1;
      } while (local_14 != 0);
      local_18 = local_18 + 1;
    } while (local_18 < *((int *)GEN_TOP((param_1 + 0x4c))));
  }
  if (*((int *)GEN_TOP((param_1 + 0x60))) != 0) {
    iVar13 = *((int *)GEN_TOP(((int)pvVar3 + 0x74))) - 1;
    uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x60))) + 100)));
    if (-1 < iVar13) {
      iVar11 = iVar13 * 0x70;
      do {
        uVar14 = *((int *)GEN_TOP(((int)pvVar3 + 0x70))) + iVar11;
        uVar5 = F_00da0d20(uVar1,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar3 + 0x70))) + 100 + iVar11))))
        ;
        if (uVar5 == 0) {
          if (-1 < iVar13) goto LAB_00daddf2;
          break;
        }
        iVar11 = iVar11 - 0x70;
        iVar13 = iVar13 - 1;
      } while (-1 < iVar13);
    }
    iVar11 = *((int *)GEN_TOP(((int)pvVar3 + 0x74)));
    piVar12 = ((int *)GEN_TOP(((int)pvVar3 + 0x70)));
    iVar13 = iVar11 + 1;
    uVar5 = *((uint *)GEN_TOP(((int)pvVar3 + 0x78))) & 0x3fffffff;
    if ((int)uVar5 < iVar13) {
      iVar8 = uVar5 * 2;
      if (iVar13 < iVar8) {
        iVar13 = iVar8;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516a8),piVar12,iVar13,0x70);
    }
    iVar13 = *((int *)GEN_TOP(((int)pvVar3 + 0x74))) * 0x70 + *piVar12;
    if (iVar13 != 0) {
      *((undefined4 *)GEN_TOP((iVar13 + 0x48))) = 0;
      *((undefined4 *)GEN_TOP((iVar13 + 0x4c))) = 0;
      *((undefined4 *)GEN_TOP((iVar13 + 0x50))) = 0x80000000;
    }
    *((int *)GEN_TOP(((int)pvVar3 + 0x74U))) = *((int *)GEN_TOP(((int)pvVar3 + 0x74U))) + 1;
    pvVar3 = ((undefined *)GEN_TOP((iVar11 * 0x70 + *piVar12)));
    if (pvVar3 == ((undefined *)GEN_TOP(0x0))) {
      uVar14 = 0;
    }
    else {
      uVar14 = F_00daada0(pvVar3 GEN_EDX_ARG,0,uVar1,0);
    }
LAB_00daddf2: ;
    iVar13 = *((int *)GEN_TOP((param_1 + 0x60)));
    pfVar9 = ((float *)GEN_TOP((iVar13 + 0xc)));
    psVar6 = ((short *)GEN_TOP((iVar13 + 0x34)));
    pfVar10 = ((float *)GEN_TOP((uVar14 + 4)));
    psVar7 = ((short *)GEN_TOP((uVar14 + 0x30)));
    param_1 = 2;
    do {
      pfVar10[-1] = pfVar9[-3] + pfVar10[-1];
      *psVar7 = *psVar7 + *((short *)GEN_TOP(((iVar13 - uVar14) + (int)psVar7)));
      *pfVar10 = *((float *)GEN_TOP(((iVar13 - uVar14) + (int)pfVar10))) + *pfVar10;
      psVar7[1] = psVar7[1] + psVar6[-1];
      pfVar10[1] = pfVar9[-1] + pfVar10[1];
      psVar7[2] = psVar7[2] + *psVar6;
      pfVar10[2] = *pfVar9 + pfVar10[2];
      psVar7[3] = psVar7[3] + psVar6[1];
      pfVar10[3] = pfVar9[1] + pfVar10[3];
      psVar7[4] = psVar7[4] + psVar6[2];
      pfVar10[4] = pfVar9[2] + pfVar10[4];
      psVar7[5] = psVar7[5] + psVar6[3];
      psVar7 = psVar7 + 6;
      psVar6 = psVar6 + 6;
      pfVar10 = pfVar10 + 6;
      pfVar9 = pfVar9 + 6;
      param_1 = param_1 - 1;
    } while (param_1 != 0);
  }
  return 0;
}

/* ref: hkMonitorStreamAnalyzer::SetNumThreads */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dadec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdadec0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined * this_00;
  int iVar4;
  int iVar5;
  int * piVar6;
  
  iVar4 = param_1 + param_2;
  uVar1 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar1 < iVar4) {
    iVar3 = uVar1 * 2;
    if (iVar3 <= iVar4) {
      iVar3 = iVar4;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,0xc);
  }
  iVar3 = (*((int *)GEN_TOP(((int)this + 4))) - iVar4) - 1;
  if (-1 < iVar3) {
    piVar6 = ((int *)GEN_TOP((*(int *)this + iVar4 * 0xc + iVar3 * 0xc)));
    do {
      iVar5 = piVar6[1] - 1;
      if (-1 < iVar5) {
        this_00 = ((undefined *)GEN_TOP((*piVar6 + iVar5 * 0x24)));
        do {
          F_00d91510(this_00 GEN_EDX_ARG);
          this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x24)));
          iVar5 = iVar5 - 1;
        } while (-1 < iVar5);
      }
      uVar1 = piVar6[2];
      piVar6[1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),*piVar6,((uVar1 & 0x3fffffff) + uVar1 * 8) * 4);
      }
      iVar3 = iVar3 - 1;
      *piVar6 = 0;
      piVar6[2] = ((int)0x80000000);
      piVar6 = piVar6 - 3;
    } while (-1 < iVar3);
  }
  iVar3 = iVar4 - *((int *)GEN_TOP(((int)this + 4)));
  puVar2 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 0xc)));
  if (0 < iVar3) {
    do {
      if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0x80000000;
      }
      puVar2 = puVar2 + 3;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  *((int *)GEN_TOP(((int)this + 0x1c))) = param_2;
  *((int *)GEN_TOP(((int)this + 4))) = iVar4;
  *((int *)GEN_TOP(((int)this + 0x18))) = param_1;
  F_00dabae0(this GEN_EDX_ARG);
  return;
}

/* ref: hkMonitorStreamAnalyzer::WritePerTypeTimes */
GEN_LIB GEN_FRAME uint F_00dadfd0(GEN_P(undefined4 in_edi, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xdadfd0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(undefined4 in_edi = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_FRAME_DECL(0x34, 12);
  undefined * this;
  uint uVar1;
  uint uVar2;
  LPVOID pvVar3;
  int iVar4;
  
  uVar1 = (*(uint *)(gen_frame + 0x20));
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x20)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x20)) = uVar1 & 0xffffff00;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(uint *)(gen_frame + 0x18)) = 0x80000000;
  F_00da3de0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x20)));
  F_00dada50(param_2,((undefined1 *)(gen_frame + 0x0)));
  if ((int)((*(uint *)(gen_frame + 0x18)) & 0x3fffffff) < (*(int *)(gen_frame + 0x4))) {
    iVar4 = ((*(uint *)(gen_frame + 0x18)) & 0x3fffffff) * 2;
    if (iVar4 <= (*(int *)(gen_frame + 0x4))) {
      iVar4 = (*(int *)(gen_frame + 0x4));
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0x10)),iVar4,4);
  }
  uVar1 = F_00da3970(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00da3e40(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(char *)(gen_frame + 0x2f)),uVar1);
  while ((*(char *)(gen_frame + 0x2f)) != '\0') {
    uVar2 = F_00da39b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar1);
    *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x10)) + (*(int *)(gen_frame + 0x14)) * 4))) = uVar2;
    (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
    uVar1 = F_00da39f0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar1);
    F_00da3e40(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(char *)(gen_frame + 0x2f)),uVar1);
  }
  if (1 < (*(int *)(gen_frame + 0x14))) {
    F_00daf3c0((*(int *)(gen_frame + 0x10)),0,(*(int *)(gen_frame + 0x14)) - 1,((code *)REFP(0xdaeca0)));
  }
  F_00da3e20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  (*(float *)(gen_frame + 0x24)) = *((float *)GEN_TOP((*((int *)GEN_TOP(((*(int *)(gen_frame + 0x10)) - 4 + (*(int *)(gen_frame + 0x14)) * 4))) + 4)));
  F_00da00e0(in_edi,&REFG(undefined, 0x113c50c));
  F_00da00e0(in_edi,((char *)REFP(0x113cbdc)));
  F_00da00e0(in_edi,((char *)REFP(0x113cbb4)));
  F_00da00e0(in_edi,((char *)REFP(0x113cbdc)));
  (*(uint *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x14)) - 1;
  if (-1 < (int)(*(uint *)(gen_frame + 0x20))) {
    (*(float *)(gen_frame + 0x1c)) = (*(float *)(gen_frame + 0x24)) * param_3;
    do {
      this = *((undefined * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x10)) + (*(uint *)(gen_frame + 0x20)) * 4)));
      if ((*(float *)(gen_frame + 0x1c)) < *((float *)GEN_TOP(((int)this + 4)))) {
        F_00da00e0(in_edi,&REFG(undefined, 0x1080294));
        F_00da00e0(in_edi,((char *)REFP(0x113cb8c)));
        iVar4 = 0;
        if (0 < *((int *)GEN_TOP(((int)this + 0x74)))) {
          (*(int *)(gen_frame + 0x28)) = 0;
          do {
            F_00da00e0(in_edi,&REFG(undefined, 0x113cb88));
            F_00da9bd0(in_edi,0.0,*((int *)GEN_TOP(((int)this + 0x70))) + (*(int *)(gen_frame + 0x28)));
            (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) + 0x70;
            iVar4 = iVar4 + 1;
          } while (iVar4 < *((int *)GEN_TOP(((int)this + 0x74))));
        }
        F_00da9bd0(in_edi,(*(float *)(gen_frame + 0x24)),this);
        iVar4 = 0;
        if (0 < *((int *)GEN_TOP(((int)this + 0x80)))) {
          (*(int *)(gen_frame + 0x28)) = 0;
          do {
            F_00da00e0(in_edi,&REFG(undefined, 0x113cb88));
            F_00da9bd0(in_edi,0.0,*((int *)GEN_TOP(((int)this + 0x7c))) + (*(int *)(gen_frame + 0x28)));
            (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) + 0x70;
            iVar4 = iVar4 + 1;
          } while (iVar4 < *((int *)GEN_TOP(((int)this + 0x80))));
        }
      }
      F_00db1170(this GEN_EDX_ARG);
      pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar3 + 0x30))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar3 + 0x30))) GEN_EDX_ARG,this,0x88);
      (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x20)) - 1;
    } while (-1 < (int)(*(uint *)(gen_frame + 0x20)));
  }
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar1 = (*(uint *)(gen_frame + 0x18));
  if (-1 < (int)(*(uint *)(gen_frame + 0x18))) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0x10)),(*(uint *)(gen_frame + 0x18)) * 4);
  }
  return uVar1;
}

/* ref: hkMonitorStreamAnalyzer::WriteStatisticsDetails */
GEN_LIB GEN_FRAME uint F_00dae240(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(uint param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(char param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xdae240u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(uint param_5 = (uint)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(char param_7 = (char)gen_a6;)
  GEN_FRAME_DECL_TOP(0xd4, 12, 4);
  float * pfVar1;
  int * piVar2;
  int iVar3;
  gen_size32 sVar4;
  undefined4 * puVar5;
  undefined * phVar6;
  LPVOID pvVar7;
  undefined * pvVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int * piVar12;
  int iVar13;
  undefined1 * puVar14;
  char * pcVar15;
  volatile double dVar16;
  
  F_00da00e0(param_1,((char *)REFP(0x113cdb8)),((char *)REFP(0x113cdcc)));
  iVar3 = *((int *)GEN_TOP(*param_2));
  piVar12 = ((int *)GEN_TOP((iVar3 + 0x48)));
  (*(int * PTR32 *)(gen_frame + 0xa4)) = piVar12;
  (*(float *)(gen_frame + 0xc0)) = 0.0;
  F_00daada0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,0,(*(undefined * PTR32 (*)[1])REFP(0x113cdb4)),1);
  iVar13 = 0;
  (*(int * PTR32 *)(gen_frame + 0xcc)) = ((int *)GEN_TOP((REFG(float, 0x1087f04) / (float)*((int *)GEN_TOP((iVar3 + 0x4c))))));
  if (0 < *((int *)GEN_TOP((iVar3 + 0x4c)))) {
    do {
      F_00dab620(((undefined1 *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP((*piVar12 + iVar13 * 4))));
      iVar13 = iVar13 + 1;
    } while (iVar13 < *((int *)GEN_TOP((iVar3 + 0x4c))));
  }
  pfVar1 = ((float *)GEN_TOP(F_00daa7a0(((undefined1 *)(gen_frame + 0x0)),param_6,1)));
  if (pfVar1 != ((float *)GEN_TOP(0x0))) {
    do {
      (*(float *)(gen_frame + 0xc0)) = *pfVar1 * ((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0xcc))))) + (*(float *)(gen_frame + 0xc0));
      pfVar1 = ((float *)GEN_TOP(F_00daa800(pfVar1,((undefined1 *)(gen_frame + 0x0)),param_6)));
    } while (pfVar1 != ((float *)GEN_TOP(0x0)));
    if (!((*(float *)(gen_frame + 0xc0)) <= 0.0)) goto LAB_00dae331;
  }
  (*(float *)(gen_frame + 0xc0)) = REFG(float, 0x1094724);
LAB_00dae331: ;
  if ((param_5 & 1) != 0) {
    F_00da00e0(param_1,&REFG(undefined, 0x113c50c));
    F_00da00e0(param_1,((char *)REFP(0x113cd90)));
    F_00da00e0(param_1,((char *)REFP(0x113cd6c)));
    F_00da00e0(param_1,((char *)REFP(0x113cd90)));
    F_00da00e0(param_1,((char *)REFP(0x113cd50)));
    F_00daa540(param_1,((undefined1 *)(gen_frame + 0x0)),0,((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0xcc))))));
  }
  piVar2 = ((int *)GEN_TOP(F_00daae40(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG)));
  if ((param_5 & 2) != 0) {
    F_00da00e0(param_1,&REFG(undefined, 0x113c50c));
    F_00da00e0(param_1,((char *)REFP(0x113cd90)));
    F_00da00e0(param_1,((char *)REFP(0x113cd2c)));
    F_00da00e0(param_1,((char *)REFP(0x113cd90)));
    F_00da00e0(param_1,((char *)REFP(0x113cd0c)));
    F_00da1030(((undefined1 *)(gen_frame + 0x70)),0x20,0x28);
    uVar9 = (*(uint *)(gen_frame + 0x98));
    piVar2 = ((int *)GEN_TOP(0x0));
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x98)) + 0)) = 0;
    (*(uint *)(gen_frame + 0x98)) = uVar9 & 0xffffff00;
    (*(int * PTR32 *)(gen_frame + 0xcc)) = ((int *)GEN_TOP(0x0));
    if (0 < *((int *)GEN_TOP((iVar3 + 0x4c)))) {
      do {
        iVar3 = *((int *)GEN_TOP((*piVar12 + (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0xcc))) * 4)));
        piVar2 = (*(int * PTR32 *)(gen_frame + 0xcc));
        if (*((int *)GEN_TOP((iVar3 + 0x4c))) != 0) {
          (*(int * PTR32 *)(gen_frame + 0xc8)) = ((int *)GEN_TOP(0x0));
          (*(char * PTR32 *)(gen_frame + 0xbc)) = ((char *)REFP(0x1130b50));
          for (pfVar1 = ((float *)GEN_TOP(F_00daa7a0(iVar3,param_6,1))); pfVar1 != ((float *)GEN_TOP(0x0));
              pfVar1 = ((float *)GEN_TOP(F_00daa800(pfVar1,iVar3,param_6)))) {
            (*(char * PTR32 *)(gen_frame + 0xbc)) = ((char *)(uintptr_t)gen_fl2bits((float)(pfVar1[0x19])));
            (*(int * PTR32 *)(gen_frame + 0xc8)) = ((int *)(uintptr_t)gen_fl2bits((float)((*pfVar1 + ((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0xc8)))))))));
          }
          iVar3 = (int)((((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0xc8))))) * REFG(float, 0x10a0d00)) / (*(float *)(gen_frame + 0xc0)));
          if (iVar3 < 0) {
            iVar3 = 0;
          }
          else if (0x27 < iVar3) {
            iVar3 = 0x27;
          }
          iVar13 = 0;
          puVar14 = ((undefined1 *)(gen_frame + 0x70));
          if (4 < iVar3) {
            iVar10 = 4;
            do {
              *puVar14 = 9;
              iVar10 = iVar10 + 4;
              puVar14 = puVar14 + 1;
              iVar13 = iVar13 + 4;
            } while (iVar10 < iVar3);
          }
          iVar10 = iVar13;
          if (iVar13 < iVar3) {
            (*(gen_size32 *)(gen_frame + 0xc4)) = iVar3 - iVar13;
            F_00c48350(puVar14,0x20,iVar3 - iVar13);
            puVar14 = puVar14 + (*(gen_size32 *)(gen_frame + 0xc4));
            iVar10 = (*(gen_size32 *)(gen_frame + 0xc4)) + iVar13;
          }
          *puVar14 = 0x23;
          iVar13 = iVar13 + 4;
          puVar14 = puVar14 + 1;
          if (iVar10 + 1 < iVar13) {
            sVar4 = iVar13 - (iVar10 + 1);
            (*(gen_size32 *)(gen_frame + 0xc4)) = sVar4;
            F_00c48350(puVar14,0x20,sVar4);
            puVar14 = puVar14 + (*(gen_size32 *)(gen_frame + 0xc4));
          }
          if (iVar13 < 0x28) {
            sVar4 = (0x27U - iVar13 >> 2) + 1;
            (*(gen_size32 *)(gen_frame + 0xc4)) = sVar4;
            F_00c48350(puVar14,9,sVar4);
            puVar14 = puVar14 + (*(gen_size32 *)(gen_frame + 0xc4));
          }
          *puVar14 = 0;
          F_00da00e0(param_1,((undefined1 *)(gen_frame + 0x70)));
          dVar16 = (double)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0xc8)))));
          F_00da00e0(param_1,((char *)REFP(0x113ccfc)),(*(int * PTR32 *)(gen_frame + 0xcc)),(*(char * PTR32 *)(gen_frame + 0xbc)));
          piVar2 = (*(int * PTR32 *)(gen_frame + 0xcc));
          piVar12 = (*(int * PTR32 *)(gen_frame + 0xa4));
        }
        piVar2 = ((int *)GEN_TOP(((int)piVar2 + 1)));
        (*(int * PTR32 *)(gen_frame + 0xcc)) = piVar2;
      } while ((int)piVar2 < piVar12[1]);
    }
  }
  if ((param_5 & 4) != 0) {
    iVar3 = param_2[1];
    if ((iVar3 == 1) || (param_7 == '\0')) {
      piVar2 = *((int * PTR32 *)GEN_TOP(*param_2));
      iVar13 = 0;
      if (0 < piVar2[0x13]) {
        do {
          (*(int * PTR32 *)(gen_frame + 0xcc)) = ((int *)GEN_TOP(0x0));
          if (0 < iVar3) {
            do {
              iVar3 = *((int *)GEN_TOP((*param_2 + (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0xcc))) * 4)));
              piVar12 = (*(int * PTR32 *)(gen_frame + 0xcc));
              if (iVar13 < *((int *)GEN_TOP((iVar3 + 0x4c)))) {
                F_00daada0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,0,(*(undefined * PTR32 (*)[1])REFP(0x113cdb4)),1);
                F_00dab620(((undefined1 *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar3 + 0x48))) + iVar13 * 4))));
                F_00da00e0(param_1,&REFG(undefined, 0x1080294));
                F_00da00e0(param_1,((char *)REFP(0x113ccd0)));
                F_00da00e0(param_1,((char *)REFP(0x113cc84)),iVar13,
                                  (*(int * PTR32 *)(gen_frame + 0xcc)));
                F_00da00e0(param_1,((char *)REFP(0x113ccd0)));
                F_00da00e0(param_1,&REFG(undefined, 0x1080530),
                                  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((iVar3 + 0x48))) + iVar13 * 4))) + 100))));
                F_00daa540(param_1,((undefined1 *)(gen_frame + 0x0)),0,REFG(float, 0x1087f04));
                if ((param_5 & 8) != 0) {
                  F_00dadfd0(param_1,((undefined1 *)(gen_frame + 0x0)),REFG(float, 0x10920a4));
                }
                F_00daae40(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
                piVar12 = (*(int * PTR32 *)(gen_frame + 0xcc));
              }
              iVar3 = param_2[1];
              (*(int * PTR32 *)(gen_frame + 0xcc)) = ((int *)GEN_TOP(((int)piVar12 + 1)));
            } while ((int)piVar12 + 1 < iVar3);
          }
          piVar2 = *((int * PTR32 *)GEN_TOP(*param_2));
          iVar13 = iVar13 + 1;
        } while (iVar13 < piVar2[0x13]);
      }
    }
    else {
      piVar2 = ((int *)GEN_TOP(*param_2));
      (*(int * PTR32 *)(gen_frame + 0xc8)) = ((int *)GEN_TOP(0x0));
      if (0 < *((int *)GEN_TOP((*piVar2 + 0x4c)))) {
        (*(int * PTR32 *)(gen_frame + 0xa4)) = ((int *)GEN_TOP((param_5 & 8)));
        do {
          F_00da00e0(param_1,&REFG(undefined, 0x1080294));
          F_00da00e0(param_1,((char *)REFP(0x113ccd0)));
          F_00da00e0(param_1,((char *)REFP(0x113ccb0)),(*(int * PTR32 *)(gen_frame + 0xc8)));
          F_00da00e0(param_1,((char *)REFP(0x113ccd0)));
          uVar9 = param_2[1];
          puVar5 = ((undefined4 *)GEN_TOP(0x0));
          (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = ((undefined4 *)GEN_TOP(0x0));
          (*(int *)(gen_frame + 0xac)) = 0;
          (*(uint *)(gen_frame + 0xb0)) = 0x80000000;
          (*(uint *)(gen_frame + 0xb8)) = uVar9;
          if (uVar9 != 0) {
            phVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
            puVar5 = *(undefined4 * PTR32 *)(phVar6 + 0xc);
            uVar11 = uVar9 * 4 + 0x7f & 0xffffff80;
            if ((*(int *)(phVar6 + 8) < (int)uVar11) ||
               (*(uint *)(phVar6 + 0x10) < (int)puVar5 + uVar11)) {
              puVar5 = ((undefined4 *)GEN_TOP(F_00d94390(phVar6 GEN_EDX_ARG,uVar11)));
            }
            else {
              *(uint *)(phVar6 + 0xc) = (int)puVar5 + uVar11;
            }
          }
          iVar3 = param_2[1];
          (*(uint *)(gen_frame + 0xb0)) = uVar9 | 0x80000000;
          (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = puVar5;
          (*(undefined4 * PTR32 *)(gen_frame + 0xb4)) = puVar5;
          if ((int)(uVar9 & 0x3fffffff) < iVar3) {
            iVar13 = (uVar9 & 0x3fffffff) * 2;
            if (iVar13 <= iVar3) {
              iVar13 = iVar3;
            }
            F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined4 * PTR32 *)(gen_frame + 0xa8)),iVar13,4);
          }
          piVar12 = (*(int * PTR32 *)(gen_frame + 0xc8));
          iVar13 = 0;
          (*(int *)(gen_frame + 0xac)) = iVar3;
          if (0 < param_2[1]) {
            do {
              pvVar7 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
              pvVar8 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar7 + 0x2c))) + 4))))
                                         (*((int * PTR32 *)GEN_TOP(((int)pvVar7 + 0x2c))) GEN_EDX_ARG,0x70)));
              if (pvVar8 == ((undefined *)GEN_TOP(0x0))) {
                uVar9 = 0;
              }
              else {
                uVar9 = F_00daada0(pvVar8 GEN_EDX_ARG,0,&REFG(undefined1, 0x107fc63),1);
              }
              (*(undefined4 * PTR32 *)(gen_frame + 0xa8))[iVar13] = uVar9;
              iVar3 = *((int *)GEN_TOP((*param_2 + iVar13 * 4)));
              if ((int)piVar12 < *((int *)GEN_TOP((iVar3 + 0x4c)))) {
                F_00dab620((*(undefined4 * PTR32 *)(gen_frame + 0xa8))[iVar13],
                           *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar3 + 0x48))) + (int)((int)(uintptr_t)piVar12) * 4))));
              }
              iVar13 = iVar13 + 1;
            } while (iVar13 < param_2[1]);
          }
          iVar3 = 1;
          (*(undefined4 *)(gen_frame + 0x84)) = 0;
          (*(uint *)(gen_frame + 0x98)) = 0;
          (*(undefined4 *)(gen_frame + 0x8c)) = 4;
          (*(undefined4 *)(gen_frame + 0x90)) = 2;
          (*(undefined4 *)(gen_frame + 0x88)) = 0x10;
          (*(undefined1 *)(gen_frame + 0x94)) = 0;
          (*(undefined4 *)(gen_frame + 0x9c)) = 0x5f3e;
          if (1 < (*(int *)(gen_frame + 0xac))) {
            do {
              F_00dab030(*(*(undefined4 * PTR32 *)(gen_frame + 0xa8)),(*(undefined4 * PTR32 *)(gen_frame + 0xa8))[iVar3],iVar3,0,0.0);
              iVar3 = iVar3 + 1;
            } while (iVar3 < (*(int *)(gen_frame + 0xac)));
          }
          F_00dab400(*(*(undefined4 * PTR32 *)(gen_frame + 0xa8)),param_3,param_4,param_1,&(*(undefined4 *)(gen_frame + 0x84)));
          if ((*(int * PTR32 *)(gen_frame + 0xa4)) != ((int *)GEN_TOP(0x0))) {
            F_00dadfd0(param_1,*(*(undefined4 * PTR32 *)(gen_frame + 0xa8)),REFG(float, 0x10920a4));
          }
          iVar3 = 0;
          if (0 < param_2[1]) {
            do {
              pvVar8 = ((undefined *)GEN_TOP((*(undefined4 * PTR32 *)(gen_frame + 0xa8))[iVar3]));
              if (pvVar8 != ((undefined *)GEN_TOP(0x0))) {
                F_00daae40(pvVar8 GEN_EDX_ARG);
                pvVar7 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
                ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar7 + 0x2c))) + 8))))
                          (*((int * PTR32 *)GEN_TOP(((int)pvVar7 + 0x2c))) GEN_EDX_ARG,pvVar8,0x70);
              }
              iVar3 = iVar3 + 1;
            } while (iVar3 < param_2[1]);
          }
          uVar9 = (*(uint *)(gen_frame + 0xb8));
          puVar5 = (*(undefined4 * PTR32 *)(gen_frame + 0xb4));
          if ((*(undefined4 * PTR32 *)(gen_frame + 0xb4)) == (*(undefined4 * PTR32 *)(gen_frame + 0xa8))) {
            (*(int *)(gen_frame + 0xac)) = 0;
          }
          phVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
          uVar9 = uVar9 * 4 + 0x7f & 0xffffff80;
          if (((*(int *)(phVar6 + 8) < (int)uVar9) ||
              (uVar9 + (int)puVar5 != *(int *)(phVar6 + 0xc))) ||
             (*(undefined4 * PTR32 *)(phVar6 + 0x14) == puVar5)) {
            F_00d945c0(phVar6 GEN_EDX_ARG,puVar5,uVar9);
          }
          else {
            *(undefined4 * PTR32 *)(phVar6 + 0xc) = puVar5;
          }
          (*(int *)(gen_frame + 0xac)) = 0;
          if (-1 < (int)(*(uint *)(gen_frame + 0xb0))) {
            ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 * PTR32 *)(gen_frame + 0xa8)),(*(uint *)(gen_frame + 0xb0)) * 4);
          }
          piVar2 = ((int *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0xc8)) + 1)));
          (*(int * PTR32 *)(gen_frame + 0xc8)) = piVar2;
        } while ((int)piVar2 < *((int *)GEN_TOP((*((int *)GEN_TOP(*param_2)) + 0x4c))));
      }
    }
  }
  if (((param_5 & 0x10) != 0) &&
     (iVar3 = 0, piVar2 = param_2, 0 < *((int *)GEN_TOP((*((int *)GEN_TOP(*param_2)) + 0x4c))))) {
    do {
      iVar13 = 0;
      if (0 < param_2[1]) {
        param_5 = -param_3;
        do {
          iVar10 = *((int *)GEN_TOP((*param_2 + iVar13 * 4)));
          (*(char * PTR32 *)(gen_frame + 0xbc)) = ((char *)GEN_TOP(iVar10));
          if (iVar3 < *((int *)GEN_TOP((iVar10 + 0x4c)))) {
            F_00da00e0(param_1,&REFG(undefined, 0x113c50c));
            F_00da00e0(param_1,((char *)REFP(0x113cc58)));
            if (iVar13 < param_3) {
              pcVar15 = ((char *)REFP(0x113cc2c));
              iVar10 = iVar13;
            }
            else {
              pcVar15 = ((char *)REFP(0x113cc04));
              iVar10 = param_5;
            }
            F_00da00e0(param_1,pcVar15,CONCAT44(iVar10,iVar3));
            F_00da00e0(param_1,((char *)REFP(0x113cc58)));
            F_00da00e0(param_1,&REFG(undefined, 0x1080530),
                              *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(char * PTR32 *)(gen_frame + 0xbc)) + 0x48))) + iVar3 * 4))) + 100))));
            F_00daa540(param_1,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(char * PTR32 *)(gen_frame + 0xbc)) + 0x48))) + iVar3 * 4))),0
                               ,REFG(float, 0x1087f04));
          }
          param_5 = param_5 + 1;
          iVar13 = iVar13 + 1;
        } while (iVar13 < param_2[1]);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *((int *)GEN_TOP((*((int *)GEN_TOP(*param_2)) + 0x4c))));
  }
  return (uint)piVar2;
}

/* ref: hkMonitorStreamAnalyzer::WriteStatistics */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daea40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdaea40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  uint uVar1;
  LPVOID pvVar2;
  undefined * extraout_ECX = 0;
  undefined * extraout_ECX_00 = 0;
  undefined * pvVar3;
  int iVar4;
  
  iVar4 = 0;
  (*(int *)(gen_frame + 0x0)) = 0;
  (*(uint *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0x80000000;
  pvVar3 = this;
  if (0 < *((int *)GEN_TOP(((int)this + 4)))) {
    do {
      uVar1 = F_00dac3d0(this,iVar4,(uint)pvVar3 & 0xffffff00);
      pvVar3 = extraout_ECX;
      if ((*(uint *)(gen_frame + 0x4)) == ((*(uint *)(gen_frame + 0x8)) & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x0)),4);
        pvVar3 = extraout_ECX_00;
      }
      *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + (*(uint *)(gen_frame + 0x4)) * 4))) = uVar1;
      (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) + 1;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *((int *)GEN_TOP(((int)this + 4))));
  }
  F_00dae240(param_1,&(*(int *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP(((int)this + 0x18))),*((undefined4 *)GEN_TOP(((int)this + 0x1c))), param_2,*((undefined4 *)GEN_TOP(((int)this + 0x20))),1);
  iVar4 = 0;
  if (0 < (int)(*(uint *)(gen_frame + 0x4))) {
    do {
      pvVar3 = *((undefined * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + iVar4 * 4)));
      if (pvVar3 != ((undefined *)GEN_TOP(0x0))) {
        F_00daae40(pvVar3 GEN_EDX_ARG);
        pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,pvVar3,0x70) ;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(*(uint *)(gen_frame + 0x4)));
  }
  (*(uint *)(gen_frame + 0x4)) = 0;
  uVar1 = (*(uint *)(gen_frame + 0x8));
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) * 4);
  }
  return uVar1;
}

/* ref: hkMonitorStreamAnalyzer::hkMonitorStreamAnalyzer */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daeb40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdaeb40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(undefined4 *)&REFG(undefined, 0x113cddc);
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0x80000000;
  REFG(float, 0x135259c) = uVar1;
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x14))) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516a8),((undefined4 *)GEN_TOP(((int)this + 0xc))),iVar3,1);
  }
  *((char * PTR32 *)GEN_TOP(((int)this + 0x20))) = ((char *)REFP(0x113cb74));
  F_00dadec0(this GEN_EDX_ARG,param_2,param_3);
  return (uint)this;
}

/* ref: Global::ByteSwap32InPlace_00daebc0 */
GEN_LIB GEN_FRAME uint F_00daebc0(GEN_P(uint * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdaebc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint * puVar2;
  
  puVar2 = param_1;
  uVar1 = *param_1;
  param_1 = ((uint *)GEN_TOP(CONCAT13((char)uVar1,
                             CONCAT12((char)(uVar1 >> 8),
                                      CONCAT11((char)(uVar1 >> 0x10),(char)(uVar1 >> 0x18))))));
  *puVar2 = (uint)param_1;
  return (uint)param_1;
}

/* ref: Global::ByteSwap32InPlaceReturnOld */
GEN_LIB GEN_FRAME uint F_00daebf0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdaebf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_1;
  uVar1 = *((uint *)GEN_TOP(param_1));
  param_1 = CONCAT13((char)uVar1,
                     CONCAT12((char)(uVar1 >> 8),
                              CONCAT11((char)(uVar1 >> 0x10),(char)(uVar1 >> 0x18))));
  *((uint *)GEN_TOP(uVar2)) = param_1;
  return uVar1;
}

/* ref: FUN_00daec30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daec30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdaec30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  F_00d91540(this GEN_EDX_FWD,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *((undefined4 *)GEN_TOP((param_1 + 4)));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = *((undefined4 *)GEN_TOP((param_1 + 0x14)));
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = *((undefined4 *)GEN_TOP((param_1 + 0x18)));
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = *((undefined4 *)GEN_TOP((param_1 + 0x1c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = *((undefined4 *)GEN_TOP((param_1 + 0x20)));
  return (uint)this;
}

/* ref: Global::CompareFloatGreater */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daec80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdaec80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  float * pfVar1;
  float fVar2;
  
  fVar2 = *((float *)GEN_TOP((param_2 + 4)));
  pfVar1 = ((float *)GEN_TOP((in_ecx + 4)));
  if ((!GEN_ISNAN(fVar2) && !GEN_ISNAN(*pfVar1)) && (!(fVar2 < *pfVar1) && fVar2 != *pfVar1)) {
    return 1;
  }
  return 0;
}

/* ref: Global::CompareFloatGreaterStatic */
GEN_LIB GEN_FRAME uint F_00daeca0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdaeca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  float * pfVar1;
  float fVar2;
  
  fVar2 = *((float *)GEN_TOP((param_2 + 4)));
  pfVar1 = ((float *)GEN_TOP((param_1 + 4)));
  if ((!GEN_ISNAN(fVar2) && !GEN_ISNAN(*pfVar1)) && (!(fVar2 < *pfVar1) && fVar2 != *pfVar1)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00daecd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daecd0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdaecd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00daecf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daecf0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdaecf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  *((bool *)GEN_TOP(param_2)) = *in_ecx == param_3;
  return param_2;
}

/* ref: FUN_00daed10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daed10(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdaed10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00daed40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daed40(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdaed40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00daed60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daed60(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdaed60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  *((bool *)GEN_TOP(param_2)) = *in_ecx == param_3;
  return param_2;
}

/* ref: FUN_00daed80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daed80(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdaed80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  *((bool *)GEN_TOP(param_2)) = *in_ecx != param_3;
  return param_2;
}

/* ref: FUN_00daeda0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daeda0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdaeda0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd9c0(this GEN_EDX_FWD,(*(undefined4 *)&gen_args[0]),&(*(undefined4 *)&gen_args[0]));
  if (uVar1 == 0) {
    *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(undefined4 *)&gen_args[0]);
    return 0;
  }
  return 1;
}

/* ref: FUN_00daedf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daedf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdaedf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint local_8;
  
  local_8 = (uint)this & 0xffffff00;
  F_00da3de0(this GEN_EDX_FWD,local_8);
  return (uint)this;
}

/* ref: FUN_00daee10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daee10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdaee10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da3a20(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00daee20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daee20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdaee20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da4190(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00daee40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daee40(GEN_P(undefined4 in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdaee40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da39b0(in_ecx GEN_EDX_FWD,param_2);
  return uVar1;
}

/* ref: FUN_00daee50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daee50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdaee50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da39f0(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00daee60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daee60(GEN_P(undefined4 in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdaee60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  F_00da3e40(in_ecx GEN_EDX_FWD,param_2,param_3);
  return param_2;
}

/* ref: FUN_00daee80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daee80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdaee80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd9c0(this GEN_EDX_FWD,(*(undefined4 *)&gen_args[0]),&(*(undefined4 *)&gen_args[0]));
  if (uVar1 == 0) {
    *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(undefined4 *)&gen_args[0]);
    return 0;
  }
  return 1;
}

/* ref: FUN_00daeec0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daeec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdaeec0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbd8b0(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00daeee0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daeee0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdaeee0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((bool *)GEN_TOP(param_2)) = in_ecx[3] != *in_ecx;
  return param_2;
}

/* ref: FUN_00daef00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daef00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdaef00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00dbe450(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1);
  return uVar1;
}

/* ref: Global::GetElement8_00daef60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daef60(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdaef60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: Global::GetElement4_00daefb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daefb0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdaefb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: Global::GetElement4b */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daefc0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdaefc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: Global::GetElement12_00daf020 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daf020(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdaf020u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 0xc;
}

/* ref: Global::GetElement12b */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daf040(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdaf040u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 0xc;
}

/* ref: Global::GetElement36 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daf080(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdaf080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 0x24;
}

/* ref: Global::GetElement36b */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daf0a0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdaf0a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 0x24;
}

/* ref: FUN_00daf0d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daf0d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdaf0d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  *((bool *)GEN_TOP(param_2)) = param_3 <= *((int *)GEN_TOP((in_ecx + 8)));
  return param_2;
}

/* ref: Global::GetElement12c */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daf0f0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdaf0f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 0xc;
}

/* ref: Global::GetElement112 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daf150(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdaf150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x70 + *in_ecx;
}

/* ref: Global::GetElement112b */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daf160(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdaf160u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x70 + *in_ecx;
}

/* ref: Global::GetElement4c */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daf1b0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdaf1b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: Global::GetElement8b */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daf1f0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdaf1f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00daf200 */
GEN_LIB GEN_FRAME byte F_00daf200(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdaf200u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 != -1;
}

/* ref: Global::InitArrayFromBuffer */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daf210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdaf210u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: hkArrayBase::Reserve */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daf240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdaf240u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,4);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: Global::FillElements4 */
GEN_LIB GEN_FRAME unsigned int F_00daf290(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdaf290u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *((undefined4 *)GEN_TOP((param_1 + iVar1 * 4))) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 0;
}

/* ref: hkArrayBase::SetDataUserFree */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daf2e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdaf2e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: hkArrayBase::Reserve12_00daf320 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daf320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdaf320u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,0xc);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: Global::FillElements4b */
GEN_LIB GEN_FRAME unsigned int F_00daf390(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdaf390u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *((undefined4 *)GEN_TOP((param_1 + iVar1 * 4))) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 0;
}

/* ref: hkAlgorithm::QuickSortRecursive */
GEN_LIB GEN_NOFRAME unsigned int F_00daf3c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(code * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xdaf3c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(code * param_4 = (code *)(uintptr_t)gen_a3;)
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int local_14;
  
  do {
    local_14 = param_2;
    uVar2 = *((undefined4 *)GEN_TOP((param_1 + (param_2 + param_3 >> 1) * 4)));
    iVar6 = param_3;
    do {
      uVar5 = (*param_4)(*((undefined4 *)GEN_TOP((param_1 + local_14 * 4))),uVar2);
      cVar4 = (char)uVar5;
      while (cVar4 != '\0') {
        iVar1 = local_14 * 4;
        local_14 = local_14 + 1;
        uVar5 = (*param_4)(*((undefined4 *)GEN_TOP((param_1 + 4 + iVar1))),uVar2);
        cVar4 = (char)uVar5;
      }
      uVar5 = (*param_4)(uVar2,*((undefined4 *)GEN_TOP((param_1 + iVar6 * 4))));
      cVar4 = (char)uVar5;
      while (cVar4 != '\0') {
        iVar1 = iVar6 * 4;
        iVar6 = iVar6 - 1;
        uVar5 = (*param_4)(uVar2,*((undefined4 *)GEN_TOP((param_1 - 4 + iVar1))));
        cVar4 = (char)uVar5;
      }
      if (iVar6 < local_14) break;
      if (iVar6 != local_14) {
        uVar3 = *((undefined4 *)GEN_TOP((param_1 + iVar6 * 4)));
        *((undefined4 *)GEN_TOP((param_1 + iVar6 * 4))) = *((undefined4 *)GEN_TOP((param_1 + local_14 * 4)));
        *((undefined4 *)GEN_TOP((param_1 + local_14 * 4))) = uVar3;
      }
      local_14 = local_14 + 1;
      iVar6 = iVar6 - 1;
    } while (local_14 <= iVar6);
    if (param_2 < iVar6) {
      F_00daf3c0(param_1,param_2,iVar6,param_4);
    }
    param_2 = local_14;
    if (param_3 <= local_14) {
      return 0;
    }
  } while( true );
}

/* ref: hkArrayBase::SetData */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daf4e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdaf4e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3;
  return param_3;
}

/* ref: hkMemoryAllocator::BufAlloc8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daf500(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdaf500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0xc)));
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) * 8)));
  uVar3 = (*pcVar1)(this,&(*(int * PTR32 *)&gen_args[0]));
  *piVar2 = (int)((int)(*(int * PTR32 *)&gen_args[0]) + ((int)(*(int * PTR32 *)&gen_args[0]) >> 0x1f & 7U)) >> 3;
  return uVar3;
}

/* ref: Global::FillElements8 */
GEN_LIB GEN_FRAME unsigned int F_00daf540(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined8 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdaf540u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined8 * param_3 = (undefined8 *)(uintptr_t)gen_a2;)
  undefined8 * puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (3 < param_2) {
    iVar2 = (param_2 - 4U >> 2) + 1;
    iVar3 = iVar2 * 4;
    puVar1 = ((undefined8 *)GEN_TOP((param_1 + 0x10)));
    do {
      iVar2 = iVar2 - 1;
      puVar1[-2] = *param_3;
      puVar1[-1] = *param_3;
      *puVar1 = *param_3;
      puVar1[1] = *param_3;
      puVar1 = puVar1 + 4;
    } while (iVar2 != 0);
  }
  while (iVar3 < param_2) {
    iVar3 = iVar3 + 1;
    *((undefined8 *)GEN_TOP((param_1 - 8 + iVar3 * 8))) = *param_3;
  }
  return;
}

/* ref: FUN_00daf5a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daf5a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdaf5a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  F_00d914e0(this GEN_EDX_FWD,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *((undefined4 *)GEN_TOP((param_1 + 4)));
  return (uint)this;
}

/* ref: FUN_00daf5c0 */
GEN_LIB GEN_FRAME uint F_00daf5c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdaf5c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + param_1;
}

/* ref: hkMemoryAllocator::BufFree4_00daf5d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daf5d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdaf5d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: hkMemoryAllocator::BufFree12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daf600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdaf600u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 0xc);
  return uVar1;
}

/* ref: hkMemoryAllocator::BufFree12b */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daf660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdaf660u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 0xc);
  return uVar1;
}

/* ref: FUN_00daf680 */
GEN_LIB GEN_FRAME uint F_00daf680(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdaf680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + param_1;
}

/* ref: hkMemoryAllocator::BufFree112 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daf6a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdaf6a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 0x70);
  return uVar1;
}

/* ref: hkMemoryAllocator::BufFree4b */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daf6c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdaf6c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: hkMemoryAllocator::BufFree8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daf6f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdaf6f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: hkMemoryAllocator::BufFree36 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daf730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdaf730u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 0x24);
  return uVar1;
}

/* ref: FUN_00daf750 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daf750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdaf750u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00d91480(this GEN_EDX_FWD,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  return (uint)this;
}

/* ref: Global::RouterAllocA */
GEN_LIB GEN_FRAME uint F_00daf770(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdaf770u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  return uVar2;
}

/* ref: Global::RouterFreeA70 */
GEN_LIB GEN_FRAME unsigned int F_00daf790(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdaf790u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: Global::RouterAllocB */
GEN_LIB GEN_FRAME uint F_00daf7c0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdaf7c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x30))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x30))) GEN_EDX_ARG,param_1);
  return uVar2;
}

/* ref: Global::RouterFreeB88 */
GEN_LIB GEN_FRAME unsigned int F_00daf7e0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdaf7e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x30))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x30))) GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: FUN_00daf820 */
GEN_LIB GEN_FRAME uint F_00daf820(GEN_P(int param_1, unsigned int gen_a0), GEN_P(double param_2, double gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdaf820u, gen_a0, (unsigned int)gen_trace_d(gen_a1), (unsigned int)(gen_trace_d(gen_a1) >> 32), gen_a2);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(double param_2 = (double)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint * puVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = *((int *)GEN_TOP((param_1 + 0x4c)));
  iVar7 = 0;
  if (2 < iVar6) {
    iVar4 = 0;
    do {
      iVar3 = iVar6 + iVar4 >> 1;
      iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x48))) + iVar3 * 4)));
      iVar7 = iVar4;
      if (*((int *)GEN_TOP((iVar1 + 0x6c))) == 2) break;
      iVar7 = iVar3;
      if (param_2 < *((double *)GEN_TOP((iVar1 + 0x58)))) {
        iVar7 = iVar4;
        iVar6 = iVar3;
      }
      iVar4 = iVar7;
    } while (2 < iVar6 - iVar7);
  }
  if (iVar7 < iVar6) {
    puVar5 = ((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x48))) + iVar7 * 4)));
    while ((uVar2 = *puVar5, *((int *)GEN_TOP((uVar2 + 0x6c))) == 2 ||
           (!(param_2 <= (double)*((float *)GEN_TOP((uVar2 + param_3 * 4))) + *((double *)GEN_TOP((uVar2 + 0x58))))))) {
      iVar7 = iVar7 + 1;
      puVar5 = puVar5 + 1;
      if (iVar6 <= iVar7) {
        return 0;
      }
    }
    if ((!GEN_ISNAN(param_2) && !GEN_ISNAN(*((double *)GEN_TOP((uVar2 + 0x58))))) && !(param_2 < *((double *)GEN_TOP((uVar2 + 0x58))))
       ) {
      return uVar2;
    }
  }
  return 0;
}

/* ref: hkArrayBase::ReserveBytes */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daf960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdaf960u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516a8),this,iVar3,1);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00daf9a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daf9a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdaf9a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbd8b0(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00dafa10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dafa10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdafa10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbd8b0(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: hkMapBase::IsValid */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dafa30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdafa30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  *((bool *)GEN_TOP(param_2)) = param_3 <= *((int *)GEN_TOP((in_ecx + 8)));
  return param_2;
}

/* ref: hkMapBase::hkMapBase */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dafa50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdafa50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0xffffffff;
  if (param_1 != 0) {
    F_00dbe450(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1);
  }
  return (uint)this;
}

/* ref: hkArrayBase::PushBack_00dafaa0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dafaa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdafaa0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 4)));
  *puVar1 = *param_2;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: hkArrayBase::ReserveExactly */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dafae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdafae0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  undefined3 extraout_var = 0;
  
  if ((int)(*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff) < param_2) {
    bVar1 = F_00d95690(param_1,this,param_2,4);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: hkArrayBase::SetSize */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dafb10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdafb10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,4);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_2;
  return uVar2;
}

/* ref: hkArrayBase::PopBack */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dafb50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdafb50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((int *)GEN_TOP((in_ecx + 4))) = *((int *)GEN_TOP((in_ecx + 4))) - param_2;
  return param_2;
}

/* ref: hkArrayBase::PushBackByte */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dafb60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdafb60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  undefined1 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,1);
  }
  puVar1 = ((undefined1 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))))));
  *puVar1 = *param_2;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: hkArrayBase::ExpandByUnchecked */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dafba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdafba0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = param_1 + iVar1;
  return *(int *)this + iVar1;
}

/* ref: hkMapBase::GetNext */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dafbe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdafbe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int * piVar2;
  
  iVar1 = param_1 + 1;
  if (iVar1 <= *((int *)GEN_TOP(((int)this + 8)))) {
    piVar2 = ((int *)GEN_TOP((*(int *)this + iVar1 * 8)));
    do {
      if (*piVar2 != -1) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar1 <= *((int *)GEN_TOP(((int)this + 8))));
  }
  return 0;
}

/* ref: hkArrayBase::PopBackB */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dafc10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdafc10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((int *)GEN_TOP((in_ecx + 4))) = *((int *)GEN_TOP((in_ecx + 4))) - param_2;
  return param_2;
}

/* ref: hkArrayBase::SetSize12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dafc20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdafc20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,0xc);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_2;
  return uVar2;
}

/* ref: hkArrayBase::PushBackUnchecked */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dafc60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdafc60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 4)));
  *puVar1 = *param_1;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: hkArray::ReserveGrow4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dafc80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdafc80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,4);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: hkAlgorithm::QuickSortAll */
GEN_LIB GEN_FRAME unsigned int F_00dafcc0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdafcc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  if (1 < param_2) {
    F_00daf3c0(param_1,0,param_2 - 1,param_3);
  }
  return;
}

/* ref: hkArray::ConstructFilled8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dafcf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined8 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdafcf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined8 uVar1;
  int iVar2;
  undefined8 * puVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = param_1;
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP((param_1 * 8)));
    param_1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined * PTR32 *)(gen_frame + 0x0)));
    iVar4 = (int)(((int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x0))) >> 0x1f & 7U) + (int)(*(undefined * PTR32 *)(gen_frame + 0x0))) >> 3;
    if (iVar4 != 0) goto LAB_00dafd4d;
  }
  iVar4 = ((int)0x80000000);
LAB_00dafd4d: ;
  iVar5 = 0;
  *((int *)GEN_TOP(((int)this + 8))) = iVar4;
  *(uint *)this = param_1;
  *((int *)GEN_TOP(((int)this + 4))) = iVar2;
  if (3 < iVar2) {
    iVar4 = (iVar2 - 4U >> 2) + 1;
    iVar5 = iVar4 * 4;
    puVar3 = ((undefined8 *)GEN_TOP((param_1 + 0x10)));
    do {
      iVar4 = iVar4 - 1;
      puVar3[-2] = *param_2;
      puVar3[-1] = *param_2;
      *puVar3 = *param_2;
      puVar3[1] = *param_2;
      puVar3 = puVar3 + 4;
    } while (iVar4 != 0);
  }
  while (iVar5 < iVar2) {
    uVar1 = *param_2;
    iVar5 = iVar5 + 1;
    *((undefined8 *)GEN_TOP(((param_1 - 8) + iVar5 * 8))) = uVar1;
  }
  return (uint)this;
}

/* ref: hkMemory::HeapAllocDwords */
GEN_LIB GEN_FRAME uint F_00dafdb0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdafdb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = F_00d92460(*((undefined4 *)GEN_TOP(((int)pvVar1 + 0x2c))),param_1 * 4);
  return uVar2;
}

/* ref: FUN_00dafde0 */
GEN_LIB GEN_FRAME uint F_00dafde0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdafde0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = F_00d924b0(*((undefined4 *)GEN_TOP(((int)pvVar1 + 0x2c))),param_1);
  return uVar2;
}

/* ref: hkMemory::StackAllocDwords */
GEN_LIB GEN_FRAME uint F_00dafe10(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdafe10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  undefined * this;
  uint uVar2;
  uint uVar3;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = *(uint *)(this + 0xc);
  uVar3 = param_1 * 4 + 0x7fU & 0xffffff80;
  uVar2 = uVar1 + uVar3;
  if (((int)uVar3 <= *(int *)(this + 8)) && (uVar2 <= *(uint *)(this + 0x10))) {
    *(uint *)(this + 0xc) = uVar2;
    return uVar1;
  }
  uVar2 = F_00d94390(this GEN_EDX_ARG,uVar3);
  return uVar2;
}

/* ref: hkMemory::StackFreeDwords */
GEN_LIB GEN_FRAME uint F_00dafe50(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdafe50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined * this;
  uint uVar1;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = param_2 * 4 + 0x7fU & 0xffffff80;
  if ((((int)uVar1 <= *(int *)(this + 8)) && (uVar1 + param_1 == *(int *)(this + 0xc))) &&
     (*(int *)(this + 0x14) != param_1)) {
    *(int *)(this + 0xc) = param_1;
    return (uint)this;
  }
  uVar1 = F_00d945c0(this GEN_EDX_ARG,param_1,uVar1);
  return uVar1;
}

/* ref: hkArray::ConstructFromBuffer */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dafea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdafea0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: hkArray::ConstructFromBuffer2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dafec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdafec0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: hkArray::CopyConstructRange8 */
GEN_LIB GEN_FRAME unsigned int F_00dafee0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdafee0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined * this;
  int iVar1;
  
  this = param_1;
  iVar1 = param_2;
  if (0 < param_2) {
    do {
      if (this != ((undefined *)GEN_TOP(0x0))) {
        F_00d914e0(this GEN_EDX_ARG,param_3);
        *((undefined4 *)GEN_TOP(((int)this + 4))) = *((undefined4 *)GEN_TOP((param_3 + 4)));
      }
      this = ((undefined *)GEN_TOP(((int)this + 8)));
      iVar1 = iVar1 - 1;
    } while (iVar1 != 0);
  }
  return;
}

/* ref: hkArray::ClearAndDeallocate4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daff10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdaff10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: hkArray::ReserveGrow12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daff50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdaff50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,0xc);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: hkArray::DefaultConstructRange36 */
GEN_LIB GEN_FRAME unsigned int F_00daff90(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdaff90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined * this;
  int iVar1;
  
  this = param_1;
  iVar1 = param_2;
  if (0 < param_2) {
    do {
      if (this != ((undefined *)GEN_TOP(0x0))) {
        F_00da9f50(this GEN_EDX_ARG);
      }
      this = ((undefined *)GEN_TOP(((int)this + 0x24)));
      iVar1 = iVar1 - 1;
    } while (iVar1 != 0);
  }
  return;
}

/* ref: hkArray::ClearAndDeallocate12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00daffc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdaffc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: hkArray::CopyConstructRange12 */
GEN_LIB GEN_FRAME unsigned int F_00db0000(GEN_P(undefined8 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined8 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdb0000u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined8 * param_3 = (undefined8 *)(uintptr_t)gen_a2;)
  undefined8 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (puVar1 != ((undefined8 *)GEN_TOP(0x0))) {
        *puVar1 = *param_3;
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_3 + 1);
      }
      puVar1 = ((undefined8 *)GEN_TOP(((int)puVar1 + 0xc)));
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: hkArray::ReserveGrow112 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db0030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb0030u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,0x70);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: hkMemory::HeapBlockFree12 */
GEN_LIB GEN_FRAME unsigned int F_00db0090(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdb0090u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: hkArray::PushBack4_00db00f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db00f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb00f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 4)));
  *puVar1 = *param_1;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: hkArray::Reserve4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db0130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb0130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  undefined3 extraout_var = 0;
  
  if ((int)(*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff) < param_1) {
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,param_1,4);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: hkArray::SetSize4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db0160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb0160u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,4);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  return uVar2;
}

/* ref: hkArray::PushBack1 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db01a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb01a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  undefined1 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516a8),this,1);
  }
  puVar1 = ((undefined1 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))))));
  *puVar1 = *param_1;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: hkArray::SetSize1 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db01e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb01e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516a8),this,iVar3,1);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  return uVar2;
}

/* ref: hkArray::SetSize12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db0220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb0220u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,0xc);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  return uVar2;
}

/* ref: hkArray::ReserveGrow4Alt */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db0260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb0260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar3,4);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: hkMap::GetNextIndex */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00db02e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb02e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int * piVar2;
  
  iVar1 = param_1 + 1;
  if (iVar1 <= *((int *)GEN_TOP(((int)this + 8)))) {
    piVar2 = ((int *)GEN_TOP((*(int *)this + iVar1 * 8)));
    do {
      if (*piVar2 != -1) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar1 <= *((int *)GEN_TOP(((int)this + 8))));
  }
  return 0;
}

/* ref: hkArray::PushBack8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db0310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb0310u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined * this_00;
  uint uVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,8);
  }
  uVar1 = *(uint *)this;
  this_00 = ((undefined *)GEN_TOP((uVar1 + *((int *)GEN_TOP(((int)this + 4))) * 8)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_00d914e0(this_00 GEN_EDX_ARG,param_2);
    *((undefined4 *)GEN_TOP(((int)this_00 + 4))) = *((undefined4 *)GEN_TOP((param_2 + 4)));
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return uVar1;
}

/* ref: hkArray::ExpandOne36 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db0360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb0360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined * this_00;
  int iVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,0x24);
  }
  this_00 = ((undefined *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 0x24)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    F_00da9f50(this_00 GEN_EDX_ARG);
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar1 + 1;
  return *(int *)this + iVar1 * 0x24;
}

/* ref: hkArray::PushBack12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db03b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined8 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb03b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a2;)
  undefined8 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,0xc);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 0xc)));
  if (puVar1 != ((undefined8 *)GEN_TOP(0x0))) {
    *puVar1 = *param_2;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: hkArray::ClearAndDeallocateHeap4 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db0400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb0400u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: hkArray::ClearAndDeallocateTemp1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db0440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb0440u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a8) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a8),*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: hkArray::ClearAndDeallocateHeap12 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db0480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb0480u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: hkArray::ConstructEmptyArrays */
GEN_LIB GEN_FRAME unsigned int F_00db04c0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb04c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0x80000000;
      }
      puVar1 = puVar1 + 3;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: hkArray::ClearAndDeallocateWith4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db04f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb04f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: hkArray::ClearAndDeallocateWith8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db0530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb0530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: hkStringBuf::AppendTwoSpaces */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db0570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb0570u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined1 * puVar1;
  
  *((undefined1 *)GEN_TOP((*(int *)this - 1 + *((int *)GEN_TOP(((int)this + 4)))))) = 0x20;
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516a8),this,1);
  }
  *((undefined1 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4)))))) = 0x20;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516a8),this,1);
  }
  puVar1 = ((undefined1 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))))));
  *puVar1 = 0;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: hkStringBuf::Clear_00db05e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db05e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb05e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined1 * puVar1;
  
  if ((*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff) == 0) {
    F_00d95690(&REFG(undefined * PTR32, 0x13516a8),this,1,1);
  }
  puVar1 = *(undefined1 * PTR32 *)this;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 1;
  *puVar1 = 0;
  return (uint)puVar1;
}

/* ref: hkArray::PushBackHeap8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db0620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb0620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined * this_00;
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if (*((uint *)GEN_TOP(((int)this + 4))) == uVar1) {
    uVar1 = F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  this_00 = ((undefined *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 8)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    F_00d914e0(this_00 GEN_EDX_ARG,param_1);
    uVar1 = *((uint *)GEN_TOP((param_1 + 4)));
    *((uint *)GEN_TOP(((int)this_00 + 4))) = uVar1;
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return uVar1;
}

/* ref: hkArray::PushBackHeap12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db0670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined8 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb0670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a1;)
  undefined8 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,0xc);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 0xc)));
  if (puVar1 != ((undefined8 *)GEN_TOP(0x0))) {
    *puVar1 = *param_1;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: hkArray::ClearAndDeallocateHeap4b */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db06c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb06c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: hkArray::ClearAndDeallocateTemp1b */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db0700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb0700u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a8) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a8),*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: Global::FreeArray12_00db0740 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db0740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb0740u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: Global::InitInlineArray16 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db0780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb0780u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(int *)this = (int)this + 0xc;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000010;
  return (uint)this;
}

/* ref: Global::InitInlineArray6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db07a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb07a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(int *)this = (int)this + 0xc;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000006;
  return (uint)this;
}

/* ref: Global::FreeArray4_00db07c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db07c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb07c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: Global::FreeArray8 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db0800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb0800u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: Global::DestructRange36 */
GEN_LIB GEN_FRAME unsigned int F_00db0840(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb0840u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int iVar1;
  undefined * this;
  
  iVar1 = param_2 - 1;
  if (-1 < iVar1) {
    this = ((undefined *)GEN_TOP((param_1 + iVar1 * 0x24)));
    do {
      F_00d91510(this GEN_EDX_ARG);
      this = ((undefined *)GEN_TOP(((int)this - 0x24)));
      iVar1 = iVar1 - 1;
    } while (-1 < iVar1);
  }
  return;
}

/* ref: Global::ScalarDeletingDestructor_00db0890 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db0890(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb0890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00daae40(param_1 GEN_EDX_FWD);
  if (((param_2 & 1) != 0) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x70);
  }
  return (uint)param_1;
}

/* ref: Global::InitEmptyString */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db08d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb08d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  F_00d95690(&REFG(undefined * PTR32, 0x13516a8),this,0x40,1);
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516a8),this,1);
  }
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + *(int *)this))) = 0;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)this;
}

/* ref: Global::FreeByteArray_00db0930 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db0930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb0930u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a8) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a8),*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: Global::FreeArray12_00db0970 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db0970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb0970u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: Global::InitScratchArray */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db09b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb09b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  undefined * this_00;
  uint uVar2;
  
  uVar1 = 0;
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *((uint *)GEN_TOP(((int)this + 0x10))) = param_1;
  if (param_1 != 0) {
    this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar1 = *(uint *)(this_00 + 0xc);
    uVar2 = param_1 * 4 + 0x7f & 0xffffff80;
    if ((*(int *)(this_00 + 8) < (int)uVar2) || (*(uint *)(this_00 + 0x10) < uVar1 + uVar2)) {
      uVar1 = F_00d94390(this_00 GEN_EDX_ARG,uVar2);
    }
    else {
      *(uint *)(this_00 + 0xc) = uVar1 + uVar2;
    }
  }
  *((uint *)GEN_TOP(((int)this + 8))) = param_1 | 0x80000000;
  *(uint *)this = uVar1;
  *((uint *)GEN_TOP(((int)this + 0xc))) = uVar1;
  return (uint)this;
}

/* ref: Global::ReleaseScratchArray */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db0a20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb0a20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  undefined * this_00;
  uint uVar3;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0xc)));
  if (iVar1 == *(int *)this) {
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 0x10)));
  this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar3 = iVar2 * 4 + 0x7fU & 0xffffff80;
  if (((*(int *)(this_00 + 8) < (int)uVar3) || (uVar3 + iVar1 != *(int *)(this_00 + 0xc))) ||
     (*(int *)(this_00 + 0x14) == iVar1)) {
    F_00d945c0(this_00 GEN_EDX_ARG,iVar1,uVar3);
  }
  else {
    *(int *)(this_00 + 0xc) = iVar1;
  }
  uVar3 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar3 & 0x80000000) == 0) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar3 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar3;
}

/* ref: Global::FreeArray4_00db0ab0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db0ab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb0ab0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: Global::ClearArray36 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db0af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb0af0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  uVar1 = *(uint *)this;
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((uVar1 + iVar2 * 0x24)));
    do {
      uVar1 = F_00d91510(this_00 GEN_EDX_FWD);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x24)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  return uVar1;
}

/* ref: Global::FreeArray4_00db0b20 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db0b20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb0b20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: Global::FreeArray8_00db0b60 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db0b60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb0b60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: Global::ConstructRange112 */
GEN_LIB GEN_FRAME unsigned int F_00db0ba0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb0ba0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  if (0 < param_2) {
    puVar1 = ((undefined4 *)GEN_TOP((param_1 + 0x50)));
    iVar2 = param_2;
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x50))) {
        puVar1[-2] = 0;
        puVar1[-1] = 0;
        *puVar1 = 0x80000000;
      }
      puVar1 = puVar1 + 0x1c;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: Global::DestroyArray36 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db0bd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb0bd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((*(int *)this + iVar2 * 0x24)));
    do {
      F_00d91510(this_00 GEN_EDX_FWD);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x24)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))
                      (param_1 GEN_EDX_ARG,*(undefined4 *)this,((uVar1 & 0x3fffffff) + uVar1 * 8) * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: Global::DestructRange112 */
GEN_LIB GEN_FRAME unsigned int F_00db0c30(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb0c30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 - 1;
  if (-1 < iVar1) {
    this = ((undefined *)GEN_TOP((iVar1 * 0x70 + param_1)));
    do {
      F_00daae40(this GEN_EDX_ARG);
      this = ((undefined *)GEN_TOP(((int)this - 0x70)));
      iVar1 = iVar1 - 1;
    } while (-1 < iVar1);
  }
  return;
}

/* ref: Global::AppendDefault112 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db0c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb0c60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  int iVar5;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  iVar5 = iVar1 + param_2;
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < iVar5) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= iVar5) {
      iVar3 = iVar5;
    }
    F_00d95690(param_1,this,iVar3,0x70);
  }
  if (0 < param_2) {
    puVar4 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) * 0x70 + *(int *)this + 0x50)));
    iVar5 = param_2;
    do {
      if (puVar4 != ((undefined4 *)GEN_TOP(0x50))) {
        puVar4[-2] = 0;
        puVar4[-1] = 0;
        *puVar4 = 0x80000000;
      }
      puVar4 = puVar4 + 0x1c;
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + param_2;
  return iVar1 * 0x70 + *(int *)this;
}

/* ref: Global::DestroyArray36_00db0d10 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db0d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb0d10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((*(int *)this + iVar2 * 0x24)));
    do {
      F_00d91510(this_00 GEN_EDX_FWD);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x24)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,
                       ((uVar1 & 0x3fffffff) + uVar1 * 8) * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: Global::AppendDefault112_00db0d70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db0d70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb0d70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  int iVar5;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  iVar5 = iVar1 + param_1;
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < iVar5) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= iVar5) {
      iVar3 = iVar5;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516a8),this,iVar3,0x70);
  }
  if (0 < param_1) {
    puVar4 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) * 0x70 + *(int *)this + 0x50)));
    iVar5 = param_1;
    do {
      if (puVar4 != ((undefined4 *)GEN_TOP(0x50))) {
        puVar4[-2] = 0;
        puVar4[-1] = 0;
        *puVar4 = 0x80000000;
      }
      puVar4 = puVar4 + 0x1c;
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + param_1;
  return iVar1 * 0x70 + *(int *)this;
}

/* ref: Global::DestroyArray112 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db0df0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb0df0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((iVar2 * 0x70 + *(int *)this)));
    do {
      F_00daae40(this_00 GEN_EDX_FWD);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x70)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x70);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: Global::DestroyArray36_00db0e50 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db0e50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb0e50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((*(int *)this + iVar2 * 0x24)));
    do {
      F_00d91510(this_00 GEN_EDX_FWD);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x24)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,
                       ((uVar1 & 0x3fffffff) + uVar1 * 8) * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: Global::ScalarDeletingDestructor_00db0f10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db0f10(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb0f10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  LPVOID pvVar2;
  undefined * this;
  int iVar3;
  
  iVar3 = param_1[1] - 1;
  if (-1 < iVar3) {
    this = ((undefined *)GEN_TOP((*param_1 + iVar3 * 0x24)));
    do {
      F_00d91510(this GEN_EDX_FWD);
      this = ((undefined *)GEN_TOP(((int)this - 0x24)));
      iVar3 = iVar3 - 1;
    } while (-1 < iVar3);
  }
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*param_1,((uVar1 & 0x3fffffff) + uVar1 * 8) * 4);
  }
  *param_1 = 0;
  param_1[2] = ((int)0x80000000);
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,0xc);
  }
  return (uint)param_1;
}

/* ref: Global::DestroyArray112_00db0fa0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db0fa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb0fa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((iVar2 * 0x70 + *(int *)this)));
    do {
      F_00daae40(this_00 GEN_EDX_FWD);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x70)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a8) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a8),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x70);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: Global::DestructNestedRange */
GEN_LIB GEN_FRAME unsigned int F_00db1000(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb1000u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  int iVar2;
  undefined * this;
  int iVar3;
  int * piVar4;
  
  iVar2 = param_2 - 1;
  if (-1 < iVar2) {
    piVar4 = ((int *)GEN_TOP((param_1 + iVar2 * 0xc)));
    do {
      iVar3 = piVar4[1] - 1;
      if (-1 < iVar3) {
        this = ((undefined *)GEN_TOP((*piVar4 + iVar3 * 0x24)));
        do {
          F_00d91510(this GEN_EDX_ARG);
          this = ((undefined *)GEN_TOP(((int)this - 0x24)));
          iVar3 = iVar3 - 1;
        } while (-1 < iVar3);
      }
      uVar1 = piVar4[2];
      piVar4[1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),*piVar4,((uVar1 & 0x3fffffff) + uVar1 * 8) * 4);
      }
      iVar2 = iVar2 - 1;
      *piVar4 = 0;
      piVar4[2] = ((int)0x80000000);
      piVar4 = piVar4 - 3;
    } while (-1 < iVar2);
  }
  return;
}

/* ref: Global::ClearNestedArray */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00db1090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb1090u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  undefined * this_00;
  int iVar3;
  int * piVar4;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (iVar2 < 0) {
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    return 0;
  }
  piVar4 = ((int *)GEN_TOP((*(int *)this + iVar2 * 0xc)));
  do {
    iVar3 = piVar4[1] - 1;
    if (-1 < iVar3) {
      this_00 = ((undefined *)GEN_TOP((*piVar4 + iVar3 * 0x24)));
      do {
        F_00d91510(this_00 GEN_EDX_FWD);
        this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x24)));
        iVar3 = iVar3 - 1;
      } while (-1 < iVar3);
    }
    uVar1 = piVar4[2];
    piVar4[1] = 0;
    if (-1 < (int)uVar1) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516ac),*piVar4,((uVar1 & 0x3fffffff) + uVar1 * 8) * 4);
    }
    iVar2 = iVar2 - 1;
    *piVar4 = 0;
    piVar4[2] = ((int)0x80000000);
    piVar4 = piVar4 - 3;
  } while (-1 < iVar2);
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  return 0;
}

/* ref: Global::Destroy */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db1170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb1170u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * pvVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 0x80))) - 1;
  if (-1 < iVar3) {
    pvVar2 = ((undefined *)GEN_TOP((iVar3 * 0x70 + *((int *)GEN_TOP(((int)this + 0x7c))))));
    do {
      F_00daae40(pvVar2 GEN_EDX_FWD);
      pvVar2 = ((undefined *)GEN_TOP(((int)pvVar2 - 0x70)));
      iVar3 = iVar3 - 1;
    } while (-1 < iVar3);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x84)));
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a8) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516a8),*((undefined4 *)GEN_TOP(((int)this + 0x7c))),(uVar1 & 0x3fffffff) * 0x70);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x84))) = 0x80000000;
  iVar3 = *((int *)GEN_TOP(((int)this + 0x74))) - 1;
  if (-1 < iVar3) {
    pvVar2 = ((undefined *)GEN_TOP((iVar3 * 0x70 + *((int *)GEN_TOP(((int)this + 0x70))))));
    do {
      F_00daae40(pvVar2 GEN_EDX_ARG);
      pvVar2 = ((undefined *)GEN_TOP(((int)pvVar2 - 0x70)));
      iVar3 = iVar3 - 1;
    } while (-1 < iVar3);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x78)));
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a8) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516a8),*((undefined4 *)GEN_TOP(((int)this + 0x70))),(uVar1 & 0x3fffffff) * 0x70);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0x80000000;
  uVar1 = F_00daae40(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Global::ResizeNestedArray */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00db1230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb1230u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined * this_00;
  int iVar4;
  int * piVar5;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar3 = uVar1 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    F_00d95690(param_1,this,iVar3,0xc);
  }
  iVar3 = (*((int *)GEN_TOP(((int)this + 4))) - param_2) - 1;
  if (-1 < iVar3) {
    piVar5 = ((int *)GEN_TOP((*(int *)this + param_2 * 0xc + iVar3 * 0xc)));
    do {
      iVar4 = piVar5[1] - 1;
      if (-1 < iVar4) {
        this_00 = ((undefined *)GEN_TOP((*piVar5 + iVar4 * 0x24)));
        do {
          F_00d91510(this_00 GEN_EDX_ARG);
          this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x24)));
          iVar4 = iVar4 - 1;
        } while (-1 < iVar4);
      }
      uVar1 = piVar5[2];
      piVar5[1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),*piVar5,((uVar1 & 0x3fffffff) + uVar1 * 8) * 4);
      }
      iVar3 = iVar3 - 1;
      *piVar5 = 0;
      piVar5[2] = ((int)0x80000000);
      piVar5 = piVar5 - 3;
    } while (-1 < iVar3);
  }
  iVar3 = param_2 - *((int *)GEN_TOP(((int)this + 4)));
  puVar2 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 0xc)));
  if (0 < iVar3) {
    do {
      if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0x80000000;
      }
      puVar2 = puVar2 + 3;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_2;
  return 0;
}

/* ref: Global::DestroyNestedArray */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db1330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb1330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  int iVar2;
  undefined * this_00;
  int iVar3;
  int * piVar4;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    piVar4 = ((int *)GEN_TOP((*(int *)this + iVar2 * 0xc)));
    do {
      iVar3 = piVar4[1] - 1;
      if (-1 < iVar3) {
        this_00 = ((undefined *)GEN_TOP((*piVar4 + iVar3 * 0x24)));
        do {
          F_00d91510(this_00 GEN_EDX_FWD);
          this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x24)));
          iVar3 = iVar3 - 1;
        } while (-1 < iVar3);
      }
      uVar1 = piVar4[2];
      piVar4[1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),*piVar4,((uVar1 & 0x3fffffff) + uVar1 * 8) * 4);
      }
      iVar2 = iVar2 - 1;
      *piVar4 = 0;
      piVar4[2] = ((int)0x80000000);
      piVar4 = piVar4 - 3;
    } while (-1 < iVar2);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: Global::ScalarDeletingDestructor_00db1400 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db1400(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb1400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00db1170(param_1 GEN_EDX_FWD);
  if (((param_2 & 1) != 0) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x30))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x30))) GEN_EDX_ARG,param_1,0x88);
  }
  return (uint)param_1;
}

/* ref: Global::DestroyNestedArray_00db1440 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db1440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb1440u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  undefined * this_00;
  int iVar3;
  int * piVar4;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    piVar4 = ((int *)GEN_TOP((*(int *)this + iVar2 * 0xc)));
    do {
      iVar3 = piVar4[1] - 1;
      if (-1 < iVar3) {
        this_00 = ((undefined *)GEN_TOP((*piVar4 + iVar3 * 0x24)));
        do {
          F_00d91510(this_00 GEN_EDX_FWD);
          this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x24)));
          iVar3 = iVar3 - 1;
        } while (-1 < iVar3);
      }
      uVar1 = piVar4[2];
      piVar4[1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),*piVar4,((uVar1 & 0x3fffffff) + uVar1 * 8) * 4);
      }
      iVar2 = iVar2 - 1;
      *piVar4 = 0;
      piVar4[2] = ((int)0x80000000);
      piVar4 = piVar4 - 3;
    } while (-1 < iVar2);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: Global::DestroyNestedArray_00db1510 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db1510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb1510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  undefined * this_00;
  int iVar3;
  int * piVar4;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    piVar4 = ((int *)GEN_TOP((*(int *)this + iVar2 * 0xc)));
    do {
      iVar3 = piVar4[1] - 1;
      if (-1 < iVar3) {
        this_00 = ((undefined *)GEN_TOP((*piVar4 + iVar3 * 0x24)));
        do {
          F_00d91510(this_00 GEN_EDX_FWD);
          this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x24)));
          iVar3 = iVar3 - 1;
        } while (-1 < iVar3);
      }
      uVar1 = piVar4[2];
      piVar4[1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),*piVar4,((uVar1 & 0x3fffffff) + uVar1 * 8) * 4);
      }
      iVar2 = iVar2 - 1;
      *piVar4 = 0;
      piVar4[2] = ((int)0x80000000);
      piVar4 = piVar4 - 3;
    } while (-1 < iVar2);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db15f0 */
GEN_LIB GEN_FRAME ushort GEN_THISCALL F_00db15f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb15f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((ushort *)GEN_TOP((in_ecx + 4))) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: Global::GetElement8_00db1640 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db1640(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb1640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: Global::GetElement8_00db1650 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db1650(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb1650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: Global::Copy8Bytes */
GEN_LIB GEN_FRAME unsigned int F_00db1680(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb1680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  iVar2 = 2;
  puVar1 = param_1;
  do {
    *puVar1 = *((undefined4 *)GEN_TOP(((param_2 - (int)param_1) + (int)puVar1)));
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  return 0;
}

/* ref: Global::FreeElements8_00db16a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db16a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb16a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00db16c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db16c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb16c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(param_1 GEN_EDX_FWD);
  }
  *(undefined * PTR32 *)this = param_1;
  return (uint)this;
}

/* ref: hkRefPtr::SetRefPtr */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00db16e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb16e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(param_1 GEN_EDX_FWD);
  }
  if (*(undefined * PTR32 *)this != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_ARG);
  }
  *(undefined * PTR32 *)this = param_1;
  return;
}

/* ref: hkRefCountedProperties::ReplaceProperty */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db1740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb1740u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0x210, 0, 4);
  undefined4 * puVar1;
  int iVar2;
  undefined * this_00;
  undefined * phVar3;
  uint uVar4;
  char * pcVar5;
  
  iVar2 = *(int *)(this + 0xc);
  while (iVar2 = iVar2 - 1, -1 < iVar2) {
    puVar1 = ((undefined4 *)GEN_TOP((*(int *)(this + 8) + iVar2 * 8)));
    if (*((short *)GEN_TOP((*(int *)(this + 8) + 4 + iVar2 * 8))) == (short)param_1) {
      if (param_2 != ((undefined *)GEN_TOP(0x0))) {
        F_00d919e0(param_2 GEN_EDX_FWD);
      }
      this_00 = ((undefined *)GEN_TOP(*puVar1));
      if (this_00 != ((undefined *)GEN_TOP(0x0))) {
        F_00d91a80(this_00 GEN_EDX_ARG);
      }
      *puVar1 = param_2;
    }
  }
  F_00da0a80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
  pcVar5 = ((char *)REFP(0x113ce24));
  phVar3 = ((undefined *)GEN_TOP(F_00d9fe80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((char *)REFP(0x113ce0c)))));
  phVar3 = ((undefined *)GEN_TOP(F_00d9fef0(phVar3 GEN_EDX_ARG,param_1)));
  F_00d9fe80(phVar3 GEN_EDX_ARG,pcVar5);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,1,0x1d11daed,((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x113cde0)),
             0x54);
  uVar4 = F_00d9fda0(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG);
  return uVar4;
}

/* ref: hkRefCountedProperties::AccessProperty */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db17f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb17f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  short * psVar2;
  
  iVar1 = *(int *)(this + 0xc) - 1;
  if (-1 < iVar1) {
    psVar2 = ((short *)GEN_TOP((*(int *)(this + 8) + 4 + iVar1 * 8)));
    do {
      if (*psVar2 == (short)param_1) {
        return *((uint *)GEN_TOP((*(int *)(this + 8) + iVar1 * 8)));
      }
      psVar2 = psVar2 - 4;
      iVar1 = iVar1 - 1;
    } while (-1 < iVar1);
  }
  return 0;
}

/* ref: hkRefCountedProperties::AddProperty */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db1820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb1820u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  undefined * phVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined * this_00;
  uint uVar4;
  short * psVar5;
  int iVar6;
  
  iVar6 = *(int *)(this + 0xc) - 1;
  if (-1 < iVar6) {
    iVar3 = *(int *)(this + 8);
    psVar5 = ((short *)GEN_TOP((iVar3 + 4 + iVar6 * 8)));
    do {
      if (*psVar5 == (short)param_1) {
        if (param_2 != ((undefined *)GEN_TOP(0x0))) {
          psVar5 = ((short *)GEN_TOP(F_00d919e0(param_2 GEN_EDX_FWD)));
        }
        this_00 = *((undefined * PTR32 *)GEN_TOP((iVar3 + iVar6 * 8)));
        if (this_00 != ((undefined *)GEN_TOP(0x0))) {
          psVar5 = ((short *)GEN_TOP(F_00d91a80(this_00 GEN_EDX_ARG)));
        }
        *((undefined * PTR32 *)GEN_TOP((iVar3 + iVar6 * 8))) = param_2;
        return (uint)psVar5;
      }
      psVar5 = psVar5 - 4;
      iVar6 = iVar6 - 1;
    } while (-1 < iVar6);
  }
  phVar1 = this + 8;
  if (*(uint *)(this + 0xc) == (*(uint *)(this + 0x10) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),phVar1,8);
  }
  puVar2 = ((undefined4 *)GEN_TOP((*(int *)phVar1 + *(int *)(this + 0xc) * 8)));
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar2 = 0;
    puVar2[1] = 0xffff;
  }
  puVar2 = ((undefined4 *)GEN_TOP((*(int *)phVar1 + *(int *)(this + 0xc) * 8)));
  uVar4 = *(int *)(this + 0xc) + 1;
  *(uint *)(this + 0xc) = uVar4;
  *(short *)(puVar2 + 1) = (short)param_1;
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    uVar4 = F_00d919e0(param_2 GEN_EDX_ARG);
  }
  if (((undefined *)GEN_TOP(*puVar2)) != ((undefined *)GEN_TOP(0x0))) {
    uVar4 = F_00d91a80(((undefined *)GEN_TOP(*puVar2)) GEN_EDX_ARG);
  }
  *puVar2 = param_2;
  return uVar4;
}

/* ref: hkRefCountedProperties::RemoveProperty */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00db18e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb18e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined * this_00;
  short * psVar1;
  int iVar2;
  undefined4 * puVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(this + 0xc) - 1;
  if (-1 < iVar5) {
    psVar1 = ((short *)GEN_TOP((*(int *)(this + 8) + 4 + iVar5 * 8)));
    while (*psVar1 != (short)param_1) {
      psVar1 = psVar1 - 4;
      iVar5 = iVar5 - 1;
      if (iVar5 < 0) {
        return;
      }
    }
    iVar2 = *(int *)(this + 8);
    iVar4 = iVar5 * 8;
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar2 + iVar4)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    *((undefined4 *)GEN_TOP((iVar2 + iVar4))) = 0;
    iVar2 = *(int *)(this + 0xc) - 1;
    *(int *)(this + 0xc) = iVar2;
    if (iVar2 != iVar5) {
      puVar3 = ((undefined4 *)GEN_TOP((*(int *)(this + 8) + iVar4)));
      iVar5 = (*(int *)(this + 8) + iVar2 * 8) - (int)puVar3;
      iVar4 = 2;
      do {
        *puVar3 = *((undefined4 *)GEN_TOP((iVar5 + (int)puVar3)));
        puVar3 = puVar3 + 1;
        iVar4 = iVar4 - 1;
      } while (iVar4 != 0);
    }
  }
  return;
}

/* ref: FUN_00db19a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db19a0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb19a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x113ce48));
  return (uint)in_ecx;
}

/* ref: FUN_00db19b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db19b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb19b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x113ce48));
  iVar3 = *((int *)GEN_TOP(((int)this + 0xc))) - 1;
  iVar1 = *((int *)GEN_TOP(((int)this + 8)));
  while (-1 < iVar3) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar3 * 8)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 8 + iVar3 * 8))) = 0;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x10)));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 8))),uVar2 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar2;
}

/* ref: FUN_00db1a60 */
GEN_LIB GEN_FRAME unsigned int F_00db1a60(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb1a60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *(undefined2 *)(puVar1 + 1) = 0xffff;
        *puVar1 = 0;
        *((undefined2 *)GEN_TOP(((int)puVar1 + 6))) = 0;
      }
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00db1aa0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db1aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb1aa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 8)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = 0;
    puVar1[1] = 0xffff;
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar2 + 1;
  return *(int *)this + iVar2 * 8;
}

/* ref: FUN_00db1af0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db1af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb1af0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int iVar2;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 8)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = 0;
    puVar1[1] = 0xffff;
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar2 + 1;
  return *(int *)this + iVar2 * 8;
}

/* ref: FUN_00db1b40 */
GEN_LIB GEN_FRAME unsigned int F_00db1b40(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb1b40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 - 1;
  while (-1 < iVar1) {
    this = *((undefined * PTR32 *)GEN_TOP((param_1 + iVar1 * 8)));
    if (this != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this GEN_EDX_ARG);
    }
    iVar1 = iVar1 - 1;
    *((undefined4 *)GEN_TOP((param_1 + 8 + iVar1 * 8))) = 0;
  }
  return;
}

/* ref: FUN_00db1bb0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00db1bb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb1bb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined * this_00;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)this;
  iVar3 = param_1 * 8;
  this_00 = *((undefined * PTR32 *)GEN_TOP((iVar2 + iVar3)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(this_00 GEN_EDX_FWD);
  }
  *((undefined4 *)GEN_TOP((iVar2 + iVar3))) = 0;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (*((int *)GEN_TOP(((int)this + 4))) != param_1) {
    puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + iVar3)));
    iVar2 = (*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 8) - (int)puVar1;
    iVar3 = 2;
    do {
      *puVar1 = *((undefined4 *)GEN_TOP((iVar2 + (int)puVar1)));
      puVar1 = puVar1 + 1;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  return 0;
}

/* ref: FUN_00db1c10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db1c10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb1c10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar3 * 8)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 8 + iVar3 * 8))) = 0;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar2 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00db1c80 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db1c80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb1c80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar3 * 8)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 8 + iVar3 * 8))) = 0;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00db1cf0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db1cf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb1cf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar3 * 8)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 8 + iVar3 * 8))) = 0;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00db1d60 */
GEN_LIB GEN_FRAME uint F_00db1d60(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdb1d60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkRefCountedProperties::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db1d90(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb1d90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00db19b0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: hkArray::GetElement16 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db1e00(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb1e00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x10 + *in_ecx;
}

/* ref: hkArray::GetElement16Const */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db1e10(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb1e10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x10 + *in_ecx;
}

/* ref: hkArray::Reserve16 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db1e50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb1e50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,0x10);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: hkArray::CopyElements16 */
GEN_LIB GEN_FRAME unsigned int F_00db1e90(GEN_P(undefined8 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdb1e90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined8 * puVar1;
  int iVar2;
  
  if (0 < param_3) {
    puVar1 = param_1;
    iVar2 = param_3;
    do {
      *puVar1 = *((undefined8 *)GEN_TOP(((param_2 - (int)param_1) + (int)puVar1)));
      puVar1[1] = *((undefined8 *)GEN_TOP(((param_2 - (int)param_1) + 8 + (int)puVar1)));
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00db1ed0 */
GEN_LIB GEN_FRAME unsigned int F_00db1ed0(GEN_P(undefined8 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdb1ed0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined8 * puVar1;
  int iVar2;
  
  if (0 < param_2) {
    puVar1 = param_1;
    iVar2 = param_2;
    do {
      *puVar1 = *((undefined8 *)GEN_TOP(((param_3 - (int)param_1) + (int)puVar1)));
      puVar1[1] = *((undefined8 *)GEN_TOP(((param_3 - (int)param_1) + 8 + (int)puVar1)));
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: hkMemoryAllocator::BufAlloc16 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db1f10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdb1f10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0xc)));
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) << 4)));
  uVar3 = (*pcVar1)(this,&(*(int * PTR32 *)&gen_args[0]));
  *piVar2 = (int)((int)(*(int * PTR32 *)&gen_args[0]) + ((int)(*(int * PTR32 *)&gen_args[0]) >> 0x1f & 0xfU)) >> 4;
  return uVar3;
}

/* ref: hkGeometry::IsValid */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db1f50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb1f50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  uint * puVar4;
  uint in_EDX = 0;
  int iVar5;
  float * pfVar6;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  uVar3 = 0;
  if (uVar1 != 0) {
    pfVar6 = *(float * PTR32 *)this;
    do {
      (*(undefined4 *)((char *)&auVar2 + 4)) = -(uint)GEN_ISNAN(pfVar6[1]);
      (*(undefined4 *)((char *)&auVar2 + 0)) = -(uint)GEN_ISNAN(*pfVar6);
      (*(undefined4 *)((char *)&auVar2 + 8)) = -(uint)GEN_ISNAN(pfVar6[2]);
      (*(undefined4 *)((char *)&auVar2 + 12)) = -(uint)GEN_ISNAN(pfVar6[3]);
      in_EDX = gen_movmskps(&(auVar2));
      if ((in_EDX & 7) != 0) goto LAB_00db1fa8;
      uVar3 = uVar3 + 1;
      pfVar6 = pfVar6 + 4;
    } while (uVar3 < uVar1);
  }
  iVar5 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 0x10)))) {
    puVar4 = *((uint * PTR32 *)GEN_TOP(((int)this + 0xc)));
    do {
      if (((uVar1 <= *puVar4) || (uVar1 <= puVar4[1])) || (uVar1 <= puVar4[2])) {
LAB_00db1fa8: ;
        *param_1 = 0;
        return (uint)param_1;
      }
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 4;
    } while (iVar5 < *((int *)GEN_TOP(((int)this + 0x10))));
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: hkGeometry::hkGeometry */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db1fd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdb1fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  undefined4 * puVar1;
  code * pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int * piVar6;
  uint uVar7;
  undefined4 * puVar8;
  undefined8 * puVar9;
  int iVar10;
  int iVar11;
  
  piVar6 = (*(int * PTR32 *)&gen_args[0]);
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0x80000000;
  uVar7 = *((uint *)GEN_TOP(((int)this + 8)));
  if ((int)(uVar7 & 0x3fffffff) < (*(int * PTR32 *)&gen_args[0])[1]) {
    if ((uVar7 & 0x80000000) == 0) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar7 << 4);
    }
    (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((piVar6[1] << 4)));
    pcVar2 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc)));
    uVar7 = (*pcVar2)(&REFG(undefined * PTR32, 0x13516ac),&(*(int * PTR32 *)&gen_args[0]));
    *(uint *)this = uVar7;
    *((int *)GEN_TOP(((int)this + 8))) = (int)((int)(*(int * PTR32 *)&gen_args[0]) + ((int)(*(int * PTR32 *)&gen_args[0]) >> 0x1f & 0xfU)) >> 4;
  }
  iVar10 = piVar6[1];
  puVar8 = *(undefined4 * PTR32 *)this;
  *((int *)GEN_TOP(((int)this + 4))) = iVar10;
  if (0 < iVar10) {
    iVar11 = *piVar6 - (int)puVar8;
    do {
      puVar1 = ((undefined4 *)GEN_TOP((iVar11 + (int)puVar8)));
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      *puVar8 = *puVar1;
      puVar8[1] = uVar3;
      puVar8[2] = uVar4;
      puVar8[3] = uVar5;
      puVar8 = puVar8 + 4;
      iVar10 = iVar10 - 1;
    } while (iVar10 != 0);
  }
  uVar7 = *((uint *)GEN_TOP(((int)this + 0x14)));
  if ((int)(uVar7 & 0x3fffffff) < piVar6[4]) {
    if (-1 < (int)uVar7) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0xc))),uVar7 << 4);
    }
    (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((piVar6[4] << 4)));
    pcVar2 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc)));
    uVar7 = (*pcVar2)(&REFG(undefined * PTR32, 0x13516ac),&(*(int * PTR32 *)&gen_args[0]));
    *((uint *)GEN_TOP(((int)this + 0xc))) = uVar7;
    *((int *)GEN_TOP(((int)this + 0x14))) = (int)((int)(*(int * PTR32 *)&gen_args[0]) + ((int)(*(int * PTR32 *)&gen_args[0]) >> 0x1f & 0xfU)) >> 4;
  }
  iVar10 = piVar6[4];
  puVar9 = *((undefined8 * PTR32 *)GEN_TOP(((int)this + 0xc)));
  *((int *)GEN_TOP(((int)this + 0x10))) = iVar10;
  if (0 < iVar10) {
    iVar11 = piVar6[3] - (int)puVar9;
    do {
      *puVar9 = *((undefined8 *)GEN_TOP((iVar11 + (int)puVar9)));
      puVar9[1] = *((undefined8 *)GEN_TOP((iVar11 + 8 + (int)puVar9)));
      puVar9 = puVar9 + 2;
      iVar10 = iVar10 - 1;
    } while (iVar10 != 0);
  }
  return (uint)this;
}

/* ref: FUN_00db2110 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db2110(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb2110u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return in_ecx;
}

/* ref: hkGeometry::AppendGeometry */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00db2120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb2120u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  float * pfVar1;
  int * piVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int iVar19;
  int iVar20;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4)));
  F_00db2460(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),*param_1,param_1[1]);
  iVar20 = *((int *)GEN_TOP(((int)this + 0x10)));
  F_00db2220(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),param_1[3],param_1[4]);
  if (iVar3 < *((int *)GEN_TOP(((int)this + 4)))) {
    iVar19 = iVar3 << 4;
    param_1 = ((undefined4 *)GEN_TOP(iVar3));
    do {
      pfVar1 = ((float *)GEN_TOP((*(int *)this + iVar19)));
      fVar4 = *pfVar1;
      fVar5 = pfVar1[1];
      fVar6 = pfVar1[2];
      fVar7 = param_2[1];
      fVar8 = param_2[2];
      fVar9 = param_2[3];
      fVar10 = param_2[5];
      fVar11 = param_2[6];
      fVar12 = param_2[7];
      fVar13 = param_2[9];
      fVar14 = param_2[10];
      fVar15 = param_2[0xb];
      fVar16 = param_2[0xd];
      fVar17 = param_2[0xe];
      fVar18 = param_2[0xf];
      pfVar1 = ((float *)GEN_TOP((*(int *)this + iVar19)));
      *pfVar1 = ((fVar4 * *param_2 + fVar5 * param_2[4]) + fVar6 * param_2[8]) + param_2[0xc];
      pfVar1[1] = ((fVar4 * fVar7 + fVar5 * fVar10) + fVar6 * fVar13) + fVar16;
      pfVar1[2] = ((fVar4 * fVar8 + fVar5 * fVar11) + fVar6 * fVar14) + fVar17;
      pfVar1[3] = ((fVar4 * fVar9 + fVar5 * fVar12) + fVar6 * fVar15) + fVar18;
      param_1 = ((undefined4 *)GEN_TOP(((int)param_1 + 1)));
      iVar19 = iVar19 + 0x10;
    } while ((int)param_1 < *((int *)GEN_TOP(((int)this + 4))));
  }
  if (iVar20 < *((int *)GEN_TOP(((int)this + 0x10)))) {
    iVar19 = iVar20 << 4;
    do {
      piVar2 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + iVar19)));
      *piVar2 = *piVar2 + iVar3;
      piVar2 = ((int *)GEN_TOP((iVar19 + 4 + *((int *)GEN_TOP(((int)this + 0xc))))));
      *piVar2 = *piVar2 + iVar3;
      piVar2 = ((int *)GEN_TOP((iVar19 + 8 + *((int *)GEN_TOP(((int)this + 0xc))))));
      *piVar2 = *piVar2 + iVar3;
      iVar20 = iVar20 + 1;
      iVar19 = iVar19 + 0x10;
    } while (iVar20 < *((int *)GEN_TOP(((int)this + 0x10))));
  }
  return 0;
}

/* ref: hkArray::AppendTriangles */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00db2220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdb2220u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  undefined8 * puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *((int *)GEN_TOP(((int)this + 4))) + param_3;
  uVar1 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar1 < iVar5) {
    iVar4 = uVar1 * 2;
    if (iVar4 <= iVar5) {
      iVar4 = iVar5;
    }
    F_00d95690(param_1,this,iVar4,0x10);
  }
  puVar2 = ((undefined8 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) * 0x10 + *(int *)this)));
  if (0 < param_3) {
    iVar3 = param_2 - (int)puVar2;
    iVar4 = param_3;
    do {
      *puVar2 = *((undefined8 *)GEN_TOP((iVar3 + (int)puVar2)));
      puVar2[1] = *((undefined8 *)GEN_TOP((iVar3 + 8 + (int)puVar2)));
      puVar2 = puVar2 + 2;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  *((int *)GEN_TOP(((int)this + 4))) = iVar5;
  return 0;
}

/* ref: hkArray::AssignTriangles */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db22a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdb22a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  undefined8 * puVar4;
  int iVar5;
  int iVar6;
  
  piVar2 = (*(int * PTR32 *)&gen_args[1]);
  uVar3 = *((uint *)GEN_TOP(((int)this + 8)));
  if ((int)(uVar3 & 0x3fffffff) < (*(int * PTR32 *)&gen_args[1])[1]) {
    if (-1 < (int)uVar3) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x10))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_FWD,*(undefined4 *)this,uVar3 << 4);
    }
    pcVar1 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0xc)));
    (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP((piVar2[1] << 4)));
    uVar3 = (*pcVar1)((*(int * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)&gen_args[1]));
    *(uint *)this = uVar3;
    *((int *)GEN_TOP(((int)this + 8))) = (int)((int)(*(int * PTR32 *)&gen_args[1]) + ((int)(*(int * PTR32 *)&gen_args[1]) >> 0x1f & 0xfU)) >> 4;
  }
  iVar6 = piVar2[1];
  puVar4 = *(undefined8 * PTR32 *)this;
  *((int *)GEN_TOP(((int)this + 4))) = iVar6;
  if (0 < iVar6) {
    iVar5 = *piVar2 - (int)puVar4;
    do {
      *puVar4 = *((undefined8 *)GEN_TOP((iVar5 + (int)puVar4)));
      puVar4[1] = *((undefined8 *)GEN_TOP((iVar5 + 8 + (int)puVar4)));
      puVar4 = puVar4 + 2;
      iVar6 = iVar6 - 1;
    } while (iVar6 != 0);
  }
  return (uint)this;
}

/* ref: FUN_00db2340 */
GEN_LIB GEN_FRAME unsigned int F_00db2340(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdb2340u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 * puVar5;
  int iVar6;
  
  if (0 < param_3) {
    puVar5 = param_1;
    iVar6 = param_3;
    do {
      puVar1 = ((undefined4 *)GEN_TOP(((param_2 - (int)param_1) + (int)puVar5)));
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *puVar5 = *puVar1;
      puVar5[1] = uVar2;
      puVar5[2] = uVar3;
      puVar5[3] = uVar4;
      puVar5 = puVar5 + 4;
      iVar6 = iVar6 - 1;
    } while (iVar6 != 0);
  }
  return;
}

/* ref: FUN_00db2370 */
GEN_LIB GEN_FRAME unsigned int F_00db2370(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdb2370u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 * puVar5;
  int iVar6;
  
  if (0 < param_2) {
    puVar5 = param_1;
    iVar6 = param_2;
    do {
      puVar1 = ((undefined4 *)GEN_TOP(((param_3 - (int)param_1) + (int)puVar5)));
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *puVar5 = *puVar1;
      puVar5[1] = uVar2;
      puVar5[2] = uVar3;
      puVar5[3] = uVar4;
      puVar5 = puVar5 + 4;
      iVar6 = iVar6 - 1;
    } while (iVar6 != 0);
  }
  return;
}

/* ref: hkArray::AssignTrianglesDefault */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db23a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdb23a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  undefined8 * puVar4;
  int iVar5;
  int iVar6;
  
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  uVar3 = *((uint *)GEN_TOP(((int)this + 8)));
  if ((int)(uVar3 & 0x3fffffff) < (*(int * PTR32 *)&gen_args[0])[1]) {
    if (-1 < (int)uVar3) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar3 << 4);
    }
    (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((piVar2[1] << 4)));
    pcVar1 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc)));
    uVar3 = (*pcVar1)(&REFG(undefined * PTR32, 0x13516ac),&(*(int * PTR32 *)&gen_args[0]));
    *(uint *)this = uVar3;
    *((int *)GEN_TOP(((int)this + 8))) = (int)((int)(*(int * PTR32 *)&gen_args[0]) + ((int)(*(int * PTR32 *)&gen_args[0]) >> 0x1f & 0xfU)) >> 4;
  }
  iVar6 = piVar2[1];
  puVar4 = *(undefined8 * PTR32 *)this;
  *((int *)GEN_TOP(((int)this + 4))) = iVar6;
  if (0 < iVar6) {
    iVar5 = *piVar2 - (int)puVar4;
    do {
      *puVar4 = *((undefined8 *)GEN_TOP((iVar5 + (int)puVar4)));
      puVar4[1] = *((undefined8 *)GEN_TOP((iVar5 + 8 + (int)puVar4)));
      puVar4 = puVar4 + 2;
      iVar6 = iVar6 - 1;
    } while (iVar6 != 0);
  }
  return (uint)this;
}

/* ref: hkArray::AppendTrianglesDefault */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00db2440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb2440u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00db2220(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return;
}

/* ref: hkArray::AppendVertices */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00db2460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdb2460u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 * puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = *((int *)GEN_TOP(((int)this + 4))) + param_3;
  uVar5 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar5 < iVar9) {
    iVar8 = uVar5 * 2;
    if (iVar8 <= iVar9) {
      iVar8 = iVar9;
    }
    F_00d95690(param_1,this,iVar8,0x10);
  }
  puVar6 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) * 0x10 + *(int *)this)));
  if (0 < param_3) {
    iVar7 = param_2 - (int)puVar6;
    iVar8 = param_3;
    do {
      puVar1 = ((undefined4 *)GEN_TOP((iVar7 + (int)puVar6)));
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *puVar6 = *puVar1;
      puVar6[1] = uVar2;
      puVar6[2] = uVar3;
      puVar6[3] = uVar4;
      puVar6 = puVar6 + 4;
      iVar8 = iVar8 - 1;
    } while (iVar8 != 0);
  }
  *((int *)GEN_TOP(((int)this + 4))) = iVar9;
  return 0;
}

/* ref: hkArray::AssignVertices */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db24d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdb24d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  undefined4 * puVar1;
  code * pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int * piVar6;
  uint uVar7;
  undefined4 * puVar8;
  int iVar9;
  int iVar10;
  
  piVar6 = (*(int * PTR32 *)&gen_args[1]);
  uVar7 = *((uint *)GEN_TOP(((int)this + 8)));
  if ((int)(uVar7 & 0x3fffffff) < (*(int * PTR32 *)&gen_args[1])[1]) {
    if (-1 < (int)uVar7) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x10))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_FWD,*(undefined4 *)this,uVar7 << 4);
    }
    pcVar2 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0xc)));
    (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP((piVar6[1] << 4)));
    uVar7 = (*pcVar2)((*(int * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)&gen_args[1]));
    *(uint *)this = uVar7;
    *((int *)GEN_TOP(((int)this + 8))) = (int)((int)(*(int * PTR32 *)&gen_args[1]) + ((int)(*(int * PTR32 *)&gen_args[1]) >> 0x1f & 0xfU)) >> 4;
  }
  iVar10 = piVar6[1];
  puVar8 = *(undefined4 * PTR32 *)this;
  *((int *)GEN_TOP(((int)this + 4))) = iVar10;
  if (0 < iVar10) {
    iVar9 = *piVar6 - (int)puVar8;
    do {
      puVar1 = ((undefined4 *)GEN_TOP((iVar9 + (int)puVar8)));
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      *puVar8 = *puVar1;
      puVar8[1] = uVar3;
      puVar8[2] = uVar4;
      puVar8[3] = uVar5;
      puVar8 = puVar8 + 4;
      iVar10 = iVar10 - 1;
    } while (iVar10 != 0);
  }
  return (uint)this;
}

/* ref: hkArray::AssignVerticesDefault */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db2550(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdb2550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  undefined4 * puVar1;
  code * pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int * piVar6;
  uint uVar7;
  undefined4 * puVar8;
  int iVar9;
  int iVar10;
  
  piVar6 = (*(int * PTR32 *)&gen_args[0]);
  uVar7 = *((uint *)GEN_TOP(((int)this + 8)));
  if ((int)(uVar7 & 0x3fffffff) < (*(int * PTR32 *)&gen_args[0])[1]) {
    if (-1 < (int)uVar7) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar7 << 4);
    }
    (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((piVar6[1] << 4)));
    pcVar2 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc)));
    uVar7 = (*pcVar2)(&REFG(undefined * PTR32, 0x13516ac),&(*(int * PTR32 *)&gen_args[0]));
    *(uint *)this = uVar7;
    *((int *)GEN_TOP(((int)this + 8))) = (int)((int)(*(int * PTR32 *)&gen_args[0]) + ((int)(*(int * PTR32 *)&gen_args[0]) >> 0x1f & 0xfU)) >> 4;
  }
  iVar10 = piVar6[1];
  puVar8 = *(undefined4 * PTR32 *)this;
  *((int *)GEN_TOP(((int)this + 4))) = iVar10;
  if (0 < iVar10) {
    iVar9 = *piVar6 - (int)puVar8;
    do {
      puVar1 = ((undefined4 *)GEN_TOP((iVar9 + (int)puVar8)));
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      *puVar8 = *puVar1;
      puVar8[1] = uVar3;
      puVar8[2] = uVar4;
      puVar8[3] = uVar5;
      puVar8 = puVar8 + 4;
      iVar10 = iVar10 - 1;
    } while (iVar10 != 0);
  }
  return (uint)this;
}

/* ref: hkArray::AppendTriangleArray */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00db25e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb25e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  F_00db2220(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),*param_1,param_1[1]);
  return;
}

/* ref: hkArray::AppendVerticesDefault */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00db2600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb2600u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00db2460(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return;
}

/* ref: hkArray::AppendVertexArray */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00db2620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb2620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  F_00db2460(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),*param_1,param_1[1]);
  return;
}

/* ref: FUN_00db2640 */
GEN_LIB GEN_FRAME uint F_00db2640(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7))
{
  GEN_ENTER(0xdb2640u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = ((code *)REFG(gen_code32, 0x135271c))
                    (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: hkNativeFileSystem::ToNativePath */
GEN_LIB GEN_FRAME uint F_00db2660(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb2660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  F_00da46f0(param_2 GEN_EDX_ARG,param_1);
  F_00da45a0(param_2 GEN_EDX_ARG,0x2f,0x5c,1);
  return *param_2;
}

/* ref: hkNativeFileSystem::FromNativePath */
GEN_LIB GEN_FRAME uint F_00db2690(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb2690u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  F_00da46f0(param_2 GEN_EDX_ARG,param_1);
  F_00da45a0(param_2 GEN_EDX_ARG,0x5c,0x2f,1);
  F_00da51f0(param_2 GEN_EDX_ARG,&REFG(undefined, 0x113ce68),&REFG(undefined, 0x1080808),1);
  uVar1 = F_00da4430(param_2 GEN_EDX_ARG,&REFG(undefined, 0x113ce64));
  if (uVar1 != 0) {
    F_00da4670(param_2 GEN_EDX_ARG,2);
  }
  return *param_2;
}

/* ref: hkNativeFileSystem::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db26e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb26e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x90, 0, 4);
  LPVOID pvVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined * this_00;
  
  (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = ((undefined1 *)(gen_frame + 0xc));
  (*(uint *)(gen_frame + 0x8)) = 0x80000080;
  (*(undefined4 *)(gen_frame + 0x4)) = 1;
  ((undefined1 *)(gen_frame + 0xc))[0] = 0;
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))
                             (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,0x10)));
  *((undefined2 *)GEN_TOP(((int)pvVar2 + 4))) = 0x10;
  uVar3 = F_00db2660(param_1,&(*(undefined1 * PTR32 *)(gen_frame + 0x0)));
  this_00 = ((undefined *)GEN_TOP(F_00dbee30(pvVar2 GEN_EDX_ARG,uVar3)));
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))
                             (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,0x1c)));
  *((undefined2 *)GEN_TOP(((int)pvVar2 + 4))) = 0x1c;
  uVar3 = F_00dba5e0(pvVar2 GEN_EDX_ARG,this_00,0x1000);
  F_00d91a80(this_00 GEN_EDX_ARG);
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) & 0x3fffffff)
    ;
  }
  return uVar3;
}

/* ref: hkNativeFileSystem::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db27c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdb27c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x90, 0, 4);
  LPVOID pvVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined * this_00;
  char * pcVar4;
  undefined * phVar5;
  
  (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = ((undefined1 *)(gen_frame + 0xc));
  (*(uint *)(gen_frame + 0x8)) = 0x80000080;
  (*(undefined4 *)(gen_frame + 0x4)) = 1;
  ((undefined1 *)(gen_frame + 0xc))[0] = 0;
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))
                             (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,0x14)));
  *((undefined2 *)GEN_TOP(((int)pvVar2 + 4))) = 0x14;
  uVar3 = F_00db2660((*(undefined4 *)&gen_args[0]),&(*(undefined1 * PTR32 *)(gen_frame + 0x0)));
  this_00 = ((undefined *)GEN_TOP(F_00dbf3c0(pvVar2 GEN_EDX_ARG,uVar3)));
  pcVar4 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this_00 + 0x18))))(this_00 GEN_EDX_ARG,(int)&(*(undefined4 *)&gen_args[0]) + 3)));
  phVar5 = this_00;
  if (*pcVar4 == '\0') {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))
                               (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,0x24)));
    *((undefined2 *)GEN_TOP(((int)pvVar2 + 4))) = 0x24;
    phVar5 = ((undefined *)GEN_TOP(F_00dbf270(pvVar2 GEN_EDX_ARG,this_00,0x1000)));
    F_00d91a80(this_00 GEN_EDX_ARG);
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) & 0x3fffffff)
    ;
  }
  return (uint)phVar5;
}

/* ref: hkArray::GetByte */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00db28c0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb28c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((byte *)GEN_TOP((param_2 + *in_ecx)));
}

/* ref: hkReferencedObject::AllocReferencedObject_00db28d0 */
GEN_LIB GEN_FRAME uint F_00db28d0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdb28d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  *((short *)GEN_TOP((uVar2 + 4))) = (short)param_1;
  return uVar2;
}

/* ref: hkReferencedObject::AllocReferencedObject2_00db2900 */
GEN_LIB GEN_FRAME uint F_00db2900(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdb2900u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  *((short *)GEN_TOP((uVar2 + 4))) = (short)param_1;
  return uVar2;
}

/* ref: hkReferencedObject::AllocReferencedObject3 */
GEN_LIB GEN_FRAME uint F_00db2930(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdb2930u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  *((short *)GEN_TOP((uVar2 + 4))) = (short)param_1;
  return uVar2;
}

/* ref: FUN_00db2970 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db2970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb2970u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbd970(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00db2980 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db2980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb2980u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00dbe420(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00db29d0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_STDCALL F_00db29d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb29d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return;
}

/* ref: FUN_00db29e0 */
GEN_LIB GEN_NOFRAME unsigned int F_00db29e0(void)
{
  GEN_ENTER(0xdb29e0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: hkDefaultError::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db2a00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb2a00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbd970(this + 8 GEN_EDX_FWD,param_2,0);
  *((bool *)GEN_TOP(param_1)) = uVar1 == 0;
  return param_1;
}

/* ref: hkDefaultError::vf6 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db2a20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb2a20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00dbdaf0(this + 8 GEN_EDX_FWD);
  return uVar1;
}

/* ref: hkDefaultError::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db2a30(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(char param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xdb2a30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(char param_7 = (char)gen_a6;)
  GEN_FRAME_DECL_TOP(0xa04, 12, 4);
  uint uVar1;
  undefined * phVar2;
  
  if (param_3 == 0) {
    if (param_5 == 0) {
      F_00da0ce0(((undefined1 *)(gen_frame + 0x0)),0x800,&REFG(undefined, 0x113bdcc),param_4);
      goto LAB_00db2ac0;
    }
  }
  else if (param_3 == -1) {
    F_00da0ce0(((undefined1 *)(gen_frame + 0x0)),0x800,((char *)REFP(0x113cea8)),param_5,param_6,param_2,param_4);
    goto LAB_00db2ac0;
  }
  F_00da0ce0(((undefined1 *)(gen_frame + 0x0)),0x800,((char *)REFP(0x113ceb8)),param_5,param_6,param_3,param_2,
                     param_4);
LAB_00db2ac0: ;
  (*(undefined1 *)(gen_frame + 0x7ff)) = 0;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((param_1 + 0x20))))(((undefined1 *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP((param_1 + 0x24))));
  if (param_7 != '\0') {
    phVar2 = REFG(undefined4, 0x15dffb0);
    if ((REFG(undefined4, 0x15dffb0) == ((undefined *)GEN_TOP(0x0))) &&
       (phVar2 = ((undefined *)GEN_TOP(F_00db36d0())),
       REFG(undefined4, 0x15dffb0) != ((undefined *)GEN_TOP(0x0)))) {
      F_00d91840(REFG(undefined4, 0x15dffb0) GEN_EDX_ARG);
    }
    REFG(undefined4, 0x15dffb0) = phVar2;
    uVar1 = F_00db3490(((undefined *)GEN_TOP(REFG(undefined4, 0x15dffb0))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x800)),0x80);
    if (2 < (int)uVar1) {
      ((code *)*((gen_code32 *)GEN_TOP((param_1 + 0x20))))(((char *)REFP(0x113ce94)),*((undefined4 *)GEN_TOP((param_1 + 0x24))));
      uVar1 = F_00db3330(((undefined *)GEN_TOP(REFG(undefined4, 0x15dffb0))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x808)),uVar1 - 2,
                         *((undefined4 *)GEN_TOP((param_1 + 0x20))),*((undefined4 *)GEN_TOP((param_1 + 0x24))));
    }
  }
  return uVar1;
}

/* ref: hkDefaultError::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db2b60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xdb2b60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[5];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  uint uVar1;
  char * pcVar2;
  uint uVar3;
  
  uVar3 = (*(uint *)&gen_args[1]);
  if (((*(uint *)&gen_args[1]) == 0xffffffff) && (*(int *)(this + 0x18) != 0)) {
    uVar3 = *((uint *)GEN_TOP((*(int *)(this + 0x14) - 4 + *(int *)(this + 0x18) * 4)));
  }
  pcVar2 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_FWD,(int)&(*(uint *)&gen_args[1]) + 3,uVar3)));
  if (*pcVar2 == '\0') {
    return 0;
  }
  pcVar2 = "";
  uVar1 = (*(uint *)&gen_args[1]) >> 8;
  (*(uint *)&gen_args[1]) = (*(uint *)&gen_args[1]) & 0xffffff00;
  switch((unsigned int)(uintptr_t)((*(int *)&gen_args[0]))) {
  case 0: ;
    pcVar2 = ((char *)REFP(0x113cee0));
    break;
  case 1: ;
    pcVar2 = ((char *)REFP(0x10c43b4));
    break;
  case 2: ;
    pcVar2 = ((char *)REFP(0x113ced8));
    goto LAB_00db2bcd;
  case 3: ;
    pcVar2 = ((char *)REFP(0x113ced0));
LAB_00db2bcd: ;
    (*(uint *)&gen_args[1]) = CONCAT31((int3)uVar1,1);
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_ARG,pcVar2,uVar3,(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]),(*(uint *)&gen_args[1]));
  if (((*(int *)&gen_args[0]) != 2) && ((*(int *)&gen_args[0]) != 3)) {
    return 0;
  }
  return 1;
}

/* ref: hkDefaultError::vf8 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00db2c20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb2c20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((int *)GEN_TOP((in_ecx + 0x18))) = *((int *)GEN_TOP((in_ecx + 0x18))) - 1;
  return;
}

/* ref: hkDefaultError::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db2c30(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdb2c30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  uint uVar1;
  
  if (param_3 != '\0') {
    uVar1 = F_00dbe420(((undefined *)GEN_TOP((param_1 + 8))) GEN_EDX_FWD,param_2);
    return uVar1;
  }
  uVar1 = F_00dbd8b0(((undefined *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),param_2,1);
  return uVar1;
}

/* ref: hkDefaultError::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db2c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb2c60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 * puVar1;
  
  if (*(uint *)(this + 0x18) == (*(uint *)(this + 0x1c) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this + 0x14,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x14) + *(int *)(this + 0x18) * 4)));
  *puVar1 = param_1;
  *(int *)(this + 0x18) = *(int *)(this + 0x18) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00db2ca0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db2ca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb2ca0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x113ceec));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = param_2;
  return (uint)this;
}

/* ref: FUN_00db2ce0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db2ce0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb2ce0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((int *)GEN_TOP((in_ecx + 4))) = *((int *)GEN_TOP((in_ecx + 4))) - param_2;
  return param_2;
}

/* ref: FUN_00db2cf0 */
GEN_LIB GEN_FRAME uint F_00db2cf0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdb2cf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00db2d40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db2d40(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb2d40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: FUN_00db2d80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db2d80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb2d80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbd8b0(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: hkReferencedObject::FreeReferencedObject_00db2dc0 */
GEN_LIB GEN_FRAME uint F_00db2dc0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdb2dc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00db2df0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db2df0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb2df0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x1c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x14))),iVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0x80000000;
  uVar2 = F_00dbdb20(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar2;
}

/* ref: hkDefaultError::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db2e50(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb2e50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = param_1[7];
  param_1[6] = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),param_1[5],iVar1 * 4);
  }
  param_1[5] = 0;
  param_1[7] = 0x80000000;
  F_00dbdb20(param_1 + 2 GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: hkSocket::ReaderAdapter::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db2ef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb2ef0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (0 < (int)param_2) {
    do {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x14))))
                        (*(int * PTR32 *)(this + 8) GEN_EDX_ARG,param_1 + uVar2,param_2 - uVar2);
      uVar2 = uVar2 + uVar1;
      if (uVar1 == 0) {
        return uVar2;
      }
    } while ((int)uVar2 < (int)param_2);
  }
  return param_2;
}

/* ref: hkSocket::ReaderAdapter::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db2f40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb2f40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0xc))))(*(int * PTR32 *)(this + 8) GEN_EDX_FWD,param_1);
  return param_1;
}

/* ref: hkSocket::WriterAdapter::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db2f60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb2f60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (0 < (int)param_2) {
    do {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x18))))
                        (*(int * PTR32 *)(this + 8) GEN_EDX_ARG,param_1 + uVar2,param_2 - uVar2);
      uVar2 = uVar2 + uVar1;
      if (uVar1 == 0) {
        return uVar2;
      }
    } while ((int)uVar2 < (int)param_2);
  }
  return param_2;
}

/* ref: hkSocket::WriterAdapter::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db2fb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb2fb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0xc))))(*(int * PTR32 *)(this + 8) GEN_EDX_FWD,param_1);
  return param_1;
}

/* ref: FUN_00db2fd0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db2fd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb2fd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x113cf74));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[12])REFP(0x113cf18));
  *((undefined2 *)GEN_TOP(((int)this + 0xe))) = 1;
  *((undefined2 *)GEN_TOP(((int)this + 0x1a))) = 1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x14))) = (*(undefined * PTR32 (*)[9])REFP(0x113cf4c));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) = this;
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1c))) = this;
  if ((REFG(char, 0x15dffac) == '\0') && (REFG(undefined * PTR32, 0x1352788) != ((undefined *)GEN_TOP(0x0)))) {
    (*(code *)REFG(undefined * PTR32, 0x1352788))(0);
    REFG(char, 0x15dffac) = '\x01';
  }
  return (uint)this;
}

/* ref: FUN_00db3030 */
GEN_LIB GEN_NOFRAME uint F_00db3030(void)
{
  GEN_ENTER(0xdb3030u, 0u, 0u, 0u, 0u);
  LPVOID pvVar1;
  undefined * this;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))
                           (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,0x24)));
  *((undefined2 *)GEN_TOP(((int)this + 4))) = 0x24;
  uVar2 = F_00dbf8f0(this GEN_EDX_ARG,0xffffffff);
  return uVar2;
}

/* ref: hkSocket::vf9 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db30c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdb30c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  return 1;
}

/* ref: hkSocket::vf10 */
GEN_LIB GEN_NOFRAME byte F_00db30d0(void)
{
  GEN_ENTER(0xdb30d0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00db30f0 */
GEN_LIB GEN_FRAME uint F_00db30f0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdb30f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00db3120 */
GEN_LIB GEN_FRAME uint F_00db3120(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdb3120u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00db3150 */
GEN_LIB GEN_FRAME uint F_00db3150(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdb3150u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkSocket::ReaderAdapter::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db3180(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb3180u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: hkSocket::WriterAdapter::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db31c0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb31c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: FUN_00db3200 */
GEN_LIB GEN_FRAME uint F_00db3200(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdb3200u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  *((short *)GEN_TOP((uVar2 + 4))) = (short)param_1;
  return uVar2;
}

/* ref: hkSocket::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db3230(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb3230u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  param_1[5] = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  param_1[2] = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: FUN_00db3270 */
GEN_LIB GEN_FRAME uint F_00db3270(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb3270u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00db3280 */
GEN_LIB GEN_NOFRAME uint F_00db3280(GEN_P(uint in_eax, unsigned int gen_a0))
{
  GEN_ENTER(0xdb3280u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_eax = (uint)gen_a0;)
  if (in_eax == 0) {
    in_eax = 0x80000000;
  }
  return in_eax;
}

/* ref: FUN_00db3290 */
GEN_LIB GEN_FRAME uint F_00db3290(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb3290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00d9fe80(param_2 GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: hkStackTracer::CallTree::IsEmpty */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db32b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb32b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((bool *)GEN_TOP(param_2)) = *((int *)GEN_TOP((in_ecx + 0x10))) == -1;
  return param_2;
}

/* ref: FUN_00db32d0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00db32d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb32d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  HANDLE pvVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 8)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x113d1ac));
  if (*piVar1 != 0) {
    pvVar2 = gen_imp_GetCurrentProcess();
    (*((code *)GEN_TOP(piVar1[0xc])))(pvVar2);
    piVar1[3] = 0;
    piVar1[4] = 0;
    piVar1[5] = 0;
    piVar1[6] = 0;
    piVar1[7] = 0;
    piVar1[8] = 0;
    piVar1[9] = 0;
    piVar1[10] = 0;
    piVar1[0xb] = 0;
    piVar1[0xc] = 0;
    piVar1[0xd] = 0;
    gen_imp_FreeLibrary((HMODULE)piVar1[1]);
    gen_imp_FreeLibrary((HMODULE)*piVar1);
    *piVar1 = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return;
}

/* ref: hkStackTracer::DumpStackTrace */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db3330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(code * param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xdb3330u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(code * param_3 = (code *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_FRAME_DECL(0x11060, 0);
  HANDLE pvVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 * puVar5;
  int iVar6;
  undefined1 * puVar7;
  undefined4 uVar8;
  char * pcVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 * puVar12;
  
  (*(HANDLE *)(gen_frame + 0x1104c)) = (HANDLE)0xdb3350;
  (*(undefined * PTR32 *)(gen_frame + 0x11044)) = this;
  pvVar1 = gen_imp_GetCurrentProcess();
  (*(HANDLE *)(gen_frame + 0x1104c)) = pvVar1;
  (*(int *)(gen_frame + 0x11048)) = 0;
  if (0 < param_2) {
    do {
      iVar6 = (*(int *)(gen_frame + 0x11048));
      iVar3 = *(int *)((*(undefined * PTR32 *)(gen_frame + 0x11044)) + 8);
      iVar4 = *((int *)GEN_TOP((param_1 + (*(int *)(gen_frame + 0x11048)) * 4)));
      GEN_V16_SET(((undefined1 *)(gen_frame + 0x10800)), 0x0);
      GEN_V16_SET(((undefined1 *)(gen_frame + 0x10810)), 0x0);
      iVar4 = iVar4 - 4;
      (*(undefined4 *)(gen_frame + 0x1100c)) = 0;
      memset((char *)((undefined1 *)(gen_frame + 0x10800)) + 4, 0, 12);
      (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10800)) + 0)) = 0x20;
      (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10800)) + 0)) = 0x20;
      (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10810)) + 8)) = 0x7e0;
      unsigned char gen_vx0[64];
      gen_vzext(gen_vx0, (unsigned long long)(0x7e0), 4);
      unsigned char gen_vx1[64];
      gen_vshift(gen_vx1, gen_vx0, 12, (int)(0x40), 0);
      gen_vset(((unsigned char *)(((undefined1 *)(gen_frame + 0x10810))) + 0), 12, gen_vx1, 12);
      (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10810)) + 12)) = 0;
      (*(undefined8 *)(gen_frame + 0x11038)) = 0;
      (*(int *)(gen_frame + 0x11040)) = iVar4;
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((iVar3 + 0x1c))))((*(HANDLE *)(gen_frame + 0x1104c)),iVar4,0,&(*(undefined8 *)(gen_frame + 0x11038)),((undefined1 *)(gen_frame + 0x10800)));
      if (uVar2 == 0) {
        if (REFG(char, 0x15dffb4) == '\0') {
          gen_imp_OutputDebugStringA(
                            ((char *)REFP(0x113d200))
                            );
          REFG(char, 0x15dffb4) = '\x01';
        }
        pcVar9 = ((char *)REFP(0x113d1c8));
        puVar5 = (undefined4 *)(((undefined1 *)(gen_frame + 0x10810)) + 0xc);
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 - 1) {
          *puVar5 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          puVar5 = puVar5 + 1;
        }
        *(undefined2 *)puVar5 = *(undefined2 *)pcVar9;
        *((char *)GEN_TOP(((int)puVar5 + 2))) = pcVar9[2];
        iVar4 = (*(int *)(gen_frame + 0x11040));
        iVar6 = (*(int *)(gen_frame + 0x11048));
      }
      iVar3 = *(int *)((*(undefined * PTR32 *)(gen_frame + 0x11044)) + 8);
      GEN_V16_SET(*(gen_v16 *)((undefined1 *)(gen_frame + 0x11010)), 0x0);
      (*(undefined8 *)(gen_frame + 0x11020)) = 0;
      memset((gen_frame + 0x0), 0, 12);
      (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x11010)) + 0)) = 0x18;
      (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x11010)) + 0)) = 0x18;
      ((code *)*((gen_code32 *)GEN_TOP((iVar3 + 0x2c))))((*(HANDLE *)(gen_frame + 0x1104c)),iVar4,(*(undefined4 *)(gen_frame + 0x1100c)),&(*(undefined8 *)(gen_frame + 0x11038)),((undefined1 *)(gen_frame + 0x11010)));
      puVar12 = ((undefined1 *)(gen_frame + 0x10810)) + 0xc;
      pcVar9 = ((char *)REFP(0x113d1b8));
      puVar7 = ((undefined1 *)(gen_frame + 0x10000));
      uVar8 = 0x800;
      uVar10 = (*(undefined4 *)(gen_frame + 0x1101c));
      uVar11 = (*(undefined4 *)(gen_frame + 0x11018));
      F_01052886(puVar7,0x800,((char *)REFP(0x113d1b8)),(*(undefined4 *)(gen_frame + 0x1101c)),(*(undefined4 *)(gen_frame + 0x11018)),puVar12);
      pvVar1 = (HANDLE)(*param_3)(((undefined1 *)(gen_frame + 0x10000)),param_4,puVar7,uVar8,pcVar9,uVar10,uVar11,puVar12);
      (*(int *)(gen_frame + 0x11048)) = iVar6 + 1;
    } while (iVar6 + 1 < param_2);
  }
  return (uint)pvVar1;
}

/* ref: hkStackTracer::GetStackTrace */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db3490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb3490u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  if (*((gen_code32 *)GEN_TOP((*(int *)(this + 8) + 0x38))) != ((code *)GEN_TOP(0x0))) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 8) + 0x38))))(0,param_2,param_1,0);
    return uVar1 & 0xffff;
  }
  return 0;
}

/* ref: hkStackTracer::GetModuleInfo */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00db34e0(GEN_P(code * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb34e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(code * param_1 = (code *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x804, 12, 4);
  DWORD DVar1;
  uint uVar2;
  undefined1 * puVar3;
  undefined4 uVar4;
  char * pcVar5;
  CHAR * pCVar6;
  
  DVar1 = gen_imp_GetModuleFileNameA((HMODULE)0x0,((CHAR *)(gen_frame + 0x400)),0x400);
  uVar2 = 0;
  if (DVar1 != 0) {
    pCVar6 = ((CHAR *)(gen_frame + 0x400));
    pcVar5 = ((char *)REFP(0x113d3c4));
    puVar3 = ((undefined1 *)(gen_frame + 0x0));
    uVar4 = 0x400;
    F_00da0ce0(puVar3,0x400,((char *)REFP(0x113d3c4)),pCVar6);
    uVar2 = (*param_1)(((undefined1 *)(gen_frame + 0x0)),param_2,puVar3,uVar4,pcVar5,pCVar6);
  }
  return uVar2;
}

/* ref: hkStackTracer::CallTree::Swap */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db3540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb3540u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = param_1[1];
  uVar2 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  uVar5 = *((uint *)GEN_TOP(((int)this + 8)));
  uVar3 = *(undefined4 *)this;
  uVar4 = F_00db3280(param_1[2] & 0x3fffffff);
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = uVar1;
  *((uint *)GEN_TOP(((int)this + 8))) = uVar4;
  *param_1 = uVar3;
  param_1[1] = uVar2;
  uVar5 = F_00db3280(uVar5 & 0x3fffffff);
  param_1[2] = uVar5;
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x10)));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_1[4];
  param_1[4] = uVar1;
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x14)));
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_1[5];
  param_1[5] = uVar1;
  uVar5 = *((uint *)GEN_TOP(((int)this + 0xc)));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1[3];
  param_1[3] = uVar5;
  return uVar5;
}

/* ref: hkStackTracer::CallTree::GetCallStack */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db35c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdb35c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = param_1;
  if (0 < param_3) {
    do {
      if (iVar2 < 1) {
        return uVar1;
      }
      *((undefined4 *)GEN_TOP((param_2 + uVar1 * 4))) = *((undefined4 *)GEN_TOP((iVar2 * 0x14 + *(int *)this)));
      iVar2 = *((int *)GEN_TOP((iVar2 * 0x14 + 4 + *(int *)this)));
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < param_3);
  }
  return uVar1;
}

/* ref: hkStackTracer::CallTree::GetCallStackSize */
GEN_LIB GEN_FRAME int GEN_THISCALL F_00db3600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb3600u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (0 < param_1) {
    iVar2 = param_1;
    do {
      iVar2 = *((int *)GEN_TOP((*(int *)this + 4 + iVar2 * 0x14)));
      iVar1 = iVar1 + 1;
    } while (0 < iVar2);
  }
  return iVar1;
}

/* ref: hkStackTracer::CallTree::RemoveNodeIfUnused */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db3620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb3620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar3 = *(int *)this;
  uVar5 = param_1 * 5;
  iVar1 = iVar3 + param_1 * 0x14;
  if ((*((int *)GEN_TOP((iVar3 + 0x10 + param_1 * 0x14))) == 0) && (*((int *)GEN_TOP((iVar1 + 8))) == -1)) {
    iVar4 = *((int *)GEN_TOP((iVar1 + 4)));
    if (iVar4 != -1) {
      piVar2 = ((int *)GEN_TOP((iVar3 + 8 + iVar4 * 0x14)));
      for (iVar4 = *((int *)GEN_TOP((iVar3 + 8 + iVar4 * 0x14))); iVar4 != param_1;
          iVar4 = *((int *)GEN_TOP((iVar3 + 0xc + iVar4 * 0x14)))) {
        iVar4 = *piVar2;
        piVar2 = ((int *)GEN_TOP((iVar3 + 0xc + iVar4 * 0x14)));
      }
      *piVar2 = *((int *)GEN_TOP((iVar1 + 0xc)));
      F_00db3620(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP((iVar1 + 4))));
      uVar5 = *((uint *)GEN_TOP(((int)this + 0x14)));
      *((uint *)GEN_TOP((iVar1 + 0xc))) = uVar5;
      *((int *)GEN_TOP(((int)this + 0x14))) = param_1;
      return uVar5;
    }
    uVar5 = *((uint *)GEN_TOP(((int)this + 0x14)));
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0xffffffff;
    *((uint *)GEN_TOP((iVar1 + 0xc))) = uVar5;
    *((int *)GEN_TOP(((int)this + 0x14))) = param_1;
  }
  return uVar5;
}

/* ref: FUN_00db36a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db36a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb36a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x113d1ac));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 8))) = &REFG(undefined, 0x15dffcc);
  F_00db3b00(&REFG(undefined, 0x15dffcc) GEN_EDX_FWD);
  return (uint)this;
}

/* ref: Global::GetStackTracerInstance */
GEN_LIB GEN_NOFRAME uint F_00db36d0(void)
{
  GEN_ENTER(0xdb36d0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00db36a0(&REFG(undefined, 0x15dffc0) GEN_EDX_ARG);
  return uVar1;
}

/* ref: hkStackTracer::CallTree::DumpTrace */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db36e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb36e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0x44, 12, 4);
  undefined * this_00;
  uint uVar1;
  
  if (-1 < param_1) {
    this_00 = ((undefined *)GEN_TOP(F_00db36d0()));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d919e0(this_00 GEN_EDX_ARG);
    }
    F_00d91a80(this_00 GEN_EDX_ARG);
    uVar1 = F_00db35c0(this GEN_EDX_ARG,param_1,((undefined1 *)(gen_frame + 0x0)),0x10);
    uVar1 = F_00db3330((undefined *)this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),uVar1,((code *)REFP(0xdb3290)),param_2);
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      uVar1 = F_00d91a80(this_00 GEN_EDX_ARG);
    }
    return uVar1;
  }
  uVar1 = F_00d9fe80(param_2 GEN_EDX_ARG,((char *)REFP(0x113d3d0)));
  return uVar1;
}

/* ref: hkStackTracer::CallTree::ReleaseCallStack */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db3760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb3760u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP((*(int *)this + 0x10 + param_1 * 0x14)));
  *piVar1 = *piVar1 - 1;
  uVar2 = F_00db3620(this GEN_EDX_FWD,param_1);
  return uVar2;
}

/* ref: hkStackTracer::CallTree::GetFreeNode */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db3780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb3780u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x14)));
  if (uVar1 != 0xffffffff) {
    iVar2 = uVar1 * 0x14;
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = *((undefined4 *)GEN_TOP((*(int *)this + 0xc + iVar2)));
    *((undefined4 *)GEN_TOP((*(int *)this + iVar2))) = 0;
    *((undefined4 *)GEN_TOP((iVar2 + 4 + *(int *)this))) = 0xffffffff;
    *((undefined4 *)GEN_TOP((iVar2 + 8 + *(int *)this))) = 0xffffffff;
    *((undefined4 *)GEN_TOP((iVar2 + 0xc + *(int *)this))) = 0xffffffff;
    *((undefined4 *)GEN_TOP((iVar2 + 0x10 + *(int *)this))) = 0;
    return uVar1;
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  if (uVar1 == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(*((undefined4 *)GEN_TOP(((int)this + 0xc))),this,0x14);
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  iVar2 = uVar1 * 0x14;
  *((undefined4 *)GEN_TOP((iVar2 + *(int *)this))) = 0;
  *((undefined4 *)GEN_TOP((iVar2 + 4 + *(int *)this))) = 0xffffffff;
  *((undefined4 *)GEN_TOP((iVar2 + 8 + *(int *)this))) = 0xffffffff;
  *((undefined4 *)GEN_TOP((iVar2 + 0xc + *(int *)this))) = 0xffffffff;
  *((undefined4 *)GEN_TOP((iVar2 + 0x10 + *(int *)this))) = 0;
  return uVar1;
}

/* ref: hkStackTracer::CallTree::Quit */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00db3820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb3820u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0xc)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    if (-1 < (int)uVar2) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))
                (piVar1 GEN_EDX_ARG,*(undefined4 *)this,((uVar2 & 0x3fffffff) + uVar2 * 4) * 4);
    }
    *(undefined4 *)this = 0;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0xffffffff;
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0xffffffff;
  }
  return;
}

/* ref: hkStackTracer::CallTree::InsertCallStack */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db3870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb3870u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int * piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if (*((int *)GEN_TOP(((int)this + 0x10))) == -1) {
    uVar6 = F_00db3780(this GEN_EDX_FWD);
    *((uint *)GEN_TOP(((int)this + 0x10))) = uVar6;
  }
  uVar6 = *((uint *)GEN_TOP(((int)this + 0x10)));
  iVar5 = param_2;
joined_r0x00db3890: ;
  do {
    uVar4 = uVar6;
    iVar5 = iVar5 - 1;
    if (iVar5 < 0) {
      piVar1 = ((int *)GEN_TOP((*(int *)this + 0x10 + uVar4 * 0x14)));
      *piVar1 = *piVar1 + 1;
      return uVar4;
    }
    iVar2 = *((int *)GEN_TOP((param_1 + iVar5 * 4)));
    iVar3 = uVar4 * 0x14;
    uVar6 = *((uint *)GEN_TOP((*(int *)this + 8 + iVar3)));
    while (0 < (int)uVar6) {
      piVar1 = ((int *)GEN_TOP((*(int *)this + uVar6 * 0x14)));
      if (*piVar1 == iVar2) {
        if (uVar6 != 0xffffffff) goto joined_r0x00db3890;
        break;
      }
      uVar6 = piVar1[3];
    }
    uVar6 = F_00db3780(this GEN_EDX_ARG);
    piVar1 = ((int *)GEN_TOP((*(int *)this + uVar6 * 0x14)));
    *piVar1 = iVar2;
    piVar1[1] = uVar4;
    piVar1[2] = -1;
    piVar1[3] = *((int *)GEN_TOP((iVar3 + 8 + *(int *)this)));
    *((uint *)GEN_TOP((iVar3 + 8 + *(int *)this))) = uVar6;
  } while( true );
}

/* ref: hkStackTracer::CallTree::CallTree */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db3920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb3920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  uVar1 = param_1[3];
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = uVar1;
  F_00db40c0(this GEN_EDX_FWD,uVar1,0,*param_1,param_1[1]);
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_1[4];
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_1[5];
  return (uint)this;
}

/* ref: hkStackTracer::CallTree::Assign */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db3970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb3970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xc))) + 0x10))))
              (*((int * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,*(undefined4 *)this,((uVar1 & 0x3fffffff) + uVar1 * 4) * 4
              );
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  uVar2 = param_1[3];
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = uVar2;
  F_00db40c0(this GEN_EDX_ARG,uVar2,0,*param_1,param_1[1]);
  uVar1 = param_1[4];
  *((uint *)GEN_TOP(((int)this + 0x10))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_1[5];
  return uVar1;
}

/* ref: hkStackTracer::CallTree::InsertCurrentCallStack */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db39e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb39e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x204, 12, 4);
  uint uVar1;
  
  uVar1 = F_00db3490(param_1 GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)),0x80);
  if (0 < (int)uVar1) {
    uVar1 = F_00db3870(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),uVar1 - 1);
    return uVar1;
  }
  return 0;
}

/* ref: hkStackTracer::CallTree::GetTraces */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db3a40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb3a40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined4 * puVar4;
  undefined3 extraout_var = 0;
  int iVar5;
  int iVar6;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
    iVar5 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar5 <= iVar1) {
      iVar5 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),param_1,iVar5,4);
  }
  param_1[1] = iVar1;
  puVar4 = ((undefined4 *)GEN_TOP((param_2[2] & 0x3fffffff)));
  if ((int)puVar4 < iVar1) {
    iVar5 = (int)((int)(uintptr_t)puVar4) * 2;
    if ((int)((int)(uintptr_t)puVar4) * 2 <= iVar1) {
      iVar5 = iVar1;
    }
    bVar3 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),param_2,iVar5,4);
    puVar4 = ((undefined4 *)GEN_TOP(CONCAT31(extraout_var,bVar3)));
  }
  param_2[1] = iVar1;
  if (iVar1 != 0) {
    puVar4 = ((undefined4 *)GEN_TOP(*param_1));
    *puVar4 = 0;
    *((undefined4 *)GEN_TOP(*param_2)) = 0xffffffff;
    iVar5 = 1;
    if (1 < iVar1) {
      iVar6 = 0x14;
      do {
        iVar2 = *(int *)this;
        *((undefined4 *)GEN_TOP((*param_1 + iVar5 * 4))) = *((undefined4 *)GEN_TOP((iVar2 + iVar6)));
        puVar4 = *((undefined4 * PTR32 *)GEN_TOP((iVar2 + 4 + iVar6)));
        *((undefined4 * PTR32 *)GEN_TOP((*param_2 + iVar5 * 4))) = puVar4;
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 0x14;
      } while (iVar5 < iVar1);
    }
  }
  return (uint)puVar4;
}

/* ref: Global::LoadDbgHelp */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db3b00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb3b00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  HMODULE pHVar1;
  FARPROC pFVar2;
  uint uVar3;
  HANDLE pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  pHVar1 = gen_imp_LoadLibraryA(REFG(undefined * PTR32, 0x13527fc));
  *(HMODULE *)this = pHVar1;
  if (pHVar1 == (HMODULE)0x0) {
    gen_imp_OutputDebugStringA(((char *)REFP(0x113d168)));
  }
  pHVar1 = gen_imp_LoadLibraryA(((char *)REFP(0x113bd94)));
  *((HMODULE *)GEN_TOP(((int)this + 4))) = pHVar1;
  if (pHVar1 == (HMODULE)0x0) {
    gen_imp_OutputDebugStringA(((char *)REFP(0x113d128)));
  }
  uVar3 = 0;
  if (*(int *)this != 0) {
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 1;
    pFVar2 = gen_imp_GetProcAddress(*(int *)this,((char *)REFP(0x113d114)));
    *((FARPROC *)GEN_TOP(((int)this + 0xc))) = pFVar2;
    pFVar2 = gen_imp_GetProcAddress(*(undefined4 *)this,((char *)REFP(0x113d0fc)));
    *((FARPROC *)GEN_TOP(((int)this + 0x10))) = pFVar2;
    if (pFVar2 == (FARPROC)0x0) {
      gen_imp_OutputDebugStringA(
                        ((char *)REFP(0x113d078))
                        );
    }
    pFVar2 = gen_imp_GetProcAddress(*(undefined4 *)this,((char *)REFP(0x113d064)));
    *((FARPROC *)GEN_TOP(((int)this + 0x14))) = pFVar2;
    pFVar2 = gen_imp_GetProcAddress(*(undefined4 *)this,((char *)REFP(0x113d054)));
    *((FARPROC *)GEN_TOP(((int)this + 0x18))) = pFVar2;
    pFVar2 = gen_imp_GetProcAddress(*(undefined4 *)this,((char *)REFP(0x113d040)));
    *((FARPROC *)GEN_TOP(((int)this + 0x1c))) = pFVar2;
    pFVar2 = gen_imp_GetProcAddress(*(undefined4 *)this,((char *)REFP(0x113d034)));
    *((FARPROC *)GEN_TOP(((int)this + 0x20))) = pFVar2;
    pFVar2 = gen_imp_GetProcAddress(*(undefined4 *)this,((char *)REFP(0x113d018)));
    *((FARPROC *)GEN_TOP(((int)this + 0x24))) = pFVar2;
    pFVar2 = gen_imp_GetProcAddress(*(undefined4 *)this,((char *)REFP(0x113d004)));
    *((FARPROC *)GEN_TOP(((int)this + 0x28))) = pFVar2;
    pFVar2 = gen_imp_GetProcAddress(*(undefined4 *)this,((char *)REFP(0x113cfec)));
    *((FARPROC *)GEN_TOP(((int)this + 0x2c))) = pFVar2;
    pFVar2 = gen_imp_GetProcAddress(*(undefined4 *)this,((char *)REFP(0x113cfe0)));
    *((FARPROC *)GEN_TOP(((int)this + 0x30))) = pFVar2;
    pFVar2 = gen_imp_GetProcAddress(*((undefined4 *)GEN_TOP(((int)this + 4))),((char *)REFP(0x113cfcc)));
    *((FARPROC *)GEN_TOP(((int)this + 0x34))) = pFVar2;
    pFVar2 = gen_imp_GetProcAddress(*((undefined4 *)GEN_TOP(((int)this + 4))),((char *)REFP(0x113cfb0)));
    *((FARPROC *)GEN_TOP(((int)this + 0x38))) = pFVar2;
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x14))))();
    ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x18))))(uVar3 | 0x80000014);
    uVar6 = 1;
    uVar5 = 0;
    pvVar4 = gen_imp_GetCurrentProcess();
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0xc))))(pvVar4,uVar5,uVar6);
  }
  return uVar3;
}

/* ref: Global::UnloadDbgHelp */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00db3c20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb3c20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  HANDLE pvVar1;
  
  if (*(int *)this != 0) {
    pvVar1 = gen_imp_GetCurrentProcess();
    ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x30))))(pvVar1);
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
    gen_imp_FreeLibrary(*((undefined4 *)GEN_TOP(((int)this + 4))));
    gen_imp_FreeLibrary(*(undefined4 *)this);
    *(undefined4 *)this = 0;
  }
  return;
}

/* ref: FUN_00db3c80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db3c80(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb3c80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 0x14;
}

/* ref: FUN_00db3ca0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db3ca0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb3ca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 0x14;
}

/* ref: FUN_00db3d00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db3d00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdb3d00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3;
  return param_3;
}

/* ref: FUN_00db3d20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db3d20(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb3d20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: Global::SwapUint32 */
GEN_LIB GEN_FRAME uint F_00db3d30(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb3d30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: Global::SwapPointer_00db3d50 */
GEN_LIB GEN_FRAME uint F_00db3d50(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb3d50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: Global::RefPtrInit */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db3d70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb3d70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(param_1 GEN_EDX_FWD);
  }
  *(undefined * PTR32 *)this = param_1;
  return (uint)this;
}

/* ref: Global::RefPtrRelease_00db3d90 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00db3d90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb3d90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(undefined * PTR32 *)this != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00db3dc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db3dc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb3dc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 0x14);
  return uVar1;
}

/* ref: Global::ReserveNodes */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db3e10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb3e10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,0x14);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: Global::CopyNodes */
GEN_LIB GEN_FRAME unsigned int F_00db3e60(GEN_P(undefined8 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdb3e60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined8 * puVar1;
  int iVar2;
  int iVar3;
  
  if (0 < param_2) {
    iVar2 = param_3 - (int)param_1;
    puVar1 = param_1;
    iVar3 = param_2;
    do {
      *puVar1 = *((undefined8 *)GEN_TOP((iVar2 + (int)puVar1)));
      puVar1[1] = *((undefined8 *)GEN_TOP((iVar2 + 8 + (int)puVar1)));
      *(undefined4 *)(puVar1 + 2) = *((undefined4 *)GEN_TOP((iVar2 + 0x10 + (int)puVar1)));
      puVar1 = ((undefined8 *)GEN_TOP(((int)puVar1 + 0x14)));
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  return;
}

/* ref: Global::ExpandOneNode */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db3ec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb3ec0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,0x14);
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar1 + 1;
  return *(int *)this + iVar1 * 0x14;
}

/* ref: Global::SpliceNodes */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00db3f10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(int param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xdb3f10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(int param_5 = (int)gen_a5;)
  undefined8 * puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *((int *)GEN_TOP(((int)this + 4)));
  iVar5 = (iVar4 - param_3) + param_5;
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < iVar5) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= iVar5) {
      iVar3 = iVar5;
    }
    F_00d95690(param_1,this,iVar3,0x14);
  }
  F_00da38f0(*(int *)this + (param_2 + param_5) * 0x14,
                     *(int *)this + (param_2 + param_3) * 0x14,((iVar4 - param_2) - param_3) * 0x14)
  ;
  puVar1 = ((undefined8 *)GEN_TOP((*(int *)this + param_2 * 0x14)));
  if (0 < param_5) {
    iVar3 = param_4 - (int)puVar1;
    iVar4 = param_5;
    do {
      *puVar1 = *((undefined8 *)GEN_TOP((iVar3 + (int)puVar1)));
      puVar1[1] = *((undefined8 *)GEN_TOP((iVar3 + 8 + (int)puVar1)));
      *(undefined4 *)(puVar1 + 2) = *((undefined4 *)GEN_TOP((iVar3 + 0x10 + (int)puVar1)));
      puVar1 = ((undefined8 *)GEN_TOP(((int)puVar1 + 0x14)));
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  *((int *)GEN_TOP(((int)this + 4))) = iVar5;
  return 0;
}

/* ref: Global::Reserve32 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db3fd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb3fd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,4);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: Global::DeleteReferencedObject_00db4010 */
GEN_LIB GEN_FRAME uint F_00db4010(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdb4010u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkStackTracer::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db4040(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb4040u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00db32d0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: Global::ClearAndDeallocateNodes */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db4080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb4080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))
                      (param_1 GEN_EDX_ARG,*(undefined4 *)this,((uVar1 & 0x3fffffff) + uVar1 * 4) * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: Global::InsertNodesAt */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00db40c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xdb40c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  F_00db3f10(this GEN_EDX_FWD,param_1,param_2,0,param_3,param_4);
  return;
}

/* ref: Global::SetSize32 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db40e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb40e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,4);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_2;
  return uVar2;
}

/* ref: Global::SetSize32Default */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db4120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb4120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,4);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  return uVar2;
}

/* ref: Global::IsLessThan64 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db4180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb4180u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  if ((*((uint *)GEN_TOP(((int)this + 4))) <= param_1[1]) &&
     ((*((uint *)GEN_TOP(((int)this + 4))) < param_1[1] || (*(uint *)this < *param_1)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00db41b0 */
GEN_LIB GEN_FRAME uint F_00db41b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb41b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: hkLeakDetectAllocator::PrintAllocation */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db41e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdb41e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_FRAME_DECL_TOP(0x184, 12, 4);
  uint uVar1;
  undefined4 uVar2;
  undefined1 * puVar3;
  undefined4 uVar4;
  char * pcVar5;
  undefined4 uVar6;
  
  uVar6 = *((undefined4 *)GEN_TOP((param_3 + 0xc)));
  pcVar5 = ((char *)REFP(0x113d438));
  puVar3 = ((undefined1 *)(gen_frame + 0x0));
  uVar4 = 0x100;
  F_00da0ce0(puVar3,0x100,((char *)REFP(0x113d438)),param_2,uVar6);
  uVar2 = *(undefined4 *)(this + 0x44);
  ((code *)*(gen_code32 *)(this + 0x40))(param_1,uVar2,puVar3,uVar4);
  ((code *)*(gen_code32 *)(this + 0x40))
            (((undefined1 *)(gen_frame + 0x0)),*(undefined4 *)(this + 0x44),param_1,uVar2,puVar3,uVar4,pcVar5,param_2,uVar6)
  ;
  uVar1 = F_00db35c0(this + 8 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_3 + 8))),((undefined1 *)(gen_frame + 0x100)),0x20)
  ;
  F_00db3330(*(undefined * PTR32 *)(this + 4) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x100)),uVar1,*(undefined4 *)(this + 0x40),
             *(undefined4 *)(this + 0x44));
  uVar1 = ((code *)*(gen_code32 *)(this + 0x40))
                    (((char *)REFP(0x113d3f0)),
                     *(undefined4 *)(this + 0x44));
  return uVar1;
}

/* ref: hkLeakDetectAllocator::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db4270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xdb4270u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x38) + 0x20))))
                    (*(int * PTR32 *)(this + 0x38) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                     param_8);
  return uVar1;
}

/* ref: hkLeakDetectAllocator::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db4280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xdb4280u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x38) + 0x24))))
                    (*(int * PTR32 *)(this + 0x38) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                     param_8);
  return uVar1;
}

/* ref: Global::StreamPrintCallback */
GEN_LIB GEN_FRAME uint F_00db4290(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb4290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *param_2;
  uVar2 = F_00da0e60(param_1);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0x10))))(param_2,param_1,uVar2);
  return uVar2;
}

/* ref: hkLeakDetectAllocator::Init */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db42e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xdb42e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  undefined * phVar1;
  undefined4 * puVar2;
  
  *(undefined4 *)(this + 0x38) = param_1;
  *(int * PTR32 *)(this + 0x3c) = param_2;
  *(undefined4 *)(this + 0x40) = param_3;
  *(undefined4 *)(this + 0x44) = param_4;
  *(undefined4 *)(this + 0x4c) = 0;
  phVar1 = REFG(undefined4, 0x15dffb0);
  if ((REFG(undefined4, 0x15dffb0) == ((undefined *)GEN_TOP(0x0))) &&
     (phVar1 = ((undefined *)GEN_TOP(F_00db36d0())),
     REFG(undefined4, 0x15dffb0) != ((undefined *)GEN_TOP(0x0)))) {
    F_00d91840(REFG(undefined4, 0x15dffb0) GEN_EDX_ARG);
  }
  REFG(undefined4, 0x15dffb0) = phVar1;
  phVar1 = REFG(undefined4, 0x15dffb0);
  *(undefined * PTR32 *)(this + 4) = REFG(undefined4, 0x15dffb0);
  F_00d91830(phVar1 GEN_EDX_ARG);
  puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_ARG,0xc)));
  if (puVar2 == ((undefined4 *)GEN_TOP(0x0))) {
    *(int * PTR32 *)(this + 0x14) = param_2;
    *(undefined4 *)(this + 0x48) = 0;
    return 0;
  }
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0xffffffff;
  *(int * PTR32 *)(this + 0x14) = param_2;
  *(undefined4 * PTR32 *)(this + 0x48) = puVar2;
  return (uint)puVar2;
}

/* ref: hkLeakDetectAllocator::PrintCallTreeNode */
GEN_LIB GEN_FRAME unsigned int F_00db4380(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xdb4380u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  int * piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 8)));
  for (iVar3 = param_3; iVar3 != 0; iVar3 = iVar3 - iVar2) {
    iVar2 = iVar3;
    if (0x1f < iVar3) {
      iVar2 = 0x20;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))
              (piVar1 GEN_EDX_ARG,((char *)REFP(0x113d454)),iVar2);
  }
  F_00da00e0(param_1,&REFG(undefined, 0x113d450),*((undefined4 *)GEN_TOP((*param_5 + param_2 * 8))),
                    *((undefined4 *)GEN_TOP((*param_5 + 4 + param_2 * 8))));
  if (param_2 == 0) {
    F_00da00e0(param_1,&REFG(undefined, 0x1080294));
  }
  else {
    F_00db3330(REFG(undefined4, 0x15dffb0) GEN_EDX_ARG,*param_4 + param_2 * 0x14,1,((code *)REFP(0xdb4290)),piVar1);
  }
  iVar3 = *((int *)GEN_TOP((*param_4 + 8 + param_2 * 0x14)));
  if (iVar3 != -1) {
    do {
      F_00db4380(param_1,iVar3,param_3 + 1,param_4,param_5);
      iVar3 = *((int *)GEN_TOP((*param_4 + 0xc + iVar3 * 0x14)));
    } while (iVar3 != -1);
  }
  return;
}

/* ref: hkLeakDetectAllocator::GetMemorySnapshot */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db4450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb4450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x6c, 4, 4);
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 uVar1;
  undefined8 uVar2;
  int * piVar3;
  int iVar4;
  undefined4 uVar5;
  LPVOID pvVar6;
  undefined4 * puVar7;
  uint uVar8;
  int iVar9;
  int * piVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x20);
  (*(undefined * PTR32 *)(gen_frame + 0x64)) = this;
  (*(LPCRITICAL_SECTION *)(gen_frame + 0x58)) = lpCriticalSection;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  F_00dbff20(param_1 GEN_EDX_ARG);
  piVar3 = *(int * PTR32 *)(this + 0x48);
  uVar8 = piVar3[1];
  uVar13 = uVar8 & 0x7fffffff;
  if (uVar13 == 0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  param_1[2] = uVar13;
  pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  iVar11 = (uVar13 + uVar8 * 8) * 8;
  uVar13 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar6 + 0x30))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar6 + 0x30))) GEN_EDX_ARG,iVar11);
  param_1[1] = uVar13;
  F_00da3720(uVar13,0,iVar11);
  pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar7 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar6 + 0x30))) + 4))))
                     (*((int * PTR32 *)GEN_TOP(((int)pvVar6 + 0x30))) GEN_EDX_ARG,uVar8 * 4)));
  *param_1 = puVar7;
  (*(int *)(gen_frame + 0x60)) = param_1[1];
  pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  (*(LPVOID *)(gen_frame + 0x5c)) = pvVar6;
  iVar12 = piVar3[2];
  iVar11 = 0;
  if (-1 < iVar12) {
    piVar10 = ((int *)GEN_TOP(*piVar3));
    do {
      if (*piVar10 != -1) break;
      iVar11 = iVar11 + 1;
      piVar10 = piVar10 + 8;
    } while (iVar11 <= iVar12);
  }
  if (iVar11 <= iVar12) {
    (*(undefined * PTR32 *)(gen_frame + 0x64)) = (*(undefined * PTR32 *)(gen_frame + 0x64)) + 8;
    iVar12 = (*(int *)(gen_frame + 0x60)) + 4;
    do {
      iVar4 = *piVar3;
      iVar9 = iVar11 * 0x20;
      (*(undefined8 *)(gen_frame + 0x40)) = *((undefined8 *)GEN_TOP((iVar4 + 8 + iVar9)));
      uVar1 = *((undefined8 *)GEN_TOP((iVar4 + iVar9 + 0x10)));
      (*(undefined8 *)(gen_frame + 0x48)) = uVar1;
      uVar1 = (*(undefined8 *)(gen_frame + 0x48));
      uVar2 = *((undefined8 *)GEN_TOP((iVar4 + iVar9 + 0x18)));
      (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x48)) + 0)) = (undefined4)uVar1;
      uVar5 = (undefined4)(*(undefined8 *)(gen_frame + 0x48));
      *puVar7 = *((undefined4 *)GEN_TOP((iVar4 + iVar9)));
      (*(undefined8 *)(gen_frame + 0x50)) = uVar2;
      (*(undefined8 *)(gen_frame + 0x48)) = uVar1;
      uVar8 = F_00db35c0((*(undefined * PTR32 *)(gen_frame + 0x64)) GEN_EDX_ARG,uVar5,((undefined1 *)(gen_frame + 0x0)),0x10);
      *((uint *)GEN_TOP((iVar12 + 0x40))) = uVar8;
      F_00da1010(iVar12,((undefined1 *)(gen_frame + 0x0)),uVar8 * 4);
      *((undefined4 *)GEN_TOP((iVar12 - 4))) = (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x48)) + 4));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(LPVOID *)(gen_frame + 0x5c)) + 0x2c))) + 0x24))))
                (*((int * PTR32 *)GEN_TOP(((int)(*(LPVOID *)(gen_frame + 0x5c)) + 0x2c))) GEN_EDX_ARG,*puVar7,(*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x48)) + 4)));
      iVar11 = iVar11 + 1;
      iVar4 = piVar3[2];
      iVar12 = iVar12 + 0x48;
      puVar7 = puVar7 + 1;
      if (iVar11 <= iVar4) {
        piVar10 = ((int *)GEN_TOP((iVar11 * 0x20 + *piVar3)));
        do {
          if (*piVar10 != -1) break;
          iVar11 = iVar11 + 1;
          piVar10 = piVar10 + 8;
        } while (iVar11 <= iVar4);
      }
    } while (iVar11 <= iVar4);
  }
  gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x58)));
  return 0;
}

/* ref: hkLeakDetectAllocator::AllocateTracked */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db45f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb45f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x220, 0, 4);
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  (*(LPCRITICAL_SECTION *)(gen_frame + 0x218)) = (LPCRITICAL_SECTION)(this + 0x20);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x20));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x38) + 4))))(*(int * PTR32 *)(this + 0x38) GEN_EDX_ARG,param_2);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x38) + 0x24))))(*(int * PTR32 *)(this + 0x38) GEN_EDX_ARG,uVar1,param_2);
  *(uint *)(this + 0x4c) = *(int *)(this + 0x4c) + uVar2;
  uVar3 = F_00dc2630();
  (*(ulonglong *)(gen_frame + 0x200)) = uVar3;
  (*(undefined4 *)(gen_frame + 0x20c)) = param_2;
  (*(bool *)(gen_frame + 0x210)) = param_1 != 0;
  if (*(undefined * PTR32 *)(this + 4) == ((undefined *)GEN_TOP(0x0))) {
    (*(uint *)(gen_frame + 0x208)) = 0;
  }
  else {
    uVar2 = F_00db3490(*(undefined * PTR32 *)(this + 4) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x80);
    uVar2 = F_00db3870(this + 8 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),uVar2);
    (*(uint *)(gen_frame + 0x208)) = uVar2;
  }
  F_00db52c0(*(undefined * PTR32 *)(this + 0x48) GEN_EDX_ARG,*(undefined4 *)(this + 0x3c),uVar1,(int)(*(ulonglong *)(gen_frame + 0x200)),
             (int)((*(ulonglong *)(gen_frame + 0x200)) >> 0x20),(*(uint *)(gen_frame + 0x208)),(*(undefined4 *)(gen_frame + 0x20c)),(int)CONCAT71((*(undefined7 *)(gen_frame + 0x211)),(*(bool *)(gen_frame + 0x210))),
             (int)((uint7)(*(undefined7 *)(gen_frame + 0x211)) >> 0x18));
  gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x218)));
  return uVar1;
}

/* ref: hkLeakDetectAllocator::DeallocateTracked */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00db46c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdb46c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  undefined8 uVar2;
  code * pcVar3;
  undefined4 uVar4;
  uint uVar5;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x20);
  (*(LPCRITICAL_SECTION *)(gen_frame + 0x18)) = lpCriticalSection;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (param_2 == 0) {
    if (param_3 != 0) {
      ((code *)*(gen_code32 *)(this + 0x40))
                (((char *)REFP(0x113d4c0)),*(undefined4 *)(this + 0x44));
      pcVar3 = ((code *)GEN_TOP(swi(3)));
      (*pcVar3)();
      return 0;
    }
    return (uint)(gen_imp_LeaveCriticalSection(lpCriticalSection));
  }
  if (param_3 == 0) {
    ((code *)*(gen_code32 *)(this + 0x40))
              (((char *)REFP(0x113d4f4)),*(undefined4 *)(this + 0x44));
    pcVar3 = ((code *)GEN_TOP(swi(3)));
    (*pcVar3)();
    return 0;
  }
  uVar5 = F_00db5370(*(undefined * PTR32 *)(this + 0x48) GEN_EDX_ARG,param_2);
  if (*((int *)GEN_TOP((*(int *)(this + 0x48) + 8))) < (int)uVar5) {
    ((code *)*(gen_code32 *)(this + 0x40))(((char *)REFP(0x113d498)),*(undefined4 *)(this + 0x44))
    ;
    pcVar3 = ((code *)GEN_TOP(swi(3)));
    (*pcVar3)();
    return 0;
  }
  iVar1 = uVar5 * 0x20 + 8 + **(int * PTR32 *)(this + 0x48);
  (*(undefined8 *)(gen_frame + 0x0)) = *((undefined8 *)GEN_TOP((uVar5 * 0x20 + 8 + **(int * PTR32 *)(this + 0x48))));
  uVar2 = *((undefined8 *)GEN_TOP((iVar1 + 8)));
  (*(undefined8 *)(gen_frame + 0x8)) = uVar2;
  uVar2 = (*(undefined8 *)(gen_frame + 0x8));
  (*(undefined8 *)(gen_frame + 0x10)) = *((undefined8 *)GEN_TOP((iVar1 + 0x10)));
  (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x8)) + 4)) = (int)((ulonglong)uVar2 >> 0x20);
  (*(undefined8 *)(gen_frame + 0x8)) = uVar2;
  if ((*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x8)) + 4)) != param_3) {
    F_00db41e0(this GEN_EDX_ARG,((char *)REFP(0x113d478)),param_2,&(*(undefined8 *)(gen_frame + 0x0)));
    pcVar3 = ((code *)GEN_TOP(swi(3)));
    (*pcVar3)();
    return 0;
  }
  if (*(int *)(this + 4) != 0) {
    (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x8)) + 0)) = (undefined4)uVar2;
    uVar4 = (undefined4)(*(undefined8 *)(gen_frame + 0x8));
    F_00db3760(this + 8 GEN_EDX_ARG,uVar4);
  }
  F_00db54c0(*(undefined * PTR32 *)(this + 0x48) GEN_EDX_ARG,uVar5);
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x38) + 0x24))))(*(int * PTR32 *)(this + 0x38) GEN_EDX_ARG,param_2,param_3);
  *(uint *)(this + 0x4c) = *(int *)(this + 0x4c) - uVar5;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x38) + 8))))(*(int * PTR32 *)(this + 0x38) GEN_EDX_ARG,param_2,param_3);
  return (uint)(gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x18))));
}

/* ref: hkLeakDetectAllocator::vf1 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db47f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb47f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00db45f0(this GEN_EDX_FWD,0,param_1);
  return uVar1;
}

/* ref: hkLeakDetectAllocator::vf2 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00db4810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb4810u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00db46c0(this GEN_EDX_FWD,0,param_1,param_2);
  return;
}

/* ref: hkLeakDetectAllocator::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db4830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb4830u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00db45f0(this GEN_EDX_FWD,1,*param_1);
  return uVar1;
}

/* ref: hkLeakDetectAllocator::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00db4850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb4850u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00db46c0(this GEN_EDX_FWD,1,param_1,param_2);
  return;
}

/* ref: hkLeakDetectAllocator::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db4870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdb4870u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  uint uVar1;
  int iVar2;
  
  uVar1 = F_00db45f0(this GEN_EDX_FWD,1,*param_3);
  iVar2 = *param_3;
  if (param_2 <= iVar2) {
    iVar2 = param_2;
  }
  F_00da3710(uVar1,param_1,iVar2);
  F_00db46c0(this GEN_EDX_ARG,1,param_1,param_2);
  return uVar1;
}

/* ref: hkLeakDetectAllocator::Quit */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db48c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb48c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x11c, 4, 4);
  undefined8 * puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  int * piVar6;
  int iVar7;
  int * piVar8;
  int iVar9;
  undefined1 * puVar10;
  undefined4 uVar11;
  undefined1 * puVar12;
  undefined4 uVar13;
  char * pcVar14;
  
  (*(undefined * PTR32 *)(gen_frame + 0x100)) = this;
  if ((*((uint *)GEN_TOP((*(int *)(this + 0x48) + 4))) & 0x7fffffff) != 0) {
    ((code *)*(gen_code32 *)(this + 0x40))
              (((char *)REFP(0x113d610))
               ,*(undefined4 *)(this + 0x44));
    iVar7 = *(int *)(this + 0x48);
    uVar11 = *(undefined4 *)(this + 0x3c);
    (*(int *)(gen_frame + 0x108)) = 0;
    (*(int *)(gen_frame + 0x10c)) = 0;
    (*(uint *)(gen_frame + 0x110)) = 0x80000000;
    uVar4 = *((uint *)GEN_TOP((iVar7 + 4))) & 0x7fffffff;
    if (uVar4 != 0) {
      F_00d95690(uVar11,&(*(int *)(gen_frame + 0x108)),uVar4,0x18);
    }
    piVar6 = *(int * PTR32 *)(this + 0x48);
    iVar7 = 0;
    if ((uint)piVar6[2] < 0x80000000) {
      piVar8 = ((int *)GEN_TOP(*piVar6));
      do {
        if (*piVar8 != -1) break;
        iVar7 = iVar7 + 1;
        piVar8 = piVar8 + 8;
        (*(int * PTR32 *)(gen_frame + 0x114)) = piVar8;
      } while (iVar7 <= piVar6[2]);
      if (iVar7 <= piVar6[2]) {
        do {
          iVar9 = *piVar6;
          iVar5 = iVar7 * 0x20;
          uVar2 = *((undefined8 *)GEN_TOP((iVar5 + 0x10 + iVar9)));
          uVar3 = *((undefined8 *)GEN_TOP((iVar5 + 0x18 + iVar9)));
          puVar1 = ((undefined8 *)GEN_TOP(((*(int *)(gen_frame + 0x108)) + (*(int *)(gen_frame + 0x10c)) * 0x18)));
          if (puVar1 != ((undefined8 *)GEN_TOP(0x0))) {
            *puVar1 = *((undefined8 *)GEN_TOP((iVar5 + 8 + iVar9)));
            puVar1[1] = uVar2;
            puVar1[2] = uVar3;
          }
          piVar6 = *(int * PTR32 *)(this + 0x48);
          (*(int *)(gen_frame + 0x10c)) = (*(int *)(gen_frame + 0x10c)) + 1;
          iVar9 = piVar6[2];
          iVar7 = iVar7 + 1;
          if (iVar7 <= iVar9) {
            piVar8 = ((int *)GEN_TOP((iVar7 * 0x20 + *piVar6)));
            do {
              if (*piVar8 != -1) break;
              iVar7 = iVar7 + 1;
              piVar8 = piVar8 + 8;
            } while (iVar7 <= iVar9);
          }
        } while (iVar7 <= iVar9);
      }
    }
    piVar6 = (*(int * PTR32 *)(gen_frame + 0x114));
    (*(undefined1 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x114)) + 0)) = 0;
    (*(int * PTR32 *)(gen_frame + 0x114)) = ((int *)GEN_TOP(((uint)piVar6 & 0xffffff00)));
    if (1 < (*(int *)(gen_frame + 0x10c))) {
      F_00db5940((*(int *)(gen_frame + 0x108)),0,(*(int *)(gen_frame + 0x10c)) - 1,(*(int * PTR32 *)(gen_frame + 0x114)));
    }
    iVar7 = (*(int *)(gen_frame + 0x108));
    if (0 < (*(int *)(gen_frame + 0x10c))) {
      (*(int *)(gen_frame + 0x104)) = 0;
      (*(int * PTR32 *)(gen_frame + 0x114)) = ((int *)GEN_TOP(0x1));
      iVar9 = (*(int *)(gen_frame + 0x10c));
      do {
        iVar5 = (*(int *)(gen_frame + 0x104));
        piVar6 = (*(int * PTR32 *)(gen_frame + 0x114));
        if (-1 < *((int *)GEN_TOP(((*(int *)(gen_frame + 0x104)) + 8 + iVar7)))) {
          if ((int)(*(int * PTR32 *)(gen_frame + 0x114)) < iVar9) {
            do {
              if (*((int *)GEN_TOP((iVar5 + 0x20 + iVar7))) == *((int *)GEN_TOP(((*(int *)(gen_frame + 0x104)) + 8 + iVar7)))) {
                *((undefined4 *)GEN_TOP((iVar5 + 0x20 + iVar7))) = 0xffffffff;
                iVar9 = (*(int *)(gen_frame + 0x10c));
                iVar7 = (*(int *)(gen_frame + 0x108));
              }
              piVar6 = ((int *)GEN_TOP(((int)piVar6 + 1)));
              this = (*(undefined * PTR32 *)(gen_frame + 0x100));
              iVar5 = iVar5 + 0x18;
            } while ((int)piVar6 < iVar9);
          }
          F_00db41e0(this GEN_EDX_ARG,((char *)REFP(0x113d5fc)),0,(*(int *)(gen_frame + 0x104)) + iVar7);
          iVar5 = (*(int *)(gen_frame + 0x104));
          piVar6 = (*(int * PTR32 *)(gen_frame + 0x114));
          iVar9 = (*(int *)(gen_frame + 0x10c));
          iVar7 = (*(int *)(gen_frame + 0x108));
        }
        (*(int * PTR32 *)(gen_frame + 0x114)) = ((int *)GEN_TOP(((int)piVar6 + 1)));
        (*(int *)(gen_frame + 0x104)) = iVar5 + 0x18;
      } while ((int)piVar6 < iVar9);
    }
    (*(int *)(gen_frame + 0x10c)) = 0;
    if (-1 < (int)(*(uint *)(gen_frame + 0x110))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x3c) + 0x10))))
                (*(int * PTR32 *)(this + 0x3c) GEN_EDX_ARG,iVar7,((*(uint *)(gen_frame + 0x110)) & 0x3fffffff) * 0x18);
    }
    iVar7 = *(int *)(this + 0x48);
    (*(int *)(gen_frame + 0x108)) = 0;
    (*(uint *)(gen_frame + 0x110)) = 0x80000000;
    uVar4 = *((uint *)GEN_TOP((iVar7 + 4))) & 0x7fffffff;
    pcVar14 = ((char *)REFP(0x113d5e8));
    puVar12 = ((undefined1 *)(gen_frame + 0x0));
    uVar13 = 0x100;
    F_00da0ce0(puVar12,0x100,((char *)REFP(0x113d5e8)),uVar4);
    uVar11 = *(undefined4 *)(this + 0x44);
    puVar10 = ((undefined1 *)(gen_frame + 0x0));
    ((code *)*(gen_code32 *)(this + 0x40))(puVar10,uVar11,puVar12);
    ((code *)*(gen_code32 *)(this + 0x40))
              (((char *)REFP(0x113d528))
               ,*(undefined4 *)(this + 0x44),puVar10,uVar11,puVar12,uVar13,pcVar14,uVar4);
  }
  F_00db3820(this + 8 GEN_EDX_ARG);
  F_00db5650(*(undefined * PTR32 *)(this + 0x48) GEN_EDX_ARG,*(undefined4 *)(this + 0x3c));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x3c) + 8))))
            (*(int * PTR32 *)(this + 0x3c) GEN_EDX_ARG,*(undefined4 *)(this + 0x48),0xc);
  uVar4 = F_00d91a80(*(undefined * PTR32 *)(this + 4) GEN_EDX_ARG);
  return uVar4;
}

/* ref: hkLeakDetectAllocator::PrintCallTreeSizes */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00db4b20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb4b20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x34, 12, 4);
  uint * puVar1;
  undefined8 uVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int * piVar11;
  undefined4 * puVar12;
  undefined4 * puVar13;
  
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 40)) = this;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 36)) = (LPCRITICAL_SECTION)(this + 0x20);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x20));
  uVar3 = *(uint *)(this + 0xc);
  iVar8 = 0;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 44)) = this + 8;
  ((byte *)(gen_frame + 0x0))[0x18] = 0;
  ((byte *)(gen_frame + 0x0))[0x19] = 0;
  ((byte *)(gen_frame + 0x0))[0x1a] = 0;
  ((byte *)(gen_frame + 0x0))[0x1b] = 0;
  ((byte *)(gen_frame + 0x0))[0x1c] = 0;
  ((byte *)(gen_frame + 0x0))[0x1d] = 0;
  ((byte *)(gen_frame + 0x0))[0x1e] = 0;
  ((byte *)(gen_frame + 0x0))[0x1f] = 0;
  ((byte *)(gen_frame + 0x0))[0x20] = 0;
  ((byte *)(gen_frame + 0x0))[0x21] = 0;
  ((byte *)(gen_frame + 0x0))[0x22] = 0;
  ((byte *)(gen_frame + 0x0))[0x23] = 0x80;
  if (0 < (int)uVar3) {
    F_00d95690(&REFG(undefined * PTR32, 0x13516a8),((byte *)(gen_frame + 0x0)) + 0x18,((int)uVar3 < 0) - 1 & uVar3,8);
    iVar8 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 28));
  }
  puVar12 = ((undefined4 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 24)) + iVar8 * 8)));
  if (0 < (int)(uVar3 - iVar8)) {
    *puVar12 = 0;
    puVar12[1] = 0;
    puVar13 = puVar12 + 2;
    for (uVar9 = (uVar3 - iVar8) * 8 - 5 >> 2; this = ((undefined *)GEN_TOP((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 40)))),
        uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar13 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar13 = puVar13 + 1;
    }
  }
  piVar4 = *(int * PTR32 *)(this + 0x48);
  ((byte *)(gen_frame + 0x0))[0x1c] = (char)uVar3;
  ((byte *)(gen_frame + 0x0))[0x1d] = (char)(uVar3 >> 8);
  ((byte *)(gen_frame + 0x0))[0x1e] = (char)(uVar3 >> 0x10);
  ((byte *)(gen_frame + 0x0))[0x1f] = (char)(uVar3 >> 0x18);
  iVar10 = piVar4[2];
  iVar8 = 0;
  if (-1 < iVar10) {
    piVar11 = ((int *)GEN_TOP(*piVar4));
    do {
      if (*piVar11 != -1) break;
      iVar8 = iVar8 + 1;
      piVar11 = piVar11 + 8;
    } while (iVar8 <= iVar10);
  }
  if (iVar8 <= iVar10) {
    do {
      iVar10 = iVar8 * 0x20 + 8 + *piVar4;
      (*(undefined8 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) = *((undefined8 *)GEN_TOP((iVar8 * 0x20 + 8 + *piVar4)));
      uVar2 = *((undefined8 *)GEN_TOP((iVar10 + 8)));
      ((byte *)(gen_frame + 0x0))[8] = (byte)uVar2;
      ((byte *)(gen_frame + 0x0))[9] = SUB81(uVar2,1);
      ((byte *)(gen_frame + 0x0))[10] = SUB81(uVar2,2);
      ((byte *)(gen_frame + 0x0))[0xb] = SUB81(uVar2,3);
      ((byte *)(gen_frame + 0x0))[0xc] = SUB81(uVar2,4);
      ((byte *)(gen_frame + 0x0))[0xd] = SUB81(uVar2,5);
      ((byte *)(gen_frame + 0x0))[0xe] = SUB81(uVar2,6);
      ((byte *)(gen_frame + 0x0))[0xf] = SUB81(uVar2,7);
      uVar6 = (*(undefined8 *)((char *)((byte *)(gen_frame + 0x0)) + 8));
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) = (undefined4)uVar2;
      (*(undefined8 *)((char *)((byte *)(gen_frame + 0x0)) + 16)) = *((undefined8 *)GEN_TOP((iVar10 + 0x10)));
      if (-1 < (int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8))) {
        (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)) = SUB84(uVar2,4);
        iVar10 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8));
        do {
          puVar1 = ((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 24)) + iVar10 * 8)));
          uVar3 = *puVar1;
          *puVar1 = *puVar1 + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12));
          piVar11 = ((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 24)) + iVar10 * 8 + 4)));
          *piVar11 = *piVar11 + ((int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)) >> 0x1f) + (uint)CARRY4(uVar3,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)));
          iVar10 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 44)))) + 4 + iVar10 * 0x14)));
        } while (-1 < iVar10);
      }
      iVar10 = piVar4[2];
      iVar8 = iVar8 + 1;
      if (iVar8 <= iVar10) {
        piVar11 = ((int *)GEN_TOP((iVar8 * 0x20 + *piVar4)));
        do {
          if (*piVar11 != -1) break;
          iVar8 = iVar8 + 1;
          piVar11 = piVar11 + 8;
        } while (iVar8 <= iVar10);
      }
      (*(undefined8 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) = uVar6;
    } while (iVar8 <= iVar10);
  }
  iVar8 = *((int *)GEN_TOP((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 44))));
  iVar7 = *((int *)GEN_TOP((iVar8 + 8)));
  iVar10 = 0;
  while ((iVar5 = iVar7, 0 < iVar5 && (*((int *)GEN_TOP((iVar8 + 0xc + iVar5 * 0x14))) < 0))) {
    iVar10 = iVar5;
    iVar7 = *((int *)GEN_TOP((iVar8 + iVar5 * 0x14 + 8)));
  }
  F_00db4380(param_1,iVar10,0,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 44)),((byte *)(gen_frame + 0x0)) + 0x18);
  ((byte *)(gen_frame + 0x0))[0x1c] = 0;
  ((byte *)(gen_frame + 0x0))[0x1d] = 0;
  ((byte *)(gen_frame + 0x0))[0x1e] = 0;
  ((byte *)(gen_frame + 0x0))[0x1f] = 0;
  if (-1 < (int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 32))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a8) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516a8),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 24)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 32)) * 8);
  }
  ((byte *)(gen_frame + 0x0))[0x18] = 0;
  ((byte *)(gen_frame + 0x0))[0x19] = 0;
  ((byte *)(gen_frame + 0x0))[0x1a] = 0;
  ((byte *)(gen_frame + 0x0))[0x1b] = 0;
  ((byte *)(gen_frame + 0x0))[0x20] = 0;
  ((byte *)(gen_frame + 0x0))[0x21] = 0;
  ((byte *)(gen_frame + 0x0))[0x22] = 0;
  ((byte *)(gen_frame + 0x0))[0x23] = 0x80;
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 36))));
}

/* ref: FUN_00db4cd0 */
GEN_LIB GEN_FRAME uint F_00db4cd0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb4cd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00db4ce0 */
GEN_LIB GEN_FRAME uint F_00db4ce0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb4ce0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00db4d70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db4d70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb4d70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((bool *)GEN_TOP(param_2)) = (*((uint *)GEN_TOP((in_ecx + 4))) & 0x80000000) == 0;
  return param_2;
}

/* ref: Global::IsPowerOfTwo_00db4d90 */
GEN_LIB GEN_FRAME uint F_00db4d90(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdb4d90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return (uint)((param_1 - 1 & param_1) == 0);
}

/* ref: FUN_00db4db0 */
GEN_LIB GEN_FRAME uint F_00db4db0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb4db0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00db4dc0 */
GEN_LIB GEN_FRAME uint F_00db4dc0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb4dc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: hkPointerMap::GetKey */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db4e00(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb4e00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((param_2 * 0x20 + *in_ecx)));
}

/* ref: hkPointerMap::GetValue */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db4e20(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined8 * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdb4e20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = param_3 * 0x20 + 8 + *in_ecx;
  *param_2 = *((undefined8 *)GEN_TOP((param_3 * 0x20 + 8 + *in_ecx)));
  param_2[1] = *((undefined8 *)GEN_TOP((iVar1 + 8)));
  param_2[2] = *((undefined8 *)GEN_TOP((iVar1 + 0x10)));
  return (uint)param_2;
}

/* ref: hkPointerMap::SetValue */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db4e60(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7))
{
  GEN_ENTER(0xdb4e60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  undefined8 * puVar1;
  
  puVar1 = ((undefined8 *)GEN_TOP((param_2 * 0x20 + 8 + *in_ecx)));
  *puVar1 = CONCAT44(param_4,param_3);
  puVar1[1] = CONCAT44(param_6,param_5);
  puVar1[2] = CONCAT44(param_8,param_7);
  return (uint)puVar1;
}

/* ref: hkPointerMap::IsValidIterator */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db4e90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdb4e90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  *((bool *)GEN_TOP(param_2)) = param_3 <= *((int *)GEN_TOP((in_ecx + 8)));
  return param_2;
}

/* ref: hkPointerMap::InitExternal */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db4ec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdb4ec0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  *(undefined4 *)this = param_1;
  *((uint *)GEN_TOP(((int)this + 4))) = param_2 | 0x80000000;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3 - 1U;
  return param_3 - 1U;
}

/* ref: hkPointerMap::GetSizeInBytesFor */
GEN_LIB GEN_FRAME uint F_00db4ee0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdb4ee0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int iVar1;
  
  iVar1 = 8;
  if (8 < param_1 * 2) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_1 * 2);
  }
  return iVar1 << 5;
}

/* ref: FUN_00db4f30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db4f30(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb4f30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 0x18;
}

/* ref: FUN_00db4fa0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db4fa0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb4fa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00db4fb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db4fb0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb4fb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: hkPointerMap::Swap */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db4fc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb4fc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)this;
  *(undefined4 *)this = *param_1;
  uVar2 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  uVar3 = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  param_1[2] = uVar3;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return (uint)param_1;
}

/* ref: Global::HashPointer */
GEN_LIB GEN_FRAME uint F_00db4ff0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb4ff0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return (param_1 >> 4) * -0x61c8864f & param_2;
}

/* ref: Global::SetEmptyKey */
GEN_LIB GEN_FRAME uint F_00db5010(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdb5010u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  *param_1 = 0xffffffff;
  return (uint)param_1;
}

/* ref: Global::KeysEqual */
GEN_LIB GEN_FRAME byte F_00db5020(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb5020u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_1 == param_2;
}

/* ref: FUN_00db5030 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db5030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb5030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD,param_1 * 0x48);
  return uVar1;
}

/* ref: FUN_00db5050 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db5050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb5050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD,param_1 * 4);
  return uVar1;
}

/* ref: FUN_00db5080 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db5080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb5080u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 0x18);
  return uVar1;
}

/* ref: FUN_00db50b0 */
GEN_LIB GEN_FRAME unsigned int F_00db50b0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdb50b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *((undefined4 *)GEN_TOP((param_1 + iVar1 * 8))) = *param_3;
      *((undefined4 *)GEN_TOP((param_1 + 4 + iVar1 * 8))) = param_3[1];
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 0;
}

/* ref: FUN_00db50f0 */
GEN_LIB GEN_FRAME uint F_00db50f0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb50f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + param_1;
}

/* ref: FUN_00db5120 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db5120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb5120u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: Global::UInt64Less */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00db5140(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdb5140u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  if ((param_1[1] <= param_2[1]) && ((param_1[1] < param_2[1] || (*param_1 < *param_2)))) {
    return 1;
  }
  return 0;
}

/* ref: Global::RouterHeapAllocate_00db51a0 */
GEN_LIB GEN_FRAME uint F_00db51a0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdb51a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  return uVar2;
}

/* ref: Global::RouterHeapFree12 */
GEN_LIB GEN_FRAME unsigned int F_00db51c0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdb51c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: Global::RouterHeapAllocate2 */
GEN_LIB GEN_FRAME uint F_00db5210(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdb5210u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  return uVar2;
}

/* ref: Global::RouterHeapFree12b */
GEN_LIB GEN_FRAME unsigned int F_00db5230(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdb5230u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: Global::HashMapGetNextIndex */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00db5290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb5290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int * piVar2;
  
  iVar1 = param_1 + 1;
  if (iVar1 <= *((int *)GEN_TOP(((int)this + 8)))) {
    piVar2 = ((int *)GEN_TOP((iVar1 * 0x20 + *(int *)this)));
    do {
      if (*piVar2 != -1) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 8;
    } while (iVar1 <= *((int *)GEN_TOP(((int)this + 8))));
  }
  return 0;
}

/* ref: Global::HashMapInsert */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db52c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xdb52c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  undefined8 * puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (*((int *)GEN_TOP(((int)this + 8))) < *((int *)GEN_TOP(((int)this + 4))) * 2) {
    F_00db56e0(this GEN_EDX_FWD,param_1,*((int *)GEN_TOP(((int)this + 8))) * 2 + 2);
  }
  iVar2 = *(int *)this;
  uVar4 = (param_2 >> 4) * -0x61c8864f & *((uint *)GEN_TOP(((int)this + 8)));
  iVar5 = uVar4 * 0x20;
  uVar3 = 1;
  if (*((int *)GEN_TOP((iVar2 + iVar5))) != -1) {
    do {
      if (*((uint *)GEN_TOP((iVar2 + iVar5))) == param_2) {
        uVar3 = 0;
        goto LAB_00db532d;
      }
      uVar4 = uVar4 + 1 & *((uint *)GEN_TOP(((int)this + 8)));
      iVar5 = uVar4 * 0x20;
    } while (*((int *)GEN_TOP((iVar5 + iVar2))) != -1);
    uVar3 = 1;
  }
LAB_00db532d: ;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + uVar3;
  *((uint *)GEN_TOP((iVar2 + uVar4 * 0x20))) = param_2;
  puVar1 = ((undefined8 *)GEN_TOP((uVar4 * 0x20 + 8 + *(int *)this)));
  *puVar1 = CONCAT44(param_4,param_3);
  puVar1[1] = CONCAT44(param_6,param_5);
  puVar1[2] = CONCAT44(param_8,param_7);
  return uVar3;
}

/* ref: Global::HashMapFindIndex */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db5370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb5370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  if (0 < (int)uVar1) {
    uVar3 = (param_1 >> 4) * -0x61c8864f & uVar1;
    uVar2 = *((uint *)GEN_TOP((uVar3 * 0x20 + *(int *)this)));
    while (uVar2 != 0xffffffff) {
      if (uVar2 == param_1) {
        return uVar3;
      }
      uVar3 = uVar3 + 1 & uVar1;
      uVar2 = *((uint *)GEN_TOP((uVar3 * 0x20 + *(int *)this)));
    }
  }
  return uVar1 + 1;
}

/* ref: Global::HashMapGetWithDefault */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db53c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined8 * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xdb53c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  if (0 < (int)uVar2) {
    iVar3 = *(int *)this;
    uVar5 = (param_2 >> 4) * -0x61c8864f & uVar2;
    uVar4 = *((uint *)GEN_TOP((uVar5 * 0x20 + iVar3)));
    while (uVar4 != 0xffffffff) {
      if (uVar4 == param_2) {
        iVar1 = uVar5 * 0x20 + 8 + iVar3;
        *param_1 = *((undefined8 *)GEN_TOP((uVar5 * 0x20 + 8 + iVar3)));
        param_1[1] = *((undefined8 *)GEN_TOP((iVar1 + 8)));
        param_1[2] = *((undefined8 *)GEN_TOP((iVar1 + 0x10)));
        return (uint)param_1;
      }
      uVar5 = uVar5 + 1 & uVar2;
      uVar4 = *((uint *)GEN_TOP((uVar5 * 0x20 + iVar3)));
    }
  }
  *param_1 = CONCAT44(param_4,param_3);
  param_1[1] = CONCAT44(param_6,param_5);
  param_1[2] = CONCAT44(param_8,param_7);
  return (uint)param_1;
}

/* ref: Global::HashMapGet */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db5460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined8 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb5460u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a2;)
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = F_00db5370(this GEN_EDX_FWD,param_1);
  if ((int)uVar4 <= *((int *)GEN_TOP(((int)this + 8)))) {
    iVar3 = *(int *)this;
    iVar5 = uVar4 * 0x20;
    uVar1 = *((undefined8 *)GEN_TOP((iVar5 + 0x10 + iVar3)));
    uVar2 = *((undefined8 *)GEN_TOP((iVar5 + 0x18 + iVar3)));
    *param_2 = *((undefined8 *)GEN_TOP((iVar5 + 8 + iVar3)));
    param_2[1] = uVar1;
    param_2[2] = uVar2;
    return 0;
  }
  return 1;
}

/* ref: Global::HashMapRemoveAt */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00db54c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb54c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined8 * puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
  *((undefined4 *)GEN_TOP((param_1 * 0x20 + *(int *)this))) = 0xffffffff;
  uVar7 = *((uint *)GEN_TOP(((int)this + 8)));
  uVar4 = uVar7 + param_1 & uVar7;
  iVar2 = *((int *)GEN_TOP((uVar4 * 0x20 + *(int *)this)));
  while (iVar2 != -1) {
    uVar4 = uVar4 + uVar7 & uVar7;
    iVar2 = *((int *)GEN_TOP((uVar4 * 0x20 + *(int *)this)));
  }
  uVar5 = uVar4 + 1 & uVar7;
  uVar4 = param_1 + 1 & uVar7;
  iVar6 = uVar4 * 0x20;
  iVar2 = *((int *)GEN_TOP((*(int *)this + iVar6)));
  uVar8 = param_1;
  while (iVar2 != -1) {
    uVar7 = (*((uint *)GEN_TOP((*(int *)this + iVar6))) >> 4) * -0x61c8864f & uVar7;
    if ((((uVar4 < uVar5) || (uVar7 <= uVar8)) &&
        ((uVar8 <= uVar4 || ((uVar7 <= uVar8 && (uVar4 < uVar7)))))) &&
       ((uVar7 <= uVar8 || (uVar5 <= uVar7)))) {
      *((uint *)GEN_TOP((uVar8 * 0x20 + *(int *)this))) = *((uint *)GEN_TOP((*(int *)this + iVar6)));
      iVar3 = *(int *)this;
      iVar2 = iVar3 + 8 + iVar6;
      puVar1 = ((undefined8 *)GEN_TOP((uVar8 * 0x20 + 8 + iVar3)));
      *puVar1 = *((undefined8 *)GEN_TOP((iVar3 + 8 + iVar6)));
      puVar1[1] = *((undefined8 *)GEN_TOP((iVar2 + 8)));
      puVar1[2] = *((undefined8 *)GEN_TOP((iVar2 + 0x10)));
      *((undefined4 *)GEN_TOP((iVar6 + *(int *)this))) = 0xffffffff;
      uVar8 = uVar4;
    }
    uVar7 = *((uint *)GEN_TOP(((int)this + 8)));
    uVar4 = uVar4 + 1 & uVar7;
    iVar6 = uVar4 * 0x20;
    iVar2 = *((int *)GEN_TOP((iVar6 + *(int *)this)));
  }
  return 0;
}

/* ref: Global::HashMapIsOk */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db55c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb55c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  uint uVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint * puVar6;
  int local_8;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  if (-1 < (int)uVar1) {
    puVar2 = *(uint * PTR32 *)this;
    local_8 = uVar1 + 1;
    puVar6 = puVar2;
    do {
      uVar3 = *puVar6;
      if (uVar3 != 0xffffffff) {
        uVar5 = (uVar3 >> 4) * -0x61c8864f & uVar1;
        uVar4 = puVar2[uVar5 * 8];
        while (uVar4 != uVar3) {
          uVar5 = uVar5 + 1 & uVar1;
          uVar4 = puVar2[uVar5 * 8];
        }
      }
      puVar6 = puVar6 + 8;
      local_8 = local_8 - 1;
    } while (local_8 != 0);
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: Global::HashMapClear */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00db5620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdb5620u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint in_EAX = 0;
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 8))) + 1;
  if (0 < iVar1) {
    in_EAX = 0;
    do {
      *((undefined4 *)GEN_TOP((in_EAX + *(int *)this))) = 0xffffffff;
      in_EAX = in_EAX + 0x20;
      iVar1 = iVar1 - 1;
    } while (iVar1 != 0);
  }
  *((uint *)GEN_TOP(((int)this + 4))) = *((uint *)GEN_TOP(((int)this + 4))) & 0x80000000;
  return in_EAX;
}

/* ref: Global::HashMapClearAndDeallocate */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db5650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb5650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00db5620(this GEN_EDX_FWD);
  if ((*((uint *)GEN_TOP(((int)this + 4))) & 0x80000000) == 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))
                      (param_1 GEN_EDX_ARG,*(undefined4 *)this,(*((int *)GEN_TOP(((int)this + 8))) + 1) * 0x20);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0xffffffff;
  return uVar1;
}

/* ref: Global::HashMapInitWithBuffer */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00db56a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb56a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int iVar1;
  uint uVar2;
  
  uVar2 = param_2 >> 5;
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0x80000000;
  *((uint *)GEN_TOP(((int)this + 8))) = uVar2 - 1;
  if (uVar2 != 0) {
    iVar1 = 0;
    do {
      *((undefined4 *)GEN_TOP((iVar1 + *(int *)this))) = 0xffffffff;
      iVar1 = iVar1 + 0x20;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return 0;
}

/* ref: Global::HashMapResizeTable */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db56e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb56e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int * piVar8;
  
  iVar7 = param_2;
  if (param_2 < 9) {
    iVar7 = 8;
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  piVar2 = *(int * PTR32 *)this;
  iVar6 = *((int *)GEN_TOP(((int)this + 8))) + 1;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD,iVar7 << 5);
  if (uVar3 != 0) {
    *(uint *)this = uVar3;
    if (0 < iVar7) {
      iVar4 = 0;
      iVar5 = iVar7;
      do {
        *((undefined4 *)GEN_TOP((iVar4 + *(int *)this))) = 0xffffffff;
        iVar4 = iVar4 + 0x20;
        iVar5 = iVar5 - 1;
      } while (iVar5 != 0);
    }
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    *((int *)GEN_TOP(((int)this + 8))) = iVar7 - 1;
    piVar8 = piVar2;
    param_2 = iVar6;
    if (0 < iVar6) {
      do {
        if (*piVar8 != -1) {
          F_00db52c0(this GEN_EDX_ARG,param_1,*piVar8,(int)*(undefined8 *)(piVar8 + 2),
                        (int)((ulonglong)*(undefined8 *)(piVar8 + 2) >> 0x20),
                        (int)*(undefined8 *)(piVar8 + 4),
                        (int)((ulonglong)*(undefined8 *)(piVar8 + 4) >> 0x20),
                        (int)*(undefined8 *)(piVar8 + 6),
                        (int)((ulonglong)*(undefined8 *)(piVar8 + 6) >> 0x20));
        }
        iVar7 = param_2 - 1;
        piVar8 = piVar8 + 8;
        param_2 = iVar7;
      } while (iVar7 != 0);
    }
    if ((uVar1 & 0x80000000) == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_ARG,piVar2,iVar6 * 0x20);
    }
    return 0;
  }
  return 1;
}

/* ref: Global::ThreadHeapAllocate72 */
GEN_LIB GEN_FRAME uint F_00db57d0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdb57d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x30))) + 4))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x30))) GEN_EDX_ARG,param_1 * 0x48);
  return uVar2;
}

/* ref: Global::ThreadHeapAllocate4 */
GEN_LIB GEN_FRAME uint F_00db5800(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdb5800u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x30))) + 4))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x30))) GEN_EDX_ARG,param_1 * 4);
  return uVar2;
}

/* ref: Global::ArrayReserve24 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db5830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb5830u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,0x18);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: Global::ConstructFill24 */
GEN_LIB GEN_FRAME unsigned int F_00db5880(GEN_P(undefined8 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined8 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdb5880u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined8 * param_3 = (undefined8 *)(uintptr_t)gen_a2;)
  undefined8 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (puVar1 != ((undefined8 *)GEN_TOP(0x0))) {
        *puVar1 = *param_3;
        puVar1[1] = param_3[1];
        puVar1[2] = param_3[2];
      }
      puVar1 = puVar1 + 3;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: Global::Array8ClearAndDeallocate */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db58c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb58c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: Global::ArrayReserve8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db5900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb5900u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,8);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: Global::QuickSort24ByU64Key */
GEN_LIB GEN_NOFRAME unsigned int F_00db5940(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xdb5940u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  undefined8 * puVar1;
  undefined8 * puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint * puVar7;
  int iVar8;
  int iVar9;
  uint local_30;
  uint uStack_2c;
  
  do {
    uVar3 = *((undefined8 *)GEN_TOP((param_1 + (param_2 + param_3 >> 1) * 0x18)));
    iVar8 = param_3;
    iVar9 = param_2;
    do {
      puVar7 = ((uint *)GEN_TOP((param_1 + iVar9 * 0x18)));
      while( true ) {
        uStack_2c = (uint)((ulonglong)uVar3 >> 0x20);
        local_30 = (uint)uVar3;
        if ((uStack_2c < puVar7[1]) || ((uStack_2c <= puVar7[1] && (local_30 <= *puVar7)))) break;
        iVar9 = iVar9 + 1;
        puVar7 = puVar7 + 6;
      }
      for (puVar7 = ((uint *)GEN_TOP((param_1 + iVar8 * 0x18)));
          (uStack_2c <= puVar7[1] && ((uStack_2c < puVar7[1] || (local_30 < *puVar7))));
          puVar7 = puVar7 - 6) {
        iVar8 = iVar8 - 1;
      }
      if (iVar8 < iVar9) break;
      if (iVar8 != iVar9) {
        uVar4 = *((undefined8 *)GEN_TOP((param_1 + iVar8 * 0x18)));
        uVar5 = *((undefined8 *)GEN_TOP((param_1 + 8 + iVar8 * 0x18)));
        uVar6 = *((undefined8 *)GEN_TOP((param_1 + 0x10 + iVar8 * 0x18)));
        puVar1 = ((undefined8 *)GEN_TOP((param_1 + iVar8 * 0x18)));
        puVar2 = ((undefined8 *)GEN_TOP((param_1 + iVar9 * 0x18)));
        *puVar1 = *((undefined8 *)GEN_TOP((param_1 + iVar9 * 0x18)));
        puVar1[1] = puVar2[1];
        puVar1[2] = puVar2[2];
        *puVar2 = uVar4;
        puVar2[1] = uVar5;
        puVar2[2] = uVar6;
      }
      iVar8 = iVar8 - 1;
      iVar9 = iVar9 + 1;
    } while (iVar9 <= iVar8);
    if (param_2 < iVar8) {
      F_00db5940(param_1,param_2,iVar8,param_4);
    }
    param_2 = iVar9;
    if (param_3 <= iVar9) {
      return;
    }
  } while( true );
}

/* ref: Global::HashMapDestroy */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db5a50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb5a50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00db5650(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: Global::HashMapHasKey */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db5a70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb5a70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00db5370(this GEN_EDX_FWD,param_2);
  *((bool *)GEN_TOP(param_1)) = (int)uVar1 <= *((int *)GEN_TOP(((int)this + 8)));
  return param_1;
}

/* ref: Global::HashMapInsertDefault */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db5aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0xdb5aa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00db52c0(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,param_3,param_4,param_5,param_6,
                        param_7);
  return uVar1;
}

/* ref: Global::HashMapConstructWithBuffer */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db5ae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb5ae0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00db56a0(this GEN_EDX_FWD,param_1,param_2);
  return (uint)this;
}

/* ref: Global::HashMapTryInsert */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db5b00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8), GEN_P(uint * param_9, unsigned int gen_a9))
{
  GEN_ENTER(0xdb5b00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  GEN_PIN(uint * param_9 = (uint *)(uintptr_t)gen_a9;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 8))) < *((int *)GEN_TOP(((int)this + 4))) * 2) {
    uVar1 = F_00db56e0(this GEN_EDX_FWD,param_1,*((int *)GEN_TOP(((int)this + 8))) * 2 + 2);
    *param_9 = uVar1;
    if (uVar1 != 0) {
      return 0;
    }
  }
  else {
    *param_9 = 0;
  }
  uVar1 = F_00db52c0(this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Global::HashMapInsertIfAbsent */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00db5b80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xdb5b80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  undefined8 * puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (*((int *)GEN_TOP(((int)this + 8))) < *((int *)GEN_TOP(((int)this + 4))) * 2) {
    F_00db56e0(this GEN_EDX_FWD,param_1,*((int *)GEN_TOP(((int)this + 8))) * 2 + 2);
  }
  iVar4 = *(int *)this;
  uVar2 = (param_2 >> 4) * -0x61c8864f & *((uint *)GEN_TOP(((int)this + 8)));
  iVar3 = uVar2 * 0x20;
  if (*((uint *)GEN_TOP((iVar4 + iVar3))) != param_2) {
    while (*((int *)GEN_TOP((iVar4 + iVar3))) != -1) {
      iVar4 = *(int *)this;
      uVar2 = uVar2 + 1 & *((uint *)GEN_TOP(((int)this + 8)));
      iVar3 = uVar2 * 0x20;
      if (*((uint *)GEN_TOP((iVar3 + iVar4))) == param_2) {
        return 0;
      }
    }
    *((uint *)GEN_TOP((iVar4 + uVar2 * 0x20))) = param_2;
    puVar1 = ((undefined8 *)GEN_TOP((uVar2 * 0x20 + 8 + *(int *)this)));
    *puVar1 = CONCAT44(param_4,param_3);
    puVar1[1] = CONCAT44(param_6,param_5);
    puVar1[2] = CONCAT44(param_8,param_7);
    *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  }
  return 0;
}

/* ref: Global::HashMapRemove */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db5c30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb5c30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00db5370(this GEN_EDX_FWD,param_1);
  if ((int)uVar1 <= *((int *)GEN_TOP(((int)this + 8)))) {
    F_00db54c0(this GEN_EDX_ARG,uVar1);
    return 0;
  }
  return 1;
}

/* ref: Global::HashMapReserve */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db5c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdb5c60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  uint uVar2;
  
  iVar1 = 8;
  if (8 < param_2 * 2) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_2 * 2);
  }
  uVar2 = F_00db56e0(this GEN_EDX_FWD,param_1,iVar1);
  return uVar2;
}

/* ref: Global::Array24ClearAndDeallocate */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db5c90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb5c90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x18);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: Global::Array24PushBackUnchecked */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00db5ce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined8 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdb5ce0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a1;)
  undefined8 * puVar1;
  
  puVar1 = ((undefined8 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 0x18)));
  if (puVar1 != ((undefined8 *)GEN_TOP(0x0))) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    puVar1[2] = param_1[2];
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

