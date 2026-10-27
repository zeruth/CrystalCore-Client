#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_009f0800 */
uint F_009f0800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f0800u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xcc) = param_2;
  return param_2;
}

/* ref: FUN_009f0890 */
uint F_009f0890(unsigned int gen_a0)
{
  GEN_ENTER(0x9f0890u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_009f08b0 */
uint F_009f08b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9f08b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + 0x14) = param_2;
  *(undefined4 *)((int)this + 0x18) = param_3;
  *(uint *)((int)this + 0x10) = param_1;
  return param_1;
}

/* ref: FUN_009f08d0 */
uint F_009f08d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9f08d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if ((code *)*(gen_code32 *)((int)this + 0x18) != (code *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)((int)this + 0x18))(*(undefined4 *)((int)this + 0x10));
  }
  return uVar1;
}

/* ref: FUN_009f08e0 */
uint F_009f08e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f08e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x10) = param_2;
  return param_2;
}

/* ref: FUN_009f0900 */
uint F_009f0900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f0900u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  *(undefined1 *)(in_ecx + 0x20 + param_2 * 0x30) = 0;
  return param_2 * 6;
}

/* ref: FUN_009f0920 */
byte F_009f0920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f0920u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(byte *)(in_ecx + 0x20 + param_2 * 0x30);
}

/* ref: FUN_009f0940 */
uint F_009f0940(unsigned int gen_a0)
{
  GEN_ENTER(0x9f0940u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (((*(short *)(param_1 + 4) != -1) && (*(short *)(param_1 + 6) != -1)) &&
     (*(short *)(param_1 + 8) != -1)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_009f0980 */
uint F_009f0980(unsigned int gen_a0)
{
  GEN_ENTER(0x9f0980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  if (*(int *)((int)this + 8) != 0) {
    do {
      if (*((int *)GEN_TOP((*(int *)((int)this + 0xc) + uVar2 * 4))) != 0) {
        puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + uVar2 * 4)));
        if (puVar1 != (undefined4 *)0x0) {
          ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
        }
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + uVar2 * 4))) = 0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)((int)this + 8));
  }
  uVar2 = 0;
  if (*(int *)((int)this + 0xc) != 0) {
    uVar3 = F_00406b30(*(int *)((int)this + 0xc));
    uVar2 = (uint)uVar3;
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_009f09e0 */
uint F_009f09e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f09e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined1 *)this = (undefined1)param_1;
  *(undefined1 *)((int)this + 1) = (undefined1)param_2;
  return (uint)this;
}

/* ref: FUN_009f0a00 */
byte F_009f0a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f0a00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short * param_1 = (short *)(uintptr_t)gen_a1;
  return *(short *)this == *param_1;
}

/* ref: FUN_009f0a50 */
uint F_009f0a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f0a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (uint)*(byte *)(param_1 + 1);
}

/* ref: FUN_009f0a70 */
uint F_009f0a70(unsigned int gen_a0)
{
  GEN_ENTER(0x9f0a70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x58) != 0) {
    uVar1 = F_0050c620(*(int *)((int)this + 0x58),0,0);
    *(undefined4 *)((int)this + 0x58) = 0;
  }
  return uVar1;
}

/* ref: FUN_009f0a90 */
uint F_009f0a90(unsigned int gen_a0)
{
  GEN_ENTER(0x9f0a90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x5c) != 0) {
    uVar1 = F_0050c620(*(int *)((int)this + 0x5c),0,0);
    *(undefined4 *)((int)this + 0x5c) = 0;
  }
  return uVar1;
}

/* ref: FUN_009f0ab0 */
uint F_009f0ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f0ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x5c) != (undefined *)0x0) {
    uVar1 = F_00503790(*(undefined * PTR32 *)((int)this + 0x5c),param_1);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_009f0ad0 */
uint F_009f0ad0(unsigned int gen_a0)
{
  GEN_ENTER(0x9f0ad0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 5;
  in_ecx[1] = 0;
  *(undefined2 *)(in_ecx + 2) = 0x100;
  return (uint)in_ecx;
}

/* ref: FUN_009f0af0 */
uint F_009f0af0(float gen_a0)
{
  GEN_ENTER(0x9f0af0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  uint uVar1;
  
  uVar1 = F_00a06680(param_1,1);
  return uVar1;
}

/* ref: FUN_009f0b10 */
unsigned int F_009f0b10(unsigned int gen_a0)
{
  GEN_ENTER(0x9f0b10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 8) = 0;
  return 0;
}

/* ref: FUN_009f0b80 */
uint F_009f0b80(void)
{
  GEN_ENTER(0x9f0b80u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  if (0 < *((int *)GEN_TOP(((int)REFG(void * PTR32, 0x15e3734) + 0x10)))) {
    F_00dedd90(REFG(void * PTR32, 0x15e3734));
  }
  F_00dcde20();
  F_00dc8d30();
  uVar1 = F_00dc79e0();
  return uVar1;
}

/* ref: FUN_009f0ba0 */
uint F_009f0ba0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x9f0ba0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int iVar1;
  uint uVar2;
  bool bVar3;
  float10 fVar4;
  
  iVar1 = *(int *)(in_ecx + 0x1c);
  if ((*(int *)(iVar1 + 0x78) == 0) || (*(int *)(iVar1 + 0x78) == 1)) {
    *(float *)(iVar1 + 0x74) = ((float)GEN_TOF(((float10)1 - (float10)*(float *)(iVar1 + 0x74))));
  }
  if (REFG(float, 0x10905c4) < param_2) {
    fVar4 = (float10)1 / (float10)param_2;
  }
  else {
    fVar4 = (float10)REFG(double, 0x10e1668);
  }
  *(float *)(iVar1 + 0x70) = (float)fVar4;
  bVar3 = GEN_ISNAN(*(float *)(iVar1 + 0x74)) || GEN_ISNAN(REFG(float, 0x1087f04));
  uVar2 = 3;
  if (bVar3 == (bVar3 || *(float *)(iVar1 + 0x74) == REFG(float, 0x1087f04))) {
    uVar2 = 2;
  }
  *(uint *)(iVar1 + 0x78) = uVar2;
  return uVar2;
}

/* ref: FUN_009f0c00 */
unsigned int F_009f0c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f0c00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  float fVar1;
  int iVar2;
  ushort local_c;
  
  if (*(char *)((int)this + 0x2a) != '\0') {
    iVar2 = *(int *)((int)this + 0x1c);
    local_c = (ushort)(int)TRUNC((float10)*(float *)(iVar2 + 8) * (float10)*(double *)&REFG(undefined, 0x1088070))
    ;
    if (*(ushort *)((int)this + 0x28) <= local_c) {
      fVar1 = ((float)GEN_TOF(((float10)*(ushort *)((int)this + 0x28) / (float10)*(double *)&REFG(undefined, 0x1088070))));
      *(float *)(iVar2 + 0x7c) = fVar1;
      if ((float10)*(float *)(iVar2 + 8) < (float10)fVar1) {
        *(float *)(iVar2 + 8) = fVar1;
      }
      *(undefined1 *)((int)this + 0x2a) = 0;
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_009f0d30 */
uint F_009f0d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f0d30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((**(int * PTR32 *)((int)this + 0xbc) + 0x18))) + param_1 * 8))) & 0xfffffffe;
}

/* ref: FUN_009f0d50 */
uint F_009f0d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f0d50u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (uint)(*((ushort *)GEN_TOP((*(int *)(param_2 + 0x24) + 0xc))) <
               *((ushort *)GEN_TOP((*(int *)(param_1 + 0x24) + 0xc))));
}

/* ref: FUN_009f0d70 */
ushort F_009f0d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f0d70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return *((ushort *)GEN_TOP((*((int *)GEN_TOP((**(int * PTR32 *)((int)this + 0xbc) + 0xc))) + (short)param_1 * 2)));
}

/* ref: FUN_009f0d90 */
uint F_009f0d90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f0d90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 0;
  if (*(int *)((int)this + 4) != 0) {
    iVar5 = 0;
    do {
      if (param_2 == 0) {
        iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0xc) + param_1 * 4)));
        if (*(int *)(iVar1 + 0x34 + iVar5) != 0) {
          uVar3 = *(uint *)(iVar1 + 0x40 + iVar5);
LAB_009f0ddc: ;
          if (uVar3 != 0) {
            return uVar3;
          }
        }
      }
      else if (param_2 == 1) {
        iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0xc) + param_1 * 4)));
        iVar2 = *(int *)(iVar1 + 0x34 + iVar5);
        if (iVar2 != 0) {
          uVar3 = iVar2 * 0x60 + -0x60 + *(int *)(iVar1 + 0x40 + iVar5);
          goto LAB_009f0ddc;
        }
      }
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 0x50;
    } while (uVar4 < *(uint *)((int)this + 4));
  }
  return 0;
}

/* ref: FUN_009f0e00 */
uint F_009f0e00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f0e00u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  iVar3 = *(int *)(in_ecx + 8);
  uVar1 = *(undefined4 *)(iVar3 + 0x14);
  uVar2 = *(undefined4 *)(iVar3 + 0x18);
  (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)(iVar3 + 0x10);
  (*(undefined4 *)(gen_frame + 0x4)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x8)) = uVar2;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  uVar1 = param_3[2];
  uVar2 = param_3[1];
  (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(iVar3 + 0x20);
  (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(iVar3 + 0x24);
  (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(iVar3 + 0x28);
  (*(undefined4 *)(gen_frame + 0x1c)) = *(undefined4 *)(iVar3 + 0x2c);
  (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)&REFG(undefined, 0x10e1590);
  (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)&REFG(undefined, 0x10e1594);
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)&REFG(undefined, 0x10e1598);
  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)&REFG(undefined, 0x10e159c);
  (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)&REFG(undefined, 0x10e15a0);
  (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)&REFG(undefined, 0x10e15a4);
  (*(undefined4 *)(gen_frame + 0x28)) = *(undefined4 *)&REFG(undefined, 0x10e15a8);
  (*(undefined4 *)(gen_frame + 0x2c)) = *(undefined4 *)&REFG(undefined, 0x10e15ac);
  (*(undefined4 *)(gen_frame + 0x30)) = *param_3;
  (*(undefined4 *)(gen_frame + 0x34)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x38)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  F_00d94dc0(&(*(undefined4 *)(gen_frame + 0x30)),&(*(undefined4 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x30)));
  *param_2 = (*(undefined4 *)(gen_frame + 0x30));
  param_2[1] = (*(undefined4 *)(gen_frame + 0x34));
  param_2[2] = (*(undefined4 *)(gen_frame + 0x38));
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50));
  return (uint)param_2;
}

/* ref: FUN_009f0f50 */
uint F_009f0f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f0f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  byte bVar1;
  int iVar2;
  byte * pbVar3;
  byte * pbVar4;
  uint uVar5;
  undefined4 * puVar6;
  bool bVar7;
  
  uVar5 = 0;
  if (*(uint *)this != 0) {
    puVar6 = *(undefined4 * PTR32 *)((int)this + 0xc);
    do {
      pbVar4 = (byte *)*puVar6;
      pbVar3 = param_1;
      do {
        bVar1 = *pbVar3;
        bVar7 = bVar1 < *pbVar4;
        if (bVar1 != *pbVar4) {
LAB_009f0f86: ;
          iVar2 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_009f0f8b;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar7 = bVar1 < pbVar4[1];
        if (bVar1 != pbVar4[1]) goto LAB_009f0f86;
        pbVar3 = pbVar3 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar1 != 0);
      iVar2 = 0;
LAB_009f0f8b: ;
      if (iVar2 == 0) {
        return uVar5;
      }
      uVar5 = uVar5 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar5 < *(uint *)this);
  }
  return 0xffffffff;
}

/* ref: FUN_009f1010 */
unsigned int F_009f1010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f1010u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_2 < 0) {
    uVar5 = 0;
    if (*(int *)this != 0) {
      uVar2 = *(uint *)((int)this + 4);
      do {
        uVar4 = 0;
        if (uVar2 != 0) {
          iVar3 = 0;
          do {
            puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xc) + uVar5 * 4))) + 0x20 + iVar3)));
            *puVar1 = *param_1;
            uVar4 = uVar4 + 1;
            iVar3 = iVar3 + 0x50;
            puVar1[1] = param_1[1];
            puVar1[2] = param_1[2];
            uVar2 = *(uint *)((int)this + 4);
          } while (uVar4 < uVar2);
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)this);
    }
  }
  else {
    uVar5 = 0;
    if (*(int *)((int)this + 4) != 0) {
      iVar3 = 0;
      do {
        puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xc) + param_2 * 4))) + 0x20 + iVar3)));
        *puVar1 = *param_1;
        uVar5 = uVar5 + 1;
        iVar3 = iVar3 + 0x50;
        puVar1[1] = param_1[1];
        puVar1[2] = param_1[2];
      } while (uVar5 < *(uint *)((int)this + 4));
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_009f10b0 */
unsigned int F_009f10b0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f10b0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint local_8;
  
  local_8 = 0;
  if ((int)param_3 < 0) {
    if (*in_ecx != 0) {
      do {
        iVar4 = 0;
        param_3 = 0;
        if (in_ecx[1] != 0) {
          do {
            iVar1 = *(int *)(in_ecx[3] + local_8 * 4) + iVar4;
            uVar2 = 0;
            *(float *)(iVar1 + 0x38) = param_2;
            if (*(int *)(iVar1 + 0x34) != 0) {
              iVar3 = 0;
              do {
                *((float *)GEN_TOP((iVar3 + 0x50 + *(int *)(iVar1 + 0x40)))) = param_2;
                uVar2 = uVar2 + 1;
                iVar3 = iVar3 + 0x60;
              } while (uVar2 < *(uint *)(iVar1 + 0x34));
            }
            param_3 = param_3 + 1;
            iVar4 = iVar4 + 0x50;
          } while (param_3 < in_ecx[1]);
        }
        local_8 = local_8 + 1;
      } while (local_8 < *in_ecx);
    }
  }
  else if (in_ecx[1] != 0) {
    iVar4 = 0;
    do {
      iVar1 = *(int *)(in_ecx[3] + param_3 * 4) + iVar4;
      uVar2 = 0;
      *(float *)(iVar1 + 0x38) = param_2;
      if (*(int *)(iVar1 + 0x34) != 0) {
        iVar3 = 0;
        do {
          *((float *)GEN_TOP((iVar3 + 0x50 + *(int *)(iVar1 + 0x40)))) = param_2;
          uVar2 = uVar2 + 1;
          iVar3 = iVar3 + 0x60;
        } while (uVar2 < *(uint *)(iVar1 + 0x34));
      }
      local_8 = local_8 + 1;
      iVar4 = iVar4 + 0x50;
    } while (local_8 < in_ecx[1]);
    return 0;
  }
  return 0;
}

/* ref: FUN_009f1180 */
uint F_009f1180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f1180u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint local_c;
  int local_8;
  
  cVar1 = (char)param_1;
  uVar2 = 0;
  if ((int)param_2 < 0) {
    local_c = 0;
    if (*(int *)this != 0) {
      do {
        uVar2 = 0;
        param_2 = 0;
        if (*(int *)((int)this + 4) != 0) {
          param_1 = 0;
          do {
            iVar3 = *((int *)GEN_TOP((*(int *)((int)this + 0xc) + local_c * 4))) + param_1;
            if (cVar1 == '\0') {
              *(uint *)(iVar3 + 0x3c) = *(uint *)(iVar3 + 0x3c) & 0xfffffffe;
            }
            else {
              *(uint *)(iVar3 + 0x3c) = *(uint *)(iVar3 + 0x3c) | 1;
            }
            uVar2 = 0;
            if (*(int *)(iVar3 + 0x34) != 0) {
              iVar4 = 0;
              do {
                *((char *)GEN_TOP((iVar4 + 0x58 + *(int *)(iVar3 + 0x40)))) = cVar1;
                uVar2 = uVar2 + 1;
                iVar4 = iVar4 + 0x60;
              } while (uVar2 < *(uint *)(iVar3 + 0x34));
            }
            param_1 = param_1 + 0x50;
            uVar2 = param_2 + 1;
            param_2 = uVar2;
          } while (uVar2 < *(uint *)((int)this + 4));
        }
        local_c = local_c + 1;
      } while (local_c < *(uint *)this);
    }
  }
  else {
    local_c = 0;
    if (*(int *)((int)this + 4) != 0) {
      local_8 = 0;
      do {
        iVar3 = *((int *)GEN_TOP((*(int *)((int)this + 0xc) + param_2 * 4))) + local_8;
        if ((char)param_1 == '\0') {
          *(uint *)(iVar3 + 0x3c) = *(uint *)(iVar3 + 0x3c) & 0xfffffffe;
        }
        else {
          *(uint *)(iVar3 + 0x3c) = *(uint *)(iVar3 + 0x3c) | 1;
        }
        uVar2 = 0;
        if (*(int *)(iVar3 + 0x34) != 0) {
          iVar4 = 0;
          do {
            *((char *)GEN_TOP((iVar4 + 0x58 + *(int *)(iVar3 + 0x40)))) = (char)param_1;
            uVar2 = uVar2 + 1;
            iVar4 = iVar4 + 0x60;
          } while (uVar2 < *(uint *)(iVar3 + 0x34));
        }
        local_8 = local_8 + 0x50;
        local_c = local_c + 1;
      } while (local_c < *(uint *)((int)this + 4));
      return local_c;
    }
  }
  return uVar2;
}

/* ref: FUN_009f1270 */
uint F_009f1270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f1270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  float fVar2;
  float fVar3;
  float * pfVar4;
  int * piVar5;
  float10 fVar6;
  
  fVar2 = (*(float *)((char *)&REFG(float, 0x1375ad0) + 4));
  *param_1 = (float)REFG(float, 0x1375ad0);
  fVar3 = (float)REFG(float, 0x1375ad8);
  param_1[1] = fVar2;
  fVar2 = (*(float *)((char *)&REFG(float, 0x1375ad8) + 4));
  param_1[2] = fVar3;
  param_1[3] = fVar2;
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = this;
  (*(int *)(gen_frame + 0x28)) = 0;
  if (*(int *)((int)this + 4) != 0) {
    piVar5 = ((int *)GEN_TOP((*(int *)((int)this + 0xc) + param_2 * 4)));
    (*(int *)(gen_frame + 0x2c)) = 0;
    (*(int * PTR32 *)(gen_frame + 0x20)) = piVar5;
    (*(int *)(gen_frame + 0x24)) = *(int *)((int)this + 4);
    piVar5 = (int *)(*piVar5 + 0x34);
    do {
      pfVar4 = (float *)F_009fb8a0((undefined *)(*(*(int * PTR32 *)(gen_frame + 0x20)) + (*(int *)(gen_frame + 0x2c))),((undefined1 *)(gen_frame + 0x0)));
      (*(int *)(gen_frame + 0x2c)) = (*(int *)(gen_frame + 0x2c)) + 0x50;
      *param_1 = (float)((float10)*param_1 + (float10)*pfVar4);
      param_1[1] = (float)((float10)pfVar4[1] + (float10)param_1[1]);
      param_1[2] = (float)((float10)pfVar4[2] + (float10)param_1[2]);
      (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) + *piVar5;
      iVar1 = (*(int *)(gen_frame + 0x24)) + -1;
      (*(int *)(gen_frame + 0x24)) = iVar1;
      param_1[3] = (float)((float10)pfVar4[3] + (float10)param_1[3]);
      this = (*(undefined * PTR32 *)(gen_frame + 0x1c));
      piVar5 = piVar5 + 0x14;
    } while (iVar1 != 0);
  }
  if ((*((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xc) + param_2 * 4))) + 0x3c))) >> 1 & 1) != 0) {
    fVar6 = (float10)(*(int *)(gen_frame + 0x28));
    if ((*(int *)(gen_frame + 0x28)) < 0) {
      fVar6 = fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    (*(undefined * PTR32 *)(gen_frame + 0x1c)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)fVar6)));
    fVar6 = (float10)(float)fVar6;
    *param_1 = (float)((float10)*param_1 / fVar6);
    param_1[1] = (float)((float10)param_1[1] / fVar6);
    param_1[2] = (float)((float10)param_1[2] / fVar6);
    param_1[3] = (float)((float10)param_1[3] / fVar6);
  }
  return (uint)param_1;
}

/* ref: FUN_009f1380 */
uint F_009f1380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f1380u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0xc) + param_2 * 4)));
}

/* ref: FUN_009f1390 */
unsigned int F_009f1390(unsigned int gen_a0)
{
  GEN_ENTER(0x9f1390u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  in_ecx[4] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return 0;
}

/* ref: FUN_009f13a0 */
unsigned int F_009f13a0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x9f13a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xc) = param_2;
  return 0;
}

/* ref: FUN_009f13c0 */
float10 F_009f13c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9f13c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0xc);
}

/* ref: FUN_009f13d0 */
uint F_009f13d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f13d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (0 < (int)param_2) {
    *(uint *)(in_ecx + 8) = param_2;
  }
  return param_2;
}

/* ref: FUN_009f1410 */
uint F_009f1410(unsigned int gen_a0)
{
  GEN_ENTER(0x9f1410u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x6c);
}

/* ref: FUN_009f1420 */
uint F_009f1420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f1420u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = *param_2;
  *param_1 = *(undefined4 *)((int)this + iVar1 * 0x10 + 0xc);
  param_1[1] = *(undefined4 *)((int)this + iVar1 * 0x10 + 0x10);
  param_1[2] = *(undefined4 *)((int)this + iVar1 * 0x10 + 0x14);
  param_1[3] = *(undefined4 *)((int)this + iVar1 * 0x10 + 0x18);
  return (uint)param_1;
}

/* ref: FUN_009f1450 */
uint F_009f1450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f1450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*(int *)((int)this + 0x58) != 0) {
    F_0050c620(*(int *)((int)this + 0x58),0,0);
    *(undefined4 *)((int)this + 0x58) = 0;
  }
  *(undefined4 *)((int)this + 0x58) = param_1;
  uVar1 = F_00513f60(param_1,0,0);
  return uVar1;
}

/* ref: FUN_009f1490 */
uint F_009f1490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f1490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*(int *)((int)this + 0x5c) != 0) {
    F_0050c620(*(int *)((int)this + 0x5c),0,0);
    *(undefined4 *)((int)this + 0x5c) = 0;
  }
  *(undefined4 *)((int)this + 0x5c) = param_1;
  uVar1 = F_00513f60(param_1,0,0);
  return uVar1;
}

/* ref: FUN_009f14d0 */
unsigned int F_009f14d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f14d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  undefined4 local_c;
  
  if (*(int *)this != param_1) {
    *(undefined1 *)((int)this + 8) = 0;
    *(int *)this = param_1;
    return 0;
  }
  if (-1 < *(char *)((int)this + 8)) {
    *(char *)((int)this + 8) = *(char *)((int)this + 8) + -1;
    *(undefined1 *)((int)this + 9) = 0;
    return 0;
  }
  uVar1 = F_00a06520(param_1);
  local_c = (undefined4)(longlong)TRUNC((float10)*(float *)(uVar1 + 4));
  uVar1 = F_00a4b780(local_c);
  *(char *)((int)this + 8) = (char)uVar1;
  *(undefined1 *)((int)this + 9) = 0;
  return 0;
}

/* ref: FUN_009f1540 */
unsigned int F_009f1540(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x9f1540u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  uint uVar1;
  
  if ((char)param_2 != '\0') {
    F_009f14d0(param_1,4);
    return 0;
  }
  uVar1 = F_00a06680(param_3,1);
  F_009f14d0(param_1,uVar1);
  return 0;
}

/* ref: FUN_009f1580 */
uint F_009f1580(unsigned int gen_a0)
{
  GEN_ENTER(0x9f1580u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  uVar1 = REFG(float, 0x1087f04);
  *in_ecx = 0;
  in_ecx[1] = uVar1;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_009f15b0 */
byte F_009f15b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9f15b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (((*(byte *)(in_ecx + 0x10) & 1) != 0) && (*(int *)(in_ecx + 0x14) != 0)) {
    return *(int *)(in_ecx + 0x18) != 0;
  }
  return 0;
}

/* ref: FUN_009f15d0 */
uint F_009f15d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9f15d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int iVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  iVar1 = *((int *)GEN_TOP((*(int *)((int)pvVar2 + 0x2c) + 4)));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar1 + 4) + 8))))(iVar1 + 4,param_1);
  return uVar3;
}

/* ref: FUN_009f1600 */
uint F_009f1600(unsigned int gen_a0)
{
  GEN_ENTER(0x9f1600u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  if ((char)param_1 != '\0') {
    F_00d9be90();
    F_00d9f270();
    uVar2 = F_00d9c700();
    return uVar2;
  }
  F_00d9bb50();
  piVar3 = (int *)F_00d9b8f0();
  iVar1 = *(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4);
  ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3,*(undefined4 *)(iVar1 + 0x1bc),3);
  uVar2 = 0;
  if (*(int *)(iVar1 + 0x1bc) != 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),*(int *)(iVar1 + 0x1bc));
    *(undefined4 *)(iVar1 + 0x1bc) = 0;
  }
  *(undefined4 *)(iVar1 + 0x1bc) = 0;
  return uVar2;
}

/* ref: FUN_009f1680 */
uint F_009f1680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f1680u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  int iVar2;
  uint uVar3;
  
  F_009fb280(*(undefined4 *)(param_1 + 0x1c),*(float *)(param_2 + 4));
  if (0 < (short)*(ushort *)(param_2 + 0xe)) {
    iVar2 = *(int *)(param_1 + 0x1c);
    fVar1 = ((float)GEN_TOF(((float10)*(ushort *)(param_2 + 0xe) / (float10)*(double *)&REFG(undefined, 0x1088070))));
    *(float *)(iVar2 + 0x7c) = fVar1;
    if ((float10)*(float *)(iVar2 + 8) < (float10)fVar1) {
      *(float *)(iVar2 + 8) = fVar1;
    }
  }
  uVar3 = (uint)*(ushort *)(param_2 + 0x10);
  if (0 < (short)*(ushort *)(param_2 + 0x10)) {
    uVar3 = F_009fd340(param_1,uVar3);
  }
  return uVar3;
}

/* ref: FUN_009f16f0 */
byte F_009f16f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f16f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)(in_ecx + 0xb4 + param_2 * 4);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x14) != 0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_009f1720 */
uint F_009f1720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f1720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined * this_00;
  undefined4 * puVar5;
  int iVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  
  (*(uint *)(gen_frame + 0xac)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb0);
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = param_1;
  if (*(char *)((int)this + 0x59) == '\0') {
    puVar7 = &REFG(float, 0x1302d00);
    puVar5 = param_1;
  }
  else {
    uVar4 = F_00623320(*(undefined * PTR32 *)((int)this + 0x54),
                         (uint)(ushort)(*(short *)((int)this + 0x40) << 0xc |
                                       *(ushort *)((int)this + 0x42)));
    F_004ef350(((undefined4 *)(gen_frame + 0x60)),uVar4,0x1302d00);
    iVar6 = (int)*(short *)((int)this + 0x42);
    this_00 = (undefined *)F_006232c0(*(undefined4 *)((int)this + 0x54),
                                   (uint)*(ushort *)((int)this + 0x40));
    if ((*((byte *)GEN_TOP((*(int *)((int)this_00 + 0x1c) + iVar6 * 4))) & 2) == 0) {
      puVar7 = ((undefined4 *)GEN_TOP((iVar6 * 0x30 + *(int *)((int)this_00 + 0x10))));
    }
    else {
      puVar7 = (undefined4 *)F_00d31930(this_00,iVar6);
    }
    uVar1 = puVar7[5];
    uVar2 = puVar7[6];
    uVar3 = puVar7[7];
    (*(undefined4 *)(gen_frame + 0x0)) = puVar7[4];
    (*(undefined4 *)(gen_frame + 0x4)) = uVar1;
    (*(undefined4 *)(gen_frame + 0x8)) = uVar2;
    (*(undefined4 *)(gen_frame + 0xc)) = uVar3;
    uVar1 = *puVar7;
    uVar2 = puVar7[1];
    uVar3 = puVar7[2];
    F_004ef0c0(((undefined1 *)(gen_frame + 0x20)),(uint)&(*(undefined4 *)(gen_frame + 0x0)));
    F_004ef350(((undefined4 *)(gen_frame + 0x60)),(uint)((undefined4 *)(gen_frame + 0x60)),(uint)((undefined1 *)(gen_frame + 0x20)));
    (*(undefined4 *)(gen_frame + 0x90)) = uVar1;
    (*(undefined4 *)(gen_frame + 0x94)) = uVar2;
    (*(undefined4 *)(gen_frame + 0x98)) = uVar3;
    puVar7 = ((undefined4 *)(gen_frame + 0x60));
    puVar5 = (*(undefined4 * PTR32 *)(gen_frame + 0x1c));
  }
  puVar8 = puVar5;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = puVar5;
  F_00c47745((*(uint *)(gen_frame + 0xac)) ^ (uint)(uint)(gen_frame + 0xb0));
  return (uint)puVar5;
}

/* ref: FUN_009f1940 */
uint F_009f1940(unsigned int gen_a0)
{
  GEN_ENTER(0x9f1940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)((int)this + 0x40) != 0) {
    iVar1 = *(int *)((int)this + 0x40) + -0x10;
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))
                        (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),iVar1);
    }
    *(undefined4 *)((int)this + 0x40) = 0;
  }
  return uVar2;
}

/* ref: FUN_009f1970 */
uint F_009f1970(unsigned int gen_a0)
{
  GEN_ENTER(0x9f1970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  uint local_8;
  
  local_8 = 0;
  if (*(int *)this != 0) {
    do {
      if (*((int *)GEN_TOP((*(int *)((int)this + 0xc) + local_8 * 4))) != 0) {
        iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0xc) + local_8 * 4)));
        if (iVar1 != 0) {
          iVar4 = *(int *)(iVar1 + -0x10) + -1;
          if (-1 < iVar4) {
            puVar5 = ((undefined4 *)GEN_TOP((iVar1 + 0x40 + *(int *)(iVar1 + -0x10) * 0x50)));
            do {
              iVar2 = puVar5[-0x14];
              puVar5 = puVar5 + -0x14;
              if (iVar2 != 0) {
                F_00401530(iVar2,0x60,*(undefined4 *)(iVar2 + -0x10),((code *)REFP(0x9fb5f0)));
                if (iVar2 + -0x10 != 0) {
                  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))
                            (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),iVar2 + -0x10);
                }
                *puVar5 = 0;
              }
              iVar4 = iVar4 + -1;
            } while (-1 < iVar4);
          }
          if (iVar1 + -0x10 != 0) {
            ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),iVar1 + -0x10);
          }
        }
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + local_8 * 4))) = 0;
      }
      local_8 = local_8 + 1;
    } while (local_8 < *(uint *)this);
  }
  uVar3 = 0;
  if (*(int *)((int)this + 0xc) != 0) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),*(int *)((int)this + 0xc));
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  return uVar3;
}

/* ref: FUN_009f1a70 */
uint F_009f1a70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f1a70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * this_00;
  int * piVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  uVar3 = 0;
  if (*(uint *)((int)this + 4) != 0) {
    piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xc) + param_2 * 4))) + 0x34)));
    do {
      if ((*piVar1 != 0) &&
         (this_00 = (undefined *)(*piVar1 * 0x60 + -0x60 + piVar1[3]), this_00 != (undefined *)0x0)) {
        F_009f1720(this_00,param_1);
        return (uint)param_1;
      }
      uVar3 = uVar3 + 1;
      piVar1 = piVar1 + 0x14;
    } while (uVar3 < *(uint *)((int)this + 4));
  }
  puVar4 = &REFG(float, 0x1302d00);
  puVar5 = param_1;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  return (uint)param_1;
}

/* ref: FUN_009f1ae0 */
uint F_009f1ae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f1ae0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x8c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x90);
  uVar1 = F_009f1a70(this,((undefined1 *)(gen_frame + 0x0)),param_2);
  F_0064ce50(*(undefined * PTR32 *)((int)this + 8),((undefined1 *)(gen_frame + 0x40)),0);
  F_004ef350(param_1,uVar1,(uint)((undefined1 *)(gen_frame + 0x40)));
  F_00c47745((*(uint *)(gen_frame + 0x8c)) ^ (uint)(uint)(gen_frame + 0x90));
  return param_1;
}

/* ref: FUN_009f1b60 */
uint F_009f1b60(unsigned int gen_a0)
{
  GEN_ENTER(0x9f1b60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00d42330(this,8,(float)(float10)1);
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)((int)this + 0x20) = 0;
  *(undefined1 *)((int)this + 0x50) = 0;
  *(undefined1 *)((int)this + 0x80) = 0;
  *(undefined1 *)((int)this + 0xb0) = 0;
  return (uint)this;
}

/* ref: FUN_009f26e0 */
unsigned int F_009f26e0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x9f26e0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  undefined * this;
  undefined4 uVar1;
  undefined4 * puVar2;
  int * piVar3;
  int iVar4;
  
  if ((*(char *)(param_1 + 0x18) != '\0') && (param_1[0x17] != 0)) {
    F_00d31730((undefined *)param_1[0x15]);
    this = (undefined *)param_1[0x15];
    F_00d31f70(this);
    F_00d31b70(this);
    param_1[3] = 0x3f800000;
    param_1[4] = 0x3f800000;
    param_1[5] = 0x3f800000;
    param_1[6] = 0x3f800000;
    param_1[7] = 0x3f800000;
    param_1[8] = 0x3f800000;
    param_1[9] = 0x3f800000;
    param_1[10] = 0x3f800000;
    param_1[0xb] = 0x3f800000;
    param_1[0xc] = 0x3f800000;
    param_1[0xd] = 0x3f800000;
    param_1[0xe] = 0x3f800000;
    param_1[0xf] = 0x3f800000;
    param_1[0x10] = 0x3f800000;
    param_1[0x11] = 0x3f800000;
    param_1[0x12] = 0x3f800000;
    piVar3 = (int *)param_1[0x14];
    if (piVar3[5] != 0) {
      ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,(undefined4)gen_fl2bits(param_2));
      uVar1 = *(undefined4 *)((int)param_1[0x15] + 0x30);
      puVar2 = (undefined4 *)F_00d314f0((undefined *)param_1[0x15]);
      ((code *)*(gen_code32 *)(*(int *)param_1[0x14] + 0x10))((int *)param_1[0x14],*puVar2,uVar1);
      piVar3 = (int *)F_00d32a50((undefined *)param_1[0x15]);
      uVar1 = REFG(float, 0x1087f04);
      iVar4 = 4;
      puVar2 = (undefined4 *)*piVar3;
      do {
        param_1[3] = puVar2[0xc];
        param_1[4] = puVar2[0xd];
        param_1[5] = puVar2[0xe];
        param_1[6] = uVar1;
        iVar4 = iVar4 + -1;
        puVar2 = puVar2 + 0xc;
        param_1 = param_1 + 4;
      } while (iVar4 != 0);
    }
  }
  return 0;
}

/* ref: FUN_009f27e0 */
unsigned int F_009f27e0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x9f27e0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  undefined * this;
  undefined4 uVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int * piVar5;
  int iVar6;
  
  for (puVar2 = param_1; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)puVar2[2]) {
    if ((*(char *)(puVar2 + 0x18) != '\0') && (puVar2[0x17] != 0)) {
      F_00d31730((undefined *)puVar2[0x15]);
      this = (undefined *)puVar2[0x15];
      F_00d31f70(this);
      F_00d31b70(this);
      puVar2[3] = 0x3f800000;
      puVar2[4] = 0x3f800000;
      puVar2[5] = 0x3f800000;
      puVar2[6] = 0x3f800000;
      puVar2[7] = 0x3f800000;
      puVar2[8] = 0x3f800000;
      puVar2[9] = 0x3f800000;
      puVar2[10] = 0x3f800000;
      puVar2[0xb] = 0x3f800000;
      puVar2[0xc] = 0x3f800000;
      puVar2[0xd] = 0x3f800000;
      puVar2[0xe] = 0x3f800000;
      puVar2[0xf] = 0x3f800000;
      puVar2[0x10] = 0x3f800000;
      puVar2[0x11] = 0x3f800000;
      puVar2[0x12] = 0x3f800000;
      piVar5 = (int *)puVar2[0x14];
      if (piVar5[5] != 0) {
        ((code *)*(gen_code32 *)(*piVar5 + 0xc))(piVar5,(undefined4)gen_fl2bits(param_2));
        uVar1 = *(undefined4 *)((int)puVar2[0x15] + 0x30);
        puVar4 = (undefined4 *)F_00d314f0((undefined *)puVar2[0x15]);
        ((code *)*(gen_code32 *)(*(int *)puVar2[0x14] + 0x10))((int *)puVar2[0x14],*puVar4,uVar1);
        piVar5 = (int *)F_00d32a50((undefined *)puVar2[0x15]);
        uVar1 = REFG(float, 0x1087f04);
        iVar6 = 4;
        puVar4 = (undefined4 *)*piVar5;
        puVar3 = puVar2;
        do {
          puVar3[3] = puVar4[0xc];
          puVar3[4] = puVar4[0xd];
          puVar3[5] = puVar4[0xe];
          puVar3[6] = uVar1;
          iVar6 = iVar6 + -1;
          puVar4 = puVar4 + 0xc;
          puVar3 = puVar3 + 4;
        } while (iVar6 != 0);
      }
    }
  }
  return 0;
}

/* ref: FUN_009f28f0 */
unsigned int F_009f28f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9f28f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x18);
  *(undefined4 *)((int)this + 0x14) = 0;
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x20) != 0) {
      F_00406b30(*(int *)(iVar1 + 0x20));
      *(undefined4 *)(iVar1 + 0x20) = 0;
    }
    F_00406ad0(iVar1);
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  return 0;
}

/* ref: FUN_009f2930 */
uint F_009f2930(void)
{
  GEN_ENTER(0x9f2930u, 0u, 0u, 0u, 0u);
  undefined * pvVar1;
  uint uVar2;
  LPVOID pvVar3;
  uint uVar4;
  
  uVar4 = 0;
  do {
    uVar2 = 0;
    if (*(int *)((int)&REFG(undefined4, 0x14a2420) + uVar4) != 0) {
      uVar2 = F_00a1ac10(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x11ac),*(int *)((int)&REFG(undefined4, 0x14a2420) + uVar4));
      *(undefined4 *)((int)&REFG(undefined4, 0x14a2420) + uVar4) = 0;
    }
    uVar4 = uVar4 + 4;
  } while (uVar4 < 8);
  if (REFG(int * PTR32, 0x14a242c) != (int *)0x0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x14a242c) + 0x10))))(REFG(int * PTR32, 0x14a242c));
    uVar2 = F_00d91840(REFG(int * PTR32, 0x14a242c));
    REFG(int * PTR32, 0x14a242c) = (int *)0x0;
  }
  pvVar1 = REFG(void * PTR32, 0x14a2430);
  if (REFG(void * PTR32, 0x14a2430) != (undefined *)0x0) {
    F_00d96d40(REFG(void * PTR32, 0x14a2430));
    pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar3 + 0x2c) + 8))))
                      (*(int * PTR32 *)((int)pvVar3 + 0x2c),pvVar1,0x290);
    REFG(void * PTR32, 0x14a2430) = (undefined *)0x0;
  }
  return uVar2;
}

/* ref: FUN_009f29c0 */
byte F_009f29c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9f29c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x1c) != (undefined *)0x0) {
    F_009fe970(*(undefined * PTR32 *)((int)this + 0x1c),(int)this + 8);
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x1c);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  if (*(int *)((int)this + 0x20) != 0) {
    F_0050c620(*(int *)((int)this + 0x20),0,0);
    *(undefined4 *)((int)this + 0x20) = 0;
  }
  return 1;
}

/* ref: FUN_009f2a10 */
unsigned int F_009f2a10(unsigned int gen_a0)
{
  GEN_ENTER(0x9f2a10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  if (*(int *)((int)this + 0x18) != 0) {
    puVar2 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x14)));
    while (puVar2 != *(undefined4 * PTR32 *)((int)this + 0x14)) {
      if (*(char *)((int)puVar2 + 0x11) == '\0') {
        puVar3 = (undefined4 *)puVar2[2];
        if (*(char *)((int)puVar3 + 0x11) == '\0') {
          cVar1 = *(char *)((int)*puVar3 + 0x11);
          puVar2 = puVar3;
          puVar3 = (undefined4 *)*puVar3;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*puVar3 + 0x11);
            puVar2 = puVar3;
            puVar3 = (undefined4 *)*puVar3;
          }
        }
        else {
          cVar1 = *(char *)((int)puVar2[1] + 0x11);
          puVar4 = (undefined4 *)puVar2[1];
          puVar3 = puVar2;
          while ((puVar2 = puVar4, cVar1 == '\0' && (puVar3 == (undefined4 *)puVar2[2]))) {
            cVar1 = *(char *)((int)puVar2[1] + 0x11);
            puVar4 = (undefined4 *)puVar2[1];
            puVar3 = puVar2;
          }
        }
      }
    }
    return 0;
  }
  return 0;
}

/* ref: FUN_009f2ac0 */
uint F_009f2ac0(unsigned int gen_a0)
{
  GEN_ENTER(0x9f2ac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (*(uint *)((int)this + 0x18) != 0) {
    puVar2 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x14)));
    while (puVar2 != *(undefined4 * PTR32 *)((int)this + 0x14)) {
      uVar5 = uVar5 + *((int *)GEN_TOP((*(int *)(puVar2[3] + 0x1c) + 0x44)));
      if (*(char *)((int)puVar2 + 0x11) == '\0') {
        puVar3 = (undefined4 *)puVar2[2];
        if (*(char *)((int)puVar3 + 0x11) == '\0') {
          cVar1 = *(char *)((int)*puVar3 + 0x11);
          puVar2 = puVar3;
          puVar3 = (undefined4 *)*puVar3;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*puVar3 + 0x11);
            puVar2 = puVar3;
            puVar3 = (undefined4 *)*puVar3;
          }
        }
        else {
          cVar1 = *(char *)((int)puVar2[1] + 0x11);
          puVar4 = (undefined4 *)puVar2[1];
          puVar3 = puVar2;
          while ((puVar2 = puVar4, cVar1 == '\0' && (puVar3 == (undefined4 *)puVar2[2]))) {
            cVar1 = *(char *)((int)puVar2[1] + 0x11);
            puVar4 = (undefined4 *)puVar2[1];
            puVar3 = puVar2;
          }
        }
      }
    }
    uVar5 = uVar5 / *(uint *)((int)this + 0x18);
  }
  return uVar5;
}

/* ref: FUN_009f2ba0 */
float F_009f2ba0(unsigned int gen_a0)
{
  GEN_ENTER(0x9f2ba0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  char cVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  float10 fVar7;
  float local_8;
  
  iVar3 = *(int *)((int)this + 0x18);
  if (iVar3 != 0) {
    puVar4 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x14)));
    local_8 = 0.0;
    fVar1 = local_8;
    while (puVar4 != *(undefined4 * PTR32 *)((int)this + 0x14)) {
      fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((*(int *)(puVar4[3] + 0x1c) + 0x40))) + (float10)fVar1)));
      if (*(char *)((int)puVar4 + 0x11) == '\0') {
        puVar5 = (undefined4 *)puVar4[2];
        if (*(char *)((int)puVar5 + 0x11) == '\0') {
          cVar2 = *(char *)((int)*puVar5 + 0x11);
          puVar4 = puVar5;
          puVar5 = (undefined4 *)*puVar5;
          while (cVar2 == '\0') {
            cVar2 = *(char *)((int)*puVar5 + 0x11);
            puVar4 = puVar5;
            puVar5 = (undefined4 *)*puVar5;
          }
        }
        else {
          cVar2 = *(char *)((int)puVar4[1] + 0x11);
          puVar6 = (undefined4 *)puVar4[1];
          puVar5 = puVar4;
          while ((puVar4 = puVar6, cVar2 == '\0' && (puVar5 == (undefined4 *)puVar4[2]))) {
            cVar2 = *(char *)((int)puVar4[1] + 0x11);
            puVar6 = (undefined4 *)puVar4[1];
            puVar5 = puVar4;
          }
        }
      }
    }
    fVar7 = (float10)iVar3;
    if (iVar3 < 0) {
      fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    return (float)((float10)fVar1 / fVar7);
  }
  return (float)(float10)0;
}

/* ref: FUN_009f2c50 */
float F_009f2c50(unsigned int gen_a0)
{
  GEN_ENTER(0x9f2c50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  char cVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  float10 fVar7;
  float local_8;
  
  iVar3 = *(int *)((int)this + 0x18);
  if (iVar3 != 0) {
    puVar4 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x14)));
    local_8 = 0.0;
    fVar1 = local_8;
    while (puVar4 != *(undefined4 * PTR32 *)((int)this + 0x14)) {
      fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((*(int *)(puVar4[3] + 0x1c) + 8))) + (float10)fVar1)));
      if (*(char *)((int)puVar4 + 0x11) == '\0') {
        puVar5 = (undefined4 *)puVar4[2];
        if (*(char *)((int)puVar5 + 0x11) == '\0') {
          cVar2 = *(char *)((int)*puVar5 + 0x11);
          puVar4 = puVar5;
          puVar5 = (undefined4 *)*puVar5;
          while (cVar2 == '\0') {
            cVar2 = *(char *)((int)*puVar5 + 0x11);
            puVar4 = puVar5;
            puVar5 = (undefined4 *)*puVar5;
          }
        }
        else {
          cVar2 = *(char *)((int)puVar4[1] + 0x11);
          puVar6 = (undefined4 *)puVar4[1];
          puVar5 = puVar4;
          while ((puVar4 = puVar6, cVar2 == '\0' && (puVar5 == (undefined4 *)puVar4[2]))) {
            cVar2 = *(char *)((int)puVar4[1] + 0x11);
            puVar6 = (undefined4 *)puVar4[1];
            puVar5 = puVar4;
          }
        }
      }
    }
    fVar7 = (float10)iVar3;
    if (iVar3 < 0) {
      fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    return (float)((float10)fVar1 / fVar7);
  }
  return (float)(float10)0;
}

/* ref: FUN_009f2d00 */
unsigned int F_009f2d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f2d00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x14);
  puVar3 = (undefined4 *)*puVar2;
  while (puVar3 != puVar2) {
    iVar4 = puVar3[3];
    *(undefined2 *)(iVar4 + 0x28) = (undefined2)param_1;
    F_009fd340(iVar4,param_2);
    *(undefined1 *)(iVar4 + 0x2a) = 1;
    if (*(char *)((int)puVar3 + 0x11) == '\0') {
      puVar5 = (undefined4 *)puVar3[2];
      if (*(char *)((int)puVar5 + 0x11) == '\0') {
        cVar1 = *(char *)((int)*puVar5 + 0x11);
        puVar3 = puVar5;
        puVar5 = (undefined4 *)*puVar5;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar5 + 0x11);
          puVar3 = puVar5;
          puVar5 = (undefined4 *)*puVar5;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar3[1] + 0x11);
        puVar6 = (undefined4 *)puVar3[1];
        puVar5 = puVar3;
        while ((puVar3 = puVar6, cVar1 == '\0' && (puVar5 == (undefined4 *)puVar3[2]))) {
          cVar1 = *(char *)((int)puVar3[1] + 0x11);
          puVar6 = (undefined4 *)puVar3[1];
          puVar5 = puVar3;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_009f2d80 */
uint F_009f2d80(unsigned int gen_a0)
{
  GEN_ENTER(0x9f2d80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  double dVar4;
  undefined4 * puVar5;
  undefined4 in_EAX = 0;
  undefined2 uVar7;
  undefined4 * puVar6;
  undefined4 * puVar8;
  undefined2 uVar9;
  float10 fVar11;
  ushort local_c;
  undefined4 * puVar10;
  
  uVar7 = (undefined2)((uint)in_EAX >> 0x10);
  if (*(int *)((int)this + 0x18) != 0) {
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x14);
    puVar8 = (undefined4 *)*puVar2;
    puVar10 = (undefined4 *)0x0;
    uVar9 = 0;
    while (puVar8 != puVar2) {
      dVar4 = (double)((float)GEN_TOF(((float10)*((float *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(puVar8[3] + 0x1c) +
                                                                   0x28))) + 0xc))) + 0xc))) *
                             (float10)*(double *)&REFG(undefined, 0x1088070))));
      fVar11 = F_00c4ed10((uint)(ulonglong)gen_d2bits(dVar4),
                            (int)((ulonglong)gen_d2bits(dVar4) >> 0x20));
      local_c = (ushort)(int)TRUNC(fVar11);
      puVar6 = (undefined4 *)((int)TRUNC(fVar11) & 0xffff);
      if ((ushort)puVar10 < local_c) {
        puVar10 = puVar6;
      }
      uVar9 = SUB42(puVar10,0);
      if (*(char *)((int)puVar8 + 0x11) == '\0') {
        puVar3 = (undefined4 *)puVar8[2];
        if (*(char *)((int)puVar3 + 0x11) == '\0') {
          cVar1 = *(char *)((int)*puVar3 + 0x11);
          puVar6 = (undefined4 *)*puVar3;
          while (puVar8 = puVar3, cVar1 == '\0') {
            cVar1 = *(char *)((int)*puVar6 + 0x11);
            puVar3 = puVar6;
            puVar6 = (undefined4 *)*puVar6;
          }
        }
        else {
          cVar1 = *(char *)((int)puVar8[1] + 0x11);
          puVar5 = (undefined4 *)puVar8[1];
          puVar3 = puVar8;
          while ((puVar6 = puVar5, puVar8 = puVar6, cVar1 == '\0' &&
                 (puVar3 == (undefined4 *)puVar6[2]))) {
            cVar1 = *(char *)((int)puVar6[1] + 0x11);
            puVar5 = (undefined4 *)puVar6[1];
            puVar3 = puVar6;
          }
        }
      }
      uVar7 = (undefined2)((uint)((int)(uintptr_t)puVar6) >> 0x10);
    }
    return CONCAT22(uVar7,uVar9);
  }
  return 0;
}

/* ref: FUN_009f2ed0 */
byte F_009f2ed0(unsigned int gen_a0)
{
  GEN_ENTER(0x9f2ed0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x14)));
  if (piVar1 != *(int * PTR32 *)((int)this + 0x14)) {
    uVar2 = F_00500ae0(*(undefined4 *)(REFG(int, 0x137129c) + 0x60),
                         (uint)*((byte *)GEN_TOP((*(int *)(piVar1[3] + 0x24) + 0xe))));
    return (byte)(*(uint *)(uVar2 + 8) >> 3) & 1;
  }
  return 0;
}

/* ref: FUN_009f2f00 */
byte F_009f2f00(unsigned int gen_a0)
{
  GEN_ENTER(0x9f2f00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x14)));
  if (piVar1 != *(int * PTR32 *)((int)this + 0x14)) {
    uVar2 = F_00500ae0(*(undefined4 *)(REFG(int, 0x137129c) + 0x60),
                         (uint)*((byte *)GEN_TOP((*(int *)(piVar1[3] + 0x24) + 0xe))));
    return (byte)(*(uint *)(uVar2 + 8) >> 2) & 1;
  }
  return 0;
}

/* ref: FUN_009f2f30 */
byte F_009f2f30(unsigned int gen_a0)
{
  GEN_ENTER(0x9f2f30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x14)));
  if (piVar1 != *(int * PTR32 *)((int)this + 0x14)) {
    uVar2 = F_00500ae0(*(undefined4 *)(REFG(int, 0x137129c) + 0x60),
                         (uint)*((byte *)GEN_TOP((*(int *)(piVar1[3] + 0x24) + 0xe))));
    return (byte)(*(uint *)(uVar2 + 8) >> 6) & 1;
  }
  return 0;
}

/* ref: FUN_009f2f60 */
uint F_009f2f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f2f60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  undefined * this_00;
  undefined4 uVar2;
  ushort uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  uint local_c;
  
  uVar2 = param_1;
  puVar4 = (undefined4 *)((int)this + 4);
  local_c = 0;
  do {
    param_1 = 0;
    puVar5 = puVar4;
    do {
      puVar1 = (undefined4 *)puVar5[1];
      for (puVar7 = (undefined4 *)*puVar5; puVar7 != puVar1; puVar7 = puVar7 + 1) {
        this_00 = (undefined *)*puVar7;
        if ((char)param_2 == '\0') {
          if (this_00 != (undefined *)0x0) {
            uVar6 = F_00505360(this_00,uVar2);
LAB_009f2fce: ;
            if (uVar6 != 0) {
              return uVar6;
            }
          }
        }
        else if (this_00 != (undefined *)0x0) {
          uVar3 = F_005036f0(this_00,uVar2);
          if (-1 < (short)uVar3) {
            uVar6 = F_00505340((undefined *)*puVar7,(uint)uVar3);
            goto LAB_009f2fce;
          }
        }
      }
      param_1 = param_1 + 1;
      puVar5 = puVar5 + 4;
    } while (param_1 < 4);
    local_c = local_c + 1;
    puVar4 = puVar4 + 0x10;
    if (1 < local_c) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_009f3020 */
ushort F_009f3020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f3020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  uint local_c;
  uint local_8;
  
  puVar4 = (undefined4 *)((int)this + 4);
  local_c = 0;
  do {
    local_8 = 0;
    puVar5 = puVar4;
    do {
      puVar1 = (undefined4 *)puVar5[1];
      for (puVar6 = (undefined4 *)*puVar5; puVar6 != puVar1; puVar6 = puVar6 + 1) {
        if ((undefined *)*puVar6 != (undefined *)0x0) {
          uVar2 = F_00503630((undefined *)*puVar6,param_1);
          if (-1 < (short)uVar2) {
            uVar3 = F_00503690(*puVar6,(uint)uVar2);
            return *(ushort *)(uVar3 + 0x20);
          }
        }
      }
      local_8 = local_8 + 1;
      puVar5 = puVar5 + 4;
    } while (local_8 < 4);
    local_c = local_c + 1;
    puVar4 = puVar4 + 0x10;
  } while (local_c < 2);
  return 0xffff;
}

/* ref: FUN_009f30c0 */
byte F_009f30c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f30c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  ushort uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  uint local_c;
  uint local_8;
  
  puVar3 = (undefined4 *)((int)this + 4);
  local_c = 0;
  do {
    local_8 = 0;
    puVar4 = puVar3;
    do {
      puVar1 = (undefined4 *)puVar4[1];
      for (puVar5 = (undefined4 *)*puVar4; puVar5 != puVar1; puVar5 = puVar5 + 1) {
        if (((undefined *)*puVar5 != (undefined *)0x0) &&
           (uVar2 = F_005036b0((undefined *)*puVar5,param_1), -1 < (short)uVar2)) {
          return 1;
        }
      }
      local_8 = local_8 + 1;
      puVar4 = puVar4 + 4;
    } while (local_8 < 4);
    local_c = local_c + 1;
    puVar3 = puVar3 + 0x10;
    if (1 < local_c) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_009f3150 */
uint F_009f3150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f3150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  uint local_c;
  uint local_8;
  
  puVar3 = (undefined4 *)((int)this + 4);
  local_c = 0;
  do {
    local_8 = 0;
    puVar4 = puVar3;
    do {
      puVar1 = (undefined4 *)puVar4[1];
      for (puVar5 = (undefined4 *)*puVar4; puVar5 != puVar1; puVar5 = puVar5 + 1) {
        if (((undefined *)*puVar5 != (undefined *)0x0) &&
           (uVar2 = F_00503790((undefined *)*puVar5,param_1), uVar2 != 0)) {
          return uVar2;
        }
      }
      local_8 = local_8 + 1;
      puVar4 = puVar4 + 4;
    } while (local_8 < 4);
    local_c = local_c + 1;
    puVar3 = puVar3 + 0x10;
    if (1 < local_c) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_009f31d0 */
uint F_009f31d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f31d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  uint local_c;
  uint local_8;
  
  puVar4 = (undefined4 *)((int)this + 4);
  local_c = 0;
  do {
    local_8 = 0;
    puVar5 = puVar4;
    do {
      puVar1 = (undefined4 *)puVar5[1];
      for (puVar6 = (undefined4 *)*puVar5; puVar6 != puVar1; puVar6 = puVar6 + 1) {
        if ((undefined *)*puVar6 != (undefined *)0x0) {
          uVar2 = F_005036b0((undefined *)*puVar6,param_1);
          if (-1 < (short)uVar2) {
            uVar3 = F_005053d0(*puVar6,(uint)uVar2);
            return uVar3;
          }
        }
      }
      local_8 = local_8 + 1;
      puVar5 = puVar5 + 4;
    } while (local_8 < 4);
    local_c = local_c + 1;
    puVar4 = puVar4 + 0x10;
  } while (local_c < 2);
  return 0;
}

/* ref: FUN_009f3260 */
uint F_009f3260(unsigned int gen_a0)
{
  GEN_ENTER(0x9f3260u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  undefined4 * puVar3;
  int * piVar4;
  int * piVar5;
  int iVar6;
  int local_c;
  uint local_8;
  
  local_8 = 0;
  puVar3 = (undefined4 *)((int)this + 4);
  local_c = 2;
  do {
    iVar6 = 4;
    do {
      piVar2 = (int *)puVar3[1];
      for (piVar4 = (int *)*puVar3; piVar4 != piVar2; piVar4 = piVar4 + 1) {
        piVar5 = (int *)(*piVar4 + 0x88);
        LOCK();
        iVar1 = *piVar5;
        *piVar5 = *piVar5;
        UNLOCK();
        if (iVar1 == 2) {
          piVar5 = (int *)(*piVar4 + 0x8c);
          LOCK();
          iVar1 = *piVar5;
          *piVar5 = *piVar5;
          UNLOCK();
          if (iVar1 < 8) {
            local_8 = local_8 + 1;
          }
        }
      }
      puVar3 = puVar3 + 4;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    local_c = local_c + -1;
  } while (local_c != 0);
  return local_8;
}

/* ref: FUN_009f32e0 */
uint F_009f32e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f32e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * puVar1;
  ushort uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  uint * puVar5;
  uint local_c;
  uint local_8;
  
  puVar3 = (undefined4 *)((int)this + 4);
  local_c = 0;
  do {
    local_8 = 0;
    puVar4 = puVar3;
    do {
      puVar1 = (uint *)puVar4[1];
      for (puVar5 = (uint *)*puVar4; puVar5 != puVar1; puVar5 = puVar5 + 1) {
        uVar2 = F_00503630((undefined *)*puVar5,param_1);
        if (-1 < (short)uVar2) {
          return *puVar5;
        }
      }
      local_8 = local_8 + 1;
      puVar4 = puVar4 + 4;
    } while (local_8 < 4);
    local_c = local_c + 1;
    puVar3 = puVar3 + 0x10;
  } while (local_c < 2);
  return 0;
}

/* ref: FUN_009f3370 */
unsigned int F_009f3370(unsigned int gen_a0)
{
  GEN_ENTER(0x9f3370u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00d32a50(*(undefined * PTR32 *)((int)this + 0xbc));
  F_00d31650(*(undefined * PTR32 *)((int)this + 0xc0),uVar1);
  if ((*(int *)((int)this + 0xb8) != 0) && (*((int *)GEN_TOP((*(int *)((int)this + 0xb8) + 0x14))) != 0)) {
    uVar1 = F_00d32a50(*(undefined * PTR32 *)((int)this + 0xc4));
    F_00d31650(*(undefined * PTR32 *)((int)this + 200),uVar1);
  }
  return 0;
}

/* ref: FUN_009f33c0 */
uint F_009f33c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f33c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  uVar3 = 0;
  if (*(uint *)((int)this + 4) != 0) {
    puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xc) + param_2 * 4))) + 0x40)));
    do {
      if ((puVar1[-3] != 0) && ((undefined *)*puVar1 != (undefined *)0x0)) {
        F_009f1720((undefined *)*puVar1,param_1);
        return (uint)param_1;
      }
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 0x14;
    } while (uVar3 < *(uint *)((int)this + 4));
  }
  puVar1 = &REFG(float, 0x1302d00);
  puVar4 = param_1;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar4 = puVar4 + 1;
  }
  return (uint)param_1;
}

/* ref: FUN_009f34a0 */
uint F_009f34a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f34a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined * this_00;
  uint uVar1;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  if (*(char *)((int)this + 0x59) == '\0') {
    *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1302c90));
    param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1302c94));
    param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1302c98));
  }
  else {
    uVar1 = F_00623320(*(undefined * PTR32 *)((int)this + 0x54),
                         (uint)(ushort)(*(short *)((int)this + 0x40) << 0xc |
                                       *(ushort *)((int)this + 0x42)));
    F_009fe820(((undefined1 *)(gen_frame + 0x0)),uVar1);
    F_005fe770(uVar1,(uint)&(*(undefined4 *)(gen_frame + 0x40)));
    (*(undefined4 *)(gen_frame + 0x10)) = (*(undefined4 *)(gen_frame + 0x40));
    (*(undefined4 *)(gen_frame + 0x14)) = (*(undefined4 *)(gen_frame + 0x44));
    (*(undefined4 *)(gen_frame + 0x18)) = (*(undefined4 *)(gen_frame + 0x48));
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x40)) = *(undefined4 *)&REFG(undefined, 0x10e15d0);
    (*(undefined4 *)(gen_frame + 0x44)) = *(undefined4 *)&REFG(undefined, 0x10e15d4);
    (*(undefined4 *)(gen_frame + 0x48)) = *(undefined4 *)&REFG(undefined, 0x10e15d8);
    (*(undefined4 *)(gen_frame + 0x4c)) = *(undefined4 *)&REFG(undefined, 0x10e15dc);
    F_00d950d0(((undefined1 *)(gen_frame + 0x30)),((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x40)));
    iVar2 = (int)*(short *)((int)this + 0x42);
    this_00 = *(undefined * PTR32 *)((int)this + 0x30);
    if ((*((byte *)GEN_TOP((*(int *)((int)this_00 + 0x1c) + iVar2 * 4))) & 2) == 0) {
      uVar1 = iVar2 * 0x30 + *(int *)((int)this_00 + 0x10);
    }
    else {
      uVar1 = F_00d31930(this_00,iVar2);
    }
    F_00d950d0(&(*(undefined4 *)(gen_frame + 0x20)),uVar1 + 0x10,((undefined1 *)(gen_frame + 0x30)));
    *param_1 = (*(undefined4 *)(gen_frame + 0x20));
    param_1[1] = (*(undefined4 *)(gen_frame + 0x24));
    param_1[2] = (*(undefined4 *)(gen_frame + 0x28));
  }
  F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)(uint)(gen_frame + 0x60));
  return (uint)param_1;
}

/* ref: FUN_009f3740 */
uint F_009f3740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f3740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x150];
  float fVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  int iVar5;
  float10 fVar6;
  undefined4 uVar7;
  
  (*(uint *)(gen_frame + 0x13c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x140);
  if (*(char *)((int)this + 0x59) == '\0') {
    *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1375ac0));
    param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1375ac4));
    uVar7 = REFG(float, 0x1375ac8);
  }
  else {
    uVar4 = *(ushort *)((int)this + 0x42);
    (*(ushort *)(gen_frame + 0x2a)) = uVar4;
    *(undefined4 *)&(*(ushort *)(gen_frame + 0x2a)) = CONCAT22((*(undefined2 *)(gen_frame + 0x2c)),uVar4);
    F_0064ce50(*(undefined * PTR32 *)((int)this + 0x54),((undefined1 *)(gen_frame + 0x30)),
                 (uint)(ushort)((ushort)*(byte *)((int)this + 0x40) << 0xc | uVar4 & 0xfff));
    iVar5 = *(int *)((int)this + 0x54);
    fVar1 = *(float *)(iVar5 + 0x10);
    fVar6 = (float10)0;
    fVar2 = *(float *)(iVar5 + 0x14);
    fVar3 = *(float *)(iVar5 + 0x18);
    (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)(iVar5 + 0x20);
    (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(iVar5 + 0x24);
    (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(iVar5 + 0x28);
    uVar7 = *(undefined4 *)(iVar5 + 0x2c);
    (*(float *)(gen_frame + 0x120)) = (float)fVar6;
    (*(float *)(gen_frame + 0x124)) = (float)fVar6;
    (*(undefined4 *)(gen_frame + 0x10)) = REFG(float, 0x1302c60);
    (*(float *)(gen_frame + 0x128)) = (float)fVar6;
    (*(undefined4 *)(gen_frame + 0xf0)) = REFG(float, 0x1302c60);
    (*(undefined4 *)(gen_frame + 0xc)) = uVar7;
    (*(undefined4 *)(gen_frame + 0x14)) = REFG(float, 0x1302c64);
    (*(undefined4 *)(gen_frame + 0x18)) = REFG(float, 0x1302c68);
    (*(undefined4 *)(gen_frame + 0xf4)) = 0;
    (*(undefined4 *)(gen_frame + 0xf8)) = 0;
    (*(undefined4 *)(gen_frame + 0x100)) = 0;
    (*(undefined4 *)(gen_frame + 0x104)) = REFG(float, 0x1302c64);
    (*(undefined4 *)(gen_frame + 0x108)) = 0;
    (*(undefined4 *)(gen_frame + 0x110)) = 0;
    (*(undefined4 *)(gen_frame + 0x114)) = 0;
    (*(undefined4 *)(gen_frame + 0x118)) = REFG(float, 0x1302c68);
    F_004efe70(&(*(undefined4 *)(gen_frame + 0xf0)),(uint)&(*(undefined4 *)(gen_frame + 0x0)));
    (*(float *)(gen_frame + 0x120)) = (float)((float10)(*(float *)(gen_frame + 0x120)) + (float10)fVar1);
    (*(float *)(gen_frame + 0x124)) = (float)((float10)(*(float *)(gen_frame + 0x124)) + (float10)fVar2);
    (*(float *)(gen_frame + 0x128)) = (float)((float10)(*(float *)(gen_frame + 0x128)) + (float10)fVar3);
    F_004f45d0(((undefined1 *)(gen_frame + 0x70)),&(*(undefined4 *)(gen_frame + 0xf0)));
    F_004ef5a0((uint)((undefined1 *)(gen_frame + 0xb0)),(uint)((undefined1 *)(gen_frame + 0x30)),(uint)((undefined1 *)(gen_frame + 0x70)));
    *param_1 = (*(undefined4 *)(gen_frame + 0xe0));
    param_1[1] = (*(undefined4 *)(gen_frame + 0xe4));
    uVar7 = (*(undefined4 *)(gen_frame + 0xe8));
  }
  param_1[2] = uVar7;
  F_00c47745((*(uint *)(gen_frame + 0x13c)) ^ (uint)(uint)(gen_frame + 0x140));
  return (uint)param_1;
}

/* ref: FUN_009f3920 */
uint F_009f3920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f3920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xd0];
  undefined * this_00;
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  (*(uint *)(gen_frame + 0xbc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc0);
  if (*(char *)((int)this + 0x59) == '\0') {
    *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1302c90));
    param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1302c94));
    param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1302c98));
  }
  else {
    uVar3 = F_00623320(*(undefined * PTR32 *)((int)this + 0x54),
                         (uint)(ushort)(*(short *)((int)this + 0x40) << 0xc |
                                       *(ushort *)((int)this + 0x42)));
    F_009fe820(&(*(float *)(gen_frame + 0x0)),uVar3);
    F_005fe770(uVar3,(uint)&(*(undefined4 *)(gen_frame + 0xa0)));
    uVar3 = *(uint *)((int)this + 0x3c);
    (*(undefined4 *)(gen_frame + 0x10)) = (*(undefined4 *)(gen_frame + 0xa0));
    (*(undefined4 *)(gen_frame + 0x14)) = (*(undefined4 *)(gen_frame + 0xa4));
    (*(undefined4 *)(gen_frame + 0x18)) = (*(undefined4 *)(gen_frame + 0xa8));
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(float *)(gen_frame + 0x90)) = (*(float *)(gen_frame + 0x0));
    (*(float *)(gen_frame + 0x94)) = (*(float *)(gen_frame + 0x4));
    (*(float *)(gen_frame + 0x98)) = (*(float *)(gen_frame + 0x8));
    (*(float *)(gen_frame + 0x9c)) = (*(float *)(gen_frame + 0xc));
    if ((uVar3 >> 1 & 1) != 0) {
      uVar1 = *(undefined4 *)((int)this + 0x14);
      uVar2 = *(undefined4 *)((int)this + 0x18);
      (*(undefined4 *)(gen_frame + 0xa0)) = *(undefined4 *)((int)this + 0x10);
      (*(undefined4 *)(gen_frame + 0xa4)) = uVar1;
      (*(undefined4 *)(gen_frame + 0xa8)) = uVar2;
      (*(undefined4 *)(gen_frame + 0xac)) = 0;
      F_00d950d0(&(*(undefined4 *)(gen_frame + 0x30)),&(*(float *)(gen_frame + 0x90)),&(*(undefined4 *)(gen_frame + 0xa0)));
      (*(undefined4 *)(gen_frame + 0xa0)) = (*(undefined4 *)(gen_frame + 0x34));
      (*(undefined4 *)(gen_frame + 0xa4)) = (*(undefined4 *)(gen_frame + 0x34));
      (*(undefined4 *)(gen_frame + 0xa8)) = (*(undefined4 *)(gen_frame + 0x34));
      (*(undefined4 *)(gen_frame + 0xac)) = (*(undefined4 *)(gen_frame + 0x34));
      (*(undefined4 *)(gen_frame + 0x50)) = (*(undefined4 *)(gen_frame + 0x30));
      (*(undefined4 *)(gen_frame + 0x54)) = (*(undefined4 *)(gen_frame + 0x30));
      (*(undefined4 *)(gen_frame + 0x58)) = (*(undefined4 *)(gen_frame + 0x30));
      (*(undefined4 *)(gen_frame + 0x5c)) = (*(undefined4 *)(gen_frame + 0x30));
      (*(undefined4 *)(gen_frame + 0x80)) = (*(undefined4 *)(gen_frame + 0x38));
      (*(undefined4 *)(gen_frame + 0x84)) = (*(undefined4 *)(gen_frame + 0x38));
      (*(undefined4 *)(gen_frame + 0x88)) = (*(undefined4 *)(gen_frame + 0x38));
      (*(undefined4 *)(gen_frame + 0x8c)) = (*(undefined4 *)(gen_frame + 0x38));
      F_00d98cf0(&(*(float *)(gen_frame + 0x70)),&(*(undefined4 *)(gen_frame + 0x80)),&(*(undefined4 *)(gen_frame + 0x50)),&(*(undefined4 *)(gen_frame + 0xa0)));
      fVar9 = (*(float *)(gen_frame + 0x78)) * (*(float *)(gen_frame + 0x90));
      fVar10 = (*(float *)(gen_frame + 0x70)) * (*(float *)(gen_frame + 0x94));
      fVar5 = (*(float *)(gen_frame + 0x74)) * (*(float *)(gen_frame + 0x90));
      fVar6 = (*(float *)(gen_frame + 0x70)) * (*(float *)(gen_frame + 0x90));
      fVar7 = (*(float *)(gen_frame + 0x74)) * (*(float *)(gen_frame + 0x94));
      fVar8 = (*(float *)(gen_frame + 0x78)) * (*(float *)(gen_frame + 0x98));
      (*(float *)(gen_frame + 0x90)) = (((*(float *)(gen_frame + 0x78)) * (*(float *)(gen_frame + 0x94)) - (*(float *)(gen_frame + 0x74)) * (*(float *)(gen_frame + 0x98))) + (*(float *)(gen_frame + 0x9c)) * (*(float *)(gen_frame + 0x70))) +
                 (*(float *)(gen_frame + 0x7c)) * (*(float *)(gen_frame + 0x90));
      (*(float *)(gen_frame + 0x94)) = (((*(float *)(gen_frame + 0x70)) * (*(float *)(gen_frame + 0x98)) - fVar9) + (*(float *)(gen_frame + 0x9c)) * (*(float *)(gen_frame + 0x74))) + (*(float *)(gen_frame + 0x7c)) * (*(float *)(gen_frame + 0x94));
      (*(float *)(gen_frame + 0x98)) = ((fVar5 - fVar10) + (*(float *)(gen_frame + 0x9c)) * (*(float *)(gen_frame + 0x78))) + (*(float *)(gen_frame + 0x7c)) * (*(float *)(gen_frame + 0x98));
      (*(float *)(gen_frame + 0x9c)) = (*(float *)(gen_frame + 0x7c)) * (*(float *)(gen_frame + 0x9c)) - ((fVar7 + fVar6) + fVar8);
    }
    (*(undefined4 *)(gen_frame + 0x60)) = *(undefined4 *)&REFG(undefined, 0x10e15d0);
    (*(undefined4 *)(gen_frame + 0x64)) = *(undefined4 *)&REFG(undefined, 0x10e15d4);
    (*(undefined4 *)(gen_frame + 0x68)) = *(undefined4 *)&REFG(undefined, 0x10e15d8);
    (*(undefined4 *)(gen_frame + 0x6c)) = *(undefined4 *)&REFG(undefined, 0x10e15dc);
    F_00d950d0(((undefined1 *)(gen_frame + 0x40)),&(*(float *)(gen_frame + 0x90)),&(*(undefined4 *)(gen_frame + 0x60)));
    iVar4 = (int)*(short *)((int)this + 0x42);
    this_00 = *(undefined * PTR32 *)((int)this + 0x30);
    if ((*((byte *)GEN_TOP((*(int *)((int)this_00 + 0x1c) + iVar4 * 4))) & 2) == 0) {
      uVar3 = iVar4 * 0x30 + *(int *)((int)this_00 + 0x10);
    }
    else {
      uVar3 = F_00d31930(this_00,iVar4);
    }
    F_00d950d0(&(*(undefined4 *)(gen_frame + 0x20)),uVar3 + 0x10,((undefined1 *)(gen_frame + 0x40)));
    *param_1 = (*(undefined4 *)(gen_frame + 0x20));
    param_1[1] = (*(undefined4 *)(gen_frame + 0x24));
    param_1[2] = (*(undefined4 *)(gen_frame + 0x28));
  }
  F_00c47745((*(uint *)(gen_frame + 0xbc)) ^ (uint)(uint)(gen_frame + 0xc0));
  return (uint)param_1;
}

/* ref: FUN_009f3c60 */
uint F_009f3c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9f3c60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  uint * param_4 = (uint *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  int * piVar5;
  uint uVar6;
  uint uVar7;
  undefined4 * puVar8;
  uint * puVar9;
  int iVar10;
  uint * puVar11;
  uint uVar12;
  uint * puVar13;
  uint uVar14;
  byte * pbVar15;
  undefined * this_00;
  byte * pbVar16;
  bool bVar17;
  
  (*(uint * PTR32 *)(gen_frame + 0x68)) = this;
  if (*(int *)((int)this + 0x40) != 0) {
    iVar10 = *(int *)((int)this + 0x40) + -0x10;
    if (iVar10 != 0) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),iVar10);
    }
    (*(uint * PTR32 *)(gen_frame + 0x68))[0x10] = 0;
  }
  (*(uint * PTR32 *)(gen_frame + 0x68))[0xf] = (*(uint * PTR32 *)(gen_frame + 0x68))[0xf] & 0xfffffffe;
  (*(uint * PTR32 *)(gen_frame + 0x68))[0xd] = 0;
  *(*(uint * PTR32 *)(gen_frame + 0x68)) = 0;
  (*(uint * PTR32 *)(gen_frame + 0x68))[1] = 0;
  (*(uint * PTR32 *)(gen_frame + 0x68))[2] = 0;
  (*(uint * PTR32 *)(gen_frame + 0x68))[3] = 0;
  (*(uint * PTR32 *)(gen_frame + 0x68))[4] = 0;
  (*(uint * PTR32 *)(gen_frame + 0x68))[5] = 0;
  (*(uint * PTR32 *)(gen_frame + 0x68))[6] = 0;
  (*(uint * PTR32 *)(gen_frame + 0x68))[7] = 0;
  puVar13 = param_4;
  puVar9 = (*(uint * PTR32 *)(gen_frame + 0x68));
  for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar9 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar9 = puVar9 + 1;
  }
  pbVar16 = &REFG(undefined1, 0x10e12f8);
  puVar13 = (*(uint * PTR32 *)(gen_frame + 0x68));
  do {
    bVar4 = (byte)*puVar13;
    bVar17 = bVar4 < *pbVar16;
    if (bVar4 != *pbVar16) {
LAB_009f3d01: ;
      iVar10 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
      goto LAB_009f3d06;
    }
    if (bVar4 == 0) break;
    bVar4 = *(byte *)((int)puVar13 + 1);
    bVar17 = bVar4 < pbVar16[1];
    if (bVar4 != pbVar16[1]) goto LAB_009f3d01;
    puVar13 = (uint *)((int)puVar13 + 2);
    pbVar16 = pbVar16 + 2;
  } while (bVar4 != 0);
  iVar10 = 0;
LAB_009f3d06: ;
  if (iVar10 != 0) {
    pbVar16 = &REFG(undefined1, 0x10e1300);
    puVar13 = (*(uint * PTR32 *)(gen_frame + 0x68));
    do {
      bVar4 = (byte)*puVar13;
      bVar17 = bVar4 < *pbVar16;
      if (bVar4 != *pbVar16) {
LAB_009f3d31: ;
        iVar10 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
        goto LAB_009f3d36;
      }
      if (bVar4 == 0) break;
      bVar4 = *(byte *)((int)puVar13 + 1);
      bVar17 = bVar4 < pbVar16[1];
      if (bVar4 != pbVar16[1]) goto LAB_009f3d31;
      puVar13 = (uint *)((int)puVar13 + 2);
      pbVar16 = pbVar16 + 2;
    } while (bVar4 != 0);
    iVar10 = 0;
LAB_009f3d36: ;
    if (iVar10 != 0) goto LAB_009f3d3e;
  }
  (*(uint * PTR32 *)(gen_frame + 0x68))[0xf] = (*(uint * PTR32 *)(gen_frame + 0x68))[0xf] | 2;
LAB_009f3d3e: ;
  (*(uint * PTR32 *)(gen_frame + 0x68))[0xc] = param_2;
  uVar14 = (uint)(byte)param_4[8];
  puVar13 = (*(uint * PTR32 *)(gen_frame + 0x68));
  if (uVar14 != 0) {
    puVar8 = (undefined4 *)F_006232c0(param_2,param_1);
    (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = puVar8;
    puVar13 = (uint *)0x0;
    if (puVar8 != (undefined4 *)0x0) {
      piVar5 = *(int * PTR32 *)(REFG(int, 0x1371270) + 0x18);
      (*(uint * PTR32 *)(gen_frame + 0x5c)) = (uint *)piVar5;
      (*(undefined4 *)(gen_frame + 0x60)) = *puVar8;
      puVar9 = ((uint *)GEN_TOP(((code *)*(gen_code32 *)(*piVar5 + 8))
                                 (piVar5,-(uint)(0xffffffef < uVar14 * 0x60) | uVar14 * 0x60 + 0x10,
                                  0x10)));
      uVar12 = REFG(float, 0x1087f04);
      if (puVar9 == (uint *)0x0) {
        puVar13 = (uint *)0x0;
      }
      else {
        puVar13 = puVar9 + 4;
        *puVar9 = uVar14;
        uVar7 = REFG(float, 0x10e1670);
        uVar6 = REFG(float, 0x108b284);
        iVar10 = uVar14 - 1;
        (*(uint * PTR32 *)(gen_frame + 0x5c)) = puVar13;
        if (-1 < iVar10) {
          puVar9 = puVar9 + 10;
          puVar11 = puVar13;
          do {
            *puVar11 = uVar7;
            puVar9[-5] = uVar7;
            puVar9[-4] = uVar6;
            puVar9[-3] = uVar6;
            puVar9[-2] = 0;
            puVar9[-1] = 0;
            *puVar9 = 0;
            puVar9[2] = 0;
            puVar9[3] = 0;
            puVar9[4] = 0;
            puVar9[6] = 0;
            puVar9[9] = 0;
            puVar9[7] = uVar6;
            puVar9[8] = uVar12;
            *(undefined2 *)(puVar9 + 10) = 0;
            *(undefined2 *)((int)puVar9 + 0x2a) = 0;
            *(undefined2 *)(puVar9 + 0xb) = 0;
            puVar9[0xe] = 0;
            puVar9[0xf] = 0;
            *(undefined2 *)(puVar9 + 0x10) = 0;
            puVar11 = puVar11 + 0x18;
            puVar9 = puVar9 + 0x18;
            iVar10 = iVar10 + -1;
          } while (-1 < iVar10);
        }
      }
      (*(uint * PTR32 *)(gen_frame + 0x68))[0x10] = (uint)puVar13;
      if (uVar14 != 0) {
        (*(int *)(gen_frame + 0x64)) = 0;
        (*(int *)(gen_frame + 0x6c)) = 0;
        (*(uint * PTR32 *)(gen_frame + 0x5c)) = (uint *)uVar14;
        do {
          pbVar15 = &REFG(undefined1, 0x10e1308);
          pbVar16 = (byte *)(param_4[9] + 2 + (*(int *)(gen_frame + 0x6c)));
          do {
            bVar4 = *pbVar16;
            bVar17 = bVar4 < *pbVar15;
            if (bVar4 != *pbVar15) {
LAB_009f3e93: ;
              iVar10 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
              goto LAB_009f3e98;
            }
            if (bVar4 == 0) break;
            bVar4 = pbVar16[1];
            bVar17 = bVar4 < pbVar15[1];
            if (bVar4 != pbVar15[1]) goto LAB_009f3e93;
            pbVar16 = pbVar16 + 2;
            pbVar15 = pbVar15 + 2;
          } while (bVar4 != 0);
          iVar10 = 0;
LAB_009f3e98: ;
          if ((iVar10 != 0) || (puVar13 = (uint *)0x0, param_1 != 1)) {
            uVar14 = param_4[9];
            uVar12 = (uint)*(byte *)(uVar14 + (*(int *)(gen_frame + 0x6c)) + 1);
            iVar10 = *(int *)(param_3 + 8);
            uVar1 = *(undefined4 *)(iVar10 + 0xc + uVar12 * 0x38);
            puVar8 = (undefined4 *)(iVar10 + uVar12 * 0x38);
            (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(iVar10 + 0x10 + uVar12 * 0x38);
            (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(iVar10 + 0x14 + uVar12 * 0x38);
            (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(iVar10 + 0x18 + uVar12 * 0x38);
            (*(undefined4 *)(gen_frame + 0x20)) = puVar8[8];
            (*(undefined4 *)(gen_frame + 0x3c)) = puVar8[0xb];
            (*(undefined4 *)(gen_frame + 0x24)) = puVar8[9];
            uVar2 = puVar8[1];
            (*(undefined4 *)(gen_frame + 0x28)) = puVar8[10];
            uVar3 = puVar8[2];
            (*(undefined4 *)(gen_frame + 0x34)) = puVar8[7];
            (*(undefined4 *)(gen_frame + 0x0)) = *puVar8;
            (*(undefined4 *)(gen_frame + 0x4)) = uVar2;
            (*(undefined4 *)(gen_frame + 0x8)) = uVar3;
            (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
            (*(undefined2 *)(gen_frame + 0x40)) = (undefined2)param_1;
            uVar14 = F_00d32e80((*(undefined4 *)(gen_frame + 0x60)),uVar14 + (*(int *)(gen_frame + 0x6c)) + 2,0);
            (*(short *)(gen_frame + 0x42)) = (short)uVar14;
            puVar13 = (uint *)F_00d32e80((*(undefined4 *)(gen_frame + 0x60)),param_4[9] + 0x22 + (*(int *)(gen_frame + 0x6c)),0);
            puVar9 = (*(uint * PTR32 *)(gen_frame + 0x68));
            (*(short *)(gen_frame + 0x44)) = (short)puVar13;
            (*(undefined4 * PTR32 *)(gen_frame + 0x30)) = (*(undefined4 * PTR32 *)(gen_frame + 0x58));
            (*(undefined4 *)(gen_frame + 0x38)) = puVar8[0xc];
            if (((short)uVar14 != -1) && ((short)puVar13 != -1)) {
              this_00 = (undefined *)((*(uint * PTR32 *)(gen_frame + 0x68))[0x10] + (*(int *)(gen_frame + 0x64)));
              *(uint *)((int)this_00 + 0x50) = REFG(float, 0x1087f04);
              F_009fb6f0(this_00,&(*(undefined4 *)(gen_frame + 0x0)));
              puVar13 = (uint *)0x1;
              *(uint *)((int)this_00 + 0x54) = param_2;
              *(undefined2 *)((int)this_00 + 0x58) = 0x100;
              puVar9[0xd] = puVar9[0xd] + 1;
            }
          }
          (*(int *)(gen_frame + 0x6c)) = (*(int *)(gen_frame + 0x6c)) + 0x42;
          (*(int *)(gen_frame + 0x64)) = (*(int *)(gen_frame + 0x64)) + 0x60;
          uVar14 = (int)(*(uint * PTR32 *)(gen_frame + 0x5c)) - 1;
          (*(uint * PTR32 *)(gen_frame + 0x5c)) = (uint *)uVar14;
        } while (uVar14 != 0);
      }
    }
  }
  return (uint)puVar13;
}

/* ref: FUN_009f4000 */
uint F_009f4000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f4000u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  uint * puVar3;
  uint * puVar4;
  uint * puVar5;
  uint uVar6;
  int iVar7;
  int local_10;
  int local_c;
  uint local_8;
  
  F_009f1970(this);
  *(int *)((int)this + 8) = param_1;
  bVar1 = *(byte *)(param_2 + 1);
  *(uint *)this = (uint)bVar1;
  uVar2 = (uint)*(ushort *)(param_1 + 0x40);
  *(uint *)((int)this + 4) = uVar2;
  if (2 < uVar2) {
    uVar2 = 2;
  }
  *(uint *)((int)this + 4) = uVar2;
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),(uint)bVar1 * 4,0x10);
  *(uint *)((int)this + 0xc) = uVar2;
  uVar2 = 0;
  local_8 = 0;
  if (*(int *)this != 0) {
    local_10 = 0;
    do {
      uVar2 = *(uint *)((int)this + 4);
      uVar6 = -(uint)((int)((ulonglong)uVar2 * 0x50 >> 0x20) != 0) | (uint)((ulonglong)uVar2 * 0x50)
      ;
      puVar3 = ((uint *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 8))))
                                 (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),
                                  -(uint)(0xffffffef < uVar6) | uVar6 + 0x10,0x10)));
      if (puVar3 == (uint *)0x0) {
        puVar5 = (uint *)0x0;
      }
      else {
        *puVar3 = uVar2;
        iVar7 = uVar2 - 1;
        puVar5 = puVar3 + 4;
        if (-1 < iVar7) {
          puVar3 = puVar3 + 0xe;
          puVar4 = puVar5;
          do {
            puVar3[-2] = GEN_FLT_TO(puVar3[-2], REFG(float, 0x1375ac0));
            puVar3[-1] = GEN_FLT_TO(puVar3[-1], REFG(float, 0x1375ac4));
            *puVar3 = GEN_FLT_TO(*puVar3, REFG(float, 0x1375ac8));
            puVar3[2] = 0;
            puVar3[3] = 0;
            puVar3[5] = 0;
            puVar3[6] = 0;
            puVar3[4] = 0;
            *puVar4 = 0;
            puVar4[1] = 0;
            puVar4[2] = 0;
            puVar4[3] = 0;
            puVar4[4] = 0;
            puVar4[5] = 0;
            puVar4[6] = 0;
            puVar4[7] = 0;
            puVar4 = puVar4 + 0x14;
            puVar3 = puVar3 + 0x14;
            iVar7 = iVar7 + -1;
          } while (-1 < iVar7);
        }
      }
      *((uint * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + local_8 * 4))) = puVar5;
      iVar7 = *(int *)(param_2 + 0xc);
      uVar2 = 0;
      if (*(int *)((int)this + 4) != 0) {
        local_c = 0;
        do {
          F_009f3c60(((undefined *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xc) + local_8 * 4))) + local_c))),uVar2,
                       param_1,param_2,iVar7 + local_10);
          local_c = local_c + 0x50;
          uVar2 = uVar2 + 1;
        } while (uVar2 < *(uint *)((int)this + 4));
      }
      local_10 = local_10 + 0x28;
      uVar2 = local_8 + 1;
      local_8 = uVar2;
    } while (uVar2 < *(uint *)this);
  }
  return uVar2;
}

/* ref: FUN_009f4180 */
uint F_009f4180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f4180u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * this_00;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(uint *)((int)this + 4) != 0) {
    piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xc) + param_2 * 4))) + 0x34)));
    do {
      if ((*piVar1 != 0) &&
         (this_00 = (undefined *)(*piVar1 * 0x60 + -0x60 + piVar1[3]), this_00 != (undefined *)0x0)) {
        F_009f3740(this_00,param_1);
        return (uint)param_1;
      }
      uVar2 = uVar2 + 1;
      piVar1 = piVar1 + 0x14;
    } while (uVar2 < *(uint *)((int)this + 4));
  }
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1375ac0));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1375ac4));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1375ac8));
  return (uint)param_1;
}

/* ref: FUN_009f4200 */
uint F_009f4200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f4200u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  uVar1 = F_009f4180(this,((undefined1 *)(gen_frame + 0x0)),param_2);
  F_009f0e00(this,param_1,uVar1);
  return param_1;
}

/* ref: FUN_009f4250 */
uint F_009f4250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f4250u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * this_00;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(uint *)((int)this + 4) != 0) {
    piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xc) + param_2 * 4))) + 0x34)));
    do {
      if ((*piVar1 != 0) &&
         (this_00 = (undefined *)(*piVar1 * 0x60 + -0x60 + piVar1[3]), this_00 != (undefined *)0x0)) {
        F_009f3920(this_00,param_1);
        return (uint)param_1;
      }
      uVar2 = uVar2 + 1;
      piVar1 = piVar1 + 0x14;
    } while (uVar2 < *(uint *)((int)this + 4));
  }
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1302c90));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1302c94));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1302c98));
  return (uint)param_1;
}

/* ref: FUN_009f42d0 */
uint F_009f42d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f42d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  uVar1 = F_009f4250(this,((undefined1 *)(gen_frame + 0x0)),param_2);
  F_009f0e00(this,param_1,uVar1);
  return param_1;
}

/* ref: FUN_009f4320 */
uint F_009f4320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f4320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  ushort uVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  undefined * pvVar6;
  undefined4 * puVar7;
  char * pcVar8;
  
  (*(uint *)(gen_frame + 0x10c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x110);
  pvVar6 = (undefined *)((int)((int)(uintptr_t)param_1) * 0x30 + (int)this);
  pvVar2 = param_1;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case (undefined *)0x0: ;
    uVar3 = F_00623160(*(undefined * PTR32 *)((int)this + 0x10),"j_ude_a_r");
    uVar1 = (ushort)uVar3;
    pcVar8 = "j_te_r";
    break;
  case (undefined *)0x1: ;
    uVar3 = F_00623160(*(undefined * PTR32 *)((int)this + 0x10),"j_ude_a_l");
    uVar1 = (ushort)uVar3;
    pcVar8 = "j_te_l";
    break;
  case (undefined *)0x2: ;
    uVar3 = F_00623160(*(undefined * PTR32 *)((int)this + 0x10),"j_asi_a_r");
    uVar1 = (ushort)uVar3;
    pcVar8 = "j_asi_d_r";
    break;
  case (undefined *)0x3: ;
    uVar3 = F_00623160(*(undefined * PTR32 *)((int)this + 0x10),"j_asi_a_l");
    uVar1 = (ushort)uVar3;
    pcVar8 = "j_asi_d_l";
    break;
  default: ;
    goto switchD_009f4366_default;
  }
  *(ushort *)((int)pvVar6 + 0x30) = uVar1 & 0xfff;
  uVar3 = F_00623160(*(undefined * PTR32 *)((int)this + 0x10),pcVar8);
  pvVar2 = (undefined *)(uVar3 & 0xffff0fff);
  *(ushort *)((int)pvVar6 + 0x32) = (ushort)uVar3 & 0xfff;
switchD_009f4366_default: ;
  if ((*(short *)((int)pvVar6 + 0x30) == 0xfff) ||
     (pvVar2 = (undefined *)0xfff, *(short *)((int)pvVar6 + 0x32) == 0xfff)) {
    *(undefined1 *)((int)pvVar6 + 0x20) = 0;
  }
  else {
    *(undefined1 *)((int)pvVar6 + 0x20) = 1;
    uVar3 = F_0054fa20(((undefined4 *)(gen_frame + 0xc0)),*(int *)((int)this + 0x10) + 0x10);
    puVar4 = (undefined4 *)F_004f45d0(((undefined1 *)(gen_frame + 0x0)),uVar3);
    uVar1 = *(ushort *)((int)pvVar6 + 0x32);
    puVar7 = ((undefined4 *)(gen_frame + 0x80));
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar7 = puVar7 + 1;
    }
    F_0064ce50(*(undefined * PTR32 *)((int)this + 0x10),((undefined1 *)(gen_frame + 0x40)),(uint)uVar1);
    puVar4 = (undefined4 *)F_004ef350(((undefined1 *)(gen_frame + 0x0)),(uint)((undefined1 *)(gen_frame + 0x40)),(uint)((undefined4 *)(gen_frame + 0x80)));
    puVar7 = ((undefined4 *)(gen_frame + 0xc0));
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar7 = puVar7 + 1;
    }
    *(undefined4 *)((int)pvVar6 + 0x40) = (*(undefined4 *)(gen_frame + 0xf0));
    *(undefined4 *)((int)pvVar6 + 0x44) = (*(undefined4 *)(gen_frame + 0xf4));
    *(undefined4 *)((int)pvVar6 + 0x48) = (*(undefined4 *)(gen_frame + 0xf8));
    *(undefined4 *)((int)pvVar6 + 0x4c) = 0;
    pvVar2 = pvVar6;
  }
  F_00c47745((*(uint *)(gen_frame + 0x10c)) ^ (uint)(uint)(gen_frame + 0x110));
  return (uint)pvVar2;
}

/* ref: FUN_009f44d0 */
unsigned int F_009f44d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9f44d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x18);
  *(undefined4 *)((int)this + 0x14) = 0;
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x20) != 0) {
      F_00406b30(*(int *)(iVar1 + 0x20));
      *(undefined4 *)(iVar1 + 0x20) = 0;
    }
    F_00406ad0(iVar1);
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  return 0;
}

/* ref: FUN_009f4510 */
uint F_009f4510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f4510u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  undefined4 * this_00;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0x18);
  *(undefined4 *)((int)this + 0x14) = 0;
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x20) != 0) {
      F_00406b30(*(int *)(iVar1 + 0x20));
      *(undefined4 *)(iVar1 + 0x20) = 0;
    }
    F_00406ad0(iVar1);
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  *(int *)((int)this + 0x14) = param_1;
  *(undefined4 *)this = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0x2c);
  this_00 = (undefined4 *)F_00406b90(0x24,0,0);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    *this_00 = ((code *)REFP(0x667370));
    this_00[1] = 0x2000000;
    this_00[5] = 0;
    this_00[6] = 0;
    this_00[7] = 0;
    this_00[8] = 0;
  }
  *(undefined4 * PTR32 *)((int)this + 0x18) = this_00;
  uVar2 = F_00b4e3f0(this_00,param_2);
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return uVar2;
}

/* ref: FUN_009f45b0 */
unsigned int F_009f45b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f45b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x290];
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  double dVar9;
  byte bVar10;
  undefined4 * puVar11;
  float * pfVar12;
  float * pfVar13;
  int iVar14;
  undefined4 * puVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float fVar19;
  float fVar20;
  float in_XMM3_Da = 0;
  float in_XMM4_Da = 0;
  
  (*(uint *)(gen_frame + 0x27c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x280);
  fVar16 = (float10)0;
  iVar14 = *(int *)((int)this + 0x14);
  (*(float *)(gen_frame + 0x80)) = *(float *)(iVar14 + 0x10);
  (*(float *)(gen_frame + 0x84)) = *(float *)(iVar14 + 0x14);
  (*(float *)(gen_frame + 0x88)) = *(float *)(iVar14 + 0x18);
  (*(float *)(gen_frame + 0x90)) = *(float *)(iVar14 + 0x20);
  (*(float *)(gen_frame + 0x94)) = gen_bits2f(*(undefined4 *)(iVar14 + 0x24));
  (*(float *)(gen_frame + 0x98)) = gen_bits2f(*(undefined4 *)(iVar14 + 0x28));
  (*(float *)(gen_frame + 0x9c)) = gen_bits2f(*(undefined4 *)(iVar14 + 0x2c));
  (*(undefined4 *)(gen_frame + 0xa0)) = *(undefined4 *)(iVar14 + 0x30);
  uVar1 = *(undefined4 *)(iVar14 + 0x34);
  (*(undefined4 *)(gen_frame + 0xa4)) = uVar1;
  fVar20 = *(float *)(iVar14 + 0x38);
  (*(float *)(gen_frame + 0x260)) = (float)fVar16;
  (*(float *)(gen_frame + 0x264)) = (float)fVar16;
  (*(float *)(gen_frame + 0x268)) = (float)fVar16;
  (*(undefined4 *)(gen_frame + 0x230)) = *(undefined4 *)(iVar14 + 0x30);
  (*(float * PTR32 *)(gen_frame + 0xdc)) = this;
  (*(float *)(gen_frame + 0xa8)) = fVar20;
  (*(undefined4 *)(gen_frame + 0x234)) = 0;
  (*(undefined4 *)(gen_frame + 0x238)) = 0;
  (*(undefined4 *)(gen_frame + 0x240)) = 0;
  (*(undefined4 *)(gen_frame + 0x244)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x248)) = 0;
  (*(undefined4 *)(gen_frame + 0x250)) = 0;
  (*(undefined4 *)(gen_frame + 0x254)) = 0;
  (*(float *)(gen_frame + 0x258)) = fVar20;
  F_004efe70(&(*(undefined4 *)(gen_frame + 0x230)),(uint)&(*(float *)(gen_frame + 0x90)));
  (*(float *)(gen_frame + 0x260)) = (float)((float10)(*(float *)(gen_frame + 0x260)) + (float10)(*(float *)(gen_frame + 0x80)));
  (*(float *)(gen_frame + 0x150)) = REFG(undefined4, 0x1302cf0);
  (*(float *)(gen_frame + 0x158)) = gen_bits2f(REFG(undefined4, 0x1302cf8));
  iVar14 = *(int *)((int)this + 0x18);
  (*(float *)(gen_frame + 0x154)) = gen_bits2f(REFG(undefined4, 0x1302cf4));
  (*(float *)(gen_frame + 0x264)) = (float)((float10)(*(float *)(gen_frame + 0x264)) + (float10)(*(float *)(gen_frame + 0x84)));
  (*(float *)(gen_frame + 0x15c)) = REFG(undefined4, 0x1302cfc);
  (*(float *)(gen_frame + 0x268)) = (float)((float10)(*(float *)(gen_frame + 0x268)) + (float10)(*(float *)(gen_frame + 0x88)));
  fVar19 = *(float *)(iVar14 + 8);
  (*(float *)(gen_frame + 0x130)) = ((float)GEN_TOF(-(float10)REFG(float, 0x1302c80)));
  (*(float *)(gen_frame + 0x134)) = ((float)GEN_TOF(-(float10)REFG(float, 0x1302c84)));
  (*(float *)(gen_frame + 0x138)) = ((float)GEN_TOF(-(float10)REFG(float, 0x1302c88)));
  fVar16 = (float10)*(double *)&REFG(undefined, 0x10e16e8);
  (*(float *)(gen_frame + 0x140)) = (float)((float10)((float)GEN_TOF(-(float10)REFG(float, 0x1302c80))) * fVar16);
  (*(float *)(gen_frame + 0x144)) = (float)((float10)((float)GEN_TOF(-(float10)REFG(float, 0x1302c84))) * fVar16);
  ((float *)(gen_frame + 0x148))[0] = (float)(fVar16 * (float10)((float)GEN_TOF(-(float10)REFG(float, 0x1302c88))));
  (*(float *)(gen_frame + 0x110)) = fVar19;
  (*(float *)(gen_frame + 0x114)) = *(float *)(iVar14 + 0xc);
  (*(float *)(gen_frame + 0x118)) = *(float *)(iVar14 + 0x10);
  F_004ee670(((undefined1 *)(gen_frame + 0x0)),(uint)&(*(float *)(gen_frame + 0x110)),(uint)&(*(undefined4 *)(gen_frame + 0x230)));
  (*(float *)(gen_frame + 0x40)) = (*(float *)(gen_frame + 0x140));
  (*(float *)(gen_frame + 0x44)) = (*(float *)(gen_frame + 0x144));
  fVar19 = (float)((float10)(*(float *)(gen_frame + 0x80)) + (float10)0);
  (*(float *)(gen_frame + 0x130)) = fVar19;
  (*(float *)(gen_frame + 0x48)) = ((float *)(gen_frame + 0x148))[0];
  iVar14 = 0;
  (*(int *)(gen_frame + 0x12c)) = 0;
  (*(float *)(gen_frame + 0x134)) = (float)((float10)(*(float *)(gen_frame + 0x84)) + (float10)*(float *)&REFG(undefined, 0x133324c));
  (*(float *)(gen_frame + 0x128)) = 0.0;
  fVar2 = (float)((float10)0 + (float10)(*(float *)(gen_frame + 0x88)));
  (*(float *)(gen_frame + 0x138)) = fVar2;
  (*(float *)(gen_frame + 0x30)) = fVar19;
  (*(float *)(gen_frame + 0x34)) = (float)((float10)(*(float *)(gen_frame + 0x84)) + (float10)*(float *)&REFG(undefined, 0x133324c));
  (*(float *)(gen_frame + 0x38)) = fVar2;
  fVar19 = ((float)GEN_TOF(((float10)((float *)(gen_frame + 0x148))[0] * (float10)((float *)(gen_frame + 0x148))[0] +
                  ((float10)(*(float *)(gen_frame + 0x144)) * (float10)(*(float *)(gen_frame + 0x144)) + (float10)(*(float *)(gen_frame + 0x140)) * (float10)(*(float *)(gen_frame + 0x140))
                  ))));
  (*(float *)(gen_frame + 0x164)) = fVar19;
  fVar19 = ((float)GEN_TOF(SQRT((float10)fVar19)));
  (*(float *)(gen_frame + 0x10c)) = fVar19;
  bVar10 = F_00a1c690(&(*(float *)(gen_frame + 0x30)),fVar19,((undefined1 *)(gen_frame + 0x10)),0);
  dVar9 = (*(double *)(gen_frame + 0x168));
  if (bVar10 != 0) {
    (*(float *)(gen_frame + 0x164)) = REFG(float, 0x1087f04);
    (*(float *)((char *)&(*(double *)(gen_frame + 0x168)) + 4)) = 0.0;
    (*(double *)(gen_frame + 0x168)) = gen_bits2d((ulonglong)gen_d2bits(dVar9) & 0xffffffff);
    (*(float *)(gen_frame + 0x128)) = (float)((float10)(*(float *)(gen_frame + 0x84)) - (float10)(*(float *)(gen_frame + 0x14)));
    pfVar12 = &(*(float *)(gen_frame + 0x160));
    fVar16 = (float10)(float)((float10)(*(float *)(gen_frame + 0x84)) - (float10)(*(float *)(gen_frame + 0x14)));
    fVar19 = (float)(fVar16 + fVar16);
    (*(float *)(gen_frame + 0x160)) = fVar19;
    if (!((float10)fVar19 < (float10)1)) {
      pfVar12 = &(*(float *)(gen_frame + 0x164));
    }
    if (!(0.0 < *pfVar12)) {
      pfVar12 = (float *)((int)&(*(double *)(gen_frame + 0x168)) + 4);
    }
    (*(float *)(gen_frame + 0x128)) = (float)((float10)1 - (float10)*pfVar12);
  }
  fVar19 = *((float *)GEN_TOP((*(int *)((int)this + 0x18) + 0x1c)));
  if (fVar19 == 1.4013e-45) {
    pfVar12 = *((float * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x20)));
    (*(float *)(gen_frame + 0x110)) = *pfVar12;
    (*(float *)(gen_frame + 0x114)) = pfVar12[1];
    (*(float *)(gen_frame + 0x118)) = pfVar12[2];
    F_004ee670(&(*(float *)(gen_frame + 0xb0)),(uint)&(*(float *)(gen_frame + 0x110)),(uint)&(*(undefined4 *)(gen_frame + 0x230)));
    fVar16 = (float10)*(float *)&REFG(undefined, 0x133324c);
    (*(float *)(gen_frame + 0x130)) = (float)(fVar16 * (float10)REFG(float, 0x1302c80));
    (*(float *)(gen_frame + 0x220)) = (*(float *)(gen_frame + 0x140));
    (*(float *)(gen_frame + 0x134)) = (float)((float10)REFG(float, 0x1302c84) * fVar16);
    (*(float *)(gen_frame + 0x224)) = (*(float *)(gen_frame + 0x144));
    (*(float *)(gen_frame + 0x228)) = ((float *)(gen_frame + 0x148))[0];
    (*(float *)(gen_frame + 0x138)) = (float)(fVar16 * (float10)REFG(float, 0x1302c88));
    fVar19 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0xb0)) + (float10)(float)(fVar16 * (float10)REFG(float, 0x1302c80)))));
    (*(float *)(gen_frame + 0xe0)) = fVar19;
    fVar2 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0xb4)) + (float10)(float)((float10)REFG(float, 0x1302c84) * fVar16))));
    (*(float *)(gen_frame + 0xe4)) = fVar2;
    fVar3 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0xb8)) + (float10)(float)(fVar16 * (float10)REFG(float, 0x1302c88)))));
    (*(float *)(gen_frame + 0xe8)) = fVar3;
    (*(float *)(gen_frame + 0x210)) = fVar19;
    (*(float *)(gen_frame + 0x214)) = fVar2;
    (*(float *)(gen_frame + 0x218)) = fVar3;
    bVar10 = F_00a1c690(&(*(float *)(gen_frame + 0x210)),(*(float *)(gen_frame + 0x10c)),((undefined1 *)(gen_frame + 0x20)),&(*(float *)(gen_frame + 0xf0)));
    if (bVar10 == 0) goto LAB_009f5105;
    fVar19 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0xf8)) * (float10)REFG(float, 0x1302c88) +
                    ((float10)(*(float *)(gen_frame + 0xf0)) * (float10)REFG(float, 0x1302c80) +
                    (float10)(*(float *)(gen_frame + 0xf4)) * (float10)REFG(float, 0x1302c84)))));
    (*(float *)((char *)&(*(double *)(gen_frame + 0x168)) + 4)) = fVar19;
    (*(double *)(gen_frame + 0x168)) = gen_bits2d(CONCAT44((uint)gen_fl2bits(fVar19),(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x168)) + 0))));
    fVar16 = F_00c4c8d0(fVar20,in_XMM3_Da,in_XMM4_Da,(float10)fVar19);
    fVar20 = (float)fVar16;
    (*(float *)((char *)&(*(double *)(gen_frame + 0x168)) + 4)) = fVar20;
    (*(float *)(gen_frame + 0x160)) = fVar20;
    fVar20 = ((float)GEN_TOF(ABS((float10)fVar20)));
    (*(float *)((char *)&(*(double *)(gen_frame + 0x168)) + 4)) = fVar20;
    (*(double *)(gen_frame + 0x168)) = gen_bits2d(CONCAT44((uint)gen_fl2bits(fVar20),(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x168)) + 0))));
    if (!((float10)*(float *)&REFG(undefined, 0x10e16e4) < (float10)fVar20)) goto LAB_009f5105;
    (*(float *)(gen_frame + 0x110)) = (float)((float10)REFG(float, 0x1302c84) * (float10)(*(float *)(gen_frame + 0xf8)) -
                       (float10)REFG(float, 0x1302c88) * (float10)(*(float *)(gen_frame + 0xf4)));
    (*(float *)(gen_frame + 0x114)) = (float)((float10)(*(float *)(gen_frame + 0xf0)) * (float10)REFG(float, 0x1302c88) -
                       (float10)REFG(float, 0x1302c80) * (float10)(*(float *)(gen_frame + 0xf8)));
    (*(float *)(gen_frame + 0x118)) = (float)((float10)(*(float *)(gen_frame + 0xf4)) * (float10)REFG(float, 0x1302c80) -
                       (float10)REFG(float, 0x1302c84) * (float10)(*(float *)(gen_frame + 0xf0)));
    F_004bd580(&(*(float *)(gen_frame + 0x110)));
    F_0054cfd0(&(*(float *)(gen_frame + 0x150)),&(*(float *)(gen_frame + 0x110)),(*(float *)(gen_frame + 0x160)));
  }
  else {
    if (fVar19 == 0.0) goto LAB_009f5105;
    (*(float *)(gen_frame + 0x164)) = fVar19;
    (*(double *)(gen_frame + 0x168)) = (double)(*(float *)(gen_frame + 0x140));
    (*(double *)(gen_frame + 0x168)) = (double)(*(float *)(gen_frame + 0x144));
    (*(double *)(gen_frame + 0x168)) = (double)((float *)(gen_frame + 0x148))[0];
    do {
      iVar8 = *((int *)GEN_TOP((*(int *)((int)this + 0x18) + 0x20)));
      (*(undefined4 *)(gen_frame + 0x50)) = *(undefined4 *)(iVar8 + iVar14);
      (*(undefined4 *)(gen_frame + 0x54)) = *(undefined4 *)(iVar8 + 4 + iVar14);
      (*(undefined4 *)(gen_frame + 0x58)) = *(undefined4 *)(iVar8 + 8 + iVar14);
      F_004ee670(&(*(float *)(gen_frame + 0x130)),(uint)&(*(undefined4 *)(gen_frame + 0x50)),(uint)&(*(undefined4 *)(gen_frame + 0x230)));
      fVar16 = (float10)*(float *)&REFG(undefined, 0x133324c);
      (*(float *)(gen_frame + 0x60)) = (float)(fVar16 * (float10)REFG(float, 0x1302c80));
      (*(float *)(gen_frame + 0x1e0)) = (*(float *)(gen_frame + 0x140));
      (*(float *)(gen_frame + 0x64)) = (float)((float10)REFG(float, 0x1302c84) * fVar16);
      (*(float *)(gen_frame + 0x1e4)) = (*(float *)(gen_frame + 0x144));
      (*(float *)(gen_frame + 0x1e8)) = ((float *)(gen_frame + 0x148))[0];
      (*(float *)(gen_frame + 0x68)) = (float)(fVar16 * (float10)REFG(float, 0x1302c88));
      fVar19 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x130)) + (float10)(float)(fVar16 * (float10)REFG(float, 0x1302c80)))));
      (*(float *)(gen_frame + 0xb0)) = fVar19;
      fVar2 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x134)) + (float10)(float)((float10)REFG(float, 0x1302c84) * fVar16))));
      (*(float *)(gen_frame + 0xb4)) = fVar2;
      fVar3 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x138)) + (float10)(float)(fVar16 * (float10)REFG(float, 0x1302c88)))));
      (*(float *)(gen_frame + 0xb8)) = fVar3;
      (*(float *)(gen_frame + 0x1d0)) = fVar19;
      (*(float *)(gen_frame + 0x1d4)) = fVar2;
      (*(float *)(gen_frame + 0x1d8)) = fVar3;
      bVar10 = F_00a1c690(&(*(float *)(gen_frame + 0x1d0)),(*(float *)(gen_frame + 0x10c)),&(*(float *)(gen_frame + 0x220)),&(*(float *)(gen_frame + 0xc0)));
      if (bVar10 != 0) {
        fVar19 = (float)((float10)(*(float *)(gen_frame + 0x130)) - (float10)(*(float *)(gen_frame + 0x80)));
        (*(float *)(gen_frame + 0x70)) = fVar19;
        fVar2 = (float)((float10)(*(float *)(gen_frame + 0x134)) - (float10)(*(float *)(gen_frame + 0x84)));
        (*(float *)(gen_frame + 0x74)) = fVar2;
        fVar3 = (float)((float10)(*(float *)(gen_frame + 0x138)) - (float10)(*(float *)(gen_frame + 0x88)));
        (*(float *)(gen_frame + 0x78)) = fVar3;
        fVar4 = (float)((float10)(*(float *)(gen_frame + 0x220)) - (float10)(*(float *)(gen_frame + 0x80)));
        (*(float *)(gen_frame + 0xe0)) = fVar4;
        fVar5 = (float)((float10)(*(float *)(gen_frame + 0x224)) - (float10)(*(float *)(gen_frame + 0x84)));
        (*(float *)(gen_frame + 0xe4)) = fVar5;
        fVar6 = (float)((float10)(*(float *)(gen_frame + 0x228)) - (float10)(*(float *)(gen_frame + 0x88)));
        (*(float *)(gen_frame + 0xe8)) = fVar6;
        fVar7 = ((float)GEN_TOF(((float10)fVar3 * (float10)fVar3 +
                       ((float10)fVar2 * (float10)fVar2 + (float10)fVar19 * (float10)fVar19))));
        (*(float *)((char *)&(*(double *)(gen_frame + 0x168)) + 4)) = fVar7;
        fVar7 = ((float)GEN_TOF(SQRT((float10)fVar7)));
        (*(float *)((char *)&(*(double *)(gen_frame + 0x168)) + 4)) = fVar7;
        fVar7 = (float)((float10)1 / (float10)fVar7);
        (*(float *)((char *)&(*(double *)(gen_frame + 0x168)) + 4)) = fVar7;
        fVar16 = (float10)fVar7;
        (*(float *)(gen_frame + 0xf0)) = (float)(fVar16 * (float10)fVar19);
        (*(float *)(gen_frame + 0xf4)) = (float)((float10)fVar2 * fVar16);
        (*(float *)(gen_frame + 0xf8)) = (float)(fVar16 * (float10)fVar3);
        fVar7 = ((float)GEN_TOF((((float10)fVar4 * (float10)fVar4 + (float10)fVar5 * (float10)fVar5) +
                       (float10)fVar6 * (float10)fVar6)));
        (*(float *)((char *)&(*(double *)(gen_frame + 0x168)) + 4)) = fVar7;
        fVar7 = ((float)GEN_TOF(SQRT((float10)fVar7)));
        (*(float *)((char *)&(*(double *)(gen_frame + 0x168)) + 4)) = fVar7;
        fVar7 = (float)((float10)1 / (float10)fVar7);
        (*(float *)((char *)&(*(double *)(gen_frame + 0x168)) + 4)) = fVar7;
        (*(double *)(gen_frame + 0x168)) = gen_bits2d(CONCAT44((uint)gen_fl2bits(fVar7),(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x168)) + 0))));
        fVar17 = (float10)fVar7;
        (*(float *)(gen_frame + 0xc0)) = (float)(fVar17 * (float10)fVar4);
        (*(float *)(gen_frame + 0xc4)) = (float)((float10)fVar5 * fVar17);
        (*(float *)(gen_frame + 0xc8)) = (float)(fVar17 * (float10)fVar6);
        fVar19 = ((float)GEN_TOF(((float10)(float)(fVar17 * (float10)fVar6) *
                         (float10)(float)(fVar16 * (float10)fVar3) +
                        ((float10)(float)((float10)fVar5 * fVar17) *
                         (float10)(float)((float10)fVar2 * fVar16) +
                        (float10)(float)(fVar16 * (float10)fVar19) *
                        (float10)(float)(fVar17 * (float10)fVar4)))));
        (*(float *)(gen_frame + 0x160)) = fVar19;
        if ((!((float10)fVar19 < (float10)REFG(float, 0x1090708))) && (!(REFG(float, 0x1087f04) < fVar19))) {
          fVar16 = F_00c4c8d0(fVar20,in_XMM3_Da,in_XMM4_Da,(float10)fVar19);
          fVar19 = (float)fVar16;
          (*(float *)((char *)&(*(double *)(gen_frame + 0x168)) + 4)) = fVar19;
          (*(float *)(gen_frame + 0x160)) = fVar19;
          fVar19 = ((float)GEN_TOF(ABS((float10)fVar19)));
          (*(float *)((char *)&(*(double *)(gen_frame + 0x168)) + 4)) = fVar19;
          (*(double *)(gen_frame + 0x168)) = gen_bits2d(CONCAT44((uint)gen_fl2bits(fVar19),(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x168)) + 0))));
          if ((float10)*(float *)&REFG(undefined, 0x10e16e4) < (float10)fVar19) {
            (*(float *)(gen_frame + 0x110)) = (float)((float10)(*(float *)(gen_frame + 0xf4)) * (float10)(*(float *)(gen_frame + 0xc8)) -
                               (float10)(*(float *)(gen_frame + 0xf8)) * (float10)(*(float *)(gen_frame + 0xc4)));
            (*(float *)(gen_frame + 0x114)) = (float)((float10)(*(float *)(gen_frame + 0xc0)) * (float10)(*(float *)(gen_frame + 0xf8)) -
                               (float10)(*(float *)(gen_frame + 0xf0)) * (float10)(*(float *)(gen_frame + 0xc8)));
            (*(float *)(gen_frame + 0x118)) = (float)((float10)(*(float *)(gen_frame + 0xc4)) * (float10)(*(float *)(gen_frame + 0xf0)) -
                               (float10)(*(float *)(gen_frame + 0xf4)) * (float10)(*(float *)(gen_frame + 0xc0)));
            F_004bd580(&(*(float *)(gen_frame + 0x110)));
            if ((*(int *)(gen_frame + 0x12c)) == 0) {
              F_0054cfd0(&(*(float *)(gen_frame + 0x150)),&(*(float *)(gen_frame + 0x110)),(*(float *)(gen_frame + 0x160)));
              (*(int *)(gen_frame + 0x12c)) = (*(int *)(gen_frame + 0x12c)) + 1;
            }
            else {
              F_0054cfd0(((undefined1 *)(gen_frame + 0x20)),&(*(float *)(gen_frame + 0x110)),(*(float *)(gen_frame + 0x160)));
              F_009fac00(&(*(float *)(gen_frame + 0x150)),(uint)&(*(float *)(gen_frame + 0x150)),(uint)((undefined1 *)(gen_frame + 0x20)),*(float *)&REFG(undefined, 0x10e154c));
              (*(int *)(gen_frame + 0x12c)) = (*(int *)(gen_frame + 0x12c)) + 1;
            }
          }
        }
      }
      iVar14 = iVar14 + 0xc;
      fVar19 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x164))) + -1);
      (*(float *)(gen_frame + 0x164)) = fVar19;
    } while (fVar19 != 0.0);
    if ((*(int *)(gen_frame + 0x12c)) == 0) goto LAB_009f5105;
  }
  F_004ef0c0(((undefined1 *)(gen_frame + 0x1f0)),(uint)&(*(float *)(gen_frame + 0x150)));
  F_009fad70(((undefined1 *)(gen_frame + 0x1f0)),in_XMM3_Da,in_XMM4_Da,(uint)&(*(float *)(gen_frame + 0x140)));
  F_004ef0c0(((undefined1 *)(gen_frame + 0x1b0)),(uint)&(*(float *)(gen_frame + 0x90)));
  puVar11 = (undefined4 *)F_004f45d0(((undefined1 *)(gen_frame + 0x1f0)),((undefined1 *)(gen_frame + 0x1b0)));
  puVar15 = ((undefined4 *)(gen_frame + 0x170));
  for (iVar14 = 0x10; iVar14 != 0; iVar14 = iVar14 + -1) {
    *puVar15 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar15 = puVar15 + 1;
  }
  F_004eea10(&(*(float *)(gen_frame + 0x140)),(uint)((undefined4 *)(gen_frame + 0x170)));
  fVar19 = (*(float * PTR32 *)(gen_frame + 0xdc))[6];
  fVar20 = *(float *)((int)gen_fl2bits(fVar19) + 0x14);
  pfVar12 = (float *)((int)gen_fl2bits(fVar19) + 0x14);
  fVar19 = gen_bits2f(*(uint *)((int)gen_fl2bits(fVar19) + 0x14) ^ REFG(uint, 0x10920d0));
  (*(float *)(gen_frame + 0x164)) = fVar19;
  if ((float10)(*(float *)(gen_frame + 0x140)) < (float10)fVar20) {
    pfVar12 = &(*(float *)(gen_frame + 0x140));
  }
  if (!((float10)fVar19 < (float10)*pfVar12)) {
    pfVar12 = &(*(float *)(gen_frame + 0x164));
  }
  pfVar13 = (float *)((int)gen_fl2bits((*(float * PTR32 *)(gen_frame + 0xdc))[6]) + 0x18);
  (*(float *)(gen_frame + 0x140)) = *pfVar12;
  fVar19 = *pfVar13;
  fVar20 = *pfVar13;
  (*(float *)(gen_frame + 0x164)) = gen_bits2f((uint)gen_fl2bits(fVar20) ^ REFG(uint, 0x10920d0));
  if ((float10)((float *)(gen_frame + 0x148))[0] < (float10)fVar19) {
    pfVar13 = ((float *)(gen_frame + 0x148));
  }
  if (!(((float10)GEN_TOD(gen_bits2f((uint)gen_fl2bits(fVar20) ^ REFG(uint, 0x10920d0)))) < (float10)*pfVar13)) {
    pfVar13 = &(*(float *)(gen_frame + 0x164));
  }
  ((float *)(gen_frame + 0x148))[0] = *pfVar13;
  F_004eea10(&(*(float *)(gen_frame + 0x140)),(uint)((undefined1 *)(gen_frame + 0x1b0)));
  fVar20 = (float)((float10)(*(float *)(gen_frame + 0x140)) * (float10)REFG(double, 0x1088108));
  (*(float *)(gen_frame + 0x164)) = fVar20;
  fVar16 = ((float10)GEN_TOD(fsin((float10)fVar20)));
  (*(float *)((char *)&(*(double *)(gen_frame + 0x168)) + 4)) = (float)fVar16;
  (*(float *)(gen_frame + 0x150)) = (float)fVar16;
  (*(float *)(gen_frame + 0x154)) = 0.0;
  (*(float *)(gen_frame + 0x158)) = 0.0;
  fVar16 = ((float10)GEN_TOD(fcos((float10)fVar20)));
  fVar20 = (float)fVar16;
  (*(float *)((char *)&(*(double *)(gen_frame + 0x168)) + 4)) = fVar20;
  (*(double *)(gen_frame + 0x168)) = gen_bits2d(CONCAT44((uint)gen_fl2bits(fVar20),(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x168)) + 0))));
  (*(float *)(gen_frame + 0x15c)) = fVar20;
  F_0054d030(&(*(float *)(gen_frame + 0x150)),(*(float *)(gen_frame + 0x144)));
  F_0054d0f0(&(*(float *)(gen_frame + 0x150)),((float *)(gen_frame + 0x148))[0]);
  this = (*(float * PTR32 *)(gen_frame + 0xdc));
LAB_009f5105: ;
  F_009fac00(&(*(float *)(gen_frame + 0x150)),0x1302cf0,(uint)&(*(float *)(gen_frame + 0x150)),(*(float *)(gen_frame + 0x128)));
  F_009fac00(this,(uint)this,(uint)&(*(float *)(gen_frame + 0x150)),REFG(float, 0x10a0da0));
  fVar20 = *(float *)((int)this + 4);
  fVar19 = *(float *)((int)this + 8);
  (*(float *)(gen_frame + 0x150)) = *(float *)this;
  (*(float *)(gen_frame + 0x154)) = fVar20;
  (*(float *)(gen_frame + 0x158)) = fVar19;
  (*(float *)(gen_frame + 0x15c)) = *(float *)((int)this + 0xc);
  F_004f6d80(&(*(float *)(gen_frame + 0x150)),(uint)&(*(float *)(gen_frame + 0x90)),(uint)&(*(float *)(gen_frame + 0x150)));
  fVar20 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x15c)) * (float10)(*(float *)(gen_frame + 0x15c)) +
                  ((float10)(*(float *)(gen_frame + 0x158)) * (float10)(*(float *)(gen_frame + 0x158)) +
                  ((float10)(*(float *)(gen_frame + 0x150)) * (float10)(*(float *)(gen_frame + 0x150)) + (float10)(*(float *)(gen_frame + 0x154)) * (float10)(*(float *)(gen_frame + 0x154))
                  )))));
  (*(float *)((char *)&(*(double *)(gen_frame + 0x168)) + 4)) = fVar20;
  fVar20 = ((float)GEN_TOF(SQRT((float10)fVar20)));
  (*(float *)((char *)&(*(double *)(gen_frame + 0x168)) + 4)) = fVar20;
  fVar20 = (float)((float10)1 / (float10)fVar20);
  (*(float *)((char *)&(*(double *)(gen_frame + 0x168)) + 4)) = fVar20;
  (*(double *)(gen_frame + 0x168)) = gen_bits2d(CONCAT44((uint)gen_fl2bits(fVar20),(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x168)) + 0))));
  fVar16 = (float10)(*(float *)(gen_frame + 0x150));
  fVar17 = (float10)fVar20;
  (*(float *)(gen_frame + 0x150)) = (float)(fVar17 * fVar16);
  fVar18 = (float10)(*(float *)(gen_frame + 0x154));
  (*(float *)(gen_frame + 0x90)) = (float)(fVar17 * fVar16);
  (*(float *)(gen_frame + 0x154)) = (float)(fVar18 * fVar17);
  fVar16 = (float10)(*(float *)(gen_frame + 0x158));
  (*(float *)(gen_frame + 0x94)) = (float)(fVar18 * fVar17);
  (*(float *)(gen_frame + 0x158)) = (float)(fVar16 * fVar17);
  (*(float *)(gen_frame + 0x98)) = (float)(fVar16 * fVar17);
  fVar16 = (float10)(*(float *)(gen_frame + 0x15c));
  (*(float *)(gen_frame + 0x15c)) = (float)(fVar17 * fVar16);
  (*(float *)(gen_frame + 0x9c)) = (float)(fVar17 * fVar16);
  F_00623060(*(undefined * PTR32 *)((int)this + 0x14),&(*(float *)(gen_frame + 0x80)));
  F_00c47745((*(uint *)(gen_frame + 0x27c)) ^ (uint)(uint)(gen_frame + 0x280));
  return 0;
}

/* ref: FUN_009f5260 */
uint F_009f5260(unsigned int gen_a0)
{
  GEN_ENTER(0x9f5260u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int * piVar5;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10e16d4));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[5])REFP(0x10e16bc));
  piVar5 = (int *)((int)this + 0xc);
  iVar4 = 4;
  do {
    if (*piVar5 != 0) {
      ((code *)*(gen_code32 *)(*(int *)*piVar5 + 4))((int *)*piVar5,this);
    }
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  iVar4 = *(int *)((int)this + 0x1c);
  if (iVar4 != 0) {
    iVar2 = 0;
    if (0 < *(int *)(iVar4 + 0x88)) {
      piVar5 = *(int * PTR32 *)(iVar4 + 0x84);
      do {
        if (*piVar5 == (int)this + 8) goto LAB_009f52c2;
        iVar2 = iVar2 + 1;
        piVar5 = piVar5 + 1;
      } while (iVar2 < *(int *)(iVar4 + 0x88));
    }
    iVar2 = -1;
LAB_009f52c2: ;
    *(int *)(iVar4 + 0x88) = *(int *)(iVar4 + 0x88) + -1;
    if (*(int *)(iVar4 + 0x88) != iVar2) {
      *((undefined4 *)GEN_TOP((*(int *)(iVar4 + 0x84) + iVar2 * 4))) =
           *((undefined4 *)GEN_TOP((*(int *)(iVar4 + 0x84) + *(int *)(iVar4 + 0x88) * 4)));
    }
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x1c);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  uVar3 = 0;
  if (*(int *)((int)this + 0x20) != 0) {
    uVar3 = F_0050c620(*(int *)((int)this + 0x20),0,0);
    *(undefined4 *)((int)this + 0x20) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[5])REFP(0x10e1654));
  return uVar3;
}

/* ref: FUN_009f5320 */
uint F_009f5320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9f5320u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  LPVOID pvVar2;
  undefined * this_00;
  uint uVar3;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 4))))
                              (*(int * PTR32 *)((int)pvVar2 + 0x2c),0xa0)));
  *(undefined2 *)((int)this_00 + 4) = 0xa0;
  uVar3 = F_00d43510(this_00,param_1,param_2 & 0xff,param_3);
  *(uint *)((int)this + 0x1c) = uVar3;
  if (*(uint *)(uVar3 + 0x88) == (*(uint *)(uVar3 + 0x8c) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),(int *)(uVar3 + 0x84),4);
  }
  piVar1 = ((int *)GEN_TOP((*(int *)(uVar3 + 0x84) + *(int *)(uVar3 + 0x88) * 4)));
  *piVar1 = (int)this + 8;
  *(int *)(uVar3 + 0x88) = *(int *)(uVar3 + 0x88) + 1;
  return (uint)piVar1;
}

/* ref: FUN_009f53b0 */
uint F_009f53b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f53b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  uVar2 = F_009f2f60(this,param_1,param_2);
  if (uVar2 == 0) {
    puVar3 = (undefined4 *)F_0050eba0(*(undefined * PTR32 *)((int)this + 0x84),param_1);
    puVar1 = (undefined4 *)puVar3[1];
    for (puVar3 = (undefined4 *)*puVar3; puVar3 != puVar1; puVar3 = puVar3 + 7) {
      puVar4 = puVar3;
      if (0xf < (uint)puVar3[5]) {
        puVar4 = (undefined4 *)*puVar3;
      }
      uVar2 = F_009f2f60(this,puVar4,param_2);
      if (uVar2 != 0) {
        return uVar2;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

/* ref: FUN_009f5410 */
uint F_009f5410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f5410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  ushort uVar1;
  undefined * this_00;
  uint uVar2;
  
  this_00 = (undefined *)F_009f32e0(this,param_1);
  if (this_00 != (undefined *)0x0) {
    if ((char)param_2 == '\0') {
      uVar2 = F_00506ea0(this_00,param_1);
      return uVar2;
    }
    uVar1 = F_005036f0(this_00,param_1);
    if (-1 < (short)uVar1) {
      uVar2 = F_005053b0(this_00,(uint)uVar1);
      return uVar2;
    }
  }
  return 0;
}

/* ref: FUN_009f5460 */
ushort F_009f5460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f5460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  ushort uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  uVar2 = F_009f3020(this,param_1);
  if (uVar2 == 0xffff) {
    puVar3 = (undefined4 *)F_0050eba0(*(undefined * PTR32 *)((int)this + 0x84),param_1);
    puVar1 = (undefined4 *)puVar3[1];
    for (puVar3 = (undefined4 *)*puVar3; puVar3 != puVar1; puVar3 = puVar3 + 7) {
      puVar4 = puVar3;
      if (0xf < (uint)puVar3[5]) {
        puVar4 = (undefined4 *)*puVar3;
      }
      uVar2 = F_009f3020(this,puVar4);
      if (uVar2 != 0xffff) {
        return uVar2;
      }
    }
    uVar2 = 0xffff;
  }
  return uVar2;
}

/* ref: FUN_009f54d0 */
uint F_009f54d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9f54d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  int * piVar2;
  uint uVar3;
  int * piVar4;
  int * piVar5;
  
  iVar1 = param_3 + param_2 * 4;
  uVar3 = iVar1 * 2;
  piVar2 = (int *)((int)this + iVar1 * 0x10 + 4);
  piVar5 = (int *)*piVar2;
  if (piVar5 != (int *)piVar2[1]) {
    piVar4 = piVar5 + 1;
    do {
      if (*piVar5 == param_1) {
        uVar3 = F_00c46e20(piVar5,piVar4,(piVar2[1] - (int)((int)(uintptr_t)piVar4) >> 2) * 4);
        piVar2[1] = piVar2[1] + -4;
        if (param_1 != 0) {
          uVar3 = F_0050c620(param_1,0,0);
          param_1 = 0;
        }
      }
      else {
        piVar5 = piVar5 + 1;
        piVar4 = piVar4 + 1;
      }
    } while (piVar5 != (int *)piVar2[1]);
  }
  return uVar3;
}

/* ref: FUN_009f5550 */
uint F_009f5550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f5550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  uVar2 = F_009f3150(this,param_1);
  if (uVar2 == 0) {
    puVar3 = (undefined4 *)F_0050eba0(*(undefined * PTR32 *)((int)this + 0x84),param_1);
    puVar1 = (undefined4 *)puVar3[1];
    for (puVar3 = (undefined4 *)*puVar3; puVar3 != puVar1; puVar3 = puVar3 + 7) {
      puVar4 = puVar3;
      if (0xf < (uint)puVar3[5]) {
        puVar4 = (undefined4 *)*puVar3;
      }
      uVar2 = F_009f3150(this,puVar4);
      if (uVar2 != 0) {
        return uVar2;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

/* ref: FUN_009f55b0 */
uint F_009f55b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f55b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  uVar2 = F_009f31d0(this,param_1);
  if (uVar2 == 0) {
    puVar3 = (undefined4 *)F_0050eba0(*(undefined * PTR32 *)((int)this + 0x84),param_1);
    puVar1 = (undefined4 *)puVar3[1];
    for (puVar3 = (undefined4 *)*puVar3; puVar3 != puVar1; puVar3 = puVar3 + 7) {
      puVar4 = puVar3;
      if (0xf < (uint)puVar3[5]) {
        puVar4 = (undefined4 *)*puVar3;
      }
      uVar2 = F_009f31d0(this,puVar4);
      if (uVar2 != 0) {
        return uVar2;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

/* ref: FUN_009f5610 */
uint F_009f5610(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x9f5610u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(float *)(gen_frame + 0x14)) = param_2;
  uVar1 = F_009fe250(((undefined1 *)(gen_frame + 0xc)),**(undefined4 * PTR32 *)(param_1 + 0xf4),*(undefined4 * PTR32 *)(param_1 + 0xf4),
                       ((code *)REFP(0x9f0c00)),0,param_2,(*(undefined4 *)(gen_frame + 0x18)));
  return uVar1;
}

/* ref: FUN_009f5c90 */
uint F_009f5c90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x9f5c90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  int param_5 = (int)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  int iVar2;
  byte bVar6;
  undefined * pvVar3;
  int iVar4;
  undefined4 * puVar5;
  bool bVar7;
  bool bVar8;
  int * piVar9;
  
  if (*(int *)((int)this + 0xbc) == 0) {
    return 0;
  }
  pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 8))))
                             (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),0x2c,0x10)));
  if (pvVar3 == (undefined *)0x0) {
    pvVar3 = (undefined *)0x0;
  }
  else {
    pvVar3 = (undefined *)F_009fea20(pvVar3);
  }
  F_009febd0(pvVar3,param_4[2]);
  iVar4 = *param_4;
  if ((*(uint *)(param_5 + 8) >> 2 & 1) == 0) {
    if ((*(uint *)(param_5 + 8) >> 3 & 1) != 0) {
      iVar4 = 0;
    }
  }
  else {
    iVar4 = 1;
  }
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 1;
  if (iVar4 == 0) {
    fVar1 = gen_bits2f(param_4[1]);
    bVar7 = GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
    bVar8 = bVar7 || fVar1 == *(float *)&REFG(undefined, 0x1088114);
    bVar6 = bVar8 << 6 | bVar7 << 2 | 2U | !(*(float *)&REFG(undefined, 0x1088114) <= fVar1);
    if (bVar7 == bVar8) {
      iVar4 = (uint)bVar6 << 8;
    }
    else {
      iVar4 = CONCAT31((uint3)bVar6,1);
    }
    F_009f5320(pvVar3,param_2,iVar4,(int)(short)param_4[3]);
    piVar9 = param_4;
  }
  else {
    if (iVar4 != 1) goto LAB_009f5dbb;
    F_009f5320(pvVar3,param_2,1,(int)(short)param_4[3]);
    iVar4 = param_4[1];
    if (*(char *)((int)pvVar3 + 0x2b) == '\0') {
      *(undefined1 *)((int)this + 0xd8) = 1;
      *(undefined4 *)((int)this + 0xd0) = 0;
      *(int *)((int)this + 0xd4) = iVar4;
    }
    else {
      *(undefined1 *)((int)this + 0xe4) = 1;
      *(undefined4 *)((int)this + 0xdc) = 0;
      *(int *)((int)this + 0xe0) = iVar4;
    }
    iVar4 = param_4[2];
    (*(int *)(gen_frame + 0x4)) = param_4[1];
    iVar2 = param_4[4];
    (*(int *)(gen_frame + 0x0)) = *param_4;
    (*(int *)(gen_frame + 0x8)) = iVar4;
    piVar9 = &(*(int *)(gen_frame + 0x0));
    (*(int *)(gen_frame + 0xc)) = param_4[3];
    (*(int *)(gen_frame + 0x10)) = iVar2;
    (*(int *)(gen_frame + 0x4)) = 0;
  }
  F_009f1680(pvVar3,(uint)piVar9);
LAB_009f5dbb: ;
  *(int *)((int)pvVar3 + 0x24) = param_5;
  F_009febd0(pvVar3,this);
  if (param_3 != (undefined *)0x0) {
    F_00d43760(*(undefined * PTR32 *)((int)pvVar3 + 0x1c),param_3);
    F_00d91a80(param_3);
  }
  if ((char)param_6 == '\0') {
    F_00d43f50(*(undefined * PTR32 *)((int)this + 0xb4),*(undefined4 *)((int)pvVar3 + 0x1c));
    *(undefined1 *)((int)pvVar3 + 0x2b) = 0;
  }
  else {
    F_00d43f50(*(undefined * PTR32 *)((int)this + 0xb8),*(undefined4 *)((int)pvVar3 + 0x1c));
    *(undefined1 *)((int)pvVar3 + 0x2b) = 1;
  }
  puVar5 = (undefined4 *)F_004296a0(0x14,0,0xcb);
  *puVar5 = *(undefined4 *)((int)this + 0xf4);
  puVar5[1] = *(undefined4 *)((int)this + 0xf4);
  puVar5[2] = *(undefined4 *)((int)this + 0xf4);
  *(undefined2 *)(puVar5 + 4) = 0;
  if (puVar5 + 3 != (undefined4 *)0x0) {
    puVar5[3] = pvVar3;
  }
  F_009fe100((undefined *)((int)this + 0xf0),((undefined1 *)(gen_frame + 0x14)),puVar5,0);
  return (uint)pvVar3;
}

/* ref: FUN_009f5e70 */
unsigned int F_009f5e70(unsigned int gen_a0)
{
  GEN_ENTER(0x9f5e70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint local_8;
  
  local_8 = (uint)this & 0xffffff00;
  F_009fe2e0(**(undefined4 * PTR32 *)((int)this + 0xf4),*(undefined4 * PTR32 *)((int)this + 0xf4),local_8);
  return 0;
}

/* ref: FUN_009f6480 */
byte F_009f6480(unsigned int gen_a0)
{
  GEN_ENTER(0x9f6480u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  undefined4 uVar2;
  int * piVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xf4);
  uVar2 = *puVar1;
  (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)((uint)this & 0xffffff00);
  piVar3 = (int *)F_009fe350(&(*(undefined * PTR32 *)(gen_frame + 0x8)),uVar2,puVar1,(*(undefined * PTR32 *)(gen_frame + 0x8)));
  return *piVar3 != *(int *)((int)this + 0xf4);
}

/* ref: FUN_009f64c0 */
uint F_009f64c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f64c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(uint *)((int)this + 4) != 0) {
    puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xc) + param_2 * 4))) + 0x40)));
    do {
      if ((puVar1[-3] != 0) && ((undefined *)*puVar1 != (undefined *)0x0)) {
        F_009f34a0((undefined *)*puVar1,param_1);
        return (uint)param_1;
      }
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 0x14;
    } while (uVar2 < *(uint *)((int)this + 4));
  }
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1302c90));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1302c94));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1302c98));
  return (uint)param_1;
}

/* ref: FUN_009f6590 */
uint F_009f6590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f6590u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  float fVar1;
  uint3 uVar2;
  undefined * pvVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  
  pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 8))))
                             (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),0x2c,0x10)));
  if (pvVar3 == (undefined *)0x0) {
    pvVar3 = (undefined *)0x0;
  }
  else {
    pvVar3 = (undefined *)F_009fea20(pvVar3);
  }
  fVar1 = *(float *)(param_2 + 4);
  bVar5 = GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
  bVar6 = bVar5 || fVar1 == *(float *)&REFG(undefined, 0x1088114);
  uVar2 = CONCAT21((short)((uint)((int)(uintptr_t)pvVar3) >> 0x10),
                   bVar6 << 6 | bVar5 << 2 | 2U | !(*(float *)&REFG(undefined, 0x1088114) <= fVar1));
  if (bVar5 == bVar6) {
    iVar4 = (uint)uVar2 << 8;
  }
  else {
    iVar4 = CONCAT31(uVar2,1);
  }
  F_009f5320(pvVar3,param_1,iVar4,(int)*(short *)(param_2 + 0xc));
  F_009febd0(pvVar3,*(undefined4 *)(param_2 + 8));
  return (uint)pvVar3;
}

/* ref: FUN_009f6600 */
uint F_009f6600(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x9f6600u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(float *)(gen_frame + 0x14)) = param_2;
  uVar1 = F_009fe250(((undefined1 *)(gen_frame + 0xc)),**(undefined4 * PTR32 *)(param_1 + 0x14),*(undefined4 * PTR32 *)(param_1 + 0x14),
                       ((code *)REFP(0x9f0ba0)),0,param_2,(*(undefined4 *)(gen_frame + 0x18)));
  return uVar1;
}

/* ref: FUN_009f6650 */
uint F_009f6650(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x9f6650u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(float *)(gen_frame + 0x14)) = param_2;
  uVar1 = F_009fe250(((undefined1 *)(gen_frame + 0xc)),**(undefined4 * PTR32 *)(param_1 + 0x14),*(undefined4 * PTR32 *)(param_1 + 0x14),
                       ((code *)REFP(0x9fbcc0)),0,param_2,(*(undefined4 *)(gen_frame + 0x18)));
  return uVar1;
}

/* ref: FUN_009f66a0 */
uint F_009f66a0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x9f66a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(float *)(gen_frame + 0x14)) = param_2;
  uVar1 = F_009fe250(((undefined1 *)(gen_frame + 0xc)),**(undefined4 * PTR32 *)(param_1 + 0x14),*(undefined4 * PTR32 *)(param_1 + 0x14),
                       ((code *)REFP(0x9fbcf0)),0,param_2,(*(undefined4 *)(gen_frame + 0x18)));
  return uVar1;
}

/* ref: FUN_009f66f0 */
uint F_009f66f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f66f0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  F_009fdca0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))),&(*(undefined4 *)(gen_frame + 0x4)),&(*(int * PTR32 *)&gen_args[1]));
  uVar1 = F_009ff380(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))),&(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
  if ((*(int * PTR32 *)&gen_args[1]) != (int *)0x0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0xc))))((*(int * PTR32 *)&gen_args[1]));
  }
  return uVar1;
}

/* ref: FUN_009f6740 */
uint F_009f6740(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x9f6740u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(float *)(gen_frame + 0x14)) = param_2;
  uVar1 = F_009fe250(((undefined1 *)(gen_frame + 0xc)),**(undefined4 * PTR32 *)(param_1 + 0x14),*(undefined4 * PTR32 *)(param_1 + 0x14),
                       ((code *)REFP(0x9fbc80)),0,param_2,(*(undefined4 *)(gen_frame + 0x18)));
  return uVar1;
}

/* ref: FUN_009f6790 */
uint F_009f6790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f6790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x14)) + 0)) = (undefined2)param_1;
  (*(undefined4 *)(gen_frame + 0x14)) = CONCAT22((*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x14)) + 2)),(undefined2)param_1);
  uVar1 = F_009fe550(((undefined1 *)(gen_frame + 0xc)),**(undefined4 * PTR32 *)((int)this + 0x14),
                       *(undefined4 * PTR32 *)((int)this + 0x14),((code *)REFP(0x9fbd60)),0,(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)));
  return uVar1;
}

/* ref: FUN_009f67e0 */
uint F_009f67e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f67e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x14)) + 0)) = (undefined2)param_1;
  (*(undefined4 *)(gen_frame + 0x14)) = CONCAT22((*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x14)) + 2)),(undefined2)param_1);
  uVar1 = F_009fe550(((undefined1 *)(gen_frame + 0xc)),**(undefined4 * PTR32 *)((int)this + 0x14),
                       *(undefined4 * PTR32 *)((int)this + 0x14),((code *)REFP(0x9fbd90)),0,(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)));
  return uVar1;
}

/* ref: FUN_009f6830 */
uint F_009f6830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f6830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x14)) + 0)) = (undefined2)param_1;
  (*(undefined4 *)(gen_frame + 0x14)) = CONCAT22((*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x14)) + 2)),(undefined2)param_1);
  uVar1 = F_009fe550(((undefined1 *)(gen_frame + 0xc)),**(undefined4 * PTR32 *)((int)this + 0x14),
                       *(undefined4 * PTR32 *)((int)this + 0x14),((code *)REFP(0x9fd340)),0,(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)));
  return uVar1;
}

/* ref: FUN_009f6880 */
uint F_009f6880(unsigned int gen_a0)
{
  GEN_ENTER(0x9f6880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  float fVar2;
  
  if (*(char *)((int)this + 0xc) == '\0') {
    fVar2 = F_009f2ba0(this);
    *(float *)((int)this + 8) = fVar2;
  }
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  *(undefined1 *)((int)this + 0xc) = 1;
  uVar1 = F_009fe250(((undefined1 *)(gen_frame + 0xc)),**(undefined4 * PTR32 *)((int)this + 0x14),
                       *(undefined4 * PTR32 *)((int)this + 0x14),((code *)REFP(0x9fbc80)),0,0.0,(*(undefined4 *)(gen_frame + 0x18)));
  return uVar1;
}

/* ref: FUN_009f68e0 */
uint F_009f68e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9f68e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  *(undefined1 *)((int)this + 0xc) = 0;
  (*(float *)(gen_frame + 0x14)) = *(float *)((int)this + 8);
  uVar1 = F_009fe250(((undefined1 *)(gen_frame + 0xc)),**(undefined4 * PTR32 *)((int)this + 0x14),
                       *(undefined4 * PTR32 *)((int)this + 0x14),((code *)REFP(0x9fbc80)),0,*(float *)((int)this + 8),
                       (*(undefined4 *)(gen_frame + 0x18)));
  return uVar1;
}

/* ref: FUN_009f6930 */
uint F_009f6930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f6930u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  ushort uVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  pvVar2 = (undefined *)F_009f32e0(this,param_1);
  if (pvVar2 != (undefined *)0x0) {
    if ((char)param_2 == '\0') {
      uVar3 = F_00506ea0(pvVar2,param_1);
    }
    else {
      uVar1 = F_005036f0(pvVar2,param_1);
      if ((short)uVar1 < 0) goto LAB_009f6974;
      uVar3 = F_005053b0(pvVar2,(uint)uVar1);
    }
    if (uVar3 != 0) {
      return uVar3;
    }
  }
LAB_009f6974: ;
  puVar4 = (undefined4 *)F_0050eba0(*(undefined * PTR32 *)((int)this + 0x84),param_1);
  puVar5 = (undefined4 *)*puVar4;
  puVar4 = (undefined4 *)puVar4[1];
  do {
    if (puVar5 == puVar4) {
      return 0;
    }
    puVar6 = puVar5;
    if (0xf < (uint)puVar5[5]) {
      puVar6 = (undefined4 *)*puVar5;
    }
    pvVar2 = (undefined *)F_009f32e0(this,puVar6);
    if (pvVar2 != (undefined *)0x0) {
      if ((char)param_2 == '\0') {
        uVar3 = F_00506ea0(pvVar2,puVar6);
      }
      else {
        uVar1 = F_005036f0(pvVar2,puVar6);
        if ((short)uVar1 < 0) goto LAB_009f69d4;
        uVar3 = F_005053b0(pvVar2,(uint)uVar1);
      }
      if (uVar3 != 0) {
        return uVar3;
      }
    }
LAB_009f69d4: ;
    puVar5 = puVar5 + 7;
  } while( true );
}

/* ref: FUN_009f69f0 */
uint F_009f69f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9f69f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float * pfVar1;
  float * pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int * piVar9;
  int * piVar10;
  int iVar11;
  uint uVar12;
  float * pfVar13;
  int iVar14;
  int iVar15;
  undefined4 * puVar16;
  
  (*(int * PTR32 *)(gen_frame + 0x48)) = *(int * PTR32 *)((int)this + 0xbc);
  (*(int * PTR32 *)(gen_frame + 0x44)) = *(undefined * PTR32 *)((int)this + 0xc4);
  piVar9 = (int *)F_00d329a0(*(int * PTR32 *)((int)this + 0xbc));
  (*(int * PTR32 *)(gen_frame + 0x3c)) = piVar9;
  piVar10 = (int *)F_00d329a0((*(int * PTR32 *)(gen_frame + 0x44)));
  iVar14 = piVar9[1];
  iVar11 = (*(int *)((int)this + 4) << 0x1a) >> 0x1c;
  iVar15 = 0;
  (*(int * PTR32 *)(gen_frame + 0x44)) = piVar10;
  (*(int *)(gen_frame + 0x40)) = iVar14;
  if (iVar11 == 0) {
    iVar14 = *(*(int * PTR32 *)(gen_frame + 0x48));
    ((int *)(gen_frame + 0x0))[1] = 0;
    ((int *)(gen_frame + 0x0))[2] = 0;
    ((int *)(gen_frame + 0x0))[4] = 0;
    ((int *)(gen_frame + 0x0))[5] = 0;
    ((int *)(gen_frame + 0x0))[7] = 0;
    ((int *)(gen_frame + 0x0))[8] = 0;
    (*(undefined2 *)(gen_frame + 0x28)) = 0;
    (*(int *)(gen_frame + 0x30)) = 0;
    (*(int *)(gen_frame + 0x34)) = 0;
    ((int *)(gen_frame + 0x0))[0] = iVar14;
    ((int *)(gen_frame + 0x0))[3] = 0x80000000;
    ((int *)(gen_frame + 0x0))[6] = 0x80000000;
    ((int *)(gen_frame + 0x0))[9] = 0x80000000;
    (*(uint *)(gen_frame + 0x38)) = 0x80000000;
    iVar14 = *(int *)(iVar14 + 0x1c);
    uVar12 = iVar14 + 3U & 0xfffffffc;
    (*(int *)(gen_frame + 0x2c)) = iVar14;
    if (0 < (int)uVar12) {
      F_00d95690(&REFG(undefined * PTR32, 0x13516ac),((int *)(gen_frame + 0x0)) + 4,uVar12,0x30);
    }
    if ((int)(((int *)(gen_frame + 0x0))[3] & 0x3fffffffU) < (int)uVar12) {
      F_00d95690(&REFG(undefined * PTR32, 0x13516ac),((int *)(gen_frame + 0x0)) + 1,uVar12,0x30);
    }
    if ((int)(((int *)(gen_frame + 0x0))[9] & 0x3fffffffU) < (int)uVar12) {
      F_00d95690(&REFG(undefined * PTR32, 0x13516ac),((int *)(gen_frame + 0x0)) + 7,uVar12,4);
    }
    if ((int)(((int *)(gen_frame + 0x0))[6] & 0x3fffffffU) < iVar14) {
      iVar11 = (((int *)(gen_frame + 0x0))[6] & 0x3fffffffU) * 2;
      if (iVar11 <= iVar14) {
        iVar11 = iVar14;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516ac),((int *)(gen_frame + 0x0)) + 4,iVar11,0x30);
    }
    ((int *)(gen_frame + 0x0))[5] = iVar14;
    if ((int)(((int *)(gen_frame + 0x0))[3] & 0x3fffffffU) < iVar14) {
      iVar11 = (((int *)(gen_frame + 0x0))[3] & 0x3fffffffU) * 2;
      if (iVar11 <= iVar14) {
        iVar11 = iVar14;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516ac),((int *)(gen_frame + 0x0)) + 1,iVar11,0x30);
    }
    ((int *)(gen_frame + 0x0))[2] = iVar14;
    if ((int)(((int *)(gen_frame + 0x0))[9] & 0x3fffffffU) < iVar14) {
      iVar11 = (((int *)(gen_frame + 0x0))[9] & 0x3fffffffU) * 2;
      if (iVar11 <= iVar14) {
        iVar11 = iVar14;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516ac),((int *)(gen_frame + 0x0)) + 7,iVar11,4);
    }
    ((int *)(gen_frame + 0x0))[8] = iVar14;
    iVar14 = *(int *)(((int *)(gen_frame + 0x0))[0] + 0x40);
    uVar12 = iVar14 + 3U & 0xfffffffc;
    if ((int)((*(uint *)(gen_frame + 0x38)) & 0x3fffffff) < (int)uVar12) {
      F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x30)),uVar12,4);
    }
    if ((int)((*(uint *)(gen_frame + 0x38)) & 0x3fffffff) < iVar14) {
      iVar11 = ((*(uint *)(gen_frame + 0x38)) & 0x3fffffff) * 2;
      if (iVar11 <= iVar14) {
        iVar11 = iVar14;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x30)),iVar11,4);
    }
    iVar11 = iVar14 - (*(int *)(gen_frame + 0x34));
    puVar16 = (undefined4 *)((*(int *)(gen_frame + 0x30)) + (*(int *)(gen_frame + 0x34)) * 4);
    if (0 < iVar11) {
      for (; iVar11 != 0; iVar11 = iVar11 + -1) {
        *puVar16 = 0;
        puVar16 = puVar16 + 1;
      }
    }
    (*(int *)(gen_frame + 0x34)) = iVar14;
    F_00d31730(((int *)(gen_frame + 0x0)));
    piVar9 = (int *)F_00d329a0(((int *)(gen_frame + 0x0)));
    (*(int * PTR32 *)(gen_frame + 0x48)) = piVar9;
    if ((*(int *)(gen_frame + 0x40)) != 0) {
      iVar11 = 0;
      iVar14 = (*(int *)(gen_frame + 0x40));
      do {
        pfVar1 = (float *)(*(*(int * PTR32 *)(gen_frame + 0x44)) + iVar11);
        fVar3 = pfVar1[1];
        fVar4 = pfVar1[2];
        fVar5 = pfVar1[3];
        iVar15 = *(*(int * PTR32 *)(gen_frame + 0x48));
        pfVar2 = (float *)(iVar15 + iVar11);
        fVar6 = pfVar2[1];
        fVar7 = pfVar2[2];
        fVar8 = pfVar2[3];
        pfVar13 = (float *)(*(*(int * PTR32 *)(gen_frame + 0x44)) + iVar11);
        *pfVar13 = *pfVar1 - *pfVar2;
        pfVar13[1] = fVar3 - fVar6;
        pfVar13[2] = fVar4 - fVar7;
        pfVar13[3] = fVar5 - fVar8;
        pfVar1 = (float *)(iVar15 + 0x10 + iVar11);
        fVar3 = pfVar1[1];
        fVar4 = pfVar1[2];
        fVar5 = pfVar1[3];
        pfVar13[4] = pfVar13[4] - *pfVar1;
        pfVar13[5] = pfVar13[5] - fVar3;
        pfVar13[6] = pfVar13[6] - fVar4;
        pfVar13[7] = pfVar13[7] - fVar5;
        pfVar1 = (float *)(iVar15 + 0x20 + iVar11);
        fVar3 = pfVar1[1];
        fVar4 = pfVar1[2];
        fVar5 = pfVar1[3];
        pfVar13[8] = pfVar13[8] * *pfVar1;
        pfVar13[9] = pfVar13[9] * fVar3;
        pfVar13[10] = pfVar13[10] * fVar4;
        pfVar13[0xb] = pfVar13[0xb] * fVar5;
        F_009ff810(*(*(int * PTR32 *)(gen_frame + 0x3c)) + iVar11,*(*(int * PTR32 *)(gen_frame + 0x44)) + iVar11,*(*(int * PTR32 *)(gen_frame + 0x3c)) + iVar11);
        iVar11 = iVar11 + 0x30;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
    uVar12 = F_009ffa70(((int *)(gen_frame + 0x0)));
  }
  else {
    uVar12 = iVar11 - 1;
    if ((uVar12 == 0) && (iVar14 != 0)) {
      (*(int * PTR32 *)(gen_frame + 0x48)) = (int *)iVar14;
      do {
        iVar14 = *piVar9;
        pfVar1 = (float *)(*(*(int * PTR32 *)(gen_frame + 0x44)) + iVar15);
        fVar3 = pfVar1[1];
        fVar4 = pfVar1[2];
        fVar5 = pfVar1[3];
        pfVar2 = (float *)(iVar14 + iVar15);
        fVar6 = pfVar2[1];
        fVar7 = pfVar2[2];
        fVar8 = pfVar2[3];
        pfVar13 = (float *)(*(*(int * PTR32 *)(gen_frame + 0x44)) + iVar15);
        *pfVar13 = *pfVar1 - *pfVar2;
        pfVar13[1] = fVar3 - fVar6;
        pfVar13[2] = fVar4 - fVar7;
        pfVar13[3] = fVar5 - fVar8;
        pfVar1 = (float *)(iVar14 + 0x10 + iVar15);
        fVar3 = pfVar1[1];
        fVar4 = pfVar1[2];
        fVar5 = pfVar1[3];
        pfVar13[4] = pfVar13[4] - *pfVar1;
        pfVar13[5] = pfVar13[5] - fVar3;
        pfVar13[6] = pfVar13[6] - fVar4;
        pfVar13[7] = pfVar13[7] - fVar5;
        pfVar1 = (float *)(iVar14 + 0x20 + iVar15);
        fVar3 = pfVar1[1];
        fVar4 = pfVar1[2];
        fVar5 = pfVar1[3];
        pfVar13[8] = pfVar13[8] * *pfVar1;
        pfVar13[9] = pfVar13[9] * fVar3;
        pfVar13[10] = pfVar13[10] * fVar4;
        pfVar13[0xb] = pfVar13[0xb] * fVar5;
        uVar12 = F_009ff810(*piVar9 + iVar15,*(*(int * PTR32 *)(gen_frame + 0x44)) + iVar15,*piVar9 + iVar15);
        iVar15 = iVar15 + 0x30;
        iVar14 = (int)(*(int * PTR32 *)(gen_frame + 0x48)) + -1;
        (*(int * PTR32 *)(gen_frame + 0x48)) = (int *)iVar14;
      } while (iVar14 != 0);
      return uVar12;
    }
  }
  return uVar12;
}

/* ref: FUN_009f6ca0 */
uint F_009f6ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f6ca0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  int * piVar4;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x2b))) == '\0') {
    this_00 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb4)));
  }
  else {
    this_00 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb8)));
  }
  if (this_00 != (undefined *)0x0) {
    F_00d43d90(this_00,(*(int * PTR32 *)&gen_args[1])[7]);
  }
  F_009fdca0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf0))),&(*(undefined4 *)(gen_frame + 0x4)),&(*(int * PTR32 *)&gen_args[1]));
  F_009ff380(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf0))),&(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
  F_009fdca0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x100))),&(*(undefined4 *)(gen_frame + 0x4)),&(*(int * PTR32 *)&gen_args[1]));
  F_009ff380(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x100))),&(*(int * PTR32 *)&gen_args[1]),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
  iVar2 = 0;
  piVar4 = piVar1 + 3;
  do {
    if ((undefined *)*piVar4 == (*(undefined * PTR32 *)&gen_args[0])) {
      piVar1[iVar2 + 3] = 0;
      break;
    }
    iVar2 = iVar2 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar2 < 4);
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) | 1;
  return uVar3;
}

/* ref: FUN_009f6e90 */
uint F_009f6e90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f6e90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  short sVar4;
  int * this_00;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 * puVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar20;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar21;
  
  (*(uint *)(gen_frame + 0x10c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x110);
  this_00 = *(int * PTR32 *)((int)this + 0x30);
  iVar8 = *this_00;
  ((int *)(gen_frame + 0x0))[0] = iVar8;
  ((int *)(gen_frame + 0x0))[1] = 0;
  ((int *)(gen_frame + 0x0))[2] = 0;
  ((int *)(gen_frame + 0x0))[3] = 0x80000000;
  ((int *)(gen_frame + 0x0))[4] = 0;
  ((int *)(gen_frame + 0x0))[5] = 0;
  ((int *)(gen_frame + 0x0))[6] = 0x80000000;
  ((int *)(gen_frame + 0x0))[7] = 0;
  ((int *)(gen_frame + 0x0))[8] = 0;
  ((int *)(gen_frame + 0x0))[9] = 0x80000000;
  (*(undefined2 *)(gen_frame + 0x28)) = 0;
  (*(int *)(gen_frame + 0x30)) = 0;
  (*(int *)(gen_frame + 0x34)) = 0;
  (*(uint *)(gen_frame + 0x38)) = 0x80000000;
  iVar8 = *(int *)(iVar8 + 0x1c);
  uVar11 = iVar8 + 3U & 0xfffffffc;
  (*(int *)(gen_frame + 0x2c)) = iVar8;
  if (0 < (int)uVar11) {
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),((int *)(gen_frame + 0x0)) + 4,uVar11,0x30);
  }
  if ((int)(((int *)(gen_frame + 0x0))[3] & 0x3fffffffU) < (int)uVar11) {
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),((int *)(gen_frame + 0x0)) + 1,uVar11,0x30);
  }
  if ((int)(((int *)(gen_frame + 0x0))[9] & 0x3fffffffU) < (int)uVar11) {
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),((int *)(gen_frame + 0x0)) + 7,uVar11,4);
  }
  if ((int)(((int *)(gen_frame + 0x0))[6] & 0x3fffffffU) < iVar8) {
    iVar9 = (((int *)(gen_frame + 0x0))[6] & 0x3fffffffU) * 2;
    if (iVar9 <= iVar8) {
      iVar9 = iVar8;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),((int *)(gen_frame + 0x0)) + 4,iVar9,0x30);
  }
  ((int *)(gen_frame + 0x0))[5] = iVar8;
  if ((int)(((int *)(gen_frame + 0x0))[3] & 0x3fffffffU) < iVar8) {
    iVar9 = (((int *)(gen_frame + 0x0))[3] & 0x3fffffffU) * 2;
    if (iVar9 <= iVar8) {
      iVar9 = iVar8;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),((int *)(gen_frame + 0x0)) + 1,iVar9,0x30);
  }
  ((int *)(gen_frame + 0x0))[2] = iVar8;
  if ((int)(((int *)(gen_frame + 0x0))[9] & 0x3fffffffU) < iVar8) {
    iVar9 = (((int *)(gen_frame + 0x0))[9] & 0x3fffffffU) * 2;
    if (iVar9 <= iVar8) {
      iVar9 = iVar8;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),((int *)(gen_frame + 0x0)) + 7,iVar9,4);
  }
  ((int *)(gen_frame + 0x0))[8] = iVar8;
  iVar8 = *(int *)(((int *)(gen_frame + 0x0))[0] + 0x40);
  uVar11 = iVar8 + 3U & 0xfffffffc;
  if ((int)((*(uint *)(gen_frame + 0x38)) & 0x3fffffff) < (int)uVar11) {
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x30)),uVar11,4);
  }
  if ((int)((*(uint *)(gen_frame + 0x38)) & 0x3fffffff) < iVar8) {
    iVar9 = ((*(uint *)(gen_frame + 0x38)) & 0x3fffffff) * 2;
    if (iVar9 <= iVar8) {
      iVar9 = iVar8;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x30)),iVar9,4);
  }
  iVar9 = iVar8 - (*(int *)(gen_frame + 0x34));
  puVar10 = (undefined4 *)((*(int *)(gen_frame + 0x30)) + (*(int *)(gen_frame + 0x34)) * 4);
  if (0 < iVar9) {
    for (; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
  }
  (*(int *)(gen_frame + 0x34)) = iVar8;
  F_00d31730(((int *)(gen_frame + 0x0)));
  F_00d31b70(((int *)(gen_frame + 0x0)));
  iVar8 = (int)*(short *)((int)this + 0x42);
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  (*(undefined4 *)(gen_frame + 0x74)) = 0;
  (*(undefined4 *)(gen_frame + 0x78)) = 0;
  (*(undefined4 *)(gen_frame + 0x7c)) = 0;
  bVar3 = *(byte *)(((int *)(gen_frame + 0x0))[7] + iVar8 * 4);
  (*(float *)(gen_frame + 0xe0)) = 0.0;
  (*(float *)(gen_frame + 0xe4)) = 0.0;
  (*(float *)(gen_frame + 0xe8)) = 0.0;
  (*(float *)(gen_frame + 0xec)) = 0.0;
  if ((bVar3 & 2) == 0) {
    uVar11 = iVar8 * 0x30 + ((int *)(gen_frame + 0x0))[4];
  }
  else {
    uVar11 = F_00d31930(((int *)(gen_frame + 0x0)),iVar8);
  }
  uVar5 = *(uint *)(uVar11 + 0x14);
  uVar6 = *(uint *)(uVar11 + 0x18);
  uVar7 = *(uint *)(uVar11 + 0x1c);
  (*(uint *)(gen_frame + 0x50)) = *(uint *)(uVar11 + 0x10) ^ *(uint *)&REFG(undefined, 0x10ab9b0);
  (*(uint *)(gen_frame + 0x54)) = uVar5 ^ *(uint *)&REFG(undefined, 0x10ab9b4);
  (*(uint *)(gen_frame + 0x58)) = uVar6 ^ *(uint *)&REFG(undefined, 0x10ab9b8);
  (*(uint *)(gen_frame + 0x5c)) = uVar7 ^ *(uint *)&REFG(undefined, 0x10ab9bc);
  (*(undefined4 *)(gen_frame + 0xd0)) = *(undefined4 *)&REFG(undefined, 0x10e15d0);
  (*(undefined4 *)(gen_frame + 0xd4)) = *(undefined4 *)&REFG(undefined, 0x10e15d4);
  (*(undefined4 *)(gen_frame + 0xd8)) = *(undefined4 *)&REFG(undefined, 0x10e15d8);
  (*(undefined4 *)(gen_frame + 0xdc)) = *(undefined4 *)&REFG(undefined, 0x10e15dc);
  (*(undefined4 *)(gen_frame + 0xf0)) = *(undefined4 *)&REFG(undefined, 0x10e15d0);
  (*(undefined4 *)(gen_frame + 0xf4)) = *(undefined4 *)&REFG(undefined, 0x10e15d4);
  (*(undefined4 *)(gen_frame + 0xf8)) = *(undefined4 *)&REFG(undefined, 0x10e15d8);
  (*(undefined4 *)(gen_frame + 0xfc)) = *(undefined4 *)&REFG(undefined, 0x10e15dc);
  F_00d950d0(((undefined1 *)(gen_frame + 0x60)),&(*(uint *)(gen_frame + 0x50)),&(*(undefined4 *)(gen_frame + 0xf0)));
  iVar8 = (int)*(short *)((int)this + 0x44);
  if ((*(byte *)(((int *)(gen_frame + 0x0))[7] + iVar8 * 4) & 2) == 0) {
    uVar11 = iVar8 * 0x30 + ((int *)(gen_frame + 0x0))[4];
  }
  else {
    uVar11 = F_00d31930(((int *)(gen_frame + 0x0)),iVar8);
  }
  uVar5 = *(uint *)(uVar11 + 0x14);
  uVar6 = *(uint *)(uVar11 + 0x18);
  uVar7 = *(uint *)(uVar11 + 0x1c);
  (*(uint *)(gen_frame + 0xc0)) = *(uint *)(uVar11 + 0x10) ^ *(uint *)&REFG(undefined, 0x10ab9b0);
  (*(uint *)(gen_frame + 0xc4)) = uVar5 ^ *(uint *)&REFG(undefined, 0x10ab9b4);
  (*(uint *)(gen_frame + 0xc8)) = uVar6 ^ *(uint *)&REFG(undefined, 0x10ab9b8);
  (*(uint *)(gen_frame + 0xcc)) = uVar7 ^ *(uint *)&REFG(undefined, 0x10ab9bc);
  F_00d950d0(((undefined1 *)(gen_frame + 0x40)),&(*(uint *)(gen_frame + 0xc0)),&(*(undefined4 *)(gen_frame + 0xd0)));
  iVar8 = (int)*(short *)((int)this + 0x44);
  if ((*(byte *)(this_00[7] + iVar8 * 4) & 2) == 0) {
    uVar11 = iVar8 * 0x30 + this_00[4];
  }
  else {
    uVar11 = F_00d31930(this_00,iVar8);
  }
  F_00d950d0(&(*(float *)(gen_frame + 0x80)),uVar11 + 0x10,((undefined1 *)(gen_frame + 0x40)));
  fVar12 = (*(float *)(gen_frame + 0x80)) * (*(float *)(gen_frame + 0x80));
  fVar13 = (*(float *)(gen_frame + 0x84)) * (*(float *)(gen_frame + 0x84));
  fVar14 = (*(float *)(gen_frame + 0x88)) * (*(float *)(gen_frame + 0x88));
  (*(undefined4 *)((char *)&auVar18 + 4)) = (undefined4)gen_fl2bits(fVar12);
  (*(undefined4 *)((char *)&auVar18 + 0)) = (undefined4)gen_fl2bits(fVar12);
  (*(undefined4 *)((char *)&auVar18 + 8)) = (undefined4)gen_fl2bits(fVar12);
  (*(undefined4 *)((char *)&auVar18 + 12)) = (undefined4)gen_fl2bits(fVar12);
  fVar15 = (fVar13 + fVar12) + fVar14;
  fVar16 = (fVar13 + fVar12) + fVar14;
  fVar17 = (fVar13 + fVar12) + fVar14;
  fVar14 = (fVar13 + fVar12) + fVar14;
  (*(undefined4 *)((char *)&auVar19 + 4)) = (undefined4)gen_fl2bits(fVar16);
  (*(undefined4 *)((char *)&auVar19 + 0)) = (undefined4)gen_fl2bits(fVar15);
  (*(undefined4 *)((char *)&auVar19 + 8)) = (undefined4)gen_fl2bits(fVar17);
  (*(undefined4 *)((char *)&auVar19 + 12)) = (undefined4)gen_fl2bits(fVar14);
  gen_rsqrtps(&(auVar19), &(auVar18), &(auVar19));
  fVar12 = (*(float *)((char *)&auVar19 + 0));
  fVar13 = (*(float *)((char *)&auVar19 + 4));
  fVar20 = (*(float *)((char *)&auVar19 + 8));
  fVar21 = (*(float *)((char *)&auVar19 + 12));
  uVar1 = *(undefined4 *)((int)this + 0x28);
  uVar2 = *(undefined4 *)((int)this + 0x24);
  (*(float *)(gen_frame + 0x80)) = gen_bits2f(~-(uint)(fVar15 <= (*(float *)(gen_frame + 0xe0))) &
                        (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x10e1570) - (fVar12 * fVar15) * fVar12) *
                                          (*(float *)&REFG(undefined, 0x10e1580) * fVar12))) * (*(float *)(gen_frame + 0x80));
  (*(float *)(gen_frame + 0x84)) = gen_bits2f(~-(uint)(fVar16 <= (*(float *)(gen_frame + 0xe4))) &
                         (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x10e1574) - (fVar13 * fVar16) * fVar13) *
                                           (*(float *)&REFG(undefined, 0x10e1584) * fVar13))) * (*(float *)(gen_frame + 0x84));
  (*(float *)(gen_frame + 0x88)) = gen_bits2f(~-(uint)(fVar17 <= (*(float *)(gen_frame + 0xe8))) &
                         (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x10e1578) - (fVar20 * fVar17) * fVar20) *
                                           (*(float *)&REFG(undefined, 0x10e1588) * fVar20))) * (*(float *)(gen_frame + 0x88));
  (*(float *)(gen_frame + 0x8c)) = gen_bits2f(~-(uint)(fVar14 <= (*(float *)(gen_frame + 0xec))) &
                         (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x10e157c) - (fVar21 * fVar14) * fVar21) *
                                           (*(float *)&REFG(undefined, 0x10e158c) * fVar21))) * (*(float *)(gen_frame + 0x8c));
  (*(undefined4 *)(gen_frame + 0x70)) = *(undefined4 *)((int)this + 0x20);
  (*(undefined4 *)(gen_frame + 0x74)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x78)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x7c)) = 0;
  if (REFG(char, 0x1333104) != '\0') {
    (*(undefined4 *)(gen_frame + 0x70)) = *(undefined4 *)&REFG(undefined, 0x10e1590);
    (*(undefined4 *)(gen_frame + 0x74)) = *(undefined4 *)&REFG(undefined, 0x10e1594);
    (*(undefined4 *)(gen_frame + 0x78)) = *(undefined4 *)&REFG(undefined, 0x10e1598);
    (*(undefined4 *)(gen_frame + 0x7c)) = *(undefined4 *)&REFG(undefined, 0x10e159c);
  }
  puVar10 = (undefined4 *)0x0;
  (*(undefined4 *)(gen_frame + 0x90)) = *(undefined4 *)((int)this + 0x34);
  if ((*(byte *)((int)this + 0x3c) & 1) != 0) {
    (*(undefined4 *)(gen_frame + 0xa0)) = *(undefined4 *)this;
    (*(undefined4 *)(gen_frame + 0xa4)) = *(undefined4 *)((int)this + 4);
    (*(undefined4 *)(gen_frame + 0xa8)) = *(undefined4 *)((int)this + 8);
    (*(undefined4 *)(gen_frame + 0xac)) = *(undefined4 *)((int)this + 0xc);
    (*(undefined4 *)(gen_frame + 0xf0)) = *(undefined4 *)&REFG(undefined, 0x10e15c0);
    (*(undefined4 *)(gen_frame + 0xf4)) = *(undefined4 *)&REFG(undefined, 0x10e15c4);
    (*(undefined4 *)(gen_frame + 0xf8)) = *(undefined4 *)&REFG(undefined, 0x10e15c8);
    (*(undefined4 *)(gen_frame + 0xfc)) = *(undefined4 *)&REFG(undefined, 0x10e15cc);
    F_00d950d0(&(*(undefined4 *)(gen_frame + 0xf0)),&(*(uint *)(gen_frame + 0xc0)),&(*(undefined4 *)(gen_frame + 0xf0)));
    iVar8 = (int)*(short *)((int)this + 0x44);
    if ((*(byte *)(this_00[7] + iVar8 * 4) & 2) == 0) {
      uVar11 = iVar8 * 0x30 + this_00[4];
    }
    else {
      uVar11 = F_00d31930(this_00,iVar8);
    }
    F_00d950d0(((undefined1 *)(gen_frame + 0xb0)),uVar11 + 0x10,&(*(undefined4 *)(gen_frame + 0xf0)));
    puVar10 = &(*(undefined4 *)(gen_frame + 0xa0));
  }
  fVar12 = param_1[1];
  fVar13 = param_1[2];
  sVar4 = *(short *)((int)this + 0x42);
  (*(float *)(gen_frame + 0xe0)) = *param_1;
  (*(float *)(gen_frame + 0xe4)) = fVar12;
  (*(float *)(gen_frame + 0xe8)) = fVar13;
  (*(float *)(gen_frame + 0xec)) = 0.0;
  uVar11 = F_00d32670(this_00,(int)sVar4,1);
  F_00d473c0(&(*(undefined1 *)(gen_frame + 0x3f)),((undefined1 *)(gen_frame + 0x60)),&(*(float *)(gen_frame + 0xe0)),*(float *)((int)this + 0x50),uVar11,puVar10);
  uVar11 = F_009ffa70(((int *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x10c)) ^ (uint)(uint)(gen_frame + 0x110));
  return uVar11;
}

/* ref: FUN_009f7380 */
uint F_009f7380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f7380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined * pvVar6;
  uint uVar7;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  uVar1 = *(undefined4 *)((int)this + 0x24);
  uVar2 = *(undefined4 *)((int)this + 0x28);
  uVar3 = *(undefined4 *)((int)this + 0x30);
  (*(undefined4 *)(gen_frame + 0x40)) = *(undefined4 *)((int)this + 0x20);
  (*(undefined4 *)(gen_frame + 0x44)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x48)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  pvVar6 = (undefined *)F_006232c0(uVar3,0);
  if ((**(byte * PTR32 *)((int)pvVar6 + 0x1c) & 2) == 0) {
    uVar7 = *(uint *)((int)pvVar6 + 0x10);
  }
  else {
    uVar7 = F_00d31930(pvVar6,0);
  }
  F_00d94e80(&(*(undefined4 *)(gen_frame + 0x40)),uVar7,&(*(undefined4 *)(gen_frame + 0x40)));
  uVar4 = param_1[1];
  uVar5 = param_1[2];
  uVar3 = param_1[6];
  uVar1 = param_1[7];
  uVar2 = param_1[5];
  (*(undefined4 *)(gen_frame + 0x10)) = *param_1;
  (*(undefined4 *)(gen_frame + 0x14)) = uVar4;
  (*(undefined4 *)(gen_frame + 0x18)) = uVar5;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = param_1[4];
  (*(undefined4 *)(gen_frame + 0x24)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x28)) = uVar3;
  (*(undefined4 *)(gen_frame + 0x2c)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x30)) = param_1[8];
  (*(undefined4 *)(gen_frame + 0x34)) = param_1[9];
  (*(undefined4 *)(gen_frame + 0x38)) = param_1[10];
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  F_00d94e80(&(*(undefined4 *)(gen_frame + 0x40)),&(*(undefined4 *)(gen_frame + 0x10)),&(*(undefined4 *)(gen_frame + 0x40)));
  uVar7 = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  if (*(int *)((int)this + 0x34) != 0) {
    (*(int *)(gen_frame + 0xc)) = 0;
    do {
      pvVar6 = ((undefined *)GEN_TOP((*(int *)((int)this + 0x40) + (*(int *)(gen_frame + 0xc)))));
      if ((((*(char *)((int)pvVar6 + 0x58) != '\0') && (!(*(float *)((int)pvVar6 + 0x50) <= 0.0)))
          && (*(int *)((int)pvVar6 + 0x54) != 0)) &&
         (((*(short *)((int)pvVar6 + 0x44) != -1 && (*(short *)((int)pvVar6 + 0x42) != -1)) &&
          (*(int *)((int)pvVar6 + 0x30) != 0)))) {
        F_009f6e90(pvVar6,&(*(undefined4 *)(gen_frame + 0x40)),param_1);
      }
      (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 0x60;
      uVar7 = (*(uint *)(gen_frame + 0x8)) + 1;
      (*(uint *)(gen_frame + 0x8)) = uVar7;
    } while (uVar7 < *(uint *)((int)this + 0x34));
  }
  F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)(uint)(gen_frame + 0x60));
  return uVar7;
}

/* ref: FUN_009f7500 */
uint F_009f7500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f7500u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  char cVar1;
  uint uVar2;
  uint in_EAX = 0;
  undefined * this_00;
  int iVar3;
  
  uVar2 = param_2;
  if (param_2 < *(uint *)this) {
    param_2 = *(int *)((int)this + 4);
    in_EAX = 0;
    if (param_2 != 0) {
      iVar3 = 0;
      do {
        if (((((*((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xc) + uVar2 * 4))) + 0x3c + iVar3))) & 1) != 0)
             && ((code *)*(gen_code32 *)((int)this + 0x14) != (code *)0x0)) &&
            (cVar1 = *((char *)GEN_TOP((*(int *)((int)this + 8) + 0x9c))), cVar1 != -1)) &&
           ((int)cVar1 == uVar2)) {
          ((code *)*(gen_code32 *)((int)this + 0x14))(*(undefined4 *)((int)this + 0x10),uVar2);
        }
        in_EAX = *(uint *)((int)this + 0xc);
        this_00 = ((undefined *)GEN_TOP((*(int *)(in_EAX + uVar2 * 4) + iVar3)));
        if (((*(byte *)((int)this_00 + 0x3c) & 1) != 0) &&
           ((!GEN_ISNAN(*(float *)((int)this_00 + 0x38)) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
            !(*(float *)((int)this_00 + 0x38) <= *(float *)&REFG(undefined, 0x1088114)))) {
          in_EAX = F_009f7380(this_00,param_1);
        }
        iVar3 = iVar3 + 0x50;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
  }
  return in_EAX;
}

/* ref: FUN_009f7590 */
uint F_009f7590(unsigned int gen_a0)
{
  GEN_ENTER(0x9f7590u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined * this_00;
  uint uVar4;
  LPVOID pvVar5;
  undefined2 * puVar6;
  undefined4 * puVar7;
  uint uVar8;
  int iVar9;
  
  uVar4 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = this;
  if (*(int *)((int)this + 0x10) != 0) {
    (*(uint *)(gen_frame + 0x0)) = 0;
    (*(uint *)(gen_frame + 0x4)) = 0;
    iVar9 = 4;
    (*(uint *)(gen_frame + 0x8)) = 0x80000000;
    (*(int *)(gen_frame + 0x10)) = 4;
    pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar4 = *(uint *)((int)pvVar5 + 0xc);
    if ((*(int *)((int)pvVar5 + 8) < 0x80) || (*(uint *)((int)pvVar5 + 0x10) < uVar4 + 0x80)) {
      uVar4 = F_00d94390(pvVar5,0x80);
    }
    else {
      *(uint *)((int)pvVar5 + 0xc) = uVar4 + 0x80;
    }
    (*(uint *)(gen_frame + 0x0)) = uVar4;
    (*(uint *)(gen_frame + 0x8)) = 0x80000004;
    (*(uint *)(gen_frame + 0xc)) = uVar4;
    puVar7 = (undefined4 *)((int)this + 0x40);
    do {
      if (*(char *)(puVar7 + -8) != '\0') {
        if ((*(uint *)(gen_frame + 0x4)) == ((*(uint *)(gen_frame + 0x8)) & 0x3fffffff)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(uint *)(gen_frame + 0x0)),0x20);
        }
        puVar6 = (undefined2 *)((*(uint *)(gen_frame + 0x4)) * 0x20 + (*(uint *)(gen_frame + 0x0)));
        if (puVar6 != (undefined2 *)0x0) {
          *puVar6 = *(undefined2 *)(puVar7 + -4);
          puVar6[1] = *(undefined2 *)((int)puVar7 + -0xe);
          uVar1 = puVar7[1];
          uVar2 = puVar7[2];
          uVar3 = puVar7[3];
          *(undefined4 *)(puVar6 + 8) = *puVar7;
          *(undefined4 *)(puVar6 + 10) = uVar1;
          *(undefined4 *)(puVar6 + 0xc) = uVar2;
          *(undefined4 *)(puVar6 + 0xe) = uVar3;
        }
        (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) + 1;
      }
      this_00 = (*(undefined * PTR32 *)(gen_frame + 0x14));
      puVar7 = puVar7 + 0xc;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    if ((*(uint *)(gen_frame + 0x4)) != 0) {
      uVar4 = F_006232c0(*(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x10),0);
      F_00d42360(this_00,&(*(undefined1 *)(gen_frame + 0x1b)),&(*(uint *)(gen_frame + 0x0)),uVar4);
    }
    iVar9 = (*(int *)(gen_frame + 0x10));
    uVar4 = (*(uint *)(gen_frame + 0xc));
    if ((*(uint *)(gen_frame + 0xc)) == (*(uint *)(gen_frame + 0x0))) {
      (*(uint *)(gen_frame + 0x4)) = 0;
    }
    pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar8 = iVar9 * 0x20 + 0x7fU & 0xffffff80;
    if (((*(int *)((int)pvVar5 + 8) < (int)uVar8) || (uVar8 + uVar4 != *(int *)((int)pvVar5 + 0xc)))
       || (*(uint *)((int)pvVar5 + 0x14) == uVar4)) {
      F_00d945c0(pvVar5,uVar4,uVar8);
    }
    else {
      *(uint *)((int)pvVar5 + 0xc) = uVar4;
    }
    (*(uint *)(gen_frame + 0x4)) = 0;
    uVar4 = (*(uint *)(gen_frame + 0x8));
    if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
      uVar4 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                        (&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) << 5);
    }
  }
  return uVar4;
}

/* ref: FUN_009f7700 */
uint F_009f7700(unsigned int gen_a0)
{
  GEN_ENTER(0x9f7700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  LPVOID pvVar2;
  int * piVar3;
  int iVar4;
  undefined * this_00;
  uint uVar5;
  int iVar6;
  int * piVar7;
  undefined4 * puVar8;
  
  *(undefined4 *)((int)this + 0x4c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x58) + 0xa8)));
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 4))))
                            (*(int * PTR32 *)((int)pvVar2 + 0x2c),0x3c)));
  piVar7 = (int *)0x0;
  if (piVar3 != (int *)0x0) {
    *piVar3 = *(int *)((int)this + 0x4c);
    piVar3[1] = 0;
    piVar3[2] = 0;
    piVar3[3] = ((int)0x80000000);
    piVar3[4] = 0;
    piVar3[5] = 0;
    piVar3[6] = ((int)0x80000000);
    piVar3[7] = 0;
    piVar3[8] = 0;
    piVar3[9] = ((int)0x80000000);
    *(undefined2 *)(piVar3 + 10) = 0;
    piVar3[0xc] = 0;
    piVar3[0xd] = 0;
    piVar3[0xe] = ((int)0x80000000);
    iVar1 = *(int *)(*piVar3 + 0x1c);
    piVar3[0xb] = iVar1;
    uVar5 = iVar1 + 3U & 0xfffffffc;
    if ((int)(piVar3[6] & 0x3fffffffU) < (int)uVar5) {
      F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar3 + 4,uVar5,0x30);
    }
    if ((int)(piVar3[3] & 0x3fffffffU) < (int)uVar5) {
      F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar3 + 1,uVar5,0x30);
    }
    if ((int)(piVar3[9] & 0x3fffffffU) < (int)uVar5) {
      F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar3 + 7,uVar5,4);
    }
    if ((int)(piVar3[6] & 0x3fffffffU) < iVar1) {
      iVar6 = (piVar3[6] & 0x3fffffffU) * 2;
      iVar4 = iVar1;
      if (iVar1 < iVar6) {
        iVar4 = iVar6;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar3 + 4,iVar4,0x30);
    }
    piVar3[5] = iVar1;
    if ((int)(piVar3[3] & 0x3fffffffU) < iVar1) {
      iVar6 = (piVar3[3] & 0x3fffffffU) * 2;
      iVar4 = iVar1;
      if (iVar1 < iVar6) {
        iVar4 = iVar6;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar3 + 1,iVar4,0x30);
    }
    piVar3[2] = iVar1;
    if ((int)(piVar3[9] & 0x3fffffffU) < iVar1) {
      iVar6 = (piVar3[9] & 0x3fffffffU) * 2;
      iVar4 = iVar1;
      if (iVar1 < iVar6) {
        iVar4 = iVar6;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar3 + 7,iVar4,4);
    }
    piVar3[8] = iVar1;
    iVar1 = *(int *)(*piVar3 + 0x40);
    uVar5 = iVar1 + 3U & 0xfffffffc;
    if ((int)(piVar3[0xe] & 0x3fffffffU) < (int)uVar5) {
      F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar3 + 0xc,uVar5,4);
    }
    if ((int)(piVar3[0xe] & 0x3fffffffU) < iVar1) {
      iVar6 = (piVar3[0xe] & 0x3fffffffU) * 2;
      if (iVar6 <= iVar1) {
        iVar6 = iVar1;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar3 + 0xc,iVar6,4);
    }
    iVar6 = iVar1 - piVar3[0xd];
    puVar8 = (undefined4 *)(piVar3[0xc] + piVar3[0xd] * 4);
    if (0 < iVar6) {
      for (; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
    }
    piVar3[0xd] = iVar1;
    piVar7 = piVar3;
  }
  *(int * PTR32 *)((int)this + 0x54) = piVar7;
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 4))))
                              (*(int * PTR32 *)((int)pvVar2 + 0x2c),0x30)));
  *(undefined2 *)((int)this_00 + 4) = 0x30;
  uVar5 = F_00d44040(this_00,*(undefined4 *)((int)this + 0x4c));
  *(uint *)((int)this + 0x50) = uVar5;
  *(undefined4 *)((int)this + 0xc) = 0x3f800000;
  *(undefined4 *)((int)this + 0x10) = 0x3f800000;
  *(undefined4 *)((int)this + 0x14) = 0x3f800000;
  *(undefined4 *)((int)this + 0x18) = 0x3f800000;
  *(undefined4 *)((int)this + 0x1c) = 0x3f800000;
  *(undefined4 *)((int)this + 0x20) = 0x3f800000;
  *(undefined4 *)((int)this + 0x24) = 0x3f800000;
  *(undefined4 *)((int)this + 0x28) = 0x3f800000;
  *(undefined4 *)((int)this + 0x2c) = 0x3f800000;
  *(undefined4 *)((int)this + 0x30) = 0x3f800000;
  *(undefined4 *)((int)this + 0x34) = 0x3f800000;
  *(undefined4 *)((int)this + 0x38) = 0x3f800000;
  *(undefined4 *)((int)this + 0x3c) = 0x3f800000;
  *(undefined4 *)((int)this + 0x40) = 0x3f800000;
  *(undefined4 *)((int)this + 0x44) = 0x3f800000;
  *(undefined4 *)((int)this + 0x48) = 0x3f800000;
  *(undefined1 *)((int)this + 0x60) = 1;
  return 0x3f800000;
}

/* ref: FUN_009f7970 */
uint F_009f7970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f7970u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  uint3 uVar2;
  uint uVar3;
  undefined * pvVar4;
  int iVar5;
  undefined4 * puVar6;
  bool bVar7;
  bool bVar8;
  
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = *(undefined * PTR32 *)(REFG(int, 0x137129c) + 0x60);
  uVar3 = F_00500af0(*(undefined * PTR32 *)(REFG(int, 0x137129c) + 0x60),param_2);
  (*(uint *)(gen_frame + 0x8)) = uVar3 & 0xffff;
  uVar3 = F_00506ea0(*(undefined * PTR32 *)(param_1 + 0x5c),param_2);
  pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 8))))
                             (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),0x2c,0x10)));
  if (pvVar4 == (undefined *)0x0) {
    pvVar4 = (undefined *)0x0;
  }
  else {
    pvVar4 = (undefined *)F_009fea20(pvVar4);
  }
  fVar1 = *(float *)(param_3 + 4);
  bVar7 = GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
  bVar8 = bVar7 || fVar1 == *(float *)&REFG(undefined, 0x1088114);
  uVar2 = CONCAT21((short)((uint)((int)(uintptr_t)pvVar4) >> 0x10),
                   bVar8 << 6 | bVar7 << 2 | 2U | !(*(float *)&REFG(undefined, 0x1088114) <= fVar1));
  if (bVar7 == bVar8) {
    iVar5 = (uint)uVar2 << 8;
  }
  else {
    iVar5 = CONCAT31(uVar2,1);
  }
  F_009f5320(pvVar4,uVar3,iVar5,(int)*(short *)(param_3 + 0xc));
  F_009febd0(pvVar4,*(undefined4 *)(param_3 + 8));
  F_009febd0(pvVar4,param_1);
  uVar3 = F_00500ae0((*(undefined * PTR32 *)(gen_frame + 0x4)),(*(uint *)(gen_frame + 0x8)) & 0xffff);
  *(uint *)((int)pvVar4 + 0x24) = uVar3;
  F_009fb280(*(undefined4 *)((int)pvVar4 + 0x1c),*(float *)(param_3 + 4));
  if (0 < (short)*(ushort *)(param_3 + 0xe)) {
    iVar5 = *(int *)((int)pvVar4 + 0x1c);
    fVar1 = ((float)GEN_TOF(((float10)*(ushort *)(param_3 + 0xe) / (float10)*(double *)&REFG(undefined, 0x1088070))));
    *(float *)(iVar5 + 0x7c) = fVar1;
    if ((float10)*(float *)(iVar5 + 8) < (float10)fVar1) {
      *(float *)(iVar5 + 8) = fVar1;
    }
  }
  if (0 < (short)*(ushort *)(param_3 + 0x10)) {
    F_009fd340(pvVar4,(uint)*(ushort *)(param_3 + 0x10));
  }
  F_00d43f50(*(undefined * PTR32 *)(param_1 + 0x50),*(undefined4 *)((int)pvVar4 + 0x1c));
  puVar6 = (undefined4 *)F_004296a0(0x14,0,0xcb);
  *puVar6 = *(undefined4 *)(param_1 + 0x68);
  puVar6[1] = *(undefined4 *)(param_1 + 0x68);
  puVar6[2] = *(undefined4 *)(param_1 + 0x68);
  *(undefined2 *)(puVar6 + 4) = 0;
  if (puVar6 + 3 != (undefined4 *)0x0) {
    puVar6[3] = pvVar4;
  }
  F_009fe100((undefined *)(param_1 + 100),((undefined1 *)(gen_frame + 0x0)),puVar6,0);
  return (uint)pvVar4;
}

/* ref: FUN_009f7ad0 */
uint F_009f7ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f7ad0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  int * piVar3;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  if (*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) != (undefined *)0x0) {
    F_00d43d90(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))),(*(int * PTR32 *)&gen_args[1])[7]);
  }
  F_009fdca0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 100))),&(*(undefined4 *)(gen_frame + 0x4)),&(*(int * PTR32 *)&gen_args[1]));
  F_009ff380(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 100))),&(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
  F_009fdca0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x74))),&(*(undefined4 *)(gen_frame + 0x4)),&(*(int * PTR32 *)&gen_args[1]));
  F_009ff380(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x74))),&(*(int * PTR32 *)&gen_args[1]),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
  uVar2 = 0;
  piVar3 = piVar1 + 3;
  do {
    if ((undefined *)*piVar3 == (*(undefined * PTR32 *)&gen_args[0])) {
      piVar1[uVar2 + 3] = 0;
      break;
    }
    uVar2 = uVar2 + 1;
    piVar3 = piVar3 + 1;
  } while ((int)uVar2 < 4);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  return uVar2;
}

/* ref: FUN_009f7b70 */
uint F_009f7b70(unsigned int gen_a0)
{
  GEN_ENTER(0x9f7b70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int * piVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  ulonglong uVar7;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x14);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10e16f4));
  puVar3 = (undefined4 *)*puVar2;
  while (puVar3 != puVar2) {
    piVar4 = (int *)puVar3[3];
    if (piVar4 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4);
    }
    if (*(char *)((int)puVar3 + 0x11) == '\0') {
      puVar5 = (undefined4 *)puVar3[2];
      if (*(char *)((int)puVar5 + 0x11) == '\0') {
        cVar1 = *(char *)((int)*puVar5 + 0x11);
        puVar3 = puVar5;
        puVar5 = (undefined4 *)*puVar5;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar5 + 0x11);
          puVar3 = puVar5;
          puVar5 = (undefined4 *)*puVar5;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar3[1] + 0x11);
        puVar6 = (undefined4 *)puVar3[1];
        puVar5 = puVar3;
        while ((puVar3 = puVar6, cVar1 == '\0' && (puVar5 == (undefined4 *)puVar3[2]))) {
          cVar1 = *(char *)((int)puVar3[1] + 0x11);
          puVar6 = (undefined4 *)puVar3[1];
          puVar5 = puVar3;
        }
      }
    }
  }
  F_009ff230((undefined *)((int)this + 0x10));
  F_009ff380((undefined *)((int)this + 0x10),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x14),
               *(undefined4 * PTR32 *)((int)this + 0x14));
  uVar7 = F_00429760(*(undefined4 *)((int)this + 0x14),0x14,0xcb);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  return (uint)uVar7;
}

/* ref: FUN_009f7c20 */
uint F_009f7c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f7c20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(float *)(gen_frame + 0x14)) = *(float *)((int)this + 8);
  *(undefined1 *)((int)this + 0xc) = 0;
  F_009fe250(((undefined1 *)(gen_frame + 0xc)),**(undefined4 * PTR32 *)((int)this + 0x14),*(undefined4 * PTR32 *)((int)this + 0x14),
               ((code *)REFP(0x9fbc80)),0,*(float *)((int)this + 8),(*(undefined4 *)(gen_frame + 0x18)));
  uVar1 = F_009fe410(((undefined1 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x14),
                       *(undefined4 * PTR32 *)((int)this + 0x14),*param_1,GEN_TOF(gen_bits2f(param_1[1])),param_1[2]
                       ,param_1[3],param_1[4]);
  return uVar1;
}

/* ref: FUN_009f7cb0 */
uint F_009f7cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f7cb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  uint uVar2;
  
  fVar1 = *(float *)((int)this + 8);
  (*(float *)(gen_frame + 0x14)) = fVar1;
  *(undefined1 *)((int)this + 0xc) = 0;
  F_009fe250(((undefined1 *)(gen_frame + 0xc)),**(undefined4 * PTR32 *)((int)this + 0x14),*(undefined4 * PTR32 *)((int)this + 0x14),
               ((code *)REFP(0x9fbc80)),0,fVar1,(*(undefined4 *)(gen_frame + 0x18)));
  uVar2 = F_009fcba0(&(*(float *)(gen_frame + 0x14)),**(undefined4 * PTR32 *)((int)this + 0x14),
                       *(undefined4 * PTR32 *)((int)this + 0x14),*param_1,param_1[1]);
  return uVar2;
}

/* ref: FUN_009f7d20 */
uint F_009f7d20(unsigned int gen_a0)
{
  GEN_ENTER(0x9f7d20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  if (*(char *)((int)this + 0xc) == '\0') {
    uVar1 = F_009f6880(this);
    return uVar1;
  }
  *(undefined1 *)((int)this + 0xc) = 0;
  (*(float *)(gen_frame + 0x14)) = *(float *)((int)this + 8);
  uVar1 = F_009fe250(((undefined1 *)(gen_frame + 0xc)),**(undefined4 * PTR32 *)((int)this + 0x14),
                       *(undefined4 * PTR32 *)((int)this + 0x14),((code *)REFP(0x9fbc80)),0,*(float *)((int)this + 8),
                       (*(undefined4 *)(gen_frame + 0x18)));
  return uVar1;
}

/* ref: FUN_009f7d80 */
uint F_009f7d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f7d80u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  F_009ffd30(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))),((undefined1 *)(gen_frame + 0x4)),&(*(int * PTR32 *)&gen_args[1]),0);
  ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]));
  return *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18)));
}

/* ref: FUN_009f7db0 */
unsigned int F_009f7db0(unsigned int gen_a0)
{
  GEN_ENTER(0x9f7db0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x84) = *(undefined4 *)(REFG(int, 0x137129c) + 0x5c);
  return 0;
}

/* ref: FUN_009f7e10 */
uint F_009f7e10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f7e10u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  int iVar2;
  undefined4 * puVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  int * piVar7;
  int * PTR32 * ppiVar8;
  undefined4 * puVar9;
  undefined4 * puVar10;
  
  iVar2 = *(int *)(*(undefined * PTR32 *)&gen_args[0]);
  (*(int * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 *)&gen_args[0]);
  if (iVar2 == 0) {
    return 0;
  }
  puVar9 = ((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  (*(uint *)(gen_frame + 0x14)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar9;
  do {
    (*(uint *)(gen_frame + 0x18)) = 0;
    (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar9;
    do {
      puVar3 = (undefined4 *)puVar9[1];
      for (puVar10 = (undefined4 *)*puVar9; puVar10 != puVar3; puVar10 = puVar10 + 1) {
        if (((undefined *)*puVar10 != (undefined *)0x0) &&
           (uVar5 = F_00505360((undefined *)*puVar10,(*(uint *)&gen_args[1])), uVar5 != 0)) {
          F_00500960(*puVar10,&(*(uint *)&gen_args[1]));
          iVar2 = *(*(int * PTR32 *)(gen_frame + 0xc));
          if (*(uint *)(iVar2 + 0xe8) == (*(uint *)&gen_args[1])) {
            return 0;
          }
          if ((char)(*(int * PTR32 *)&gen_args[2]) == '\0') goto LAB_009f7f17;
          piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)(iVar2 + 0xb0))[1]));
          cVar1 = *(char *)((int)piVar7 + 0x15);
          piVar4 = *(int * PTR32 *)(iVar2 + 0xb0);
          while (cVar1 == '\0') {
            if ((uint)piVar7[3] < (*(uint *)&gen_args[1])) {
              piVar6 = (int *)piVar7[2];
              piVar7 = piVar4;
            }
            else {
              piVar6 = (int *)*piVar7;
            }
            piVar4 = piVar7;
            piVar7 = piVar6;
            cVar1 = *(char *)((int)piVar6 + 0x15);
          }
          piVar7 = *(int * PTR32 *)(iVar2 + 0xb0);
          (*(int * PTR32 *)&gen_args[2]) = piVar4;
          if ((piVar4 == piVar7) || ((*(uint *)&gen_args[1]) < (uint)piVar4[3])) {
            (*(int * PTR32 *)(gen_frame + 0xc)) = piVar7;
            ppiVar8 = &(*(int * PTR32 *)(gen_frame + 0xc));
          }
          else {
            ppiVar8 = &(*(int * PTR32 *)&gen_args[2]);
          }
          piVar7 = *ppiVar8;
          if (piVar7 == *(int * PTR32 *)(iVar2 + 0xb0)) {
LAB_009f7f17: ;
            piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)(iVar2 + 0xc0))[1]));
            cVar1 = *(char *)((int)piVar7 + 0x15);
            piVar4 = *(int * PTR32 *)(iVar2 + 0xc0);
            while (cVar1 == '\0') {
              if ((uint)piVar7[3] < (*(uint *)&gen_args[1])) {
                piVar6 = (int *)piVar7[2];
                piVar7 = piVar4;
              }
              else {
                piVar6 = (int *)*piVar7;
              }
              piVar4 = piVar7;
              piVar7 = piVar6;
              cVar1 = *(char *)((int)piVar6 + 0x15);
            }
            piVar7 = *(int * PTR32 *)(iVar2 + 0xc0);
            (*(int * PTR32 *)&gen_args[2]) = piVar4;
            if ((piVar4 == piVar7) || ((*(uint *)&gen_args[1]) < (uint)piVar4[3])) {
              (*(int * PTR32 *)(gen_frame + 0xc)) = piVar7;
              ppiVar8 = &(*(int * PTR32 *)(gen_frame + 0xc));
            }
            else {
              ppiVar8 = &(*(int * PTR32 *)&gen_args[2]);
            }
            piVar7 = *ppiVar8;
            if (piVar7 == *(int * PTR32 *)(iVar2 + 0xc0)) {
              return 0;
            }
          }
          return piVar7[4];
        }
      }
      uVar5 = (*(uint *)(gen_frame + 0x18)) + 1;
      puVar9 = puVar9 + 4;
      (*(uint *)(gen_frame + 0x18)) = uVar5;
    } while (uVar5 < 4);
    uVar5 = (*(uint *)(gen_frame + 0x14)) + 1;
    puVar9 = (*(undefined4 * PTR32 *)(gen_frame + 0x10)) + 0x10;
    (*(uint *)(gen_frame + 0x14)) = uVar5;
    (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar9;
    if (1 < uVar5) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_009f7f70 */
uint F_009f7f70(unsigned int gen_a0)
{
  GEN_ENTER(0x9f7f70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * puVar1;
  uint uVar2;
  int iVar3;
  
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) & 0xfffc0000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10e1708));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  puVar1 = (undefined2 *)((int)this + 0x10);
  iVar3 = 1;
  do {
    *puVar1 = 0x500;
    *(undefined1 *)(puVar1 + 1) = 2;
    puVar1[2] = 0x50;
    puVar1[3] = 0xffff;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined4 *)(puVar1 + 0x1a) = 0;
    *(undefined4 *)(puVar1 + 8) = 0;
    *(undefined4 *)(puVar1 + 10) = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0;
    *(undefined4 *)(puVar1 + 0xe) = 0;
    *(undefined4 *)(puVar1 + 0x10) = 0;
    *(undefined4 *)(puVar1 + 0x12) = 0;
    *(undefined4 *)(puVar1 + 0x14) = 0;
    *(undefined4 *)(puVar1 + 0x16) = 0;
    *(undefined4 *)(puVar1 + 0x1c) = 0;
    *(undefined4 *)(puVar1 + 0x1e) = 0;
    *(undefined4 *)(puVar1 + 0x20) = 0;
    *(undefined4 *)(puVar1 + 0x22) = 0;
    puVar1[0x24] = 0;
    puVar1[0x25] = 0;
    puVar1[0x26] = 0;
    *(undefined1 *)(puVar1 + 0x27) = 0;
    puVar1 = puVar1 + 0x28;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined2 *)((int)this + 0xb0) = 0xffff;
  *(undefined2 *)((int)this + 0xb2) = 0xffff;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined1 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined1 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  uVar2 = F_004296a0(0x14,0,0xcb);
  *(uint *)((int)this + 0xf4) = uVar2;
  *(uint *)uVar2 = uVar2;
  *((int *)GEN_TOP((*(int *)((int)this + 0xf4) + 4))) = *(int *)((int)this + 0xf4);
  *((int *)GEN_TOP((*(int *)((int)this + 0xf4) + 8))) = *(int *)((int)this + 0xf4);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0xf4) + 0x10))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0xf4) + 0x11))) = 1;
  *(undefined4 *)((int)this + 0x108) = 0;
  uVar2 = F_004296a0(0x14,0,0xcb);
  *(uint *)((int)this + 0x104) = uVar2;
  *(uint *)uVar2 = uVar2;
  *((int *)GEN_TOP((*(int *)((int)this + 0x104) + 4))) = *(int *)((int)this + 0x104);
  *((int *)GEN_TOP((*(int *)((int)this + 0x104) + 8))) = *(int *)((int)this + 0x104);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x104) + 0x10))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x104) + 0x11))) = 1;
  *(undefined4 *)((int)this + 0x118) = 0;
  uVar2 = F_004296a0(0x14,0,0xcb);
  *(uint *)((int)this + 0x114) = uVar2;
  *(uint *)uVar2 = uVar2;
  *((int *)GEN_TOP((*(int *)((int)this + 0x114) + 4))) = *(int *)((int)this + 0x114);
  *((int *)GEN_TOP((*(int *)((int)this + 0x114) + 8))) = *(int *)((int)this + 0x114);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x114) + 0x10))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x114) + 0x11))) = 1;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  return (uint)this;
}

/* ref: Client::Graphics::Animation::PartialSkeleton::vf7 */
uint F_009f8c90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f8c90u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  iVar4 = *(*(int * PTR32 *)&gen_args[2]);
  fVar1 = gen_bits2f((*(int * PTR32 *)&gen_args[2])[1]);
  (*(float *)(gen_frame + 0x8)) = fVar1;
  uVar2 = *((uint *)GEN_TOP((*(int *)((*(int *)&gen_args[1]) + 0x24) + 8)));
  if ((uVar2 >> 2 & 1) == 0) {
    if ((uVar2 >> 3 & 1) != 0) {
      iVar4 = 0;
    }
  }
  else {
    iVar4 = 1;
  }
  if (GEN_ISNAN(fVar1) != (GEN_ISNAN(fVar1) || fVar1 == 0.0)) {
    uVar2 = F_009f6ca0((*(undefined * PTR32 *)&gen_args[0]),(*(int *)&gen_args[1]));
    return uVar2;
  }
  if (iVar4 == 0) {
    F_009f0ba0((*(int *)&gen_args[1]),fVar1);
  }
  else if (iVar4 == 1) {
    if (*(char *)((*(int *)&gen_args[1]) + 0x2b) == '\0') {
      (*(undefined * PTR32 *)&gen_args[0])[0xd8] = (undefined1)0x1;
      *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xd0))) = 0;
      *((float *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xd4))) = fVar1;
      F_009f6ca0((*(undefined * PTR32 *)&gen_args[0]),(*(int *)&gen_args[1]));
    }
    else {
      (*(undefined * PTR32 *)&gen_args[0])[0xe4] = (undefined1)0x1;
      *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xdc))) = 0;
      *((float *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xe0))) = fVar1;
      F_009f6ca0((*(undefined * PTR32 *)&gen_args[0]),(*(int *)&gen_args[1]));
    }
  }
  piVar3 = (int *)F_009ff290((*(undefined * PTR32 *)&gen_args[0]) + 0xf0,&(*(int * PTR32 *)&gen_args[2]),&(*(int *)&gen_args[1]));
  if (*piVar3 != *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xf4)))) {
    piVar3 = (int *)F_009ffd30((*(undefined * PTR32 *)&gen_args[0]) + 0x100,((undefined1 *)(gen_frame + 0x4)),&(*(int *)&gen_args[1]),0);
  }
  return (uint)piVar3;
}

/* ref: FUN_009f8d90 */
uint F_009f8d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f8d90u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  int * piVar8;
  ulonglong uVar9;
  
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (*(undefined * PTR32 *)&gen_args[0]);
  if (*(*(int * PTR32 *)&gen_args[1]) == 5) {
    piVar8 = (*(int * PTR32 *)&gen_args[1]);
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8))) != 0) {
      do {
        uVar6 = F_009f6ca0((*(undefined * PTR32 *)&gen_args[0]),*((undefined4 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf4))) + 0xc))));
      } while (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8))) != 0);
      return uVar6;
    }
  }
  else {
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    puVar7 = (undefined4 *)F_004296a0(0x14,0,0xcb);
    (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar7;
    *puVar7 = puVar7;
    puVar7[1] = puVar7;
    puVar7[2] = puVar7;
    *(undefined1 *)(puVar7 + 4) = 1;
    *(undefined1 *)((int)puVar7 + 0x11) = 1;
    puVar7 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf4)));
    puVar2 = (undefined4 *)*puVar7;
    puVar4 = (*(undefined4 * PTR32 *)(gen_frame + 0x4));
    while ((*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar4, puVar2 != puVar7) {
      (*(int * PTR32 *)&gen_args[1]) = (int *)puVar2[3];
      if ((*((uint *)GEN_TOP(((*(int * PTR32 *)&gen_args[1])[9] + 8))) >> 3 & 1) != 0) {
        F_009ffd30(((undefined1 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x10)),&(*(int * PTR32 *)&gen_args[1]),0);
      }
      puVar4 = (*(undefined4 * PTR32 *)(gen_frame + 0x4));
      if (*(char *)((int)puVar2 + 0x11) == '\0') {
        puVar3 = (undefined4 *)puVar2[2];
        if (*(char *)((int)puVar3 + 0x11) == '\0') {
          cVar1 = *(char *)((int)*puVar3 + 0x11);
          puVar2 = puVar3;
          puVar3 = (undefined4 *)*puVar3;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*puVar3 + 0x11);
            puVar2 = puVar3;
            puVar3 = (undefined4 *)*puVar3;
          }
        }
        else {
          cVar1 = *(char *)((int)puVar2[1] + 0x11);
          puVar5 = (undefined4 *)puVar2[1];
          puVar3 = puVar2;
          while ((puVar2 = puVar5, cVar1 == '\0' && (puVar3 == (undefined4 *)puVar2[2]))) {
            cVar1 = *(char *)((int)puVar2[1] + 0x11);
            puVar5 = (undefined4 *)puVar2[1];
            puVar3 = puVar2;
          }
        }
      }
    }
    puVar7 = (undefined4 *)*puVar4;
    while (puVar7 != puVar4) {
      F_009f6ca0((*(undefined * PTR32 *)(gen_frame + 0x18)),puVar7[3]);
      if (*(char *)((int)puVar7 + 0x11) == '\0') {
        puVar2 = (undefined4 *)puVar7[2];
        if (*(char *)((int)puVar2 + 0x11) == '\0') {
          cVar1 = *(char *)((int)*puVar2 + 0x11);
          puVar7 = puVar2;
          puVar2 = (undefined4 *)*puVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*puVar2 + 0x11);
            puVar7 = puVar2;
            puVar2 = (undefined4 *)*puVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)puVar7[1] + 0x11);
          puVar3 = (undefined4 *)puVar7[1];
          puVar2 = puVar7;
          while ((puVar7 = puVar3, cVar1 == '\0' && (puVar2 == (undefined4 *)puVar7[2]))) {
            cVar1 = *(char *)((int)puVar7[1] + 0x11);
            puVar3 = (undefined4 *)puVar7[1];
            puVar2 = puVar7;
          }
        }
      }
    }
    F_009ff380(((undefined1 *)(gen_frame + 0x0)),&(*(int * PTR32 *)&gen_args[1]),*(*(undefined4 * PTR32 *)(gen_frame + 0x4)),(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
    uVar9 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x4)),0x14,0xcb);
    piVar8 = (int *)uVar9;
  }
  return (uint)piVar8;
}

/* ref: Client::Graphics::Animation::PartialSkeleton::vf3 */
uint F_009f8f20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f8f20u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int * piVar2;
  
  piVar2 = (int *)F_009ff290((*(undefined * PTR32 *)&gen_args[0]) + 0x100,((undefined1 *)(gen_frame + 0x8)),&(*(int *)&gen_args[1]));
  if (*piVar2 != *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x104)))) {
    F_009ffd30((*(undefined * PTR32 *)&gen_args[0]) + 0x110,((undefined1 *)(gen_frame + 0x4)),&(*(int *)&gen_args[1]),0);
  }
  uVar1 = *(uint *)((*(int *)&gen_args[1]) + 0x24);
  if ((*(uint *)(uVar1 + 8) >> 2 & 1) != 0) {
    *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) = *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) | 1;
  }
  return uVar1;
}

/* ref: FUN_009f8f80 */
unsigned int F_009f8f80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f8f80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  char cVar1;
  undefined * this_00;
  uint uVar2;
  
  if ((param_2 < *(uint *)((int)this + 4)) && (uVar2 = 0, *(int *)this != 0)) {
    do {
      if ((*((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xc) + uVar2 * 4))) + 0x3c + param_2 * 0x50))) & 1)
          != 0) {
        if (((code *)*(gen_code32 *)((int)this + 0x14) != (code *)0x0) &&
           ((cVar1 = *((char *)GEN_TOP((*(int *)((int)this + 8) + 0x9c))), cVar1 == -1 || ((int)cVar1 != uVar2)
            ))) {
          ((code *)*(gen_code32 *)((int)this + 0x14))(*(undefined4 *)((int)this + 0x10),uVar2);
        }
        this_00 = ((undefined *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xc) + uVar2 * 4))) + param_2 * 0x50)));
        if (((*(byte *)((int)this_00 + 0x3c) & 1) != 0) &&
           ((!GEN_ISNAN(*(float *)((int)this_00 + 0x38)) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
            !(*(float *)((int)this_00 + 0x38) <= *(float *)&REFG(undefined, 0x1088114)))) {
          F_009f7380(this_00,param_1);
        }
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)this);
  }
  return 0;
}

/* ref: FUN_009f9010 */
uint F_009f9010(unsigned int gen_a0)
{
  GEN_ENTER(0x9f9010u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10e1614));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  pvVar1 = this;
  if (REFG(void * PTR32, 0x14a243c) != (undefined *)0x0) {
    *(undefined * PTR32 *)((int)this + 4) = REFG(void * PTR32, 0x14a243c);
    *((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x14a243c) + 8))) = this;
    pvVar1 = REFG(void * PTR32, 0x1487c68);
  }
  REFG(void * PTR32, 0x1487c68) = pvVar1;
  REFG(void * PTR32, 0x14a243c) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10e1730));
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined1 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  uVar2 = F_004296a0(0x14,0,0xcb);
  *(uint *)((int)this + 0x68) = uVar2;
  *(uint *)uVar2 = uVar2;
  *((int *)GEN_TOP((*(int *)((int)this + 0x68) + 4))) = *(int *)((int)this + 0x68);
  *((int *)GEN_TOP((*(int *)((int)this + 0x68) + 8))) = *(int *)((int)this + 0x68);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x68) + 0x10))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x68) + 0x11))) = 1;
  *(undefined4 *)((int)this + 0x7c) = 0;
  uVar2 = F_004296a0(0x14,0,0xcb);
  *(uint *)((int)this + 0x78) = uVar2;
  *(uint *)uVar2 = uVar2;
  *((int *)GEN_TOP((*(int *)((int)this + 0x78) + 4))) = *(int *)((int)this + 0x78);
  *((int *)GEN_TOP((*(int *)((int)this + 0x78) + 8))) = *(int *)((int)this + 0x78);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x78) + 0x10))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x78) + 0x11))) = 1;
  *(undefined4 *)((int)this + 0x8c) = 0;
  uVar2 = F_004296a0(0x14,0,0xcb);
  *(uint *)((int)this + 0x88) = uVar2;
  *(uint *)uVar2 = uVar2;
  *((int *)GEN_TOP((*(int *)((int)this + 0x88) + 4))) = *(int *)((int)this + 0x88);
  *((int *)GEN_TOP((*(int *)((int)this + 0x88) + 8))) = *(int *)((int)this + 0x88);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x88) + 0x10))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x88) + 0x11))) = 1;
  *(undefined4 *)((int)this + 0xc) = 0x3f800000;
  *(undefined4 *)((int)this + 0x10) = 0x3f800000;
  *(undefined4 *)((int)this + 0x14) = 0x3f800000;
  *(undefined4 *)((int)this + 0x18) = 0x3f800000;
  *(undefined4 *)((int)this + 0x1c) = 0x3f800000;
  *(undefined4 *)((int)this + 0x20) = 0x3f800000;
  *(undefined4 *)((int)this + 0x24) = 0x3f800000;
  *(undefined4 *)((int)this + 0x28) = 0x3f800000;
  *(undefined4 *)((int)this + 0x2c) = 0x3f800000;
  *(undefined4 *)((int)this + 0x30) = 0x3f800000;
  *(undefined4 *)((int)this + 0x34) = 0x3f800000;
  *(undefined4 *)((int)this + 0x38) = 0x3f800000;
  *(undefined4 *)((int)this + 0x3c) = 0x3f800000;
  *(undefined4 *)((int)this + 0x40) = 0x3f800000;
  *(undefined4 *)((int)this + 0x44) = 0x3f800000;
  *(undefined4 *)((int)this + 0x48) = 0x3f800000;
  return (uint)this;
}

/* ref: FUN_009f9140 */
unsigned int F_009f9140(unsigned int gen_a0)
{
  GEN_ENTER(0x9f9140u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  undefined * this_00;
  int iVar2;
  int * piVar3;
  
  iVar2 = *(int *)((int)this + 0x6c);
  do {
    if (iVar2 == 0) {
      return 0;
    }
    piVar1 = *((int * PTR32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x68) + 0xc)));
    this_00 = *(undefined * PTR32 *)((int)this + 0x50);
    (*(int * PTR32 *)(gen_frame + 0x18)) = piVar1;
    if (this_00 != (undefined *)0x0) {
      F_00d43d90(this_00,piVar1[7]);
    }
    F_009fdca0((undefined *)((int)this + 100),&(*(undefined4 *)(gen_frame + 0x8)),&(*(int * PTR32 *)(gen_frame + 0x18)));
    F_009ff380((undefined *)((int)this + 100),((undefined1 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)));
    F_009fdca0((undefined *)((int)this + 0x74),&(*(undefined4 *)(gen_frame + 0x0)),&(*(int * PTR32 *)(gen_frame + 0x18)));
    F_009ff380((undefined *)((int)this + 0x74),((undefined1 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)));
    iVar2 = 0;
    piVar3 = piVar1 + 3;
    do {
      if ((undefined *)*piVar3 == this) {
        piVar1[iVar2 + 3] = 0;
        break;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < 4);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    }
    iVar2 = *(int *)((int)this + 0x6c);
  } while( true );
}

/* ref: Client::Graphics::Animation::MaterialAnimationModule::vf3 */
uint F_009f9200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f9200u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  
  piVar1 = (int *)F_009ff290((*(undefined * PTR32 *)&gen_args[0]) + 0x74,((undefined1 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  if (*piVar1 != *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x78)))) {
    piVar1 = (int *)F_009ffd30((*(undefined * PTR32 *)&gen_args[0]) + 0x84,((undefined1 *)(gen_frame + 0x4)),&(*(undefined4 *)&gen_args[1]),0);
  }
  return (uint)piVar1;
}

/* ref: Client::Graphics::Animation::MaterialAnimationModule::vf7 */
uint F_009f9240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f9240u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  
  fVar1 = *(float *)((*(uint *)&gen_args[2]) + 4);
  if ((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) !=
      ((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || fVar1 == *(float *)&REFG(undefined, 0x1088114))) {
    (*(uint *)&gen_args[2]) = (uint)gen_fl2bits(fVar1);
    uVar3 = F_009f7ad0((*(undefined * PTR32 *)&gen_args[0]),(*(int *)&gen_args[1]));
    return uVar3;
  }
  iVar2 = *(int *)(*(uint *)&gen_args[2]);
  (*(uint *)&gen_args[2]) = (uint)gen_fl2bits(fVar1);
  if (((*((uint *)GEN_TOP((*(int *)((*(int *)&gen_args[1]) + 0x24) + 8))) >> 2 & 1) == 0) && (iVar2 == 0)) {
    F_009f0ba0((*(int *)&gen_args[1]),fVar1);
  }
  piVar4 = (int *)F_009ff290(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 100))),&(*(uint *)&gen_args[2]),&(*(int *)&gen_args[1]));
  if (*piVar4 != *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x68)))) {
    piVar4 = (int *)F_009ffd30(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x74))),((undefined1 *)(gen_frame + 0x4)),&(*(int *)&gen_args[1]),0);
  }
  return (uint)piVar4;
}

/* ref: FUN_009f92d0 */
uint F_009f92d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9f92d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = REFG(float, 0x1087f04);
  *(undefined4 *)((int)this + 4) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10e16f4));
  *(undefined4 *)((int)this + 8) = uVar1;
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  uVar2 = F_004296a0(0x14,0,0xcb);
  *(uint *)((int)this + 0x14) = uVar2;
  *(uint *)uVar2 = uVar2;
  *((int *)GEN_TOP((*(int *)((int)this + 0x14) + 4))) = *(int *)((int)this + 0x14);
  *((int *)GEN_TOP((*(int *)((int)this + 0x14) + 8))) = *(int *)((int)this + 0x14);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x14) + 0x10))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x14) + 0x11))) = 1;
  return (uint)this;
}

/* ref: FUN_009f9330 */
uint F_009f9330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f9330u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  bVar1 = F_009f30c0(this,param_1);
  if (bVar1 != 0) {
    uVar2 = F_009f7e10(this,param_1,param_2);
    return uVar2;
  }
  puVar3 = (undefined4 *)F_0050eba0(*(undefined * PTR32 *)((int)this + 0x84),param_1);
  puVar5 = (undefined4 *)*puVar3;
  puVar3 = (undefined4 *)puVar3[1];
  while( true ) {
    if (puVar5 == puVar3) {
      return 0;
    }
    puVar4 = puVar5;
    if (0xf < (uint)puVar5[5]) {
      puVar4 = (undefined4 *)*puVar5;
    }
    uVar2 = F_009f7e10(this,puVar4,param_2);
    if (uVar2 != 0) break;
    puVar5 = puVar5 + 7;
  }
  return uVar2;
}

/* ref: FUN_009f93a0 */
unsigned int F_009f93a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9f93a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  LPVOID pvVar1;
  undefined4 * puVar2;
  undefined * pvVar3;
  int iVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x5;
  F_009f8d90(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  puVar2 = (undefined4 *)((int)this + 0xb4);
  iVar4 = 2;
  do {
    if ((undefined *)*puVar2 != (undefined *)0x0) {
      F_00d91a80((undefined *)*puVar2);
    }
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  puVar2 = (undefined4 *)((int)this + 0xbc);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x4;
  do {
    pvVar3 = (undefined *)*puVar2;
    if (pvVar3 != (undefined *)0x0) {
      F_009ffa70(pvVar3);
      pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),pvVar3,0x3c);
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
    pvVar3 = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + -1);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar3;
  } while (pvVar3 != (undefined *)0x0);
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) & 0xfffc003d;
  if (*(int *)((int)this + 0xec) != 0) {
    F_0050c620(*(int *)((int)this + 0xec),0,0);
    *(undefined4 *)((int)this + 0xec) = 0;
  }
  if (*(int *)((int)this + 0xe8) != 0) {
    F_0050c620(*(int *)((int)this + 0xe8),0,0);
    *(undefined4 *)((int)this + 0xe8) = 0;
  }
  pvVar3 = (undefined *)((int)this + 0x10);
  iVar4 = 2;
  do {
    F_00d367b0(pvVar3);
    pvVar3 = (undefined *)((int)pvVar3 + 0x50);
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return 0;
}

/* ref: FUN_009f9490 */
uint F_009f9490(unsigned int gen_a0)
{
  GEN_ENTER(0x9f9490u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  LPVOID pvVar1;
  uint uVar2;
  
  F_009f9140(this);
  *(undefined4 *)((int)this + 0xc) = 0x3f800000;
  *(undefined4 *)((int)this + 0x10) = 0x3f800000;
  *(undefined4 *)((int)this + 0x14) = 0x3f800000;
  *(undefined4 *)((int)this + 0x18) = 0x3f800000;
  *(undefined4 *)((int)this + 0x1c) = 0x3f800000;
  *(undefined4 *)((int)this + 0x20) = 0x3f800000;
  *(undefined4 *)((int)this + 0x24) = 0x3f800000;
  *(undefined4 *)((int)this + 0x28) = 0x3f800000;
  *(undefined4 *)((int)this + 0x2c) = 0x3f800000;
  *(undefined4 *)((int)this + 0x30) = 0x3f800000;
  *(undefined4 *)((int)this + 0x34) = 0x3f800000;
  *(undefined4 *)((int)this + 0x38) = 0x3f800000;
  *(undefined4 *)((int)this + 0x3c) = 0x3f800000;
  *(undefined4 *)((int)this + 0x40) = 0x3f800000;
  *(undefined4 *)((int)this + 0x44) = 0x3f800000;
  *(undefined4 *)((int)this + 0x48) = 0x3f800000;
  if (*(undefined * PTR32 *)((int)this + 0x50) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 0x50));
    *(undefined4 *)((int)this + 0x50) = 0;
  }
  this_00 = *(undefined * PTR32 *)((int)this + 0x54);
  *(undefined4 *)((int)this + 0x4c) = 0;
  if (this_00 != (undefined *)0x0) {
    F_009ffa70(this_00);
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this_00,0x3c);
    *(undefined4 *)((int)this + 0x54) = 0;
  }
  if (*(int *)((int)this + 0x58) != 0) {
    F_0050c620(*(int *)((int)this + 0x58),0,0);
    *(undefined4 *)((int)this + 0x58) = 0;
  }
  uVar2 = 0;
  if (*(int *)((int)this + 0x5c) != 0) {
    uVar2 = F_0050c620(*(int *)((int)this + 0x5c),0,0);
    *(undefined4 *)((int)this + 0x5c) = 0;
  }
  *(undefined1 *)((int)this + 0x60) = 0;
  return uVar2;
}

/* ref: FUN_009f9540 */
uint F_009f9540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9f9540u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  ushort uVar1;
  uint uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 4) = 0xffff;
  uVar2 = F_009f32e0(this,param_2);
  param_1[3] = uVar2;
  uVar2 = F_009f53b0(this,param_2,param_3);
  *param_1 = uVar2;
  uVar2 = F_009f6930(this,param_2,param_3);
  param_1[1] = uVar2;
  uVar2 = F_009f9330(this,param_2,param_4);
  param_1[2] = uVar2;
  uVar1 = F_009f5460(this,param_2);
  *(ushort *)(param_1 + 4) = uVar1;
  return (uint)param_1;
}

/* ref: FUN_009f95b0 */
unsigned int F_009f95b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9f95b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined * this_00;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10e1708));
  F_009f93a0(this);
  F_009ff380((undefined *)((int)this + 0x110),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x114),
               *(undefined4 * PTR32 *)((int)this + 0x114));
  F_00429760(*(undefined4 *)((int)this + 0x114),0x14,0xcb);
  F_009ff380((undefined *)((int)this + 0x100),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x104),
               *(undefined4 * PTR32 *)((int)this + 0x104));
  F_00429760(*(undefined4 *)((int)this + 0x104),0x14,0xcb);
  F_009ff380((undefined *)((int)this + 0xf0),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0xf4),
               *(undefined4 * PTR32 *)((int)this + 0xf4));
  F_00429760(*(undefined4 *)((int)this + 0xf4),0x14,0xcb);
  this_00 = (undefined *)((int)this + 0xb0);
  iVar1 = 1;
  do {
    this_00 = (undefined *)((int)this_00 + -0x50);
    F_00d367b0(this_00);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10e1614));
  return 0;
}

/* ref: FUN_009f9680 */
uint F_009f9680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f9680u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  int iVar2;
  LPVOID pvVar3;
  int * this_00;
  int iVar4;
  undefined * this_01;
  int iVar5;
  int iVar6;
  short * psVar7;
  char * pcVar8;
  byte * pbVar9;
  uint uVar10;
  uint * puVar11;
  undefined4 * puVar12;
  byte * pbVar13;
  bool bVar14;
  int local_10;
  undefined4 * local_c;
  
  iVar5 = *(int *)(param_1 + 0xa8);
  F_009f93a0(this);
  if (*(int *)((int)this + 0xec) != 0) {
    F_0050c620(*(int *)((int)this + 0xec),0,0);
    *(undefined4 *)((int)this + 0xec) = 0;
  }
  *(int *)((int)this + 0xec) = param_1;
  F_00513f60(param_1,0,0);
  local_c = (undefined4 *)((int)this + 0xbc);
  *(uint *)((int)this + 4) =
       *(uint *)((int)this + 4) ^ (*(int *)(iVar5 + 0x1c) << 6 ^ *(uint *)((int)this + 4)) & 0x3ffc0
  ;
  local_10 = 4;
  do {
    pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    this_00 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar3 + 0x2c) + 4))))
                               (*(int * PTR32 *)((int)pvVar3 + 0x2c),0x3c)));
    if (this_00 == (int *)0x0) {
      this_00 = (int *)0x0;
    }
    else {
      *this_00 = iVar5;
      this_00[1] = 0;
      this_00[2] = 0;
      this_00[3] = ((int)0x80000000);
      this_00[4] = 0;
      this_00[5] = 0;
      this_00[6] = ((int)0x80000000);
      this_00[7] = 0;
      this_00[8] = 0;
      this_00[9] = ((int)0x80000000);
      *(undefined2 *)(this_00 + 10) = 0;
      this_00[0xc] = 0;
      this_00[0xd] = 0;
      this_00[0xe] = ((int)0x80000000);
      iVar2 = *(int *)(*this_00 + 0x1c);
      this_00[0xb] = iVar2;
      uVar10 = iVar2 + 3U & 0xfffffffc;
      if ((int)(this_00[6] & 0x3fffffffU) < (int)uVar10) {
        F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this_00 + 4,uVar10,0x30);
      }
      if ((int)(this_00[3] & 0x3fffffffU) < (int)uVar10) {
        F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this_00 + 1,uVar10,0x30);
      }
      if ((int)(this_00[9] & 0x3fffffffU) < (int)uVar10) {
        F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this_00 + 7,uVar10,4);
      }
      if ((int)(this_00[6] & 0x3fffffffU) < iVar2) {
        iVar6 = (this_00[6] & 0x3fffffffU) * 2;
        iVar4 = iVar2;
        if (iVar2 < iVar6) {
          iVar4 = iVar6;
        }
        F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this_00 + 4,iVar4,0x30);
      }
      this_00[5] = iVar2;
      if ((int)(this_00[3] & 0x3fffffffU) < iVar2) {
        iVar6 = (this_00[3] & 0x3fffffffU) * 2;
        iVar4 = iVar2;
        if (iVar2 < iVar6) {
          iVar4 = iVar6;
        }
        F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this_00 + 1,iVar4,0x30);
      }
      this_00[2] = iVar2;
      if ((int)(this_00[9] & 0x3fffffffU) < iVar2) {
        iVar6 = (this_00[9] & 0x3fffffffU) * 2;
        iVar4 = iVar2;
        if (iVar2 < iVar6) {
          iVar4 = iVar6;
        }
        F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this_00 + 7,iVar4,4);
      }
      this_00[8] = iVar2;
      iVar2 = *(int *)(*this_00 + 0x40);
      uVar10 = iVar2 + 3U & 0xfffffffc;
      if ((int)(this_00[0xe] & 0x3fffffffU) < (int)uVar10) {
        F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this_00 + 0xc,uVar10,4);
      }
      if ((int)(this_00[0xe] & 0x3fffffffU) < iVar2) {
        iVar6 = (this_00[0xe] & 0x3fffffffU) * 2;
        if (iVar6 <= iVar2) {
          iVar6 = iVar2;
        }
        F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this_00 + 0xc,iVar6,4);
      }
      iVar6 = iVar2 - this_00[0xd];
      puVar12 = (undefined4 *)(this_00[0xc] + this_00[0xd] * 4);
      if (0 < iVar6) {
        for (; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar12 = 0;
          puVar12 = puVar12 + 1;
        }
      }
      this_00[0xd] = iVar2;
    }
    *local_c = this_00;
    F_00d31730(this_00);
    local_c = local_c + 1;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  puVar11 = (uint *)((int)this + 0xb4);
  local_10 = 2;
  do {
    pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    this_01 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar3 + 0x2c) + 4))))
                                (*(int * PTR32 *)((int)pvVar3 + 0x2c),0x30)));
    *(undefined2 *)((int)this_01 + 4) = 0x30;
    uVar10 = F_00d44040(this_01,iVar5);
    *puVar11 = uVar10;
    puVar11 = puVar11 + 1;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  if ((param_2 == 0) || (iVar5 == param_2)) {
    uVar10 = 0xffffffff;
    *(undefined2 *)((int)this + 0xb0) = 0xffff;
    *(undefined2 *)((int)this + 0xb2) = 0xffff;
  }
  else {
    uVar10 = 0;
    if (*(uint *)(iVar5 + 0x10) != 0) {
      psVar7 = *(short * PTR32 *)(iVar5 + 0xc);
      while (*psVar7 != -1) {
        uVar10 = uVar10 + 1;
        psVar7 = psVar7 + 1;
        if (*(uint *)(iVar5 + 0x10) <= uVar10) {
          return uVar10;
        }
      }
      *(short *)((int)this + 0xb0) = (short)uVar10;
      if (0x3133302f < *(uint *)(param_1 + 0xd8)) {
        *(undefined2 *)((int)this + 0xb2) = *(undefined2 *)(param_1 + 0xe4);
        return uVar10;
      }
      pbVar13 = ((byte *)GEN_TOP((*((uint *)GEN_TOP((*(int *)(iVar5 + 0x18) + uVar10 * 8))) & 0xfffffffe)));
      pcVar8 = "n_ex_top";
      pbVar9 = pbVar13;
      do {
        bVar1 = *pcVar8;
        bVar14 = bVar1 < *pbVar9;
        if (bVar1 != *pbVar9) {
LAB_009f99d0: ;
          iVar5 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
          goto LAB_009f99d5;
        }
        if (bVar1 == 0) break;
        bVar1 = pcVar8[1];
        bVar14 = bVar1 < pbVar9[1];
        if (bVar1 != pbVar9[1]) goto LAB_009f99d0;
        pcVar8 = pcVar8 + 2;
        pbVar9 = pbVar9 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_009f99d5: ;
      if (iVar5 != 0) {
        uVar10 = F_00d32e80(param_2,pbVar13,0);
        *(short *)((int)this + 0xb2) = (short)uVar10;
        return uVar10;
      }
      uVar10 = F_00d32e80(param_2,"j_sebo_c",0);
      *(short *)((int)this + 0xb2) = (short)uVar10;
      return uVar10;
    }
  }
  return uVar10;
}

/* ref: FUN_009f9a30 */
unsigned int F_009f9a30(unsigned int gen_a0)
{
  GEN_ENTER(0x9f9a30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  char cVar1;
  ushort uVar2;
  int * piVar3;
  int * piVar4;
  uint * puVar5;
  longlong lVar6;
  int * piVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int * piVar13;
  int iVar14;
  undefined4 * puVar15;
  uint uVar16;
  
  (*(undefined * PTR32 *)(gen_frame + 0x74)) = this;
  if ((*(byte *)((int)this + 4) & 1) != 0) {
    piVar3 = *(int * PTR32 *)((int)this + 0xf4);
    piVar13 = (int *)*piVar3;
    iVar14 = 0;
    (*(int *)(gen_frame + 0x78)) = 0;
    if (piVar13 != piVar3) {
      do {
        if (0xf < iVar14) break;
        ((int *)(gen_frame + 0x4))[(int)(iVar14)] = piVar13[3];
        iVar14 = iVar14 + 1;
        if (*(char *)((int)piVar13 + 0x11) == '\0') {
          piVar4 = (int *)piVar13[2];
          if (*(char *)((int)piVar4 + 0x11) == '\0') {
            cVar1 = *(char *)(*piVar4 + 0x11);
            piVar13 = piVar4;
            piVar4 = (int *)*piVar4;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*piVar4 + 0x11);
              piVar13 = piVar4;
              piVar4 = (int *)*piVar4;
            }
          }
          else {
            cVar1 = *(char *)(piVar13[1] + 0x11);
            piVar7 = (int *)piVar13[1];
            piVar4 = piVar13;
            while ((piVar13 = piVar7, cVar1 == '\0' && (piVar4 == (int *)piVar13[2]))) {
              cVar1 = *(char *)(piVar13[1] + 0x11);
              piVar7 = (int *)piVar13[1];
              piVar4 = piVar13;
            }
          }
        }
      } while (piVar13 != piVar3);
      (*(int *)(gen_frame + 0x78)) = iVar14;
    }
    iVar14 = (*(int *)(gen_frame + 0x78));
    F_00a00690(((int *)(gen_frame + 0x4)),((int *)(gen_frame + 0x4)) + (*(int *)(gen_frame + 0x78)),(int)(((int *)(gen_frame + 0x4)) + (*(int *)(gen_frame + 0x78))) - (int)((int *)(gen_frame + 0x4)) >> 2,
                 ((code *)REFP(0x9f0d50)));
    bVar8 = F_00500b10(*(undefined4 *)(REFG(int, 0x137129c) + 0x60));
    (*(uint *)(gen_frame + 0x44)) = *(uint *)((int)this + 8);
    (*(uint *)(gen_frame + 0x60)) = (uint)bVar8;
    (*(uint *)(gen_frame + 0x48)) = *(uint *)((int)this + 0xc);
    (*(uint *)(gen_frame + 0x4c)) = 0;
    (*(uint *)(gen_frame + 0x50)) = 0;
    (*(uint *)(gen_frame + 0x68)) = 0xffff;
    (*(uint *)(gen_frame + 0x64)) = 0xffffffff;
    (*(int *)(gen_frame + 0x6c)) = 0;
    if (0 < iVar14) {
      do {
        puVar5 = *(uint * PTR32 *)(((int *)(gen_frame + 0x4))[(int)((*(int *)(gen_frame + 0x6c)))] + 0x24);
        if (((puVar5[2] >> 5 & 1) == 0) &&
           (((*(byte *)((int)this + 4) & 0x3c) != 0 || ((puVar5[2] >> 3 & 1) == 0)))) {
          if ((ushort)(*(uint *)(gen_frame + 0x68)) != *(byte *)((int)puVar5 + 0xe)) {
            (*(uint *)(gen_frame + 0x68)) = (uint)*(byte *)((int)puVar5 + 0xe);
            if ((*(uint *)(gen_frame + 0x64)) != (ushort)puVar5[3]) {
              uVar16 = 0;
              (*(uint *)(gen_frame + 0x64)) = (uint)(ushort)puVar5[3];
              (*(uint *)(gen_frame + 0x4c)) = *puVar5;
              (*(uint *)(gen_frame + 0x50)) = puVar5[1];
              if ((*(uint *)(gen_frame + 0x60)) != 0) {
                do {
                  lVar6 = ((ulonglong)(((ulonglong)(byte)uVar16 < 0x40) ? ((1L << (ulonglong)(byte)uVar16)) : 0));
                  uVar9 = (uint)lVar6;
                  uVar10 = (uint)((ulonglong)lVar6 >> 0x20);
                  if (((uVar9 & (*(uint *)(gen_frame + 0x4c))) != 0 || (uVar10 & (*(uint *)(gen_frame + 0x50))) != 0) &&
                     ((uVar9 & (*(uint *)(gen_frame + 0x44))) != 0 || (uVar10 & (*(uint *)(gen_frame + 0x48))) != 0)) {
                    (*(uint *)(gen_frame + 0x4c)) = (*(uint *)(gen_frame + 0x4c)) & ~uVar9;
                    (*(uint *)(gen_frame + 0x50)) = (*(uint *)(gen_frame + 0x50)) & ~uVar10;
                  }
                  uVar16 = uVar16 + 1;
                  this = (*(undefined * PTR32 *)(gen_frame + 0x74));
                  iVar14 = (*(int *)(gen_frame + 0x78));
                } while (uVar16 < (*(uint *)(gen_frame + 0x60)));
              }
              (*(uint *)(gen_frame + 0x44)) = (*(uint *)(gen_frame + 0x44)) | (*(uint *)(gen_frame + 0x4c));
              (*(uint *)(gen_frame + 0x48)) = (*(uint *)(gen_frame + 0x48)) | (*(uint *)(gen_frame + 0x50));
            }
          }
          if ((*(uint *)(gen_frame + 0x4c)) != 0 || (*(uint *)(gen_frame + 0x50)) != 0) {
            piVar3 = *(int * PTR32 *)(((int *)(gen_frame + 0x4))[(int)((*(int *)(gen_frame + 0x6c)))] + 0x1c);
            (*(int * PTR32 *)(gen_frame + 0x54)) = piVar3;
            uVar9 = ((code *)*(gen_code32 *)(*piVar3 + 0x2c))(piVar3);
            uVar16 = *((uint *)GEN_TOP((*(int *)(piVar3[10] + 0xc) + 0x10)));
            uVar10 = 0;
            if (uVar16 != 0) {
              do {
                *(undefined1 *)(uVar10 + piVar3[4]) = 0;
                uVar10 = uVar10 + 1;
              } while (uVar10 < uVar16);
            }
            uVar10 = (uint)*((ushort *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x74)) + 0xec) + 0x10c)));
            this = (*(undefined * PTR32 *)(gen_frame + 0x74));
            iVar14 = (*(int *)(gen_frame + 0x78));
            if (uVar10 != 0) {
              (*(int *)(gen_frame + 0x70)) = 0;
              (*(uint *)(gen_frame + 0x5c)) = uVar10;
              do {
                puVar15 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x74)) + 0xec) + 0x108))) + (*(int *)(gen_frame + 0x70)))))
                ;
                lVar6 = ((ulonglong)(((ulonglong)(byte)*puVar15 < 0x40) ? ((1L << (ulonglong)(byte)*puVar15)) : 0));
                if (((uint)lVar6 & (*(uint *)(gen_frame + 0x4c))) != 0 ||
                    ((uint)((ulonglong)lVar6 >> 0x20) & (*(uint *)(gen_frame + 0x50))) != 0) {
                  iVar12 = puVar15[2];
                  uVar2 = *(ushort *)(puVar15 + 1);
                  uVar10 = 0;
                  (*(int *)(gen_frame + 0x58)) = iVar12;
                  if (uVar2 != 0) {
                    do {
                      uVar11 = 0;
                      if (uVar16 != 0) {
                        do {
                          if (*(short *)(iVar12 + uVar10 * 2) == *(short *)(uVar9 + uVar11 * 2)) {
                            *(undefined1 *)(uVar11 + (*(int * PTR32 *)(gen_frame + 0x54))[4]) = 0xff;
                            break;
                          }
                          uVar11 = uVar11 + 1;
                        } while (uVar11 < uVar16);
                      }
                      uVar10 = uVar10 + 1;
                    } while (uVar10 < uVar2);
                  }
                }
                (*(int *)(gen_frame + 0x70)) = (*(int *)(gen_frame + 0x70)) + 0xc;
                uVar10 = (*(uint *)(gen_frame + 0x5c)) - 1;
                (*(uint *)(gen_frame + 0x5c)) = uVar10;
              } while (uVar10 != 0);
            }
          }
        }
        iVar12 = (*(int *)(gen_frame + 0x6c)) + 1;
        (*(int *)(gen_frame + 0x6c)) = iVar12;
      } while (iVar12 < iVar14);
    }
    *(uint *)((int)this + 4) = *(uint *)((int)this + 4) & 0xfffffffe;
  }
  return 0;
}

/* ref: FUN_009f9cd0 */
unsigned int F_009f9cd0(unsigned int gen_a0)
{
  GEN_ENTER(0x9f9cd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  int iVar3;
  undefined * pvVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10e1730));
  F_009f9490(this);
  F_009ff380((undefined *)((int)this + 0x84),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x88),
               *(undefined4 * PTR32 *)((int)this + 0x88));
  F_00429760(*(undefined4 *)((int)this + 0x88),0x14,0xcb);
  F_009ff380((undefined *)((int)this + 0x74),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x78),
               *(undefined4 * PTR32 *)((int)this + 0x78));
  F_00429760(*(undefined4 *)((int)this + 0x78),0x14,0xcb);
  F_009ff380((undefined *)((int)this + 100),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x68),
               *(undefined4 * PTR32 *)((int)this + 0x68));
  F_00429760(*(undefined4 *)((int)this + 0x68),0x14,0xcb);
  pvVar4 = this;
  if (this == (undefined *)0xfffffffc) {
    pvVar4 = (undefined *)0x0;
  }
  iVar1 = *(int *)((int)pvVar4 + 4);
  iVar2 = *(int *)((int)pvVar4 + 8);
  iVar3 = iVar2;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 8) = iVar2;
    iVar3 = REFG(int, 0x1487c68);
  }
  REFG(int, 0x1487c68) = iVar3;
  if (iVar2 == 0) {
    REFG(int, 0x14a243c) = iVar1;
    *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10e1614));
    return 0;
  }
  *(int *)(iVar2 + 4) = iVar1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10e1614));
  return 0;
}

/* ref: FUN_009f9db0 */
uint F_009f9db0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9f9db0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  uint uVar1;
  
  F_006b73b0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + ((*(int *)&gen_args[3]) + (*(int *)&gen_args[2]) * 4) * 0x10 + 4))),&(*(undefined4 *)&gen_args[1]));
  uVar1 = F_00513f60((*(undefined4 *)&gen_args[1]),0,0);
  return uVar1;
}

/* ref: FUN_009f9de0 */
uint F_009f9de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f9de0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  ulonglong uVar6;
  
  iVar1 = param_2 + param_1 * 4;
  uVar4 = iVar1 * 2;
  piVar3 = *(int * PTR32 *)((int)this + iVar1 * 0x10 + 8);
  piVar2 = (int *)((int)this + iVar1 * 0x10 + 4);
  piVar5 = (int *)*piVar2;
  if (piVar5 != piVar3) {
    do {
      uVar4 = 0;
      if (*piVar5 != 0) {
        uVar4 = F_0050c620(*piVar5,0,0);
      }
      piVar5 = piVar5 + 1;
    } while (piVar5 != piVar3);
    iVar1 = *piVar2;
    if (iVar1 != piVar2[1]) {
      uVar4 = F_00c46e20(iVar1,piVar2[1],0);
      piVar2[1] = iVar1;
    }
    if (piVar2 != ((int *)(gen_frame + 0xc))) {
      iVar1 = *piVar2;
      *piVar2 = 0;
      piVar2[1] = 0;
      uVar4 = piVar2[2];
      piVar2[2] = 0;
      if (iVar1 != 0) {
        uVar6 = F_00429760(iVar1,((int)(uVar4 - iVar1) >> 2) * 4,0xcb);
        uVar4 = (uint)uVar6;
      }
    }
  }
  return uVar4;
}

/* ref: FUN_009f9e80 */
unsigned int F_009f9e80(unsigned int gen_a0)
{
  GEN_ENTER(0x9f9e80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  int * piVar5;
  
  piVar4 = (int *)((int)this + 4);
  (*(int *)(gen_frame + 0x14)) = 2;
  do {
    (*(int *)(gen_frame + 0x18)) = 4;
    do {
      piVar5 = (int *)*piVar4;
      piVar1 = (int *)piVar4[1];
      if (piVar5 != piVar1) {
        do {
          if (*piVar5 != 0) {
            F_0050c620(*piVar5,0,0);
          }
          piVar5 = piVar5 + 1;
        } while (piVar5 != piVar1);
        iVar2 = *piVar4;
        if (iVar2 != piVar4[1]) {
          F_00c46e20(iVar2,piVar4[1],0);
          piVar4[1] = iVar2;
        }
        if (piVar4 != ((int *)(gen_frame + 0x4))) {
          iVar2 = *piVar4;
          *piVar4 = 0;
          piVar4[1] = 0;
          iVar3 = piVar4[2];
          piVar4[2] = 0;
          if (iVar2 != 0) {
            F_00429760(iVar2,(iVar3 - iVar2 >> 2) * 4,0xcb);
          }
        }
      }
      piVar4 = piVar4 + 4;
      iVar2 = (*(int *)(gen_frame + 0x18)) + -1;
      (*(int *)(gen_frame + 0x18)) = iVar2;
    } while (iVar2 != 0);
    iVar2 = (*(int *)(gen_frame + 0x14)) + -1;
    (*(int *)(gen_frame + 0x14)) = iVar2;
  } while (iVar2 != 0);
  return 0;
}

/* ref: FUN_009f9f40 */
uint F_009f9f40(void)
{
  GEN_ENTER(0x9f9f40u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int iVar1;
  LPVOID pvVar2;
  undefined * pvVar3;
  uint uVar4;
  uint uVar5;
  
  F_00d9f940(((int *)(gen_frame + 0x2c)));
  F_00d9baa0(((undefined1 *)(gen_frame + 0x48)));
  F_0049f9d0();
  iVar1 = REFG(int, 0x1372898);
  if (0xc < REFG(int, 0x1372898)) {
    iVar1 = 0xc;
  }
  ((int *)(gen_frame + 0x2c))[0] = iVar1 + -2;
  if (iVar1 + -2 < 1) {
    ((int *)(gen_frame + 0x2c))[0] = 1;
  }
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 4))))
                             (*(int * PTR32 *)((int)pvVar2 + 0x2c),0x268)));
  *(undefined2 *)((int)pvVar3 + 4) = 0x268;
  REFG(undefined4, 0x14a242c) = F_00d9f740(pvVar3,((int *)(gen_frame + 0x2c)));
  F_00d96ba0(((undefined1 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0x28)) = 0x14;
  (*(undefined1 *)(gen_frame + 0x10)) = 1;
  (*(int *)(gen_frame + 0x18)) = ((int *)(gen_frame + 0x2c))[0] + 1;
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 4))))
                             (*(int * PTR32 *)((int)pvVar2 + 0x2c),0x290)));
  if (pvVar3 == (undefined *)0x0) {
    REFG(undefined4, 0x14a2430) = 0;
  }
  else {
    REFG(undefined4, 0x14a2430) = F_00d96bf0(pvVar3,((undefined1 *)(gen_frame + 0xc)));
  }
  F_00d64bd0(REFG(undefined4, 0x14a2430));
  uVar5 = 0;
  do {
    uVar4 = F_00a1abd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x11ac));
    *(uint *)((int)&REFG(undefined4, 0x14a2420) + uVar5) = uVar4;
    uVar5 = uVar5 + 4;
  } while (uVar5 < 8);
  F_00a00ae0(((undefined1 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  uVar5 = (*(uint *)(gen_frame + 0x40));
  if (-1 < (int)(*(uint *)(gen_frame + 0x40))) {
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 *)(gen_frame + 0x38)),(*(uint *)(gen_frame + 0x40)) * 4);
  }
  return uVar5;
}

/* ref: FUN_009fa070 */
uint F_009fa070(unsigned int gen_a0)
{
  GEN_ENTER(0x9fa070u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  if ((char)(*(undefined4 *)&gen_args[0]) != '\0') {
    F_00d9b8d0(&(*(undefined4 *)&gen_args[0]),0);
    iVar1 = *(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4);
    uVar2 = F_00d9fb90(&REFG(undefined * PTR32, 0x1333234),&(*(undefined4 *)&gen_args[0]),0);
    *(uint *)(iVar1 + 0x1bc) = uVar2;
    F_00d9c6f0();
    F_00d9bcd0(*(undefined4 *)(iVar1 + 0x1bc),((code *)REFP(0x9f0500)),0);
    uVar2 = F_009f9f40();
    return uVar2;
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),0x40,0x10);
  if (uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = F_00d92530(uVar2);
  }
  iVar1 = *(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4);
  *(uint *)(iVar1 + 0x1bc) = uVar2;
  piVar3 = (int *)F_00d9b8f0();
  ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,*(undefined4 *)(iVar1 + 0x1bc),"hkCpuJobThreadPool",3);
  uVar2 = F_00d9ba60(*(undefined4 *)(iVar1 + 0x1bc));
  return uVar2;
}

/* ref: FUN_009fa140 */
unsigned int F_009fa140(unsigned int gen_a0)
{
  GEN_ENTER(0x9fa140u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)this != 0) {
    F_0050c620(*(int *)this,0,0);
    *(undefined4 *)this = 0;
  }
  F_009f9e80(this);
  return 0;
}

/* ref: FUN_009fa170 */
uint F_009fa170(unsigned int gen_a0)
{
  GEN_ENTER(0x9fa170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  undefined4 * puVar3;
  int iVar4;
  ulonglong uVar5;
  
  if (*(int *)this != 0) {
    F_0050c620(*(int *)this,0,0);
    *(undefined4 *)this = 0;
  }
  F_009f9e80(this);
  iVar4 = 7;
  puVar3 = (undefined4 *)((int)this + 0x84);
  do {
    iVar1 = puVar3[-4];
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar5 = F_00429760(iVar1,(puVar3[-2] - iVar1 >> 2) * 4,0xcb);
      uVar2 = (uint)uVar5;
    }
    iVar4 = iVar4 + -1;
    puVar3[-4] = 0;
    puVar3[-3] = 0;
    puVar3[-2] = 0;
    puVar3 = puVar3 + -4;
  } while (-1 < iVar4);
  return uVar2;
}

/* ref: FUN_009fa1e0 */
unsigned int F_009fa1e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fa1e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0xc);
  if (iVar1 != 0) {
    ((int *)(gen_frame + 0xc))[0] = iVar1;
  }
  uVar2 = (uint)(iVar1 != 0);
  if (*(int *)((int)this + 0x10) != 0) {
    ((int *)(gen_frame + 0xc))[(int)(uVar2)] = *(int *)((int)this + 0x10);
    uVar2 = uVar2 + 1;
  }
  if (*(int *)((int)this + 0x14) != 0) {
    ((int *)(gen_frame + 0xc))[(int)(uVar2)] = *(int *)((int)this + 0x14);
    uVar2 = uVar2 + 1;
  }
  if (*(int *)((int)this + 0x18) != 0) {
    ((int *)(gen_frame + 0xc))[(int)(uVar2)] = *(int *)((int)this + 0x18);
    uVar2 = uVar2 + 1;
  }
  iVar1 = 0;
  if (uVar2 != 0) {
    do {
      ((code *)*(gen_code32 *)(*(int *)((int *)(gen_frame + 0xc))[(int)(iVar1)] + 0x1c))((int *)((int *)(gen_frame + 0xc))[(int)(iVar1)],this,param_1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)uVar2);
  }
  return 0;
}

/* ref: FUN_009fa250 */
uint F_009fa250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fa250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  return (uint)this;
}

/* ref: FUN_009fa280 */
uint F_009fa280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fa280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_009fa2a0 */
unsigned int F_009fa2a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fa2a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  F_009fa1e0(param_1,this);
  return 0;
}

/* ref: FUN_009fa2b0 */
uint F_009fa2b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9fa2b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_0050c620(param_1,0,0);
  }
  return uVar1;
}

/* ref: FUN_009fa350 */
uint F_009fa350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fa350u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009fa370 */
uint F_009fa370(unsigned int gen_a0)
{
  GEN_ENTER(0x9fa370u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x10;
}

/* ref: FUN_009fa380 */
uint F_009fa380(unsigned int gen_a0)
{
  GEN_ENTER(0x9fa380u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x11;
}

/* ref: FUN_009fa390 */
uint F_009fa390(unsigned int gen_a0)
{
  GEN_ENTER(0x9fa390u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009fa3a0 */
uint F_009fa3a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9fa3a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_009fa3b0 */
uint F_009fa3b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9fa3b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_009fa3c0 */
uint F_009fa3c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9fa3c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_009fa3d0 */
uint F_009fa3d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9fa3d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x11)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x11);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_009fa3f0 */
uint F_009fa3f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9fa3f0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x11);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x11);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_009fa430 */
uint F_009fa430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fa430u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  return (uint)(*param_1 < *param_2);
}

/* ref: FUN_009fa450 */
uint F_009fa450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fa450u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x14,0xcb);
  return (uint)uVar1;
}

/* ref: FUN_009fa480 */
uint F_009fa480(unsigned int gen_a0)
{
  GEN_ENTER(0x9fa480u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  if (REFG(undefined4, 0x14a243c) == 0) {
    REFG(undefined4, 0x1487c68) = param_1;
    REFG(undefined4, 0x14a243c) = param_1;
    return param_1;
  }
  *(uint *)(param_1 + 4) = REFG(undefined4, 0x14a243c);
  *(uint *)(REFG(undefined4, 0x14a243c) + 8) = param_1;
  REFG(undefined4, 0x14a243c) = param_1;
  return param_1;
}

/* ref: FUN_009fa4b0 */
unsigned int F_009fa4b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9fa4b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(param_1 + 8);
  iVar3 = iVar2;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 8) = iVar2;
    iVar3 = REFG(int, 0x1487c68);
  }
  REFG(int, 0x1487c68) = iVar3;
  if (iVar2 == 0) {
    REFG(int, 0x14a243c) = iVar1;
    return 0;
  }
  *(int *)(iVar2 + 4) = iVar1;
  return 0;
}

/* ref: FUN_009fa4e0 */
byte F_009fa4e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fa4e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_009fa500 */
unsigned int F_009fa500(unsigned int gen_a0)
{
  GEN_ENTER(0x9fa500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x11) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x11) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x11);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x11);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x11);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x11);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_009fa560 */
uint F_009fa560(unsigned int gen_a0)
{
  GEN_ENTER(0x9fa560u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009fa590 */
uint F_009fa590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fa590u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009fa5a0 */
uint F_009fa5a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fa5a0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x14,param_2,0xcb);
  return uVar1;
}

/* ref: FUN_009fa5d0 */
uint F_009fa5d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9fa5d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x11) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x11) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x11) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x11) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x11);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x11);
    }
    if (*(char *)(*(int *)this + 0x11) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_009fa690 */
uint F_009fa690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fa690u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_009fa6a0 */
uint F_009fa6a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fa6a0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_009fa6c0 */
uint F_009fa6c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fa6c0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 2;
}

/* ref: FUN_009fa710 */
uint F_009fa710(unsigned int gen_a0)
{
  GEN_ENTER(0x9fa710u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009fa720 */
uint F_009fa720(unsigned int gen_a0)
{
  GEN_ENTER(0x9fa720u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009fa740 */
uint F_009fa740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fa740u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_009fa770 */
uint F_009fa770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fa770u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: FUN_009fa790 */
uint F_009fa790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fa790u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = *param_2;
  return (uint)this;
}

/* ref: FUN_009fa7b0 */
uint F_009fa7b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fa7b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: FUN_009fa7d0 */
uint F_009fa7d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fa7d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined2 *)((int)this + 8) = *param_2;
  return (uint)this;
}

/* ref: FUN_009fa7f0 */
byte F_009fa7f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fa7f0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * piVar1;
  
  for (piVar1 = param_1; piVar1 != param_2; piVar1 = piVar1 + 1) {
    if (*piVar1 != 0) {
      F_0050c620(*piVar1,0,0);
    }
  }
  return (byte)param_3;
}

/* ref: FUN_009fa830 */
uint F_009fa830(unsigned int gen_a0)
{
  GEN_ENTER(0x9fa830u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009fa840 */
uint F_009fa840(unsigned int gen_a0)
{
  GEN_ENTER(0x9fa840u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009fa870 */
uint F_009fa870(unsigned int gen_a0)
{
  GEN_ENTER(0x9fa870u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009fa880 */
uint F_009fa880(unsigned int gen_a0)
{
  GEN_ENTER(0x9fa880u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009fa890 */
uint F_009fa890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fa890u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_009fa8b0 */
uint F_009fa8b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fa8b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_009fa8d0 */
uint F_009fa8d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9fa8d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009fa8e0 */
uint F_009fa8e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fa8e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009fa8f0 */
uint F_009fa8f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fa8f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_009fa910 */
byte F_009fa910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fa910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_009fa930 */
uint F_009fa930(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x9fa930u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  float param_3 = (float)gen_a2;
  uint uVar1;
  
  uVar1 = (*(code *)*param_1)(param_1[1] + param_2,(undefined4)gen_fl2bits(param_3));
  return uVar1;
}

/* ref: FUN_009fa950 */
uint F_009fa950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fa950u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_009fa970 */
uint F_009fa970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fa970u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 << 5);
  return uVar1;
}

/* ref: FUN_009fa990 */
uint F_009fa990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fa990u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_009fa9a0 */
uint F_009fa9a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fa9a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)this)(*(int *)((int)this + 4) + param_1,param_2);
  return uVar1;
}

/* ref: FUN_009fa9e0 */
uint F_009fa9e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9fa9e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009fa9f0 */
uint F_009fa9f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fa9f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_009faa10 */
uint F_009faa10(unsigned int gen_a0)
{
  GEN_ENTER(0x9faa10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009faa20 */
uint F_009faa20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9faa20u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (int)(param_2 - 1) / 2;
  uVar3 = param_2;
  if ((int)param_2 <= param_3) {
    *(undefined4 *)(param_1 + param_2 * 4) = *param_4;
    return (uint)param_4;
  }
  do {
    uVar2 = uVar1;
    uVar1 = (*param_5)(*(undefined4 *)(param_1 + uVar2 * 4),*param_4);
    if ((char)uVar1 == '\0') {
      *(undefined4 *)(param_1 + uVar3 * 4) = *param_4;
      return (uint)param_4;
    }
    *(undefined4 *)(param_1 + uVar3 * 4) = *(undefined4 *)(param_1 + uVar2 * 4);
    uVar1 = (int)(uVar2 - 1) / 2;
    uVar3 = uVar2;
  } while (param_3 < (int)uVar2);
  *(undefined4 *)(param_1 + uVar2 * 4) = *param_4;
  return uVar1;
}

/* ref: FUN_009faab0 */
uint F_009faab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9faab0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = param_2 - param_1 >> 2;
  uVar2 = param_3 + iVar1 * -4;
  F_00c46e20(uVar2,param_1,iVar1 * 4);
  return uVar2;
}

/* ref: FUN_009faae0 */
uint F_009faae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9faae0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  *in_ecx = (float)((float10)*param_2 + (float10)*in_ecx);
  in_ecx[1] = (float)((float10)param_2[1] + (float10)in_ecx[1]);
  in_ecx[2] = (float)((float10)param_2[2] + (float10)in_ecx[2]);
  in_ecx[3] = (float)((float10)param_2[3] + (float10)in_ecx[3]);
  return (uint)in_ecx;
}

/* ref: FUN_009fab10 */
uint F_009fab10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fab10u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  *in_ecx = (float)((float10)*param_2 + (float10)*in_ecx);
  in_ecx[1] = (float)((float10)param_2[1] + (float10)in_ecx[1]);
  in_ecx[2] = (float)((float10)param_2[2] + (float10)in_ecx[2]);
  in_ecx[3] = (float)((float10)param_2[3] + (float10)in_ecx[3]);
  return (uint)in_ecx;
}

/* ref: FUN_009fab40 */
uint F_009fab40(unsigned int gen_a0)
{
  GEN_ENTER(0x9fab40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar1 = (float10)*(float *)((int)this + 4);
  fVar2 = (float10)*(float *)this;
  fVar3 = (float10)*(float *)((int)this + 8);
  fVar4 = (float10)*(float *)((int)this + 0xc);
  fVar1 = (float10)((float)GEN_TOF(((float10)1 /
                          (float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF((fVar4 * fVar4 +
                                                               (fVar3 * fVar3 +
                                                               (fVar2 * fVar2 + fVar1 * fVar1)))))))))));
  *(float *)this = (float)(fVar1 * (float10)*(float *)this);
  *(float *)((int)this + 4) = ((float)GEN_TOF(((float10)*(float *)((int)this + 4) * fVar1)));
  *(float *)((int)this + 8) = ((float)GEN_TOF(((float10)*(float *)((int)this + 8) * fVar1)));
  *(float *)((int)this + 0xc) = ((float)GEN_TOF((fVar1 * (float10)*(float *)((int)this + 0xc))));
  return (uint)this;
}

/* ref: FUN_009fabd0 */
uint F_009fabd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fabd0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return param_1;
}

/* ref: FUN_009fac00 */
unsigned int F_009fac00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x9fac00u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float param_4 = (float)gen_a3;
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  uVar5 = param_3;
  uVar4 = param_2;
  fVar1 = *(float *)param_2;
  fVar2 = *(float *)param_3;
  param_3 = REFG(float, 0x1087f04);
  param_2 = (uint)gen_fl2bits(((float)GEN_TOF(((float10)*(float *)(param_2 + 0xc) *
                                      (float10)*(float *)(uVar5 + 0xc) +
                                     ((float10)*(float *)(param_2 + 8) *
                                      (float10)*(float *)(uVar5 + 8) +
                                     ((float10)*(float *)(param_2 + 4) *
                                      (float10)*(float *)(uVar5 + 4) +
                                     (float10)fVar2 * (float10)fVar1))))));
  fVar6 = ((float10)GEN_TOD(gen_bits2f(param_2)));
  if (fVar6 < (float10)0) {
    param_2 = param_2 ^ REFG(uint, 0x10920d0);
    fVar6 = ((float10)GEN_TOD(gen_bits2f(param_2)));
    param_3 = REFG(float, 0x1090708);
  }
  if ((float10)*(double *)&REFG(undefined, 0x10943f8) <= fVar6) {
    param_2 = (uint)gen_fl2bits(param_4);
    fVar7 = ((float10)1 - (float10)param_4) * ((float10)GEN_TOD(gen_bits2f(param_3)));
  }
  else {
    fVar8 = F_00c4d1fa(((float10)GEN_TOD(gen_bits2f(param_2))));
    fVar3 = ((float)GEN_TOF(((float10)1 / (float10)((float)GEN_TOF(SQRT((float10)(float)((float10)1 - fVar6 * fVar6)))))))
    ;
    fVar6 = ((float10)GEN_TOD(fsin(
                          (float10)((float)GEN_TOF((((float10)1 - (float10)param_4) * (float10)(float)fVar8))))))
    ;
    fVar7 = ((float10)(float)fVar6 * (float10)fVar3) * ((float10)GEN_TOD(gen_bits2f(param_3)));
    fVar6 = ((float10)GEN_TOD(fsin((float10)(float)((float10)(float)fVar8 * (float10)param_4))));
    param_2 = (uint)gen_fl2bits((float)((float10)(float)fVar6 * (float10)fVar3));
  }
  param_3 = (uint)gen_fl2bits((float)fVar7);
  fVar6 = ((float10)GEN_TOD(gen_bits2f(param_2)));
  fVar8 = ((float10)GEN_TOD(gen_bits2f(param_3)));
  *param_1 = (float)(fVar6 * (float10)fVar2 + fVar8 * (float10)fVar1);
  param_1[1] = ((float)GEN_TOF((fVar8 * (float10)*(float *)(uVar4 + 4) +
                      fVar6 * (float10)*(float *)(uVar5 + 4))));
  param_1[2] = ((float)GEN_TOF(((float10)*(float *)(uVar4 + 8) * fVar8 +
                      (float10)*(float *)(uVar5 + 8) * fVar6)));
  param_1[3] = ((float)GEN_TOF((fVar6 * (float10)*(float *)(uVar5 + 0xc) +
                      (float10)*(float *)(uVar4 + 0xc) * fVar8)));
  return 0;
}

/* ref: FUN_009fad70 */
uint F_009fad70(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9fad70u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float in_xmm3 = (float)gen_a1;
  float in_xmm4 = (float)gen_a2;
  uint param_4 = (uint)gen_a3;
  float10 fVar1;
  float fVar2;
  
  fVar2 = gen_bits2f((uint)gen_fl2bits(in_ecx[2]) ^ REFG(uint, 0x10920d0));
  if (fVar2 <= REFG(float, 0x1090708)) {
    *(uint *)(param_4 + 4) = REFG(uint, 0x1333230) ^ REFG(uint, 0x10920d0);
  }
  else if ((float10)1 <= (float10)fVar2) {
    *(uint *)(param_4 + 4) = REFG(float, 0x1333230);
  }
  else {
    fVar1 = F_00c4d0e0(REFG(float, 0x1090708),in_xmm3,in_xmm4,(float10)fVar2);
    *(float *)(param_4 + 4) = (float)fVar1;
  }
  if (*(double *)&REFG(double, 0x10e1648) < (double)((float)GEN_TOF(ABS((float10)fVar2)))) {
    fVar1 = F_00c4d1fa((float10)in_ecx[5]);
    *(float *)param_4 = ((float)GEN_TOF(-(float10)(float)fVar1));
    *(undefined4 *)(param_4 + 8) = 0;
    return param_4;
  }
  fVar1 = F_00c4d1fa((float10)in_ecx[10]);
  *(float *)param_4 = (float)fVar1;
  fVar1 = F_00c4d1fa((float10)*in_ecx);
  *(float *)(param_4 + 8) = (float)fVar1;
  return param_4;
}

/* ref: hkMemoryAllocator::vf10 */
unsigned int F_009fae70(void)
{
  GEN_ENTER(0x9fae70u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_009fae80 */
uint F_009fae80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fae80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_009fae90 */
uint F_009fae90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fae90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_009faec0 */
uint F_009faec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9faec0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = uVar1;
  *(undefined4 *)((int)this + 8) = uVar2;
  *(undefined4 *)((int)this + 0xc) = uVar3;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar1 = *(undefined4 *)((int)this + 4);
  uVar2 = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)this + 0x10) = *param_2;
  *(undefined4 *)((int)this + 0x14) = uVar3;
  *(undefined4 *)((int)this + 0x18) = uVar4;
  *(undefined4 *)((int)this + 0x1c) = uVar5;
  uVar3 = *(undefined4 *)((int)this + 0x18);
  uVar4 = *param_3;
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  *(undefined4 *)this = *(undefined4 *)this;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 0x10);
  *(undefined4 *)((int)this + 8) = uVar4;
  *(undefined4 *)((int)this + 0xc) = uVar5;
  *(undefined4 *)((int)this + 0x20) = uVar4;
  *(undefined4 *)((int)this + 0x24) = uVar5;
  *(undefined4 *)((int)this + 0x28) = uVar6;
  *(undefined4 *)((int)this + 0x2c) = uVar7;
  *(undefined4 *)((int)this + 0x10) = uVar1;
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)((int)this + 0x24);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)((int)this + 0x2c);
  *(undefined4 *)((int)this + 0x20) = uVar2;
  *(undefined4 *)((int)this + 0x24) = uVar3;
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)((int)this + 0x28);
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)((int)this + 0x2c);
  return (uint)param_3;
}

/* ref: FUN_009faf70 */
uint F_009faf70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9faf70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return (uint)param_1;
}

/* ref: FUN_009fb070 */
uint F_009fb070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fb070u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_2 + 0x34);
  uVar2 = *(undefined4 *)(param_2 + 0x38);
  *param_1 = *(undefined4 *)(param_2 + 0x30);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = 0;
  return (uint)param_1;
}

/* ref: FUN_009fb0a0 */
uint F_009fb0a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fb0a0u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  *param_3 = *param_1 - *param_2;
  param_3[1] = fVar1 - fVar4;
  param_3[2] = fVar2 - fVar5;
  param_3[3] = fVar3 - fVar6;
  fVar1 = param_1[5];
  fVar2 = param_1[6];
  fVar3 = param_1[7];
  fVar4 = param_2[5];
  fVar5 = param_2[6];
  fVar6 = param_2[7];
  param_3[4] = param_1[4] - param_2[4];
  param_3[5] = fVar1 - fVar4;
  param_3[6] = fVar2 - fVar5;
  param_3[7] = fVar3 - fVar6;
  fVar1 = param_1[9];
  fVar2 = param_1[10];
  fVar3 = param_1[0xb];
  fVar4 = param_2[9];
  fVar5 = param_2[10];
  fVar6 = param_2[0xb];
  param_3[8] = param_1[8] * param_2[8];
  param_3[9] = fVar1 * fVar4;
  param_3[10] = fVar2 * fVar5;
  param_3[0xb] = fVar3 * fVar6;
  return (uint)param_1;
}

/* ref: FUN_009fb130 */
byte F_009fb130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fb130u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return (*(uint *)((*(int *)&gen_args[0]) + 8) & (*(uint *)&gen_args[1])) != 0;
}

/* ref: hkaDefaultAnimationControlListener::vf0 */
unsigned int F_009fb150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fb150u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return 0;
}

/* ref: hkaDefaultAnimationControlListener::vf1 */
unsigned int F_009fb160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fb160u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return 0;
}

/* ref: hkaDefaultAnimationControlListener::vf2 */
unsigned int F_009fb170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fb170u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return 0;
}

/* ref: hkaDefaultAnimationControlListener::vf3 */
unsigned int F_009fb180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fb180u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return 0;
}

/* ref: hkaDefaultAnimationControlListener::vf4 */
uint F_009fb190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fb190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10e1654));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_009fb1d0 */
unsigned int F_009fb1d0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x9fb1d0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 8) = param_2;
  return 0;
}

/* ref: FUN_009fb210 */
unsigned int F_009fb210(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x9fb210u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x3c) = param_2;
  return 0;
}

/* ref: FUN_009fb240 */
unsigned int F_009fb240(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x9fb240u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x40) = param_2;
  return 0;
}

/* ref: FUN_009fb280 */
float10 F_009fb280(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x9fb280u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar2 = (float10)1;
  if ((*(int *)(in_ecx + 0x78) == 2) || (*(int *)(in_ecx + 0x78) == 3)) {
    *(float *)(in_ecx + 0x74) = ((float)GEN_TOF((fVar2 - (float10)*(float *)(in_ecx + 0x74))));
  }
  fVar3 = (float10)param_2;
  if (REFG(float, 0x10905c4) < param_2) {
    fVar4 = fVar2 / fVar3;
  }
  else {
    fVar4 = (float10)REFG(double, 0x10e1668);
  }
  fVar1 = *(float *)(in_ecx + 0x74);
  *(float *)(in_ecx + 0x70) = (float)fVar4;
  if ((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x1087f04))) !=
      ((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x1087f04))) || fVar1 == REFG(float, 0x1087f04))) {
    *(undefined4 *)(in_ecx + 0x78) = 1;
    return (float10)((float)GEN_TOF((fVar3 * (fVar2 - (float10)fVar1))));
  }
  *(undefined4 *)(in_ecx + 0x78) = 0;
  return (float10)((float)GEN_TOF((fVar3 * (fVar2 - (float10)fVar1))));
}

/* ref: FUN_009fb300 */
uint F_009fb300(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x9fb300u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  bool bVar2;
  float10 fVar3;
  
  if ((*(int *)(in_ecx + 0x78) == 0) || (*(int *)(in_ecx + 0x78) == 1)) {
    *(float *)(in_ecx + 0x74) = ((float)GEN_TOF(((float10)1 - (float10)*(float *)(in_ecx + 0x74))));
  }
  if (REFG(float, 0x10905c4) < param_2) {
    fVar3 = (float10)1 / (float10)param_2;
  }
  else {
    fVar3 = (float10)REFG(double, 0x10e1668);
  }
  *(float *)(in_ecx + 0x70) = (float)fVar3;
  bVar2 = GEN_ISNAN(*(float *)(in_ecx + 0x74)) || GEN_ISNAN(REFG(float, 0x1087f04));
  uVar1 = 3;
  if (bVar2 == (bVar2 || *(float *)(in_ecx + 0x74) == REFG(float, 0x1087f04))) {
    uVar1 = 2;
  }
  *(uint *)(in_ecx + 0x78) = uVar1;
  return uVar1;
}

/* ref: FUN_009fb370 */
unsigned int F_009fb370(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x9fb370u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x7c) = param_2;
  if ((float10)*(float *)(in_ecx + 8) < (float10)param_2) {
    *(float *)(in_ecx + 8) = param_2;
  }
  return 0;
}

/* ref: FUN_009fb3a0 */
uint F_009fb3a0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x9fb3a0u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  *param_1 = param_8;
  param_1[2] = param_3;
  *(undefined2 *)(param_1 + 3) = (undefined2)param_4;
  *(undefined2 *)((int)param_1 + 0xe) = (undefined2)param_5;
  param_1[1] = (undefined4)gen_fl2bits(param_2);
  *(undefined2 *)(param_1 + 4) = (undefined2)param_6;
  *(undefined1 *)((int)param_1 + 0x12) = (undefined1)param_7;
  return (uint)param_1;
}

/* ref: FUN_009fb3e0 */
uint F_009fb3e0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x9fb3e0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  *in_ecx = param_2;
  in_ecx[1] = (undefined4)gen_fl2bits(param_3);
  return (uint)in_ecx;
}

/* ref: FUN_009fb400 */
uint F_009fb400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fb400u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x24) = param_2;
  return param_2;
}

/* ref: Client::Graphics::Animation::IAnimationControllerListener::vf1 */
unsigned int F_009fb440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fb440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Graphics::Animation::IAnimationControllerListener::vf2 */
unsigned int F_009fb450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fb450u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::Graphics::Animation::IAnimationControllerListener::vf3 */
unsigned int F_009fb460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fb460u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::Graphics::Animation::IAnimationControllerListener::vf4 */
unsigned int F_009fb470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9fb470u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Client::Graphics::Animation::IAnimationControllerListener::vf5 */
unsigned int F_009fb480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9fb480u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Client::Graphics::Animation::IAnimationControllerListener::vf6 */
unsigned int F_009fb490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fb490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Graphics::Animation::IAnimationControllerListener::vf7 */
unsigned int F_009fb4a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fb4a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::Graphics::Animation::IAnimationControllerListener::vf8 */
unsigned int F_009fb4b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fb4b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Graphics::Animation::IAnimationControllerListener::vf0 */
uint F_009fb4c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fb4c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10e1614));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_009fb510 */
uint F_009fb510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fb510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) + param_1 * 0x38;
}

/* ref: FUN_009fb540 */
uint F_009fb540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fb540u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0xc) + param_2 * 0x28;
}

/* ref: FUN_009fb560 */
uint F_009fb560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fb560u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (0 < (int)param_2) {
    *(uint *)(in_ecx + 8) = param_2;
  }
  return param_2;
}

/* ref: FUN_009fb590 */
unsigned int F_009fb590(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x9fb590u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xc) = param_2;
  return 0;
}

/* ref: FUN_009fb5f0 */
unsigned int F_009fb5f0(void)
{
  GEN_ENTER(0x9fb5f0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_009fb6f0 */
unsigned int F_009fb6f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fb6f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  *(undefined4 *)((int)this + 0x24) = param_1[9];
  *(undefined4 *)((int)this + 0x28) = param_1[10];
  *(undefined4 *)((int)this + 0x30) = param_1[0xc];
  *(undefined4 *)((int)this + 0x34) = param_1[0xd];
  *(undefined4 *)((int)this + 0x38) = param_1[0xe];
  *(undefined4 *)((int)this + 0x3c) = param_1[0xf];
  *(undefined2 *)((int)this + 0x40) = *(undefined2 *)(param_1 + 0x10);
  *(undefined2 *)((int)this + 0x42) = *(undefined2 *)((int)param_1 + 0x42);
  *(undefined2 *)((int)this + 0x44) = *(undefined2 *)(param_1 + 0x11);
  return 0;
}

/* ref: FUN_009fb770 */
unsigned int F_009fb770(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x9fb770u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x50) = param_2;
  return 0;
}

/* ref: FUN_009fb790 */
byte F_009fb790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fb790u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x58) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_009fb7a0 */
uint F_009fb7a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fb7a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if ((*(byte *)((int)this + 0x3c) & 1) != 0) {
    *param_1 = *(uint *)this;
    param_1[1] = *(uint *)((int)this + 4);
    uVar1 = *(uint *)((int)this + 0xc);
    param_1[2] = *(uint *)((int)this + 8);
    param_1[3] = uVar1;
    return (uint)param_1;
  }
  uVar1 = *(uint *)((int)this + 0x34);
  uVar2 = uVar1 ^ REFG(uint, 0x10920d0);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  return (uint)param_1;
}

/* ref: FUN_009fb800 */
unsigned int F_009fb800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fb800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int iVar2;
  
  if ((char)param_1 == '\0') {
    *(uint *)((int)this + 0x3c) = *(uint *)((int)this + 0x3c) & 0xfffffffe;
  }
  else {
    *(uint *)((int)this + 0x3c) = *(uint *)((int)this + 0x3c) | 1;
  }
  uVar1 = 0;
  if (*(int *)((int)this + 0x34) != 0) {
    iVar2 = 0;
    do {
      *((char *)GEN_TOP((*(int *)((int)this + 0x40) + 0x58 + iVar2))) = (char)param_1;
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 0x60;
    } while (uVar1 < *(uint *)((int)this + 0x34));
  }
  return 0;
}

/* ref: FUN_009fb840 */
unsigned int F_009fb840(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x9fb840u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  *(float *)(param_1 + 0x38) = param_2;
  if (*(int *)(param_1 + 0x34) != 0) {
    iVar2 = 0;
    do {
      *((float *)GEN_TOP((*(int *)(param_1 + 0x40) + 0x50 + iVar2))) = param_2;
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 0x60;
    } while (uVar1 < *(uint *)(param_1 + 0x34));
  }
  return 0;
}

/* ref: FUN_009fb880 */
uint F_009fb880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fb880u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x20) = *param_2;
  *(undefined4 *)(in_ecx + 0x24) = param_2[1];
  *(undefined4 *)(in_ecx + 0x28) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_009fb8a0 */
uint F_009fb8a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fb8a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  uint uVar1;
  float fVar2;
  uint uVar3;
  float * pfVar4;
  uint uVar5;
  float * pfVar6;
  int iVar7;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  
  uVar3 = REFG(float, 0x10920d0);
  *param_1 = (float)REFG(float, 0x1375ad0);
  param_1[1] = (*(float *)((char *)&REFG(float, 0x1375ad0) + 4));
  uVar1 = *(uint *)((int)this + 0x34);
  param_1[2] = (float)REFG(float, 0x1375ad8);
  uVar5 = 0;
  param_1[3] = (*(float *)((char *)&REFG(float, 0x1375ad8) + 4));
  if (3 < (int)uVar1) {
    pfVar4 = ((float *)GEN_TOP((*(int *)((int)this + 0x40) + 0x34)));
    pfVar6 = ((float *)GEN_TOP((*(int *)((int)this + 0x40) + 0x94)));
    iVar7 = (uVar1 - 4 >> 2) + 1;
    uVar5 = iVar7 * 4;
    do {
      if (((uint)gen_fl2bits(pfVar4[2]) & 1) == 0) {
        local_30 = *pfVar4;
        local_2c = gen_bits2f((uint)gen_fl2bits(local_30) ^ uVar3);
        local_28 = local_30;
        local_24 = local_2c;
      }
      else {
        local_30 = pfVar4[-0xd];
        local_2c = pfVar4[-0xc];
        local_28 = pfVar4[-0xb];
        local_24 = pfVar4[-10];
      }
      fVar2 = pfVar6[2];
      *param_1 = (float)((float10)*param_1 + (float10)local_30);
      param_1[1] = (float)((float10)local_2c + (float10)param_1[1]);
      param_1[2] = (float)((float10)param_1[2] + (float10)local_28);
      param_1[3] = (float)((float10)local_24 + (float10)param_1[3]);
      if (((uint)gen_fl2bits(fVar2) & 1) == 0) {
        local_30 = *pfVar6;
        local_2c = gen_bits2f((uint)gen_fl2bits(local_30) ^ uVar3);
        local_28 = local_30;
        local_24 = local_2c;
      }
      else {
        local_30 = pfVar4[0xb];
        local_2c = pfVar4[0xc];
        local_28 = pfVar4[0xd];
        local_24 = pfVar4[0xe];
      }
      fVar2 = pfVar6[0x1a];
      *param_1 = (float)((float10)*param_1 + (float10)local_30);
      param_1[1] = (float)((float10)local_2c + (float10)param_1[1]);
      param_1[2] = (float)((float10)param_1[2] + (float10)local_28);
      param_1[3] = (float)((float10)local_24 + (float10)param_1[3]);
      if (((uint)gen_fl2bits(fVar2) & 1) == 0) {
        local_30 = pfVar6[0x18];
        local_2c = gen_bits2f((uint)gen_fl2bits(local_30) ^ uVar3);
        local_28 = local_30;
        local_24 = local_2c;
      }
      else {
        local_30 = pfVar4[0x23];
        local_2c = pfVar4[0x24];
        local_28 = pfVar4[0x25];
        local_24 = pfVar4[0x26];
      }
      fVar2 = pfVar6[0x32];
      *param_1 = (float)((float10)*param_1 + (float10)local_30);
      param_1[1] = (float)((float10)local_2c + (float10)param_1[1]);
      param_1[2] = (float)((float10)param_1[2] + (float10)local_28);
      param_1[3] = (float)((float10)local_24 + (float10)param_1[3]);
      if (((uint)gen_fl2bits(fVar2) & 1) == 0) {
        local_30 = pfVar6[0x30];
        local_2c = gen_bits2f((uint)gen_fl2bits(local_30) ^ uVar3);
        local_28 = local_30;
        local_24 = local_2c;
      }
      else {
        local_30 = pfVar4[0x3b];
        local_2c = pfVar4[0x3c];
        local_28 = pfVar4[0x3d];
        local_24 = pfVar4[0x3e];
      }
      pfVar4 = pfVar4 + 0x60;
      pfVar6 = pfVar6 + 0x60;
      iVar7 = iVar7 + -1;
      *param_1 = (float)((float10)*param_1 + (float10)local_30);
      param_1[1] = (float)((float10)local_2c + (float10)param_1[1]);
      param_1[2] = (float)((float10)param_1[2] + (float10)local_28);
      param_1[3] = (float)((float10)local_24 + (float10)param_1[3]);
    } while (iVar7 != 0);
  }
  if (uVar5 < uVar1) {
    pfVar4 = ((float *)GEN_TOP((uVar5 * 0x60 + *(int *)((int)this + 0x40))));
    iVar7 = uVar1 - uVar5;
    do {
      if (((uint)gen_fl2bits(pfVar4[0xf]) & 1) == 0) {
        local_30 = pfVar4[0xd];
        local_2c = gen_bits2f((uint)gen_fl2bits(local_30) ^ uVar3);
        local_28 = local_30;
        local_24 = local_2c;
      }
      else {
        local_30 = *pfVar4;
        local_2c = pfVar4[1];
        local_28 = pfVar4[2];
        local_24 = pfVar4[3];
      }
      pfVar4 = pfVar4 + 0x18;
      iVar7 = iVar7 + -1;
      *param_1 = (float)((float10)*param_1 + (float10)local_30);
      param_1[1] = (float)((float10)local_2c + (float10)param_1[1]);
      param_1[2] = (float)((float10)param_1[2] + (float10)local_28);
      param_1[3] = (float)((float10)local_24 + (float10)param_1[3]);
    } while (iVar7 != 0);
  }
  return (uint)param_1;
}

/* ref: FUN_009fbc30 */
unsigned int F_009fbc30(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x9fbc30u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  *in_ecx = 0;
  *(undefined1 *)(in_ecx + 2) = 1;
  in_ecx[1] = (undefined4)gen_fl2bits(param_2);
  return 0;
}

/* ref: FUN_009fbc80 */
uint F_009fbc80(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x9fbc80u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x1c);
  *(float *)(uVar1 + 0x40) = param_2;
  return uVar1;
}

/* ref: FUN_009fbcc0 */
uint F_009fbcc0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x9fbcc0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x1c);
  *(float *)(uVar1 + 0x3c) = param_2;
  return uVar1;
}

/* ref: FUN_009fbcf0 */
uint F_009fbcf0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x9fbcf0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x1c);
  *(float *)(uVar1 + 8) = param_2;
  return uVar1;
}

/* ref: FUN_009fbd20 */
ushort F_009fbd20(unsigned int gen_a0)
{
  GEN_ENTER(0x9fbd20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  ushort local_c;
  
  local_c = (ushort)(int)TRUNC((double)*((float *)GEN_TOP((*(int *)(in_ecx + 0x1c) + 8))) *
                               *(double *)&REFG(undefined, 0x1088070));
  return local_c;
}

/* ref: FUN_009fbd60 */
uint F_009fbd60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fbd60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *((float *)GEN_TOP((*(int *)(in_ecx + 0x1c) + 8))) =
       ((float)GEN_TOF(((float10)(param_2 & 0xffff) / (float10)*(double *)&REFG(undefined, 0x1088070))));
  return param_2 & 0xffff;
}

/* ref: FUN_009fbd90 */
uint F_009fbd90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fbd90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  int iVar2;
  
  iVar2 = *(int *)(in_ecx + 0x1c);
  fVar1 = ((float)GEN_TOF(((float10)(param_2 & 0xffff) / (float10)*(double *)&REFG(undefined, 0x1088070))));
  *(float *)(iVar2 + 0x7c) = fVar1;
  if ((float10)*(float *)(iVar2 + 8) < (float10)fVar1) {
    *(float *)(iVar2 + 8) = fVar1;
  }
  return param_2 & 0xffff;
}

/* ref: FUN_009fbdf0 */
unsigned int F_009fbdf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fbdf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  
  if (param_1 != 0) {
    iVar1 = 0;
    piVar2 = (int *)((int)this + 0xc);
    while (*piVar2 != param_1) {
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
      if (3 < iVar1) {
        return 0;
      }
    }
    *(undefined4 *)((int)this + iVar1 * 4 + 0xc) = 0;
  }
  return 0;
}

/* ref: FUN_009fbe40 */
byte F_009fbe40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fbe40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x2b) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_009fbe50 */
byte F_009fbe50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fbe50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x60) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_009fbe90 */
uint F_009fbe90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fbe90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0x108) + param_2 * 0xc;
}

/* ref: FUN_009fbf00 */
uint F_009fbf00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fbf00u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * in_ecx = (undefined1 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (undefined1)param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009fbf10 */
uint F_009fbf10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fbf10u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * in_ecx = (undefined1 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (undefined1)param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009fc000 */
uint F_009fc000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fc000u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2;
}

/* ref: FUN_009fc010 */
uint F_009fc010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9fc010u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  int * piVar2;
  int iVar3;
  
  iVar3 = param_3;
  if (param_3 < 0) {
    iVar3 = *(int *)((int)this + 4);
  }
  if ((int)param_2 < iVar3) {
    piVar2 = (int *)(*(int *)this + param_2 * 4);
    uVar1 = param_2;
    do {
      if (*piVar2 == *param_1) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
    } while ((int)uVar1 < iVar3);
  }
  return 0xffffffff;
}

/* ref: FUN_009fc060 */
uint F_009fc060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fc060u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,0x30);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_009fc0d0 */
uint F_009fc0d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fc0d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
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

/* ref: FUN_009fc120 */
unsigned int F_009fc120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fc120u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (3 < param_2) {
    iVar2 = (param_2 - 4U >> 2) + 1;
    iVar3 = iVar2 * 4;
    puVar1 = (undefined4 *)(param_1 + 8);
    do {
      iVar2 = iVar2 + -1;
      puVar1[-2] = *param_3;
      puVar1[-1] = *param_3;
      *puVar1 = *param_3;
      puVar1[1] = *param_3;
      puVar1 = puVar1 + 4;
    } while (iVar2 != 0);
  }
  while (iVar3 < param_2) {
    iVar3 = iVar3 + 1;
    *(undefined4 *)(param_1 + -4 + iVar3 * 4) = *param_3;
  }
  return 0;
}

/* ref: FUN_009fc190 */
uint F_009fc190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fc190u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
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

/* ref: FUN_009fc210 */
uint F_009fc210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fc210u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *param_2;
  return (uint)param_2;
}

/* ref: FUN_009fc220 */
unsigned int F_009fc220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fc220u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *(undefined4 *)(param_1 + iVar1 * 4) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 0;
}

/* ref: FUN_009fc260 */
uint F_009fc260(unsigned int gen_a0)
{
  GEN_ENTER(0x9fc260u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009fc270 */
unsigned int F_009fc270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fc270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  for (puVar1 = param_1; puVar1 != param_2; puVar1 = puVar1 + 1) {
    *puVar1 = *param_3;
  }
  return 0;
}

/* ref: FUN_009fc290 */
unsigned int F_009fc290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fc290u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  
  if (param_1 != param_2) {
    piVar1 = param_1;
    do {
      if (*piVar1 == *param_3) {
        return 0;
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_009fc2b0 */
uint F_009fc2b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fc2b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_009fc2f0 */
uint F_009fc2f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fc2f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 0x30);
  return uVar1;
}

/* ref: FUN_009fc320 */
uint F_009fc320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fc320u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_009fc350 */
uint F_009fc350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fc350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_009fc380 */
uint F_009fc380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fc380u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 0xc);
  return uVar1;
}

/* ref: FUN_009fc3c0 */
uint F_009fc3c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fc3c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: Client::Graphics::Animation::AnimationAllocator::vf8 */
unsigned int F_009fc400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fc400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Graphics::Animation::AnimationAllocator::vf9 */
uint F_009fc410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fc410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  return param_2;
}

/* ref: Client::Graphics::Animation::AnimationAllocator::vf0 */
uint F_009fc420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fc420u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  F_00d9b7c0(in_ecx);
  return in_ecx;
}

/* ref: hkMemoryAllocator::vf0 */
uint F_009fc430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fc430u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  F_00d9b7c0(in_ecx);
  return in_ecx;
}

/* ref: FUN_009fc450 */
byte F_009fc450(unsigned int gen_a0)
{
  GEN_ENTER(0x9fc450u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *((int *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0x78))) == 1;
}

/* ref: FUN_009fc470 */
byte F_009fc470(unsigned int gen_a0)
{
  GEN_ENTER(0x9fc470u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *((char *)GEN_TOP((*(int *)(param_1 + 0x24) + 0xe))) == '\x01';
}

/* ref: FUN_009fc4d0 */
uint F_009fc4d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x9fc4d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  ((code *)*(gen_code32 *)(*(int *)this + 8))(this,param_1,param_2,param_3,param_5,param_6);
  return param_1;
}

/* ref: FUN_009fc500 */
uint F_009fc500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9fc500u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  byte bVar8;
  
  fVar5 = *param_2;
  fVar6 = param_2[1];
  fVar7 = param_2[2];
  (*(float *)(gen_frame + 0x54)) = fVar7;
  (*(float *)(gen_frame + 0x5c)) = fVar6;
  (*(float *)(gen_frame + 0x58)) = fVar5;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  (*(float *)(gen_frame + 0x48)) = fVar3;
  (*(float *)(gen_frame + 0x50)) = *param_3;
  (*(float *)(gen_frame + 0x4c)) = fVar2;
  fVar1 = (float)((float10)*param_3 - (float10)fVar5);
  (*(float *)(gen_frame + 0x30)) = fVar1;
  fVar2 = (float)((float10)fVar2 - (float10)fVar6);
  (*(float *)(gen_frame + 0x34)) = fVar2;
  fVar3 = (float)((float10)fVar3 - (float10)fVar7);
  (*(float *)(gen_frame + 0x38)) = fVar3;
  fVar4 = ((float)GEN_TOF(((float10)fVar3 * (float10)fVar3 +
                 ((float10)fVar1 * (float10)fVar1 + (float10)fVar2 * (float10)fVar2))));
  (*(float *)(gen_frame + 0x48)) = fVar4;
  fVar4 = ((float)GEN_TOF(SQRT((float10)fVar4)));
  (*(float *)(gen_frame + 0x48)) = fVar4;
  (*(float *)(gen_frame + 0x0)) = fVar5;
  (*(float *)(gen_frame + 0x50)) = fVar4;
  (*(float *)(gen_frame + 0x4)) = fVar6;
  (*(float *)(gen_frame + 0x8)) = fVar7;
  (*(float *)(gen_frame + 0x10)) = fVar1;
  (*(float *)(gen_frame + 0x14)) = fVar2;
  (*(float *)(gen_frame + 0x18)) = fVar3;
  bVar8 = F_00a1c690(&(*(float *)(gen_frame + 0x0)),fVar4,((undefined1 *)(gen_frame + 0x20)),&(*(float *)(gen_frame + 0x30)));
  if (bVar8 != 0) {
    (*(float *)(gen_frame + 0x48)) = (float)((float10)(*(float *)(gen_frame + 0x24)) - (float10)(*(float *)(gen_frame + 0x5c)));
    fVar1 = ((float)GEN_TOF(ABS((float10)(float)((float10)(*(float *)(gen_frame + 0x24)) - (float10)(*(float *)(gen_frame + 0x5c))))));
    (*(float *)(gen_frame + 0x48)) = fVar1;
    *param_4 = (float)((float10)fVar1 / (float10)(*(float *)(gen_frame + 0x50)));
    *param_5 = (*(float *)(gen_frame + 0x30));
    param_5[1] = (*(float *)(gen_frame + 0x34));
    param_5[2] = (*(float *)(gen_frame + 0x38));
    param_5[3] = 0.0;
    *param_1 = 1;
    return (uint)param_1;
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_009fc680 */
uint F_009fc680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fc680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (*(int *)((int)this + 0x20) != 0) {
    F_00406b30(*(int *)((int)this + 0x20));
    *(undefined4 *)((int)this + 0x20) = 0;
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_009fc740 */
uint F_009fc740(unsigned int gen_a0)
{
  GEN_ENTER(0x9fc740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_009fa500(this);
  return (uint)this;
}

/* ref: FUN_009fc750 */
byte F_009fc750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fc750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_009fc7a0 */
uint F_009fc7a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fc7a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x11))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*(int *)(uVar2 + 8) + 4))) = param_1;
  }
  *(uint *)(uVar2 + 4) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + 4))) = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = (uint *)param_1[1];
  if (param_1 == (uint *)puVar1[2]) {
    puVar1[2] = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *(uint * PTR32 *)(uVar2 + 8) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_009fc800 */
uint F_009fc800(unsigned int gen_a0)
{
  GEN_ENTER(0x9fc800u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_009fc810 */
uint F_009fc810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fc810u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009fc820 */
uint F_009fc820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fc820u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = in_ecx[3] != *in_ecx;
  return param_2;
}

/* ref: FUN_009fc870 */
undefined4 * F_009fc870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fc870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x11) == '\0') {
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
    } while (*(char *)((int)puVar3 + 0x11) == '\0');
  }
  return puVar2;
}

/* ref: FUN_009fc8a0 */
uint F_009fc8a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fc8a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_009fa500(this);
  return (uint)param_1;
}

/* ref: FUN_009fc8c0 */
uint F_009fc8c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9fc8c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_009fa5d0(this);
  return (uint)this;
}

/* ref: FUN_009fc8e0 */
uint F_009fc8e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fc8e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_009fc910 */
uint F_009fc910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fc910u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *param_1 = param_2;
  param_1[1] = param_3;
  return (uint)param_1;
}

/* ref: FUN_009fc930 */
uint F_009fc930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fc930u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  uVar1 = *param_3;
  param_1[1] = uVar2;
  param_1[2] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_009fc950 */
uint F_009fc950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fc950u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *param_1 = param_2;
  param_1[1] = param_3;
  return (uint)param_1;
}

/* ref: FUN_009fc970 */
uint F_009fc970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fc970u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined2 *)(param_1 + 2) = *param_3;
  return (uint)param_1;
}

/* ref: FUN_009fc9b0 */
uint F_009fc9b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fc9b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_009fc9d0 */
uint F_009fc9d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fc9d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_009fc9f0 */
uint F_009fc9f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fc9f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_009fca10 */
uint F_009fca10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fca10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_009fca20 */
uint F_009fca20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fca20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x14,0,0xcb);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 4) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = *param_1;
  }
  return (uint)puVar1;
}

/* ref: FUN_009fca70 */
uint F_009fca70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fca70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_009fca80 */
uint F_009fca80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fca80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 << 5);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_009fcac0 */
unsigned int F_009fcac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9fcac0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  int iVar5;
  
  if (param_1 != param_2) {
    iVar5 = *param_3;
    piVar4 = param_1;
    do {
      iVar5 = iVar5 + 1;
      *param_3 = iVar5;
      if (*(char *)((int)piVar4 + 0x11) == '\0') {
        piVar2 = (int *)piVar4[2];
        if (*(char *)((int)piVar2 + 0x11) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x11);
          piVar4 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x11);
            piVar4 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar4[1] + 0x11);
          piVar3 = (int *)piVar4[1];
          piVar2 = piVar4;
          while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar4[2]))) {
            cVar1 = *(char *)(piVar4[1] + 0x11);
            piVar3 = (int *)piVar4[1];
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar4 != param_2);
  }
  return 0;
}

/* ref: FUN_009fcb30 */
uint F_009fcb30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fcb30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined2 *)this = *param_1;
  *(undefined2 *)((int)this + 2) = param_1[1];
  uVar1 = *(undefined4 *)(param_1 + 10);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0xe);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0x14) = uVar1;
  *(undefined4 *)((int)this + 0x18) = uVar2;
  *(undefined4 *)((int)this + 0x1c) = uVar3;
  return (uint)this;
}

/* ref: FUN_009fcb60 */
byte F_009fcb60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fcb60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_009fcb80 */
uint F_009fcb80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fcb80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)this)(*(int *)((int)this + 4) + *param_1,*(undefined4 *)((int)this + 8));
  return uVar1;
}

/* ref: FUN_009fcba0 */
uint F_009fcba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9fcba0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  uint uVar6;
  int iVar7;
  
  piVar5 = (*(int * PTR32 *)&gen_args[1]);
  piVar3 = (*(int * PTR32 *)&gen_args[1]);
  while (piVar5 != (*(int * PTR32 *)&gen_args[2])) {
    iVar2 = piVar5[3];
    iVar7 = *(int *)(iVar2 + 0xc);
    if (iVar7 != 0) {
      ((int *)(gen_frame + 0xc))[0] = iVar7;
    }
    uVar6 = (uint)(iVar7 != 0);
    if (*(int *)(iVar2 + 0x10) != 0) {
      ((int *)(gen_frame + 0xc))[(int)(uVar6)] = *(int *)(iVar2 + 0x10);
      uVar6 = uVar6 + 1;
    }
    if (*(int *)(iVar2 + 0x14) != 0) {
      ((int *)(gen_frame + 0xc))[(int)(uVar6)] = *(int *)(iVar2 + 0x14);
      uVar6 = uVar6 + 1;
    }
    if (*(int *)(iVar2 + 0x18) != 0) {
      ((int *)(gen_frame + 0xc))[(int)(uVar6)] = *(int *)(iVar2 + 0x18);
      uVar6 = uVar6 + 1;
    }
    iVar7 = 0;
    if (uVar6 != 0) {
      do {
        ((code *)*(gen_code32 *)(*(int *)((int *)(gen_frame + 0xc))[(int)(iVar7)] + 0x1c))((int *)((int *)(gen_frame + 0xc))[(int)(iVar7)],iVar2,&(*(undefined4 *)&gen_args[3]));
        iVar7 = iVar7 + 1;
        piVar5 = piVar3;
      } while (iVar7 < (int)uVar6);
    }
    if (*(char *)((int)piVar5 + 0x11) == '\0') {
      piVar3 = (int *)piVar5[2];
      if (*(char *)((int)piVar3 + 0x11) == '\0') {
        cVar1 = *(char *)(*piVar3 + 0x11);
        piVar5 = piVar3;
        piVar4 = (int *)*piVar3;
        while (piVar3 = piVar5, cVar1 == '\0') {
          cVar1 = *(char *)(*piVar4 + 0x11);
          piVar5 = piVar4;
          piVar4 = (int *)*piVar4;
        }
      }
      else {
        cVar1 = *(char *)(piVar5[1] + 0x11);
        piVar3 = (int *)piVar5[1];
        piVar4 = piVar5;
        while ((piVar5 = piVar3, piVar3 = piVar5, cVar1 == '\0' && (piVar4 == (int *)piVar5[2]))) {
          cVar1 = *(char *)(piVar5[1] + 0x11);
          piVar3 = (int *)piVar5[1];
          piVar4 = piVar5;
        }
      }
    }
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(undefined4 *)&gen_args[3]);
  (*(undefined4 * PTR32 *)&gen_args[0])[1] = (*(undefined4 *)&gen_args[4]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_009fcc80 */
uint F_009fcc80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fcc80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)this)(*(int *)((int)this + 4) + *param_1,(uint)*(ushort *)((int)this + 8));
  return uVar1;
}

/* ref: FUN_009fcca0 */
uint F_009fcca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fcca0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_009fccc0 */
uint F_009fccc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fccc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_009fcce0 */
uint F_009fcce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9fcce0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  uint * param_4 = (uint *)(uintptr_t)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2;
  while( true ) {
    iVar3 = iVar2 * 2 + 2;
    if (param_3 <= iVar3) break;
    uVar1 = (*param_5)(*(undefined4 *)(param_1 + iVar3 * 4),
                       *(undefined4 *)(param_1 + -4 + iVar3 * 4));
    if ((char)uVar1 != '\0') {
      iVar3 = iVar2 * 2 + 1;
    }
    *(undefined4 *)(param_1 + iVar2 * 4) = *(undefined4 *)(param_1 + iVar3 * 4);
    iVar2 = iVar3;
  }
  if (iVar3 == param_3) {
    *(undefined4 *)(param_1 + iVar2 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    iVar2 = param_3 + -1;
  }
  if (param_2 < iVar2) {
    do {
      iVar3 = (iVar2 + -1) / 2;
      uVar1 = (*param_5)(*(undefined4 *)(param_1 + iVar3 * 4),*param_4);
      if ((char)uVar1 == '\0') {
        *(uint *)(param_1 + iVar2 * 4) = *param_4;
        return uVar1;
      }
      *(undefined4 *)(param_1 + iVar2 * 4) = *(undefined4 *)(param_1 + iVar3 * 4);
      iVar2 = iVar3;
    } while (param_2 < iVar3);
    *(uint *)(param_1 + iVar3 * 4) = *param_4;
    return (uint)param_4;
  }
  uVar1 = *param_4;
  *(uint *)(param_1 + iVar2 * 4) = uVar1;
  return uVar1;
}

/* ref: FUN_009fcda0 */
uint F_009fcda0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fcda0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = param_2 - param_1 >> 2;
  uVar2 = param_3 + iVar1 * -4;
  F_00c46e20(uVar2,param_1,iVar1 * 4);
  return uVar2;
}

/* ref: FUN_009fcdd0 */
uint F_009fcdd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9fcdd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  *param_3 = *param_1;
  uVar1 = F_009fcce0(param_1,0,param_2 - (int)((int)(uintptr_t)param_1) >> 2,param_4,param_5);
  return uVar1;
}

/* ref: FUN_009fce50 */
uint F_009fce50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fce50u, gen_a0, gen_a1, 0u, 0u);
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
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  in_ecx[4] = param_2[4];
  in_ecx[5] = uVar1;
  in_ecx[6] = uVar2;
  in_ecx[7] = uVar3;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  in_ecx[8] = param_2[8];
  in_ecx[9] = uVar1;
  in_ecx[10] = uVar2;
  in_ecx[0xb] = uVar3;
  return (uint)in_ecx;
}

/* ref: FUN_009fce80 */
unsigned int F_009fce80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fce80u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *in_ecx;
  fVar2 = in_ecx[1];
  fVar3 = in_ecx[2];
  fVar4 = in_ecx[3];
  fVar5 = *param_2;
  fVar6 = param_2[1];
  fVar7 = param_2[2];
  fVar8 = param_2[3];
  *in_ecx = ((fVar7 * fVar2 - fVar6 * fVar3) + fVar4 * fVar5) + fVar8 * fVar1;
  in_ecx[1] = ((fVar5 * fVar3 - fVar7 * fVar1) + fVar4 * fVar6) + fVar8 * fVar2;
  in_ecx[2] = ((fVar6 * fVar1 - fVar5 * fVar2) + fVar4 * fVar7) + fVar8 * fVar3;
  in_ecx[3] = fVar8 * fVar4 - ((fVar6 * fVar2 + fVar5 * fVar1) + fVar7 * fVar3);
  return 0;
}

/* ref: FUN_009fcf10 */
uint F_009fcf10(unsigned int gen_a0)
{
  GEN_ENTER(0x9fcf10u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  return uVar2;
}

/* ref: FUN_009fcf30 */
unsigned int F_009fcf30(unsigned int gen_a0)
{
  GEN_ENTER(0x9fcf30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0x3c);
  }
  return 0;
}

/* ref: FUN_009fcf70 */
uint F_009fcf70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fcf70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x10);
  *(undefined1 *)(param_1 + uVar1) = (undefined1)param_2;
  return uVar1;
}

/* ref: FUN_009fcfa0 */
uint F_009fcfa0(unsigned int gen_a0)
{
  GEN_ENTER(0x9fcfa0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  *(short *)(uVar2 + 4) = (short)param_1;
  return uVar2;
}

/* ref: FUN_009fcfd0 */
uint F_009fcfd0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x9fcfd0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  
  *(float *)(param_1 + 0x80) = param_2;
  fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((*((int *)GEN_TOP((*(uint *)(param_1 + 0x28) + 0xc))) + 0xc))) -
                 (float10)param_2)));
  if ((float10)fVar1 <= (float10)*(float *)(param_1 + 8)) {
    *(float *)(param_1 + 8) = fVar1;
  }
  return *(uint *)(param_1 + 0x28);
}

/* ref: FUN_009fd010 */
uint F_009fd010(unsigned int gen_a0)
{
  GEN_ENTER(0x9fd010u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),param_1,0x10);
  return uVar1;
}

/* ref: FUN_009fd030 */
uint F_009fd030(unsigned int gen_a0)
{
  GEN_ENTER(0x9fd030u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  *(short *)(uVar2 + 4) = (short)param_1;
  return uVar2;
}

/* ref: FUN_009fd060 */
uint F_009fd060(unsigned int gen_a0)
{
  GEN_ENTER(0x9fd060u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  return uVar2;
}

/* ref: FUN_009fd080 */
unsigned int F_009fd080(unsigned int gen_a0)
{
  GEN_ENTER(0x9fd080u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0x290);
  }
  return 0;
}

/* ref: FUN_009fd0b0 */
uint F_009fd0b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9fd0b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined1 *)this = (undefined1)param_2;
  *(undefined1 *)((int)this + 1) = (undefined1)param_1;
  *(undefined1 *)((int)this + 2) = (undefined1)param_4;
  *(undefined2 *)((int)this + 4) = (undefined2)param_3;
  *(undefined2 *)((int)this + 6) = 0xffff;
  return (uint)this;
}

/* ref: FUN_009fd150 */
uint F_009fd150(unsigned int gen_a0)
{
  GEN_ENTER(0x9fd150u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),param_1,0x10);
  return uVar1;
}

/* ref: FUN_009fd170 */
uint F_009fd170(unsigned int gen_a0)
{
  GEN_ENTER(0x9fd170u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),param_1);
  }
  return uVar1;
}

/* ref: FUN_009fd190 */
uint F_009fd190(unsigned int gen_a0)
{
  GEN_ENTER(0x9fd190u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),param_1);
  }
  return uVar1;
}

/* ref: FUN_009fd1b0 */
uint F_009fd1b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9fd1b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),param_1,0x10);
  return uVar1;
}

/* ref: FUN_009fd1d0 */
uint F_009fd1d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9fd1d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),param_1);
  }
  return uVar1;
}

/* ref: FUN_009fd1f0 */
uint F_009fd1f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9fd1f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),param_1);
  }
  return uVar1;
}

/* ref: FUN_009fd210 */
unsigned int F_009fd210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fd210u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 0x50) = REFG(float, 0x1087f04);
  F_009fb6f0(this,param_1);
  *(undefined4 *)((int)this + 0x54) = param_2;
  *(undefined2 *)((int)this + 0x58) = 0x100;
  return 0;
}

/* ref: FUN_009fd240 */
uint F_009fd240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fd240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((param_1 & 2) == 0) {
    if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),this);
    }
  }
  else {
    this = (undefined *)((int)this - 0x10);
    if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),this);
      return (uint)this;
    }
  }
  return (uint)this;
}

/* ref: FUN_009fd290 */
uint F_009fd290(unsigned int gen_a0)
{
  GEN_ENTER(0x9fd290u, gen_a0, 0u, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  float fVar2;
  float * pfVar3;
  
  fVar1 = *in_ecx;
  fVar2 = in_ecx[1];
  (*(float *)(gen_frame + 0x4)) = 0.0;
  (*(float *)(gen_frame + 0x0)) = REFG(float, 0x1087f04);
  pfVar3 = &(*(float *)(gen_frame + 0x8));
  (*(float *)(gen_frame + 0x8)) = (float)((float10)fVar1 / (float10)fVar2);
  if (!((float10)0 < (float10)(float)((float10)fVar1 / (float10)fVar2))) {
    pfVar3 = &(*(float *)(gen_frame + 0x4));
  }
  if ((GEN_ISNAN(REFG(float, 0x1087f04)) || GEN_ISNAN(*pfVar3)) || (REFG(float, 0x1087f04) < *pfVar3 || REFG(uint, 0x1087f04) == *pfVar3)) {
    pfVar3 = &(*(float *)(gen_frame + 0x0));
  }
  return (uint)pfVar3;
}

/* ref: FUN_009fd2f0 */
ushort F_009fd2f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9fd2f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  double dVar1;
  float10 fVar2;
  ushort local_c;
  
  dVar1 = (double)((float)GEN_TOF(((float10)*((float *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x1c) + 0x28))) +
                                                      0xc))) + 0xc))) *
                         (float10)*(double *)&REFG(undefined, 0x1088070))));
  fVar2 = F_00c4ed10((uint)(ulonglong)gen_d2bits(dVar1),
                       (int)((ulonglong)gen_d2bits(dVar1) >> 0x20));
  local_c = (ushort)(int)TRUNC(fVar2);
  return local_c;
}

/* ref: FUN_009fd340 */
uint F_009fd340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fd340u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  int iVar2;
  uint uVar3;
  double dVar4;
  float10 fVar5;
  ushort local_c;
  
  dVar4 = (double)((float)GEN_TOF(((float10)*((float *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0x28))) +
                                                      0xc))) + 0xc))) *
                         (float10)*(double *)&REFG(undefined, 0x1088070))));
  fVar5 = F_00c4ed10((uint)(ulonglong)gen_d2bits(dVar4),
                       (int)((ulonglong)gen_d2bits(dVar4) >> 0x20));
  local_c = (ushort)(int)TRUNC(fVar5);
  if (local_c < (ushort)param_2) {
    fVar5 = (float10)0;
  }
  else {
    fVar5 = (float10)(int)(((int)TRUNC(fVar5) & 0xffffU) - (param_2 & 0xffff)) /
            (float10)*(double *)&REFG(undefined, 0x1088070);
  }
  iVar2 = *(int *)(param_1 + 0x1c);
  *(float *)(iVar2 + 0x80) = (float)fVar5;
  uVar3 = *((uint *)GEN_TOP((*(int *)(iVar2 + 0x28) + 0xc)));
  fVar1 = ((float)GEN_TOF(((float10)*(float *)(uVar3 + 0xc) - (float10)(float)fVar5)));
  if ((float10)fVar1 <= (float10)*(float *)(iVar2 + 8)) {
    *(float *)(iVar2 + 8) = fVar1;
  }
  return uVar3;
}

/* ref: FUN_009fd4a0 */
uint F_009fd4a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fd4a0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *in_ecx * *in_ecx;
  fVar2 = in_ecx[1] * in_ecx[1];
  fVar3 = in_ecx[2] * in_ecx[2];
  *param_2 = (fVar2 + fVar1) + fVar3;
  param_2[1] = (fVar2 + fVar1) + fVar3;
  param_2[2] = (fVar2 + fVar1) + fVar3;
  param_2[3] = (fVar2 + fVar1) + fVar3;
  return (uint)param_2;
}

/* ref: FUN_009fd4d0 */
uint F_009fd4d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fd4d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  if ((int)(*(uint *)((int)this + 8) & 0x3fffffff) < param_2) {
    bVar1 = F_00d95690(param_1,this,param_2,0x30);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_009fd500 */
uint F_009fd500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fd500u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,0x30);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_2;
  return uVar2;
}

/* ref: FUN_009fd540 */
uint F_009fd540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fd540u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  if ((int)(*(uint *)((int)this + 8) & 0x3fffffff) < param_2) {
    bVar1 = F_00d95690(param_1,this,param_2,4);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_009fd570 */
uint F_009fd570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9fd570u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int iVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < (int)param_2) {
    uVar2 = uVar2 * 2;
    if ((int)uVar2 <= (int)param_2) {
      uVar2 = param_2;
    }
    F_00d95690(param_1,this,uVar2,4);
  }
  puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
  iVar5 = param_2 - (int)puVar4;
  iVar6 = 0;
  iVar1 = *(int *)this + (int)((int)(uintptr_t)puVar4) * 4;
  if (3 < iVar5) {
    iVar7 = (iVar5 - 4U >> 2) + 1;
    iVar6 = iVar7 * 4;
    puVar3 = (undefined4 *)(iVar1 + 8);
    do {
      puVar4 = puVar3 + 4;
      iVar7 = iVar7 + -1;
      puVar3[-2] = *param_3;
      puVar3[-1] = *param_3;
      *puVar3 = *param_3;
      puVar3[1] = *param_3;
      puVar3 = puVar4;
    } while (iVar7 != 0);
  }
  if (iVar5 <= iVar6) {
    *(uint *)((int)this + 4) = param_2;
    return (uint)puVar4;
  }
  do {
    iVar6 = iVar6 + 1;
    *(undefined4 *)(iVar1 + -4 + iVar6 * 4) = *param_3;
  } while (iVar6 < iVar5);
  *(uint *)((int)this + 4) = param_2;
  return param_2;
}

/* ref: FUN_009fd620 */
uint F_009fd620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fd620u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  if ((int)(*(uint *)((int)this + 8) & 0x3fffffff) < param_2) {
    bVar1 = F_00d95690(param_1,this,param_2,4);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_009fd650 */
uint F_009fd650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fd650u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,4);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_2;
  return uVar2;
}

/* ref: FUN_009fd690 */
uint F_009fd690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fd690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  uVar1 = *(uint *)((int)this + 4);
  if (uVar1 != param_1) {
    uVar1 = *(uint *)(*(int *)this + uVar1 * 4);
    *(uint *)(*(int *)this + param_1 * 4) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_009fd6b0 */
uint F_009fd6b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fd6b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 4)));
  *puVar1 = *param_2;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_009fd6f0 */
unsigned int F_009fd6f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fd6f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  for (puVar1 = param_1; puVar1 != param_2; puVar1 = puVar1 + 1) {
    *puVar1 = *param_3;
  }
  return 0;
}

/* ref: FUN_009fd710 */
unsigned int F_009fd710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fd710u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  
  if (param_1 != param_2) {
    piVar1 = param_1;
    do {
      if (*piVar1 == *param_3) {
        return 0;
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_009fd730 */
uint F_009fd730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fd730u, gen_a0, gen_a1, 0u, 0u);
  gen_v16 * in_ecx = (gen_v16 *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 in_XMM3 [16] = {0};
  undefined1 auVar9 [16];
  
  memcpy(&(auVar1), &(*in_ecx), sizeof(*in_ecx) < sizeof(auVar1) ? sizeof(*in_ecx) : sizeof(auVar1));
  gen_rsqrtps(&(auVar9), &(in_XMM3), &(auVar1));
  fVar8 = (*(float *)((char *)&auVar9 + 0));
  fVar2 = (*(float *)((char *)&auVar9 + 4));
  fVar3 = (*(float *)((char *)&auVar9 + 8));
  fVar4 = (*(float *)((char *)&auVar9 + 12));
  fVar5 = *(float *)&REFG(undefined, 0x10e1574) - ((*(float *)((char *)&auVar1 + 4)) * fVar2) * fVar2;
  fVar6 = *(float *)&REFG(undefined, 0x10e1578) - ((*(float *)((char *)&auVar1 + 8)) * fVar3) * fVar3;
  fVar7 = *(float *)&REFG(undefined, 0x10e157c) - ((*(float *)((char *)&auVar1 + 12)) * fVar4) * fVar4;
  fVar2 = *(float *)&REFG(undefined, 0x10e1584) * fVar2;
  fVar3 = *(float *)&REFG(undefined, 0x10e1588) * fVar3;
  fVar4 = *(float *)&REFG(undefined, 0x10e158c) * fVar4;
  *param_2 = ~-(uint)((*(float *)((char *)&auVar1 + 0)) <= 0.0) &
             (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x10e1570) - ((*(float *)((char *)&auVar1 + 0)) * fVar8) * fVar8) *
                               (*(float *)&REFG(undefined, 0x10e1580) * fVar8));
  param_2[1] = ~-(uint)((*(float *)((char *)&auVar1 + 4)) <= 0.0) & (uint)gen_fl2bits(fVar5 * fVar2);
  param_2[2] = ~-(uint)((*(float *)((char *)&auVar1 + 8)) <= 0.0) & (uint)gen_fl2bits(fVar6 * fVar3);
  param_2[3] = ~-(uint)((*(float *)((char *)&auVar1 + 12)) <= 0.0) & (uint)gen_fl2bits(fVar7 * fVar4);
  return (uint)param_2;
}

/* ref: FUN_009fd770 */
uint F_009fd770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fd770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x30);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_009fd7b0 */
uint F_009fd7b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fd7b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_009fd7f0 */
uint F_009fd7f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fd7f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_009fd830 */
unsigned int F_009fd830(unsigned int gen_a0)
{
  GEN_ENTER(0x9fd830u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0xc);
  }
  return 0;
}

/* ref: FUN_009fd870 */
uint F_009fd870(unsigned int gen_a0)
{
  GEN_ENTER(0x9fd870u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  *(short *)(uVar2 + 4) = (short)param_1;
  return uVar2;
}

/* ref: Client::Graphics::Animation::AnimationAllocator::vf1 */
uint F_009fd8a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fd8a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),param_1,0x10);
  return uVar1;
}

/* ref: Client::Graphics::Animation::AnimationAllocator::vf2 */
uint F_009fd8c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fd8c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),param_1);
  }
  return uVar1;
}

/* ref: FUN_009fd8e0 */
uint F_009fd8e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fd8e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d96d40(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,0x290);
  }
  return (uint)this;
}

/* ref: FUN_009fd920 */
uint F_009fd920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fd920u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  int iVar2;
  uint uVar3;
  
  F_009fb280(*(undefined4 *)(param_2 + 0x1c),*(float *)(param_1 + 4));
  if (0 < (short)*(ushort *)(param_1 + 0xe)) {
    iVar2 = *(int *)(param_2 + 0x1c);
    fVar1 = ((float)GEN_TOF(((float10)*(ushort *)(param_1 + 0xe) / (float10)*(double *)&REFG(undefined, 0x1088070))));
    *(float *)(iVar2 + 0x7c) = fVar1;
    if ((float10)*(float *)(iVar2 + 8) < (float10)fVar1) {
      *(float *)(iVar2 + 8) = fVar1;
    }
  }
  uVar3 = (uint)*(ushort *)(param_1 + 0x10);
  if (0 < (short)*(ushort *)(param_1 + 0x10)) {
    uVar3 = F_009fd340(param_2,uVar3);
  }
  return uVar3;
}

/* ref: FUN_009fd990 */
uint F_009fd990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fd990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  int iVar2;
  undefined4 * puVar3;
  int iVar4;
  
  if ((param_1 & 2) == 0) {
    if (*(int *)((int)this + 0x40) != 0) {
      iVar4 = *(int *)((int)this + 0x40) + -0x10;
      if (iVar4 != 0) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),iVar4);
      }
      *(undefined4 *)((int)this + 0x40) = 0;
    }
    if ((param_1 & 1) != 0) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),this);
    }
    return (uint)this;
  }
  piVar1 = (int *)((int)this + -0x10);
  iVar4 = *piVar1 + -1;
  if (-1 < iVar4) {
    puVar3 = (undefined4 *)((int)this + *piVar1 * 0x50 + 0x40);
    do {
      iVar2 = puVar3[-0x14];
      puVar3 = puVar3 + -0x14;
      if (iVar2 != 0) {
        F_00401530(iVar2,0x60,*(undefined4 *)(iVar2 + -0x10),((code *)REFP(0x9fb5f0)));
        if (iVar2 + -0x10 != 0) {
          ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),iVar2 + -0x10);
        }
        *puVar3 = 0;
      }
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  if (((param_1 & 1) != 0) && (piVar1 != (int *)0x0)) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),piVar1);
  }
  return (uint)piVar1;
}

/* ref: FUN_009fda60 */
unsigned int F_009fda60(unsigned int gen_a0)
{
  GEN_ENTER(0x9fda60u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,4);
  }
  return 0;
}

/* ref: hkaRaycastInterface::vf0 */
uint F_009fda90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fda90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10e163c));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,4);
  }
  return (uint)this;
}

/* ref: FUN_009fdad0 */
uint F_009fdad0(unsigned int gen_a0)
{
  GEN_ENTER(0x9fdad0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  *(short *)(uVar2 + 4) = (short)param_1;
  return uVar2;
}

/* ref: FUN_009fdb00 */
uint F_009fdb00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fdb00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10e163c));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,4);
  }
  return (uint)this;
}

/* ref: FUN_009fdb40 */
uint F_009fdb40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fdb40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_009fdb60 */
uint F_009fdb60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fdb60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_009fdb80 */
uint F_009fdb80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fdb80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_009fdb90 */
uint F_009fdb90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fdb90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_009fdba0 */
uint F_009fdba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fdba0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x11) == '\0') {
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
    } while (*(char *)((int)puVar2 + 0x11) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_009fdbe0 */
unsigned int F_009fdbe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fdbe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x11);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_009fdbe0(this,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00429760(piVar3,0x14,0xcb);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x11);
  }
  return 0;
}

/* ref: FUN_009fdc20 */
uint F_009fdc20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fdc20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x11) == '\0') {
    *(int *)(*piVar2 + 4) = param_1;
  }
  piVar2[1] = *(int *)(param_1 + 4);
  if (param_1 == *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar2;
    *piVar2 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar2;
    return (uint)piVar2;
  }
  piVar1 = *(int * PTR32 *)(param_1 + 4);
  if (param_1 == *piVar1) {
    *piVar1 = (int)piVar2;
    *piVar2 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar2;
    return (uint)piVar2;
  }
  piVar1[2] = (int)piVar2;
  *piVar2 = param_1;
  *(int * PTR32 *)(param_1 + 4) = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_009fdca0 */
uint F_009fdca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fdca0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  puVar4 = puVar3;
  if (*(char *)((int)puVar3[1] + 0x11) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        if ((*(char *)((int)puVar3 + 0x11) != '\0') && (*param_2 < (uint)puVar1[3])) {
          puVar3 = puVar1;
        }
        puVar2 = (undefined4 *)*puVar1;
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x11) == '\0');
  }
  if (*(char *)((int)puVar3 + 0x11) == '\0') {
    puVar1 = (undefined4 *)*puVar3;
  }
  else {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  }
  if (*(char *)((int)puVar1 + 0x11) == '\0') {
    do {
      if (*param_2 < (uint)puVar1[3]) {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      else {
        puVar2 = (undefined4 *)puVar1[2];
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x11) == '\0');
  }
  *param_1 = (int)puVar4;
  param_1[1] = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_009fdd70 */
uint F_009fdd70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fdd70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_009fdd90 */
uint F_009fdd90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9fdd90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  
  if (0xfffffffd < *(uint *)((int)this + 8)) {
    F_00429760(param_4,0x14,0xcb);
                    
    F_00c4579a("map/set<T> too long");
  }
  *(uint *)((int)this + 8) = *(uint *)((int)this + 8) + 1;
  param_4[1] = (int)param_3;
  if (param_3 == *(undefined4 * PTR32 *)((int)this + 4)) {
    (*(undefined4 * PTR32 *)((int)this + 4))[1] = param_4;
    **(undefined4 * PTR32 *)((int)this + 4) = param_4;
    *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = param_4;
  }
  else if ((char)param_2 == '\0') {
    param_3[2] = param_4;
    if (param_3 == *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 8)))) {
      *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = param_4;
    }
  }
  else {
    *param_3 = param_4;
    if (param_3 == ((undefined4 *)GEN_TOP(**(int * PTR32 *)((int)this + 4)))) {
      **(int * PTR32 *)((int)this + 4) = (int)param_4;
    }
  }
  cVar1 = *(char *)(param_4[1] + 0x10);
  piVar4 = param_4;
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      *param_1 = param_4;
      *(undefined1 *)(iVar2 + 0x10) = 1;
      return (uint)param_1;
    }
    piVar5 = (int *)piVar4[1];
    piVar6 = (int *)piVar5[1];
    if (piVar5 == (int *)*piVar6) {
      iVar2 = piVar6[2];
      if (*(char *)(iVar2 + 0x10) == '\0') {
        *(undefined1 *)(piVar5 + 4) = 1;
        *(undefined1 *)(iVar2 + 0x10) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x10))) = 0;
        piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
      }
      else {
        if (piVar4 == (int *)piVar5[2]) {
          piVar4 = (int *)piVar5[2];
          piVar5[2] = *piVar4;
          if (*(char *)(*piVar4 + 0x11) == '\0') {
            *(int * PTR32 *)(*piVar4 + 4) = piVar5;
          }
          piVar4[1] = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar4;
          }
          else {
            piVar6 = (int *)piVar5[1];
            if (piVar5 == (int *)*piVar6) {
              *piVar6 = (int)piVar4;
            }
            else {
              piVar6[2] = (int)piVar4;
            }
          }
          *piVar4 = (int)piVar5;
          piVar5[1] = (int)piVar4;
          piVar4 = piVar5;
        }
        *(undefined1 *)(piVar4[1] + 0x10) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x10))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)*piVar5;
        *piVar5 = piVar6[2];
        if (*(char *)(piVar6[2] + 0x11) == '\0') {
          *(int * PTR32 *)(piVar6[2] + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar6;
          piVar6[2] = (int)piVar5;
        }
        else {
          piVar3 = (int *)piVar5[1];
          if (piVar5 == (int *)piVar3[2]) {
            piVar3[2] = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            *piVar3 = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
        }
LAB_009fdf8d: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*(char *)(iVar2 + 0x10) != '\0') {
        if (piVar4 == (int *)*piVar5) {
          iVar2 = *piVar5;
          *piVar5 = *(int *)(iVar2 + 8);
          if (*((char *)GEN_TOP((*(int *)(iVar2 + 8) + 0x11))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*(int *)(iVar2 + 8) + 4))) = piVar5;
          }
          *(int *)(iVar2 + 4) = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
            *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = iVar2;
          }
          else {
            piVar4 = (int *)piVar5[1];
            if (piVar5 == (int *)piVar4[2]) {
              piVar4[2] = iVar2;
            }
            else {
              *piVar4 = iVar2;
            }
          }
          *(int * PTR32 *)(iVar2 + 8) = piVar5;
          piVar5[1] = iVar2;
          piVar4 = piVar5;
        }
        *(undefined1 *)(piVar4[1] + 0x10) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x10))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)piVar5[2];
        piVar5[2] = *piVar6;
        if (*(char *)(*piVar6 + 0x11) == '\0') {
          *(int * PTR32 *)(*piVar6 + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar6;
        }
        else {
          piVar3 = (int *)piVar5[1];
          if (piVar5 == (int *)*piVar3) {
            *piVar3 = (int)piVar6;
          }
          else {
            piVar3[2] = (int)piVar6;
          }
        }
        *piVar6 = (int)piVar5;
        goto LAB_009fdf8d;
      }
      *(undefined1 *)(piVar5 + 4) = 1;
      *(undefined1 *)(iVar2 + 0x10) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x10))) = 0;
      piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
    }
    cVar1 = *(char *)(piVar4[1] + 0x10);
  } while( true );
}

/* ref: FUN_009fdfc0 */
uint F_009fdfc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fdfc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x14,0,0xcb);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 4) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = *param_1;
  }
  return (uint)puVar1;
}

/* ref: FUN_009fe010 */
byte F_009fe010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fe010u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * piVar1;
  
  for (piVar1 = param_1; piVar1 != param_2; piVar1 = piVar1 + 1) {
    if (*piVar1 != 0) {
      F_0050c620(*piVar1,0,0);
    }
  }
  return (byte)param_3;
}

/* ref: FUN_009fe050 */
unsigned int F_009fe050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fe050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 in_ECX = 0;
  
  F_009fcac0(param_1,param_2,param_3,in_ECX);
  return 0;
}

/* ref: FUN_009fe070 */
uint F_009fe070(unsigned int gen_a0)
{
  GEN_ENTER(0x9fe070u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  LPVOID this;
  uint uVar2;
  uint uVar3;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = *(uint *)((int)this + 0xc);
  uVar3 = param_1 * 0x20 + 0x7fU & 0xffffff80;
  uVar2 = uVar1 + uVar3;
  if (((int)uVar3 <= *(int *)((int)this + 8)) && (uVar2 <= *(uint *)((int)this + 0x10))) {
    *(uint *)((int)this + 0xc) = uVar2;
    return uVar1;
  }
  uVar2 = F_00d94390(this,uVar3);
  return uVar2;
}

/* ref: FUN_009fe0b0 */
uint F_009fe0b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fe0b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  LPVOID this;
  uint uVar1;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = param_2 * 0x20 + 0x7fU & 0xffffff80;
  if ((((int)uVar1 <= *(int *)((int)this + 8)) && (uVar1 + param_1 == *(int *)((int)this + 0xc))) &&
     (*(int *)((int)this + 0x14) != param_1)) {
    *(int *)((int)this + 0xc) = param_1;
    return (uint)this;
  }
  uVar1 = F_00d945c0(this,param_1,uVar1);
  return uVar1;
}

/* ref: FUN_009fe100 */
uint F_009fe100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9fe100u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  undefined4 * puVar2;
  bool bVar3;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  bVar3 = true;
  gen_piece_set(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((undefined3)((uint)(*(undefined * PTR32 *)&gen_args[0]) >> 8)));
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),1);
  if (*(char *)((int)puVar2[1] + 0x11) == '\0') {
    puVar1 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar1;
      if ((char)(*(undefined4 * PTR32 *)&gen_args[3]) == '\0') {
        bVar3 = *(uint *)((*(int *)&gen_args[2]) + 0xc) < (uint)puVar2[3];
      }
      else {
        bVar3 = *(uint *)((*(int *)&gen_args[2]) + 0xc) <= (uint)puVar2[3];
      }
      (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar3);
      if (bVar3 == false) {
        puVar1 = (undefined4 *)puVar2[2];
      }
      else {
        puVar1 = (undefined4 *)*puVar2;
      }
    } while (*(char *)((int)puVar1 + 0x11) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = puVar2;
  if (bVar3 != false) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      puVar2 = (undefined4 *)F_009fdd90((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar2,(*(int *)&gen_args[2]));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_009fa5d0(&(*(undefined4 * PTR32 *)&gen_args[3]));
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[3]);
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[3])[3] < *(uint *)((*(int *)&gen_args[2]) + 0xc)) {
    puVar2 = (undefined4 *)F_009fdd90((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),(*(undefined4 *)(gen_frame + 0x8)),puVar2,(*(int *)&gen_args[2]));
    *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  F_00429760((*(int *)&gen_args[2]),0x14,0xcb);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_009fe1e0 */
uint F_009fe1e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9fe1e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 5);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_009fe220 */
uint F_009fe220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9fe220u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  F_009fcba0(param_1,param_2,param_3,param_4,param_5);
  return param_1;
}

/* ref: FUN_009fe250 */
uint F_009fe250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x9fe250u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  int param_5 = (int)gen_a4;
  float param_6 = (float)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  piVar3 = param_2;
  while (piVar3 != param_3) {
    (*param_4)(piVar3[3] + param_5,(undefined4)gen_fl2bits(param_6));
    if (*(char *)((int)piVar3 + 0x11) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x11) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x11);
        piVar3 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x11);
          piVar3 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x11);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((piVar3 = piVar4, cVar1 == '\0' && (piVar2 == (int *)piVar3[2]))) {
          cVar1 = *(char *)(piVar3[1] + 0x11);
          piVar4 = (int *)piVar3[1];
          piVar2 = piVar3;
        }
      }
    }
  }
  *param_1 = param_4;
  param_1[1] = param_5;
  param_1[2] = (undefined4)gen_fl2bits(param_6);
  param_1[3] = param_7;
  return (uint)param_1;
}

