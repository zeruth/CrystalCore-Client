#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00dda190 */
GEN_FRAME uint F_00dda190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdda190u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x204);
  iVar3 = *(int *)(param_1 + 0x200);
  uVar2 = uVar1;
  if (((*(uint *)(param_2 + 0x204) == uVar1) || (iVar3 != *(int *)(param_2 + 0x200))) && (0 < iVar3)
     ) {
    iVar4 = param_1;
    do {
      uVar2 = F_00dd8c60(iVar4,(param_2 - param_1) + iVar4,uVar1);
      iVar4 = iVar4 + 0x10;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  return uVar2;
}

/* ref: FUN_00dda1e0 */
GEN_FRAME uint F_00dda1e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdda1e0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x850];
  code * pcVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int * piVar8;
  
  if (param_3 == 0) {
    return 0;
  }
  if (param_3 == 1) {
    F_00d919e0((undefined *)*param_2 GEN_EDX_ARG);
    return *param_2;
  }
  F_00dd7940(((undefined1 *)(gen_frame + 0x734)) GEN_EDX_ARG);
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)*param_2 + 0x14))((int *)*param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x734)));
  iVar6 = 0;
  iVar7 = 0;
  if (0 < param_3) {
    do {
      piVar4 = (int *)param_2[iVar7];
      F_00dd7940(((undefined1 *)(gen_frame + 0x630)) GEN_EDX_ARG);
      ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x14))(piVar4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x630)));
      bVar2 = F_00dd7980(((undefined1 *)(gen_frame + 0x630)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x734)));
      if (bVar2 == 0) {
        return 0;
      }
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4 GEN_EDX_ARG);
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + uVar3;
    } while (iVar7 < param_3);
  }
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x24))(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x734)),iVar6)));
  (*(int * PTR32 *)(gen_frame + 0x838)) = piVar4;
  if (piVar4 != (int *)0x0) {
    pcVar1 = *(gen_code32 *)(*piVar4 + 0x1c);
    (*(undefined4 *)(gen_frame + 0x83c)) = 0;
    (*(undefined4 *)(gen_frame + 0x840)) = 0xffffffff;
    (*(undefined2 *)(gen_frame + 0x844)) = 0;
    (*(undefined4 *)(gen_frame + 0x848)) = 6;
    uVar3 = (*pcVar1)(piVar4,&(*(undefined4 *)(gen_frame + 0x83c)),((int *)(gen_frame + 0xc)));
    if (uVar3 != 1) {
      F_00d91a80(piVar4 GEN_EDX_ARG);
      return 0;
    }
    iVar7 = 0;
    piVar4 = ((int *)(gen_frame + 0xc));
    piVar8 = ((int *)(gen_frame + 0x424));
    for (iVar6 = 0x83; iVar6 != 0; iVar6 = iVar6 - 1) {
      *piVar8 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar8 = piVar8 + 1;
    }
    iVar6 = (*(int *)(gen_frame + 0x624));
    if (0 < param_3) {
      do {
        piVar4 = (int *)param_2[iVar7];
        (*(undefined4 *)(gen_frame + 0x83c)) = 0;
        (*(undefined4 *)(gen_frame + 0x840)) = 0xffffffff;
        (*(undefined2 *)(gen_frame + 0x844)) = 0;
        (*(undefined4 *)(gen_frame + 0x848)) = 1;
        uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x1c))(piVar4 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x83c)),((undefined1 *)(gen_frame + 0x218)));
        if (uVar3 != 1) {
          F_00d91a80((*(int * PTR32 *)(gen_frame + 0x838)) GEN_EDX_ARG);
          return 0;
        }
        (*(undefined4 *)(gen_frame + 0x628)) = (*(undefined4 *)(gen_frame + 0x41c));
        F_00dda190(((undefined1 *)(gen_frame + 0x218)),((int *)(gen_frame + 0x424)));
        ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x34))(piVar4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x218)));
        uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4 GEN_EDX_ARG);
        iVar5 = 0;
        if (0 < iVar6) {
          piVar4 = ((int *)(gen_frame + 0x424));
          do {
            *piVar4 = *piVar4 + piVar4[1] * uVar3;
            iVar5 = iVar5 + 1;
            piVar4 = piVar4 + 4;
            iVar6 = (*(int *)(gen_frame + 0x624));
          } while (iVar5 < (*(int *)(gen_frame + 0x624)));
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < param_3);
    }
    piVar4 = (*(int * PTR32 *)(gen_frame + 0x838));
    ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x838)) + 0x34))((*(int * PTR32 *)(gen_frame + 0x838)) GEN_EDX_ARG,((int *)(gen_frame + 0xc)));
    return (uint)piVar4;
  }
  return 0;
}

/* ref: FUN_00dda3f0 */
GEN_NOFRAME uint F_00dda3f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdda3f0u, gen_a0, gen_a1, gen_a2, 0u);
  float * in_eax = (float *)(uintptr_t)gen_a0;
  undefined4 * in_edx = (undefined4 *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float * pfVar8;
  uint * puVar9;
  undefined1 auVar10 [16];
  
  fVar7 = *(float *)&REFG(undefined, 0x114970c);
  fVar6 = *(float *)&REFG(undefined, 0x1149708);
  fVar5 = *(float *)&REFG(undefined, 0x1149704);
  fVar4 = *(float *)&REFG(undefined, 0x1149700);
  memcpy(&(auVar3), &(*(gen_v16 *)&REFG(undefined, 0x11496f0)), sizeof(*(gen_v16 *)&REFG(undefined, 0x11496f0)) < sizeof(auVar3) ? sizeof(*(gen_v16 *)&REFG(undefined, 0x11496f0)) : sizeof(auVar3));
  pfVar8 = in_eax;
  if ((((*(char *)((int)in_edx + 9) == '\x04') && (*(char *)((int)param_3 + 9) == '\x01')) &&
      (*(char *)(in_edx + 2) == '\n')) && ((char)param_3[2] == '\b')) {
    puVar9 = (uint *)*param_3;
    pfVar8 = (float *)*in_edx;
    uVar1 = in_edx[1];
    uVar2 = param_3[1];
    if (0 < (int)in_eax) {
      do {
        (*(float *)((char *)&auVar10 + 0)) = *pfVar8 * *(float *)&REFG(undefined, 0x1138b80);
        (*(float *)((char *)&auVar10 + 4)) = pfVar8[1] * *(float *)&REFG(undefined, 0x1138b84);
        (*(float *)((char *)&auVar10 + 8)) = pfVar8[2] * *(float *)&REFG(undefined, 0x1138b88);
        (*(float *)((char *)&auVar10 + 12)) = pfVar8[3] * *(float *)&REFG(undefined, 0x1138b8c);
        pfVar8 = ((float *)GEN_TOP(((int)pfVar8 + (uVar1 & 0xfffffffc))));
        gen_maxps(&(auVar10), (&(unsigned long long[2]){0, 0}), &(auVar10));
        gen_minps(&(auVar10), &(auVar3), &(auVar10));
        *puVar9 = (((int)gen_fl2bits((*(float *)((char *)&auVar10 + 12)) + fVar7) << 8 |
                   (uint)gen_fl2bits((*(float *)((char *)&auVar10 + 8)) + fVar6) & 0xff) << 8 |
                  (uint)gen_fl2bits((*(float *)((char *)&auVar10 + 4)) + fVar5) & 0xff) << 8 |
                  (uint)gen_fl2bits((*(float *)((char *)&auVar10 + 0)) + fVar4) & 0xff;
        puVar9 = ((uint *)GEN_TOP(((int)puVar9 + (uVar2 & 0xfffffffc))));
        in_eax = (float *)((int)in_eax - 1);
      } while (in_eax != (float *)0x0);
    }
  }
  return (uint)pfVar8;
}

/* ref: FUN_00dda4c0 */
GEN_FRAME uint F_00dda4c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdda4c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x220];
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined * pvVar4;
  uint uVar5;
  undefined * puVar6;
  
  bVar1 = *(byte *)(param_2 + 2);
  bVar2 = *(byte *)(param_1 + 1);
  if (bVar2 == bVar1) {
    if (*(byte *)((int)param_1 + 9) == *(byte *)((int)param_2 + 9)) {
      uVar3 = F_00dd7fc0(*(undefined4 *)param_1,*(undefined4 *)((int)param_1 + 4),*param_2,
                           param_2[1],
                           (uint)(byte)(&REFG(undefined, 0x114962c))[(int)(bVar2)] * (uint)*(byte *)((int)param_1 + 9) +
                           3 & 0xfffffffc,param_3);
      return uVar3;
    }
    if ((bVar2 == bVar1) && (*(byte *)((int)param_2 + 9) <= *(byte *)((int)param_1 + 9))) {
      uVar3 = (uint)(byte)(&REFG(undefined, 0x114962c))[(int)(bVar1)] * (uint)*(byte *)((int)param_2 + 9) + 3 &
              0xfffffffc;
      goto LAB_00dda545;
    }
  }
  if (bVar2 == 7) {
    uVar3 = bVar1 - 2;
    switch((unsigned int)(uintptr_t)(uVar3)) {
    case 0: ;
      uVar3 = F_00dd8ca0(param_1,param_2,param_3);
      return uVar3;
    case 1: ;
      uVar3 = F_00dd8e40(param_1,param_3,param_2);
      return uVar3;
    case 6: ;
      uVar3 = F_00dd8eb0(param_1,param_2,param_3);
      return uVar3;
    case 8: ;
      uVar3 = F_00dd9170(param_2,param_1,param_3);
      return uVar3;
    }
  }
  else {
    if (bVar2 == 2) {
      uVar3 = (uint)bVar1;
      if (uVar3 == 3) {
        uVar3 = F_00dd8170(param_2,param_1,param_3);
        return uVar3;
      }
      if (uVar3 != 7) {
        if (uVar3 != 10) {
          return uVar3;
        }
        uVar3 = F_00dd9530(param_2,param_1,param_3);
        return uVar3;
      }
      uVar3 = F_00dd9360(param_2,param_1,param_3);
      return uVar3;
    }
    if (bVar2 == 3) {
      if (bVar1 - 2 != 0) {
        return bVar1 - 2;
      }
      uVar3 = F_00dd81d0(param_2,param_1,param_3);
      return uVar3;
    }
    if (bVar2 == 10) {
      uVar3 = (uint)bVar1;
      if (uVar3 == 2) {
        uVar3 = F_00dd9800(param_2,param_1,param_3);
        return uVar3;
      }
      if (uVar3 != 8) {
        if (uVar3 - 10 != 0) {
          return uVar3 - 10;
        }
        uVar3 = F_00dd9960(param_2,param_1,param_3);
        return uVar3;
      }
      uVar3 = F_00dda3f0(param_3,param_1,param_2);
      return uVar3;
    }
    if ((((bVar2 == 0xb) && (bVar1 == 10)) && (*(byte *)((int)param_2 + 9) < 5)) &&
       (*(char *)((int)param_1 + 9) == '\x01')) {
      uVar3 = (uint)*(byte *)((int)param_2 + 9) * 4;
LAB_00dda545: ;
      uVar3 = F_00dd7fc0(*(undefined4 *)param_1,*(undefined4 *)((int)param_1 + 4),*param_2,
                           param_2[1],uVar3,param_3);
      return uVar3;
    }
    if ((bVar2 == 6) && (*(char *)((int)param_1 + 9) == '\x01')) {
      if (bVar1 == 8) goto LAB_00dda6e6;
      if ((*(char *)((int)param_1 + 10) == '\x03') && (bVar1 == 10)) {
        (*(undefined8 *)(gen_frame + 0x20c)) = *param_1;
        (*(undefined8 *)(gen_frame + 0x214)) = param_1[1];
        (*(undefined1 *)((char *)&(*(undefined8 *)(gen_frame + 0x214)) + 0)) = 8;
        (*(undefined8 *)(gen_frame + 0x214)) = CONCAT71((int7)((ulonglong)param_1[1] >> 8),8);
        uVar3 = F_00dd8f10(&(*(undefined8 *)(gen_frame + 0x20c)),param_2,param_3);
        return uVar3;
      }
    }
    if ((bVar2 == 8) && (*(char *)((int)param_1 + 9) == '\x01')) {
      if (bVar1 == 6) {
LAB_00dda6e6: ;
        uVar3 = F_00dd7fc0(*(undefined4 *)param_1,*(undefined4 *)((int)param_1 + 4),*param_2,
                             param_2[1],4,param_3);
        return uVar3;
      }
      if (bVar1 == 10) {
        uVar3 = F_00dd8f10(param_1,param_2,param_3);
        return uVar3;
      }
    }
    F_00da0a80((undefined *)((int)&(*(undefined8 *)(gen_frame + 0x20c)) + 4) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),0x200);
    uVar3 = (uint)*(byte *)(param_2 + 2);
    uVar5 = (uint)*(byte *)(param_1 + 1);
    puVar6 = &REFG(undefined, 0x114976c);
    pvVar4 = (undefined *)F_00d9fe80((undefined *)((int)&(*(undefined8 *)(gen_frame + 0x20c)) + 4) GEN_EDX_ARG,"Cannot convert vertex format from ")
    ;
    pvVar4 = (undefined *)F_00d9ff40(pvVar4 GEN_EDX_ARG,uVar5);
    pvVar4 = (undefined *)F_00d9fe80(pvVar4 GEN_EDX_ARG,puVar6);
    F_00d9ff40(pvVar4 GEN_EDX_ARG,uVar3);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
              (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,1,0xabba4523,((undefined1 *)(gen_frame + 0xc)),
               "Mesh\\Utils\\VertexBufferUtil\\hkMeshVertexBufferUtil.cpp",0x5b0);
    uVar3 = F_00d9fda0((undefined *)((int)&(*(undefined8 *)(gen_frame + 0x20c)) + 4) GEN_EDX_ARG);
  }
  return uVar3;
}

/* ref: FUN_00dda810 */
GEN_FRAME uint F_00dda810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdda810u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x640];
  code * pcVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined1 * puVar5;
  byte * pbVar6;
  int iVar7;
  
  pcVar1 = *(gen_code32 *)(*param_1 + 0x18);
  (*(undefined4 *)(gen_frame + 0x62c)) = 0;
  (*(undefined4 *)(gen_frame + 0x630)) = 0xffffffff;
  (*(undefined2 *)(gen_frame + 0x634)) = 0;
  (*(undefined4 *)(gen_frame + 0x638)) = 3;
  uVar3 = (*pcVar1)(param_1);
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x18))(param_2 GEN_EDX_ARG);
  if ((uVar3 == uVar4) &&
     (uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x1c))(param_1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x62c)),((undefined1 *)(gen_frame + 0x218))), uVar4 == 1)) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x1c))(param_2 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x62c)),((undefined1 *)(gen_frame + 0xc)));
    if (uVar3 != 1) {
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x34))(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x218)));
      return uVar3;
    }
    F_00dd7940(((undefined1 *)(gen_frame + 0x528)) GEN_EDX_ARG);
    F_00dd7940(((undefined1 *)(gen_frame + 0x424)) GEN_EDX_ARG);
    ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x14))(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x528)));
    ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x14))(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x424)));
    bVar2 = F_00dd7980(((undefined1 *)(gen_frame + 0x528)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x424)));
    if (bVar2 == 0) {
      iVar7 = 0;
      if (0 < (*(int *)(gen_frame + 0x628))) {
        puVar5 = ((undefined1 *)(gen_frame + 0x218));
        pbVar6 = ((byte *)(gen_frame + 0x52a)) + 1;
        do {
          uVar3 = F_00dd7a40(((undefined1 *)(gen_frame + 0x424)) GEN_EDX_ARG,(uint)pbVar6[-1],(uint)*pbVar6);
          if (-1 < (int)uVar3) {
            F_00dda4c0(puVar5,((undefined1 *)(gen_frame + 0xc)) + uVar3 * 0x10,(*(undefined4 *)(gen_frame + 0x41c)));
          }
          iVar7 = iVar7 + 1;
          pbVar6 = pbVar6 + 8;
          puVar5 = puVar5 + 0x10;
        } while (iVar7 < (*(int *)(gen_frame + 0x628)));
      }
    }
    else {
      F_00dda190(((undefined1 *)(gen_frame + 0x218)),((undefined1 *)(gen_frame + 0xc)));
    }
    ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x34))(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x218)));
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x34))(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)));
  }
  return uVar4;
}

