#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00bcd470 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00bcd470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbcd470u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  char * pcVar1;
  char cVar2;
  char * pcVar3;
  
  *(char * PTR32 *)((int)this + 4) = param_1;
  *(undefined2 *)this = 0;
  cVar2 = *param_1;
  pcVar3 = param_1;
  while (cVar2 != '\0') {
    *(short *)this = *(short *)this + (short)cVar2;
    pcVar1 = pcVar3 + 1;
    pcVar3 = pcVar3 + 1;
    cVar2 = *pcVar1;
  }
  return 0;
}

/* ref: FUN_00bcd4b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bcd4b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcd4b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) - 1;
  uVar1 = *(uint *)((int)this + 0x54);
  if (((*(uint *)((int)this + 0x5c) >> 3 & 1) == 0) && (uVar1 == 0)) {
    F_00b5ce20(REFG(void * PTR32, 0x14c4e90) GEN_EDX_FWD,this);
    uVar1 = (*((code *)GEN_TOP(**(undefined4 * PTR32 *)this)))(this,1);
  }
  return uVar1;
}

/* ref: FUN_00bcd4e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bcd4e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbcd4e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  byte * pbVar2;
  int iVar3;
  byte * pbVar4;
  bool bVar5;
  
  if (*(short *)((int)this + 0x24) == *(short *)(param_1 + 8)) {
    pbVar4 = *(byte * PTR32 *)(param_1 + 4);
    pbVar2 = *(byte * PTR32 *)((int)this + 0x20);
    do {
      bVar1 = *pbVar2;
      bVar5 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_00bcd516: ;
        iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_00bcd51b;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar5 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_00bcd516;
      pbVar2 = pbVar2 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00bcd51b: ;
    if (iVar3 == 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00bcd530 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00bcd530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(short * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbcd530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(short * param_1 = (short *)(uintptr_t)gen_a1;)
  byte bVar1;
  byte * pbVar2;
  int iVar3;
  byte * pbVar4;
  bool bVar5;
  
  if (*(short *)((int)this + 0x24) == *param_1) {
    pbVar4 = *(byte * PTR32 *)(param_1 + 2);
    pbVar2 = *(byte * PTR32 *)((int)this + 0x20);
    do {
      bVar1 = *pbVar2;
      bVar5 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_00bcd565: ;
        iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_00bcd56a;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar5 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_00bcd565;
      pbVar2 = pbVar2 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00bcd56a: ;
    if (iVar3 == 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00bcd580 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bcd580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbcd580u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  
  iVar3 = (int)this + 0x10;
  iVar2 = (int)this + 0x10;
  while (iVar1 = iVar3, iVar1 != 0) {
    uVar4 = 0;
    do {
      if (*(int *)(iVar1 + uVar4 * 4) == 0) {
        *(undefined4 *)(iVar1 + uVar4 * 4) = param_1;
        return uVar4;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 2);
    iVar2 = iVar1;
    iVar3 = *(int *)(iVar1 + 8);
  }
  puVar5 = (undefined4 *)F_00406b90(0xc,0,0);
  if (puVar5 != (undefined4 *)0x0) {
    puVar5[2] = 0;
    *puVar5 = 0;
    puVar5[1] = 0;
    *puVar5 = param_1;
    *(undefined4 * PTR32 *)(iVar2 + 8) = puVar5;
    return (uint)puVar5;
  }
  *(undefined4 *)&REFG(undefined, 0x0) = param_1;
  *(undefined4 *)(iVar2 + 8) = 0;
  return 0;
}

/* ref: FUN_00bcd630 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bcd630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcd630u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1106590));
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1c) =
       (*(undefined * PTR32 (*)[1])REFP(0x1106588));
  *(undefined1 *)((int)this + 0x26) = 0x30;
  *(undefined2 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x50) = 0xffffffff;
  *(uint *)((int)this + 0x5c) = *(uint *)((int)this + 0x5c) & 0xfffffff4 | 4;
  return (uint)this;
}

/* ref: FUN_00bcd680 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bcd680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcd680u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1106590));
  if (*(int *)((int)this + 0xc) != 0) {
    F_0050c620(*(int *)((int)this + 0xc),0,0);
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  iVar2 = *(int *)((int)this + 0x18);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    F_00406ad0(iVar2);
    iVar2 = iVar1;
  }
  uVar3 = *(uint *)((int)this + 0x20);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1c) =
       (*(undefined * PTR32 (*)[1])REFP(0x1106588));
  if ((uVar3 != 0) && (uVar3 != (int)this + 0x26U)) {
    uVar4 = F_00406b30(uVar3);
    uVar3 = (uint)uVar4;
    *(undefined4 *)((int)this + 0x20) = 0;
  }
  return uVar3;
}

/* ref: FUN_00bcd6f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bcd6f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(uint param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xbcd6f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(uint param_4 = (uint)gen_a4;)
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  undefined4 * puVar2;
  
  *(uint *)((int)this + 0x5c) =
       *(uint *)((int)this + 0x5c) ^ ((param_4 & 0xff) * 4 ^ *(uint *)((int)this + 0x5c)) & 4;
  if ((char)param_4 == '\0') {
    puVar2 = &(*(undefined4 *)(gen_frame + 0x4));
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined1 *)(gen_frame + 0x26)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined2 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 5;
    (*(undefined1 *)(gen_frame + 0x18)) = 0xff;
    (*(undefined4 *)(gen_frame + 0x1c)) = 5000;
    (*(undefined4 *)(gen_frame + 0x22)) = 1;
  }
  else {
    puVar2 = (undefined4 *)0x0;
  }
  uVar1 = F_00513d20(param_2,param_3,param_1,puVar2,0,0);
  *(uint *)((int)this + 0x5c) = *(uint *)((int)this + 0x5c) | 1;
  *(uint *)((int)this + 0xc) = uVar1;
  return uVar1;
}

/* ref: FUN_00bcd780 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bcd780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbcd780u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  undefined4 * puVar2;
  
  *(uint *)((int)this + 0x5c) =
       *(uint *)((int)this + 0x5c) ^ ((param_2 & 0xff) * 4 ^ *(uint *)((int)this + 0x5c)) & 4;
  if ((char)param_2 == '\0') {
    puVar2 = &(*(undefined4 *)(gen_frame + 0x4));
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined1 *)(gen_frame + 0x26)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined2 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 5;
    (*(undefined1 *)(gen_frame + 0x18)) = 0xff;
    (*(undefined4 *)(gen_frame + 0x1c)) = 5000;
    (*(undefined4 *)(gen_frame + 0x22)) = 1;
  }
  else {
    puVar2 = (undefined4 *)0x0;
  }
  uVar1 = F_00513dc0(param_1,puVar2,0,0);
  *(uint *)((int)this + 0x5c) = *(uint *)((int)this + 0x5c) | 1;
  *(uint *)((int)this + 0xc) = uVar1;
  return uVar1;
}

/* ref: FUN_00bcd800 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bcd800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbcd800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 0xc) + 0x88)));
  iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar2), 0);
  if (iVar1 == 2) {
    piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 0xc) + 0x8c)));
    iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar2), 0);
    if (iVar1 < 8) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x44))))(*(int * PTR32 *)((int)this + 0xc) GEN_EDX_FWD);
      *param_1 = uVar3;
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x5c))))(*(int * PTR32 *)((int)this + 0xc) GEN_EDX_ARG);
      return uVar3;
    }
  }
  return 0;
}

/* ref: FUN_00bcd860 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00bcd860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcd860u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  
  if ((*(uint *)((int)this + 0x5c) & 2) == 0) {
    if ((*(uint *)((int)this + 0x5c) & 1) == 0) {
      return 0;
    }
    piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 0xc) + 0x88)));
    iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar2), 0);
    if (iVar1 == 2) {
      piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 0xc) + 0x8c)));
      iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar2), 0);
      if (iVar1 < 8) {
        *(uint *)((int)this + 0x5c) = *(uint *)((int)this + 0x5c) & 0xfffffffe;
        return 0;
      }
      *(uint *)((int)this + 0x5c) = *(uint *)((int)this + 0x5c) | 2;
    }
  }
  return 1;
}

/* ref: FUN_00bcd8a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bcd8a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbcd8a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  
  puVar1 = (undefined4 *)((int)this + 0x10);
  puVar6 = (undefined4 *)0x0;
  puVar2 = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  do {
    puVar3 = puVar2;
    iVar5 = 0;
    do {
      if (puVar3[iVar5] == param_1) {
        puVar3[iVar5] = 0;
        if ((puVar3 == puVar1) && (puVar3[2] == 0)) {
          return (uint)puVar3;
        }
        iVar5 = 0;
        do {
          if (puVar3[iVar5] != 0) {
            return (uint)puVar3;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < 2);
        puVar2 = (undefined4 *)puVar3[2];
        if (puVar3 != puVar1) {
          puVar6[2] = puVar2;
          uVar4 = F_00406ad0(puVar3);
          return uVar4;
        }
        *puVar3 = *puVar2;
        puVar3[1] = puVar2[1];
        puVar3[2] = puVar2[2];
        uVar4 = F_00406ad0(puVar2);
        return uVar4;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 2);
    puVar2 = (undefined4 *)puVar3[2];
    puVar6 = puVar3;
    if ((undefined4 *)puVar3[2] == (undefined4 *)0x0) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_00bcd930 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bcd930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbcd930u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  __declspec(align(16)) undefined1 gen_frame[0x110];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  F_00bcd320((undefined *)((int)this + 0x1c) GEN_EDX_FWD,param_1);
  *(undefined4 *)((int)this + 0x50) = 0xffffffff;
  F_00c472af(((undefined1 *)(gen_frame + 0x4)),0x104,"cut/%s.cutb",param_1);
  F_004ff300(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,3);
  uVar1 = F_00bcd6f0(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x0)),param_2,param_3);
  *(undefined4 *)((int)this + 0x58) = 1;
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00bcd9c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bcd9c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xbcd9c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  __declspec(align(16)) undefined1 gen_frame[0x110];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  F_00bcd320((undefined *)((int)this + 0x1c) GEN_EDX_FWD,param_1);
  *(undefined4 *)((int)this + 0x50) = param_2;
  F_00c472af(((undefined1 *)(gen_frame + 0x4)),0x104,"chara/action/%s.tmb",param_1);
  uVar1 = F_00bcd6f0(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),param_3,param_4,param_5);
  *(undefined4 *)((int)this + 0x58) = 2;
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00bcda50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bcda50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xbcda50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  
  F_00bcd320((undefined *)((int)this + 0x1c) GEN_EDX_FWD,param_1);
  *(undefined4 *)((int)this + 0x50) = 0xffffffff;
  uVar1 = F_00bcd6f0(this GEN_EDX_ARG,*(undefined4 *)((int)this + 0x20),param_2,param_3,param_4);
  *(undefined4 *)((int)this + 0x58) = 3;
  return uVar1;
}

/* ref: FUN_00bcda90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bcda90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbcda90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  __declspec(align(16)) undefined1 gen_frame[0x110];
  uint uVar1;
  char * _Format;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  F_00bcd320((undefined *)((int)this + 0x1c) GEN_EDX_FWD,param_1);
  *(undefined4 *)((int)this + 0x50) = 0xffffffff;
  if ((char)param_3 == '\0') {
    _Format = "%s.tmb";
  }
  else {
    _Format = "%s";
  }
  F_00c472af(((char *)(gen_frame + 0x4)),0x104,_Format,param_1);
  uVar1 = F_00bcd780(this GEN_EDX_ARG,((char *)(gen_frame + 0x4)),param_2);
  *(undefined4 *)((int)this + 0x58) = 4;
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00bcdb30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bcdb30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbcdb30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  byte * pbVar2;
  int iVar3;
  byte * pbVar4;
  bool bVar5;
  
  if (*(short *)((int)this + 8) == *(short *)(param_1 + 8)) {
    pbVar4 = *(byte * PTR32 *)(param_1 + 4);
    pbVar2 = *(byte * PTR32 *)((int)this + 4);
    do {
      bVar1 = *pbVar2;
      bVar5 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_00bcdb66: ;
        iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_00bcdb6b;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar5 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_00bcdb66;
      pbVar2 = pbVar2 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00bcdb6b: ;
    if (iVar3 == 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00bcdb80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bcdb80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(short * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbcdb80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(short * param_1 = (short *)(uintptr_t)gen_a1;)
  byte bVar1;
  byte * pbVar2;
  int iVar3;
  byte * pbVar4;
  bool bVar5;
  
  if (*(short *)((int)this + 8) == *param_1) {
    pbVar4 = *(byte * PTR32 *)(param_1 + 2);
    pbVar2 = *(byte * PTR32 *)((int)this + 4);
    do {
      bVar1 = *pbVar2;
      bVar5 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_00bcdbb5: ;
        iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_00bcdbba;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar5 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_00bcdbb5;
      pbVar2 = pbVar2 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00bcdbba: ;
    if (iVar3 == 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: Client::System::Scheduler::Resource::SchedulerResource::ResourceName::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bcdbe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbcdbe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined * pRVar1;
  
  pRVar1 = *(undefined * PTR32 *)(this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1106588));
  if ((pRVar1 != (undefined *)0x0) && (pRVar1 != this + 10)) {
    F_00406b30(pRVar1);
    *(undefined4 *)(this + 4) = 0;
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bcdc30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bcdc30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbcdc30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bcdc50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bcdc50(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbcdc50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = 0;
  in_ecx[1] = 0;
  in_ecx[3] = 0;
  in_ecx[2] = 0;
  *(undefined1 *)(in_ecx + 7) = 0;
  *(undefined1 *)((int)in_ecx + 0x22) = 0;
  in_ecx[9] = 0;
  in_ecx[4] = 5;
  *(undefined1 *)(in_ecx + 5) = 0xff;
  in_ecx[6] = 5000;
  *(undefined4 *)((int)in_ecx + 0x1e) = 1;
  *(undefined1 *)((int)in_ecx + 0x1d) = (undefined1)param_2;
  return (uint)in_ecx;
}

/* ref: Client::System::Scheduler::Resource::SchedulerResource::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bcdc90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbcdc90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  F_00bcd680(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bcdcc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bcdcc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbcdcc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(int *)this + param_1 * 0x18 + (int)this;
}

/* ref: FUN_00bcdd30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bcdd30(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbcdd30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00bcdd40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bcdd40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbcdd40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *(uint *)(in_ecx + 0x24) = param_2;
  return param_2;
}

/* ref: FUN_00bcdd60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bcdd60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbcdd60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *(uint *)(in_ecx + 0x28) = param_2;
  return param_2;
}

/* ref: FUN_00bcdd80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bcdd80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbcdd80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *(uint *)(in_ecx + 0x10) = param_2;
  return param_2;
}

/* ref: FUN_00bcdd90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bcdd90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbcdd90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *(uint *)(in_ecx + 0x1c) = param_2;
  return param_2;
}

/* ref: FUN_00bcdde0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bcdde0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbcdde0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *(uint *)(in_ecx + 0x20) = param_2;
  return param_2;
}

/* ref: FUN_00bcddf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bcddf0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbcddf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *(uint *)(in_ecx + 0xd8) = param_2;
  return param_2;
}

/* ref: FUN_00bcde10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bcde10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbcde10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *(uint *)(in_ecx + 0x28) = param_2;
  return param_2;
}

/* ref: FUN_00bcde20 */
GEN_LIB GEN_FRAME float10 F_00bcde20(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbcde20u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00bcde40 */
GEN_LIB GEN_FRAME byte F_00bcde40(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbcde40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  byte bVar1;
  
  bVar1 = F_00b5fe80(*param_2 + (int)param_2);
  return bVar1;
}

/* ref: FUN_00bcde60 */
GEN_LIB GEN_FRAME byte F_00bcde60(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbcde60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  byte bVar1;
  
  bVar1 = F_00b5fea0(*(undefined4 *)(param_1 + 8) GEN_EDX_ARG,*param_2 + (int)param_2);
  return bVar1;
}

/* ref: FUN_00bcde80 */
GEN_LIB GEN_FRAME byte F_00bcde80(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbcde80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  byte bVar1;
  
  bVar1 = F_00b5fec0(*param_2 + (int)param_2);
  return bVar1;
}

/* ref: FUN_00bcdea0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00bcdea0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbcdea0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  int * piVar1;
  int iVar2;
  
  if (*param_1 == 0x424c4d54) {
    piVar1 = param_1 + 3;
    iVar2 = param_1[2];
    if (iVar2 != 0) {
      do {
        iVar2 = iVar2 - 1;
        if (*piVar1 == *(int *)REFG(undefined * PTR32, 0x1343188)) {
          return (uint)(piVar1 + 2);
        }
        piVar1 = (int *)((int)piVar1 + piVar1[1]);
      } while (iVar2 != 0);
    }
  }
  return 0;
}

/* ref: FUN_00bcdee0 */
GEN_LIB GEN_FRAME byte F_00bcdee0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbcdee0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0xc) + 0x20))) = param_2;
  return 1;
}

/* ref: FUN_00bcdf00 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00bcdf00(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbcdf00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  int * piVar2;
  int iVar3;
  
  if (*param_1 != 0x424c4d54) {
    return 0xffffffff;
  }
  iVar3 = param_1[2];
  piVar2 = param_1 + 3;
  while( true ) {
    if (iVar3 == 0) {
      return 0xffffffff;
    }
    iVar3 = iVar3 - 1;
    if ((*piVar2 == 0x30313043) &&
       (uVar1 = F_00bccde0(param_2 GEN_EDX_ARG,(uint)(piVar2 + 2),0,0,7), uVar1 != 0)) break;
    piVar2 = (int *)((int)piVar2 + piVar2[1]);
  }
  return 1;
}

/* ref: FUN_00bcdf60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bcdf60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbcdf60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 0xa48);
  uVar2 = param_1 + 0xfU & 0xfffffff0;
  *(int *)((int)this + 0xa4c) = *(int *)((int)this + 0xa4c) - uVar2;
  *(uint *)((int)this + 0xa48) = uVar1 + uVar2;
  return uVar1;
}

/* ref: FUN_00bcdf90 */
GEN_LIB GEN_FRAME byte GEN_STDCALL F_00bcdf90(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbcdf90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  int iVar5;
  
  if (*param_1 != 0x42545543) {
    return 0;
  }
  piVar4 = param_1 + 3;
  iVar3 = param_1[2];
  while (iVar3 != 0) {
    iVar3 = iVar3 - 1;
    if (*piVar4 == 0x4c415443) {
      iVar1 = piVar4[2];
      F_00b60910(param_2 GEN_EDX_ARG,*(undefined4 *)((int)piVar4 + iVar1 + 0x14));
      iVar5 = 0;
      if (0 < *(int *)((int)piVar4 + iVar1 + 0x14)) {
        do {
          iVar2 = *(int *)((int)piVar4 + iVar1 + 0x10) + iVar1 + 8;
          F_00b5fd40(param_2 GEN_EDX_ARG,(int)piVar4 + *(int *)((int)piVar4 + iVar5 * 4 + iVar2) + iVar2,iVar5
                      );
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)((int)piVar4 + iVar1 + 0x14));
      }
    }
    piVar4 = (int *)((int)piVar4 + piVar4[1]);
  }
  return 1;
}

/* ref: FUN_00bce010 */
GEN_LIB GEN_FRAME byte F_00bce010(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbce010u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  undefined * this;
  uint uVar1;
  int iVar2;
  int iVar3;
  int local_8;
  
  this = *(undefined * PTR32 *)(param_1 + 8);
  iVar2 = 0;
  if ((this != (undefined *)0x0) && (local_8 = *(int *)(param_1 + 0x34), 0 < param_2[1])) {
    param_1 = 0;
    do {
      iVar3 = *param_2 + param_1 + (int)param_2;
      uVar1 = F_00b60e70(this GEN_EDX_ARG,iVar3,iVar2);
      if (*(int *)(iVar3 + 4) != 3) {
        *(undefined4 *)(uVar1 + 0x28) = *(undefined4 *)(local_8 + 0x10);
        local_8 = *(int *)(local_8 + 0xc);
      }
      param_1 = param_1 + 0x18;
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_2[1]);
  }
  return 1;
}

/* ref: FUN_00bce080 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00bce080(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbce080u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  int * piVar1;
  int iVar2;
  
  if (*param_1 == 0x424c4d54) {
    piVar1 = param_1 + 3;
    iVar2 = param_1[2];
    if (iVar2 != 0) {
      do {
        iVar2 = iVar2 - 1;
        if (*piVar1 == *(int *)REFG(undefined * PTR32, 0x134318c)) {
          return (int)piVar1 + piVar1[8] + 8;
        }
        piVar1 = (int *)((int)piVar1 + piVar1[1]);
      } while (iVar2 != 0);
    }
  }
  return 0;
}

/* ref: FUN_00bce0c0 */
GEN_LIB GEN_FRAME byte F_00bce0c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbce0c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xc) + 100))))(*(int * PTR32 *)(param_1 + 0xc) GEN_EDX_ARG);
  *(int *)(uVar1 + 0xd8) = *param_2 + (int)param_2;
  return 1;
}

/* ref: FUN_00bce0f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bce0f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbce0f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x40);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (**(ushort * PTR32 *)(iVar1 + 0x10) == param_1) break;
    iVar1 = *(int *)(iVar1 + 0xc);
  }
  return 0x60;
}

/* ref: FUN_00bce120 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00bce120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbce120u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int iVar1;
  ushort * puVar2;
  undefined * this_00;
  
  iVar1 = *(int *)((int)this + 0x40);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    puVar2 = *(ushort * PTR32 *)(iVar1 + 0x10);
    if (*puVar2 == param_2) break;
    iVar1 = *(int *)(iVar1 + 0xc);
  }
  iVar1 = *(int *)((int)this + 0xa48);
  *(int *)((int)this + 0xa4c) = *(int *)((int)this + 0xa4c) - 0x60;
  *(int *)((int)this + 0xa48) = iVar1 + 0x60;
  this_00 = (undefined *)F_00bd2d10(param_1 GEN_EDX_FWD,iVar1);
  F_00c21f80(this_00 GEN_EDX_ARG,puVar2 + 2,0,0);
  return 1;
}

/* ref: FUN_00bce180 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00bce180(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbce180u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  int * piVar1;
  char * pcVar2;
  int iVar3;
  
  if (*param_1 == 0x424c4d54) {
    piVar1 = param_1 + 3;
    iVar3 = param_1[2];
    if (iVar3 != 0) {
      while (iVar3 = iVar3 - 1, *piVar1 != 0x50504d54) {
        piVar1 = (int *)((int)piVar1 + piVar1[1]);
        if (iVar3 == 0) {
          return 0;
        }
      }
      pcVar2 = ((char *)GEN_TOP((piVar1[2] + (int)(piVar1 + 2))));
      if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
        return (uint)pcVar2;
      }
    }
  }
  return 0;
}

/* ref: FUN_00bce230 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00bce230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbce230u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    uVar2 = param_1;
    do {
      uVar1 = *(uint *)(uVar2 + 0xc);
      if ((uVar2 < (int)this + 0x48U) || ((int)this + 0xa48U <= uVar2)) {
        F_00406ad0(uVar2);
      }
      uVar2 = uVar1;
    } while (uVar1 != 0);
  }
  return 0;
}

/* ref: FUN_00bce270 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00bce270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbce270u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  int * piVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int * piVar8;
  int * piVar9;
  byte local_5;
  
  local_5 = 1;
  if (*param_1 != 0x42545543) {
    return 0;
  }
  *(int *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0x34) = 0;
  iVar6 = param_1[2];
  param_2 = 0;
  piVar9 = param_1 + 3;
  while (iVar6 != 0) {
    iVar6 = iVar6 - 1;
    if (*piVar9 == 0x4c545443) {
      piVar8 = (int *)((int)piVar9 + piVar9[2] + 8);
      if (*piVar8 != 0x424c4d54) {
        return 0;
      }
      iVar7 = piVar8[2];
      piVar2 = piVar8 + 3;
      while (iVar7 != 0) {
        iVar7 = iVar7 - 1;
        if (*piVar2 == 0x48444d54) {
          piVar2 = (int *)F_00406b90(0x40,0,0);
          if (piVar2 == (int *)0x0) {
            piVar2 = (int *)0x0;
          }
          else {
            *piVar2 = 0;
            piVar2[1] = 0;
            piVar2[2] = 0;
            piVar2[3] = 0;
            piVar2[4] = 0;
            piVar2[5] = 0;
            piVar2[6] = 0;
            piVar2[7] = 0;
            piVar2[8] = 0;
            piVar2[9] = 0;
            piVar2[10] = 0;
            *(undefined2 *)(piVar2 + 0xb) = 1;
            *(undefined1 *)((int)piVar2 + 0x2e) = 0;
          }
          *piVar2 = param_2;
          param_2 = param_2 + 1;
          piVar2[4] = (int)piVar8;
          piVar8 = piVar2 + 2;
          iVar7 = *(int *)((int)this + 0x34);
          if (*(int *)((int)this + 0x34) == 0) {
            *piVar8 = 0;
            piVar2[3] = 0;
            *(int * PTR32 *)((int)this + 0x34) = piVar2;
          }
          else {
            do {
              iVar3 = iVar7;
              iVar7 = *(int *)(iVar3 + 0xc);
            } while (*(int *)(iVar3 + 0xc) != 0);
            piVar4 = piVar2;
            if (piVar8 == (int *)0x0) {
              piVar4 = (int *)0x0;
            }
            *(int * PTR32 *)(iVar3 + 0xc) = piVar4;
            *piVar8 = iVar3;
            piVar2[3] = 0;
          }
          break;
        }
        piVar2 = (int *)((int)piVar2 + piVar2[1]);
      }
    }
    piVar9 = (int *)((int)piVar9 + piVar9[1]);
  }
  iVar6 = param_1[2];
  piVar9 = param_1 + 3;
  do {
    if (iVar6 == 0) {
      iVar6 = *(int *)((int)this + 0x34);
      while (iVar6 != 0) {
        iVar7 = *(int *)(iVar6 + 0xc);
        F_00406ad0(iVar6);
        iVar6 = iVar7;
      }
      return local_5;
    }
    iVar6 = iVar6 - 1;
    uVar5 = 0;
    do {
      if (*piVar9 == *((int *)GEN_TOP((&REFG(undefined * PTR32, 0x1343060))[(int)(uVar5 * 2)]))) {
        bVar1 = (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x1343064))[(int)(uVar5 * 2)])))(this,piVar9 + 2,uVar5);
        if (bVar1 == 0) {
          local_5 = 0;
        }
        break;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 5);
    piVar9 = (int *)((int)piVar9 + piVar9[1]);
  } while( true );
}

/* ref: FUN_00bce410 */
GEN_LIB GEN_FRAME unsigned int F_00bce410(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbce410u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  int * this;
  undefined * this_00;
  code * pcVar3;
  int iVar4;
  
  this = *((int * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1371298) + 0x38)));
  iVar4 = *param_2 + (int)param_2;
  this_00 = *(undefined * PTR32 *)(param_1 + 8);
  F_006906f0(this GEN_EDX_ARG);
  iVar1 = *(int *)(iVar4 + 0x14);
  iVar2 = *(int *)(iVar4 + 0x18);
  this[0xc] = *(int *)(iVar4 + 0x10);
  this[0xd] = iVar1;
  this[0xe] = iVar2;
  pcVar3 = *(gen_code32 *)(*this + 0x10);
  this[9] = this[9] | 2;
  (*pcVar3)(this);
  F_0069c300(REFG(void * PTR32, 0x1371298) GEN_EDX_ARG,1);
  *(undefined4 *)(iVar4 + 8) = 1;
  F_00b60a70(this_00 GEN_EDX_ARG,iVar4);
  return;
}

/* ref: FUN_00bce490 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00bce490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbce490u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined3 extraout_var = 0;
  int * piVar6;
  uint uVar7;
  int local_c;
  byte local_5;
  
  local_5 = 1;
  if (*param_1 != 0x424c4d54) {
    return 0;
  }
  *(int * PTR32 *)((int)this + 0xc) = param_2;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0xa48) = 0;
  iVar4 = 4;
  puVar5 = (undefined4 *)((int)this + 0x34);
  do {
    iVar4 = iVar4 - 1;
    puVar5 = puVar5 - 1;
    *puVar5 = 0;
  } while (iVar4 != 0);
  iVar4 = param_1[2];
  piVar6 = param_1 + 3;
  do {
    if (iVar4 == 0) {
LAB_00bce6ec: ;
      *(undefined4 *)((int)this + 0xa48) = 0;
      if (local_5 != 0) {
        piVar6 = param_1 + 3;
        local_c = param_1[2];
        param_3 = 0;
        if (local_c != 0) {
          do {
            local_c = local_c - 1;
            if (*piVar6 == *(int *)REFG(undefined * PTR32, 0x1343094)) {
              bVar3 = ((code *)REFG(gen_code32, 0x01343098))(this,piVar6 + 2);
              param_3 = param_3 + (int)CONCAT31(extraout_var,bVar3);
            }
            piVar6 = (int *)((int)piVar6 + piVar6[1]);
          } while (local_c != 0);
          if (param_3 != 0) {
            uVar7 = F_00bc1ec0(param_2 GEN_EDX_ARG,param_3);
            *(uint *)((int)this + 0xa48) = uVar7;
            if (uVar7 == 0) {
              local_5 = 0;
            }
          }
        }
        *(int *)((int)this + 0xa4c) = param_3;
        if (local_5 != 0) {
          piVar6 = param_1 + 3;
          iVar4 = param_1[2];
          while (iVar4 != 0) {
            iVar4 = iVar4 - 1;
            uVar7 = 0;
            do {
              if (*piVar6 == *((int *)GEN_TOP((&REFG(undefined * PTR32, 0x134309c))[(int)(uVar7 * 2)]))) {
                bVar3 = (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x13430a0))[(int)(uVar7 * 2)])))(this,piVar6 + 2);
                if (bVar3 == 0) {
                  local_5 = 0;
                }
                break;
              }
              uVar7 = uVar7 + 1;
            } while (uVar7 < 3);
            piVar6 = (int *)((int)piVar6 + piVar6[1]);
          }
        }
      }
      uVar7 = *(uint *)((int)this + 0x40);
      while (uVar2 = uVar7, uVar2 != 0) {
        uVar7 = *(uint *)(uVar2 + 0xc);
        if ((uVar2 < (int)this + 0x48U) || ((int)this + 0xa48U <= uVar2)) {
          F_00406ad0(uVar2);
        }
      }
      uVar7 = *(uint *)((int)this + 0x44);
      while (uVar2 = uVar7, uVar2 != 0) {
        uVar7 = *(uint *)(uVar2 + 0xc);
        if ((uVar2 < (int)this + 0x48U) || ((int)this + 0xa48U <= uVar2)) {
          F_00406ad0(uVar2);
        }
      }
      uVar7 = *(uint *)((int)this + 0x3c);
      while (uVar2 = uVar7, uVar2 != 0) {
        uVar7 = *(uint *)(uVar2 + 0xc);
        if ((uVar2 < (int)this + 0x48U) || ((int)this + 0xa48U <= uVar2)) {
          F_00406ad0(uVar2);
        }
      }
      uVar7 = *(uint *)((int)this + 0x38);
      while (uVar2 = uVar7, uVar2 != 0) {
        uVar7 = *(uint *)(uVar2 + 0xc);
        if ((uVar2 < (int)this + 0x48U) || ((int)this + 0xa48U <= uVar2)) {
          F_00406ad0(uVar2);
        }
      }
      *(undefined4 *)((int)this + 0x38) = 0;
      *(undefined4 *)((int)this + 0x3c) = 0;
      *(undefined4 *)((int)this + 0x44) = 0;
      *(undefined4 *)((int)this + 0x40) = 0;
      return local_5;
    }
    iVar4 = iVar4 - 1;
    uVar7 = 0;
    do {
      if (*piVar6 == *((int *)GEN_TOP((&REFG(undefined * PTR32, 0x1343088))[(int)(uVar7)]))) {
        iVar1 = *(int *)((int)this + 0x20);
        if (iVar1 < 0x28) {
          puVar5 = (undefined4 *)(iVar1 * 0x40 + 0x48 + (int)this);
          *(int *)((int)this + 0x20) = iVar1 + 1;
        }
        else {
          puVar5 = (undefined4 *)F_00406b90(0x40,0,0);
          if (puVar5 == (undefined4 *)0x0) {
            puVar5 = (undefined4 *)0x0;
          }
          else {
            *puVar5 = 0;
            puVar5[1] = 0;
            puVar5[2] = 0;
            puVar5[3] = 0;
            puVar5[4] = 0;
            puVar5[5] = 0;
            puVar5[6] = 0;
            puVar5[7] = 0;
            puVar5[8] = 0;
            puVar5[9] = 0;
            puVar5[10] = 0;
            *(undefined2 *)(puVar5 + 0xb) = 1;
            *(undefined1 *)((int)puVar5 + 0x2e) = 0;
          }
        }
        if (puVar5 != (undefined4 *)0x0) {
          puVar5[4] = piVar6 + 2;
          puVar5[7] = piVar6[1] - 8;
          if (uVar7 == 0) {
            puVar5[2] = 0;
            puVar5[3] = *(undefined4 *)((int)this + 0x38);
            if (*(int *)((int)this + 0x38) != 0) {
              *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x38) + 8))) = puVar5;
            }
            *(undefined4 * PTR32 *)((int)this + 0x38) = puVar5;
          }
          else if (uVar7 == 1) {
            puVar5[2] = 0;
            puVar5[3] = *(undefined4 *)((int)this + 0x3c);
            if (*(int *)((int)this + 0x3c) != 0) {
              *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x3c) + 8))) = puVar5;
            }
            *(undefined4 * PTR32 *)((int)this + 0x3c) = puVar5;
          }
          else if (uVar7 == 2) {
            puVar5[2] = 0;
            puVar5[3] = *(undefined4 *)((int)this + 0x40);
            if (*(int *)((int)this + 0x40) != 0) {
              *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x40) + 8))) = puVar5;
            }
            *(undefined4 * PTR32 *)((int)this + 0x40) = puVar5;
          }
          goto LAB_00bce6cb;
        }
        local_5 = 0;
        break;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 3);
    uVar7 = 0;
    do {
      if (*piVar6 == **((int * PTR32 *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x134309c) + uVar7)))) goto LAB_00bce6cb;
      uVar7 = uVar7 + 8;
    } while (uVar7 < 0x18);
    uVar7 = F_00b5c6a0(piVar6);
    if (-1 < (int)uVar7) {
      iVar1 = *(int *)((int)this + 0x20);
      if (iVar1 < 0x28) {
        puVar5 = (undefined4 *)(iVar1 * 0x40 + 0x48 + (int)this);
        *(int *)((int)this + 0x20) = iVar1 + 1;
      }
      else {
        puVar5 = (undefined4 *)F_00406b90(0x40,0,0);
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          *puVar5 = 0;
          puVar5[1] = 0;
          puVar5[2] = 0;
          puVar5[3] = 0;
          puVar5[4] = 0;
          puVar5[5] = 0;
          puVar5[6] = 0;
          puVar5[7] = 0;
          puVar5[8] = 0;
          puVar5[9] = 0;
          puVar5[10] = 0;
          *(undefined2 *)(puVar5 + 0xb) = 1;
          *(undefined1 *)((int)puVar5 + 0x2e) = 0;
        }
      }
      if (puVar5 == (undefined4 *)0x0) {
        local_5 = 0;
        goto LAB_00bce6ec;
      }
      puVar5[4] = piVar6 + 2;
      puVar5[7] = piVar6[1] - 8;
      puVar5[9] = uVar7;
      puVar5[2] = 0;
      puVar5[3] = *(undefined4 *)((int)this + 0x44);
      if (*(int *)((int)this + 0x44) != 0) {
        *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x44) + 8))) = puVar5;
      }
      *(undefined4 * PTR32 *)((int)this + 0x44) = puVar5;
      if (((char)param_3 != '\0') && (uVar7 = F_00b5c750(uVar7), uVar7 == 3)) {
        uVar7 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 100))(param_2 GEN_EDX_ARG);
        *(undefined1 *)(uVar7 + 0xf1) = 1;
      }
    }
LAB_00bce6cb: ;
    if (local_5 == 0) goto LAB_00bce6ec;
    piVar6 = (int *)((int)piVar6 + piVar6[1]);
  } while( true );
}

/* ref: FUN_00bce8b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bce8b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbce8b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  ushort * puVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = *(int *)((int)this + 0x44);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    puVar2 = *(ushort * PTR32 *)(iVar1 + 0x10);
    if (*puVar2 == param_1) break;
    iVar1 = *(int *)(iVar1 + 0xc);
  }
  uVar4 = F_00b5c7b0(*(undefined4 *)(iVar1 + 0x24));
  *(uint *)(iVar1 + 0x28) = uVar4;
  bVar3 = F_00b5c790(*(undefined4 *)(iVar1 + 0x24));
  if (bVar3 != 0) {
    uVar5 = F_00bce0f0(this GEN_EDX_ARG,(uint)puVar2[6]);
    uVar4 = uVar4 + uVar5;
  }
  return uVar4;
}

/* ref: FUN_00bce920 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00bce920(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0xbce920u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  ushort * puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = *(int *)((int)param_1 + 0x44);
  if (iVar4 != 0) {
    while (puVar1 = *(ushort * PTR32 *)(iVar4 + 0x10), *puVar1 != param_3) {
      iVar4 = *(int *)(iVar4 + 0xc);
      if (iVar4 == 0) {
        return 1;
      }
    }
    uVar2 = *(undefined4 *)(iVar4 + 0x24);
    iVar3 = *(int *)((int)param_1 + 0xa48);
    uVar5 = *(int *)(iVar4 + 0x28) + 0xfU & 0xfffffff0;
    *(int *)((int)param_1 + 0xa4c) = *(int *)((int)param_1 + 0xa4c) - uVar5;
    *(uint *)((int)param_1 + 0xa48) = iVar3 + uVar5;
    uVar5 = F_00b5ce50(REFG(undefined4, 0x14c4e90) GEN_EDX_FWD,iVar3,puVar1,uVar2,param_2,param_4);
    if (uVar5 != 0) {
      F_00c22910(param_2 GEN_EDX_ARG,uVar5);
      iVar4 = *(int *)(uVar5 + 0x2c);
      if (iVar4 == 0) {
        *(int *)((int)param_1 + 0x28) = *(int *)((int)param_1 + 0x28) + 1;
      }
      else if (iVar4 == 6) {
        *(int *)((int)param_1 + 0x2c) = *(int *)((int)param_1 + 0x2c) + 1;
      }
      else if (iVar4 == 7) {
        *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) + 1;
      }
      else {
        *(int *)((int)param_1 + 0x30) = *(int *)((int)param_1 + 0x30) + 1;
      }
      if ((*(byte *)(uVar5 + 0x7c) >> 3 & 1) != 0) {
        F_00bce120(param_1 GEN_EDX_ARG,uVar5,(uint)puVar1[6]);
      }
    }
  }
  return 1;
}

/* ref: FUN_00bce9f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bce9f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbce9f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  ushort * puVar2;
  short * psVar3;
  byte bVar4;
  uint uVar5;
  int local_10;
  uint local_8;
  
  iVar1 = *(int *)((int)this + 0x3c);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    puVar2 = *(ushort * PTR32 *)(iVar1 + 0x10);
    if (*puVar2 == param_1) break;
    iVar1 = *(int *)(iVar1 + 0xc);
  }
  local_8 = 0x30;
  local_10 = 0;
  if (0 < *(int *)(puVar2 + 4)) {
    do {
      for (iVar1 = *(int *)((int)this + 0x44); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
        psVar3 = *(short * PTR32 *)(iVar1 + 0x10);
        if (*psVar3 == *((short *)GEN_TOP(((int)puVar2 + *(int *)(puVar2 + 2) + local_10 * 2)))) {
          uVar5 = F_00b5c7b0(*(undefined4 *)(iVar1 + 0x24));
          *(uint *)(iVar1 + 0x28) = uVar5;
          bVar4 = F_00b5c790(*(undefined4 *)(iVar1 + 0x24));
          if (bVar4 == 0) goto LAB_00bcea63;
          iVar1 = *(int *)((int)this + 0x40);
          goto joined_r0x00bceaaf;
        }
      }
      uVar5 = 0;
LAB_00bcea63: ;
      local_8 = local_8 + uVar5;
      local_10 = local_10 + 1;
    } while (local_10 < *(int *)(puVar2 + 4));
  }
  return local_8;
joined_r0x00bceaaf: ;
  if (iVar1 == 0) goto LAB_00bcea63;
  if (**(short * PTR32 *)(iVar1 + 0x10) == psVar3[6]) {
    uVar5 = uVar5 + 0x60;
    goto LAB_00bcea63;
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  goto joined_r0x00bceaaf;
}

/* ref: FUN_00bceae0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00bceae0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0xbceae0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  ushort * puVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte local_5;
  
  iVar4 = *(int *)(param_1 + 0x3c);
  local_5 = 1;
  while( true ) {
    if (iVar4 == 0) {
      return 0;
    }
    puVar1 = *(ushort * PTR32 *)(iVar4 + 0x10);
    if (*puVar1 == param_3) break;
    iVar4 = *(int *)(iVar4 + 0xc);
  }
  iVar4 = *(int *)(param_1 + 0xa48);
  *(int *)(param_1 + 0xa4c) = *(int *)(param_1 + 0xa4c) - 0x30;
  *(int *)(param_1 + 0xa48) = iVar4 + 0x30;
  uVar3 = F_00bec4e0(param_2 GEN_EDX_FWD,iVar4,puVar1);
  iVar4 = 0;
  if (0 < *(int *)(puVar1 + 4)) {
    do {
      bVar2 = F_00bce920(param_1 GEN_EDX_ARG,uVar3,
                           (uint)*((ushort *)GEN_TOP((*(int *)(puVar1 + 2) + iVar4 * 2 + (int)puVar1))),param_4
                          );
      if (bVar2 == 0) {
        local_5 = 0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(puVar1 + 4));
  }
  return local_5;
}

/* ref: FUN_00bceb80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bceb80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbceb80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  ushort * puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar4 = *(int *)((int)this + 0x38);
  uVar5 = 0;
  while( true ) {
    if (iVar4 == 0) {
      return 0;
    }
    puVar2 = *(ushort * PTR32 *)(iVar4 + 0x10);
    if (*puVar2 == (*(uint *)&gen_a1)) break;
    iVar4 = *(int *)(iVar4 + 0xc);
  }
  uVar1 = puVar2[1];
  (*(uint *)&gen_a1) = 1;
  if ((((uVar1 != 0) && (uVar1 != 1)) && (uVar1 < 100)) &&
     ((*(uint *)&gen_a1) = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x20))))(*(int * PTR32 *)((int)this + 0xc) GEN_EDX_FWD,puVar2)
     , (*(uint *)&gen_a1) == 0)) {
    return 0;
  }
  iVar4 = *(int *)(puVar2 + 8);
  do {
    uVar5 = uVar5 + 0x40;
    iVar6 = 0;
    if (0 < iVar4) {
      do {
        uVar3 = F_00bce9f0(this GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((*(int *)(puVar2 + 6) + iVar6 * 2 + (int)puVar2))))
        ;
        uVar5 = uVar5 + uVar3;
        iVar4 = *(int *)(puVar2 + 8);
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar4);
    }
    (*(uint *)&gen_a1) = (*(uint *)&gen_a1) - 1;
  } while ((*(uint *)&gen_a1) != 0);
  return uVar5;
}

/* ref: FUN_00bcec20 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00bcec20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbcec20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  ushort uVar1;
  int iVar2;
  int * piVar3;
  ushort * puVar4;
  byte bVar5;
  uint uVar6;
  float local_14;
  uint local_10;
  int local_c;
  byte local_5;
  
  iVar2 = *(int *)((int)this + 0x38);
  piVar3 = *(int * PTR32 *)((int)this + 0xc);
  local_14 = 0.0;
  local_5 = 1;
  while( true ) {
    if (iVar2 == 0) {
      return 0;
    }
    puVar4 = *(ushort * PTR32 *)(iVar2 + 0x10);
    if (*puVar4 == param_1) break;
    iVar2 = *(int *)(iVar2 + 0xc);
  }
  uVar1 = puVar4[1];
  local_10 = 1;
  param_1 = 0;
  if (((uVar1 == 0) || (uVar1 == 1)) || (99 < uVar1)) {
    iVar2 = *(int *)((int)this + 0xa48);
    *(int *)((int)this + 0xa4c) = *(int *)((int)this + 0xa4c) - 0x40;
    *(int *)((int)this + 0xa48) = iVar2 + 0x40;
    uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xa4))(piVar3 GEN_EDX_FWD,iVar2,puVar4,0);
  }
  else {
    local_10 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x20))(piVar3 GEN_EDX_ARG,puVar4);
    if (local_10 == 0) {
      return 1;
    }
    iVar2 = *(int *)((int)this + 0xa48);
    *(int *)((int)this + 0xa4c) = *(int *)((int)this + 0xa4c) - 0x40;
    *(int *)((int)this + 0xa48) = iVar2 + 0x40;
    uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xa4))(piVar3 GEN_EDX_ARG,iVar2,puVar4,0);
    param_1 = 1;
  }
  if ((uVar6 != 0) && (*(int *)(uVar6 + 0x20) != 0)) {
    while( true ) {
      local_c = 0;
      if (0 < *(int *)(puVar4 + 8)) {
        do {
          bVar5 = F_00bceae0(this GEN_EDX_ARG,uVar6,
                               (uint)*((ushort *)GEN_TOP((*(int *)(puVar4 + 6) + local_c * 2 + (int)puVar4))),
                               local_14);
          if (bVar5 == 0) {
            local_5 = 0;
          }
          local_c = local_c + 1;
        } while (local_c < *(int *)(puVar4 + 8));
      }
      local_10 = local_10 - 1;
      if (local_10 == 0) break;
      iVar2 = *(int *)((int)this + 0xa48);
      *(int *)((int)this + 0xa4c) = *(int *)((int)this + 0xa4c) - 0x40;
      *(int *)((int)this + 0xa48) = iVar2 + 0x40;
      uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xa4))(piVar3 GEN_EDX_ARG,iVar2,puVar4,param_1);
      param_1 = param_1 + 1;
      if (uVar6 == 0) {
        return local_5;
      }
      local_14 = (float)((float10)puVar4[2] + (float10)local_14);
    }
    return local_5;
  }
  return 1;
}

/* ref: FUN_00bceda0 */
GEN_LIB GEN_FRAME uint F_00bceda0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbceda0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  ushort uVar1;
  short * psVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_10;
  uint local_c;
  uint local_8;
  
  uVar3 = 0;
  local_c = 0;
  local_10 = 0;
  if (0 < param_2[1]) {
    do {
      iVar4 = *(int *)((int)param_1 + 0x38);
      iVar5 = 0;
      if (iVar4 != 0) {
LAB_00bcede0: ;
        psVar2 = *(short * PTR32 *)(iVar4 + 0x10);
        if (*psVar2 != *(short *)(*param_2 + local_10 * 2 + (int)param_2)) goto code_r0x00bcedea;
        uVar1 = psVar2[1];
        local_8 = 1;
        if ((((uVar1 == 0) || (uVar1 == 1)) || (99 < uVar1)) ||
           (local_8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)param_1 + 0xc) + 0x20))))
                                (*(int * PTR32 *)((int)param_1 + 0xc) GEN_EDX_ARG,psVar2), local_8 != 0)) {
          iVar4 = *(int *)(psVar2 + 8);
          do {
            iVar5 = iVar5 + 0x40;
            iVar6 = 0;
            if (0 < iVar4) {
              do {
                uVar3 = F_00bce9f0(param_1 GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((*(int *)(psVar2 + 6) + iVar6 * 2 + (int)psVar2)))
                                    );
                iVar5 = iVar5 + uVar3;
                iVar4 = *(int *)(psVar2 + 8);
                iVar6 = iVar6 + 1;
              } while (iVar6 < iVar4);
            }
            local_8 = local_8 - 1;
          } while (local_8 != 0);
          goto LAB_00bcedf3;
        }
      }
LAB_00bcedf1: ;
      iVar5 = 0;
LAB_00bcedf3: ;
      uVar3 = local_c + iVar5;
      local_10 = local_10 + 1;
      local_c = uVar3;
    } while (local_10 < param_2[1]);
  }
  return uVar3;
code_r0x00bcedea: ;
  iVar4 = *(int *)(iVar4 + 0xc);
  if (iVar4 == 0) goto LAB_00bcedf1;
  goto LAB_00bcede0;
}

/* ref: FUN_00bcee80 */
GEN_LIB GEN_FRAME byte F_00bcee80(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbcee80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  ushort uVar1;
  int * piVar2;
  int iVar3;
  short * psVar4;
  bool bVar5;
  byte bVar6;
  uint uVar7;
  int local_1c;
  float local_18;
  uint local_14;
  int local_10;
  int local_c;
  byte local_6;
  
  local_6 = 1;
  local_1c = 0;
  if (param_2[1] < 1) {
    return 1;
  }
LAB_00bceea2: ;
  piVar2 = *(int * PTR32 *)(param_1 + 0xc);
  iVar3 = *(int *)(param_1 + 0x38);
  local_18 = 0.0;
  bVar5 = true;
  for (; iVar3 != 0; iVar3 = *(int *)(iVar3 + 0xc)) {
    psVar4 = *(short * PTR32 *)(iVar3 + 0x10);
    if (*psVar4 == *(short *)(*param_2 + local_1c * 2 + (int)param_2)) {
      uVar1 = psVar4[1];
      local_14 = 1;
      local_c = 0;
      if (((uVar1 == 0) || (uVar1 == 1)) || (99 < uVar1)) {
        iVar3 = *(int *)(param_1 + 0xa48);
        *(int *)(param_1 + 0xa4c) = *(int *)(param_1 + 0xa4c) - 0x40;
        *(int *)(param_1 + 0xa48) = iVar3 + 0x40;
        uVar7 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xa4))(piVar2 GEN_EDX_ARG,iVar3,psVar4,0);
      }
      else {
        local_14 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x20))(piVar2 GEN_EDX_ARG,psVar4);
        if (local_14 == 0) goto LAB_00bcf016;
        iVar3 = *(int *)(param_1 + 0xa48);
        *(int *)(param_1 + 0xa4c) = *(int *)(param_1 + 0xa4c) - 0x40;
        *(int *)(param_1 + 0xa48) = iVar3 + 0x40;
        uVar7 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xa4))(piVar2 GEN_EDX_ARG,iVar3,psVar4,0);
        local_c = 1;
      }
      if ((uVar7 == 0) || (*(int *)(uVar7 + 0x20) == 0)) goto LAB_00bcf016;
      goto LAB_00bcef80;
    }
  }
  goto LAB_00bcf012;
LAB_00bcef80: ;
  local_10 = 0;
  if (0 < *(int *)(psVar4 + 8)) {
    do {
      bVar6 = F_00bceae0(param_1 GEN_EDX_ARG,uVar7,
                           (uint)*((ushort *)GEN_TOP((*(int *)(psVar4 + 6) + local_10 * 2 + (int)psVar4))),
                           local_18);
      if (bVar6 == 0) {
        bVar5 = false;
      }
      local_10 = local_10 + 1;
    } while (local_10 < *(int *)(psVar4 + 8));
  }
  local_14 = local_14 - 1;
  if (local_14 == 0) goto LAB_00bcf00c;
  iVar3 = *(int *)(param_1 + 0xa48);
  *(int *)(param_1 + 0xa4c) = *(int *)(param_1 + 0xa4c) - 0x40;
  *(int *)(param_1 + 0xa48) = iVar3 + 0x40;
  uVar7 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xa4))(piVar2 GEN_EDX_ARG,iVar3,psVar4,local_c);
  local_c = local_c + 1;
  if (uVar7 == 0) goto LAB_00bcf00c;
  local_18 = (float)((float10)(ushort)psVar4[2] + (float10)local_18);
  goto LAB_00bcef80;
LAB_00bcf00c: ;
  if (!bVar5) {
LAB_00bcf012: ;
    local_6 = 0;
  }
LAB_00bcf016: ;
  local_1c = local_1c + 1;
  if (param_2[1] <= local_1c) {
    return local_6;
  }
  goto LAB_00bceea2;
}

/* ref: FUN_00bcf050 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bcf050(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbcf050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00bcf060 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bcf060(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbcf060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00bcf070 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bcf070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbcf070u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return (int)this +
         *((int *)GEN_TOP(((int)this + param_1 * 4 + *(int *)((int)this + 8)))) + *(int *)((int)this + 8);
}

/* ref: FUN_00bcf090 */
GEN_LIB GEN_FRAME ushort GEN_THISCALL F_00bcf090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbcf090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((ushort *)GEN_TOP((*(int *)((int)this + 0xc) + param_1 * 2 + (int)this)));
}

/* ref: FUN_00bcf0b0 */
GEN_LIB GEN_FRAME ushort GEN_THISCALL F_00bcf0b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbcf0b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(ushort *)(*(int *)this + param_1 * 2 + (int)this);
}

/* ref: FUN_00bcf0f0 */
GEN_LIB GEN_FRAME ushort GEN_THISCALL F_00bcf0f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbcf0f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((ushort *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 2 + (int)this)));
}

/* ref: FUN_00bcf110 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bcf110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbcf110u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = 0;
  *(int *)((int)this + 4) = *param_1;
  if (*param_1 != 0) {
    *(int *)(*param_1 + 8) = (int)this - 8;
  }
  *param_1 = (int)this - 8;
  return (uint)param_1;
}

/* ref: FUN_00bcf140 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bcf140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbcf140u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (*param_1 == 0) {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    *param_1 = (int)this - 8;
    return 0;
  }
  do {
    iVar2 = iVar1;
    iVar1 = *(int *)(iVar2 + 0xc);
  } while (*(int *)(iVar2 + 0xc) != 0);
  if (this != (undefined *)0x0) {
    *(uint *)(iVar2 + 0xc) = (int)this - 8U;
    *(int *)this = iVar2;
    *(undefined4 *)((int)this + 4) = 0;
    return (int)this - 8U;
  }
  *(undefined4 *)(iVar2 + 0xc) = 0;
  *(int *)&REFG(undefined, 0x0) = iVar2;
  *(undefined4 *)&REFG(undefined, 0x4) = 0;
  return 0;
}

/* ref: FUN_00bcf270 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bcf270(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbcf270u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00bcf290 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bcf290(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbcf290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00bcf2c0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00bcf2c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xbcf2c0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *(float *)(in_ecx + 0x28) = param_2;
  return;
}

/* ref: FUN_00bcf2e0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00bcf2e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbcf2e0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  bool bVar1;
  bool bVar2;
  
  bVar1 = GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
  bVar2 = param_2 == *(float *)&REFG(undefined, 0x1088114);
  *(float *)(in_ecx + 0x70) = param_2;
  if ((GEN_ISNAN(param_2) || bVar1) == ((GEN_ISNAN(param_2) || bVar1) || bVar2)) {
    *(float *)(in_ecx + 0x6c) = param_2;
  }
  else {
    *(undefined4 *)(in_ecx + 0x6c) = *(undefined4 *)(in_ecx + 0x68);
  }
  *(byte *)(in_ecx + 0x83) = (byte)param_3;
  *(byte *)(in_ecx + 0x84) = (byte)param_3;
  *(float *)(in_ecx + 100) =
       ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x60) + (float10)*(float *)(in_ecx + 0x6c))));
  return (byte)param_3;
}

/* ref: FUN_00bcf340 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00bcf340(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcf340u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (*(char *)(in_ecx + 0x80) != '\0') {
    return 1;
  }
  if (*(int *)(in_ecx + 0x74) == 0) {
    return 0;
  }
  return 1 - (1 < *(uint *)(in_ecx + 0x78));
}

/* ref: FUN_00bcf380 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00bcf380(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbcf380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *(byte *)(in_ecx + 0x85) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00bcf3c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bcf3c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbcf3c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = ((param_2 & 0xff) << 6 ^ *(uint *)(in_ecx + 0xe0)) & 0x40;
  *(uint *)(in_ecx + 0xe0) = *(uint *)(in_ecx + 0xe0) ^ uVar1;
  return uVar1;
}

/* ref: FUN_00bcf400 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bcf400(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbcf400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *(uint *)(in_ecx + 0x104) = param_2;
  return param_2;
}

/* ref: FUN_00bcf470 */
GEN_LIB GEN_FRAME float10 F_00bcf470(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbcf470u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf6 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bcf490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcf490u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pSVar1;
  uint uVar2;
  ulonglong uVar3;
  
  F_00bc2160((undefined *)this GEN_EDX_FWD);
  if (*(int *)(this + 0xcc) != 0) {
    F_00b5c650(*(int *)(this + 0xcc));
    *(undefined4 *)(this + 0xcc) = 0;
  }
  pSVar1 = *(undefined * PTR32 *)(this + 0xd4);
  if ((pSVar1 != (undefined *)0x0) && (pSVar1 != this + 0xa0)) {
    F_00406b30(pSVar1);
    *(undefined4 *)(this + 0xd4) = 0;
  }
  uVar2 = 0;
  if (*(int *)(this + 0x1cc) != 0) {
    uVar3 = F_00406b30(*(int *)(this + 0x1cc));
    uVar2 = (uint)uVar3;
    *(undefined4 *)(this + 0x1cc) = 0;
  }
  return uVar2;
}

/* ref: FUN_00bcf500 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00bcf500(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcf500u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (((*(int *)(in_ecx + 0x24) != 6) && (*(char *)(in_ecx + 0xf0) == '\0')) &&
     (*(char *)(in_ecx + 0xf1) == '\0')) {
    return 0;
  }
  return 1;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf10 */
GEN_LIB GEN_NOFRAME unsigned int F_00bcf520(void)
{
  GEN_ENTER(0xbcf520u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf11 */
GEN_LIB GEN_NOFRAME unsigned int F_00bcf530(void)
{
  GEN_ENTER(0xbcf530u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf12 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00bcf540(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcf540u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (*(char *)(in_ecx + 0xd) == '\0') {
    return;
  }
  if (*(char *)(in_ecx + 0x30) != '\0') {
    return;
  }
  if (*(char *)(in_ecx + 0x80) != '\0') {
    return;
  }
  return;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf13 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bcf5b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcf5b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float fVar1;
  code * pcVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x70))(this GEN_EDX_FWD);
  if ((uVar3 == 0) && (this[0x80] == (undefined1)0x0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  F_00bc29d0(this GEN_EDX_ARG,uVar6);
  pcVar2 = *(gen_code32 *)(*(int *)this + 0x1c);
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  this[0xe4] = (undefined1)0x0;
  uVar3 = (*pcVar2)(this,10,&REFG(undefined, 0x13056c0));
  fVar1 = *(float *)(this + 0x24c);
  bVar4 = GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
  bVar5 = bVar4 || fVar1 == *(float *)&REFG(undefined, 0x1088114);
  uVar3 = CONCAT22((short)(uVar3 >> 0x10),
                   CONCAT11(bVar5 << 6 | bVar4 << 2 | 2U | !(*(float *)&REFG(undefined, 0x1088114) <= fVar1),
                            (char)uVar3));
  if (bVar4 == bVar5) {
    uVar3 = F_00bc3780(this GEN_EDX_ARG,fVar1);
  }
  this[0x249] = (undefined1)0x0;
  *(undefined4 *)(this + 0x28) = 0;
  return uVar3;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bcf640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcf640u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x100];
  undefined * pSVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xfc);
  (*(uint *)(gen_frame + 0xf8)) = uVar3;
  if (*(int *)(this + 0xf4) != 0) {
    ((undefined4 *)(gen_frame + 0x8))[0] = 0;
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = (undefined *)0x0;
    bVar2 = F_00bc2920(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x4)),((undefined4 *)(gen_frame + 0x8)));
    uVar3 = CONCAT31(extraout_var,bVar2);
    while (bVar2 != 0) {
      if ((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 0x2c) == 0x17) && (*(char *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 0x88) != '\0')) {
        uVar3 = F_00be3060((*(undefined * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
        pSVar1 = this + 0xf4;
        *(int *)pSVar1 = *(int *)pSVar1 - 1;
        if (*(int *)pSVar1 == 0) break;
      }
      bVar2 = F_00bc2920(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x4)),((undefined4 *)(gen_frame + 0x8)));
      uVar3 = CONCAT31(extraout_var_00,bVar2);
    }
    *(undefined4 *)(this + 0xf4) = 0;
  }
  F_00c47745((*(uint *)(gen_frame + 0xf8)) ^ (uint)(uint)(gen_frame + 0xfc) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00bcf6f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bcf6f0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbcf6f0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined1 TVar4;
  float10 fVar5;
  float10 fVar6;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  uVar3 = *(uint *)(param_1 + 0x138) >> 1;
  (*(float *)(gen_frame + 0xc)) = 0.0;
  if (((uVar3 & 1) == 0) && (((byte)param_1[0x138] & 1) == 0)) {
    if (param_1[0x80] != (undefined1)0x0) {
      param_2 = 0.0;
    }
    fVar1 = *(float *)(param_1 + 0x6c);
    (*(float *)(gen_frame + 0x14)) = fVar1;
    (*(float *)(gen_frame + 0x10)) = param_2;
    if ((float10)fVar1 < (float10)param_2) {
      (*(float *)(gen_frame + 0x10)) = fVar1;
    }
    *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) & 0xfffffdff;
    if (0.0 < (*(float *)(gen_frame + 0x10))) {
      do {
        if (REFG(float, 0x1087f04) < (*(float *)(gen_frame + 0x10))) {
          (*(float *)(gen_frame + 0x14)) = REFG(float, 0x1087f04);
          (*(float *)(gen_frame + 0x10)) = (float)((float10)(*(float *)(gen_frame + 0x10)) - (float10)REFG(double, 0x1088130));
        }
        else {
          (*(float *)(gen_frame + 0x14)) = (*(float *)(gen_frame + 0x10));
          (*(float *)(gen_frame + 0x10)) = 0.0;
        }
        fVar1 = (*(float *)(gen_frame + 0x14));
        bVar2 = F_00bc1d60(param_1 GEN_EDX_FWD);
        if (bVar2 == 0) {
          if (param_1[0xe] != (undefined1)0x0) {
            param_1[0x84] = (undefined1)0x0;
          }
          bVar2 = F_00bc2d10(param_1 GEN_EDX_ARG,(uint)&(*(float *)(gen_frame + 0x14)));
          if (bVar2 != 0) {
            ((GEN_TCODE *)*(gen_code32 *)(*(int *)param_1 + 0x1c))(param_1 GEN_EDX_ARG,0xb,&REFG(undefined, 0x13056c0));
            F_00bc27a0(param_1 GEN_EDX_ARG,6);
          }
        }
        *(float *)(param_1 + 0x28) = (*(float *)(gen_frame + 0x10));
        (*(undefined4 *)(gen_frame + 0x28)) = 0;
        (*(float *)(gen_frame + 0x30)) = 0.0;
        (*(undefined4 *)(gen_frame + 0x2c)) = 0;
        (*(undefined4 *)(gen_frame + 0x34)) = 0;
        (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x28)) + 0)) = 0;
        (*(undefined4 *)(gen_frame + 0x28)) = 0;
        (*(float *)(gen_frame + 0x30)) = (*(float *)(gen_frame + 0x14));
        F_00bc3080(param_1 GEN_EDX_ARG,0x10,&(*(undefined4 *)(gen_frame + 0x28)));
        bVar2 = F_00bc23a0(param_1 GEN_EDX_ARG,0x12);
        TVar4 = (undefined1)(bVar2 == 0);
        uVar3 = CONCAT31(extraout_var,TVar4);
        param_1[0x249] = TVar4;
        if ((bool)TVar4) goto LAB_00bcf8b9;
        if ((char)param_3 != '\0') {
          F_00bc3080(param_1 GEN_EDX_ARG,0x13,&REFG(undefined, 0x13056c0));
        }
        fVar5 = (float10)(*(float *)(gen_frame + 0x14));
        (*(float *)(gen_frame + 0xc)) = (float)(fVar5 + (float10)(*(float *)(gen_frame + 0xc)));
        if ((GEN_ISNAN((*(float *)(gen_frame + 0x14))) == (GEN_ISNAN((*(float *)(gen_frame + 0x14))) || (*(float *)(gen_frame + 0x14)) == 0.0)) &&
           (fVar6 = (float10)fVar1,
           (GEN_ISNAN(fVar5) || GEN_ISNAN(fVar6)) == ((GEN_ISNAN(fVar5) || GEN_ISNAN(fVar6)) || fVar5 == fVar6))) {
          (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF(((fVar6 - fVar5) + (float10)(*(float *)(gen_frame + 0x10)))));
        }
      } while (!GEN_ISNAN((*(float *)(gen_frame + 0x10))) && !((*(float *)(gen_frame + 0x10)) <= 0.0));
    }
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(float *)(gen_frame + 0x20)) = 0.0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x18)) + 0)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(float *)(gen_frame + 0x20)) = (*(float *)(gen_frame + 0xc));
    bVar2 = F_00bc3080(param_1 GEN_EDX_ARG,0x11,&(*(undefined4 *)(gen_frame + 0x18)));
    uVar3 = CONCAT31(extraout_var_00,bVar2);
  }
LAB_00bcf8b9: ;
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
  return uVar3;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf16 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00bcf8d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbcf8d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  bool bVar1;
  byte bVar2;
  uint uVar3;
  
  if (this[0x11] == (undefined1)0x0) {
    F_00bc2770((undefined *)this GEN_EDX_FWD,param_1);
    bVar1 = false;
    if ((((byte)this[0x138] & 0x10) != 0) &&
       (bVar2 = F_00bbad60(param_1 GEN_EDX_ARG,*(undefined4 *)(this + 0x13c)), bVar2 != 0)) {
      bVar1 = true;
    }
    uVar3 = F_00bbaea0(param_1 GEN_EDX_ARG,this + 0x110);
    if ((char)uVar3 != '\0') {
      bVar1 = true;
    }
    uVar3 = F_00bbaea0(param_1 GEN_EDX_ARG,this + 0x124);
    if (((char)uVar3 != '\0') || (bVar1)) {
      *(uint *)(this + 0xe0) = *(uint *)(this + 0xe0) & 0xffffff7f;
      F_00bc2850(this GEN_EDX_ARG);
      if (*(int *)(this + 0xcc) != 0) {
        F_00b5c650(*(int *)(this + 0xcc));
        *(undefined4 *)(this + 0xcc) = 0;
      }
    }
  }
  return;
}

/* ref: FUN_00bcf970 */
GEN_LIB GEN_NOFRAME unsigned int F_00bcf970(void)
{
  GEN_ENTER(0xbcf970u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00bcf980 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bcf980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcf980u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(uint *)((int)this + 0xe0) = *(uint *)((int)this + 0xe0) & 0xffffff7f;
  F_00bc2850(this GEN_EDX_FWD);
  uVar1 = 0;
  if (*(int *)((int)this + 0xcc) != 0) {
    uVar1 = F_00b5c650(*(int *)((int)this + 0xcc));
    *(undefined4 *)((int)this + 0xcc) = 0;
  }
  return uVar1;
}

/* ref: FUN_00bcf9c0 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00bcf9c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcf9c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (((*(char *)((int)this + 10) != '\0') || (*(char *)((int)this + 0xd) != '\0')) &&
     (*(char *)((int)this + 0xf) == '\0')) {
    if (*(int *)((int)this + 0x24) != 6) {
      return 0;
    }
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_FWD);
    return (char)uVar1 != '\0';
  }
  return 1;
}

/* ref: FUN_00bcf9f0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00bcf9f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbcf9f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  __declspec(align(16)) undefined1 gen_frame[0x100];
  byte bVar1;
  
  (*(uint *)(gen_frame + 0xf8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xfc);
  if (((*(byte *)((int)this + 0x138) & 8) != 0) && (*(int *)((int)this + 0x200) == param_1)) {
    ((undefined4 *)(gen_frame + 0x8))[0] = 0;
    (*(int *)(gen_frame + 0x4)) = 0;
    bVar1 = F_00bc2920(this GEN_EDX_FWD,&(*(int *)(gen_frame + 0x4)),((undefined4 *)(gen_frame + 0x8)));
    while (bVar1 != 0) {
      if ((*(int *)((*(int *)(gen_frame + 0x4)) + 0x2c) == 8) && (*(int *)((*(int *)(gen_frame + 0x4)) + 0x58) != 0)) {
        if (*(int *)((*(int *)(gen_frame + 0x4)) + 0x58) != 0) {
          *(int *)((*(int *)(gen_frame + 0x4)) + 0x58) = *(int *)((*(int *)(gen_frame + 0x4)) + 0x58) - 1;
        }
        *(uint *)((int)this + 0xe0) = *(uint *)((int)this + 0xe0) | 1;
        *param_2 = *(undefined4 *)((int)this + 0x230);
        F_00c47745((*(uint *)(gen_frame + 0xf8)) ^ (uint)(uint)(gen_frame + 0xfc) GEN_EDX_ARG);
        return 1;
      }
      bVar1 = F_00bc2920(this GEN_EDX_ARG,&(*(int *)(gen_frame + 0x4)),((undefined4 *)(gen_frame + 0x8)));
    }
    *(uint *)((int)this + 0xe0) = *(uint *)((int)this + 0xe0) | 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0xf8)) ^ (uint)(uint)(gen_frame + 0xfc) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00bcfad0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bcfad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbcfad0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD);
  if ((char)uVar2 == '\0') {
    if (((*(byte *)((int)this + 0x138) & 8) != 0) && (*(char *)((int)this + 0x213) != '\0')) {
      *(undefined1 *)((int)this + 0x213) = 0;
      *(undefined1 *)((int)this + 0x85) = 0;
      *(undefined4 *)((int)this + 0x1d0) = 1;
    }
    if (*(char *)((int)this + 10) != '\0') {
      *(undefined1 *)((int)this + 10) = 0;
    }
    if (param_1 != 0) {
      bVar1 = F_00bc32d0(this GEN_EDX_ARG,1,0);
      return CONCAT31(extraout_var,bVar1);
    }
    bVar1 = F_00bc32d0(this GEN_EDX_ARG,3,0);
    uVar2 = CONCAT31(extraout_var_00,bVar1);
  }
  return uVar2;
}

/* ref: FUN_00bcfb40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bcfb40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbcfb40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  undefined3 extraout_var = 0;
  
  *(uint *)((int)this + 0x138) = *(uint *)((int)this + 0x138) & 0xfffffff7;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined2 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x24c) = 0;
  if (param_1 != 0) {
    bVar1 = F_00bc2450(this GEN_EDX_FWD,param_1,1);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00bcfb80 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00bcfb80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcfb80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (*(int *)(in_ecx + 0x24) == 6) {
    return 1;
  }
  return *(int *)(in_ecx + 0x24) == 5;
}

/* ref: FUN_00bcfba0 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00bcfba0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcfba0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  if ((((*(int *)(in_ecx + 0x24) == 6) && (uVar1 = *(uint *)(in_ecx + 0xe0), (uVar1 & 0x10) == 0))
      && ((uVar1 & 6) == 0)) && ((uVar1 & 8) != 0)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00bcfbc0 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00bcfbc0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcfbc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if ((*(int *)(in_ecx + 0x104) != 1) && (*(int *)(in_ecx + 0x104) != 2)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00bcfbe0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bcfbe0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcfbe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if ((*(byte *)(in_ecx + 0x138) & 8) != 0) {
    return *(uint *)(in_ecx + 0x200);
  }
  return 0;
}

/* ref: FUN_00bcfc00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bcfc00(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xbcfc00u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  bool bVar3;
  bool bVar4;
  float10 fVar5;
  float10 fVar6;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(uint *)(gen_frame + 0x18)) = uVar2;
  fVar5 = (float10)param_2;
  fVar6 = (float10)*(float *)(param_1 + 0x250);
  bVar3 = GEN_ISNAN(fVar6) || GEN_ISNAN(fVar5);
  bVar4 = bVar3 || fVar6 == fVar5;
  uVar2 = CONCAT22((short)(uVar2 >> 0x10),
                   CONCAT11(bVar4 << 6 | bVar3 << 2 | 2U | !(fVar5 <= fVar6),(char)uVar2));
  if (bVar3 == bVar4) {
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(float *)(gen_frame + 0x10)) = 0.0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    *(float *)(param_1 + 0x250) = param_2;
    (*(float *)(gen_frame + 0x10)) = param_2;
    bVar1 = F_00bc3080(param_1 GEN_EDX_FWD,0x21,&(*(undefined4 *)(gen_frame + 0x8)));
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00bcfc70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bcfc70(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xbcfc70u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  undefined3 extraout_var = 0;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(float *)(gen_frame + 0x10)) = 0.0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(float *)(gen_frame + 0x10)) = param_2;
  bVar1 = F_00bc3080(param_1 GEN_EDX_FWD,0x22,&(*(undefined4 *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00bcfcc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bcfcc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbcfcc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  ulonglong uVar2;
  
  *(uint *)((int)this + 0x138) = *(uint *)((int)this + 0x138) | 0x10;
  *(undefined4 *)((int)this + 0x13c) = param_1;
  *(int *)((int)this + 0x140) = param_2;
  uVar1 = 0;
  if (param_2 != 0) {
    uVar2 = F_00c46aa0((int)this + 0x148,param_3,param_2 * 4);
    uVar1 = (uint)uVar2;
  }
  return uVar1;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf30 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bcfd00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcfd00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *(uint *)(in_ecx + 0x138) >> 4 & 1;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf31 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bcfd10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcfd10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *(uint *)(in_ecx + 0x13c);
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf32 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bcfd20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcfd20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *(uint *)(in_ecx + 0x140);
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf33 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bcfd30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbcfd30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if (*(uint *)(in_ecx + 0x140) <= param_2) {
    return *(uint *)(in_ecx + 0x13c);
  }
  return *(uint *)(in_ecx + 0x148 + param_2 * 4);
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf8 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bcfd60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbcfd60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return *(uint *)(in_ecx + 0x140);
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf34 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bcfd70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcfd70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *(uint *)(in_ecx + 0x1c8);
}

/* ref: FUN_00bcfd80 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00bcfd80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcfd80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x94))(this GEN_EDX_FWD);
  if (uVar1 != 0) {
    return *(byte *)(uVar1 + 0x44);
  }
  return 0;
}

/* ref: FUN_00bcfda0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bcfda0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbcfda0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  *param_1 = 0xffffffff;
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x94))(this GEN_EDX_FWD);
  if ((uVar1 != 0) && (*(int *)(uVar1 + 0x44) != 0)) {
    *param_1 = *(undefined4 *)((int)this + 200);
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_ARG);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00bcfdf0 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00bcfdf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcfdf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x94))(this GEN_EDX_FWD);
  if (((uVar1 == 0) || (*(int *)(uVar1 + 0x18) != 0)) &&
     (((*(byte *)((int)this + 0x138) & 0x40) == 0 || (*(int *)((int)this + 0x1d4) != 0)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00bcfe30 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00bcfe30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbcfe30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x94))(this GEN_EDX_FWD);
  if ((uVar1 != 0) && (-1 < *(int *)(uVar1 + 0x18))) {
    *param_1 = *(int *)(uVar1 + 0x18);
    return 1;
  }
  if ((*(byte *)((int)this + 0x138) & 0x40) != 0) {
    *param_1 = *(int *)((int)this + 0x1d4);
    return 1;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf28 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bcfe80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcfe80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (((*(byte *)(in_ecx + 0x138) & 8) != 0) && (*(char *)(in_ecx + 0x213) != '\0')) {
    return 0;
  }
  return *(uint *)(in_ecx + 0x1d0);
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf29 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bcfea0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcfea0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if ((*(byte *)(in_ecx + 0x138) & 8) != 0) {
    return *(uint *)(in_ecx + 0x204);
  }
  return *(uint *)(in_ecx + 0x1d0);
}

/* ref: FUN_00bcfec0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bcfec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbcfec0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00bc2a40(this GEN_EDX_FWD);
  if (uVar1 != 0) {
    F_00bc3bb0(param_1);
  }
  uVar1 = ((param_1 & 0xff) << 5 ^ *(uint *)((int)this + 0xe0)) & 0x20;
  *(uint *)((int)this + 0xe0) = *(uint *)((int)this + 0xe0) ^ uVar1;
  return uVar1;
}

/* ref: FUN_00bcff00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bcff00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcff00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float fVar1;
  
  if (*(char *)((int)this + 0x24a) != '\0') {
    return 0;
  }
  if ((((*(char *)((int)this + 8) == '\0') || ((*(uint *)((int)this + 0xe0) >> 7 & 1) != 0)) ||
      (*(char *)((int)this + 0xd) == '\0')) ||
     ((*(char *)((int)this + 0xf) != '\0' ||
      (fVar1 = F_00bc2b40(this GEN_EDX_FWD), (float10)fVar1 < (float10)0)))) {
    return 0xffffffff;
  }
  if ((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) !=
      ((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || fVar1 == *(float *)&REFG(undefined, 0x1088114))) {
    return 0;
  }
  if (fVar1 <= REFG(float, 0x1087f04)) {
    return 1;
  }
  return (int)fVar1;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf41 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bcff80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbcff80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if ((*(int *)(this + 0xdc) != 0) || (*(int *)(this + 0x1c8) != 0)) {
    uVar4 = F_00bc3620(this GEN_EDX_FWD,param_1,*(undefined4 *)(param_2 + 8),(uint)*(ushort *)(param_2 + 2),
                         param_3,0);
    return uVar4;
  }
  if (*(short *)(param_2 + 2) == 2) {
    if (*(uint *)(this + 0x140) <= param_3) {
      return 0;
    }
    uVar4 = F_00b59e60(REFG(void * PTR32, 0x14c4e78) GEN_EDX_ARG,*(undefined4 *)(this + param_3 * 4 + 0x148));
    uVar4 = F_00bc3520(this GEN_EDX_ARG,param_1,uVar4,(uint)*(ushort *)(param_2 + 2),param_3,0);
    *(undefined * PTR32 *)(uVar4 + 4) = this;
  }
  else {
    if (((byte)this[0x138] & 0x10) == 0) {
      uVar2 = F_00b59f00(REFG(void * PTR32, 0x14c4e78) GEN_EDX_ARG,this + 0x110);
      if ((uVar2 != 0) ||
         (uVar2 = F_00b597c0(REFG(void * PTR32, 0x14c4e78) GEN_EDX_ARG,*(undefined4 *)(param_2 + 8)), uVar2 != 0)) {
LAB_00bd007d: ;
        uVar4 = F_00bc3520(this GEN_EDX_ARG,param_1,uVar2,(uint)*(ushort *)(param_2 + 2),0,0);
        *(undefined * PTR32 *)(uVar4 + 4) = this;
        return uVar4;
      }
      uVar3 = F_0052ed20(REFG(undefined4, 0x1375b00) GEN_EDX_ARG,*(undefined4 *)(param_2 + 8),0,0);
      if (uVar3 == 0) {
        return 0;
      }
      uVar2 = F_00b59750(REFG(void * PTR32, 0x14c4e78) GEN_EDX_ARG,uVar3,0);
      if (uVar2 != 0) goto LAB_00bd007d;
      uVar2 = F_00b59f90(REFG(void * PTR32, 0x14c4e78) GEN_EDX_ARG,uVar3);
    }
    else {
      uVar1 = *(undefined4 *)(this + 0x13c);
      if ((*(undefined * PTR32 *)(this + 0x10c) != (undefined *)0x0) &&
         (uVar2 = F_00b68410(*(undefined * PTR32 *)(this + 0x10c) GEN_EDX_ARG), uVar2 != 0)) goto LAB_00bd007d;
      uVar2 = F_00b59e60(REFG(void * PTR32, 0x14c4e78) GEN_EDX_ARG,uVar1);
    }
    if (uVar2 != 0) {
      uVar4 = F_00bc3520(this GEN_EDX_ARG,param_1,uVar2,(uint)*(ushort *)(param_2 + 2),0,0);
      *(undefined * PTR32 *)(uVar4 + 4) = this;
      return uVar4;
    }
  }
  return uVar4;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf42 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd0110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbd0110u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  undefined4 uVar1;
  uint uVar2;
  undefined * pvVar3;
  
  if (*(int *)(this + 0xdc) == 0) {
    if (*(short *)(param_1 + 2) != 2) {
      uVar2 = F_00406b90(0x1c,0,0);
      if (uVar2 == 0) {
        pvVar3 = (undefined *)0x0;
      }
      else {
        pvVar3 = (undefined *)F_00bccbd0(uVar2 GEN_EDX_ARG);
      }
      if (((byte)this[0x138] & 0x10) != 0) {
        F_00bbadf0(pvVar3 GEN_EDX_ARG,*(undefined4 *)(this + 0x13c),0);
        return (uint)pvVar3;
      }
      F_00bccc00(pvVar3 GEN_EDX_ARG,this + 0x110);
      return (uint)pvVar3;
    }
    if (*(uint *)(this + 0x140) <= param_2) {
      return 0;
    }
    uVar1 = *(undefined4 *)(this + param_2 * 4 + 0x148);
    uVar2 = F_00406b90(0x1c,0,0);
    if (uVar2 != 0) {
      pvVar3 = (undefined *)F_00bccbd0(uVar2 GEN_EDX_ARG);
      F_00bbadf0(pvVar3 GEN_EDX_ARG,uVar1,0);
      return (uint)pvVar3;
    }
    F_00bbadf0((undefined *)0x0 GEN_EDX_ARG,uVar1,0);
  }
  return 0;
}

/* ref: FUN_00bd01e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd01e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd01e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  if (*(int *)(in_ecx + 0xdc) != 0) {
    return 0x68;
  }
  if ((*(int *)(in_ecx + 0x1c8) != 0) || (uVar1 = 0x67, *(int *)(in_ecx + 0x1cc) != 0)) {
    uVar1 = 0x66;
  }
  return uVar1;
}

/* ref: FUN_00bd0210 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd0210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd0210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 uVar1;
  
  F_00bc2080(this GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(uint *)((int)this + 0xe0) = *(uint *)((int)this + 0xe0) & 0xfffffa00;
  *(undefined4 *)((int)this + 200) = 0xffffffff;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[49])REFP(0x1106724));
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined1 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined2 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0x100) = 0xffffffff;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x10c) = param_1;
  F_00bbac80((int)this + 0x110 GEN_EDX_ARG);
  F_00bbac80((int)this + 0x124 GEN_EDX_ARG);
  *(uint *)((int)this + 0x138) = *(uint *)((int)this + 0x138) & 0xffffff00;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x1c8) = 0;
  *(undefined4 *)((int)this + 0x1cc) = 0;
  *(undefined4 *)((int)this + 0x1d4) = 0;
  *(undefined4 *)((int)this + 0x1d8) = 0;
  *(undefined4 *)((int)this + 0x1dc) = 3;
  *(undefined4 *)((int)this + 0x1e0) = 0;
  *(undefined4 *)((int)this + 0x1d0) = 1;
  *(undefined4 *)((int)this + 0x204) = 1;
  *(undefined4 *)((int)this + 0x1f0) = 0;
  *(undefined4 *)((int)this + 500) = 0;
  *(undefined4 *)((int)this + 0x1f8) = uVar1;
  *(undefined4 *)((int)this + 0x1fc) = uVar1;
  *(undefined4 *)((int)this + 0x210) = 0;
  *(undefined4 *)((int)this + 0x230) = 0;
  *(undefined4 *)((int)this + 0x234) = 0;
  *(undefined4 *)((int)this + 0x200) = 0xffffffff;
  *(undefined4 *)((int)this + 0x208) = 0xffffffff;
  *(undefined4 *)((int)this + 0x20c) = 0xffffffff;
  *(undefined2 *)((int)this + 0x248) = 1;
  *(undefined4 *)((int)this + 0x240) = 0;
  *(undefined4 *)((int)this + 0x244) = 0;
  *(undefined1 *)((int)this + 0x24a) = 0;
  *(undefined4 *)((int)this + 0x24c) = 0;
  *(undefined4 *)((int)this + 0x250) = uVar1;
  *(undefined1 *)((int)this + 0xa0) = 0;
  F_00bbaca0((int)this + 0x110 GEN_EDX_ARG);
  F_00bbaca0((int)this + 0x124 GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00bd03c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd03c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd03c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[49])REFP(0x1106724));
  F_00bcf490(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x124) = (*(undefined * PTR32 (*)[1])REFP(0x10f1498));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x110) = (*(undefined * PTR32 (*)[1])REFP(0x10f1498));
  uVar1 = F_00bc2fd0(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf4 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00bd03f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd03f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  uint uVar2;
  
  if (this[0x10] != (undefined1)0x0) {
    return 1;
  }
  if (this[8] == (undefined1)0x0) {
    return 0;
  }
  if (this[10] != (undefined1)0x0) {
    return 0;
  }
  uVar2 = F_00bd01e0(this GEN_EDX_FWD);
  if (uVar2 == 0x66) {
    bVar1 = F_00bcf340(((undefined4)(uint)(this)) GEN_EDX_ARG);
    if (bVar1 == 0) {
      return 0;
    }
    bVar1 = F_00bc22a0(this GEN_EDX_ARG);
    if (bVar1 == 0) {
      return 0;
    }
    if (this[0xb] != (undefined1)0x0) goto LAB_00bd0491;
  }
  else {
    if (uVar2 == 0x67) {
      bVar1 = F_00bcf340(((undefined4)(uint)(this)) GEN_EDX_ARG);
      if (bVar1 == 0) {
        return 0;
      }
      if (((this[0xb] == (undefined1)0x0) && (((byte)this[0x2c] & 1) == 0)) &&
         (bVar1 = F_00bc1d60(this GEN_EDX_ARG), bVar1 == 0)) {
        return 0;
      }
      bVar1 = F_00bc22a0(this GEN_EDX_ARG);
      if (bVar1 == 0) {
        return 0;
      }
      if (((byte)this[0xe0] & 0x80) != 0) {
        return 0;
      }
      goto LAB_00bd0491;
    }
    if (uVar2 != 0x68) {
      return 0;
    }
    bVar1 = F_00bcf340(((undefined4)(uint)(this)) GEN_EDX_ARG);
    if (bVar1 == 0) {
      return 0;
    }
    bVar1 = F_00bc22a0(this GEN_EDX_ARG);
    if (bVar1 == 0) {
      return 0;
    }
  }
  bVar1 = F_00bc1d60(this GEN_EDX_ARG);
  if (bVar1 == 0) {
    return 0;
  }
LAB_00bd0491: ;
  this[0xc] = (undefined1)0x0;
  this[0xd] = (undefined1)0x1;
  this[10] = (undefined1)0x0;
  this[0xb] = (undefined1)0x0;
  F_00b61910(this GEN_EDX_ARG);
  return 1;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf5 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00bd04b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd04b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  if (this[0x11] != (undefined1)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x60))(this GEN_EDX_FWD);
    return 1;
  }
  if ((this[0x10] != (undefined1)0x0) &&
     (((*(int *)(this + 0xdc) == 0 || (((byte)this[0x2c] & 1) != 0)) &&
      (this[0x248] != (undefined1)0x0)))) {
    bVar1 = F_00bc22e0(this GEN_EDX_ARG);
    if (bVar1 != 0) {
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x60))(this GEN_EDX_ARG);
      this[0x11] = (undefined1)0x1;
      this[0x15] = (undefined1)0x0;
      if (*(int *)(this + 4) != 0) {
        *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x15))) = 1;
      }
      return 1;
    }
  }
  return 0;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf24 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd0510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd0510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x94))(this GEN_EDX_FWD);
  if (((uVar2 != 0) && (*(int *)(uVar2 + 0x1c) != -1)) &&
     (uVar2 = *(uint *)(this + 0xe0) >> 7, (uVar2 & 1) == 0)) {
    iVar1 = *(int *)(this + 200);
    *(undefined4 *)(this + 0x20c) = 0xffffffff;
    if ((iVar1 != -1) && (uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x78))(this GEN_EDX_ARG), (char)uVar2 != '\0')) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x7c))(this GEN_EDX_ARG);
      pvVar3 = (undefined *)F_00475fd0(uVar2);
      uVar2 = 0;
      if (pvVar3 != (undefined *)0x0) {
        pvVar3 = (undefined *)F_00a5f290(pvVar3 GEN_EDX_ARG);
        uVar2 = 0;
        if (pvVar3 != (undefined *)0x0) {
          uVar2 = (uint)((byte)this[0x2c] & 1);
          uVar4 = F_00bcfbe0(this GEN_EDX_ARG);
          uVar2 = F_00aa4360(pvVar3 GEN_EDX_ARG,iVar1,uVar4,uVar2);
        }
      }
    }
  }
  return uVar2;
}

/* ref: FUN_00bd05a0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00bd05a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd05a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  
  bVar2 = *(byte *)((int)this + 0x138);
  (*(float *)(gen_frame + 0x4)) = 0.0;
  (*(byte *)(gen_frame + 0xb)) = 0;
  if (((bVar2 & 8) == 0) ||
     ((fVar7 = *(float *)((int)this + 0x1f0), GEN_ISNAN(fVar7) != (GEN_ISNAN(fVar7) || fVar7 == 0.0) &&
      (fVar7 = *(float *)((int)this + 500), GEN_ISNAN(fVar7) != (GEN_ISNAN(fVar7) || fVar7 == 0.0))))) {
    fVar7 = (float)(float10)0;
  }
  else {
    fVar7 = *(float *)((int)this + 500);
  }
  F_00bc2660(GEN_TOF(this) GEN_EDX_FWD,(float)(float10)0,fVar7,(float)(float10)1,0,1,&(*(float *)(gen_frame + 0x4)),&(*(byte *)(gen_frame + 0xb)));
  if (*(int *)((int)this + 0xdc) == 0) {
    if ((*(int *)((int)this + 0x1c8) != 0) || (iVar5 = 0x67, *(int *)((int)this + 0x1cc) != 0)) {
      iVar5 = 0x66;
    }
  }
  else {
    iVar5 = 0x68;
  }
  fVar7 = (*(float *)(gen_frame + 0x4));
  if (iVar5 == 0x66) {
    fVar1 = *(float *)((int)this + 0x68);
    if ((float10)(*(float *)(gen_frame + 0x4)) < (float10)fVar1) {
      fVar7 = fVar1;
    }
    bVar3 = GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
    bVar4 = fVar7 == *(float *)&REFG(undefined, 0x1088114);
    *(float *)((int)this + 0x70) = fVar7;
    if ((GEN_ISNAN(fVar7) || bVar3) == ((GEN_ISNAN(fVar7) || bVar3) || bVar4)) {
LAB_00bd06b8: ;
      *(float *)((int)this + 0x6c) = fVar7;
    }
    else {
      *(float *)((int)this + 0x6c) = fVar1;
    }
  }
  else {
    uVar6 = iVar5 - 0x67;
    if (uVar6 != 0) goto LAB_00bd06dc;
    bVar3 = GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
    bVar4 = (*(float *)(gen_frame + 0x4)) == *(float *)&REFG(undefined, 0x1088114);
    *(float *)((int)this + 0x70) = (*(float *)(gen_frame + 0x4));
    if ((GEN_ISNAN((*(float *)(gen_frame + 0x4))) || bVar3) == ((GEN_ISNAN((*(float *)(gen_frame + 0x4))) || bVar3) || bVar4)) goto LAB_00bd06b8;
    *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)((int)this + 0x68);
  }
  uVar6 = (uint)(*(byte *)(gen_frame + 0xb));
  *(byte *)((int)this + 0x84) = (*(byte *)(gen_frame + 0xb));
  *(byte *)((int)this + 0x83) = (*(byte *)(gen_frame + 0xb));
  *(float *)((int)this + 100) =
       ((float)GEN_TOF(((float10)*(float *)((int)this + 0x60) + (float10)*(float *)((int)this + 0x6c))));
LAB_00bd06dc: ;
  return (byte)uVar6;
}

/* ref: FUN_00bd06f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd06f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd06f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  uint uVar2;
  undefined * this_00;
  undefined3 extraout_var = 0;
  undefined4 uVar3;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  if (((((*(uint *)((int)this + 0xe0) & 6) == 0) && ((*(uint *)((int)this + 0xe0) & 8) != 0)) &&
      (*(int *)((int)this + 0x74) == 0)) &&
     ((*(int *)((int)this + 0x104) == 1 || (*(int *)((int)this + 0x104) == 2)))) {
    F_00bc29d0(this GEN_EDX_FWD,1);
  }
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x34))(this GEN_EDX_ARG);
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x78))(this GEN_EDX_ARG);
  if ((char)uVar2 != '\0') {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x7c))(this GEN_EDX_ARG);
    if ((uVar2 < 0x158) && (((undefined *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[(int)(uVar2)])) != (undefined *)0x0)) {
      this_00 = (undefined *)F_00a5f290(((undefined *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[(int)(uVar2)])) GEN_EDX_ARG);
      if (this_00 != (undefined *)0x0) {
        if ((*(byte *)((int)this + 0x138) & 8) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)((int)this + 0x200);
        }
        F_00aa70a0(this_00 GEN_EDX_ARG,*(undefined4 *)((int)this + 200),uVar3);
      }
    }
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  if (*(char *)((int)this + 0x30) == '\0') {
    F_00bc27a0(this GEN_EDX_ARG,4);
    bVar1 = F_00bc23a0(this GEN_EDX_ARG,0x12);
    *(bool *)((int)this + 0x249) = bVar1 == 0;
    if (bVar1 != 0) {
      F_00bc3080(this GEN_EDX_ARG,0x13,&REFG(undefined, 0x13056c0));
    }
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x94))(this GEN_EDX_ARG);
    if ((uVar2 == 0) || (*(char *)(uVar2 + 0x21) == '\0')) goto LAB_00bd0816;
    uVar3 = 0x23;
  }
  else {
    (*(undefined4 *)(gen_frame + 0xc)) = 4;
    F_00bc3080(this GEN_EDX_ARG,0x1d,&(*(undefined4 *)(gen_frame + 0x8)));
    F_00bc23a0(this GEN_EDX_ARG,0x1a);
    uVar3 = 0x13;
  }
  bVar1 = F_00bc3080(this GEN_EDX_ARG,uVar3,&REFG(undefined, 0x13056c0));
  uVar2 = CONCAT31(extraout_var,bVar1);
LAB_00bd0816: ;
  *(uint *)((int)this + 0xe0) = *(uint *)((int)this + 0xe0) | 0x200;
  *(undefined4 *)((int)this + 0x28) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00bd0840 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd0840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd0840u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  F_00bc26d0(this GEN_EDX_FWD,1);
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x94))(this GEN_EDX_ARG);
  if (((uVar2 != 0) && (iVar1 = *(int *)(uVar2 + 0x1c), 0 < iVar1)) &&
     (uVar2 = F_00bcff00(this GEN_EDX_ARG), (int)uVar2 <= iVar1)) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x60))(this GEN_EDX_ARG);
    return uVar2;
  }
  return uVar2;
}

/* ref: FUN_00bd0880 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00bd0880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbd0880u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  uint uVar2;
  
  if (((*(byte *)((int)this + 0x138) & 8) != 0) && (*(char *)((int)this + 0x213) != '\0')) {
    *(undefined1 *)((int)this + 0x213) = 0;
    *(undefined1 *)((int)this + 0x85) = 0;
    *(undefined4 *)((int)this + 0x1d0) = 1;
  }
  *(undefined1 *)((int)this + 0x248) = 1;
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD);
  if ((char)uVar2 != '\0') {
    return 0;
  }
  if (*(char *)((int)this + 10) != '\0') {
    *(undefined1 *)((int)this + 10) = 0;
  }
  if (param_2 != 0) {
    *(undefined4 *)((int)this + 0x1d8) = *(undefined4 *)(param_2 + 4);
  }
  bVar1 = F_00bc32d0(this GEN_EDX_ARG,param_1,param_2);
  if (param_1 == 3) {
    F_00b61970(this GEN_EDX_ARG);
  }
  return bVar1;
}

/* ref: FUN_00bd0910 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd0910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd0910u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x138);
  if (-1 < (char)uVar1) {
    *(uint *)((int)this + 0x138) = uVar1 | 0x80;
    if (((uVar1 & 8) != 0) && (*(char *)((int)this + 0x213) != '\0')) {
      *(undefined1 *)((int)this + 0x213) = 0;
      *(undefined1 *)((int)this + 0x85) = 0;
      *(undefined4 *)((int)this + 0x1d0) = 1;
    }
    F_00bc32d0(this GEN_EDX_FWD,3,0);
    F_00bc22e0(this GEN_EDX_ARG);
    *(undefined1 *)((int)this + 0x248) = 1;
    uVar1 = F_00b61970(this GEN_EDX_ARG);
    return uVar1;
  }
  return uVar1;
}

/* ref: FUN_00bd0970 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd0970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd0970u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x100];
  int iVar1;
  int * this_00;
  byte bVar2;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0xf8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xfc);
  if (((*(byte *)((int)this + 0x138) & 8) != 0) && (*(char *)((int)this + 0x213) != '\0')) {
    *(undefined1 *)((int)this + 0x213) = 0;
    *(undefined1 *)((int)this + 0x85) = 0;
    *(undefined4 *)((int)this + 0x1d0) = 1;
  }
  ((undefined4 *)(gen_frame + 0x8))[0] = 0;
  (*(int * PTR32 *)(gen_frame + 0x4)) = (int *)0x0;
  bVar2 = F_00bc2920(this GEN_EDX_FWD,&(*(int * PTR32 *)(gen_frame + 0x4)),((undefined4 *)(gen_frame + 0x8)));
  uVar3 = CONCAT31(extraout_var,bVar2);
  this_00 = (*(int * PTR32 *)(gen_frame + 0x4));
  do {
    (*(int * PTR32 *)(gen_frame + 0x4)) = this_00;
    if (bVar2 == 0) {
      if (*(int *)((int)this + 0x24) != 6) {
        F_00bc32d0(this GEN_EDX_ARG,3,0);
        F_00bc22e0(this GEN_EDX_ARG);
        uVar3 = F_00b61970(this GEN_EDX_ARG);
      }
      *(undefined1 *)((int)this + 0x24a) = 1;
      *(undefined1 *)((int)this + 0x248) = 1;
      F_00c47745((*(uint *)(gen_frame + 0xf8)) ^ (uint)(uint)(gen_frame + 0xfc) GEN_EDX_ARG);
      return uVar3;
    }
    iVar1 = this_00[0xb];
    if (iVar1 == 0) {
LAB_00bd09f5: ;
      if (*(int *)((int)this + 0x24) != 6) goto LAB_00bd09fa;
    }
    else {
      if (iVar1 == 6) {
        if (((*(int *)((int)this + 0x24) == 6) && (uVar3 = F_00be5a60(this_00 GEN_EDX_ARG), uVar3 == 0)) &&
           ((char)this_00[3] != '\0')) goto LAB_00bd0a06;
      }
      else if (iVar1 == 7) goto LAB_00bd09f5;
LAB_00bd09fa: ;
      ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x4)) + 0xec))((*(int * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG,3);
    }
LAB_00bd0a06: ;
    bVar2 = F_00bc2920(this GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x4)),((undefined4 *)(gen_frame + 0x8)));
    uVar3 = CONCAT31(extraout_var_00,bVar2);
    this_00 = (*(int * PTR32 *)(gen_frame + 0x4));
  } while( true );
}

/* ref: FUN_00bd0a80 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00bd0a80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd0a80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  bool bVar1;
  
  if (0 < *(int *)((int)this + 0x1dc)) {
    if (param_1 == 0) {
      bVar1 = (*(byte *)((int)this + 0x138) & 8) == 0;
    }
    else if ((*(byte *)((int)this + 0x138) & 8) == 0) {
      bVar1 = *(int *)(param_1 + 0x10) == 0;
    }
    else {
      bVar1 = *(int *)(param_1 + 0x10) == *(int *)((int)this + 0x200);
    }
    if (bVar1) {
      *(int *)((int)this + 0x1dc) = *(int *)((int)this + 0x1dc) - 1;
    }
  }
  return *(int *)((int)this + 0x1dc) == 0;
}

/* ref: FUN_00bd0ae0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd0ae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd0ae0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_00bd18a0((undefined *)((int)this + 0xfc) GEN_EDX_FWD,param_1);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00bd0af0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00bd0af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd0af0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  
  if ((*(int *)((int)this + 0xdc) != 0) || (*(int *)((int)this + 0xd0) != 0)) {
    return 1;
  }
  this_00 = *(undefined * PTR32 *)((int)this + 0xcc);
  if (this_00 != (undefined *)0x0) {
    uVar2 = *(uint *)((int)this_00 + 0x5c) >> 1;
    if (((uVar2 & 1) != 0) && ((uVar2 & 1) != 0)) {
      F_00bd0880(this GEN_EDX_FWD,3,0);
      F_00bc2320(this GEN_EDX_ARG);
      return 1;
    }
    bVar1 = F_00bcd860(this_00 GEN_EDX_ARG);
    if (bVar1 == 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00bd0b50 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00bd0b50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd0b50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x24) != 6) {
    if (*(int *)((int)this + 0x24) == 2) {
      uVar1 = 0;
      if ((*(byte *)((int)this + 0x138) & 8) != 0) {
        uVar1 = (int)this + 0x1f0;
      }
      F_00bc2550(this GEN_EDX_FWD,uVar1);
    }
    if (*(int *)((int)this + 0x24) == 3) {
      F_00bc2630(this GEN_EDX_ARG);
      *(undefined4 *)((int)this + 0x24) = 4;
    }
    if (*(int *)((int)this + 0x24) == 4) {
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x1c))(this GEN_EDX_ARG,8,&REFG(undefined, 0x13056c0));
      if ((char)uVar1 == '\0') {
        return 0;
      }
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG);
      if ((char)uVar1 == '\0') {
        return 0;
      }
      F_00bd05a0(this GEN_EDX_ARG);
      *(undefined4 *)((int)this + 0x24) = 5;
    }
    if ((*(int *)((int)this + 0x24) != 5) || ((*(uint *)((int)this + 0x138) >> 2 & 1) != 0)) {
      return 0;
    }
    *(uint *)((int)this + 0xe0) = *(uint *)((int)this + 0xe0) | 0x200;
    uVar1 = *(uint *)((int)this + 0xe0);
    uVar2 = uVar1 >> 4 & 1;
    *(undefined4 *)((int)this + 0x24) = 6;
    if (((((uVar2 == 0) && ((uVar1 & 6) == 0)) && ((uVar1 & 8) != 0)) || (uVar2 != 0)) &&
       ((F_00bc27e0(this GEN_EDX_ARG), *(int *)((int)this + 0x104) == 1 && (*(int *)((int)this + 0x10c) != 0))
       )) {
      F_00b68400(*(undefined4 *)((int)this + 200));
    }
  }
  return 1;
}

/* ref: FUN_00bd0c40 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00bd0c40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd0c40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if ((((*(char *)((int)this + 0x10) == '\0') && (*(char *)((int)this + 0xb) == '\0')) &&
      (*(int *)((int)this + 0xdc) != 0)) &&
     ((*(int *)((int)this + 0x88) == 2 || (*(int *)((int)this + 0x88) == 3)))) {
    F_00bd0880(this GEN_EDX_FWD,7,0);
  }
  return (uint)(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_ARG));
}

/* ref: FUN_00bd0c80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd0c80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbd0c80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  *(uint *)((int)this + 0x138) = *(uint *)((int)this + 0x138) & 0xfffffffb;
  F_00bc2d00(this GEN_EDX_FWD);
  *(uint *)((int)this + 0x138) = *(uint *)((int)this + 0x138) & 0xfffffff7;
  *(undefined4 *)((int)this + 0x1d0) = param_1;
  *(undefined4 *)((int)this + 0x24c) = 0;
  if (param_2 < 0) {
    uVar2 = *(uint *)((int)this + 0x138) & 0xffffffbf;
    *(undefined4 *)((int)this + 0x1d4) = 0;
  }
  else {
    uVar2 = *(uint *)((int)this + 0x138) | 0x40;
    *(int *)((int)this + 0x1d4) = param_2;
  }
  *(uint *)((int)this + 0x138) = uVar2;
  bVar1 = F_00bd0b50(this GEN_EDX_ARG);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if ((bVar1 != 0) && (*(int *)((int)this + 0x24) == 6)) {
    uVar2 = F_00bd06f0(this GEN_EDX_ARG);
  }
  return uVar2;
}

/* ref: FUN_00bd0d00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd0d00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd0d00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  undefined3 extraout_var_03 = 0;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  this_00 = REFG(void * PTR32, 0x14c4e90);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar2 = *(uint *)((int)this + 0x138) >> 1;
  if (((uVar2 & 1) != 0) || (*(int *)((int)this + 0x24) == 6)) goto LAB_00bd0e51;
  switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 0x104))) {
  case 1: ;
  case 2: ;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_FWD);
    if (uVar2 != 0) {
      if (*(int *)((int)this + 0xcc) == 0) {
        (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x746d62;
        uVar2 = F_00b5e210(REFG(void * PTR32, 0x14c4e90) GEN_EDX_ARG,(int)this + 0xfc,&(*(undefined * PTR32 *)(gen_frame + 0x8)),1);
        *(uint *)((int)this + 0xcc) = uVar2;
      }
      if (*(int *)((int)this + 0x24) == 0) {
        uVar3 = F_00bc3270(this GEN_EDX_ARG,*(undefined4 *)((int)this + 0xcc));
        uVar2 = 0;
        if (uVar3 == 0) goto LAB_00bd0db0;
        bVar1 = F_00bc2450(this GEN_EDX_ARG,uVar3,1);
        uVar2 = CONCAT31(extraout_var,bVar1);
        if (bVar1 == 0) goto LAB_00bd0db0;
      }
      goto LAB_00bd0da1;
    }
    break;
  case 4: ;
    if (*(int *)((int)this + 0xcc) == 0) {
      uVar3 = (uint)((byte)(*(uint *)((int)this + 0x138) >> 5) & 1);
      uVar5 = 1;
      uVar4 = 0;
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_ARG);
      uVar2 = F_00b5e280(this_00 GEN_EDX_ARG,0,uVar2,uVar4,uVar5,uVar3);
      *(uint *)((int)this + 0xcc) = uVar2;
    }
    if (*(int *)((int)this + 0x24) == 0) {
      uVar3 = F_00bc3270(this GEN_EDX_ARG,*(undefined4 *)((int)this + 0xcc));
      uVar2 = 0;
      if (uVar3 == 0) goto LAB_00bd0db0;
      bVar1 = F_00bc2450(this GEN_EDX_ARG,uVar3,1);
      if (bVar1 == 0) {
        return CONCAT31(extraout_var_01,bVar1);
      }
    }
    goto LAB_00bd0da1;
  case 5: ;
    if (*(int *)((int)this + 0x24) == 0) {
      bVar1 = F_00bc2450(this GEN_EDX_ARG,*(undefined4 *)((int)this + 0xd0),1);
      if (bVar1 == 0) {
        return CONCAT31(extraout_var_02,bVar1);
      }
    }
LAB_00bd0da1: ;
    bVar1 = F_00bc2500(this GEN_EDX_ARG);
    uVar2 = CONCAT31(extraout_var_00,bVar1);
    if (bVar1 == 0) goto LAB_00bd0db0;
  }
  bVar1 = F_00bd0b50(this GEN_EDX_ARG);
  uVar2 = CONCAT31(extraout_var_03,bVar1);
  if (bVar1 != 0) {
    uVar2 = F_00bd06f0(this GEN_EDX_ARG);
LAB_00bd0e51: ;
    return CONCAT31((int3)(uVar2 >> 8),1);
  }
LAB_00bd0db0: ;
  return uVar2 & 0xffffff00;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf1 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00bd0e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd0e70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  if (this[8] != (undefined1)0x0) {
    return 1;
  }
  bVar1 = F_00bd0af0(this GEN_EDX_FWD);
  if (bVar1 == 0) {
    return 0;
  }
  bVar1 = F_00bc21c0((undefined *)this GEN_EDX_ARG);
  return bVar1;
}

/* ref: FUN_00bd0e90 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00bd0e90(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbd0e90u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  float fVar1;
  byte bVar2;
  uint uVar3;
  
  if (param_1[0x11] == (undefined1)0x0) {
    if ((param_1[0x24a] != (undefined1)0x0) && (param_1[0xf] != (undefined1)0x0)) {
      F_00bc32d0(param_1 GEN_EDX_FWD,3,0);
      F_00bc22e0(param_1 GEN_EDX_ARG);
      param_1[0x248] = (undefined1)0x1;
      F_00b61970(param_1 GEN_EDX_ARG);
      return;
    }
    *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) & 0xfffffdff;
    if (((*(int *)(param_1 + 0xcc) != 0) &&
        (uVar3 = *((uint *)GEN_TOP((*(int *)(param_1 + 0xcc) + 0x5c))) >> 1, (uVar3 & 1) != 0)) &&
       ((uVar3 & 1) != 0)) {
      F_00bc27e0(param_1 GEN_EDX_ARG);
    }
    F_00bc26d0(param_1 GEN_EDX_ARG,0);
    if (((*(int *)(param_1 + 0x24) != 6) && (uVar3 = F_00bd0d00(param_1 GEN_EDX_ARG), (char)uVar3 == '\0')) &&
       ((*(uint *)(param_1 + 0x2c) >> 1 & 1) != 0)) {
      F_00bd0880(param_1 GEN_EDX_ARG,3,0);
      return;
    }
    if (((param_1[8] != (undefined1)0x0) ||
        (uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)param_1 + 4))(param_1 GEN_EDX_ARG), (char)uVar3 != '\0')) &&
       (*(int *)(param_1 + 0x24) == 6)) {
      if (param_1[0x24a] != (undefined1)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)(*(int *)param_1 + 0x10))(param_1 GEN_EDX_ARG);
        return;
      }
      if ((*(uint *)(param_1 + 0xe0) & 0x200) != 0) {
        param_2 = 0.0;
      }
      if (param_1[0x249] != (undefined1)0x0) {
        bVar2 = F_00bc23a0(param_1 GEN_EDX_ARG,0x12);
        param_1[0x249] = (undefined1)(bVar2 == 0);
        if (bVar2 == 0) {
          return;
        }
        if ((char)param_3 != '\0') {
          F_00bc3080(param_1 GEN_EDX_ARG,0x13,&REFG(undefined, 0x13056c0));
        }
      }
      uVar3 = F_00bc1e50(param_1 GEN_EDX_ARG,0);
      if ((char)uVar3 == '\0') {
        fVar1 = *(float *)(param_1 + 0x250);
        if ((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x1087f04))) ==
            ((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x1087f04))) || fVar1 == REFG(float, 0x1087f04))) {
          param_2 = (float)((float10)fVar1 * (float10)param_2);
        }
      }
      else {
        param_2 = 0.0;
      }
      F_00bcf6f0(param_1 GEN_EDX_ARG,param_2,param_3);
      if (*(int *)(param_1 + 0xf4) != 0) {
        ((GEN_TCODE *)*(gen_code32 *)(*(int *)param_1 + 0x4c))(param_1 GEN_EDX_ARG);
      }
      if ((((param_1[0x10] == (undefined1)0x0) && (param_1[0xb] == (undefined1)0x0))
          && (uVar3 = F_00bd01e0(param_1 GEN_EDX_ARG), uVar3 == 0x68)) &&
         (bVar2 = F_00bc1d60(((undefined4)(uint)(param_1)) GEN_EDX_ARG), bVar2 != 0)) {
        F_00bd0880(param_1 GEN_EDX_ARG,7,0);
      }
      if (param_1[0x14] != (undefined1)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)(*(int *)param_1 + 0x10))(param_1 GEN_EDX_ARG);
      }
    }
  }
  return;
}

/* ref: FUN_00bd1060 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00bd1060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd1060u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*(char *)((int)this + 0x11) == '\0') {
    if (((*(int *)((int)this + 0xcc) != 0) &&
        (uVar1 = *((uint *)GEN_TOP((*(int *)((int)this + 0xcc) + 0x5c))) >> 1, (uVar1 & 1) != 0)) &&
       ((uVar1 & 1) != 0)) {
      F_00bc27e0(this GEN_EDX_FWD);
    }
    F_00bc26d0(this GEN_EDX_ARG,0);
    if (((*(int *)((int)this + 0x24) != 6) && (uVar1 = F_00bd0d00(this GEN_EDX_ARG), (char)uVar1 == '\0')) &&
       ((*(uint *)((int)this + 0x2c) >> 1 & 1) != 0)) {
      F_00bd0880(this GEN_EDX_ARG,3,0);
      return 0;
    }
    if ((*(char *)((int)this + 8) == '\0') &&
       (uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG), (char)uVar1 == '\0')) {
      return 0;
    }
    if (*(int *)((int)this + 0x24) == 6) {
      if (*(char *)((int)this + 0x24a) != '\0') {
        ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_ARG);
        return 0;
      }
      if (((*(uint *)((int)this + 0x138) >> 1 & 1) == 0) &&
         ((*(byte *)((int)this + 0x138) & 1) == 0)) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00bd1110 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00bd1110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbd1110u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = F_00bd17c0(this GEN_EDX_FWD,*param_1);
  *(uint *)((int)this + 0xfc) = uVar2;
  uVar1 = param_1[1];
  *(undefined4 *)((int)this + 200) = uVar1;
  *(undefined4 *)((int)this + 0x100) = uVar1;
  *(undefined4 *)((int)this + 0x24c) = 0;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  if (param_3 == 0) {
    *(uint *)((int)this + 0x138) = *(uint *)((int)this + 0x138) & 0xfffffff7;
    *(undefined4 *)((int)this + 0x250) = uVar1;
    *(undefined4 *)((int)this + 0x1d0) = 1;
  }
  else {
    *(uint *)((int)this + 0x138) = *(uint *)((int)this + 0x138) | 8;
    F_00bd1a10((undefined *)((int)this + 0x1f0) GEN_EDX_ARG,param_3);
    *(undefined4 *)((int)this + 0x250) = *(undefined4 *)((int)this + 0x1f8);
    if (*(char *)((int)this + 0x213) != '\0') {
      *(undefined1 *)((int)this + 0x85) = 1;
      *(undefined4 *)((int)this + 0x1d0) = 0;
    }
  }
  *(undefined4 *)((int)this + 0x104) = 1;
  *(undefined1 *)((int)this + 0x248) = 1;
  F_00bc2d00(this GEN_EDX_ARG);
  *(uint *)((int)this + 0x138) =
       *(uint *)((int)this + 0x138) ^ ((param_2 & 0xff) * 4 ^ *(uint *)((int)this + 0x138)) & 4;
  *(undefined2 *)((int)this + 10) = 1;
  *(undefined4 *)((int)this + 0x1dc) = 3;
  F_00bd0d00(this GEN_EDX_ARG);
  if ((((*(int *)((int)this + 0x24) == 6) &&
       (uVar2 = *(uint *)((int)this + 0xe0), (uVar2 & 0x10) == 0)) && ((uVar2 & 6) == 0)) &&
     ((uVar2 & 8) != 0)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00bd1210 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd1210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbd1210u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = F_00bd17c0(this GEN_EDX_FWD,*param_1);
  *(uint *)((int)this + 0xfc) = uVar2;
  uVar1 = param_1[1];
  *(uint *)((int)this + 0x138) = *(uint *)((int)this + 0x138) & 0xfffffffb;
  *(undefined4 *)((int)this + 200) = uVar1;
  *(undefined4 *)((int)this + 0x100) = uVar1;
  F_00bc2d00(this GEN_EDX_ARG);
  *(undefined4 *)((int)this + 0x24c) = 0;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  if (param_2 != 0) {
    *(uint *)((int)this + 0x138) = *(uint *)((int)this + 0x138) | 8;
    F_00bd1a10((undefined *)((int)this + 0x1f0) GEN_EDX_ARG,param_2);
    *(undefined4 *)((int)this + 0x250) = *(undefined4 *)((int)this + 0x1f8);
    *(undefined1 *)((int)this + 0x248) = 1;
    uVar2 = F_00bd0d00(this GEN_EDX_ARG);
    return uVar2;
  }
  *(uint *)((int)this + 0x138) = *(uint *)((int)this + 0x138) & 0xfffffff7;
  *(undefined4 *)((int)this + 0x250) = uVar1;
  *(undefined1 *)((int)this + 0x248) = 1;
  uVar2 = F_00bd0d00(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00bd12c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd12c0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5), GEN_P(uint param_7, unsigned int gen_a6), GEN_P(float param_8, float gen_a7))
{
  GEN_ENTER(0xbd12c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  GEN_PIN(uint param_7 = (uint)gen_a6;)
  GEN_PIN(float param_8 = (float)gen_a7;)
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = F_00bd17c0(param_1 GEN_EDX_FWD,*param_2);
  *(uint *)((int)param_1 + 0xfc) = uVar2;
  uVar1 = param_2[1];
  *(undefined4 *)((int)param_1 + 200) = uVar1;
  *(undefined4 *)((int)param_1 + 0x100) = uVar1;
  F_00bbb060((undefined *)((int)param_1 + 0x110) GEN_EDX_ARG,param_3);
  F_00bbb060((undefined *)((int)param_1 + 0x124) GEN_EDX_ARG,param_4);
  *(uint *)((int)param_1 + 0x138) = *(uint *)((int)param_1 + 0x138) & 0xfffffff7;
  *(undefined4 *)((int)param_1 + 0x1d0) = param_5;
  *(float *)((int)param_1 + 0x24c) = param_8;
  if (param_6 < 0) {
    uVar2 = *(uint *)((int)param_1 + 0x138) & 0xffffffbf;
    *(undefined4 *)((int)param_1 + 0x1d4) = 0;
  }
  else {
    uVar2 = *(uint *)((int)param_1 + 0x138) | 0x40;
    *(int *)((int)param_1 + 0x1d4) = param_6;
  }
  *(uint *)((int)param_1 + 0x138) = uVar2;
  F_00bc2d00(param_1 GEN_EDX_ARG);
  *(undefined1 *)((int)param_1 + 0x248) = 1;
  *(uint *)((int)param_1 + 0x138) =
       *(uint *)((int)param_1 + 0x138) ^
       ((param_7 & 0xff) * 4 ^ *(uint *)((int)param_1 + 0x138)) & 4;
  *(undefined4 *)((int)param_1 + 0x104) = 2;
  *(undefined2 *)((int)param_1 + 10) = 1;
  *(undefined4 *)((int)param_1 + 0x1dc) = 3;
  uVar2 = F_00bd0d00(param_1 GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00bd13a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd13a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(uint param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xbd13a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(uint param_5 = (uint)gen_a5;)
  uint uVar1;
  
  F_00bd17c0(this GEN_EDX_FWD,param_1);
  *(undefined4 *)((int)this + 200) = 0xffffffff;
  F_00bbb060((undefined *)((int)this + 0x110) GEN_EDX_ARG,param_2);
  *(uint *)((int)this + 0x138) = *(uint *)((int)this + 0x138) & 0xfffffff7;
  *(undefined4 *)((int)this + 0x1d0) = param_3;
  *(undefined4 *)((int)this + 0x24c) = 0;
  if (param_4 < 0) {
    uVar1 = *(uint *)((int)this + 0x138) & 0xffffffbf;
    *(undefined4 *)((int)this + 0x1d4) = 0;
  }
  else {
    uVar1 = *(uint *)((int)this + 0x138) | 0x40;
    *(int *)((int)this + 0x1d4) = param_4;
  }
  *(uint *)((int)this + 0x138) = uVar1;
  F_00bc2d00(this GEN_EDX_ARG);
  *(uint *)((int)this + 0x138) =
       *(uint *)((int)this + 0x138) ^ ((param_5 & 0xff) * 4 ^ *(uint *)((int)this + 0x138)) & 4;
  *(undefined4 *)((int)this + 0x104) = 4;
  *(undefined1 *)((int)this + 0x248) = 0;
  *(undefined2 *)((int)this + 10) = 1;
  *(undefined4 *)((int)this + 0x1dc) = 3;
  uVar1 = F_00bd0d00(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00bd1460 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd1460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(int param_5, unsigned int gen_a5), GEN_P(uint param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8), GEN_P(undefined4 param_9, unsigned int gen_a9))
{
  GEN_ENTER(0xbd1460u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(int param_5 = (int)gen_a5;)
  GEN_PIN(uint param_6 = (uint)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a9;)
  uint uVar1;
  
  *(undefined4 *)((int)this + 0xd0) = param_1;
  F_00bbb060((undefined *)((int)this + 0x110) GEN_EDX_FWD,param_2);
  *(uint *)((int)this + 0x138) = *(uint *)((int)this + 0x138) & 0xfffffff7;
  *(undefined4 *)((int)this + 0x1d0) = param_3;
  *(float *)((int)this + 0x24c) = (float)param_5;
  if (param_4 < 0) {
    uVar1 = *(uint *)((int)this + 0x138) & 0xffffffbf;
    *(undefined4 *)((int)this + 0x1d4) = 0;
  }
  else {
    uVar1 = *(uint *)((int)this + 0x138) | 0x40;
    *(int *)((int)this + 0x1d4) = param_4;
  }
  *(uint *)((int)this + 0x138) = uVar1;
  *(undefined4 *)((int)this + 0x244) = param_8;
  *(undefined4 *)((int)this + 0x240) = param_7;
  F_00bc2d00(this GEN_EDX_ARG);
  *(uint *)((int)this + 0x138) =
       *(uint *)((int)this + 0x138) ^ ((param_6 & 0xff) * 4 ^ *(uint *)((int)this + 0x138)) & 4;
  *(undefined4 *)((int)this + 0x104) = 5;
  *(undefined1 *)((int)this + 0x248) = (undefined1)param_9;
  *(undefined2 *)((int)this + 10) = 1;
  *(undefined4 *)((int)this + 0x1dc) = 3;
  uVar1 = F_00bd0d00(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00bd1530 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd1530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd1530u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 in_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x24) == 6) {
    return CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  *(uint *)((int)this + 0x2c) = *(uint *)((int)this + 0x2c) | 0x10;
  uVar1 = F_00bd0d00(this GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_00bd1550 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd1550(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xbd1550u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  __declspec(align(16)) undefined1 gen_frame[0x20];
  code * pcVar1;
  uint uVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar2 = F_00bc1e50(param_1 GEN_EDX_FWD,0);
  if ((char)uVar2 != '\0') {
    F_00bc3440(param_1 GEN_EDX_ARG,2,0,0);
  }
  pcVar1 = *(gen_code32 *)(*param_1 + 0x1c);
  param_1[0x38] = param_1[0x38] | 0x40;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0xc)) = (int)param_2;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*pcVar1)(param_1,0xc,&(*(undefined4 *)(gen_frame + 0x8)));
  F_00bd0e90(param_1 GEN_EDX_ARG,param_2,0);
  uVar3 = F_00bc2a40(param_1 GEN_EDX_ARG);
  if (uVar3 != 0) {
    F_00bc3bb0(0);
  }
  pcVar1 = *(gen_code32 *)(*param_1 + 0x1c);
  param_1[0x38] = param_1[0x38] & 0xffffff9f;
  uVar3 = (*pcVar1)(param_1,0xd,&REFG(undefined, 0x13056c0));
  if ((char)uVar2 != '\0') {
    uVar3 = F_00bc3440(param_1 GEN_EDX_ARG,2,1,0);
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00bd1610 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd1610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbd1610u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  char * pcVar3;
  int iVar4;
  uint uVar5;
  
  *(undefined4 *)((int)this + 0x108) = param_2;
  uVar5 = *(uint *)(param_1 + 0xc);
  *(uint *)((int)this + 0x1c8) = uVar5;
  if (0 < (int)uVar5) {
    puVar1 = (undefined4 *)
             F_00406bb0(-(uint)((int)((ulonglong)uVar5 * 8 >> 0x20) != 0) |
                          (uint)((ulonglong)uVar5 * 8),0,0);
    *(undefined4 * PTR32 *)((int)this + 0x1cc) = puVar1;
    iVar4 = 0;
    do {
      iVar2 = *(int *)(param_1 + 8) + iVar4;
      iVar4 = iVar4 + 8;
      puVar1[1] = *(undefined4 *)(iVar2 + param_1);
      *puVar1 = *(undefined4 *)(iVar2 + 4 + param_1);
      puVar1 = puVar1 + 2;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  pcVar3 = ((char *)GEN_TOP((*(int *)(param_1 + 0x10) + param_1)));
  if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
    *(uint *)((int)this + 0x138) = *(uint *)((int)this + 0x138) | 0x20;
    uVar5 = F_00bd13a0(this GEN_EDX_ARG,pcVar3,0,1,0xffffffff,1);
    return uVar5;
  }
  *(int *)((int)this + 0xd0) = *(int *)(param_1 + 0x14) + param_1;
  F_00bbb060((undefined *)((int)this + 0x110) GEN_EDX_ARG,0);
  *(uint *)((int)this + 0x138) = *(uint *)((int)this + 0x138) & 0xffffffb7;
  *(undefined4 *)((int)this + 0x1d0) = 1;
  *(undefined4 *)((int)this + 0x24c) = 0;
  *(undefined4 *)((int)this + 0x1d4) = 0;
  *(undefined4 *)((int)this + 0x240) = 0;
  *(undefined4 *)((int)this + 0x244) = 0;
  F_00bc2d00(this GEN_EDX_ARG);
  *(uint *)((int)this + 0x138) = *(uint *)((int)this + 0x138) | 4;
  *(undefined4 *)((int)this + 0x104) = 5;
  *(undefined1 *)((int)this + 0x248) = 0;
  *(undefined2 *)((int)this + 10) = 1;
  *(undefined4 *)((int)this + 0x1dc) = 3;
  uVar5 = F_00bd0d00(this GEN_EDX_ARG);
  return uVar5;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf35 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd1730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbd1730u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  uint uVar2;
  uint * puVar3;
  undefined4 * puVar4;
  
  iVar1 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c8)));
  puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1cc)));
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = iVar1 - 1;
    if (puVar4[1] == (*(int *)&gen_args[1])) break;
    puVar4 = puVar4 + 2;
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x90))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD);
  if (uVar2 != 0) {
    (*(int *)&gen_args[1]) = *puVar4;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x90))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    puVar3 = (uint *)F_00bd1d40((undefined *)(uVar2 + 0x84) GEN_EDX_ARG,&(*(int *)&gen_args[1]));
    return *puVar3;
  }
  uVar2 = F_0052ed20(REFG(undefined4, 0x1375b00) GEN_EDX_ARG,*puVar4,0,0);
  return uVar2;
}

/* ref: FUN_00bd17c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd17c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd17c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  char cVar1;
  int iVar2;
  char * pcVar3;
  uint uVar4;
  
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  iVar2 = *(int *)((int)this + 0xd4);
  if ((iVar2 != 0) && (iVar2 != (int)this + 0xa0)) {
    F_00406b30(iVar2);
    *(undefined4 *)((int)this + 0xd4) = 0;
  }
  if ((int)pcVar3 - (int)(param_1 + 1) < 0x28) {
    uVar4 = (int)this + 0xa0;
    F_00c49908(uVar4,0x28,param_1);
    *(uint *)((int)this + 0xd4) = uVar4;
    return uVar4;
  }
  iVar2 = ((int)pcVar3 - (int)(param_1 + 1)) + 1;
  uVar4 = F_00406bb0(iVar2,0,0);
  F_00c49908(uVar4,iVar2,param_1);
  *(uint *)((int)this + 0xd4) = uVar4;
  return uVar4;
}

/* ref: FUN_00bd1870 */
GEN_LIB GEN_FRAME uint F_00bd1870(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbd1870u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00bd18a0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00bd18a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd18a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  byte bVar1;
  byte * pbVar2;
  byte * pbVar3;
  bool bVar4;
  
  if ((*(int *)((int)this + 4) != -1) && (param_1[1] != -1)) {
    return param_1[1] == *(int *)((int)this + 4);
  }
  pbVar2 = *(byte * PTR32 *)this;
  if (pbVar2 == (byte *)0x0) {
    return 0;
  }
  pbVar3 = (byte *)*param_1;
  while( true ) {
    bVar1 = *pbVar2;
    bVar4 = bVar1 < *pbVar3;
    if (bVar1 != *pbVar3) break;
    if (bVar1 == 0) {
      return 1;
    }
    bVar1 = pbVar2[1];
    bVar4 = bVar1 < pbVar3[1];
    if (bVar1 != pbVar3[1]) break;
    pbVar2 = pbVar2 + 2;
    pbVar3 = pbVar3 + 2;
    if (bVar1 == 0) {
      return 1;
    }
  }
  return 1 - bVar4 == (uint)(bVar4 != 0);
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf23 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd1920(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd1920u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *(uint *)(in_ecx + 0xd4);
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf25 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd1930(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd1930u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  return in_ecx;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf26 */
GEN_LIB GEN_NOFRAME uint F_00bd1940(void)
{
  GEN_ENTER(0xbd1940u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf27 */
GEN_LIB GEN_NOFRAME uint F_00bd1950(void)
{
  GEN_ENTER(0xbd1950u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf36 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd1960(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd1960u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *(uint *)(in_ecx + 0x108);
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf37 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd1970(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd1970u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if ((*(byte *)(in_ecx + 0x138) & 8) != 0) {
    return in_ecx + 0x1f0;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf40 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00bd1990(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd1990u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *(uint *)(in_ecx + 0xe0) = *(uint *)(in_ecx + 0xe0) | 2;
  return;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf39 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd19a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd19a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x110;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf38 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd19b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd19b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if ((*(byte *)(in_ecx + 0xe0) & 0x60) == 0) {
    return 0;
  }
  return 1;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf43 */
GEN_LIB GEN_NOFRAME unsigned int F_00bd19d0(void)
{
  GEN_ENTER(0xbd19d0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf20 */
GEN_LIB GEN_NOFRAME float10 GEN_THISCALL F_00bd19e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd19e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*(float *)(in_ecx + 0x250);
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf44 */
GEN_LIB GEN_NOFRAME float10 GEN_THISCALL F_00bd19f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd19f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*(float *)(in_ecx + 0x60);
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf45 */
GEN_LIB GEN_NOFRAME float10 GEN_THISCALL F_00bd1a00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd1a00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*(float *)(in_ecx + 0x6c);
}

/* ref: FUN_00bd1a10 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00bd1a10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd1a10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  *(undefined1 *)((int)this + 0x20) = *(undefined1 *)(param_1 + 8);
  *(undefined1 *)((int)this + 0x21) = *(undefined1 *)((int)param_1 + 0x21);
  *(undefined1 *)((int)this + 0x22) = *(undefined1 *)((int)param_1 + 0x22);
  *(undefined1 *)((int)this + 0x23) = *(undefined1 *)((int)param_1 + 0x23);
  *(undefined4 *)((int)this + 0x30) = param_1[0xc];
  *(undefined4 *)((int)this + 0x34) = param_1[0xd];
  *(undefined4 *)((int)this + 0x38) = param_1[0xe];
  *(undefined4 *)((int)this + 0x40) = param_1[0x10];
  *(undefined4 *)((int)this + 0x44) = param_1[0x11];
  return 0;
}

/* ref: FUN_00bd1a90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd1a90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbd1a90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd1ab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd1ab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[49])REFP(0x1106724));
  F_00bcf490(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 0x124) = (*(undefined * PTR32 (*)[1])REFP(0x10f1498));
  *(undefined * PTR32 * PTR32 *)(this + 0x110) = (*(undefined * PTR32 (*)[1])REFP(0x10f1498));
  F_00bc2fd0(this GEN_EDX_ARG);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bd1af0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd1af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbd1af0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00bd1b10 */
GEN_LIB GEN_FRAME undefined4 * GEN_THISCALL F_00bd1b10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd1b10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x15) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if ((uint)puVar2[3] < *param_1) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x15) == '\0');
  }
  return puVar2;
}

/* ref: FUN_00bd1b40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd1b40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbd1b40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_00bd1b80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd1b80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbd1b80u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  int * piVar2;
  undefined4 * puVar3;
  
  piVar2 = (*(int * PTR32 *)&gen_args[3]);
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) == 0) {
    F_00b7d7d0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(*(undefined4 * PTR32 *)&gen_args[1]),1,piVar1,(*(int * PTR32 *)&gen_args[3]));
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  if ((*(int * PTR32 *)&gen_args[2]) == (int *)*piVar1) {
    if ((uint)(*(int * PTR32 *)&gen_args[3])[3] < (uint)(*(int * PTR32 *)&gen_args[2])[3]) {
      F_00b7d7d0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[1]),1,(*(int * PTR32 *)&gen_args[2]),(*(int * PTR32 *)&gen_args[3]));
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
  }
  else if ((*(int * PTR32 *)&gen_args[2]) == piVar1) {
    if (*(uint *)(piVar1[2] + 0xc) < (uint)(*(int * PTR32 *)&gen_args[3])[3]) {
      F_00b7d7d0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[1]),0,piVar1[2],(*(int * PTR32 *)&gen_args[3]));
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
  }
  else {
    if ((uint)(*(int * PTR32 *)&gen_args[3])[3] < (uint)(*(int * PTR32 *)&gen_args[2])[3]) {
      (*(int * PTR32 *)&gen_args[3]) = (*(int * PTR32 *)&gen_args[2]);
      F_00b7d0d0(&(*(int * PTR32 *)&gen_args[3]) GEN_EDX_ARG);
      if ((uint)(*(int * PTR32 *)&gen_args[3])[3] < (uint)piVar2[3]) {
        if (*((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[3])[2] + 0x15))) != '\0') {
          F_00b7d7d0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[1]),0,(*(int * PTR32 *)&gen_args[3]),piVar2);
          return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
        }
        F_00b7d7d0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[1]),1,(*(int * PTR32 *)&gen_args[2]),piVar2);
        return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
      }
    }
    if ((uint)(*(int * PTR32 *)&gen_args[2])[3] < (uint)piVar2[3]) {
      (*(int * PTR32 *)&gen_args[3]) = (*(int * PTR32 *)&gen_args[2]);
      F_00b7d290(&(*(int * PTR32 *)&gen_args[3]) GEN_EDX_ARG);
      if (((*(int * PTR32 *)&gen_args[3]) == *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))) || ((uint)piVar2[3] < (uint)(*(int * PTR32 *)&gen_args[3])[3])) {
        if (*((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2])[2] + 0x15))) != '\0') {
          F_00b7d7d0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[1]),0,(*(int * PTR32 *)&gen_args[2]),piVar2);
          return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
        }
        F_00b7d7d0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[1]),1,(*(int * PTR32 *)&gen_args[3]),piVar2);
        return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
      }
    }
  }
  puVar3 = (undefined4 *)F_00b7db30((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),piVar2,0);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar3;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00bd1ce0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd1ce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbd1ce0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x18,0,0x136);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 5) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = *param_3;
    puVar1[4] = param_3[1];
  }
  F_00bd1b80(this GEN_EDX_ARG,param_1,param_2,puVar1);
  return param_1;
}

/* ref: FUN_00bd1d40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd1d40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbd1d40u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(char *)((int)puVar4[1] + 0x15) == '\0') {
    puVar3 = (undefined4 *)puVar4[1];
    do {
      if ((uint)puVar3[3] < *(*(uint * PTR32 *)&gen_args[1])) {
        puVar2 = (undefined4 *)puVar3[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar3;
        puVar4 = puVar3;
      }
      puVar3 = puVar2;
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  if ((puVar4 != *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))) && ((uint)puVar4[3] <= *(*(uint * PTR32 *)&gen_args[1]))) {
    return (uint)(puVar4 + 4);
  }
  uVar1 = *(*(uint * PTR32 *)&gen_args[1]);
  puVar3 = (undefined4 *)F_004296a0(0x18,0,0x136);
  *puVar3 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  puVar3[1] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  puVar3[2] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  *(undefined2 *)(puVar3 + 5) = 0;
  if (puVar3 + 3 != (uint *)0x0) {
    puVar3[3] = uVar1;
    puVar3[4] = 0;
  }
  F_00bd1b80((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(uint * PTR32 *)&gen_args[1]),puVar4,puVar3);
  return (uint)((*(uint * PTR32 *)&gen_args[1]) + 4);
}

/* ref: FUN_00bd1de0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd1de0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbd1de0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint * puVar1;
  
  puVar1 = (uint *)F_00bd1d40(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x84))) GEN_EDX_FWD,&(*(undefined4 *)&gen_args[1]));
  return *puVar1;
}

/* ref: FUN_00bd1e60 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00bd1e60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd1e60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *(undefined4 *)(in_ecx + 10) = 0x1010000;
  *(undefined2 *)(in_ecx + 0xe) = 0;
  *(undefined1 *)(in_ecx + 0x10) = 0;
  *(undefined2 *)(in_ecx + 0x12) = 0;
  *(undefined1 *)(in_ecx + 0x14) = 0;
  return 0;
}

/* ref: FUN_00bd1e80 */
GEN_LIB GEN_FRAME float10 F_00bd1e80(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbd1e80u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf3 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00bd1ea0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd1ea0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (*(char *)(in_ecx + 0xf) != '\0') {
    return 1;
  }
  return *(char *)(in_ecx + 8) != '\0';
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf9 */
GEN_LIB GEN_NOFRAME unsigned int F_00bd1ec0(void)
{
  GEN_ENTER(0xbd1ec0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd1ed0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbd1ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 in_EAX = 0;
  uint uVar1;
  
  if (((*(int *)&gen_a1) != 0x12) && ((*(int *)&gen_a1) != 0x1a)) {
    if ((*(int *)&gen_a1) != 0x24) {
      return CONCAT31((int3)((uint)in_EAX >> 8),1);
    }
    if ((*(int *)(this + 0x2c) == 6) && (uVar1 = F_00be5a60(this GEN_EDX_FWD), uVar1 == 0)) {
      F_00be5410(this GEN_EDX_ARG);
    }
  }
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xd8))(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf15 */
GEN_LIB GEN_NOFRAME unsigned int F_00bd1f20(void)
{
  GEN_ENTER(0xbd1f20u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00bd1f30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd1f30(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xbd1f30u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  int iVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  float10 fVar7;
  
  iVar1 = *(int *)(param_1 + 0x24);
  uVar3 = (uint)*(ushort *)(iVar1 + 2);
  iVar5 = *(ushort *)(iVar1 + 4) + uVar3;
  if ((float10)param_2 < (float10)uVar3) {
    uVar3 = (uint)*(ushort *)(iVar1 + 2);
    param_2 = (float)uVar3;
  }
  fVar7 = (float10)iVar5;
  bVar2 = GEN_ISNAN(param_3);
  bVar6 = bVar2 || param_3 == 0.0;
  uVar4 = (uint)CONCAT11(bVar6 << 6 | bVar2 << 2 | 2U | !(0.0 <= param_3),(char)uVar3);
  if ((bVar2 != bVar6) || (fVar7 <= (float10)param_3)) {
    param_3 = (float)iVar5;
  }
  if (!(fVar7 <= (float10)param_2)) {
    bVar2 = GEN_ISNAN(param_3);
    bVar6 = bVar2 || param_3 == 0.0;
    uVar4 = (uint)CONCAT11(bVar6 << 6 | bVar2 << 2 | 2U | !(0.0 <= param_3),(char)uVar3);
    if ((bVar2 != bVar6) || (!((float10)param_3 < (float10)*(ushort *)(iVar1 + 2)))) {
      *(float *)(param_1 + 0x48) = param_2;
      *(float *)(param_1 + 0x4c) = param_3;
      *(undefined1 *)(param_1 + 0x28) = 1;
      return uVar4;
    }
  }
  *(undefined1 *)(param_1 + 0x28) = 0;
  return uVar4;
}

/* ref: FUN_00bd1fe0 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00bd1fe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd1fe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  undefined * pvVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  
  pvVar2 = *(undefined * PTR32 *)((int)this + 0x78);
  if (*(int *)(REFG(int, 0x1375b00) + 0x28) == 0) {
    if (pvVar2 != (undefined *)0x0) goto LAB_00bd20b0;
    iVar5 = *(int *)((int)this + 0x6c);
    if (iVar5 == 0) {
      if (*(int *)((int)this + 4) != 0) {
        *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      }
      iVar5 = *(int *)((int)this + 0x6c);
      if (iVar5 != 0) goto LAB_00bd2097;
    }
    else {
LAB_00bd2097: ;
      uVar1 = *(undefined4 *)(iVar5 + 0x20);
      *(undefined4 *)((int)this + 0x78) = uVar1;
      F_00b595f0(uVar1);
    }
    pvVar2 = *(undefined * PTR32 *)((int)this + 0x78);
    if (pvVar2 == (undefined *)0x0) {
      return 0;
    }
LAB_00bd20b0: ;
    piVar4 = (int *)F_00bbaf90(pvVar2 GEN_EDX_ARG);
    if (piVar4 == (int *)0x0) {
      return 0;
    }
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x98))(piVar4 GEN_EDX_ARG);
    if ((char)uVar3 != '\0') {
      return 0;
    }
    return 1;
  }
  if (pvVar2 != (undefined *)0x0) goto LAB_00bd2032;
  iVar5 = *(int *)((int)this + 0x6c);
  if (iVar5 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar5 = *(int *)((int)this + 0x6c);
    if (iVar5 != 0) goto LAB_00bd2015;
  }
  else {
LAB_00bd2015: ;
    uVar1 = *(undefined4 *)(iVar5 + 0x20);
    *(undefined4 *)((int)this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  pvVar2 = *(undefined * PTR32 *)((int)this + 0x78);
  if (pvVar2 == (undefined *)0x0) {
    return 0;
  }
LAB_00bd2032: ;
  pvVar2 = (undefined *)F_00bbaf50(pvVar2 GEN_EDX_ARG);
  if (pvVar2 != (undefined *)0x0) {
    if ((*(uint *)((int)pvVar2 + 0x11c) & 0x102) != 0) {
      return 1;
    }
    uVar3 = F_00bd3ff0(this GEN_EDX_ARG);
    if (((uVar3 == 0) && (piVar4 = (int *)F_00a5f290(pvVar2 GEN_EDX_ARG), piVar4 != (int *)0x0)) &&
       (uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x98))(piVar4 GEN_EDX_ARG), (char)uVar3 == '\0')) {
      return 1;
    }
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf23 */
GEN_LIB GEN_FRAME float10 GEN_THISCALL F_00bd20e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd20e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float fVar1;
  uint uVar2;
  float10 extraout_ST0;
  
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 8))(this GEN_EDX_FWD);
  if (((char)uVar2 == '\0') && (*(int *)(this + 4) != 0)) {
    fVar1 = *(float *)(this + 0x44);
    extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*(int *)this + 0xa4))(this);
    if ((float10)(float)(extraout_ST0 - (float10)fVar1) <= (float10)0) {
      return (float10)0;
    }
    return (float10)(float)(extraout_ST0 - (float10)fVar1);
  }
  return (float10)0;
}

/* ref: FUN_00bd2130 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00bd2130(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xbd2130u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *(float *)(in_ecx + 0x38) = ((float)GEN_TOF(((float10)param_2 - (float10)*(float *)(in_ecx + 0x34))));
  return;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf45 */
GEN_LIB GEN_FRAME float GEN_THISCALL F_00bd2140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd2140u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  float10 extraout_ST0;
  
  piVar2 = *(int * PTR32 *)(this + 0x70);
  if (piVar2 != (int *)0x0) goto LAB_00bd2172;
  iVar1 = *(int *)(this + 0x6c);
  if (iVar1 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar1 = *(int *)(this + 0x6c);
    if (iVar1 != 0) goto LAB_00bd2169;
  }
  else {
LAB_00bd2169: ;
    *(undefined4 *)(this + 0x70) = *(undefined4 *)(iVar1 + 4);
  }
  piVar2 = *(int * PTR32 *)(this + 0x70);
LAB_00bd2172: ;
  extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*piVar2 + 0xac))(piVar2);
  return ((float)GEN_TOF((extraout_ST0 + (float10)*(float *)(this + 0x34))));
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf46 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd2190(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd2190u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (*(int *)(in_ecx + 0x24) != 0) {
    return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x24) + 8)));
  }
  return 0;
}

/* ref: FUN_00bd21a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd21a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd21a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = *(int *)((int)this + 0x24);
  uVar3 = 0;
  if (iVar1 != 0) {
    *(undefined4 *)((int)this + 0x58) = 1;
    *(undefined4 *)((int)this + 0x5c) = 1;
    *(float *)((int)this + 0x34) =
         ((float)GEN_TOF(((float10)*(ushort *)(iVar1 + 2) + (float10)*(float *)((int)this + 0x3c))));
    uVar3 = (uint)*(ushort *)(iVar1 + 4);
    *(float *)((int)this + 0x38) = (float)uVar3;
    uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
    *(undefined4 *)((int)this + 0x60) = 0;
    *(undefined4 *)((int)this + 0x50) = uVar2;
    *(undefined4 *)((int)this + 0x30) = 0;
  }
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf49 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00bd2200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd2200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  int iVar2;
  
  if (this[0x10] != (undefined1)0x0) goto LAB_00bd225a;
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_FWD);
  if ((char)uVar1 == '\0') goto LAB_00bd225a;
  if (*(int *)(this + 0x70) == 0) {
    iVar2 = *(int *)(this + 0x6c);
    if (iVar2 == 0) {
      if (*(int *)(this + 4) != 0) {
        *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
      }
      iVar2 = *(int *)(this + 0x6c);
      if (iVar2 == 0) goto LAB_00bd223b;
    }
    *(undefined4 *)(this + 0x70) = *(undefined4 *)(iVar2 + 4);
  }
LAB_00bd223b: ;
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_ARG);
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 8))(this GEN_EDX_ARG);
  if ((char)uVar1 != '\0') {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_ARG);
  }
LAB_00bd225a: ;
  *(undefined4 *)(this + 0x40) = 0;
  return;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf51 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00bd2270(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xbd2270u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  code * pcVar1;
  
  if ((char)param_1[3] != '\0') {
    pcVar1 = *(gen_code32 *)(*param_1 + 0x70);
    param_1[0x10] = (int)gen_fl2bits((float)((float10)param_2 + ((float10)GEN_TOD(gen_bits2f(param_1[0x10])))))
    ;
    param_1[0x11] = (int)gen_fl2bits((float)(((float10)GEN_TOD(gen_bits2f(param_1[0x11]))) + (float10)param_2))
    ;
    (*pcVar1)(param_1,(undefined4)gen_fl2bits(param_2));
  }
  return;
}

/* ref: FUN_00bd22a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd22a0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbd22a0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1[8];
  if (iVar1 != 0) {
    F_00c22060(iVar1 GEN_EDX_FWD,param_2);
    ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x74))(param_1 GEN_EDX_ARG,iVar1);
  }
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x78))(param_1 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),param_3);
  param_1[0x14] = (int)gen_fl2bits(param_2);
  return uVar2;
}

/* ref: FUN_00bd22f0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd22f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd22f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = (uint)*(char *)(in_ecx + 0x29);
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
  case 1: ;
  case 2: ;
  case 6: ;
    *(undefined4 *)(in_ecx + 0x30) = 4;
    return uVar1;
  case 3: ;
    *(undefined4 *)(in_ecx + 0x30) = 3;
    return uVar1;
  case 4: ;
  case 5: ;
    *(undefined4 *)(in_ecx + 0x30) = 6;
    return uVar1;
  case 7: ;
    *(undefined4 *)(in_ecx + 0x30) = 7;
  }
  return uVar1;
}

/* ref: FUN_00bd2340 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd2340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd2340u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  if ((uVar2 != 0) && (uVar1 = *(uint *)((int)this + 0x60), uVar1 != 0)) {
    if (uVar2 <= uVar1) {
      *(uint *)((int)this + 0x60) = uVar1 - uVar2;
      *param_1 = 0;
      return uVar2;
    }
    uVar2 = uVar2 - uVar1;
    *param_1 = uVar2;
  }
  *(undefined4 *)((int)this + 0x60) = 0;
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf39 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd2380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd2380u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xec))(this GEN_EDX_FWD,4);
  return uVar1;
}

/* ref: FUN_00bd2390 */
GEN_LIB GEN_FRAME float GEN_THISCALL F_00bd2390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd2390u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  float fVar2;
  
  iVar1 = *(int *)((int)this + 0x70);
  if (iVar1 != 0) goto LAB_00bd23c9;
  iVar1 = *(int *)((int)this + 0x6c);
  if (iVar1 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar1 = *(int *)((int)this + 0x6c);
    if (iVar1 != 0) goto LAB_00bd23b6;
  }
  else {
LAB_00bd23b6: ;
    *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(iVar1 + 4);
  }
  iVar1 = *(int *)((int)this + 0x70);
  if (iVar1 == 0) {
    return (float)(float10)0;
  }
LAB_00bd23c9: ;
  if (*(char *)(iVar1 + 0x30) == '\0') {
    if (*(char *)(iVar1 + 0x80) == '\0') {
      fVar2 = *(float *)(iVar1 + 0x58);
    }
    else {
      fVar2 = *(float *)(iVar1 + 0x6c);
    }
    return ((float)GEN_TOF(((float10)fVar2 - (float10)*(float *)((int)this + 0x34))));
  }
  if (*(char *)((int)this + 0xd) == '\0') {
    return REFG(float, 0x1090708);
  }
  return *(float *)((int)this + 0x44);
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd2410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xbd2410u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xec))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00bd2420 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd2420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd2420u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  piVar3 = *(int * PTR32 *)((int)this + 0x74);
  if (piVar3 != (int *)0x0) goto LAB_00bd2466;
  piVar3 = *(int * PTR32 *)((int)this + 0x70);
  if (piVar3 == (int *)0x0) {
    iVar1 = *(int *)((int)this + 0x6c);
    if (iVar1 == 0) {
      if (*(int *)((int)this + 4) != 0) {
        *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      }
      iVar1 = *(int *)((int)this + 0x6c);
      if (iVar1 != 0) goto LAB_00bd244c;
    }
    else {
LAB_00bd244c: ;
      *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(iVar1 + 4);
    }
    piVar3 = *(int * PTR32 *)((int)this + 0x70);
    if (piVar3 != (int *)0x0) goto LAB_00bd2459;
  }
  else {
LAB_00bd2459: ;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 100))(piVar3 GEN_EDX_FWD);
    *(uint *)((int)this + 0x74) = uVar2;
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x74);
LAB_00bd2466: ;
  if (piVar3 == (int *)0x0) {
    return 0;
  }
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x94))(piVar3 GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00bd2480 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00bd2480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd2480u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  piVar3 = *(int * PTR32 *)((int)this + 0x74);
  if (piVar3 != (int *)0x0) goto LAB_00bd24c6;
  piVar3 = *(int * PTR32 *)((int)this + 0x70);
  if (piVar3 == (int *)0x0) {
    iVar1 = *(int *)((int)this + 0x6c);
    if (iVar1 == 0) {
      if (*(int *)((int)this + 4) != 0) {
        *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      }
      iVar1 = *(int *)((int)this + 0x6c);
      if (iVar1 != 0) goto LAB_00bd24ac;
    }
    else {
LAB_00bd24ac: ;
      *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(iVar1 + 4);
    }
    piVar3 = *(int * PTR32 *)((int)this + 0x70);
    if (piVar3 != (int *)0x0) goto LAB_00bd24b9;
  }
  else {
LAB_00bd24b9: ;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 100))(piVar3 GEN_EDX_FWD);
    *(uint *)((int)this + 0x74) = uVar2;
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x74);
LAB_00bd24c6: ;
  if (piVar3 == (int *)0x0) {
    return 0;
  }
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x98))(piVar3 GEN_EDX_ARG);
  return (byte)uVar2;
}

/* ref: FUN_00bd24f0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00bd24f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xbd24f0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  if (*(int *)(in_ecx + 0x68) == param_2) {
    *(undefined4 *)(in_ecx + 0x68) = 0;
    *(float *)(in_ecx + 0x34) = ((float)GEN_TOF(((float10)param_3 + (float10)*(float *)(in_ecx + 0x34))));
    return 1;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf62 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00bd2520(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbd2520u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  if (*param_2 == in_ecx) {
    *param_2 = 0;
    return 0;
  }
  *param_2 = in_ecx;
  return 1;
}

/* ref: FUN_00bd2540 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd2540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd2540u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x20);
  if ((*(char *)(uVar1 + 0x16) == '\0') && (param_1 != (undefined4 *)0x0)) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_FWD,1);
  }
  return uVar1;
}

/* ref: FUN_00bd2560 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00bd2560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd2560u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x20) != (undefined *)0x0) {
    F_00c21b10(*(undefined * PTR32 *)((int)this + 0x20) GEN_EDX_FWD);
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x20);
    if ((*(char *)((int)puVar1 + 0x16) == '\0') && (puVar1 != (undefined4 *)0x0)) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
    }
    *(undefined4 *)((int)this + 0x20) = 0;
  }
  return;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf1 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00bd2590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd2590u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (this[8] == (undefined1)0x0) {
    *(undefined2 *)(this + 8) = 1;
    if (*(int *)(this + 4) != 0) {
      *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 9))) = 1;
    }
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x10) = 0;
    *(undefined2 *)(this + 0x14) = 0;
  }
  return 1;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf4 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00bd25c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd25c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  uint uVar2;
  
  if (this[0x10] != (undefined1)0x0) {
    return 1;
  }
  if ((this[8] != (undefined1)0x0) &&
     (uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 8))(this GEN_EDX_FWD), (char)uVar2 != '\0')) {
    uVar2 = F_0054d920(this GEN_EDX_ARG);
    if ((uVar2 != 0) && (bVar1 = F_00bcf340(uVar2 GEN_EDX_ARG), bVar1 == 0)) {
      return 0;
    }
    F_00bd41b0(this GEN_EDX_ARG);
    return 1;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf5 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00bd2600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd2600u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (this[0x11] != (undefined1)0x0) {
    return 1;
  }
  if (this[0x10] == (undefined1)0x0) {
    return 0;
  }
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x20))(this GEN_EDX_FWD);
  this[0x11] = (undefined1)0x1;
  this[0x15] = (undefined1)0x0;
  if (*(int *)(this + 4) != 0) {
    *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x15))) = 1;
  }
  return 1;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf40 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00bd2640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd2640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  
  *(undefined4 *)(this + 10) = 0x1000000;
  if ((char)param_1 != '\0') {
    this[0xe] = (undefined1)0x1;
    this[0x12] = (undefined1)0x0;
    if (*(int *)(this + 4) != 0) {
      *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x12))) = 1;
    }
  }
  iVar1 = *(int *)(this + 0x70);
  if (iVar1 == 0) {
    iVar1 = *(int *)(this + 0x6c);
    if (iVar1 == 0) {
      if (*(int *)(this + 4) != 0) {
        *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
      }
      iVar1 = *(int *)(this + 0x6c);
      if (iVar1 != 0) goto LAB_00bd2687;
    }
    else {
LAB_00bd2687: ;
      *(undefined4 *)(this + 0x70) = *(undefined4 *)(iVar1 + 4);
    }
    iVar1 = *(int *)(this + 0x70);
    if (iVar1 == 0) goto LAB_00bd26b2;
  }
  if ((*(char *)(iVar1 + 0x80) == '\0') &&
     ((*(int *)(iVar1 + 0x74) == 0 || (1 < *(uint *)(iVar1 + 0x78))))) {
    return 0;
  }
LAB_00bd26b2: ;
  *(undefined4 *)(this + 0xd) = 0x1010101;
  *(undefined2 *)(this + 0x12) = 0;
  this[0x14] = (undefined1)0x0;
  if (*(int *)(this + 4) != 0) {
    *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x12))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x13))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x14))) = 1;
  }
  return 1;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf22 */
GEN_LIB GEN_FRAME float GEN_THISCALL F_00bd2740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd2740u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  float10 extraout_ST0;
  float fVar2;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 8))(this GEN_EDX_FWD);
  if (((char)uVar1 == '\0') && (*(int *)(this + 4) != 0)) {
    extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*(int *)this + 0xa4))(this);
    fVar2 = F_00bd2390(this GEN_EDX_ARG);
    if ((float10)(float)((float10)(double)extraout_ST0 - (float10)fVar2) <= (float10)0) {
      return (float)(float10)0;
    }
    return (float)((float10)(double)extraout_ST0 - (float10)fVar2);
  }
  return (float)(float10)0;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf53 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00bd28c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd28c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  float fVar1;
  int iVar2;
  float10 extraout_ST0;
  
  if (this[0x10] == (undefined1)0x0) {
    fVar1 = *(float *)(this + 0x44);
    if ((this[0x29] == (undefined1)0x6) || (this[0x29] == (undefined1)0x7)) {
      if (this[0xe] == (undefined1)0x0) {
        iVar2 = *(int *)(this + 0x20);
        if (iVar2 != 0) {
          F_00c22060(iVar2 GEN_EDX_FWD,fVar1);
          ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x74))(this GEN_EDX_ARG,iVar2);
        }
        ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x78))(this GEN_EDX_ARG,(undefined4)gen_fl2bits(fVar1),param_1);
        *(float *)(this + 0x50) = fVar1;
      }
    }
    else {
      extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*(int *)this + 0xa4))(this);
      if ((float10)fVar1 < extraout_ST0) {
        F_00bd22a0(this GEN_EDX_ARG,fVar1,param_1);
        return;
      }
    }
  }
  return;
}

/* ref: FUN_00bd2970 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd2970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd2970u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  float10 fVar5;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar6;
  double dVar7;
  float fVar8;
  undefined4 uVar9;
  
  fVar8 = F_00bd2390(this GEN_EDX_FWD);
  uVar1 = (uint)*(char *)((int)this + 0x29);
  uVar2 = uVar1;
  if (uVar1 < 8) {
    uVar2 = (uint)(&REFG(byte, 0xbd2a08))[(int)(uVar1)];
    switch((unsigned int)(uintptr_t)(uVar1)) {
    default: ;
      extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*(int *)this + 0xa4))();
      uVar2 = (uint)(ulonglong)gen_d2bits(dVar7); dVar7 = extraout_ST0;
      if (extraout_ST0 <= (float10)fVar8) {
        uVar9 = 1;
        extraout_ST0_00 = ((gen_fcode *)*(gen_code32 *)(*(int *)this + 0xa4))(this);
        uVar2 = F_00bd22a0(this GEN_EDX_ARG,(float)extraout_ST0_00,uVar9);
        return uVar2;
      }
    case 5: ;
    case 6: ;
    case 7: ;
      fVar5 = (float10)fVar8;
      fVar6 = (float10)*(float *)((int)this + 0x50);
      bVar3 = GEN_ISNAN(fVar5) || GEN_ISNAN(fVar6);
      bVar4 = bVar3 || fVar5 == fVar6;
      uVar2 = CONCAT22((short)(uVar2 >> 0x10),
                       CONCAT11(bVar4 << 6 | bVar3 << 2 | 2U | !(fVar6 <= fVar5),(char)uVar2));
      if (bVar3 == bVar4) {
        uVar2 = F_00bd22a0(this GEN_EDX_ARG,fVar8,1);
        return uVar2;
      }
    case 3: ;
    case 4: ;
    }
  }
  return uVar2;
}

/* ref: FUN_00bd2a10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd2a10(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xbd2a10u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  float fVar1;
  char cVar2;
  uint in_EAX = 0;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float fVar7;
  
  iVar5 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x70)));
  if (iVar5 == 0) {
    in_EAX = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6c)));
    if (in_EAX == 0) {
      if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) != 0) {
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6c))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)));
      }
      in_EAX = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6c)));
      if (in_EAX != 0) goto LAB_00bd2a3b;
    }
    else {
LAB_00bd2a3b: ;
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x70))) = *(undefined4 *)(in_EAX + 4);
    }
    iVar5 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x70)));
  }
  cVar2 = *((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x29)));
  if (iVar5 == 0) {
    return in_EAX;
  }
  uVar3 = (uint)cVar2;
  switch((unsigned int)(uintptr_t)(uVar3)) {
  case 0: ;
  case 1: ;
  case 2: ;
    (*(float *)&gen_args[1]) = gen_bits2f(F_00bc1fd0(iVar5 GEN_EDX_FWD,GEN_TOF(*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34)))),(*(float *)&gen_args[1])));
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xa4))))((*(undefined * PTR32 *)&gen_args[0]));
    bVar6 = GEN_ISNAN(extraout_ST0) || GEN_ISNAN((float10)0);
    if (bVar6 == (bVar6 || extraout_ST0 == (float10)0)) {
      fVar1 = *((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34)));
      fVar7 = 0.0;
      extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xa4))))((*(undefined * PTR32 *)&gen_args[0]));
      uVar3 = F_00bc1fd0(iVar5 GEN_EDX_ARG,(float)(extraout_ST0_00 + (float10)fVar1),fVar7);
    }
    else {
      uVar3 = 0;
    }
    F_00bd2340((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(float *)&gen_args[1]));
    if ((*(float *)&gen_args[1]) == gen_bits2f(uVar3)) {
      return (uint)gen_fl2bits((*(float *)&gen_args[1]));
    }
    if (uVar3 < (uint)gen_fl2bits((*(float *)&gen_args[1]))) {
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) = 4;
      return (uint)gen_fl2bits((*(float *)&gen_args[1]));
    }
    if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) == '\0') {
      return (uint)gen_fl2bits((*(float *)&gen_args[1]));
    }
    F_00bd2970(((undefined *)(uint)((*(undefined * PTR32 *)&gen_args[0]))) GEN_EDX_ARG);
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x88))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,6);
    if (((cVar2 == '\x01') || (cVar2 == '\x02')) && ((char)uVar3 != '\x01')) {
      return uVar3;
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xa0))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,1);
    return uVar3;
  case 3: ;
    break;
  case 4: ;
  case 5: ;
    break;
  case 6: ;
  case 7: ;
    break;
  default: ;
    goto switchD_00bd2a5b_default;
  }
  uVar4 = F_00bc1fd0(iVar5 GEN_EDX_ARG,GEN_TOF(*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34)))),(*(float *)&gen_args[1]));
  uVar3 = 0;
  if (uVar4 != 0) {
    uVar3 = F_00bd22f0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
  }
switchD_00bd2a5b_default: ;
  return uVar3;
}

/* ref: FUN_00bd2b80 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00bd2b80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbd2b80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  if (*(int *)((int)this + 0x30) == 0) {
    if (param_1 < *((ushort *)GEN_TOP((*(int *)((int)this + 0x24) + 2)))) {
      return 0;
    }
    switch((unsigned int)(uintptr_t)(*(undefined1 *)((int)this + 0x29))) {
    case 0: ;
    case 1: ;
    case 2: ;
    case 6: ;
      *(undefined4 *)((int)this + 0x30) = 4;
      return 1;
    case 3: ;
      *(undefined4 *)((int)this + 0x30) = 3;
      return 1;
    case 4: ;
    case 5: ;
      *(undefined4 *)((int)this + 0x30) = 6;
      return 1;
    case 7: ;
      *(undefined4 *)((int)this + 0x30) = 7;
    }
  }
  return 1;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf59 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00bd2c00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbd2c00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 BVar1;
  byte bVar2;
  uint uVar3;
  byte local_5;
  
  BVar1 = this[0x29];
  local_5 = 0;
  if ((((*(int *)&gen_a1) == 9) && (*(int *)(this + 0x2c) == 6)) && (bVar2 = F_00be54a0(this GEN_EDX_FWD), bVar2 != 0))
  {
    return 0;
  }
  if (this[0xc] != (undefined1)0x0) {
    if ((*(int *)&gen_a1) != 2) {
      F_00bd2970(this GEN_EDX_ARG);
    }
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x88))(this GEN_EDX_ARG,(*(int *)&gen_a1));
    local_5 = (byte)uVar3;
  }
  if ((((*(int *)&gen_a1) != 9) && ((*(int *)&gen_a1) != 6)) || ((BVar1 != (undefined1)0x6 && (BVar1 != (undefined1)0x7))))
  {
    if ((((*(int *)&gen_a1) == 3) || ((*(int *)&gen_a1) == 4)) || (((*(int *)&gen_a1) == 5 || ((*(int *)&gen_a1) == 9)))) {
      *(undefined4 *)(this + 10) = 0x1000000;
      *(undefined2 *)(this + 0xe) = 0x101;
      this[0x10] = (undefined1)0x1;
      *(undefined2 *)(this + 0x12) = 0;
      this[0x14] = (undefined1)0x0;
      if (*(int *)(this + 4) == 0) {
        return local_5;
      }
      *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x12))) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x13))) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x14))) = 1;
      return local_5;
    }
    if ((BVar1 != (undefined1)0x1) && (BVar1 != (undefined1)0x2)) {
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xa0))(this GEN_EDX_ARG,1);
      return local_5;
    }
  }
  this[0x14] = (undefined1)0x1;
  *(undefined2 *)(this + 0x12) = 0x101;
  *(undefined2 *)(this + 10) = 0x100;
  return local_5;
}

/* ref: FUN_00bd2d10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd2d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd2d10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  *(undefined4 *)((int)this + 10) = 0;
  *(undefined4 *)((int)this + 0xe) = 0;
  *(undefined2 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x12) = 0;
  if (param_1 == 0) {
    uVar2 = F_00406b90(0x54,0,0);
    if (uVar2 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = F_00c219a0(uVar2 GEN_EDX_ARG);
    }
  }
  else {
    uVar2 = F_00c219a0(param_1 GEN_EDX_ARG);
    *(undefined1 *)(uVar2 + 0x16) = 1;
  }
  *(undefined * PTR32 *)(uVar2 + 4) = this;
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x20);
  if ((puVar1 != (undefined4 *)0x0) && (*(char *)((int)puVar1 + 0x16) == '\0')) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
  }
  *(uint *)((int)this + 0x20) = uVar2;
  return uVar2;
}

/* ref: FUN_00bd2d80 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd2d80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd2d80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  int iVar2;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x14) = 0;
  *(undefined1 *)((int)this + 0x16) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x1106874));
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined2 *)((int)this + 0x28) = 1;
  *(undefined1 *)((int)this + 0x2a) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x50) = uVar1;
  *(undefined4 *)((int)this + 0x54) = uVar1;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0xffffffff;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined2 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  if (*(int *)((int)this + 0x78) == 0) {
    iVar2 = *(int *)((int)this + 0x6c);
    if (iVar2 == 0) {
      if (*(int *)((int)this + 4) != 0) {
        *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      }
      iVar2 = *(int *)((int)this + 0x6c);
      if (iVar2 == 0) {
        return (uint)this;
      }
    }
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)((int)this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  return (uint)this;
}

/* ref: FUN_00bd2e60 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd2e60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd2e60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x1106874));
  uVar2 = 0;
  if (*(int *)((int)this + 0x78) != 0) {
    uVar2 = F_00b59c20(REFG(void * PTR32, 0x14c4e78) GEN_EDX_FWD,*(int *)((int)this + 0x78));
  }
  if (*(undefined * PTR32 *)((int)this + 0x20) != (undefined *)0x0) {
    uVar2 = F_00c21b10(*(undefined * PTR32 *)((int)this + 0x20) GEN_EDX_ARG);
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x20);
    if ((*(char *)((int)puVar1 + 0x16) == '\0') && (puVar1 != (undefined4 *)0x0)) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
    }
    *(undefined4 *)((int)this + 0x20) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10f34d4));
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf2 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00bd2eb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd2eb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (this[0xe] == (undefined1)0x0) {
    if (this[8] == (undefined1)0x0) {
      return 0;
    }
    if (this[0xd] == (undefined1)0x0) {
      if (this[0xb] == (undefined1)0x0) {
        return 0;
      }
    }
    else {
      if ((this[0x29] != (undefined1)0x6) && (this[0x29] != (undefined1)0x7)) {
        return 0;
      }
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x1c))(this GEN_EDX_FWD);
      if ((char)uVar1 == '\0') {
        return 0;
      }
      F_00bd2970(this GEN_EDX_ARG);
    }
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xa0))(this GEN_EDX_ARG,1);
  }
  return 1;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf12 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00bd2f00(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(float param_8, float gen_a7))
{
  GEN_ENTER(0xbd2f00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(float param_8 = (float)gen_a7;)
  *(undefined4 *)(param_1 + 0x2c) = param_3;
  *(undefined1 *)(param_1 + 0x29) = (undefined1)param_4;
  *(undefined1 *)(param_1 + 0x2a) = (undefined1)param_5;
  *(int *)(param_1 + 0x24) = param_2;
  if ((char)param_6 == '\0') {
    *(ushort *)(param_1 + 0x7c) = *(ushort *)(param_1 + 0x7c) & 0xfffb;
  }
  else {
    *(ushort *)(param_1 + 0x7c) = *(ushort *)(param_1 + 0x7c) | 4;
  }
  if ((char)param_7 == '\0') {
    *(ushort *)(param_1 + 0x7c) = *(ushort *)(param_1 + 0x7c) & 0xfff7;
  }
  else {
    *(ushort *)(param_1 + 0x7c) = *(ushort *)(param_1 + 0x7c) | 8;
  }
  *(float *)(param_1 + 0x3c) = param_8;
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 10) = 0;
    *(undefined4 *)(param_1 + 0xe) = 0;
    *(undefined2 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x12) = 0;
    *(ushort *)(param_1 + 0x7c) = *(ushort *)(param_1 + 0x7c) & 0xfffe;
    *(ushort *)(param_1 + 0x7c) = *(ushort *)(param_1 + 0x7c) & 0xfffd;
    *(undefined4 *)(param_1 + 0x58) = 1;
    *(undefined4 *)(param_1 + 0x5c) = 1;
    *(float *)(param_1 + 0x34) = ((float)GEN_TOF(((float10)*(ushort *)(param_2 + 2) + (float10)param_8)));
    *(float *)(param_1 + 0x38) = (float)*(ushort *)(param_2 + 4);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x30) = 1;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf16 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00bd2fb0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xbd2fb0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  int iVar1;
  undefined4 uVar2;
  
  *(int *)(param_1 + 0x24) = param_2;
  if (param_2 != 0) {
    *(float *)(param_1 + 0x3c) = param_3;
    *(ushort *)(param_1 + 0x7c) = *(ushort *)(param_1 + 0x7c) & 0xfffe;
    *(ushort *)(param_1 + 0x7c) = *(ushort *)(param_1 + 0x7c) & 0xfffd;
    iVar1 = *(int *)(param_1 + 0x24);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x58) = 1;
      *(undefined4 *)(param_1 + 0x5c) = 1;
      *(float *)(param_1 + 0x34) =
           ((float)GEN_TOF(((float10)*(ushort *)(iVar1 + 2) + (float10)*(float *)(param_1 + 0x3c))));
      *(float *)(param_1 + 0x38) = (float)*(ushort *)(iVar1 + 4);
      uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x50) = uVar2;
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
    *(undefined4 *)(param_1 + 10) = 0;
    *(undefined4 *)(param_1 + 0xe) = 0;
    *(undefined2 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x12) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  return 0;
}

/* ref: FUN_00bd3040 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd3040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd3040u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  if (*(uint *)((int)this + 100) != 0xffffffff) {
    return *(uint *)((int)this + 100);
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x70);
  if (piVar3 != (int *)0x0) goto LAB_00bd307e;
  iVar1 = *(int *)((int)this + 0x6c);
  if (iVar1 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar1 = *(int *)((int)this + 0x6c);
    if (iVar1 != 0) goto LAB_00bd306d;
  }
  else {
LAB_00bd306d: ;
    *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(iVar1 + 4);
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x70);
  if (piVar3 == (int *)0x0) {
    return 0;
  }
LAB_00bd307e: ;
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x6c))(piVar3 GEN_EDX_FWD);
  *(undefined4 *)((int)this + 100) = 0;
  if ((uVar2 != 0) && (uVar2 = F_00be38d0(uVar2 GEN_EDX_ARG), uVar2 != 0)) {
    *(undefined4 *)((int)this + 100) = *(undefined4 *)(uVar2 + 0xc);
    *(ushort *)((int)this + 0x7c) = *(ushort *)((int)this + 0x7c) | 2;
  }
  return *(uint *)((int)this + 100);
}

/* ref: FUN_00bd30b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd30b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd30b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  bVar1 = F_00bd2480(this GEN_EDX_FWD);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 == 0) {
    if ((char)param_1 != '\0') {
      uVar2 = F_00bd3f80(this GEN_EDX_ARG);
      if (uVar2 != 0) {
        *(undefined1 *)(uVar2 + 0xe6) = 1;
      }
    }
    *(ushort *)((int)this + 0x7c) = *(ushort *)((int)this + 0x7c) | 0x20;
  }
  return uVar2;
}

/* ref: FUN_00bd30e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd30e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd30e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float fVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar6;
  double dVar7;
  
  iVar2 = *(int *)((int)this + 0x70);
  if (iVar2 != 0) goto LAB_00bd3117;
  iVar2 = *(int *)((int)this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar2 = *(int *)((int)this + 0x6c);
    if (iVar2 != 0) goto LAB_00bd310e;
  }
  else {
LAB_00bd310e: ;
    *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(iVar2 + 4);
  }
  iVar2 = *(int *)((int)this + 0x70);
LAB_00bd3117: ;
  *(ushort *)((int)this + 0x7c) = *(ushort *)((int)this + 0x7c) & 0xfffe;
  uVar3 = 0xfffd;
  *(ushort *)((int)this + 0x7c) = *(ushort *)((int)this + 0x7c) & 0xfffd;
  *(undefined4 *)((int)this + 100) = 0xffffffff;
  if (iVar2 != 0) {
    if (*(int *)((int)this + 0x2c) == 6) {
      uVar3 = F_00bd3040(this GEN_EDX_FWD);
      if ((uVar3 & 1) == 0) {
        if ((*(uint *)((int)this + 0x90) >> 4 & 1) != 0) {
          *(ushort *)((int)this + 0x7c) = *(ushort *)((int)this + 0x7c) | 1;
          return uVar3;
        }
      }
      else {
        fVar1 = *(float *)((int)this + 0x3c);
        bVar4 = GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
        bVar5 = bVar4 || fVar1 == *(float *)&REFG(undefined, 0x1088114);
        uVar3 = CONCAT22((short)(uVar3 >> 0x10),
                         CONCAT11(bVar5 << 6 | bVar4 << 2 | 2U | !(*(float *)&REFG(undefined, 0x1088114) <= fVar1)
                                  ,(char)uVar3));
        if (bVar4 != bVar5) {
          *(ushort *)((int)this + 0x7c) = *(ushort *)((int)this + 0x7c) | 1;
          return uVar3;
        }
      }
    }
    else if ((*(byte *)((int)this + 0x7c) >> 2 & 1) != 0) {
      fVar1 = *(float *)((int)this + 0x3c);
      bVar4 = GEN_ISNAN(fVar1);
      bVar5 = bVar4 || fVar1 == 0.0;
      uVar3 = (uint)CONCAT11(bVar5 << 6 | bVar4 << 2 | 2U | !(0.0 <= fVar1),0xfd);
      if (bVar4 != bVar5) {
        fVar1 = *(float *)((int)this + 0x34);
        bVar4 = GEN_ISNAN(fVar1);
        bVar5 = bVar4 || fVar1 == 0.0;
        uVar3 = (uint)CONCAT11(bVar5 << 6 | bVar4 << 2 | 2U | !(0.0 <= fVar1),0xfd);
        if (bVar4 != bVar5) {
          fVar1 = *(float *)(iVar2 + 0x6c);
          extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*(int *)this + 0xa4))(this);
          uVar3 = (uint)(ulonglong)gen_d2bits(dVar7); dVar7 = extraout_ST0;
          if (!((float10)fVar1 <= extraout_ST0)) {
            fVar1 = *(float *)(iVar2 + 0x68);
            extraout_ST0_00 = ((gen_fcode *)*(gen_code32 *)(*(int *)this + 0xa4))(this); dVar7 = extraout_ST0_00;
            fVar6 = (float10)fVar1;
            bVar4 = GEN_ISNAN(extraout_ST0_00) || GEN_ISNAN(fVar6);
            bVar5 = bVar4 || extraout_ST0_00 == fVar6;
            uVar3 = CONCAT22((short)((ulonglong)gen_d2bits(dVar7) >> 0x10),
                             CONCAT11(bVar5 << 6 | bVar4 << 2 | 2U | !(fVar6 <= extraout_ST0_00),
                                      (char)(ulonglong)gen_d2bits(dVar7)));
            if (bVar4 == bVar5) {
              return uVar3;
            }
          }
          *(ushort *)((int)this + 0x7c) = *(ushort *)((int)this + 0x7c) | 1;
        }
      }
    }
  }
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf48 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd3200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd3200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  code * pcVar2;
  undefined4 uVar3;
  uint in_EAX = 0;
  
  if (((char)param_1 == '\0') || (((byte)this[0x7c] & 1) == 0)) {
    iVar1 = *(int *)(this + 0x24);
    if (iVar1 != 0) {
      *(undefined4 *)(this + 0x58) = 1;
      *(undefined4 *)(this + 0x5c) = 1;
      *(float *)(this + 0x34) =
           ((float)GEN_TOF(((float10)*(ushort *)(iVar1 + 2) + (float10)*(float *)(this + 0x3c))));
      *(float *)(this + 0x38) = (float)*(ushort *)(iVar1 + 4);
      uVar3 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
      *(undefined4 *)(this + 0x60) = 0;
      *(undefined4 *)(this + 0x50) = uVar3;
      *(undefined4 *)(this + 0x30) = 0;
    }
    *(undefined4 *)(this + 10) = 0;
    *(undefined2 *)(this + 0xe) = 0;
    this[0x10] = (undefined1)0x0;
    *(undefined2 *)(this + 0x12) = 0;
    this[0x14] = (undefined1)0x0;
    pcVar2 = *(gen_code32 *)(*(int *)this + 0x6c);
    *(undefined4 *)(this + 0x44) = 0;
    in_EAX = (*pcVar2)(this);
  }
  return in_EAX;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd3280(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xbd3280u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  undefined4 in_EAX = 0;
  uint uVar1;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),(char)param_1[4]);
  if ((char)param_1[4] == '\0') {
    if ((char)param_1[3] != '\0') {
      param_1[0x10] =
           (int)gen_fl2bits((float)((float10)param_2 + ((float10)GEN_TOD(gen_bits2f(param_1[0x10])))));
    }
    if ((*(byte *)(param_1 + 0x1f) & 1) == 0) {
      uVar1 = F_00bd2a10(param_1 GEN_EDX_FWD,gen_bits2f((unsigned int)(0)));
    }
    if ((char)param_1[3] != '\0') {
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x70))(param_1 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2));
    }
  }
  return uVar1;
}

/* ref: FUN_00bd32d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd32d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd32d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  int iVar2;
  code * pcVar3;
  uint uVar4;
  float10 extraout_ST0;
  
  uVar4 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x28)) = uVar4;
  if (((*(byte *)((int)this + 0x7c) & 1) == 0) &&
     ((cVar1 = *(char *)((int)this + 0x29), cVar1 == '\0' || (cVar1 == '\x02')))) {
    iVar2 = *(int *)((int)this + 0x24);
    extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*(int *)this + 0xa4))(this);
    (*(int *)(gen_frame + 0xc)) = (int)(longlong)TRUNC(extraout_ST0);
    uVar4 = (*(int *)(gen_frame + 0xc)) + (uint)*(ushort *)(iVar2 + 2);
    if (uVar4 <= param_1) {
      pcVar3 = *(gen_code32 *)(*(int *)this + 0x2c);
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x18)) + 0)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x1c)) = 6;
      uVar4 = (*pcVar3)(this,0x1e,&(*(undefined4 *)(gen_frame + 0x18)));
      if (cVar1 == '\0') {
        uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xa0))(this GEN_EDX_FWD,1);
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return uVar4;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf54 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00bd3380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd3380u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pBVar1;
  byte bVar2;
  uint uVar3;
  undefined * this_00;
  uint uVar4;
  uint uVar5;
  float10 fVar6;
  
  if (*(int *)(this + 0x30) == 0) {
    return 1;
  }
  bVar2 = F_00bd2480(this GEN_EDX_FWD);
  if ((bVar2 != 0) && (uVar3 = F_00b5c7e0(*(undefined4 *)(this + 0x2c)), uVar3 == 1)) {
    return 1;
  }
  if (*(int *)(this + 0x2c) == 6) {
    this_00 = (undefined *)F_00a0b580(this GEN_EDX_ARG);
    uVar3 = F_0054d950(this GEN_EDX_ARG);
    uVar3 = F_00bcfbe0(uVar3 GEN_EDX_ARG);
    uVar4 = F_00be5a60(this GEN_EDX_ARG);
    uVar5 = F_00bd3040(this GEN_EDX_ARG);
    bVar2 = F_00bc4640(this_00 GEN_EDX_ARG,uVar5,uVar4,uVar3);
    if (bVar2 == 0) {
      pBVar1 = this + 0x54;
      if ((!GEN_ISNAN(*(float *)pBVar1) && (!(0.0 < *(float *)pBVar1) && *(float *)pBVar1 != 0.0)) &&
         (uVar3 = F_0054d920(this GEN_EDX_ARG), uVar3 != 0)) {
        fVar6 = F_00531220(uVar3 GEN_EDX_ARG);
        *(float *)(this + 0x54) = (float)fVar6;
      }
      bVar2 = F_00bd3f20(this GEN_EDX_ARG);
      return bVar2 != 0;
    }
    if (*(float *)&REFG(undefined, 0x1088114) <= *(float *)(this + 0x54)) {
      uVar3 = F_0054d920(this GEN_EDX_ARG);
      fVar6 = F_00531220(uVar3 GEN_EDX_ARG);
      *(float *)(this + 0x44) =
           ((float)GEN_TOF(((float10)((float)GEN_TOF((fVar6 - (float10)*(float *)(this + 0x54)))) +
                  (float10)*(float *)(this + 0x44))));
    }
  }
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffdf;
  if (*(int *)(this + 0x30) == 2) {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x84))(this GEN_EDX_ARG,1);
    if (((byte)this[0x7c] >> 5 & 1) != 0) {
      return 0;
    }
    *(int *)(this + 0x60) = *(int *)(this + 0x60) + 1;
    if (this[0xe] == (undefined1)0x0) {
      *(undefined4 *)(this + 10) = 0x1010000;
    }
    if (this[0x29] != (undefined1)0x4) goto switchD_00bd34c1_default;
  }
  else {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x84))(this GEN_EDX_ARG,2);
    if (((byte)this[0x7c] >> 5 & 1) != 0) {
      if (*(int *)(this + 0x30) != 7) {
        return 0;
      }
      if (this[0xd] != (undefined1)0x0) {
        return 0;
      }
      F_00bd1e60(this GEN_EDX_ARG);
      return 0;
    }
    switch((unsigned int)(uintptr_t)(*(undefined4 *)(this + 0x30))) {
    case 4: ;
    case 7: ;
      F_00bd1e60(this GEN_EDX_ARG);
      *(undefined4 *)(this + 0x30) = 0;
      return 1;
    case 5: ;
      *(undefined4 *)(this + 0xc) = 0;
      this[0x10] = (undefined1)0x0;
      *(undefined2 *)(this + 0x12) = 0;
      this[0x14] = (undefined1)0x0;
      break;
    case 6: ;
      break;
    default: ;
      goto switchD_00bd34c1_default;
    }
  }
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xa0))(this GEN_EDX_ARG,1);
switchD_00bd34c1_default: ;
  *(undefined4 *)(this + 0x30) = 0;
  return 1;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf38 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00bd3510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd3510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  if (this[0xe] != (undefined1)0x0) {
    return 1;
  }
  bVar1 = F_00bd2480(this GEN_EDX_FWD);
  if (bVar1 == 0) {
    *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x20;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf57 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00bd3530(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbd3530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  int iVar1;
  float10 fVar2;
  
  if (param_1[0xc] != 0) {
    return;
  }
  if (param_1[0x1a] != 0) {
    return;
  }
  if ((param_2 == 6) && ((*(byte *)(param_1 + 0x1f) & 1) != 0)) {
    return;
  }
  iVar1 = param_1[0x1c];
  if (iVar1 != 0) goto LAB_00bd3586;
  iVar1 = param_1[0x1b];
  if (iVar1 == 0) {
    if (param_1[1] != 0) {
      param_1[0x1b] = *(int *)(param_1[1] + 4);
    }
    iVar1 = param_1[0x1b];
    if (iVar1 != 0) goto LAB_00bd357d;
  }
  else {
LAB_00bd357d: ;
    param_1[0x1c] = *(int *)(iVar1 + 4);
  }
  iVar1 = param_1[0x1c];
LAB_00bd3586: ;
  if (*(char *)(iVar1 + 0x30) == '\0') {
    if (*(char *)(iVar1 + 0x80) == '\0') {
      param_2 = *(uint *)(iVar1 + 0x58);
    }
    else {
      param_2 = *(uint *)(iVar1 + 0x6c);
    }
  }
  else {
    fVar2 = (float10)*(int *)(iVar1 + 0x34);
    if (*(int *)(iVar1 + 0x34) < 0) {
      fVar2 = fVar2 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    param_2 = (uint)gen_fl2bits((float)fVar2);
  }
  if (((float10)GEN_TOD(gen_bits2f(param_1[0xd]))) <= ((float10)GEN_TOD(gen_bits2f(param_2)))) {
    if ((char)param_1[10] == '\0') {
      *(undefined4 *)((int)param_1 + 10) = 0x1000000;
      F_00bd41b0(param_1 GEN_EDX_FWD);
      return;
    }
    if ((param_1[0xb] != 0) && (param_1[0xb] != 7)) {
      F_00bd22f0(param_1 GEN_EDX_ARG);
      return;
    }
    ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x84))(param_1 GEN_EDX_ARG,1);
    param_1[0x18] = param_1[0x18] + 1;
    *(undefined4 *)((int)param_1 + 10) = 0x1010000;
  }
  return;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf58 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00bd3620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd3620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  
  if (*(int *)(this + 0x30) != 0) {
    return 1;
  }
  if (*(int *)(this + 0x68) != 0) {
    return 0;
  }
  if ((param_1 == 6) && (((byte)this[0x7c] & 1) != 0)) {
    return 0;
  }
  iVar1 = *(int *)(this + 0x70);
  if (iVar1 != 0) goto LAB_00bd3669;
  iVar1 = *(int *)(this + 0x6c);
  if (iVar1 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar1 = *(int *)(this + 0x6c);
    if (iVar1 != 0) goto LAB_00bd3660;
  }
  else {
LAB_00bd3660: ;
    *(undefined4 *)(this + 0x70) = *(undefined4 *)(iVar1 + 4);
  }
  iVar1 = *(int *)(this + 0x70);
LAB_00bd3669: ;
  if ((uint)*((ushort *)GEN_TOP((*(int *)(this + 0x24) + 2))) <= *(uint *)(iVar1 + 0x34)) {
    if (this[0x28] != (undefined1)0x0) {
      if ((*(int *)(this + 0x2c) != 0) && (*(int *)(this + 0x2c) != 7)) {
        F_00bd22f0(this GEN_EDX_FWD);
        return 1;
      }
      *(undefined4 *)(this + 0x30) = 2;
      return 1;
    }
    *(undefined4 *)(this + 10) = 0x1000000;
    F_00bd41b0(this GEN_EDX_ARG);
  }
  return 0;
}

/* ref: FUN_00bd36b0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00bd36b0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbd36b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  float fVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  float10 extraout_ST0;
  float10 fVar5;
  float10 extraout_ST0_00;
  
  if (((*(byte *)(param_1 + 0x1f) & 1) == 0) || ((*(byte *)(param_1 + 0x1f) >> 1 & 1) == 0)) {
    iVar4 = *param_1;
    piVar2 = param_1;
  }
  else {
    piVar2 = (int *)param_1[0x1c];
    if (piVar2 == (int *)0x0) {
      iVar4 = param_1[0x1b];
      if (iVar4 == 0) {
        if (param_1[1] != 0) {
          param_1[0x1b] = *(int *)(param_1[1] + 4);
        }
        iVar4 = param_1[0x1b];
        if (iVar4 != 0) goto LAB_00bd36e8;
      }
      else {
LAB_00bd36e8: ;
        param_1[0x1c] = *(int *)(iVar4 + 4);
      }
      piVar2 = (int *)param_1[0x1c];
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x6c))(piVar2 GEN_EDX_FWD)));
    iVar4 = *piVar2;
  }
  extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(iVar4 + 0x5c))(piVar2);
  fVar1 = (float)extraout_ST0;
  if (((param_1[0xb] == 6) &&
      (((uVar3 = F_00bd3040(param_1 GEN_EDX_ARG), (uVar3 & 0x200) != 0 &&
        ((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
         ((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || fVar1 == *(float *)&REFG(undefined, 0x1088114)))) ||
       (uVar3 = F_00bd3040(param_1 GEN_EDX_ARG), (uVar3 & 0x400) != 0)))) ||
     (!((float10)fVar1 <= (float10)*(float *)param_2))) {
    return 0;
  }
  *(float *)param_2 = fVar1;
  iVar4 = param_1[0x1c];
  if (iVar4 != 0) goto LAB_00bd378a;
  iVar4 = param_1[0x1b];
  if (iVar4 == 0) {
    if (param_1[1] != 0) {
      param_1[0x1b] = *(int *)(param_1[1] + 4);
    }
    iVar4 = param_1[0x1b];
    if (iVar4 != 0) goto LAB_00bd3781;
  }
  else {
LAB_00bd3781: ;
    param_1[0x1c] = *(int *)(iVar4 + 4);
  }
  iVar4 = param_1[0x1c];
LAB_00bd378a: ;
  if (*(char *)(iVar4 + 0x30) == '\0') {
    if (*(char *)(iVar4 + 0x80) == '\0') {
      param_2 = *(uint *)(iVar4 + 0x58);
    }
    else {
      param_2 = *(uint *)(iVar4 + 0x6c);
    }
  }
  else {
    fVar5 = (float10)*(int *)(iVar4 + 0x34);
    if (*(int *)(iVar4 + 0x34) < 0) {
      fVar5 = fVar5 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    param_2 = (uint)gen_fl2bits((float)fVar5);
  }
  extraout_ST0_00 = ((gen_fcode *)*(gen_code32 *)(*param_1 + 0xac))(param_1);
  *param_3 = (float)(extraout_ST0_00 - ((float10)GEN_TOD(gen_bits2f(param_2))));
  return 1;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf47 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd37f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd37f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  uint uVar2;
  
  if ((this[0xc] != (undefined1)0x0) || (this[0xd] != (undefined1)0x0)) {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x88))(this GEN_EDX_FWD,2);
    *(undefined4 *)(this + 10) = 0;
  }
  F_00bd30e0(this GEN_EDX_ARG);
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
  uVar2 = *(uint *)(this + 0x24);
  if (uVar2 != 0) {
    *(undefined4 *)(this + 0x58) = 1;
    *(undefined4 *)(this + 0x5c) = 1;
    *(float *)(this + 0x34) =
         ((float)GEN_TOF(((float10)*(ushort *)(uVar2 + 2) + (float10)*(float *)(this + 0x3c))));
    *(float *)(this + 0x38) = (float)*(ushort *)(uVar2 + 4);
    *(undefined4 *)(this + 0x60) = 0;
    *(undefined4 *)(this + 0x50) = uVar1;
    *(undefined4 *)(this + 0x30) = 0;
  }
  *(undefined4 *)(this + 10) = 0;
  *(undefined2 *)(this + 0xe) = 0;
  this[0x10] = (undefined1)0x0;
  *(undefined2 *)(this + 0x12) = 0;
  this[0x14] = (undefined1)0x0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x54) = uVar1;
  if (*(int *)(this + 0x20) != 0) {
    F_00c219f0();
  }
  if (*(int *)(this + 0x24) != 0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x68))(this GEN_EDX_ARG);
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf11 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd38a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbd38a0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  char cVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  undefined3 extraout_var_03 = 0;
  uint uVar5;
  undefined3 extraout_var_04 = 0;
  undefined4 uVar6;
  int * piVar7;
  code * pcVar8;
  int iVar9;
  float10 fVar10;
  float10 extraout_ST0;
  byte local_5;
  
  uVar5 = (*(uint *)&gen_args[2]);
  uVar4 = (*(uint *)&gen_args[1]) - 1;
  switch((unsigned int)(uintptr_t)(uVar4)) {
  case 0: ;
    piVar7 = (int *)F_0054d920((*(int * PTR32 *)&gen_args[0]) GEN_EDX_FWD);
    ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0xa0))(piVar7 GEN_EDX_ARG);
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x34))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    return uVar4;
  case 1: ;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0xbc))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x38))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    return CONCAT31((int3)(uVar4 >> 8),1);
  case 2: ;
    if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 0x11))) == '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x20))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x60))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    uVar4 = F_00b61970((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    return CONCAT31((int3)(uVar4 >> 8),1);
  case 3: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 8))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    if ((char)uVar4 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0xec))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,0xc);
      F_00bd41b0((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
      return CONCAT31(extraout_var,1);
    }
    break;
  case 4: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 8))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    if ((char)uVar4 != '\0') {
      F_00bd41b0((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
      return CONCAT31(extraout_var_00,1);
    }
    break;
  case 5: ;
  case 6: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x48))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    return CONCAT31((int3)(uVar4 >> 8),1);
  case 7: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x4c))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    return uVar4;
  case 8: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 100))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    return CONCAT31((int3)(uVar4 >> 8),1);
  case 9: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0xbc))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    return CONCAT31((int3)(uVar4 >> 8),1);
  case 10: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0xc0))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(uint)*(byte *)(*(uint *)&gen_args[2]));
    return CONCAT31((int3)(uVar4 >> 8),1);
  case 0xb: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x7c))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    return CONCAT31((int3)(uVar4 >> 8),1);
  case 0xc: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x80))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    return CONCAT31((int3)(uVar4 >> 8),1);
  case 0xd: ;
  case 0x11: ;
  case 0x14: ;
  case 0x19: ;
    break;
  case 0xe: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x38))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    return CONCAT31((int3)(uVar4 >> 8),1);
  case 0xf: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 200))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,*(undefined4 *)((*(uint *)&gen_args[2]) + 8));
    return CONCAT31((int3)(uVar4 >> 8),1);
  case 0x10: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0xd0))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[0])[0x10]);
    return CONCAT31((int3)(uVar4 >> 8),1);
  case 0x12: ;
    if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 0xe))) == '\0') {
      bVar3 = F_00bd3f20((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
      uVar4 = CONCAT31(extraout_var_03,bVar3);
      if (bVar3 != 0) {
        iVar2 = (*(int * PTR32 *)&gen_args[0])[0xb];
        iVar9 = 0;
        if (iVar2 == 6) {
          uVar4 = F_00be5a60((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
          if (uVar4 != 0) {
            iVar9 = 1;
          }
LAB_00bd3c26: ;
          if (((*(int * PTR32 *)&gen_args[0])[0xb] == 0x1d) && (uVar4 = (*(int * PTR32 *)&gen_args[0])[9], *(char *)(uVar4 + 0x14) != '\0'))
          break;
        }
        else {
          if (iVar2 == 0x1d) goto LAB_00bd3c26;
          if (iVar2 - 0x1e != 0) {
            return CONCAT31((int3)((uint)(iVar2 - 0x1e) >> 8),1);
          }
        }
        uVar5 = F_00a0b580((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
        if ((*(int * PTR32 *)&gen_args[0])[0xb] == 0x1e) {
          uVar5 = F_00a0b580((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
        }
        bVar3 = F_00bc3d90(uVar5 GEN_EDX_ARG,iVar9,0);
        uVar4 = CONCAT31(extraout_var_04,bVar3);
        if ((bVar3 != 0) && (uVar4 = 0, (*(uint *)(uVar5 + 0x30 + iVar9 * 0x30) >> 4 & 1) == 0)) {
          if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 0xd))) == '\0') {
            piVar7 = (int *)F_0054d920((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
            extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*piVar7 + 0x30))(piVar7);
            (*(uint *)&gen_args[2]) = (uint)gen_fl2bits(((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f((*(int * PTR32 *)&gen_args[0])[0xd]))) +
                                               (float10)(float)extraout_ST0))));
            uVar6 = F_00bc3f20(uVar5 GEN_EDX_ARG,iVar9,GEN_TOF(gen_bits2f((*(uint *)&gen_args[2]))));
            return CONCAT31((int3)((uint)uVar6 >> 8),1);
          }
          if (iVar9 != 1) {
            iVar2 = *(int *)(uVar5 + 0x48 + iVar9 * 0x30);
            fVar10 = (float10)iVar2;
            if (iVar2 < 0) {
              fVar10 = fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110);
            }
            iVar2 = (*(int * PTR32 *)&gen_args[0])[0xb];
            (*(uint *)&gen_args[1]) = (uint)gen_fl2bits((float)fVar10);
            (*(uint *)&gen_args[2]) = 0;
            if ((iVar2 == 0x1d) || (iVar2 == 0x1e)) {
              local_5 = 0;
            }
            else {
              local_5 = F_00bd36b0((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(uint)&(*(uint *)&gen_args[1]),&(*(uint *)&gen_args[2]));
              if (local_5 != 0) {
                uVar6 = F_00bc3e90(uVar5 GEN_EDX_ARG,iVar9,GEN_TOF(gen_bits2f((*(uint *)&gen_args[1]))),GEN_TOF(gen_bits2f((*(uint *)&gen_args[2]))));
                return CONCAT31((int3)((uint)uVar6 >> 8),local_5);
              }
            }
            uVar4 = F_00bc3f00(uVar5 GEN_EDX_ARG,iVar9);
            return CONCAT31((int3)(uVar4 >> 8),local_5);
          }
        }
      }
    }
    break;
  case 0x13: ;
    if (((*(int * PTR32 *)&gen_args[0])[0xb] == 6) && (uVar4 = F_00be5a60((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG), uVar4 == 0)) {
      return 0;
    }
    break;
  case 0x15: ;
    if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 0xd))) == '\0') {
      cVar1 = *(char *)(*(uint *)&gen_args[2]);
      uVar6 = *(undefined4 *)((*(uint *)&gen_args[2]) + 4);
      (*(uint *)&gen_args[2]) = CONCAT31(GEN_PIECE(&(*(uint *)&gen_args[2]), 1, 3),cVar1);
      bVar3 = F_00bd2b80((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,uVar6,(uint)(cVar1 == '\0'),(*(uint *)&gen_args[2]));
      return CONCAT31(extraout_var_01,bVar3 == 0);
    }
    if ((char)(*(int * PTR32 *)&gen_args[0])[3] != '\0') {
      uVar4 = F_00bd32d0((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,*(undefined4 *)((*(uint *)&gen_args[2]) + 4));
      return CONCAT31((int3)(uVar4 >> 8),1);
    }
    break;
  case 0x16: ;
  case 0x17: ;
    if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 0xd))) == '\0') {
      uVar6 = *(undefined4 *)((*(uint *)&gen_args[2]) + 4);
      (*(uint *)&gen_args[2]) = CONCAT31(GEN_PIECE(&(*(uint *)&gen_args[2]), 1, 3),*(undefined1 *)(*(uint *)&gen_args[2]));
      bVar3 = F_00bd2b80((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,uVar6,1,(*(uint *)&gen_args[2]));
      return CONCAT31(extraout_var_02,bVar3 == 0);
    }
    if ((char)(*(int * PTR32 *)&gen_args[0])[3] != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0xcc))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,*(undefined4 *)((*(uint *)&gen_args[2]) + 8));
      uVar4 = F_00bd32d0((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,*(undefined4 *)(uVar5 + 4));
      return CONCAT31((int3)(uVar4 >> 8),1);
    }
    break;
  case 0x18: ;
    pcVar8 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0xcc)));
    goto LAB_00bd3d75;
  case 0x1a: ;
    if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 0xd))) != '\0') {
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0xd4))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(uint)*(byte *)(*(uint *)&gen_args[2]));
      return CONCAT31((int3)(uVar4 >> 8),1);
    }
    break;
  case 0x1b: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0xdc))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    return CONCAT31((int3)(uVar4 >> 8),1);
  case 0x1c: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0xe8))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,*(undefined4 *)((*(uint *)&gen_args[2]) + 4));
    if ((char)uVar4 != '\0') {
      return uVar4 & 0xffffff00;
    }
    break;
  case 0x1d: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0xf0))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,*(undefined4 *)((*(uint *)&gen_args[2]) + 4));
    return CONCAT31((int3)(uVar4 >> 8),1);
  case 0x1e: ;
  case 0x1f: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x8c))))
                      ((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,*(undefined4 *)((*(uint *)&gen_args[2]) + 4),(uint)*(byte *)(*(uint *)&gen_args[2]));
    return CONCAT31((int3)(uVar4 >> 8),1);
  case 0x20: ;
    pcVar8 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x90)));
    goto LAB_00bd3d75;
  case 0x21: ;
    pcVar8 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x94)));
LAB_00bd3d75: ;
    uVar4 = (*pcVar8)((*(int * PTR32 *)&gen_args[0]),*(undefined4 *)((*(uint *)&gen_args[2]) + 8));
    break;
  default: ;
    goto switchD_00bd38ba_default;
  }
switchD_00bd38ba_default: ;
  return CONCAT31((int3)(uVar4 >> 8),1);
}

/* ref: FUN_00bd3ea0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd3ea0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbd3ea0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *(uint *)(in_ecx + 0x30) = param_2;
  return param_2;
}

/* ref: FUN_00bd3ed0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00bd3ed0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xbd3ed0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *(float *)(in_ecx + 0x40) = ((float)GEN_TOF(((float10)param_2 + (float10)*(float *)(in_ecx + 0x40))));
  return;
}

/* ref: FUN_00bd3ef0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00bd3ef0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xbd3ef0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *(float *)(in_ecx + 0x44) = ((float)GEN_TOF(((float10)param_2 + (float10)*(float *)(in_ecx + 0x44))));
  return;
}

/* ref: FUN_00bd3f20 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00bd3f20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd3f20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  iVar1 = *(int *)((int)this + 0x74);
  if (iVar1 != 0) goto LAB_00bd3f6a;
  piVar3 = *(int * PTR32 *)((int)this + 0x70);
  if (piVar3 == (int *)0x0) {
    iVar1 = *(int *)((int)this + 0x6c);
    if (iVar1 == 0) {
      if (*(int *)((int)this + 4) != 0) {
        *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      }
      iVar1 = *(int *)((int)this + 0x6c);
      if (iVar1 != 0) goto LAB_00bd3f50;
    }
    else {
LAB_00bd3f50: ;
      *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(iVar1 + 4);
    }
    piVar3 = *(int * PTR32 *)((int)this + 0x70);
    if (piVar3 != (int *)0x0) goto LAB_00bd3f5d;
  }
  else {
LAB_00bd3f5d: ;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 100))(piVar3 GEN_EDX_FWD);
    *(uint *)((int)this + 0x74) = uVar2;
  }
  iVar1 = *(int *)((int)this + 0x74);
LAB_00bd3f6a: ;
  if (iVar1 != 0) {
    return *(int *)(iVar1 + 0xdc) != 0;
  }
  return 0;
}

/* ref: FUN_00bd3f80 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd3f80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd3f80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  iVar1 = *(int *)((int)this + 0x74);
  if (iVar1 != 0) goto LAB_00bd3fca;
  piVar3 = *(int * PTR32 *)((int)this + 0x70);
  if (piVar3 == (int *)0x0) {
    iVar1 = *(int *)((int)this + 0x6c);
    if (iVar1 == 0) {
      if (*(int *)((int)this + 4) != 0) {
        *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      }
      iVar1 = *(int *)((int)this + 0x6c);
      if (iVar1 != 0) goto LAB_00bd3fb0;
    }
    else {
LAB_00bd3fb0: ;
      *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(iVar1 + 4);
    }
    piVar3 = *(int * PTR32 *)((int)this + 0x70);
    if (piVar3 != (int *)0x0) goto LAB_00bd3fbd;
  }
  else {
LAB_00bd3fbd: ;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 100))(piVar3 GEN_EDX_FWD);
    *(uint *)((int)this + 0x74) = uVar2;
  }
  iVar1 = *(int *)((int)this + 0x74);
LAB_00bd3fca: ;
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0xdc) != 0)) {
    return *((uint *)GEN_TOP((*(int *)(iVar1 + 0xdc) + 4)));
  }
  return 0;
}

/* ref: FUN_00bd3ff0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd3ff0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd3ff0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(in_ecx + 0x78);
  if (iVar2 != 0) goto LAB_00bd402e;
  iVar2 = *(int *)(in_ecx + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)(in_ecx + 4) != 0) {
      *(undefined4 *)(in_ecx + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(in_ecx + 4) + 4)));
    }
    iVar2 = *(int *)(in_ecx + 0x6c);
    if (iVar2 != 0) goto LAB_00bd4019;
  }
  else {
LAB_00bd4019: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(in_ecx + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  iVar2 = *(int *)(in_ecx + 0x78);
LAB_00bd402e: ;
  if ((iVar2 != 0) && (*(char *)(iVar2 + 0x12) == '\0')) {
    return *(uint *)(iVar2 + 4);
  }
  return 0;
}

/* ref: FUN_00bd4050 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd4050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd4050u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  int iVar2;
  undefined * this_00;
  uint uVar3;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x78);
  if (this_00 != (undefined *)0x0) goto LAB_00bd408a;
  iVar2 = *(int *)((int)this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar2 = *(int *)((int)this + 0x6c);
    if (iVar2 != 0) goto LAB_00bd4075;
  }
  else {
LAB_00bd4075: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)((int)this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)((int)this + 0x78);
LAB_00bd408a: ;
  if (this_00 != (undefined *)0x0) {
    uVar3 = F_00bbaf50(this_00 GEN_EDX_ARG);
    return uVar3;
  }
  return 0;
}

/* ref: FUN_00bd40a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd40a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd40a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  int iVar2;
  undefined * this_00;
  uint uVar3;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x78);
  if (this_00 != (undefined *)0x0) goto LAB_00bd40da;
  iVar2 = *(int *)((int)this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar2 = *(int *)((int)this + 0x6c);
    if (iVar2 != 0) goto LAB_00bd40c5;
  }
  else {
LAB_00bd40c5: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)((int)this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)((int)this + 0x78);
LAB_00bd40da: ;
  if (this_00 != (undefined *)0x0) {
    uVar3 = F_00bbaf90(this_00 GEN_EDX_ARG);
    return uVar3;
  }
  return 0;
}

/* ref: FUN_00bd4130 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd4130(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbd4130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *(uint *)(in_ecx + 0x48 + param_2 * 0x30);
}

/* ref: FUN_00bd4150 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd4150(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbd4150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((in_ecx + (param_2 * 3 + 3) * 0x10))) >> 4 & 1;
}

/* ref: FUN_00bd41b0 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00bd41b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd41b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined4 *)((int)this + 0xd) = 0x1010101;
  *(undefined2 *)((int)this + 0x12) = 0;
  *(undefined1 *)((int)this + 0x14) = 0;
  if (*(int *)((int)this + 4) != 0) {
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x12))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x13))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) = 1;
  }
  return 1;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd4280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd4280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined4 * puVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x1106874));
  if (*(int *)(this + 0x78) != 0) {
    F_00b59c20(REFG(void * PTR32, 0x14c4e78) GEN_EDX_FWD,*(int *)(this + 0x78));
  }
  if (*(undefined * PTR32 *)(this + 0x20) != (undefined *)0x0) {
    F_00c21b10(*(undefined * PTR32 *)(this + 0x20) GEN_EDX_ARG);
    puVar1 = *(undefined4 * PTR32 *)(this + 0x20);
    if ((*(char *)((int)puVar1 + 0x16) == '\0') && (puVar1 != (undefined4 *)0x0)) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
    }
    *(undefined4 *)(this + 0x20) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10f34d4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bd42f0 */
GEN_LIB GEN_FRAME float10 F_00bd42f0(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbd42f0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00bd4310 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd4310(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xbd4310u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  int iVar5;
  undefined * this;
  undefined4 uVar6;
  
  this = *(undefined * PTR32 *)(param_1 + 0x6c);
  iVar1 = *(int *)(param_1 + 0x24);
  if (this == (undefined *)0x0) {
    uVar4 = 0;
    if (*(int *)(param_1 + 4) != 0) {
      uVar4 = *((uint *)GEN_TOP((*(int *)(param_1 + 4) + 4)));
      *(uint *)(param_1 + 0x6c) = uVar4;
    }
    this = *(undefined * PTR32 *)(param_1 + 0x6c);
    if (this == (undefined *)0x0) {
      return uVar4;
    }
  }
  F_00beb760(this GEN_EDX_FWD);
  uVar4 = F_00beb670(this GEN_EDX_ARG);
  if (uVar4 != 0) {
    iVar2 = *(int *)(iVar1 + 0x10);
    iVar5 = 0;
    uVar6 = 0;
    if (iVar2 == 0) {
      iVar5 = 0;
    }
    else if (iVar2 == 1) {
      iVar5 = 1;
    }
    else if (iVar2 == 2) {
      iVar5 = 2;
    }
    switch((unsigned int)(uintptr_t)(*(undefined4 *)(iVar1 + 0xc))) {
    case 0: ;
      uVar6 = 1;
      break;
    case 1: ;
      uVar6 = 0;
      break;
    case 2: ;
      uVar6 = 2;
      break;
    case 3: ;
      uVar6 = 3;
    }
    iVar1 = iVar5 * 0x7a0 + 0x1e10 + uVar4;
    if ((char)param_2 != '\0') {
      bVar3 = F_006a5bf0(iVar1 GEN_EDX_ARG,uVar6,(float)(float10)0);
      return CONCAT31(extraout_var,bVar3);
    }
    F_006a5c40(iVar1 GEN_EDX_ARG,param_3);
  }
  return uVar4;
}

/* ref: Client::System::Scheduler::Clip::ActivePassiveScaleClip::vf33 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd43e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd43e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00bd4310(this GEN_EDX_FWD,1,(float)(float10)0);
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::ActivePassiveScaleClip::vf34 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00bd43f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd43f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00bd4310(this GEN_EDX_FWD,0,(float)(float10)1);
  return 1;
}

/* ref: FUN_00bd4410 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd4410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd4410u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float fVar2;
  float local_8;
  
  local_8 = 0.0;
  fVar2 = F_00bd2390(this GEN_EDX_FWD);
  if (0.0 <= (double)fVar2) {
    extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*(int *)this + 0xa4))(this);
    if ((float10)fVar2 < extraout_ST0) {
      extraout_ST0_00 = ((gen_fcode *)*(gen_code32 *)(*(int *)this + 0xa4))(this);
      local_8 = (float)((float10)fVar2 / extraout_ST0_00);
    }
    else {
      local_8 = REFG(float, 0x1087f04);
    }
  }
  uVar1 = F_00bd4310(this GEN_EDX_ARG,param_1,local_8);
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::ActivePassiveScaleClip::vf28 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd44a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd44a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00bd4410(this GEN_EDX_FWD,0);
  return uVar1;
}

/* ref: Client::System::Scheduler::Lua::LuaInvoker::UserDataInterface::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd44d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd44d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1106a98));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bd4500 */
GEN_LIB GEN_FRAME float10 F_00bd4500(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbd4500u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00bd4530 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd4530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd4530u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  undefined * this_00;
  uint in_ecx;
  undefined3 extraout_var = 0;
  
  iVar1 = *(int *)((int)this + 4);
  this_00 = *(undefined * PTR32 *)(iVar1 + 0x78);
  if (this_00 != (undefined *)0x0) goto LAB_00bd456b;
  iVar4 = *(int *)(iVar1 + 0x6c);
  if (iVar4 == 0) {
    if (*(int *)(iVar1 + 4) != 0) {
      *(undefined4 *)(iVar1 + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 4) + 4)));
    }
    iVar4 = *(int *)(iVar1 + 0x6c);
    if (iVar4 != 0) goto LAB_00bd4556;
  }
  else {
LAB_00bd4556: ;
    uVar2 = *(undefined4 *)(iVar4 + 0x20);
    *(undefined4 *)(iVar1 + 0x78) = uVar2;
    F_00b595f0(uVar2);
  }
  this_00 = *(undefined * PTR32 *)(iVar1 + 0x78);
LAB_00bd456b: ;
  if (this_00 != (undefined *)0x0) {
    in_ecx = F_00bbaf90(this_00 GEN_EDX_ARG);
    if (in_ecx != 0) {
      bVar3 = F_00a9f620(in_ecx GEN_EDX_ARG);
      return CONCAT31(extraout_var,bVar3);
    }
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::VariableClip::vf33 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00bd4590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd4590u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 0x24);
  iVar2 = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[2])REFP(0x1106aa4));
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
  if (0 < *(int *)(iVar1 + 0x10)) {
    do {
      F_00b5f7d0(REFG(void * PTR32, 0x14c4ea0) GEN_EDX_FWD,*(int *)(iVar1 + 0x14) + iVar2 * 8 + iVar1,&(*(undefined4 *)(gen_frame + 0x8)),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
      F_00b5f440(REFG(void * PTR32, 0x14c4ea0) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0xc) + iVar2 * 4 + iVar1))),(*(undefined4 *)(gen_frame + 0x8)));
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(iVar1 + 0x10));
  }
  return;
}

/* ref: FUN_00bd4610 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd4610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd4610u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1106a98));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bd4640 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd4640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd4640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*(int *)((int)this + 0xc) + param_1 * 4 + (int)this)));
}

/* ref: FUN_00bd4660 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd4660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd4660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(int *)((int)this + 0x14) + param_1 * 8 + (int)this;
}

/* ref: Client::System::Scheduler::Clip::SetPosClip::vf33 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd4690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd4690u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  __declspec(align(16)) undefined1 gen_frame[0x60];
  float fVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  undefined * this_00;
  int * piVar6;
  float10 extraout_ST0;
  float10 fVar7;
  
  iVar5 = *(int *)(this + 0x78);
  if (iVar5 == 0) {
    iVar5 = *(int *)(this + 0x6c);
    if (iVar5 == 0) {
      if (*(int *)(this + 4) != 0) {
        *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
      }
      iVar5 = *(int *)(this + 0x6c);
      if (iVar5 != 0) goto LAB_00bd46cf;
    }
    else {
LAB_00bd46cf: ;
      uVar2 = *(undefined4 *)(iVar5 + 0x20);
      *(undefined4 *)(this + 0x78) = uVar2;
      F_00b595f0(uVar2);
    }
    iVar5 = *(int *)(this + 0x78);
    if (iVar5 != 0) goto LAB_00bd46e8;
    piVar6 = (int *)0x0;
  }
  else {
LAB_00bd46e8: ;
    if (*(char *)(iVar5 + 0x12) == '\0') {
      piVar6 = *(int * PTR32 *)(iVar5 + 4);
    }
    else {
      piVar6 = (int *)0x0;
    }
  }
  uVar3 = *(uint *)(this + 0x2c);
  if (uVar3 != 0x10) {
    if (uVar3 != 0x1b) {
      return uVar3;
    }
    iVar5 = *(int *)(this + 0x24);
    fVar1 = *(float *)(iVar5 + 0xc);
    (*(float *)(gen_frame + 0x30)) = fVar1;
    (*(float *)(gen_frame + 0x34)) = fVar1;
    (*(float *)(gen_frame + 0x38)) = fVar1;
    if (((*(byte *)(iVar5 + 6) & 1) != 0) &&
       (uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x3c))(piVar6 GEN_EDX_ARG), uVar3 != 0)) {
      (*(float *)(gen_frame + 0x4c)) = *(float *)(uVar3 + 0x294);
      extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*piVar6 + 0x80))(piVar6);
      fVar1 = ((float)GEN_TOF(((float10)1 / (extraout_ST0 * (float10)(*(float *)(gen_frame + 0x4c))))));
      (*(float *)(gen_frame + 0x4c)) = fVar1;
      fVar7 = (float10)fVar1;
      (*(float *)(gen_frame + 0x30)) = (float)(fVar7 * (float10)(*(float *)(gen_frame + 0x30)));
      (*(float *)(gen_frame + 0x34)) = (float)(fVar7 * (float10)(*(float *)(gen_frame + 0x34)));
      (*(float *)(gen_frame + 0x38)) = (float)(fVar7 * (float10)(*(float *)(gen_frame + 0x38)));
    }
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x18))(piVar6 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x30)));
    return uVar3;
  }
  F_00a1e7d0(((undefined1 *)(gen_frame + 0x0)),*(int *)(this + 0x24) + 0xc);
  puVar4 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x1c))(piVar6 GEN_EDX_ARG)));
  (*(undefined4 *)(gen_frame + 0x20)) = *puVar4;
  (*(undefined4 *)(gen_frame + 0x24)) = puVar4[1];
  (*(undefined4 *)(gen_frame + 0x28)) = puVar4[2];
  ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x20))(piVar6 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 != (undefined *)0x0) goto LAB_00bd4810;
  iVar5 = *(int *)(this + 0x6c);
  if (iVar5 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar5 = *(int *)(this + 0x6c);
    if (iVar5 != 0) goto LAB_00bd47f7;
  }
  else {
LAB_00bd47f7: ;
    uVar2 = *(undefined4 *)(iVar5 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar2;
    F_00b595f0(uVar2);
  }
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
LAB_00bd4810: ;
  uVar3 = F_00bc4070(this_00 GEN_EDX_ARG,0xffffffff);
  return uVar3;
}

/* ref: FUN_00bd4840 */
GEN_LIB GEN_FRAME float10 F_00bd4840(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbd4840u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: Client::System::Scheduler::Clip::ShowHideClip::vf18 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00bd4860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd4860u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(int *)(this + 0x2c) == 0x4b) {
    *(undefined4 *)(this + 0x88) = *(undefined4 *)(REFG(int, 0x1371280) + 0x2c);
    *(undefined4 *)(this + 0x8c) = *(undefined4 *)(REFG(int, 0x1371280) + 0x30);
  }
  return;
}

/* ref: Client::System::Scheduler::Clip::ShowHideClip::vf24 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00bd4890(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd4890u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (*(int *)(in_ecx + 0x2c) == 0x4b) {
    *(undefined4 *)(REFG(int, 0x1371280) + 0x2c) = *(undefined4 *)(in_ecx + 0x88);
    *(undefined4 *)(REFG(int, 0x1371280) + 0x30) = *(undefined4 *)(in_ecx + 0x8c);
  }
  return;
}

/* ref: FUN_00bd48c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd48c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd48c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 uVar1;
  uint in_EAX = 0;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined * this_00;
  
  if (*(int *)((int)this + 0x2c) != 0x68) {
    return in_EAX;
  }
  this_00 = *(undefined * PTR32 *)((int)this + 0x78);
  if (this_00 != (undefined *)0x0) goto LAB_00bd4907;
  iVar2 = *(int *)((int)this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar2 = *(int *)((int)this + 0x6c);
    uVar3 = 0;
    if (iVar2 != 0) goto LAB_00bd48ee;
  }
  else {
LAB_00bd48ee: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)((int)this + 0x78) = uVar1;
    uVar3 = F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)((int)this + 0x78);
  if (this_00 == (undefined *)0x0) {
    return uVar3;
  }
LAB_00bd4907: ;
  uVar4 = F_00bbaf90(this_00 GEN_EDX_ARG);
  uVar3 = 0;
  if ((uVar4 != 0) && (uVar3 = *(uint *)(uVar4 + 0xec), uVar3 != 0)) {
    *(byte *)(uVar3 + 100) = ((char)param_1 != '\0') * '\x02' | *(byte *)(uVar3 + 100) & 0xfd;
  }
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::ShowHideClip::vf25 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd4940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd4940u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  iVar1 = *(int *)(this + 0x2c);
  uVar2 = iVar1 - 0x11;
  if (uVar2 < 0x58) {
    uVar2 = (uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0xbd49bc) + iVar1 + 3)));
    switch((unsigned int)(uintptr_t)(iVar1)) {
    case 0x11: ;
      piVar3 = (int *)F_00bd3ff0(this GEN_EDX_FWD);
      uVar2 = 0;
      if (piVar3 != (int *)0x0) {
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3 GEN_EDX_ARG,1);
        return uVar2;
      }
      break;
    case 0x3a: ;
    case 0x3b: ;
      uVar2 = F_00bd3f80(this GEN_EDX_ARG);
      *(ushort *)(uVar2 + 0x70) = *(ushort *)(uVar2 + 0x70) & 0xfffe;
      uVar2 = F_00bd3f80(this GEN_EDX_ARG);
      *(undefined1 *)(uVar2 + 0xe4) = 0;
      return uVar2;
    case 0x4b: ;
      *(undefined4 *)(REFG(int, 0x1371280) + 0x2c) = *(undefined4 *)(this + 0x88);
      *(undefined4 *)(REFG(int, 0x1371280) + 0x30) = *(undefined4 *)(this + 0x8c);
      return uVar2;
    case 0x68: ;
      uVar2 = F_00bd48c0(this GEN_EDX_ARG,1);
    }
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::ShowHideClip::vf33 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd4a30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd4a30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  __declspec(align(16)) undefined1 gen_frame[0x100];
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  undefined1 SVar4;
  int iVar5;
  uint uVar6;
  uint in_ecx;
  undefined3 extraout_var = 0;
  undefined * this_00;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  int * piVar7;
  
  (*(uint *)(gen_frame + 0xf8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xfc);
  iVar5 = *(int *)(this + 0x78);
  if (iVar5 == 0) {
    iVar5 = *(int *)(this + 0x6c);
    if (iVar5 == 0) {
      if (*(int *)(this + 4) != 0) {
        *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
      }
      iVar5 = *(int *)(this + 0x6c);
      if (iVar5 != 0) goto LAB_00bd4a69;
    }
    else {
LAB_00bd4a69: ;
      uVar1 = *(undefined4 *)(iVar5 + 0x20);
      *(undefined4 *)(this + 0x78) = uVar1;
      F_00b595f0(uVar1);
    }
    iVar5 = *(int *)(this + 0x78);
    if (iVar5 == 0) {
      piVar7 = (int *)0x0;
      goto LAB_00bd4a97;
    }
  }
  if (*(char *)(iVar5 + 0x12) == '\0') {
    piVar7 = *(int * PTR32 *)(iVar5 + 4);
  }
  else {
    piVar7 = (int *)0x0;
  }
LAB_00bd4a97: ;
  uVar6 = *(int *)(this + 0x2c) - 0x11;
  switch((unsigned int)(uintptr_t)(*(int *)(this + 0x2c))) {
  case 0x11: ;
    iVar5 = *(int *)(this + 0x24);
    uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0x54))(piVar7 GEN_EDX_ARG,(uint)(*(char *)(iVar5 + 0xc) != '\0'));
    iVar2 = piVar7[0x14];
    if ((iVar2 != 0) && (*(char *)(iVar5 + 0xd) != '\0')) {
      piVar7 = *(int * PTR32 *)(iVar2 + 4);
      if (piVar7 != (int *)0x0) {
        uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0x54))(piVar7 GEN_EDX_ARG,(uint)(*(char *)(iVar5 + 0xc) != '\0'));
      }
      piVar7 = *(int * PTR32 *)(iVar2 + 8);
      if (piVar7 != (int *)0x0) {
        uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0x54))(piVar7 GEN_EDX_ARG,(uint)(*(char *)(iVar5 + 0xc) != '\0'));
        F_00c47745((*(uint *)(gen_frame + 0xf8)) ^ (uint)(uint)(gen_frame + 0xfc) GEN_EDX_ARG);
        return uVar6;
      }
    }
    break;
  case 0x1c: ;
    (*(undefined4 *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x0)), 1, 3),*((char *)GEN_TOP((*(int *)(this + 0x24) + 0xc))) == '\0');
    if (*((char *)GEN_TOP((*(int *)(this + 0x24) + 0xd))) == '\0') {
      this_00 = (undefined *)F_00bd3f80(this GEN_EDX_ARG);
      uVar6 = 0;
      if (this_00 != (undefined *)0x0) {
        ((undefined4 *)(gen_frame + 0x8))[0] = 0;
        (*(undefined4 *)(gen_frame + 0x4)) = 0;
        bVar3 = F_00b60730(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x4)),((undefined4 *)(gen_frame + 0x8)));
        uVar6 = CONCAT31(extraout_var_00,bVar3);
        if (bVar3 != 0) {
          do {
            piVar7 = (int *)F_00beb650((*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
            if ((piVar7 != (int *)0x0) &&
               (uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0x4c))(piVar7 GEN_EDX_ARG), uVar6 != 0)) {
              F_00a9fa40(uVar6 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x0)));
            }
            bVar3 = F_00b60730(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x4)),((undefined4 *)(gen_frame + 0x8)));
          } while (bVar3 != 0);
          F_00c47745((*(uint *)(gen_frame + 0xf8)) ^ (uint)(uint)(gen_frame + 0xfc) GEN_EDX_ARG);
          return CONCAT31(extraout_var_01,bVar3);
        }
      }
    }
    else {
      in_ecx = F_00bd40a0(this GEN_EDX_ARG);
      uVar6 = 0;
      if (in_ecx != 0) {
        bVar3 = F_00a9fa40(in_ecx GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x0)));
        F_00c47745((*(uint *)(gen_frame + 0xf8)) ^ (uint)(uint)(gen_frame + 0xfc) GEN_EDX_ARG);
        return CONCAT31(extraout_var,bVar3);
      }
    }
    break;
  case 0x3a: ;
    uVar6 = F_00bd3f80(this GEN_EDX_ARG);
    *(ushort *)(uVar6 + 0x70) = *(ushort *)(uVar6 + 0x70) | 1;
    iVar5 = *(int *)(this + 0x24);
    uVar6 = F_00bd3f80(this GEN_EDX_ARG);
    *(undefined2 *)(uVar6 + 0x54) = *(undefined2 *)(iVar5 + 0xc);
    uVar6 = F_00bd3f80(this GEN_EDX_ARG);
    *(undefined1 *)(uVar6 + 0xe4) = 1;
    F_00c47745((*(uint *)(gen_frame + 0xf8)) ^ (uint)(uint)(gen_frame + 0xfc) GEN_EDX_ARG);
    return uVar6;
  case 0x3b: ;
    uVar6 = F_00bd3f80(this GEN_EDX_ARG);
    *(ushort *)(uVar6 + 0x70) = *(ushort *)(uVar6 + 0x70) & 0xfffe;
    uVar6 = F_00bd3f80(this GEN_EDX_ARG);
    *(undefined1 *)(uVar6 + 0xe4) = 0;
    F_00c47745((*(uint *)(gen_frame + 0xf8)) ^ (uint)(uint)(gen_frame + 0xfc) GEN_EDX_ARG);
    return uVar6;
  case 0x4b: ;
    iVar5 = *(int *)(this + 0x24);
    if (*(char *)(iVar5 + 0xc) != '\0') {
      uVar6 = REFG(undefined4, 0x1371280);
      *(undefined4 *)(REFG(undefined4, 0x1371280) + 0x2c) = *(undefined4 *)(this + 0x88);
      *(undefined4 *)(REFG(undefined4, 0x1371280) + 0x30) = *(undefined4 *)(this + 0x8c);
      F_00c47745((*(uint *)(gen_frame + 0xf8)) ^ (uint)(uint)(gen_frame + 0xfc) GEN_EDX_ARG);
      return uVar6;
    }
    *(undefined4 *)(REFG(undefined4, 0x1371280) + 0x2c) = *(undefined4 *)(iVar5 + 0x10);
    uVar6 = REFG(undefined4, 0x1371280);
    *(undefined4 *)(REFG(undefined4, 0x1371280) + 0x30) = *(undefined4 *)(iVar5 + 0x14);
    F_00c47745((*(uint *)(gen_frame + 0xf8)) ^ (uint)(uint)(gen_frame + 0xfc) GEN_EDX_ARG);
    return uVar6;
  case 0x5a: ;
    uVar6 = F_00a0b580(this GEN_EDX_ARG);
    F_00c47745((*(uint *)(gen_frame + 0xf8)) ^ (uint)(uint)(gen_frame + 0xfc) GEN_EDX_ARG);
    return uVar6;
  case 0x68: ;
    iVar5 = *(int *)(this + 0x24);
    uVar6 = F_00bd40a0(this GEN_EDX_ARG);
    if ((uVar6 == 0) || (*(int *)(uVar6 + 0xec) == 0)) {
      SVar4 = (undefined1)0x1;
    }
    else {
      SVar4 = (undefined1)(*((byte *)GEN_TOP((*(int *)(uVar6 + 0xec) + 100))) >> 1 & 1);
    }
    this[0x90] = SVar4;
    uVar6 = F_00bd48c0(this GEN_EDX_ARG,(uint)(*(char *)(iVar5 + 0xc) == '\0'));
  }
  F_00c47745((*(uint *)(gen_frame + 0xf8)) ^ (uint)(uint)(gen_frame + 0xfc) GEN_EDX_ARG);
  return uVar6;
}

/* ref: Client::System::Scheduler::Clip::ShowHideClip::vf34 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00bd4dc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd4dc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if ((((param_1 != 2) && (*(int *)(this + 0x2c) == 0x68)) && (this[0xd] != (undefined1)0x0)) &&
     (*((char *)GEN_TOP((*(int *)(this + 0x24) + 0xd))) == '\0')) {
    F_00bd48c0(this GEN_EDX_FWD,(uint)(byte)this[0x90]);
  }
  return 1;
}

/* ref: FUN_00bd4e00 */
GEN_LIB GEN_FRAME ushort GEN_THISCALL F_00bd4e00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbd4e00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *(ushort *)(in_ecx + 0x18) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00bd4e10 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00bd4e10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd4e10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  
  bVar1 = ((char)param_1 != '\0') * '\x02' | *(byte *)((int)this + 100) & 0xfd;
  *(byte *)((int)this + 100) = bVar1;
  return bVar1;
}

/* ref: FUN_00bd4e30 */
GEN_LIB GEN_FRAME float10 F_00bd4e30(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbd4e30u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: Client::System::Scheduler::Clip::BgSetupClip::vf25 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00bd4e50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd4e50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *(undefined1 *)(in_ecx + 0x88) = 0;
  return;
}

/* ref: Client::System::Scheduler::Clip::BgSetupClip::vf26 */
GEN_LIB GEN_NOFRAME unsigned int F_00bd4e60(void)
{
  GEN_ENTER(0xbd4e60u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Scheduler::Clip::BgSetupClip::vf34 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00bd4e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd4e70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BgSetupClip::vf33 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd4e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd4e80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  byte bVar2;
  int * piVar3;
  undefined * pvVar4;
  undefined3 extraout_var = 0;
  uint uVar5;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (((byte)this[0x7c] >> 4 & 1) == 0) {
    piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
    if (piVar3 != (int *)0x0) {
      uVar7 = 0;
      uVar6 = 4;
      pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3 GEN_EDX_ARG)));
      F_007602f0(pvVar4 GEN_EDX_ARG,uVar6,uVar7);
    }
  }
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
  if (this[0x88] != (undefined1)0x0) {
    bVar2 = F_00b5c680(REFG(void * PTR32, 0x14c4e90) GEN_EDX_ARG);
    if (bVar2 == 0) {
      uVar5 = F_00bd30b0(this GEN_EDX_ARG,0);
      return uVar5;
    }
    this[0x88] = (undefined1)0x0;
    return CONCAT31(extraout_var,bVar2);
  }
  piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  if (piVar3 != (int *)0x0) {
    uVar7 = 1;
    uVar6 = 4;
    pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3 GEN_EDX_ARG)));
    F_007602f0(pvVar4 GEN_EDX_ARG,uVar6,uVar7);
  }
  iVar1 = *(int *)(this + 0x24);
  uVar5 = F_00bd3f80(this GEN_EDX_ARG);
  if (uVar5 != 0) {
    bVar2 = F_00bd2480(this GEN_EDX_ARG);
    if (bVar2 != 0) {
      *(int *)(uVar5 + 0x34) = iVar1 + 0xc;
      return CONCAT31(extraout_var_00,bVar2);
    }
    *(int *)(uVar5 + 0x30) = iVar1 + 0xc;
  }
  F_00b5c8c0(REFG(void * PTR32, 0x14c4e90) GEN_EDX_ARG,iVar1 + 0xc,0);
  bVar2 = F_00b5c680(REFG(void * PTR32, 0x14c4e90) GEN_EDX_ARG);
  uVar5 = CONCAT31(extraout_var_01,bVar2);
  if (bVar2 == 0) {
    uVar5 = F_00bd30b0(this GEN_EDX_ARG,0);
    this[0x88] = (undefined1)0x1;
  }
  return uVar5;
}

/* ref: FUN_00bd4f70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd4f70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbd4f70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *(uint *)(in_ecx + 0x34) = param_2;
  return param_2;
}

/* ref: FUN_00bd4f80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd4f80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbd4f80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *(uint *)(in_ecx + 0x30) = param_2;
  return param_2;
}

/* ref: Client::System::Scheduler::Clip::LocalVFXTriggerClip::vf33 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd4fc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd4fc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  int iVar4;
  int * piVar5;
  
  uVar3 = *(uint *)(this + 0x2c);
  if (uVar3 != 0x21) {
    if (uVar3 != 0x58) {
      return uVar3;
    }
    pvVar2 = *(undefined * PTR32 *)(this + 0x6c);
    uVar3 = 0x58;
    if (pvVar2 == (undefined *)0x0) {
      uVar3 = 0;
      if (*(int *)(this + 4) != 0) {
        uVar3 = *((uint *)GEN_TOP((*(int *)(this + 4) + 4)));
        *(uint *)(this + 0x6c) = uVar3;
      }
      pvVar2 = *(undefined * PTR32 *)(this + 0x6c);
    }
    iVar1 = *(int *)(this + 0x24);
    if (pvVar2 == (undefined *)0x0) {
      return uVar3;
    }
    pvVar2 = (undefined *)F_00beb6b0(pvVar2 GEN_EDX_FWD);
    if (pvVar2 == (undefined *)0x0) {
      return 0;
    }
    uVar3 = F_006891c0(pvVar2 GEN_EDX_ARG,*(undefined4 *)(iVar1 + 0xc));
    return uVar3;
  }
  pvVar2 = *(undefined * PTR32 *)(this + 0x74);
  iVar1 = *(int *)(this + 0x24);
  if (pvVar2 != (undefined *)0x0) goto LAB_00bd5055;
  piVar5 = *(int * PTR32 *)(this + 0x70);
  if (piVar5 == (int *)0x0) {
    iVar4 = *(int *)(this + 0x6c);
    if (iVar4 == 0) {
      if (*(int *)(this + 4) != 0) {
        *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
      }
      iVar4 = *(int *)(this + 0x6c);
      if (iVar4 != 0) goto LAB_00bd5037;
    }
    else {
LAB_00bd5037: ;
      *(undefined4 *)(this + 0x70) = *(undefined4 *)(iVar4 + 4);
    }
    piVar5 = *(int * PTR32 *)(this + 0x70);
    if (piVar5 != (int *)0x0) goto LAB_00bd5044;
  }
  else {
LAB_00bd5044: ;
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 100))(piVar5 GEN_EDX_ARG);
    *(uint *)(this + 0x74) = uVar3;
  }
  pvVar2 = *(undefined * PTR32 *)(this + 0x74);
  if (pvVar2 == (undefined *)0x0) {
    return 0;
  }
LAB_00bd5055: ;
  F_00bc2aa0(pvVar2 GEN_EDX_ARG,*(undefined4 *)(iVar1 + 0x10));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xa0))(this GEN_EDX_ARG,1);
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::GlobalVFXTriggerClip::vf33 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd5090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd5090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  uint uVar2;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)(this + 0x6c);
  iVar1 = *(int *)(this + 0x24);
  if (this_00 == (undefined *)0x0) {
    uVar2 = 0;
    if (*(int *)(this + 4) != 0) {
      uVar2 = *((uint *)GEN_TOP((*(int *)(this + 4) + 4)));
      *(uint *)(this + 0x6c) = uVar2;
    }
    this_00 = *(undefined * PTR32 *)(this + 0x6c);
    if (this_00 == (undefined *)0x0) {
      return uVar2;
    }
  }
  uVar2 = F_00beb760(this_00 GEN_EDX_FWD);
  F_00b5af00(REFG(void * PTR32, 0x14c4e84) GEN_EDX_ARG,uVar2,*(undefined4 *)(iVar1 + 0x10),*(int *)(iVar1 + 0xc) + iVar1);
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xa0))(this GEN_EDX_ARG,1);
  return uVar2;
}

/* ref: FUN_00bd50e0 */
GEN_LIB GEN_FRAME float10 GEN_THISCALL F_00bd50e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbd50e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return (float10)*(float *)(in_ecx - 0xc0 + param_2 * 4);
}

/* ref: Client::System::Scheduler::Clip::PostEffectClip::vf29 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00bd5160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd5160u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float * pfVar5;
  float * pfVar6;
  undefined * this_00;
  float * pfVar7;
  float * pfVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float fVar12;
  
  iVar4 = REFG(int, 0x1371290);
  if (*(int *)(this + 0x2c) != 0x16) {
    if (*(int *)(this + 0x2c) != 0x32) {
      return 0;
    }
    if (*(char *)(REFG(int, 0x1371290) + 0x310) != '\x01') {
      return 0;
    }
    if ((undefined4 *)(REFG(int, 0x1371290) + 0x28c) == (undefined4 *)0x0) {
      return 0;
    }
    *(undefined4 *)(REFG(int, 0x1371290) + 0x28c) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(iVar4 + 0x290) = *(undefined4 *)(param_1 + 0x24);
    return 0;
  }
  iVar3 = *(int *)(this + 0x24);
  if (*(char *)(iVar3 + 0x11) == '\x02') {
    return 0;
  }
  if (*(char *)(REFG(int, 0x1371290) + 0x30f) != -0x80) {
    return 0;
  }
  pfVar8 = (float *)(REFG(int, 0x1371290) + 0x274);
  if (pfVar8 == (float *)0x0) {
    return 0;
  }
  ((float *)(gen_frame + 0x1c))[2] = *(float *)(param_1 + 0x20);
  ((float *)(gen_frame + 0x1c))[3] = gen_bits2f(REFG(float, 0x1106bc4));
  ((float *)(gen_frame + 0x1c))[4] = GEN_FLT_TO(((float *)(gen_frame + 0x1c))[4], REFG(float, 0x1106bc0));
  pfVar7 = ((float *)(gen_frame + 0x1c)) + 2;
  if (!((double)*(float *)(param_1 + 0x20) < *(double *)&REFG(undefined, 0x109cad0))) {
    pfVar7 = ((float *)(gen_frame + 0x1c)) + 3;
  }
  if (!(*(double *)&REFG(undefined, 0x1106bb8) < (double)*pfVar7)) {
    pfVar7 = ((float *)(gen_frame + 0x1c)) + 4;
  }
  fVar12 = *pfVar7;
  ((float *)(gen_frame + 0x1c))[3] = *(float *)(param_1 + 0x24);
  ((float *)(gen_frame + 0x1c))[2] = fVar12;
  ((float *)(gen_frame + 0x1c))[4] = gen_bits2f(REFG(float, 0x1106bc4));
  ((float *)(gen_frame + 0x1c))[1] = GEN_FLT_TO(((float *)(gen_frame + 0x1c))[1], REFG(float, 0x1106bc0));
  pfVar7 = ((float *)(gen_frame + 0x1c)) + 3;
  if (!((double)*(float *)(param_1 + 0x24) < *(double *)&REFG(undefined, 0x109cad0))) {
    pfVar7 = ((float *)(gen_frame + 0x1c)) + 4;
  }
  if (!(*(double *)&REFG(undefined, 0x1106bb8) < (double)*pfVar7)) {
    pfVar7 = ((float *)(gen_frame + 0x1c)) + 1;
  }
  fVar1 = *pfVar7;
  fVar2 = *(float *)(param_1 + 0x28);
  ((float *)(gen_frame + 0x1c))[3] = fVar2;
  ((float *)(gen_frame + 0x1c))[4] = fVar1;
  ((float *)(gen_frame + 0x1c))[1] = gen_bits2f(REFG(float, 0x1106bc4));
  ((float *)(gen_frame + 0x1c))[0] = GEN_FLT_TO(((float *)(gen_frame + 0x1c))[0], REFG(float, 0x1106bc0));
  pfVar7 = ((float *)(gen_frame + 0x1c)) + 3;
  if (!((double)fVar2 < *(double *)&REFG(undefined, 0x109cad0))) {
    pfVar7 = ((float *)(gen_frame + 0x1c)) + 1;
  }
  if (!(*(double *)&REFG(undefined, 0x1106bb8) < (double)*pfVar7)) {
    pfVar7 = ((float *)(gen_frame + 0x1c));
  }
  fVar9 = (float10)fVar12;
  ((float *)(gen_frame + 0x1c))[3] = *pfVar7;
  pfVar5 = ((float *)(gen_frame + 0x1c)) + 2;
  if (!((float10)fVar1 < fVar9)) {
    pfVar5 = ((float *)(gen_frame + 0x1c)) + 4;
  }
  pfVar6 = ((float *)(gen_frame + 0x1c)) + 4;
  ((float *)(gen_frame + 0x1c))[4] = *pfVar5;
  fVar10 = (float10)*pfVar5;
  if (!((float10)*pfVar7 < fVar10)) {
    pfVar6 = ((float *)(gen_frame + 0x1c)) + 3;
  }
  ((float *)(gen_frame + 0x1c))[3] = *pfVar6;
  if (*(char *)(iVar3 + 0x10) == '\0') {
    fVar12 = *(float *)(param_1 + 0x30);
    ((float *)(gen_frame + 0x1c))[2] = fVar12;
    ((float *)(gen_frame + 0x1c))[0] = GEN_FLT_TO(((float *)(gen_frame + 0x1c))[0], REFG(float, 0x1094724));
    ((float *)(gen_frame + 0x1c))[1] = 0.0;
    pfVar7 = ((float *)(gen_frame + 0x1c)) + 2;
    if (!((double)fVar12 < *(double *)&REFG(undefined, 0x10912a8))) {
      pfVar7 = ((float *)(gen_frame + 0x1c));
    }
    if (!(0.0 < *pfVar7)) {
      pfVar7 = ((float *)(gen_frame + 0x1c)) + 1;
    }
    fVar12 = *pfVar7;
    ((float *)(gen_frame + 0x1c))[0] = fVar12;
    fVar11 = (float10)fVar12;
    *pfVar8 = (float)(fVar11 + fVar9);
    fVar10 = fVar10 + fVar11;
  }
  else {
    iVar3 = *((int *)GEN_TOP((REFG(int, 0x1371298) + 0x34 + *(int *)(REFG(int, 0x1371298) + 0x30) * 4)));
    if (iVar3 == 0) goto LAB_00bd5389;
    this_00 = (undefined *)F_0046f4a0(((undefined1 *)(gen_frame + 0x0)),iVar3 + 0x60,*(int *)(iVar3 + 0xc0) + 0x90);
    fVar12 = F_004bd280(this_00 GEN_EDX_ARG);
    ((float *)(gen_frame + 0x1c))[0] = fVar12;
    fVar11 = (float10)fVar12;
    *pfVar8 = (float)(fVar11 + (float10)((float *)(gen_frame + 0x1c))[2]);
    fVar10 = fVar11 + (float10)((float *)(gen_frame + 0x1c))[4];
  }
  *(float *)(iVar4 + 0x278) = (float)fVar10;
  *(float *)(iVar4 + 0x27c) = (float)(fVar11 + (float10)((float *)(gen_frame + 0x1c))[3]);
LAB_00bd5389: ;
  fVar1 = REFG(float, 0x1087f04);
  fVar12 = *(float *)(param_1 + 0x3c);
  ((float *)(gen_frame + 0x1c))[1] = GEN_FLT_TO(((float *)(gen_frame + 0x1c))[1], REFG(float, 0x1087f04));
  ((float *)(gen_frame + 0x1c))[2] = 0.0;
  ((float *)(gen_frame + 0x1c))[0] = fVar12;
  pfVar8 = ((float *)(gen_frame + 0x1c));
  if (!(fVar12 < REFG(float, 0x1087f04))) {
    pfVar8 = ((float *)(gen_frame + 0x1c)) + 1;
  }
  if (!(0.0 < *pfVar8)) {
    pfVar8 = ((float *)(gen_frame + 0x1c)) + 2;
  }
  *(float *)(iVar4 + 0x280) = *pfVar8;
  fVar12 = *(float *)(param_1 + 0x40);
  ((float *)(gen_frame + 0x1c))[2] = 0.0;
  ((float *)(gen_frame + 0x1c))[0] = fVar12;
  pfVar8 = ((float *)(gen_frame + 0x1c));
  if (!(fVar12 < fVar1)) {
    pfVar8 = ((float *)(gen_frame + 0x1c)) + 1;
  }
  if (!(0.0 < *pfVar8)) {
    pfVar8 = ((float *)(gen_frame + 0x1c)) + 2;
  }
  *(float *)(iVar4 + 0x284) = *pfVar8;
  return 0;
}

/* ref: FUN_00bd5400 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd5400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd5400u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*(int *)((int)this + 0x2c) == 0x16) {
    this = (undefined *)F_004adca0((undefined *)(REFG(int, 0x1371290) + 0x25c) GEN_EDX_FWD,7,1,0x80);
  }
  else if (*(int *)((int)this + 0x2c) == 0x32) {
    uVar1 = F_004adca0((undefined *)(REFG(int, 0x1371290) + 0x25c) GEN_EDX_ARG,8,
                         (uint)(*((char *)GEN_TOP((*(int *)((int)this + 0x24) + 0x10))) != '\0'),1);
    return uVar1;
  }
  return (uint)this;
}

/* ref: FUN_00bd5450 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd5450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd5450u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  iVar1 = REFG(int, 0x1371290);
  uVar2 = *(uint *)((int)this + 0x2c);
  if (uVar2 == 0x16) {
    if ((*(char *)(REFG(int, 0x1371290) + 0x30f) == -0x80) && (REFG(int, 0x1371290) + 0x274 != 0)) {
      F_004a4530(REFG(int, 0x1371290) + 0x274 GEN_EDX_FWD);
    }
    uVar2 = F_004adca0((undefined *)(iVar1 + 0x25c) GEN_EDX_ARG,7,0,0x80);
  }
  else if ((uVar2 == 0x32) && (uVar2 = *(uint *)((int)this + 0x24), *(char *)(uVar2 + 0x11) == '\0')
          ) {
    uVar2 = F_004adca0((undefined *)(REFG(int, 0x1371290) + 0x25c) GEN_EDX_ARG,8,0,1);
    return uVar2;
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::PostEffectClip::vf25 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd54b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd54b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd5450(this GEN_EDX_FWD);
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffef;
  return 0xffef;
}

/* ref: Client::System::Scheduler::Clip::PostEffectClip::vf33 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd54d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd54d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 in_EAX = 0;
  uint uVar1;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),(byte)this[0x7c] >> 4);
  if (((byte)this[0x7c] >> 4 & 1) == 0) {
    if (*(int *)(this + 0x2c) != 0x16) {
      uVar1 = F_00bd5400(this GEN_EDX_FWD);
      *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
      return uVar1;
    }
    uVar1 = F_00bd5400(this GEN_EDX_ARG);
    if (*((char *)GEN_TOP((*(int *)(this + 0x24) + 0x11))) == '\x02') {
      uVar1 = F_00bd5450(this GEN_EDX_ARG);
    }
    *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
  }
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::PostEffectClip::vf34 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00bd5510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd5510u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  if (((byte)this[0x7c] >> 4 & 1) != 0) {
    if ((*(int *)(this + 0x2c) != 0x16) || (*((char *)GEN_TOP((*(int *)(this + 0x24) + 0x11))) == '\0')) {
      F_00bd5450(this GEN_EDX_FWD);
    }
    *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffef;
    return 1;
  }
  return 0;
}

/* ref: FUN_00bd5550 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd5550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbd5550u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_004adca0(this GEN_EDX_FWD,8,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00bd5570 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd5570(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbd5570u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (*(char *)(in_ecx + 0xb4) == (char)param_2) {
    return in_ecx + 0x30;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::CameraShakeClip::vf26 */
GEN_LIB GEN_NOFRAME unsigned int F_00bd55a0(void)
{
  GEN_ENTER(0xbd55a0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Scheduler::Clip::CameraShakeClip::vf33 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00bd55b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd55b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Client::System::Scheduler::Clip::CameraShakeClip::vf34 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00bd55c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd55c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 0;
}

/* ref: Client::System::Scheduler::Clip::DefaultMotionClip::vf13 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00bd55d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd55d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(this + 0x78);
  if (iVar2 != 0) goto LAB_00bd560a;
  iVar2 = *(int *)(this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar2 = *(int *)(this + 0x6c);
    if (iVar2 != 0) goto LAB_00bd55f5;
  }
  else {
LAB_00bd55f5: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  iVar2 = *(int *)(this + 0x78);
LAB_00bd560a: ;
  uVar3 = F_00bccde0(iVar2 GEN_EDX_ARG,*(uint *)(this + 0x24),0,0,*(undefined4 *)(this + 0x2c));
  *(uint *)(this + 0x88) = uVar3;
  return 1;
}

/* ref: Client::System::Scheduler::Clip::DefaultMotionClip::vf33 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd5630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd5630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 uVar1;
  undefined * pvVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  undefined * this_00;
  
  pvVar2 = *(undefined * PTR32 *)(this + 0x78);
  this_00 = pvVar2;
  if (pvVar2 == (undefined *)0x0) {
    iVar3 = *(int *)(this + 0x6c);
    if (iVar3 == 0) {
      if (*(int *)(this + 4) != 0) {
        *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
      }
      iVar3 = *(int *)(this + 0x6c);
      pvVar2 = (undefined *)0x0;
      if (iVar3 != 0) goto LAB_00bd565a;
    }
    else {
LAB_00bd565a: ;
      uVar1 = *(undefined4 *)(iVar3 + 0x20);
      *(undefined4 *)(this + 0x78) = uVar1;
      pvVar2 = (undefined *)F_00b595f0(uVar1);
    }
    this_00 = *(undefined * PTR32 *)(this + 0x78);
  }
  if (this_00 == (undefined *)0x0) {
    return (uint)pvVar2;
  }
  iVar3 = *(int *)(this + 0x74);
  if (iVar3 != 0) goto LAB_00bd56b6;
  piVar5 = *(int * PTR32 *)(this + 0x70);
  if (piVar5 == (int *)0x0) {
    iVar3 = *(int *)(this + 0x6c);
    if (iVar3 == 0) {
      if (*(int *)(this + 4) != 0) {
        *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
      }
      iVar3 = *(int *)(this + 0x6c);
      if (iVar3 != 0) goto LAB_00bd569c;
    }
    else {
LAB_00bd569c: ;
      *(undefined4 *)(this + 0x70) = *(undefined4 *)(iVar3 + 4);
    }
    piVar5 = *(int * PTR32 *)(this + 0x70);
    if (piVar5 != (int *)0x0) goto LAB_00bd56a9;
  }
  else {
LAB_00bd56a9: ;
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 100))(piVar5 GEN_EDX_ARG);
    *(uint *)(this + 0x74) = uVar4;
  }
  iVar3 = *(int *)(this + 0x74);
LAB_00bd56b6: ;
  uVar4 = F_00bc4ce0(this_00 GEN_EDX_ARG,*(undefined4 *)(this + 0x88),*(undefined4 *)(this + 0x24),this,iVar3,
                       *(undefined4 *)(this + 0x2c));
  return uVar4;
}

/* ref: Client::System::Scheduler::Clip::DefaultMotionClip::vf35 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd56e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbd56e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 != (undefined *)0x0) goto LAB_00bd5721;
  iVar2 = *(int *)(this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar2 = *(int *)(this + 0x6c);
    uVar3 = 0;
    if (iVar2 != 0) goto LAB_00bd5708;
  }
  else {
LAB_00bd5708: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar1;
    uVar3 = F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 == (undefined *)0x0) {
    return uVar3;
  }
LAB_00bd5721: ;
  uVar3 = F_00bc4e60(this_00 GEN_EDX_ARG,param_2,*(undefined4 *)(this + 0x2c));
  return uVar3;
}

/* ref: FUN_00bd5740 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd5740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd5740u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x78);
  if (this_00 != (undefined *)0x0) goto LAB_00bd577e;
  iVar2 = *(int *)((int)this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar2 = *(int *)((int)this + 0x6c);
    uVar3 = 0;
    if (iVar2 != 0) goto LAB_00bd5765;
  }
  else {
LAB_00bd5765: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)((int)this + 0x78) = uVar1;
    uVar3 = F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)((int)this + 0x78);
  if (this_00 == (undefined *)0x0) {
    return uVar3;
  }
LAB_00bd577e: ;
  uVar3 = F_00bc4e00(this_00 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x88),this,
                       *(undefined4 *)((int)this + 0x2c));
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::DefaultMotionClip::vf26 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd57a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd57a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 != (undefined *)0x0) goto LAB_00bd57de;
  iVar2 = *(int *)(this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar2 = *(int *)(this + 0x6c);
    uVar3 = 0;
    if (iVar2 != 0) goto LAB_00bd57c5;
  }
  else {
LAB_00bd57c5: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar1;
    uVar3 = F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 == (undefined *)0x0) {
    return uVar3;
  }
LAB_00bd57de: ;
  uVar3 = F_00bc4e00(this_00 GEN_EDX_ARG,*(undefined4 *)(this + 0x88),this,*(undefined4 *)(this + 0x2c));
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::DefaultMotionClip::vf8 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd5800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd5800u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 != (undefined *)0x0) goto LAB_00bd583e;
  iVar2 = *(int *)(this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar2 = *(int *)(this + 0x6c);
    uVar3 = 0;
    if (iVar2 != 0) goto LAB_00bd5825;
  }
  else {
LAB_00bd5825: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar1;
    uVar3 = F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 == (undefined *)0x0) {
    return uVar3;
  }
LAB_00bd583e: ;
  uVar3 = F_00bc4e00(this_00 GEN_EDX_ARG,*(undefined4 *)(this + 0x88),this,*(undefined4 *)(this + 0x2c));
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::DefaultMotionClip::vf34 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00bd5860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd5860u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 uVar1;
  int iVar2;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 != (undefined *)0x0) goto LAB_00bd589e;
  iVar2 = *(int *)(this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar2 = *(int *)(this + 0x6c);
    if (iVar2 != 0) goto LAB_00bd5885;
  }
  else {
LAB_00bd5885: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 == (undefined *)0x0) {
    return 1;
  }
LAB_00bd589e: ;
  F_00bc4e00(this_00 GEN_EDX_ARG,*(undefined4 *)(this + 0x88),this,*(undefined4 *)(this + 0x2c));
  return 1;
}

/* ref: FUN_00bd58c0 */
GEN_LIB GEN_FRAME float10 F_00bd58c0(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbd58c0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: Client::System::Scheduler::Clip::NonSerialClip::vf25 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00bd58e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd58e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if ((*(int *)(this + 0x2c) == 0x75) && (REFG(void * PTR32, 0x13759f4) != (undefined *)0x0)) {
    F_00690270(REFG(void * PTR32, 0x13759f4) GEN_EDX_FWD);
    return;
  }
  return;
}

/* ref: Client::System::Scheduler::Clip::NonSerialClip::vf33 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd5900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd5900u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int * piVar6;
  uint uVar7;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  uint uVar8;
  undefined3 extraout_var_01 = 0;
  uint uVar9;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)(this + 0x6c);
  if (this_00 == (undefined *)0x0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    this_00 = *(undefined * PTR32 *)(this + 0x6c);
  }
  F_00beb760(this_00 GEN_EDX_FWD);
  piVar6 = (int *)F_00beb670(this_00 GEN_EDX_ARG);
  (*(int * PTR32 *)(gen_frame + 0x4c)) = piVar6;
  if ((piVar6 != (int *)0x0) || (uVar7 = 0, *(int *)(this + 0x2c) == 0x75)) {
    uVar7 = *(int *)(this + 0x2c) - 0x21;
    switch((unsigned int)(uintptr_t)(*(int *)(this + 0x2c))) {
    case 0x21: ;
      bVar5 = F_00bd1fe0(this GEN_EDX_ARG);
      uVar7 = CONCAT31(extraout_var,bVar5);
      if (bVar5 == 0) {
        bVar5 = F_00bd2480(this GEN_EDX_ARG);
        uVar7 = CONCAT31(extraout_var_00,bVar5);
        if (bVar5 == 0) {
          uVar7 = F_00c22ac0((*(int * PTR32 *)(gen_frame + 0x4c)),*((undefined4 *)GEN_TOP((*(int *)(this + 0x24) + 0xc))),
                               *((undefined4 *)GEN_TOP((*(int *)(this + 0x24) + 0x10))));
          return uVar7;
        }
      }
      break;
    case 0x37: ;
      uVar8 = F_00beb790(this_00 GEN_EDX_ARG);
      uVar9 = 0;
      (*(uint *)(gen_frame + 0x48)) = uVar8;
      uVar7 = 0;
      if (uVar8 != 0) {
        do {
          uVar8 = F_00bec250(this_00 GEN_EDX_ARG,uVar9);
          uVar7 = 0;
          if (uVar8 != 0) {
            uVar7 = F_00a62370(uVar8,(*(int * PTR32 *)(gen_frame + 0x4c)));
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < (*(uint *)(gen_frame + 0x48)));
        return uVar7;
      }
      break;
    case 0x49: ;
      bVar5 = F_00bd1fe0(this GEN_EDX_ARG);
      uVar7 = CONCAT31(extraout_var_01,bVar5);
      if (bVar5 == 0) {
        iVar3 = *(int *)(this + 0x24);
        if (*(int *)(iVar3 + 0x24) != 0) {
          iVar4 = *(int *)(iVar3 + 0x20);
          (*(float *)(gen_frame + 0x30)) = *(float *)(iVar4 + iVar3);
          (*(float *)(gen_frame + 0x34)) = *(float *)(iVar4 + 4 + iVar3);
          (*(float *)(gen_frame + 0x38)) = *(float *)(iVar4 + 8 + iVar3);
        }
        if (*(int *)(iVar3 + 0x1c) != 0) {
          iVar4 = *(int *)(iVar3 + 0x18);
          uVar1 = *(undefined4 *)(iVar4 + 8 + iVar3);
          uVar2 = *(undefined4 *)(iVar4 + 4 + iVar3);
          (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)(iVar4 + iVar3);
          (*(undefined4 *)(gen_frame + 0x24)) = uVar2;
          (*(undefined4 *)(gen_frame + 0x28)) = uVar1;
          F_00a1e0d0(((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x20)));
        }
        if (*(int *)(iVar3 + 0x14) != 0) {
          (*(float *)(gen_frame + 0x10)) = *((float *)GEN_TOP((iVar3 + *(int *)(iVar3 + 0x10))));
        }
        uVar7 = F_00a62390((*(int * PTR32 *)(gen_frame + 0x4c)),*(undefined4 *)(iVar3 + 0xc),(*(float *)(gen_frame + 0x30)),(*(float *)(gen_frame + 0x34)),(*(float *)(gen_frame + 0x38)),
                             (*(float *)(gen_frame + 0x10)));
        return uVar7;
      }
      break;
    case 0x6a: ;
      if (*((char *)GEN_TOP((*(int *)(this + 0x24) + 0xc))) < '\x01') {
        uVar7 = ((code *)*(gen_code32 *)(*piVar6 + 0x28))(0xe,0);
        return uVar7;
      }
      uVar7 = ((code *)*(gen_code32 *)(*piVar6 + 0x24))(0xe,0);
      return uVar7;
    case 0x72: ;
      uVar8 = F_0054d950(this GEN_EDX_ARG);
      uVar7 = 0;
      if (uVar8 != 0) {
        uVar7 = F_00aa2500((*(int * PTR32 *)(gen_frame + 0x4c)) GEN_EDX_ARG,*(undefined4 *)(uVar8 + 200));
        return uVar7;
      }
      break;
    case 0x75: ;
      if (REFG(void * PTR32, 0x13759f4) != (undefined *)0x0) {
        if (*((short *)GEN_TOP((*(int *)(this + 0x24) + 0xc))) == 1) {
          uVar7 = F_006aac30(REFG(void * PTR32, 0x13759f4) GEN_EDX_ARG);
          return uVar7;
        }
        uVar7 = F_00690270(REFG(void * PTR32, 0x13759f4) GEN_EDX_ARG);
      }
    }
  }
  return uVar7;
}

/* ref: FUN_00bd5bb0 */
GEN_LIB GEN_FRAME float GEN_THISCALL F_00bd5bb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd5bb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((float *)GEN_TOP((*(int *)((int)this + 0x10) + param_1 * 4 + (int)this)));
}

/* ref: FUN_00bd5bd0 */
GEN_LIB GEN_FRAME float GEN_THISCALL F_00bd5bd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd5bd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((float *)GEN_TOP((*(int *)((int)this + 0x18) + param_1 * 4 + (int)this)));
}

/* ref: FUN_00bd5bf0 */
GEN_LIB GEN_FRAME float GEN_THISCALL F_00bd5bf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd5bf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((float *)GEN_TOP((*(int *)((int)this + 0x20) + param_1 * 4 + (int)this)));
}

/* ref: FUN_00bd5c10 */
GEN_LIB GEN_FRAME float10 F_00bd5c10(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbd5c10u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00bd5c30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd5c30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd5c30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  __declspec(align(16)) undefined1 gen_frame[0x100];
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined * pvVar4;
  int * piVar5;
  code * pcVar6;
  
  (*(uint *)(gen_frame + 0xf8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xfc);
  pvVar4 = *(undefined * PTR32 *)((int)this + 0x74);
  if (pvVar4 == (undefined *)0x0) {
    piVar5 = *(int * PTR32 *)((int)this + 0x70);
    if (piVar5 == (int *)0x0) {
      iVar2 = *(int *)((int)this + 0x6c);
      if (iVar2 == 0) {
        if (*(int *)((int)this + 4) != 0) {
          *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
        }
        iVar2 = *(int *)((int)this + 0x6c);
        if (iVar2 != 0) goto LAB_00bd5c78;
      }
      else {
LAB_00bd5c78: ;
        *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(iVar2 + 4);
      }
      piVar5 = *(int * PTR32 *)((int)this + 0x70);
      if (piVar5 != (int *)0x0) goto LAB_00bd5c85;
    }
    else {
LAB_00bd5c85: ;
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 100))(piVar5 GEN_EDX_FWD);
      *(uint *)((int)this + 0x74) = uVar3;
    }
    pvVar4 = *(undefined * PTR32 *)((int)this + 0x74);
  }
  ((undefined4 *)(gen_frame + 0x8))[0] = 0;
  (*(int * PTR32 *)(gen_frame + 0x4)) = (int *)0x0;
  bVar1 = F_00bc2920(pvVar4 GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x4)),((undefined4 *)(gen_frame + 0x8)));
  while (bVar1 != 0) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x4)) + 0xb8))((*(int * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    if (uVar3 == param_1) {
      if (*(int *)((int)this + 0x2c) == 0x28) goto LAB_00bd5d4d;
      if (*(int *)((int)this + 0x2c) == 0x2a) {
        pcVar6 = *(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x4)) + 0x9c);
        goto override_prt_bd5d55_776d44d0;
      }
    }
    bVar1 = F_00bc2920(pvVar4 GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x4)),((undefined4 *)(gen_frame + 0x8)));
  }
  uVar3 = F_00bd3f80(this GEN_EDX_ARG);
  piVar5 = (int *)0x0;
  if (uVar3 != 0) {
    pvVar4 = (undefined *)F_00bd3f80(this GEN_EDX_ARG);
    piVar5 = (int *)F_00b607f0(pvVar4 GEN_EDX_ARG,param_1);
    (*(int * PTR32 *)(gen_frame + 0x4)) = piVar5;
    if (piVar5 != (int *)0x0) {
      if (*(int *)((int)this + 0x2c) == 0x28) {
LAB_00bd5d4d: ;
        pcVar6 = *(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x4)) + 0x98);
      }
      else {
        if (*(int *)((int)this + 0x2c) != 0x2a) goto LAB_00bd5d57;
        pcVar6 = *(gen_code32 *)(*piVar5 + 0x9c);
      }
override_prt_bd5d55_776d44d0: ;
      piVar5 = ((int *)GEN_TOP((*pcVar6)((*(int * PTR32 *)(gen_frame + 0x4)))));
    }
  }
LAB_00bd5d57: ;
  F_00c47745((*(uint *)(gen_frame + 0xf8)) ^ (uint)(uint)(gen_frame + 0xfc) GEN_EDX_ARG);
  return (uint)piVar5;
}

/* ref: Client::System::Scheduler::Clip::SystemClip::vf25 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd5db0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd5db0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = REFG(undefined4, 0x137129c);
  uVar2 = *(uint *)(this + 0x2c);
  if (uVar2 == 0x50) {
    uVar2 = F_00bd3f80(this GEN_EDX_FWD);
    if (*(undefined * PTR32 *)(uVar2 + 0x38) != (undefined *)0x0) {
      uVar2 = F_00beb190(*(undefined * PTR32 *)(uVar2 + 0x38) GEN_EDX_ARG);
      return uVar2;
    }
  }
  else if (uVar2 == 0x60) {
    uVar1 = F_00bd3f80(this GEN_EDX_ARG);
    uVar2 = 0;
    if (uVar1 != 0) {
      *(undefined4 *)(uVar1 + 0xf8) = 0xffffffff;
      return uVar1;
    }
  }
  else if (uVar2 == 0x6d) {
    *(undefined4 *)(REFG(undefined4, 0x137129c) + 0xec) = GEN_FLT_TO(*(undefined4 *)(REFG(undefined4, 0x137129c) + 0xec), REFG(float, 0x1087f04));
    uVar2 = uVar1;
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::SystemClip::vf33 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd5e00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd5e00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  int iVar4;
  undefined * this_00;
  uint uVar5;
  uint uVar6;
  float * pfVar7;
  int iVar8;
  float fVar2;
  float fVar3;
  
  uVar6 = REFG(undefined4, 0x137129c);
  iVar4 = *(int *)(this + 0x2c);
  uVar5 = iVar4 - 0x28;
  if (uVar5 < 0x46) {
    uVar5 = (uint)*(byte *)(iVar4 + 0xbd5fb0);
    switch((unsigned int)(uintptr_t)(iVar4)) {
    case 0x28: ;
      iVar4 = *(int *)(this + 0x24);
      iVar8 = *(int *)(iVar4 + 0x10);
      if (iVar8 != 0) {
        do {
          iVar8 = iVar8 - 1;
          uVar5 = F_00bd5c30(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*(int *)(iVar4 + 0xc) + iVar8 * 4 + iVar4))));
        } while (iVar8 != 0);
        return uVar5;
      }
      break;
    case 0x2a: ;
      iVar4 = *(int *)(this + 0x24);
      iVar8 = *(int *)(iVar4 + 0x10);
      if (iVar8 != 0) {
        do {
          iVar8 = iVar8 - 1;
          uVar5 = F_00bd5c30(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(iVar4 + 0xc) + iVar8 * 4 + iVar4))));
        } while (iVar8 != 0);
        return uVar5;
      }
      break;
    case 0x50: ;
      uVar5 = F_00bd3f80(this GEN_EDX_ARG);
      this_00 = *(undefined * PTR32 *)(uVar5 + 0x38);
      if (this_00 != (undefined *)0x0) {
        iVar4 = *(int *)(this + 0x24);
        uVar5 = (uint)*(byte *)(iVar4 + 0xc);
        if (uVar5 == 0) {
          iVar8 = *(int *)((int)this_00 + 0xd0);
          *(undefined4 *)(iVar8 + 0xac) = *(undefined4 *)(iVar4 + 0x10);
          *(undefined4 *)(iVar8 + 0xb0) = *(undefined4 *)(iVar4 + 0x14);
          return 0;
        }
        if (uVar5 == 1) {
          uVar5 = F_00beb190(this_00 GEN_EDX_ARG);
          return uVar5;
        }
        uVar5 = uVar5 - 2;
        if (uVar5 == 0) {
          if (*(char *)(iVar4 + 0xd) == '\0') {
            *((undefined4 *)GEN_TOP((*(int *)((int)this_00 + 0xd0) + 0xac))) =
                 *(undefined4 *)((int)this_00 + 300);
          }
          else if (*(char *)(iVar4 + 0xd) == '\x02') {
            *((undefined4 *)GEN_TOP((*(int *)((int)this_00 + 0xd0) + 0xac))) = *(undefined4 *)(iVar4 + 0x10);
          }
          if (*(byte *)(iVar4 + 0xe) == 0) {
            *((undefined4 *)GEN_TOP((*(int *)((int)this_00 + 0xd0) + 0xb0))) =
                 *(undefined4 *)((int)this_00 + 0x130);
            return 0;
          }
          uVar5 = *(byte *)(iVar4 + 0xe) - 2;
          if (uVar5 == 0) {
            *((undefined4 *)GEN_TOP((*(int *)((int)this_00 + 0xd0) + 0xb0))) = *(undefined4 *)(iVar4 + 0x14);
            return 0;
          }
        }
      }
      break;
    case 0x60: ;
      uVar6 = F_00bd3f80(this GEN_EDX_ARG);
      uVar5 = 0;
      if (uVar6 != 0) {
        *(undefined4 *)(uVar6 + 0xf8) = *((undefined4 *)GEN_TOP((*(int *)(this + 0x24) + 0xc)));
        F_004ff5f0(REFG(undefined4, 0x1375aec) GEN_EDX_ARG);
        return uVar6;
      }
      break;
    case 0x6d: ;
      pfVar7 = ((float *)GEN_TOP((*(int *)(this + 0x24) + 0xc)));
      fVar1 = *pfVar7;
      fVar2 = *pfVar7;
      fVar3 = *pfVar7;
      (*(float *)(gen_frame + 0x8)) = REFG(float, 0x1094880);
      (*(float *)(gen_frame + 0x4)) = 0.0;
      if ((GEN_ISNAN(REFG(float, 0x1094880)) || GEN_ISNAN(fVar1)) || (REFG(float, 0x1094880) < fVar3 || REFG(uint, 0x1094880) == fVar2)) {
        pfVar7 = &(*(float *)(gen_frame + 0x8));
      }
      if (!(0.0 < *pfVar7)) {
        pfVar7 = &(*(float *)(gen_frame + 0x4));
      }
      *(float *)(REFG(undefined4, 0x137129c) + 0xec) = *pfVar7;
      uVar5 = uVar6;
    }
  }
  return uVar5;
}

/* ref: FUN_00bd6040 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00bd6040(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xbd6040u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *(float *)(in_ecx + 0xec) = param_2;
  return;
}

/* ref: FUN_00bd6060 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd6060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd6060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*(int *)((int)this + 0xc) + param_1 * 4 + (int)this)));
}

/* ref: FUN_00bd6080 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd6080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd6080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*(int *)((int)this + 0xc) + param_1 * 4 + (int)this)));
}

/* ref: Client::System::Scheduler::Clip::SharedGroupClip::vf34 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00bd60c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd60c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  
  if (param_1 != 2) {
    piVar1 = (int *)F_00bd3ff0(this GEN_EDX_FWD);
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    if (*(int *)(this + 0x2c) == 0x2d) {
      this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xac))(piVar1 GEN_EDX_ARG)));
      F_005e98e0(this_00 GEN_EDX_ARG,500);
    }
    else if (*(int *)(this + 0x2c) == 0x2e) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xac))(piVar1 GEN_EDX_ARG);
      F_005d7a50(uVar2 GEN_EDX_ARG,(float)(float10)0);
      return 1;
    }
  }
  return 1;
}

/* ref: FUN_00bd6130 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00bd6130(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(byte * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbd6130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a1;)
  byte bVar1;
  byte bVar2;
  uint in_EAX = 0;
  uint uVar3;
  
  uVar3 = *param_1;
  bVar1 = *param_2;
  if (bVar1 == 0) {
    *param_1 = uVar3;
    return in_EAX;
  }
  bVar2 = param_2[1];
  if (bVar2 != 0) {
    if (param_2[2] != 0) {
      uVar3 = (uint)CONCAT21(CONCAT11(param_2[2],bVar2),bVar1) << 8 | uVar3 >> 0x18;
      *param_1 = uVar3;
      return uVar3;
    }
    if (bVar2 != 0) {
      uVar3 = (uint)CONCAT11(bVar2,bVar1) << 0x10 | uVar3 >> 0x10;
      *param_1 = uVar3;
      return uVar3;
    }
  }
  uVar3 = (uint)bVar1 << 0x18 | uVar3 >> 8;
  *param_1 = uVar3;
  return uVar3;
}

/* ref: FUN_00bd61c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd61c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xbd61c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  uint uVar1;
  undefined * this_00;
  byte bVar2;
  
  *(*(uint * PTR32 *)&gen_args[1]) = 0;
  *(*(undefined4 * PTR32 *)&gen_args[5]) = 0;
  *(*(uint * PTR32 *)&gen_args[2]) = 0;
  if ((*(int * PTR32 *)&gen_args[3]) == (int *)0x0) {
    return (uint)(*(undefined4 * PTR32 *)&gen_args[5]);
  }
  if ((*(int * PTR32 *)&gen_args[3])[0x1b] == 7) {
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[3]) + 0xb4))))((*(int * PTR32 *)&gen_args[3]) GEN_EDX_FWD)));
    *(*(uint * PTR32 *)&gen_args[1]) = (uint)this_00;
    if (this_00 == (undefined *)0x0) {
      return 0;
    }
    bVar2 = *(byte *)((int)this_00 + 0x28) >> 4;
  }
  else {
    uVar1 = (*(int * PTR32 *)&gen_args[3])[0x1b] - 8;
    if (uVar1 != 0) {
      return uVar1;
    }
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[3]) + 0xb4))))((*(int * PTR32 *)&gen_args[3]) GEN_EDX_ARG)));
    *(*(uint * PTR32 *)&gen_args[1]) = (uint)this_00;
    if (this_00 == (undefined *)0x0) {
      return 0;
    }
    bVar2 = (*(byte *)((int)this_00 + 0x28) >> 4) + 1;
  }
  (*(uint * PTR32 *)&gen_args[1]) = ((uint *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(uint * PTR32 *)&gen_args[1]), 1, 3),bVar2)));
  uVar1 = F_005d9bb0(this_00 GEN_EDX_ARG,(*(uint * PTR32 *)&gen_args[1]),(*(undefined4 *)&gen_args[4]));
  *(*(uint * PTR32 *)&gen_args[2]) = uVar1;
  uVar1 = 0;
  if ((*(int *)&gen_args[6]) != 0) {
    uVar1 = F_00bd6130((*(uint * PTR32 *)&gen_args[2]),(*(int *)&gen_args[6]));
  }
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::SharedGroupClip::vf25 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd6250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd6250u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffbf;
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffef;
  return 0xffbf;
}

/* ref: Client::System::Scheduler::Clip::SharedGroupClip::vf26 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd6270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd6270u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffbf;
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffef;
  return 0xffbf;
}

/* ref: Client::System::Scheduler::Clip::SharedGroupClip::vf33 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd6290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd6290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char * pcVar1;
  float fVar2;
  undefined4 uVar3;
  longlong lVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  undefined * pvVar8;
  undefined3 uVar13;
  int * piVar9;
  undefined * pvVar10;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  uint uVar11;
  uint uVar12;
  undefined3 extraout_var_03 = 0;
  undefined3 extraout_var_04 = 0;
  byte bVar14;
  char * pcVar15;
  
  uVar11 = *(uint *)(this + 0x78);
  if (uVar11 == 0) {
    iVar7 = *(int *)(this + 0x6c);
    if (iVar7 == 0) {
      if (*(int *)(this + 4) != 0) {
        *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
      }
      iVar7 = *(int *)(this + 0x6c);
      if (iVar7 != 0) goto LAB_00bd62bb;
    }
    else {
LAB_00bd62bb: ;
      uVar3 = *(undefined4 *)(iVar7 + 0x20);
      *(undefined4 *)(this + 0x78) = uVar3;
      F_00b595f0(uVar3);
    }
    uVar11 = *(uint *)(this + 0x78);
    if (uVar11 == 0) {
      return 0;
    }
  }
  if (*(char *)(uVar11 + 0x12) != '\0') {
    return uVar11;
  }
  piVar9 = *(int * PTR32 *)(uVar11 + 4);
  if (piVar9 == (int *)0x0) {
    return uVar11;
  }
  pvVar8 = ((undefined *)GEN_TOP((*(int *)(this + 0x2c) - 0x2b)));
  uVar13 = (undefined3)((uint)((int)(uintptr_t)pvVar8) >> 8);
  switch((unsigned int)(uintptr_t)(*(int *)(this + 0x2c))) {
  case 0x2b: ;
    iVar7 = *(int *)(this + 0x24);
    piVar9 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar9 + 0xac))(piVar9 GEN_EDX_ARG)));
    uVar11 = ((GEN_TCODE *)*(gen_code32 *)(*piVar9 + 0x90))(piVar9 GEN_EDX_ARG,(uint)(*(char *)(iVar7 + 0xc) != '\0'));
    return uVar11;
  case 0x2c: ;
    iVar7 = *(int *)(this + 0x24);
    pvVar8 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar9 + 0xac))(piVar9 GEN_EDX_ARG)));
    if (*(char *)((int)pvVar8 + 0x11) == '\a') {
      fVar2 = *(float *)(iVar7 + 0xc);
      (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x18)) + 2)) = gen_x87_cw;
      (*(undefined4 *)(gen_frame + 0x18)) = CONCAT22(gen_x87_cw,(undefined2)(*(undefined4 *)(gen_frame + 0x18)));
      (*(undefined * PTR32 *)(gen_frame + 0x14)) = ((undefined *)GEN_TOP((gen_x87_cw | 0xc00)));
      (*(longlong *)(gen_frame + 0xc)) = (longlong)TRUNC((float10)fVar2);
      lVar4 = (*(longlong *)(gen_frame + 0xc));
      (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0xc)) + 0)) = (undefined4)(longlong)TRUNC((float10)fVar2);
      uVar3 = (undefined4)(*(longlong *)(gen_frame + 0xc));
      (*(longlong *)(gen_frame + 0xc)) = lVar4;
      uVar11 = F_005e98e0(pvVar8 GEN_EDX_ARG,uVar3);
      return uVar11;
    }
    break;
  case 0x2d: ;
    iVar7 = *(int *)(this + 0x24);
    pvVar8 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar9 + 0xac))(piVar9 GEN_EDX_ARG)));
    if (*(char *)((int)pvVar8 + 0x11) == '\a') {
      fVar2 = *(float *)(iVar7 + 0xc);
      (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x18)) + 2)) = gen_x87_cw;
      (*(undefined4 *)(gen_frame + 0x18)) = CONCAT22(gen_x87_cw,(undefined2)(*(undefined4 *)(gen_frame + 0x18)));
      (*(undefined * PTR32 *)(gen_frame + 0x14)) = ((undefined *)GEN_TOP((gen_x87_cw | 0xc00)));
      (*(longlong *)(gen_frame + 0xc)) = (longlong)TRUNC((float10)fVar2);
      lVar4 = (*(longlong *)(gen_frame + 0xc));
      (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0xc)) + 0)) = (undefined4)(longlong)TRUNC((float10)fVar2);
      uVar3 = (undefined4)(*(longlong *)(gen_frame + 0xc));
      (*(longlong *)(gen_frame + 0xc)) = lVar4;
      uVar11 = F_005f4000(pvVar8 GEN_EDX_ARG,uVar3);
      return uVar11;
    }
    break;
  case 0x2e: ;
    iVar7 = *(int *)(this + 0x24);
    pvVar8 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar9 + 0xac))(piVar9 GEN_EDX_ARG)));
    if (*(char *)((int)pvVar8 + 0x11) == '\x04') {
      uVar11 = F_005d79f0(pvVar8 GEN_EDX_ARG,*(float *)(iVar7 + 0xc),(uint)(*(char *)(iVar7 + 0x10) != '\0'));
      return uVar11;
    }
    break;
  case 0x2f: ;
    iVar7 = *(int *)(this + 0x24);
    pvVar8 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar9 + 0xac))(piVar9 GEN_EDX_ARG)));
    if (*(char *)((int)pvVar8 + 0x11) == '\x04') {
      uVar11 = F_005d7a80(pvVar8 GEN_EDX_ARG,*(undefined4 *)(iVar7 + 0xc));
      return uVar11;
    }
    break;
  case 0x30: ;
  case 0x31: ;
  case 0x32: ;
  case 0x33: ;
  case 0x34: ;
  case 0x35: ;
  case 0x36: ;
  case 0x37: ;
  case 0x38: ;
  case 0x39: ;
  case 0x3a: ;
  case 0x3b: ;
  case 0x3c: ;
  case 0x3d: ;
  case 0x3e: ;
  case 0x3f: ;
  case 0x40: ;
  case 0x41: ;
  case 0x42: ;
  case 0x43: ;
  case 0x47: ;
  case 0x48: ;
  case 0x49: ;
  case 0x4a: ;
  case 0x4b: ;
  case 0x4c: ;
  case 0x4d: ;
  case 0x4e: ;
  case 0x4f: ;
  case 0x50: ;
  case 0x51: ;
  case 0x52: ;
  case 0x53: ;
  case 0x54: ;
  case 0x55: ;
  case 0x56: ;
  case 0x57: ;
  case 0x58: ;
  case 0x59: ;
  case 0x5a: ;
  case 0x5b: ;
  case 0x5c: ;
  case 0x5d: ;
  case 0x5e: ;
  case 0x5f: ;
  case 0x60: ;
  case 0x61: ;
  case 0x62: ;
  case 99: ;
  case 100: ;
  case 0x65: ;
  case 0x66: ;
  case 0x67: ;
  case 0x68: ;
  case 0x69: ;
  case 0x6a: ;
  case 0x6b: ;
  case 0x6c: ;
  case 0x6d: ;
  case 0x6e: ;
  case 0x6f: ;
  case 0x70: ;
    break;
  case 0x44: ;
    bVar6 = *((byte *)GEN_TOP((*(int *)(this + 0x24) + 0xc)));
    pvVar8 = ((undefined *)GEN_TOP(CONCAT31(uVar13,bVar6)));
    if ((bVar6 != 0) && (((byte)this[0x7c] >> 6 & 1) == 0)) {
      piVar9 = (int *)F_00bd3ff0(this GEN_EDX_ARG);
      pvVar8 = (undefined *)0x0;
      if (piVar9 != (int *)0x0) {
        if (piVar9[0x1b] == 7) {
          pvVar10 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar9 + 0xb4))(piVar9 GEN_EDX_ARG)));
          pvVar8 = (undefined *)0x0;
          if (pvVar10 != (undefined *)0x0) {
            bVar14 = *(byte *)((int)pvVar10 + 0x28) >> 4;
            (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0)) = bVar14;
            (*(undefined * PTR32 *)(gen_frame + 0x14)) = ((undefined *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined * PTR32 *)(gen_frame + 0x14)), 1, 3),bVar14)));
LAB_00bd649c: ;
            uVar11 = F_005d9bb0(pvVar10 GEN_EDX_ARG,(*(undefined * PTR32 *)(gen_frame + 0x14)),(uint)bVar6);
            pvVar8 = (undefined *)F_005e3880(pvVar10 GEN_EDX_ARG,uVar11);
            if ((char)pvVar8 != '\0') {
              F_00bd30b0(this GEN_EDX_ARG,0);
              *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
              pvVar8 = (undefined *)F_0054d920(this GEN_EDX_ARG);
              *(uint *)((int)pvVar8 + 0x2c) = *(uint *)((int)pvVar8 + 0x2c) | 8;
            }
          }
        }
        else {
          pvVar8 = (undefined *)(piVar9[0x1b] - 8);
          if (pvVar8 == (undefined *)0x0) {
            pvVar10 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar9 + 0xb4))(piVar9 GEN_EDX_ARG)));
            pvVar8 = (undefined *)0x0;
            if (pvVar10 != (undefined *)0x0) {
              cVar5 = (*(byte *)((int)pvVar10 + 0x28) >> 4) + 1;
              (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0)) = cVar5;
              (*(undefined * PTR32 *)(gen_frame + 0x14)) = ((undefined *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined * PTR32 *)(gen_frame + 0x14)), 1, 3),cVar5)));
              goto LAB_00bd649c;
            }
          }
        }
      }
    }
    break;
  case 0x45: ;
    bVar6 = *((byte *)GEN_TOP((*(int *)(this + 0x24) + 0xc)));
    pvVar8 = ((undefined *)GEN_TOP(CONCAT31(uVar13,bVar6)));
    if (bVar6 != 0) {
      piVar9 = (int *)F_00bd3ff0(this GEN_EDX_ARG);
      pvVar8 = (undefined *)0x0;
      if (piVar9 != (int *)0x0) {
        if (piVar9[0x1b] == 7) {
          pvVar10 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar9 + 0xb4))(piVar9 GEN_EDX_ARG)));
          pvVar8 = (undefined *)0x0;
          if (pvVar10 != (undefined *)0x0) {
            bVar14 = *(byte *)((int)pvVar10 + 0x28) >> 4;
            (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0)) = bVar14;
            (*(undefined * PTR32 *)(gen_frame + 0x14)) = ((undefined *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined * PTR32 *)(gen_frame + 0x14)), 1, 3),bVar14)));
            uVar11 = F_005d9bb0(pvVar10 GEN_EDX_ARG,(*(undefined * PTR32 *)(gen_frame + 0x14)),(uint)bVar6);
            bVar6 = F_005e37c0(pvVar10 GEN_EDX_ARG,uVar11);
            return CONCAT31(extraout_var_00,bVar6);
          }
        }
        else {
          pvVar8 = (undefined *)(piVar9[0x1b] - 8);
          if (pvVar8 == (undefined *)0x0) {
            pvVar10 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar9 + 0xb4))(piVar9 GEN_EDX_ARG)));
            pvVar8 = (undefined *)0x0;
            if (pvVar10 != (undefined *)0x0) {
              cVar5 = (*(byte *)((int)pvVar10 + 0x28) >> 4) + 1;
              (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0)) = cVar5;
              (*(undefined * PTR32 *)(gen_frame + 0x14)) = ((undefined *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined * PTR32 *)(gen_frame + 0x14)), 1, 3),cVar5)));
              uVar11 = F_005d9bb0(pvVar10 GEN_EDX_ARG,(*(undefined * PTR32 *)(gen_frame + 0x14)),(uint)bVar6);
              bVar6 = F_005e37c0(pvVar10 GEN_EDX_ARG,uVar11);
              return CONCAT31(extraout_var,bVar6);
            }
          }
        }
      }
    }
    break;
  case 0x46: ;
    pvVar8 = *(undefined * PTR32 *)(this + 0x24);
    if (*(byte *)((int)pvVar8 + 0xc) != 0) {
      pcVar1 = (char *)((int)pvVar8 + 0xd);
      uVar12 = (uint)*(byte *)((int)pvVar8 + 0xc);
      iVar7 = (int)&(*(longlong *)(gen_frame + 0xc)) + 4;
      pcVar15 = pcVar1;
      uVar11 = F_00bd3ff0(this GEN_EDX_ARG);
      pvVar8 = (undefined *)F_00bd61c0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x18)),uVar11,uVar12,iVar7,pcVar15);
      if ((*(undefined * PTR32 *)(gen_frame + 0x14)) != (undefined *)0x0) {
        if (*pcVar1 != '\0') {
          pvVar8 = (undefined *)F_005d6000((*(undefined * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG);
          bVar6 = F_005ef790(pvVar8 GEN_EDX_ARG,*(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x14),(*(undefined4 *)(gen_frame + 0x18)),0xffffffff);
          return CONCAT31(extraout_var_01,bVar6);
        }
        bVar6 = F_005e3670((*(undefined * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x18)),0xffffffff,0);
        return CONCAT31(extraout_var_02,bVar6);
      }
    }
    break;
  case 0x71: ;
    pvVar8 = *(undefined * PTR32 *)(this + 0x24);
    if (*(byte *)((int)pvVar8 + 0xc) != 0) {
      pcVar1 = (char *)((int)pvVar8 + 0xd);
      uVar11 = (uint)*(byte *)((int)pvVar8 + 0xc);
      iVar7 = (int)&(*(longlong *)(gen_frame + 0xc)) + 4;
      pcVar15 = pcVar1;
      uVar12 = F_00bd3ff0(this GEN_EDX_ARG);
      pvVar8 = (undefined *)F_00bd61c0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x18)),uVar12,uVar11,iVar7,pcVar15);
      if ((*(undefined * PTR32 *)(gen_frame + 0x14)) != (undefined *)0x0) {
        if (*pcVar1 != '\0') {
          pvVar8 = (undefined *)F_005d6000((*(undefined * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG);
          bVar6 = F_005ef7d0(pvVar8 GEN_EDX_ARG,*(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x14),(*(undefined4 *)(gen_frame + 0x18)));
          return CONCAT31(extraout_var_03,bVar6);
        }
        bVar6 = F_005e3700((*(undefined * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x18)));
        return CONCAT31(extraout_var_04,bVar6);
      }
    }
    break;
  default: ;
    goto switchD_00bd6304_default;
  }
switchD_00bd6304_default: ;
  return (uint)pvVar8;
}

/* ref: FUN_00bd6700 */
GEN_LIB GEN_FRAME float10 F_00bd6700(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbd6700u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00bd6720 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd6720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd6720u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x88);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x10f284c));
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x78))(piVar1 GEN_EDX_FWD,500);
    *(undefined4 *)((int)this + 0x88) = 0;
  }
  uVar2 = F_00bd2e60(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::SoundSeClip::vf25 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd6760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xbd6760u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x20))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::SoundSeClip::vf26 */
GEN_LIB GEN_NOFRAME unsigned int F_00bd6770(void)
{
  GEN_ENTER(0xbd6770u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Scheduler::Clip::SoundSeClip::vf8 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00bd6780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd6780u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x88);
  this[0x8c] = (undefined1)0x0;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x7c))(piVar1 GEN_EDX_FWD);
    if ((char)uVar2 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x88) + 0x50))))(*(int * PTR32 *)(this + 0x88) GEN_EDX_ARG,500);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x88) + 0x78))))(*(int * PTR32 *)(this + 0x88) GEN_EDX_ARG,500);
    *(undefined4 *)(this + 0x88) = 0;
  }
  return;
}

/* ref: Client::System::Scheduler::Clip::SoundSeClip::vf7 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00bd67d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd67d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  if (((*(int *)(this + 0x2c) == 0x29) || (*(int *)(this + 0x2c) == 0x33)) &&
     (piVar1 = *(int * PTR32 *)(this + 0x88), piVar1 != (int *)0x0)) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x7c))(piVar1 GEN_EDX_FWD);
    if (((char)uVar2 == '\0') &&
       (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x88) + 0x14))))(*(int * PTR32 *)(this + 0x88) GEN_EDX_ARG),
       (char)uVar2 == '\0')) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x88) + 0x78))))(*(int * PTR32 *)(this + 0x88) GEN_EDX_ARG,500);
      *(undefined4 *)(this + 0x88) = 0;
      return 1;
    }
    return 0;
  }
  return 1;
}

/* ref: Client::System::Scheduler::Clip::SoundSeClip::vf35 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00bd6830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbd6830u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  if ((param_1 != 2) && (*(int *)(this + 0x88) != 0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x88) + 0x58))))(*(int * PTR32 *)(this + 0x88) GEN_EDX_FWD,param_2,5);
  }
  return;
}

/* ref: FUN_00bd6860 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd6860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd6860u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int * piVar5;
  undefined * this_00;
  
  iVar4 = *(int *)((int)this + 0x74);
  if (iVar4 == 0) {
    piVar5 = *(int * PTR32 *)((int)this + 0x70);
    if (piVar5 == (int *)0x0) {
      iVar4 = *(int *)((int)this + 0x6c);
      if (iVar4 == 0) {
        if (*(int *)((int)this + 4) != 0) {
          *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
        }
        iVar4 = *(int *)((int)this + 0x6c);
        if (iVar4 != 0) goto LAB_00bd688d;
      }
      else {
LAB_00bd688d: ;
        *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(iVar4 + 4);
      }
      piVar5 = *(int * PTR32 *)((int)this + 0x70);
      if (piVar5 != (int *)0x0) goto LAB_00bd689a;
    }
    else {
LAB_00bd689a: ;
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 100))(piVar5 GEN_EDX_FWD);
      *(uint *)((int)this + 0x74) = uVar3;
    }
    iVar4 = *(int *)((int)this + 0x74);
    if (iVar4 != 0) goto LAB_00bd68ab;
  }
  else {
LAB_00bd68ab: ;
    bVar2 = F_00bbad00((undefined *)(iVar4 + 0x124) GEN_EDX_ARG);
    if (bVar2 != 0) {
      uVar3 = F_00bbaf90((undefined *)(iVar4 + 0x124) GEN_EDX_ARG);
      return uVar3;
    }
  }
  this_00 = *(undefined * PTR32 *)((int)this + 0x78);
  if (this_00 != (undefined *)0x0) goto LAB_00bd6900;
  iVar4 = *(int *)((int)this + 0x6c);
  if (iVar4 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar4 = *(int *)((int)this + 0x6c);
    if (iVar4 != 0) goto LAB_00bd68e7;
  }
  else {
LAB_00bd68e7: ;
    uVar1 = *(undefined4 *)(iVar4 + 0x20);
    *(undefined4 *)((int)this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)((int)this + 0x78);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
LAB_00bd6900: ;
  uVar3 = F_00bbaf90(this_00 GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00bd6910 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd6910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd6910u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  uint in_EAX = 0;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x88);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x7c))(piVar1 GEN_EDX_FWD);
    if (((char)uVar2 == '\0') &&
       (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x88) + 0x14))))(*(int * PTR32 *)((int)this + 0x88) GEN_EDX_ARG),
       (char)uVar2 == '\0')) {
      return uVar2;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x88) + 0x50))))(*(int * PTR32 *)((int)this + 0x88) GEN_EDX_ARG,param_1);
    in_EAX = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x88) + 0x78))))(*(int * PTR32 *)((int)this + 0x88) GEN_EDX_ARG,500);
    *(undefined4 *)((int)this + 0x88) = 0;
  }
  return in_EAX;
}

/* ref: Client::System::Scheduler::Clip::SoundSeClip::vf1 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00bd6970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd6970u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  float10 fVar3;
  byte bVar4;
  uint uVar5;
  
  if (this[8] != (undefined1)0x0) {
    return 1;
  }
  bVar4 = F_00bd1fe0(this GEN_EDX_FWD);
  if (((bVar4 == 0) && (*(int *)(this + 0x2c) == 0x33)) && (this[0x8c] == (undefined1)0x0)) {
    if (*(int *)(this + 0x88) == 0) {
      iVar1 = *(int *)(this + 0x24);
      fVar3 = (float10)0;
      uVar5 = F_004e96c0(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f8) GEN_EDX_ARG,*(int *)(iVar1 + 0xc) + iVar1,
                           (float)(float10)1,0,(float)fVar3,(float)fVar3,(float)fVar3,
                           (float)(float10)1,0,*(undefined4 *)(iVar1 + 0x10),0);
      if (uVar5 != 0) {
        *(uint *)(this + 0x88) = uVar5;
      }
    }
    piVar2 = *(int * PTR32 *)(this + 0x88);
    if (piVar2 != (int *)0x0) {
      uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2 GEN_EDX_ARG);
      if ((char)uVar5 == '\0') {
        this[0x8c] = (undefined1)0x1;
        bVar4 = F_00bd2590((undefined *)this GEN_EDX_ARG);
        return bVar4;
      }
      uVar5 = F_0054d950(this GEN_EDX_ARG);
      if ((uVar5 != 0) && ((*(uint *)(uVar5 + 0x2c) >> 4 & 1) != 0)) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x88) + 0x78))))(*(int * PTR32 *)(this + 0x88) GEN_EDX_ARG,500);
        *(undefined4 *)(this + 0x88) = 0;
        F_00b61910(this GEN_EDX_ARG);
        return 1;
      }
      return 0;
    }
  }
  bVar4 = F_00bd2590((undefined *)this GEN_EDX_ARG);
  return bVar4;
}

/* ref: Client::System::Scheduler::Clip::SoundSeClip::vf34 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00bd6a60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd6a60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  
  if (((param_1 == 9) || (param_1 == 5)) || (param_1 == 3)) {
    if (*(int *)(this + 0x2c) == 0x29) {
      bVar1 = *((byte *)GEN_TOP((*(int *)(this + 0x24) + 0x12))) & 1;
    }
    else {
      if (*(int *)(this + 0x2c) != 0x33) {
        return 1;
      }
      bVar1 = *((byte *)GEN_TOP((*(int *)(this + 0x24) + 0x14))) & 2;
    }
    if (bVar1 != 0) {
      F_00bd6910(this GEN_EDX_FWD,0x1e);
    }
  }
  return 1;
}

/* ref: FUN_00bd6ab0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00bd6ab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd6ab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int * piVar1;
  undefined4 * puVar2;
  undefined * this_00;
  
  if (*(int *)((int)this + 0x2c) == 0x29) {
    this_00 = (undefined *)F_00bd6860(this GEN_EDX_FWD);
  }
  else {
    if (*(int *)((int)this + 0x2c) != 0x33) {
      return 1;
    }
    if ((*((byte *)GEN_TOP((*(int *)((int)this + 0x24) + 0x14))) & 1) == 0) {
      return 0;
    }
    piVar1 = (int *)F_00bd3ff0(this GEN_EDX_ARG);
    if (piVar1 != (int *)0x0) {
      puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG)));
      *param_1 = *puVar2;
      param_1[1] = puVar2[1];
      param_1[2] = puVar2[2];
      return 1;
    }
    this_00 = (undefined *)F_00bd4050(this GEN_EDX_ARG);
  }
  if (this_00 == (undefined *)0x0) {
    F_004e78b0(param_1,param_1 + 1,param_1 + 2);
    return 1;
  }
  puVar2 = (undefined4 *)F_00a5feb0(this_00 GEN_EDX_ARG);
  *param_1 = *puVar2;
  param_1[1] = puVar2[1];
  param_1[2] = puVar2[2];
  return 1;
}

/* ref: FUN_00bd6b60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd6b60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd6b60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  uint in_EAX = 0;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x88);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x7c))(piVar1 GEN_EDX_FWD);
    if (((char)uVar2 == '\0') &&
       (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x88) + 0x14))))(*(int * PTR32 *)((int)this + 0x88) GEN_EDX_ARG),
       (char)uVar2 == '\0')) {
      return uVar2;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x88) + 0x50))))(*(int * PTR32 *)((int)this + 0x88) GEN_EDX_ARG,param_1);
    in_EAX = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x88) + 0x78))))(*(int * PTR32 *)((int)this + 0x88) GEN_EDX_ARG,500);
    *(undefined4 *)((int)this + 0x88) = 0;
  }
  return in_EAX;
}

/* ref: FUN_00bd6bc0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd6bc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd6bc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  bVar1 = F_00bd6ab0(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)));
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 != 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x88) + 0x44))))(*(int * PTR32 *)((int)this + 0x88) GEN_EDX_ARG);
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::SoundSeClip::vf33 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd6c20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd6c20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  byte bVar5;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  int iVar6;
  uint uVar7;
  undefined3 extraout_var_01 = 0;
  undefined * this_00;
  
  bVar5 = F_00bd1fe0(this GEN_EDX_FWD);
  this_00 = ((undefined *)GEN_TOP(CONCAT31(extraout_var,bVar5)));
  if (bVar5 == 0) {
    bVar5 = F_00bd6ab0(this GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)));
    (*(byte *)(gen_frame + 0x1f)) = bVar5;
    this_00 = *(undefined * PTR32 *)(this + 0x2c);
    if (this_00 == (undefined *)0x29) {
      bVar5 = F_00bd2480(this GEN_EDX_ARG);
      this_00 = ((undefined *)GEN_TOP(CONCAT31(extraout_var_01,bVar5)));
      if (bVar5 == 0) {
        this_00 = (undefined *)F_00bd6860(this GEN_EDX_ARG);
        if ((*(int *)(this + 0x88) == 0) && (this_00 != (undefined *)0x0)) {
          iVar3 = *(int *)(this + 0x24);
          uVar7 = F_00aa2e00(this_00 GEN_EDX_ARG,(uint)*(ushort *)(iVar3 + 0xe),(uint)*(ushort *)(iVar3 + 0xc)
                               ,0,0,(uint)*(ushort *)(iVar3 + 0x10));
          *(uint *)(this + 0x88) = uVar7;
          this_00 = (undefined *)0x0;
          if (uVar7 != 0) {
            this_00 = (undefined *)F_00bd6bc0(this GEN_EDX_ARG);
          }
        }
      }
    }
    else if (this_00 == (undefined *)0x33) {
      bVar5 = F_00bd2480(this GEN_EDX_ARG);
      this_00 = ((undefined *)GEN_TOP(CONCAT31(extraout_var_00,bVar5)));
      if (bVar5 == 0) {
        piVar1 = *(int * PTR32 *)(this + 0x88);
        uVar2 = *(undefined4 *)(REFG(int, 0x137104c) + 0x25f8);
        iVar3 = *(int *)(this + 0x24);
        (*(undefined4 *)(gen_frame + 0x18)) = uVar2;
        if (piVar1 != (int *)0x0) {
          ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x78))(piVar1 GEN_EDX_ARG,500);
          fVar4 = (float10)1;
          iVar6 = *(int *)(iVar3 + 0xc) + iVar3;
          if ((*(byte *)(gen_frame + 0x1f)) != 0) {
            uVar7 = F_004e95a0((*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,iVar6,(float)fVar4,0,(*(float *)(gen_frame + 0x0)),(*(float *)(gen_frame + 0x4)),(*(float *)(gen_frame + 0x8)),
                                 (float)fVar4,0,*(undefined4 *)(iVar3 + 0x10),0);
            *(uint *)(this + 0x88) = uVar7;
            return uVar7;
          }
          uVar7 = F_004e9a80((*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,iVar6,(float)fVar4,*(undefined4 *)(iVar3 + 0x10),0,0);
          *(uint *)(this + 0x88) = uVar7;
          return uVar7;
        }
        fVar4 = (float10)1;
        iVar6 = *(int *)(iVar3 + 0xc) + iVar3;
        if ((*(byte *)(gen_frame + 0x1f)) == 0) {
          uVar7 = F_004e9a80(uVar2 GEN_EDX_ARG,iVar6,(float)fVar4,*(undefined4 *)(iVar3 + 0x10),0,0);
        }
        else {
          uVar7 = F_004e95a0(uVar2 GEN_EDX_ARG,iVar6,(float)fVar4,0,(*(float *)(gen_frame + 0x0)),(*(float *)(gen_frame + 0x4)),(*(float *)(gen_frame + 0x8)),(float)fVar4,0,
                               *(undefined4 *)(iVar3 + 0x10),0);
        }
        this_00 = (undefined *)0x0;
        if (uVar7 != 0) {
          *(uint *)(this + 0x88) = uVar7;
          return uVar7;
        }
      }
    }
  }
  return (uint)this_00;
}

/* ref: Client::System::Scheduler::Clip::SoundSeClip::vf30 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00bd6de0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbd6de0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  
  if (*(int *)(this + 0x88) != 0) {
    bVar1 = F_00bd6ab0(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)));
    if (bVar1 != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x88) + 0x44))))(*(int * PTR32 *)(this + 0x88) GEN_EDX_ARG);
    }
  }
  return;
}

/* ref: FUN_00bd6e50 */
GEN_LIB GEN_FRAME float10 F_00bd6e50(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbd6e50u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: Client::System::Scheduler::Clip::SoundClip::vf25 */
GEN_LIB GEN_NOFRAME unsigned int F_00bd6e70(void)
{
  GEN_ENTER(0xbd6e70u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Scheduler::Clip::SoundClip::vf33 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd6e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd6e80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  char cVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  uint uVar5;
  undefined3 extraout_var_00 = 0;
  undefined * pvVar6;
  int iVar7;
  undefined4 uVar8;
  
  uVar4 = *(int *)(this + 0x2c) - 0x3c;
  switch((unsigned int)(uintptr_t)(uVar4)) {
  case 0: ;
    bVar3 = F_00bd2480(this GEN_EDX_FWD);
    uVar4 = CONCAT31(extraout_var,bVar3);
    if (bVar3 == 0) {
      iVar2 = *(int *)(this + 0x24);
      uVar4 = *(uint *)(iVar2 + 0x14);
      if (*(int *)(iVar2 + 0xc) == 1) {
        uVar4 = F_00ab4c70();
      }
      uVar5 = F_00bd3f80(this GEN_EDX_ARG);
      *(uint *)(uVar5 + 0x100) = uVar4;
      cVar1 = *(char *)(iVar2 + 0x10);
      uVar5 = F_00bd3f80(this GEN_EDX_ARG);
      *(bool *)(uVar5 + 0x104) = cVar1 != '\0';
      if (*(char *)(iVar2 + 0x11) == '\x01') {
        F_00ab4b90(100);
        F_00ab6dc0();
      }
      uVar4 = F_00ab6d50(uVar4,1,*(undefined4 *)(iVar2 + 0x18),*(undefined4 *)(iVar2 + 0x18),0,0);
      return uVar4;
    }
    break;
  case 1: ;
    iVar2 = *(int *)(this + 0x24);
    uVar4 = F_004e79c0(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f8) GEN_EDX_ARG,(int)*(short *)(iVar2 + 0xc),
                         *(float *)(iVar2 + 0x10),(int)*(short *)(iVar2 + 0xe));
    return uVar4;
  case 2: ;
    bVar3 = F_00bd2480(this GEN_EDX_ARG);
    uVar4 = CONCAT31(extraout_var_00,bVar3);
    if (bVar3 == 0) {
      iVar2 = *(int *)(this + 0x24);
      iVar7 = 0;
      if (0 < *(int *)(iVar2 + 0x10)) {
        do {
          uVar8 = *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0xc) + iVar7 * 4 + iVar2)));
          pvVar6 = (undefined *)F_00bd3f80(this GEN_EDX_ARG);
          pvVar6 = (undefined *)F_00b607f0(pvVar6 GEN_EDX_ARG,uVar8);
          uVar4 = 0;
          if (pvVar6 != (undefined *)0x0) {
            uVar4 = *(uint *)((int)pvVar6 + 0x2c);
            if (uVar4 == 0x33) {
              uVar4 = *(uint *)(iVar2 + 0x14);
              if (uVar4 == 0) {
                uVar4 = F_00bd6b60(pvVar6 GEN_EDX_ARG,*(undefined4 *)(iVar2 + 0x18));
              }
              else if (uVar4 == 1) {
                uVar4 = F_00bd6910(pvVar6 GEN_EDX_ARG,*(undefined4 *)(iVar2 + 0x18));
              }
            }
            else if (uVar4 == 0x3c) {
              uVar4 = F_00ab6dc0();
            }
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(iVar2 + 0x10));
        return uVar4;
      }
    }
    break;
  case 3: ;
    iVar2 = *(int *)(this + 0x24);
    uVar4 = F_00bd40a0(this GEN_EDX_ARG);
    if (uVar4 != 0) {
      *(bool *)(uVar4 + 0x2ea7) = *(char *)(iVar2 + 0xc) != '\0';
    }
  }
  return uVar4;
}

/* ref: FUN_00bd7000 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd7000(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbd7000u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *(uint *)(in_ecx + 0x100) = param_2;
  return param_2;
}

/* ref: FUN_00bd7010 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00bd7010(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbd7010u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *(byte *)(in_ecx + 0x104) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00bd7020 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd7020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd7020u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*(int *)((int)this + 0xc) + param_1 * 4 + (int)this)));
}

/* ref: FUN_00bd7040 */
GEN_LIB GEN_FRAME float10 F_00bd7040(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbd7040u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: Client::System::Scheduler::Clip::CutVFXTriggerClip::vf33 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd7060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd7060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  undefined * this_00;
  undefined * this_01;
  uint uVar2;
  int iVar3;
  
  iVar1 = *(int *)(this + 0x24);
  this_00 = (undefined *)F_00bd3f80(this GEN_EDX_FWD);
  iVar3 = 0;
  if (0 < *(int *)(iVar1 + 0x10)) {
    do {
      this_01 = (undefined *)F_00b607f0(this_00 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0xc) + iVar3 * 4 + iVar1))));
      if ((this_01 != (undefined *)0x0) &&
         ((*(int *)((int)this_01 + 0x2c) == 9 || (*(int *)((int)this_01 + 0x2c) == 0x27)))) {
        F_00be2510(this_01 GEN_EDX_ARG,*(undefined4 *)(iVar1 + 0x14));
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(iVar1 + 0x10));
  }
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xa0))(this GEN_EDX_ARG,1);
  return uVar2;
}

/* ref: FUN_00bd70d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd70d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd70d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*(int *)((int)this + 0xc) + param_1 * 4 + (int)this)));
}

/* ref: Client::System::Scheduler::Clip::RandomSyncClip::vf26 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd70f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd70f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *(undefined4 *)(in_ecx + 0x88) = 0;
  *(ushort *)(in_ecx + 0x7c) = *(ushort *)(in_ecx + 0x7c) & 0xffef;
  return 0xffef;
}

/* ref: Client::System::Scheduler::Clip::RandomSyncClip::vf33 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd7110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd7110u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  undefined4 in_EAX = 0;
  uint extraout_EAX = 0;
  uint uVar2;
  float fVar3;
  
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),(byte)this[0x7c] >> 4);
  if (((byte)this[0x7c] >> 4 & 1) == 0) {
    iVar1 = *(int *)(this + 0x24);
    fVar3 = F_00a4b7d0();
    *(float *)(this + 0x88) =
         ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*(float *)(iVar1 + 0x10) *
                                                  (float10)fVar3))) + (float10)*(float *)(iVar1 + 0xc)
                                 ))) * (float10)*(double *)&REFG(undefined, 0x10c3f40))));
    *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
    uVar2 = extraout_EAX;
  }
  if (0.0 < *(float *)(this + 0x88)) {
    *(float *)(this + 0x88) =
         ((float)GEN_TOF(((float10)*(float *)(this + 0x88) - (float10)*(float *)(REFG(int, 0x137104c) + 0x1198))));
    uVar2 = F_00bd30b0(this GEN_EDX_ARG,0);
    return uVar2;
  }
  *(undefined4 *)(this + 0x88) = 0;
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffef;
  return uVar2;
}

/* ref: FUN_00bd71b0 */
GEN_LIB GEN_FRAME float10 F_00bd71b0(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbd71b0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: Client::System::Scheduler::Clip::CutActionClip::vf26 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd71f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd71f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(this + 0x78);
  if (uVar4 == 0) {
    iVar3 = *(int *)(this + 0x6c);
    if (iVar3 == 0) {
      if (*(int *)(this + 4) != 0) {
        *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
      }
      iVar3 = *(int *)(this + 0x6c);
      if (iVar3 != 0) goto LAB_00bd7215;
    }
    else {
LAB_00bd7215: ;
      uVar1 = *(undefined4 *)(iVar3 + 0x20);
      *(undefined4 *)(this + 0x78) = uVar1;
      F_00b595f0(uVar1);
    }
    uVar4 = *(uint *)(this + 0x78);
    if (uVar4 == 0) goto LAB_00bd7249;
  }
  if ((*(char *)(uVar4 + 0x12) == '\0') &&
     (piVar2 = *(int * PTR32 *)(uVar4 + 4), uVar4 = 0, piVar2 != (int *)0x0)) {
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xa4))(piVar2 GEN_EDX_ARG,0);
  }
LAB_00bd7249: ;
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffef;
  return uVar4;
}

/* ref: Client::System::Scheduler::Clip::CutActionClip::vf33 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd7260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd7260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  __declspec(align(16)) undefined1 gen_frame[0x500];
  float fVar1;
  float fVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  ushort uVar5;
  int iVar6;
  undefined4 * puVar7;
  uint uVar8;
  int * piVar9;
  undefined4 * puVar10;
  uint uVar11;
  float * pfVar12;
  int iVar13;
  undefined * pCVar14;
  int iVar15;
  int * piVar16;
  int iVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  undefined8 uVar21;
  
  (*(uint *)(gen_frame + 0x4ec)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4f0);
  pCVar14 = *(undefined * PTR32 *)(this + 0x78);
  if (pCVar14 == (undefined *)0x0) {
    iVar6 = *(int *)(this + 0x6c);
    if (iVar6 == 0) {
      if (*(int *)(this + 4) != 0) {
        *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
      }
      iVar6 = *(int *)(this + 0x6c);
      if (iVar6 != 0) goto LAB_00bd72b2;
    }
    else {
LAB_00bd72b2: ;
      uVar4 = *(undefined4 *)(iVar6 + 0x20);
      *(undefined4 *)(this + 0x78) = uVar4;
      F_00b595f0(uVar4);
    }
    pCVar14 = *(undefined * PTR32 *)(this + 0x78);
    if (pCVar14 == (undefined *)0x0) goto LAB_00bd76ad;
  }
  if (pCVar14[0x12] == (undefined1)0x0) {
    piVar16 = *(int * PTR32 *)(pCVar14 + 4);
  }
  else {
    piVar16 = (int *)0x0;
  }
  if (piVar16 != (int *)0x0) {
    puVar7 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar16 + 0x4c))(piVar16 GEN_EDX_ARG)));
    pCVar14 = (undefined *)0x0;
    if (puVar7 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar16 + 0xa0))(piVar16 GEN_EDX_ARG);
      iVar6 = *(int *)(this + 0x24);
      uVar8 = F_00ab1ed0(*(undefined4 *)(iVar6 + 0xc));
      pCVar14 = (undefined *)0x0;
      if (uVar8 != 0) {
        if (*(char *)(iVar6 + 0x10) == '\0') {
          F_00c48350(&(*(undefined8 *)(gen_frame + 0x18)),0,0x4b0);
          (*(undefined2 *)(gen_frame + 0x20)) = *(undefined2 *)(iVar6 + 0xc);
          (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)(iVar6 + 0xc);
          (*(undefined2 *)(gen_frame + 0x22)) = 0x100;
          uVar5 = F_0054f090(GEN_TOF(gen_bits2f(puVar7[0x2c])));
          (*(ushort *)(gen_frame + 0x34)) = uVar5;
          (*(char *)(gen_frame + 0x36)) = *(char *)(iVar6 + 0x18);
          (*(int *)(gen_frame + 0xc)) = 0;
          if ('\0' < *(char *)(iVar6 + 0x18)) {
            do {
              iVar17 = *(int *)(iVar6 + 0x14) + (*(int *)(gen_frame + 0xc)) * 8;
              piVar16 = (int *)F_0052ed20(REFG(undefined4, 0x1375b00) GEN_EDX_ARG,*(undefined4 *)(iVar17 + iVar6),0,0);
              (*(undefined4 * PTR32 *)(gen_frame + 0x14)) = (undefined4 *)0x0;
              if (piVar16 != (int *)0x0) {
                (*(undefined4 * PTR32 *)(gen_frame + 0x14)) = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar16 + 0x4c))(piVar16 GEN_EDX_ARG)));
              }
              iVar15 = (*(int *)(gen_frame + 0xc)) * 0x40;
              if ((*(undefined4 * PTR32 *)(gen_frame + 0x14)) == (undefined4 *)0x0) {
                ((undefined4 *)(gen_frame + 0x440))[(int)((*(int *)(gen_frame + 0xc)) * 2)] = 0xe0000000;
                ((undefined4 *)(gen_frame + 0x440))[(int)((*(int *)(gen_frame + 0xc)) * 2 + 1)] = 0xffffffff;
              }
              else {
                if ((*(int *)(gen_frame + 0xc)) == 0) {
                  uVar21 = ((gen_lcode *)*(gen_code32 *)*(*(undefined4 * PTR32 *)(gen_frame + 0x14)))((*(undefined4 * PTR32 *)(gen_frame + 0x14)));
                  (*(undefined8 *)(gen_frame + 0x18)) = uVar21;
                  pfVar12 = ((float *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar16 + 0xc))(piVar16 GEN_EDX_ARG)));
                  fVar18 = (float10)*(double *)&REFG(undefined, 0x10912a8);
                  fVar19 = (float10)*(double *)&REFG(undefined, 0x1088118);
                  fVar20 = (float10)*(double *)&REFG(undefined, 0x10a3960);
                  iVar13 = (int)((((float10)*pfVar12 + fVar18) * fVar19) / fVar20);
                  if (iVar13 < 0x10000) {
                    if (iVar13 < 0) {
                      iVar13 = 0;
                    }
                  }
                  else {
                    iVar13 = 0xffff;
                  }
                  (*(undefined2 *)(gen_frame + 0x4c0)) = (short)iVar13;
                  iVar13 = (int)((((float10)pfVar12[1] + fVar18) * fVar19) / fVar20);
                  if (iVar13 < 0x10000) {
                    if (iVar13 < 0) {
                      iVar13 = 0;
                    }
                  }
                  else {
                    iVar13 = 0xffff;
                  }
                  (*(undefined2 *)(gen_frame + 0x4c2)) = (short)iVar13;
                  iVar13 = (int)((fVar19 * ((float10)pfVar12[2] + fVar18)) / fVar20);
                  if (iVar13 < 0x10000) {
                    if (iVar13 < 0) {
                      iVar13 = 0;
                    }
                  }
                  else {
                    iVar13 = 0xffff;
                  }
                  (*(undefined2 *)(gen_frame + 0x4c4)) = (short)iVar13;
                }
                uVar21 = ((gen_lcode *)*(gen_code32 *)*(*(undefined4 * PTR32 *)(gen_frame + 0x14)))((*(undefined4 * PTR32 *)(gen_frame + 0x14)));
                ((undefined4 *)(gen_frame + 0x440))[(int)((*(int *)(gen_frame + 0xc)) * 2)] = (int)uVar21;
                ((undefined4 *)(gen_frame + 0x440))[(int)((*(int *)(gen_frame + 0xc)) * 2 + 1)] = (int)((ulonglong)uVar21 >> 0x20);
                switch((unsigned int)(uintptr_t)(*(undefined4 *)(iVar17 + iVar6 + 4))) {
                case 0: ;
                case 1: ;
                  ((undefined1 *)(gen_frame + 0x5c))[(int)(iVar15)] = 0;
                  break;
                case 2: ;
                case 3: ;
                  ((undefined1 *)(gen_frame + 0x5c))[(int)(iVar15)] = 3;
                  break;
                case 4: ;
                  ((undefined1 *)(gen_frame + 0x5c))[(int)(iVar15)] = 5;
                  break;
                case 5: ;
                  ((undefined1 *)(gen_frame + 0x5c))[(int)(iVar15)] = 7;
                }
              }
              (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 1;
            } while ((*(int *)(gen_frame + 0xc)) < (*(char *)(gen_frame + 0x36)));
          }
          F_00ac6ce0(puVar7,&(*(undefined8 *)(gen_frame + 0x18)));
        }
        else {
          uVar3 = *(undefined2 *)(iVar6 + 0xc);
          iVar17 = *(int *)(iVar6 + 0x18);
          (*(uint *)(gen_frame + 0x4c8)) = 0;
          (*(undefined4 *)(gen_frame + 0x4cc)) = 0;
          (*(float *)(gen_frame + 0x4d0)) = 0.0;
          (*(uint *)(gen_frame + 0x4d4)) = 0;
          (*(undefined4 *)(gen_frame + 0x4d8)) = 0;
          (*(undefined4 *)(gen_frame + 0x4dc)) = 0;
          (*(undefined4 *)(gen_frame + 0x4e0)) = 0;
          (*(undefined4 *)(gen_frame + 0x4e4)) = 0;
          uVar4 = *(undefined4 *)(iVar6 + 0xc);
          (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x4c8)) + 0)) = uVar3;
          (*(undefined4 *)(gen_frame + 0x4cc)) = uVar4;
          (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x4c8)) + 2)) = 1;
          (*(uint *)(gen_frame + 0x4c8)) = (uint)CONCAT12(1,uVar3);
          if ((iVar17 == 0) ||
             (piVar9 = (int *)F_0052ed20(REFG(undefined4, 0x1375b00) GEN_EDX_ARG,
                                           *((undefined4 *)GEN_TOP((*(int *)(iVar6 + 0x14) + iVar6))),0,0),
             piVar9 == (int *)0x0)) {
            piVar9 = piVar16;
          }
          puVar10 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar9 + 0x4c))(piVar9 GEN_EDX_ARG)));
          uVar11 = ((GEN_TCODE *)*(gen_code32 *)*puVar10)(puVar10 GEN_EDX_ARG);
          (*(uint *)(gen_frame + 0x4d4)) = uVar11;
          pfVar12 = ((float *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar16 + 0xc))(piVar16 GEN_EDX_ARG)));
          fVar1 = pfVar12[1];
          fVar2 = pfVar12[2];
          uVar11 = F_006033b0(*pfVar12);
          (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x4e0)) + 0)) = (short)uVar11;
          (*(undefined4 *)(gen_frame + 0x4e0)) = CONCAT22((*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x4e0)) + 2)),(short)uVar11);
          uVar11 = F_006033b0(fVar1);
          (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x4e0)) + 2)) = (short)uVar11;
          (*(undefined4 *)(gen_frame + 0x4e0)) = CONCAT22((short)uVar11,(undefined2)(*(undefined4 *)(gen_frame + 0x4e0)));
          uVar11 = F_006033b0(fVar2);
          (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x4e4)) + 0)) = (short)uVar11;
          (*(undefined4 *)(gen_frame + 0x4e4)) = CONCAT22((*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x4e4)) + 2)),(short)uVar11);
          puVar10 = &(*(uint *)(gen_frame + 0x4c8));
          (*(float *)(gen_frame + 0x4d0)) = ((float)GEN_TOF(((float10)*(ushort *)(uVar8 + 0x14) / (float10)REFG(double, 0x10944b8))));
          uVar8 = ((GEN_TCODE *)*(gen_code32 *)*puVar7)(puVar7 GEN_EDX_ARG);
          F_00a52d10(uVar8,puVar10);
        }
        *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
        pCVar14 = this;
      }
    }
  }
LAB_00bd76ad: ;
  F_00c47745((*(uint *)(gen_frame + 0x4ec)) ^ (uint)(uint)(gen_frame + 0x4f0) GEN_EDX_ARG);
  return (uint)pCVar14;
}

/* ref: FUN_00bd76e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd76e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd76e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(int *)((int)this + 0x14) + param_1 * 8 + (int)this;
}

/* ref: Client::System::Scheduler::Clip::EyeBlinkClip::vf33 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd7700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd7700u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(this + 0x78);
  if (iVar2 != 0) goto LAB_00bd773e;
  iVar2 = *(int *)(this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar2 = *(int *)(this + 0x6c);
    if (iVar2 != 0) goto LAB_00bd7725;
  }
  else {
LAB_00bd7725: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  iVar2 = *(int *)(this + 0x78);
  if (iVar2 == 0) {
    return 0;
  }
LAB_00bd773e: ;
  uVar3 = 0;
  if (*(int *)(iVar2 + 0x44c) != 0) {
    uVar3 = F_00a0c450(*(int *)(iVar2 + 0x44c) GEN_EDX_ARG,
                         (uint)(*((short *)GEN_TOP((*(int *)(this + 0x24) + 0xc))) == 1));
  }
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::EyeBlinkClip::vf25 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd7770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xbd7770u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x68))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::System::Scheduler::Clip::EyeBlinkClip::vf26 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd7780(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd7780u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *(uint *)(in_ecx + 0x78);
  uVar4 = uVar3;
  if (uVar3 != 0) goto LAB_00bd77be;
  iVar2 = *(int *)(in_ecx + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)(in_ecx + 4) != 0) {
      *(undefined4 *)(in_ecx + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(in_ecx + 4) + 4)));
    }
    iVar2 = *(int *)(in_ecx + 0x6c);
    uVar3 = 0;
    if (iVar2 != 0) goto LAB_00bd77a9;
  }
  else {
LAB_00bd77a9: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(in_ecx + 0x78) = uVar1;
    uVar3 = F_00b595f0(uVar1);
  }
  uVar4 = *(uint *)(in_ecx + 0x78);
LAB_00bd77be: ;
  if ((uVar4 != 0) && (*(int *)(uVar4 + 0x44c) != 0)) {
    uVar3 = F_00a0c450(*(int *)(uVar4 + 0x44c) GEN_EDX_ARG,1);
  }
  return uVar3;
}

/* ref: FUN_00bd77f0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd77f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd77f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x78);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x10f2f14));
  if (this_00 != (undefined *)0x0) goto LAB_00bd7834;
  iVar2 = *(int *)((int)this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar2 = *(int *)((int)this + 0x6c);
    if (iVar2 != 0) goto LAB_00bd781f;
  }
  else {
LAB_00bd781f: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)((int)this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)((int)this + 0x78);
LAB_00bd7834: ;
  if ((this_00 != (undefined *)0x0) && (*(int *)((int)this + 0x24) != 0)) {
    F_00bc3fb0(this_00 GEN_EDX_ARG,this,*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x24) + 0xc))));
  }
  uVar3 = F_00bd2e60(this GEN_EDX_ARG);
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::PinningClip::vf25 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd7860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd7860u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  int iVar2;
  undefined * this_00;
  uint uVar3;
  
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 != (undefined *)0x0) goto LAB_00bd789a;
  iVar2 = *(int *)(this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar2 = *(int *)(this + 0x6c);
    if (iVar2 != 0) goto LAB_00bd7885;
  }
  else {
LAB_00bd7885: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)(this + 0x78);
LAB_00bd789a: ;
  if (this_00 != (undefined *)0x0) {
    uVar3 = F_00bc5140(this_00 GEN_EDX_ARG);
    return uVar3;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::PinningClip::vf33 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd78b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd78b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 uVar1;
  int iVar2;
  undefined * pvVar3;
  undefined * this_00;
  
  pvVar3 = *(undefined * PTR32 *)(this + 0x78);
  this_00 = pvVar3;
  if (pvVar3 != (undefined *)0x0) goto LAB_00bd78ee;
  iVar2 = *(int *)(this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar2 = *(int *)(this + 0x6c);
    pvVar3 = (undefined *)0x0;
    if (iVar2 != 0) goto LAB_00bd78d9;
  }
  else {
LAB_00bd78d9: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar1;
    pvVar3 = (undefined *)F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)(this + 0x78);
LAB_00bd78ee: ;
  if (this_00 != (undefined *)0x0) {
    pvVar3 = (undefined *)0x0;
    if (*(int *)(this + 0x24) != 0) {
      pvVar3 = (undefined *)F_00bc3fa0(this_00 GEN_EDX_ARG,this,*((undefined4 *)GEN_TOP((*(int *)(this + 0x24) + 0xc))));
    }
  }
  return (uint)pvVar3;
}

/* ref: Client::System::Scheduler::Clip::PinningClip::vf34 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00bd7910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd7910u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 uVar1;
  int in_ecx;
  byte bVar2;
  int iVar3;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 != (undefined *)0x0) goto LAB_00bd7954;
  iVar3 = *(int *)(this + 0x6c);
  if (iVar3 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar3 = *(int *)(this + 0x6c);
    if (iVar3 != 0) goto LAB_00bd793b;
  }
  else {
LAB_00bd793b: ;
    uVar1 = *(undefined4 *)(iVar3 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 == (undefined *)0x0) {
    return 1;
  }
LAB_00bd7954: ;
  iVar3 = *(int *)(this + 0x24);
  if (((param_1 == 6) && (in_ecx = *(int *)((int)this_00 + 0x448), in_ecx != 0)) &&
     (bVar2 = F_00a0b720(in_ecx GEN_EDX_ARG), bVar2 != 0)) {
    F_00a0b730(in_ecx GEN_EDX_ARG,*(undefined4 *)(iVar3 + 0xc));
    return 0;
  }
  F_00bc3fb0(this_00 GEN_EDX_ARG,this,*(undefined4 *)(iVar3 + 0xc));
  return 1;
}

/* ref: Client::System::Scheduler::Clip::AutoShakeBaseClip::vf25 */
GEN_LIB GEN_NOFRAME unsigned int F_00bd79b0(void)
{
  GEN_ENTER(0xbd79b0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Scheduler::Clip::AutoShakeBaseClip::vf26 */
GEN_LIB GEN_NOFRAME unsigned int F_00bd79c0(void)
{
  GEN_ENTER(0xbd79c0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Scheduler::Clip::NonAutoShakeClip::vf33 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd79d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd79d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 != (undefined *)0x0) goto LAB_00bd7a0e;
  iVar2 = *(int *)(this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar2 = *(int *)(this + 0x6c);
    uVar3 = 0;
    if (iVar2 != 0) goto LAB_00bd79f5;
  }
  else {
LAB_00bd79f5: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar1;
    uVar3 = F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 == (undefined *)0x0) {
    return uVar3;
  }
LAB_00bd7a0e: ;
  uVar3 = F_00bc3f80(this_00 GEN_EDX_ARG,this);
  return uVar3;
}

/* ref: Client::System::Scheduler::Clip::NonAutoShakeClip::vf34 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00bd7a20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd7a20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 uVar1;
  int iVar2;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 != (undefined *)0x0) goto LAB_00bd7a5e;
  iVar2 = *(int *)(this + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)(this + 4) != 0) {
      *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 4)));
    }
    iVar2 = *(int *)(this + 0x6c);
    if (iVar2 != 0) goto LAB_00bd7a45;
  }
  else {
LAB_00bd7a45: ;
    uVar1 = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  this_00 = *(undefined * PTR32 *)(this + 0x78);
  if (this_00 == (undefined *)0x0) {
    return 1;
  }
LAB_00bd7a5e: ;
  F_00bc3f90(this_00 GEN_EDX_ARG,this);
  return 1;
}

/* ref: FUN_00bd7a70 */
GEN_LIB GEN_FRAME float10 F_00bd7a70(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbd7a70u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00bd7a90 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd7a90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd7a90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x1107cd4));
  *(undefined4 *)((int)this + 0x88) = 0;
  return (uint)this;
}

/* ref: FUN_00bd7ad0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd7ad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd7ad0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)((int)this + 0x78);
  if (iVar3 != 0) goto LAB_00bd7b11;
  iVar3 = *(int *)((int)this + 0x6c);
  if (iVar3 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar3 = *(int *)((int)this + 0x6c);
    if (iVar3 != 0) goto LAB_00bd7afc;
  }
  else {
LAB_00bd7afc: ;
    uVar1 = *(undefined4 *)(iVar3 + 0x20);
    *(undefined4 *)((int)this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  iVar3 = *(int *)((int)this + 0x78);
LAB_00bd7b11: ;
  if (((iVar3 != 0) && (*(char *)(iVar3 + 0x12) == '\0')) &&
     (piVar2 = *(int * PTR32 *)(iVar3 + 4), piVar2 != (int *)0x0)) {
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x4c))(piVar2 GEN_EDX_ARG);
    return uVar4;
  }
  return 0;
}

/* ref: FUN_00bd7b30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd7b30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd7b30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = param_1;
  if (param_1 == (int *)0x0) {
    piVar1 = (int *)F_00bd3ff0(this GEN_EDX_FWD);
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  }
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1 GEN_EDX_ARG);
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::BMCharaVfxClip::vf26 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00bd7b80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd7b80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *(undefined4 *)(in_ecx + 0x88) = 0;
  return;
}

/* ref: FUN_00bd7b90 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00bd7b90(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbd7b90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)F_0052ed20(REFG(undefined4, 0x1375b00) GEN_EDX_ARG,param_1,0,0);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1 GEN_EDX_ARG);
    return uVar2;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BMCharaVfxClip::vf25 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd7bc0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd7bc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *(undefined4 *)(in_ecx + 0x88) = 0;
  *(ushort *)(in_ecx + 0x7c) = *(ushort *)(in_ecx + 0x7c) & 0xffef;
  return 0xffef;
}

/* ref: FUN_00bd7be0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd7be0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbd7be0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 uVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x24) + 0xc)));
  piVar2 = (int *)F_0052ed20(REFG(undefined4, 0x1375b00) GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x24) + 0x10))),0,0);
  uVar4 = 0;
  if (piVar2 != (int *)0x0) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x4c))(piVar2 GEN_EDX_ARG);
    uVar4 = 0;
    if (uVar3 != 0) {
      uVar4 = F_00ab4370(uVar1,param_2,uVar3,0,0);
      *(uint *)((int)this + 0x88) = uVar4;
    }
  }
  return uVar4;
}

/* ref: Client::System::Scheduler::Clip::BMCharaVfxClip::vf34 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00bd7c30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd7c30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  if (((byte)this[0x7c] >> 4 & 1) == 0) {
    return 0;
  }
  if (*(undefined * PTR32 *)(this + 0x88) != (undefined *)0x0) {
    F_009bc530(*(undefined * PTR32 *)(this + 0x88) GEN_EDX_FWD,1);
  }
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffef;
  return 1;
}

/* ref: Client::System::Scheduler::Clip::BMCharaVfxClip::vf33 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd7c70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd7c70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 uVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = F_00bd7ad0(this GEN_EDX_FWD);
  uVar5 = 0;
  if (uVar2 != 0) {
    uVar1 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x24) + 0xc)));
    piVar3 = (int *)F_0052ed20(REFG(undefined4, 0x1375b00) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(this + 0x24) + 0x10))),0,0);
    uVar5 = 0;
    if (piVar3 != (int *)0x0) {
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x4c))(piVar3 GEN_EDX_ARG);
      uVar5 = 0;
      if (uVar4 != 0) {
        uVar5 = F_00ab4370(uVar1,uVar2,uVar4,0,0);
        *(uint *)(this + 0x88) = uVar5;
      }
    }
    *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
  }
  return uVar5;
}

/* ref: Client::System::Scheduler::Clip::BMCharaVfxClip::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd7cd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd7cd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x1107cd4));
  *(undefined4 *)(this + 0x88) = 0;
  F_00bd2e60(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bd7d10 */
GEN_LIB GEN_FRAME float10 F_00bd7d10(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbd7d10u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00bd7d30 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd7d30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd7d30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110852c));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::BMCharaActionClip::vf26 */
GEN_LIB GEN_NOFRAME unsigned int F_00bd7d60(void)
{
  GEN_ENTER(0xbd7d60u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00bd7e20 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd7e20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd7e20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)((int)this + 0x78);
  if (iVar3 != 0) goto LAB_00bd7e61;
  iVar3 = *(int *)((int)this + 0x6c);
  if (iVar3 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar3 = *(int *)((int)this + 0x6c);
    if (iVar3 != 0) goto LAB_00bd7e4c;
  }
  else {
LAB_00bd7e4c: ;
    uVar1 = *(undefined4 *)(iVar3 + 0x20);
    *(undefined4 *)((int)this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  iVar3 = *(int *)((int)this + 0x78);
LAB_00bd7e61: ;
  if (((iVar3 != 0) && (*(char *)(iVar3 + 0x12) == '\0')) &&
     (piVar2 = *(int * PTR32 *)(iVar3 + 4), piVar2 != (int *)0x0)) {
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x4c))(piVar2 GEN_EDX_ARG);
    return uVar4;
  }
  return 0;
}

/* ref: FUN_00bd7e80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd7e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd7e80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = param_1;
  if (param_1 == (int *)0x0) {
    piVar1 = (int *)F_00bd3ff0(this GEN_EDX_FWD);
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  }
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1 GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00bd7ed0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00bd7ed0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbd7ed0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)F_0052ed20(REFG(undefined4, 0x1375b00) GEN_EDX_ARG,param_1,0,0);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1 GEN_EDX_ARG);
    return uVar2;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BMCharaActionClip::vf25 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd7f00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd7f00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *(ushort *)(in_ecx + 0x7c) = *(ushort *)(in_ecx + 0x7c) & 0xffef;
  return 0xffef;
}

/* ref: FUN_00bd7f10 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd7f10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbd7f10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  __declspec(align(16)) undefined1 gen_frame[0x540];
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int * piVar5;
  undefined4 * this_00;
  float * pfVar6;
  int iVar7;
  uint * puVar8;
  uint uVar9;
  undefined1 * puVar10;
  uint uVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  undefined8 uVar15;
  
  (*(uint *)(gen_frame + 0x52c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x530);
  (*(int *)(gen_frame + 0x8)) = param_2;
  F_00c48350(&(*(int *)(gen_frame + 0x18)),0,0x4b0);
  iVar7 = *(int *)((int)this + 0x24);
  uVar2 = *(undefined4 *)(iVar7 + 0x14);
  (*(uint *)(gen_frame + 0x10)) = *(uint *)(iVar7 + 0xc);
  uVar3 = *(undefined4 *)(iVar7 + 0x18);
  ((undefined4 *)(gen_frame + 0x50c))[0] = uVar2;
  ((undefined4 *)(gen_frame + 0x50c))[1] = uVar3;
  ((undefined4 *)(gen_frame + 0x50c))[2] = *(undefined4 *)(iVar7 + 0x1c);
  ((undefined4 *)(gen_frame + 0x50c))[3] = *(undefined4 *)(iVar7 + 0x20);
  ((undefined4 *)(gen_frame + 0x50c))[4] = *(undefined4 *)(iVar7 + 0x24);
  ((undefined4 *)(gen_frame + 0x50c))[5] = *(undefined4 *)(iVar7 + 0x28);
  uVar11 = 0;
  ((undefined4 *)(gen_frame + 0x50c))[6] = *(undefined4 *)(iVar7 + 0x2c);
  ((undefined4 *)(gen_frame + 0x50c))[7] = *(undefined4 *)(iVar7 + 0x30);
  (*(uint *)(gen_frame + 0x14)) = 0;
  do {
    uVar2 = ((undefined4 *)(gen_frame + 0x50c))[(int)(uVar11)];
    ((int *)(gen_frame + 0x4c8))[(int)(uVar11 * 2)] = -0x20000000;
    ((int *)(gen_frame + 0x4c8))[(int)(uVar11 * 2 + 1)] = -1;
    piVar5 = (int *)F_0052ed20(REFG(undefined4, 0x1375b00) GEN_EDX_ARG,uVar2,0,0);
    if ((piVar5 == (int *)0x0) ||
       (this_00 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0x4c))(piVar5 GEN_EDX_ARG))), this_00 == (undefined4 *)0x0)
       ) {
LAB_00bd80d5: ;
      fVar13 = (float10)*(double *)&REFG(undefined, 0x1088118);
    }
    else {
      uVar15 = ((gen_lcode *)*(gen_code32 *)*this_00)(this_00);
      ((int *)(gen_frame + 0x4c8))[(int)((*(uint *)(gen_frame + 0x14)) * 2)] = (int)uVar15;
      ((int *)(gen_frame + 0x4c8))[(int)((*(uint *)(gen_frame + 0x14)) * 2 + 1)] = (int)((ulonglong)uVar15 >> 0x20);
      if ((((int *)(gen_frame + 0x4c8))[(int)(uVar11 * 2)] == -0x20000000) && (((int *)(gen_frame + 0x4c8))[(int)(uVar11 * 2 + 1)] == -1))
      goto LAB_00bd80d5;
      if ((*(uint *)(gen_frame + 0x14)) == 0) {
        pfVar6 = (float *)F_00a5feb0(this_00 GEN_EDX_ARG);
        fVar12 = (float10)*(double *)&REFG(undefined, 0x10912a8);
        fVar13 = (float10)*(double *)&REFG(undefined, 0x1088118);
        fVar14 = (float10)*(double *)&REFG(undefined, 0x10a3960);
        iVar7 = (int)((((float10)*pfVar6 + fVar12) * fVar13) / fVar14);
        if (iVar7 < 0x10000) {
          if (iVar7 < 0) {
            iVar7 = 0;
          }
        }
        else {
          iVar7 = 0xffff;
        }
        (*(undefined2 *)(gen_frame + 0x4c0)) = (short)iVar7;
        iVar7 = (int)((((float10)pfVar6[1] + fVar12) * fVar13) / fVar14);
        if (iVar7 < 0x10000) {
          if (iVar7 < 0) {
            iVar7 = 0;
          }
        }
        else {
          iVar7 = 0xffff;
        }
        (*(undefined2 *)(gen_frame + 0x4c2)) = (short)iVar7;
        iVar7 = (int)((((float10)pfVar6[2] + fVar12) * fVar13) / fVar14);
        if (iVar7 < 0x10000) {
          if (iVar7 < 0) {
            iVar7 = 0;
          }
          (*(undefined2 *)(gen_frame + 0x4c4)) = (short)iVar7;
          (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x14)) + 1;
        }
        else {
          (*(undefined2 *)(gen_frame + 0x4c4)) = 0xffff;
          (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x14)) + 1;
        }
      }
      else {
        fVar13 = (float10)*(double *)&REFG(undefined, 0x1088118);
        (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x14)) + 1;
      }
    }
    uVar9 = (*(uint *)(gen_frame + 0x10));
    uVar11 = uVar11 + 1;
    if (7 < uVar11) {
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      fVar1 = *(float *)((*(int *)(gen_frame + 0x8)) + 0xb0);
      (*(int *)(gen_frame + 0x18)) = ((int *)(gen_frame + 0x4c8))[0];
      (*(undefined4 *)(gen_frame + 0x1c)) = ((int *)(gen_frame + 0x4c8))[1];
      (*(short *)(gen_frame + 0x20)) = (short)(*(uint *)(gen_frame + 0x10));
      (*(uint *)(gen_frame + 0x24)) = (*(uint *)(gen_frame + 0x10));
      (*(undefined2 *)(gen_frame + 0x22)) = 0x100;
      uVar11 = (uint)((((float10)fVar1 + (float10)*(double *)&REFG(undefined, 0x1080228)) * fVar13) /
                     (((float10)*(float *)&REFG(undefined, 0x13442d8) * fVar13) / (float10)REFG(double, 0x109cab0)));
      (*(uint *)(gen_frame + 0x10)) = uVar11;
      (*(uint *)(gen_frame + 0x4)) = 0xffff;
      (*(uint *)(gen_frame + 0xc)) = 0;
      if ((int)uVar11 < 0xffff) {
        puVar8 = &(*(uint *)(gen_frame + 0x10));
        if ((int)uVar11 < 1) {
          puVar8 = &(*(uint *)(gen_frame + 0xc));
        }
      }
      else {
        puVar8 = &(*(uint *)(gen_frame + 0x4));
      }
      (*(undefined2 *)(gen_frame + 0x34)) = (short)*puVar8;
      (*(undefined1 *)(gen_frame + 0x36)) = (undefined1)(*(uint *)(gen_frame + 0x14));
      uVar11 = F_00ab1ed0(uVar9);
      uVar9 = 0;
      (*(uint *)(gen_frame + 0xc)) = uVar11;
      if ((*(uint *)(gen_frame + 0x14)) != 0) {
        puVar10 = ((undefined1 *)(gen_frame + 0x5e));
        do {
          if ((((((*(short *)(gen_frame + 0x20)) == 0x78) || ((*(short *)(gen_frame + 0x20)) == 0x7c)) || ((*(short *)(gen_frame + 0x20)) == 0x83)) ||
              (((*(short *)(gen_frame + 0x20)) == 0x85 || ((*(short *)(gen_frame + 0x20)) == 0x87)))) ||
             (((*(short *)(gen_frame + 0x20)) == 0x8c || (((*(short *)(gen_frame + 0x20)) == 0x76 || ((*(short *)(gen_frame + 0x20)) == 0x72)))))) {
            puVar10[-2] = 4;
          }
          else {
            puVar10[-2] = 3;
            puVar10[-1] = *(undefined1 *)(uVar11 + 0x2d);
            *puVar10 = *(undefined1 *)(uVar11 + 0x25);
          }
          iVar7 = ((int *)(gen_frame + 0x4c8))[(int)(uVar9 * 2)];
          *(undefined2 *)(puVar10 + 2) = 1;
          iVar4 = ((int *)(gen_frame + 0x4c8))[(int)(uVar9 * 2 + 1)];
          ((int *)(gen_frame + 0x440))[(int)(uVar9 * 2)] = iVar7;
          ((int *)(gen_frame + 0x440))[(int)(uVar9 * 2 + 1)] = iVar4;
          uVar9 = uVar9 + 1;
          puVar10 = puVar10 + 0x40;
        } while (uVar9 < (*(uint *)(gen_frame + 0x14)));
      }
      uVar11 = F_00a4e510(*(undefined4 *)((*(int *)(gen_frame + 0x8)) + 0x74),&(*(int *)(gen_frame + 0x18)));
      F_00c47745((*(uint *)(gen_frame + 0x52c)) ^ (uint)(uint)(gen_frame + 0x530) GEN_EDX_ARG);
      return uVar11;
    }
  } while( true );
}

/* ref: Client::System::Scheduler::Clip::BMCharaActionClip::vf34 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00bd8280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd8280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  if (((byte)this[0x7c] >> 4 & 1) == 0) {
    return 0;
  }
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffef;
  return 1;
}

/* ref: Client::System::Scheduler::Clip::BMCharaActionClip::vf33 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd82a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd82a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  (*(uint *)(gen_frame + 0x2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x30);
  uVar4 = F_00bd7e20(this GEN_EDX_FWD);
  uVar5 = 0;
  if (uVar4 != 0) {
    iVar1 = *(int *)(this + 0x24);
    if (*(char *)(iVar1 + 0x10) == '\0') {
      uVar5 = F_00bd7f10(this GEN_EDX_ARG,param_1,uVar4);
    }
    else {
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(float *)(gen_frame + 0x10)) = 0.0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      uVar2 = *(undefined4 *)(iVar1 + 0xc);
      uVar5 = F_00ab1ed0(uVar2);
      uVar3 = (*(undefined4 *)(gen_frame + 0x8));
      (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = (short)uVar2;
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 3)) = SUB41(uVar3,3);
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 2)) = 1;
      gen_piece_set(&(*(undefined4 *)(gen_frame + 0x8)), 0, 3, (unsigned long long)(CONCAT12(1,(short)uVar2)));
      (*(undefined4 *)(gen_frame + 0xc)) = uVar2;
      (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF(((float10)*(ushort *)(uVar5 + 0x14) / (float10)REFG(double, 0x10944b8))));
      uVar5 = F_00a52d10(*(undefined4 *)(uVar4 + 0x74),&(*(undefined4 *)(gen_frame + 0x8)));
    }
    *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
  }
  F_00c47745((*(uint *)(gen_frame + 0x2c)) ^ (uint)(uint)(gen_frame + 0x30) GEN_EDX_ARG);
  return uVar5;
}

/* ref: Client::System::Scheduler::Clip::BMCharaActionClip::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd8360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd8360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110852c));
  F_00bd2e60(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bd8390 */
GEN_LIB GEN_FRAME float10 F_00bd8390(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbd8390u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00bd83b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd83b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd83b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *(undefined1 *)((int)this + 0x88) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x11086cc));
  *(undefined2 *)((int)this + 0x89) = 0;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::BMCharaJumpClip::vf7 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00bd83f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd83f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *(byte *)(in_ecx + 0x88);
}

/* ref: FUN_00bd8410 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd8410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd8410u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)((int)this + 0x78);
  if (iVar3 != 0) goto LAB_00bd8451;
  iVar3 = *(int *)((int)this + 0x6c);
  if (iVar3 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar3 = *(int *)((int)this + 0x6c);
    if (iVar3 != 0) goto LAB_00bd843c;
  }
  else {
LAB_00bd843c: ;
    uVar1 = *(undefined4 *)(iVar3 + 0x20);
    *(undefined4 *)((int)this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  iVar3 = *(int *)((int)this + 0x78);
LAB_00bd8451: ;
  if (((iVar3 != 0) && (*(char *)(iVar3 + 0x12) == '\0')) &&
     (piVar2 = *(int * PTR32 *)(iVar3 + 4), piVar2 != (int *)0x0)) {
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x4c))(piVar2 GEN_EDX_ARG);
    return uVar4;
  }
  return 0;
}

/* ref: FUN_00bd8470 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd8470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd8470u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  float * pfVar1;
  uint uVar2;
  
  this_00 = (undefined *)F_00bd8410(this GEN_EDX_FWD);
  uVar2 = 0;
  if (this_00 != (undefined *)0x0) {
    pfVar1 = (float *)F_00a5feb0(this_00 GEN_EDX_ARG);
    uVar2 = F_00a9f6d0(this_00 GEN_EDX_ARG,*pfVar1,pfVar1[1],pfVar1[2],*(float *)((int)this_00 + 0xb0),
                         *(float *)((int)this_00 + 0xb0),0,1,(float)(float10)0,(float)(float10)0);
  }
  return uVar2;
}

/* ref: FUN_00bd84d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd84d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd84d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  float * pfVar1;
  uint uVar2;
  
  this_00 = (undefined *)F_00bd8410(this GEN_EDX_FWD);
  uVar2 = 0;
  if (this_00 != (undefined *)0x0) {
    pfVar1 = (float *)F_00a5feb0(this_00 GEN_EDX_ARG);
    uVar2 = F_00a9f6d0(this_00 GEN_EDX_ARG,*pfVar1,
                         (float)((float10)pfVar1[1] + (float10)*(double *)&REFG(undefined, 0x1092098)),pfVar1[2],
                         *(float *)((int)this_00 + 0xb0),*(float *)((int)this_00 + 0xb0),0,4,
                         REFG(float, 0x1088068),(float)(float10)0);
  }
  return uVar2;
}

/* ref: FUN_00bd8540 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd8540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd8540u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  float * pfVar1;
  uint uVar2;
  
  this_00 = (undefined *)F_00bd8410(this GEN_EDX_FWD);
  uVar2 = 0;
  if (this_00 != (undefined *)0x0) {
    pfVar1 = (float *)F_00a5feb0(this_00 GEN_EDX_ARG);
    uVar2 = F_00a9f6d0(this_00 GEN_EDX_ARG,*pfVar1,pfVar1[1],pfVar1[2],*(float *)((int)this_00 + 0xb0),
                         *(float *)((int)this_00 + 0xb0),0,2,(float)(float10)0,(float)(float10)0);
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::BMCharaJumpClip::vf26 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00bd85a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd85a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *(undefined2 *)(in_ecx + 0x89) = 0;
  *(undefined1 *)(in_ecx + 0x88) = 0;
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BMCharaJumpClip::vf25 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd85c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd85c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *(ushort *)(in_ecx + 0x7c) = *(ushort *)(in_ecx + 0x7c) & 0xffef;
  return 0xffef;
}

/* ref: Client::System::Scheduler::Clip::BMCharaJumpClip::vf33 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd85d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd85d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00bd8410(this GEN_EDX_FWD);
  uVar2 = 0;
  if (uVar1 != 0) {
    F_00bd8470(this GEN_EDX_ARG);
    uVar2 = F_00bd84d0(this GEN_EDX_ARG);
    this[0x89] = (undefined1)0x1;
    *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::BMCharaJumpClip::vf34 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00bd8600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd8600u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  if (((byte)this[0x7c] >> 4 & 1) == 0) {
    return 0;
  }
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffef;
  return 1;
}

/* ref: Client::System::Scheduler::Clip::BMCharaJumpClip::vf30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd8620(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbd8620u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  byte bVar1;
  undefined4 in_EAX = 0;
  uint uVar2;
  
  bVar1 = *(byte *)((int)param_1 + 0x7c) >> 4;
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),bVar1);
  if ((((bVar1 & 1) != 0) && (*(char *)((int)param_1 + 0x8a) == '\0')) &&
     ((float10)*(double *)&REFG(undefined, 0x1094400) - (float10)param_2 < (float10)0)) {
    uVar2 = F_00bd8540(param_1 GEN_EDX_FWD);
    *(undefined1 *)((int)param_1 + 0x8a) = 1;
    *(undefined1 *)((int)param_1 + 0x88) = 1;
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::BMCharaJumpClip::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd8670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd8670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x11086cc));
  F_00bd2e60(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bd86a0 */
GEN_LIB GEN_FRAME float10 F_00bd86a0(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbd86a0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00bd86c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd86c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd86c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110886c));
  *(undefined1 *)((int)this + 0x88) = 0;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::BMCharaMoveClip::vf7 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00bd86f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd86f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *(byte *)(in_ecx + 0x88);
}

/* ref: Client::System::Scheduler::Clip::BMCharaMoveClip::vf26 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00bd8700(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd8700u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *(undefined1 *)(in_ecx + 0x88) = 0;
  return;
}

/* ref: FUN_00bd8720 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd8720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd8720u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)((int)this + 0x78);
  if (iVar3 != 0) goto LAB_00bd8761;
  iVar3 = *(int *)((int)this + 0x6c);
  if (iVar3 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar3 = *(int *)((int)this + 0x6c);
    if (iVar3 != 0) goto LAB_00bd874c;
  }
  else {
LAB_00bd874c: ;
    uVar1 = *(undefined4 *)(iVar3 + 0x20);
    *(undefined4 *)((int)this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  iVar3 = *(int *)((int)this + 0x78);
LAB_00bd8761: ;
  if (((iVar3 != 0) && (*(char *)(iVar3 + 0x12) == '\0')) &&
     (piVar2 = *(int * PTR32 *)(iVar3 + 4), piVar2 != (int *)0x0)) {
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x4c))(piVar2 GEN_EDX_ARG);
    return uVar4;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BMCharaMoveClip::vf25 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd8780(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd8780u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *(ushort *)(in_ecx + 0x7c) = *(ushort *)(in_ecx + 0x7c) & 0xffef;
  return 0xffef;
}

/* ref: Client::System::Scheduler::Clip::BMCharaMoveClip::vf33 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd8790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd8790u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  uint in_ecx;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  in_ecx = F_00bd8720(this GEN_EDX_FWD);
  uVar2 = 0;
  if (in_ecx != 0) {
    bVar1 = F_00a9fa40(in_ecx GEN_EDX_ARG,(uint)(*((char *)GEN_TOP((*(int *)(this + 0x24) + 0xd))) != '\0'));
    uVar2 = CONCAT31(extraout_var,bVar1);
    *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) | 0x10;
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Clip::BMCharaMoveClip::vf34 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00bd87c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd87c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  if (((byte)this[0x7c] >> 4 & 1) == 0) {
    return 0;
  }
  *(ushort *)(this + 0x7c) = *(ushort *)(this + 0x7c) & 0xffef;
  return 1;
}

/* ref: Client::System::Scheduler::Clip::BMCharaMoveClip::vf30 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd87e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbd87e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  __declspec(align(16)) undefined1 gen_frame[0x80];
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float10 fVar5;
  byte bVar6;
  undefined4 in_EAX = 0;
  undefined * this_00;
  uint uVar7;
  float * pfVar8;
  bool bVar9;
  float10 fVar10;
  float10 fVar11;
  float fVar12;
  
  uVar7 = CONCAT31((int3)((uint)in_EAX >> 8),(byte)this[0x7c] >> 4);
  (*(undefined * PTR32 *)(gen_frame + 0x3c)) = this;
  if (((byte)this[0x7c] >> 4 & 1) != 0) {
    this_00 = (undefined *)F_00bd8720(this GEN_EDX_FWD);
    uVar7 = 0;
    if (this_00 != (undefined *)0x0) {
      iVar4 = *(int *)(this + 0x24);
      (*(float *)(gen_frame + 0xc)) = gen_bits2f(REFG(float, 0x1108820));
      (*(undefined4 *)(gen_frame + 0x10)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1108820)));
      (*(undefined4 *)(gen_frame + 0x14)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1108820)));
      (*(undefined4 *)(gen_frame + 0x18)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1108820)));
      (*(undefined4 *)(gen_frame + 0x1c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1108820)));
      (*(int *)(gen_frame + 0x2c)) = 0;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x109c96c));
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined4 *)(gen_frame + 0x30)) = 0;
      (*(undefined1 *)(gen_frame + 0x34)) = 0;
      (*(undefined4 *)(gen_frame + 0x38)) = 0;
      bVar9 = *(char *)(iVar4 + 0xc) != '\0';
      (*(undefined1 *)(gen_frame + 0x6f)) = (undefined1)0x0;
      (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x2c)) + 3)) = bVar9;
      (*(int *)(gen_frame + 0x2c)) = (uint)bVar9 << 0x18;
      pfVar8 = (float *)F_00a5feb0(this_00 GEN_EDX_ARG);
      fVar1 = pfVar8[1];
      (*(float *)(gen_frame + 0x54)) = *(float *)(iVar4 + 0x14);
      (*(float *)(gen_frame + 0x50)) = *(float *)(iVar4 + 0x10);
      (*(float *)(gen_frame + 0x58)) = *(float *)(iVar4 + 0x18);
      (*(float *)(gen_frame + 0x44)) = 0.0;
      fVar2 = ((float)GEN_TOF(((float10)*(float *)(iVar4 + 0x10) - (float10)*pfVar8)));
      fVar3 = ((float)GEN_TOF(((float10)*(float *)(iVar4 + 0x18) - (float10)pfVar8[2])));
      (*(float *)(gen_frame + 0x40)) = fVar2;
      (*(float *)(gen_frame + 0x48)) = fVar3;
      pfVar8 = (float *)F_004bd580(&(*(float *)(gen_frame + 0x40)) GEN_EDX_ARG);
      fVar12 = *pfVar8;
      (*(float *)(gen_frame + 0x40)) = fVar12;
      (*(float *)(gen_frame + 0x44)) = pfVar8[1];
      (*(float *)(gen_frame + 0x48)) = pfVar8[2];
      fVar5 = ((float10)GEN_TOD(atan2((float10)fVar12,(float10)pfVar8[2])));
      (*(float *)(gen_frame + 0x68)) = (float)fVar5;
      (*(undefined4 *)(gen_frame + 0x1c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10abe50)));
      (*(undefined4 *)(gen_frame + 0x28)) = 1;
      if ((*(uint *)&REFG(undefined, 0x14c5abc) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x14c5abc) = *(uint *)&REFG(undefined, 0x14c5abc) | 1;
        *(undefined4 *)&REFG(undefined, 0x14c5aac) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5aac), REFG(float, 0x1108830));
        *(undefined4 *)&REFG(undefined, 0x14c5ab0) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5ab0), REFG(float, 0x10adb9c));
        *(undefined4 *)&REFG(undefined, 0x14c5ab4) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5ab4), REFG(float, 0x1094870));
        *(undefined4 *)&REFG(undefined, 0x14c5ab8) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c5ab8), REFG(float, 0x1108984));
      }
      fVar12 = REFG(float, 0x1087f04);
      if (*(char *)(iVar4 + 0xe) != '\0') {
        fVar12 = REFG(float, 0x10ac108);
      }
      (*(float *)(gen_frame + 0x68)) = fVar12;
      (*(undefined4 *)(gen_frame + 0x18)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1108820)));
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      fVar12 = ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x14c5aac) +
                                          ((-(uint)(*(char *)((int)this_00 + 0x2e08) != '\0') & 2) +
                                          (uint)(*(char *)(iVar4 + 0xc) == '\0')) * 4) *
                      (float10)fVar12)));
      (*(float *)(gen_frame + 0x68)) = fVar12;
      (*(float *)(gen_frame + 0xc)) = fVar12;
      fVar10 = (float10)fVar2;
      fVar11 = (float10)fVar3;
      fVar2 = ((float)GEN_TOF((fVar11 * fVar11 + ((float10)0 * (float10)0 + fVar10 * fVar10))));
      (*(float *)(gen_frame + 0x64)) = fVar2;
      fVar2 = ((float)GEN_TOF(SQRT((float10)fVar2)));
      (*(float *)(gen_frame + 0x64)) = fVar2;
      if ((float10)fVar2 <= (float10)fVar12) {
        (*(undefined1 *)(gen_frame + 0x6f)) = (undefined1)0x1;
      }
      bVar6 = F_00a9fca0(this_00 GEN_EDX_ARG);
      if (bVar6 != 0) {
        (*(float *)(gen_frame + 0x54)) = fVar1;
      }
      uVar7 = F_00a9f7c0(this_00 GEN_EDX_ARG,(*(float *)(gen_frame + 0x50)),(*(float *)(gen_frame + 0x54)),(*(float *)(gen_frame + 0x58)),(float)fVar5,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
      (*(undefined * PTR32 *)(gen_frame + 0x3c))[0x88] = (*(undefined1 *)(gen_frame + 0x6f));
    }
  }
  return uVar7;
}

/* ref: Client::System::Scheduler::Clip::BMCharaMoveClip::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00bd8a60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbd8a60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x110886c));
  F_00bd2e60(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bd8aa0 */
GEN_LIB GEN_FRAME float10 F_00bd8aa0(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbd8aa0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00bd8ac0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd8ac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd8ac0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x1108b5c));
  *(undefined1 *)((int)this + 0x88) = 0;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::BMSetParamClip::vf26 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00bd8af0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd8af0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *(undefined1 *)(in_ecx + 0x88) = 0;
  return;
}

/* ref: FUN_00bd8b10 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00bd8b10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbd8b10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)((int)this + 0x78);
  if (iVar3 != 0) goto LAB_00bd8b51;
  iVar3 = *(int *)((int)this + 0x6c);
  if (iVar3 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar3 = *(int *)((int)this + 0x6c);
    if (iVar3 != 0) goto LAB_00bd8b3c;
  }
  else {
LAB_00bd8b3c: ;
    uVar1 = *(undefined4 *)(iVar3 + 0x20);
    *(undefined4 *)((int)this + 0x78) = uVar1;
    F_00b595f0(uVar1);
  }
  iVar3 = *(int *)((int)this + 0x78);
LAB_00bd8b51: ;
  if (((iVar3 != 0) && (*(char *)(iVar3 + 0x12) == '\0')) &&
     (piVar2 = *(int * PTR32 *)(iVar3 + 4), piVar2 != (int *)0x0)) {
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x4c))(piVar2 GEN_EDX_ARG);
    return uVar4;
  }
  return 0;
}

/* ref: FUN_00bd8b80 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00bd8b80(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbd8b80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  byte bVar1;
  byte * pbVar2;
  byte * pbVar3;
  int iVar4;
  byte * pbVar5;
  uint uVar6;
  bool bVar7;
  
  uVar6 = (param_2[1] - *param_2) / 0x54;
  if (uVar6 < 3) {
    return uVar6;
  }
  pbVar2 = (byte *)F_0042a990(*param_2 + 0xa8 GEN_EDX_ARG);
  uVar6 = 0;
  do {
    pbVar3 = (&REFG(undefined * PTR32, 0x1108c74))[(int)(uVar6 * 2)];
    pbVar5 = pbVar2;
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00bd8be0: ;
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_00bd8be5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar7 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00bd8be0;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_00bd8be5: ;
    if (iVar4 == 0) {
      if ((int)uVar6 < 0) {
        return (uint)pbVar2;
      }
      if ((&REFG(undefined1, 0x1108c78))[(int)(uVar6 * 8)] == '\0') {
        uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x28))(param_1 GEN_EDX_ARG,5,0);
        return uVar6;
      }
      uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x24))(param_1 GEN_EDX_ARG,5,0);
      return uVar6;
    }
    uVar6 = uVar6 + 1;
    if (1 < uVar6) {
      return (uint)pbVar2;
    }
  } while( true );
}

