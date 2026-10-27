#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00d76ae0 */
uint F_00d76ae0(unsigned int gen_a0)
{
  GEN_ENTER(0xd76ae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
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
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,
                       (uVar1 * 8 - (uVar1 & 0x3fffffff)) * 4);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 8) = 0x80000000;
  return uVar1;
}

/* ref: FUN_00d76bb0 */
uint F_00d76bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd76bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(int *)this = param_1 + 0x28;
  *(int *)((int)this + 4) = param_1 + 0x34;
  *(int *)((int)this + 8) = param_1 + 0x38;
  *(int *)((int)this + 0xc) = param_1 + 8;
  return (uint)this;
}

/* ref: FUN_00d76be0 */
uint F_00d76be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd76be0u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  float fVar1;
  float * pfVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  iVar4 = 0;
  pfVar2 = param_3;
  fVar5 = REFG(float, 0x1136e98);
  fVar6 = REFG(float, 0x1136c54);
  if (3 < param_5) {
    iVar3 = (param_5 - 4U >> 2) + 1;
    iVar4 = iVar3 * 4;
    do {
      fVar1 = *pfVar2;
      if (fVar1 < fVar6) {
        fVar6 = fVar1;
      }
      if (fVar5 < fVar1) {
        fVar5 = fVar1;
      }
      fVar1 = pfVar2[param_4];
      if (fVar1 < fVar6) {
        fVar6 = fVar1;
      }
      if (fVar5 < fVar1) {
        fVar5 = fVar1;
      }
      fVar1 = pfVar2[param_4 * 2];
      if (fVar1 < fVar6) {
        fVar6 = fVar1;
      }
      if (fVar5 < fVar1) {
        fVar5 = fVar1;
      }
      fVar1 = pfVar2[param_4 * 3];
      pfVar2 = pfVar2 + param_4 * 4;
      if (fVar1 < fVar6) {
        fVar6 = fVar1;
      }
      if (fVar5 < fVar1) {
        fVar5 = fVar1;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (iVar4 < param_5) {
    iVar4 = param_5 - iVar4;
    do {
      fVar1 = *pfVar2;
      if (fVar1 < fVar6) {
        fVar6 = fVar1;
      }
      if (fVar5 < fVar1) {
        fVar5 = fVar1;
      }
      pfVar2 = pfVar2 + param_4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *param_1 = fVar6;
  *param_2 = fVar5 - fVar6;
  return (uint)param_1;
}

/* ref: FUN_00d76cc0 */
uint F_00d76cc0(unsigned int gen_a0)
{
  GEN_ENTER(0xd76cc0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  uVar1 = REFG(float, 0x10abe98);
  in_ecx[3] = GEN_FLT_TO(in_ecx[3], REFG(float, 0x10abe98));
  in_ecx[2] = uVar1;
  in_ecx[1] = uVar1;
  *in_ecx = uVar1;
  return (uint)in_ecx;
}

/* ref: FUN_00d76ce0 */
uint F_00d76ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd76ce0u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *param_1 = (*param_1 - 1) + param_2 & ~(param_2 - 1U);
  return (uint)param_1;
}

/* ref: FUN_00d76d00 */
ushort F_00d76d00(float gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd76d00u, gen_trace_f(gen_a0), gen_a1, 0u, 0u);
  float param_1 = (float)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  return (ushort)(int)(((param_1 - *param_2) / param_2[1]) * *(float *)&REFG(undefined, 0x11377e0));
}

/* ref: FUN_00d76d30 */
uint F_00d76d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd76d30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00d87f90(param_2,param_1);
  return uVar1;
}

/* ref: FUN_00d76d50 */
uint F_00d76d50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd76d50u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00d76be0(param_1,param_1 + 4,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00d76d80 */
unsigned int F_00d76d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd76d80u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_2) {
    do {
      uVar1 = *(undefined1 *)(param_1 + iVar2 * 2);
      *(undefined1 *)(param_1 + iVar2 * 2) = *(undefined1 *)(param_1 + 1 + iVar2 * 2);
      *(undefined1 *)(param_1 + 1 + iVar2 * 2) = uVar1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_2);
  }
  return 0;
}

/* ref: FUN_00d76db0 */
unsigned int F_00d76db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd76db0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined1 uVar1;
  undefined1 * puVar2;
  int iVar3;
  
  if (0 < param_2) {
    puVar2 = (undefined1 *)(param_1 + 2);
    iVar3 = param_2;
    do {
      uVar1 = puVar2[-2];
      puVar2[-2] = puVar2[1];
      puVar2[1] = uVar1;
      uVar1 = puVar2[-1];
      puVar2[-1] = *puVar2;
      *puVar2 = uVar1;
      puVar2 = puVar2 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}

/* ref: FUN_00d76e00 */
byte F_00d76e00(unsigned int gen_a0)
{
  GEN_ENTER(0xd76e00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 uVar1;
  byte bVar2;
  
  F_00d76d80(this,0x14);
  uVar1 = *(undefined1 *)((int)this + 8);
  *(undefined1 *)((int)this + 8) = *(undefined1 *)((int)this + 10);
  *(undefined1 *)((int)this + 10) = uVar1;
  bVar2 = *(byte *)((int)this + 9);
  *(undefined1 *)((int)this + 9) = *(undefined1 *)((int)this + 0xb);
  *(byte *)((int)this + 0xb) = bVar2;
  return bVar2;
}

/* ref: FUN_00d76e30 */
unsigned int F_00d76e30(unsigned int gen_a0)
{
  GEN_ENTER(0xd76e30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  ushort * puVar2;
  int iVar3;
  
  if (*(int *)((int)this + 0x34) != 0) {
    F_00d76e00(*(undefined * PTR32 *)((int)this + 0x28));
    iVar3 = *(int *)((int)this + 0x28);
    F_00d76d80((uint)*(ushort *)(iVar3 + 0x1e) + iVar3,
                 (uint)*(ushort *)(iVar3 + 0x12) + (uint)*(ushort *)(iVar3 + 0x10) +
                 (uint)*(ushort *)(iVar3 + 0xe) + (uint)*(ushort *)(iVar3 + 0xc));
    iVar1 = *(int *)((int)this + 0x28);
    F_00d76d80((uint)*(ushort *)(iVar1 + 0x20) + iVar3,
                 (uint)*(ushort *)(iVar1 + 0x1a) + (uint)*(ushort *)(iVar1 + 0x18) +
                 (uint)*(ushort *)(iVar1 + 0x16) + (uint)*(ushort *)(iVar1 + 0x14));
    iVar1 = *(int *)((int)this + 0x28);
    F_00d76db0((uint)*(ushort *)(iVar1 + 0x22) + iVar3,
                 (uint)*(ushort *)(iVar1 + 0x10) + (uint)*(ushort *)(iVar1 + 0xc));
    iVar1 = *(int *)((int)this + 0x28);
    F_00d76d80((uint)*(ushort *)(iVar1 + 0x22) + iVar3 +
                 ((uint)*(ushort *)(iVar1 + 0x10) + (uint)*(ushort *)(iVar1 + 0xc)) * 4,
                 (uint)*(ushort *)(iVar1 + 0xe) * 3);
    iVar1 = *(int *)((int)this + 0x28);
    F_00d76db0((uint)*(ushort *)(iVar1 + 0x22) +
                 ((uint)*(ushort *)(iVar1 + 0xe) * 6 + 0xf +
                  ((uint)*(ushort *)(iVar1 + 0x10) + (uint)*(ushort *)(iVar1 + 0xc)) * 4 &
                 0xfffffff0) + iVar3,(uint)*(ushort *)(iVar1 + 0x12));
    iVar1 = *(int *)((int)this + 0x28);
    F_00d76db0((uint)*(ushort *)(iVar1 + 0x24) + iVar3,
                 (uint)*(ushort *)(iVar1 + 0x18) + (uint)*(ushort *)(iVar1 + 0x14));
    iVar1 = *(int *)((int)this + 0x28);
    F_00d76db0((uint)*(ushort *)(iVar1 + 0x24) +
                 (((uint)*(ushort *)(iVar1 + 0x18) + (uint)*(ushort *)(iVar1 + 0x14)) * 4 + 0xf &
                 0xfffffff0) + iVar3,(uint)*(ushort *)(iVar1 + 0x1a));
    iVar1 = *(int *)((int)this + 0x28);
    F_00d76db0((uint)*(ushort *)(iVar1 + 0x26) + iVar3,
                 (uint)*(ushort *)(iVar1 + 0x18) + (uint)*(ushort *)(iVar1 + 0x14));
    iVar1 = *(int *)((int)this + 0x28);
    F_00d76db0((uint)*(ushort *)(iVar1 + 0x26) +
                 (((uint)*(ushort *)(iVar1 + 0x18) + (uint)*(ushort *)(iVar1 + 0x14)) * 4 + 0xf &
                 0xfffffff0) + iVar3,(uint)*(ushort *)(iVar1 + 0x1a));
    iVar3 = 0;
    if (*((short *)GEN_TOP((*(int *)((int)this + 0x28) + 6))) != 0) {
      do {
        puVar2 = *(ushort * PTR32 *)((int)this + 0x28);
        F_00d76d80((int)puVar2 + (uint)*puVar2 + (uint)puVar2[0xe] * iVar3,
                     (uint)puVar2[0xb] * 3 + (uint)puVar2[0xd] + (uint)puVar2[0xc] +
                     (uint)puVar2[10]);
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)(uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0x28) + 6))));
    }
    *(undefined4 *)((int)this + 0x34) = 0;
  }
  return 0;
}

/* ref: FUN_00d76ff0 */
unsigned int F_00d76ff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd76ff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_1[1]) {
    do {
      piVar1 = *(int * PTR32 *)this;
      iVar2 = *param_1;
      if (piVar1[1] == (piVar1[2] & 0x3fffffffU)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar1,1);
      }
      *(undefined1 *)(*piVar1 + piVar1[1]) = *(undefined1 *)(iVar2 + iVar3);
      piVar1[1] = piVar1[1] + 1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  return 0;
}

/* ref: FUN_00d77050 */
uint F_00d77050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd77050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  undefined1 * puVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)this + 4);
  puVar2 = ((undefined1 *)GEN_TOP((iVar3 + -1 + param_1 & ~(param_1 - 1U))));
  if (iVar3 < (int)puVar2) {
    iVar3 = (int)puVar2 - iVar3;
    do {
      piVar1 = *(int * PTR32 *)this;
      if (piVar1[1] == (piVar1[2] & 0x3fffffffU)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar1,1);
      }
      puVar2 = (undefined1 *)(*piVar1 + piVar1[1]);
      *puVar2 = 0;
      piVar1[1] = piVar1[1] + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return (uint)puVar2;
}

/* ref: FUN_00d770b0 */
uint F_00d770b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xd770b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  float param_5 = (float)gen_a4;
  int * param_6 = (int *)(uintptr_t)gen_a5;
  int * param_7 = (int *)(uintptr_t)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float * pfVar1;
  undefined8 uVar2;
  undefined8 * puVar3;
  int * piVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar7 = *(float *)(param_3 + 4 + (uint)(ushort)param_1 * 8);
  pfVar1 = (float *)(param_3 + (uint)(ushort)param_1 * 8);
  if (fVar7 <= param_5 * REFG(float, 0x10928e4)) {
    if (param_4 != 0) {
      fVar5 = *(float *)(param_4 + (uint)(ushort)param_2 * 4);
      if ((fVar5 - param_5 <= *pfVar1) &&
         (fVar6 = *pfVar1 + fVar7, fVar5 = fVar5 + param_5,
         (!GEN_ISNAN(fVar5) && !GEN_ISNAN(fVar6)) && !(fVar5 < fVar6))) {
        return (uint)pfVar1;
      }
    }
    fVar7 = fVar7 * REFG(float, 0x1088068);
    fVar5 = *pfVar1;
    (*(float *)(gen_frame + 0x8)) = gen_bits2f(CONCAT22((*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x8)) + 2)),(ushort)param_2));
    if (param_6[1] == (param_6[2] & 0x3fffffffU)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_6,8);
    }
    pfVar1 = (float *)(*param_6 + param_6[1] * 8);
    puVar3 = (undefined8 *)0x0;
    piVar4 = param_6;
    if (pfVar1 != (float *)0x0) {
      *pfVar1 = fVar7 + fVar5;
      pfVar1[1] = (*(float *)(gen_frame + 0x8));
      param_6[1] = param_6[1] + 1;
      return (uint)pfVar1;
    }
  }
  else {
    uVar2 = *(undefined8 *)pfVar1;
    if (param_7[1] == (param_7[2] & 0x3fffffffU)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_7,0xc);
    }
    puVar3 = (undefined8 *)(*param_7 + param_7[1] * 0xc);
    piVar4 = param_7;
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = uVar2;
      *(uint *)(puVar3 + 1) = CONCAT22((ushort)param_2,(ushort)param_1);
    }
  }
  piVar4[1] = piVar4[1] + 1;
  return (uint)puVar3;
}

/* ref: FUN_00d771d0 */
uint F_00d771d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd771d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  F_00d77050(this,param_2);
  iVar1 = *(int *)this;
  iVar4 = *(int *)(iVar1 + 4) + param_2;
  uVar2 = *(uint *)(iVar1 + 8) & 0x3fffffff;
  if ((int)uVar2 < iVar4) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= iVar4) {
      iVar3 = iVar4;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),iVar1,iVar3,1);
  }
  *(int *)(iVar1 + 4) = iVar4;
  uVar2 = F_00da1010(((*(int * PTR32 *)this)[1] - param_2) + **(int * PTR32 *)this,param_1,param_2);
  return uVar2;
}

/* ref: FUN_00d77240 */
uint F_00d77240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd77240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_00d77050(this,4);
  uVar1 = F_00d771d0(this,param_1,4);
  return uVar1;
}

/* ref: FUN_00d77260 */
uint F_00d77260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd77260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00d771d0(this,param_1,2);
  return uVar1;
}

/* ref: FUN_00d77280 */
uint F_00d77280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd77280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00d771d0(this,param_1,4);
  return uVar1;
}

/* ref: FUN_00d774d0 */
uint F_00d774d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd774d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  
  uVar1 = F_00d77050(this,2);
  iVar2 = 0;
  if (0 < param_1[1]) {
    do {
      uVar1 = F_00d77260(this,*param_1 + 4 + iVar2 * 8);
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1[1]);
  }
  return uVar1;
}

/* ref: FUN_00d77510 */
uint F_00d77510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd77510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00d77050(this,2);
  iVar3 = 0;
  if (0 < param_1[1]) {
    iVar2 = 0;
    do {
      uVar1 = F_00d77260(this,*param_1 + 0x10 + iVar2);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x20;
    } while (iVar3 < param_1[1]);
  }
  return uVar1;
}

/* ref: FUN_00d77560 */
uint F_00d77560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd77560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00d77050(this,2);
  iVar3 = 0;
  if (0 < param_1[1]) {
    iVar2 = 0;
    do {
      uVar1 = F_00d77260(this,*param_1 + 10 + iVar2);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0xc;
    } while (iVar3 < param_1[1]);
  }
  return uVar1;
}

/* ref: FUN_00d775b0 */
uint F_00d775b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd775b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  
  uVar1 = F_00d77050(this,2);
  iVar2 = 0;
  if (0 < param_1[1]) {
    do {
      uVar1 = F_00d77260(this,*param_1 + 2 + iVar2 * 4);
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1[1]);
  }
  return uVar1;
}

/* ref: FUN_00d775f0 */
uint F_00d775f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd775f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  
  uVar1 = F_00d77050(this,4);
  iVar2 = 0;
  if (0 < param_1[1]) {
    do {
      uVar1 = F_00d77280(this,*param_1 + iVar2 * 8);
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1[1]);
  }
  return uVar1;
}

/* ref: FUN_00d77630 */
unsigned int F_00d77630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd77630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  int iVar2;
  
  piVar1 = param_1;
  iVar2 = 0;
  if (0 < param_1[1]) {
    param_1 = (int *)0x0;
    do {
      F_00d76d30(((undefined1 *)(gen_frame + 0x4)),*piVar1 + (int)param_1);
      F_00d77260(this,((undefined1 *)(gen_frame + 0x4)));
      F_00d77260(this,((undefined1 *)(gen_frame + 0x6)));
      F_00d77260(this,((undefined1 *)(gen_frame + 0x8)));
      param_1 = (int *)((int)param_1 + 0x20);
      iVar2 = iVar2 + 1;
    } while (iVar2 < piVar1[1]);
  }
  return 0;
}

/* ref: FUN_00d77690 */
uint F_00d77690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd77690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00d77050(this,4);
  iVar3 = 0;
  if (0 < param_1[1]) {
    iVar2 = 0;
    do {
      uVar1 = F_00d77280(this,*param_1 + iVar2);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0xc;
    } while (iVar3 < param_1[1]);
  }
  return uVar1;
}

/* ref: FUN_00d776d0 */
uint F_00d776d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd776d0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = F_00d77050((*(undefined * PTR32 *)&gen_args[0]),4);
  uVar1 = (*(uint *)&gen_args[1]);
  iVar4 = 0;
  if (0 < *(int *)((*(uint *)&gen_args[1]) + 4)) {
    iVar3 = 0;
    do {
      (*(uint *)&gen_args[1]) = (uint)gen_fl2bits(*(float *)(*(int *)uVar1 + 4 + iVar3) * REFG(float, 0x1137338));
      uVar2 = F_00d77280((*(undefined * PTR32 *)&gen_args[0]),&(*(uint *)&gen_args[1]));
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0xc;
    } while (iVar4 < *(int *)(uVar1 + 4));
  }
  return uVar2;
}

/* ref: FUN_00d77730 */
unsigned int F_00d77730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd77730u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int * piVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  iVar5 = 0;
  if (0 < (*(int * PTR32 *)&gen_args[1])[1]) {
    iVar4 = 0;
    do {
      iVar3 = *piVar1 + iVar4;
      uVar2 = F_00d76d00(GEN_TOF(*((float *)GEN_TOP(((*(int *)&gen_args[2]) + (uint)*(ushort *)(iVar3 + 8) * 4)))),iVar3);
      (*(int * PTR32 *)&gen_args[1]) = (int *)(uint)uVar2;
      F_00d77260((*(undefined * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)&gen_args[1]));
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar5 < piVar1[1]);
  }
  return 0;
}

/* ref: FUN_00d77790 */
unsigned int F_00d77790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd77790u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_1[1]) {
    do {
      F_00d76d30(((undefined1 *)(gen_frame + 0x4)),(uint)*(ushort *)(*param_1 + iVar1 * 4) * 0x10 + param_2);
      F_00d77260(this,((undefined1 *)(gen_frame + 0x4)));
      F_00d77260(this,((undefined1 *)(gen_frame + 0x6)));
      F_00d77260(this,((undefined1 *)(gen_frame + 0x8)));
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_1[1]);
  }
  return 0;
}

/* ref: FUN_00d777f0 */
uint F_00d777f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd777f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x2d0];
  int * piVar1;
  ushort uVar2;
  uint uVar3;
  float * pfVar4;
  int iVar5;
  undefined * pvVar6;
  uint uVar7;
  int iVar8;
  int * _Size;
  float fVar9;
  int iVar10;
  undefined * puVar11;
  undefined4 uVar12;
  
  **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 0;
  **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = 4;
  **((uint * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = (uint)(*(undefined * PTR32 *)&gen_args[2]);
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0xc)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1);
  (*(uint *)(gen_frame + 0x294)) = uVar3;
  uVar3 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[2]) + 0x40)));
  (*(int *)(gen_frame + 0x24c)) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[2]) + 0x1c)));
  (*(undefined4 *)(gen_frame + 0x260)) = 0;
  (*(int *)(gen_frame + 0x264)) = 0;
  (*(uint *)(gen_frame + 0x268)) = 0x80000000;
  (*(undefined4 *)(gen_frame + 0x250)) = 0;
  (*(int *)(gen_frame + 0x254)) = 0;
  (*(uint *)(gen_frame + 0x258)) = 0x80000000;
  (*(undefined4 *)(gen_frame + 0x284)) = 0;
  (*(int *)(gen_frame + 0x288)) = 0;
  (*(uint *)(gen_frame + 0x28c)) = 0x80000000;
  (*(undefined4 *)(gen_frame + 0x29c)) = 0;
  (*(int *)(gen_frame + 0x2a0)) = 0;
  (*(uint *)(gen_frame + 0x2a4)) = 0x80000000;
  (*(undefined4 *)(gen_frame + 0x278)) = 0;
  (*(int *)(gen_frame + 0x27c)) = 0;
  (*(uint *)(gen_frame + 0x280)) = 0x80000000;
  (*(undefined4 *)(gen_frame + 0x2a8)) = 0;
  (*(int *)(gen_frame + 0x2ac)) = 0;
  (*(uint *)(gen_frame + 0x2b0)) = 0x80000000;
  iVar5 = piVar1[4];
  (*(uint *)(gen_frame + 0x298)) = uVar3;
  (*(undefined4 *)(gen_frame + 0x200)) = 0;
  (*(undefined4 *)(gen_frame + 0x204)) = 0;
  (*(undefined4 *)(gen_frame + 0x208)) = 0x80000000;
  (*(undefined4 *)(gen_frame + 0x234)) = 0;
  (*(undefined4 *)(gen_frame + 0x238)) = 0;
  (*(undefined4 *)(gen_frame + 0x23c)) = 0x80000000;
  if (iVar5 * 0xc == 0) {
    (*(float * PTR32 *)(gen_frame + 0x2b4)) = (float *)0x0;
LAB_00d778e9: ;
    (*(int *)(gen_frame + 0x274)) = ((int)0x80000000);
  }
  else {
    (*(int *)(gen_frame + 0x240)) = iVar5 * 0x60;
    pfVar4 = ((float *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x240)))));
    (*(float * PTR32 *)(gen_frame + 0x2b4)) = pfVar4;
    iVar5 = (int)((*(int *)(gen_frame + 0x240)) + ((*(int *)(gen_frame + 0x240)) >> 0x1f & 7U)) >> 3;
    (*(int *)(gen_frame + 0x274)) = iVar5;
    if (iVar5 == 0) goto LAB_00d778e9;
  }
  if (piVar1[5] == 0) {
    (*(uint *)(gen_frame + 0x26c)) = 0;
LAB_00d77940: ;
    (*(int *)(gen_frame + 0x270)) = ((int)0x80000000);
  }
  else {
    (*(int *)(gen_frame + 0x244)) = piVar1[5] * 8;
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x244)));
    (*(uint *)(gen_frame + 0x26c)) = uVar3;
    iVar5 = (int)((*(int *)(gen_frame + 0x244)) + ((*(int *)(gen_frame + 0x244)) >> 0x1f & 7U)) >> 3;
    if (iVar5 == 0) goto LAB_00d77940;
    (*(int *)(gen_frame + 0x270)) = iVar5;
  }
  (*(uint *)(gen_frame + 0x25c)) = piVar1[0xd];
  iVar5 = piVar1[4] * 0xc;
  (*(undefined4 *)(gen_frame + 0x248)) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[2]) + 0x24)));
  if (0 < iVar5) {
    (*(float * PTR32 *)(gen_frame + 0x2b8)) = (*(float * PTR32 *)(gen_frame + 0x2b4));
    (*(int *)(gen_frame + 0x2bc)) = iVar5;
    (*(undefined * PTR32 *)&gen_args[2]) = (undefined *)piVar1[10];
    do {
      F_00d76d50((*(float * PTR32 *)(gen_frame + 0x2b8)),(*(undefined * PTR32 *)&gen_args[2]),iVar5,(*(uint *)(gen_frame + 0x294)));
      (*(undefined * PTR32 *)&gen_args[2]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[2]) + 4)));
      (*(float * PTR32 *)(gen_frame + 0x2b8)) = (*(float * PTR32 *)(gen_frame + 0x2b8)) + 2;
      iVar10 = (*(int *)(gen_frame + 0x2bc)) + -1;
      (*(int *)(gen_frame + 0x2bc)) = iVar10;
    } while (iVar10 != 0);
  }
  if (0 < piVar1[5]) {
    (*(undefined * PTR32 *)&gen_args[2]) = (undefined *)(*(uint *)(gen_frame + 0x26c));
    (*(int *)(gen_frame + 0x2bc)) = piVar1[5];
    uVar3 = (*(uint *)(gen_frame + 0x25c));
    do {
      F_00d76d50((*(undefined * PTR32 *)&gen_args[2]),uVar3,piVar1[5],(*(uint *)(gen_frame + 0x294)));
      (*(undefined * PTR32 *)&gen_args[2]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[2]) + 8)));
      uVar3 = uVar3 + 4;
      iVar5 = (*(int *)(gen_frame + 0x2bc)) + -1;
      (*(int *)(gen_frame + 0x2bc)) = iVar5;
    } while (iVar5 != 0);
  }
  uVar3 = 0;
  (*(uint *)(gen_frame + 0x25c)) = 0;
  if (0 < piVar1[4]) {
    (*(undefined * PTR32 *)&gen_args[2]) = (undefined *)0x0;
    do {
      uVar7 = (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x10))) + uVar3 * 2)));
      iVar5 = 0;
      (*(float * PTR32 *)(gen_frame + 0x2b8)) = ((float *)GEN_TOP((uVar3 * 0x10 + *(*(int * PTR32 *)&gen_args[3]))));
      (*(int * PTR32 *)(gen_frame + 0x290)) = (int *)uVar7;
      (*(int *)(gen_frame + 0x2bc)) = uVar7 * 0xc;
      do {
        F_00d770b0((int)(*(undefined * PTR32 *)&gen_args[2]) + iVar5,iVar5 + (*(int *)(gen_frame + 0x2bc)),(*(float * PTR32 *)(gen_frame + 0x2b4)),(*(undefined4 *)(gen_frame + 0x248)),(*(float * PTR32 *)(gen_frame + 0x2b8))[1],&(*(undefined4 *)(gen_frame + 0x260)),
                     &(*(undefined4 *)(gen_frame + 0x29c)));
        iVar5 = iVar5 + 1;
      } while ((ushort)iVar5 < 3);
      iVar5 = 8;
      do {
        F_00d770b0((int)(*(undefined * PTR32 *)&gen_args[2]) + iVar5,iVar5 + (*(int *)(gen_frame + 0x2bc)),(*(float * PTR32 *)(gen_frame + 0x2b4)),(*(undefined4 *)(gen_frame + 0x248)),(*(float * PTR32 *)(gen_frame + 0x2b8))[2],&(*(undefined4 *)(gen_frame + 0x260)),
                     &(*(undefined4 *)(gen_frame + 0x29c)));
        uVar7 = (*(uint *)(gen_frame + 0x25c));
        iVar5 = iVar5 + 1;
      } while ((ushort)iVar5 < 0xb);
      F_00d772a0((*(uint *)(gen_frame + 0x25c)),(*(int * PTR32 *)(gen_frame + 0x290)),(*(float * PTR32 *)(gen_frame + 0x2b4)),(*(undefined4 *)(gen_frame + 0x248)),*(*(float * PTR32 *)(gen_frame + 0x2b8)),&(*(undefined4 *)(gen_frame + 0x250)),&(*(undefined4 *)(gen_frame + 0x278)));
      (*(undefined * PTR32 *)&gen_args[2]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[2]) + 0xc)));
      uVar3 = uVar7 + 1 & 0xffff;
      (*(uint *)(gen_frame + 0x25c)) = uVar7 + 1;
    } while ((int)uVar3 < piVar1[4]);
  }
  uVar3 = 0;
  if (0 < piVar1[5]) {
    uVar7 = 0;
    do {
      F_00d770b0(uVar3,(uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x1c))) + uVar7 * 2))),(*(uint *)(gen_frame + 0x26c)),0,GEN_TOF(*((float *)GEN_TOP((uVar7 * 0x10 + 0xc + *(*(int * PTR32 *)&gen_args[4]))))),&(*(undefined4 *)(gen_frame + 0x284)),&(*(undefined4 *)(gen_frame + 0x2a8)));
      uVar3 = uVar3 + 1;
      uVar7 = uVar3 & 0xffff;
    } while ((int)uVar7 < piVar1[5]);
  }
  if (-1 < (*(int *)(gen_frame + 0x270))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x26c)),(*(int *)(gen_frame + 0x270)) * 8);
  }
  if (-1 < (*(int *)(gen_frame + 0x274))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(float * PTR32 *)(gen_frame + 0x2b4)),(*(int *)(gen_frame + 0x274)) * 8);
  }
  _Size = (int *)((*(uint *)(gen_frame + 0x298)) + (*(int *)(gen_frame + 0x24c)));
  (*(int * PTR32 *)(gen_frame + 0x290)) = _Size;
  if (_Size == (int *)0x0) {
    (*(undefined * PTR32 *)&gen_args[2]) = (undefined *)0x0;
  }
  else {
    (*(int * PTR32 *)&gen_args[3]) = _Size;
    (*(undefined * PTR32 *)&gen_args[2]) = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int * PTR32 *)&gen_args[3]))));
    if ((*(int * PTR32 *)&gen_args[3]) != (int *)0x0) {
      (*(int * PTR32 *)&gen_args[4]) = (*(int * PTR32 *)&gen_args[3]);
      goto LAB_00d77bb3;
    }
  }
  (*(int * PTR32 *)&gen_args[4]) = (int *)0x80000000;
LAB_00d77bb3: ;
  (*(undefined * PTR32 *)(gen_frame + 0x2c0)) = (*(undefined * PTR32 *)&gen_args[2]);
  (*(int * PTR32 *)(gen_frame + 0x2c4)) = _Size;
  (*(int * PTR32 *)(gen_frame + 0x2c8)) = (*(int * PTR32 *)&gen_args[4]);
  if (0 < (int)_Size) {
    F_00c48350((*(undefined * PTR32 *)&gen_args[2]),0,(gen_size32)_Size);
  }
  (*(int * PTR32 *)&gen_args[3]) = (int *)0x0;
  if (0 < *((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x14)))) {
    do {
      *((undefined1 *)GEN_TOP(((int)*((short *)GEN_TOP((*((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x10))) + (int)(*(int * PTR32 *)&gen_args[3]) * 2))) + (int)(*(undefined * PTR32 *)&gen_args[2])))) = 0xff;
      (*(int * PTR32 *)&gen_args[3]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[3]) + 1)));
    } while ((int)(*(int * PTR32 *)&gen_args[3]) < *((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x14))));
  }
  iVar5 = 0;
  if (0 < *((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x20)))) {
    do {
      iVar10 = iVar5 * 2;
      iVar5 = iVar5 + 1;
      *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[2]) + (*(int *)(gen_frame + 0x24c)) + *((short *)GEN_TOP((*((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x1c))) + iVar10))))))
           = 0xff;
      _Size = (*(int * PTR32 *)(gen_frame + 0x290));
    } while (iVar5 < *((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x20))));
  }
  (*(undefined2 *)(gen_frame + 0x210)) = (undefined2)(*(uint *)(gen_frame + 0x298));
  (*(undefined2 *)(gen_frame + 0x20e)) = (undefined2)(*(int *)(gen_frame + 0x24c));
  (*(undefined2 *)(gen_frame + 0x212)) = (undefined2)(*(uint *)(gen_frame + 0x294));
  (*(undefined2 *)(gen_frame + 0x21a)) = (undefined2)(*(int *)(gen_frame + 0x254));
  (*(undefined2 *)(gen_frame + 0x21c)) = 0;
  (*(undefined2 *)(gen_frame + 0x218)) = (undefined2)(*(int *)(gen_frame + 0x264));
  (*(undefined2 *)(gen_frame + 0x220)) = (undefined2)(*(int *)(gen_frame + 0x2a0));
  (*(undefined2 *)(gen_frame + 0x222)) = (undefined2)(*(int *)(gen_frame + 0x27c));
  (*(undefined2 *)(gen_frame + 0x21e)) = (undefined2)(*(int *)(gen_frame + 0x288));
  (*(int * PTR32 *)&gen_args[1]) = _Size + 10;
  (*(int *)(gen_frame + 0x214)) = piVar1[3];
  (*(undefined2 *)(gen_frame + 0x224)) = 0;
  (*(undefined2 *)(gen_frame + 0x226)) = (undefined2)(*(int *)(gen_frame + 0x2ac));
  F_00d76ce0(&(*(int * PTR32 *)&gen_args[1]),2);
  iVar5 = (*(int *)(gen_frame + 0x254));
  (*(undefined2 *)(gen_frame + 0x22a)) = (short)(*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + ((*(int *)(gen_frame + 0x264)) + (*(int *)(gen_frame + 0x288)) + (*(int *)(gen_frame + 0x254))) * 2)));
  F_00d76ce0(&(*(int * PTR32 *)&gen_args[1]),2);
  (*(undefined2 *)(gen_frame + 0x22c)) = (short)(*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + ((*(int *)(gen_frame + 0x2ac)) + (*(int *)(gen_frame + 0x27c)) + (*(int *)(gen_frame + 0x2a0))) * 2)));
  F_00d76ce0(&(*(int * PTR32 *)&gen_args[1]),0x10);
  (*(undefined2 *)(gen_frame + 0x22e)) = (short)(*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + (*(int *)(gen_frame + 0x264)) * 4 + iVar5 * 6)));
  F_00d76ce0(&(*(int * PTR32 *)&gen_args[1]),0x10);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + (*(int *)(gen_frame + 0x288)) * 4)));
  F_00d76ce0(&(*(int * PTR32 *)&gen_args[1]),0x10);
  iVar5 = (*(int *)(gen_frame + 0x2a0)) * 4;
  (*(undefined2 *)(gen_frame + 0x230)) = (short)(*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + iVar5)));
  F_00d76ce0(&(*(int * PTR32 *)&gen_args[1]),0x10);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + (*(int *)(gen_frame + 0x2ac)) * 4)));
  F_00d76ce0(&(*(int * PTR32 *)&gen_args[1]),0x10);
  (*(undefined2 *)(gen_frame + 0x232)) = (short)(*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + iVar5)));
  F_00d76ce0(&(*(int * PTR32 *)&gen_args[1]),0x10);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + (*(int *)(gen_frame + 0x2ac)) * 4)));
  F_00d76ce0(&(*(int * PTR32 *)&gen_args[1]),0x10);
  uVar3 = (*(uint *)(gen_frame + 0x294));
  (*(undefined2 *)(gen_frame + 0x20c)) = (short)(*(int * PTR32 *)&gen_args[1]);
  uVar2 = ((short)(*(int *)(gen_frame + 0x2a0)) + (short)(*(int *)(gen_frame + 0x27c)) * 3 + (short)(*(int *)(gen_frame + 0x2ac))) * 2 + 0xfU & 0xfff0;
  (*(ushort *)(gen_frame + 0x228)) = uVar2;
  iVar5 = (uint)uVar2 * ((*(uint *)(gen_frame + 0x294)) & 0xffff) + ((uint)(*(int * PTR32 *)&gen_args[1]) & 0xffff);
  uVar7 = *((uint *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 8))) & 0x3fffffff;
  if ((int)uVar7 < iVar5) {
    iVar10 = uVar7 * 2;
    if (iVar5 < iVar10) {
      iVar5 = iVar10;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),*(int *)(*(undefined * PTR32 *)&gen_args[0]),iVar5,1);
  }
  F_00d771d0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined2 *)(gen_frame + 0x20c)),0x28);
  F_00d76ff0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined * PTR32 *)(gen_frame + 0x2c0)));
  F_00d774d0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x260)));
  F_00d774d0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x200)));
  F_00d77510((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x250)));
  F_00d774d0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x284)));
  F_00d77560((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x29c)));
  F_00d77560((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x234)));
  F_00d775b0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x278)));
  F_00d77560((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x2a8)));
  F_00d77050((*(undefined * PTR32 *)&gen_args[0]),0x10);
  F_00d775f0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x260)));
  F_00d775f0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x200)));
  F_00d77630((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x250)));
  F_00d77050((*(undefined * PTR32 *)&gen_args[0]),0x10);
  F_00d775f0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x284)));
  F_00d77050((*(undefined * PTR32 *)&gen_args[0]),0x10);
  F_00d77690((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x29c)));
  F_00d77690((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x234)));
  F_00d77050((*(undefined * PTR32 *)&gen_args[0]),0x10);
  F_00d77690((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x2a8)));
  F_00d77050((*(undefined * PTR32 *)&gen_args[0]),0x10);
  F_00d776d0((*(undefined * PTR32 *)&gen_args[0]),(uint)&(*(undefined4 *)(gen_frame + 0x29c)));
  F_00d776d0((*(undefined * PTR32 *)&gen_args[0]),(uint)&(*(undefined4 *)(gen_frame + 0x234)));
  F_00d77050((*(undefined * PTR32 *)&gen_args[0]),0x10);
  F_00d776d0((*(undefined * PTR32 *)&gen_args[0]),(uint)&(*(undefined4 *)(gen_frame + 0x2a8)));
  F_00d77050((*(undefined * PTR32 *)&gen_args[0]),0x10);
  if (uVar3 != 0) {
    uVar3 = piVar1[10];
    (*(int *)(gen_frame + 0x274)) = piVar1[4] * 0x30;
    (*(int * PTR32 *)(gen_frame + 0x290)) = (int *)(piVar1[4] * 0x30);
    (*(int * PTR32 *)&gen_args[3]) = (int *)piVar1[0xd];
    (*(int *)(gen_frame + 0x270)) = piVar1[5] * 4;
    (*(uint *)(gen_frame + 0x298)) = (*(uint *)(gen_frame + 0x294));
    (*(int * PTR32 *)&gen_args[1]) = (int *)uVar3;
    do {
      F_00d77050((*(undefined * PTR32 *)&gen_args[0]),0x10);
      F_00d77730((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x29c)),uVar3);
      F_00d77730((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x234)),uVar3);
      F_00d77790((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x278)),(*(int * PTR32 *)&gen_args[1]));
      F_00d77730((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x2a8)),(*(int * PTR32 *)&gen_args[3]));
      F_00d77050((*(undefined * PTR32 *)&gen_args[0]),0x10);
      uVar3 = uVar3 + (int)(*(int * PTR32 *)(gen_frame + 0x290));
      (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + (*(int *)(gen_frame + 0x274)))));
      (*(int * PTR32 *)&gen_args[3]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[3]) + (*(int *)(gen_frame + 0x270)))));
      uVar7 = (*(uint *)(gen_frame + 0x298)) - 1;
      (*(uint *)(gen_frame + 0x298)) = uVar7;
    } while (uVar7 != 0);
  }
  F_00d77050((*(undefined * PTR32 *)&gen_args[0]),0x10);
  F_00d77050((*(undefined * PTR32 *)&gen_args[0]),0x40);
  iVar5 = ((piVar1[0xb] + 1) * 0x10 + piVar1[0xe]) * 4;
  iVar8 = *((int *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x3c;
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0x1c))))(REFG(int * PTR32, 0x15dff78),0x1e663ab1,"Compression");
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),((undefined1 *)(gen_frame + 0x0)),0x200);
  iVar10 = iVar5;
  pvVar6 = (undefined *)F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),"Original Size ");
  F_00d9ff40(pvVar6,iVar10);
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78),0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             "Animation\\Quantized\\hkaQuantizedAnimationCtor.cpp",0x18b);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)));
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),((undefined1 *)(gen_frame + 0x0)),0x200);
  iVar10 = iVar8;
  pvVar6 = (undefined *)F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0))," Compressed Size ");
  F_00d9ff40(pvVar6,iVar10);
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78),0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             "Animation\\Quantized\\hkaQuantizedAnimationCtor.cpp",0x18c);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)));
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),((undefined1 *)(gen_frame + 0x0)),0x200);
  puVar11 = &REFG(undefined, 0x1137a30);
  fVar9 = (float)iVar5 / (float)iVar8;
  uVar3 = F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),"Compression Ratio: ");
  pvVar6 = (undefined *)F_00d9ffe0(uVar3,fVar9);
  F_00d9fe80(pvVar6,puVar11);
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78),0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             "Animation\\Quantized\\hkaQuantizedAnimationCtor.cpp",0x18d);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)));
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),((undefined1 *)(gen_frame + 0x0)),0x200);
  iVar5 = (piVar1[0xb] * 3 - (*(int *)(gen_frame + 0x264))) - (*(int *)(gen_frame + 0x2a0));
  pvVar6 = (undefined *)F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),"Reference Translations: ");
  F_00d9ff40(pvVar6,iVar5);
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78),0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             "Animation\\Quantized\\hkaQuantizedAnimationCtor.cpp",399);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)));
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),((undefined1 *)(gen_frame + 0x0)),0x200);
  iVar5 = (piVar1[0xb] * 3 - (*(int *)(gen_frame + 0x27c))) - (*(int *)(gen_frame + 0x254));
  pvVar6 = (undefined *)F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),"Reference Rotations:    ");
  F_00d9ff40(pvVar6,iVar5);
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78),0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             "Animation\\Quantized\\hkaQuantizedAnimationCtor.cpp",400);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)));
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),((undefined1 *)(gen_frame + 0x0)),0x200);
  iVar5 = piVar1[0xb] * 3;
  pvVar6 = (undefined *)F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),"Reference Scales:       ");
  F_00d9ff40(pvVar6,iVar5);
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78),0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             "Animation\\Quantized\\hkaQuantizedAnimationCtor.cpp",0x191);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)));
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),((undefined1 *)(gen_frame + 0x0)),0x200);
  iVar5 = (piVar1[0xe] - (*(int *)(gen_frame + 0x2ac))) - (*(int *)(gen_frame + 0x288));
  pvVar6 = (undefined *)F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),"Reference Floats:       ");
  F_00d9ff40(pvVar6,iVar5);
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78),0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             "Animation\\Quantized\\hkaQuantizedAnimationCtor.cpp",0x192);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)));
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),((undefined1 *)(gen_frame + 0x0)),0x200);
  iVar5 = (*(int *)(gen_frame + 0x264));
  pvVar6 = (undefined *)F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),"Static Translations:   ");
  F_00d9ff40(pvVar6,iVar5);
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78),0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             "Animation\\Quantized\\hkaQuantizedAnimationCtor.cpp",0x194);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)));
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),((undefined1 *)(gen_frame + 0x0)),0x200);
  iVar5 = (*(int *)(gen_frame + 0x254));
  pvVar6 = (undefined *)F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),"Static Rotations:      ");
  F_00d9ff40(pvVar6,iVar5);
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78),0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             "Animation\\Quantized\\hkaQuantizedAnimationCtor.cpp",0x195);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)));
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),((undefined1 *)(gen_frame + 0x0)),0x200);
  uVar12 = 0;
  pvVar6 = (undefined *)F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),"Static Scales:         ");
  F_00d9ff40(pvVar6,uVar12);
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78),0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             "Animation\\Quantized\\hkaQuantizedAnimationCtor.cpp",0x196);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)));
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),((undefined1 *)(gen_frame + 0x0)),0x200);
  iVar5 = (*(int *)(gen_frame + 0x288));
  pvVar6 = (undefined *)F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),"Static Floats:         ");
  F_00d9ff40(pvVar6,iVar5);
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78),0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             "Animation\\Quantized\\hkaQuantizedAnimationCtor.cpp",0x197);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)));
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),((undefined1 *)(gen_frame + 0x0)),0x200);
  iVar5 = (*(int *)(gen_frame + 0x2a0));
  pvVar6 = (undefined *)F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),"Dynamic Translations:  ");
  F_00d9ff40(pvVar6,iVar5);
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78),0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             "Animation\\Quantized\\hkaQuantizedAnimationCtor.cpp",0x199);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)));
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),((undefined1 *)(gen_frame + 0x0)),0x200);
  iVar5 = (*(int *)(gen_frame + 0x27c));
  pvVar6 = (undefined *)F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),"Dynamic Rotations:     ");
  F_00d9ff40(pvVar6,iVar5);
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78),0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             "Animation\\Quantized\\hkaQuantizedAnimationCtor.cpp",0x19a);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)));
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),((undefined1 *)(gen_frame + 0x0)),0x200);
  uVar12 = 0;
  pvVar6 = (undefined *)F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),"Dynamic Scales:        ");
  F_00d9ff40(pvVar6,uVar12);
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78),0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             "Animation\\Quantized\\hkaQuantizedAnimationCtor.cpp",0x19b);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)));
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),((undefined1 *)(gen_frame + 0x0)),0x200);
  iVar5 = (*(int *)(gen_frame + 0x2ac));
  pvVar6 = (undefined *)F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),"Dynamic Floats:        ");
  F_00d9ff40(pvVar6,iVar5);
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78),0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             "Animation\\Quantized\\hkaQuantizedAnimationCtor.cpp",0x19c);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)));
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0x20))))(REFG(int * PTR32, 0x15dff78));
  if (((uint)(*(int * PTR32 *)&gen_args[4]) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),(*(undefined * PTR32 *)&gen_args[2]),(uint)(*(int * PTR32 *)&gen_args[4]) & 0x3fffffff);
  }
  (*(int *)(gen_frame + 0x2ac)) = 0;
  if (((*(uint *)(gen_frame + 0x2b0)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 *)(gen_frame + 0x2a8)),((*(uint *)(gen_frame + 0x2b0)) & 0x3fffffff) * 0xc);
  }
  (*(undefined4 *)(gen_frame + 0x2a8)) = 0;
  (*(uint *)(gen_frame + 0x2b0)) = 0x80000000;
  (*(int *)(gen_frame + 0x27c)) = 0;
  if (((*(uint *)(gen_frame + 0x280)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 *)(gen_frame + 0x278)),(*(uint *)(gen_frame + 0x280)) * 4);
  }
  (*(undefined4 *)(gen_frame + 0x278)) = 0;
  (*(uint *)(gen_frame + 0x280)) = 0x80000000;
  (*(int *)(gen_frame + 0x2a0)) = 0;
  if (((*(uint *)(gen_frame + 0x2a4)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 *)(gen_frame + 0x29c)),((*(uint *)(gen_frame + 0x2a4)) & 0x3fffffff) * 0xc);
  }
  (*(undefined4 *)(gen_frame + 0x29c)) = 0;
  (*(uint *)(gen_frame + 0x2a4)) = 0x80000000;
  (*(int *)(gen_frame + 0x288)) = 0;
  if (((*(uint *)(gen_frame + 0x28c)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 *)(gen_frame + 0x284)),(*(uint *)(gen_frame + 0x28c)) * 8);
  }
  (*(undefined4 *)(gen_frame + 0x284)) = 0;
  (*(uint *)(gen_frame + 0x28c)) = 0x80000000;
  (*(int *)(gen_frame + 0x254)) = 0;
  if (((*(uint *)(gen_frame + 0x258)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 *)(gen_frame + 0x250)),(*(uint *)(gen_frame + 0x258)) << 5);
  }
  (*(uint *)(gen_frame + 0x258)) = 0x80000000;
  (*(undefined4 *)(gen_frame + 0x250)) = 0;
  (*(int *)(gen_frame + 0x264)) = 0;
  uVar3 = (*(uint *)(gen_frame + 0x268));
  if (((*(uint *)(gen_frame + 0x268)) & 0x80000000) == 0) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 *)(gen_frame + 0x260)),(*(uint *)(gen_frame + 0x268)) * 8);
  }
  return uVar3;
}

/* ref: FUN_00d78690 */
uint F_00d78690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd78690u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined8 * param_3 = (undefined8 *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined8 * puVar1;
  int iVar2;
  int iVar3;
  
  F_00d739c0(this,*(undefined4 *)(param_1 + 0xc));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x1135b5c));
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0x80000000;
  iVar3 = *(int *)(param_1 + 0x14);
  if (iVar3 == 0) {
    (*(undefined8 * PTR32 *)(gen_frame + 0x30)) = (undefined8 *)0x0;
LAB_00d786fb: ;
    (*(int *)(gen_frame + 0x34)) = ((int)0x80000000);
  }
  else {
    (*(undefined8 * PTR32 *)(gen_frame + 0x38)) = (undefined8 *)(iVar3 << 4);
    puVar1 = ((undefined8 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined8 * PTR32 *)(gen_frame + 0x38)))))
    ;
    iVar2 = (int)((int)(*(undefined8 * PTR32 *)(gen_frame + 0x38)) + ((int)((int)(uintptr_t)(*(undefined8 * PTR32 *)(gen_frame + 0x38))) >> 0x1f & 0xfU)) >> 4;
    (*(undefined8 * PTR32 *)(gen_frame + 0x30)) = puVar1;
    (*(int *)(gen_frame + 0x34)) = iVar2;
    if (iVar2 == 0) goto LAB_00d786fb;
  }
  (*(undefined8 * PTR32 *)(gen_frame + 0x14)) = (*(undefined8 * PTR32 *)(gen_frame + 0x30));
  (*(int *)(gen_frame + 0x18)) = iVar3;
  (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x34));
  puVar1 = (*(undefined8 * PTR32 *)(gen_frame + 0x30));
  if (0 < iVar3) {
    do {
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = *param_3;
        puVar1[1] = param_3[1];
      }
      puVar1 = puVar1 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = *(int *)(param_1 + 0x20);
  if (iVar3 == 0) {
    (*(undefined8 * PTR32 *)(gen_frame + 0x38)) = (undefined8 *)0x0;
  }
  else {
    (*(int *)(gen_frame + 0x2c)) = iVar3 << 4;
    puVar1 = ((undefined8 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x2c)))));
    iVar2 = (int)((*(int *)(gen_frame + 0x2c)) + ((*(int *)(gen_frame + 0x2c)) >> 0x1f & 0xfU)) >> 4;
    (*(undefined8 * PTR32 *)(gen_frame + 0x38)) = puVar1;
    if (iVar2 != 0) goto LAB_00d78776;
  }
  iVar2 = ((int)0x80000000);
LAB_00d78776: ;
  (*(undefined8 * PTR32 *)(gen_frame + 0x20)) = (*(undefined8 * PTR32 *)(gen_frame + 0x38));
  (*(int *)(gen_frame + 0x24)) = iVar3;
  (*(int *)(gen_frame + 0x28)) = iVar2;
  puVar1 = (*(undefined8 * PTR32 *)(gen_frame + 0x38));
  if (0 < iVar3) {
    do {
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = *param_3;
        puVar1[1] = param_3[1];
      }
      puVar1 = puVar1 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  F_00d76bb0(((undefined1 *)(gen_frame + 0x4)),this);
  F_00d777f0(((undefined1 *)(gen_frame + 0x4)),param_1,param_2,&(*(undefined8 * PTR32 *)(gen_frame + 0x14)),&(*(undefined8 * PTR32 *)(gen_frame + 0x20)));
  if (-1 < iVar2) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined8 * PTR32 *)(gen_frame + 0x38)),iVar2 << 4);
  }
  if (-1 < (*(int *)(gen_frame + 0x34))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined8 * PTR32 *)(gen_frame + 0x30)),(*(int *)(gen_frame + 0x34)) << 4);
  }
  return (uint)this;
}

/* ref: FUN_00d78830 */
uint F_00d78830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd78830u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined8 * puVar1;
  int iVar2;
  int iVar3;
  undefined8 * puVar4;
  int iVar5;
  int iVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0x34)) = this;
  F_00d739c0(this,*(undefined4 *)(param_1 + 0xc));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x1135b5c));
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0x80000000;
  iVar6 = *(int *)(param_1 + 0x14);
  if (iVar6 == 0) {
    (*(undefined8 * PTR32 *)(gen_frame + 0x44)) = (undefined8 *)0x0;
LAB_00d7889e: ;
    (*(int *)(gen_frame + 0x3c)) = ((int)0x80000000);
  }
  else {
    (*(int *)(gen_frame + 0x40)) = iVar6 << 4;
    puVar1 = ((undefined8 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x40)))));
    iVar2 = (int)((*(int *)(gen_frame + 0x40)) + ((*(int *)(gen_frame + 0x40)) >> 0x1f & 0xfU)) >> 4;
    (*(undefined8 * PTR32 *)(gen_frame + 0x44)) = puVar1;
    (*(int *)(gen_frame + 0x3c)) = iVar2;
    if (iVar2 == 0) goto LAB_00d7889e;
  }
  (*(undefined8 * PTR32 *)(gen_frame + 0x1c)) = (*(undefined8 * PTR32 *)(gen_frame + 0x44));
  (*(int *)(gen_frame + 0x20)) = iVar6;
  (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x3c));
  puVar1 = (*(undefined8 * PTR32 *)(gen_frame + 0x44));
  iVar2 = iVar6;
  if (0 < iVar6) {
    do {
      iVar3 = 0;
      if (puVar1 != (undefined8 *)0x0) {
        F_00d76cc0(puVar1);
        iVar3 = ((int)(uint)(puVar1));
      }
      puVar1 = (undefined8 *)(iVar3 + 0x10);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar2 = *(int *)(param_1 + 0x20);
  if (iVar2 == 0) {
    (*(undefined8 * PTR32 *)(gen_frame + 0x48)) = (undefined8 *)0x0;
  }
  else {
    (*(int *)(gen_frame + 0x38)) = iVar2 << 4;
    puVar1 = ((undefined8 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x38)))));
    iVar3 = (int)((*(int *)(gen_frame + 0x38)) + ((*(int *)(gen_frame + 0x38)) >> 0x1f & 0xfU)) >> 4;
    (*(undefined8 * PTR32 *)(gen_frame + 0x48)) = puVar1;
    (*(int *)(gen_frame + 0x40)) = iVar3;
    if (iVar3 != 0) goto LAB_00d7890c;
  }
  (*(int *)(gen_frame + 0x40)) = ((int)0x80000000);
LAB_00d7890c: ;
  (*(undefined8 * PTR32 *)(gen_frame + 0x28)) = (*(undefined8 * PTR32 *)(gen_frame + 0x48));
  (*(int *)(gen_frame + 0x2c)) = iVar2;
  (*(int *)(gen_frame + 0x30)) = (*(int *)(gen_frame + 0x40));
  puVar1 = (*(undefined8 * PTR32 *)(gen_frame + 0x48));
  iVar3 = iVar2;
  if (0 < iVar2) {
    do {
      iVar5 = 0;
      if (puVar1 != (undefined8 *)0x0) {
        F_00d76cc0(puVar1);
        iVar5 = ((int)(uint)(puVar1));
      }
      puVar1 = (undefined8 *)(iVar5 + 0x10);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = 0;
  puVar1 = (*(undefined8 * PTR32 *)(gen_frame + 0x44));
  if (0 < iVar6) {
    do {
      puVar4 = ((undefined8 *)GEN_TOP((*(int *)(param_3[3] + iVar3 * 4) * 0x10 + *param_3)));
      iVar3 = iVar3 + 1;
      *puVar1 = *puVar4;
      puVar1[1] = puVar4[1];
      puVar1 = puVar1 + 2;
      this = (*(undefined * PTR32 *)(gen_frame + 0x34));
    } while (iVar3 < iVar6);
  }
  iVar6 = 0;
  puVar1 = (*(undefined8 * PTR32 *)(gen_frame + 0x48));
  if (0 < iVar2) {
    do {
      puVar4 = ((undefined8 *)GEN_TOP((*(int *)(param_3[6] + iVar6 * 4) * 0x10 + *param_3)));
      iVar6 = iVar6 + 1;
      *puVar1 = *puVar4;
      puVar1[1] = puVar4[1];
      puVar1 = puVar1 + 2;
      this = (*(undefined * PTR32 *)(gen_frame + 0x34));
    } while (iVar6 < iVar2);
  }
  F_00d76bb0(((undefined1 *)(gen_frame + 0xc)),this);
  F_00d777f0(((undefined1 *)(gen_frame + 0xc)),param_1,param_2,&(*(undefined8 * PTR32 *)(gen_frame + 0x1c)),&(*(undefined8 * PTR32 *)(gen_frame + 0x28)));
  if (-1 < (*(int *)(gen_frame + 0x40))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined8 * PTR32 *)(gen_frame + 0x48)),(*(int *)(gen_frame + 0x40)) << 4);
  }
  if (-1 < (*(int *)(gen_frame + 0x3c))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined8 * PTR32 *)(gen_frame + 0x44)),(*(int *)(gen_frame + 0x3c)) << 4);
  }
  return (uint)this;
}

/* ref: FUN_00d78a30 */
uint F_00d78a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xd78a30u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[9];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  gen_args[8] = gen_a8;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  
  F_00d739c0((*(undefined * PTR32 *)&gen_args[0]),*(undefined4 *)((*(int *)&gen_args[1]) + 0xc));
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[19])REFP(0x1135b5c));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) = 0x80000000;
  F_00d76bb0(((undefined1 *)(gen_frame + 0xc)),(*(undefined * PTR32 *)&gen_args[0]));
  F_00d777f0(((undefined1 *)(gen_frame + 0xc)),(*(int *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)&gen_args[3]),&(*(undefined4 *)&gen_args[6]));
  (*(undefined4 *)&gen_args[4]) = 0;
  if (-1 < (*(int *)&gen_args[5])) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 *)&gen_args[3]),(*(int *)&gen_args[5]) << 4);
  }
  (*(undefined4 *)&gen_args[3]) = 0;
  (*(int *)&gen_args[5]) = 0x80000000;
  (*(undefined4 *)&gen_args[7]) = 0;
  if (-1 < (*(int *)&gen_args[8])) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 *)&gen_args[6]),(*(int *)&gen_args[8]) << 4);
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00d78ae0 */
uint F_00d78ae0(unsigned int gen_a0)
{
  GEN_ENTER(0xd78ae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x1135b5c));
  uVar1 = *(uint *)((int)this + 0x30);
  *(undefined4 *)((int)this + 0x2c) = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x28),uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x30) = 0x80000000;
  uVar1 = F_00d3e6d0(this);
  return uVar1;
}

/* ref: FUN_00d78b30 */
uint F_00d78b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd78b30u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00d78b40 */
uint F_00d78b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd78b40u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00d78bb0 */
uint F_00d78bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd78bb0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00d78c00 */
uint F_00d78c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd78c00u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x20 + *in_ecx;
}

/* ref: FUN_00d78c50 */
uint F_00d78c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd78c50u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_00d78cb0 */
uint F_00d78cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd78cb0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00d78cd0 */
uint F_00d78cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd78cd0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00d78cf0 */
uint F_00d78cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd78cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00d78d40 */
uint F_00d78d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd78d40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  return param_3;
}

/* ref: FUN_00d78d60 */
uint F_00d78d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd78d60u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) << 4)));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)&gen_args[1]));
  *piVar1 = (int)((int)(*(int * PTR32 *)&gen_args[1]) + ((int)(*(int * PTR32 *)&gen_args[1]) >> 0x1f & 0xfU)) >> 4;
  return uVar2;
}

/* ref: FUN_00d78da0 */
unsigned int F_00d78da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd78da0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int in_ecx;
  int iVar2;
  int iVar1;
  
  in_ecx = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      iVar1 = 0;
      if (in_ecx != 0) {
        F_00d76cc0(in_ecx);
        iVar1 = ((int)(uint)(in_ecx));
      }
      in_ecx = iVar1 + 0x10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00d78de0 */
uint F_00d78de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd78de0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[1]);
  (*(undefined4 * PTR32 *)&gen_args[1]) = ((undefined4 *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1])));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[1]));
  *puVar1 = (*(undefined4 * PTR32 *)&gen_args[1]);
  return uVar2;
}

/* ref: FUN_00d78e80 */
uint F_00d78e80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd78e80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  return param_3;
}

/* ref: FUN_00d78ea0 */
uint F_00d78ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd78ea0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) * 8)));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)&gen_args[1]));
  *piVar1 = (int)((int)(*(int * PTR32 *)&gen_args[1]) + ((int)(*(int * PTR32 *)&gen_args[1]) >> 0x1f & 7U)) >> 3;
  return uVar2;
}

/* ref: FUN_00d78f00 */
uint F_00d78f00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd78f00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 << 4);
  return uVar1;
}

/* ref: FUN_00d78f20 */
uint F_00d78f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd78f20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00d78f30 */
uint F_00d78f30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd78f30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00d78f50 */
uint F_00d78f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd78f50u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00d78f60 */
uint F_00d78f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd78f60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 << 5);
  return uVar1;
}

/* ref: FUN_00d78f80 */
uint F_00d78f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd78f80u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00d78f90 */
uint F_00d78f90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd78f90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 0xc);
  return uVar1;
}

/* ref: FUN_00d78fb0 */
uint F_00d78fb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd78fb0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00d78fc0 */
uint F_00d78fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd78fc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00d78fe0 */
uint F_00d78fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd78fe0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00d79000 */
uint F_00d79000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd79000u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00d79110 */
uint F_00d79110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd79110u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint in_ecx;
  int iVar1;
  int iVar2;
  
  iVar2 = (*(int *)&gen_args[1]);
  *(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0x80000000;
  if ((*(int *)&gen_args[1]) == 0) {
    in_ecx = 0;
  }
  else {
    (*(int *)&gen_args[1]) = (*(int *)&gen_args[1]) << 4;
    in_ecx = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[1]));
    iVar1 = (int)((*(int *)&gen_args[1]) + ((*(int *)&gen_args[1]) >> 0x1f & 0xfU)) >> 4;
    if (iVar1 != 0) goto LAB_00d79165;
  }
  iVar1 = ((int)0x80000000);
LAB_00d79165: ;
  *(uint *)(*(undefined * PTR32 *)&gen_args[0]) = in_ecx;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = iVar2;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = iVar1;
  if (0 < iVar2) {
    do {
      iVar1 = 0;
      if (in_ecx != 0) {
        F_00d76cc0(in_ecx);
        iVar1 = ((int)(uint)(in_ecx));
      }
      in_ecx = iVar1 + 0x10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00d79190 */
uint F_00d79190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd79190u, gen_a0, gen_a1, gen_a2, 0u);
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
    bVar1 = F_00d95690(param_1,this,iVar3,1);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00d791d0 */
uint F_00d791d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd791d0u, gen_a0, gen_a1, gen_a2, 0u);
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
    bVar1 = F_00d95690(param_1,this,iVar3,1);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_2;
  return uVar2;
}

/* ref: FUN_00d79210 */
uint F_00d79210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd79210u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = (*(int *)&gen_args[1]);
  *(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0x80000000;
  if ((*(int *)&gen_args[1]) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[1]));
    iVar3 = (*(int *)&gen_args[1]);
    if ((*(int *)&gen_args[1]) != 0) goto LAB_00d79255;
  }
  iVar3 = ((int)0x80000000);
LAB_00d79255: ;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = iVar3;
  iVar3 = 0;
  *(uint *)(*(undefined * PTR32 *)&gen_args[0]) = uVar2;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = iVar1;
  if (0 < iVar1) {
    do {
      *(undefined1 *)(iVar3 + uVar2) = *(*(undefined1 * PTR32 *)&gen_args[2]);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00d79280 */
uint F_00d79280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd79280u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = (*(int *)&gen_args[1]);
  *(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0x80000000;
  if ((*(int *)&gen_args[1]) == 0) {
    uVar2 = 0;
  }
  else {
    (*(int *)&gen_args[1]) = (*(int *)&gen_args[1]) * 8;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[1]));
    iVar3 = (int)((*(int *)&gen_args[1]) + ((*(int *)&gen_args[1]) >> 0x1f & 7U)) >> 3;
    if (iVar3 != 0) goto LAB_00d792d8;
  }
  iVar3 = ((int)0x80000000);
LAB_00d792d8: ;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = iVar1;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = iVar3;
  *(uint *)(*(undefined * PTR32 *)&gen_args[0]) = uVar2;
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00d792f0 */
unsigned int F_00d792f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd792f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined8 * param_3 = (undefined8 *)(uintptr_t)gen_a2;
  undefined8 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = *param_3;
        puVar1[1] = param_3[1];
      }
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00d79320 */
unsigned int F_00d79320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd79320u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *param_3;
        puVar1[1] = param_3[1];
      }
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00d79350 */
unsigned int F_00d79350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd79350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined8 * param_3 = (undefined8 *)(uintptr_t)gen_a2;
  undefined8 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = *param_3;
        puVar1[1] = param_3[1];
        puVar1[2] = param_3[2];
        puVar1[3] = param_3[3];
      }
      puVar1 = puVar1 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00d793a0 */
unsigned int F_00d793a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd793a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined8 * param_3 = (undefined8 *)(uintptr_t)gen_a2;
  undefined8 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = *param_3;
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_3 + 1);
      }
      puVar1 = (undefined8 *)((int)puVar1 + 0xc);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00d793d0 */
unsigned int F_00d793d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd793d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *param_3;
      }
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00d79460 */
uint F_00d79460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd79460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,1);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00d794a0 */
uint F_00d794a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd794a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,1);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_1;
  return uVar2;
}

/* ref: FUN_00d794e0 */
uint F_00d794e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd794e0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined8 * puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (*(int *)&gen_args[1]);
  *(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0x80000000;
  if ((*(int *)&gen_args[1]) == 0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    (*(int *)&gen_args[1]) = (*(int *)&gen_args[1]) << 4;
    puVar1 = ((undefined8 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[1]))))
    ;
    iVar2 = (int)((*(int *)&gen_args[1]) + ((*(int *)&gen_args[1]) >> 0x1f & 0xfU)) >> 4;
    if (iVar2 != 0) goto LAB_00d79535;
  }
  iVar2 = ((int)0x80000000);
LAB_00d79535: ;
  *(undefined8 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = puVar1;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = iVar3;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = iVar2;
  if (0 < iVar3) {
    do {
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = *(*(undefined8 * PTR32 *)&gen_args[2]);
        puVar1[1] = (*(undefined8 * PTR32 *)&gen_args[2])[1];
      }
      puVar1 = puVar1 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00d79570 */
uint F_00d79570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd79570u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 8)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00d795c0 */
uint F_00d795c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd795c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a2;
  undefined8 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,0x20);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*(int *)((int)this + 4) * 0x20 + *(int *)this)));
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
    puVar1[3] = param_2[3];
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00d79620 */
uint F_00d79620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd79620u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a2;
  undefined8 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,0xc);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 0xc)));
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_2;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 1);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00d79670 */
uint F_00d79670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd79670u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 4)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00d796b0 */
uint F_00d796b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd796b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d796f0 */
uint F_00d796f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd796f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d79730 */
uint F_00d79730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd79730u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d79770 */
uint F_00d79770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd79770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d797b0 */
uint F_00d797b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd797b0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d797f0 */
uint F_00d797f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd797f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d79830 */
uint F_00d79830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd79830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 8)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00d79880 */
uint F_00d79880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd79880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a1;
  undefined8 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,0x20);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*(int *)((int)this + 4) * 0x20 + *(int *)this)));
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    puVar1[2] = param_1[2];
    puVar1[3] = param_1[3];
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00d798e0 */
uint F_00d798e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd798e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a1;
  undefined8 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,0xc);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 0xc)));
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_1;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 1);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00d79930 */
uint F_00d79930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd79930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 4)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00d79970 */
uint F_00d79970(unsigned int gen_a0)
{
  GEN_ENTER(0xd79970u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d799b0 */
uint F_00d799b0(unsigned int gen_a0)
{
  GEN_ENTER(0xd799b0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d799f0 */
uint F_00d799f0(unsigned int gen_a0)
{
  GEN_ENTER(0xd799f0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d79a30 */
uint F_00d79a30(unsigned int gen_a0)
{
  GEN_ENTER(0xd79a30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d79a70 */
uint F_00d79a70(unsigned int gen_a0)
{
  GEN_ENTER(0xd79a70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d79ab0 */
uint F_00d79ab0(unsigned int gen_a0)
{
  GEN_ENTER(0xd79ab0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d79af0 */
uint F_00d79af0(unsigned int gen_a0)
{
  GEN_ENTER(0xd79af0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d79b30 */
uint F_00d79b30(unsigned int gen_a0)
{
  GEN_ENTER(0xd79b30u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d79b70 */
uint F_00d79b70(unsigned int gen_a0)
{
  GEN_ENTER(0xd79b70u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d79bb0 */
uint F_00d79bb0(unsigned int gen_a0)
{
  GEN_ENTER(0xd79bb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d79bf0 */
uint F_00d79bf0(unsigned int gen_a0)
{
  GEN_ENTER(0xd79bf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d79c30 */
uint F_00d79c30(unsigned int gen_a0)
{
  GEN_ENTER(0xd79c30u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d79c70 */
uint F_00d79c70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd79c70u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 - param_1;
}

/* ref: FUN_00d79c80 */
uint F_00d79c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd79c80u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 - param_1;
}

/* ref: FUN_00d79c90 */
uint F_00d79c90(unsigned int gen_a0)
{
  GEN_ENTER(0xd79c90u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = param_1 - 1U | param_1 - 1U >> 0x10;
  uVar1 = uVar1 | uVar1 >> 8;
  uVar1 = uVar1 | uVar1 >> 4;
  uVar1 = uVar1 | uVar1 >> 2;
  return (uVar1 >> 1 | uVar1) + 1;
}

/* ref: FUN_00d79cc0 */
uint F_00d79cc0(unsigned int gen_a0)
{
  GEN_ENTER(0xd79cc0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return ((1 << ((byte)param_1 & 0x1f)) - (param_1 >> 5 & 1U)) - 1;
}

/* ref: FUN_00d79ce0 */
uint F_00d79ce0(unsigned int gen_a0)
{
  GEN_ENTER(0xd79ce0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((param_1 != 2) && (param_1 != 3)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00d79d20 */
uint F_00d79d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd79d20u, gen_a0, gen_a1, gen_a2, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  *param_2 = in_ecx[2] * REFG(float, 0x10928e4);
  *param_3 = (in_ecx[1] + *in_ecx) * REFG(float, 0x1088068);
  return (uint)param_2;
}

/* ref: FUN_00d79d60 */
unsigned int F_00d79d60(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xd79d60u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float * pfVar1;
  
  pfVar1 = in_ecx + 1;
  if ((!GEN_ISNAN(param_2) && !GEN_ISNAN(*pfVar1)) && (!(param_2 < *pfVar1) && param_2 != *pfVar1)) {
    in_ecx[1] = param_2;
  }
  if (param_2 < *in_ecx) {
    *in_ecx = param_2;
  }
  return 0;
}

/* ref: FUN_00d79da0 */
uint F_00d79da0(unsigned int gen_a0)
{
  GEN_ENTER(0xd79da0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 * 9;
}

/* ref: FUN_00d79dc0 */
uint F_00d79dc0(unsigned int gen_a0)
{
  GEN_ENTER(0xd79dc0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (param_1 % 9) / 3 + param_1 % 9 + (param_1 / 9) * 0xc;
}

/* ref: FUN_00d79e40 */
uint F_00d79e40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd79e40u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_eax = (uint)gen_a0;
  uint in_edx = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  if (((int)in_eax <= (int)param_3) && (in_eax = in_edx, (int)param_3 <= (int)in_edx)) {
    in_eax = param_3;
  }
  return in_eax;
}

/* ref: FUN_00d79e80 */
unsigned int F_00d79e80(unsigned int gen_a0)
{
  GEN_ENTER(0xd79e80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  *(undefined4 *)((int)this + 0x90) = 0;
  iVar1 = (*(int *)((int)this + 0x44) - *(int *)((int)this + 0x40)) / 2;
  iVar5 = 0;
  if (0 < iVar1) {
    iVar2 = 0;
    iVar4 = 0;
    do {
      iVar3 = *(int *)((int)this + 0x34) + *(int *)((int)this + 0x40) * 2;
      iVar3 = CONCAT22(*(undefined2 *)(iVar3 + 2 + iVar5 * 4),*(undefined2 *)(iVar3 + iVar5 * 4));
      iVar4 = iVar3 - iVar4;
      if (iVar2 < iVar4) {
        *(int *)((int)this + 0x90) = iVar4;
        iVar2 = iVar4;
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar3;
    } while (iVar5 < iVar1);
  }
  return 0;
}

/* ref: FUN_00d79ee0 */
unsigned int F_00d79ee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd79ee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *(undefined4 *)((int)this + param_2 * 4 + 0x40) = *(undefined4 *)((int)this + 0x38);
  F_00d7cd40((undefined *)((int)this + 0x34),&REFG(undefined * PTR32, 0x13516ac),*param_1,param_1[1]);
  return 0;
}

/* ref: FUN_00d79f10 */
uint F_00d79f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd79f10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  *(undefined4 *)((int)this + param_2 * 4 + 0x70) = *(undefined4 *)((int)this + 0x68);
  uVar1 = F_00d7cad0((undefined *)((int)this + 100),&REFG(undefined * PTR32, 0x13516ac),*param_1,param_1[1]);
  return uVar1;
}

/* ref: FUN_00d79f40 */
uint F_00d79f40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd79f40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x340];
  code * pcVar1;
  undefined * pvVar2;
  int iVar3;
  float * pfVar4;
  int iVar5;
  uint uVar6;
  undefined * pvVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int * piVar13;
  uint * puVar14;
  ushort uVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  float * pfVar19;
  float fVar20;
  float * pfVar21;
  char * pcVar22;
  undefined * puVar23;
  char * pcVar24;
  undefined * puVar25;
  undefined * puVar26;
  char * pcVar27;
  char * pcVar28;
  
  (*(undefined * PTR32 *)(gen_frame + 0x2cc)) = this;
  *(undefined4 *)((int)this + 8) = 5;
  F_00d7dbd0(((int *)(gen_frame + 0x264)),param_2,param_1,param_3);
  iVar5 = ((int *)(gen_frame + 0x264))[0];
  iVar3 = *(int *)(((int *)(gen_frame + 0x264))[0] + 0x1c) * 9 + *(int *)(((int *)(gen_frame + 0x264))[0] + 0x40);
  (*(int * PTR32 *)(gen_frame + 0x314)) = (int *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1136c54)));
  (*(float * PTR32 *)(gen_frame + 0x318)) = ((float *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1136e98))));
  if (iVar3 == 0) {
    (*(float * PTR32 *)(gen_frame + 0x2d4)) = (float *)0x0;
LAB_00d79ff7: ;
    (*(uint *)(gen_frame + 0x21c)) = 0x80000000;
  }
  else {
    (*(int *)(gen_frame + 0x218)) = iVar3 * 0xc;
    pfVar4 = ((float *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x218)))));
    (*(float * PTR32 *)(gen_frame + 0x2d4)) = pfVar4;
    (*(uint *)(gen_frame + 0x21c)) = (*(int *)(gen_frame + 0x218)) / 0xc;
    if ((*(int *)(gen_frame + 0x218)) / 0xc == 0) goto LAB_00d79ff7;
  }
  pfVar4 = (*(float * PTR32 *)(gen_frame + 0x2d4));
  if (0 < iVar3) {
    do {
      if (pfVar4 != (float *)0x0) {
        *pfVar4 = ((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x314)))));
        pfVar4[1] = ((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x318)))));
        pfVar4[2] = (*(float *)(gen_frame + 0x31c));
      }
      pfVar4 = pfVar4 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar5 = *(int *)(iVar5 + 0x1c) * 9 + *(int *)(iVar5 + 0x40);
  if (iVar5 == 0) {
    (*(float * PTR32 *)(gen_frame + 0x2d8)) = (float *)0x0;
  }
  else {
    (*(int *)(gen_frame + 0x214)) = iVar5 * 4;
    pfVar4 = ((float *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x214)))));
    uVar6 = (int)((*(int *)(gen_frame + 0x214)) + ((*(int *)(gen_frame + 0x214)) >> 0x1f & 3U)) >> 2;
    (*(float * PTR32 *)(gen_frame + 0x2d8)) = pfVar4;
    (*(uint *)(gen_frame + 0x210)) = uVar6;
    if (uVar6 != 0) goto LAB_00d7a07d;
  }
  (*(uint *)(gen_frame + 0x210)) = 0x80000000;
LAB_00d7a07d: ;
  piVar13 = (*(int * PTR32 *)(gen_frame + 0x26c));
  pfVar4 = (*(float * PTR32 *)(gen_frame + 0x2d8));
  if (0 < iVar5) {
    do {
      if (pfVar4 != (float *)0x0) {
        *pfVar4 = 1.4013e-45;
      }
      pfVar4 = pfVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if ((*(int *)(param_2 + 0x34) == 0) && (0 < (*(int * PTR32 *)(gen_frame + 0x26c))[5])) {
    F_00da0a80(&(*(int * PTR32 *)(gen_frame + 0x314)),((float *)(gen_frame + 0x0)),0x200);
    F_00d9fe80(&(*(int * PTR32 *)(gen_frame + 0x314)),
                 "Your skeleton does not have reference floats but your animation does have float tracks.  Predictive compression requires reference floats.  You must re-export your assets.  Compression will proceed assuming zero for all reference floats."
                );
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
              (REFG(int * PTR32, 0x15dff78),1,0xabbad892,((float *)(gen_frame + 0x0)),
               "Animation\\PredictiveCompressed\\hkaPredictiveCompressedAnimationCtor.cpp",0x144);
    F_00d9fda0(&(*(int * PTR32 *)(gen_frame + 0x314)));
  }
  iVar5 = 0;
  uVar6 = ((code *)*(gen_code32 *)(*piVar13 + 0x1c))(piVar13);
  if (0 < (int)uVar6) {
    do {
      iVar5 = iVar5 + 1;
      uVar6 = ((code *)*(gen_code32 *)(*piVar13 + 0x1c))(piVar13);
    } while (iVar5 < (int)uVar6);
  }
  (*(float * PTR32 *)(gen_frame + 0x30c)) = (float *)0x0;
  uVar6 = ((code *)*(gen_code32 *)(*piVar13 + 0x1c))(piVar13);
  if (0 < (int)uVar6) {
    do {
      iVar5 = *(int *)(((int *)(gen_frame + 0x264))[0] + 0x1c) * 9;
      iVar3 = 0;
      if (0 < *(int *)(((int *)(gen_frame + 0x264))[0] + 0x40) + iVar5) {
        (*(float * PTR32 *)(gen_frame + 0x304)) = (*(float * PTR32 *)(gen_frame + 0x2d4));
        do {
          if (iVar3 < iVar5) {
            iVar11 = iVar3 / 9;
            iVar9 = (*(int *)(gen_frame + 0x274));
          }
          else {
            iVar11 = iVar3 - iVar5;
            iVar9 = (*(int *)(gen_frame + 0x280));
          }
          pfVar4 = (*(float * PTR32 *)(gen_frame + 0x304));
          if (*(int *)(iVar9 + iVar11 * 4) != -1) {
            if (iVar3 < iVar5) {
              pfVar19 = ((float *)(uintptr_t)gen_fl2bits((float)(F_00d7c7b0((piVar13[4] * (int)(*(float * PTR32 *)(gen_frame + 0x30c)) +
                                              *((int *)GEN_TOP(((*(int *)(gen_frame + 0x274)) + (iVar3 / 9) * 4)))) * 0x30 +
                                              piVar13[10],iVar3 % 9))));
              (*(float * PTR32 *)(gen_frame + 0x32c)) = pfVar19;
            }
            else {
              pfVar19 = *((float * PTR32 *)GEN_TOP((piVar13[0xd] +
                         (piVar13[5] * (int)(*(float * PTR32 *)(gen_frame + 0x30c)) + *((int *)GEN_TOP(((*(int *)(gen_frame + 0x280)) + (iVar3 - iVar5) * 4)))) * 4
                         )));
            }
            pfVar4 = (*(float * PTR32 *)(gen_frame + 0x304)) + 1;
            if ((!GEN_ISNAN(((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar19)))) && !GEN_ISNAN(*pfVar4)) &&
                (!(((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar19))) < *pfVar4) && ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar19))) != *pfVar4)) {
              (*(float * PTR32 *)(gen_frame + 0x304))[1] = ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar19)));
            }
            pfVar4 = (*(float * PTR32 *)(gen_frame + 0x304));
            if (((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar19))) < *(*(float * PTR32 *)(gen_frame + 0x304))) {
              *(*(float * PTR32 *)(gen_frame + 0x304)) = ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar19)));
            }
          }
          (*(float * PTR32 *)(gen_frame + 0x304)) = pfVar4 + 3;
          iVar5 = *(int *)(((int *)(gen_frame + 0x264))[0] + 0x1c) * 9;
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(((int *)(gen_frame + 0x264))[0] + 0x40) + iVar5);
      }
      pfVar4 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x30c)) + 1);
      (*(float * PTR32 *)(gen_frame + 0x30c)) = pfVar4;
      uVar6 = ((code *)*(gen_code32 *)(*piVar13 + 0x1c))(piVar13);
    } while ((int)pfVar4 < (int)uVar6);
  }
  iVar5 = *(int *)(((int *)(gen_frame + 0x264))[0] + 0x1c) * 9;
  iVar11 = 0;
  iVar3 = ((int *)(gen_frame + 0x264))[0];
  if (0 < *(int *)(((int *)(gen_frame + 0x264))[0] + 0x40) + iVar5) {
    pfVar4 = (*(float * PTR32 *)(gen_frame + 0x2d4)) + 2;
    do {
      if (iVar11 < iVar5) {
        iVar5 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x274)) + (iVar11 / 9) * 4)));
      }
      else {
        iVar5 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x280)) + (iVar11 - iVar5) * 4)));
      }
      if (iVar5 != -1) {
        fVar20 = F_00d7cff0(((int *)(gen_frame + 0x264)),iVar11);
        (*(float * PTR32 *)(gen_frame + 0x32c)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar20)));
        fVar17 = ((pfVar4[-1] - pfVar4[-2]) * REFG(float, 0x1088068)) * *(float *)&REFG(undefined, 0x1137a8c);
        if (fVar17 < fVar20) {
          fVar17 = fVar20;
        }
        *pfVar4 = fVar17;
        if (iVar11 < *(int *)(((int *)(gen_frame + 0x264))[0] + 0x1c) * 9) {
          fVar17 = F_00d7c7b0((iVar11 / 9) * 0x30 + *(int *)(((int *)(gen_frame + 0x264))[0] + 0x24),iVar11 % 9);
          (*(float * PTR32 *)(gen_frame + 0x32c)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar17)));
        }
        else {
          iVar5 = iVar11 + *(int *)(((int *)(gen_frame + 0x264))[0] + 0x1c) * -9;
          if (iVar5 < *(int *)(((int *)(gen_frame + 0x264))[0] + 0x34)) {
            fVar17 = *((float *)GEN_TOP((*(int *)(((int *)(gen_frame + 0x264))[0] + 0x30) + iVar5 * 4)));
          }
          else {
            fVar17 = 0.0;
          }
        }
        fVar20 = *pfVar4;
        if (pfVar4[-1] - pfVar4[-2] < fVar20 * REFG(float, 0x10928e4)) {
          fVar18 = ABS(pfVar4[-1] - fVar17);
          fVar17 = ABS(pfVar4[-2] - fVar17);
          ((float *)(gen_frame + 0x200))[0] = fVar18;
          ((float *)(gen_frame + 0x200))[1] = 0.0;
          ((float *)(gen_frame + 0x200))[2] = 0.0;
          ((float *)(gen_frame + 0x200))[1] = 0.0;
          ((float *)(gen_frame + 0x200))[2] = 0.0;
          ((float *)(gen_frame + 0x200))[3] = 0.0;
          (*(float *)(gen_frame + 0x310)) = fVar17;
          (*(int * PTR32 *)(gen_frame + 0x314)) = (int *)0x0;
          (*(float * PTR32 *)(gen_frame + 0x318)) = (float *)0x0;
          (*(float *)(gen_frame + 0x31c)) = 0.0;
          if (fVar17 < fVar18) {
            fVar17 = fVar18;
          }
          if (fVar17 < fVar20) {
            fVar17 = 1.4013e-45;
          }
          else {
            fVar17 = 0.0;
          }
        }
        else {
          fVar17 = 2.8026e-45;
        }
        (*(float * PTR32 *)(gen_frame + 0x2d8))[iVar11] = fVar17;
        pfVar21 = ((float *)(uintptr_t)gen_fl2bits((float)(F_00d7d0e0(((int *)(gen_frame + 0x264)),iVar11))));
        (*(float * PTR32 *)(gen_frame + 0x32c)) = pfVar21;
        pfVar19 = ((float *)GEN_TOP((((pfVar4[-1] - pfVar4[-2]) * REFG(float, 0x1088068)) * *(float *)&REFG(undefined, 0x1137a8c))));
        if (((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar19))) < ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar21)))) {
          pfVar19 = pfVar21;
        }
        *pfVar4 = ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar19)));
        iVar3 = ((int *)(gen_frame + 0x264))[0];
      }
      iVar5 = *(int *)(iVar3 + 0x1c) * 9;
      iVar11 = iVar11 + 1;
      pfVar4 = pfVar4 + 3;
    } while (iVar11 < *(int *)(iVar3 + 0x40) + iVar5);
  }
  fVar17 = ((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x318)))));
  iVar5 = *(int *)(iVar3 + 0x1c);
  (*(float *)(gen_frame + 0x308)) = 0.0;
  if (0 < iVar5) {
    iVar11 = 0;
    pfVar4 = (*(float * PTR32 *)(gen_frame + 0x2d8)) + 3;
    do {
      if (iVar11 < iVar5 * 9) {
        iVar5 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x274)) + (iVar11 / 9) * 4)));
      }
      else {
        iVar5 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x280)) + (iVar11 + iVar5 * -9) * 4)));
      }
      if (iVar5 != -1) {
        uVar6 = (uint)(*pfVar4 == 1.4013e-45);
        if (pfVar4[1] == 1.4013e-45) {
          uVar6 = uVar6 + 1;
        }
        if ((*(float * PTR32 *)(gen_frame + 0x2d8))[iVar11 + 5] == 1.4013e-45) {
          uVar6 = uVar6 + 1;
        }
        if (uVar6 - 1 < 2) {
          iVar5 = 3;
          pfVar19 = pfVar4;
          do {
            if (*pfVar19 == 1.4013e-45) {
              *pfVar19 = 0.0;
            }
            pfVar19 = pfVar19 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
      }
      iVar5 = *(int *)(iVar3 + 0x1c);
      iVar9 = (int)gen_fl2bits((*(float *)(gen_frame + 0x308))) + 1;
      iVar11 = iVar11 + 9;
      pfVar4 = pfVar4 + 9;
      (*(float *)(gen_frame + 0x308)) = gen_bits2f(iVar9);
    } while (iVar9 < iVar5);
  }
  iVar11 = 0;
  (*(int *)(gen_frame + 0x2e4)) = 0;
  (*(uint *)(gen_frame + 0x2e8)) = 0;
  (*(uint *)(gen_frame + 0x2ec)) = 0x80000000;
  (*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 0)) = 0;
  (*(float * PTR32 *)(gen_frame + 0x318)) = (float *)((uint)gen_fl2bits(fVar17) & 0xffff0000);
  iVar5 = *(int *)(iVar3 + 0x1c);
  (*(float *)(gen_frame + 0x308)) = 0.0;
  if (0 < iVar5) {
    iVar9 = 0;
    iVar3 = iVar11;
    do {
      if (iVar9 < iVar5 * 9) {
        iVar5 = iVar9 / 9;
        iVar10 = (*(int *)(gen_frame + 0x274));
      }
      else {
        iVar5 = iVar9 + iVar5 * -9;
        iVar10 = (*(int *)(gen_frame + 0x280));
      }
      iVar11 = iVar3 + 1;
      uVar15 = (ushort)(*(float * PTR32 *)(gen_frame + 0x318)) |
               (ushort)(*(int *)(iVar10 + iVar5 * 4) != -1) << ((byte)iVar3 & 0x1f);
      (*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 0)) = uVar15;
      (*(float * PTR32 *)(gen_frame + 0x318)) = ((float *)GEN_TOP(CONCAT22((*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 2)),uVar15)));
      if (iVar11 == 0x10) {
        if ((*(uint *)(gen_frame + 0x2e8)) == ((*(uint *)(gen_frame + 0x2ec)) & 0x3fffffff)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x2e4)),2);
        }
        uVar6 = (uint)(*(float * PTR32 *)(gen_frame + 0x318));
        *(ushort *)((*(int *)(gen_frame + 0x2e4)) + (*(uint *)(gen_frame + 0x2e8)) * 2) = (ushort)(*(float * PTR32 *)(gen_frame + 0x318));
        (*(uint *)(gen_frame + 0x2e8)) = (*(uint *)(gen_frame + 0x2e8)) + 1;
        (*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 0)) = 0;
        (*(float * PTR32 *)(gen_frame + 0x318)) = (float *)(uVar6 & 0xffff0000);
        iVar11 = 0;
      }
      iVar5 = *(int *)(((int *)(gen_frame + 0x264))[0] + 0x1c);
      fVar17 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x308))) + 1);
      iVar9 = iVar9 + 9;
      (*(float *)(gen_frame + 0x308)) = fVar17;
      iVar3 = iVar11;
    } while ((int)gen_fl2bits(fVar17) < iVar5);
    if (0 < iVar11) {
      if ((*(uint *)(gen_frame + 0x2e8)) == ((*(uint *)(gen_frame + 0x2ec)) & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x2e4)),2);
      }
      uVar6 = (uint)(*(float * PTR32 *)(gen_frame + 0x318));
      *(ushort *)((*(int *)(gen_frame + 0x2e4)) + (*(uint *)(gen_frame + 0x2e8)) * 2) = (ushort)(*(float * PTR32 *)(gen_frame + 0x318));
      (*(uint *)(gen_frame + 0x2e8)) = (*(uint *)(gen_frame + 0x2e8)) + 1;
      (*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 0)) = 0;
      (*(float * PTR32 *)(gen_frame + 0x318)) = (float *)(uVar6 & 0xffff0000);
      iVar11 = 0;
    }
  }
  (*(float * PTR32 *)(gen_frame + 0x304)) = (float *)0x0;
  if (0 < *(int *)(((int *)(gen_frame + 0x264))[0] + 0x40)) {
    iVar5 = ((int *)(gen_frame + 0x264))[0];
    uVar15 = (ushort)(*(float * PTR32 *)(gen_frame + 0x318));
    do {
      iVar3 = *(int *)(iVar5 + 0x1c) * 9;
      iVar9 = (int)(*(float * PTR32 *)(gen_frame + 0x304)) + iVar3;
      if (iVar9 < iVar3) {
        iVar3 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x274)) + (iVar9 / 9) * 4)));
        iVar5 = ((int *)(gen_frame + 0x264))[0];
      }
      else {
        iVar3 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x280)) + (iVar9 + *(int *)(iVar5 + 0x1c) * -9) * 4)));
      }
      bVar8 = (byte)iVar11;
      iVar11 = iVar11 + 1;
      uVar15 = uVar15 | (ushort)(iVar3 != -1) << (bVar8 & 0x1f);
      if (iVar11 == 0x10) {
        if ((*(uint *)(gen_frame + 0x2e8)) == ((*(uint *)(gen_frame + 0x2ec)) & 0x3fffffff)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x2e4)),2);
          iVar5 = ((int *)(gen_frame + 0x264))[0];
        }
        *(ushort *)((*(int *)(gen_frame + 0x2e4)) + (*(uint *)(gen_frame + 0x2e8)) * 2) = uVar15;
        (*(uint *)(gen_frame + 0x2e8)) = (*(uint *)(gen_frame + 0x2e8)) + 1;
        uVar15 = 0;
        iVar11 = 0;
      }
      pfVar4 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x304)) + 1);
      (*(float * PTR32 *)(gen_frame + 0x304)) = pfVar4;
    } while ((int)pfVar4 < *(int *)(iVar5 + 0x40));
    (*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 0)) = uVar15;
    (*(float * PTR32 *)(gen_frame + 0x318)) = ((float *)GEN_TOP(CONCAT22((*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 2)),uVar15)));
  }
  if (0 < iVar11) {
    if ((*(uint *)(gen_frame + 0x2e8)) == ((*(uint *)(gen_frame + 0x2ec)) & 0x3fffffff)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x2e4)),2);
    }
    *(ushort *)((*(int *)(gen_frame + 0x2e4)) + (*(uint *)(gen_frame + 0x2e8)) * 2) = (ushort)(*(float * PTR32 *)(gen_frame + 0x318));
    (*(uint *)(gen_frame + 0x2e8)) = (*(uint *)(gen_frame + 0x2e8)) + 1;
  }
  uVar6 = (uint)(*(float * PTR32 *)(gen_frame + 0x318));
  (*(uint *)(gen_frame + 0x300)) = 0x80000000;
  (*(uint *)(gen_frame + 0x254)) = 0x80000000;
  (*(uint *)(gen_frame + 0x23c)) = 0x80000000;
  (*(uint *)(gen_frame + 0x230)) = 0x80000000;
  (*(uint *)(gen_frame + 0x248)) = 0x80000000;
  (*(uint *)(gen_frame + 0x260)) = 0x80000000;
  (*(uint *)(gen_frame + 0x2c8)) = 0x80000000;
  (*(uint *)(gen_frame + 0x2b0)) = 0x80000000;
  (*(uint *)(gen_frame + 0x2bc)) = 0x80000000;
  (*(int *)(gen_frame + 0x2f8)) = 0;
  (*(uint *)(gen_frame + 0x2fc)) = 0;
  (*(int *)(gen_frame + 0x24c)) = 0;
  (*(uint *)(gen_frame + 0x250)) = 0;
  (*(int *)(gen_frame + 0x234)) = 0;
  (*(uint *)(gen_frame + 0x238)) = 0;
  (*(int *)(gen_frame + 0x228)) = 0;
  (*(uint *)(gen_frame + 0x22c)) = 0;
  (*(int *)(gen_frame + 0x240)) = 0;
  (*(uint *)(gen_frame + 0x244)) = 0;
  (*(int *)(gen_frame + 0x258)) = 0;
  (*(uint *)(gen_frame + 0x25c)) = 0;
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2cc)) + 0x88) = 0;
  (*(int *)(gen_frame + 0x2c0)) = 0;
  (*(uint *)(gen_frame + 0x2c4)) = 0;
  (*(int *)(gen_frame + 0x2a8)) = 0;
  (*(uint *)(gen_frame + 0x2ac)) = 0;
  (*(int *)(gen_frame + 0x2b4)) = 0;
  (*(uint *)(gen_frame + 0x2b8)) = 0;
  iVar5 = *(int *)(((int *)(gen_frame + 0x264))[0] + 0x1c);
  uVar12 = 0;
  (*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 0)) = 0;
  (*(float * PTR32 *)(gen_frame + 0x318)) = (float *)(uVar6 & 0xffff0000);
  (*(float *)(gen_frame + 0x31c)) = 0.0;
  (*(float * PTR32 *)(gen_frame + 0x2f0)) = (float *)0x0;
  if (0 < iVar5) {
    (*(float * PTR32 *)(gen_frame + 0x2f4)) = (float *)0x0;
    (*(float * PTR32 *)(gen_frame + 0x2e0)) = (*(float * PTR32 *)(gen_frame + 0x2d8));
    (*(float * PTR32 *)(gen_frame + 0x2dc)) = (*(float * PTR32 *)(gen_frame + 0x2d4)) + 1;
    do {
      if ((int)(*(float * PTR32 *)(gen_frame + 0x2f4)) < iVar5 * 9) {
        iVar5 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x274)) + ((int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x2f4))) / 9) * 4)));
      }
      else {
        iVar5 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x280)) + ((int)(*(float * PTR32 *)(gen_frame + 0x2f4)) + iVar5 * -9) * 4)));
      }
      if (iVar5 != -1) {
        (*(float * PTR32 *)(gen_frame + 0x304)) = (*(float * PTR32 *)(gen_frame + 0x2e0));
        (*(float * PTR32 *)(gen_frame + 0x30c)) = (*(float * PTR32 *)(gen_frame + 0x2dc));
        (*(float * PTR32 *)(gen_frame + 0x32c)) = (float *)0x9;
        pfVar4 = (*(float * PTR32 *)(gen_frame + 0x2f4));
        do {
          pfVar21 = (*(float * PTR32 *)(gen_frame + 0x304));
          pfVar19 = ((float *)(uintptr_t)gen_fl2bits((float)(*(*(float * PTR32 *)(gen_frame + 0x304)))));
          (*(float * PTR32 *)(gen_frame + 0x2d0)) = pfVar19;
          if (pfVar19 == (float *)0x2) {
            if ((((int)pfVar4 < *(int *)(((int *)(gen_frame + 0x264))[0] + 0x1c) * 9) && ((int)((int)(uintptr_t)pfVar4) % 9 - 3U < 3)) &&
               (fVar20 = F_00d7d0e0(((int *)(gen_frame + 0x264)),pfVar4), fVar17 = REFG(float, 0x1090708),
               bVar16 = GEN_ISNAN((float10)fVar20) || GEN_ISNAN((float10)0),
               bVar16 != (bVar16 || (float10)fVar20 == (float10)0))) {
              *pfVar21 = 4.2039e-45;
              (*(float * PTR32 *)(gen_frame + 0x30c))[-1] = fVar17;
              fVar17 = REFG(float, 0x1087f04);
              *(*(float * PTR32 *)(gen_frame + 0x30c)) = GEN_FLT_TO(*(*(float * PTR32 *)(gen_frame + 0x30c)), REFG(float, 0x1087f04));
              fVar17 = ((fVar17 - (*(float * PTR32 *)(gen_frame + 0x30c))[-1]) * REFG(float, 0x1088068)) * *(float *)&REFG(undefined, 0x1137a8c);
              (*(float * PTR32 *)(gen_frame + 0x2d0)) = (float *)0x3;
              if (fVar17 < 0.0) {
                fVar17 = 0.0;
              }
              bVar8 = (byte)(uint)gen_fl2bits((*(float *)(gen_frame + 0x31c)));
              iVar5 = (int)gen_fl2bits((*(float *)(gen_frame + 0x31c))) + 1;
              (*(float * PTR32 *)(gen_frame + 0x30c))[1] = fVar17;
              (*(float *)(gen_frame + 0x31c)) = gen_bits2f(iVar5);
              uVar15 = (ushort)(*(float * PTR32 *)(gen_frame + 0x318)) | 1 << (bVar8 & 0x1f);
              (*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 0)) = uVar15;
              (*(float * PTR32 *)(gen_frame + 0x318)) = ((float *)GEN_TOP(CONCAT22((*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 2)),uVar15)));
              if (iVar5 == 0x10) {
                if ((*(uint *)(gen_frame + 0x2fc)) == ((*(uint *)(gen_frame + 0x300)) & 0x3fffffff)) {
                  F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x2f8)),2);
                }
                *(ushort *)((*(int *)(gen_frame + 0x2f8)) + (*(uint *)(gen_frame + 0x2fc)) * 2) = (ushort)(*(float * PTR32 *)(gen_frame + 0x318));
                (*(uint *)(gen_frame + 0x2fc)) = (*(uint *)(gen_frame + 0x2fc)) + 1;
LAB_00d7a9f0: ;
                uVar6 = (uint)(*(float * PTR32 *)(gen_frame + 0x318));
                (*(float *)(gen_frame + 0x31c)) = 0.0;
                (*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 0)) = 0;
                (*(float * PTR32 *)(gen_frame + 0x318)) = (float *)(uVar6 & 0xffff0000);
              }
            }
            else {
              (*(float *)(gen_frame + 0x220)) = (*(float * PTR32 *)(gen_frame + 0x30c))[1] * REFG(float, 0x10928e4);
              (*(float *)(gen_frame + 0x308)) = ((*(float * PTR32 *)(gen_frame + 0x30c))[-1] + *(*(float * PTR32 *)(gen_frame + 0x30c))) * REFG(float, 0x1088068);
              if ((*(uint *)(gen_frame + 0x2c4)) == ((*(uint *)(gen_frame + 0x2c8)) & 0x3fffffff)) {
                F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x2c0)),4);
              }
              *(float *)((*(int *)(gen_frame + 0x2c0)) + (*(uint *)(gen_frame + 0x2c4)) * 4) = (*(float *)(gen_frame + 0x220));
              (*(uint *)(gen_frame + 0x2c4)) = (*(uint *)(gen_frame + 0x2c4)) + 1;
              if ((*(uint *)(gen_frame + 0x2ac)) == ((*(uint *)(gen_frame + 0x2b0)) & 0x3fffffff)) {
                F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x2a8)),4);
              }
              *(float *)((*(int *)(gen_frame + 0x2a8)) + (*(uint *)(gen_frame + 0x2ac)) * 4) = (*(float *)(gen_frame + 0x308));
              (*(uint *)(gen_frame + 0x2ac)) = (*(uint *)(gen_frame + 0x2ac)) + 1;
              bVar8 = (byte)(uint)gen_fl2bits((*(float *)(gen_frame + 0x31c)));
              iVar5 = (int)gen_fl2bits((*(float *)(gen_frame + 0x31c))) + 1;
              (*(float *)(gen_frame + 0x31c)) = gen_bits2f(iVar5);
              uVar15 = (ushort)(*(float * PTR32 *)(gen_frame + 0x318)) | 0 << (bVar8 & 0x1f);
              (*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 0)) = uVar15;
              (*(float * PTR32 *)(gen_frame + 0x318)) = ((float *)GEN_TOP(CONCAT22((*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 2)),uVar15)));
              if (iVar5 == 0x10) {
                if ((*(uint *)(gen_frame + 0x2fc)) == ((*(uint *)(gen_frame + 0x300)) & 0x3fffffff)) {
                  F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x2f8)),2);
                }
                *(ushort *)((*(int *)(gen_frame + 0x2f8)) + (*(uint *)(gen_frame + 0x2fc)) * 2) = (ushort)(*(float * PTR32 *)(gen_frame + 0x318));
                (*(uint *)(gen_frame + 0x2fc)) = (*(uint *)(gen_frame + 0x2fc)) + 1;
                goto LAB_00d7a9f0;
              }
            }
            if ((*(uint *)(gen_frame + 0x250)) == ((*(uint *)(gen_frame + 0x254)) & 0x3fffffff)) {
              F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x24c)),2);
            }
            *(short *)((*(int *)(gen_frame + 0x24c)) + (*(uint *)(gen_frame + 0x250)) * 2) =
                 (short)(((int)((int)(uintptr_t)pfVar4) % 9) / 3) + (short)((int)((int)(uintptr_t)pfVar4) % 9) +
                 (short)((int)((int)(uintptr_t)pfVar4) / 9) * 0xc;
            uVar6 = (*(uint *)(gen_frame + 0x250)) + 1;
            (*(uint *)(gen_frame + 0x250)) = uVar6;
            uVar6 = uVar6 & 0x8000000f;
            bVar16 = uVar6 == 0;
            if ((int)uVar6 < 0) {
              bVar16 = (uVar6 - 1 | 0xfffffff0) == 0xffffffff;
            }
            if (bVar16) {
              *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2cc)) + 0x88) = (*(uint *)(gen_frame + 0x2c4));
            }
LAB_00d7aa89: ;
            if ((*(float * PTR32 *)(gen_frame + 0x2d0)) != (float *)0x1) goto LAB_00d7aa93;
          }
          else {
            if (pfVar19 != (float *)0x0) goto LAB_00d7aa89;
            (*(float *)(gen_frame + 0x28c)) = ((*(float * PTR32 *)(gen_frame + 0x30c))[-1] + *(*(float * PTR32 *)(gen_frame + 0x30c))) * REFG(float, 0x1088068);
            if ((*(uint *)(gen_frame + 0x2b8)) == ((*(uint *)(gen_frame + 0x2bc)) & 0x3fffffff)) {
              F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x2b4)),4);
            }
            *(float *)((*(int *)(gen_frame + 0x2b4)) + (*(uint *)(gen_frame + 0x2b8)) * 4) = (*(float *)(gen_frame + 0x28c));
            (*(uint *)(gen_frame + 0x2b8)) = (*(uint *)(gen_frame + 0x2b8)) + 1;
            if ((*(uint *)(gen_frame + 0x22c)) == ((*(uint *)(gen_frame + 0x230)) & 0x3fffffff)) {
              F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x228)),2);
            }
            *(short *)((*(int *)(gen_frame + 0x228)) + (*(uint *)(gen_frame + 0x22c)) * 2) =
                 (short)(((int)((int)(uintptr_t)pfVar4) % 9) / 3) + (short)((int)((int)(uintptr_t)pfVar4) % 9) +
                 (short)((int)((int)(uintptr_t)pfVar4) / 9) * 0xc;
            (*(uint *)(gen_frame + 0x22c)) = (*(uint *)(gen_frame + 0x22c)) + 1;
LAB_00d7aa93: ;
            if ((((int)pfVar4 < *(int *)(((int *)(gen_frame + 0x264))[0] + 0x1c) * 9) && ((int)((int)(uintptr_t)pfVar4) % 9 - 3U < 3)) &&
               (((*(uint *)(gen_frame + 0x25c)) == 0 ||
                ((float *)(uint)*(ushort *)((*(int *)(gen_frame + 0x258)) + -2 + (*(uint *)(gen_frame + 0x25c)) * 2) != (*(float * PTR32 *)(gen_frame + 0x2f0)))))) {
              if ((*(uint *)(gen_frame + 0x25c)) == ((*(uint *)(gen_frame + 0x260)) & 0x3fffffff)) {
                F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x258)),2);
              }
              *(undefined2 *)((*(int *)(gen_frame + 0x258)) + (*(uint *)(gen_frame + 0x25c)) * 2) = (*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x2f0)) + 0));
              (*(uint *)(gen_frame + 0x25c)) = (*(uint *)(gen_frame + 0x25c)) + 1;
            }
          }
          (*(float * PTR32 *)(gen_frame + 0x304)) = (*(float * PTR32 *)(gen_frame + 0x304)) + 1;
          (*(float * PTR32 *)(gen_frame + 0x30c)) = (*(float * PTR32 *)(gen_frame + 0x30c)) + 3;
          pfVar4 = (float *)((int)pfVar4 + 1);
          pfVar19 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x32c)) + -1);
          (*(float * PTR32 *)(gen_frame + 0x32c)) = pfVar19;
        } while (pfVar19 != (float *)0x0);
      }
      iVar5 = *(int *)(((int *)(gen_frame + 0x264))[0] + 0x1c);
      (*(float * PTR32 *)(gen_frame + 0x2f4)) = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x2f4)) + 9);
      (*(float * PTR32 *)(gen_frame + 0x2e0)) = (*(float * PTR32 *)(gen_frame + 0x2e0)) + 9;
      (*(float * PTR32 *)(gen_frame + 0x2dc)) = (*(float * PTR32 *)(gen_frame + 0x2dc)) + 0x1b;
      pfVar4 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x2f0)) + 1);
      (*(float * PTR32 *)(gen_frame + 0x2f0)) = pfVar4;
    } while ((int)pfVar4 < iVar5);
    uVar12 = (uint)(*(float * PTR32 *)(gen_frame + 0x318)) & 0xffff;
  }
  (*(uint *)(gen_frame + 0x224)) = (*(uint *)(gen_frame + 0x250));
  fVar17 = (*(float *)(gen_frame + 0x31c));
  if (0 < (int)gen_fl2bits((*(float *)(gen_frame + 0x31c)))) {
    do {
      bVar8 = (byte)(uint)gen_fl2bits(fVar17);
      fVar17 = gen_bits2f((int)gen_fl2bits(fVar17) + 1);
      uVar15 = (ushort)uVar12 | 1 << (bVar8 & 0x1f);
      uVar12 = (uint)uVar15;
      if (fVar17 == 2.24208e-44) {
        (*(float *)(gen_frame + 0x31c)) = fVar17;
        (*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 0)) = uVar15;
        if ((*(uint *)(gen_frame + 0x2fc)) == ((*(uint *)(gen_frame + 0x300)) & 0x3fffffff)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x2f8)),2);
        }
        *(ushort *)((*(int *)(gen_frame + 0x2f8)) + (*(uint *)(gen_frame + 0x2fc)) * 2) = uVar15;
        (*(uint *)(gen_frame + 0x2fc)) = (*(uint *)(gen_frame + 0x2fc)) + 1;
        (*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 0)) = 0;
        (*(float * PTR32 *)(gen_frame + 0x318)) = ((float *)GEN_TOP(((uint)(*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 2)) << 0x10)));
        (*(float *)(gen_frame + 0x31c)) = 0.0;
        goto LAB_00d7ab93;
      }
    } while (0 < (int)gen_fl2bits(fVar17));
    (*(float *)(gen_frame + 0x31c)) = fVar17;
    (*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 0)) = uVar15;
    (*(float * PTR32 *)(gen_frame + 0x318)) = ((float *)GEN_TOP(CONCAT22((*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 2)),uVar15)));
  }
LAB_00d7ab93: ;
  iVar5 = 0;
  if (0 < *(int *)(((int *)(gen_frame + 0x264))[0] + 0x40)) {
    do {
      iVar11 = *(int *)(((int *)(gen_frame + 0x264))[0] + 0x1c) * 9;
      iVar3 = iVar11 + iVar5;
      if (iVar3 < iVar11) {
        iVar3 = iVar3 / 9;
        iVar11 = (*(int *)(gen_frame + 0x274));
      }
      else {
        iVar3 = iVar3 + *(int *)(((int *)(gen_frame + 0x264))[0] + 0x1c) * -9;
        iVar11 = (*(int *)(gen_frame + 0x280));
      }
      if (*(int *)(iVar11 + iVar3 * 4) != -1) {
        iVar3 = iVar5 + *(int *)(((int *)(gen_frame + 0x264))[0] + 0x1c) * 9;
        if ((*(float * PTR32 *)(gen_frame + 0x2d8))[iVar3] == 2.8026e-45) {
          (*(float *)(gen_frame + 0x28c)) = (*(float * PTR32 *)(gen_frame + 0x2d4))[iVar3 * 3 + 2] * REFG(float, 0x10928e4);
          (*(float * PTR32 *)(gen_frame + 0x32c)) = ((float *)GEN_TOP((((*(float * PTR32 *)(gen_frame + 0x2d4))[iVar3 * 3 + 1] + (*(float * PTR32 *)(gen_frame + 0x2d4))[iVar3 * 3]) * REFG(float, 0x1088068))));
          if ((*(uint *)(gen_frame + 0x2c4)) == ((*(uint *)(gen_frame + 0x2c8)) & 0x3fffffff)) {
            F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x2c0)),4);
          }
          *(float *)((*(int *)(gen_frame + 0x2c0)) + (*(uint *)(gen_frame + 0x2c4)) * 4) = (*(float *)(gen_frame + 0x28c));
          (*(uint *)(gen_frame + 0x2c4)) = (*(uint *)(gen_frame + 0x2c4)) + 1;
          if ((*(uint *)(gen_frame + 0x2ac)) == ((*(uint *)(gen_frame + 0x2b0)) & 0x3fffffff)) {
            F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x2a8)),4);
          }
          *(float * PTR32 *)((*(int *)(gen_frame + 0x2a8)) + (*(uint *)(gen_frame + 0x2ac)) * 4) = (*(float * PTR32 *)(gen_frame + 0x32c));
          (*(uint *)(gen_frame + 0x2ac)) = (*(uint *)(gen_frame + 0x2ac)) + 1;
          bVar8 = (byte)(uint)gen_fl2bits((*(float *)(gen_frame + 0x31c)));
          iVar3 = (int)gen_fl2bits((*(float *)(gen_frame + 0x31c))) + 1;
          (*(float *)(gen_frame + 0x31c)) = gen_bits2f(iVar3);
          uVar15 = (ushort)(*(float * PTR32 *)(gen_frame + 0x318)) | 0 << (bVar8 & 0x1f);
          (*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 0)) = uVar15;
          (*(float * PTR32 *)(gen_frame + 0x318)) = ((float *)GEN_TOP(CONCAT22((*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 2)),uVar15)));
          if (iVar3 == 0x10) {
            if ((*(uint *)(gen_frame + 0x2fc)) == ((*(uint *)(gen_frame + 0x300)) & 0x3fffffff)) {
              F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x2f8)),2);
            }
            uVar6 = (uint)(*(float * PTR32 *)(gen_frame + 0x318));
            *(ushort *)((*(int *)(gen_frame + 0x2f8)) + (*(uint *)(gen_frame + 0x2fc)) * 2) = (ushort)(*(float * PTR32 *)(gen_frame + 0x318));
            (*(uint *)(gen_frame + 0x2fc)) = (*(uint *)(gen_frame + 0x2fc)) + 1;
            (*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 0)) = 0;
            (*(float * PTR32 *)(gen_frame + 0x318)) = (float *)(uVar6 & 0xffff0000);
            (*(float *)(gen_frame + 0x31c)) = 0.0;
          }
          if ((*(uint *)(gen_frame + 0x238)) == ((*(uint *)(gen_frame + 0x23c)) & 0x3fffffff)) {
            F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x234)),2);
          }
          *(short *)((*(int *)(gen_frame + 0x234)) + (*(uint *)(gen_frame + 0x238)) * 2) = (short)iVar5;
          (*(uint *)(gen_frame + 0x238)) = (*(uint *)(gen_frame + 0x238)) + 1;
        }
        else if ((*(float * PTR32 *)(gen_frame + 0x2d8))[iVar3] == 0.0) {
          (*(float *)(gen_frame + 0x220)) = ((*(float * PTR32 *)(gen_frame + 0x2d4))[iVar3 * 3 + 1] + (*(float * PTR32 *)(gen_frame + 0x2d4))[iVar3 * 3]) * REFG(float, 0x1088068);
          if ((*(uint *)(gen_frame + 0x2b8)) == ((*(uint *)(gen_frame + 0x2bc)) & 0x3fffffff)) {
            F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x2b4)),4);
          }
          *(float *)((*(int *)(gen_frame + 0x2b4)) + (*(uint *)(gen_frame + 0x2b8)) * 4) = (*(float *)(gen_frame + 0x220));
          (*(uint *)(gen_frame + 0x2b8)) = (*(uint *)(gen_frame + 0x2b8)) + 1;
          if ((*(uint *)(gen_frame + 0x244)) == ((*(uint *)(gen_frame + 0x248)) & 0x3fffffff)) {
            F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x240)),2);
          }
          *(short *)((*(int *)(gen_frame + 0x240)) + (*(uint *)(gen_frame + 0x244)) * 2) = (short)iVar5;
          (*(uint *)(gen_frame + 0x244)) = (*(uint *)(gen_frame + 0x244)) + 1;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(((int *)(gen_frame + 0x264))[0] + 0x40));
  }
  if (0 < (int)gen_fl2bits((*(float *)(gen_frame + 0x31c)))) {
    if ((*(uint *)(gen_frame + 0x2fc)) == ((*(uint *)(gen_frame + 0x300)) & 0x3fffffff)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x2f8)),2);
    }
    *(ushort *)((*(int *)(gen_frame + 0x2f8)) + (*(uint *)(gen_frame + 0x2fc)) * 2) = (ushort)(*(float * PTR32 *)(gen_frame + 0x318));
    (*(uint *)(gen_frame + 0x2fc)) = (*(uint *)(gen_frame + 0x2fc)) + 1;
  }
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2cc)) + 0x40) = 0xffffffff;
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2cc)) + 0x44) = 0xffffffff;
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2cc)) + 0x48) = 0xffffffff;
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2cc)) + 0x4c) = 0xffffffff;
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2cc)) + 0x50) = 0xffffffff;
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2cc)) + 0x54) = 0xffffffff;
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2cc)) + 0x58) = 0xffffffff;
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2cc)) + 0x5c) = 0xffffffff;
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2cc)) + 0x60) = 0xffffffff;
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2cc)) + 0x70) = 0xffffffff;
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2cc)) + 0x74) = 0xffffffff;
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2cc)) + 0x78) = 0xffffffff;
  (*(uint *)(gen_frame + 0x2a4)) = 0x80000000;
  (*(uint *)(gen_frame + 0x298)) = 0x80000000;
  (*(int *)(gen_frame + 0x29c)) = 0;
  (*(uint *)(gen_frame + 0x2a0)) = 0;
  (*(int *)(gen_frame + 0x290)) = 0;
  (*(uint *)(gen_frame + 0x294)) = 0;
  (*(float *)(gen_frame + 0x308)) = 0.0;
  (*(float * PTR32 *)(gen_frame + 0x304)) = (float *)0x0;
  uVar6 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x26c)) + 0x1c))((*(int * PTR32 *)(gen_frame + 0x26c)));
  if (0 < (int)uVar6) {
    do {
      uVar6 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x26c)) + 0x1c))((*(int * PTR32 *)(gen_frame + 0x26c)));
      if ((int)(uVar6 - (int)(*(float * PTR32 *)(gen_frame + 0x304))) < 0x10) {
        (*(float * PTR32 *)(gen_frame + 0x30c)) = (float *)(uVar6 - (int)(*(float * PTR32 *)(gen_frame + 0x304)));
      }
      else {
        (*(float * PTR32 *)(gen_frame + 0x30c)) = (float *)0x10;
      }
      pfVar4 = (*(float * PTR32 *)(gen_frame + 0x30c));
      (*(int * PTR32 *)(gen_frame + 0x314)) = (int *)0x0;
      (*(float * PTR32 *)(gen_frame + 0x318)) = (float *)0x0;
      (*(float *)(gen_frame + 0x31c)) = -0.0;
      if (0 < (int)(*(float * PTR32 *)(gen_frame + 0x30c))) {
        F_00d95690(&REFG(undefined * PTR32, 0x13516a4),&(*(int * PTR32 *)(gen_frame + 0x314)),((int)(*(float * PTR32 *)(gen_frame + 0x30c)) < 0) - 1 & (uint)(*(float * PTR32 *)(gen_frame + 0x30c)),0xc)
        ;
      }
      iVar3 = ((int)(*(float * PTR32 *)(gen_frame + 0x318)) - (int)pfVar4) + -1;
      iVar5 = (int)(*(float * PTR32 *)(gen_frame + 0x318));
      if (-1 < iVar3) {
        puVar14 = (uint *)((*(int * PTR32 *)(gen_frame + 0x314)) + (int)((int)(uintptr_t)pfVar4) * 3 + iVar3 * 3 + 2);
        do {
          uVar6 = *puVar14;
          puVar14[-1] = 0;
          if (-1 < (int)uVar6) {
            ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),puVar14[-2],(uVar6 & 0x3fffffff) * 2);
          }
          puVar14[-2] = 0;
          *puVar14 = 0x80000000;
          iVar3 = iVar3 + -1;
          puVar14 = puVar14 + -3;
          iVar5 = (int)(*(float * PTR32 *)(gen_frame + 0x318));
          pfVar4 = (*(float * PTR32 *)(gen_frame + 0x30c));
        } while (-1 < iVar3);
      }
      iVar3 = (int)pfVar4 - iVar5;
      piVar13 = (*(int * PTR32 *)(gen_frame + 0x314)) + iVar5 * 3;
      if (0 < iVar3) {
        do {
          if (piVar13 != (int *)0x0) {
            *piVar13 = 0;
            piVar13[1] = 0;
            piVar13[2] = ((int)0x80000000);
          }
          piVar13 = piVar13 + 3;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      (*(float * PTR32 *)(gen_frame + 0x318)) = pfVar4;
      if (0 < (int)pfVar4) {
        (*(float * PTR32 *)(gen_frame + 0x2e0)) = (float *)0x0;
        (*(float * PTR32 *)(gen_frame + 0x32c)) = (*(float * PTR32 *)(gen_frame + 0x30c));
        (*(float * PTR32 *)(gen_frame + 0x2f0)) = (*(float * PTR32 *)(gen_frame + 0x304));
        iVar5 = ((int *)(gen_frame + 0x264))[0];
        fVar17 = REFG(float, 0x1088068);
        do {
          (*(float * PTR32 *)(gen_frame + 0x2dc)) = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x2e0)) + (int)(*(int * PTR32 *)(gen_frame + 0x314)));
          iVar3 = *(int *)(iVar5 + 0x1c) * 9;
          iVar11 = 0;
          if (0 < *(int *)(iVar5 + 0x40) + iVar3) {
            (*(float * PTR32 *)(gen_frame + 0x2f4)) = (*(float * PTR32 *)(gen_frame + 0x2d4)) + 2;
            do {
              if (iVar11 < iVar3) {
                iVar9 = iVar11 / 9;
                iVar10 = (*(int *)(gen_frame + 0x274));
              }
              else {
                iVar9 = iVar11 - iVar3;
                iVar10 = (*(int *)(gen_frame + 0x280));
              }
              if ((*(int *)(iVar10 + iVar9 * 4) != -1) &&
                 (((*(float * PTR32 *)(gen_frame + 0x2d8))[iVar11] == 2.8026e-45 || ((*(float * PTR32 *)(gen_frame + 0x2d8))[iVar11] == 4.2039e-45)))) {
                if (iVar11 < iVar3) {
                  fVar20 = F_00d7c7b0(((*(int * PTR32 *)(gen_frame + 0x26c))[4] * (int)(*(float * PTR32 *)(gen_frame + 0x2f0)) +
                                        *((int *)GEN_TOP(((*(int *)(gen_frame + 0x274)) + (iVar11 / 9) * 4)))) * 0x30 + (*(int * PTR32 *)(gen_frame + 0x26c))[10]
                                        ,iVar11 % 9);
                  (*(float *)(gen_frame + 0x28c)) = fVar20;
                  fVar17 = REFG(float, 0x1088068);
                }
                else {
                  fVar20 = *((float *)GEN_TOP(((*(int * PTR32 *)(gen_frame + 0x26c))[0xd] +
                                     ((*(int * PTR32 *)(gen_frame + 0x26c))[5] * (int)(*(float * PTR32 *)(gen_frame + 0x2f0)) +
                                     *((int *)GEN_TOP(((*(int *)(gen_frame + 0x280)) + (iVar11 - iVar3) * 4)))) * 4)));
                }
                fVar20 = (fVar20 - ((*(float * PTR32 *)(gen_frame + 0x2f4))[-2] + (*(float * PTR32 *)(gen_frame + 0x2f4))[-1]) * fVar17) /
                         (*(*(float * PTR32 *)(gen_frame + 0x2f4)) * REFG(float, 0x10928e4));
                if (*(float *)&REFG(undefined, 0x1088114) <= fVar20) {
                  fVar20 = fVar20 + fVar17;
                }
                else {
                  fVar20 = fVar20 - fVar17;
                }
                iVar5 = (int)fVar20;
                if (iVar5 < -0x1fff) {
                  iVar5 = -0x1fff;
                }
                else if (0x1fff < iVar5) {
                  iVar5 = 0x1fff;
                }
                if ((*(float * PTR32 *)(gen_frame + 0x2dc))[1] == gen_bits2f((uint)gen_fl2bits((*(float * PTR32 *)(gen_frame + 0x2dc))[2]) & 0x3fffffff)) {
                  F_00d95710(&REFG(undefined * PTR32, 0x13516a4),(*(float * PTR32 *)(gen_frame + 0x2dc)),2);
                  fVar17 = REFG(float, 0x1088068);
                }
                *(short *)((int)gen_fl2bits(*(*(float * PTR32 *)(gen_frame + 0x2dc))) + (int)gen_fl2bits((*(float * PTR32 *)(gen_frame + 0x2dc))[1]) * 2) =
                     (short)iVar5;
                (*(float * PTR32 *)(gen_frame + 0x2dc))[1] = gen_bits2f((int)gen_fl2bits((*(float * PTR32 *)(gen_frame + 0x2dc))[1]) + 1);
                iVar5 = ((int *)(gen_frame + 0x264))[0];
              }
              iVar3 = *(int *)(iVar5 + 0x1c) * 9;
              (*(float * PTR32 *)(gen_frame + 0x2f4)) = (*(float * PTR32 *)(gen_frame + 0x2f4)) + 3;
              iVar11 = iVar11 + 1;
            } while (iVar11 < *(int *)(iVar5 + 0x40) + iVar3);
          }
          (*(float * PTR32 *)(gen_frame + 0x2e0)) = (*(float * PTR32 *)(gen_frame + 0x2e0)) + 3;
          (*(float * PTR32 *)(gen_frame + 0x2f0)) = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x2f0)) + 1);
          pfVar4 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x32c)) + -1);
          (*(float * PTR32 *)(gen_frame + 0x32c)) = pfVar4;
        } while (pfVar4 != (float *)0x0);
      }
      pfVar4 = (float *)(*(int * PTR32 *)(gen_frame + 0x314))[1];
      (*(float * PTR32 *)(gen_frame + 0x2f0)) = pfVar4;
      (*(float * PTR32 *)(gen_frame + 0x2f4)) = (float *)0x0;
      if (0 < (int)pfVar4) {
        (*(float * PTR32 *)(gen_frame + 0x2e0)) = pfVar4;
        do {
          if ((int)(*(float * PTR32 *)(gen_frame + 0x2e0)) < 0x10) {
            (*(float * PTR32 *)(gen_frame + 0x2dc)) = (*(float * PTR32 *)(gen_frame + 0x2e0));
          }
          else {
            (*(float * PTR32 *)(gen_frame + 0x2dc)) = (float *)0x10;
          }
          pfVar4 = (*(float * PTR32 *)(gen_frame + 0x2dc));
          if (((int)(*(float * PTR32 *)(gen_frame + 0x2f4)) <= (int)(*(uint *)(gen_frame + 0x224))) && ((int)(*(uint *)(gen_frame + 0x224)) < (int)(*(float * PTR32 *)(gen_frame + 0x2f4)) + (int)(*(float * PTR32 *)(gen_frame + 0x2dc))))
          {
            iVar5 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2cc)) + 0x2c) - (int)gen_fl2bits((*(float *)(gen_frame + 0x308)));
            if ((*(uint *)(gen_frame + 0x294)) == ((*(uint *)(gen_frame + 0x298)) & 0x3fffffff)) {
              F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x290)),2);
            }
            *(short *)((*(int *)(gen_frame + 0x290)) + (*(uint *)(gen_frame + 0x294)) * 2) = (short)iVar5;
            uVar6 = (*(uint *)(gen_frame + 0x294)) + 1;
            (*(uint *)(gen_frame + 0x294)) = uVar6;
            if (uVar6 == ((*(uint *)(gen_frame + 0x298)) & 0x3fffffff)) {
              F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x290)),2);
            }
            *(short *)((*(int *)(gen_frame + 0x290)) + (*(uint *)(gen_frame + 0x294)) * 2) = (short)((uint)iVar5 >> 0x10);
            (*(uint *)(gen_frame + 0x294)) = (*(uint *)(gen_frame + 0x294)) + 1;
          }
          if (((int)(*(float * PTR32 *)(gen_frame + 0x30c)) < 0x10) || ((int)pfVar4 < 0x10)) {
            iVar5 = 0x1f;
            pfVar19 = ((float *)(gen_frame + 0x0));
            do {
              iVar5 = iVar5 + -1;
              *pfVar19 = 0.0;
              pfVar19[1] = 0.0;
              pfVar19[2] = 0.0;
              pfVar19[3] = 0.0;
              pfVar19 = pfVar19 + 4;
            } while (-1 < iVar5);
          }
          if (0 < (int)pfVar4) {
            pfVar19 = ((float *)(gen_frame + 0x0));
            (*(float * PTR32 *)(gen_frame + 0x32c)) = pfVar19;
            iVar5 = (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x2f4))) * 2;
            (*(float * PTR32 *)(gen_frame + 0x2d0)) = pfVar4;
            do {
              piVar13 = (*(int * PTR32 *)(gen_frame + 0x314));
              pfVar4 = (*(float * PTR32 *)(gen_frame + 0x30c));
              (*(float * PTR32 *)(gen_frame + 0x32c)) = pfVar19;
              if (0 < (int)(*(float * PTR32 *)(gen_frame + 0x30c))) {
                do {
                  *(undefined2 *)pfVar19 = *(undefined2 *)(iVar5 + *piVar13);
                  pfVar19 = (float *)((int)pfVar19 + 2);
                  piVar13 = piVar13 + 3;
                  pfVar4 = (float *)((int)pfVar4 + -1);
                } while (pfVar4 != (float *)0x0);
              }
              pfVar19 = (*(float * PTR32 *)(gen_frame + 0x32c)) + 8;
              iVar5 = iVar5 + 2;
              pfVar4 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x2d0)) + -1);
              (*(float * PTR32 *)(gen_frame + 0x2d0)) = pfVar4;
              (*(float * PTR32 *)(gen_frame + 0x32c)) = pfVar19;
            } while (pfVar4 != (float *)0x0);
          }
          pvVar2 = (*(undefined * PTR32 *)(gen_frame + 0x2cc));
          iVar3 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2cc)) + 0x2c);
          piVar13 = (int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2cc)) + 0x28);
          iVar5 = iVar3 + 0x210;
          uVar6 = *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2cc)) + 0x30) & 0x3fffffff;
          if ((int)uVar6 < iVar5) {
            iVar11 = uVar6 * 2;
            if (iVar5 < iVar11) {
              iVar5 = iVar11;
            }
            F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar13,iVar5,1);
          }
          iVar5 = *piVar13;
          *(int *)((int)pvVar2 + 0x2c) = *(int *)((int)pvVar2 + 0x2c) + 0x210;
          uVar6 = F_00d8a970(((float *)(gen_frame + 0x0)),(*(float * PTR32 *)(gen_frame + 0x30c)),(*(float * PTR32 *)(gen_frame + 0x2dc)),iVar5 + iVar3);
          iVar5 = uVar6 - *piVar13;
          uVar6 = *(uint *)((int)pvVar2 + 0x30) & 0x3fffffff;
          if ((int)uVar6 < iVar5) {
            iVar3 = uVar6 * 2;
            if (iVar3 <= iVar5) {
              iVar3 = iVar5;
            }
            F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar13,iVar3,1);
          }
          (*(float * PTR32 *)(gen_frame + 0x2e0)) = (*(float * PTR32 *)(gen_frame + 0x2e0)) + -4;
          iVar3 = (int)(*(float * PTR32 *)(gen_frame + 0x2f4)) + 0x10;
          *(int *)((int)pvVar2 + 0x2c) = iVar5;
          (*(float * PTR32 *)(gen_frame + 0x2f4)) = (float *)iVar3;
        } while (iVar3 < (int)(*(float * PTR32 *)(gen_frame + 0x2f0)));
      }
      iVar5 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2cc)) + 0x2c);
      (*(float *)(gen_frame + 0x308)) = gen_bits2f(iVar5);
      if ((*(uint *)(gen_frame + 0x2a0)) == ((*(uint *)(gen_frame + 0x2a4)) & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x29c)),2);
      }
      *(short *)((*(int *)(gen_frame + 0x29c)) + (*(uint *)(gen_frame + 0x2a0)) * 2) = (short)iVar5;
      uVar6 = (*(uint *)(gen_frame + 0x2a0)) + 1;
      (*(uint *)(gen_frame + 0x2a0)) = uVar6;
      if (uVar6 == ((*(uint *)(gen_frame + 0x2a4)) & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x29c)),2);
      }
      *(short *)((*(int *)(gen_frame + 0x29c)) + (*(uint *)(gen_frame + 0x2a0)) * 2) = (short)((uint)iVar5 >> 0x10);
      (*(uint *)(gen_frame + 0x2a0)) = (*(uint *)(gen_frame + 0x2a0)) + 1;
      iVar5 = (int)(*(float * PTR32 *)(gen_frame + 0x318)) + -1;
      if (-1 < iVar5) {
        puVar14 = (uint *)((*(int * PTR32 *)(gen_frame + 0x314)) + iVar5 * 3 + 2);
        do {
          puVar14[-1] = 0;
          if (-1 < (int)*puVar14) {
            ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),puVar14[-2],(*puVar14 & 0x3fffffff) * 2);
          }
          puVar14[-2] = 0;
          *puVar14 = 0x80000000;
          iVar5 = iVar5 + -1;
          puVar14 = puVar14 + -3;
        } while (-1 < iVar5);
      }
      (*(float * PTR32 *)(gen_frame + 0x318)) = (float *)0x0;
      if (-1 < (int)gen_fl2bits((*(float *)(gen_frame + 0x31c)))) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516a4),(*(int * PTR32 *)(gen_frame + 0x314)),
                   ((uint)gen_fl2bits((*(float *)(gen_frame + 0x31c))) & 0x3fffffff) * 0xc);
      }
      pcVar1 = *(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x26c)) + 0x1c);
      iVar5 = (int)(*(float * PTR32 *)(gen_frame + 0x304)) + 0xf;
      (*(int * PTR32 *)(gen_frame + 0x314)) = (int *)0x0;
      (*(float *)(gen_frame + 0x31c)) = -0.0;
      (*(float * PTR32 *)(gen_frame + 0x304)) = (float *)iVar5;
      uVar6 = (*pcVar1)((*(int * PTR32 *)(gen_frame + 0x26c)));
    } while (iVar5 < (int)uVar6);
  }
  pvVar2 = (*(undefined * PTR32 *)(gen_frame + 0x2cc));
  F_00d79ee0((*(undefined * PTR32 *)(gen_frame + 0x2cc)),&(*(int *)(gen_frame + 0x29c)),0);
  F_00d79ee0(pvVar2,&(*(int *)(gen_frame + 0x290)),1);
  F_00d79ee0(pvVar2,&(*(int *)(gen_frame + 0x2e4)),2);
  F_00d79ee0(pvVar2,&(*(int *)(gen_frame + 0x2f8)),3);
  F_00d79ee0(pvVar2,&(*(int *)(gen_frame + 0x24c)),4);
  F_00d79ee0(pvVar2,&(*(int *)(gen_frame + 0x234)),5);
  F_00d79ee0(pvVar2,&(*(int *)(gen_frame + 0x228)),6);
  F_00d79ee0(pvVar2,&(*(int *)(gen_frame + 0x240)),7);
  F_00d79ee0(pvVar2,&(*(int *)(gen_frame + 0x258)),8);
  F_00d79f10(pvVar2,&(*(int *)(gen_frame + 0x2b4)),0);
  F_00d79f10(pvVar2,&(*(int *)(gen_frame + 0x2c0)),1);
  F_00d79f10(pvVar2,&(*(int *)(gen_frame + 0x2a8)),2);
  iVar5 = *(int *)((int)pvVar2 + 0x38) + 8;
  uVar6 = *(uint *)((int)pvVar2 + 0x3c) & 0x3fffffff;
  if ((int)uVar6 < iVar5) {
    iVar3 = uVar6 * 2;
    if (iVar5 < iVar3) {
      iVar5 = iVar3;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)pvVar2 + 0x34,iVar5,2);
  }
  *(int *)((int)pvVar2 + 0x38) = *(int *)((int)pvVar2 + 0x38) + 8;
  iVar5 = *(int *)((int)pvVar2 + 0x68) + 4;
  uVar6 = *(uint *)((int)pvVar2 + 0x6c) & 0x3fffffff;
  if ((int)uVar6 < iVar5) {
    iVar3 = uVar6 * 2;
    if (iVar5 < iVar3) {
      iVar5 = iVar3;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)pvVar2 + 100,iVar5,4);
  }
  *(int *)((int)pvVar2 + 0x68) = *(int *)((int)pvVar2 + 0x68) + 4;
  if (*(int *)((int)pvVar2 + 0x38) < (int)(*(uint *)((int)pvVar2 + 0x3c) & 0x3fffffff)) {
    F_00d957a0(&REFG(undefined * PTR32, 0x13516ac),(int)pvVar2 + 0x34,2,0,*(int *)((int)pvVar2 + 0x38));
  }
  if (*(int *)((int)pvVar2 + 0x68) < (int)(*(uint *)((int)pvVar2 + 0x6c) & 0x3fffffff)) {
    F_00d957a0(&REFG(undefined * PTR32, 0x13516ac),(int)pvVar2 + 100,4,0,*(int *)((int)pvVar2 + 0x68));
  }
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0x1c))))(REFG(int * PTR32, 0x15dff78),0x3214badc,"Compression");
  iVar5 = *(int *)(((int *)(gen_frame + 0x264))[0] + 0x1c);
  iVar3 = iVar5 * 9;
  uVar6 = 0;
  iVar11 = *(int *)(((int *)(gen_frame + 0x264))[0] + 0x40) + iVar3;
  ((float *)(gen_frame + 0x200))[0] = 0.0;
  ((float *)(gen_frame + 0x200))[1] = 0.0;
  ((float *)(gen_frame + 0x200))[2] = 0.0;
  ((float *)(gen_frame + 0x200))[3] = 0.0;
  (*(float *)(gen_frame + 0x308)) = 0.0;
  (*(float * PTR32 *)(gen_frame + 0x32c)) = (float *)iVar3;
  if (0 < iVar11) {
    (*(float * PTR32 *)(gen_frame + 0x2d0)) = (float *)((*(int *)(gen_frame + 0x280)) + iVar5 * -0x24);
    do {
      if ((int)uVar6 < (int)(*(float * PTR32 *)(gen_frame + 0x32c))) {
        fVar17 = *((float *)GEN_TOP(((*(int *)(gen_frame + 0x274)) + (uVar6 / 9) * 4)));
      }
      else {
        fVar17 = *(*(float * PTR32 *)(gen_frame + 0x2d0));
      }
      if (fVar17 != -NAN) {
        ((float *)(gen_frame + 0x200))[(int)((int)gen_fl2bits((*(float * PTR32 *)(gen_frame + 0x2d8))[uVar6]))] =
             gen_bits2f((int)gen_fl2bits(((float *)(gen_frame + 0x200))[(int)((int)gen_fl2bits((*(float * PTR32 *)(gen_frame + 0x2d8))[uVar6]))]) + 1);
        (*(float *)(gen_frame + 0x308)) = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x308))) + 1);
      }
      uVar6 = uVar6 + 1;
      (*(float * PTR32 *)(gen_frame + 0x2d0)) = (*(float * PTR32 *)(gen_frame + 0x2d0)) + 1;
    } while ((int)uVar6 < iVar11);
  }
  iVar5 = ((*(int * PTR32 *)(gen_frame + 0x26c))[0xe] + (*(int * PTR32 *)(gen_frame + 0x26c))[0xb] * 0xc) * 4;
  uVar6 = F_00d6eca0(pvVar2);
  (*(uint *)(gen_frame + 0x224)) = uVar6;
  F_00da0a80(&(*(int * PTR32 *)(gen_frame + 0x314)),((float *)(gen_frame + 0x0)),0x200);
  puVar26 = &REFG(undefined, 0x1137b18);
  fVar17 = (float)iVar5 / (float)(int)(*(uint *)(gen_frame + 0x224));
  puVar25 = &REFG(undefined, 0x1137b14);
  puVar23 = &REFG(undefined, 0x1137b0c);
  uVar6 = (*(uint *)(gen_frame + 0x224));
  pvVar7 = (undefined *)F_00d9fe80(&(*(int * PTR32 *)(gen_frame + 0x314)),"Compression: ");
  pvVar7 = (undefined *)F_00d9ff40(pvVar7,iVar5);
  pvVar7 = (undefined *)F_00d9fe80(pvVar7,puVar23);
  pvVar7 = (undefined *)F_00d9ff40(pvVar7,uVar6);
  uVar6 = F_00d9fe80(pvVar7,puVar25);
  pvVar7 = (undefined *)F_00d9ffe0(uVar6,fVar17);
  F_00d9fe80(pvVar7,puVar26);
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78),0,0xffffffff,((float *)(gen_frame + 0x0)),
             "Animation\\PredictiveCompressed\\hkaPredictiveCompressedAnimationCtor.cpp",0x29d);
  F_00d9fda0(&(*(int * PTR32 *)(gen_frame + 0x314)));
  F_00da0a80(&(*(int * PTR32 *)(gen_frame + 0x314)),((float *)(gen_frame + 0x0)),0x200);
  iVar5 = *(int *)(((int *)(gen_frame + 0x264))[0] + 0x1c);
  iVar3 = *(int *)(((int *)(gen_frame + 0x264))[0] + 0x40);
  pcVar27 = " animated channels";
  iVar11 = iVar3 + iVar5 * 8 + iVar5;
  puVar23 = &REFG(undefined, 0x1080808);
  pcVar24 = " floats, ";
  pcVar22 = " bones, ";
  fVar17 = (*(float *)(gen_frame + 0x308));
  pvVar7 = (undefined *)F_00d9ff40(&(*(int * PTR32 *)(gen_frame + 0x314)),iVar5);
  pvVar7 = (undefined *)F_00d9fe80(pvVar7,pcVar22);
  pvVar7 = (undefined *)F_00d9ff40(pvVar7,iVar3);
  pvVar7 = (undefined *)F_00d9fe80(pvVar7,pcVar24);
  pvVar7 = (undefined *)F_00d9ff40(pvVar7,(undefined4)gen_fl2bits(fVar17));
  pvVar7 = (undefined *)F_00d9fe80(pvVar7,puVar23);
  pvVar7 = (undefined *)F_00d9ff40(pvVar7,iVar11);
  F_00d9fe80(pvVar7,pcVar27);
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78),0,0xffffffff,((float *)(gen_frame + 0x0)),
             "Animation\\PredictiveCompressed\\hkaPredictiveCompressedAnimationCtor.cpp",0x29f);
  F_00d9fda0(&(*(int * PTR32 *)(gen_frame + 0x314)));
  F_00da0a80(&(*(int * PTR32 *)(gen_frame + 0x314)),((float *)(gen_frame + 0x0)),0x200);
  uVar6 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x26c)) + 0x1c))((*(int * PTR32 *)(gen_frame + 0x26c)));
  pcVar22 = " frames";
  pvVar7 = (undefined *)F_00d9ff40(&(*(int * PTR32 *)(gen_frame + 0x314)),uVar6);
  F_00d9fe80(pvVar7,pcVar22);
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78),0,0xffffffff,((float *)(gen_frame + 0x0)),
             "Animation\\PredictiveCompressed\\hkaPredictiveCompressedAnimationCtor.cpp",0x2a0);
  F_00d9fda0(&(*(int * PTR32 *)(gen_frame + 0x314)));
  F_00da0a80(&(*(int * PTR32 *)(gen_frame + 0x314)),((float *)(gen_frame + 0x0)),0x200);
  pcVar28 = " fixed channels";
  pcVar27 = " ranged, ";
  pcVar24 = " reference, ";
  pcVar22 = " static, ";
  fVar17 = ((float *)(gen_frame + 0x200))[1];
  fVar20 = ((float *)(gen_frame + 0x200))[2];
  fVar18 = ((float *)(gen_frame + 0x200))[3];
  pvVar7 = (undefined *)F_00d9ff40(&(*(int * PTR32 *)(gen_frame + 0x314)),(undefined4)gen_fl2bits(((float *)(gen_frame + 0x200))[0]));
  pvVar7 = (undefined *)F_00d9fe80(pvVar7,pcVar22);
  pvVar7 = (undefined *)F_00d9ff40(pvVar7,(undefined4)gen_fl2bits(fVar17));
  pvVar7 = (undefined *)F_00d9fe80(pvVar7,pcVar24);
  pvVar7 = (undefined *)F_00d9ff40(pvVar7,(undefined4)gen_fl2bits(fVar20));
  pvVar7 = (undefined *)F_00d9fe80(pvVar7,pcVar27);
  pvVar7 = (undefined *)F_00d9ff40(pvVar7,(undefined4)gen_fl2bits(fVar18));
  F_00d9fe80(pvVar7,pcVar28);
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78),0,0xffffffff,((float *)(gen_frame + 0x0)),
             "Animation\\PredictiveCompressed\\hkaPredictiveCompressedAnimationCtor.cpp",0x2a1);
  F_00d9fda0(&(*(int * PTR32 *)(gen_frame + 0x314)));
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0x20))))(REFG(int * PTR32, 0x15dff78));
  if (*(int *)((int)pvVar2 + 0x2c) < (int)(*(uint *)((int)pvVar2 + 0x30) & 0x3fffffff)) {
    F_00d957a0(&REFG(undefined * PTR32, 0x13516ac),(int)pvVar2 + 0x28,1,0,*(int *)((int)pvVar2 + 0x2c));
  }
  uVar6 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x26c)) + 0x1c))((*(int * PTR32 *)(gen_frame + 0x26c)));
  *(uint *)((int)pvVar2 + 0x84) = uVar6;
  *(undefined4 *)((int)pvVar2 + 0x80) = *(undefined4 *)(((int *)(gen_frame + 0x264))[0] + 0x40);
  *(undefined4 *)((int)pvVar2 + 0x7c) = *(undefined4 *)(((int *)(gen_frame + 0x264))[0] + 0x1c);
  iVar5 = (*(int * PTR32 *)(gen_frame + 0x26c))[3];
  *(int *)((int)pvVar2 + 0x8c) = ((int *)(gen_frame + 0x264))[0];
  *(int *)((int)pvVar2 + 0xc) = iVar5;
  *(undefined4 *)((int)pvVar2 + 0x10) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)((int)pvVar2 + 0x14) = *(undefined4 *)(param_1 + 0x20);
  F_00d79e80(pvVar2);
  (*(uint *)(gen_frame + 0x294)) = 0;
  if (((*(uint *)(gen_frame + 0x298)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x290)),((*(uint *)(gen_frame + 0x298)) & 0x3fffffff) * 2);
  }
  (*(int *)(gen_frame + 0x290)) = 0;
  (*(uint *)(gen_frame + 0x298)) = 0x80000000;
  (*(uint *)(gen_frame + 0x2a0)) = 0;
  if (((*(uint *)(gen_frame + 0x2a4)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x29c)),((*(uint *)(gen_frame + 0x2a4)) & 0x3fffffff) * 2);
  }
  (*(int *)(gen_frame + 0x29c)) = 0;
  (*(uint *)(gen_frame + 0x2a4)) = 0x80000000;
  (*(uint *)(gen_frame + 0x2b8)) = 0;
  if (((*(uint *)(gen_frame + 0x2bc)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x2b4)),(*(uint *)(gen_frame + 0x2bc)) * 4);
  }
  (*(int *)(gen_frame + 0x2b4)) = 0;
  (*(uint *)(gen_frame + 0x2bc)) = 0x80000000;
  (*(uint *)(gen_frame + 0x2ac)) = 0;
  if (((*(uint *)(gen_frame + 0x2b0)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x2a8)),(*(uint *)(gen_frame + 0x2b0)) * 4);
  }
  (*(int *)(gen_frame + 0x2a8)) = 0;
  (*(uint *)(gen_frame + 0x2b0)) = 0x80000000;
  (*(uint *)(gen_frame + 0x2c4)) = 0;
  if (((*(uint *)(gen_frame + 0x2c8)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x2c0)),(*(uint *)(gen_frame + 0x2c8)) * 4);
  }
  (*(int *)(gen_frame + 0x2c0)) = 0;
  (*(uint *)(gen_frame + 0x2c8)) = 0x80000000;
  (*(uint *)(gen_frame + 0x25c)) = 0;
  if (((*(uint *)(gen_frame + 0x260)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x258)),((*(uint *)(gen_frame + 0x260)) & 0x3fffffff) * 2);
  }
  (*(int *)(gen_frame + 0x258)) = 0;
  (*(uint *)(gen_frame + 0x260)) = 0x80000000;
  (*(uint *)(gen_frame + 0x244)) = 0;
  if (((*(uint *)(gen_frame + 0x248)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x240)),((*(uint *)(gen_frame + 0x248)) & 0x3fffffff) * 2);
  }
  (*(int *)(gen_frame + 0x240)) = 0;
  (*(uint *)(gen_frame + 0x248)) = 0x80000000;
  (*(uint *)(gen_frame + 0x22c)) = 0;
  if (((*(uint *)(gen_frame + 0x230)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x228)),((*(uint *)(gen_frame + 0x230)) & 0x3fffffff) * 2);
  }
  (*(int *)(gen_frame + 0x228)) = 0;
  (*(uint *)(gen_frame + 0x230)) = 0x80000000;
  (*(uint *)(gen_frame + 0x238)) = 0;
  if (((*(uint *)(gen_frame + 0x23c)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x234)),((*(uint *)(gen_frame + 0x23c)) & 0x3fffffff) * 2);
  }
  (*(int *)(gen_frame + 0x234)) = 0;
  (*(uint *)(gen_frame + 0x23c)) = 0x80000000;
  (*(uint *)(gen_frame + 0x250)) = 0;
  if (((*(uint *)(gen_frame + 0x254)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x24c)),((*(uint *)(gen_frame + 0x254)) & 0x3fffffff) * 2);
  }
  (*(int *)(gen_frame + 0x24c)) = 0;
  (*(uint *)(gen_frame + 0x254)) = 0x80000000;
  (*(uint *)(gen_frame + 0x2fc)) = 0;
  if (((*(uint *)(gen_frame + 0x300)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x2f8)),((*(uint *)(gen_frame + 0x300)) & 0x3fffffff) * 2);
  }
  (*(int *)(gen_frame + 0x2f8)) = 0;
  (*(uint *)(gen_frame + 0x300)) = 0x80000000;
  (*(uint *)(gen_frame + 0x2e8)) = 0;
  if (((*(uint *)(gen_frame + 0x2ec)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x2e4)),((*(uint *)(gen_frame + 0x2ec)) & 0x3fffffff) * 2);
  }
  (*(int *)(gen_frame + 0x2e4)) = 0;
  (*(uint *)(gen_frame + 0x2ec)) = 0x80000000;
  if (((*(uint *)(gen_frame + 0x210)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(float * PTR32 *)(gen_frame + 0x2d8)),(*(uint *)(gen_frame + 0x210)) * 4);
  }
  if (((*(uint *)(gen_frame + 0x21c)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),(*(float * PTR32 *)(gen_frame + 0x2d4)),((*(uint *)(gen_frame + 0x21c)) & 0x3fffffff) * 0xc);
  }
  uVar6 = F_00d7ddb0(((int *)(gen_frame + 0x264)));
  return uVar6;
}

/* ref: FUN_00d7bdc0 */
uint F_00d7bdc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7bdc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  
  F_00d739c0(this,*(undefined4 *)(param_1 + 0xc));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x1137c5c));
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0x80000000;
  *(undefined4 *)((int)this + 0x3c) = 0x80000000;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0x80000000;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  F_00d6f630(((undefined1 *)(gen_frame + 0x8)));
  F_00d79f40(this,param_1,param_2,((undefined1 *)(gen_frame + 0x8)));
  F_00d7dd10(((undefined1 *)(gen_frame + 0x8)));
  return (uint)this;
}

/* ref: FUN_00d7be30 */
uint F_00d7be30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd7be30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00d739c0(this,*(undefined4 *)(param_1 + 0xc));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x1137c5c));
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0x80000000;
  *(undefined4 *)((int)this + 0x3c) = 0x80000000;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0x80000000;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  F_00d79f40(this,param_1,param_2,param_3);
  return (uint)this;
}

/* ref: FUN_00d7be90 */
uint F_00d7be90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7be90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x1137c5c));
  if (param_1 != 0) {
    F_00d79e80(this);
    this = ((undefined *)(uint)(this));
  }
  return (uint)this;
}

/* ref: FUN_00d7beb0 */
uint F_00d7beb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7beb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00d7bed0 */
uint F_00d7bed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7bed0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00d7bee0 */
uint F_00d7bee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7bee0u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  *(bool *)param_2 = *in_ecx == param_3;
  return param_2;
}

/* ref: FUN_00d7bf00 */
uint F_00d7bf00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7bf00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)this = param_1;
  *(undefined2 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return (uint)this;
}

/* ref: FUN_00d7bf30 */
uint F_00d7bf30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7bf30u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x20 + *in_ecx;
}

/* ref: FUN_00d7bf70 */
uint F_00d7bf70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7bf70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = *(int *)(in_ecx + 4) == 0;
  return param_2;
}

/* ref: FUN_00d7bfa0 */
uint F_00d7bfa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7bfa0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_00d7bfc0 */
uint F_00d7bfc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7bfc0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00d7c000 */
uint F_00d7c000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7c000u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_00d7c020 */
unsigned int F_00d7c020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7c020u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (3 < param_2) {
    iVar3 = (param_2 - 4U >> 2) + 1;
    iVar4 = iVar3 * 4;
    puVar1 = (undefined4 *)(param_1 + 4);
    puVar2 = (undefined4 *)(param_3 + 0xc);
    do {
      puVar1[-1] = puVar2[-3];
      iVar3 = iVar3 + -1;
      *puVar1 = *((undefined4 *)GEN_TOP(((param_3 - param_1) + -0x10 + (int)(puVar1 + 4))));
      puVar1[1] = puVar2[-1];
      puVar1[2] = *puVar2;
      puVar1 = puVar1 + 4;
      puVar2 = puVar2 + 4;
    } while (iVar3 != 0);
  }
  if (iVar4 < param_2) {
    iVar3 = param_2 - iVar4;
    puVar1 = (undefined4 *)(param_1 + iVar4 * 4);
    do {
      iVar3 = iVar3 + -1;
      *puVar1 = *((undefined4 *)GEN_TOP(((int)puVar1 + (param_3 - param_1))));
      puVar1 = puVar1 + 1;
    } while (iVar3 != 0);
  }
  return 0;
}

/* ref: FUN_00d7c0b0 */
uint F_00d7c0b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7c0b0u, gen_a0, gen_a1, gen_a2, 0u);
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
    bVar1 = F_00d95690(param_1,this,iVar3,2);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00d7c0f0 */
unsigned int F_00d7c0f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7c0f0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *(undefined2 *)(param_1 + iVar1 * 2) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 0;
}

/* ref: FUN_00d7c130 */
unsigned int F_00d7c130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7c130u, gen_a0, gen_a1, gen_a2, 0u);
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined2 * puVar1;
  int iVar2;
  
  if (0 < param_2) {
    puVar1 = param_1;
    iVar2 = param_2;
    do {
      *puVar1 = *((undefined2 *)GEN_TOP(((param_3 - (int)param_1) + (int)puVar1)));
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00d7c160 */
uint F_00d7c160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd7c160u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  return param_3;
}

/* ref: FUN_00d7c180 */
uint F_00d7c180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7c180u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) * 4)));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)&gen_args[1]));
  *piVar1 = (int)((int)(*(int * PTR32 *)&gen_args[1]) + ((int)(*(int * PTR32 *)&gen_args[1]) >> 0x1f & 3U)) >> 2;
  return uVar2;
}

/* ref: FUN_00d7c1c0 */
unsigned int F_00d7c1c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7c1c0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00d7c220 */
uint F_00d7c220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd7c220u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  return param_3;
}

/* ref: FUN_00d7c240 */
uint F_00d7c240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7c240u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) * 0xc)));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)&gen_args[1]));
  *piVar1 = (int)(*(int * PTR32 *)&gen_args[1]) / 0xc;
  return uVar2;
}

/* ref: FUN_00d7c2b0 */
uint F_00d7c2b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd7c2b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  return param_3;
}

/* ref: FUN_00d7c2d0 */
uint F_00d7c2d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7c2d0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) * 4)));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)&gen_args[1]));
  *piVar1 = (int)((int)(*(int * PTR32 *)&gen_args[1]) + ((int)(*(int * PTR32 *)&gen_args[1]) >> 0x1f & 3U)) >> 2;
  return uVar2;
}

/* ref: FUN_00d7c330 */
uint F_00d7c330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7c330u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 2);
  return uVar1;
}

/* ref: FUN_00d7c360 */
uint F_00d7c360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7c360u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 0xc);
  return uVar1;
}

/* ref: FUN_00d7c380 */
uint F_00d7c380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7c380u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00d7c3a0 */
uint F_00d7c3a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7c3a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00d7c3c0 */
uint F_00d7c3c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7c3c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00d7c3e0 */
uint F_00d7c3e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7c3e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 0xc);
  return uVar1;
}

/* ref: FUN_00d7c430 */
uint F_00d7c430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7c430u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx + param_2 * 4;
}

/* ref: FUN_00d7c440 */
unsigned int F_00d7c440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7c440u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  
  puVar2 = param_1;
  iVar1 = param_2;
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2 = puVar2 + 4;
  }
  return 0;
}

/* ref: FUN_00d7c460 */
uint F_00d7c460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7c460u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 < *(int *)(in_ecx + 0x10)) {
    return *((uint *)GEN_TOP((*(int *)(in_ecx + 0xc) + param_2 * 4)));
  }
  return 0;
}

/* ref: FUN_00d7c480 */
uint F_00d7c480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7c480u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 < *(int *)(in_ecx + 0x1c)) {
    return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x18) + param_2 * 4)));
  }
  return 0;
}

/* ref: FUN_00d7c4a0 */
uint F_00d7c4a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7c4a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 < *(int *)((int)this + 0x10)) {
    return *((int *)GEN_TOP((*(int *)((int)this + 0xc) + param_1 * 4))) << 5;
  }
  return 0;
}

/* ref: FUN_00d7c4d0 */
uint F_00d7c4d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7c4d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 < *(int *)((int)this + 0x10)) {
    return *((int *)GEN_TOP((*(int *)((int)this + 0xc) + param_1 * 4))) << 5;
  }
  return 0;
}

/* ref: FUN_00d7c500 */
uint F_00d7c500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7c500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 < *(int *)((int)this + 0x10)) {
    return *((int *)GEN_TOP((*(int *)((int)this + 0xc) + param_1 * 4))) << 5;
  }
  return 0;
}

/* ref: FUN_00d7c530 */
uint F_00d7c530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7c530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 < *(int *)((int)this + 0x1c)) {
    return *((int *)GEN_TOP((*(int *)((int)this + 0x18) + param_1 * 4))) << 5;
  }
  return 0;
}

/* ref: FUN_00d7c560 */
uint F_00d7c560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7c560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 < *(int *)((int)this + 0x10)) {
    return *((int *)GEN_TOP((*(int *)((int)this + 0xc) + param_1 * 4))) << 5;
  }
  return 0;
}

/* ref: FUN_00d7c590 */
uint F_00d7c590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7c590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 < *(int *)((int)this + 0x10)) {
    return *((int *)GEN_TOP((*(int *)((int)this + 0xc) + param_1 * 4))) << 5;
  }
  return 0;
}

/* ref: FUN_00d7c5c0 */
uint F_00d7c5c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7c5c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 < *(int *)((int)this + 0x10)) {
    return *((int *)GEN_TOP((*(int *)((int)this + 0xc) + param_1 * 4))) << 5;
  }
  return 0;
}

/* ref: FUN_00d7c5f0 */
uint F_00d7c5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7c5f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 < *(int *)((int)this + 0x1c)) {
    return *((int *)GEN_TOP((*(int *)((int)this + 0x18) + param_1 * 4))) << 5;
  }
  return 0;
}

/* ref: FUN_00d7c620 */
uint F_00d7c620(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xd7c620u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  float fVar2;
  
  fVar2 = (param_2 - (in_ecx[1] + *in_ecx) * REFG(float, 0x1088068)) / (in_ecx[2] * REFG(float, 0x10928e4));
  if (*(float *)&REFG(undefined, 0x1088114) <= fVar2) {
    fVar2 = fVar2 + REFG(float, 0x1088068);
  }
  else {
    fVar2 = fVar2 - REFG(float, 0x1088068);
  }
  uVar1 = (uint)fVar2;
  if ((int)uVar1 < -0x1fff) {
    return 0xffffe001;
  }
  if (0x1fff < (int)uVar1) {
    uVar1 = 0x1fff;
  }
  return uVar1;
}

/* ref: FUN_00d7c690 */
unsigned int F_00d7c690(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xd7c690u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  
  fVar1 = ((in_ecx[1] - *in_ecx) * REFG(float, 0x1088068)) * *(float *)&REFG(undefined, 0x1137a8c);
  if (fVar1 < param_2) {
    fVar1 = param_2;
  }
  in_ecx[2] = fVar1;
  return 0;
}

/* ref: FUN_00d7c7b0 */
float F_00d7c7b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7c7b0u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float fVar1;
  float fVar2;
  
  fVar1 = ((ABS(param_1[5]) + ABS(param_1[4])) + ABS(param_1[6])) + ABS(param_1[7]);
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    return *param_1;
  case 1: ;
    return param_1[1];
  case 2: ;
    return param_1[2];
  case 3: ;
    fVar2 = param_1[4];
    if (!(*(float *)&REFG(undefined, 0x1088114) <= param_1[7])) {
      fVar2 = gen_bits2f((uint)gen_fl2bits(fVar2) ^ REFG(uint, 0x10920d0));
    }
    break;
  case 4: ;
    fVar2 = param_1[5];
    if (!(*(float *)&REFG(undefined, 0x1088114) <= param_1[7])) {
      fVar2 = gen_bits2f((uint)gen_fl2bits(fVar2) ^ REFG(uint, 0x10920d0));
    }
    return (float)((float10)fVar2 / (float10)fVar1);
  case 5: ;
    fVar2 = param_1[6];
    if (!(*(float *)&REFG(undefined, 0x1088114) <= param_1[7])) {
      fVar2 = gen_bits2f((uint)gen_fl2bits(fVar2) ^ REFG(uint, 0x10920d0));
    }
    return (float)((float10)fVar2 / (float10)fVar1);
  case 6: ;
    return param_1[8];
  case 7: ;
    return param_1[9];
  case 8: ;
    return param_1[10];
  default: ;
    return (float)(float10)0;
  }
  return (float)((float10)fVar2 / (float10)fVar1);
}

/* ref: FUN_00d7c930 */
byte F_00d7c930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7c930u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 < *(int *)(*in_ecx + 0x1c) * 9;
}

/* ref: FUN_00d7c950 */
uint F_00d7c950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7c950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if ((int)(*(uint *)(*(int *)this + 0x1c) * 9) <= param_1) {
    return *(uint *)(*(int *)this + 0x1c) & 0xffffff00;
  }
  return (uint)(param_1 % 9 - 3U < 3);
}

/* ref: FUN_00d7c9e0 */
uint F_00d7c9e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd7c9e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  int iVar2;
  
  if (param_3 == 0) {
    uVar1 = *(int *)((int)this + 4) + -1 + param_2;
    uVar1 = uVar1 | uVar1 >> 0x10;
    uVar1 = uVar1 | uVar1 >> 8;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = uVar1 | uVar1 >> 2;
    iVar2 = (uVar1 >> 1 | uVar1) + 1;
  }
  else {
    iVar2 = *(int *)((int)this + 4) + param_2;
  }
  uVar1 = *(uint *)((int)this + 8) & 0x3fffffff;
  if (iVar2 < (int)uVar1) {
    uVar1 = F_00d957a0(param_1,this,4,0,iVar2);
  }
  return uVar1;
}

/* ref: FUN_00d7ca40 */
uint F_00d7ca40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7ca40u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00d7ca80 */
uint F_00d7ca80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7ca80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = *(int *)((int)this + 4);
  iVar1 = iVar2 + param_2;
  uVar3 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar3 < iVar1) {
    iVar4 = uVar3 * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    F_00d95690(param_1,this,iVar4,4);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_2;
  return *(int *)this + iVar2 * 4;
}

/* ref: FUN_00d7cad0 */
uint F_00d7cad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd7cad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  uVar2 = *(int *)((int)this + 4) + param_3;
  uVar6 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar6 < (int)uVar2) {
    uVar6 = uVar6 * 2;
    uVar3 = uVar2;
    if ((int)uVar2 < (int)uVar6) {
      uVar3 = uVar6;
    }
    F_00d95690(param_1,this,uVar3,4);
  }
  iVar1 = *(int *)this + *(int *)((int)this + 4) * 4;
  iVar7 = 0;
  if (3 < param_3) {
    iVar8 = (param_3 - 4U >> 2) + 1;
    iVar7 = iVar8 * 4;
    puVar4 = (undefined4 *)(iVar1 + 4);
    puVar5 = (undefined4 *)(param_2 + 0xc);
    do {
      puVar4[-1] = puVar5[-3];
      iVar8 = iVar8 + -1;
      *puVar4 = *((undefined4 *)GEN_TOP(((param_2 - iVar1) + -0x10 + (int)(puVar4 + 4))));
      puVar4[1] = puVar5[-1];
      puVar4[2] = *puVar5;
      puVar4 = puVar4 + 4;
      puVar5 = puVar5 + 4;
    } while (iVar8 != 0);
  }
  if (iVar7 < param_3) {
    iVar8 = param_3 - iVar7;
    puVar4 = (undefined4 *)(iVar1 + iVar7 * 4);
    do {
      iVar8 = iVar8 + -1;
      *puVar4 = *((undefined4 *)GEN_TOP(((int)puVar4 + (param_2 - iVar1))));
      puVar4 = puVar4 + 1;
    } while (iVar8 != 0);
  }
  *(uint *)((int)this + 4) = uVar2;
  return uVar2;
}

/* ref: FUN_00d7cba0 */
uint F_00d7cba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd7cba0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  int iVar2;
  
  if (param_3 == 0) {
    uVar1 = *(int *)((int)this + 4) + -1 + param_2;
    uVar1 = uVar1 | uVar1 >> 0x10;
    uVar1 = uVar1 | uVar1 >> 8;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = uVar1 | uVar1 >> 2;
    iVar2 = (uVar1 >> 1 | uVar1) + 1;
  }
  else {
    iVar2 = *(int *)((int)this + 4) + param_2;
  }
  uVar1 = *(uint *)((int)this + 8) & 0x3fffffff;
  if (iVar2 < (int)uVar1) {
    uVar1 = F_00d957a0(param_1,this,1,0,iVar2);
  }
  return uVar1;
}

/* ref: FUN_00d7cc00 */
uint F_00d7cc00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7cc00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = *(int *)((int)this + 4);
  iVar1 = iVar2 + param_2;
  uVar3 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar3 < iVar1) {
    iVar4 = uVar3 * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    F_00d95690(param_1,this,iVar4,1);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_2;
  return *(int *)this + iVar2;
}

/* ref: FUN_00d7cc50 */
uint F_00d7cc50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd7cc50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  int iVar2;
  
  if (param_3 == 0) {
    uVar1 = *(int *)((int)this + 4) + -1 + param_2;
    uVar1 = uVar1 | uVar1 >> 0x10;
    uVar1 = uVar1 | uVar1 >> 8;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = uVar1 | uVar1 >> 2;
    iVar2 = (uVar1 >> 1 | uVar1) + 1;
  }
  else {
    iVar2 = *(int *)((int)this + 4) + param_2;
  }
  uVar1 = *(uint *)((int)this + 8) & 0x3fffffff;
  if (iVar2 < (int)uVar1) {
    uVar1 = F_00d957a0(param_1,this,2,0,iVar2);
  }
  return uVar1;
}

/* ref: FUN_00d7ccb0 */
uint F_00d7ccb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7ccb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;
  undefined2 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,2);
  }
  puVar1 = ((undefined2 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 2)));
  *puVar1 = *param_2;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00d7ccf0 */
uint F_00d7ccf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7ccf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = *(int *)((int)this + 4);
  iVar1 = iVar2 + param_2;
  uVar3 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar3 < iVar1) {
    iVar4 = uVar3 * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    F_00d95690(param_1,this,iVar4,2);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_2;
  return *(int *)this + iVar2 * 2;
}

/* ref: FUN_00d7cd40 */
unsigned int F_00d7cd40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd7cd40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  undefined2 * puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)((int)this + 4) + param_3;
  uVar1 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar1 < iVar5) {
    iVar4 = uVar1 * 2;
    if (iVar4 <= iVar5) {
      iVar4 = iVar5;
    }
    F_00d95690(param_1,this,iVar4,2);
  }
  puVar2 = ((undefined2 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 2)));
  if (0 < param_3) {
    iVar3 = param_2 - (int)puVar2;
    iVar4 = param_3;
    do {
      *puVar2 = *(undefined2 *)(iVar3 + (int)puVar2);
      puVar2 = puVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(int *)((int)this + 4) = iVar5;
  return 0;
}

/* ref: FUN_00d7cdb0 */
uint F_00d7cdb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7cdb0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = (*(int *)&gen_args[1]);
  *(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0x80000000;
  if ((*(int *)&gen_args[1]) == 0) {
    uVar2 = 0;
  }
  else {
    (*(int *)&gen_args[1]) = (*(int *)&gen_args[1]) * 4;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[1]));
    iVar3 = (int)((*(int *)&gen_args[1]) + ((*(int *)&gen_args[1]) >> 0x1f & 3U)) >> 2;
    if (iVar3 != 0) goto LAB_00d7ce07;
  }
  iVar3 = ((int)0x80000000);
LAB_00d7ce07: ;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = iVar3;
  iVar3 = 0;
  *(uint *)(*(undefined * PTR32 *)&gen_args[0]) = uVar2;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = iVar1;
  if (0 < iVar1) {
    do {
      *(undefined4 *)(uVar2 + iVar3 * 4) = *(*(undefined4 * PTR32 *)&gen_args[2]);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00d7ce40 */
unsigned int F_00d7ce40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7ce40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined8 * param_3 = (undefined8 *)(uintptr_t)gen_a2;
  undefined8 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = *param_3;
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_3 + 1);
      }
      puVar1 = (undefined8 *)((int)puVar1 + 0xc);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00d7ce70 */
unsigned int F_00d7ce70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7ce70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *param_3;
      }
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00d7cea0 */
uint F_00d7cea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7cea0u, gen_a0, gen_a1, gen_a2, 0u);
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
    bVar1 = F_00d95690(param_1,this,iVar3,0xc);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00d7cee0 */
unsigned int F_00d7cee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7cee0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0x80000000;
      }
      puVar1 = puVar1 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00d7cf10 */
unsigned int F_00d7cf10(unsigned int gen_a0)
{
  GEN_ENTER(0xd7cf10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0xc);
  }
  return 0;
}

/* ref: FUN_00d7cf70 */
uint F_00d7cf70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7cf70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return param_1 + *(int *)(*(int *)this + 0x1c) * 9;
}

/* ref: FUN_00d7cf90 */
byte F_00d7cf90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7cf90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 < *(int *)(*(int *)this + 0x1c) * 9) {
    return *((int *)GEN_TOP((*(int *)((int)this + 0x10) + (param_1 / 9) * 4))) != -1;
  }
  return *((int *)GEN_TOP((*(int *)((int)this + 0x1c) + (param_1 + *(int *)(*(int *)this + 0x1c) * -9) * 4)))
         != -1;
}

/* ref: FUN_00d7cff0 */
float F_00d7cff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7cff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  
  if (*(int *)(*(int *)this + 0x1c) * 9 <= param_1) {
    piVar2 = *(int * PTR32 *)((int)this + 0xc);
    iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x1c) + (param_1 + *(int *)(*(int *)this + 0x1c) * -9) * 4
                    )));
    if (iVar1 < piVar2[7]) {
      return *((float *)GEN_TOP((*(int *)(piVar2[6] + iVar1 * 4) * 0x20 + 0xc + *piVar2)));
    }
    return *(float *)(*piVar2 + 0xc);
  }
  iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + (param_1 / 9) * 4)));
  piVar2 = *(int * PTR32 *)((int)this + 0xc);
  if (param_1 % 9 < 3) {
    if (iVar1 < piVar2[4]) {
      return *((float *)GEN_TOP((*(int *)(piVar2[3] + iVar1 * 4) * 0x20 + *piVar2)));
    }
    return *(float *)*piVar2;
  }
  if (5 < param_1 % 9) {
    if (iVar1 < piVar2[4]) {
      return *((float *)GEN_TOP((*(int *)(piVar2[3] + iVar1 * 4) * 0x20 + 8 + *piVar2)));
    }
    return *(float *)(*piVar2 + 8);
  }
  if (iVar1 < piVar2[4]) {
    return *((float *)GEN_TOP((*(int *)(piVar2[3] + iVar1 * 4) * 0x20 + 4 + *piVar2)));
  }
  return *(float *)(*piVar2 + 4);
}

/* ref: FUN_00d7d0e0 */
float F_00d7d0e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7d0e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  
  if (*(int *)(*(int *)this + 0x1c) * 9 <= param_1) {
    piVar2 = *(int * PTR32 *)((int)this + 0xc);
    iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x1c) + (param_1 + *(int *)(*(int *)this + 0x1c) * -9) * 4
                    )));
    if (iVar1 < piVar2[7]) {
      return *((float *)GEN_TOP((*(int *)(piVar2[6] + iVar1 * 4) * 0x20 + 0x1c + *piVar2)));
    }
    return *(float *)(*piVar2 + 0x1c);
  }
  iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + (param_1 / 9) * 4)));
  piVar2 = *(int * PTR32 *)((int)this + 0xc);
  if (param_1 % 9 < 3) {
    if (iVar1 < piVar2[4]) {
      return *((float *)GEN_TOP((*(int *)(piVar2[3] + iVar1 * 4) * 0x20 + 0x10 + *piVar2)));
    }
    return *(float *)(*piVar2 + 0x10);
  }
  if (5 < param_1 % 9) {
    if (iVar1 < piVar2[4]) {
      return *((float *)GEN_TOP((*(int *)(piVar2[3] + iVar1 * 4) * 0x20 + 0x18 + *piVar2)));
    }
    return *(float *)(*piVar2 + 0x18);
  }
  if (iVar1 < piVar2[4]) {
    return *((float *)GEN_TOP((*(int *)(piVar2[3] + iVar1 * 4) * 0x20 + 0x14 + *piVar2)));
  }
  return *(float *)(*piVar2 + 0x14);
}

/* ref: FUN_00d7d1d0 */
float F_00d7d1d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7d1d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  float fVar1;
  
  if (param_2 < *(int *)(*(int *)this + 0x1c) * 9) {
    fVar1 = F_00d7c7b0((*((int *)GEN_TOP((*(int *)((int)this + 8) + 0x10))) * param_1 +
                         *((int *)GEN_TOP((*(int *)((int)this + 0x10) + (param_2 / 9) * 4)))) * 0x30 +
                         *((int *)GEN_TOP((*(int *)((int)this + 8) + 0x28))),param_2 % 9);
    return fVar1;
  }
  return *((float *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 8) + 0x34))) +
                   (*((int *)GEN_TOP((*(int *)((int)this + 8) + 0x14))) * param_1 +
                   *((int *)GEN_TOP((*(int *)((int)this + 0x1c) +
                           (param_2 + *(int *)(*(int *)this + 0x1c) * -9) * 4)))) * 4)));
}

/* ref: FUN_00d7d240 */
float F_00d7d240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7d240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  float fVar3;
  
  iVar1 = *(int *)this;
  if (param_1 < *(int *)(iVar1 + 0x1c) * 9) {
    fVar3 = F_00d7c7b0((param_1 / 9) * 0x30 + *(int *)(iVar1 + 0x24),param_1 % 9);
    return fVar3;
  }
  iVar2 = param_1 + *(int *)(iVar1 + 0x1c) * -9;
  if (*(int *)(iVar1 + 0x34) <= iVar2) {
    return (float)(float10)0;
  }
  return *((float *)GEN_TOP((*(int *)(iVar1 + 0x30) + iVar2 * 4)));
}

/* ref: FUN_00d7d2a0 */
uint F_00d7d2a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7d2a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    uVar1 = *(int *)((int)this + 4) + -1 + param_1;
    uVar1 = uVar1 | uVar1 >> 0x10;
    uVar1 = uVar1 | uVar1 >> 8;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = uVar1 | uVar1 >> 2;
    iVar2 = (uVar1 >> 1 | uVar1) + 1;
  }
  else {
    iVar2 = *(int *)((int)this + 4) + param_1;
  }
  uVar1 = *(uint *)((int)this + 8) & 0x3fffffff;
  if (iVar2 < (int)uVar1) {
    uVar1 = F_00d957a0(&REFG(undefined * PTR32, 0x13516ac),this,4,0,iVar2);
  }
  return uVar1;
}

/* ref: FUN_00d7d310 */
uint F_00d7d310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7d310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 4)));
  *puVar1 = *param_1;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00d7d350 */
uint F_00d7d350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7d350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = *(int *)((int)this + 4);
  iVar1 = iVar2 + param_1;
  uVar3 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar3 < iVar1) {
    iVar4 = uVar3 * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar4,4);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_1;
  return *(int *)this + iVar2 * 4;
}

/* ref: FUN_00d7d3a0 */
uint F_00d7d3a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7d3a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00d7cad0(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00d7d3c0 */
uint F_00d7d3c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7d3c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    uVar1 = *(int *)((int)this + 4) + -1 + param_1;
    uVar1 = uVar1 | uVar1 >> 0x10;
    uVar1 = uVar1 | uVar1 >> 8;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = uVar1 | uVar1 >> 2;
    iVar2 = (uVar1 >> 1 | uVar1) + 1;
  }
  else {
    iVar2 = *(int *)((int)this + 4) + param_1;
  }
  uVar1 = *(uint *)((int)this + 8) & 0x3fffffff;
  if (iVar2 < (int)uVar1) {
    uVar1 = F_00d957a0(&REFG(undefined * PTR32, 0x13516ac),this,1,0,iVar2);
  }
  return uVar1;
}

/* ref: FUN_00d7d430 */
uint F_00d7d430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7d430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = *(int *)((int)this + 4);
  iVar1 = iVar2 + param_1;
  uVar3 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar3 < iVar1) {
    iVar4 = uVar3 * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar4,1);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_1;
  return *(int *)this + iVar2;
}

/* ref: FUN_00d7d480 */
uint F_00d7d480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7d480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    uVar1 = *(int *)((int)this + 4) + -1 + param_1;
    uVar1 = uVar1 | uVar1 >> 0x10;
    uVar1 = uVar1 | uVar1 >> 8;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = uVar1 | uVar1 >> 2;
    iVar2 = (uVar1 >> 1 | uVar1) + 1;
  }
  else {
    iVar2 = *(int *)((int)this + 4) + param_1;
  }
  uVar1 = *(uint *)((int)this + 8) & 0x3fffffff;
  if (iVar2 < (int)uVar1) {
    uVar1 = F_00d957a0(&REFG(undefined * PTR32, 0x13516ac),this,2,0,iVar2);
  }
  return uVar1;
}

/* ref: FUN_00d7d4f0 */
uint F_00d7d4f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7d4f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined2 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,2);
  }
  puVar1 = ((undefined2 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 2)));
  *puVar1 = *param_1;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00d7d530 */
uint F_00d7d530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7d530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = *(int *)((int)this + 4);
  iVar1 = iVar2 + param_1;
  uVar3 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar3 < iVar1) {
    iVar4 = uVar3 * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar4,2);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_1;
  return *(int *)this + iVar2 * 2;
}

/* ref: FUN_00d7d580 */
unsigned int F_00d7d580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7d580u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00d7cd40(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return 0;
}

/* ref: FUN_00d7d5a0 */
uint F_00d7d5a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7d5a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined2 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516a4),this,2);
  }
  puVar1 = ((undefined2 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 2)));
  *puVar1 = *param_1;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00d7d5e0 */
uint F_00d7d5e0(unsigned int gen_a0)
{
  GEN_ENTER(0xd7d5e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * puVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)this;
  if (piVar2[1] == (piVar2[2] & 0x3fffffffU)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar2,2);
  }
  puVar1 = (undefined2 *)(*piVar2 + piVar2[1] * 2);
  *puVar1 = *(undefined2 *)((int)this + 4);
  piVar2[1] = piVar2[1] + 1;
  *(undefined2 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return (uint)puVar1;
}

/* ref: FUN_00d7d630 */
uint F_00d7d630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7d630u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined8 * puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (*(int *)&gen_args[1]);
  *(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0x80000000;
  if ((*(int *)&gen_args[1]) == 0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    (*(int *)&gen_args[1]) = (*(int *)&gen_args[1]) * 0xc;
    puVar1 = ((undefined8 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[1]))))
    ;
    iVar2 = (*(int *)&gen_args[1]) / 0xc;
    if (iVar2 != 0) goto LAB_00d7d68e;
  }
  iVar2 = ((int)0x80000000);
LAB_00d7d68e: ;
  *(undefined8 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = puVar1;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = iVar3;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = iVar2;
  if (0 < iVar3) {
    do {
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = *(*(undefined8 * PTR32 *)&gen_args[2]);
        *(undefined4 *)(puVar1 + 1) = *((undefined4 *)GEN_TOP(((*(undefined8 * PTR32 *)&gen_args[2]) + 1)));
      }
      puVar1 = (undefined8 *)((int)puVar1 + 0xc);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00d7d6d0 */
uint F_00d7d6d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7d6d0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (*(int *)&gen_args[1]);
  *(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0x80000000;
  if ((*(int *)&gen_args[1]) == 0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    (*(int *)&gen_args[1]) = (*(int *)&gen_args[1]) * 4;
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[1]))))
    ;
    iVar2 = (int)((*(int *)&gen_args[1]) + ((*(int *)&gen_args[1]) >> 0x1f & 3U)) >> 2;
    if (iVar2 != 0) goto LAB_00d7d726;
  }
  iVar2 = ((int)0x80000000);
LAB_00d7d726: ;
  *(undefined4 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = puVar1;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = iVar3;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = iVar2;
  if (0 < iVar3) {
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(*(undefined4 * PTR32 *)&gen_args[2]);
      }
      puVar1 = puVar1 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00d7d760 */
uint F_00d7d760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7d760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d7d7a0 */
uint F_00d7d7a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7d7a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d7d7e0 */
uint F_00d7d7e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7d7e0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d7d820 */
uint F_00d7d820(unsigned int gen_a0)
{
  GEN_ENTER(0xd7d820u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d7d860 */
uint F_00d7d860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7d860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  undefined2 * puVar2;
  
  *(ushort *)((int)this + 4) =
       *(ushort *)((int)this + 4) | ((ushort)param_1 & 1) << ((byte)*(int *)((int)this + 8) & 0x1f);
  puVar2 = ((undefined2 *)GEN_TOP((*(int *)((int)this + 8) + 1)));
  *(undefined2 * PTR32 *)((int)this + 8) = puVar2;
  if (puVar2 == (undefined2 *)0x10) {
    piVar1 = *(int * PTR32 *)this;
    if (piVar1[1] == (piVar1[2] & 0x3fffffffU)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar1,2);
    }
    puVar2 = (undefined2 *)(*piVar1 + piVar1[1] * 2);
    *puVar2 = *(undefined2 *)((int)this + 4);
    piVar1[1] = piVar1[1] + 1;
    *(undefined2 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0;
  }
  return (uint)puVar2;
}

/* ref: FUN_00d7d920 */
unsigned int F_00d7d920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7d920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  int * piVar2;
  
  if (0 < *(int *)((int)this + 8)) {
    do {
      *(ushort *)((int)this + 4) =
           *(ushort *)((int)this + 4) |
           ((ushort)param_1 & 1) << ((byte)*(int *)((int)this + 8) & 0x1f);
      iVar1 = *(int *)((int)this + 8) + 1;
      *(int *)((int)this + 8) = iVar1;
      if (iVar1 == 0x10) {
        piVar2 = *(int * PTR32 *)this;
        if (piVar2[1] == (piVar2[2] & 0x3fffffffU)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar2,2);
        }
        *(undefined2 *)(*piVar2 + piVar2[1] * 2) = *(undefined2 *)((int)this + 4);
        piVar2[1] = piVar2[1] + 1;
        *(undefined2 *)((int)this + 4) = 0;
        *(undefined4 *)((int)this + 8) = 0;
      }
    } while (0 < *(int *)((int)this + 8));
  }
  return 0;
}

/* ref: FUN_00d7d9a0 */
uint F_00d7d9a0(unsigned int gen_a0)
{
  GEN_ENTER(0xd7d9a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d7d9e0 */
uint F_00d7d9e0(unsigned int gen_a0)
{
  GEN_ENTER(0xd7d9e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d7da20 */
uint F_00d7da20(unsigned int gen_a0)
{
  GEN_ENTER(0xd7da20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d7da60 */
uint F_00d7da60(unsigned int gen_a0)
{
  GEN_ENTER(0xd7da60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d7daa0 */
uint F_00d7daa0(unsigned int gen_a0)
{
  GEN_ENTER(0xd7daa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d7dae0 */
uint F_00d7dae0(unsigned int gen_a0)
{
  GEN_ENTER(0xd7dae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d7db20 */
uint F_00d7db20(unsigned int gen_a0)
{
  GEN_ENTER(0xd7db20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d7db60 */
uint F_00d7db60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7db60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  LPVOID pvVar2;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 2);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 8) = 0x80000000;
  if ((param_1 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar2 + 0x2c),this,0xc);
  }
  return (uint)this;
}

/* ref: FUN_00d7dbd0 */
uint F_00d7dbd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd7dbd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  
  iVar2 = (*(int *)&gen_args[1]);
  *(int *)(*(undefined * PTR32 *)&gen_args[0]) = (*(int *)&gen_args[1]);
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = (*(int *)&gen_args[2]);
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *(undefined4 *)((*(int *)&gen_args[2]) + 0xc);
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = (*(undefined4 *)&gen_args[3]);
  iVar3 = *(int *)((*(int *)&gen_args[1]) + 0x1c);
  puVar4 = (undefined4 *)0x0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = 0x80000000;
  if (iVar3 == 0) {
LAB_00d7dc39: ;
    iVar1 = ((int)0x80000000);
  }
  else {
    (*(int *)&gen_args[1]) = iVar3 * 4;
    puVar4 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[1]))))
    ;
    iVar1 = (int)((*(int *)&gen_args[1]) + ((*(int *)&gen_args[1]) >> 0x1f & 3U)) >> 2;
    if (iVar1 == 0) goto LAB_00d7dc39;
  }
  *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = puVar4;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = iVar3;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = iVar1;
  if (0 < iVar3) {
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0xffffffff;
      puVar4 = puVar4 + 1;
    }
  }
  iVar3 = *(int *)(iVar2 + 0x40);
  puVar4 = (undefined4 *)0x0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) = 0x80000000;
  if (iVar3 != 0) {
    (*(int *)&gen_args[1]) = iVar3 * 4;
    puVar4 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[1]))))
    ;
    iVar2 = (int)((*(int *)&gen_args[1]) + ((*(int *)&gen_args[1]) >> 0x1f & 3U)) >> 2;
    if (iVar2 != 0) goto LAB_00d7dca0;
  }
  iVar2 = ((int)0x80000000);
LAB_00d7dca0: ;
  *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = puVar4;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = iVar3;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) = iVar2;
  if (0 < iVar3) {
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0xffffffff;
      puVar4 = puVar4 + 1;
    }
  }
  iVar3 = 0;
  if (0 < *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x14)))) {
    do {
      *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) +
              *((short *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x10))) + iVar3 * 2))) * 4))) = iVar3;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x14))));
  }
  iVar3 = 0;
  if (0 < *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x20)))) {
    do {
      *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) +
              *((short *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x1c))) + iVar3 * 2))) * 4))) = iVar3;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x20))));
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00d7dd10 */
uint F_00d7dd10(unsigned int gen_a0)
{
  GEN_ENTER(0xd7dd10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
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
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 5);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 8) = 0x80000000;
  return uVar1;
}

/* ref: FUN_00d7ddb0 */
uint F_00d7ddb0(unsigned int gen_a0)
{
  GEN_ENTER(0xd7ddb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0x24);
  *(undefined4 *)((int)this + 0x20) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x1c),iVar1 * 4);
  }
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0x80000000;
  uVar2 = *(uint *)((int)this + 0x18);
  *(undefined4 *)((int)this + 0x14) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x10),uVar2 * 4);
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0x80000000;
  return uVar2;
}

/* ref: FUN_00d7de20 */
unsigned int F_00d7de20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7de20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  uint * puVar2;
  int iVar3;
  
  iVar3 = param_2 + -1;
  if (-1 < iVar3) {
    puVar2 = (uint *)(param_1 + 8 + iVar3 * 0xc);
    do {
      uVar1 = *puVar2;
      puVar2[-1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516a4),puVar2[-2],(uVar1 & 0x3fffffff) * 2);
      }
      puVar2[-2] = 0;
      *puVar2 = 0x80000000;
      iVar3 = iVar3 + -1;
      puVar2 = puVar2 + -3;
    } while (-1 < iVar3);
  }
  return 0;
}

/* ref: FUN_00d7de80 */
unsigned int F_00d7de80(unsigned int gen_a0)
{
  GEN_ENTER(0xd7de80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint * puVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar3) {
    puVar2 = (uint *)(*(int *)this + 8 + iVar3 * 0xc);
    do {
      uVar1 = *puVar2;
      puVar2[-1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516a4),puVar2[-2],(uVar1 & 0x3fffffff) * 2);
      }
      puVar2[-2] = 0;
      *puVar2 = 0x80000000;
      iVar3 = iVar3 + -1;
      puVar2 = puVar2 + -3;
    } while (-1 < iVar3);
    *(undefined4 *)((int)this + 4) = 0;
    return 0;
  }
  *(undefined4 *)((int)this + 4) = 0;
  return 0;
}

/* ref: FUN_00d7def0 */
unsigned int F_00d7def0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7def0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  undefined4 * puVar2;
  uint * puVar3;
  int iVar4;
  
  uVar1 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar4 = uVar1 * 2;
    if (iVar4 <= param_2) {
      iVar4 = param_2;
    }
    F_00d95690(param_1,this,iVar4,0xc);
  }
  iVar4 = (*(int *)((int)this + 4) - param_2) + -1;
  if (-1 < iVar4) {
    puVar3 = (uint *)(*(int *)this + param_2 * 0xc + 8 + iVar4 * 0xc);
    do {
      uVar1 = *puVar3;
      puVar3[-1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516a4),puVar3[-2],(uVar1 & 0x3fffffff) * 2);
      }
      puVar3[-2] = 0;
      *puVar3 = 0x80000000;
      puVar3 = puVar3 + -3;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  iVar4 = param_2 - *(int *)((int)this + 4);
  puVar2 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 0xc)));
  if (0 < iVar4) {
    do {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0x80000000;
      }
      puVar2 = puVar2 + 3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(int *)((int)this + 4) = param_2;
  return 0;
}

/* ref: FUN_00d7dfc0 */
uint F_00d7dfc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7dfc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  uint * puVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar3) {
    puVar2 = (uint *)(*(int *)this + 8 + iVar3 * 0xc);
    do {
      uVar1 = *puVar2;
      puVar2[-1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516a4),puVar2[-2],(uVar1 & 0x3fffffff) * 2);
      }
      puVar2[-2] = 0;
      *puVar2 = 0x80000000;
      puVar2 = puVar2 + -3;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d7e060 */
unsigned int F_00d7e060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7e060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  uint * puVar4;
  int iVar5;
  
  uVar1 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar1 < param_1) {
    iVar5 = uVar1 * 2;
    iVar3 = param_1;
    if (param_1 < iVar5) {
      iVar3 = iVar5;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar3,0xc);
  }
  iVar5 = (*(int *)((int)this + 4) - param_1) + -1;
  if (-1 < iVar5) {
    puVar4 = (uint *)(*(int *)this + param_1 * 0xc + 8 + iVar5 * 0xc);
    do {
      uVar1 = *puVar4;
      puVar4[-1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516a4),puVar4[-2],(uVar1 & 0x3fffffff) * 2);
      }
      puVar4[-2] = 0;
      *puVar4 = 0x80000000;
      puVar4 = puVar4 + -3;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  iVar5 = param_1 - *(int *)((int)this + 4);
  puVar2 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 0xc)));
  if (0 < iVar5) {
    do {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0x80000000;
      }
      puVar2 = puVar2 + 3;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *(int *)((int)this + 4) = param_1;
  return 0;
}

/* ref: FUN_00d7e250 */
uint F_00d7e250(unsigned int gen_a0)
{
  GEN_ENTER(0xd7e250u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00d7e280 */
uint F_00d7e280(unsigned int gen_a0)
{
  GEN_ENTER(0xd7e280u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0x6c);
  *(undefined4 *)((int)this + 0x68) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 100),iVar1 * 4);
  }
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0x80000000;
  uVar2 = *(uint *)((int)this + 0x3c);
  *(undefined4 *)((int)this + 0x38) = 0;
  if (-1 < (int)uVar2) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x34),(uVar2 & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0x80000000;
  uVar2 = *(uint *)((int)this + 0x30);
  *(undefined4 *)((int)this + 0x2c) = 0;
  if (-1 < (int)uVar2) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x28),uVar2 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x30) = 0x80000000;
  uVar2 = F_00d3e6d0(this);
  return uVar2;
}

/* ref: hkaPredictiveCompressedAnimation::vf0 */
uint F_00d7e320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7e320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d7e280(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00d7e380 */
uint F_00d7e380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7e380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1);
  }
  *(undefined * PTR32 *)this = param_1;
  return (uint)this;
}

/* ref: FUN_00d7e3b0 */
unsigned int F_00d7e3b0(unsigned int gen_a0)
{
  GEN_ENTER(0xd7e3b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00d7e460 */
uint F_00d7e460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7e460u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 0xc);
  return uVar1;
}

/* ref: FUN_00d7e490 */
uint F_00d7e490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7e490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 << 6);
  return uVar1;
}

/* ref: FUN_00d7e530 */
uint F_00d7e530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7e530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 << 6);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d7e570 */
uint F_00d7e570(unsigned int gen_a0)
{
  GEN_ENTER(0xd7e570u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 6);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d7e5b0 */
uint F_00d7e5b0(unsigned int gen_a0)
{
  GEN_ENTER(0xd7e5b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 6);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d7e5f0 */
unsigned int F_00d7e5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7e5f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  uint * puVar2;
  int iVar3;
  
  iVar3 = param_2 + -1;
  if (-1 < iVar3) {
    puVar2 = (uint *)(param_1 + 8 + iVar3 * 0xc);
    do {
      uVar1 = *puVar2;
      puVar2[-1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),puVar2[-2],(uVar1 & 0x3fffffff) * 2);
      }
      puVar2[-2] = 0;
      *puVar2 = 0x80000000;
      iVar3 = iVar3 + -1;
      puVar2 = puVar2 + -3;
    } while (-1 < iVar3);
  }
  return 0;
}

/* ref: FUN_00d7e650 */
unsigned int F_00d7e650(unsigned int gen_a0)
{
  GEN_ENTER(0xd7e650u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint * puVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar3) {
    puVar2 = (uint *)(*(int *)this + 8 + iVar3 * 0xc);
    do {
      uVar1 = *puVar2;
      puVar2[-1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),puVar2[-2],(uVar1 & 0x3fffffff) * 2);
      }
      puVar2[-2] = 0;
      *puVar2 = 0x80000000;
      iVar3 = iVar3 + -1;
      puVar2 = puVar2 + -3;
    } while (-1 < iVar3);
    *(undefined4 *)((int)this + 4) = 0;
    return 0;
  }
  *(undefined4 *)((int)this + 4) = 0;
  return 0;
}

/* ref: FUN_00d7e6c0 */
uint F_00d7e6c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7e6c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  uint * puVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar3) {
    puVar2 = (uint *)(*(int *)this + 8 + iVar3 * 0xc);
    do {
      uVar1 = *puVar2;
      puVar2[-1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),puVar2[-2],(uVar1 & 0x3fffffff) * 2);
      }
      puVar2[-2] = 0;
      *puVar2 = 0x80000000;
      puVar2 = puVar2 + -3;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d7e880 */
uint F_00d7e880(unsigned int gen_a0)
{
  GEN_ENTER(0xd7e880u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *(undefined2 *)((int)in_ecx + 6) = 1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x1137cac));
  in_ecx[2] = 0;
  F_00d91340(in_ecx + 3);
  F_00d91340(in_ecx + 4);
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[8] = 0x80000000;
  in_ecx[9] = 0;
  in_ecx[10] = 0;
  in_ecx[0xb] = 0x80000000;
  return (uint)in_ecx;
}

/* ref: FUN_00d7e8d0 */
uint F_00d7e8d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7e8d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x1137cac));
  F_00d91350(in_ecx + 3,param_2);
  F_00d91350(in_ecx + 4,param_2);
  return (uint)in_ecx;
}

/* ref: FUN_00d7e900 */
uint F_00d7e900(unsigned int gen_a0)
{
  GEN_ENTER(0xd7e900u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  uint * puVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1137cac));
  iVar2 = *(int *)((int)this + 0x2c);
  *(undefined4 *)((int)this + 0x28) = 0;
  if (-1 < iVar2) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x24),iVar2 << 6);
  }
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0x80000000;
  iVar2 = *(int *)((int)this + 0x1c) + -1;
  if (-1 < iVar2) {
    puVar3 = ((uint *)GEN_TOP((*(int *)((int)this + 0x18) + 8 + iVar2 * 0xc)));
    do {
      uVar1 = *puVar3;
      puVar3[-1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),puVar3[-2],(uVar1 & 0x3fffffff) * 2);
      }
      puVar3[-2] = 0;
      *puVar3 = 0x80000000;
      puVar3 = puVar3 + -3;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 0x20);
  *(undefined4 *)((int)this + 0x1c) = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x18),(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0x80000000;
  if (*(undefined * PTR32 *)((int)this + 0x14) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 0x14));
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  F_00d91510((undefined *)((int)this + 0x10));
  uVar1 = F_00d91510((undefined *)((int)this + 0xc));
  if (*(undefined * PTR32 *)((int)this + 8) != (undefined *)0x0) {
    uVar1 = F_00d91a80(*(undefined * PTR32 *)((int)this + 8));
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: FUN_00d7ea00 */
uint F_00d7ea00(unsigned int gen_a0)
{
  GEN_ENTER(0xd7ea00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkaMeshBinding::vf0 */
uint F_00d7ea30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7ea30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d7e900(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00d7eae0 */
uint F_00d7eae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7eae0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00d7eb60 */
unsigned int F_00d7eb60(unsigned int gen_a0)
{
  GEN_ENTER(0xd7eb60u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float * pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  iVar3 = param_1[1];
  iVar4 = 0;
  fVar5 = REFG(float, 0x1136e98);
  if (3 < iVar3) {
    pfVar1 = (float *)(*param_1 + 8);
    iVar2 = (iVar3 - 4U >> 2) + 1;
    iVar4 = iVar2 * 4;
    do {
      if (!(pfVar1[-2] < fVar5)) {
        fVar5 = pfVar1[-2];
      }
      if (!(pfVar1[-1] < fVar5)) {
        fVar5 = pfVar1[-1];
      }
      if (!(*pfVar1 < fVar5)) {
        fVar5 = *pfVar1;
      }
      if (!(pfVar1[1] < fVar5)) {
        fVar5 = pfVar1[1];
      }
      pfVar1 = pfVar1 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (iVar4 < iVar3) {
    pfVar1 = (float *)(*param_1 + iVar4 * 4);
    iVar3 = iVar3 - iVar4;
    do {
      if (!(*pfVar1 < fVar5)) {
        fVar5 = *pfVar1;
      }
      pfVar1 = pfVar1 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}

/* ref: FUN_00d7ec00 */
unsigned int F_00d7ec00(unsigned int gen_a0)
{
  GEN_ENTER(0xd7ec00u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float * pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  iVar3 = param_1[1];
  iVar4 = 0;
  fVar5 = REFG(float, 0x1136c54);
  if (3 < iVar3) {
    pfVar1 = (float *)(*param_1 + 8);
    iVar2 = (iVar3 - 4U >> 2) + 1;
    iVar4 = iVar2 * 4;
    do {
      if (!(fVar5 < pfVar1[-2])) {
        fVar5 = pfVar1[-2];
      }
      if (!(fVar5 < pfVar1[-1])) {
        fVar5 = pfVar1[-1];
      }
      if (!(fVar5 < *pfVar1)) {
        fVar5 = *pfVar1;
      }
      if (!(fVar5 < pfVar1[1])) {
        fVar5 = pfVar1[1];
      }
      pfVar1 = pfVar1 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (iVar4 < iVar3) {
    pfVar1 = (float *)(*param_1 + iVar4 * 4);
    iVar3 = iVar3 - iVar4;
    do {
      if (!(fVar5 < *pfVar1)) {
        fVar5 = *pfVar1;
      }
      pfVar1 = pfVar1 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}

/* ref: FUN_00d7eca0 */
uint F_00d7eca0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xd7eca0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float param_3 = (float)gen_a2;
  float * pfVar1;
  int iVar2;
  float fVar3;
  
  fVar3 = *((float *)GEN_TOP((*(int *)(param_1 + 0x44) + param_2 * 4)));
  if (!(fVar3 < param_3)) {
    fVar3 = param_3;
  }
  iVar2 = *(int *)(param_1 + 0x50);
  *((float *)GEN_TOP((*(int *)(param_1 + 0x44) + param_2 * 4))) = fVar3;
  fVar3 = *(float *)(iVar2 + param_2 * 4);
  pfVar1 = (float *)(iVar2 + param_2 * 4);
  if (param_3 < fVar3) {
    *pfVar1 = fVar3;
    return (uint)pfVar1;
  }
  *pfVar1 = param_3;
  return (uint)pfVar1;
}

/* ref: FUN_00d7ed80 */
uint F_00d7ed80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7ed80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if ((char)param_2 != '\0') {
    uVar1 = *(uint *)((int)this + 0x80);
    *(undefined4 *)(uVar1 + param_1 * 4) = 0;
    return uVar1;
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x74) + param_1 * 4))) = REFG(float, 0x1087f04);
  return param_1;
}

/* ref: FUN_00d7edc0 */
uint F_00d7edc0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0xd7edc0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  unsigned int gen_args[10];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  memcpy(&gen_args[4], &gen_a4, sizeof gen_a4);
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  gen_args[8] = gen_a8;
  gen_args[9] = gen_a9;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = (*(int *)&gen_args[1]);
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[3])REFP(0x1137cbc));
  *((undefined2 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[0]) + 6))) = 1;
  (*(undefined4 * PTR32 *)&gen_args[0])[4] = 0x80000000;
  (*(undefined4 * PTR32 *)&gen_args[0])[2] = 0;
  (*(undefined4 * PTR32 *)&gen_args[0])[3] = 0;
  (*(undefined4 * PTR32 *)&gen_args[0])[5] = 0;
  (*(undefined4 * PTR32 *)&gen_args[0])[6] = 0;
  (*(undefined4 * PTR32 *)&gen_args[0])[7] = 0x80000000;
  (*(undefined4 * PTR32 *)&gen_args[0])[8] = 0;
  (*(undefined4 * PTR32 *)&gen_args[0])[9] = 0;
  (*(undefined4 * PTR32 *)&gen_args[0])[10] = 0x80000000;
  (*(undefined4 * PTR32 *)&gen_args[0])[0xb] = 0;
  (*(undefined4 * PTR32 *)&gen_args[0])[0xc] = 0;
  (*(undefined4 * PTR32 *)&gen_args[0])[0xd] = 0x80000000;
  (*(undefined4 * PTR32 *)&gen_args[0])[0xe] = 0;
  (*(undefined4 * PTR32 *)&gen_args[0])[0xf] = 0;
  (*(undefined4 * PTR32 *)&gen_args[0])[0x10] = 0x80000000;
  (*(undefined4 * PTR32 *)&gen_args[0])[0x11] = 0;
  (*(undefined4 * PTR32 *)&gen_args[0])[0x12] = 0;
  (*(undefined4 * PTR32 *)&gen_args[0])[0x13] = 0x80000000;
  if ((*(int *)&gen_args[1]) == 0) {
    puVar1 = (undefined4 *)0x0;
LAB_00d7ee50: ;
    iVar2 = ((int)0x80000000);
  }
  else {
    (*(int *)&gen_args[1]) = (*(int *)&gen_args[1]) * 4;
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[1]))))
    ;
    iVar2 = (int)((*(int *)&gen_args[1]) + ((*(int *)&gen_args[1]) >> 0x1f & 3U)) >> 2;
    if (iVar2 == 0) goto LAB_00d7ee50;
  }
  (*(undefined4 * PTR32 *)&gen_args[0])[0x11] = puVar1;
  (*(undefined4 * PTR32 *)&gen_args[0])[0x12] = iVar4;
  (*(undefined4 * PTR32 *)&gen_args[0])[0x13] = iVar2;
  iVar2 = iVar4;
  if (0 < iVar4) {
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar1 = 0x7f7fffee;
      puVar1 = puVar1 + 1;
    }
  }
  (*(undefined4 * PTR32 *)&gen_args[0])[0x14] = 0;
  (*(undefined4 * PTR32 *)&gen_args[0])[0x15] = 0;
  (*(undefined4 * PTR32 *)&gen_args[0])[0x16] = 0x80000000;
  if (iVar4 == 0) {
    puVar1 = (undefined4 *)0x0;
LAB_00d7eeb6: ;
    iVar2 = ((int)0x80000000);
  }
  else {
    (*(int *)&gen_args[1]) = iVar4 * 4;
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[1]))))
    ;
    iVar2 = (int)((*(int *)&gen_args[1]) + ((*(int *)&gen_args[1]) >> 0x1f & 3U)) >> 2;
    if (iVar2 == 0) goto LAB_00d7eeb6;
  }
  (*(undefined4 * PTR32 *)&gen_args[0])[0x14] = puVar1;
  (*(undefined4 * PTR32 *)&gen_args[0])[0x15] = iVar4;
  (*(undefined4 * PTR32 *)&gen_args[0])[0x16] = iVar2;
  iVar2 = iVar4;
  if (0 < iVar4) {
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar1 = 0xff7fffee;
      puVar1 = puVar1 + 1;
    }
  }
  (*(undefined4 * PTR32 *)&gen_args[0])[0x17] = 0;
  (*(undefined4 * PTR32 *)&gen_args[0])[0x18] = 0;
  (*(undefined4 * PTR32 *)&gen_args[0])[0x19] = 0x80000000;
  if (iVar4 == 0) {
    puVar1 = (undefined4 *)0x0;
LAB_00d7ef1b: ;
    iVar2 = ((int)0x80000000);
  }
  else {
    (*(int *)&gen_args[1]) = iVar4 * 4;
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[1]))))
    ;
    iVar2 = (int)((*(int *)&gen_args[1]) + ((*(int *)&gen_args[1]) >> 0x1f & 3U)) >> 2;
    if (iVar2 == 0) goto LAB_00d7ef1b;
  }
  (*(undefined4 * PTR32 *)&gen_args[0])[0x17] = puVar1;
  (*(undefined4 * PTR32 *)&gen_args[0])[0x18] = iVar4;
  (*(undefined4 * PTR32 *)&gen_args[0])[0x19] = iVar2;
  iVar2 = iVar4;
  if (0 < iVar4) {
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar1 = 0x7f7fffee;
      puVar1 = puVar1 + 1;
    }
  }
  (*(undefined4 * PTR32 *)&gen_args[0])[0x1a] = 0;
  (*(undefined4 * PTR32 *)&gen_args[0])[0x1b] = 0;
  (*(undefined4 * PTR32 *)&gen_args[0])[0x1c] = 0x80000000;
  if (iVar4 == 0) {
    puVar1 = (undefined4 *)0x0;
LAB_00d7ef81: ;
    iVar2 = ((int)0x80000000);
  }
  else {
    (*(int *)&gen_args[1]) = iVar4 * 4;
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[1]))))
    ;
    iVar2 = (int)((*(int *)&gen_args[1]) + ((*(int *)&gen_args[1]) >> 0x1f & 3U)) >> 2;
    if (iVar2 == 0) goto LAB_00d7ef81;
  }
  (*(undefined4 * PTR32 *)&gen_args[0])[0x1a] = puVar1;
  (*(undefined4 * PTR32 *)&gen_args[0])[0x1b] = iVar4;
  (*(undefined4 * PTR32 *)&gen_args[0])[0x1c] = iVar2;
  iVar2 = iVar4;
  if (0 < iVar4) {
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar1 = 0xff7fffee;
      puVar1 = puVar1 + 1;
    }
  }
  (*(undefined4 * PTR32 *)&gen_args[0])[0x1d] = 0;
  (*(undefined4 * PTR32 *)&gen_args[0])[0x1e] = 0;
  (*(undefined4 * PTR32 *)&gen_args[0])[0x1f] = 0x80000000;
  if (iVar4 == 0) {
    puVar1 = (undefined4 *)0x0;
LAB_00d7efe6: ;
    iVar2 = ((int)0x80000000);
  }
  else {
    (*(int *)&gen_args[1]) = iVar4 * 4;
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[1]))))
    ;
    iVar2 = (int)((*(int *)&gen_args[1]) + ((*(int *)&gen_args[1]) >> 0x1f & 3U)) >> 2;
    if (iVar2 == 0) goto LAB_00d7efe6;
  }
  (*(undefined4 * PTR32 *)&gen_args[0])[0x1d] = puVar1;
  (*(undefined4 * PTR32 *)&gen_args[0])[0x1e] = iVar4;
  (*(undefined4 * PTR32 *)&gen_args[0])[0x1f] = iVar2;
  iVar2 = iVar4;
  if (0 < iVar4) {
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
  }
  (*(undefined4 * PTR32 *)&gen_args[0])[0x20] = 0;
  (*(undefined4 * PTR32 *)&gen_args[0])[0x21] = 0;
  (*(undefined4 * PTR32 *)&gen_args[0])[0x22] = 0x80000000;
  if (iVar4 == 0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    (*(int *)&gen_args[1]) = iVar4 * 4;
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[1]))))
    ;
    iVar2 = (int)((*(int *)&gen_args[1]) + ((*(int *)&gen_args[1]) >> 0x1f & 3U)) >> 2;
    if (iVar2 != 0) goto LAB_00d7f057;
  }
  iVar2 = ((int)0x80000000);
LAB_00d7f057: ;
  (*(undefined4 * PTR32 *)&gen_args[0])[0x20] = puVar1;
  (*(undefined4 * PTR32 *)&gen_args[0])[0x21] = iVar4;
  (*(undefined4 * PTR32 *)&gen_args[0])[0x22] = iVar2;
  if (0 < iVar4) {
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar1 = 0x3f800000;
      puVar1 = puVar1 + 1;
    }
  }
  (*(undefined4 * PTR32 *)&gen_args[0])[0x23] = (undefined4)gen_fl2bits((*(float *)&gen_args[3]));
  (*(undefined4 * PTR32 *)&gen_args[0])[0x24] = (undefined4)gen_fl2bits((*(float *)&gen_args[4]));
  (*(undefined4 * PTR32 *)&gen_args[0])[0x25] = (undefined4)gen_fl2bits((*(float *)&gen_args[2]));
  uVar3 = F_00da0e60((*(undefined4 *)&gen_args[5]));
  iVar4 = uVar3 + 1;
  if ((int)((*(undefined4 * PTR32 *)&gen_args[0])[4] & 0x3fffffff) < iVar4) {
    iVar2 = ((*(undefined4 * PTR32 *)&gen_args[0])[4] & 0x3fffffff) * 2;
    if (iVar2 <= iVar4) {
      iVar2 = iVar4;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 * PTR32 *)&gen_args[0]) + 2,iVar2,1);
  }
  (*(undefined4 * PTR32 *)&gen_args[0])[3] = iVar4;
  F_00da0e20((*(undefined4 * PTR32 *)&gen_args[0])[2],(*(undefined4 *)&gen_args[5]));
  uVar3 = F_00da0e60((*(undefined4 *)&gen_args[6]));
  iVar4 = uVar3 + 1;
  if ((int)((*(undefined4 * PTR32 *)&gen_args[0])[7] & 0x3fffffff) < iVar4) {
    iVar2 = ((*(undefined4 * PTR32 *)&gen_args[0])[7] & 0x3fffffff) * 2;
    if (iVar2 <= iVar4) {
      iVar2 = iVar4;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 * PTR32 *)&gen_args[0]) + 5,iVar2,1);
  }
  (*(undefined4 * PTR32 *)&gen_args[0])[6] = iVar4;
  F_00da0e20((*(undefined4 * PTR32 *)&gen_args[0])[5],(*(undefined4 *)&gen_args[6]));
  uVar3 = F_00da0e60((*(undefined4 *)&gen_args[7]));
  iVar4 = uVar3 + 1;
  if ((int)((*(undefined4 * PTR32 *)&gen_args[0])[10] & 0x3fffffff) < iVar4) {
    iVar2 = ((*(undefined4 * PTR32 *)&gen_args[0])[10] & 0x3fffffff) * 2;
    if (iVar2 <= iVar4) {
      iVar2 = iVar4;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 * PTR32 *)&gen_args[0]) + 8,iVar2,1);
  }
  (*(undefined4 * PTR32 *)&gen_args[0])[9] = iVar4;
  F_00da0e20((*(undefined4 * PTR32 *)&gen_args[0])[8],(*(undefined4 *)&gen_args[7]));
  uVar3 = F_00da0e60((*(undefined4 *)&gen_args[8]));
  iVar4 = uVar3 + 1;
  if ((int)((*(undefined4 * PTR32 *)&gen_args[0])[0xd] & 0x3fffffff) < iVar4) {
    iVar2 = ((*(undefined4 * PTR32 *)&gen_args[0])[0xd] & 0x3fffffff) * 2;
    if (iVar2 <= iVar4) {
      iVar2 = iVar4;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 * PTR32 *)&gen_args[0]) + 0xb,iVar2,1);
  }
  (*(undefined4 * PTR32 *)&gen_args[0])[0xc] = iVar4;
  F_00da0e20((*(undefined4 * PTR32 *)&gen_args[0])[0xb],(*(undefined4 *)&gen_args[8]));
  uVar3 = F_00da0e60((*(undefined4 *)&gen_args[9]));
  iVar4 = uVar3 + 1;
  if ((int)((*(undefined4 * PTR32 *)&gen_args[0])[0x10] & 0x3fffffff) < iVar4) {
    iVar2 = ((*(undefined4 * PTR32 *)&gen_args[0])[0x10] & 0x3fffffff) * 2;
    if (iVar2 <= iVar4) {
      iVar2 = iVar4;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 * PTR32 *)&gen_args[0]) + 0xe,iVar2,1);
  }
  (*(undefined4 * PTR32 *)&gen_args[0])[0xf] = iVar4;
  F_00da0e20((*(undefined4 * PTR32 *)&gen_args[0])[0xe],(*(undefined4 *)&gen_args[9]));
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00d7f240 */
uint F_00d7f240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7f240u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x1137cbc));
  return (uint)in_ecx;
}

/* ref: FUN_00d7f250 */
uint F_00d7f250(unsigned int gen_a0)
{
  GEN_ENTER(0xd7f250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1137cbc));
  uVar1 = *(uint *)((int)this + 0x88);
  *(undefined4 *)((int)this + 0x84) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x80),uVar1 * 4);
  }
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x88) = 0x80000000;
  uVar1 = *(uint *)((int)this + 0x7c);
  *(undefined4 *)((int)this + 0x78) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x74),uVar1 * 4);
  }
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0x80000000;
  uVar1 = *(uint *)((int)this + 0x70);
  *(undefined4 *)((int)this + 0x6c) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x68),uVar1 * 4);
  }
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x70) = 0x80000000;
  uVar1 = *(uint *)((int)this + 100);
  *(undefined4 *)((int)this + 0x60) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x5c),uVar1 * 4);
  }
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 100) = 0x80000000;
  uVar1 = *(uint *)((int)this + 0x58);
  *(undefined4 *)((int)this + 0x54) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x50),uVar1 * 4);
  }
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x58) = 0x80000000;
  uVar1 = *(uint *)((int)this + 0x4c);
  *(undefined4 *)((int)this + 0x48) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x44),uVar1 * 4);
  }
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0x80000000;
  uVar1 = *(uint *)((int)this + 0x40);
  *(undefined4 *)((int)this + 0x3c) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x38),uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x40) = 0x80000000;
  uVar1 = *(uint *)((int)this + 0x34);
  *(undefined4 *)((int)this + 0x30) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x2c),uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x34) = 0x80000000;
  uVar1 = *(uint *)((int)this + 0x28);
  *(undefined4 *)((int)this + 0x24) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x20),uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x28) = 0x80000000;
  uVar1 = *(uint *)((int)this + 0x1c);
  *(undefined4 *)((int)this + 0x18) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x14),uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0x80000000;
  uVar1 = *(uint *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0xc) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 8),uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: FUN_00d7f470 */
uint F_00d7f470(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0xd7f470u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  int * piVar1;
  undefined4 * puVar2;
  LPVOID pvVar3;
  uint uVar4;
  undefined * this;
  
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar3 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar3 + 0x2c),0x98);
  *(undefined2 *)(uVar4 + 4) = 0x98;
  this = (undefined *)F_00d7edc0(uVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                              param_10);
  if (this != (undefined *)0x0) {
    F_00d919e0(this);
  }
  piVar1 = (int *)(param_1 + 8);
  if (*(uint *)(param_1 + 0xc) == (*(uint *)(param_1 + 0x10) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar1,4);
  }
  puVar2 = ((undefined4 *)GEN_TOP((*piVar1 + *(int *)(param_1 + 0xc) * 4)));
  if (puVar2 != (undefined4 *)0x0) {
    if (this != (undefined *)0x0) {
      F_00d919e0(this);
    }
    *puVar2 = this;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  F_00d91a80(this);
  uVar4 = *((uint *)GEN_TOP((*piVar1 + -4 + *(int *)(param_1 + 0xc) * 4)));
  if (this != (undefined *)0x0) {
    F_00d91a80(this);
  }
  return uVar4;
}

/* ref: FUN_00d7f590 */
uint F_00d7f590(unsigned int gen_a0)
{
  GEN_ENTER(0xd7f590u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x113680c));
  iVar3 = *(int *)((int)this + 0xc) + -1;
  iVar1 = *(int *)((int)this + 8);
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00);
    }
    iVar3 = iVar3 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
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

/* ref: FUN_00d7f600 */
uint F_00d7f600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7f600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1);
  }
  *(undefined * PTR32 *)this = param_1;
  return (uint)this;
}

/* ref: FUN_00d7f680 */
uint F_00d7f680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xd7f680u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00d7f690 */
uint F_00d7f690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7f690u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00d7f6a0 */
uint F_00d7f6a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7f6a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if ((undefined *)*param_1 != (undefined *)0x0) {
    F_00d919e0((undefined *)*param_1);
  }
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00d7f720 */
uint F_00d7f720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7f720u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = param_1;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x80000000;
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)(param_1 * 4);
    param_1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
    iVar3 = (int)(((int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x8))) >> 0x1f & 3U) + (int)(*(undefined * PTR32 *)(gen_frame + 0x8))) >> 2;
    if (iVar3 != 0) goto LAB_00d7f77d;
  }
  iVar3 = ((int)0x80000000);
LAB_00d7f77d: ;
  iVar4 = 0;
  *(int *)((int)this + 8) = iVar3;
  *(uint *)this = param_1;
  *(int *)((int)this + 4) = iVar1;
  if (3 < iVar1) {
    iVar3 = (iVar1 - 4U >> 2) + 1;
    iVar4 = iVar3 * 4;
    puVar2 = (undefined4 *)(param_1 + 8);
    do {
      iVar3 = iVar3 + -1;
      puVar2[-2] = *param_2;
      puVar2[-1] = *param_2;
      *puVar2 = *param_2;
      puVar2[1] = *param_2;
      puVar2 = puVar2 + 4;
    } while (iVar3 != 0);
  }
  while (iVar4 < iVar1) {
    iVar4 = iVar4 + 1;
    *((undefined4 *)GEN_TOP(((param_1 - 4) + iVar4 * 4))) = *param_2;
  }
  return (uint)this;
}

/* ref: FUN_00d7f7f0 */
uint F_00d7f7f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7f7f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d7f830 */
uint F_00d7f830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7f830u, gen_a0, gen_a1, gen_a2, 0u);
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
    bVar1 = F_00d95690(param_1,this,iVar3,1);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00d7f870 */
unsigned int F_00d7f870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7f870u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  
  iVar1 = param_2;
  puVar2 = param_1;
  if (0 < param_2) {
    do {
      if (puVar2 != (undefined4 *)0x0) {
        if ((undefined *)*param_3 != (undefined *)0x0) {
          F_00d919e0((undefined *)*param_3);
        }
        *puVar2 = *param_3;
      }
      puVar2 = puVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}

/* ref: FUN_00d7f8b0 */
uint F_00d7f8b0(unsigned int gen_a0)
{
  GEN_ENTER(0xd7f8b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  *(short *)(uVar2 + 4) = (short)param_1;
  return uVar2;
}

/* ref: FUN_00d7f8e0 */
uint F_00d7f8e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7f8e0u, gen_a0, gen_a1, gen_a2, 0u);
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
    bVar1 = F_00d95690(param_1,this,iVar3,1);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_2;
  return uVar2;
}

/* ref: FUN_00d7f920 */
uint F_00d7f920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7f920u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,4);
  }
  uVar2 = *(uint *)this;
  puVar1 = ((undefined4 *)GEN_TOP((uVar2 + *(int *)((int)this + 4) * 4)));
  if (puVar1 != (undefined4 *)0x0) {
    if ((undefined *)*param_2 != (undefined *)0x0) {
      uVar2 = F_00d919e0((undefined *)*param_2);
    }
    *puVar1 = *param_2;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return uVar2;
}

/* ref: FUN_00d7f970 */
uint F_00d7f970(unsigned int gen_a0)
{
  GEN_ENTER(0xd7f970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d7f9b0 */
uint F_00d7f9b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7f9b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,1);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_1;
  return uVar2;
}

/* ref: FUN_00d7f9f0 */
uint F_00d7f9f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7f9f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if (*(uint *)((int)this + 4) == uVar2) {
    uVar2 = F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,4);
  }
  puVar1 = ((uint *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 4)));
  if (puVar1 != (uint *)0x0) {
    if ((undefined *)*param_1 != (undefined *)0x0) {
      F_00d919e0((undefined *)*param_1);
    }
    uVar2 = *param_1;
    *puVar1 = uVar2;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return uVar2;
}

/* ref: FUN_00d7fa40 */
uint F_00d7fa40(unsigned int gen_a0)
{
  GEN_ENTER(0xd7fa40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d7fa80 */
uint F_00d7fa80(unsigned int gen_a0)
{
  GEN_ENTER(0xd7fa80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkaFootstepAnalysisInfo::vf0 */
uint F_00d7fab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7fab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d7f250(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: hkaDefaultAnimatedReferenceFrame::vf5 */
unsigned int F_00d7faf0(unsigned int gen_a0)
{
  GEN_ENTER(0xd7faf0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: hkaDefaultAnimatedReferenceFrame::vf3 */
float F_00d7fbe0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7fbe0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * pfVar1;
  int iVar2;
  int iVar3;
  undefined8 * puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  iVar2 = *(int *)(param_1 + 0x38);
  if (*(float *)(param_1 + 0x30) <= param_2) {
    pfVar1 = ((float *)GEN_TOP((*(int *)(param_1 + 0x34) + -0x10 + iVar2 * 0x10)));
    fVar6 = *pfVar1;
    fVar7 = pfVar1[1];
    fVar8 = pfVar1[2];
    fVar5 = pfVar1[3];
  }
  else if (param_2 < 0.0) {
    pfVar1 = *(float * PTR32 *)(param_1 + 0x34);
    fVar6 = *pfVar1;
    fVar7 = pfVar1[1];
    fVar8 = pfVar1[2];
    fVar5 = pfVar1[3];
  }
  else {
    fVar5 = param_2 / (*(float *)(param_1 + 0x30) / (float)(iVar2 + -1));
    iVar3 = (int)fVar5;
    if (iVar2 + -2 < iVar3) {
      iVar3 = iVar2 + -2;
    }
    fVar5 = fVar5 - (float)iVar3;
    puVar4 = ((undefined8 *)GEN_TOP((iVar3 * 0x10 + *(int *)(param_1 + 0x34))));
    local_20 = gen_bits2f((uint)puVar4[2]);
    fStack_1c = gen_bits2f((uint)((ulonglong)puVar4[2] >> 0x20));
    fStack_18 = gen_bits2f((uint)puVar4[3]);
    fStack_14 = gen_bits2f((uint)((ulonglong)puVar4[3] >> 0x20));
    local_30 = gen_bits2f((uint)*puVar4);
    fStack_2c = gen_bits2f((uint)((ulonglong)*puVar4 >> 0x20));
    fStack_28 = gen_bits2f((uint)puVar4[1]);
    fStack_24 = gen_bits2f((uint)((ulonglong)puVar4[1] >> 0x20));
    fVar6 = (local_20 - local_30) * fVar5 + local_30;
    fVar7 = (fStack_1c - fStack_2c) * fVar5 + fStack_2c;
    fVar8 = (fStack_18 - fStack_28) * fVar5 + fStack_28;
    fVar5 = (fStack_14 - fStack_24) * fVar5 + fStack_24;
  }
  *param_3 = fVar6;
  param_3[1] = fVar7;
  param_3[2] = fVar8;
  param_3[3] = fVar5;
  F_00d988a0(param_3 + 4,param_1 + 0x10,fVar5);
  fVar8 = *(float *)&REFG(undefined, 0x1137d2c);
  fVar7 = *(float *)&REFG(undefined, 0x1137d28);
  fVar6 = *(float *)&REFG(undefined, 0x1137d24);
  fVar5 = *(float *)&REFG(undefined, 0x1137d20);
  param_3[8] = *(float *)&REFG(undefined, 0x1137d20);
  param_3[9] = fVar6;
  param_3[10] = fVar7;
  param_3[0xb] = fVar8;
  return fVar5;
}

/* ref: FUN_00d80920 */
unsigned int F_00d80920(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xd80920u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  *in_ecx = param_2;
  in_ecx[1] = param_2;
  in_ecx[2] = param_2;
  in_ecx[3] = in_ecx[3];
  return 0;
}

/* ref: FUN_00d80960 */
unsigned int F_00d80960(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xd80960u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  *in_ecx = param_2;
  in_ecx[1] = param_2;
  in_ecx[2] = param_2;
  in_ecx[3] = 0.0;
  return 0;
}

/* ref: FUN_00d809a0 */
byte F_00d809a0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xd809a0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  undefined1 auVar1 [16];
  int iVar2;
  
  (*(undefined4 *)((char *)&auVar1 + 4)) = -(uint)(ABS(in_ecx[1] - param_2[1]) <= param_3);
  (*(undefined4 *)((char *)&auVar1 + 0)) = -(uint)(ABS(*in_ecx - *param_2) <= param_3);
  (*(undefined4 *)((char *)&auVar1 + 8)) = -(uint)(ABS(in_ecx[2] - param_2[2]) <= param_3);
  (*(undefined4 *)((char *)&auVar1 + 12)) = -(uint)(ABS(in_ecx[3] - param_2[3]) <= param_3);
  iVar2 = gen_movmskps(&(auVar1));
  return iVar2 == 0xf;
}

/* ref: FUN_00d80bb0 */
uint F_00d80bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd80bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 0xc) == (*(uint *)((int)this + 0x10) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),(int *)((int)this + 8),4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + *(int *)((int)this + 0xc) * 4)));
  *puVar1 = param_1;
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00d80c20 */
uint F_00d80c20(unsigned int gen_a0)
{
  GEN_ENTER(0xd80c20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1136a94));
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

/* ref: FUN_00d80d00 */
unsigned int F_00d80d00(float gen_a0)
{
  GEN_ENTER(0xd80d00u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00d828b0 */
uint F_00d828b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd828b0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_2[1] ^ *(uint *)&REFG(undefined, 0x10ab9b4);
  uVar2 = param_2[2] ^ *(uint *)&REFG(undefined, 0x10ab9b8);
  uVar3 = param_2[3] ^ *(uint *)&REFG(undefined, 0x10ab9bc);
  *in_ecx = *param_2 ^ *(uint *)&REFG(undefined, 0x10ab9b0);
  in_ecx[1] = uVar1;
  in_ecx[2] = uVar2;
  in_ecx[3] = uVar3;
  return (uint)param_2;
}

/* ref: FUN_00d828d0 */
uint F_00d828d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd828d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = param_1[3];
  fVar5 = param_2[2] * param_1[2] + (param_2[1] * param_1[1] + *param_2 * *param_1);
  fVar6 = fVar5 * *param_1;
  fVar7 = fVar5 * param_1[1];
  fVar8 = fVar5 * param_1[2];
  *param_4 = fVar6;
  param_4[1] = fVar7;
  param_4[2] = fVar8;
  param_4[3] = fVar5 * fVar1;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  *param_3 = *param_2 - fVar6;
  param_3[1] = fVar2 - fVar7;
  param_3[2] = fVar3 - fVar8;
  param_3[3] = fVar4 - fVar5 * fVar1;
  return (uint)param_2;
}

/* ref: hkaAnimationControl::vf14 */
uint F_00d82920(void)
{
  GEN_ENTER(0xd82920u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: hkaAnimationControl::vf8 */
uint F_00d82930(unsigned int gen_a0)
{
  GEN_ENTER(0xd82930u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(in_ecx + 0x28) + 0xc))) + 0x10)));
}

/* ref: hkaAnimationControl::vf9 */
uint F_00d82940(unsigned int gen_a0)
{
  GEN_ENTER(0xd82940u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(in_ecx + 0x28) + 0xc))) + 0x14)));
}

/* ref: hkaAnimationControl::vf10 */
uint F_00d82950(unsigned int gen_a0)
{
  GEN_ENTER(0xd82950u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x28) + 0x14)));
}

/* ref: hkaAnimationControl::vf11 */
uint F_00d82960(unsigned int gen_a0)
{
  GEN_ENTER(0xd82960u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x28) + 0x10)));
}

/* ref: hkaAnimationControl::vf12 */
uint F_00d82970(unsigned int gen_a0)
{
  GEN_ENTER(0xd82970u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x28) + 0x20)));
}

/* ref: hkaAnimationControl::vf13 */
uint F_00d82980(unsigned int gen_a0)
{
  GEN_ENTER(0xd82980u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x28) + 0x1c)));
}

/* ref: hkaAnimationControl::vf5 */
uint F_00d82990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd82990u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x28) + 0xc))) + 0xc))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x28) + 0xc))),*(undefined4 *)(this + 8),param_1,
                     param_2);
  return uVar1;
}

/* ref: hkaAnimationControl::vf6 */
uint F_00d829c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd829c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x28) + 0xc))) + 0x10))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x28) + 0xc))),*(undefined4 *)(this + 8),param_1,
                     param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00d82a00 */
uint F_00d82a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd82a00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  if (0 < *(int *)((int)this + 0x30)) {
    piVar2 = *(int * PTR32 *)((int)this + 0x2c);
    do {
      if (*piVar2 == param_1) goto LAB_00d82a23;
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
    } while ((int)uVar1 < *(int *)((int)this + 0x30));
  }
  uVar1 = 0xffffffff;
LAB_00d82a23: ;
  *(int *)((int)this + 0x30) = *(int *)((int)this + 0x30) + -1;
  if (*(uint *)((int)this + 0x30) != uVar1) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x2c) + uVar1 * 4))) =
         *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x2c) + *(uint *)((int)this + 0x30) * 4)));
  }
  return uVar1;
}

/* ref: FUN_00d82a40 */
uint F_00d82a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd82a40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  *(int *)((int)this + 0x28) = param_1;
  puVar1 = (undefined4 *)((int)this + 0x10);
  uVar4 = *(uint *)((int)this + 0x18) & 0x3fffffff;
  if (uVar4 < 0x10) {
    uVar5 = uVar4 * 2;
    if (uVar4 == 8 || uVar5 < 0x10) {
      uVar5 = 0x10;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),puVar1,uVar5,1);
  }
  iVar3 = *((int *)GEN_TOP((*(int *)(param_1 + 0xc) + 0x10)));
  uVar4 = *(uint *)((int)this + 0x18) & 0x3fffffff;
  if ((int)uVar4 < iVar3) {
    iVar6 = uVar4 * 2;
    if (iVar6 <= iVar3) {
      iVar6 = iVar3;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),puVar1,iVar6,1);
  }
  *(int *)((int)this + 0x14) = iVar3;
  puVar2 = (undefined4 *)((int)this + 0x1c);
  uVar4 = *(uint *)((int)this + 0x24) & 0x3fffffff;
  if (uVar4 < 0x10) {
    uVar5 = uVar4 * 2;
    if (uVar4 == 8 || uVar5 < 0x10) {
      uVar5 = 0x10;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),puVar2,uVar5,1);
  }
  iVar3 = *((int *)GEN_TOP((*(int *)(param_1 + 0xc) + 0x14)));
  uVar4 = *(uint *)((int)this + 0x24) & 0x3fffffff;
  if ((int)uVar4 < iVar3) {
    iVar6 = uVar4 * 2;
    if (iVar6 <= iVar3) {
      iVar6 = iVar3;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),puVar2,iVar6,1);
  }
  *(int *)((int)this + 0x20) = iVar3;
  F_00da1030(*puVar1,0xff,*(undefined4 *)((int)this + 0x14));
  uVar4 = F_00da1030(*puVar2,0xff,*(undefined4 *)((int)this + 0x20));
  return uVar4;
}

/* ref: FUN_00d82b40 */
uint F_00d82b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd82b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 0x30) == (*(uint *)((int)this + 0x34) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),(int *)((int)this + 0x2c),4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x2c) + *(int *)((int)this + 0x30) * 4)));
  *puVar1 = param_1;
  *(int *)((int)this + 0x30) = *(int *)((int)this + 0x30) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00d82b80 */
byte F_00d82b80(unsigned int gen_a0)
{
  GEN_ENTER(0xd82b80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((*(int *)(in_ecx + 0x28) != 0) &&
     (*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(in_ecx + 0x28) + 0xc))) + 0x18))) != 0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00d82ba0 */
uint F_00d82ba0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0xd82ba0u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_trace_f(gen_a3));
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  gen_args[2] = gen_a2;
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  memcpy(&gen_args[4], &gen_a4, sizeof gen_a4);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  uint uVar5;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = (*(int * PTR32 *)&gen_args[0]);
  bVar4 = F_00d82b80((*(int * PTR32 *)&gen_args[0]));
  if (bVar4 == 0) {
    *(*(undefined4 * PTR32 *)&gen_args[2]) = 0;
    (*(undefined4 * PTR32 *)&gen_args[2])[1] = 0;
    (*(undefined4 * PTR32 *)&gen_args[2])[2] = 0;
    (*(undefined4 * PTR32 *)&gen_args[2])[3] = 0;
    uVar3 = *(undefined4 *)&REFG(undefined, 0x1138cac);
    uVar2 = *(undefined4 *)&REFG(undefined, 0x1138ca8);
    uVar1 = *(undefined4 *)&REFG(undefined, 0x1138ca4);
    (*(undefined4 * PTR32 *)&gen_args[2])[4] = *(undefined4 *)&REFG(undefined, 0x1138ca0);
    (*(undefined4 * PTR32 *)&gen_args[2])[5] = uVar1;
    (*(undefined4 * PTR32 *)&gen_args[2])[6] = uVar2;
    (*(undefined4 * PTR32 *)&gen_args[2])[7] = uVar3;
    uVar3 = *(undefined4 *)&REFG(undefined, 0x1138afc);
    uVar2 = *(undefined4 *)&REFG(undefined, 0x1138af8);
    uVar1 = *(undefined4 *)&REFG(undefined, 0x1138af4);
    (*(undefined4 * PTR32 *)&gen_args[2])[8] = *(undefined4 *)&REFG(undefined, 0x1138af0);
    (*(undefined4 * PTR32 *)&gen_args[2])[9] = uVar1;
    (*(undefined4 * PTR32 *)&gen_args[2])[10] = uVar2;
    (*(undefined4 * PTR32 *)&gen_args[2])[0xb] = uVar3;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[2]);
  }
  ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x10))))((*(int * PTR32 *)&gen_args[0]),(undefined4)gen_fl2bits((*(float *)&gen_args[1])),&(*(int * PTR32 *)(gen_frame + 0x8)),&(*(float *)&gen_args[1]));
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(int * PTR32 *)&gen_args[0])[10] + 0xc))) + 0x34))))
                    (*((int * PTR32 *)GEN_TOP(((*(int * PTR32 *)&gen_args[0])[10] + 0xc))),(*(int * PTR32 *)&gen_args[0])[2],(*(int * PTR32 *)(gen_frame + 0x8)));
  return uVar5;
}

/* ref: FUN_00d82c40 */
uint F_00d82c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd82c40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  gen_size32 sVar8;
  int iVar9;
  
  uVar4 = REFG(float, 0x1087f04);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x1137eec));
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0x80000000;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0x80000000;
  piVar1 = (int *)((int)this + 0x10);
  piVar2 = (int *)((int)this + 0x1c);
  *(int *)((int)this + 0x28) = param_1;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0x80000000;
  *(undefined4 *)((int)this + 0x38) = uVar4;
  *(undefined4 *)((int)this + 0xc) = uVar4;
  *(undefined4 *)((int)this + 8) = 0;
  if (param_1 != 0) {
    uVar5 = *(uint *)((int)this + 0x18) & 0x3fffffff;
    if (uVar5 < 0x10) {
      uVar6 = uVar5 * 2;
      if (uVar5 == 8 || uVar6 < 0x10) {
        uVar6 = 0x10;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar1,uVar6,1);
    }
    iVar3 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x28) + 0xc))) + 0x10)));
    uVar5 = *(uint *)((int)this + 0x18) & 0x3fffffff;
    if ((int)uVar5 < iVar3) {
      iVar9 = uVar5 * 2;
      iVar7 = iVar3;
      if (iVar3 < iVar9) {
        iVar7 = iVar9;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar1,iVar7,1);
    }
    sVar8 = iVar3 - *(int *)((int)this + 0x14);
    if (0 < (int)sVar8) {
      F_00c48350(((undefined *)GEN_TOP((*piVar1 + *(int *)((int)this + 0x14)))),0xff,sVar8);
    }
    *(int *)((int)this + 0x14) = iVar3;
    uVar5 = *(uint *)((int)this + 0x24) & 0x3fffffff;
    if (uVar5 < 0x10) {
      uVar6 = uVar5 * 2;
      if (uVar5 == 8 || uVar6 < 0x10) {
        uVar6 = 0x10;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar2,uVar6,1);
    }
    iVar3 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x28) + 0xc))) + 0x14)));
    uVar5 = *(uint *)((int)this + 0x24) & 0x3fffffff;
    if ((int)uVar5 < iVar3) {
      iVar9 = uVar5 * 2;
      if (iVar9 <= iVar3) {
        iVar9 = iVar3;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar2,iVar9,1);
    }
    sVar8 = iVar3 - *(int *)((int)this + 0x20);
    if (0 < (int)sVar8) {
      F_00c48350(((undefined *)GEN_TOP((*piVar2 + *(int *)((int)this + 0x20)))),0xff,sVar8);
    }
    *(int *)((int)this + 0x20) = iVar3;
  }
  return (uint)this;
}

/* ref: FUN_00d82db0 */
uint F_00d82db0(unsigned int gen_a0)
{
  GEN_ENTER(0xd82db0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x1137eec));
  if (0 < *(int *)((int)this + 0x30)) {
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x2c) + iVar3 * 4)));
      ((code *)*(gen_code32 *)*puVar1)(puVar1,this);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)((int)this + 0x30));
  }
  uVar2 = *(uint *)((int)this + 0x34);
  *(undefined4 *)((int)this + 0x30) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x2c),uVar2 * 4);
  }
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x34) = 0x80000000;
  uVar2 = *(uint *)((int)this + 0x24);
  *(undefined4 *)((int)this + 0x20) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x1c),uVar2 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0x80000000;
  uVar2 = *(uint *)((int)this + 0x18);
  *(undefined4 *)((int)this + 0x14) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x10),uVar2 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 0x18) = 0x80000000;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar2;
}

/* ref: hkaAnimationControl::vf7 */
uint F_00d82e70(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd82e70u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00d82ba0(param_1,param_2,param_3,0.0,0.0);
  return uVar1;
}

/* ref: FUN_00d82ed0 */
uint F_00d82ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd82ed0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00d82ef0 */
uint F_00d82ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd82ef0u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00d82f50 */
unsigned int F_00d82f50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd82f50u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00d82f90 */
uint F_00d82f90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd82f90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00d82fe0 */
unsigned int F_00d82fe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd82fe0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a3;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    F_00d95690(param_1,this,iVar3,1);
  }
  iVar3 = *(int *)((int)this + 4);
  iVar1 = *(int *)this;
  iVar4 = param_2 - iVar3;
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      *(undefined1 *)(iVar5 + iVar1 + iVar3) = *param_3;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  *(int *)((int)this + 4) = param_2;
  return 0;
}

/* ref: FUN_00d83040 */
uint F_00d83040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd83040u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d83060 */
uint F_00d83060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd83060u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00d830a0 */
uint F_00d830a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd830a0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d830f0 */
unsigned int F_00d830f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd830f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,1);
  }
  iVar3 = *(int *)((int)this + 4);
  iVar1 = *(int *)this;
  iVar4 = param_1 - iVar3;
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      *(undefined1 *)(iVar5 + iVar1 + iVar3) = *param_2;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  *(int *)((int)this + 4) = param_1;
  return 0;
}

/* ref: FUN_00d83150 */
uint F_00d83150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd83150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 4)));
  *puVar1 = *param_1;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00d83190 */
uint F_00d83190(unsigned int gen_a0)
{
  GEN_ENTER(0xd83190u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d831d0 */
uint F_00d831d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd831d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = *(int *)(in_ecx + 0x18) != 0;
  return param_2;
}

/* ref: FUN_00d831f0 */
uint F_00d831f0(unsigned int gen_a0)
{
  GEN_ENTER(0xd831f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d83230 */
uint F_00d83230(unsigned int gen_a0)
{
  GEN_ENTER(0xd83230u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkaAnimationControl::vf0 */
uint F_00d83260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd83260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d82db0(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00d832a0 */
unsigned int F_00d832a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd832a0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  float fVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float * pfVar8;
  float * pfVar9;
  float fVar10;
  int local_8;
  
  fVar6 = REFG(float, 0x10addc0);
  fVar5 = REFG(float, 0x1087f04);
  iVar3 = param_1[1];
  if (param_1[5] == 0) {
    iVar7 = 0;
    local_8 = 0;
    if (-1 < iVar3) {
      if (3 < iVar3 + 1) {
        pfVar9 = (float *)(param_2 + 0xc);
        pfVar8 = (float *)(param_3 + 4);
        do {
          fVar1 = gen_bits2f(param_1[3]);
          fVar10 = fVar5;
          if (param_1[4] != 0) {
            fVar10 = (float)*(byte *)(param_1[4] + local_8) * fVar6;
          }
          pfVar9[-3] = *(float *)((int)pfVar8 + *param_1 - param_3 + -4) * (fVar10 * fVar1) +
                       pfVar9[-3];
          if (param_3 != 0) {
            pfVar8[-1] = fVar10 * fVar1 + pfVar8[-1];
          }
          fVar1 = gen_bits2f(param_1[3]);
          fVar10 = fVar5;
          if (param_1[4] != 0) {
            fVar10 = (float)*(byte *)(param_1[4] + 1 + local_8) * fVar6;
          }
          *((float *)GEN_TOP(((param_2 - param_3) + (int)pfVar8))) =
               *(float *)((int)pfVar8 + *param_1 - param_3) * (fVar10 * fVar1) +
               *((float *)GEN_TOP(((param_2 - param_3) + (int)pfVar8)));
          if (param_3 != 0) {
            *pfVar8 = fVar10 * fVar1 + *pfVar8;
          }
          fVar1 = gen_bits2f(param_1[3]);
          fVar10 = fVar5;
          if (param_1[4] != 0) {
            fVar10 = (float)*(byte *)(param_1[4] + 2 + local_8) * fVar6;
          }
          pfVar9[-1] = *((float *)GEN_TOP(((int)pfVar8 + *param_1 + (4 - param_3)))) * (fVar10 * fVar1) +
                       pfVar9[-1];
          if (param_3 != 0) {
            pfVar8[1] = pfVar8[1] + fVar10 * fVar1;
          }
          fVar1 = gen_bits2f(param_1[3]);
          fVar10 = fVar5;
          if (param_1[4] != 0) {
            fVar10 = (float)*(byte *)(param_1[4] + 3 + local_8) * fVar6;
          }
          *pfVar9 = *((float *)GEN_TOP(((int)pfVar8 + *param_1 + (8 - param_3)))) * (fVar10 * fVar1) + *pfVar9;
          if (param_3 != 0) {
            pfVar8[2] = pfVar8[2] + fVar10 * fVar1;
          }
          iVar7 = local_8 + 4;
          pfVar8 = pfVar8 + 4;
          pfVar9 = pfVar9 + 4;
          local_8 = iVar7;
        } while (iVar7 <= iVar3 + -3);
      }
      if (iVar7 <= iVar3) {
        pfVar9 = (float *)(param_3 + iVar7 * 4);
        do {
          fVar1 = gen_bits2f(param_1[3]);
          fVar10 = fVar5;
          if (param_1[4] != 0) {
            fVar10 = (float)*(byte *)(param_1[4] + iVar7) * fVar6;
          }
          *((float *)GEN_TOP(((int)pfVar9 + (param_2 - param_3)))) =
               *(float *)(*param_1 + iVar7 * 4) * (fVar10 * fVar1) +
               *((float *)GEN_TOP(((int)pfVar9 + (param_2 - param_3))));
          if (param_3 != 0) {
            *pfVar9 = fVar10 * fVar1 + *pfVar9;
          }
          iVar7 = iVar7 + 1;
          pfVar9 = pfVar9 + 1;
        } while (iVar7 <= iVar3);
      }
    }
  }
  else {
    iVar7 = 0;
    if (-1 < iVar3) {
      if (3 < iVar3 + 1) {
        do {
          uVar2 = *(ushort *)(param_1[5] + iVar7 * 2);
          if ((-1 < (short)uVar2) && ((int)(uint)uVar2 < param_1[2])) {
            fVar1 = gen_bits2f(param_1[3]);
            fVar10 = fVar5;
            if (param_1[4] != 0) {
              fVar10 = (float)*(byte *)(param_1[4] + iVar7) * fVar6;
            }
            iVar4 = (short)uVar2 * 4;
            *(float *)(iVar4 + param_2) =
                 *(float *)(*param_1 + iVar7 * 4) * (fVar10 * fVar1) + *(float *)(iVar4 + param_2);
            *(float *)(iVar4 + param_3) = *(float *)(iVar4 + param_3) + fVar10 * fVar1;
          }
          uVar2 = *(ushort *)(param_1[5] + 2 + iVar7 * 2);
          if ((-1 < (short)uVar2) && ((int)(uint)uVar2 < param_1[2])) {
            fVar1 = gen_bits2f(param_1[3]);
            fVar10 = fVar5;
            if (param_1[4] != 0) {
              fVar10 = (float)*(byte *)(param_1[4] + 1 + iVar7) * fVar6;
            }
            iVar4 = (short)uVar2 * 4;
            *(float *)(iVar4 + param_2) =
                 *(float *)(*param_1 + 4 + iVar7 * 4) * (fVar10 * fVar1) +
                 *(float *)(iVar4 + param_2);
            *(float *)(iVar4 + param_3) = *(float *)(iVar4 + param_3) + fVar10 * fVar1;
          }
          uVar2 = *(ushort *)(param_1[5] + 4 + iVar7 * 2);
          if ((-1 < (short)uVar2) && ((int)(uint)uVar2 < param_1[2])) {
            fVar1 = gen_bits2f(param_1[3]);
            fVar10 = fVar5;
            if (param_1[4] != 0) {
              fVar10 = (float)*(byte *)(param_1[4] + 2 + iVar7) * fVar6;
            }
            iVar4 = (short)uVar2 * 4;
            *(float *)(iVar4 + param_2) =
                 *(float *)(*param_1 + 8 + iVar7 * 4) * (fVar10 * fVar1) +
                 *(float *)(iVar4 + param_2);
            *(float *)(iVar4 + param_3) = *(float *)(iVar4 + param_3) + fVar10 * fVar1;
          }
          uVar2 = *(ushort *)(param_1[5] + 6 + iVar7 * 2);
          if ((-1 < (short)uVar2) && ((int)(uint)uVar2 < param_1[2])) {
            fVar1 = gen_bits2f(param_1[3]);
            fVar10 = fVar5;
            if (param_1[4] != 0) {
              fVar10 = (float)*(byte *)(param_1[4] + 3 + iVar7) * fVar6;
            }
            iVar4 = (short)uVar2 * 4;
            *(float *)(iVar4 + param_2) =
                 *(float *)(*param_1 + 0xc + iVar7 * 4) * (fVar10 * fVar1) +
                 *(float *)(iVar4 + param_2);
            *(float *)(iVar4 + param_3) = *(float *)(iVar4 + param_3) + fVar10 * fVar1;
          }
          iVar7 = iVar7 + 4;
        } while (iVar7 <= iVar3 + -3);
      }
      if (iVar7 <= iVar3) {
        do {
          uVar2 = *(ushort *)(param_1[5] + iVar7 * 2);
          if ((-1 < (short)uVar2) && ((int)(uint)uVar2 < param_1[2])) {
            fVar1 = gen_bits2f(param_1[3]);
            fVar10 = fVar5;
            if (param_1[4] != 0) {
              fVar10 = (float)*(byte *)(param_1[4] + iVar7) * fVar6;
            }
            iVar4 = (short)uVar2 * 4;
            *(float *)(iVar4 + param_2) =
                 *(float *)(*param_1 + iVar7 * 4) * (fVar10 * fVar1) + *(float *)(iVar4 + param_2);
            *(float *)(iVar4 + param_3) = *(float *)(iVar4 + param_3) + fVar10 * fVar1;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 <= iVar3);
        return 0;
      }
    }
  }
  return 0;
}

/* ref: FUN_00d83760 */
uint F_00d83760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd83760u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint param_4 = (uint)gen_a3;
  short sVar1;
  uint uVar2;
  
  uVar2 = param_4;
  if (param_1 == 0) {
    uVar2 = param_3 - 1;
    if ((int)(param_4 - 1) < (int)uVar2) {
      return param_4 - 1;
    }
  }
  else {
    while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
      sVar1 = *(short *)(param_1 + uVar2 * 2);
      if ((-1 < sVar1) && ((uint)(int)sVar1 < param_3)) {
        if (param_2 == 0) {
          return uVar2;
        }
        if (*(char *)(uVar2 + param_2) != '\0') {
          return uVar2;
        }
      }
    }
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

/* ref: FUN_00d837c0 */
unsigned int F_00d837c0(float gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd837c0u, gen_trace_f(gen_a0), gen_a1, gen_a2, 0u);
  float param_1 = (float)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  float * pfVar1;
  int iVar2;
  
  pfVar1 = param_2;
  iVar2 = param_3;
  if (0 < param_3) {
    do {
      *pfVar1 = *pfVar1 * param_1;
      pfVar1[1] = pfVar1[1] * param_1;
      pfVar1[2] = pfVar1[2] * param_1;
      pfVar1[3] = pfVar1[3] * param_1;
      pfVar1 = pfVar1 + 0xc;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00d837f0 */
unsigned int F_00d837f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xd837f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  uint param_4 = (uint)gen_a3;
  int param_5 = (int)gen_a4;
  int param_6 = (int)gen_a5;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  param_4 = param_4 * 3;
  if (0 < (int)param_4) {
    puVar5 = (undefined4 *)(param_3 + 0xc);
    puVar4 = (undefined4 *)(param_1 + 8);
    do {
      uVar1 = puVar5[-2];
      uVar2 = *((undefined4 *)GEN_TOP(((param_3 - param_1) + (int)puVar4)));
      uVar3 = *puVar5;
      puVar4[-2] = puVar5[-3];
      puVar4[-1] = uVar1;
      *puVar4 = uVar2;
      puVar4[1] = uVar3;
      puVar5 = puVar5 + 4;
      puVar4 = puVar4 + 4;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  param_4 = param_6 + 3U >> 2;
  if (param_4 != 0) {
    puVar5 = (undefined4 *)(param_5 + 0xc);
    puVar4 = (undefined4 *)(param_2 + 8);
    do {
      uVar1 = puVar5[-2];
      uVar2 = *((undefined4 *)GEN_TOP(((param_5 - param_2) + (int)puVar4)));
      uVar3 = *puVar5;
      puVar4[-2] = puVar5[-3];
      puVar4[-1] = uVar1;
      *puVar4 = uVar2;
      puVar4[1] = uVar3;
      puVar5 = puVar5 + 4;
      puVar4 = puVar4 + 4;
      param_4 = param_4 - 1;
    } while (param_4 != 0);
  }
  return 0;
}

/* ref: FUN_00d83890 */
uint F_00d83890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd83890u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  ushort uVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int * piVar9;
  LPVOID pvVar10;
  float * pfVar11;
  LPVOID pvVar12;
  float * pfVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  uint uVar25;
  float fVar26;
  uint uVar27;
  float fVar28;
  uint uVar29;
  
  piVar9 = param_1;
  pvVar10 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar2 = *(undefined4 * PTR32 *)((int)pvVar10 + 4);
  if (puVar2 < *(undefined4 * PTR32 *)((int)pvVar10 + 0xc)) {
    *puVar2 = "TtBlendNormal";
    uVar4 = rdtsc();
    puVar2[1] = (int)uVar4;
    *(undefined4 * PTR32 *)((int)pvVar10 + 4) = puVar2 + 3;
  }
  fVar8 = REFG(float, 0x10addc0);
  fVar21 = REFG(float, 0x1087f04);
  iVar3 = param_1[1];
  iVar14 = 0;
  if (param_1[5] == 0) {
    if (-1 < iVar3) {
      pfVar11 = (float *)(param_2 + 0x10);
      do {
        fVar21 = REFG(float, 0x1087f04);
        if (param_1[4] != 0) {
          fVar21 = (float)*(byte *)(param_1[4] + iVar14) * fVar8;
        }
        fVar21 = fVar21 * gen_bits2f(param_1[3]);
        pfVar13 = ((float *)GEN_TOP(((int)pfVar11 + *param_1 + (-0x10 - param_2))));
        fVar20 = pfVar13[1];
        fVar5 = pfVar13[2];
        fVar6 = pfVar13[3];
        pfVar11[-4] = *pfVar13 * fVar21 + pfVar11[-4];
        pfVar11[-3] = fVar20 * fVar21 + pfVar11[-3];
        pfVar11[-2] = fVar5 * fVar21 + pfVar11[-2];
        pfVar11[-1] = fVar6 * fVar21 + pfVar11[-1];
        fVar20 = pfVar13[9];
        fVar5 = pfVar13[10];
        fVar6 = pfVar13[0xb];
        pfVar11[4] = pfVar13[8] * fVar21 + pfVar11[4];
        pfVar11[5] = fVar20 * fVar21 + pfVar11[5];
        pfVar11[6] = fVar5 * fVar21 + pfVar11[6];
        pfVar11[7] = fVar6 * fVar21 + pfVar11[7];
        fVar20 = pfVar13[4];
        fVar5 = pfVar13[5];
        fVar6 = pfVar13[6];
        fVar7 = pfVar13[7];
        fVar23 = pfVar11[2] * fVar6 + *pfVar11 * fVar20;
        fVar22 = pfVar11[3] * fVar7 + pfVar11[1] * fVar5;
        fVar24 = *pfVar11 * fVar20 + pfVar11[2] * fVar6;
        fVar26 = pfVar11[1] * fVar5 + pfVar11[3] * fVar7;
        uVar16 = -(uint)(fVar22 + fVar23 < 0.0);
        uVar17 = -(uint)(fVar23 + fVar22 < 0.0);
        uVar18 = -(uint)(fVar26 + fVar24 < 0.0);
        uVar19 = -(uint)(fVar24 + fVar26 < 0.0);
        uVar25 = (uint)gen_fl2bits(fVar5) ^ *(uint *)&REFG(undefined, 0x10ab9c4);
        uVar27 = (uint)gen_fl2bits(fVar6) ^ *(uint *)&REFG(undefined, 0x10ab9c8);
        uVar29 = (uint)gen_fl2bits(fVar7) ^ *(uint *)&REFG(undefined, 0x10ab9cc);
        *pfVar11 = gen_bits2f(((uint)gen_fl2bits(fVar20) ^ *(uint *)&REFG(undefined, 0x10ab9c0)) & uVar16 |
                              ~uVar16 & (uint)gen_fl2bits(fVar20)) * fVar21 + *pfVar11;
        pfVar11[1] = gen_bits2f(uVar25 & uVar17 | ~uVar17 & (uint)gen_fl2bits(fVar5)) * fVar21 +
                     pfVar11[1];
        pfVar11[2] = gen_bits2f(uVar27 & uVar18 | ~uVar18 & (uint)gen_fl2bits(fVar6)) * fVar21 +
                     pfVar11[2];
        pfVar11[3] = gen_bits2f(uVar29 & uVar19 | ~uVar19 & (uint)gen_fl2bits(fVar7)) * fVar21 +
                     pfVar11[3];
        if (param_3 != 0) {
          *(float *)(param_3 + iVar14 * 4) = *(float *)(param_3 + iVar14 * 4) + fVar21;
        }
        iVar14 = iVar14 + 1;
        pfVar11 = pfVar11 + 0xc;
      } while (iVar14 <= iVar3);
    }
  }
  else {
    iVar14 = 0;
    if (-1 < iVar3) {
      param_1 = (int *)0x0;
      do {
        uVar1 = *(ushort *)(piVar9[5] + iVar14 * 2);
        if ((-1 < (short)uVar1) && ((int)(uint)uVar1 < piVar9[2])) {
          fVar20 = fVar21;
          if (piVar9[4] != 0) {
            fVar20 = (float)*(byte *)(piVar9[4] + iVar14) * fVar8;
          }
          pfVar13 = (float *)(*piVar9 + (int)param_1);
          fVar20 = fVar20 * gen_bits2f(piVar9[3]);
          iVar15 = (int)(short)uVar1;
          pfVar11 = (float *)(iVar15 * 0x30 + param_2);
          fVar5 = pfVar13[1];
          fVar6 = pfVar13[2];
          fVar7 = pfVar13[3];
          *pfVar11 = fVar20 * *pfVar13 + *pfVar11;
          pfVar11[1] = fVar20 * fVar5 + pfVar11[1];
          pfVar11[2] = fVar20 * fVar6 + pfVar11[2];
          pfVar11[3] = fVar20 * fVar7 + pfVar11[3];
          fVar5 = pfVar13[9];
          fVar6 = pfVar13[10];
          fVar7 = pfVar13[0xb];
          pfVar11[8] = pfVar13[8] * fVar20 + pfVar11[8];
          pfVar11[9] = fVar5 * fVar20 + pfVar11[9];
          pfVar11[10] = fVar6 * fVar20 + pfVar11[10];
          pfVar11[0xb] = fVar7 * fVar20 + pfVar11[0xb];
          fVar5 = pfVar13[4];
          fVar6 = pfVar13[5];
          fVar7 = pfVar13[6];
          fVar23 = pfVar13[7];
          fVar22 = fVar7 * pfVar11[6] + fVar5 * pfVar11[4];
          fVar24 = fVar23 * pfVar11[7] + fVar6 * pfVar11[5];
          fVar26 = fVar5 * pfVar11[4] + fVar7 * pfVar11[6];
          fVar28 = fVar6 * pfVar11[5] + fVar23 * pfVar11[7];
          uVar16 = -(uint)(fVar24 + fVar22 < 0.0);
          uVar17 = -(uint)(fVar22 + fVar24 < 0.0);
          uVar18 = -(uint)(fVar28 + fVar26 < 0.0);
          uVar19 = -(uint)(fVar26 + fVar28 < 0.0);
          uVar25 = (uint)gen_fl2bits(fVar6) ^ *(uint *)&REFG(undefined, 0x10ab9c4);
          uVar27 = (uint)gen_fl2bits(fVar7) ^ *(uint *)&REFG(undefined, 0x10ab9c8);
          uVar29 = (uint)gen_fl2bits(fVar23) ^ *(uint *)&REFG(undefined, 0x10ab9cc);
          pfVar11[4] = gen_bits2f(((uint)gen_fl2bits(fVar5) ^ *(uint *)&REFG(undefined, 0x10ab9c0)) & uVar16 |
                                  ~uVar16 & (uint)gen_fl2bits(fVar5)) * fVar20 + pfVar11[4];
          pfVar11[5] = gen_bits2f(uVar25 & uVar17 | ~uVar17 & (uint)gen_fl2bits(fVar6)) * fVar20 +
                       pfVar11[5];
          pfVar11[6] = gen_bits2f(uVar27 & uVar18 | ~uVar18 & (uint)gen_fl2bits(fVar7)) * fVar20 +
                       pfVar11[6];
          pfVar11[7] = gen_bits2f(uVar29 & uVar19 | ~uVar19 & (uint)gen_fl2bits(fVar23)) * fVar20 +
                       pfVar11[7];
          *(float *)(param_3 + iVar15 * 4) = *(float *)(param_3 + iVar15 * 4) + fVar20;
        }
        param_1 = (int *)((int)param_1 + 0x30);
        iVar14 = iVar14 + 1;
      } while (iVar14 <= iVar3);
    }
  }
  pvVar12 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar2 = *(undefined4 * PTR32 *)((int)pvVar12 + 4);
  pvVar10 = pvVar12;
  if (puVar2 < *(undefined4 * PTR32 *)((int)pvVar12 + 0xc)) {
    *puVar2 = &REFG(undefined, 0x1136cb0);
    uVar4 = rdtsc();
    pvVar10 = (LPVOID)uVar4;
    puVar2[1] = pvVar10;
    *(undefined4 * PTR32 *)((int)pvVar12 + 4) = puVar2 + 3;
  }
  return (uint)pvVar10;
}

/* ref: FUN_00d83af0 */
unsigned int F_00d83af0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd83af0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  F_00d837f0(param_1,param_2,*(undefined4 *)(param_3 + 0x24),*(undefined4 *)(param_3 + 0x1c),
               *(undefined4 *)(param_3 + 0x30),*(undefined4 *)(param_3 + 0x40));
  return 0;
}

/* ref: FUN_00d83b20 */
uint F_00d83b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd83b20u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  ushort uVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  LPVOID pvVar6;
  float * pfVar7;
  LPVOID pvVar8;
  float * pfVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar37;
  undefined1 auVar36 [16];
  float fVar38;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float local_30;
  float fStack_2c;
  float fStack_28;
  
  pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar2 = *(undefined4 * PTR32 *)((int)pvVar6 + 4);
  if (puVar2 < *(undefined4 * PTR32 *)((int)pvVar6 + 0xc)) {
    *puVar2 = "TtBlendAdditive";
    uVar4 = rdtsc();
    puVar2[1] = (int)uVar4;
    *(undefined4 * PTR32 *)((int)pvVar6 + 4) = puVar2 + 3;
  }
  iVar3 = param_1[1];
  uVar10 = 0;
  if (param_1[5] == 0) {
    if (-1 < iVar3) {
      pfVar7 = (float *)(param_2 + 0x10);
      do {
        if ((-1 < (int)uVar10) && ((int)(uVar10 & 0xffff) < param_1[2])) {
          fVar16 = REFG(float, 0x1087f04);
          if (param_1[4] != 0) {
            fVar16 = (float)*(byte *)(param_1[4] + uVar10) * REFG(float, 0x10addc0);
          }
          fVar18 = pfVar7[-4];
          fVar19 = pfVar7[-3];
          fVar20 = pfVar7[-2];
          fVar21 = pfVar7[-1];
          pfVar9 = ((float *)GEN_TOP(((int)pfVar7 + (-0x10 - param_2) + *param_1 + 0x10)));
          fVar24 = *pfVar9;
          fVar27 = pfVar9[1];
          fVar29 = pfVar9[2];
          fVar17 = pfVar9[3];
          pfVar9 = ((float *)GEN_TOP(((int)pfVar7 + (-0x10 - param_2) + *param_1)));
          fVar23 = fVar24 * fVar18;
          fVar26 = fVar27 * fVar19;
          fVar31 = fVar29 * fVar20;
          fVar22 = pfVar7[3];
          fVar38 = (((fVar26 + fVar23) + fVar31) * fVar24 +
                   (fVar17 * fVar17 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0))) *
                   fVar18) + (fVar27 * fVar20 - fVar29 * fVar19) * fVar17;
          fVar25 = (((fVar26 + fVar23) + fVar31) * fVar27 +
                   (fVar17 * fVar17 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4))) *
                   fVar19) + (fVar29 * fVar18 - fVar24 * fVar20) * fVar17;
          fVar28 = (((fVar26 + fVar23) + fVar31) * fVar29 +
                   (fVar17 * fVar17 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8))) *
                   fVar20) + (fVar24 * fVar19 - fVar27 * fVar18) * fVar17;
          fVar30 = (((fVar26 + fVar23) + fVar31) * fVar17 +
                   (fVar17 * fVar17 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc))) *
                   fVar21) + (fVar17 * fVar21 - fVar17 * fVar21) * fVar17;
          local_40 = gen_bits2f((uint)*(undefined8 *)(pfVar9 + 4));
          fStack_3c = gen_bits2f((uint)((ulonglong)*(undefined8 *)(pfVar9 + 4) >> 0x20));
          fStack_38 = gen_bits2f((uint)*(undefined8 *)(pfVar9 + 6));
          local_30 = gen_bits2f((uint)*(undefined8 *)pfVar7);
          fStack_2c = gen_bits2f((uint)((ulonglong)*(undefined8 *)((int)(uintptr_t)pfVar7) >> 0x20));
          fStack_28 = gen_bits2f((uint)*(undefined8 *)(pfVar7 + 2));
          fVar31 = ((fStack_3c * fStack_28 - fStack_38 * fStack_2c) + local_30 * fVar17) +
                   local_40 * fVar22;
          fVar32 = ((fStack_38 * local_30 - local_40 * fStack_28) + fStack_2c * fVar17) +
                   fStack_3c * fVar22;
          fVar33 = ((local_40 * fStack_2c - fStack_3c * local_30) + fStack_28 * fVar17) +
                   fStack_38 * fVar22;
          fVar37 = fVar22 * fVar17 -
                   ((fStack_3c * fStack_2c + local_40 * local_30) + fStack_38 * fStack_28);
          fVar18 = pfVar7[4];
          fVar19 = pfVar7[5];
          fVar20 = pfVar7[6];
          fVar21 = pfVar7[7];
          fVar24 = *pfVar9;
          fVar27 = pfVar9[1];
          fVar29 = pfVar9[2];
          fVar17 = pfVar9[3];
          fVar16 = fVar16 * gen_bits2f(param_1[3]);
          fVar22 = pfVar9[9];
          fVar23 = pfVar9[10];
          fVar26 = pfVar9[0xb];
          pfVar7[4] = (pfVar9[8] * fVar18 - fVar18) * fVar16 + fVar18;
          pfVar7[5] = (fVar22 * fVar19 - fVar19) * fVar16 + fVar19;
          pfVar7[6] = (fVar23 * fVar20 - fVar20) * fVar16 + fVar20;
          pfVar7[7] = (fVar26 * fVar21 - fVar21) * fVar16 + fVar21;
          pfVar7[-4] = (((fVar38 + fVar38) + fVar24) - pfVar7[-4]) * fVar16 + pfVar7[-4];
          pfVar7[-3] = (((fVar25 + fVar25) + fVar27) - pfVar7[-3]) * fVar16 + pfVar7[-3];
          pfVar7[-2] = (((fVar28 + fVar28) + fVar29) - pfVar7[-2]) * fVar16 + pfVar7[-2];
          pfVar7[-1] = (((fVar30 + fVar30) + fVar17) - pfVar7[-1]) * fVar16 + pfVar7[-1];
          fVar18 = *pfVar7 * fVar31;
          fVar19 = pfVar7[1] * fVar32;
          fVar20 = pfVar7[2] * fVar33;
          fVar21 = pfVar7[3] * fVar37;
          (*(float *)((char *)&auVar36 + 0)) = fVar20 + fVar18;
          (*(float *)((char *)&auVar36 + 4)) = fVar21 + fVar19;
          (*(float *)((char *)&auVar36 + 8)) = fVar18 + fVar20;
          (*(float *)((char *)&auVar36 + 12)) = fVar19 + fVar21;
          uVar12 = -(uint)((*(float *)((char *)&auVar36 + 4)) + (*(float *)((char *)&auVar36 + 0)) < 0.0);
          uVar13 = -(uint)((*(float *)((char *)&auVar36 + 0)) + (*(float *)((char *)&auVar36 + 4)) < 0.0);
          uVar14 = -(uint)((*(float *)((char *)&auVar36 + 12)) + (*(float *)((char *)&auVar36 + 8)) < 0.0);
          uVar15 = -(uint)((*(float *)((char *)&auVar36 + 8)) + (*(float *)((char *)&auVar36 + 12)) < 0.0);
          fVar18 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar16) & uVar12 |
                              ~uVar12 & (uint)gen_fl2bits(fVar16)) * fVar31 +
                   (*(float *)&REFG(undefined, 0x1138af0) - fVar16) * *pfVar7;
          fVar19 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar16) & uVar13 |
                              ~uVar13 & (uint)gen_fl2bits(fVar16)) * fVar32 +
                   (*(float *)&REFG(undefined, 0x1138af4) - fVar16) * pfVar7[1];
          fVar20 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar16) & uVar14 |
                              ~uVar14 & (uint)gen_fl2bits(fVar16)) * fVar33 +
                   (*(float *)&REFG(undefined, 0x1138af8) - fVar16) * pfVar7[2];
          fVar16 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar16) & uVar15 |
                              ~uVar15 & (uint)gen_fl2bits(fVar16)) * fVar37 +
                   (*(float *)&REFG(undefined, 0x1138afc) - fVar16) * pfVar7[3];
          fVar21 = fVar20 * fVar20 + fVar18 * fVar18;
          fVar24 = fVar16 * fVar16 + fVar19 * fVar19;
          fVar27 = fVar18 * fVar18 + fVar20 * fVar20;
          fVar29 = fVar19 * fVar19 + fVar16 * fVar16;
          fVar17 = fVar24 + fVar21;
          fVar21 = fVar21 + fVar24;
          fVar24 = fVar29 + fVar27;
          fVar27 = fVar27 + fVar29;
          (*(undefined4 *)((char *)&auVar35 + 4)) = (undefined4)gen_fl2bits(fVar21);
          (*(undefined4 *)((char *)&auVar35 + 0)) = (undefined4)gen_fl2bits(fVar17);
          (*(undefined4 *)((char *)&auVar35 + 8)) = (undefined4)gen_fl2bits(fVar24);
          (*(undefined4 *)((char *)&auVar35 + 12)) = (undefined4)gen_fl2bits(fVar27);
          gen_rsqrtps(&(auVar35), &(auVar36), &(auVar35));
          fVar26 = (*(float *)((char *)&auVar35 + 0));
          fVar29 = (*(float *)((char *)&auVar35 + 4));
          fVar22 = (*(float *)((char *)&auVar35 + 8));
          fVar23 = (*(float *)((char *)&auVar35 + 12));
          fVar21 = *(float *)&REFG(undefined, 0x1137f34) - (fVar29 * fVar21) * fVar29;
          fVar24 = *(float *)&REFG(undefined, 0x1137f38) - (fVar22 * fVar24) * fVar22;
          fVar27 = *(float *)&REFG(undefined, 0x1137f3c) - (fVar23 * fVar27) * fVar23;
          fVar29 = *(float *)&REFG(undefined, 0x1137f44) * fVar29;
          fVar22 = *(float *)&REFG(undefined, 0x1137f48) * fVar22;
          fVar23 = *(float *)&REFG(undefined, 0x1137f4c) * fVar23;
          *pfVar7 = ((*(float *)&REFG(undefined, 0x1137f30) - (fVar26 * fVar17) * fVar26) *
                    (*(float *)&REFG(undefined, 0x1137f40) * fVar26)) * fVar18;
          pfVar7[1] = (fVar21 * fVar29) * fVar19;
          pfVar7[2] = (fVar24 * fVar22) * fVar20;
          pfVar7[3] = (fVar27 * fVar23) * fVar16;
        }
        uVar10 = uVar10 + 1;
        pfVar7 = pfVar7 + 0xc;
      } while ((int)uVar10 <= iVar3);
    }
  }
  else if (-1 < iVar3) {
    iVar11 = 0;
    do {
      uVar1 = *(ushort *)(param_1[5] + uVar10 * 2);
      if ((-1 < (short)uVar1) && ((int)(uint)uVar1 < param_1[2])) {
        fVar16 = REFG(float, 0x1087f04);
        if (param_1[4] != 0) {
          fVar16 = (float)*(byte *)(param_1[4] + uVar10) * REFG(float, 0x10addc0);
        }
        pfVar7 = (float *)(*param_1 + 0x10 + iVar11);
        fVar18 = *pfVar7;
        fVar19 = pfVar7[1];
        fVar20 = pfVar7[2];
        fVar21 = pfVar7[3];
        pfVar7 = (float *)((short)uVar1 * 0x30 + param_2);
        fVar24 = *pfVar7;
        fVar27 = pfVar7[1];
        fVar29 = pfVar7[2];
        fVar17 = pfVar7[3];
        fVar22 = fVar24 * fVar18;
        fVar23 = fVar27 * fVar19;
        fVar26 = fVar29 * fVar20;
        pfVar9 = (float *)(*param_1 + iVar11);
        fVar31 = (((fVar23 + fVar22) + fVar26) * fVar18 +
                 (fVar21 * fVar21 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0))) *
                 fVar24) + (fVar29 * fVar19 - fVar27 * fVar20) * fVar21;
        fVar32 = (((fVar23 + fVar22) + fVar26) * fVar19 +
                 (fVar21 * fVar21 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4))) *
                 fVar27) + (fVar24 * fVar20 - fVar29 * fVar18) * fVar21;
        fVar33 = (((fVar23 + fVar22) + fVar26) * fVar20 +
                 (fVar21 * fVar21 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8))) *
                 fVar29) + (fVar27 * fVar18 - fVar24 * fVar19) * fVar21;
        fVar26 = (((fVar23 + fVar22) + fVar26) * fVar21 +
                 (fVar21 * fVar21 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc))) *
                 fVar17) + (fVar17 * fVar21 - fVar17 * fVar21) * fVar21;
        fVar18 = pfVar7[7];
        local_40 = gen_bits2f((uint)*(undefined8 *)(pfVar7 + 4));
        fStack_3c = gen_bits2f((uint)((ulonglong)*(undefined8 *)(pfVar7 + 4) >> 0x20));
        fStack_38 = gen_bits2f((uint)*(undefined8 *)(pfVar7 + 6));
        local_30 = gen_bits2f((uint)*(undefined8 *)(pfVar9 + 4));
        fStack_2c = gen_bits2f((uint)((ulonglong)*(undefined8 *)(pfVar9 + 4) >> 0x20));
        fStack_28 = gen_bits2f((uint)*(undefined8 *)(pfVar9 + 6));
        fVar19 = *pfVar9;
        fVar20 = pfVar9[1];
        fVar24 = pfVar9[2];
        fVar27 = pfVar9[3];
        fVar17 = ((fStack_2c * fStack_38 - fStack_28 * fStack_3c) + local_40 * fVar21) +
                 local_30 * fVar18;
        fVar22 = ((fStack_28 * local_40 - local_30 * fStack_38) + fStack_3c * fVar21) +
                 fStack_2c * fVar18;
        fVar23 = ((local_30 * fStack_3c - fStack_2c * local_40) + fStack_38 * fVar21) +
                 fStack_28 * fVar18;
        fVar16 = fVar16 * gen_bits2f(param_1[3]);
        fVar38 = fVar18 * fVar21 -
                 ((fStack_2c * fStack_3c + local_30 * local_40) + fStack_28 * fStack_38);
        fVar18 = pfVar9[9];
        fVar21 = pfVar9[10];
        fVar29 = pfVar9[0xb];
        pfVar7[8] = (pfVar9[8] * pfVar7[8] - pfVar7[8]) * fVar16 + pfVar7[8];
        pfVar7[9] = (fVar18 * pfVar7[9] - pfVar7[9]) * fVar16 + pfVar7[9];
        pfVar7[10] = (fVar21 * pfVar7[10] - pfVar7[10]) * fVar16 + pfVar7[10];
        pfVar7[0xb] = (fVar29 * pfVar7[0xb] - pfVar7[0xb]) * fVar16 + pfVar7[0xb];
        *pfVar7 = (((fVar31 + fVar31) + fVar19) - *pfVar7) * fVar16 + *pfVar7;
        pfVar7[1] = (((fVar32 + fVar32) + fVar20) - pfVar7[1]) * fVar16 + pfVar7[1];
        pfVar7[2] = (((fVar33 + fVar33) + fVar24) - pfVar7[2]) * fVar16 + pfVar7[2];
        pfVar7[3] = (((fVar26 + fVar26) + fVar27) - pfVar7[3]) * fVar16 + pfVar7[3];
        fVar18 = pfVar7[4] * fVar17;
        fVar19 = pfVar7[5] * fVar22;
        fVar20 = pfVar7[6] * fVar23;
        fVar21 = pfVar7[7] * fVar38;
        (*(float *)((char *)&auVar34 + 0)) = fVar20 + fVar18;
        (*(float *)((char *)&auVar34 + 4)) = fVar21 + fVar19;
        (*(float *)((char *)&auVar34 + 8)) = fVar18 + fVar20;
        (*(float *)((char *)&auVar34 + 12)) = fVar19 + fVar21;
        uVar12 = -(uint)((*(float *)((char *)&auVar34 + 4)) + (*(float *)((char *)&auVar34 + 0)) < 0.0);
        uVar13 = -(uint)((*(float *)((char *)&auVar34 + 0)) + (*(float *)((char *)&auVar34 + 4)) < 0.0);
        uVar14 = -(uint)((*(float *)((char *)&auVar34 + 12)) + (*(float *)((char *)&auVar34 + 8)) < 0.0);
        uVar15 = -(uint)((*(float *)((char *)&auVar34 + 8)) + (*(float *)((char *)&auVar34 + 12)) < 0.0);
        fVar18 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar16) & uVar12 |
                            ~uVar12 & (uint)gen_fl2bits(fVar16)) * fVar17 +
                 (*(float *)&REFG(undefined, 0x1138af0) - fVar16) * pfVar7[4];
        fVar19 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar16) & uVar13 |
                            ~uVar13 & (uint)gen_fl2bits(fVar16)) * fVar22 +
                 (*(float *)&REFG(undefined, 0x1138af4) - fVar16) * pfVar7[5];
        fVar20 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar16) & uVar14 |
                            ~uVar14 & (uint)gen_fl2bits(fVar16)) * fVar23 +
                 (*(float *)&REFG(undefined, 0x1138af8) - fVar16) * pfVar7[6];
        fVar16 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar16) & uVar15 |
                            ~uVar15 & (uint)gen_fl2bits(fVar16)) * fVar38 +
                 (*(float *)&REFG(undefined, 0x1138afc) - fVar16) * pfVar7[7];
        fVar21 = fVar20 * fVar20 + fVar18 * fVar18;
        fVar24 = fVar16 * fVar16 + fVar19 * fVar19;
        fVar27 = fVar18 * fVar18 + fVar20 * fVar20;
        fVar29 = fVar19 * fVar19 + fVar16 * fVar16;
        fVar17 = fVar24 + fVar21;
        fVar21 = fVar21 + fVar24;
        fVar24 = fVar29 + fVar27;
        fVar27 = fVar27 + fVar29;
        (*(undefined4 *)((char *)&auVar5 + 4)) = (undefined4)gen_fl2bits(fVar21);
        (*(undefined4 *)((char *)&auVar5 + 0)) = (undefined4)gen_fl2bits(fVar17);
        (*(undefined4 *)((char *)&auVar5 + 8)) = (undefined4)gen_fl2bits(fVar24);
        (*(undefined4 *)((char *)&auVar5 + 12)) = (undefined4)gen_fl2bits(fVar27);
        gen_rsqrtps(&(auVar35), &(auVar34), &(auVar5));
        fVar26 = (*(float *)((char *)&auVar35 + 0));
        fVar29 = (*(float *)((char *)&auVar35 + 4));
        fVar22 = (*(float *)((char *)&auVar35 + 8));
        fVar23 = (*(float *)((char *)&auVar35 + 12));
        fVar21 = *(float *)&REFG(undefined, 0x1137f34) - (fVar29 * fVar21) * fVar29;
        fVar24 = *(float *)&REFG(undefined, 0x1137f38) - (fVar22 * fVar24) * fVar22;
        fVar27 = *(float *)&REFG(undefined, 0x1137f3c) - (fVar23 * fVar27) * fVar23;
        fVar29 = *(float *)&REFG(undefined, 0x1137f44) * fVar29;
        fVar22 = *(float *)&REFG(undefined, 0x1137f48) * fVar22;
        fVar23 = *(float *)&REFG(undefined, 0x1137f4c) * fVar23;
        pfVar7[4] = ((*(float *)&REFG(undefined, 0x1137f30) - (fVar26 * fVar17) * fVar26) *
                    (*(float *)&REFG(undefined, 0x1137f40) * fVar26)) * fVar18;
        pfVar7[5] = (fVar21 * fVar29) * fVar19;
        pfVar7[6] = (fVar24 * fVar22) * fVar20;
        pfVar7[7] = (fVar27 * fVar23) * fVar16;
      }
      uVar10 = uVar10 + 1;
      iVar11 = iVar11 + 0x30;
    } while ((int)uVar10 <= iVar3);
  }
  pvVar8 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar2 = *(undefined4 * PTR32 *)((int)pvVar8 + 4);
  pvVar6 = pvVar8;
  if (puVar2 < *(undefined4 * PTR32 *)((int)pvVar8 + 0xc)) {
    *puVar2 = &REFG(undefined, 0x1136cb0);
    uVar4 = rdtsc();
    pvVar6 = (LPVOID)uVar4;
    puVar2[1] = pvVar6;
    *(undefined4 * PTR32 *)((int)pvVar8 + 4) = puVar2 + 3;
  }
  return (uint)pvVar6;
}

/* ref: FUN_00d84050 */
uint F_00d84050(unsigned int gen_a0)
{
  GEN_ENTER(0xd84050u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x28))(param_1);
  return (param_1[5] + 0xfU & 0xfffffff0) +
         (param_1[4] + 0xfU & 0xfffffff0) + uVar1 +
         (param_1[4] * 2 + 0xfU & 0xfffffff0) + (param_1[5] * 2 + 0xfU & 0xfffffff0);
}

/* ref: FUN_00d84090 */
uint F_00d84090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xd84090u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint param_7 = (uint)gen_a6;
  *(int *)(param_7 + 0x20) = param_1;
  *(undefined4 *)(param_7 + 0x24) = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0x24)));
  *(undefined4 *)(param_7 + 0x28) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_7 + 0x2c) = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0x1c)));
  *(undefined4 *)(param_7 + 0x30) = param_6;
  *(undefined4 *)(param_7 + 0x34) = param_2;
  *(undefined4 *)(param_7 + 0x38) = param_4;
  *(undefined4 *)(param_7 + 0x48) = param_3;
  *(undefined4 *)(param_7 + 0x4c) = param_5;
  return param_7;
}

/* ref: FUN_00d840e0 */
uint F_00d840e0(unsigned int gen_a0)
{
  GEN_ENTER(0xd840e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  uint local_8;
  
  uVar3 = 0;
  iVar4 = 0;
  local_8 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      iVar1 = *((int *)GEN_TOP((*(int *)(param_1 + 0x10) + iVar4 * 4)));
      piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(iVar1 + 0x28) + 0xc)));
      uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2);
      uVar3 = (*(int *)(iVar1 + 0x14) + 0xfU & 0xfffffff0) +
              (*(int *)(iVar1 + 0x20) + 0xfU & 0xfffffff0) + uVar3 +
              (*((int *)GEN_TOP((*(int *)(iVar1 + 0x28) + 0x20))) * 2 + 0xfU & 0xfffffff0) +
              (*((int *)GEN_TOP((*(int *)(iVar1 + 0x28) + 0x14))) * 2 + 0xfU & 0xfffffff0);
      if ((int)local_8 < (int)uVar3) {
        local_8 = uVar3;
      }
      iVar4 = iVar4 + 1;
      uVar3 = local_8;
    } while (iVar4 < *(int *)(param_1 + 0x14));
  }
  return uVar3;
}

/* ref: FUN_00d84160 */
uint F_00d84160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd84160u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_1 + 0x14);
  iVar1 = *(int *)(param_1 + 0x14);
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar3 = F_00d92460(*(undefined4 *)((int)pvVar2 + 0x2c),iVar1 * 0x1c);
  *(uint *)(param_2 + 0x24) = uVar3;
  uVar3 = F_00da3720(uVar3,0,*(int *)(param_1 + 0x14) * 0x1c);
  return uVar3;
}

/* ref: FUN_00d841c0 */
uint F_00d841c0(unsigned int gen_a0)
{
  GEN_ENTER(0xd841c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 uVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar3 = F_00d924b0(*(undefined4 *)((int)pvVar2 + 0x2c),uVar1);
  return uVar3;
}

/* ref: FUN_00d841f0 */
uint F_00d841f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, float gen_a9)
{
  GEN_ENTER(0xd841f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  int param_7 = (int)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  float param_10 = (float)gen_a9;
  undefined4 * puVar1;
  float fVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  ushort * puVar7;
  int iVar8;
  
  iVar8 = param_1;
  *(undefined4 *)(param_7 + 0x30) = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0x24)));
  *(undefined4 *)(param_7 + 0x34) = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0x30)));
  *(undefined4 *)(param_7 + 0x28) = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0x1c)));
  *(undefined4 *)(param_7 + 0x2c) = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0x40)));
  *(undefined4 *)(param_7 + 0x3c) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_7 + 0x38) = param_6;
  *(float *)(param_7 + 0x40) = param_10;
  *(undefined4 *)(param_7 + 0x20) = 0;
  param_1 = 0;
  *(uint *)(param_7 + 0x44) = (uint)((char)param_8 != '\0') | -(uint)((char)param_9 != '\0') & 2;
  if (0 < *(int *)(iVar8 + 0x14)) {
    do {
      iVar5 = *((int *)GEN_TOP((*(int *)(iVar8 + 0x10) + param_1 * 4)));
      fVar2 = *(float *)(iVar5 + 0xc);
      if ((GEN_ISNAN(fVar2) == (GEN_ISNAN(fVar2) || fVar2 == 0.0)) &&
         (iVar6 = *((int *)GEN_TOP((*(int *)(iVar5 + 0x28) + 0xc))), *(int *)(iVar6 + 8) == 4)) {
        puVar7 = *(ushort * PTR32 *)(iVar6 + 0x28);
        puVar1 = ((undefined4 *)GEN_TOP((*(int *)(param_7 + 0x24) + *(int *)(param_7 + 0x20) * 0x1c)));
        *puVar1 = puVar7;
        puVar1[1] = (uint)*puVar7;
        puVar1[2] = *(undefined4 *)(iVar5 + 8);
        uVar3 = *(undefined4 *)(iVar5 + 0xc);
        puVar1[6] = 0;
        puVar1[3] = uVar3;
        cVar4 = *((char *)GEN_TOP((*(int *)(iVar5 + 0x28) + 0x28)));
        puVar1[4] = 0;
        puVar1[5] = 0;
        puVar1[6] = (uint)(cVar4 == '\x01');
        *(int *)(param_7 + 0x20) = *(int *)(param_7 + 0x20) + 1;
      }
      param_1 = param_1 + 1;
    } while (param_1 < *(int *)(iVar8 + 0x14));
  }
  *(undefined4 *)(param_7 + 0x50) = param_2;
  *(undefined4 *)(param_7 + 0x58) = param_4;
  *(uint *)(param_7 + 0x54) = param_3;
  *(undefined4 *)(param_7 + 0x5c) = param_5;
  return param_3;
}

/* ref: FUN_00d842f0 */
uint F_00d842f0(unsigned int gen_a0)
{
  GEN_ENTER(0xd842f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = F_00d92460(*(undefined4 *)((int)pvVar1 + 0x2c),(param_1 + 3U & 0xfffffffc) * 4);
  return uVar2;
}

/* ref: FUN_00d84320 */
uint F_00d84320(unsigned int gen_a0)
{
  GEN_ENTER(0xd84320u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = F_00d924b0(*(undefined4 *)((int)pvVar1 + 0x2c),param_1);
  return uVar2;
}

/* ref: FUN_00d84350 */
uint F_00d84350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd84350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  ushort * puVar1;
  
  puVar1 = *(ushort * PTR32 *)(param_1 + 0x28);
  *(ushort * PTR32 *)this = puVar1;
  *(uint *)((int)this + 4) = (uint)*puVar1;
  return (uint)puVar1;
}

/* ref: FUN_00d84370 */
uint F_00d84370(unsigned int gen_a0)
{
  GEN_ENTER(0xd84370u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = F_00d92460(*(undefined4 *)((int)pvVar1 + 0x2c),param_1 * 0x1c);
  return uVar2;
}

/* ref: FUN_00d843a0 */
uint F_00d843a0(unsigned int gen_a0)
{
  GEN_ENTER(0xd843a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = F_00d924b0(*(undefined4 *)((int)pvVar1 + 0x2c),param_1);
  return uVar2;
}

/* ref: FUN_00d843d0 */
uint F_00d843d0(unsigned int gen_a0)
{
  GEN_ENTER(0xd843d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = F_00d92460(*(undefined4 *)((int)pvVar1 + 0x2c),param_1 * 4);
  return uVar2;
}

/* ref: FUN_00d84400 */
uint F_00d84400(unsigned int gen_a0)
{
  GEN_ENTER(0xd84400u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = F_00d924b0(*(undefined4 *)((int)pvVar1 + 0x2c),param_1);
  return uVar2;
}

/* ref: FUN_00d84450 */
unsigned int F_00d84450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd84450u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_eax = (undefined4)gen_a0;
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = in_eax;
  return 0;
}

/* ref: FUN_00d84460 */
unsigned int F_00d84460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd84460u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_eax = (undefined4)gen_a0;
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = in_eax;
  return 0;
}

/* ref: FUN_00d84470 */
unsigned int F_00d84470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd84470u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_eax = (undefined4)gen_a0;
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = in_eax;
  return 0;
}

/* ref: FUN_00d84480 */
unsigned int F_00d84480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd84480u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_eax = (undefined4)gen_a0;
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = in_eax;
  return 0;
}

/* ref: FUN_00d84490 */
unsigned int F_00d84490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd84490u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_eax = (undefined4)gen_a0;
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = in_eax;
  return 0;
}

/* ref: FUN_00d844a0 */
unsigned int F_00d844a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd844a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_eax = (undefined4)gen_a0;
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = in_eax;
  return 0;
}

/* ref: FUN_00d844b0 */
unsigned int F_00d844b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd844b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_eax = (undefined4)gen_a0;
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = in_eax;
  return 0;
}

/* ref: FUN_00d844c0 */
unsigned int F_00d844c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd844c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_eax = (undefined4 *)(uintptr_t)gen_a0;
  int in_ecx = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if ((in_eax != (undefined4 *)0x0) && (puVar1 = param_3, 0 < in_ecx)) {
    for (; in_ecx != 0; in_ecx = in_ecx + -1) {
      *in_eax = *puVar1;
      puVar1 = puVar1 + 1;
      in_eax = in_eax + 1;
    }
  }
  return 0;
}

/* ref: FUN_00d84530 */
unsigned int F_00d84530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd84530u, gen_a0, gen_a1, gen_a2, 0u);
  int in_eax = (int)gen_a0;
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a1;
  int in_edi = (int)gen_a2;
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 * puVar5;
  int iVar6;
  
  if ((in_edi != 0) && (0 < in_eax)) {
    puVar5 = (undefined4 *)(in_edi + 0x10);
    iVar6 = (int)in_ecx - in_edi;
    do {
      uVar2 = in_ecx[1];
      uVar3 = in_ecx[2];
      uVar4 = in_ecx[3];
      puVar5[-4] = *in_ecx;
      puVar5[-3] = uVar2;
      puVar5[-2] = uVar3;
      puVar5[-1] = uVar4;
      puVar1 = (undefined4 *)(iVar6 + (int)puVar5);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *puVar5 = *puVar1;
      puVar5[1] = uVar2;
      puVar5[2] = uVar3;
      puVar5[3] = uVar4;
      uVar2 = in_ecx[9];
      uVar3 = in_ecx[10];
      uVar4 = in_ecx[0xb];
      puVar5[4] = in_ecx[8];
      puVar5[5] = uVar2;
      puVar5[6] = uVar3;
      puVar5[7] = uVar4;
      in_ecx = in_ecx + 0xc;
      puVar5 = puVar5 + 0xc;
      in_eax = in_eax + -1;
    } while (in_eax != 0);
  }
  return 0;
}

/* ref: FUN_00d84570 */
uint F_00d84570(unsigned int gen_a0)
{
  GEN_ENTER(0xd84570u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  LPVOID this;
  uint uVar2;
  uint uVar3;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = *(uint *)((int)this + 0xc);
  uVar3 = (param_1 + 3U & 0xfffffffc) * 0x30 + 0x7f & 0xffffff80;
  uVar2 = uVar1 + uVar3;
  if (((int)uVar3 <= *(int *)((int)this + 8)) && (uVar2 <= *(uint *)((int)this + 0x10))) {
    *(uint *)((int)this + 0xc) = uVar2;
    return uVar1;
  }
  uVar2 = F_00d94390(this,uVar3);
  return uVar2;
}

/* ref: FUN_00d845c0 */
uint F_00d845c0(unsigned int gen_a0)
{
  GEN_ENTER(0xd845c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  LPVOID this;
  uint uVar2;
  uint uVar3;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = *(uint *)((int)this + 0xc);
  uVar3 = (param_1 + 3U & 0xfffffffc) * 4 + 0x7f & 0xffffff80;
  uVar2 = uVar1 + uVar3;
  if (((int)uVar3 <= *(int *)((int)this + 8)) && (uVar2 <= *(uint *)((int)this + 0x10))) {
    *(uint *)((int)this + 0xc) = uVar2;
    return uVar1;
  }
  uVar2 = F_00d94390(this,uVar3);
  return uVar2;
}

/* ref: FUN_00d84610 */
uint F_00d84610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd84610u, gen_a0, gen_a1, 0u, 0u);
  int in_esi = (int)gen_a0;
  int param_2 = (int)gen_a1;
  LPVOID this;
  uint uVar1;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = (param_2 + 3U & 0xfffffffc) * 4 + 0x7f & 0xffffff80;
  if ((((int)uVar1 <= *(int *)((int)this + 8)) && (uVar1 + in_esi == *(int *)((int)this + 0xc))) &&
     (*(int *)((int)this + 0x14) != in_esi)) {
    *(int *)((int)this + 0xc) = in_esi;
    return (uint)this;
  }
  uVar1 = F_00d945c0(this,in_esi,uVar1);
  return uVar1;
}

/* ref: FUN_00d84660 */
uint F_00d84660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd84660u, gen_a0, gen_a1, 0u, 0u);
  int in_edi = (int)gen_a0;
  int param_2 = (int)gen_a1;
  LPVOID this;
  uint uVar1;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = (param_2 + 3U & 0xfffffffc) * 0x30 + 0x7f & 0xffffff80;
  if ((((int)uVar1 <= *(int *)((int)this + 8)) && (uVar1 + in_edi == *(int *)((int)this + 0xc))) &&
     (*(int *)((int)this + 0x14) != in_edi)) {
    *(int *)((int)this + 0xc) = in_edi;
    return (uint)this;
  }
  uVar1 = F_00d945c0(this,in_edi,uVar1);
  return uVar1;
}

/* ref: FUN_00d846b0 */
uint F_00d846b0(unsigned int gen_a0)
{
  GEN_ENTER(0xd846b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  longlong lVar1;
  ushort uVar2;
  undefined4 uVar3;
  float fVar4;
  ushort * puVar5;
  undefined8 uVar6;
  LPVOID pvVar7;
  uint uVar8;
  undefined4 * puVar9;
  float * pfVar10;
  LPVOID pvVar11;
  float * pfVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  float10 fVar16;
  float10 fVar17;
  float fVar18;
  float fVar19;
  
  pvVar7 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar9 = *(undefined4 * PTR32 *)((int)pvVar7 + 4);
  if (puVar9 < *(undefined4 * PTR32 *)((int)pvVar7 + 0xc)) {
    *puVar9 = "LthkaQuantizedSampleAndCombineJob";
    puVar9[3] = "StAllocateAndDMASkeleton";
    uVar6 = rdtsc();
    (*(uint *)(gen_frame + 0xf4)) = (int)uVar6;
    puVar9[1] = (int)uVar6;
    *(undefined4 * PTR32 *)((int)pvVar7 + 4) = puVar9 + 4;
  }
  F_00d84450(*(undefined4 *)(param_1 + 0x30),((uint *)(gen_frame + 0x90)) + 4);
  F_00d84460(*(undefined4 *)(param_1 + 0x34),&(*(undefined4 * PTR32 *)(gen_frame + 0xa4)));
  F_00d84470(*(undefined4 *)(param_1 + 0x38),&(*(undefined4 *)(gen_frame + 0xac)));
  F_00d84480(*(undefined4 *)(param_1 + 0x24),&(*(int *)(gen_frame + 0xe0)));
  F_00d84470(*(undefined4 *)(param_1 + 0x48),((uint *)(gen_frame + 0x90)) + 2);
  F_00d84490(*(undefined4 *)(param_1 + 0x4c),&(*(undefined4 *)(gen_frame + 0xa8)));
  uVar8 = F_00d84570(*(undefined4 *)(param_1 + 0x28));
  (*(uint *)(gen_frame + 0xfc)) = uVar8;
  uVar8 = F_00d845c0(*(undefined4 *)(param_1 + 0x2c));
  (*(uint *)(gen_frame + 0xdc)) = uVar8;
  puVar9 = (undefined4 *)F_00d845c0(*(undefined4 *)(param_1 + 0x28));
  (*(undefined4 * PTR32 *)(gen_frame + 0xc8)) = puVar9;
  puVar9 = (undefined4 *)F_00d845c0(*(undefined4 *)(param_1 + 0x2c));
  (*(undefined4 * PTR32 *)(gen_frame + 0xd8)) = puVar9;
  uVar8 = F_00d84570(*(undefined4 *)(param_1 + 0x28));
  (*(uint *)(gen_frame + 0xec)) = uVar8;
  uVar8 = F_00d845c0(*(undefined4 *)(param_1 + 0x2c));
  (*(uint *)(gen_frame + 0xf4)) = uVar8;
  uVar8 = F_00d845c0(*(undefined4 *)(param_1 + 0x28));
  (*(uint *)(gen_frame + 0xd4)) = uVar8;
  uVar8 = F_00d845c0(*(undefined4 *)(param_1 + 0x2c));
  (*(uint *)(gen_frame + 0xcc)) = uVar8;
  iVar15 = 0;
  do {
    uVar8 = F_00d84570(*(undefined4 *)(param_1 + 0x28));
    *(uint *)((int)((uint *)(gen_frame + 0x48)) + iVar15 + 0x34) = uVar8;
    uVar8 = F_00d845c0(*(undefined4 *)(param_1 + 0x2c));
    uVar3 = *(undefined4 *)(param_1 + 0x28);
    *(uint *)((int)((uint *)(gen_frame + 0x90)) + iVar15) = uVar8;
    uVar8 = F_00d845c0(uVar3);
    uVar3 = *(undefined4 *)(param_1 + 0x2c);
    *(uint *)((int)((uint *)(gen_frame + 0x48)) + iVar15 + 0x20) = uVar8;
    uVar8 = F_00d845c0(uVar3);
    *(uint *)((int)((uint *)(gen_frame + 0x48)) + iVar15 + 0x18) = uVar8;
    iVar15 = iVar15 + 4;
  } while (iVar15 < 8);
  ((uint *)(gen_frame + 0x7c))[3] = *(int *)(param_1 + 0x28) + 3U & 0xfffffffc;
  iVar15 = *(int *)(param_1 + 0x28) * 3;
  ((uint *)(gen_frame + 0x7c))[2] = *(int *)(param_1 + 0x2c) + 3U & 0xfffffffc;
  if (0 < iVar15) {
    pfVar12 = (float *)(((uint *)(gen_frame + 0x90))[4] + 0xc);
    pfVar10 = (float *)((*(uint *)(gen_frame + 0xfc)) + 8);
    (*(int *)(gen_frame + 0x100)) = iVar15;
    (*(undefined4 * PTR32 *)(gen_frame + 0x10c)) = (undefined4 *)(((uint *)(gen_frame + 0x90))[4] - (*(uint *)(gen_frame + 0xfc)));
    do {
      fVar19 = *((float *)GEN_TOP(((((uint *)(gen_frame + 0x90))[4] - (*(uint *)(gen_frame + 0xfc))) + (int)pfVar10)));
      (*(float *)(gen_frame + 0xd0)) = fVar19;
      fVar18 = *pfVar12;
      (*(float *)(gen_frame + 0xe4)) = fVar18;
      fVar4 = pfVar12[-3];
      pfVar10[-1] = pfVar12[-2];
      *pfVar10 = fVar19;
      pfVar10[-2] = fVar4;
      pfVar10[1] = fVar18;
      pfVar12 = pfVar12 + 4;
      pfVar10 = pfVar10 + 4;
      iVar15 = (*(int *)(gen_frame + 0x100)) + -1;
      (*(int *)(gen_frame + 0x100)) = iVar15;
    } while (iVar15 != 0);
  }
  iVar15 = *(int *)(param_1 + 0x2c);
  if (0 < iVar15) {
    puVar9 = (*(undefined4 * PTR32 *)(gen_frame + 0xa4));
    do {
      *((undefined4 *)GEN_TOP((((*(uint *)(gen_frame + 0xdc)) - (int)(*(undefined4 * PTR32 *)(gen_frame + 0xa4))) + (int)puVar9))) = *puVar9;
      puVar9 = puVar9 + 1;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
  iVar15 = *(int *)(param_1 + 0x28);
  puVar9 = (*(undefined4 * PTR32 *)(gen_frame + 0xc8));
  if (-1 < iVar15 + -1) {
    for (; iVar15 != 0; iVar15 = iVar15 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
  }
  iVar15 = *(int *)(param_1 + 0x2c);
  puVar9 = (*(undefined4 * PTR32 *)(gen_frame + 0xd8));
  if (-1 < iVar15 + -1) {
    for (; iVar15 != 0; iVar15 = iVar15 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
  }
  (*(float *)(gen_frame + 0xe4)) = 0.0;
  iVar15 = 1;
  (*(int *)(gen_frame + 0xf8)) = 2;
  (*(int *)(gen_frame + 0xf0)) = 0;
  (*(int *)(gen_frame + 0xe8)) = *(int *)(param_1 + 0x20);
  pvVar7 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar9 = *(undefined4 * PTR32 *)((int)pvVar7 + 4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x10c)) = puVar9;
  if (puVar9 < *(undefined4 * PTR32 *)((int)pvVar7 + 0xc)) {
    *puVar9 = "StSampleAndBlendPipeline";
    uVar6 = rdtsc();
    (*(int *)(gen_frame + 0x100)) = (int)uVar6;
    puVar9[1] = (int)uVar6;
    *(undefined4 * PTR32 *)((int)pvVar7 + 4) = puVar9 + 3;
  }
  if (-2 < (*(int *)(gen_frame + 0xe8))) {
    (*(int *)(gen_frame + 0x100)) = -1;
    (*(undefined4 * PTR32 *)(gen_frame + 0x108)) = (undefined4 *)((*(int *)(gen_frame + 0xe0)) + 0x14);
    fVar19 = REFG(float, 0x1087f04);
    do {
      iVar14 = (*(int *)(gen_frame + 0x100));
      iVar13 = (*(int *)(gen_frame + 0x100)) + 1;
      ((uint *)(gen_frame + 0x7c))[4] = iVar13;
      if ((-1 < iVar13) && (iVar13 < (*(int *)(gen_frame + 0xe8)))) {
        F_00d844a0((*(undefined4 * PTR32 *)(gen_frame + 0x108))[-5],((uint *)(gen_frame + 0x48)) + (*(int *)(gen_frame + 0xf0)) + 10);
        F_00d844b0((*(undefined4 * PTR32 *)(gen_frame + 0x108))[-1],((uint *)(gen_frame + 0x48)) + (*(int *)(gen_frame + 0xf0)) + 3);
        F_00d844b0(*(*(undefined4 * PTR32 *)(gen_frame + 0x108)),((uint *)(gen_frame + 0x48)) + (*(int *)(gen_frame + 0xf0)));
      }
      if ((-1 < iVar14) && (iVar14 < (*(int *)(gen_frame + 0xe8)))) {
        puVar5 = (ushort *)((uint *)(gen_frame + 0x48))[(int)((*(int *)(gen_frame + 0xf8)) + 10)];
        iVar13 = puVar5[3] - 1;
        (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0xb8)) + 4)) = (undefined4 *)iVar13;
        fVar16 = (float10)iVar13;
        if (iVar13 < 0) {
          fVar16 = fVar16 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x104)) + 2)) = ((undefined2)0x27f);
        uVar8 = puVar5[3] - 2;
        fVar16 = fVar16 * (((float10)GEN_TOD(gen_bits2f((*(undefined4 * PTR32 *)(gen_frame + 0x108))[-10]))) / (float10)*(float *)(puVar5 + 4));
        (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0xb8)) + 4)) = (undefined4 *)(((undefined2)0x27f) | 0xc00);
        lVar1 = (longlong)TRUNC(fVar16);
        (*(ulonglong *)(gen_frame + 0xb8)) = lVar1;
        lVar1 = (*(ulonglong *)(gen_frame + 0xb8));
        (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0xb8)) + 0)) = gen_bits2f((uint)lVar1);
        if (uVar8 < (uint)gen_fl2bits((float)(*(ulonglong *)(gen_frame + 0xb8)))) {
          (*(uint *)(gen_frame + 0x104)) = uVar8;
          (*(ulonglong *)(gen_frame + 0xb8)) = lVar1;
LAB_00d84a04: ;
          fVar18 = fVar19;
        }
        else {
          (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0xb8)) + 4)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)((float)(*(ulonglong *)(gen_frame + 0xb8)))));
          fVar17 = (float10)(int)gen_fl2bits((float)(*(ulonglong *)(gen_frame + 0xb8)));
          (*(uint *)(gen_frame + 0x104)) = (uint)gen_fl2bits((float)(*(ulonglong *)(gen_frame + 0xb8)));
          if ((int)gen_fl2bits((float)(*(ulonglong *)(gen_frame + 0xb8))) < 0) {
            fVar17 = fVar17 + (float10)*(float *)&REFG(undefined, 0x1088110);
          }
          fVar16 = fVar16 - fVar17;
          fVar18 = (float)fVar16;
          (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0xb8)) + 4)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)(fVar18)));
          (*(ulonglong *)(gen_frame + 0xb8)) = CONCAT44((uint)gen_fl2bits(fVar18),(uint)gen_fl2bits((float)(*(ulonglong *)(gen_frame + 0xb8))));
          if (fVar16 < (float10)0) {
            fVar18 = 0.0;
          }
          else if (fVar19 < fVar18) goto LAB_00d84a04;
        }
        uVar2 = puVar5[0xe];
        ((float *)(gen_frame + 0x24))[(int)((*(int *)(gen_frame + 0xf8)))] = fVar18;
        uVar8 = (uint)*puVar5;
        iVar13 = (*(uint *)(gen_frame + 0x104)) + 1;
        (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0xb8)) + 4)) = (undefined4 *)uVar8;
        (*(ulonglong *)(gen_frame + 0xb8)) = (ulonglong)CONCAT24(*puVar5,(uint)gen_fl2bits((float)(*(ulonglong *)(gen_frame + 0xb8))));
        F_00d844a0(uVar2 * (*(uint *)(gen_frame + 0x104)) + uVar8 + (*(undefined4 * PTR32 *)(gen_frame + 0x108))[-0xc],((float *)(gen_frame + 0x24)) + (*(int *)(gen_frame + 0xf8)) * 2 + 3);
        F_00d844a0((*(undefined4 * PTR32 *)(gen_frame + 0x108))[-0xc] + iVar13 * (uint)uVar2 + uVar8,((float *)(gen_frame + 0x24)) + (*(int *)(gen_frame + 0xf8)) * 2 + 4);
        iVar14 = (*(int *)(gen_frame + 0x100));
      }
      if ((-1 < iVar14 + -1) && (iVar14 + -1 < (*(int *)(gen_frame + 0xe8)))) {
        pvVar7 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
        puVar9 = *(undefined4 * PTR32 *)((int)pvVar7 + 4);
        (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0xb8)) + 4)) = pvVar7;
        (*(ulonglong *)(gen_frame + 0xb8)) = CONCAT44(pvVar7,(uint)gen_fl2bits((float)(*(ulonglong *)(gen_frame + 0xb8))));
        if (puVar9 < *(undefined4 * PTR32 *)((int)pvVar7 + 0xc)) {
          *puVar9 = "LtSampleAndBlend";
          puVar9[3] = "StSample";
          uVar6 = rdtsc();
          ((uint *)(gen_frame + 0x90))[3] = (int)uVar6;
          puVar9[1] = (int)uVar6;
          *(undefined4 * PTR32 *)((int)pvVar7 + 4) = puVar9 + 4;
        }
        F_00d68da0(((uint *)(gen_frame + 0x48))[(int)(iVar15 + 10)],(undefined4)gen_fl2bits(((float *)(gen_frame + 0x24))[(int)(iVar15 * 2 + 3)]),
                     (undefined4)gen_fl2bits(((float *)(gen_frame + 0x24))[(int)(iVar15 * 2 + 4)]),
                     *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),(*(uint *)(gen_frame + 0xec)),
                     (*(uint *)(gen_frame + 0xf4)),(*(uint *)(gen_frame + 0xd4)),(*(uint *)(gen_frame + 0xcc)),((uint *)(gen_frame + 0x90))[4],(*(undefined4 * PTR32 *)(gen_frame + 0xa4)),((uint *)(gen_frame + 0x7c))[0],((uint *)(gen_frame + 0x7c))[1],
                     ((uint *)(gen_frame + 0x90))[0],((uint *)(gen_frame + 0x90))[1],((float *)(gen_frame + 0x24))[(int)(iVar15)],*(byte *)(param_1 + 0x44) & 1,
                     *(float *)(param_1 + 0x40));
        pvVar7 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
        puVar9 = *(undefined4 * PTR32 *)((int)pvVar7 + 4);
        (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0xb8)) + 4)) = puVar9;
        (*(ulonglong *)(gen_frame + 0xb8)) = CONCAT44(puVar9,(uint)gen_fl2bits((float)(*(ulonglong *)(gen_frame + 0xb8))));
        if (puVar9 < *(undefined4 * PTR32 *)((int)pvVar7 + 0xc)) {
          *puVar9 = "StBlend";
          uVar6 = rdtsc();
          (*(int *)(gen_frame + 0xe0)) = (int)uVar6;
          puVar9[1] = (int)uVar6;
          *(undefined4 * PTR32 *)((int)pvVar7 + 4) = puVar9 + 3;
        }
        fVar19 = gen_bits2f((*(undefined4 * PTR32 *)(gen_frame + 0x108))[-0x10]) + (*(float *)(gen_frame + 0xe4));
        (*(float *)(gen_frame + 0xe4)) = fVar19;
        if (GEN_ISNAN(fVar19) == (GEN_ISNAN(fVar19) || fVar19 == 0.0)) {
          (*(float *)(gen_frame + 0xd0)) = gen_bits2f((*(undefined4 * PTR32 *)(gen_frame + 0x108))[-0x10]) / fVar19;
        }
        else {
          (*(float *)(gen_frame + 0xd0)) = 0.0;
        }
        if ((*(byte *)((*(undefined4 * PTR32 *)(gen_frame + 0x108)) + -0xd) & 4) != 0) {
          if ((*(byte *)((*(undefined4 * PTR32 *)(gen_frame + 0x108)) + -0xd) & 3) == 0) {
            F_00d86a60((*(uint *)(gen_frame + 0xec)),(*(undefined4 *)(gen_frame + 0xac)),(*(undefined4 *)(gen_frame + 0xa8)),((uint *)(gen_frame + 0x90))[2],*(undefined4 *)(param_1 + 0x28));
          }
          else {
            F_00d86c30((*(uint *)(gen_frame + 0xec)),(*(undefined4 *)(gen_frame + 0xac)),(*(undefined4 *)(gen_frame + 0xa8)),((uint *)(gen_frame + 0x90))[2],*(undefined4 *)(param_1 + 0x28));
          }
        }
        if ((*(undefined4 * PTR32 *)(gen_frame + 0x108))[-0xf] != 0) {
          F_00d48570((*(uint *)(gen_frame + 0xd4)),(*(uint *)(gen_frame + 0xd4)),((uint *)(gen_frame + 0x48))[(int)(iVar15 + 3)],((uint *)(gen_frame + 0x7c))[3]);
        }
        if ((*(undefined4 * PTR32 *)(gen_frame + 0x108))[-0xe] != 0) {
          F_00d48570((*(uint *)(gen_frame + 0xcc)),(*(uint *)(gen_frame + 0xcc)),((uint *)(gen_frame + 0x48))[(int)(iVar15)],((uint *)(gen_frame + 0x7c))[2]);
        }
        if (((*(undefined4 * PTR32 *)(gen_frame + 0x108))[-0xd] & 1) == 0) {
          (*(uint *)(gen_frame + 0x104)) = -(uint)(((*(undefined4 * PTR32 *)(gen_frame + 0x108))[-0xd] & 2) != 0);
        }
        else {
          (*(uint *)(gen_frame + 0x104)) = 1;
        }
        uVar8 = *(uint *)(param_1 + 0x44);
        uVar3 = *(undefined4 *)(param_1 + 0x28);
        (*(float *)(gen_frame + 0xb0)) = (*(float *)(gen_frame + 0xd0));
        (*(float *)(gen_frame + 0xb4)) = (*(float *)(gen_frame + 0xd0));
        (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0xb8)) + 0)) = (*(float *)(gen_frame + 0xd0));
        (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0xb8)) + 4)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)((*(float *)(gen_frame + 0xd0)))));
        (*(float *)(gen_frame + 0x10)) = (*(float *)(gen_frame + 0xd0));
        (*(float *)(gen_frame + 0x14)) = (*(float *)(gen_frame + 0xd0));
        (*(float *)(gen_frame + 0x18)) = (*(float *)(gen_frame + 0xd0));
        (*(float *)(gen_frame + 0x1c)) = (*(float *)(gen_frame + 0xd0));
        F_00d49f20((*(uint *)(gen_frame + 0xfc)),(*(undefined4 * PTR32 *)(gen_frame + 0xc8)),(*(uint *)(gen_frame + 0xfc)),(*(undefined4 * PTR32 *)(gen_frame + 0xc8)),(*(uint *)(gen_frame + 0xec)),(*(uint *)(gen_frame + 0xd4)),&(*(float *)(gen_frame + 0x10)),uVar3,(*(uint *)(gen_frame + 0x104))
                     ,uVar8 & 1);
        uVar3 = *(undefined4 *)(param_1 + 0x2c);
        (*(float *)(gen_frame + 0x0)) = (*(float *)(gen_frame + 0xb0));
        (*(float *)(gen_frame + 0x4)) = (*(float *)(gen_frame + 0xb4));
        (*(float *)(gen_frame + 0x8)) = (float)(*(ulonglong *)(gen_frame + 0xb8));
        (*(float *)(gen_frame + 0xc)) = (float)(*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0xb8)) + 4));
        F_00d49e70((*(uint *)(gen_frame + 0xdc)),(*(undefined4 * PTR32 *)(gen_frame + 0xd8)),(*(uint *)(gen_frame + 0xdc)),(*(undefined4 * PTR32 *)(gen_frame + 0xd8)),(*(uint *)(gen_frame + 0xf4)),(*(uint *)(gen_frame + 0xcc)),&(*(float *)(gen_frame + 0x0)),uVar3,(*(uint *)(gen_frame + 0x104))
                    );
        pvVar7 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
        puVar9 = *(undefined4 * PTR32 *)((int)pvVar7 + 4);
        (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0xb8)) + 4)) = puVar9;
        (*(ulonglong *)(gen_frame + 0xb8)) = CONCAT44(puVar9,(uint)gen_fl2bits((float)(*(ulonglong *)(gen_frame + 0xb8))));
        fVar19 = REFG(float, 0x1087f04);
        if (puVar9 < *(undefined4 * PTR32 *)((int)pvVar7 + 0xc)) {
          *puVar9 = &REFG(undefined, 0x1134dd0);
          uVar6 = rdtsc();
          (*(undefined4 * PTR32 *)(gen_frame + 0x10c)) = (undefined4 *)uVar6;
          puVar9[1] = (undefined4 *)uVar6;
          *(undefined4 * PTR32 *)((int)pvVar7 + 4) = puVar9 + 3;
          fVar19 = REFG(float, 0x1087f04);
        }
      }
      iVar15 = (iVar15 + 1) % 3;
      (*(undefined4 * PTR32 *)(gen_frame + 0x108)) = (*(undefined4 * PTR32 *)(gen_frame + 0x108)) + 7;
      (*(int *)(gen_frame + 0xf8)) = ((*(int *)(gen_frame + 0xf8)) + 1) % 3;
      (*(int *)(gen_frame + 0x100)) = ((uint *)(gen_frame + 0x7c))[4];
      (*(int *)(gen_frame + 0xf0)) = ((*(int *)(gen_frame + 0xf0)) + 1) % 3;
    } while ((int)(((uint *)(gen_frame + 0x7c))[4] + -1) < (*(int *)(gen_frame + 0xe8)));
  }
  uVar8 = (*(uint *)(gen_frame + 0xfc));
  if ((*(byte *)(param_1 + 0x44) & 2) != 0) {
    F_00d48b40((*(uint *)(gen_frame + 0xfc)),*(undefined4 *)(param_1 + 0x28));
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    F_00d49c70(uVar8,uVar8,(*(undefined4 *)(gen_frame + 0xac)),*(undefined4 *)(param_1 + 0x28),&REFG(undefined, 0x1351770));
  }
  F_00d84530(*(undefined4 *)(param_1 + 0x28),uVar8,*(undefined4 *)(param_1 + 0x50));
  F_00d844c0(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x2c),(*(uint *)(gen_frame + 0xdc)));
  F_00d844c0(*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x28),(*(undefined4 * PTR32 *)(gen_frame + 0xc8)));
  F_00d844c0(*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x2c),(*(undefined4 * PTR32 *)(gen_frame + 0xd8)));
  pvVar7 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar9 = *(undefined4 * PTR32 *)((int)pvVar7 + 4);
  if (puVar9 < *(undefined4 * PTR32 *)((int)pvVar7 + 0xc)) {
    *puVar9 = "StDeallocate";
    uVar6 = rdtsc();
    (*(undefined4 * PTR32 *)(gen_frame + 0x10c)) = (undefined4 *)(int)uVar6;
    puVar9[1] = (int)uVar6;
    *(undefined4 * PTR32 *)((int)pvVar7 + 4) = puVar9 + 3;
  }
  puVar9 = (undefined4 *)0x0;
  do {
    (*(undefined4 * PTR32 *)(gen_frame + 0x10c)) = (undefined4 *)((int)puVar9 + -4);
    F_00d84610(*(undefined4 *)((int)((uint *)(gen_frame + 0x48)) + (int)puVar9 + 0x1c),
                 *(undefined4 *)(param_1 + 0x2c));
    F_00d84610(*(undefined4 *)((int)((uint *)(gen_frame + 0x48)) + (int)puVar9 + 0x24),
                 *(undefined4 *)(param_1 + 0x28));
    F_00d84610(*(undefined4 *)((int)((uint *)(gen_frame + 0x90)) + (int)puVar9 + 4),*(undefined4 *)(param_1 + 0x2c));
    F_00d84660(*(undefined4 *)((int)((uint *)(gen_frame + 0x48)) + (int)puVar9 + 0x38),
                 *(undefined4 *)(param_1 + 0x28));
    puVar9 = (*(undefined4 * PTR32 *)(gen_frame + 0x10c));
  } while ((*(undefined4 * PTR32 *)(gen_frame + 0x10c)) != (undefined4 *)0xfffffff8);
  F_00d84610((*(uint *)(gen_frame + 0xcc)),*(undefined4 *)(param_1 + 0x2c));
  F_00d84610((*(uint *)(gen_frame + 0xd4)),*(undefined4 *)(param_1 + 0x28));
  F_00d84610((*(uint *)(gen_frame + 0xf4)),*(undefined4 *)(param_1 + 0x2c));
  F_00d84660((*(uint *)(gen_frame + 0xec)),*(undefined4 *)(param_1 + 0x28));
  F_00d84610((*(undefined4 * PTR32 *)(gen_frame + 0xd8)),*(undefined4 *)(param_1 + 0x2c));
  F_00d84610((*(undefined4 * PTR32 *)(gen_frame + 0xc8)),*(undefined4 *)(param_1 + 0x28));
  F_00d84610((*(uint *)(gen_frame + 0xdc)),*(undefined4 *)(param_1 + 0x2c));
  F_00d84660((*(uint *)(gen_frame + 0xfc)),*(undefined4 *)(param_1 + 0x28));
  pvVar11 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar9 = *(undefined4 * PTR32 *)((int)pvVar11 + 4);
  pvVar7 = pvVar11;
  if (puVar9 < *(undefined4 * PTR32 *)((int)pvVar11 + 0xc)) {
    *puVar9 = &REFG(undefined, 0x1134dd0);
    uVar6 = rdtsc();
    pvVar7 = (LPVOID)uVar6;
    (*(undefined4 * PTR32 *)(gen_frame + 0x10c)) = pvVar7;
    puVar9[1] = pvVar7;
    *(undefined4 * PTR32 *)((int)pvVar11 + 4) = puVar9 + 3;
  }
  return (uint)pvVar7;
}

/* ref: FUN_00d84ec0 */
uint F_00d84ec0(unsigned int gen_a0)
{
  GEN_ENTER(0xd84ec0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (uint)*(ushort *)(param_1 + 0x1c);
}

/* ref: FUN_00d84ef0 */
uint F_00d84ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd84ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *in_ecx = *param_2;
  in_ecx[1] = uVar2;
  in_ecx[2] = uVar3;
  in_ecx[3] = uVar1;
  return (uint)param_2;
}

/* ref: FUN_00d84f10 */
uint F_00d84f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd84f10u, gen_a0, gen_a1, 0u, 0u);
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
  in_ecx[2] = uVar3;
  in_ecx[3] = uVar2;
  return (uint)param_2;
}

/* ref: FUN_00d84f30 */
uint F_00d84f30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd84f30u, gen_a0, gen_a1, 0u, 0u);
  gen_v16 * in_ecx = (gen_v16 *)(uintptr_t)gen_a0;
  gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a1;
  undefined1 auVar1 [16];
  
  gen_psllw(&(auVar1), &(*param_2), (&(unsigned long long[2]){1, 0}));
  memcpy(&(*in_ecx), &(auVar1), sizeof(auVar1) < sizeof(*in_ecx) ? sizeof(auVar1) : sizeof(*in_ecx));
  return (uint)param_2;
}

/* ref: FUN_00d84f50 */
uint F_00d84f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd84f50u, gen_a0, gen_a1, 0u, 0u);
  ushort * in_ecx = (ushort *)(uintptr_t)gen_a0;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a1;
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[4];
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  uVar7 = param_2[7];
  *in_ecx = *param_2 >> 1;
  in_ecx[1] = uVar1 >> 1;
  in_ecx[2] = uVar2 >> 1;
  in_ecx[3] = uVar3 >> 1;
  in_ecx[4] = uVar4 >> 1;
  in_ecx[5] = uVar5 >> 1;
  in_ecx[6] = uVar6 >> 1;
  in_ecx[7] = uVar7 >> 1;
  return (uint)param_2;
}

/* ref: FUN_00d84f90 */
uint F_00d84f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd84f90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  *in_ecx = param_2[3];
  in_ecx[1] = uVar1;
  in_ecx[2] = uVar2;
  in_ecx[3] = uVar3;
  return (uint)param_2;
}

/* ref: FUN_00d84fb0 */
uint F_00d84fb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd84fb0u, gen_a0, gen_a1, 0u, 0u);
  ushort * in_ecx = (ushort *)(uintptr_t)gen_a0;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a1;
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[4];
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  uVar7 = param_2[7];
  *in_ecx = *param_2 >> 0xf;
  in_ecx[1] = uVar1 >> 0xf;
  in_ecx[2] = uVar2 >> 0xf;
  in_ecx[3] = uVar3 >> 0xf;
  in_ecx[4] = uVar4 >> 0xf;
  in_ecx[5] = uVar5 >> 0xf;
  in_ecx[6] = uVar6 >> 0xf;
  in_ecx[7] = uVar7 >> 0xf;
  return (uint)param_2;
}

/* ref: FUN_00d85f20 */
uint F_00d85f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd85f20u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d85f40 */
uint F_00d85f40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd85f40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  *(uint *)this = *param_1 | *param_2;
  *(uint *)((int)this + 4) = uVar1 | uVar4;
  *(uint *)((int)this + 8) = uVar2 | uVar5;
  *(uint *)((int)this + 0xc) = uVar3 | uVar6;
  return (uint)param_1;
}

/* ref: FUN_00d85f60 */
uint F_00d85f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd85f60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  *(uint *)this = *param_1 ^ *param_2;
  *(uint *)((int)this + 4) = uVar1 ^ uVar4;
  *(uint *)((int)this + 8) = uVar2 ^ uVar5;
  *(uint *)((int)this + 0xc) = uVar3 ^ uVar6;
  return (uint)param_1;
}

/* ref: FUN_00d85f80 */
uint F_00d85f80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd85f80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_1[1];
  uVar2 = *param_2;
  uVar3 = param_2[1];
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = uVar2;
  *(undefined4 *)((int)this + 8) = uVar1;
  *(undefined4 *)((int)this + 0xc) = uVar3;
  return (uint)param_1;
}

/* ref: FUN_00d85fa0 */
uint F_00d85fa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd85fa0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)this = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 4) = uVar2;
  *(undefined4 *)((int)this + 8) = uVar1;
  *(undefined4 *)((int)this + 0xc) = uVar3;
  return param_1;
}

/* ref: FUN_00d86010 */
uint F_00d86010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd86010u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  uVar7 = param_2[1];
  uVar8 = param_2[2];
  uVar9 = param_2[3];
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  *(uint *)this = *param_1 & *param_2 | ~*param_1 & *param_3;
  *(uint *)((int)this + 4) = uVar1 & uVar7 | ~uVar1 & uVar4;
  *(uint *)((int)this + 8) = uVar2 & uVar8 | ~uVar2 & uVar5;
  *(uint *)((int)this + 0xc) = uVar3 & uVar9 | ~uVar3 & uVar6;
  return (uint)param_3;
}

/* ref: FUN_00d86040 */
uint F_00d86040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd86040u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a1;
  undefined1 auVar1 [16];
  undefined1 in_XMM1 [16] = {0};
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  
  memcpy(&(auVar1), &(*param_2), sizeof(*param_2) < sizeof(auVar1) ? sizeof(*param_2) : sizeof(auVar1));
  gen_rcpps(&(auVar2), &(in_XMM1), &(auVar1));
  fVar3 = *(float *)&REFG(undefined, 0x1138054) - (*(float *)((char *)&auVar1 + 4)) * (*(float *)((char *)&auVar2 + 4));
  fVar4 = *(float *)&REFG(undefined, 0x1138058) - (*(float *)((char *)&auVar1 + 8)) * (*(float *)((char *)&auVar2 + 8));
  fVar5 = *(float *)&REFG(undefined, 0x113805c) - (*(float *)((char *)&auVar1 + 12)) * (*(float *)((char *)&auVar2 + 12));
  *in_ecx = (*(float *)&REFG(undefined, 0x1138050) - (*(float *)((char *)&auVar1 + 0)) * (*(float *)((char *)&auVar2 + 0))) * (*(float *)((char *)&auVar2 + 0));
  in_ecx[1] = fVar3 * (*(float *)((char *)&auVar2 + 4));
  in_ecx[2] = fVar4 * (*(float *)((char *)&auVar2 + 8));
  in_ecx[3] = fVar5 * (*(float *)((char *)&auVar2 + 12));
  return (uint)param_2;
}

/* ref: FUN_00d86070 */
uint F_00d86070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd86070u, gen_a0, gen_a1, gen_a2, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  fVar4 = in_ecx[1];
  fVar5 = in_ecx[2];
  fVar6 = in_ecx[3];
  *param_2 = -(uint)(*param_3 == *in_ecx);
  param_2[1] = -(uint)(fVar1 == fVar4);
  param_2[2] = -(uint)(fVar2 == fVar5);
  param_2[3] = -(uint)(fVar3 == fVar6);
  return (uint)param_2;
}

/* ref: FUN_00d86090 */
uint F_00d86090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd86090u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a1;
  undefined1 auVar1 [16];
  undefined1 in_XMM1 [16] = {0};
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  
  memcpy(&(auVar1), &(*param_2), sizeof(*param_2) < sizeof(auVar1) ? sizeof(*param_2) : sizeof(auVar1));
  gen_rcpps(&(auVar2), &(in_XMM1), &(auVar1));
  fVar3 = *(float *)&REFG(undefined, 0x1138054) - (*(float *)((char *)&auVar1 + 4)) * (*(float *)((char *)&auVar2 + 4));
  fVar4 = *(float *)&REFG(undefined, 0x1138058) - (*(float *)((char *)&auVar1 + 8)) * (*(float *)((char *)&auVar2 + 8));
  fVar5 = *(float *)&REFG(undefined, 0x113805c) - (*(float *)((char *)&auVar1 + 12)) * (*(float *)((char *)&auVar2 + 12));
  *in_ecx = (*(float *)&REFG(undefined, 0x1138050) - (*(float *)((char *)&auVar1 + 0)) * (*(float *)((char *)&auVar2 + 0))) * (*(float *)((char *)&auVar2 + 0));
  in_ecx[1] = fVar3 * (*(float *)((char *)&auVar2 + 4));
  in_ecx[2] = fVar4 * (*(float *)((char *)&auVar2 + 8));
  in_ecx[3] = fVar5 * (*(float *)((char *)&auVar2 + 12));
  return (uint)param_2;
}

/* ref: FUN_00d860c0 */
uint F_00d860c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd860c0u, gen_a0, gen_a1, gen_a2, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  fVar4 = in_ecx[1];
  fVar5 = in_ecx[2];
  fVar6 = in_ecx[3];
  *param_2 = -(uint)(*param_3 == *in_ecx);
  param_2[1] = -(uint)(fVar1 == fVar4);
  param_2[2] = -(uint)(fVar2 == fVar5);
  param_2[3] = -(uint)(fVar3 == fVar6);
  return (uint)param_2;
}

/* ref: FUN_00d86120 */
ushort F_00d86120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd86120u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((short)param_2 < 0) {
    return 0xffff;
  }
  return *((ushort *)GEN_TOP((*(int *)(in_ecx + 8) + (short)param_2 * 2)));
}

/* ref: FUN_00d86160 */
ushort F_00d86160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd86160u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *((short *)GEN_TOP((*(int *)((int)this + 8) + (short)(ushort)param_1 * 2))) = (short)param_2;
  *((ushort *)GEN_TOP((*(int *)((int)this + 8) + (short)param_2 * 2))) = (ushort)param_1;
  return (ushort)param_1;
}

/* ref: FUN_00d86190 */
uint F_00d86190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd86190u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = F_00da1010(*(undefined4 *)((int)this + 8),param_1,param_2 * 2);
  return uVar1;
}

/* ref: FUN_00d861f0 */
uint F_00d861f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd861f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (param_2 + 1) * 0x10 + *(int *)(in_ecx + 0x18);
}

/* ref: FUN_00d86210 */
uint F_00d86210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd86210u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (int)*((short *)GEN_TOP((*(int *)(in_ecx + 0x10) + param_2 * 2)));
}

/* ref: FUN_00d86240 */
uint F_00d86240(unsigned int gen_a0)
{
  GEN_ENTER(0xd86240u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x14);
}

/* ref: FUN_00d86250 */
unsigned int F_00d86250(float gen_a0)
{
  GEN_ENTER(0xd86250u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00d86260 */
uint F_00d86260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd86260u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (*(uint *)&gen_args[1]);
  uVar2 = F_00da3eb0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))),(*(uint *)&gen_args[1]),&(*(uint *)&gen_args[1]));
  uVar3 = (*(uint *)&gen_args[1]);
  if (uVar2 != 0) {
    uVar3 = uVar1;
  }
  return uVar3;
}

/* ref: FUN_00d86290 */
uint F_00d86290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd86290u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  F_00da3a20((undefined *)((int)this + 0x1c),*(uint *)(param_1 + 4) & 0xfffffffe,
               *(uint *)(param_2 + 4) & 0xfffffffe);
  uVar1 = F_00da3a20((undefined *)((int)this + 0x1c),*(uint *)(param_2 + 4) & 0xfffffffe,
                       *(uint *)(param_1 + 4) & 0xfffffffe);
  return uVar1;
}

/* ref: FUN_00d862d0 */
uint F_00d862d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd862d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  F_00da3a20((undefined *)((int)this + 0x1c),param_1,param_2);
  uVar1 = F_00da3a20((undefined *)((int)this + 0x1c),param_2,param_1);
  return uVar1;
}

/* ref: FUN_00d86310 */
uint F_00d86310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd86310u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 * puVar4;
  
  puVar4 = ((undefined4 *)GEN_TOP(((param_2 + 1) * 0x10 + *(int *)(in_ecx + 0x18))));
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *puVar4 = *param_3;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  puVar4[3] = uVar3;
  return (uint)puVar4;
}

/* ref: FUN_00d86330 */
uint F_00d86330(unsigned int gen_a0)
{
  GEN_ENTER(0xd86330u, gen_a0, 0u, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  return *param_1;
}

/* ref: FUN_00d86340 */
uint F_00d86340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd86340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  short sVar5;
  LPVOID pvVar6;
  uint uVar7;
  int iVar8;
  undefined4 * puVar9;
  
  uVar7 = param_1;
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1138194));
  *(uint *)((int)this + 0xc) = param_1;
  puVar9 = (undefined4 *)(param_1 + 0xc);
  param_1 = param_1 & 0xffffff00;
  *(undefined4 *)((int)this + 0x10) = *puVar9;
  F_00da3de0((undefined *)((int)this + 0x1c),param_1);
  iVar8 = *(int *)(uVar7 + 0x1c);
  *(int *)((int)this + 0x14) = iVar8;
  pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar7 = F_00d923f0(*(undefined4 *)((int)pvVar6 + 0x2c),iVar8 * 2,0x10);
  iVar8 = *(int *)((int)this + 0x14);
  *(uint *)((int)this + 8) = uVar7;
  pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar7 = F_00d923f0(*(undefined4 *)((int)pvVar6 + 0x2c),(iVar8 + 1) * 0x10,0x10);
  *(uint *)((int)this + 0x18) = uVar7;
  uVar4 = *(undefined4 *)&REFG(undefined, 0x113811c);
  uVar3 = *(undefined4 *)&REFG(undefined, 0x1138118);
  uVar2 = *(undefined4 *)&REFG(undefined, 0x1138114);
  uVar1 = *(undefined4 *)&REFG(undefined, 0x1138110);
  sVar5 = 0;
  if (0 < *(int *)((int)this + 0x14)) {
    iVar8 = 0;
    do {
      *((short *)GEN_TOP((*(int *)((int)this + 8) + iVar8 * 2))) = sVar5;
      puVar9 = ((undefined4 *)GEN_TOP((iVar8 * 0x10 + *(int *)((int)this + 0x18))));
      sVar5 = sVar5 + 1;
      *puVar9 = uVar1;
      puVar9[1] = uVar2;
      puVar9[2] = uVar3;
      puVar9[3] = uVar4;
      iVar8 = (int)sVar5;
    } while (iVar8 < *(int *)((int)this + 0x14));
  }
  uVar3 = *(undefined4 *)&REFG(undefined, 0x113811c);
  uVar2 = *(undefined4 *)&REFG(undefined, 0x1138118);
  uVar1 = *(undefined4 *)&REFG(undefined, 0x1138114);
  puVar9 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x14) * 0x10 + *(int *)((int)this + 0x18))));
  *puVar9 = *(undefined4 *)&REFG(undefined, 0x1138110);
  puVar9[1] = uVar1;
  puVar9[2] = uVar2;
  puVar9[3] = uVar3;
  return (uint)this;
}

/* ref: FUN_00d86410 */
uint F_00d86410(unsigned int gen_a0)
{
  GEN_ENTER(0xd86410u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  uVar1 = *(undefined4 *)((int)this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1138194));
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  F_00d92430(*(undefined4 *)((int)pvVar2 + 0x2c),uVar1);
  uVar1 = *(undefined4 *)((int)this + 0x18);
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  F_00d92430(*(undefined4 *)((int)pvVar2 + 0x2c),uVar1);
  uVar3 = F_00da3e20((undefined *)((int)this + 0x1c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar3;
}

/* ref: FUN_00d86470 */
uint F_00d86470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd86470u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 * puVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  uVar6 = F_00d86210(this,param_2);
  uVar8 = param_2;
  if ((char)param_3 != '\0') {
    uVar8 = uVar6;
  }
  puVar7 = (undefined8 *)F_00d861f0(this,uVar8);
  uVar1 = *(undefined8 *)(param_1 + 4);
  fVar4 = gen_bits2f(param_1[7]);
  (*(undefined8 *)(gen_frame + 0x0)) = uVar1;
  uVar5 = (*(undefined8 *)(gen_frame + 0x0));
  uVar2 = *(undefined8 *)(param_1 + 6);
  (*(undefined8 *)(gen_frame + 0x8)) = uVar2;
  uVar2 = (*(undefined8 *)(gen_frame + 0x8));
  uVar3 = *puVar7;
  (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x0)) + 0)) = gen_bits2f((uint)uVar1);
  (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x0)) + 4)) = gen_bits2f((uint)((ulonglong)uVar1 >> 0x20));
  (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x8)) + 0)) = gen_bits2f((uint)uVar2);
  (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x8)) + 4)) = gen_bits2f((uint)((ulonglong)uVar2 >> 0x20));
  fVar10 = *(float *)((int)puVar7 + 0xc);
  (*(undefined8 *)(gen_frame + 0x10)) = uVar3;
  uVar3 = (*(undefined8 *)(gen_frame + 0x10));
  uVar1 = puVar7[1];
  (*(undefined8 *)(gen_frame + 0x18)) = uVar1;
  uVar1 = (*(undefined8 *)(gen_frame + 0x18));
  (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 0)) = gen_bits2f((uint)uVar3);
  (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 4)) = gen_bits2f((uint)((ulonglong)uVar3 >> 0x20));
  (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x18)) + 0)) = gen_bits2f((uint)uVar1);
  (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x18)) + 4)) = gen_bits2f((uint)((ulonglong)uVar1 >> 0x20));
  fVar9 = (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 4)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x8)) + 0)) - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x18)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x0)) + 4))) -
          fVar4 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 0))) + fVar10 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x0)) + 0));
  fVar11 = (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x18)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x0)) + 0)) - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x8)) + 0))) -
           fVar4 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 4))) + fVar10 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x0)) + 4));
  fVar12 = (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x0)) + 4)) - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 4)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x0)) + 0))) -
           fVar4 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x18)) + 0))) + fVar10 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x8)) + 0));
  fVar18 = ((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x0)) + 0)) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x18)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x8)) + 0))) +
           ((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 4)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x0)) + 4)) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x18)) + 4)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x8)) + 4)));
  (*(undefined8 *)(gen_frame + 0x0)) = uVar5;
  (*(undefined8 *)(gen_frame + 0x8)) = uVar2;
  (*(undefined8 *)(gen_frame + 0x10)) = uVar3;
  (*(undefined8 *)(gen_frame + 0x18)) = uVar1;
  puVar7 = (undefined8 *)F_00d861f0(this,uVar6);
  uVar1 = *puVar7;
  (*(undefined8 *)(gen_frame + 0x0)) = uVar1;
  uVar2 = puVar7[1];
  (*(undefined8 *)(gen_frame + 0x8)) = uVar2;
  (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x0)) + 0)) = gen_bits2f((uint)uVar1);
  (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x0)) + 4)) = gen_bits2f((uint)((ulonglong)uVar1 >> 0x20));
  (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x8)) + 0)) = gen_bits2f((uint)uVar2);
  fVar4 = *(float *)((int)puVar7 + 0xc);
  fVar10 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x0)) + 4)) * fVar12;
  fVar13 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x0)) + 0)) * fVar11;
  fVar20 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x0)) + 0)) * fVar12;
  fVar22 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x0)) + 4)) * fVar9;
  fVar16 = fVar9 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x0)) + 0));
  fVar17 = fVar11 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x0)) + 4));
  fVar19 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x0)) + 0)) * fVar18;
  fVar21 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x0)) + 4)) * fVar18;
  puVar7 = &(*(undefined8 *)(gen_frame + 0x0));
  (*(undefined8 *)(gen_frame + 0x0)) = *(undefined8 *)param_1;
  param_1[4] = (uint)gen_fl2bits(((fVar10 - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x8)) + 0)) * fVar11) + fVar4 * fVar9) + fVar19);
  param_1[5] = (uint)gen_fl2bits((((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x8)) + 0)) * fVar9 - fVar20) + fVar4 * fVar11) + fVar21);
  param_1[6] = (uint)gen_fl2bits(((fVar13 - fVar22) + fVar4 * fVar12) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x8)) + 0)) * fVar18);
  param_1[7] = (uint)gen_fl2bits(fVar18 * fVar4 - ((fVar17 + fVar16) + fVar12 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x8)) + 0))));
  (*(undefined8 *)(gen_frame + 0x8)) = *(undefined8 *)(param_1 + 2);
  uVar8 = F_00d861f0(((undefined4)(uint)(this)),uVar6);
  uVar8 = F_00d950d0(param_1,uVar8,puVar7);
  uVar6 = param_1[1] ^ *(uint *)&REFG(undefined, 0x10ab9c4);
  uVar14 = param_1[2] ^ *(uint *)&REFG(undefined, 0x10ab9c8);
  uVar15 = param_1[3] ^ *(uint *)&REFG(undefined, 0x10ab9cc);
  *param_1 = *param_1 ^ *(uint *)&REFG(undefined, 0x10ab9c0);
  param_1[1] = uVar6;
  param_1[2] = uVar14;
  param_1[3] = uVar15;
  return uVar8;
}

/* ref: FUN_00d86610 */
unsigned int F_00d86610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd86610u, gen_a0, gen_a1, gen_a2, 0u);
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 * puVar11;
  undefined8 * puVar12;
  int iVar13;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar13 = 0;
  puVar12 = param_1;
  if (0 < param_3) {
    do {
      iVar10 = (int)*(short *)(param_2 + iVar13 * 2);
      if ((-1 < iVar10) && (iVar10 < iVar13)) {
        uVar1 = *puVar12;
        uVar2 = puVar12[1];
        uVar3 = puVar12[2];
        uVar4 = puVar12[3];
        uVar5 = puVar12[4];
        uVar6 = puVar12[5];
        puVar11 = param_1 + iVar10 * 6;
        uVar7 = *(undefined4 *)((int)puVar11 + 4);
        uVar8 = *(undefined4 *)(puVar11 + 1);
        uVar9 = *(undefined4 *)((int)puVar11 + 0xc);
        *(undefined4 *)puVar12 = *(undefined4 *)puVar11;
        *(undefined4 *)((int)puVar12 + 4) = uVar7;
        *(undefined4 *)(puVar12 + 1) = uVar8;
        *(undefined4 *)((int)puVar12 + 0xc) = uVar9;
        uVar7 = *(undefined4 *)((int)puVar11 + 0x14);
        uVar8 = *(undefined4 *)(puVar11 + 3);
        uVar9 = *(undefined4 *)((int)puVar11 + 0x1c);
        *(undefined4 *)(puVar12 + 2) = *(undefined4 *)(puVar11 + 2);
        *(undefined4 *)((int)puVar12 + 0x14) = uVar7;
        *(undefined4 *)(puVar12 + 3) = uVar8;
        *(undefined4 *)((int)puVar12 + 0x1c) = uVar9;
        uVar7 = *(undefined4 *)((int)puVar11 + 0x24);
        uVar8 = *(undefined4 *)(puVar11 + 5);
        uVar9 = *(undefined4 *)((int)puVar11 + 0x2c);
        *(undefined4 *)(puVar12 + 4) = *(undefined4 *)(puVar11 + 4);
        *(undefined4 *)((int)puVar12 + 0x24) = uVar7;
        *(undefined4 *)(puVar12 + 5) = uVar8;
        *(undefined4 *)((int)puVar12 + 0x2c) = uVar9;
        local_40 = (undefined4)uVar1;
        uStack_3c = (undefined4)((ulonglong)uVar1 >> 0x20);
        uStack_38 = (undefined4)uVar2;
        uStack_34 = (undefined4)((ulonglong)uVar2 >> 0x20);
        *(undefined4 *)puVar11 = local_40;
        *(undefined4 *)((int)puVar11 + 4) = uStack_3c;
        *(undefined4 *)(puVar11 + 1) = uStack_38;
        *(undefined4 *)((int)puVar11 + 0xc) = uStack_34;
        local_30 = (undefined4)uVar3;
        uStack_2c = (undefined4)((ulonglong)uVar3 >> 0x20);
        uStack_28 = (undefined4)uVar4;
        uStack_24 = (undefined4)((ulonglong)uVar4 >> 0x20);
        *(undefined4 *)(puVar11 + 2) = local_30;
        *(undefined4 *)((int)puVar11 + 0x14) = uStack_2c;
        *(undefined4 *)(puVar11 + 3) = uStack_28;
        *(undefined4 *)((int)puVar11 + 0x1c) = uStack_24;
        local_20 = (undefined4)uVar5;
        uStack_1c = (undefined4)((ulonglong)uVar5 >> 0x20);
        uStack_18 = (undefined4)uVar6;
        uStack_14 = (undefined4)((ulonglong)uVar6 >> 0x20);
        *(undefined4 *)(puVar11 + 4) = local_20;
        *(undefined4 *)((int)puVar11 + 0x24) = uStack_1c;
        *(undefined4 *)(puVar11 + 5) = uStack_18;
        *(undefined4 *)((int)puVar11 + 0x2c) = uStack_14;
      }
      iVar13 = iVar13 + 1;
      puVar12 = puVar12 + 6;
    } while (iVar13 < param_3);
  }
  return 0;
}

/* ref: FUN_00d866e0 */
uint F_00d866e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd866e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00d86470(this,param_1,param_2,0);
  return uVar1;
}

/* ref: FUN_00d86700 */
uint F_00d86700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd86700u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00d86470(this,param_1,param_2,1);
  return uVar1;
}

/* ref: FUN_00d86720 */
uint F_00d86720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd86720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00d86470(this,param_1,0,1);
  return uVar1;
}

/* ref: FUN_00d86740 */
unsigned int F_00d86740(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xd86740u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  float fVar2;
  float * pfVar3;
  int iVar4;
  float fVar5;
  
  fVar5 = ((float)GEN_TOF(SQRT(*(double *)&REFG(undefined, 0x1092098)))) * REFG(float, 0x1088068);
  if ((*(uint *)&REFG(undefined, 0x15d9a48) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d9a48) = *(uint *)&REFG(undefined, 0x15d9a48) | 1;
    *(undefined4 *)&REFG(undefined, 0x13513f8) = 0;
    *(undefined4 *)&REFG(undefined, 0x13513fc) = 0;
    *(undefined4 *)&REFG(undefined, 0x1351408) = 0;
    *(undefined4 *)&REFG(undefined, 0x135140c) = 0;
    *(undefined4 *)&REFG(undefined, 0x1351410) = 0;
    *(undefined4 *)&REFG(undefined, 0x135141c) = 0;
    *(undefined4 *)&REFG(undefined, 0x1351420) = 0;
    *(undefined4 *)&REFG(undefined, 0x135142c) = 0;
    *(undefined4 *)&REFG(undefined, 0x1351430) = 0;
    *(undefined4 *)&REFG(undefined, 0x1351434) = 0;
    *(undefined4 *)&REFG(undefined, 0x1351440) = 0;
    *(undefined4 *)&REFG(undefined, 0x1351444) = 0;
    *(undefined4 *)&REFG(undefined, 0x1351454) = 0;
    *(undefined4 *)&REFG(undefined, 0x135145c) = 0;
    *(undefined4 *)&REFG(undefined, 0x1351464) = 0;
    *(undefined4 *)&REFG(undefined, 0x135146c) = 0;
    *(undefined4 *)&REFG(undefined, 0x1351470) = 0;
    *(undefined4 *)&REFG(undefined, 0x1351478) = 0;
    *(undefined4 *)&REFG(undefined, 0x1351480) = 0;
    *(undefined4 *)&REFG(undefined, 0x1351488) = 0;
    *(undefined4 *)&REFG(undefined, 0x1351494) = 0;
    *(undefined4 *)&REFG(undefined, 0x1351498) = 0;
    *(undefined4 *)&REFG(undefined, 0x13514a4) = 0;
    *(undefined4 *)&REFG(undefined, 0x13514a8) = 0;
    *(undefined4 *)&REFG(undefined, 0x13514b0) = *(undefined4 *)&REFG(undefined, 0x1138100);
    REFG(uint, 0x013514b4) = *(undefined4 *)&REFG(undefined, 0x1138104);
    REFG(uint, 0x013514b8) = *(undefined4 *)&REFG(undefined, 0x1138108);
    REFG(uint, 0x013514bc) = *(undefined4 *)&REFG(undefined, 0x113810c);
    *(undefined4 *)&REFG(undefined, 0x13514c0) = *(undefined4 *)&REFG(undefined, 0x1138120);
    REFG(uint, 0x013514c4) = *(undefined4 *)&REFG(undefined, 0x1138124);
    REFG(uint, 0x013514c8) = *(undefined4 *)&REFG(undefined, 0x1138128);
    REFG(uint, 0x013514cc) = *(undefined4 *)&REFG(undefined, 0x113812c);
    *(undefined4 *)&REFG(undefined, 0x13514d0) = *(undefined4 *)&REFG(undefined, 0x1138130);
    REFG(uint, 0x013514d4) = *(undefined4 *)&REFG(undefined, 0x1138134);
    REFG(uint, 0x013514d8) = *(undefined4 *)&REFG(undefined, 0x1138138);
    REFG(uint, 0x013514dc) = *(undefined4 *)&REFG(undefined, 0x113813c);
    *(undefined4 *)&REFG(undefined, 0x13514e0) = *(undefined4 *)&REFG(undefined, 0x1138140);
    REFG(uint, 0x013514e4) = *(undefined4 *)&REFG(undefined, 0x1138144);
    REFG(uint, 0x013514e8) = *(undefined4 *)&REFG(undefined, 0x1138148);
    REFG(uint, 0x013514ec) = *(undefined4 *)&REFG(undefined, 0x113814c);
    *(undefined4 *)&REFG(undefined, 0x13514f0) = *(undefined4 *)&REFG(undefined, 0x1138150);
    REFG(uint, 0x013514f4) = *(undefined4 *)&REFG(undefined, 0x1138154);
    REFG(uint, 0x013514f8) = *(undefined4 *)&REFG(undefined, 0x1138158);
    REFG(uint, 0x013514fc) = *(undefined4 *)&REFG(undefined, 0x113815c);
    *(undefined4 *)&REFG(undefined, 0x1351500) = *(undefined4 *)&REFG(undefined, 0x1138160);
    REFG(uint, 0x01351504) = *(undefined4 *)&REFG(undefined, 0x1138164);
    REFG(uint, 0x01351508) = *(undefined4 *)&REFG(undefined, 0x1138168);
    REFG(uint, 0x0135150c) = *(undefined4 *)&REFG(undefined, 0x113816c);
    *(uint *)&REFG(undefined, 0x1351404) = (uint)gen_fl2bits(fVar5) ^ REFG(uint, 0x10920d0);
    *(undefined4 *)&REFG(undefined, 0x1351510) = *(undefined4 *)&REFG(undefined, 0x1138170);
    REFG(uint, 0x01351514) = *(undefined4 *)&REFG(undefined, 0x1138174);
    REFG(uint, 0x01351518) = *(undefined4 *)&REFG(undefined, 0x1138178);
    REFG(uint, 0x0135151c) = *(undefined4 *)&REFG(undefined, 0x113817c);
    *(undefined4 *)&REFG(undefined, 0x1351520) = *(undefined4 *)&REFG(undefined, 0x1138180);
    REFG(uint, 0x01351524) = *(undefined4 *)&REFG(undefined, 0x1138184);
    REFG(uint, 0x01351528) = *(undefined4 *)&REFG(undefined, 0x1138188);
    REFG(uint, 0x0135152c) = *(undefined4 *)&REFG(undefined, 0x113818c);
    *(float *)&REFG(undefined, 0x13513f0) = fVar5;
    *(float *)&REFG(undefined, 0x13513f4) = fVar5;
    *(float *)&REFG(undefined, 0x1351400) = fVar5;
    *(float *)&REFG(undefined, 0x1351414) = fVar5;
    *(float *)&REFG(undefined, 0x1351418) = fVar5;
    *(float *)&REFG(undefined, 0x1351424) = fVar5;
    *(uint *)&REFG(undefined, 0x1351428) = *(uint *)&REFG(undefined, 0x1351404);
    *(float *)&REFG(undefined, 0x1351438) = fVar5;
    *(float *)&REFG(undefined, 0x135143c) = fVar5;
    *(float *)&REFG(undefined, 0x1351448) = fVar5;
    *(uint *)&REFG(undefined, 0x135144c) = *(uint *)&REFG(undefined, 0x1351404);
    *(float *)&REFG(undefined, 0x1351450) = fVar5;
    *(float *)&REFG(undefined, 0x1351458) = fVar5;
    *(float *)&REFG(undefined, 0x1351460) = fVar5;
    *(uint *)&REFG(undefined, 0x1351468) = *(uint *)&REFG(undefined, 0x1351404);
    *(float *)&REFG(undefined, 0x1351474) = fVar5;
    *(float *)&REFG(undefined, 0x135147c) = fVar5;
    *(float *)&REFG(undefined, 0x1351484) = fVar5;
    *(uint *)&REFG(undefined, 0x135148c) = *(uint *)&REFG(undefined, 0x1351404);
    *(float *)&REFG(undefined, 0x1351490) = fVar5;
    *(float *)&REFG(undefined, 0x135149c) = fVar5;
    *(float *)&REFG(undefined, 0x13514a0) = fVar5;
    *(uint *)&REFG(undefined, 0x13514ac) = *(uint *)&REFG(undefined, 0x1351404);
  }
  iVar4 = 0;
  pfVar3 = (float *)&REFG(undefined, 0x13513b0);
  do {
    fVar5 = ABS((pfVar3[2] * param_1[2] + *pfVar3 * *param_1) +
                (pfVar3[3] * param_1[3] + pfVar3[1] * param_1[1]));
    if ((!GEN_ISNAN(fVar5) && !GEN_ISNAN(REFG(float, 0x1087f04) - param_2)) && !(fVar5 < REFG(float, 0x1087f04) - param_2)) {
      iVar4 = iVar4 * 0x10;
      fVar5 = *(float *)(iVar4 + 0x13513b4);
      fVar1 = *(float *)(iVar4 + 0x13513b8);
      fVar2 = *(float *)(iVar4 + 0x13513bc);
      *param_1 = *(float *)(&REFG(undefined, 0x13513b0) + iVar4);
      param_1[1] = fVar5;
      param_1[2] = fVar1;
      param_1[3] = fVar2;
      return 0;
    }
    pfVar3 = pfVar3 + 4;
    iVar4 = iVar4 + 1;
  } while ((int)pfVar3 < 0x1351530);
  return 0;
}

/* ref: FUN_00d86a10 */
uint F_00d86a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd86a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *param_1 = this;
  param_1[1] = 0x2c;
  uVar1 = F_00d86240(this);
  param_1[2] = *(undefined4 *)(((int)(uint)(this)) + 0x10);
  param_1[3] = uVar1 * 2;
  uVar1 = F_00d86240(((int)(uint)(this)));
  param_1[4] = *(undefined4 *)(((int)(uint)(this)) + 0x18);
  param_1[5] = (uVar1 + 1) * 0x10;
  uVar1 = F_00d86240(((int)(uint)(this)));
  param_1[6] = *(undefined4 *)(((int)(uint)(((int)(uint)(this)))) + 8);
  param_1[7] = uVar1 * 2;
  return uVar1 * 2;
}

/* ref: FUN_00d86a60 */
unsigned int F_00d86a60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd86a60u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined8 * param_3 = (undefined8 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 * puVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 * puVar9;
  int iVar10;
  uint * this;
  float fVar11;
  float fVar12;
  uint uVar13;
  float fVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  
  (*(int *)(gen_frame + 0x4c)) = 0;
  this = param_1;
  puVar4 = param_3;
  if (0 < param_5) {
    do {
      uVar1 = *(undefined8 *)(this + 4);
      fVar5 = gen_bits2f(this[7]);
      fVar14 = *(float *)((int)puVar4 + 0x1c);
      (*(undefined8 *)(gen_frame + 0x20)) = uVar1;
      uVar6 = (*(undefined8 *)(gen_frame + 0x20));
      uVar2 = *(undefined8 *)(this + 6);
      (*(undefined8 *)(gen_frame + 0x28)) = uVar2;
      uVar7 = (*(undefined8 *)(gen_frame + 0x28));
      uVar3 = puVar4[2];
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 0)) = gen_bits2f((uint)uVar1);
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 4)) = gen_bits2f((uint)((ulonglong)uVar1 >> 0x20));
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x28)) + 0)) = gen_bits2f((uint)uVar2);
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x28)) + 4)) = gen_bits2f((uint)((ulonglong)uVar2 >> 0x20));
      (*(undefined8 *)(gen_frame + 0x30)) = uVar3;
      uVar3 = (*(undefined8 *)(gen_frame + 0x30));
      uVar1 = puVar4[3];
      (*(undefined8 *)(gen_frame + 0x38)) = uVar1;
      uVar8 = (*(undefined8 *)(gen_frame + 0x38));
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 0)) = gen_bits2f((uint)uVar3);
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 4)) = gen_bits2f((uint)((ulonglong)uVar3 >> 0x20));
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x38)) + 0)) = gen_bits2f((uint)uVar1);
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x38)) + 4)) = gen_bits2f((uint)((ulonglong)uVar1 >> 0x20));
      fVar11 = (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 4)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x28)) + 0)) - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x38)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 4))) -
               fVar5 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 0))) + fVar14 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 0));
      fVar12 = (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x38)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 0)) - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x28)) + 0))) -
               fVar5 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 4))) + fVar14 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 4));
      fVar14 = (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 4)) - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 4)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 0))) -
               fVar5 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x38)) + 0))) + fVar14 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x28)) + 0));
      fVar17 = ((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 0)) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x38)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x28)) + 0))) +
               ((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 4)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 4)) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x38)) + 4)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x28)) + 4)));
      puVar9 = param_3 + (*(short *)(param_2 + (*(int *)(gen_frame + 0x4c)) * 2) + 1) * 2;
      uVar1 = *puVar9;
      (*(undefined8 *)(gen_frame + 0x10)) = uVar1;
      uVar1 = (*(undefined8 *)(gen_frame + 0x10));
      (*(undefined8 *)(gen_frame + 0x18)) = puVar9[1];
      uVar2 = (*(undefined8 *)(gen_frame + 0x18));
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 0)) = gen_bits2f((uint)uVar1);
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 4)) = gen_bits2f((uint)((ulonglong)uVar1 >> 0x20));
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x18)) + 0)) = gen_bits2f((uint)puVar9[1]);
      fVar5 = *(float *)((int)puVar9 + 0xc);
      (*(undefined8 *)(gen_frame + 0x0)) = *(undefined8 *)this;
      this[4] = (uint)gen_fl2bits((((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 4)) * fVar14 - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x18)) + 0)) * fVar12) +
                                  fVar5 * fVar11) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 0)) * fVar17);
      this[5] = (uint)gen_fl2bits((((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x18)) + 0)) * fVar11 - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 0)) * fVar14) +
                                  fVar5 * fVar12) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 4)) * fVar17);
      this[6] = (uint)gen_fl2bits((((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 0)) * fVar12 - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 4)) * fVar11) +
                                  fVar5 * fVar14) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x18)) + 0)) * fVar17);
      this[7] = (uint)gen_fl2bits(fVar17 * fVar5 -
                                  ((fVar12 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 4)) + fVar11 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 0))) +
                                  fVar14 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x18)) + 0))));
      (*(undefined8 *)(gen_frame + 0x8)) = *(undefined8 *)(this + 2);
      (*(undefined8 *)(gen_frame + 0x10)) = uVar1;
      (*(undefined8 *)(gen_frame + 0x18)) = uVar2;
      (*(undefined8 *)(gen_frame + 0x20)) = uVar6;
      (*(undefined8 *)(gen_frame + 0x28)) = uVar7;
      (*(undefined8 *)(gen_frame + 0x30)) = uVar3;
      (*(undefined8 *)(gen_frame + 0x38)) = uVar8;
      F_00d950d0(this,puVar9,&(*(undefined8 *)(gen_frame + 0x0)));
      uVar13 = this[1] ^ *(uint *)&REFG(undefined, 0x10ab9c4);
      uVar15 = this[2] ^ *(uint *)&REFG(undefined, 0x10ab9c8);
      uVar16 = this[3] ^ *(uint *)&REFG(undefined, 0x10ab9cc);
      iVar10 = (*(int *)(gen_frame + 0x4c)) + 1;
      *this = *this ^ *(uint *)&REFG(undefined, 0x10ab9c0);
      this[1] = uVar13;
      this[2] = uVar15;
      this[3] = uVar16;
      this = this + 0xc;
      (*(int *)(gen_frame + 0x4c)) = iVar10;
      puVar4 = puVar4 + 2;
    } while (iVar10 < param_5);
  }
  F_00d86610(param_1,param_4,param_5);
  return 0;
}

/* ref: FUN_00d86c30 */
unsigned int F_00d86c30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd86c30u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 * puVar8;
  uint * this;
  int iVar9;
  float fVar10;
  float fVar11;
  uint uVar12;
  float fVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  
  iVar9 = 0;
  this = param_1;
  if (0 < param_5) {
    do {
      uVar1 = *(undefined8 *)(this + 4);
      (*(undefined8 *)(gen_frame + 0x20)) = uVar1;
      uVar4 = (*(undefined8 *)(gen_frame + 0x20));
      uVar2 = *(undefined8 *)(this + 6);
      fVar13 = gen_bits2f(this[7]);
      (*(undefined8 *)(gen_frame + 0x28)) = uVar2;
      uVar5 = (*(undefined8 *)(gen_frame + 0x28));
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 0)) = gen_bits2f((uint)uVar1);
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 4)) = gen_bits2f((uint)((ulonglong)uVar1 >> 0x20));
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x28)) + 0)) = gen_bits2f((uint)uVar2);
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x28)) + 4)) = gen_bits2f((uint)((ulonglong)uVar2 >> 0x20));
      puVar8 = ((undefined8 *)GEN_TOP(((*(short *)(param_2 + iVar9 * 2) + 1) * 0x10 + param_3)));
      uVar1 = *puVar8;
      (*(undefined8 *)(gen_frame + 0x30)) = uVar1;
      uVar6 = (*(undefined8 *)(gen_frame + 0x30));
      uVar2 = puVar8[1];
      (*(undefined8 *)(gen_frame + 0x38)) = uVar2;
      uVar7 = (*(undefined8 *)(gen_frame + 0x38));
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 0)) = gen_bits2f((uint)uVar1);
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 4)) = gen_bits2f((uint)((ulonglong)uVar1 >> 0x20));
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x38)) + 0)) = gen_bits2f((uint)uVar2);
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x38)) + 4)) = gen_bits2f((uint)((ulonglong)uVar2 >> 0x20));
      fVar3 = *(float *)((int)puVar8 + 0xc);
      fVar10 = (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 4)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x28)) + 0)) - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x38)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 4))) -
               fVar13 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 0))) + fVar3 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 0));
      fVar11 = (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x38)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 0)) - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x28)) + 0))) -
               fVar13 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 4))) + fVar3 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 4));
      fVar13 = (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 4)) - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 4)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 0))) -
               fVar13 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x38)) + 0))) + fVar3 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x28)) + 0));
      fVar16 = ((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 0)) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x38)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x28)) + 0))) +
               ((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 4)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 4)) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x38)) + 4)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x28)) + 4)));
      uVar1 = *puVar8;
      (*(undefined8 *)(gen_frame + 0x10)) = uVar1;
      uVar1 = (*(undefined8 *)(gen_frame + 0x10));
      (*(undefined8 *)(gen_frame + 0x18)) = puVar8[1];
      uVar2 = (*(undefined8 *)(gen_frame + 0x18));
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 0)) = gen_bits2f((uint)uVar1);
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 4)) = gen_bits2f((uint)((ulonglong)uVar1 >> 0x20));
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x18)) + 0)) = gen_bits2f((uint)puVar8[1]);
      (*(undefined8 *)(gen_frame + 0x0)) = *(undefined8 *)this;
      this[4] = (uint)gen_fl2bits((((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 4)) * fVar13 - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x18)) + 0)) * fVar11) +
                                  fVar3 * fVar10) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 0)) * fVar16);
      this[5] = (uint)gen_fl2bits((((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x18)) + 0)) * fVar10 - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 0)) * fVar13) +
                                  fVar3 * fVar11) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 4)) * fVar16);
      this[6] = (uint)gen_fl2bits((((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 0)) * fVar11 - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 4)) * fVar10) +
                                  fVar3 * fVar13) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x18)) + 0)) * fVar16);
      this[7] = (uint)gen_fl2bits(fVar16 * fVar3 -
                                  ((fVar11 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 4)) + fVar10 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 0))) +
                                  fVar13 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x18)) + 0))));
      (*(undefined8 *)(gen_frame + 0x8)) = *(undefined8 *)(this + 2);
      (*(undefined8 *)(gen_frame + 0x10)) = uVar1;
      (*(undefined8 *)(gen_frame + 0x18)) = uVar2;
      (*(undefined8 *)(gen_frame + 0x20)) = uVar4;
      (*(undefined8 *)(gen_frame + 0x28)) = uVar5;
      (*(undefined8 *)(gen_frame + 0x30)) = uVar6;
      (*(undefined8 *)(gen_frame + 0x38)) = uVar7;
      F_00d950d0(this,puVar8,&(*(undefined8 *)(gen_frame + 0x0)));
      uVar12 = *(uint *)&REFG(undefined, 0x10ab9c4) ^ this[1];
      uVar14 = *(uint *)&REFG(undefined, 0x10ab9c8) ^ this[2];
      uVar15 = *(uint *)&REFG(undefined, 0x10ab9cc) ^ this[3];
      *this = *(uint *)&REFG(undefined, 0x10ab9c0) ^ *this;
      this[1] = uVar12;
      this[2] = uVar14;
      this[3] = uVar15;
      iVar9 = iVar9 + 1;
      this = this + 0xc;
    } while (iVar9 < param_5);
  }
  F_00d86610(param_1,param_4,param_5);
  return 0;
}

/* ref: FUN_00d86de0 */
uint F_00d86de0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd86de0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  int param_4 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
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
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  F_00d86310(param_1,0xffffffff,param_2);
  iVar8 = 0;
  uVar6 = F_00d86240(param_1);
  if (0 < (int)uVar6) {
    (*(undefined8 * PTR32 *)(gen_frame + 0x4c)) = (undefined8 *)(param_4 + 0x10);
    fVar22 = *(float *)&REFG(undefined, 0x11380f0);
    fVar23 = *(float *)&REFG(undefined, 0x11380f4);
    fVar24 = *(float *)&REFG(undefined, 0x11380f8);
    fVar25 = *(float *)&REFG(undefined, 0x11380fc);
    do {
      uVar1 = *(*(undefined8 * PTR32 *)(gen_frame + 0x4c));
      fVar11 = *(float *)((int)(*(undefined8 * PTR32 *)(gen_frame + 0x4c)) + 0xc);
      fVar10 = *(float *)((int)param_2 + 0xc);
      (*(undefined8 *)(gen_frame + 0x20)) = uVar1;
      uVar4 = (*(undefined8 *)(gen_frame + 0x20));
      uVar2 = (*(undefined8 * PTR32 *)(gen_frame + 0x4c))[1];
      (*(undefined8 *)(gen_frame + 0x28)) = uVar2;
      uVar2 = (*(undefined8 *)(gen_frame + 0x28));
      uVar3 = *param_2;
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 0)) = gen_bits2f((uint)uVar1);
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 4)) = gen_bits2f((uint)((ulonglong)uVar1 >> 0x20));
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x28)) + 0)) = gen_bits2f((uint)uVar2);
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x28)) + 4)) = gen_bits2f((uint)((ulonglong)uVar2 >> 0x20));
      (*(undefined8 *)(gen_frame + 0x30)) = uVar3;
      uVar3 = (*(undefined8 *)(gen_frame + 0x30));
      uVar1 = param_2[1];
      (*(undefined8 *)(gen_frame + 0x38)) = uVar1;
      uVar1 = (*(undefined8 *)(gen_frame + 0x38));
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 0)) = gen_bits2f((uint)uVar3);
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 4)) = gen_bits2f((uint)((ulonglong)uVar3 >> 0x20));
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x38)) + 0)) = gen_bits2f((uint)uVar1);
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x38)) + 4)) = gen_bits2f((uint)((ulonglong)uVar1 >> 0x20));
      fVar9 = (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 4)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x28)) + 0)) - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x38)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 4))) +
              fVar11 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 0))) - fVar10 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 0));
      fVar12 = (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x38)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 0)) - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x28)) + 0))) +
               fVar11 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 4))) - fVar10 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 4));
      fVar14 = (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 4)) - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 4)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 0))) +
               fVar11 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x38)) + 0))) - fVar10 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x28)) + 0));
      fVar20 = ((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 0)) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x38)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x28)) + 0))) +
               ((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x30)) + 4)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x20)) + 4)) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x38)) + 4)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x28)) + 4)));
      (*(undefined8 *)(gen_frame + 0x20)) = uVar4;
      (*(undefined8 *)(gen_frame + 0x28)) = uVar2;
      (*(undefined8 *)(gen_frame + 0x30)) = uVar3;
      (*(undefined8 *)(gen_frame + 0x38)) = uVar1;
      uVar5 = F_00d86120(param_1,iVar8);
      iVar7 = (int)(short)uVar5;
      uVar1 = *(undefined8 *)(param_4 + 0x10 + iVar7 * 0x30);
      fVar11 = *(float *)(param_4 + iVar7 * 0x30 + 0x1c);
      (*(undefined8 *)(gen_frame + 0x10)) = uVar1;
      uVar1 = (*(undefined8 *)(gen_frame + 0x10));
      uVar2 = *(undefined8 *)(param_4 + 0x18 + iVar7 * 0x30);
      (*(undefined8 *)(gen_frame + 0x18)) = uVar2;
      uVar2 = (*(undefined8 *)(gen_frame + 0x18));
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 0)) = gen_bits2f((uint)uVar1);
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 4)) = gen_bits2f((uint)((ulonglong)uVar1 >> 0x20));
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x18)) + 0)) = gen_bits2f((uint)uVar2);
      fVar15 = fVar9 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 0));
      fVar16 = fVar12 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 4));
      fVar17 = fVar14 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x18)) + 0));
      fVar10 = (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x18)) + 0)) * fVar12 - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 4)) * fVar14) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 0)) * fVar20) +
               fVar11 * fVar9;
      fVar13 = (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 0)) * fVar14 - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x18)) + 0)) * fVar9) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 4)) * fVar20) +
               fVar11 * fVar12;
      fVar12 = (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 4)) * fVar9 - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x10)) + 0)) * fVar12) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x18)) + 0)) * fVar20) +
               fVar11 * fVar14;
      (*(float *)((char *)&auVar18 + 0)) = fVar11 * fVar20 - ((fVar16 + fVar15) + fVar17);
      (*(float *)((char *)&auVar18 + 4)) = fVar11 * fVar20 - ((fVar16 + fVar15) + fVar17);
      (*(float *)((char *)&auVar18 + 8)) = fVar11 * fVar20 - ((fVar16 + fVar15) + fVar17);
      (*(float *)((char *)&auVar18 + 12)) = fVar11 * fVar20 - ((fVar16 + fVar15) + fVar17);
      fVar11 = fVar12 * fVar12 + fVar10 * fVar10;
      fVar9 = (*(float *)((char *)&auVar18 + 12)) * (*(float *)((char *)&auVar18 + 12)) + fVar13 * fVar13;
      fVar14 = fVar10 * fVar10 + fVar12 * fVar12;
      fVar15 = fVar13 * fVar13 + (*(float *)((char *)&auVar18 + 12)) * (*(float *)((char *)&auVar18 + 12));
      fVar16 = fVar9 + fVar11;
      fVar11 = fVar11 + fVar9;
      fVar9 = fVar15 + fVar14;
      fVar14 = fVar14 + fVar15;
      (*(undefined4 *)((char *)&auVar19 + 4)) = (undefined4)gen_fl2bits(fVar11);
      (*(undefined4 *)((char *)&auVar19 + 0)) = (undefined4)gen_fl2bits(fVar16);
      (*(undefined4 *)((char *)&auVar19 + 8)) = (undefined4)gen_fl2bits(fVar9);
      (*(undefined4 *)((char *)&auVar19 + 12)) = (undefined4)gen_fl2bits(fVar14);
      gen_rsqrtps(&(auVar19), &(auVar18), &(auVar19));
      fVar15 = (*(float *)((char *)&auVar19 + 0));
      fVar17 = (*(float *)((char *)&auVar19 + 4));
      fVar20 = (*(float *)((char *)&auVar19 + 8));
      fVar21 = (*(float *)((char *)&auVar19 + 12));
      (*(float *)(gen_frame + 0x0)) = ((fVar22 - (fVar15 * fVar16) * fVar15) * (*(float *)&REFG(undefined, 0x1138100) * fVar15)) *
                 fVar10;
      (*(float *)(gen_frame + 0x4)) = ((fVar23 - (fVar17 * fVar11) * fVar17) * (*(float *)&REFG(undefined, 0x1138104) * fVar17)) *
                  fVar13;
      (*(float *)(gen_frame + 0x8)) = ((fVar24 - (fVar20 * fVar9) * fVar20) * (*(float *)&REFG(undefined, 0x1138108) * fVar20)) *
                  fVar12;
      (*(float *)(gen_frame + 0xc)) = ((fVar25 - (fVar21 * fVar14) * fVar21) * (*(float *)&REFG(undefined, 0x113810c) * fVar21)) *
                  (*(float *)((char *)&auVar18 + 12));
      (*(undefined8 *)(gen_frame + 0x10)) = uVar1;
      (*(undefined8 *)(gen_frame + 0x18)) = uVar2;
      F_00d86740(&(*(float *)(gen_frame + 0x0)),param_3);
      F_00d86310(param_1,iVar8,&(*(float *)(gen_frame + 0x0)));
      (*(undefined8 * PTR32 *)(gen_frame + 0x4c)) = (*(undefined8 * PTR32 *)(gen_frame + 0x4c)) + 6;
      iVar8 = iVar8 + 1;
      uVar6 = F_00d86240(param_1);
    } while (iVar8 < (int)uVar6);
  }
  return uVar6;
}

/* ref: FUN_00d86ff0 */
uint F_00d86ff0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xd86ff0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int iVar1;
  undefined4 * puVar2;
  int iVar3;
  uint uVar4;
  
  (*(int *)(gen_frame + 0x48)) = param_1;
  iVar1 = *(int *)(param_1 + 0xc);
  ((int *)(gen_frame + 0xc))[0] = iVar1;
  ((int *)(gen_frame + 0xc))[1] = 0;
  ((int *)(gen_frame + 0xc))[2] = 0;
  ((int *)(gen_frame + 0xc))[3] = 0x80000000;
  ((int *)(gen_frame + 0xc))[4] = 0;
  ((int *)(gen_frame + 0xc))[5] = 0;
  ((int *)(gen_frame + 0xc))[6] = 0x80000000;
  ((int *)(gen_frame + 0xc))[7] = 0;
  ((int *)(gen_frame + 0xc))[8] = 0;
  ((int *)(gen_frame + 0xc))[9] = 0x80000000;
  (*(undefined2 *)(gen_frame + 0x34)) = 0;
  (*(int *)(gen_frame + 0x3c)) = 0;
  (*(int *)(gen_frame + 0x40)) = 0;
  (*(uint *)(gen_frame + 0x44)) = 0x80000000;
  iVar1 = *(int *)(iVar1 + 0x1c);
  uVar4 = iVar1 + 3U & 0xfffffffc;
  (*(int *)(gen_frame + 0x38)) = iVar1;
  if (0 < (int)uVar4) {
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),((int *)(gen_frame + 0xc)) + 4,uVar4,0x30);
  }
  if ((int)(((int *)(gen_frame + 0xc))[3] & 0x3fffffffU) < (int)uVar4) {
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),((int *)(gen_frame + 0xc)) + 1,uVar4,0x30);
  }
  if ((int)(((int *)(gen_frame + 0xc))[9] & 0x3fffffffU) < (int)uVar4) {
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),((int *)(gen_frame + 0xc)) + 7,uVar4,4);
  }
  if ((int)(((int *)(gen_frame + 0xc))[6] & 0x3fffffffU) < iVar1) {
    iVar3 = (((int *)(gen_frame + 0xc))[6] & 0x3fffffffU) * 2;
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),((int *)(gen_frame + 0xc)) + 4,iVar3,0x30);
  }
  ((int *)(gen_frame + 0xc))[5] = iVar1;
  if ((int)(((int *)(gen_frame + 0xc))[3] & 0x3fffffffU) < iVar1) {
    iVar3 = (((int *)(gen_frame + 0xc))[3] & 0x3fffffffU) * 2;
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),((int *)(gen_frame + 0xc)) + 1,iVar3,0x30);
  }
  ((int *)(gen_frame + 0xc))[2] = iVar1;
  if ((int)(((int *)(gen_frame + 0xc))[9] & 0x3fffffffU) < iVar1) {
    iVar3 = (((int *)(gen_frame + 0xc))[9] & 0x3fffffffU) * 2;
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),((int *)(gen_frame + 0xc)) + 7,iVar3,4);
  }
  ((int *)(gen_frame + 0xc))[8] = iVar1;
  iVar1 = *(int *)(((int *)(gen_frame + 0xc))[0] + 0x40);
  uVar4 = iVar1 + 3U & 0xfffffffc;
  if ((int)((*(uint *)(gen_frame + 0x44)) & 0x3fffffff) < (int)uVar4) {
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x3c)),uVar4,4);
  }
  if ((int)((*(uint *)(gen_frame + 0x44)) & 0x3fffffff) < iVar1) {
    iVar3 = ((*(uint *)(gen_frame + 0x44)) & 0x3fffffff) * 2;
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x3c)),iVar3,4);
  }
  iVar3 = iVar1 - (*(int *)(gen_frame + 0x40));
  puVar2 = (undefined4 *)((*(int *)(gen_frame + 0x3c)) + (*(int *)(gen_frame + 0x40)) * 4);
  if (0 < iVar3) {
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
  }
  (*(int *)(gen_frame + 0x40)) = iVar1;
  F_00d31730(((int *)(gen_frame + 0xc)));
  puVar2 = (undefined4 *)F_00d321b0(((int *)(gen_frame + 0xc)));
  F_00d86de0((*(int *)(gen_frame + 0x48)),param_2,param_3,*puVar2);
  uVar4 = F_009ffa70(((int *)(gen_frame + 0xc)));
  return uVar4;
}

/* ref: FUN_00d871c0 */
uint F_00d871c0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd871c0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)F_00d321b0(param_4);
  uVar2 = F_00d86de0(param_1,param_2,param_3,*puVar1);
  return uVar2;
}

/* ref: FUN_00d871f0 */
unsigned int F_00d871f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd871f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  int iVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  
  (*(int *)(gen_frame + 0x98)) = *(int *)(param_3 + 0x1c);
  (*(uint *)(gen_frame + 0xa4)) = 0;
  if (0 < *(int *)(param_3 + 0x1c)) {
    (*(int *)(gen_frame + 0x9c)) = 0;
    do {
      iVar4 = 0;
      (*(uint *)(gen_frame + 0xa0)) = (*(uint *)(gen_frame + 0xa4)) & 0xffff;
      if (0 < param_1[1]) {
        do {
          F_00da4df0(&(*(undefined4 *)(gen_frame + 0xc)),*((uint *)GEN_TOP((*(int *)(param_3 + 0x18) + (*(int *)(gen_frame + 0x9c)) * 8))) & 0xfffffffe);
          iVar1 = *param_1;
          ((undefined2 *)(gen_frame + 0xa8))[0] = 0xff;
          F_00da51f0(&(*(undefined4 *)(gen_frame + 0xc)),*(uint *)(iVar1 + iVar4 * 4) & 0xfffffffe,((undefined2 *)(gen_frame + 0xa8)),1);
          F_00da51f0(&(*(undefined4 *)(gen_frame + 0xc)),*(uint *)(*param_2 + iVar4 * 4) & 0xfffffffe,
                       *(uint *)(*param_1 + iVar4 * 4) & 0xfffffffe,1);
          F_00da51f0(&(*(undefined4 *)(gen_frame + 0xc)),((undefined2 *)(gen_frame + 0xa8)),*(uint *)(*param_2 + iVar4 * 4) & 0xfffffffe,1);
          uVar3 = 0;
          do {
            if ((uVar3 != (ushort)(*(uint *)(gen_frame + 0xa4))) &&
               (uVar2 = F_00da43b0(&(*(undefined4 *)(gen_frame + 0xc)),
                                     *((uint *)GEN_TOP((*(int *)(param_3 + 0x18) + (short)uVar3 * 8))) &
                                     0xfffffffe), uVar2 == 0)) {
              (*(uint *)(gen_frame + 0xa0)) = (uint)uVar3;
              break;
            }
            uVar3 = uVar3 + 1;
          } while ((short)uVar3 < (*(int *)(gen_frame + 0x98)));
          (*(undefined4 *)(gen_frame + 0x10)) = 0;
          if ((short)(*(uint *)(gen_frame + 0xa0)) != (ushort)(*(uint *)(gen_frame + 0xa4))) {
            if (-1 < (int)(*(uint *)(gen_frame + 0x14))) {
              ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                        (&REFG(undefined * PTR32, 0x13516a4),(*(undefined4 *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x14)) & 0x3fffffff);
            }
            break;
          }
          if (-1 < (int)(*(uint *)(gen_frame + 0x14))) {
            ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),(*(undefined4 *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x14)) & 0x3fffffff);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < param_1[1]);
      }
      *(short *)(param_4 + (*(int *)(gen_frame + 0x9c)) * 2) = (short)(*(uint *)(gen_frame + 0xa0));
      iVar4 = (int)(short)((*(uint *)(gen_frame + 0xa4)) + 1);
      (*(uint *)(gen_frame + 0xa4)) = (*(uint *)(gen_frame + 0xa4)) + 1;
      (*(int *)(gen_frame + 0x9c)) = iVar4;
    } while (iVar4 < (*(int *)(gen_frame + 0x98)));
  }
  return 0;
}

/* ref: FUN_00d87380 */
unsigned int F_00d87380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd87380u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00d871f0(param_1,param_2,*(undefined4 *)((int)this + 0xc),*(undefined4 *)((int)this + 8));
  return 0;
}

/* ref: FUN_00d873a0 */
uint F_00d873a0(unsigned int gen_a0)
{
  GEN_ENTER(0xd873a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint local_8;
  
  local_8 = (uint)this & 0xffffff00;
  F_00da3de0(this,local_8);
  return (uint)this;
}

/* ref: FUN_00d873c0 */
uint F_00d873c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd873c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00da3a20(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00d873d0 */
uint F_00d873d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd873d0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  
  uVar1 = F_00da3eb0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)&gen_args[1]));
  if (uVar1 == 0) {
    *(*(undefined4 * PTR32 *)&gen_args[2]) = (*(undefined4 *)&gen_args[1]);
    return 0;
  }
  return 1;
}

/* ref: FUN_00d87410 */
uint F_00d87410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd87410u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00d87430 */
uint F_00d87430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd87430u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = F_00d923f0(*(undefined4 *)((int)pvVar1 + 0x2c),param_2 * 2,param_1);
  return uVar2;
}

/* ref: FUN_00d87460 */
uint F_00d87460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd87460u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = F_00d923f0(*(undefined4 *)((int)pvVar1 + 0x2c),param_2 << 4,param_1);
  return uVar2;
}

/* ref: FUN_00d87490 */
uint F_00d87490(unsigned int gen_a0)
{
  GEN_ENTER(0xd87490u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = F_00d92430(*(undefined4 *)((int)pvVar1 + 0x2c),param_1);
  return uVar2;
}

/* ref: FUN_00d874c0 */
uint F_00d874c0(unsigned int gen_a0)
{
  GEN_ENTER(0xd874c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = F_00d92430(*(undefined4 *)((int)pvVar1 + 0x2c),param_1);
  return uVar2;
}

/* ref: FUN_00d87580 */
uint F_00d87580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd87580u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  in_ecx[1] = 0x2c;
  return param_2;
}

/* ref: FUN_00d875a0 */
uint F_00d875a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd875a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  *(uint *)this = param_1;
  *(int *)((int)this + 4) = param_2 << 4;
  return param_1;
}

/* ref: FUN_00d87680 */
uint F_00d87680(unsigned int gen_a0)
{
  GEN_ENTER(0xd87680u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00d876b0 */
uint F_00d876b0(unsigned int gen_a0)
{
  GEN_ENTER(0xd876b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: hkaMirroredSkeleton::vf0 */
uint F_00d876f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd876f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d86410(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00d87730 */
uint F_00d87730(unsigned int gen_a0)
{
  GEN_ENTER(0xd87730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d87770 */
uint F_00d87770(unsigned int gen_a0)
{
  GEN_ENTER(0xd87770u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d877b0 */
uint F_00d877b0(unsigned int gen_a0)
{
  GEN_ENTER(0xd877b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d87830 */
uint F_00d87830(unsigned int gen_a0)
{
  GEN_ENTER(0xd87830u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_00d91340(in_ecx);
  *(undefined4 *)(in_ecx + 4) = 0;
  *(undefined4 *)(in_ecx + 8) = 0;
  *(undefined4 *)(in_ecx + 0xc) = 0x80000000;
  return in_ecx;
}

/* ref: FUN_00d87850 */
uint F_00d87850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd87850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  int * piVar6;
  undefined * this_00;
  int iVar7;
  int iVar8;
  undefined * local_c;
  int local_8;
  
  F_00d914e0(this,param_1);
  piVar6 = (int *)((int)this + 4);
  *piVar6 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0x80000000;
  iVar7 = *(int *)((int)this + 8);
  iVar2 = *(int *)(param_1 + 8);
  local_8 = iVar7;
  if (iVar2 <= iVar7) {
    local_8 = iVar2;
  }
  uVar3 = *(uint *)((int)this + 0xc) & 0x3fffffff;
  if ((int)uVar3 < iVar2) {
    iVar4 = uVar3 * 2;
    if (iVar4 <= iVar2) {
      iVar4 = iVar2;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar6,iVar4,8);
  }
  iVar7 = (iVar7 - iVar2) + -1;
  if (-1 < iVar7) {
    local_c = (undefined *)(*piVar6 + iVar2 * 8 + 4 + iVar7 * 8);
    do {
      F_00d91510(local_c);
      local_c = (undefined *)((int)local_c + -8);
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
  }
  iVar7 = *(int *)(param_1 + 4);
  iVar4 = *piVar6;
  iVar8 = 0;
  if (0 < local_8) {
    this_00 = (undefined *)(iVar4 + 4);
    do {
      *(undefined4 *)((int)this_00 + -4) = *(undefined4 *)(iVar7 + iVar8 * 8);
      F_00d91540(this_00,(iVar7 - iVar4) + (int)this_00);
      iVar8 = iVar8 + 1;
      this_00 = (undefined *)((int)this_00 + 8);
    } while (iVar8 < local_8);
  }
  piVar1 = (int *)(param_1 + 4);
  puVar5 = (undefined4 *)(*piVar6 + local_8 * 8);
  param_1 = iVar2 - local_8;
  if (param_1 < 1) {
    *(int *)((int)this + 8) = iVar2;
    return (uint)this;
  }
  iVar7 = (*piVar1 + local_8 * 8) - (int)puVar5;
  do {
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = *(undefined4 *)(iVar7 + (int)puVar5);
      F_00d914e0(puVar5 + 1,iVar7 + (int)(puVar5 + 1));
    }
    puVar5 = puVar5 + 2;
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  *(int *)((int)this + 8) = iVar2;
  return (uint)this;
}