/* ref: FUN_00dda990 */
GEN_NOFRAME uint F_00dda990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xdda990u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  float param_4 = (float)gen_a3;
  undefined8 * puVar1;
  float fVar2;
  
  if (*(char *)(param_2 + 2) == *(char *)(param_3 + 8)) {
    if (*(char *)((int)param_2 + 9) == *(char *)(param_3 + 9)) {
      if ((*(char *)(param_2 + 2) != '\n') && (*(char *)((int)param_2 + 9) != '\x03')) {
        F_00dd9e30(param_1,param_2,param_3,param_4);
        return (uint)param_1;
      }
      puVar1 = (undefined8 *)*param_2;
      fVar2 = ABS(REFG(float, 0x1087f04) -
                  (*(float *)(puVar1 + 1) * *(float *)(puVar1 + 1) +
                  (gen_bits2f((uint)((ulonglong)*puVar1 >> 0x20)) *
                   gen_bits2f((uint)((ulonglong)*puVar1 >> 0x20)) +
                  gen_bits2f((uint)*puVar1) * gen_bits2f((uint)*puVar1))));
      if ((!GEN_ISNAN(param_4) && !GEN_ISNAN(fVar2)) && (!(param_4 < fVar2) && param_4 != fVar2)) {
        *param_1 = 1;
        return (uint)param_1;
      }
      *param_1 = 0;
      return (uint)param_1;
    }
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00ddaa90 */
GEN_FRAME uint F_00ddaa90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xddaa90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined1 * puVar1;
  char * pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  
  iVar3 = 0;
  if (0 < param_4) {
    iVar5 = param_3 - param_2;
    iVar4 = param_2;
    do {
      if (*(char *)(iVar4 + 10) != *(char *)(iVar4 + 10 + iVar5)) goto LAB_00ddab5a;
      switch((unsigned int)(uintptr_t)(*(char *)(iVar4 + 10))) {
      case '\x01': ;
      case '\n': ;
        fVar6 = *param_5;
        puVar1 = &(*(undefined1 *)(gen_frame + 0xb));
        break;
      case '\x02': ;
      case '\x04': ;
      case '\x05': ;
        pcVar2 = (char *)F_00dda990(&(*(undefined1 *)(gen_frame + 0xa)),iVar4,iVar5 + iVar4,param_5[1]);
        goto LAB_00ddab37;
      case '\x03': ;
        fVar6 = param_5[2];
        puVar1 = &(*(undefined1 *)(gen_frame + 0x9));
        break;
      default: ;
        fVar6 = param_5[3];
        puVar1 = &(*(undefined1 *)(gen_frame + 0x7));
        break;
      case '\t': ;
        fVar6 = param_5[4];
        puVar1 = &(*(undefined1 *)(gen_frame + 0x8));
      }
      pcVar2 = (char *)F_00dd9e30(puVar1,iVar4,iVar5 + iVar4,fVar6);
LAB_00ddab37: ;
      if (*pcVar2 == '\0') {
LAB_00ddab5a: ;
        *param_1 = 0;
        return (uint)param_1;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x10;
    } while (iVar3 < param_4);
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00ddab90 */
GEN_FRAME uint F_00ddab90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddab90u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x204);
  uVar2 = *(uint *)(param_1 + 0x200);
  if (((*(int *)(param_2 + 0x204) == iVar1) || (uVar2 != *(uint *)(param_2 + 0x200))) &&
     (0 < (int)uVar2)) {
    uVar3 = uVar2;
    iVar4 = param_1;
    do {
      uVar2 = F_00dda4c0(iVar4,(param_2 - param_1) + iVar4,iVar1);
      iVar4 = iVar4 + 0x10;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return uVar2;
}

/* ref: FUN_00ddabf0 */
GEN_FRAME uint F_00ddabf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xddabf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x3d0];
  code * pcVar1;
  uint uVar2;
  int iVar3;
  
  F_00dd7940(((undefined1 *)(gen_frame + 0x214)) GEN_EDX_ARG);
  ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x14))(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x214)));
  uVar2 = F_00dd7a40(((undefined1 *)(gen_frame + 0x214)) GEN_EDX_ARG,param_2,param_3);
  if (-1 < (int)uVar2) {
    pcVar1 = *(gen_code32 *)(*param_1 + 0x20);
    (*(uint *)(gen_frame + 0x31c)) = uVar2;
    (*(undefined4 *)(gen_frame + 0x3bc)) = 0;
    (*(undefined4 *)(gen_frame + 0x3c0)) = 0xffffffff;
    (*(undefined2 *)(gen_frame + 0x3c4)) = 0;
    (*(undefined4 *)(gen_frame + 0x3c8)) = 3;
    (*(undefined4 *)(gen_frame + 0x318)) = 1;
    (*(undefined1 *)(gen_frame + 0x39c)) = 9;
    uVar2 = (*pcVar1)(param_1,&(*(undefined4 *)(gen_frame + 0x3bc)),&(*(undefined4 *)(gen_frame + 0x318)),((byte *)(gen_frame + 0x8)));
    if (uVar2 == 1) {
      if ((int)(param_4[2] & 0x3fffffff) < (int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 516))) {
        iVar3 = (param_4[2] & 0x3fffffff) * 2;
        if (iVar3 <= (int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 516))) {
          iVar3 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 516));
        }
        F_00d95690(&REFG(undefined * PTR32, 0x13516ac),param_4,iVar3,0x10);
      }
      param_4[1] = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 516));
      ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x24))(param_1 GEN_EDX_ARG,((byte *)(gen_frame + 0x8)),0,*param_4);
      ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x34))(param_1 GEN_EDX_ARG,((byte *)(gen_frame + 0x8)));
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00ddacf0 */
GEN_FRAME unsigned int F_00ddacf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xddacf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  int param_4 = (int)gen_a3;
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [12];
  gen_v12 * pauVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar11;
  undefined1 auVar10 [12];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  pauVar4 = (gen_v12 *)*param_1;
  iVar1 = param_1[1];
  switch((unsigned int)(uintptr_t)(*(undefined1 *)((int)param_1 + 10))) {
  case 1: ;
    iVar5 = param_4;
    if (0 < param_4) {
      do {
        fVar12 = gen_bits2f((uint)*(undefined8 *)*pauVar4);
        fVar13 = gen_bits2f((uint)((ulonglong)*(undefined8 *)*pauVar4 >> 0x20));
        fVar18 = *(float *)(*pauVar4 + 8);
        fVar16 = param_2[2];
        fVar9 = param_2[0xe];
        fVar17 = param_2[6];
        fVar11 = param_2[10];
        *(ulonglong *)*pauVar4 =
             CONCAT44((uint)gen_fl2bits(((fVar12 * param_2[1] + param_2[0xd]) + fVar13 * param_2[5])
                                        + fVar18 * param_2[9]),
                      (uint)gen_fl2bits(((fVar12 * *param_2 + param_2[0xc]) + fVar13 * param_2[4]) +
                                        fVar18 * param_2[8]));
        *(float *)(*pauVar4 + 8) = ((fVar12 * fVar16 + fVar9) + fVar13 * fVar17) + fVar18 * fVar11;
        pauVar4 = (gen_v12 *)(*pauVar4 + iVar1);
        iVar5 = iVar5 - 1;
      } while (iVar5 != 0);
      return 0;
    }
    break;
  case 2: ;
  case 5: ;
    if (0 < param_4) {
      param_1 = (undefined4 *)param_4;
      do {
        memcpy(&(auVar3), &(*pauVar4), sizeof(*pauVar4) < sizeof(auVar3) ? sizeof(*pauVar4) : sizeof(auVar3));
        memcpy(&(auVar10), &(auVar3), sizeof(auVar3) < sizeof(auVar10) ? sizeof(auVar3) : sizeof(auVar10));
        if ((param_3 & 2) != 0) {
          (*(undefined4 *)((char *)&auVar10 + 0)) = (uint)*(undefined8 *)*pauVar4 ^ *(uint *)&REFG(undefined, 0x10ab9c0);
          (*(undefined4 *)((char *)&auVar10 + 4)) = (*(undefined4 *)((char *)&auVar3 + 4)) ^ *(uint *)&REFG(undefined, 0x10ab9c4);
          (*(undefined4 *)((char *)&auVar10 + 8)) = (*(undefined4 *)((char *)&auVar3 + 8)) ^ *(uint *)&REFG(undefined, 0x10ab9c8);
        }
        fVar18 = (*(float *)((char *)&auVar10 + 0));
        fVar9 = (*(float *)((char *)&auVar10 + 4));
        fVar11 = (*(float *)((char *)&auVar10 + 8));
        fVar16 = (fVar18 * *param_2 + fVar9 * param_2[4]) + fVar11 * param_2[8];
        fVar17 = (fVar18 * param_2[1] + fVar9 * param_2[5]) + fVar11 * param_2[9];
        fVar18 = (fVar18 * param_2[2] + fVar9 * param_2[6]) + fVar11 * param_2[10];
        if ((param_3 & 4) != 0) {
          fVar16 = gen_bits2f((uint)gen_fl2bits(fVar16) ^ *(uint *)&REFG(undefined, 0x10ab9c0));
          fVar17 = gen_bits2f((uint)gen_fl2bits(fVar17) ^ *(uint *)&REFG(undefined, 0x10ab9c4));
          fVar18 = gen_bits2f((uint)gen_fl2bits(fVar18) ^ *(uint *)&REFG(undefined, 0x10ab9c8));
        }
        if ((param_3 & 1) != 0) {
          fVar9 = fVar16 * fVar16;
          fVar11 = fVar17 * fVar17;
          fVar12 = fVar18 * fVar18;
          fVar13 = (fVar11 + fVar9) + fVar12;
          fVar14 = (fVar11 + fVar9) + fVar12;
          fVar15 = (fVar11 + fVar9) + fVar12;
          memset(&auVar20, 0, 12);
          (*(undefined4 *)((char *)&auVar20 + 12)) = 0;
          uVar6 = -(uint)(0.0 - fVar13 < 0.0);
          uVar7 = -(uint)(0.0 - fVar14 < 0.0);
          uVar8 = -(uint)(0.0 - fVar15 < 0.0);
          (*(undefined4 *)((char *)&auVar2 + 4)) = (undefined4)gen_fl2bits(fVar14);
          (*(undefined4 *)((char *)&auVar2 + 0)) = (undefined4)gen_fl2bits(fVar13);
          (*(undefined4 *)((char *)&auVar2 + 8)) = (undefined4)gen_fl2bits(fVar15);
          (*(undefined4 *)((char *)&auVar2 + 12)) = (undefined4)gen_fl2bits((fVar11 + fVar9) + fVar12);
          gen_rsqrtps(&(auVar21), &(auVar20), &(auVar2));
          fVar9 = (*(float *)((char *)&auVar21 + 0));
          fVar11 = (*(float *)((char *)&auVar21 + 4));
          fVar12 = (*(float *)((char *)&auVar21 + 8));
          fVar16 = gen_bits2f((uint)gen_fl2bits(gen_bits2f(~-(uint)(fVar13 <= 0.0) &
                                                           (uint)gen_fl2bits((*(float *)&
                                                  REFG(undefined, 0x11496c0) - (fVar9 * fVar13) * fVar9) *
                                                  (*(float *)&REFG(undefined, 0x11496d0) * fVar9))) * fVar16) &
                              uVar6 | ~uVar6 & (uint)gen_fl2bits(fVar16));
          fVar17 = gen_bits2f((uint)gen_fl2bits(gen_bits2f(~-(uint)(fVar14 <= 0.0) &
                                                           (uint)gen_fl2bits((*(float *)&
                                                  REFG(undefined, 0x11496c4) - (fVar11 * fVar14) * fVar11) *
                                                  (*(float *)&REFG(undefined, 0x11496d4) * fVar11))) * fVar17) &
                              uVar7 | ~uVar7 & (uint)gen_fl2bits(fVar17));
          fVar18 = gen_bits2f((uint)gen_fl2bits(gen_bits2f(~-(uint)(fVar15 <= 0.0) &
                                                           (uint)gen_fl2bits((*(float *)&
                                                  REFG(undefined, 0x11496c8) - (fVar12 * fVar15) * fVar12) *
                                                  (*(float *)&REFG(undefined, 0x11496d8) * fVar12))) * fVar18) &
                              uVar8 | ~uVar8 & (uint)gen_fl2bits(fVar18));
        }
        *(ulonglong *)*pauVar4 = CONCAT44((uint)gen_fl2bits(fVar17),(uint)gen_fl2bits(fVar16));
        *(float *)(*pauVar4 + 8) = fVar18;
        pauVar4 = (gen_v12 *)(*pauVar4 + iVar1);
        param_1 = (undefined4 *)((int)param_1 - 1);
      } while (param_1 != (undefined4 *)0x0);
    }
    break;
  case 3: ;
    break;
  case 4: ;
    if (0 < param_4) {
      iVar5 = param_4;
      do {
        fVar18 = *(float *)(*pauVar4 + 8);
        fVar16 = gen_bits2f((uint)*(undefined8 *)*pauVar4);
        fVar17 = gen_bits2f((uint)((ulonglong)*(undefined8 *)*pauVar4 >> 0x20));
        fVar9 = (fVar17 * param_2[4] + fVar16 * *param_2) + fVar18 * param_2[8];
        fVar11 = (fVar17 * param_2[5] + fVar16 * param_2[1]) + fVar18 * param_2[9];
        fVar18 = (fVar17 * param_2[6] + fVar16 * param_2[2]) + fVar18 * param_2[10];
        if ((param_3 & 1) != 0) {
          fVar16 = fVar9 * fVar9;
          fVar17 = fVar11 * fVar11;
          fVar12 = fVar18 * fVar18;
          fVar13 = (fVar17 + fVar16) + fVar12;
          fVar14 = (fVar17 + fVar16) + fVar12;
          fVar15 = (fVar17 + fVar16) + fVar12;
          memset(&auVar19, 0, 12);
          (*(undefined4 *)((char *)&auVar19 + 12)) = 0;
          uVar6 = -(uint)(0.0 - fVar13 < 0.0);
          uVar7 = -(uint)(0.0 - fVar14 < 0.0);
          uVar8 = -(uint)(0.0 - fVar15 < 0.0);
          (*(undefined4 *)((char *)&auVar21 + 4)) = (undefined4)gen_fl2bits(fVar14);
          (*(undefined4 *)((char *)&auVar21 + 0)) = (undefined4)gen_fl2bits(fVar13);
          (*(undefined4 *)((char *)&auVar21 + 8)) = (undefined4)gen_fl2bits(fVar15);
          (*(undefined4 *)((char *)&auVar21 + 12)) = (undefined4)gen_fl2bits((fVar17 + fVar16) + fVar12);
          gen_rsqrtps(&(auVar21), &(auVar19), &(auVar21));
          fVar16 = (*(float *)((char *)&auVar21 + 0));
          fVar17 = (*(float *)((char *)&auVar21 + 4));
          fVar12 = (*(float *)((char *)&auVar21 + 8));
          fVar9 = gen_bits2f((uint)gen_fl2bits(gen_bits2f(~-(uint)(fVar13 <= 0.0) &
                                                          (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x11496c0)
                                                                            - (fVar16 * fVar13) *
                                                                              fVar16) *
                                                                            (*(float *)&REFG(undefined, 0x11496d0)
                                                                            * fVar16))) * fVar9) &
                             uVar6 | ~uVar6 & (uint)gen_fl2bits(fVar9));
          fVar11 = gen_bits2f((uint)gen_fl2bits(gen_bits2f(~-(uint)(fVar14 <= 0.0) &
                                                           (uint)gen_fl2bits((*(float *)&
                                                  REFG(undefined, 0x11496c4) - (fVar17 * fVar14) * fVar17) *
                                                  (*(float *)&REFG(undefined, 0x11496d4) * fVar17))) * fVar11) &
                              uVar7 | ~uVar7 & (uint)gen_fl2bits(fVar11));
          fVar18 = gen_bits2f((uint)gen_fl2bits(gen_bits2f(~-(uint)(fVar15 <= 0.0) &
                                                           (uint)gen_fl2bits((*(float *)&
                                                  REFG(undefined, 0x11496c8) - (fVar12 * fVar15) * fVar12) *
                                                  (*(float *)&REFG(undefined, 0x11496d8) * fVar12))) * fVar18) &
                              uVar8 | ~uVar8 & (uint)gen_fl2bits(fVar18));
        }
        *(ulonglong *)*pauVar4 = CONCAT44((uint)gen_fl2bits(fVar11),(uint)gen_fl2bits(fVar9));
        *(float *)(*pauVar4 + 8) = fVar18;
        pauVar4 = (gen_v12 *)(*pauVar4 + iVar1);
        iVar5 = iVar5 - 1;
      } while (iVar5 != 0);
      return 0;
    }
    break;
  default: ;
    goto switchD_00ddad0c_default;
  }
switchD_00ddad0c_default: ;
  return 0;
}

/* ref: FUN_00ddaf50 */
GEN_FRAME uint F_00ddaf50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xddaf50u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x220];
  code * pcVar1;
  uint uVar2;
  undefined1 * puVar3;
  int iVar4;
  
  pcVar1 = *(gen_code32 *)(*param_1 + 0x1c);
  (*(undefined4 *)(gen_frame + 0x20c)) = 0;
  (*(undefined4 *)(gen_frame + 0x210)) = 0xffffffff;
  (*(undefined2 *)(gen_frame + 0x214)) = 0;
  (*(undefined4 *)(gen_frame + 0x218)) = 3;
  uVar2 = (*pcVar1)(param_1,&(*(undefined4 *)(gen_frame + 0x20c)),((undefined1 *)(gen_frame + 0x0)));
  if (uVar2 == 1) {
    if (0 < (*(int *)(gen_frame + 0x200))) {
      puVar3 = ((undefined1 *)(gen_frame + 0x0));
      iVar4 = (*(int *)(gen_frame + 0x200));
      do {
        F_00ddacf0(puVar3,param_2,param_3,(*(undefined4 *)(gen_frame + 0x204)));
        puVar3 = puVar3 + 0x10;
        iVar4 = iVar4 - 1;
      } while (iVar4 != 0);
    }
    ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x34))(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    return 0;
  }
  return 1;
}

/* ref: FUN_00ddaff0 */
GEN_FRAME uint F_00ddaff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xddaff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  uint * param_4 = (uint *)(uintptr_t)gen_a3;
  uint uVar1;
  int iVar2;
  LPVOID pvVar3;
  int * piVar4;
  byte * pbVar5;
  int iVar6;
  uint uVar7;
  DWORD dwTlsIndex;
  int local_c;
  
  uVar1 = param_2[0x80];
  if ((int)uVar1 < 1) {
    *param_1 = 0;
    return (uint)param_1;
  }
  if (uVar1 == 1) {
    *param_3 = *param_2;
    *param_4 = (uint)(byte)(&REFG(undefined, 0x114962c))[(int)(*(byte *)(param_2 + 2))] *
               (uint)*(byte *)((int)param_2 + 9) + 3 & 0xfffffffc;
    *param_1 = 1;
    return (uint)param_1;
  }
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  piVar4 = *(int * PTR32 *)((int)pvVar3 + 0xc);
  uVar7 = uVar1 * 0x10 + 0x7f & 0xffffff80;
  if ((*(int *)((int)pvVar3 + 8) < (int)uVar7) ||
     (*(uint *)((int)pvVar3 + 0x10) < (int)piVar4 + uVar7)) {
    piVar4 = (int *)F_00d94390(pvVar3 GEN_EDX_ARG,uVar7);
  }
  else {
    *(uint *)((int)pvVar3 + 0xc) = (int)piVar4 + uVar7;
  }
  F_00da1010(piVar4,param_2,uVar1 * 0x10);
  if (1 < (int)uVar1) {
    F_00ddb900(piVar4,0,uVar1 - 1,((code *)REFP(0xddb630)));
  }
  dwTlsIndex = REFG(undefined4, 0x15d9a88);
  iVar2 = *piVar4;
  local_c = 0;
  iVar6 = iVar2;
  if (0 < (int)uVar1) {
    pbVar5 = (byte *)(param_2 + 2);
    do {
      if (*(int *)(pbVar5 - 8) != iVar6) {
        *param_1 = 0;
        goto LAB_00ddb11e;
      }
      iVar6 = iVar6 + ((uint)(byte)(&REFG(undefined, 0x114962c))[(int)(*pbVar5)] * (uint)pbVar5[1] + 3 & 0xfffffffc);
      local_c = local_c + 1;
      pbVar5 = pbVar5 + 0x10;
    } while (local_c < (int)uVar1);
  }
  *param_4 = iVar6 - iVar2;
  *param_3 = iVar2;
  dwTlsIndex = REFG(undefined4, 0x15d9a88);
  *param_1 = 1;
LAB_00ddb11e: ;
  pvVar3 = gen_imp_TlsGetValue(dwTlsIndex);
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar7) ||
      (uVar7 + (int)piVar4 != *(int *)((int)pvVar3 + 0xc))) ||
     (*(int * PTR32 *)((int)pvVar3 + 0x14) == piVar4)) {
    F_00d945c0(pvVar3 GEN_EDX_ARG,piVar4,uVar7);
  }
  else {
    *(int * PTR32 *)((int)pvVar3 + 0xc) = piVar4;
  }
  if (-1 < (int)(uVar1 | 0x80000000)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),piVar4,uVar1 << 4);
  }
  return (uint)param_1;
}

/* ref: FUN_00ddb590 */
GEN_FRAME uint F_00ddb590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xddb590u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = param_1;
  switch((unsigned int)(uintptr_t)(*(undefined1 *)(param_1 + 2))) {
  case 1: ;
  case 3: ;
  case 9: ;
  case 10: ;
    uVar1 = F_00dd9b30(param_1,param_2,param_3,param_4,param_5);
    return uVar1;
  case 2: ;
  case 4: ;
  case 5: ;
    uVar1 = F_00ddb190(param_2,param_3,param_1,param_4,param_5);
    return uVar1;
  case 6: ;
  case 7: ;
  case 8: ;
    uVar1 = F_00dd9ad0(param_2,param_1,param_3,param_4,param_5);
  }
  return uVar1;
}

/* ref: FUN_00ddb630 */
GEN_FRAME uint F_00ddb630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddb630u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  return (uint)(*param_1 < *param_2);
}

/* ref: FUN_00ddb650 */
GEN_FRAME uint GEN_THISCALL F_00ddb650(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xddb650u, gen_a0, gen_a1, gen_a2, 0u);
  char * in_ecx = (char *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(bool *)param_2 = *in_ecx != (char)param_3;
  return param_2;
}

/* ref: FUN_00ddb670 */
GEN_FRAME uint GEN_THISCALL F_00ddb670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddb670u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = in_ecx[3] != *in_ecx;
  return param_2;
}

/* ref: FUN_00ddb6c0 */
GEN_FRAME uint GEN_THISCALL F_00ddb6c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddb6c0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00ddb6e0 */
GEN_FRAME uint F_00ddb6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddb6e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = 0;
  return (uint)param_1;
}

/* ref: FUN_00ddb700 */
GEN_FRAME uint F_00ddb700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddb700u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  return (uint)param_2;
}

/* ref: FUN_00ddb740 */
GEN_FRAME uint GEN_THISCALL F_00ddb740(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xddb740u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 << 4);
  return uVar1;
}

/* ref: FUN_00ddb7c0 */
GEN_FRAME uint F_00ddb7c0(unsigned int gen_a0)
{
  GEN_ENTER(0xddb7c0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)&REFG(undefined, 0x1138b8c);
  uVar2 = *(undefined4 *)&REFG(undefined, 0x1138b88);
  uVar1 = *(undefined4 *)&REFG(undefined, 0x1138b84);
  *param_1 = *(undefined4 *)&REFG(undefined, 0x1138b80);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return (uint)param_1;
}

/* ref: FUN_00ddb7e0 */
GEN_FRAME uint F_00ddb7e0(unsigned int gen_a0)
{
  GEN_ENTER(0xddb7e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  LPVOID this;
  uint uVar2;
  uint uVar3;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = *(uint *)((int)this + 0xc);
  uVar3 = param_1 * 0x10 + 0x7fU & 0xffffff80;
  uVar2 = uVar1 + uVar3;
  if (((int)uVar3 <= *(int *)((int)this + 8)) && (uVar2 <= *(uint *)((int)this + 0x10))) {
    *(uint *)((int)this + 0xc) = uVar2;
    return uVar1;
  }
  uVar2 = F_00d94390(this GEN_EDX_ARG,uVar3);
  return uVar2;
}

/* ref: FUN_00ddb820 */
GEN_FRAME uint F_00ddb820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddb820u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  LPVOID this;
  uint uVar1;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = param_2 * 0x10 + 0x7fU & 0xffffff80;
  if ((((int)uVar1 <= *(int *)((int)this + 8)) && (uVar1 + param_1 == *(int *)((int)this + 0xc))) &&
     (*(int *)((int)this + 0x14) != param_1)) {
    *(int *)((int)this + 0xc) = param_1;
    return (uint)this;
  }
  uVar1 = F_00d945c0(this GEN_EDX_ARG,param_1,uVar1);
  return uVar1;
}

/* ref: FUN_00ddb870 */
GEN_FRAME uint F_00ddb870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddb870u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = 0;
  return (uint)param_1;
}

/* ref: FUN_00ddb890 */
GEN_FRAME uint F_00ddb890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddb890u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  return (uint)param_2;
}

/* ref: FUN_00ddb8b0 */
GEN_FRAME uint GEN_THISCALL F_00ddb8b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddb8b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00ddb900 */
GEN_NOFRAME unsigned int F_00ddb900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xddb900u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 * puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  do {
    puVar4 = ((undefined8 *)GEN_TOP(((param_2 + param_3 >> 1) * 0x10 + param_1)));
    (*(undefined8 *)(gen_frame + 0x0)) = *puVar4;
    (*(undefined8 *)(gen_frame + 0x8)) = puVar4[1];
    iVar7 = param_3;
    iVar8 = param_2;
    do {
      iVar5 = iVar8 * 0x10 + param_1;
      (*(int *)(gen_frame + 0x1c)) = iVar5;
      uVar6 = (*param_4)(iVar5,&(*(undefined8 *)(gen_frame + 0x0)));
      cVar3 = (char)uVar6;
      iVar5 = (*(int *)(gen_frame + 0x1c));
      while (cVar3 != '\0') {
        iVar8 = iVar8 + 1;
        (*(int *)(gen_frame + 0x1c)) = iVar5 + 0x10;
        uVar6 = (*param_4)(iVar5 + 0x10,&(*(undefined8 *)(gen_frame + 0x0)));
        iVar5 = (*(int *)(gen_frame + 0x1c));
        cVar3 = (char)uVar6;
      }
      iVar5 = param_1 + iVar7 * 0x10;
      (*(int *)(gen_frame + 0x1c)) = iVar5;
      uVar6 = (*param_4)(&(*(undefined8 *)(gen_frame + 0x0)),iVar5);
      cVar3 = (char)uVar6;
      while (cVar3 != '\0') {
        iVar5 = (*(int *)(gen_frame + 0x1c)) - 0x10;
        iVar7 = iVar7 - 1;
        (*(int *)(gen_frame + 0x1c)) = iVar5;
        uVar6 = (*param_4)(&(*(undefined8 *)(gen_frame + 0x0)),iVar5);
        cVar3 = (char)uVar6;
      }
      if (iVar7 < iVar8) break;
      if (iVar7 != iVar8) {
        iVar5 = iVar7 * 0x10;
        uVar1 = *(undefined8 *)(iVar5 + param_1);
        uVar2 = *(undefined8 *)(iVar5 + 8 + param_1);
        puVar4 = (undefined8 *)(iVar8 * 0x10 + param_1);
        *(undefined8 *)(iVar5 + param_1) = *(undefined8 *)(iVar8 * 0x10 + param_1);
        ((undefined8 *)(iVar5 + param_1))[1] = puVar4[1];
        *puVar4 = uVar1;
        puVar4[1] = uVar2;
      }
      iVar7 = iVar7 - 1;
      iVar8 = iVar8 + 1;
    } while (iVar8 <= iVar7);
    if (param_2 < iVar7) {
      F_00ddb900(param_1,param_2,iVar7,param_4);
    }
    param_2 = iVar8;
    if (param_3 <= iVar8) {
      return;
    }
  } while( true );
}

/* ref: FUN_00ddba30 */
GEN_FRAME uint GEN_THISCALL F_00ddba30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddba30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *in_ecx = *param_2;
  in_ecx[1] = uVar1;
  in_ecx[2] = uVar2;
  in_ecx[3] = uVar3;
  return (uint)param_2;
}

/* ref: FUN_00ddba40 */
GEN_FRAME uint GEN_THISCALL F_00ddba40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddba40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00ddba50 */
GEN_FRAME unsigned int F_00ddba50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xddba50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (1 < param_2) {
    F_00ddb900(param_1,0,param_2 - 1,param_3);
  }
  return;
}

/* ref: FUN_00ddba80 */
GEN_FRAME uint GEN_THISCALL F_00ddba80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddba80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *in_ecx = *param_2;
  in_ecx[1] = uVar1;
  in_ecx[2] = uVar2;
  in_ecx[3] = 0;
  return (uint)param_2;
}

/* ref: FUN_00ddbaa0 */
GEN_FRAME uint GEN_THISCALL F_00ddbaa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddbaa0u, gen_a0, gen_a1, 0u, 0u);
  undefined8 * in_ecx = (undefined8 *)(uintptr_t)gen_a0;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(in_ecx + 1);
  return (uint)param_2;
}

/* ref: FUN_00ddbac0 */
GEN_FRAME uint GEN_THISCALL F_00ddbac0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddbac0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = in_ecx[1];
  uVar2 = in_ecx[2];
  uVar3 = in_ecx[3];
  *param_2 = *in_ecx;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  return (uint)param_2;
}

/* ref: FUN_00ddbad0 */
GEN_NOFRAME uint GEN_THISCALL F_00ddbad0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xddbad0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00ddbb90 */
GEN_NOFRAME uint GEN_THISCALL F_00ddbb90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xddbb90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00ddbc50 */
GEN_FRAME uint GEN_THISCALL F_00ddbc50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddbc50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  LPVOID this_00;
  uint uVar2;
  
  uVar1 = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(uint *)((int)this + 0x10) = param_1;
  if (param_1 != 0) {
    this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar1 = *(uint *)((int)this_00 + 0xc);
    uVar2 = param_1 * 0x10 + 0x7f & 0xffffff80;
    if ((*(int *)((int)this_00 + 8) < (int)uVar2) ||
       (*(uint *)((int)this_00 + 0x10) < uVar1 + uVar2)) {
      uVar1 = F_00d94390(this_00 GEN_EDX_ARG,uVar2);
    }
    else {
      *(uint *)((int)this_00 + 0xc) = uVar1 + uVar2;
    }
  }
  *(uint *)((int)this + 8) = param_1 | 0x80000000;
  *(uint *)this = uVar1;
  *(uint *)((int)this + 0xc) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ddbcc0 */
GEN_NOFRAME uint GEN_THISCALL F_00ddbcc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xddbcc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  LPVOID this_00;
  uint uVar3;
  
  iVar1 = *(int *)((int)this + 0xc);
  if (iVar1 == *(int *)this) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  iVar2 = *(int *)((int)this + 0x10);
  this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar3 = iVar2 * 0x10 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)this_00 + 8) < (int)uVar3) || (uVar3 + iVar1 != *(int *)((int)this_00 + 0xc)))
     || (*(int *)((int)this_00 + 0x14) == iVar1)) {
    F_00d945c0(this_00 GEN_EDX_ARG,iVar1,uVar3);
  }
  else {
    *(int *)((int)this_00 + 0xc) = iVar1;
  }
  uVar3 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar3 & 0x80000000) == 0) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar3 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar3;
}

/* ref: FUN_00ddbd50 */
GEN_FRAME uint F_00ddbd50(unsigned int gen_a0)
{
  GEN_ENTER(0xddbd50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  default: ;
    return 0;
  case 1: ;
    return 1;
  case 2: ;
    return 2;
  case 3: ;
  case 4: ;
    return 3;
  }
}

/* ref: FUN_00ddbd90 */
GEN_FRAME uint F_00ddbd90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddbd90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 1: ;
    return param_2;
  case 2: ;
    return param_2 * 2;
  case 3: ;
    return param_2 * 3;
  case 4: ;
    return param_2 + 2;
  default: ;
    return 0;
  }
}

/* ref: FUN_00ddbde0 */
GEN_FRAME uint F_00ddbde0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddbde0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 1: ;
    return param_2;
  case 2: ;
    return (int)param_2 / 2;
  case 3: ;
    return (int)param_2 / 3;
  case 4: ;
    return param_2 - 2;
  default: ;
    return 0;
  }
}

/* ref: FUN_00ddbe50 */
GEN_FRAME unsigned int F_00ddbe50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xddbe50u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[8];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined2 uVar7;
  int iVar8;
  int iVar9;
  undefined2 uVar10;
  int iVar11;
  int local_4c;
  int local_48;
  int local_44;
  uint local_2c;
  uint local_28;
  uint local_24;
  int local_8;
  
  uVar2 = (*(undefined4 *)&gen_args[1]);
  uVar3 = 0;
  local_2c = 0xffffffff;
  local_28 = 0xffffffff;
  local_24 = 0xffffffff;
  local_4c = -1;
  local_48 = -1;
  local_44 = -1;
  iVar5 = 0;
  bVar1 = false;
  local_8 = 0;
  if (0 < (*(int *)&gen_args[3])) {
    do {
      uVar6 = local_24;
      switch((unsigned int)(uintptr_t)(uVar2)) {
      case 1: ;
        local_2c = uVar3;
        local_28 = uVar3;
        local_24 = uVar3;
        if ((*(int *)&gen_args[0]) != 0) {
          if ((*(int *)&gen_args[2]) == 1) {
            uVar6 = (uint)*(ushort *)((*(int *)&gen_args[0]) + uVar3 * 2);
            local_2c = uVar6;
            local_28 = uVar6;
            local_24 = uVar6;
          }
          else {
            uVar6 = *(uint *)((*(int *)&gen_args[0]) + uVar3 * 4);
            local_2c = uVar6;
            local_28 = uVar6;
            local_24 = uVar6;
          }
        }
        break;
      case 2: ;
        uVar6 = uVar3;
        if ((*(int *)&gen_args[0]) != 0) {
          if ((*(int *)&gen_args[2]) == 1) {
            uVar6 = (uint)*(ushort *)((*(int *)&gen_args[0]) + uVar3 * 2);
          }
          else {
            uVar6 = *(uint *)((*(int *)&gen_args[0]) + uVar3 * 4);
          }
        }
        uVar3 = uVar3 + 1;
        local_2c = uVar6;
        local_28 = uVar3;
        local_24 = uVar3;
        if ((*(int *)&gen_args[0]) != 0) {
          if ((*(int *)&gen_args[2]) == 1) {
            uVar6 = (uint)*(ushort *)((*(int *)&gen_args[0]) + uVar3 * 2);
            local_28 = uVar6;
            local_24 = uVar6;
          }
          else {
            uVar6 = *(uint *)((*(int *)&gen_args[0]) + uVar3 * 4);
            local_28 = uVar6;
            local_24 = uVar6;
          }
        }
        break;
      case 3: ;
switchD_00ddbea3_caseD_3: ;
        uVar6 = uVar3;
        if ((*(int *)&gen_args[0]) != 0) {
          if ((*(int *)&gen_args[2]) == 1) {
            uVar6 = (uint)*(ushort *)((*(int *)&gen_args[0]) + uVar3 * 2);
          }
          else {
            uVar6 = *(uint *)((*(int *)&gen_args[0]) + uVar3 * 4);
          }
        }
        uVar4 = uVar3 + 1;
        if ((*(int *)&gen_args[0]) != 0) {
          if ((*(int *)&gen_args[2]) == 1) {
            uVar4 = (uint)*(ushort *)((*(int *)&gen_args[0]) + uVar4 * 2);
          }
          else {
            uVar4 = *(uint *)((*(int *)&gen_args[0]) + uVar4 * 4);
          }
        }
        uVar3 = uVar3 + 2;
        local_2c = uVar6;
        local_28 = uVar4;
        local_24 = uVar3;
        if ((*(int *)&gen_args[0]) != 0) {
          if ((*(int *)&gen_args[2]) == 1) {
            local_24 = (uint)*(ushort *)((*(int *)&gen_args[0]) + uVar3 * 2);
          }
          else {
            local_24 = *(uint *)((*(int *)&gen_args[0]) + uVar3 * 4);
          }
        }
        break;
      case 4: ;
        if ((int)local_2c < 0) goto switchD_00ddbea3_caseD_3;
        local_2c = local_28;
        local_28 = local_24;
        uVar6 = uVar3;
        if ((*(int *)&gen_args[0]) != 0) {
          if ((*(int *)&gen_args[2]) == 1) {
            uVar6 = (uint)*(ushort *)((*(int *)&gen_args[0]) + uVar3 * 2);
          }
          else {
            uVar6 = *(uint *)((*(int *)&gen_args[0]) + uVar3 * 4);
          }
        }
        uVar3 = uVar3 + 1;
        if (bVar1) {
          local_28 = uVar6;
          uVar6 = local_24;
        }
      default: ;
        goto switchD_00ddbea3_default;
      }
      uVar3 = uVar3 + 1;
      uVar6 = local_24;
switchD_00ddbea3_default: ;
      local_24 = uVar6;
      bVar1 = (bool)(bVar1 ^ 1);
      iVar8 = local_24 + (*(int *)&gen_args[7]);
      iVar11 = local_28 + (*(int *)&gen_args[7]);
      iVar9 = local_2c + (*(int *)&gen_args[7]);
      uVar7 = (undefined2)iVar9;
      uVar10 = (undefined2)iVar11;
      (*(undefined2 *)((char *)&(*(undefined4 *)&gen_args[1]) + 0)) = (undefined2)iVar8;
      switch((unsigned int)(uintptr_t)((*(undefined4 *)&gen_args[5]))) {
      case 1: ;
switchD_00ddbfe3_caseD_1: ;
        if ((*(int *)&gen_args[4]) != 0) {
          if ((*(int *)&gen_args[6]) == 1) {
            *(undefined2 *)((*(int *)&gen_args[4]) + iVar5 * 2) = uVar7;
            iVar5 = iVar5 + 1;
          }
          else {
            *(int *)((*(int *)&gen_args[4]) + iVar5 * 4) = iVar9;
            iVar5 = iVar5 + 1;
          }
        }
        break;
      case 2: ;
        if ((*(int *)&gen_args[4]) != 0) {
          if ((*(int *)&gen_args[6]) == 1) {
            *(undefined2 *)((*(int *)&gen_args[4]) + iVar5 * 2) = uVar7;
            *(undefined2 *)((*(int *)&gen_args[4]) + 2 + iVar5 * 2) = uVar10;
            iVar5 = iVar5 + 2;
          }
          else {
            *(int *)((*(int *)&gen_args[4]) + iVar5 * 4) = iVar9;
            *(int *)((*(int *)&gen_args[4]) + 4 + iVar5 * 4) = iVar11;
            iVar5 = iVar5 + 2;
          }
        }
        break;
      case 3: ;
switchD_00ddbfe3_caseD_3: ;
        if ((*(int *)&gen_args[4]) != 0) {
          if ((*(int *)&gen_args[6]) == 1) {
            *(undefined2 *)((*(int *)&gen_args[4]) + iVar5 * 2) = uVar7;
            *(undefined2 *)((*(int *)&gen_args[4]) + 2 + iVar5 * 2) = uVar10;
            *(undefined2 *)((*(int *)&gen_args[4]) + 4 + iVar5 * 2) = (undefined2)(*(undefined4 *)&gen_args[1]);
          }
          else {
            *(int *)((*(int *)&gen_args[4]) + iVar5 * 4) = iVar9;
            *(int *)((*(int *)&gen_args[4]) + 4 + iVar5 * 4) = iVar11;
            *(int *)((*(int *)&gen_args[4]) + 8 + iVar5 * 4) = iVar8;
          }
          iVar5 = iVar5 + 3;
        }
        break;
      case 4: ;
        if (local_4c < 0) goto switchD_00ddbfe3_caseD_3;
        if (((iVar9 != local_4c) && (iVar9 != local_48)) && (iVar9 != local_44))
        goto switchD_00ddbfe3_caseD_1;
        if (((iVar11 == local_4c) || (iVar11 == local_48)) || (iVar11 == local_44)) {
          if ((*(int *)&gen_args[4]) != 0) {
            if ((*(int *)&gen_args[6]) == 1) {
              *(undefined2 *)((*(int *)&gen_args[4]) + iVar5 * 2) = (undefined2)(*(undefined4 *)&gen_args[1]);
              iVar5 = iVar5 + 1;
            }
            else {
              *(int *)((*(int *)&gen_args[4]) + iVar5 * 4) = iVar8;
              iVar5 = iVar5 + 1;
            }
          }
        }
        else if ((*(int *)&gen_args[4]) != 0) {
          if ((*(int *)&gen_args[6]) == 1) {
            *(undefined2 *)((*(int *)&gen_args[4]) + iVar5 * 2) = uVar10;
            iVar5 = iVar5 + 1;
          }
          else {
            *(int *)((*(int *)&gen_args[4]) + iVar5 * 4) = iVar11;
            iVar5 = iVar5 + 1;
          }
        }
      }
      local_8 = local_8 + 1;
      local_4c = iVar9;
      local_48 = iVar11;
      local_44 = iVar8;
    } while (local_8 < (*(int *)&gen_args[3]));
  }
  return 0;
}

/* ref: FUN_00ddc130 */
GEN_FRAME uint GEN_THISCALL F_00ddc130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xddc130u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  uint uVar2;
  
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_1;
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 <= param_3) {
    iVar1 = param_3;
  }
  *(int *)((int)this + 4) = iVar1;
  if (param_2 == 1) {
    uVar2 = *(uint *)this;
    if (-1 < (int)uVar2) {
      if ((int)uVar2 < 2) {
        *(undefined4 *)this = 1;
        return uVar2;
      }
      if (uVar2 == 2) {
        *(undefined4 *)this = 2;
        return uVar2;
      }
    }
  }
  else {
    if (param_2 == 2) {
      uVar2 = (2 < *(uint *)this) + 2;
      *(uint *)this = uVar2;
      return uVar2;
    }
    uVar2 = param_2 - 4;
    if (uVar2 == 0) {
      uVar2 = *(uint *)this;
      if ((uVar2 == 0) || (uVar2 == 4)) {
        *(undefined4 *)this = 4;
        return uVar2;
      }
    }
  }
  *(undefined4 *)this = 3;
  return uVar2;
}

/* ref: FUN_00ddc1b0 */
GEN_FRAME uint F_00ddc1b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xddc1b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  int iVar1;
  int iVar2;
  short * psVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  uint uVar7;
  
  if (param_1 == 3) {
    iVar2 = param_4[1];
    iVar1 = iVar2 + param_2;
    if ((int)(param_4[2] & 0x3fffffffU) < iVar1) {
      iVar5 = (param_4[2] & 0x3fffffffU) * 2;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
      }
      F_00d95690(param_5,param_4,iVar5,2);
    }
    iVar1 = *param_4;
    param_4[1] = param_4[1] + param_2;
    psVar3 = (short *)0x0;
    if (0 < param_2) {
      do {
        *(short *)(iVar1 + iVar2 * 2 + (int)((int)(uintptr_t)psVar3) * 2) = (short)psVar3 + (short)param_3;
        psVar3 = (short *)((int)psVar3 + 1);
      } while ((int)psVar3 < param_2);
    }
  }
  else {
    psVar3 = (short *)(param_1 - 4);
    if (psVar3 == (short *)0x0) {
      iVar5 = param_4[1];
      iVar2 = param_2 * 3 - 6;
      iVar1 = iVar5 + iVar2;
      if ((int)(param_4[2] & 0x3fffffffU) < iVar1) {
        iVar4 = (param_4[2] & 0x3fffffffU) * 2;
        if (iVar4 <= iVar1) {
          iVar4 = iVar1;
        }
        F_00d95690(param_5,param_4,iVar4,2);
      }
      param_4[1] = param_4[1] + iVar2;
      uVar7 = 2;
      psVar3 = (short *)(*param_4 + iVar5 * 2);
      if (2 < param_2) {
        do {
          sVar6 = (short)param_3 + (short)uVar7;
          *psVar3 = sVar6 - 2;
          if ((uVar7 & 1) == 0) {
            psVar3[1] = sVar6 - 1;
          }
          else {
            psVar3[1] = sVar6;
            sVar6 = sVar6 - 1;
          }
          psVar3[2] = sVar6;
          uVar7 = uVar7 + 1;
          psVar3 = psVar3 + 3;
        } while ((int)uVar7 < param_2);
        return (uint)psVar3;
      }
    }
  }
  return (uint)psVar3;
}

/* ref: FUN_00ddc2b0 */
GEN_FRAME uint F_00ddc2b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xddc2b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  int iVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 == 3) {
    iVar1 = param_4[1];
    iVar5 = iVar1 + param_2;
    if ((int)(param_4[2] & 0x3fffffffU) < iVar5) {
      iVar4 = (param_4[2] & 0x3fffffffU) * 2;
      if (iVar4 <= iVar5) {
        iVar4 = iVar5;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516ac),param_4,iVar4,4);
    }
    iVar5 = *param_4;
    param_4[1] = param_4[1] + param_2;
    piVar2 = (int *)0x0;
    if (0 < param_2) {
      do {
        *(uint *)(iVar5 + iVar1 * 4 + (int)((int)(uintptr_t)piVar2) * 4) = param_3 + (int)piVar2 & 0xffff;
        piVar2 = (int *)((int)piVar2 + 1);
      } while ((int)piVar2 < param_2);
    }
  }
  else {
    piVar2 = (int *)(param_1 - 4);
    if (piVar2 == (int *)0x0) {
      iVar4 = param_4[1];
      iVar1 = param_2 * 3 - 6;
      iVar5 = iVar4 + iVar1;
      if ((int)(param_4[2] & 0x3fffffffU) < iVar5) {
        iVar3 = (param_4[2] & 0x3fffffffU) * 2;
        if (iVar3 <= iVar5) {
          iVar3 = iVar5;
        }
        F_00d95690(&REFG(undefined * PTR32, 0x13516ac),param_4,iVar3,4);
      }
      param_4[1] = param_4[1] + iVar1;
      piVar2 = (int *)(*param_4 + iVar4 * 4);
      if (2 < param_2) {
        iVar5 = param_3 + 1;
        do {
          *piVar2 = iVar5 - 1;
          iVar1 = iVar5 + 1;
          if (((1 - param_3) + iVar5 & 1U) == 0) {
            piVar2[1] = iVar5;
            piVar2[2] = iVar1;
          }
          else {
            piVar2[1] = iVar1;
            piVar2[2] = iVar5;
          }
          piVar2 = piVar2 + 3;
          iVar5 = iVar1;
        } while ((1 - param_3) + iVar1 < param_2);
        return (uint)piVar2;
      }
    }
  }
  return (uint)piVar2;
}

/* ref: FUN_00ddc3b0 */
GEN_FRAME uint F_00ddc3b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xddc3b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  short * param_2 = (short *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  short * psVar1;
  short * psVar2;
  int iVar3;
  int iVar4;
  short * psVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  short sVar9;
  short sVar10;
  
  sVar10 = (short)param_4;
  if (param_1 == 3) {
    iVar6 = param_5[1];
    iVar8 = iVar6 + param_3;
    if ((int)(param_5[2] & 0x3fffffffU) < iVar8) {
      iVar4 = (param_5[2] & 0x3fffffffU) * 2;
      if (iVar4 <= iVar8) {
        iVar4 = iVar8;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516ac),param_5,iVar4,2);
    }
    param_5[1] = param_5[1] + param_3;
    psVar2 = (short *)(*param_5 + iVar6 * 2);
    if (param_4 == 0) {
      uVar7 = F_00da1010(psVar2,param_2,param_3 * 2);
      return uVar7;
    }
    if (0 < param_3) {
      iVar6 = (int)param_2 - (int)psVar2;
      iVar8 = param_3;
      do {
        *psVar2 = *(short *)(iVar6 + (int)psVar2) + sVar10;
        psVar2 = psVar2 + 1;
        iVar8 = iVar8 - 1;
      } while (iVar8 != 0);
    }
  }
  else {
    psVar2 = (short *)(param_1 - 4);
    if (psVar2 == (short *)0x0) {
      iVar4 = param_5[1];
      iVar6 = param_3 * 3 - 6;
      iVar8 = iVar4 + iVar6;
      if ((int)(param_5[2] & 0x3fffffffU) < iVar8) {
        iVar3 = (param_5[2] & 0x3fffffffU) * 2;
        if (iVar3 <= iVar8) {
          iVar3 = iVar8;
        }
        F_00d95690(&REFG(undefined * PTR32, 0x13516ac),param_5,iVar3,2);
      }
      param_5[1] = param_5[1] + iVar6;
      uVar7 = 2;
      psVar2 = (short *)(*param_5 + iVar4 * 2);
      psVar1 = param_2;
      if (2 < param_3) {
        do {
          psVar5 = psVar1 + 1;
          *psVar2 = *psVar1 + sVar10;
          if ((uVar7 & 1) == 0) {
            psVar2[1] = *psVar5 + sVar10;
            sVar9 = psVar1[2];
          }
          else {
            psVar2[1] = psVar1[2] + sVar10;
            sVar9 = *psVar5;
          }
          psVar2[2] = sVar9 + sVar10;
          uVar7 = uVar7 + 1;
          psVar2 = psVar2 + 3;
          psVar1 = psVar5;
        } while ((int)uVar7 < param_3);
        return (uint)psVar2;
      }
    }
  }
  return (uint)psVar2;
}

/* ref: FUN_00ddc4e0 */
GEN_FRAME uint F_00ddc4e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xddc4e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  int * piVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  if (param_1 == 3) {
    iVar6 = param_5[1];
    iVar8 = iVar6 + param_3;
    if ((int)(param_5[2] & 0x3fffffffU) < iVar8) {
      iVar4 = (param_5[2] & 0x3fffffffU) * 2;
      if (iVar4 <= iVar8) {
        iVar4 = iVar8;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516ac),param_5,iVar4,4);
    }
    param_5[1] = param_5[1] + param_3;
    piVar2 = (int *)(*param_5 + iVar6 * 4);
    if (param_4 == 0) {
      uVar7 = F_00da1010(piVar2,param_2,param_3 * 4);
      return uVar7;
    }
    if (0 < param_3) {
      iVar6 = (int)param_2 - (int)piVar2;
      iVar8 = param_3;
      do {
        *piVar2 = *(int *)(iVar6 + (int)piVar2) + param_4;
        piVar2 = piVar2 + 1;
        iVar8 = iVar8 - 1;
      } while (iVar8 != 0);
    }
  }
  else {
    piVar2 = (int *)(param_1 - 4);
    if (piVar2 == (int *)0x0) {
      iVar4 = param_5[1];
      iVar6 = param_3 * 3 - 6;
      iVar8 = iVar4 + iVar6;
      if ((int)(param_5[2] & 0x3fffffffU) < iVar8) {
        iVar3 = (param_5[2] & 0x3fffffffU) * 2;
        if (iVar3 <= iVar8) {
          iVar3 = iVar8;
        }
        F_00d95690(&REFG(undefined * PTR32, 0x13516ac),param_5,iVar3,4);
      }
      param_5[1] = param_5[1] + iVar6;
      uVar7 = 2;
      piVar2 = (int *)(*param_5 + iVar4 * 4);
      piVar1 = param_2;
      if (2 < param_3) {
        do {
          piVar5 = piVar1 + 1;
          *piVar2 = *piVar1 + param_4;
          if ((uVar7 & 1) == 0) {
            piVar2[1] = *piVar5 + param_4;
            iVar8 = piVar1[2];
          }
          else {
            piVar2[1] = piVar1[2] + param_4;
            iVar8 = *piVar5;
          }
          piVar2[2] = iVar8 + param_4;
          uVar7 = uVar7 + 1;
          piVar2 = piVar2 + 3;
          piVar1 = piVar5;
        } while ((int)uVar7 < param_3);
        return (uint)piVar2;
      }
    }
  }
  return (uint)piVar2;
}

/* ref: FUN_00ddc610 */
GEN_FRAME uint F_00ddc610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddc610u, gen_a0, gen_a1, 0u, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  uint uVar4;
  LPVOID pvVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  uVar4 = (uint)param_1[0x14];
  if (uVar4 == 0) {
    uVar4 = F_00ddc1b0((uint)*param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                         param_2,&REFG(undefined * PTR32, 0x13516ac));
  }
  else if (uVar4 == 1) {
    uVar4 = (uint)*param_1;
    if (uVar4 - 3 < 2) {
      uVar4 = F_00ddc3b0(uVar4,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 8),0,
                           param_2);
      return uVar4;
    }
  }
  else {
    uVar4 = uVar4 - 2;
    if ((uVar4 == 0) && (uVar4 = *param_1 - 3, uVar4 < 2)) {
      uVar4 = *(uint *)(param_1 + 8);
      ((uint *)(gen_frame + 0x8))[0] = 0;
      ((uint *)(gen_frame + 0x8))[1] = 0;
      ((uint *)(gen_frame + 0x8))[2] = 0x80000000;
      (*(uint *)(gen_frame + 0x18)) = uVar4;
      if (uVar4 == 0) {
        uVar7 = 0;
      }
      else {
        pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
        uVar7 = *(uint *)((int)pvVar5 + 0xc);
        uVar6 = uVar4 * 4 + 0x7f & 0xffffff80;
        if ((*(int *)((int)pvVar5 + 8) < (int)uVar6) ||
           (*(uint *)((int)pvVar5 + 0x10) < uVar7 + uVar6)) {
          uVar7 = F_00d94390(pvVar5 GEN_EDX_ARG,uVar6);
        }
        else {
          *(uint *)((int)pvVar5 + 0xc) = uVar7 + uVar6;
        }
      }
      uVar3 = *(undefined4 *)(param_1 + 8);
      bVar1 = *param_1;
      ((uint *)(gen_frame + 0x8))[0] = uVar7;
      ((uint *)(gen_frame + 0x8))[3] = uVar7;
      ((uint *)(gen_frame + 0x8))[2] = uVar4 | 0x80000000;
      F_00ddc4e0((uint)bVar1,*(undefined4 *)(param_1 + 0x18),uVar3,0,((uint *)(gen_frame + 0x8)));
      if (0 < *(int *)(param_1 + 8)) {
        iVar8 = 0;
        do {
          uVar2 = *(undefined2 *)(((uint *)(gen_frame + 0x8))[0] + iVar8 * 4);
          if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
            F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_2,2);
          }
          *(undefined2 *)(*param_2 + param_2[1] * 2) = uVar2;
          param_2[1] = param_2[1] + 1;
          iVar8 = iVar8 + 1;
        } while (iVar8 < *(int *)(param_1 + 8));
      }
      uVar7 = (*(uint *)(gen_frame + 0x18));
      uVar4 = ((uint *)(gen_frame + 0x8))[3];
      if (((uint *)(gen_frame + 0x8))[3] == ((uint *)(gen_frame + 0x8))[0]) {
        ((uint *)(gen_frame + 0x8))[1] = 0;
      }
      pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      uVar7 = uVar7 * 4 + 0x7f & 0xffffff80;
      if (((*(int *)((int)pvVar5 + 8) < (int)uVar7) ||
          (uVar7 + uVar4 != *(int *)((int)pvVar5 + 0xc))) ||
         (*(uint *)((int)pvVar5 + 0x14) == uVar4)) {
        F_00d945c0(pvVar5 GEN_EDX_ARG,uVar4,uVar7);
      }
      else {
        *(uint *)((int)pvVar5 + 0xc) = uVar4;
      }
      ((uint *)(gen_frame + 0x8))[1] = 0;
      uVar4 = ((uint *)(gen_frame + 0x8))[2];
      if (-1 < (int)((uint *)(gen_frame + 0x8))[2]) {
        uVar4 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                          (&REFG(undefined * PTR32, 0x13516ac),((uint *)(gen_frame + 0x8))[0],((uint *)(gen_frame + 0x8))[2] * 4);
        return uVar4;
      }
    }
  }
  return uVar4;
}

/* ref: FUN_00ddc7e0 */
GEN_FRAME uint F_00ddc7e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddc7e0u, gen_a0, gen_a1, 0u, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  ushort uVar2;
  undefined4 uVar3;
  uint uVar4;
  LPVOID pvVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  uVar4 = (uint)param_1[0x14];
  if (uVar4 == 0) {
    uVar4 = F_00ddc2b0((uint)*param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                         param_2);
  }
  else if (uVar4 == 1) {
    uVar4 = *param_1 - 3;
    if (uVar4 < 2) {
      uVar4 = *(uint *)(param_1 + 8);
      ((uint *)(gen_frame + 0x8))[0] = 0;
      ((uint *)(gen_frame + 0x8))[1] = 0;
      ((uint *)(gen_frame + 0x8))[2] = 0x80000000;
      (*(uint *)(gen_frame + 0x18)) = uVar4;
      if (uVar4 == 0) {
        uVar7 = 0;
      }
      else {
        pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
        uVar7 = *(uint *)((int)pvVar5 + 0xc);
        uVar6 = uVar4 * 2 + 0x7f & 0xffffff80;
        if ((*(int *)((int)pvVar5 + 8) < (int)uVar6) ||
           (*(uint *)((int)pvVar5 + 0x10) < uVar7 + uVar6)) {
          uVar7 = F_00d94390(pvVar5 GEN_EDX_ARG,uVar6);
        }
        else {
          *(uint *)((int)pvVar5 + 0xc) = uVar7 + uVar6;
        }
      }
      uVar3 = *(undefined4 *)(param_1 + 8);
      bVar1 = *param_1;
      ((uint *)(gen_frame + 0x8))[0] = uVar7;
      ((uint *)(gen_frame + 0x8))[3] = uVar7;
      ((uint *)(gen_frame + 0x8))[2] = uVar4 | 0x80000000;
      F_00ddc3b0((uint)bVar1,*(undefined4 *)(param_1 + 0x18),uVar3,0,((uint *)(gen_frame + 0x8)));
      iVar8 = 0;
      if (0 < *(int *)(param_1 + 8)) {
        do {
          uVar2 = *(ushort *)(((uint *)(gen_frame + 0x8))[0] + iVar8 * 2);
          if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
            F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_2,4);
          }
          *(uint *)(*param_2 + param_2[1] * 4) = (uint)uVar2;
          param_2[1] = param_2[1] + 1;
          iVar8 = iVar8 + 1;
        } while (iVar8 < *(int *)(param_1 + 8));
      }
      uVar7 = (*(uint *)(gen_frame + 0x18));
      uVar4 = ((uint *)(gen_frame + 0x8))[3];
      if (((uint *)(gen_frame + 0x8))[3] == ((uint *)(gen_frame + 0x8))[0]) {
        ((uint *)(gen_frame + 0x8))[1] = 0;
      }
      pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      uVar7 = uVar7 * 2 + 0x7f & 0xffffff80;
      if (((*(int *)((int)pvVar5 + 8) < (int)uVar7) ||
          (uVar7 + uVar4 != *(int *)((int)pvVar5 + 0xc))) ||
         (*(uint *)((int)pvVar5 + 0x14) == uVar4)) {
        F_00d945c0(pvVar5 GEN_EDX_ARG,uVar4,uVar7);
      }
      else {
        *(uint *)((int)pvVar5 + 0xc) = uVar4;
      }
      ((uint *)(gen_frame + 0x8))[1] = 0;
      uVar4 = ((uint *)(gen_frame + 0x8))[2];
      if (-1 < (int)((uint *)(gen_frame + 0x8))[2]) {
        uVar4 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                          (&REFG(undefined * PTR32, 0x13516ac),((uint *)(gen_frame + 0x8))[0],(((uint *)(gen_frame + 0x8))[2] & 0x3fffffff) * 2);
        return uVar4;
      }
    }
  }
  else {
    uVar4 = uVar4 - 2;
    if ((uVar4 == 0) && (uVar4 = (uint)*param_1, uVar4 - 3 < 2)) {
      uVar4 = F_00ddc4e0(uVar4,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 8),0,
                           param_2);
      return uVar4;
    }
  }
  return uVar4;
}

/* ref: FUN_00ddc9a0 */
GEN_FRAME uint F_00ddc9a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xddc9a0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG,param_2,1,((undefined1 *)(gen_frame + 0x4)));
  F_00ddc610(((undefined1 *)(gen_frame + 0x4)),param_3);
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x14))(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: FUN_00ddc9e0 */
GEN_FRAME uint GEN_THISCALL F_00ddc9e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xddc9e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)this = 0xffffffff;
  *(undefined4 *)((int)this + 4) = 0xffffffff;
  *(undefined4 *)((int)this + 8) = 0xffffffff;
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x10) = param_3;
  *(undefined4 *)((int)this + 0x1c) = param_1;
  return (uint)this;
}

/* ref: FUN_00ddca40 */
GEN_FRAME uint GEN_THISCALL F_00ddca40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddca40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x1c);
  if (uVar1 != 0) {
    if (*(int *)((int)this + 0x10) == 1) {
      *((undefined2 *)GEN_TOP((uVar1 + *(int *)((int)this + 0x14) * 2))) = (undefined2)param_1;
      *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + 1;
      return uVar1;
    }
    *((undefined4 *)GEN_TOP((uVar1 + *(int *)((int)this + 0x14) * 4))) = param_1;
    *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + 1;
  }
  return uVar1;
}

/* ref: FUN_00ddcc30 */
GEN_FRAME unsigned int GEN_THISCALL F_00ddcc30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xddcc30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  
  uVar2 = (undefined2)(*(int *)&gen_a1);
  switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 0xc))) {
  case 1: ;
switchD_00ddcc51_caseD_1: ;
    iVar1 = *(int *)((int)this + 0x1c);
    if (iVar1 == 0) goto switchD_00ddcc51_default;
    if (*(int *)((int)this + 0x10) == 1) {
      *((undefined2 *)GEN_TOP((iVar1 + *(int *)((int)this + 0x14) * 2))) = uVar2;
    }
    else {
      *((int *)GEN_TOP((iVar1 + *(int *)((int)this + 0x14) * 4))) = (*(int *)&gen_a1);
    }
    break;
  case 2: ;
    iVar1 = *(int *)((int)this + 0x1c);
    if (iVar1 != 0) {
      if (*(int *)((int)this + 0x10) == 1) {
        *((undefined2 *)GEN_TOP((iVar1 + *(int *)((int)this + 0x14) * 2))) = uVar2;
      }
      else {
        *((int *)GEN_TOP((iVar1 + *(int *)((int)this + 0x14) * 4))) = (*(int *)&gen_a1);
      }
      *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + 1;
    }
LAB_00ddcc97: ;
    iVar1 = *(int *)((int)this + 0x1c);
    if (iVar1 == 0) goto switchD_00ddcc51_default;
    if (*(int *)((int)this + 0x10) == 1) {
      *((short *)GEN_TOP((iVar1 + *(int *)((int)this + 0x14) * 2))) = (short)(*(int *)&gen_a2);
    }
    else {
      *((int *)GEN_TOP((iVar1 + *(int *)((int)this + 0x14) * 4))) = (*(int *)&gen_a2);
    }
    break;
  case 3: ;
switchD_00ddcc51_caseD_3: ;
    iVar1 = *(int *)((int)this + 0x1c);
    if (iVar1 != 0) {
      if (*(int *)((int)this + 0x10) == 1) {
        *((undefined2 *)GEN_TOP((iVar1 + *(int *)((int)this + 0x14) * 2))) = uVar2;
      }
      else {
        *((int *)GEN_TOP((iVar1 + *(int *)((int)this + 0x14) * 4))) = (*(int *)&gen_a1);
      }
      *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + 1;
    }
    iVar1 = *(int *)((int)this + 0x1c);
    if (iVar1 != 0) {
      if (*(int *)((int)this + 0x10) == 1) {
        *((short *)GEN_TOP((iVar1 + *(int *)((int)this + 0x14) * 2))) = (short)(*(int *)&gen_a2);
      }
      else {
        *((int *)GEN_TOP((iVar1 + *(int *)((int)this + 0x14) * 4))) = (*(int *)&gen_a2);
      }
      *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + 1;
    }
    iVar1 = *(int *)((int)this + 0x1c);
    if (iVar1 == 0) goto switchD_00ddcc51_default;
    iVar3 = *(int *)((int)this + 0x14);
    if (*(int *)((int)this + 0x10) != 1) goto LAB_00ddcd4c;
    *(undefined2 *)(iVar1 + iVar3 * 2) = (undefined2)param_3;
    break;
  case 4: ;
    iVar1 = *(int *)this;
    if (iVar1 < 0) goto switchD_00ddcc51_caseD_3;
    if ((((*(int *)&gen_a1) != iVar1) && ((*(int *)&gen_a1) != *(int *)((int)this + 4))) &&
       ((*(int *)&gen_a1) != *(int *)((int)this + 8))) goto switchD_00ddcc51_caseD_1;
    if ((((*(int *)&gen_a2) != iVar1) && ((*(int *)&gen_a2) != *(int *)((int)this + 4))) &&
       ((*(int *)&gen_a2) != *(int *)((int)this + 8))) goto LAB_00ddcc97;
    iVar1 = *(int *)((int)this + 0x1c);
    if (iVar1 == 0) goto switchD_00ddcc51_default;
    iVar3 = *(int *)((int)this + 0x14);
    if (*(int *)((int)this + 0x10) == 1) {
      *(undefined2 *)(iVar1 + iVar3 * 2) = (undefined2)param_3;
      break;
    }
LAB_00ddcd4c: ;
    *(undefined4 *)(iVar1 + iVar3 * 4) = param_3;
    break;
  default: ;
    goto switchD_00ddcc51_default;
  }
  *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + 1;
switchD_00ddcc51_default: ;
  *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 1;
  *(int *)((int)this + 4) = (*(int *)&gen_a2);
  *(int *)this = (*(int *)&gen_a1);
  *(undefined4 *)((int)this + 8) = param_3;
  return 0;
}

/* ref: FUN_00ddcd80 */
GEN_FRAME uint GEN_THISCALL F_00ddcd80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddcd80u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = in_ecx[3] != *in_ecx;
  return param_2;
}

/* ref: FUN_00ddcda0 */
GEN_FRAME uint GEN_THISCALL F_00ddcda0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddcda0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = in_ecx[3] != *in_ecx;
  return param_2;
}

/* ref: FUN_00ddcdc0 */
GEN_FRAME uint GEN_THISCALL F_00ddcdc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddcdc0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 2;
}

/* ref: FUN_00ddcdd0 */
GEN_FRAME uint F_00ddcdd0(unsigned int gen_a0)
{
  GEN_ENTER(0xddcdd0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  LPVOID this;
  uint uVar2;
  uint uVar3;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = *(uint *)((int)this + 0xc);
  uVar3 = param_1 * 4 + 0x7fU & 0xffffff80;
  uVar2 = uVar1 + uVar3;
  if (((int)uVar3 <= *(int *)((int)this + 8)) && (uVar2 <= *(uint *)((int)this + 0x10))) {
    *(uint *)((int)this + 0xc) = uVar2;
    return uVar1;
  }
  uVar2 = F_00d94390(this GEN_EDX_ARG,uVar3);
  return uVar2;
}

/* ref: FUN_00ddce10 */
GEN_FRAME uint F_00ddce10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddce10u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  LPVOID this;
  uint uVar1;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = param_2 * 4 + 0x7fU & 0xffffff80;
  if ((((int)uVar1 <= *(int *)((int)this + 8)) && (uVar1 + param_1 == *(int *)((int)this + 0xc))) &&
     (*(int *)((int)this + 0x14) != param_1)) {
    *(int *)((int)this + 0xc) = param_1;
    return (uint)this;
  }
  uVar1 = F_00d945c0(this GEN_EDX_ARG,param_1,uVar1);
  return uVar1;
}

/* ref: FUN_00ddce60 */
GEN_FRAME uint F_00ddce60(unsigned int gen_a0)
{
  GEN_ENTER(0xddce60u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  LPVOID this;
  uint uVar2;
  uint uVar3;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = *(uint *)((int)this + 0xc);
  uVar3 = param_1 * 2 + 0x7fU & 0xffffff80;
  uVar2 = uVar1 + uVar3;
  if (((int)uVar3 <= *(int *)((int)this + 8)) && (uVar2 <= *(uint *)((int)this + 0x10))) {
    *(uint *)((int)this + 0xc) = uVar2;
    return uVar1;
  }
  uVar2 = F_00d94390(this GEN_EDX_ARG,uVar3);
  return uVar2;
}

/* ref: FUN_00ddcea0 */
GEN_FRAME uint F_00ddcea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddcea0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  LPVOID this;
  uint uVar1;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = param_2 * 2 + 0x7fU & 0xffffff80;
  if ((((int)uVar1 <= *(int *)((int)this + 8)) && (uVar1 + param_1 == *(int *)((int)this + 0xc))) &&
     (*(int *)((int)this + 0x14) != param_1)) {
    *(int *)((int)this + 0xc) = param_1;
    return (uint)this;
  }
  uVar1 = F_00d945c0(this GEN_EDX_ARG,param_1,uVar1);
  return uVar1;
}

/* ref: FUN_00ddcef0 */
GEN_FRAME uint GEN_THISCALL F_00ddcef0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddcef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  LPVOID this_00;
  uint uVar2;
  
  uVar1 = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(uint *)((int)this + 0x10) = param_1;
  if (param_1 != 0) {
    this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar1 = *(uint *)((int)this_00 + 0xc);
    uVar2 = param_1 * 4 + 0x7f & 0xffffff80;
    if ((*(int *)((int)this_00 + 8) < (int)uVar2) ||
       (*(uint *)((int)this_00 + 0x10) < uVar1 + uVar2)) {
      uVar1 = F_00d94390(this_00 GEN_EDX_ARG,uVar2);
    }
    else {
      *(uint *)((int)this_00 + 0xc) = uVar1 + uVar2;
    }
  }
  *(uint *)((int)this + 8) = param_1 | 0x80000000;
  *(uint *)this = uVar1;
  *(uint *)((int)this + 0xc) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ddcf60 */
GEN_NOFRAME uint GEN_THISCALL F_00ddcf60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xddcf60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  LPVOID this_00;
  uint uVar3;
  
  iVar1 = *(int *)((int)this + 0xc);
  if (iVar1 == *(int *)this) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  iVar2 = *(int *)((int)this + 0x10);
  this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar3 = iVar2 * 4 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)this_00 + 8) < (int)uVar3) || (uVar3 + iVar1 != *(int *)((int)this_00 + 0xc)))
     || (*(int *)((int)this_00 + 0x14) == iVar1)) {
    F_00d945c0(this_00 GEN_EDX_ARG,iVar1,uVar3);
  }
  else {
    *(int *)((int)this_00 + 0xc) = iVar1;
  }
  uVar3 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar3 & 0x80000000) == 0) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar3 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar3;
}

/* ref: FUN_00ddcff0 */
GEN_FRAME uint GEN_THISCALL F_00ddcff0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddcff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  LPVOID this_00;
  uint uVar2;
  
  uVar1 = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(uint *)((int)this + 0x10) = param_1;
  if (param_1 != 0) {
    this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar1 = *(uint *)((int)this_00 + 0xc);
    uVar2 = param_1 * 2 + 0x7f & 0xffffff80;
    if ((*(int *)((int)this_00 + 8) < (int)uVar2) ||
       (*(uint *)((int)this_00 + 0x10) < uVar1 + uVar2)) {
      uVar1 = F_00d94390(this_00 GEN_EDX_ARG,uVar2);
    }
    else {
      *(uint *)((int)this_00 + 0xc) = uVar1 + uVar2;
    }
  }
  *(uint *)((int)this + 8) = param_1 | 0x80000000;
  *(uint *)this = uVar1;
  *(uint *)((int)this + 0xc) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ddd060 */
GEN_NOFRAME uint GEN_THISCALL F_00ddd060(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xddd060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  LPVOID this_00;
  uint uVar3;
  
  iVar1 = *(int *)((int)this + 0xc);
  if (iVar1 == *(int *)this) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  iVar2 = *(int *)((int)this + 0x10);
  this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar3 = iVar2 * 2 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)this_00 + 8) < (int)uVar3) || (uVar3 + iVar1 != *(int *)((int)this_00 + 0xc)))
     || (*(int *)((int)this_00 + 0x14) == iVar1)) {
    F_00d945c0(this_00 GEN_EDX_ARG,iVar1,uVar3);
  }
  else {
    *(int *)((int)this_00 + 0xc) = iVar1;
  }
  uVar3 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar3 & 0x80000000) == 0) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar3 & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar3;
}

/* ref: FUN_00ddd100 */
GEN_NOFRAME uint F_00ddd100(void)
{
  GEN_ENTER(0xddd100u, 0u, 0u, 0u, 0u);
  __time64_t _Var1;
  
  _Var1 = F_00c4b7c2((__time64_t *)0x0);
  return (uint)_Var1;
}

/* ref: FUN_00ddd110 */
GEN_FRAME uint F_00ddd110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddd110u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00ddd130 */
GEN_NOFRAME unsigned int F_00ddd130(void)
{
  GEN_ENTER(0xddd130u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00ddd150 */
GEN_FRAME unsigned int F_00ddd150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddd150u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != 0) {
    F_00de37f0(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00ddd170 */
GEN_FRAME uint F_00ddd170(unsigned int gen_a0)
{
  GEN_ENTER(0xddd170u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*param_1,uVar1 << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00ddd1e0 */
GEN_FRAME uint GEN_THISCALL F_00ddd1e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xddd1e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 << 4);
  return uVar1;
}

/* ref: FUN_00ddd210 */
GEN_FRAME unsigned int F_00ddd210(unsigned int gen_a0)
{
  GEN_ENTER(0xddd210u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,0xc);
  }
  return;
}

/* ref: FUN_00ddd250 */
GEN_FRAME uint GEN_THISCALL F_00ddd250(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddd250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00ddd290 */
GEN_NOFRAME uint GEN_THISCALL F_00ddd290(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xddd290u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00ddd2d0 */
GEN_NOFRAME uint GEN_THISCALL F_00ddd2d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xddd2d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00ddd310 */
GEN_NOFRAME uint GEN_THISCALL F_00ddd310(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xddd310u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00ddd350 */
GEN_FRAME uint GEN_THISCALL F_00ddd350(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddd350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = *(int *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,iVar1 << 4)
    ;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 8) = 0x80000000;
  if ((param_1 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar2 + 0x2c) GEN_EDX_ARG,this,0xc);
  }
  return (uint)this;
}

/* ref: FUN_00ddd3c0 */
GEN_FRAME uint F_00ddd3c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddd3c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00ddd3d0 */
GEN_FRAME uint F_00ddd3d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddd3d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00ddd400 */
GEN_FRAME unsigned int F_00ddd400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddd400u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != 0) {
    F_00de3cd0(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00ddd420 */
GEN_FRAME uint F_00ddd420(unsigned int gen_a0)
{
  GEN_ENTER(0xddd420u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ddd430 */
GEN_NOFRAME uint F_00ddd430(void)
{
  GEN_ENTER(0xddd430u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x80];
  
  F_00de3cd0(((uint *)(gen_frame + 0x0)) GEN_EDX_ARG,0);
  return ((uint *)(gen_frame + 0x0))[0];
}

/* ref: FUN_00ddd460 */
GEN_NOFRAME unsigned int F_00ddd460(void)
{
  GEN_ENTER(0xddd460u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00ddd470 */
GEN_FRAME uint F_00ddd470(unsigned int gen_a0)
{
  GEN_ENTER(0xddd470u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00ddd4c0(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00ddd480 */
GEN_FRAME unsigned int F_00ddd480(unsigned int gen_a0)
{
  GEN_ENTER(0xddd480u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,0x54);
  }
  return;
}

/* ref: FUN_00ddd4c0 */
GEN_NOFRAME uint GEN_THISCALL F_00ddd4c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xddd4c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x38);
  *(undefined4 *)((int)this + 0x34) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x30),uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x38) = 0x80000000;
  uVar1 = *(uint *)((int)this + 0x2c);
  *(undefined4 *)((int)this + 0x28) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x24),(uVar1 & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0x80000000;
  uVar1 = *(uint *)((int)this + 0x20);
  *(undefined4 *)((int)this + 0x1c) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x18),uVar1 * 4);
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0x80000000;
  uVar1 = *(uint *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x10) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0xc),uVar1 * 4);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 4);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 8) = 0x80000000;
  return uVar1;
}

/* ref: FUN_00ddd5b0 */
GEN_FRAME uint GEN_THISCALL F_00ddd5b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddd5b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00ddd4c0(this GEN_EDX_FWD);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,0x54);
  }
  return (uint)this;
}

/* ref: FUN_00ddd5f0 */
GEN_FRAME uint F_00ddd5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddd5f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00ddd600 */
GEN_FRAME uint F_00ddd600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddd600u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00ddd610 */
GEN_FRAME uint GEN_THISCALL F_00ddd610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddd610u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  F_00d91350(in_ecx + 4 GEN_EDX_FWD,param_2);
  return in_ecx;
}

/* ref: FUN_00ddd640 */
GEN_FRAME uint F_00ddd640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddd640u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_00d91350(param_1 + 4 GEN_EDX_ARG,param_2);
  }
  return uVar1;
}

/* ref: FUN_00ddd670 */
GEN_FRAME uint F_00ddd670(unsigned int gen_a0)
{
  GEN_ENTER(0xddd670u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ddd680 */
GEN_FRAME uint F_00ddd680(unsigned int gen_a0)
{
  GEN_ENTER(0xddd680u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00d91510((undefined *)(param_1 + 4) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00ddd690 */
GEN_FRAME unsigned int F_00ddd690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddd690u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x1149c04));
    F_00d91350(param_1 + 5 GEN_EDX_ARG,param_2);
    F_00d91350(param_1 + 0x10 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00ddd6c0 */
GEN_NOFRAME uint F_00ddd6c0(void)
{
  GEN_ENTER(0xddd6c0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x50];
  
  F_00d91350(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,0);
  F_00d91350(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG,0);
  return 0x1149c04;
}

/* ref: FUN_00ddd790 */
GEN_FRAME uint GEN_THISCALL F_00ddd790(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xddd790u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00ddd7c0 */
GEN_FRAME uint GEN_THISCALL F_00ddd7c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xddd7c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 << 4);
  return uVar1;
}

/* ref: FUN_00ddd7f0 */
GEN_FRAME uint GEN_THISCALL F_00ddd7f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xddd7f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00ddd820 */
GEN_FRAME uint GEN_THISCALL F_00ddd820(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xddd820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00ddd840 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00ddd840(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xddd840u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00ddd860 */
GEN_FRAME unsigned int F_00ddd860(unsigned int gen_a0)
{
  GEN_ENTER(0xddd860u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,8);
  }
  return;
}

/* ref: FUN_00ddd890 */
GEN_FRAME unsigned int F_00ddd890(unsigned int gen_a0)
{
  GEN_ENTER(0xddd890u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,0x10);
  }
  return;
}

/* ref: FUN_00ddd8c0 */
GEN_FRAME unsigned int F_00ddd8c0(unsigned int gen_a0)
{
  GEN_ENTER(0xddd8c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,8);
  }
  return;
}

/* ref: FUN_00ddd8f0 */
GEN_FRAME uint GEN_THISCALL F_00ddd8f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddd8f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d91510((undefined *)((int)this + 4) GEN_EDX_FWD);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,8);
  }
  return (uint)this;
}

/* ref: FUN_00ddd960 */
GEN_FRAME unsigned int F_00ddd960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddd960u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  undefined * this;
  
  iVar1 = param_2 - 1;
  if (-1 < iVar1) {
    this = (undefined *)(param_1 + 4 + iVar1 * 8);
    do {
      F_00d91510(this GEN_EDX_ARG);
      this = (undefined *)((int)this - 8);
      iVar1 = iVar1 - 1;
    } while (-1 < iVar1);
  }
  return;
}

/* ref: FUN_00ddd990 */
GEN_NOFRAME uint GEN_THISCALL F_00ddd990(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xddd990u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_FWD);
  }
  *(undefined4 *)((int)this + 4) = 0;
  uVar1 = F_00d91510(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00ddd9b0 */
GEN_FRAME unsigned int F_00ddd9b0(unsigned int gen_a0)
{
  GEN_ENTER(0xddd9b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,4);
  }
  return;
}

/* ref: FUN_00ddd9e0 */
GEN_NOFRAME uint GEN_THISCALL F_00ddd9e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xddd9e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  uVar1 = *(uint *)this;
  iVar2 = *(int *)((int)this + 4) - 1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(uVar1 + 4 + iVar2 * 8);
    do {
      uVar1 = F_00d91510(this_00 GEN_EDX_FWD);
      this_00 = (undefined *)((int)this_00 - 8);
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  *(undefined4 *)((int)this + 4) = 0;
  return uVar1;
}

/* ref: FUN_00ddda10 */
GEN_FRAME uint GEN_THISCALL F_00ddda10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddda10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_FWD);
  }
  *(undefined4 *)((int)this + 4) = 0;
  F_00d91510(this GEN_EDX_ARG);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,8);
  }
  return (uint)this;
}

/* ref: FUN_00ddda60 */
GEN_FRAME uint GEN_THISCALL F_00ddda60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddda60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,4);
  }
  return (uint)this;
}

/* ref: FUN_00dddaa0 */
GEN_FRAME uint GEN_THISCALL F_00dddaa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdddaa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) - 1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + 4 + iVar2 * 8);
    do {
      F_00d91510(this_00 GEN_EDX_FWD);
      this_00 = (undefined *)((int)this_00 - 8);
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dddb00 */
GEN_FRAME unsigned int F_00dddb00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdddb00u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  iVar2 = param_2 - 1;
  if (-1 < iVar2) {
    puVar1 = (undefined4 *)(param_1 + 4 + iVar2 * 8);
    do {
      if ((undefined *)*puVar1 != (undefined *)0x0) {
        F_00d91a80((undefined *)*puVar1 GEN_EDX_ARG);
      }
      *puVar1 = 0;
      F_00d91510(puVar1 - 1 GEN_EDX_ARG);
      puVar1 = puVar1 - 2;
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  return;
}

/* ref: FUN_00dddb40 */
GEN_FRAME unsigned int F_00dddb40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdddb40u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 - 1;
  while (-1 < iVar1) {
    this = *(undefined * PTR32 *)(param_1 + iVar1 * 4);
    if (this != (undefined *)0x0) {
      F_00d91a80(this GEN_EDX_ARG);
    }
    iVar1 = iVar1 - 1;
    *(undefined4 *)(param_1 + 4 + iVar1 * 4) = 0;
  }
  return;
}

/* ref: FUN_00dddb70 */
GEN_NOFRAME uint GEN_THISCALL F_00dddb70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdddb70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) - 1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + 4 + iVar2 * 8);
    do {
      F_00d91510(this_00 GEN_EDX_FWD);
      this_00 = (undefined *)((int)this_00 - 8);
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dddbd0 */
GEN_NOFRAME uint GEN_THISCALL F_00dddbd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdddbd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  uVar1 = *(uint *)this;
  iVar3 = *(int *)((int)this + 4) - 1;
  if (-1 < iVar3) {
    puVar2 = (undefined4 *)(uVar1 + 4 + iVar3 * 8);
    do {
      if ((undefined *)*puVar2 != (undefined *)0x0) {
        F_00d91a80((undefined *)*puVar2 GEN_EDX_FWD);
      }
      *puVar2 = 0;
      uVar1 = F_00d91510(puVar2 - 1 GEN_EDX_ARG);
      puVar2 = puVar2 - 2;
      iVar3 = iVar3 - 1;
    } while (-1 < iVar3);
  }
  *(undefined4 *)((int)this + 4) = 0;
  return uVar1;
}

/* ref: FUN_00dddc50 */
GEN_NOFRAME uint GEN_THISCALL F_00dddc50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdddc50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) - 1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + 4 + iVar2 * 8);
    do {
      F_00d91510(this_00 GEN_EDX_FWD);
      this_00 = (undefined *)((int)this_00 - 8);
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dddcb0 */
GEN_FRAME uint GEN_THISCALL F_00dddcb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdddcb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  if (-1 < iVar3) {
    puVar2 = (undefined4 *)(*(int *)this + 4 + iVar3 * 8);
    do {
      if ((undefined *)*puVar2 != (undefined *)0x0) {
        F_00d91a80((undefined *)*puVar2 GEN_EDX_FWD);
      }
      *puVar2 = 0;
      F_00d91510(puVar2 - 1 GEN_EDX_ARG);
      puVar2 = puVar2 - 2;
      iVar3 = iVar3 - 1;
    } while (-1 < iVar3);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dddd20 */
GEN_FRAME uint GEN_THISCALL F_00dddd20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdddd20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00ddde00 */
GEN_NOFRAME uint GEN_THISCALL F_00ddde00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xddde00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00dddee0 */
GEN_NOFRAME uint GEN_THISCALL F_00dddee0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdddee0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00dddf50 */
GEN_NOFRAME uint GEN_THISCALL F_00dddf50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdddf50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 8) - 1;
  if (-1 < iVar3) {
    puVar2 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4 + iVar3 * 8)));
    do {
      if ((undefined *)*puVar2 != (undefined *)0x0) {
        F_00d91a80((undefined *)*puVar2 GEN_EDX_FWD);
      }
      *puVar2 = 0;
      F_00d91510(puVar2 - 1 GEN_EDX_ARG);
      puVar2 = puVar2 - 2;
      iVar3 = iVar3 - 1;
    } while (-1 < iVar3);
  }
  iVar3 = *(int *)((int)this + 0xc);
  *(undefined4 *)((int)this + 8) = 0;
  if (-1 < iVar3) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 4),iVar3 * 8);
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xc) = 0x80000000;
  uVar1 = F_00d91510(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00dddfd0 */
GEN_FRAME uint GEN_THISCALL F_00dddfd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdddfd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00dddf50(this GEN_EDX_FWD);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,0x10);
  }
  return (uint)this;
}

/* ref: FUN_00dde010 */
GEN_FRAME unsigned int F_00dde010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdde010u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  undefined * this;
  
  iVar1 = param_2 - 1;
  if (-1 < iVar1) {
    this = (undefined *)(iVar1 * 0x10 + param_1);
    do {
      F_00dddf50(this GEN_EDX_ARG);
      this = (undefined *)((int)this - 0x10);
      iVar1 = iVar1 - 1;
    } while (-1 < iVar1);
  }
  return;
}

/* ref: FUN_00dde040 */
GEN_NOFRAME uint GEN_THISCALL F_00dde040(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdde040u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  uVar1 = *(uint *)this;
  iVar2 = *(int *)((int)this + 4) - 1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(iVar2 * 0x10 + uVar1);
    do {
      uVar1 = F_00dddf50(this_00 GEN_EDX_FWD);
      this_00 = (undefined *)((int)this_00 - 0x10);
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  *(undefined4 *)((int)this + 4) = 0;
  return uVar1;
}

/* ref: FUN_00dde070 */
GEN_FRAME uint GEN_THISCALL F_00dde070(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdde070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) - 1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(iVar2 * 0x10 + *(int *)this);
    do {
      F_00dddf50(this_00 GEN_EDX_FWD);
      this_00 = (undefined *)((int)this_00 - 0x10);
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar1 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dde0d0 */
GEN_NOFRAME uint GEN_THISCALL F_00dde0d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdde0d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) - 1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(iVar2 * 0x10 + *(int *)this);
    do {
      F_00dddf50(this_00 GEN_EDX_FWD);
      this_00 = (undefined *)((int)this_00 - 0x10);
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dde130 */
GEN_NOFRAME uint GEN_THISCALL F_00dde130(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdde130u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) - 1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(iVar2 * 0x10 + *(int *)this);
    do {
      F_00dddf50(this_00 GEN_EDX_FWD);
      this_00 = (undefined *)((int)this_00 - 0x10);
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dde1a0 */
GEN_FRAME uint F_00dde1a0(unsigned int gen_a0)
{
  GEN_ENTER(0xdde1a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkxAttributeHolder::vf0 */
GEN_FRAME uint GEN_THISCALL F_00dde1d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdde1d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00de47a0(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00dde210 */
GEN_FRAME uint GEN_THISCALL F_00dde210(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdde210u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x1149c04));
  F_00d91350(in_ecx + 5 GEN_EDX_FWD,param_2);
  F_00d91350(in_ecx + 0x10 GEN_EDX_ARG,param_2);
  return (uint)in_ecx;
}

/* ref: FUN_00dde240 */
GEN_FRAME uint F_00dde240(unsigned int gen_a0)
{
  GEN_ENTER(0xdde240u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkxNode::vf0 */
GEN_FRAME uint GEN_THISCALL F_00dde270(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdde270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00de4e40(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00dde2b0 */
GEN_FRAME uint F_00dde2b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdde2b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00dde2c0 */
GEN_FRAME uint F_00dde2c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdde2c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00dde2d0 */
GEN_FRAME uint F_00dde2d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdde2d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00dde310 */
GEN_NOFRAME unsigned int F_00dde310(void)
{
  GEN_ENTER(0xdde310u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dde320 */
GEN_NOFRAME unsigned int F_00dde320(void)
{
  GEN_ENTER(0xdde320u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dde340 */
GEN_FRAME uint F_00dde340(unsigned int gen_a0)
{
  GEN_ENTER(0xdde340u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00dde350 */
GEN_NOFRAME unsigned int F_00dde350(void)
{
  GEN_ENTER(0xdde350u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dde360 */
GEN_FRAME unsigned int F_00dde360(unsigned int gen_a0)
{
  GEN_ENTER(0xdde360u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if ((undefined *)*param_1 != (undefined *)0x0) {
    F_00d91a80((undefined *)*param_1 GEN_EDX_ARG);
  }
  *param_1 = 0;
  return;
}

/* ref: FUN_00dde380 */
GEN_FRAME uint F_00dde380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdde380u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114a17c));
    uVar1 = F_00d91350(param_1 + 5 GEN_EDX_ARG,param_2);
  }
  return uVar1;
}

/* ref: FUN_00dde3a0 */
GEN_NOFRAME uint F_00dde3a0(void)
{
  GEN_ENTER(0xdde3a0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x90];
  
  F_00d91350(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,0);
  return 0x114a17c;
}

/* ref: FUN_00dde460 */
GEN_FRAME uint GEN_THISCALL F_00dde460(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdde460u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 0xc);
  return uVar1;
}

/* ref: FUN_00dde490 */
GEN_FRAME uint GEN_THISCALL F_00dde490(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdde490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00dde4c0 */
GEN_FRAME uint GEN_THISCALL F_00dde4c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdde4c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00dde4f0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00dde4f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdde4f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00dde510 */
GEN_FRAME unsigned int F_00dde510(unsigned int gen_a0)
{
  GEN_ENTER(0xdde510u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,0xc);
  }
  return;
}

/* ref: FUN_00dde540 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00dde540(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdde540u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00dde5a0 */
GEN_FRAME unsigned int F_00dde5a0(unsigned int gen_a0)
{
  GEN_ENTER(0xdde5a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,4);
  }
  return;
}

/* ref: FUN_00dde5e0 */
GEN_FRAME uint GEN_THISCALL F_00dde5e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdde5e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,0xc);
  }
  return (uint)this;
}

/* ref: FUN_00dde620 */
GEN_FRAME uint GEN_THISCALL F_00dde620(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdde620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dde660 */
GEN_FRAME unsigned int F_00dde660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdde660u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  
  iVar1 = param_2 - 1;
  if (-1 < iVar1) {
    puVar2 = (undefined4 *)(param_1 + iVar1 * 0xc);
    do {
      if ((undefined *)*puVar2 != (undefined *)0x0) {
        F_00d91a80((undefined *)*puVar2 GEN_EDX_ARG);
      }
      *puVar2 = 0;
      puVar2 = puVar2 - 3;
      iVar1 = iVar1 - 1;
    } while (-1 < iVar1);
  }
  return;
}

/* ref: FUN_00dde690 */
GEN_FRAME uint GEN_THISCALL F_00dde690(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdde690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,4);
  }
  return (uint)this;
}

/* ref: FUN_00dde6d0 */
GEN_NOFRAME uint GEN_THISCALL F_00dde6d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdde6d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dde750 */
GEN_FRAME unsigned int F_00dde750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdde750u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 - 1;
  while (-1 < iVar1) {
    this = *(undefined * PTR32 *)(param_1 + iVar1 * 4);
    if (this != (undefined *)0x0) {
      F_00d91a80(this GEN_EDX_ARG);
    }
    iVar1 = iVar1 - 1;
    *(undefined4 *)(param_1 + 4 + iVar1 * 4) = 0;
  }
  return;
}

/* ref: FUN_00dde780 */
GEN_NOFRAME uint GEN_THISCALL F_00dde780(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdde780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dde7c0 */
GEN_FRAME uint GEN_THISCALL F_00dde7c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdde7c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  if (-1 < iVar3) {
    puVar2 = (undefined4 *)(*(int *)this + iVar3 * 0xc);
    do {
      if ((undefined *)*puVar2 != (undefined *)0x0) {
        F_00d91a80((undefined *)*puVar2 GEN_EDX_FWD);
      }
      *puVar2 = 0;
      puVar2 = puVar2 - 3;
      iVar3 = iVar3 - 1;
    } while (-1 < iVar3);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dde870 */
GEN_NOFRAME uint GEN_THISCALL F_00dde870(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdde870u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  if (-1 < iVar3) {
    puVar2 = (undefined4 *)(*(int *)this + iVar3 * 0xc);
    do {
      if ((undefined *)*puVar2 != (undefined *)0x0) {
        F_00d91a80((undefined *)*puVar2 GEN_EDX_FWD);
      }
      *puVar2 = 0;
      puVar2 = puVar2 - 3;
      iVar3 = iVar3 - 1;
    } while (-1 < iVar3);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dde8e0 */
GEN_FRAME uint GEN_THISCALL F_00dde8e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdde8e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00dde950 */
GEN_NOFRAME uint GEN_THISCALL F_00dde950(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdde950u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  if (-1 < iVar3) {
    puVar2 = (undefined4 *)(*(int *)this + iVar3 * 0xc);
    do {
      if ((undefined *)*puVar2 != (undefined *)0x0) {
        F_00d91a80((undefined *)*puVar2 GEN_EDX_FWD);
      }
      *puVar2 = 0;
      puVar2 = puVar2 - 3;
      iVar3 = iVar3 - 1;
    } while (-1 < iVar3);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dde9c0 */
GEN_NOFRAME uint GEN_THISCALL F_00dde9c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xdde9c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00ddea30 */
GEN_NOFRAME uint GEN_THISCALL F_00ddea30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xddea30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00ddeaa0 */
GEN_FRAME uint GEN_THISCALL F_00ddeaa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddeaa0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x114a17c));
  F_00d91350(in_ecx + 5 GEN_EDX_FWD,param_2);
  return (uint)in_ecx;
}

/* ref: FUN_00ddeac0 */
GEN_FRAME uint F_00ddeac0(unsigned int gen_a0)
{
  GEN_ENTER(0xddeac0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkxMaterial::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ddeaf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddeaf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00de5200(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00ddeb30 */
GEN_FRAME uint F_00ddeb30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddeb30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00ddeb40 */
GEN_FRAME uint F_00ddeb40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddeb40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00ddeb50 */
GEN_FRAME uint GEN_THISCALL F_00ddeb50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddeb50u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  F_00d91350(in_ecx GEN_EDX_FWD,param_2);
  F_00d91350(in_ecx + 4 GEN_EDX_ARG,param_2);
  return in_ecx;
}

/* ref: FUN_00ddeb90 */
GEN_FRAME unsigned int F_00ddeb90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddeb90u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != 0) {
    F_00d91350(param_1 GEN_EDX_ARG,param_2);
    F_00d91350(param_1 + 4 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00ddebd0 */
GEN_FRAME unsigned int F_00ddebd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddebd0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != 0) {
    F_00de5db0(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00ddebf0 */
GEN_FRAME uint F_00ddebf0(unsigned int gen_a0)
{
  GEN_ENTER(0xddebf0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ddec00 */
GEN_NOFRAME uint F_00ddec00(void)
{
  GEN_ENTER(0xddec00u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x30];
  
  F_00de5db0(((uint *)(gen_frame + 0x0)) GEN_EDX_ARG,0);
  return ((uint *)(gen_frame + 0x0))[0];
}

/* ref: FUN_00ddec30 */
GEN_FRAME uint F_00ddec30(unsigned int gen_a0)
{
  GEN_ENTER(0xddec30u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00d91510((undefined *)((int)param_1 + 4) GEN_EDX_ARG);
  uVar1 = F_00d91510(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00ddec50 */
GEN_NOFRAME uint GEN_THISCALL F_00ddec50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xddec50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00d91510((undefined *)((int)this + 4) GEN_EDX_FWD);
  uVar1 = F_00d91510(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00ddec70 */
GEN_FRAME unsigned int F_00ddec70(unsigned int gen_a0)
{
  GEN_ENTER(0xddec70u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,8);
  }
  return;
}

/* ref: FUN_00ddeca0 */
GEN_FRAME uint GEN_THISCALL F_00ddeca0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddeca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d91510((undefined *)((int)this + 4) GEN_EDX_FWD);
  F_00d91510(this GEN_EDX_ARG);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,8);
  }
  return (uint)this;
}

/* ref: FUN_00ddece0 */
GEN_FRAME uint F_00ddece0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddece0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00ddecf0 */
GEN_FRAME uint F_00ddecf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddecf0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00dded00 */
GEN_FRAME uint GEN_THISCALL F_00dded00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdded00u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  F_00d91350(in_ecx + 4 GEN_EDX_FWD,param_2);
  return in_ecx;
}

/* ref: FUN_00dded20 */
GEN_FRAME uint F_00dded20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdded20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00dded40 */
GEN_FRAME uint F_00dded40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdded40u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_00d91350(param_1 + 4 GEN_EDX_ARG,param_2);
  }
  return uVar1;
}

/* ref: FUN_00dded70 */
GEN_FRAME uint F_00dded70(unsigned int gen_a0)
{
  GEN_ENTER(0xdded70u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00dded90 */
GEN_FRAME uint F_00dded90(unsigned int gen_a0)
{
  GEN_ENTER(0xdded90u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ddeda0 */
GEN_FRAME uint F_00ddeda0(unsigned int gen_a0)
{
  GEN_ENTER(0xddeda0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00d91510((undefined *)(param_1 + 4) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00ddedb0 */
GEN_FRAME uint F_00ddedb0(unsigned int gen_a0)
{
  GEN_ENTER(0xddedb0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114a2e8));
  }
  return (uint)param_1;
}

/* ref: FUN_00ddedd0 */
GEN_NOFRAME uint F_00ddedd0(void)
{
  GEN_ENTER(0xddedd0u, 0u, 0u, 0u, 0u);
  return 0x114a2e8;
}

/* ref: FUN_00ddede0 */
GEN_FRAME uint F_00ddede0(unsigned int gen_a0)
{
  GEN_ENTER(0xddede0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114a2f8));
  }
  return (uint)param_1;
}

/* ref: FUN_00ddee00 */
GEN_NOFRAME uint F_00ddee00(void)
{
  GEN_ENTER(0xddee00u, 0u, 0u, 0u, 0u);
  return 0x114a2f8;
}

/* ref: FUN_00ddee60 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00ddee60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xddee60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00ddee90 */
GEN_FRAME uint GEN_THISCALL F_00ddee90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xddee90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00ddeeb0 */
GEN_FRAME unsigned int F_00ddeeb0(unsigned int gen_a0)
{
  GEN_ENTER(0xddeeb0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,8);
  }
  return;
}

/* ref: FUN_00ddeee0 */
GEN_FRAME uint GEN_THISCALL F_00ddeee0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddeee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d91510((undefined *)((int)this + 4) GEN_EDX_FWD);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,8);
  }
  return (uint)this;
}

/* ref: FUN_00ddef40 */
GEN_FRAME unsigned int F_00ddef40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddef40u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  undefined * this;
  
  iVar1 = param_2 - 1;
  if (-1 < iVar1) {
    this = (undefined *)(param_1 + 4 + iVar1 * 8);
    do {
      F_00d91510(this GEN_EDX_ARG);
      this = (undefined *)((int)this - 8);
      iVar1 = iVar1 - 1;
    } while (-1 < iVar1);
  }
  return;
}

/* ref: FUN_00ddef70 */
GEN_NOFRAME uint GEN_THISCALL F_00ddef70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xddef70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  uVar1 = *(uint *)this;
  iVar2 = *(int *)((int)this + 4) - 1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(uVar1 + 4 + iVar2 * 8);
    do {
      uVar1 = F_00d91510(this_00 GEN_EDX_FWD);
      this_00 = (undefined *)((int)this_00 - 8);
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  *(undefined4 *)((int)this + 4) = 0;
  return uVar1;
}

/* ref: FUN_00ddefa0 */
GEN_FRAME uint GEN_THISCALL F_00ddefa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddefa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) - 1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + 4 + iVar2 * 8);
    do {
      F_00d91510(this_00 GEN_EDX_FWD);
      this_00 = (undefined *)((int)this_00 - 8);
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00ddf000 */
GEN_NOFRAME uint GEN_THISCALL F_00ddf000(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xddf000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) - 1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + 4 + iVar2 * 8);
    do {
      F_00d91510(this_00 GEN_EDX_FWD);
      this_00 = (undefined *)((int)this_00 - 8);
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00ddf070 */
GEN_FRAME uint F_00ddf070(unsigned int gen_a0)
{
  GEN_ENTER(0xddf070u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00ddf0a0 */
GEN_NOFRAME uint GEN_THISCALL F_00ddf0a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xddf0a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0x1c);
  *(undefined4 *)((int)this + 0x18) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x14),iVar1 * 4);
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0x80000000;
  uVar2 = *(uint *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0xc) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 8),uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar2;
}

/* ref: FUN_00ddf130 */
GEN_FRAME uint F_00ddf130(unsigned int gen_a0)
{
  GEN_ENTER(0xddf130u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00ddf160 */
GEN_NOFRAME uint GEN_THISCALL F_00ddf160(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xddf160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x20) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 0x20) GEN_EDX_FWD);
  }
  *(undefined4 *)((int)this + 0x20) = 0;
  uVar1 = F_00ddf0a0(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00ddf180 */
GEN_NOFRAME uint GEN_THISCALL F_00ddf180(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xddf180u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) - 1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + 4 + iVar2 * 8);
    do {
      F_00d91510(this_00 GEN_EDX_FWD);
      this_00 = (undefined *)((int)this_00 - 8);
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: hkxSparselyAnimatedInt::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ddf1e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddf1e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00ddf0a0(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00ddf230 */
GEN_FRAME uint F_00ddf230(unsigned int gen_a0)
{
  GEN_ENTER(0xddf230u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00ddf260 */
GEN_NOFRAME uint GEN_THISCALL F_00ddf260(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xddf260u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 0xc) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((*(int *)((int)this + 8) + 4 + iVar2 * 8)));
    do {
      F_00d91510(this_00 GEN_EDX_FWD);
      this_00 = (undefined *)((int)this_00 - 8);
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0xc) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 8),uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkxSparselyAnimatedEnum::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ddf2c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddf2c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  if (*(undefined * PTR32 *)(this + 0x20) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)(this + 0x20) GEN_EDX_FWD);
  }
  *(undefined4 *)(this + 0x20) = 0;
  F_00ddf0a0(this GEN_EDX_ARG);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: hkxEnum::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ddf310(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddf310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00ddf260(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00ddf350 */
GEN_FRAME uint F_00ddf350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddf350u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00ddf370 */
GEN_FRAME unsigned int F_00ddf370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddf370u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != 0) {
    F_00d91350(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00ddf390 */
GEN_FRAME uint F_00ddf390(unsigned int gen_a0)
{
  GEN_ENTER(0xddf390u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00dddf50(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00ddf3c0 */
GEN_FRAME uint GEN_THISCALL F_00ddf3c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddf3c0u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  F_00d91350(in_ecx GEN_EDX_FWD,param_2);
  return in_ecx;
}

/* ref: FUN_00ddf3e0 */
GEN_FRAME uint F_00ddf3e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddf3e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00ddf400 */
GEN_FRAME unsigned int F_00ddf400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddf400u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != 0) {
    F_00de62f0(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00ddf420 */
GEN_FRAME uint F_00ddf420(unsigned int gen_a0)
{
  GEN_ENTER(0xddf420u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)param_1 + 4) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)param_1 + 4) GEN_EDX_ARG);
  }
  *(undefined4 *)((int)param_1 + 4) = 0;
  uVar1 = F_00d91510(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00ddf450 */
GEN_FRAME uint F_00ddf450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddf450u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00ddf470 */
GEN_FRAME uint F_00ddf470(unsigned int gen_a0)
{
  GEN_ENTER(0xddf470u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ddf480 */
GEN_FRAME uint F_00ddf480(unsigned int gen_a0)
{
  GEN_ENTER(0xddf480u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114a498));
  }
  return (uint)param_1;
}

/* ref: FUN_00ddf4a0 */
GEN_NOFRAME uint F_00ddf4a0(void)
{
  GEN_ENTER(0xddf4a0u, 0u, 0u, 0u, 0u);
  return 0x114a498;
}

/* ref: FUN_00ddf4c0 */
GEN_FRAME uint F_00ddf4c0(unsigned int gen_a0)
{
  GEN_ENTER(0xddf4c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00ddf4f0 */
GEN_NOFRAME uint GEN_THISCALL F_00ddf4f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xddf4f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0xc) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 8),uVar1 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkxVertexVectorDataChannel::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ddf540(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddf540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = *(int *)(this + 0x10);
  *(undefined4 *)(this + 0xc) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)(this + 8),iVar1 << 4);
  }
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar2 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00ddf5b0 */
GEN_FRAME uint F_00ddf5b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddf5b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00ddf5d0 */
GEN_FRAME uint F_00ddf5d0(unsigned int gen_a0)
{
  GEN_ENTER(0xddf5d0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ddf5e0 */
GEN_FRAME uint F_00ddf5e0(unsigned int gen_a0)
{
  GEN_ENTER(0xddf5e0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114a4f0));
  }
  return (uint)param_1;
}

/* ref: FUN_00ddf600 */
GEN_NOFRAME uint F_00ddf600(void)
{
  GEN_ENTER(0xddf600u, 0u, 0u, 0u, 0u);
  return 0x114a4f0;
}

/* ref: FUN_00ddf620 */
GEN_FRAME uint F_00ddf620(unsigned int gen_a0)
{
  GEN_ENTER(0xddf620u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00ddf650 */
GEN_NOFRAME uint GEN_THISCALL F_00ddf650(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xddf650u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0xc) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 8),uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkxVertexSelectionChannel::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ddf6a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddf6a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = *(int *)(this + 0x10);
  *(undefined4 *)(this + 0xc) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)(this + 8),iVar1 * 4);
  }
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar2 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00ddf710 */
GEN_FRAME uint F_00ddf710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddf710u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00ddf730 */
GEN_FRAME uint F_00ddf730(unsigned int gen_a0)
{
  GEN_ENTER(0xddf730u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ddf740 */
GEN_FRAME uint F_00ddf740(unsigned int gen_a0)
{
  GEN_ENTER(0xddf740u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114a544));
  }
  return (uint)param_1;
}

/* ref: FUN_00ddf760 */
GEN_NOFRAME uint F_00ddf760(void)
{
  GEN_ENTER(0xddf760u, 0u, 0u, 0u, 0u);
  return 0x114a544;
}

/* ref: FUN_00ddf780 */
GEN_FRAME uint F_00ddf780(unsigned int gen_a0)
{
  GEN_ENTER(0xddf780u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00ddf7b0 */
GEN_NOFRAME uint GEN_THISCALL F_00ddf7b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xddf7b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0xc) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 8),uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkxVertexIntDataChannel::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ddf800(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddf800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = *(int *)(this + 0x10);
  *(undefined4 *)(this + 0xc) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)(this + 8),iVar1 * 4);
  }
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar2 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00ddf870 */
GEN_FRAME uint F_00ddf870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddf870u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00ddf890 */
GEN_FRAME uint F_00ddf890(unsigned int gen_a0)
{
  GEN_ENTER(0xddf890u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ddf8a0 */
GEN_FRAME uint F_00ddf8a0(unsigned int gen_a0)
{
  GEN_ENTER(0xddf8a0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114a5d8));
  }
  return (uint)param_1;
}

/* ref: FUN_00ddf8c0 */
GEN_NOFRAME uint F_00ddf8c0(void)
{
  GEN_ENTER(0xddf8c0u, 0u, 0u, 0u, 0u);
  return 0x114a5d8;
}

/* ref: FUN_00ddf8f0 */
GEN_FRAME uint F_00ddf8f0(unsigned int gen_a0)
{
  GEN_ENTER(0xddf8f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00ddf920 */
GEN_NOFRAME uint GEN_THISCALL F_00ddf920(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xddf920u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0xc) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 8),uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkxVertexFloatDataChannel::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ddf970(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddf970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = *(int *)(this + 0x10);
  *(undefined4 *)(this + 0xc) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)(this + 8),iVar1 * 4);
  }
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar2 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00ddf9e0 */
GEN_FRAME uint F_00ddf9e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddf9e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00ddfa00 */
GEN_FRAME uint F_00ddfa00(unsigned int gen_a0)
{
  GEN_ENTER(0xddfa00u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ddfa10 */
GEN_FRAME uint F_00ddfa10(unsigned int gen_a0)
{
  GEN_ENTER(0xddfa10u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114a630));
  }
  return (uint)param_1;
}

/* ref: FUN_00ddfa30 */
GEN_NOFRAME uint F_00ddfa30(void)
{
  GEN_ENTER(0xddfa30u, 0u, 0u, 0u, 0u);
  return 0x114a630;
}

/* ref: FUN_00ddfa50 */
GEN_FRAME uint F_00ddfa50(unsigned int gen_a0)
{
  GEN_ENTER(0xddfa50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00ddfa80 */
GEN_NOFRAME uint GEN_THISCALL F_00ddfa80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xddfa80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0xc) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 8),uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkxTriangleSelectionChannel::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ddfad0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddfad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = *(int *)(this + 0x10);
  *(undefined4 *)(this + 0xc) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)(this + 8),iVar1 * 4);
  }
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar2 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00ddfb40 */
GEN_FRAME uint F_00ddfb40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddfb40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00ddfb60 */
GEN_FRAME uint F_00ddfb60(unsigned int gen_a0)
{
  GEN_ENTER(0xddfb60u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ddfb70 */
GEN_FRAME unsigned int F_00ddfb70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddfb70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114a6e4));
    F_00d91350(param_1 + 6 GEN_EDX_ARG,param_2);
    F_00d91350(param_1 + 7 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00ddfba0 */
GEN_NOFRAME uint F_00ddfba0(void)
{
  GEN_ENTER(0xddfba0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x20];
  
  F_00d91350(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,0);
  F_00d91350(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,0);
  return 0x114a6e4;
}

/* ref: FUN_00ddfbe0 */
GEN_FRAME uint GEN_THISCALL F_00ddfbe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddfbe0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x114a6e4));
  F_00d91350(in_ecx + 6 GEN_EDX_FWD,param_2);
  F_00d91350(in_ecx + 7 GEN_EDX_ARG,param_2);
  return (uint)in_ecx;
}

/* ref: FUN_00ddfc10 */
GEN_FRAME uint F_00ddfc10(unsigned int gen_a0)
{
  GEN_ENTER(0xddfc10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00ddfc40 */
GEN_NOFRAME uint GEN_THISCALL F_00ddfc40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xddfc40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00d91510((undefined *)((int)this + 0x1c) GEN_EDX_FWD);
  F_00d91510((undefined *)((int)this + 0x18) GEN_EDX_ARG);
  uVar1 = *(uint *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x10) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0xc),uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkxTextureInplace::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ddfca0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddfca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  LPVOID pvVar2;
  
  F_00d91510(this + 0x1c GEN_EDX_FWD);
  F_00d91510(this + 0x18 GEN_EDX_ARG);
  uVar1 = *(uint *)(this + 0x14);
  *(undefined4 *)(this + 0x10) = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)(this + 0xc),uVar1 & 0x3fffffff);
  }
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x14) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar2 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00ddfd20 */
GEN_FRAME uint F_00ddfd20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddfd20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00ddfd30 */
GEN_FRAME uint GEN_THISCALL F_00ddfd30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddfd30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x114a754));
  F_00d91350((int)this + 8 GEN_EDX_FWD,param_1);
  F_00d91350((int)this + 0xc GEN_EDX_ARG,param_1);
  F_00d91350((int)this + 0x10 GEN_EDX_ARG,param_1);
  return (uint)this;
}

/* ref: FUN_00ddfd70 */
GEN_NOFRAME uint GEN_THISCALL F_00ddfd70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xddfd70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00d91510((undefined *)((int)this + 0x10) GEN_EDX_FWD);
  F_00d91510((undefined *)((int)this + 0xc) GEN_EDX_ARG);
  uVar1 = F_00d91510((undefined *)((int)this + 8) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: FUN_00ddfdb0 */
GEN_FRAME unsigned int F_00ddfdb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddfdb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114a754));
    F_00d91350(param_1 + 2 GEN_EDX_ARG,param_2);
    F_00d91350(param_1 + 3 GEN_EDX_ARG,param_2);
    F_00d91350(param_1 + 4 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00ddfdf0 */
GEN_FRAME uint F_00ddfdf0(unsigned int gen_a0)
{
  GEN_ENTER(0xddfdf0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ddfe00 */
GEN_NOFRAME uint F_00ddfe00(void)
{
  GEN_ENTER(0xddfe00u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x30];
  
  F_00d91350(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,0);
  F_00d91350(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,0);
  F_00d91350(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,0);
  return 0x114a754;
}

/* ref: FUN_00ddfe50 */
GEN_FRAME uint F_00ddfe50(unsigned int gen_a0)
{
  GEN_ENTER(0xddfe50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkxTextureFile::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ddfe80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xddfe80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d91510(this + 0x10 GEN_EDX_FWD);
  F_00d91510(this + 0xc GEN_EDX_ARG);
  F_00d91510(this + 8 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00ddfed0 */
GEN_FRAME uint F_00ddfed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddfed0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00ddfef0 */
GEN_FRAME uint F_00ddfef0(unsigned int gen_a0)
{
  GEN_ENTER(0xddfef0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ddff00 */
GEN_FRAME uint F_00ddff00(unsigned int gen_a0)
{
  GEN_ENTER(0xddff00u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114a7ac));
  }
  return (uint)param_1;
}

/* ref: FUN_00ddff20 */
GEN_NOFRAME uint F_00ddff20(void)
{
  GEN_ENTER(0xddff20u, 0u, 0u, 0u, 0u);
  return 0x114a7ac;
}

/* ref: FUN_00ddff40 */
GEN_FRAME uint F_00ddff40(unsigned int gen_a0)
{
  GEN_ENTER(0xddff40u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00ddff70 */
GEN_NOFRAME uint GEN_THISCALL F_00ddff70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xddff70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 0x1c);
  *(undefined4 *)((int)this + 0x18) = 0;
  if (-1 < iVar2) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x14),iVar2 * 4);
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0x80000000;
  iVar2 = *(int *)((int)this + 0xc) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((*(int *)((int)this + 8) + iVar2 * 4)));
    do {
      F_00d91510(this_00 GEN_EDX_ARG);
      this_00 = (undefined *)((int)this_00 - 4);
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0xc) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 8),uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkxSparselyAnimatedString::vf0 */
GEN_FRAME uint GEN_THISCALL F_00de0000(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde0000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00ddff70(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00de0040 */
GEN_FRAME uint F_00de0040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde0040u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00de0060 */
GEN_FRAME uint F_00de0060(unsigned int gen_a0)
{
  GEN_ENTER(0xde0060u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00de0070 */
GEN_FRAME uint F_00de0070(unsigned int gen_a0)
{
  GEN_ENTER(0xde0070u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114a2d8));
  }
  return (uint)param_1;
}

/* ref: FUN_00de0090 */
GEN_NOFRAME uint F_00de0090(void)
{
  GEN_ENTER(0xde0090u, 0u, 0u, 0u, 0u);
  return 0x114a2d8;
}

/* ref: FUN_00de00a0 */
GEN_FRAME uint F_00de00a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde00a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00de00c0 */
GEN_FRAME uint F_00de00c0(unsigned int gen_a0)
{
  GEN_ENTER(0xde00c0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00de00d0 */
GEN_FRAME uint F_00de00d0(unsigned int gen_a0)
{
  GEN_ENTER(0xde00d0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114a860));
  }
  return (uint)param_1;
}

/* ref: FUN_00de00f0 */
GEN_NOFRAME uint F_00de00f0(void)
{
  GEN_ENTER(0xde00f0u, 0u, 0u, 0u, 0u);
  return 0x114a860;
}

/* ref: FUN_00de0130 */
GEN_FRAME uint F_00de0130(unsigned int gen_a0)
{
  GEN_ENTER(0xde0130u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00de0160 */
GEN_NOFRAME uint GEN_THISCALL F_00de0160(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde0160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0x1c);
  *(undefined4 *)((int)this + 0x18) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x14),iVar1 * 4);
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0x80000000;
  uVar2 = *(uint *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0xc) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 8),uVar2 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar2;
}

/* ref: hkxSparselyAnimatedBool::vf0 */
GEN_FRAME uint GEN_THISCALL F_00de01d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde01d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00de0160(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00de0210 */
GEN_FRAME uint F_00de0210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde0210u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00de0230 */
GEN_FRAME uint F_00de0230(unsigned int gen_a0)
{
  GEN_ENTER(0xde0230u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00de0240 */
GEN_FRAME uint F_00de0240(unsigned int gen_a0)
{
  GEN_ENTER(0xde0240u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114a90c));
  }
  return (uint)param_1;
}

/* ref: FUN_00de0260 */
GEN_NOFRAME uint F_00de0260(void)
{
  GEN_ENTER(0xde0260u, 0u, 0u, 0u, 0u);
  return 0x114a90c;
}

/* ref: FUN_00de0280 */
GEN_FRAME uint F_00de0280(unsigned int gen_a0)
{
  GEN_ENTER(0xde0280u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00de02b0 */
GEN_NOFRAME uint GEN_THISCALL F_00de02b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde02b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 0x20);
  *(undefined4 *)((int)this + 0x1c) = 0;
  if (-1 < iVar2) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x18),iVar2 << 6);
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0x80000000;
  iVar2 = *(int *)((int)this + 0x10) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((*(int *)((int)this + 0xc) + iVar2 * 4)));
    do {
      F_00d91510(this_00 GEN_EDX_ARG);
      this_00 = (undefined *)((int)this_00 - 4);
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x10) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0xc),uVar1 * 4);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  if (*(undefined * PTR32 *)((int)this + 8) != (undefined *)0x0) {
    uVar1 = F_00d91a80(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkxSkinBinding::vf0 */
GEN_FRAME uint GEN_THISCALL F_00de0350(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde0350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00de02b0(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00de0390 */
GEN_FRAME uint F_00de0390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde0390u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00de03b0 */
GEN_FRAME uint F_00de03b0(unsigned int gen_a0)
{
  GEN_ENTER(0xde03b0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00de03c0 */
GEN_FRAME unsigned int F_00de03c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde03c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114ab70));
    F_00d91350(param_1 + 2 GEN_EDX_ARG,param_2);
    F_00d91350(param_1 + 3 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00de03f0 */
GEN_NOFRAME uint F_00de03f0(void)
{
  GEN_ENTER(0xde03f0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  
  F_00d91350(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,0);
  F_00d91350(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,0);
  return 0x114ab70;
}

/* ref: FUN_00de0540 */
GEN_FRAME uint GEN_THISCALL F_00de0540(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde0540u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00de0570 */
GEN_FRAME uint GEN_THISCALL F_00de0570(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde0570u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00de05a0 */
GEN_FRAME uint GEN_THISCALL F_00de05a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde05a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00de05d0 */
GEN_FRAME uint GEN_THISCALL F_00de05d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde05d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00de0600 */
GEN_FRAME uint GEN_THISCALL F_00de0600(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde0600u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00de0630 */
GEN_FRAME uint GEN_THISCALL F_00de0630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde0630u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00de0660 */
GEN_FRAME uint GEN_THISCALL F_00de0660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde0660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00de0680 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00de0680(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde0680u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00de06a0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00de06a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde06a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00de06c0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00de06c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde06c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00de06e0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00de06e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde06e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00de0700 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00de0700(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde0700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00de0720 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00de0720(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde0720u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00de07b0 */
GEN_FRAME unsigned int F_00de07b0(unsigned int gen_a0)
{
  GEN_ENTER(0xde07b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,4);
  }
  return;
}

/* ref: FUN_00de07e0 */
GEN_FRAME unsigned int F_00de07e0(unsigned int gen_a0)
{
  GEN_ENTER(0xde07e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,4);
  }
  return;
}

/* ref: FUN_00de0810 */
GEN_FRAME unsigned int F_00de0810(unsigned int gen_a0)
{
  GEN_ENTER(0xde0810u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,4);
  }
  return;
}

/* ref: FUN_00de0840 */
GEN_FRAME unsigned int F_00de0840(unsigned int gen_a0)
{
  GEN_ENTER(0xde0840u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,4);
  }
  return;
}

/* ref: FUN_00de0870 */
GEN_FRAME unsigned int F_00de0870(unsigned int gen_a0)
{
  GEN_ENTER(0xde0870u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,4);
  }
  return;
}

/* ref: FUN_00de08a0 */
GEN_FRAME unsigned int F_00de08a0(unsigned int gen_a0)
{
  GEN_ENTER(0xde08a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,4);
  }
  return;
}

/* ref: FUN_00de08d0 */
GEN_FRAME unsigned int F_00de08d0(unsigned int gen_a0)
{
  GEN_ENTER(0xde08d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,4);
  }
  return;
}

/* ref: FUN_00de0900 */
GEN_FRAME uint GEN_THISCALL F_00de0900(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde0900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,4);
  }
  return (uint)this;
}

/* ref: FUN_00de0940 */
GEN_FRAME uint GEN_THISCALL F_00de0940(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde0940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,4);
  }
  return (uint)this;
}

/* ref: FUN_00de0980 */
GEN_FRAME uint GEN_THISCALL F_00de0980(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde0980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,4);
  }
  return (uint)this;
}

/* ref: FUN_00de09c0 */
GEN_FRAME uint GEN_THISCALL F_00de09c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde09c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,4);
  }
  return (uint)this;
}

/* ref: FUN_00de0a00 */
GEN_FRAME uint GEN_THISCALL F_00de0a00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde0a00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,4);
  }
  return (uint)this;
}

/* ref: FUN_00de0a40 */
GEN_FRAME uint GEN_THISCALL F_00de0a40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde0a40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,4);
  }
  return (uint)this;
}

/* ref: FUN_00de0a80 */
GEN_FRAME uint GEN_THISCALL F_00de0a80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde0a80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,4);
  }
  return (uint)this;
}

/* ref: FUN_00de0ac0 */
GEN_FRAME unsigned int F_00de0ac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde0ac0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 - 1;
  while (-1 < iVar1) {
    this = *(undefined * PTR32 *)(param_1 + iVar1 * 4);
    if (this != (undefined *)0x0) {
      F_00d91a80(this GEN_EDX_ARG);
    }
    iVar1 = iVar1 - 1;
    *(undefined4 *)(param_1 + 4 + iVar1 * 4) = 0;
  }
  return;
}

/* ref: FUN_00de0af0 */
GEN_FRAME unsigned int F_00de0af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde0af0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 - 1;
  while (-1 < iVar1) {
    this = *(undefined * PTR32 *)(param_1 + iVar1 * 4);
    if (this != (undefined *)0x0) {
      F_00d91a80(this GEN_EDX_ARG);
    }
    iVar1 = iVar1 - 1;
    *(undefined4 *)(param_1 + 4 + iVar1 * 4) = 0;
  }
  return;
}

/* ref: FUN_00de0b20 */
GEN_FRAME unsigned int F_00de0b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde0b20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 - 1;
  while (-1 < iVar1) {
    this = *(undefined * PTR32 *)(param_1 + iVar1 * 4);
    if (this != (undefined *)0x0) {
      F_00d91a80(this GEN_EDX_ARG);
    }
    iVar1 = iVar1 - 1;
    *(undefined4 *)(param_1 + 4 + iVar1 * 4) = 0;
  }
  return;
}

/* ref: FUN_00de0b50 */
GEN_FRAME unsigned int F_00de0b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde0b50u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 - 1;
  while (-1 < iVar1) {
    this = *(undefined * PTR32 *)(param_1 + iVar1 * 4);
    if (this != (undefined *)0x0) {
      F_00d91a80(this GEN_EDX_ARG);
    }
    iVar1 = iVar1 - 1;
    *(undefined4 *)(param_1 + 4 + iVar1 * 4) = 0;
  }
  return;
}

/* ref: FUN_00de0b80 */
GEN_FRAME unsigned int F_00de0b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde0b80u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 - 1;
  while (-1 < iVar1) {
    this = *(undefined * PTR32 *)(param_1 + iVar1 * 4);
    if (this != (undefined *)0x0) {
      F_00d91a80(this GEN_EDX_ARG);
    }
    iVar1 = iVar1 - 1;
    *(undefined4 *)(param_1 + 4 + iVar1 * 4) = 0;
  }
  return;
}

/* ref: FUN_00de0bb0 */
GEN_FRAME unsigned int F_00de0bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde0bb0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 - 1;
  while (-1 < iVar1) {
    this = *(undefined * PTR32 *)(param_1 + iVar1 * 4);
    if (this != (undefined *)0x0) {
      F_00d91a80(this GEN_EDX_ARG);
    }
    iVar1 = iVar1 - 1;
    *(undefined4 *)(param_1 + 4 + iVar1 * 4) = 0;
  }
  return;
}

/* ref: FUN_00de0be0 */
GEN_FRAME unsigned int F_00de0be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde0be0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 - 1;
  while (-1 < iVar1) {
    this = *(undefined * PTR32 *)(param_1 + iVar1 * 4);
    if (this != (undefined *)0x0) {
      F_00d91a80(this GEN_EDX_ARG);
    }
    iVar1 = iVar1 - 1;
    *(undefined4 *)(param_1 + 4 + iVar1 * 4) = 0;
  }
  return;
}

/* ref: FUN_00de0dd0 */
GEN_FRAME uint GEN_THISCALL F_00de0dd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde0dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de0e40 */
GEN_FRAME uint GEN_THISCALL F_00de0e40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde0e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de0eb0 */
GEN_FRAME uint GEN_THISCALL F_00de0eb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde0eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de0f20 */
GEN_FRAME uint GEN_THISCALL F_00de0f20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde0f20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de0f90 */
GEN_FRAME uint GEN_THISCALL F_00de0f90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde0f90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de1000 */
GEN_FRAME uint GEN_THISCALL F_00de1000(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde1000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de1070 */
GEN_FRAME uint GEN_THISCALL F_00de1070(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde1070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de10e0 */
GEN_NOFRAME uint GEN_THISCALL F_00de10e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde10e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de1150 */
GEN_NOFRAME uint GEN_THISCALL F_00de1150(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde1150u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de11c0 */
GEN_NOFRAME uint GEN_THISCALL F_00de11c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde11c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de1230 */
GEN_NOFRAME uint GEN_THISCALL F_00de1230(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde1230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de12a0 */
GEN_NOFRAME uint GEN_THISCALL F_00de12a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde12a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de1310 */
GEN_NOFRAME uint GEN_THISCALL F_00de1310(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde1310u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de1380 */
GEN_NOFRAME uint GEN_THISCALL F_00de1380(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde1380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de13f0 */
GEN_NOFRAME uint GEN_THISCALL F_00de13f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde13f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de1460 */
GEN_NOFRAME uint GEN_THISCALL F_00de1460(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde1460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de14d0 */
GEN_NOFRAME uint GEN_THISCALL F_00de14d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde14d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de1540 */
GEN_NOFRAME uint GEN_THISCALL F_00de1540(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde1540u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de15b0 */
GEN_NOFRAME uint GEN_THISCALL F_00de15b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde15b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de1620 */
GEN_NOFRAME uint GEN_THISCALL F_00de1620(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde1620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de1690 */
GEN_NOFRAME uint GEN_THISCALL F_00de1690(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde1690u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de1700 */
GEN_FRAME uint GEN_THISCALL F_00de1700(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde1700u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x114ab70));
  F_00d91350(in_ecx + 2 GEN_EDX_FWD,param_2);
  F_00d91350(in_ecx + 3 GEN_EDX_ARG,param_2);
  return (uint)in_ecx;
}

/* ref: FUN_00de1730 */
GEN_FRAME uint F_00de1730(unsigned int gen_a0)
{
  GEN_ENTER(0xde1730u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkxScene::vf0 */
GEN_FRAME uint GEN_THISCALL F_00de1760(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde1760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00de6840(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00de17a0 */
GEN_FRAME uint F_00de17a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde17a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00de17c0 */
GEN_FRAME uint F_00de17c0(unsigned int gen_a0)
{
  GEN_ENTER(0xde17c0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00de17d0 */
GEN_FRAME uint F_00de17d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde17d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114abcc));
    uVar1 = F_00d91350(param_1 + 8 GEN_EDX_ARG,param_2);
  }
  return uVar1;
}

/* ref: FUN_00de17f0 */
GEN_NOFRAME uint F_00de17f0(void)
{
  GEN_ENTER(0xde17f0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x20];
  
  F_00d91350(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,0);
  return 0x114abcc;
}

/* ref: FUN_00de1830 */
GEN_FRAME uint GEN_THISCALL F_00de1830(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde1830u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x114abcc));
  F_00d91350(in_ecx + 8 GEN_EDX_FWD,param_2);
  return (uint)in_ecx;
}

/* ref: FUN_00de1850 */
GEN_FRAME uint F_00de1850(unsigned int gen_a0)
{
  GEN_ENTER(0xde1850u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00de1880 */
GEN_NOFRAME uint GEN_THISCALL F_00de1880(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde1880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  F_00d91510((undefined *)((int)this + 0x20) GEN_EDX_FWD);
  iVar3 = *(int *)((int)this + 0x18) - 1;
  iVar1 = *(int *)((int)this + 0x14);
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_ARG);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  iVar1 = *(int *)((int)this + 0x1c);
  *(undefined4 *)((int)this + 0x18) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x14),iVar1 * 4);
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0x80000000;
  uVar2 = F_00de47a0(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: hkxNodeSelectionSet::vf0 */
GEN_FRAME uint GEN_THISCALL F_00de1900(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde1900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00de1880(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00de1940 */
GEN_FRAME uint F_00de1940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde1940u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00de1950 */
GEN_FRAME uint F_00de1950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde1950u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00de1970 */
GEN_FRAME uint F_00de1970(unsigned int gen_a0)
{
  GEN_ENTER(0xde1970u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00de1990 */
GEN_FRAME unsigned int F_00de1990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde1990u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != 0) {
    F_00de74e0(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00de19b0 */
GEN_FRAME uint F_00de19b0(unsigned int gen_a0)
{
  GEN_ENTER(0xde19b0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00de19c0 */
GEN_NOFRAME uint F_00de19c0(void)
{
  GEN_ENTER(0xde19c0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x30];
  
  F_00de74e0(((uint *)(gen_frame + 0x0)) GEN_EDX_ARG,0);
  return ((uint *)(gen_frame + 0x0))[0];
}

/* ref: FUN_00de19f0 */
GEN_FRAME unsigned int F_00de19f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde19f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114ac88));
    F_00d91350(param_1 + 5 GEN_EDX_ARG,param_2);
    F_00d91350(param_1 + 6 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00de1a20 */
GEN_NOFRAME uint F_00de1a20(void)
{
  GEN_ENTER(0xde1a20u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x20];
  
  F_00d91350(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,0);
  F_00d91350(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,0);
  return 0x114ac88;
}

/* ref: FUN_00de1a60 */
GEN_FRAME uint GEN_THISCALL F_00de1a60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde1a60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x114ac88));
  F_00d91350(in_ecx + 5 GEN_EDX_FWD,param_2);
  F_00d91350(in_ecx + 6 GEN_EDX_ARG,param_2);
  return (uint)in_ecx;
}

/* ref: FUN_00de1a90 */
GEN_NOFRAME uint GEN_THISCALL F_00de1a90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde1a90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00d91510((undefined *)((int)this + 0x18) GEN_EDX_FWD);
  F_00d91510((undefined *)((int)this + 0x14) GEN_EDX_ARG);
  uVar1 = F_00de47a0(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00de1ab0 */
GEN_FRAME uint F_00de1ab0(unsigned int gen_a0)
{
  GEN_ENTER(0xde1ab0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkxMesh::UserChannelInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00de1ae0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde1ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d91510(this + 0x18 GEN_EDX_FWD);
  F_00d91510(this + 0x14 GEN_EDX_ARG);
  F_00de47a0(this GEN_EDX_ARG);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00de1b30 */
GEN_FRAME uint F_00de1b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde1b30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00de1b50 */
GEN_FRAME uint F_00de1b50(unsigned int gen_a0)
{
  GEN_ENTER(0xde1b50u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00de1b60 */
GEN_FRAME uint F_00de1b60(unsigned int gen_a0)
{
  GEN_ENTER(0xde1b60u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114ad4c));
  }
  return (uint)param_1;
}

/* ref: FUN_00de1b80 */
GEN_NOFRAME uint F_00de1b80(void)
{
  GEN_ENTER(0xde1b80u, 0u, 0u, 0u, 0u);
  return 0x114ad4c;
}

/* ref: FUN_00de1bc0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00de1bc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde1bc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00de1c20 */
GEN_FRAME uint GEN_THISCALL F_00de1c20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde1c20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00de1c50 */
GEN_FRAME uint GEN_THISCALL F_00de1c50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde1c50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00de1c70 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00de1c70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde1c70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00de1c90 */
GEN_FRAME unsigned int F_00de1c90(unsigned int gen_a0)
{
  GEN_ENTER(0xde1c90u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,4);
  }
  return;
}

/* ref: FUN_00de1ce0 */
GEN_FRAME uint GEN_THISCALL F_00de1ce0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde1ce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,4);
  }
  return (uint)this;
}

/* ref: FUN_00de1d20 */
GEN_FRAME unsigned int F_00de1d20(unsigned int gen_a0)
{
  GEN_ENTER(0xde1d20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,4);
  }
  return;
}

/* ref: FUN_00de1d50 */
GEN_FRAME unsigned int F_00de1d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde1d50u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 - 1;
  while (-1 < iVar1) {
    this = *(undefined * PTR32 *)(param_1 + iVar1 * 4);
    if (this != (undefined *)0x0) {
      F_00d91a80(this GEN_EDX_ARG);
    }
    iVar1 = iVar1 - 1;
    *(undefined4 *)(param_1 + 4 + iVar1 * 4) = 0;
  }
  return;
}

/* ref: FUN_00de1d80 */
GEN_FRAME uint GEN_THISCALL F_00de1d80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde1d80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,4);
  }
  return (uint)this;
}

/* ref: FUN_00de1e00 */
GEN_FRAME unsigned int F_00de1e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde1e00u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 - 1;
  while (-1 < iVar1) {
    this = *(undefined * PTR32 *)(param_1 + iVar1 * 4);
    if (this != (undefined *)0x0) {
      F_00d91a80(this GEN_EDX_ARG);
    }
    iVar1 = iVar1 - 1;
    *(undefined4 *)(param_1 + 4 + iVar1 * 4) = 0;
  }
  return;
}

/* ref: FUN_00de1e30 */
GEN_FRAME uint GEN_THISCALL F_00de1e30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde1e30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de1ee0 */
GEN_NOFRAME uint GEN_THISCALL F_00de1ee0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde1ee0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de1f50 */
GEN_FRAME uint GEN_THISCALL F_00de1f50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde1f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de1fc0 */
GEN_NOFRAME uint GEN_THISCALL F_00de1fc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde1fc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de2030 */
GEN_NOFRAME uint GEN_THISCALL F_00de2030(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde2030u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de20a0 */
GEN_NOFRAME uint GEN_THISCALL F_00de20a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde20a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de2120 */
GEN_FRAME uint F_00de2120(unsigned int gen_a0)
{
  GEN_ENTER(0xde2120u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00de2150 */
GEN_NOFRAME uint GEN_THISCALL F_00de2150(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xde2150u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = *(int *)((int)this + 0x1c);
  iVar4 = *(int *)((int)this + 0x20) - 1;
  while (-1 < iVar4) {
    pvVar2 = *(undefined * PTR32 *)(iVar1 + iVar4 * 4);
    if (pvVar2 != (undefined *)0x0) {
      F_00d91a80(pvVar2 GEN_EDX_FWD);
    }
    iVar4 = iVar4 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar4 * 4) = 0;
  }
  iVar1 = *(int *)((int)this + 0x24);
  *(undefined4 *)((int)this + 0x20) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x1c),iVar1 * 4);
  }
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0x80000000;
  if (*(undefined * PTR32 *)((int)this + 0x18) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 0x18) GEN_EDX_ARG);
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  iVar4 = *(int *)((int)this + 0x10) - 1;
  iVar1 = *(int *)((int)this + 0xc);
  while (-1 < iVar4) {
    pvVar2 = *(undefined * PTR32 *)(iVar1 + iVar4 * 4);
    if (pvVar2 != (undefined *)0x0) {
      F_00d91a80(pvVar2 GEN_EDX_ARG);
    }
    iVar4 = iVar4 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar4 * 4) = 0;
  }
  iVar1 = *(int *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x10) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0xc),iVar1 * 4);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  if (*(undefined * PTR32 *)((int)this + 8) != (undefined *)0x0) {
    uVar3 = F_00d91a80(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG);
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
    return uVar3;
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return 0;
}

/* ref: hkxMeshSection::vf0 */
GEN_FRAME uint GEN_THISCALL F_00de2250(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xde2250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00de2150(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00de2290 */
GEN_FRAME uint F_00de2290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde2290u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00de22b0 */
GEN_FRAME unsigned int F_00de22b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde22b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != 0) {
    F_00de7f70(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00de22d0 */
GEN_FRAME uint F_00de22d0(unsigned int gen_a0)
{
  GEN_ENTER(0xde22d0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00de22e0 */
GEN_NOFRAME uint F_00de22e0(void)
{
  GEN_ENTER(0xde22e0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x30];
  
  F_00de7f70(((uint *)(gen_frame + 0x0)) GEN_EDX_ARG,0);
  return ((uint *)(gen_frame + 0x0))[0];
}

/* ref: FUN_00de2310 */
GEN_FRAME uint F_00de2310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde2310u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00de2330 */
GEN_FRAME uint F_00de2330(unsigned int gen_a0)
{
  GEN_ENTER(0xde2330u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00de2340 */
GEN_FRAME unsigned int F_00de2340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde2340u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114ae9c));
    F_00d91350(param_1 + 2 GEN_EDX_ARG,param_2);
    F_00d91350(param_1 + 4 GEN_EDX_ARG,param_2);
    F_00d91350(param_1 + 5 GEN_EDX_ARG,param_2);
    F_00d91350(param_1 + 6 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00de2380 */
GEN_NOFRAME uint F_00de2380(void)
{
  GEN_ENTER(0xde2380u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x40];
  
  F_00d91350(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,0);
  F_00d91350(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,0);
  F_00d91350(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,0);
  F_00d91350(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG,0);
  return 0x114ae9c;
}

