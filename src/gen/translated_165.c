#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00d3a420 */
uint F_00d3a420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3a420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = param_1[1];
  if (uVar1 == 0) {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    return uVar1;
  }
  *(undefined4 *)this = *param_1;
  *(uint *)((int)this + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_00d3a450 */
uint F_00d3a450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3a450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if (param_1[1] == 0) {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    return 0;
  }
  uVar1 = param_1[1] * 2;
  *(undefined4 *)this = *param_1;
  *(uint *)((int)this + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_00d3a480 */
uint F_00d3a480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3a480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if (param_1[1] == 0) {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    return 0;
  }
  uVar1 = param_1[1] << 6;
  *(undefined4 *)this = *param_1;
  *(uint *)((int)this + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_00d3a4b0 */
uint F_00d3a4b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3a4b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if (param_1[1] == 0) {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    return 0;
  }
  uVar1 = param_1[1] * 0x70;
  *(undefined4 *)this = *param_1;
  *(uint *)((int)this + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_00d3a4e0 */
uint F_00d3a4e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3a4e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if (param_1[1] == 0) {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    return 0;
  }
  uVar1 = param_1[1] * 8;
  *(undefined4 *)this = *param_1;
  *(uint *)((int)this + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_00d3a510 */
uint F_00d3a510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3a510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if (param_1[1] == 0) {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    return 0;
  }
  uVar1 = param_1[1] * 0x30;
  *(undefined4 *)this = *param_1;
  *(uint *)((int)this + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_00d3a540 */
uint F_00d3a540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3a540u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,param_2 * 200);
  return uVar2;
}

/* ref: FUN_00d3a5a0 */
unsigned int F_00d3a5a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xd3a5a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  int * param_6 = (int *)(uintptr_t)gen_a5;
  int param_7 = (int)gen_a6;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  int iVar6;
  int iVar7;
  int local_8;
  
  iVar7 = 0;
  if ((param_3[1] != 0) && (0 < param_5)) {
    local_8 = 0;
    do {
      iVar6 = (int)*(short *)(*param_3 + iVar7 * 2);
      puVar5 = (undefined4 *)(*param_2 + local_8);
      uVar1 = puVar5[1];
      uVar2 = puVar5[2];
      uVar3 = puVar5[3];
      puVar4 = (undefined4 *)(iVar6 * 0x30 + *param_1);
      *puVar4 = *puVar5;
      puVar4[1] = uVar1;
      puVar4[2] = uVar2;
      puVar4[3] = uVar3;
      uVar1 = puVar5[5];
      uVar2 = puVar5[6];
      uVar3 = puVar5[7];
      puVar4[4] = puVar5[4];
      puVar4[5] = uVar1;
      puVar4[6] = uVar2;
      puVar4[7] = uVar3;
      uVar1 = puVar5[9];
      uVar2 = puVar5[10];
      uVar3 = puVar5[0xb];
      puVar4[8] = puVar5[8];
      puVar4[9] = uVar1;
      puVar4[10] = uVar2;
      puVar4[0xb] = uVar3;
      if (param_6[1] == 0) {
        *(undefined1 *)(iVar6 + param_7) = 0xff;
      }
      else {
        *(undefined1 *)(iVar6 + param_7) = *(undefined1 *)(iVar7 + *param_6);
      }
      local_8 = local_8 + 0x30;
      iVar7 = iVar7 + 1;
    } while (iVar7 < param_5);
  }
  return 0;
}

/* ref: FUN_00d3a620 */
unsigned int F_00d3a620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xd3a620u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  int * param_6 = (int *)(uintptr_t)gen_a5;
  int param_7 = (int)gen_a6;
  int iVar1;
  int iVar2;
  
  if (param_3[1] != 0) {
    iVar1 = 0;
    if (3 < param_5) {
      do {
        iVar2 = (int)*(short *)(*param_3 + iVar1 * 2);
        *(undefined4 *)(*param_1 + iVar2 * 4) = *(undefined4 *)(*param_2 + iVar1 * 4);
        if (param_6[1] == 0) {
          *(undefined1 *)(iVar2 + param_7) = 0xff;
        }
        else {
          *(undefined1 *)(iVar2 + param_7) = *(undefined1 *)(iVar1 + *param_6);
        }
        iVar2 = (int)*(short *)(*param_3 + 2 + iVar1 * 2);
        *(undefined4 *)(*param_1 + iVar2 * 4) = *(undefined4 *)(*param_2 + 4 + iVar1 * 4);
        if (param_6[1] == 0) {
          *(undefined1 *)(iVar2 + param_7) = 0xff;
        }
        else {
          *(undefined1 *)(iVar2 + param_7) = *(undefined1 *)(*param_6 + 1 + iVar1);
        }
        iVar2 = (int)*(short *)(*param_3 + 4 + iVar1 * 2);
        *(undefined4 *)(*param_1 + iVar2 * 4) = *(undefined4 *)(*param_2 + 8 + iVar1 * 4);
        if (param_6[1] == 0) {
          *(undefined1 *)(iVar2 + param_7) = 0xff;
        }
        else {
          *(undefined1 *)(iVar2 + param_7) = *(undefined1 *)(*param_6 + 2 + iVar1);
        }
        iVar2 = (int)*(short *)(*param_3 + 6 + iVar1 * 2);
        *(undefined4 *)(*param_1 + iVar2 * 4) = *(undefined4 *)(*param_2 + 0xc + iVar1 * 4);
        if (param_6[1] == 0) {
          *(undefined1 *)(iVar2 + param_7) = 0xff;
        }
        else {
          *(undefined1 *)(iVar2 + param_7) = *(undefined1 *)(*param_6 + 3 + iVar1);
        }
        iVar1 = iVar1 + 4;
      } while (iVar1 < param_5 + -3);
    }
    for (; iVar1 < param_5; iVar1 = iVar1 + 1) {
      iVar2 = (int)*(short *)(*param_3 + iVar1 * 2);
      *(undefined4 *)(*param_1 + iVar2 * 4) = *(undefined4 *)(*param_2 + iVar1 * 4);
      if (param_6[1] == 0) {
        *(undefined1 *)(iVar2 + param_7) = 0xff;
      }
      else {
        *(undefined1 *)(iVar2 + param_7) = *(undefined1 *)(iVar1 + *param_6);
      }
    }
  }
  return 0;
}

/* ref: FUN_00d3a770 */
uint F_00d3a770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3a770u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x80 + *in_ecx;
}

/* ref: FUN_00d3a790 */
uint F_00d3a790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3a790u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x54 + *in_ecx;
}

/* ref: FUN_00d3a7a0 */
uint F_00d3a7a0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3a7a0u, gen_a0, 0u, 0u, 0u);
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
  uVar2 = F_00d94390(this,uVar3);
  return uVar2;
}

/* ref: FUN_00d3a7e0 */
uint F_00d3a7e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3a7e0u, gen_a0, gen_a1, 0u, 0u);
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
  uVar1 = F_00d945c0(this,param_1,uVar1);
  return uVar1;
}

/* ref: FUN_00d3a840 */
uint F_00d3a840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3a840u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00d3a880 */
uint F_00d3a880(unsigned int gen_a0)
{
  GEN_ENTER(0xd3a880u, gen_a0, 0u, 0u, 0u);
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
  uVar2 = F_00d94390(this,uVar3);
  return uVar2;
}

/* ref: FUN_00d3a8c0 */
uint F_00d3a8c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3a8c0u, gen_a0, gen_a1, 0u, 0u);
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
  uVar1 = F_00d945c0(this,param_1,uVar1);
  return uVar1;
}

/* ref: FUN_00d3a960 */
uint F_00d3a960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd3a960u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  return param_3;
}

/* ref: FUN_00d3a980 */
uint F_00d3a980(unsigned int gen_a0)
{
  GEN_ENTER(0xd3a980u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  LPVOID this;
  uint uVar2;
  uint uVar3;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = *(uint *)((int)this + 0xc);
  uVar3 = param_1 + 0x7fU & 0xffffff80;
  uVar2 = uVar1 + uVar3;
  if (((int)uVar3 <= *(int *)((int)this + 8)) && (uVar2 <= *(uint *)((int)this + 0x10))) {
    *(uint *)((int)this + 0xc) = uVar2;
    return uVar1;
  }
  uVar2 = F_00d94390(this,uVar3);
  return uVar2;
}

/* ref: FUN_00d3a9c0 */
uint F_00d3a9c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3a9c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  LPVOID this;
  uint uVar1;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = param_2 + 0x7fU & 0xffffff80;
  if ((((int)uVar1 <= *(int *)((int)this + 8)) && (uVar1 + param_1 == *(int *)((int)this + 0xc))) &&
     (*(int *)((int)this + 0x14) != param_1)) {
    *(int *)((int)this + 0xc) = param_1;
    return (uint)this;
  }
  uVar1 = F_00d945c0(this,param_1,uVar1);
  return uVar1;
}

/* ref: FUN_00d3aa10 */
unsigned int F_00d3aa10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3aa10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  fVar4 = param_2[1];
  fVar9 = param_2[2];
  fVar10 = param_2[3];
  *(float *)this = *param_1 * *param_2 + *(float *)this;
  *(float *)((int)this + 4) = fVar1 * fVar4 + *(float *)((int)this + 4);
  *(float *)((int)this + 8) = fVar2 * fVar9 + *(float *)((int)this + 8);
  *(float *)((int)this + 0xc) = fVar3 * fVar10 + *(float *)((int)this + 0xc);
  fVar1 = param_1[9];
  fVar2 = param_1[10];
  fVar3 = param_1[0xb];
  fVar4 = param_2[1];
  fVar9 = param_2[2];
  fVar10 = param_2[3];
  *(float *)((int)this + 0x20) = param_1[8] * *param_2 + *(float *)((int)this + 0x20);
  *(float *)((int)this + 0x24) = fVar1 * fVar4 + *(float *)((int)this + 0x24);
  *(float *)((int)this + 0x28) = fVar2 * fVar9 + *(float *)((int)this + 0x28);
  *(float *)((int)this + 0x2c) = fVar3 * fVar10 + *(float *)((int)this + 0x2c);
  fVar1 = param_1[4];
  fVar2 = param_1[5];
  fVar3 = param_1[6];
  fVar4 = param_1[7];
  fVar9 = *(float *)((int)this + 0x10) * fVar1;
  fVar10 = *(float *)((int)this + 0x14) * fVar2;
  fVar11 = *(float *)((int)this + 0x18) * fVar3;
  fVar12 = *(float *)((int)this + 0x1c) * fVar4;
  fVar13 = fVar11 + fVar9;
  fVar14 = fVar12 + fVar10;
  fVar9 = fVar9 + fVar11;
  fVar10 = fVar10 + fVar12;
  uVar5 = -(uint)(fVar14 + fVar13 < 0.0);
  uVar6 = -(uint)(fVar13 + fVar14 < 0.0);
  uVar7 = -(uint)(fVar10 + fVar9 < 0.0);
  uVar8 = -(uint)(fVar9 + fVar10 < 0.0);
  uVar15 = (uint)gen_fl2bits(fVar2) ^ *(uint *)&REFG(undefined, 0x10ab9c4);
  uVar16 = (uint)gen_fl2bits(fVar3) ^ *(uint *)&REFG(undefined, 0x10ab9c8);
  uVar17 = (uint)gen_fl2bits(fVar4) ^ *(uint *)&REFG(undefined, 0x10ab9cc);
  fVar9 = param_2[1];
  fVar10 = param_2[2];
  fVar11 = param_2[3];
  *(float *)((int)this + 0x10) =
       gen_bits2f(((uint)gen_fl2bits(fVar1) ^ *(uint *)&REFG(undefined, 0x10ab9c0)) & uVar5 |
                  ~uVar5 & (uint)gen_fl2bits(fVar1)) * *param_2 + *(float *)((int)this + 0x10);
  *(float *)((int)this + 0x14) =
       gen_bits2f(uVar15 & uVar6 | ~uVar6 & (uint)gen_fl2bits(fVar2)) * fVar9 +
       *(float *)((int)this + 0x14);
  *(float *)((int)this + 0x18) =
       gen_bits2f(uVar16 & uVar7 | ~uVar7 & (uint)gen_fl2bits(fVar3)) * fVar10 +
       *(float *)((int)this + 0x18);
  *(float *)((int)this + 0x1c) =
       gen_bits2f(uVar17 & uVar8 | ~uVar8 & (uint)gen_fl2bits(fVar4)) * fVar11 +
       *(float *)((int)this + 0x1c);
  return 0;
}

/* ref: FUN_00d3aa80 */
uint F_00d3aa80(unsigned int gen_a0)
{
  GEN_ENTER(0xd3aa80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  LPVOID this;
  uint uVar2;
  int iVar3;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  iVar3 = param_1 * 0x80;
  uVar1 = *(uint *)((int)this + 0xc);
  uVar2 = uVar1 + iVar3;
  if ((iVar3 <= *(int *)((int)this + 8)) && (uVar2 <= *(uint *)((int)this + 0x10))) {
    *(uint *)((int)this + 0xc) = uVar2;
    return uVar1;
  }
  uVar2 = F_00d94390(this,iVar3);
  return uVar2;
}

/* ref: FUN_00d3aac0 */
uint F_00d3aac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3aac0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  LPVOID this;
  uint uVar1;
  int iVar2;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  iVar2 = param_2 * 0x80;
  if (((iVar2 <= *(int *)((int)this + 8)) && (iVar2 + param_1 == *(int *)((int)this + 0xc))) &&
     (*(int *)((int)this + 0x14) != param_1)) {
    *(int *)((int)this + 0xc) = param_1;
    return (uint)this;
  }
  uVar1 = F_00d945c0(this,param_1,iVar2);
  return uVar1;
}

/* ref: FUN_00d3ab10 */
uint F_00d3ab10(unsigned int gen_a0)
{
  GEN_ENTER(0xd3ab10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  LPVOID this;
  uint uVar2;
  uint uVar3;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = *(uint *)((int)this + 0xc);
  uVar3 = param_1 * 0x54 + 0x7fU & 0xffffff80;
  uVar2 = uVar1 + uVar3;
  if (((int)uVar3 <= *(int *)((int)this + 8)) && (uVar2 <= *(uint *)((int)this + 0x10))) {
    *(uint *)((int)this + 0xc) = uVar2;
    return uVar1;
  }
  uVar2 = F_00d94390(this,uVar3);
  return uVar2;
}

/* ref: FUN_00d3ab50 */
uint F_00d3ab50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3ab50u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  LPVOID this;
  uint uVar1;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = param_2 * 0x54 + 0x7fU & 0xffffff80;
  if ((((int)uVar1 <= *(int *)((int)this + 8)) && (uVar1 + param_1 == *(int *)((int)this + 0xc))) &&
     (*(int *)((int)this + 0x14) != param_1)) {
    *(int *)((int)this + 0xc) = param_1;
    return (uint)this;
  }
  uVar1 = F_00d945c0(this,param_1,uVar1);
  return uVar1;
}

/* ref: FUN_00d3aba0 */
uint F_00d3aba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd3aba0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  return param_3;
}

/* ref: FUN_00d3abc0 */
uint F_00d3abc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3abc0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d3ac10 */
unsigned int F_00d3ac10(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd3ac10u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  uint uVar1;
  float10 fVar2;
  float10 fVar3;
  float fVar4;
  uint local_c;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x1c))(param_1);
  fVar2 = (float10)(int)(uVar1 - 1);
  if ((int)(uVar1 - 1) < 0) {
    fVar2 = fVar2 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar2 = fVar2 * ((float10)param_2 / ((float10)GEN_TOD(gen_bits2f(param_1[3]))));
  local_c = (uint)(longlong)TRUNC(fVar2);
  *param_3 = local_c;
  fVar4 = REFG(float, 0x1087f04);
  if (uVar1 - 2 < local_c) {
    *param_3 = uVar1 - 2;
    *param_4 = fVar4;
    return 0;
  }
  fVar3 = (float10)(int)local_c;
  if ((int)local_c < 0) {
    fVar3 = fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar2 = fVar2 - fVar3;
  fVar4 = (float)fVar2;
  if (fVar2 < (float10)0) {
    *param_4 = 0.0;
    return 0;
  }
  if (REFG(float, 0x1087f04) < fVar4) {
    fVar4 = REFG(float, 0x1087f04);
  }
  *param_4 = fVar4;
  return 0;
}

/* ref: FUN_00d3acf0 */
uint F_00d3acf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd3acf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  return param_3;
}

/* ref: FUN_00d3ad10 */
uint F_00d3ad10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd3ad10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  return param_3;
}

/* ref: FUN_00d3ad30 */
uint F_00d3ad30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd3ad30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  return param_3;
}

/* ref: FUN_00d3ad50 */
uint F_00d3ad50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd3ad50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  return param_3;
}

/* ref: FUN_00d3ad70 */
uint F_00d3ad70(unsigned int gen_a0)
{
  GEN_ENTER(0xd3ad70u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  LPVOID this;
  uint uVar2;
  uint uVar3;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = *(uint *)((int)this + 0xc);
  uVar3 = param_1 * 200 + 0x7fU & 0xffffff80;
  uVar2 = uVar1 + uVar3;
  if (((int)uVar3 <= *(int *)((int)this + 8)) && (uVar2 <= *(uint *)((int)this + 0x10))) {
    *(uint *)((int)this + 0xc) = uVar2;
    return uVar1;
  }
  uVar2 = F_00d94390(this,uVar3);
  return uVar2;
}

/* ref: FUN_00d3adb0 */
uint F_00d3adb0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3adb0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  LPVOID this;
  uint uVar2;
  uint uVar3;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = *(uint *)((int)this + 0xc);
  uVar3 = param_1 * 8 + 0x7fU & 0xffffff80;
  uVar2 = uVar1 + uVar3;
  if (((int)uVar3 <= *(int *)((int)this + 8)) && (uVar2 <= *(uint *)((int)this + 0x10))) {
    *(uint *)((int)this + 0xc) = uVar2;
    return uVar1;
  }
  uVar2 = F_00d94390(this,uVar3);
  return uVar2;
}

/* ref: FUN_00d3adf0 */
uint F_00d3adf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3adf0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  LPVOID this;
  uint uVar1;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = param_2 * 8 + 0x7fU & 0xffffff80;
  if ((((int)uVar1 <= *(int *)((int)this + 8)) && (uVar1 + param_1 == *(int *)((int)this + 0xc))) &&
     (*(int *)((int)this + 0x14) != param_1)) {
    *(int *)((int)this + 0xc) = param_1;
    return (uint)this;
  }
  uVar1 = F_00d945c0(this,param_1,uVar1);
  return uVar1;
}

/* ref: FUN_00d3ae40 */
uint F_00d3ae40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3ae40u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  LPVOID this;
  uint uVar1;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = param_2 * 200 + 0x7fU & 0xffffff80;
  if ((((int)uVar1 <= *(int *)((int)this + 8)) && (uVar1 + param_1 == *(int *)((int)this + 0xc))) &&
     (*(int *)((int)this + 0x14) != param_1)) {
    *(int *)((int)this + 0xc) = param_1;
    return (uint)this;
  }
  uVar1 = F_00d945c0(this,param_1,uVar1);
  return uVar1;
}

/* ref: FUN_00d3ae90 */
uint F_00d3ae90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3ae90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_v16 * param_1 = (gen_v16 *)(uintptr_t)gen_a1;
  gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a2;
  undefined1 auVar1 [16];
  
  gen_divps(&(auVar1), &(*param_1), &(*param_2));
  memcpy(&(*(gen_v16 *)this), &(auVar1), sizeof(auVar1) < sizeof(*(gen_v16 *)this) ? sizeof(auVar1) : sizeof(*(gen_v16 *)this));
  return (uint)param_1;
}

/* ref: FUN_00d3aeb0 */
uint F_00d3aeb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3aeb0u, gen_a0, gen_a1, 0u, 0u);
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
  return (uint)param_2;
}

/* ref: FUN_00d3aed0 */
uint F_00d3aed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3aed0u, gen_a0, gen_a1, 0u, 0u);
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
  return (uint)param_2;
}

/* ref: FUN_00d3aef0 */
uint F_00d3aef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3aef0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  return (uint)param_2;
}

/* ref: FUN_00d3af10 */
uint F_00d3af10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3af10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  return (uint)param_2;
}

/* ref: FUN_00d3af30 */
uint F_00d3af30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3af30u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d3af70 */
uint F_00d3af70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd3af70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3 | 0x80000000;
  return param_3 | 0x80000000;
}

/* ref: FUN_00d3af90 */
uint F_00d3af90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3af90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_v16 * param_1 = (gen_v16 *)(uintptr_t)gen_a1;
  gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a2;
  undefined1 auVar1 [16];
  
  gen_divps(&(auVar1), &(*param_1), &(*param_2));
  memcpy(&(*(gen_v16 *)this), &(auVar1), sizeof(auVar1) < sizeof(*(gen_v16 *)this) ? sizeof(auVar1) : sizeof(*(gen_v16 *)this));
  return (uint)param_1;
}

/* ref: FUN_00d3afb0 */
uint F_00d3afb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3afb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  LPVOID this_00;
  uint uVar2;
  uint uVar3;
  
  this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  iVar1 = *(int *)((int)this_00 + 0xc);
  uVar3 = param_1 + 0x7fU & 0xffffff80;
  uVar2 = iVar1 + uVar3;
  if (((int)uVar3 <= *(int *)((int)this_00 + 8)) && (uVar2 <= *(uint *)((int)this_00 + 0x10))) {
    *(uint *)((int)this_00 + 0xc) = uVar2;
    *(int *)this = iVar1;
    *(int *)((int)this + 4) = param_1;
    return (uint)this;
  }
  uVar2 = F_00d94390(this_00,uVar3);
  *(uint *)this = uVar2;
  *(int *)((int)this + 4) = param_1;
  return (uint)this;
}

/* ref: FUN_00d3b060 */
uint F_00d3b060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3b060u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  LPVOID this_00;
  uint uVar2;
  uint uVar3;
  
  this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  iVar1 = *(int *)((int)this_00 + 0xc);
  uVar3 = param_1 * 0x30 + 0x7fU & 0xffffff80;
  uVar2 = iVar1 + uVar3;
  if (((int)uVar3 <= *(int *)((int)this_00 + 8)) && (uVar2 <= *(uint *)((int)this_00 + 0x10))) {
    *(uint *)((int)this_00 + 0xc) = uVar2;
    *(int *)this = iVar1;
    *(int *)((int)this + 4) = param_1;
    return (uint)this;
  }
  uVar2 = F_00d94390(this_00,uVar3);
  *(uint *)this = uVar2;
  *(int *)((int)this + 4) = param_1;
  return (uint)this;
}

/* ref: FUN_00d3b110 */
uint F_00d3b110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3b110u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  LPVOID this_00;
  uint uVar2;
  uint uVar3;
  
  this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  iVar1 = *(int *)((int)this_00 + 0xc);
  uVar3 = param_1 * 4 + 0x7fU & 0xffffff80;
  uVar2 = iVar1 + uVar3;
  if (((int)uVar3 <= *(int *)((int)this_00 + 8)) && (uVar2 <= *(uint *)((int)this_00 + 0x10))) {
    *(uint *)((int)this_00 + 0xc) = uVar2;
    *(int *)this = iVar1;
    *(int *)((int)this + 4) = param_1;
    return (uint)this;
  }
  uVar2 = F_00d94390(this_00,uVar3);
  *(uint *)this = uVar2;
  *(int *)((int)this + 4) = param_1;
  return (uint)this;
}

/* ref: FUN_00d3b1c0 */
uint F_00d3b1c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xd3b1c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  uint * param_6 = (uint *)(uintptr_t)gen_a5;
  uint * param_7 = (uint *)(uintptr_t)gen_a6;
  uint uVar1;
  int iVar2;
  short * psVar3;
  undefined4 * puVar4;
  
  if (param_3[1] == 0) {
    *param_2 = *param_1;
    *param_5 = param_4;
    uVar1 = *param_6;
    *param_7 = uVar1;
    return uVar1;
  }
  uVar1 = F_00d367f0(param_4);
  *param_7 = uVar1;
  F_00da1030(uVar1,0,param_4);
  *param_5 = 0;
  iVar2 = param_3[1] + -1;
  if (-1 < iVar2) {
    psVar3 = (short *)(*param_3 + iVar2 * 2);
    do {
      if (((-1 < *psVar3) && (*psVar3 < param_4)) &&
         ((param_6[1] == 0 || (*(char *)(iVar2 + *param_6) != '\0')))) {
        *param_5 = iVar2 + 1;
        break;
      }
      psVar3 = psVar3 + -1;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = F_00d368e0(*param_5);
  *param_2 = uVar1;
  iVar2 = param_4 * 0xc;
  uVar1 = iVar2 - 1;
  if (-1 < (int)uVar1) {
    uVar1 = 0;
    puVar4 = (undefined4 *)*param_1;
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00d3b280 */
uint F_00d3b280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xd3b280u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  uint * param_6 = (uint *)(uintptr_t)gen_a5;
  uint * param_7 = (uint *)(uintptr_t)gen_a6;
  uint uVar1;
  int iVar2;
  short * psVar3;
  undefined4 * puVar4;
  
  if (param_3[1] == 0) {
    *param_2 = *param_1;
    *param_5 = param_4;
    uVar1 = *param_6;
    *param_7 = uVar1;
    return uVar1;
  }
  uVar1 = F_00d367f0(param_4);
  *param_7 = uVar1;
  F_00da1030(uVar1,0,param_4);
  *param_5 = 0;
  iVar2 = param_3[1] + -1;
  if (-1 < iVar2) {
    psVar3 = (short *)(*param_3 + iVar2 * 2);
    do {
      if (((-1 < *psVar3) && (*psVar3 < param_4)) &&
         ((param_6[1] == 0 || (*(char *)(iVar2 + *param_6) != '\0')))) {
        *param_5 = iVar2 + 1;
        break;
      }
      psVar3 = psVar3 + -1;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = F_00d36890(*param_5);
  *param_2 = uVar1;
  uVar1 = param_4 - 1;
  if (-1 < (int)uVar1) {
    uVar1 = 0;
    puVar4 = (undefined4 *)*param_1;
    for (iVar2 = param_4; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00d3b330 */
unsigned int F_00d3b330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xd3b330u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  if (*(int *)(param_3 + 4) != 0) {
    F_00d36930(*param_2,param_5);
    F_00d36840(param_7,param_4);
  }
  return 0;
}

/* ref: FUN_00d3b360 */
unsigned int F_00d3b360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xd3b360u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  if (*(int *)(param_3 + 4) != 0) {
    F_00d36980(*param_2,param_5);
    F_00d36840(param_7,param_4);
  }
  return 0;
}

/* ref: FUN_00d3b390 */
unsigned int F_00d3b390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xd3b390u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint * param_5 = (uint *)(uintptr_t)gen_a4;
  int param_6 = (int)gen_a5;
  float * pfVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
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
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  int iVar53;
  float * pfVar54;
  float * pfVar55;
  uint * puVar56;
  uint uVar57;
  uint uVar58;
  uint uVar59;
  uint uVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  
  uVar2 = *param_5;
  uVar3 = param_5[1];
  uVar4 = param_5[2];
  uVar5 = param_5[3];
  iVar53 = (int)(param_6 + 3 + (param_6 + 3 >> 0x1f & 3U)) >> 2;
  if (0 < iVar53) {
    pfVar55 = (float *)(param_3 + 0x50);
    pfVar54 = (float *)(param_1 + 0x50);
    puVar56 = param_2;
    do {
      pfVar1 = ((float *)GEN_TOP(((param_3 - param_1) + -0x50 + (int)pfVar54)));
      fVar33 = *pfVar1;
      fVar34 = pfVar1[1];
      fVar35 = pfVar1[2];
      fVar36 = pfVar1[3];
      fVar6 = pfVar55[-0xf];
      fVar7 = pfVar55[-0xe];
      fVar8 = pfVar55[-0xd];
      fVar9 = pfVar55[-0xc];
      fVar10 = pfVar55[-0xb];
      fVar11 = pfVar55[-10];
      fVar12 = pfVar55[-9];
      fVar37 = pfVar55[8];
      fVar38 = pfVar55[9];
      fVar39 = pfVar55[10];
      fVar40 = pfVar55[0xb];
      fVar41 = pfVar55[0xc];
      fVar42 = pfVar55[0xd];
      fVar43 = pfVar55[0xe];
      fVar44 = pfVar55[0xf];
      fVar45 = pfVar55[0x14];
      fVar46 = pfVar55[0x15];
      fVar47 = pfVar55[0x16];
      fVar48 = pfVar55[0x17];
      fVar13 = pfVar55[-4];
      fVar14 = pfVar55[-3];
      fVar15 = pfVar55[-2];
      fVar16 = pfVar55[-1];
      fVar17 = *pfVar55;
      fVar18 = pfVar55[1];
      fVar19 = pfVar55[2];
      fVar20 = pfVar55[3];
      fVar49 = pfVar55[0x18];
      fVar50 = pfVar55[0x19];
      fVar51 = pfVar55[0x1a];
      fVar52 = pfVar55[0x1b];
      uVar57 = *(uint *)&REFG(undefined, 0x1134d28) & uVar4 | *(uint *)&REFG(undefined, 0x1134d20) & uVar2;
      uVar58 = *(uint *)&REFG(undefined, 0x1134d2c) & uVar5 | *(uint *)&REFG(undefined, 0x1134d24) & uVar3;
      uVar59 = *(uint *)&REFG(undefined, 0x1134d20) & uVar2 | *(uint *)&REFG(undefined, 0x1134d28) & uVar4;
      uVar60 = *(uint *)&REFG(undefined, 0x1134d24) & uVar3 | *(uint *)&REFG(undefined, 0x1134d2c) & uVar5;
      fVar61 = gen_bits2f(uVar58 | uVar57);
      fVar65 = gen_bits2f(uVar57 | uVar58);
      fVar69 = gen_bits2f(uVar60 | uVar59);
      fVar73 = gen_bits2f(uVar59 | uVar60);
      uVar57 = *(uint *)&REFG(undefined, 0x1134d38) & uVar4 | *(uint *)&REFG(undefined, 0x1134d30) & uVar2;
      uVar58 = *(uint *)&REFG(undefined, 0x1134d3c) & uVar5 | *(uint *)&REFG(undefined, 0x1134d34) & uVar3;
      uVar59 = *(uint *)&REFG(undefined, 0x1134d30) & uVar2 | *(uint *)&REFG(undefined, 0x1134d38) & uVar4;
      uVar60 = *(uint *)&REFG(undefined, 0x1134d34) & uVar3 | *(uint *)&REFG(undefined, 0x1134d3c) & uVar5;
      fVar62 = gen_bits2f(uVar58 | uVar57);
      fVar66 = gen_bits2f(uVar57 | uVar58);
      fVar70 = gen_bits2f(uVar60 | uVar59);
      fVar74 = gen_bits2f(uVar59 | uVar60);
      fVar21 = pfVar55[-8];
      fVar22 = pfVar55[-7];
      fVar23 = pfVar55[-6];
      fVar24 = pfVar55[-5];
      uVar57 = *(uint *)&REFG(undefined, 0x1134d48) & uVar4 | *(uint *)&REFG(undefined, 0x1134d40) & uVar2;
      uVar58 = *(uint *)&REFG(undefined, 0x1134d4c) & uVar5 | *(uint *)&REFG(undefined, 0x1134d44) & uVar3;
      uVar59 = *(uint *)&REFG(undefined, 0x1134d40) & uVar2 | *(uint *)&REFG(undefined, 0x1134d48) & uVar4;
      uVar60 = *(uint *)&REFG(undefined, 0x1134d44) & uVar3 | *(uint *)&REFG(undefined, 0x1134d4c) & uVar5;
      fVar63 = gen_bits2f(uVar58 | uVar57);
      fVar67 = gen_bits2f(uVar57 | uVar58);
      fVar71 = gen_bits2f(uVar60 | uVar59);
      fVar75 = gen_bits2f(uVar59 | uVar60);
      fVar25 = pfVar55[4];
      fVar26 = pfVar55[5];
      fVar27 = pfVar55[6];
      fVar28 = pfVar55[7];
      uVar57 = *(uint *)&REFG(undefined, 0x1134d58) & uVar4 | *(uint *)&REFG(undefined, 0x1134d50) & uVar2;
      uVar58 = *(uint *)&REFG(undefined, 0x1134d5c) & uVar5 | *(uint *)&REFG(undefined, 0x1134d54) & uVar3;
      uVar59 = *(uint *)&REFG(undefined, 0x1134d50) & uVar2 | *(uint *)&REFG(undefined, 0x1134d58) & uVar4;
      uVar60 = *(uint *)&REFG(undefined, 0x1134d54) & uVar3 | *(uint *)&REFG(undefined, 0x1134d5c) & uVar5;
      fVar64 = gen_bits2f(uVar58 | uVar57);
      fVar68 = gen_bits2f(uVar57 | uVar58);
      fVar72 = gen_bits2f(uVar60 | uVar59);
      fVar76 = gen_bits2f(uVar59 | uVar60);
      fVar29 = pfVar55[0x10];
      fVar30 = pfVar55[0x11];
      fVar31 = pfVar55[0x12];
      fVar32 = pfVar55[0x13];
      pfVar54[-0x10] = pfVar55[-0x10] * fVar61;
      pfVar54[-0xf] = fVar6 * fVar65;
      pfVar54[-0xe] = fVar7 * fVar69;
      pfVar54[-0xd] = fVar8 * fVar73;
      pfVar54[-0x14] = fVar61 * fVar33;
      pfVar54[-0x13] = fVar65 * fVar34;
      pfVar54[-0x12] = fVar69 * fVar35;
      pfVar54[-0x11] = fVar73 * fVar36;
      pfVar54[-0xc] = fVar9 * fVar61;
      pfVar54[-0xb] = fVar10 * fVar65;
      pfVar54[-10] = fVar11 * fVar69;
      pfVar54[-9] = fVar12 * fVar73;
      pfVar54[-4] = fVar13 * fVar62;
      pfVar54[-3] = fVar14 * fVar66;
      pfVar54[-2] = fVar15 * fVar70;
      pfVar54[-1] = fVar16 * fVar74;
      pfVar54[-8] = fVar62 * fVar21;
      pfVar54[-7] = fVar66 * fVar22;
      pfVar54[-6] = fVar70 * fVar23;
      pfVar54[-5] = fVar74 * fVar24;
      *pfVar54 = fVar17 * fVar62;
      pfVar54[1] = fVar18 * fVar66;
      pfVar54[2] = fVar19 * fVar70;
      pfVar54[3] = fVar20 * fVar74;
      pfVar54[8] = fVar37 * fVar63;
      pfVar54[9] = fVar38 * fVar67;
      pfVar54[10] = fVar39 * fVar71;
      pfVar54[0xb] = fVar40 * fVar75;
      pfVar54[4] = fVar63 * fVar25;
      pfVar54[5] = fVar67 * fVar26;
      pfVar54[6] = fVar71 * fVar27;
      pfVar54[7] = fVar75 * fVar28;
      pfVar54[0xc] = fVar41 * fVar63;
      pfVar54[0xd] = fVar42 * fVar67;
      pfVar54[0xe] = fVar43 * fVar71;
      pfVar54[0xf] = fVar44 * fVar75;
      pfVar54[0x10] = fVar64 * fVar29;
      pfVar54[0x11] = fVar68 * fVar30;
      pfVar54[0x12] = fVar72 * fVar31;
      pfVar54[0x13] = fVar76 * fVar32;
      pfVar54[0x14] = fVar45 * fVar64;
      pfVar54[0x15] = fVar46 * fVar68;
      pfVar54[0x16] = fVar47 * fVar72;
      pfVar54[0x17] = fVar48 * fVar76;
      pfVar54[0x18] = fVar49 * fVar64;
      pfVar54[0x19] = fVar50 * fVar68;
      pfVar54[0x1a] = fVar51 * fVar72;
      pfVar54[0x1b] = fVar52 * fVar76;
      *puVar56 = uVar2;
      puVar56[1] = uVar3;
      puVar56[2] = uVar4;
      puVar56[3] = uVar5;
      puVar56 = puVar56 + 4;
      pfVar55 = pfVar55 + 0x30;
      pfVar54 = pfVar54 + 0x30;
      iVar53 = iVar53 + -1;
    } while (iVar53 != 0);
  }
  return 0;
}

/* ref: FUN_00d3b570 */
uint F_00d3b570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3b570u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  LPVOID this_00;
  uint uVar2;
  int iVar3;
  
  this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  iVar1 = *(int *)((int)this_00 + 0xc);
  iVar3 = param_1 * 0x80;
  uVar2 = iVar1 + iVar3;
  if ((iVar3 <= *(int *)((int)this_00 + 8)) && (uVar2 <= *(uint *)((int)this_00 + 0x10))) {
    *(uint *)((int)this_00 + 0xc) = uVar2;
    *(int *)this = iVar1;
    *(int *)((int)this + 4) = param_1;
    return (uint)this;
  }
  uVar2 = F_00d94390(this_00,iVar3);
  *(uint *)this = uVar2;
  *(int *)((int)this + 4) = param_1;
  return (uint)this;
}

/* ref: FUN_00d3b620 */
uint F_00d3b620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3b620u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  LPVOID this_00;
  uint uVar2;
  uint uVar3;
  
  this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  iVar1 = *(int *)((int)this_00 + 0xc);
  uVar3 = param_1 * 0x54 + 0x7fU & 0xffffff80;
  uVar2 = iVar1 + uVar3;
  if (((int)uVar3 <= *(int *)((int)this_00 + 8)) && (uVar2 <= *(uint *)((int)this_00 + 0x10))) {
    *(uint *)((int)this_00 + 0xc) = uVar2;
    *(int *)this = iVar1;
    *(int *)((int)this + 4) = param_1;
    return (uint)this;
  }
  uVar2 = F_00d94390(this_00,uVar3);
  *(uint *)this = uVar2;
  *(int *)((int)this + 4) = param_1;
  return (uint)this;
}

/* ref: FUN_00d3b6d0 */
uint F_00d3b6d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd3b6d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3 | 0x80000000;
  return param_3 | 0x80000000;
}

/* ref: FUN_00d3b6f0 */
unsigned int F_00d3b6f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xd3b6f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  int param_6 = (int)gen_a5;
  float * pfVar1;
  float * pfVar2;
  float fVar3;
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
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  int iVar101;
  float * pfVar102;
  float * pfVar103;
  float * pfVar104;
  uint uVar105;
  uint uVar106;
  uint uVar107;
  uint uVar108;
  uint uVar109;
  uint uVar110;
  uint uVar111;
  uint uVar112;
  uint uVar113;
  uint uVar114;
  uint uVar115;
  uint uVar116;
  uint uVar117;
  uint uVar118;
  uint uVar119;
  uint uVar120;
  float fVar121;
  float fVar122;
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar127;
  float fVar128;
  float fVar129;
  uint uVar130;
  float fVar131;
  uint uVar132;
  uint uVar133;
  uint uVar134;
  float fVar135;
  uint uVar136;
  float fVar137;
  uint uVar138;
  float fVar139;
  uint uVar140;
  float fVar141;
  uint uVar142;
  float fVar143;
  uint uVar144;
  float fVar145;
  uint uVar146;
  float fVar147;
  uint uVar148;
  float fVar149;
  uint uVar150;
  float fVar151;
  uint uVar152;
  float fVar153;
  uint uVar154;
  float fVar155;
  uint uVar156;
  float fVar157;
  uint uVar158;
  float fVar159;
  float fVar160;
  float fVar161;
  float fVar162;
  int local_14;
  
  fVar26 = *param_5;
  fVar27 = param_5[1];
  fVar28 = param_5[2];
  fVar29 = param_5[3];
  local_14 = (int)(param_6 + 3 + (param_6 + 3 >> 0x1f & 3U)) >> 2;
  if (0 < local_14) {
    pfVar102 = (float *)(param_1 + 0x50);
    iVar101 = (param_1 - param_3) + -0x50;
    pfVar103 = (float *)(param_3 + 0x50);
    pfVar104 = param_2;
    do {
      pfVar1 = (float *)((int)pfVar103 + iVar101);
      fVar30 = pfVar1[1];
      fVar31 = pfVar1[2];
      fVar32 = pfVar1[3];
      fVar33 = pfVar102[-0x10];
      fVar34 = pfVar102[-0xf];
      fVar35 = pfVar102[-0xe];
      fVar36 = pfVar102[-0xd];
      fVar37 = pfVar102[-8];
      fVar38 = pfVar102[-7];
      fVar39 = pfVar102[-6];
      fVar40 = pfVar102[-5];
      fVar41 = pfVar102[-4];
      fVar42 = pfVar102[-3];
      fVar43 = pfVar102[-2];
      fVar44 = pfVar102[-1];
      fVar45 = *pfVar102;
      fVar46 = pfVar102[1];
      fVar47 = pfVar102[2];
      fVar48 = pfVar102[3];
      fVar49 = pfVar102[4];
      fVar50 = pfVar102[5];
      fVar51 = pfVar102[6];
      fVar52 = pfVar102[7];
      fVar53 = pfVar102[8];
      fVar54 = pfVar102[9];
      fVar55 = pfVar102[10];
      fVar56 = pfVar102[0xb];
      fVar57 = pfVar102[0xc];
      fVar58 = pfVar102[0xd];
      fVar59 = pfVar102[0xe];
      fVar60 = pfVar102[0xf];
      fVar61 = pfVar102[0x10];
      fVar62 = pfVar102[0x11];
      fVar63 = pfVar102[0x12];
      fVar64 = pfVar102[0x13];
      fVar65 = pfVar102[0x14];
      fVar66 = pfVar102[0x15];
      fVar67 = pfVar102[0x16];
      fVar68 = pfVar102[0x17];
      fVar69 = pfVar102[0x18];
      fVar70 = pfVar102[0x19];
      fVar71 = pfVar102[0x1a];
      fVar72 = pfVar102[0x1b];
      fVar73 = pfVar103[-0x10];
      fVar74 = pfVar103[-0xf];
      fVar75 = pfVar103[-0xe];
      fVar76 = pfVar103[-0xd];
      pfVar2 = ((float *)GEN_TOP(((param_4 - (int)param_2) + (int)pfVar104)));
      fVar125 = *pfVar2 * fVar26;
      fVar126 = pfVar2[1] * fVar27;
      fVar127 = pfVar2[2] * fVar28;
      fVar128 = pfVar2[3] * fVar29;
      fVar77 = pfVar103[-8];
      fVar78 = pfVar103[-7];
      fVar79 = pfVar103[-6];
      fVar80 = pfVar103[-5];
      fVar81 = pfVar103[-4];
      fVar82 = pfVar103[-3];
      fVar83 = pfVar103[-2];
      fVar84 = pfVar103[-1];
      fVar85 = pfVar103[4];
      fVar86 = pfVar103[5];
      fVar87 = pfVar103[6];
      fVar88 = pfVar103[7];
      fVar3 = pfVar103[-0xc];
      fVar4 = pfVar103[-0xb];
      fVar5 = pfVar103[-10];
      fVar6 = pfVar103[-9];
      fVar89 = pfVar103[8];
      fVar90 = pfVar103[9];
      fVar91 = pfVar103[10];
      fVar92 = pfVar103[0xb];
      fVar93 = pfVar103[0x10];
      fVar94 = pfVar103[0x11];
      fVar95 = pfVar103[0x12];
      fVar96 = pfVar103[0x13];
      fVar97 = pfVar103[0x14];
      fVar98 = pfVar103[0x15];
      fVar99 = pfVar103[0x16];
      fVar100 = pfVar103[0x17];
      uVar105 = *(uint *)&REFG(undefined, 0x1134d28) & (uint)gen_fl2bits(fVar127) |
                *(uint *)&REFG(undefined, 0x1134d20) & (uint)gen_fl2bits(fVar125);
      uVar106 = *(uint *)&REFG(undefined, 0x1134d2c) & (uint)gen_fl2bits(fVar128) |
                *(uint *)&REFG(undefined, 0x1134d24) & (uint)gen_fl2bits(fVar126);
      uVar107 = *(uint *)&REFG(undefined, 0x1134d20) & (uint)gen_fl2bits(fVar125) |
                *(uint *)&REFG(undefined, 0x1134d28) & (uint)gen_fl2bits(fVar127);
      uVar108 = *(uint *)&REFG(undefined, 0x1134d24) & (uint)gen_fl2bits(fVar126) |
                *(uint *)&REFG(undefined, 0x1134d2c) & (uint)gen_fl2bits(fVar128);
      fVar135 = gen_bits2f(uVar106 | uVar105);
      fVar137 = gen_bits2f(uVar105 | uVar106);
      fVar139 = gen_bits2f(uVar108 | uVar107);
      fVar141 = gen_bits2f(uVar107 | uVar108);
      fVar7 = *pfVar103;
      fVar8 = pfVar103[1];
      fVar9 = pfVar103[2];
      fVar10 = pfVar103[3];
      fVar11 = pfVar103[0xc];
      fVar12 = pfVar103[0xd];
      fVar13 = pfVar103[0xe];
      fVar14 = pfVar103[0xf];
      fVar15 = pfVar103[0x18];
      fVar16 = pfVar103[0x19];
      fVar17 = pfVar103[0x1a];
      fVar18 = pfVar103[0x1b];
      fVar19 = pfVar102[-0xc];
      fVar20 = pfVar102[-0xb];
      fVar21 = pfVar102[-10];
      fVar22 = pfVar102[-9];
      fVar23 = pfVar103[-0x13];
      fVar24 = pfVar103[-0x12];
      fVar25 = pfVar103[-0x11];
      fVar121 = fVar73 * fVar33;
      fVar122 = fVar74 * fVar34;
      fVar123 = fVar75 * fVar35;
      fVar124 = fVar76 * fVar36;
      fVar129 = fVar123 + fVar121;
      fVar131 = fVar124 + fVar122;
      fVar121 = fVar121 + fVar123;
      fVar122 = fVar122 + fVar124;
      uVar105 = -(uint)(fVar131 + fVar129 < 0.0);
      uVar109 = -(uint)(fVar129 + fVar131 < 0.0);
      uVar113 = -(uint)(fVar122 + fVar121 < 0.0);
      uVar117 = -(uint)(fVar121 + fVar122 < 0.0);
      uVar130 = (uint)gen_fl2bits(fVar73) ^ *(uint *)&REFG(undefined, 0x10ab9c0);
      uVar132 = (uint)gen_fl2bits(fVar74) ^ *(uint *)&REFG(undefined, 0x10ab9c4);
      uVar133 = (uint)gen_fl2bits(fVar75) ^ *(uint *)&REFG(undefined, 0x10ab9c8);
      uVar134 = (uint)gen_fl2bits(fVar76) ^ *(uint *)&REFG(undefined, 0x10ab9cc);
      uVar106 = *(uint *)&REFG(undefined, 0x1134d38) & (uint)gen_fl2bits(fVar127) |
                *(uint *)&REFG(undefined, 0x1134d30) & (uint)gen_fl2bits(fVar125);
      uVar107 = *(uint *)&REFG(undefined, 0x1134d3c) & (uint)gen_fl2bits(fVar128) |
                *(uint *)&REFG(undefined, 0x1134d34) & (uint)gen_fl2bits(fVar126);
      uVar108 = *(uint *)&REFG(undefined, 0x1134d30) & (uint)gen_fl2bits(fVar125) |
                *(uint *)&REFG(undefined, 0x1134d38) & (uint)gen_fl2bits(fVar127);
      uVar110 = *(uint *)&REFG(undefined, 0x1134d34) & (uint)gen_fl2bits(fVar126) |
                *(uint *)&REFG(undefined, 0x1134d3c) & (uint)gen_fl2bits(fVar128);
      fVar143 = gen_bits2f(uVar107 | uVar106);
      fVar145 = gen_bits2f(uVar106 | uVar107);
      fVar147 = gen_bits2f(uVar110 | uVar108);
      fVar149 = gen_bits2f(uVar108 | uVar110);
      fVar121 = fVar81 * fVar41;
      fVar122 = fVar82 * fVar42;
      fVar123 = fVar83 * fVar43;
      fVar124 = fVar84 * fVar44;
      fVar129 = fVar123 + fVar121;
      fVar131 = fVar124 + fVar122;
      fVar121 = fVar121 + fVar123;
      fVar122 = fVar122 + fVar124;
      uVar106 = -(uint)(fVar131 + fVar129 < 0.0);
      uVar110 = -(uint)(fVar129 + fVar131 < 0.0);
      uVar114 = -(uint)(fVar122 + fVar121 < 0.0);
      uVar118 = -(uint)(fVar121 + fVar122 < 0.0);
      uVar136 = (uint)gen_fl2bits(fVar81) ^ *(uint *)&REFG(undefined, 0x10ab9c0);
      uVar138 = (uint)gen_fl2bits(fVar82) ^ *(uint *)&REFG(undefined, 0x10ab9c4);
      uVar140 = (uint)gen_fl2bits(fVar83) ^ *(uint *)&REFG(undefined, 0x10ab9c8);
      uVar142 = (uint)gen_fl2bits(fVar84) ^ *(uint *)&REFG(undefined, 0x10ab9cc);
      uVar107 = *(uint *)&REFG(undefined, 0x1134d48) & (uint)gen_fl2bits(fVar127) |
                *(uint *)&REFG(undefined, 0x1134d40) & (uint)gen_fl2bits(fVar125);
      uVar108 = *(uint *)&REFG(undefined, 0x1134d4c) & (uint)gen_fl2bits(fVar128) |
                *(uint *)&REFG(undefined, 0x1134d44) & (uint)gen_fl2bits(fVar126);
      uVar111 = *(uint *)&REFG(undefined, 0x1134d40) & (uint)gen_fl2bits(fVar125) |
                *(uint *)&REFG(undefined, 0x1134d48) & (uint)gen_fl2bits(fVar127);
      uVar112 = *(uint *)&REFG(undefined, 0x1134d44) & (uint)gen_fl2bits(fVar126) |
                *(uint *)&REFG(undefined, 0x1134d4c) & (uint)gen_fl2bits(fVar128);
      fVar151 = gen_bits2f(uVar108 | uVar107);
      fVar153 = gen_bits2f(uVar107 | uVar108);
      fVar155 = gen_bits2f(uVar112 | uVar111);
      fVar157 = gen_bits2f(uVar111 | uVar112);
      fVar121 = fVar89 * fVar53;
      fVar122 = fVar90 * fVar54;
      fVar123 = fVar91 * fVar55;
      fVar124 = fVar92 * fVar56;
      fVar129 = fVar123 + fVar121;
      fVar131 = fVar124 + fVar122;
      fVar121 = fVar121 + fVar123;
      fVar122 = fVar122 + fVar124;
      uVar107 = -(uint)(fVar131 + fVar129 < 0.0);
      uVar111 = -(uint)(fVar129 + fVar131 < 0.0);
      uVar115 = -(uint)(fVar122 + fVar121 < 0.0);
      uVar119 = -(uint)(fVar121 + fVar122 < 0.0);
      uVar144 = (uint)gen_fl2bits(fVar89) ^ *(uint *)&REFG(undefined, 0x10ab9c0);
      uVar146 = (uint)gen_fl2bits(fVar90) ^ *(uint *)&REFG(undefined, 0x10ab9c4);
      uVar148 = (uint)gen_fl2bits(fVar91) ^ *(uint *)&REFG(undefined, 0x10ab9c8);
      uVar150 = (uint)gen_fl2bits(fVar92) ^ *(uint *)&REFG(undefined, 0x10ab9cc);
      uVar108 = *(uint *)&REFG(undefined, 0x1134d58) & (uint)gen_fl2bits(fVar127) |
                *(uint *)&REFG(undefined, 0x1134d50) & (uint)gen_fl2bits(fVar125);
      uVar112 = *(uint *)&REFG(undefined, 0x1134d5c) & (uint)gen_fl2bits(fVar128) |
                *(uint *)&REFG(undefined, 0x1134d54) & (uint)gen_fl2bits(fVar126);
      uVar116 = *(uint *)&REFG(undefined, 0x1134d50) & (uint)gen_fl2bits(fVar125) |
                *(uint *)&REFG(undefined, 0x1134d58) & (uint)gen_fl2bits(fVar127);
      uVar120 = *(uint *)&REFG(undefined, 0x1134d54) & (uint)gen_fl2bits(fVar126) |
                *(uint *)&REFG(undefined, 0x1134d5c) & (uint)gen_fl2bits(fVar128);
      fVar159 = gen_bits2f(uVar112 | uVar108);
      fVar160 = gen_bits2f(uVar108 | uVar112);
      fVar161 = gen_bits2f(uVar120 | uVar116);
      fVar162 = gen_bits2f(uVar116 | uVar120);
      fVar121 = fVar97 * fVar65;
      fVar122 = fVar98 * fVar66;
      fVar123 = fVar99 * fVar67;
      fVar124 = fVar100 * fVar68;
      fVar129 = fVar123 + fVar121;
      fVar131 = fVar124 + fVar122;
      fVar121 = fVar121 + fVar123;
      fVar122 = fVar122 + fVar124;
      uVar108 = -(uint)(fVar131 + fVar129 < 0.0);
      uVar112 = -(uint)(fVar129 + fVar131 < 0.0);
      uVar116 = -(uint)(fVar122 + fVar121 < 0.0);
      uVar120 = -(uint)(fVar121 + fVar122 < 0.0);
      uVar152 = (uint)gen_fl2bits(fVar97) ^ *(uint *)&REFG(undefined, 0x10ab9c0);
      uVar154 = (uint)gen_fl2bits(fVar98) ^ *(uint *)&REFG(undefined, 0x10ab9c4);
      uVar156 = (uint)gen_fl2bits(fVar99) ^ *(uint *)&REFG(undefined, 0x10ab9c8);
      uVar158 = (uint)gen_fl2bits(fVar100) ^ *(uint *)&REFG(undefined, 0x10ab9cc);
      pfVar2 = (float *)((int)pfVar103 + iVar101);
      *pfVar2 = fVar135 * pfVar103[-0x14] + *pfVar1;
      pfVar2[1] = fVar137 * fVar23 + fVar30;
      pfVar2[2] = fVar139 * fVar24 + fVar31;
      pfVar2[3] = fVar141 * fVar25 + fVar32;
      pfVar102[-0xc] = fVar3 * fVar135 + fVar19;
      pfVar102[-0xb] = fVar4 * fVar137 + fVar20;
      pfVar102[-10] = fVar5 * fVar139 + fVar21;
      pfVar102[-9] = fVar6 * fVar141 + fVar22;
      pfVar102[-0x10] =
           gen_bits2f(uVar130 & uVar105 | ~uVar105 & (uint)gen_fl2bits(fVar73)) * fVar135 + fVar33;
      pfVar102[-0xf] =
           gen_bits2f(uVar132 & uVar109 | ~uVar109 & (uint)gen_fl2bits(fVar74)) * fVar137 + fVar34;
      pfVar102[-0xe] =
           gen_bits2f(uVar133 & uVar113 | ~uVar113 & (uint)gen_fl2bits(fVar75)) * fVar139 + fVar35;
      pfVar102[-0xd] =
           gen_bits2f(uVar134 & uVar117 | ~uVar117 & (uint)gen_fl2bits(fVar76)) * fVar141 + fVar36;
      pfVar102[-8] = fVar143 * fVar77 + fVar37;
      pfVar102[-7] = fVar145 * fVar78 + fVar38;
      pfVar102[-6] = fVar147 * fVar79 + fVar39;
      pfVar102[-5] = fVar149 * fVar80 + fVar40;
      *pfVar102 = fVar7 * fVar143 + fVar45;
      pfVar102[1] = fVar8 * fVar145 + fVar46;
      pfVar102[2] = fVar9 * fVar147 + fVar47;
      pfVar102[3] = fVar10 * fVar149 + fVar48;
      pfVar102[-4] = gen_bits2f(uVar136 & uVar106 | ~uVar106 & (uint)gen_fl2bits(fVar81)) * fVar143
                     + fVar41;
      pfVar102[-3] = gen_bits2f(uVar138 & uVar110 | ~uVar110 & (uint)gen_fl2bits(fVar82)) * fVar145
                     + fVar42;
      pfVar102[-2] = gen_bits2f(uVar140 & uVar114 | ~uVar114 & (uint)gen_fl2bits(fVar83)) * fVar147
                     + fVar43;
      pfVar102[-1] = gen_bits2f(uVar142 & uVar118 | ~uVar118 & (uint)gen_fl2bits(fVar84)) * fVar149
                     + fVar44;
      pfVar102[4] = fVar151 * fVar85 + fVar49;
      pfVar102[5] = fVar153 * fVar86 + fVar50;
      pfVar102[6] = fVar155 * fVar87 + fVar51;
      pfVar102[7] = fVar157 * fVar88 + fVar52;
      pfVar102[0xc] = fVar11 * fVar151 + fVar57;
      pfVar102[0xd] = fVar12 * fVar153 + fVar58;
      pfVar102[0xe] = fVar13 * fVar155 + fVar59;
      pfVar102[0xf] = fVar14 * fVar157 + fVar60;
      pfVar102[8] = gen_bits2f(uVar144 & uVar107 | ~uVar107 & (uint)gen_fl2bits(fVar89)) * fVar151 +
                    fVar53;
      pfVar102[9] = gen_bits2f(uVar146 & uVar111 | ~uVar111 & (uint)gen_fl2bits(fVar90)) * fVar153 +
                    fVar54;
      pfVar102[10] = gen_bits2f(uVar148 & uVar115 | ~uVar115 & (uint)gen_fl2bits(fVar91)) * fVar155
                     + fVar55;
      pfVar102[0xb] =
           gen_bits2f(uVar150 & uVar119 | ~uVar119 & (uint)gen_fl2bits(fVar92)) * fVar157 + fVar56;
      pfVar102[0x10] = fVar159 * fVar93 + fVar61;
      pfVar102[0x11] = fVar160 * fVar94 + fVar62;
      pfVar102[0x12] = fVar161 * fVar95 + fVar63;
      pfVar102[0x13] = fVar162 * fVar96 + fVar64;
      pfVar102[0x18] = fVar15 * fVar159 + fVar69;
      pfVar102[0x19] = fVar16 * fVar160 + fVar70;
      pfVar102[0x1a] = fVar17 * fVar161 + fVar71;
      pfVar102[0x1b] = fVar18 * fVar162 + fVar72;
      pfVar102[0x14] =
           gen_bits2f(uVar152 & uVar108 | ~uVar108 & (uint)gen_fl2bits(fVar97)) * fVar159 + fVar65;
      pfVar102[0x15] =
           gen_bits2f(uVar154 & uVar112 | ~uVar112 & (uint)gen_fl2bits(fVar98)) * fVar160 + fVar66;
      pfVar102[0x16] =
           gen_bits2f(uVar156 & uVar116 | ~uVar116 & (uint)gen_fl2bits(fVar99)) * fVar161 + fVar67;
      pfVar102[0x17] =
           gen_bits2f(uVar158 & uVar120 | ~uVar120 & (uint)gen_fl2bits(fVar100)) * fVar162 + fVar68;
      *pfVar104 = *pfVar104 + fVar125;
      pfVar104[1] = pfVar104[1] + fVar126;
      pfVar104[2] = pfVar104[2] + fVar127;
      pfVar104[3] = pfVar104[3] + fVar128;
      pfVar104 = pfVar104 + 4;
      pfVar103 = pfVar103 + 0x30;
      pfVar102 = pfVar102 + 0x30;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  return 0;
}

/* ref: FUN_00d3bae0 */
uint F_00d3bae0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3bae0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d3bb20 */
uint F_00d3bb20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3bb20u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d3bb60 */
uint F_00d3bb60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3bb60u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d3bba0 */
uint F_00d3bba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3bba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)this;
  uVar2 = *(uint *)((int)this + 4) >> 1;
  param_1[1] = uVar2;
  uVar2 = uVar2 | 0x80000000;
  *param_1 = uVar1;
  param_1[2] = uVar2;
  return uVar2;
}

/* ref: FUN_00d3bbc0 */
uint F_00d3bbc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3bbc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)this;
  uVar2 = *(uint *)((int)this + 4) >> 3;
  param_1[1] = uVar2;
  uVar2 = uVar2 | 0x80000000;
  *param_1 = uVar1;
  param_1[2] = uVar2;
  return uVar2;
}

/* ref: FUN_00d3bbe0 */
uint F_00d3bbe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3bbe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)this;
  uVar2 = *(uint *)((int)this + 4) / 0x30;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[2] = uVar2 | 0x80000000;
  return (uint)param_1;
}

/* ref: FUN_00d3bc10 */
uint F_00d3bc10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd3bc10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3 | 0x80000000;
  return param_3 | 0x80000000;
}

/* ref: FUN_00d3bc30 */
uint F_00d3bc30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd3bc30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3 | 0x80000000;
  return param_3 | 0x80000000;
}

/* ref: FUN_00d3bc50 */
uint F_00d3bc50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd3bc50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3 | 0x80000000;
  return param_3 | 0x80000000;
}

/* ref: FUN_00d3bc70 */
uint F_00d3bc70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd3bc70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3 | 0x80000000;
  return param_3 | 0x80000000;
}

/* ref: FUN_00d3bc90 */
uint F_00d3bc90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3bc90u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d3bca0 */
uint F_00d3bca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3bca0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d3bcb0 */
uint F_00d3bcb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xd3bcb0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 0x10) = param_4;
  *(undefined4 *)((int)this + 0xc) = param_3;
  *(undefined4 *)((int)this + 0x20) = param_6;
  *(undefined4 *)((int)this + 0x1c) = param_5;
  *(undefined4 *)((int)this + 0x28) = param_8;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 0x24) = param_7;
  *(undefined2 *)((int)this + 0x2c) = 0;
  *(undefined1 *)((int)this + 0x2e) = 0;
  uVar1 = F_00d36890(param_1);
  *(uint *)((int)this + 8) = uVar1;
  uVar1 = F_00d36890(*(undefined4 *)((int)this + 0xc));
  *(uint *)((int)this + 0x14) = uVar1;
  return (uint)this;
}

/* ref: FUN_00d3be30 */
uint F_00d3be30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3be30u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d3be40 */
uint F_00d3be40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3be40u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d3be50 */
uint F_00d3be50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3be50u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)*param_1;
  uVar2 = (uint)((undefined4 *)*param_1)[1] >> 1;
  param_3[1] = uVar2;
  param_3[2] = uVar2 | 0x80000000;
  *param_3 = uVar1;
  *param_1 = *param_1 + 8;
  *param_2 = *param_2 + -1;
  return (uint)param_2;
}

/* ref: FUN_00d3be80 */
uint F_00d3be80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3be80u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)*param_1;
  uVar2 = (uint)((undefined4 *)*param_1)[1] >> 3;
  param_3[1] = uVar2;
  param_3[2] = uVar2 | 0x80000000;
  *param_3 = uVar1;
  *param_1 = *param_1 + 8;
  *param_2 = *param_2 + -1;
  return (uint)param_2;
}

/* ref: FUN_00d3beb0 */
uint F_00d3beb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3beb0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)*param_1;
  uVar2 = (uint)((undefined4 *)*param_1)[1] / 0x30;
  param_3[1] = uVar2;
  *param_3 = uVar1;
  param_3[2] = uVar2 | 0x80000000;
  *param_1 = *param_1 + 8;
  *param_2 = *param_2 + -1;
  return (uint)param_2;
}

/* ref: FUN_00d3bef0 */
uint F_00d3bef0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3bef0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d3bf30 */
uint F_00d3bf30(unsigned int gen_a0)
{
  GEN_ENTER(0xd3bf30u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d3bf70 */
uint F_00d3bf70(unsigned int gen_a0)
{
  GEN_ENTER(0xd3bf70u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d3bfb0 */
unsigned int F_00d3bfb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd3bfb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
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
  undefined1 in_XMM3 [16] = {0};
  undefined1 auVar17 [16];
  
  fVar7 = param_2[9];
  fVar9 = param_2[10];
  fVar8 = param_2[0xb];
  fVar10 = param_1[9];
  fVar5 = param_1[10];
  fVar6 = param_1[0xb];
  fVar11 = param_3[1];
  fVar13 = param_3[2];
  fVar12 = param_3[3];
  fVar14 = param_1[9];
  fVar15 = param_1[10];
  fVar16 = param_1[0xb];
  *(float *)((int)this + 0x20) = (param_2[8] - param_1[8]) * *param_3 + param_1[8];
  *(float *)((int)this + 0x24) = (fVar7 - fVar10) * fVar11 + fVar14;
  *(float *)((int)this + 0x28) = (fVar9 - fVar5) * fVar13 + fVar15;
  *(float *)((int)this + 0x2c) = (fVar8 - fVar6) * fVar12 + fVar16;
  fVar7 = param_2[1];
  fVar9 = param_2[2];
  fVar8 = param_2[3];
  fVar10 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  fVar11 = param_3[1];
  fVar13 = param_3[2];
  fVar12 = param_3[3];
  fVar14 = param_1[1];
  fVar15 = param_1[2];
  fVar16 = param_1[3];
  *(float *)this = (*param_2 - *param_1) * *param_3 + *param_1;
  *(float *)((int)this + 4) = (fVar7 - fVar10) * fVar11 + fVar14;
  *(float *)((int)this + 8) = (fVar9 - fVar5) * fVar13 + fVar15;
  *(float *)((int)this + 0xc) = (fVar8 - fVar6) * fVar12 + fVar16;
  fVar5 = param_2[4] * param_1[4];
  fVar6 = param_2[5] * param_1[5];
  fVar7 = param_2[6] * param_1[6];
  fVar9 = param_2[7] * param_1[7];
  fVar11 = fVar7 + fVar5;
  fVar13 = fVar9 + fVar6;
  fVar5 = fVar5 + fVar7;
  fVar6 = fVar6 + fVar9;
  fVar7 = *param_3;
  fVar9 = param_3[1];
  fVar8 = param_3[2];
  fVar10 = param_3[3];
  uVar1 = -(uint)(fVar13 + fVar11 < 0.0);
  uVar2 = -(uint)(fVar11 + fVar13 < 0.0);
  uVar3 = -(uint)(fVar6 + fVar5 < 0.0);
  uVar4 = -(uint)(fVar5 + fVar6 < 0.0);
  fVar7 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar7) & uVar1 | ~uVar1 & (uint)gen_fl2bits(fVar7)) *
          param_2[4] + (*(float *)&REFG(undefined, 0x1138af0) - fVar7) * param_1[4];
  fVar9 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar9) & uVar2 | ~uVar2 & (uint)gen_fl2bits(fVar9)) *
          param_2[5] + (*(float *)&REFG(undefined, 0x1138af4) - fVar9) * param_1[5];
  fVar8 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar8) & uVar3 | ~uVar3 & (uint)gen_fl2bits(fVar8)) *
          param_2[6] + (*(float *)&REFG(undefined, 0x1138af8) - fVar8) * param_1[6];
  fVar10 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar10) & uVar4 | ~uVar4 & (uint)gen_fl2bits(fVar10))
           * param_2[7] + (*(float *)&REFG(undefined, 0x1138afc) - fVar10) * param_1[7];
  fVar5 = fVar8 * fVar8 + fVar7 * fVar7;
  fVar6 = fVar10 * fVar10 + fVar9 * fVar9;
  fVar11 = fVar7 * fVar7 + fVar8 * fVar8;
  fVar13 = fVar9 * fVar9 + fVar10 * fVar10;
  fVar12 = fVar6 + fVar5;
  fVar5 = fVar5 + fVar6;
  fVar6 = fVar13 + fVar11;
  fVar11 = fVar11 + fVar13;
  (*(undefined4 *)((char *)&auVar17 + 4)) = (undefined4)gen_fl2bits(fVar5);
  (*(undefined4 *)((char *)&auVar17 + 0)) = (undefined4)gen_fl2bits(fVar12);
  (*(undefined4 *)((char *)&auVar17 + 8)) = (undefined4)gen_fl2bits(fVar6);
  (*(undefined4 *)((char *)&auVar17 + 12)) = (undefined4)gen_fl2bits(fVar11);
  gen_rsqrtps(&(auVar17), &(in_XMM3), &(auVar17));
  fVar16 = (*(float *)((char *)&auVar17 + 0));
  fVar13 = (*(float *)((char *)&auVar17 + 4));
  fVar14 = (*(float *)((char *)&auVar17 + 8));
  fVar15 = (*(float *)((char *)&auVar17 + 12));
  fVar5 = *(float *)&REFG(undefined, 0x1134d84) - (fVar13 * fVar5) * fVar13;
  fVar6 = *(float *)&REFG(undefined, 0x1134d88) - (fVar14 * fVar6) * fVar14;
  fVar11 = *(float *)&REFG(undefined, 0x1134d8c) - (fVar15 * fVar11) * fVar15;
  fVar13 = *(float *)&REFG(undefined, 0x1134d94) * fVar13;
  fVar14 = *(float *)&REFG(undefined, 0x1134d98) * fVar14;
  fVar15 = *(float *)&REFG(undefined, 0x1134d9c) * fVar15;
  *(float *)((int)this + 0x10) =
       ((*(float *)&REFG(undefined, 0x1134d80) - (fVar16 * fVar12) * fVar16) * (*(float *)&REFG(undefined, 0x1134d90) * fVar16))
       * fVar7;
  *(float *)((int)this + 0x14) = (fVar5 * fVar13) * fVar9;
  *(float *)((int)this + 0x18) = (fVar6 * fVar14) * fVar8;
  *(float *)((int)this + 0x1c) = (fVar11 * fVar15) * fVar10;
  return 0;
}

/* ref: FUN_00d3c080 */
uint F_00d3c080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3c080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 4);
  uVar1 = *(undefined4 *)this;
  param_1[1] = uVar2;
  uVar2 = uVar2 | 0x80000000;
  *param_1 = uVar1;
  param_1[2] = uVar2;
  return uVar2;
}

/* ref: FUN_00d3c0a0 */
uint F_00d3c0a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3c0a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)this;
  uVar2 = *(uint *)((int)this + 4) >> 1;
  param_1[1] = uVar2;
  uVar2 = uVar2 | 0x80000000;
  *param_1 = uVar1;
  param_1[2] = uVar2;
  return uVar2;
}

/* ref: FUN_00d3c0c0 */
uint F_00d3c0c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3c0c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)this;
  uVar2 = *(uint *)((int)this + 4) >> 6;
  param_1[1] = uVar2;
  uVar2 = uVar2 | 0x80000000;
  *param_1 = uVar1;
  param_1[2] = uVar2;
  return uVar2;
}

/* ref: FUN_00d3c0e0 */
uint F_00d3c0e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3c0e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)this;
  uVar2 = *(uint *)((int)this + 4) / 0x70;
  param_1[1] = uVar2;
  param_1[2] = uVar2 | 0x80000000;
  *param_1 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00d3c2c0 */
uint F_00d3c2c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3c2c0u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_00d94390(this_00,uVar2);
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

/* ref: FUN_00d3c330 */
uint F_00d3c330(unsigned int gen_a0)
{
  GEN_ENTER(0xd3c330u, gen_a0, 0u, 0u, 0u);
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
    F_00d945c0(this_00,iVar1,uVar3);
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

/* ref: FUN_00d3c3c0 */
uint F_00d3c3c0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3c3c0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d3c400 */
uint F_00d3c400(unsigned int gen_a0)
{
  GEN_ENTER(0xd3c400u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d3c440 */
unsigned int F_00d3c440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xd3c440u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  int param_6 = (int)gen_a5;
  float * pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  float * pfVar10;
  
  fVar2 = *param_5;
  fVar3 = param_5[1];
  fVar4 = param_5[2];
  fVar5 = param_5[3];
  iVar9 = (int)(param_6 + 3 + (param_6 + 3 >> 0x1f & 3U)) >> 2;
  if (0 < iVar9) {
    pfVar10 = param_1;
    do {
      pfVar1 = ((float *)GEN_TOP(((param_3 - (int)param_1) + (int)pfVar10)));
      fVar6 = pfVar1[1];
      fVar7 = pfVar1[2];
      fVar8 = pfVar1[3];
      *pfVar10 = *pfVar1 * fVar2;
      pfVar10[1] = fVar6 * fVar3;
      pfVar10[2] = fVar7 * fVar4;
      pfVar10[3] = fVar8 * fVar5;
      pfVar1 = ((float *)GEN_TOP(((param_2 - (int)param_1) + (int)pfVar10)));
      *pfVar1 = fVar2;
      pfVar1[1] = fVar3;
      pfVar1[2] = fVar4;
      pfVar1[3] = fVar5;
      pfVar10 = pfVar10 + 4;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  return 0;
}

/* ref: FUN_00d3c490 */
uint F_00d3c490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3c490u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = ((undefined4 *)*param_1)[1];
  uVar2 = *(undefined4 *)*param_1;
  param_3[1] = uVar1;
  param_3[2] = uVar1 | 0x80000000;
  *param_3 = uVar2;
  *param_1 = *param_1 + 8;
  *param_2 = *param_2 + -1;
  return (uint)param_2;
}

/* ref: FUN_00d3c4c0 */
uint F_00d3c4c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3c4c0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)*param_1;
  uVar2 = (uint)((undefined4 *)*param_1)[1] >> 1;
  param_3[1] = uVar2;
  param_3[2] = uVar2 | 0x80000000;
  *param_3 = uVar1;
  *param_1 = *param_1 + 8;
  *param_2 = *param_2 + -1;
  return (uint)param_2;
}

/* ref: FUN_00d3c4f0 */
uint F_00d3c4f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3c4f0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)*param_1;
  uVar2 = (uint)((undefined4 *)*param_1)[1] >> 6;
  param_3[1] = uVar2;
  param_3[2] = uVar2 | 0x80000000;
  *param_3 = uVar1;
  *param_1 = *param_1 + 8;
  *param_2 = *param_2 + -1;
  return (uint)param_2;
}

/* ref: FUN_00d3c520 */
uint F_00d3c520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3c520u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)*param_1;
  uVar2 = (uint)((undefined4 *)*param_1)[1] / 0x70;
  param_3[1] = uVar2;
  *param_3 = uVar1;
  param_3[2] = uVar2 | 0x80000000;
  *param_1 = *param_1 + 8;
  *param_2 = *param_2 + -1;
  return (uint)param_2;
}

/* ref: FUN_00d3c560 */
unsigned int F_00d3c560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd3c560u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  int param_5 = (int)gen_a4;
  int iVar1;
  float * pfVar2;
  float fVar3;
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
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  int iVar61;
  float * pfVar62;
  float * pfVar63;
  float * pfVar64;
  uint uVar65;
  uint uVar66;
  uint uVar67;
  uint uVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  undefined1 auVar96 [16];
  float fVar102;
  undefined1 auVar97 [16];
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar118;
  float fVar119;
  float fVar120;
  undefined1 auVar107 [16];
  float fVar113;
  undefined1 auVar108 [16];
  float fVar117;
  float fVar121;
  undefined1 auVar109 [16];
  float fVar122;
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar127;
  float fVar128;
  float fVar129;
  float fVar130;
  float fVar131;
  float fVar133;
  float fVar134;
  float fVar135;
  float fVar136;
  float fVar137;
  float fVar138;
  float fVar139;
  float fVar140;
  float fVar141;
  float fVar142;
  float fVar143;
  float fVar144;
  float fVar145;
  float fVar146;
  float fVar147;
  float fVar148;
  float fVar149;
  float fVar150;
  float fVar151;
  float fVar152;
  float fVar153;
  float fVar154;
  float fVar155;
  float fVar156;
  float fVar157;
  undefined1 auVar132 [16];
  float fVar158;
  float fVar159;
  float fVar160;
  float fVar161;
  float fVar165;
  float fVar166;
  float fVar168;
  float fVar169;
  float fVar170;
  float fVar172;
  float fVar173;
  float fVar174;
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  float fVar167;
  float fVar171;
  float fVar175;
  undefined1 auVar164 [16];
  float fVar176;
  
  fVar21 = *param_4;
  fVar22 = param_4[1];
  fVar23 = param_4[2];
  fVar24 = param_4[3];
  iVar61 = (int)(param_5 + 3 + (param_5 + 3 >> 0x1f & 3U)) >> 2;
  if (0 < iVar61) {
    pfVar62 = (float *)(param_1 + 0x50);
    pfVar63 = (float *)(param_2 + 0x50);
    iVar1 = (param_1 - param_2) + -0x50;
    pfVar64 = param_3;
    do {
      fVar69 = fVar21 * *pfVar64;
      fVar71 = fVar22 * pfVar64[1];
      fVar73 = fVar23 * pfVar64[2];
      fVar77 = fVar24 * pfVar64[3];
      fVar25 = pfVar63[0x18];
      fVar26 = pfVar63[0x19];
      fVar27 = pfVar63[0x1a];
      fVar28 = pfVar63[0x1b];
      pfVar2 = (float *)(iVar1 + (int)pfVar63);
      fVar12 = *pfVar2;
      fVar13 = pfVar2[1];
      fVar14 = pfVar2[2];
      fVar15 = pfVar2[3];
      fVar29 = pfVar62[-8];
      fVar30 = pfVar62[-7];
      fVar31 = pfVar62[-6];
      fVar32 = pfVar62[-5];
      fVar76 = pfVar62[-4];
      fVar106 = pfVar62[-3];
      fVar79 = pfVar62[-2];
      fVar113 = pfVar62[-1];
      fVar33 = *pfVar62;
      fVar34 = pfVar62[1];
      fVar35 = pfVar62[2];
      fVar36 = pfVar62[3];
      fVar37 = pfVar62[4];
      fVar38 = pfVar62[5];
      fVar39 = pfVar62[6];
      fVar40 = pfVar62[7];
      fVar80 = pfVar62[8];
      fVar81 = pfVar62[9];
      fVar84 = pfVar62[10];
      fVar87 = pfVar62[0xb];
      fVar41 = pfVar62[0xc];
      fVar42 = pfVar62[0xd];
      fVar43 = pfVar62[0xe];
      fVar44 = pfVar62[0xf];
      fVar45 = pfVar62[0x10];
      fVar46 = pfVar62[0x11];
      fVar47 = pfVar62[0x12];
      fVar48 = pfVar62[0x13];
      fVar85 = pfVar62[0x14];
      fVar88 = pfVar62[0x15];
      fVar90 = pfVar62[0x16];
      fVar92 = pfVar62[0x17];
      fVar49 = pfVar62[0x18];
      fVar50 = pfVar62[0x19];
      fVar51 = pfVar62[0x1a];
      fVar52 = pfVar62[0x1b];
      memcpy(&(auVar163), &(*(gen_v16 *)(pfVar63 + -0x10)), sizeof(*(gen_v16 *)(pfVar63 + -0x10)) < sizeof(auVar163) ? sizeof(*(gen_v16 *)(pfVar63 + -0x10)) : sizeof(auVar163));
      fVar3 = (*(float *)((char *)&auVar163 + 0));
      fVar5 = (*(float *)((char *)&auVar163 + 4));
      fVar9 = (*(float *)((char *)&auVar163 + 12));
      fVar74 = (*(float *)((char *)&auVar163 + 8));
      fVar122 = fVar3 * fVar12;
      fVar133 = fVar5 * fVar13;
      fVar143 = fVar74 * fVar14;
      fVar158 = gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0));
      fVar165 = gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4));
      fVar169 = gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8));
      fVar173 = gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc));
      fVar103 = pfVar62[-0x10];
      fVar110 = pfVar62[-0xf];
      fVar114 = pfVar62[-0xe];
      fVar118 = pfVar62[-0xd];
      fVar53 = pfVar63[-0xc];
      fVar54 = pfVar63[-0xb];
      fVar55 = pfVar63[-10];
      fVar56 = pfVar63[-9];
      fVar57 = *pfVar63;
      fVar58 = pfVar63[1];
      fVar59 = pfVar63[2];
      fVar60 = pfVar63[3];
      memcpy(&(auVar163), &(*(gen_v16 *)(pfVar63 + 0x14)), sizeof(*(gen_v16 *)(pfVar63 + 0x14)) < sizeof(auVar163) ? sizeof(*(gen_v16 *)(pfVar63 + 0x14)) : sizeof(auVar163));
      fVar4 = (*(float *)((char *)&auVar163 + 0));
      fVar6 = (*(float *)((char *)&auVar163 + 4));
      fVar10 = (*(float *)((char *)&auVar163 + 12));
      fVar123 = (((fVar133 + fVar122) + fVar143) * fVar3 + (fVar9 * fVar9 + fVar158) * fVar12) +
                (fVar14 * fVar5 - fVar13 * fVar74) * fVar9;
      fVar134 = (((fVar133 + fVar122) + fVar143) * fVar5 + (fVar9 * fVar9 + fVar165) * fVar13) +
                (fVar12 * fVar74 - fVar14 * fVar3) * fVar9;
      fVar144 = (((fVar133 + fVar122) + fVar143) * fVar74 + (fVar9 * fVar9 + fVar169) * fVar14) +
                (fVar13 * fVar3 - fVar12 * fVar5) * fVar9;
      fVar153 = (((fVar133 + fVar122) + fVar143) * fVar9 + (fVar9 * fVar9 + fVar173) * fVar15) +
                (fVar15 * fVar9 - fVar15 * fVar9) * fVar9;
      fVar16 = pfVar63[-0x13];
      fVar17 = pfVar63[-0x12];
      fVar18 = pfVar63[-0x11];
      memcpy(&(auVar96), &(*(gen_v16 *)(pfVar63 + -4)), sizeof(*(gen_v16 *)(pfVar63 + -4)) < sizeof(auVar96) ? sizeof(*(gen_v16 *)(pfVar63 + -4)) : sizeof(auVar96));
      fVar122 = (*(float *)((char *)&auVar96 + 0));
      fVar143 = (*(float *)((char *)&auVar96 + 4));
      fVar83 = (*(float *)((char *)&auVar96 + 12));
      memcpy(&(auVar97), &(*(gen_v16 *)(pfVar63 + 8)), sizeof(*(gen_v16 *)(pfVar63 + 8)) < sizeof(auVar97) ? sizeof(*(gen_v16 *)(pfVar63 + 8)) : sizeof(auVar97));
      fVar133 = (*(float *)((char *)&auVar97 + 0));
      fVar7 = (*(float *)((char *)&auVar97 + 4));
      fVar8 = (*(float *)((char *)&auVar97 + 8));
      fVar11 = (*(float *)((char *)&auVar97 + 12));
      fVar124 = ((fVar114 * fVar5 - fVar110 * fVar74) + fVar9 * fVar103) + fVar118 * fVar3;
      fVar135 = ((fVar103 * fVar74 - fVar114 * fVar3) + fVar9 * fVar110) + fVar118 * fVar5;
      fVar145 = ((fVar110 * fVar3 - fVar103 * fVar5) + fVar9 * fVar114) + fVar118 * fVar74;
      fVar78 = fVar118 * fVar9 - ((fVar5 * fVar110 + fVar3 * fVar103) + fVar74 * fVar114);
      fVar3 = pfVar62[-0xc];
      fVar5 = pfVar62[-0xb];
      fVar9 = pfVar62[-10];
      fVar74 = pfVar62[-9];
      fVar82 = (*(float *)((char *)&auVar96 + 8));
      fVar70 = fVar122 * fVar29;
      fVar72 = fVar143 * fVar30;
      fVar75 = fVar82 * fVar31;
      fVar125 = (((fVar72 + fVar70) + fVar75) * fVar122 + (fVar83 * fVar83 + fVar158) * fVar29) +
                (fVar31 * fVar143 - fVar30 * fVar82) * fVar83;
      fVar136 = (((fVar72 + fVar70) + fVar75) * fVar143 + (fVar83 * fVar83 + fVar165) * fVar30) +
                (fVar29 * fVar82 - fVar31 * fVar122) * fVar83;
      fVar146 = (((fVar72 + fVar70) + fVar75) * fVar82 + (fVar83 * fVar83 + fVar169) * fVar31) +
                (fVar30 * fVar122 - fVar29 * fVar143) * fVar83;
      fVar154 = (((fVar72 + fVar70) + fVar75) * fVar83 + (fVar83 * fVar83 + fVar173) * fVar32) +
                (fVar32 * fVar83 - fVar32 * fVar83) * fVar83;
      fVar70 = pfVar63[-8];
      fVar72 = pfVar63[-7];
      fVar75 = pfVar63[-6];
      fVar19 = pfVar63[-5];
      fVar126 = ((fVar79 * fVar143 - fVar106 * fVar82) + fVar83 * fVar76) + fVar113 * fVar122;
      fVar137 = ((fVar76 * fVar82 - fVar79 * fVar122) + fVar83 * fVar106) + fVar113 * fVar143;
      fVar147 = ((fVar106 * fVar122 - fVar76 * fVar143) + fVar83 * fVar79) + fVar113 * fVar82;
      fVar86 = fVar113 * fVar83 - ((fVar143 * fVar106 + fVar122 * fVar76) + fVar82 * fVar79);
      fVar122 = fVar133 * fVar37;
      fVar143 = fVar7 * fVar38;
      fVar83 = fVar8 * fVar39;
      fVar127 = (((fVar143 + fVar122) + fVar83) * fVar133 + (fVar11 * fVar11 + fVar158) * fVar37) +
                (fVar39 * fVar7 - fVar38 * fVar8) * fVar11;
      fVar138 = (((fVar143 + fVar122) + fVar83) * fVar7 + (fVar11 * fVar11 + fVar165) * fVar38) +
                (fVar37 * fVar8 - fVar39 * fVar133) * fVar11;
      fVar148 = (((fVar143 + fVar122) + fVar83) * fVar8 + (fVar11 * fVar11 + fVar169) * fVar39) +
                (fVar38 * fVar133 - fVar37 * fVar7) * fVar11;
      fVar155 = (((fVar143 + fVar122) + fVar83) * fVar11 + (fVar11 * fVar11 + fVar173) * fVar40) +
                (fVar40 * fVar11 - fVar40 * fVar11) * fVar11;
      fVar122 = pfVar63[4];
      fVar143 = pfVar63[5];
      fVar83 = pfVar63[6];
      fVar82 = pfVar63[7];
      fVar128 = ((fVar84 * fVar7 - fVar81 * fVar8) + fVar11 * fVar80) + fVar87 * fVar133;
      fVar139 = ((fVar80 * fVar8 - fVar84 * fVar133) + fVar11 * fVar81) + fVar87 * fVar7;
      fVar149 = ((fVar81 * fVar133 - fVar80 * fVar7) + fVar11 * fVar84) + fVar87 * fVar8;
      fVar94 = fVar87 * fVar11 - ((fVar7 * fVar81 + fVar133 * fVar80) + fVar8 * fVar84);
      fVar133 = pfVar63[0xc];
      fVar7 = pfVar63[0xd];
      fVar8 = pfVar63[0xe];
      fVar11 = pfVar63[0xf];
      fVar99 = (*(float *)((char *)&auVar163 + 8));
      fVar89 = fVar4 * fVar45;
      fVar91 = fVar6 * fVar46;
      fVar93 = fVar99 * fVar47;
      fVar129 = (((fVar91 + fVar89) + fVar93) * fVar4 + (fVar10 * fVar10 + fVar158) * fVar45) +
                (fVar47 * fVar6 - fVar46 * fVar99) * fVar10;
      fVar140 = (((fVar91 + fVar89) + fVar93) * fVar6 + (fVar10 * fVar10 + fVar165) * fVar46) +
                (fVar45 * fVar99 - fVar47 * fVar4) * fVar10;
      fVar150 = (((fVar91 + fVar89) + fVar93) * fVar99 + (fVar10 * fVar10 + fVar169) * fVar47) +
                (fVar46 * fVar4 - fVar45 * fVar6) * fVar10;
      fVar156 = (((fVar91 + fVar89) + fVar93) * fVar10 + (fVar10 * fVar10 + fVar173) * fVar48) +
                (fVar48 * fVar10 - fVar48 * fVar10) * fVar10;
      fVar89 = pfVar63[0x10];
      fVar91 = pfVar63[0x11];
      fVar93 = pfVar63[0x12];
      fVar158 = pfVar63[0x13];
      fVar130 = ((fVar90 * fVar6 - fVar88 * fVar99) + fVar10 * fVar85) + fVar92 * fVar4;
      fVar141 = ((fVar85 * fVar99 - fVar90 * fVar4) + fVar10 * fVar88) + fVar92 * fVar6;
      fVar151 = ((fVar88 * fVar4 - fVar85 * fVar6) + fVar10 * fVar90) + fVar92 * fVar99;
      fVar100 = fVar92 * fVar10 - ((fVar6 * fVar88 + fVar4 * fVar85) + fVar99 * fVar90);
      fVar159 = fVar124 * fVar103;
      fVar166 = fVar135 * fVar110;
      fVar170 = fVar145 * fVar114;
      fVar174 = fVar78 * fVar118;
      uVar65 = *(uint *)&REFG(undefined, 0x1134d28) & (uint)gen_fl2bits(fVar73) |
               *(uint *)&REFG(undefined, 0x1134d20) & (uint)gen_fl2bits(fVar69);
      uVar66 = *(uint *)&REFG(undefined, 0x1134d2c) & (uint)gen_fl2bits(fVar77) |
               *(uint *)&REFG(undefined, 0x1134d24) & (uint)gen_fl2bits(fVar71);
      uVar67 = *(uint *)&REFG(undefined, 0x1134d20) & (uint)gen_fl2bits(fVar69) |
               *(uint *)&REFG(undefined, 0x1134d28) & (uint)gen_fl2bits(fVar73);
      uVar68 = *(uint *)&REFG(undefined, 0x1134d24) & (uint)gen_fl2bits(fVar71) |
               *(uint *)&REFG(undefined, 0x1134d2c) & (uint)gen_fl2bits(fVar77);
      fVar131 = gen_bits2f(uVar66 | uVar65);
      fVar142 = gen_bits2f(uVar65 | uVar66);
      fVar152 = gen_bits2f(uVar68 | uVar67);
      fVar157 = gen_bits2f(uVar67 | uVar68);
      fVar4 = pfVar62[-0xc];
      fVar6 = pfVar62[-0xb];
      fVar10 = pfVar62[-10];
      fVar99 = pfVar62[-9];
      fVar165 = pfVar62[-0xc];
      fVar169 = pfVar62[-0xb];
      fVar173 = pfVar62[-10];
      fVar20 = pfVar62[-9];
      fVar95 = fVar170 + fVar159;
      fVar98 = fVar174 + fVar166;
      fVar159 = fVar159 + fVar170;
      fVar166 = fVar166 + fVar174;
      uVar65 = -(uint)(fVar98 + fVar95 < 0.0);
      uVar66 = -(uint)(fVar95 + fVar98 < 0.0);
      uVar67 = -(uint)(fVar166 + fVar159 < 0.0);
      uVar68 = -(uint)(fVar159 + fVar166 < 0.0);
      (*(float *)((char *)&auVar162 + 0)) = (*(float *)&REFG(undefined, 0x1138af0) - fVar131) * fVar103;
      (*(float *)((char *)&auVar162 + 4)) = (*(float *)&REFG(undefined, 0x1138af4) - fVar142) * fVar110;
      (*(float *)((char *)&auVar162 + 8)) = (*(float *)&REFG(undefined, 0x1138af8) - fVar152) * fVar114;
      (*(float *)((char *)&auVar162 + 12)) = (*(float *)&REFG(undefined, 0x1138afc) - fVar157) * fVar118;
      fVar95 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar131) & uVar65 |
                          ~uVar65 & (uint)gen_fl2bits(fVar131)) * fVar124 + (*(float *)((char *)&auVar162 + 0));
      fVar166 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar142) & uVar66 |
                           ~uVar66 & (uint)gen_fl2bits(fVar142)) * fVar135 + (*(float *)((char *)&auVar162 + 4));
      fVar135 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar152) & uVar67 |
                           ~uVar67 & (uint)gen_fl2bits(fVar152)) * fVar145 + (*(float *)((char *)&auVar162 + 8));
      fVar170 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar157) & uVar68 |
                           ~uVar68 & (uint)gen_fl2bits(fVar157)) * fVar78 + (*(float *)((char *)&auVar162 + 12));
      fVar103 = fVar135 * fVar135 + fVar95 * fVar95;
      fVar110 = fVar170 * fVar170 + fVar166 * fVar166;
      fVar114 = fVar95 * fVar95 + fVar135 * fVar135;
      fVar118 = fVar166 * fVar166 + fVar170 * fVar170;
      (*(float *)((char *)&auVar132 + 0)) = fVar110 + fVar103;
      (*(float *)((char *)&auVar132 + 4)) = fVar103 + fVar110;
      (*(float *)((char *)&auVar132 + 8)) = fVar118 + fVar114;
      (*(float *)((char *)&auVar132 + 12)) = fVar114 + fVar118;
      gen_rsqrtps(&(auVar163), &(auVar162), &(auVar132));
      fVar103 = (*(float *)((char *)&auVar163 + 0));
      fVar110 = (*(float *)((char *)&auVar163 + 4));
      fVar114 = (*(float *)((char *)&auVar163 + 8));
      fVar118 = (*(float *)((char *)&auVar163 + 12));
      fVar160 = fVar103 * *(float *)&REFG(undefined, 0x1134d90);
      fVar167 = fVar110 * *(float *)&REFG(undefined, 0x1134d94);
      fVar171 = fVar114 * *(float *)&REFG(undefined, 0x1134d98);
      fVar175 = fVar118 * *(float *)&REFG(undefined, 0x1134d9c);
      fVar104 = *(float *)&REFG(undefined, 0x1134d80) - (fVar103 * (*(float *)((char *)&auVar132 + 0))) * fVar103;
      fVar111 = *(float *)&REFG(undefined, 0x1134d84) - (fVar110 * (*(float *)((char *)&auVar132 + 4))) * fVar110;
      fVar115 = *(float *)&REFG(undefined, 0x1134d88) - (fVar114 * (*(float *)((char *)&auVar132 + 8))) * fVar114;
      fVar119 = *(float *)&REFG(undefined, 0x1134d8c) - (fVar118 * (*(float *)((char *)&auVar132 + 12))) * fVar118;
      uVar65 = *(uint *)&REFG(undefined, 0x1134d38) & (uint)gen_fl2bits(fVar73) |
               *(uint *)&REFG(undefined, 0x1134d30) & (uint)gen_fl2bits(fVar69);
      uVar66 = *(uint *)&REFG(undefined, 0x1134d3c) & (uint)gen_fl2bits(fVar77) |
               *(uint *)&REFG(undefined, 0x1134d34) & (uint)gen_fl2bits(fVar71);
      uVar67 = *(uint *)&REFG(undefined, 0x1134d30) & (uint)gen_fl2bits(fVar69) |
               *(uint *)&REFG(undefined, 0x1134d38) & (uint)gen_fl2bits(fVar73);
      uVar68 = *(uint *)&REFG(undefined, 0x1134d34) & (uint)gen_fl2bits(fVar71) |
               *(uint *)&REFG(undefined, 0x1134d3c) & (uint)gen_fl2bits(fVar77);
      fVar105 = gen_bits2f(uVar66 | uVar65);
      fVar112 = gen_bits2f(uVar65 | uVar66);
      fVar116 = gen_bits2f(uVar68 | uVar67);
      fVar120 = gen_bits2f(uVar67 | uVar68);
      fVar114 = fVar126 * fVar76;
      fVar118 = fVar137 * fVar106;
      fVar78 = fVar147 * fVar79;
      fVar98 = fVar86 * fVar113;
      fVar103 = fVar78 + fVar114;
      fVar110 = fVar98 + fVar118;
      fVar114 = fVar114 + fVar78;
      fVar118 = fVar118 + fVar98;
      uVar65 = -(uint)(fVar110 + fVar103 < 0.0);
      uVar66 = -(uint)(fVar103 + fVar110 < 0.0);
      uVar67 = -(uint)(fVar118 + fVar114 < 0.0);
      uVar68 = -(uint)(fVar114 + fVar118 < 0.0);
      (*(float *)((char *)&auVar164 + 0)) = (*(float *)&REFG(undefined, 0x1138af0) - fVar105) * fVar76;
      (*(float *)((char *)&auVar164 + 4)) = (*(float *)&REFG(undefined, 0x1138af4) - fVar112) * fVar106;
      (*(float *)((char *)&auVar164 + 8)) = (*(float *)&REFG(undefined, 0x1138af8) - fVar116) * fVar79;
      (*(float *)((char *)&auVar164 + 12)) = (*(float *)&REFG(undefined, 0x1138afc) - fVar120) * fVar113;
      fVar98 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar105) & uVar65 |
                          ~uVar65 & (uint)gen_fl2bits(fVar105)) * fVar126 + (*(float *)((char *)&auVar164 + 0));
      fVar124 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar112) & uVar66 |
                           ~uVar66 & (uint)gen_fl2bits(fVar112)) * fVar137 + (*(float *)((char *)&auVar164 + 4));
      fVar137 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar116) & uVar67 |
                           ~uVar67 & (uint)gen_fl2bits(fVar116)) * fVar147 + (*(float *)((char *)&auVar164 + 8));
      fVar174 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar120) & uVar68 |
                           ~uVar68 & (uint)gen_fl2bits(fVar120)) * fVar86 + (*(float *)((char *)&auVar164 + 12));
      fVar103 = fVar137 * fVar137 + fVar98 * fVar98;
      fVar110 = fVar174 * fVar174 + fVar124 * fVar124;
      fVar114 = fVar98 * fVar98 + fVar137 * fVar137;
      fVar118 = fVar124 * fVar124 + fVar174 * fVar174;
      (*(float *)((char *)&auVar107 + 0)) = fVar110 + fVar103;
      (*(float *)((char *)&auVar107 + 4)) = fVar103 + fVar110;
      (*(float *)((char *)&auVar107 + 8)) = fVar118 + fVar114;
      (*(float *)((char *)&auVar107 + 12)) = fVar114 + fVar118;
      gen_rsqrtps(&(auVar163), &(auVar164), &(auVar107));
      fVar103 = (*(float *)((char *)&auVar163 + 0));
      fVar110 = (*(float *)((char *)&auVar163 + 4));
      fVar118 = (*(float *)((char *)&auVar163 + 8));
      fVar106 = (*(float *)((char *)&auVar163 + 12));
      fVar161 = fVar103 * *(float *)&REFG(undefined, 0x1134d90);
      fVar168 = fVar110 * *(float *)&REFG(undefined, 0x1134d94);
      fVar172 = fVar118 * *(float *)&REFG(undefined, 0x1134d98);
      fVar176 = fVar106 * *(float *)&REFG(undefined, 0x1134d9c);
      fVar103 = *(float *)&REFG(undefined, 0x1134d80) - (fVar103 * (*(float *)((char *)&auVar107 + 0))) * fVar103;
      fVar114 = *(float *)&REFG(undefined, 0x1134d84) - (fVar110 * (*(float *)((char *)&auVar107 + 4))) * fVar110;
      fVar76 = *(float *)&REFG(undefined, 0x1134d88) - (fVar118 * (*(float *)((char *)&auVar107 + 8))) * fVar118;
      fVar79 = *(float *)&REFG(undefined, 0x1134d8c) - (fVar106 * (*(float *)((char *)&auVar107 + 12))) * fVar106;
      uVar65 = *(uint *)&REFG(undefined, 0x1134d48) & (uint)gen_fl2bits(fVar73) |
               *(uint *)&REFG(undefined, 0x1134d40) & (uint)gen_fl2bits(fVar69);
      uVar66 = *(uint *)&REFG(undefined, 0x1134d4c) & (uint)gen_fl2bits(fVar77) |
               *(uint *)&REFG(undefined, 0x1134d44) & (uint)gen_fl2bits(fVar71);
      uVar67 = *(uint *)&REFG(undefined, 0x1134d40) & (uint)gen_fl2bits(fVar69) |
               *(uint *)&REFG(undefined, 0x1134d48) & (uint)gen_fl2bits(fVar73);
      uVar68 = *(uint *)&REFG(undefined, 0x1134d44) & (uint)gen_fl2bits(fVar71) |
               *(uint *)&REFG(undefined, 0x1134d4c) & (uint)gen_fl2bits(fVar77);
      fVar159 = gen_bits2f(uVar66 | uVar65);
      fVar126 = gen_bits2f(uVar65 | uVar66);
      fVar145 = gen_bits2f(uVar68 | uVar67);
      fVar101 = gen_bits2f(uVar67 | uVar68);
      fVar106 = fVar128 * fVar80;
      fVar113 = fVar139 * fVar81;
      fVar78 = fVar149 * fVar84;
      fVar86 = fVar94 * fVar87;
      fVar110 = fVar78 + fVar106;
      fVar118 = fVar86 + fVar113;
      fVar106 = fVar106 + fVar78;
      fVar113 = fVar113 + fVar86;
      uVar65 = -(uint)(fVar118 + fVar110 < 0.0);
      uVar66 = -(uint)(fVar110 + fVar118 < 0.0);
      uVar67 = -(uint)(fVar113 + fVar106 < 0.0);
      uVar68 = -(uint)(fVar106 + fVar113 < 0.0);
      (*(float *)((char *)&auVar108 + 0)) = (*(float *)&REFG(undefined, 0x1138af0) - fVar159) * fVar80;
      (*(float *)((char *)&auVar108 + 4)) = (*(float *)&REFG(undefined, 0x1138af4) - fVar126) * fVar81;
      (*(float *)((char *)&auVar108 + 8)) = (*(float *)&REFG(undefined, 0x1138af8) - fVar145) * fVar84;
      (*(float *)((char *)&auVar108 + 12)) = (*(float *)&REFG(undefined, 0x1138afc) - fVar101) * fVar87;
      fVar110 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar159) & uVar65 |
                           ~uVar65 & (uint)gen_fl2bits(fVar159)) * fVar128 + (*(float *)((char *)&auVar108 + 0));
      fVar118 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar126) & uVar66 |
                           ~uVar66 & (uint)gen_fl2bits(fVar126)) * fVar139 + (*(float *)((char *)&auVar108 + 4));
      fVar106 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar145) & uVar67 |
                           ~uVar67 & (uint)gen_fl2bits(fVar145)) * fVar149 + (*(float *)((char *)&auVar108 + 8));
      fVar113 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar101) & uVar68 |
                           ~uVar68 & (uint)gen_fl2bits(fVar101)) * fVar94 + (*(float *)((char *)&auVar108 + 12));
      fVar80 = fVar106 * fVar106 + fVar110 * fVar110;
      fVar81 = fVar113 * fVar113 + fVar118 * fVar118;
      fVar84 = fVar110 * fVar110 + fVar106 * fVar106;
      fVar87 = fVar118 * fVar118 + fVar113 * fVar113;
      (*(float *)((char *)&auVar96 + 0)) = fVar81 + fVar80;
      (*(float *)((char *)&auVar96 + 4)) = fVar80 + fVar81;
      (*(float *)((char *)&auVar96 + 8)) = fVar87 + fVar84;
      (*(float *)((char *)&auVar96 + 12)) = fVar84 + fVar87;
      gen_rsqrtps(&(auVar163), &(auVar108), &(auVar96));
      fVar94 = (*(float *)((char *)&auVar163 + 0));
      fVar128 = (*(float *)((char *)&auVar163 + 4));
      fVar139 = (*(float *)((char *)&auVar163 + 8));
      fVar149 = (*(float *)((char *)&auVar163 + 12));
      fVar80 = *(float *)&REFG(undefined, 0x1134d80) - (fVar94 * (*(float *)((char *)&auVar96 + 0))) * fVar94;
      fVar84 = *(float *)&REFG(undefined, 0x1134d84) - (fVar128 * (*(float *)((char *)&auVar96 + 4))) * fVar128;
      fVar78 = *(float *)&REFG(undefined, 0x1134d88) - (fVar139 * (*(float *)((char *)&auVar96 + 8))) * fVar139;
      fVar86 = *(float *)&REFG(undefined, 0x1134d8c) - (fVar149 * (*(float *)((char *)&auVar96 + 12))) * fVar149;
      fVar94 = *(float *)&REFG(undefined, 0x1134d90) * fVar94;
      fVar128 = *(float *)&REFG(undefined, 0x1134d94) * fVar128;
      fVar139 = *(float *)&REFG(undefined, 0x1134d98) * fVar139;
      fVar149 = *(float *)&REFG(undefined, 0x1134d9c) * fVar149;
      uVar65 = *(uint *)&REFG(undefined, 0x1134d58) & (uint)gen_fl2bits(fVar73) |
               *(uint *)&REFG(undefined, 0x1134d50) & (uint)gen_fl2bits(fVar69);
      uVar66 = *(uint *)&REFG(undefined, 0x1134d5c) & (uint)gen_fl2bits(fVar77) |
               *(uint *)&REFG(undefined, 0x1134d54) & (uint)gen_fl2bits(fVar71);
      uVar67 = *(uint *)&REFG(undefined, 0x1134d50) & (uint)gen_fl2bits(fVar69) |
               *(uint *)&REFG(undefined, 0x1134d58) & (uint)gen_fl2bits(fVar73);
      uVar68 = *(uint *)&REFG(undefined, 0x1134d54) & (uint)gen_fl2bits(fVar71) |
               *(uint *)&REFG(undefined, 0x1134d5c) & (uint)gen_fl2bits(fVar77);
      fVar73 = gen_bits2f(uVar66 | uVar65);
      fVar77 = gen_bits2f(uVar65 | uVar66);
      fVar147 = gen_bits2f(uVar68 | uVar67);
      fVar102 = gen_bits2f(uVar67 | uVar68);
      fVar69 = fVar130 * fVar85;
      fVar71 = fVar141 * fVar88;
      fVar117 = fVar151 * fVar90;
      fVar121 = fVar100 * fVar92;
      fVar81 = fVar117 + fVar69;
      fVar87 = fVar121 + fVar71;
      fVar69 = fVar69 + fVar117;
      fVar71 = fVar71 + fVar121;
      uVar65 = -(uint)(fVar87 + fVar81 < 0.0);
      uVar66 = -(uint)(fVar81 + fVar87 < 0.0);
      uVar67 = -(uint)(fVar71 + fVar69 < 0.0);
      uVar68 = -(uint)(fVar69 + fVar71 < 0.0);
      (*(undefined4 *)((char *)&auVar163 + 0)) = (uint)gen_fl2bits(0.0 - fVar73) & uVar65;
      (*(undefined4 *)((char *)&auVar163 + 4)) = (uint)gen_fl2bits(0.0 - fVar77) & uVar66;
      (*(undefined4 *)((char *)&auVar163 + 8)) = (uint)gen_fl2bits(0.0 - fVar147) & uVar67;
      (*(undefined4 *)((char *)&auVar163 + 12)) = (uint)gen_fl2bits(0.0 - fVar102) & uVar68;
      (*(undefined4 *)((char *)&auVar109 + 0)) = ~uVar65 & (uint)gen_fl2bits(fVar73);
      (*(undefined4 *)((char *)&auVar109 + 4)) = ~uVar66 & (uint)gen_fl2bits(fVar77);
      (*(undefined4 *)((char *)&auVar109 + 8)) = ~uVar67 & (uint)gen_fl2bits(fVar147);
      (*(undefined4 *)((char *)&auVar109 + 12)) = ~uVar68 & (uint)gen_fl2bits(fVar102);
      undefined1 gen_vt0[16]; gen_v16_or(gen_vt0, &(auVar163), &(auVar109));
      memcpy(auVar163, gen_vt0, 16);
      fVar81 = (*(float *)((char *)&auVar163 + 0)) * fVar130 + (*(float *)&REFG(undefined, 0x1138af0) - fVar73) * fVar85;
      fVar87 = (*(float *)((char *)&auVar163 + 4)) * fVar141 + (*(float *)&REFG(undefined, 0x1138af4) - fVar77) * fVar88;
      fVar85 = (*(float *)((char *)&auVar163 + 8)) * fVar151 + (*(float *)&REFG(undefined, 0x1138af8) - fVar147) * fVar90;
      fVar88 = (*(float *)((char *)&auVar163 + 12)) * fVar100 + (*(float *)&REFG(undefined, 0x1138afc) - fVar102) * fVar92;
      fVar90 = fVar85 * fVar85 + fVar81 * fVar81;
      fVar92 = fVar88 * fVar88 + fVar87 * fVar87;
      fVar69 = fVar81 * fVar81 + fVar85 * fVar85;
      fVar71 = fVar87 * fVar87 + fVar88 * fVar88;
      (*(float *)((char *)&auVar97 + 0)) = fVar92 + fVar90;
      (*(float *)((char *)&auVar97 + 4)) = fVar90 + fVar92;
      (*(float *)((char *)&auVar97 + 8)) = fVar71 + fVar69;
      (*(float *)((char *)&auVar97 + 12)) = fVar69 + fVar71;
      gen_rsqrtps(&(auVar163), &(auVar109), &(auVar97));
      fVar100 = (*(float *)((char *)&auVar163 + 0));
      fVar117 = (*(float *)((char *)&auVar163 + 4));
      fVar121 = (*(float *)((char *)&auVar163 + 8));
      fVar130 = (*(float *)((char *)&auVar163 + 12));
      fVar90 = *(float *)&REFG(undefined, 0x1134d80) - (fVar100 * (*(float *)((char *)&auVar97 + 0))) * fVar100;
      fVar92 = *(float *)&REFG(undefined, 0x1134d84) - (fVar117 * (*(float *)((char *)&auVar97 + 4))) * fVar117;
      fVar69 = *(float *)&REFG(undefined, 0x1134d88) - (fVar121 * (*(float *)((char *)&auVar97 + 8))) * fVar121;
      fVar71 = *(float *)&REFG(undefined, 0x1134d8c) - (fVar130 * (*(float *)((char *)&auVar97 + 12))) * fVar130;
      fVar100 = *(float *)&REFG(undefined, 0x1134d90) * fVar100;
      fVar117 = *(float *)&REFG(undefined, 0x1134d94) * fVar117;
      fVar121 = *(float *)&REFG(undefined, 0x1134d98) * fVar121;
      fVar130 = *(float *)&REFG(undefined, 0x1134d9c) * fVar130;
      pfVar2 = (float *)(iVar1 + (int)pfVar63);
      *pfVar2 = (((fVar123 + fVar123) + pfVar63[-0x14]) - fVar12) * fVar131 + fVar12;
      pfVar2[1] = (((fVar134 + fVar134) + fVar16) - fVar13) * fVar142 + fVar13;
      pfVar2[2] = (((fVar144 + fVar144) + fVar17) - fVar14) * fVar152 + fVar14;
      pfVar2[3] = (((fVar153 + fVar153) + fVar18) - fVar15) * fVar157 + fVar15;
      pfVar62[-0x10] = (fVar104 * fVar160) * fVar95;
      pfVar62[-0xf] = (fVar111 * fVar167) * fVar166;
      pfVar62[-0xe] = (fVar115 * fVar171) * fVar135;
      pfVar62[-0xd] = (fVar119 * fVar175) * fVar170;
      pfVar62[-0xc] = (fVar53 * fVar3 - fVar4) * fVar131 + fVar165;
      pfVar62[-0xb] = (fVar54 * fVar5 - fVar6) * fVar142 + fVar169;
      pfVar62[-10] = (fVar55 * fVar9 - fVar10) * fVar152 + fVar173;
      pfVar62[-9] = (fVar56 * fVar74 - fVar99) * fVar157 + fVar20;
      pfVar62[-8] = (((fVar125 + fVar125) + fVar70) - fVar29) * fVar105 + fVar29;
      pfVar62[-7] = (((fVar136 + fVar136) + fVar72) - fVar30) * fVar112 + fVar30;
      pfVar62[-6] = (((fVar146 + fVar146) + fVar75) - fVar31) * fVar116 + fVar31;
      pfVar62[-5] = (((fVar154 + fVar154) + fVar19) - fVar32) * fVar120 + fVar32;
      pfVar62[-4] = (fVar103 * fVar161) * fVar98;
      pfVar62[-3] = (fVar114 * fVar168) * fVar124;
      pfVar62[-2] = (fVar76 * fVar172) * fVar137;
      pfVar62[-1] = (fVar79 * fVar176) * fVar174;
      *pfVar62 = (fVar57 * fVar33 - fVar33) * fVar105 + fVar33;
      pfVar62[1] = (fVar58 * fVar34 - fVar34) * fVar112 + fVar34;
      pfVar62[2] = (fVar59 * fVar35 - fVar35) * fVar116 + fVar35;
      pfVar62[3] = (fVar60 * fVar36 - fVar36) * fVar120 + fVar36;
      pfVar62[4] = (((fVar127 + fVar127) + fVar122) - fVar37) * fVar159 + fVar37;
      pfVar62[5] = (((fVar138 + fVar138) + fVar143) - fVar38) * fVar126 + fVar38;
      pfVar62[6] = (((fVar148 + fVar148) + fVar83) - fVar39) * fVar145 + fVar39;
      pfVar62[7] = (((fVar155 + fVar155) + fVar82) - fVar40) * fVar101 + fVar40;
      pfVar62[8] = fVar110 * (fVar80 * fVar94);
      pfVar62[9] = fVar118 * (fVar84 * fVar128);
      pfVar62[10] = fVar106 * (fVar78 * fVar139);
      pfVar62[0xb] = fVar113 * (fVar86 * fVar149);
      pfVar62[0xc] = (fVar41 * fVar133 - fVar41) * fVar159 + fVar41;
      pfVar62[0xd] = (fVar42 * fVar7 - fVar42) * fVar126 + fVar42;
      pfVar62[0xe] = (fVar43 * fVar8 - fVar43) * fVar145 + fVar43;
      pfVar62[0xf] = (fVar44 * fVar11 - fVar44) * fVar101 + fVar44;
      pfVar62[0x10] = (((fVar129 + fVar129) + fVar89) - fVar45) * fVar73 + fVar45;
      pfVar62[0x11] = (((fVar140 + fVar140) + fVar91) - fVar46) * fVar77 + fVar46;
      pfVar62[0x12] = (((fVar150 + fVar150) + fVar93) - fVar47) * fVar147 + fVar47;
      pfVar62[0x13] = (((fVar156 + fVar156) + fVar158) - fVar48) * fVar102 + fVar48;
      pfVar62[0x14] = (fVar90 * fVar100) * fVar81;
      pfVar62[0x15] = (fVar92 * fVar117) * fVar87;
      pfVar62[0x16] = (fVar69 * fVar121) * fVar85;
      pfVar62[0x17] = (fVar71 * fVar130) * fVar88;
      pfVar62[0x18] = (fVar25 * fVar49 - fVar49) * fVar73 + fVar49;
      pfVar62[0x19] = (fVar26 * fVar50 - fVar50) * fVar77 + fVar50;
      pfVar62[0x1a] = (fVar27 * fVar51 - fVar51) * fVar147 + fVar51;
      pfVar62[0x1b] = (fVar28 * fVar52 - fVar52) * fVar102 + fVar52;
      pfVar64 = pfVar64 + 4;
      pfVar63 = pfVar63 + 0x30;
      pfVar62 = pfVar62 + 0x30;
      iVar61 = iVar61 + -1;
    } while (iVar61 != 0);
  }
  return 0;
}

/* ref: FUN_00d3cf50 */
uint F_00d3cf50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd3cf50u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  int param_5 = (int)gen_a4;
  float * pfVar1;
  float * pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  float * pfVar14;
  
  fVar3 = *param_4;
  fVar4 = param_4[1];
  fVar5 = param_4[2];
  fVar6 = param_4[3];
  uVar13 = (int)(param_5 + 3 + (param_5 + 3 >> 0x1f & 3U)) >> 2;
  if (0 < (int)uVar13) {
    pfVar14 = param_1;
    do {
      pfVar1 = ((float *)GEN_TOP(((param_3 - (int)param_1) + (int)pfVar14)));
      fVar7 = pfVar1[1];
      fVar8 = pfVar1[2];
      fVar9 = pfVar1[3];
      pfVar2 = ((float *)GEN_TOP(((param_2 - (int)param_1) + (int)pfVar14)));
      fVar10 = pfVar2[1];
      fVar11 = pfVar2[2];
      fVar12 = pfVar2[3];
      *pfVar14 = *pfVar2 * (*pfVar1 * fVar3) + *pfVar14;
      pfVar14[1] = fVar10 * (fVar7 * fVar4) + pfVar14[1];
      pfVar14[2] = fVar11 * (fVar8 * fVar5) + pfVar14[2];
      pfVar14[3] = fVar12 * (fVar9 * fVar6) + pfVar14[3];
      pfVar14 = pfVar14 + 4;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
    uVar13 = 0;
  }
  return uVar13;
}

/* ref: FUN_00d3cfa0 */
uint F_00d3cfa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xd3cfa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  int param_6 = (int)gen_a5;
  float * pfVar1;
  float * pfVar2;
  float * pfVar3;
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
  uint uVar18;
  float * pfVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  
  fVar4 = *param_5;
  fVar5 = param_5[1];
  fVar6 = param_5[2];
  fVar7 = param_5[3];
  uVar18 = (int)(param_6 + 3 + (param_6 + 3 >> 0x1f & 3U)) >> 2;
  if (0 < (int)uVar18) {
    iVar20 = param_4 - (int)param_2;
    iVar21 = param_3 - (int)param_2;
    iVar22 = param_1 - (int)param_2;
    pfVar19 = param_2;
    param_2 = (float *)uVar18;
    do {
      pfVar1 = (float *)(iVar20 + (int)pfVar19);
      fVar8 = *pfVar1;
      fVar9 = pfVar1[1];
      fVar10 = pfVar1[2];
      fVar11 = pfVar1[3];
      pfVar1 = (float *)(iVar21 + (int)pfVar19);
      fVar12 = pfVar1[1];
      fVar13 = pfVar1[2];
      fVar14 = pfVar1[3];
      pfVar2 = (float *)(iVar22 + (int)pfVar19);
      fVar15 = pfVar2[1];
      fVar16 = pfVar2[2];
      fVar17 = pfVar2[3];
      pfVar3 = (float *)(iVar22 + (int)pfVar19);
      *pfVar3 = *pfVar1 * (fVar8 * fVar4) + *pfVar2;
      pfVar3[1] = fVar12 * (fVar9 * fVar5) + fVar15;
      pfVar3[2] = fVar13 * (fVar10 * fVar6) + fVar16;
      pfVar3[3] = fVar14 * (fVar11 * fVar7) + fVar17;
      *pfVar19 = *pfVar19 + fVar8 * fVar4;
      pfVar19[1] = pfVar19[1] + fVar9 * fVar5;
      pfVar19[2] = pfVar19[2] + fVar10 * fVar6;
      pfVar19[3] = pfVar19[3] + fVar11 * fVar7;
      pfVar19 = pfVar19 + 4;
      param_2 = (float *)((int)param_2 - 1);
    } while (param_2 != (float *)0x0);
  }
  return uVar18;
}

/* ref: FUN_00d3d340 */
uint F_00d3d340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xd3d340u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  float param_7 = (float)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  undefined4 uVar2;
  LPVOID pvVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  (*(int *)(gen_frame + 0x28)) = param_1;
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar6 = *(uint *)((int)pvVar3 + 0xc);
  uVar4 = param_2 * 4 + 0x7fU & 0xffffff80;
  (*(uint *)(gen_frame + 0x24)) = uVar4;
  uVar5 = uVar6 + uVar4;
  if ((*(int *)((int)pvVar3 + 8) < (int)uVar4) || (*(uint *)((int)pvVar3 + 0x10) < uVar5)) {
    uVar5 = F_00d94390(pvVar3,uVar4);
    (*(uint *)(gen_frame + 0x2c)) = uVar5;
  }
  else {
    *(uint *)((int)pvVar3 + 0xc) = uVar5;
    (*(uint *)(gen_frame + 0x2c)) = uVar6;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar5 = *(uint *)((int)pvVar3 + 0xc);
  uVar6 = iVar1 * 4 + 0x7fU & 0xffffff80;
  if ((*(int *)((int)pvVar3 + 8) < (int)uVar6) || (*(uint *)((int)pvVar3 + 0x10) < uVar5 + uVar6)) {
    uVar5 = F_00d94390(pvVar3,uVar6);
  }
  else {
    *(uint *)((int)pvVar3 + 0xc) = uVar5 + uVar6;
  }
  (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)&REFG(undefined, 0x1134da0);
  (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)&REFG(undefined, 0x1134da4);
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)&REFG(undefined, 0x1134da8);
  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)&REFG(undefined, 0x1134dac);
  (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)&REFG(undefined, 0x1134da0);
  (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)&REFG(undefined, 0x1134da4);
  (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)&REFG(undefined, 0x1134da8);
  (*(undefined4 *)(gen_frame + 0x1c)) = *(undefined4 *)&REFG(undefined, 0x1134dac);
  F_00d35c70(&(*(undefined4 *)(gen_frame + 0x10)),param_4,param_2,(*(uint *)(gen_frame + 0x2c)));
  uVar2 = *(undefined4 *)((*(int *)(gen_frame + 0x28)) + 0xc);
  F_00d35c70(&(*(undefined4 *)(gen_frame + 0x0)),param_6,uVar2,uVar5);
  F_00d37b30((*(int *)(gen_frame + 0x28)),param_2,param_3,(*(uint *)(gen_frame + 0x2c)),param_5,uVar5,param_7,param_8,param_9);
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar6) || (uVar6 + uVar5 != *(int *)((int)pvVar3 + 0xc)))
     || (*(uint *)((int)pvVar3 + 0x14) == uVar5)) {
    F_00d945c0(pvVar3,uVar5,uVar6);
  }
  else {
    *(uint *)((int)pvVar3 + 0xc) = uVar5;
  }
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar5 = (*(uint *)(gen_frame + 0x24)) + 0xf & 0xfffffff0;
  if ((((int)(*(uint *)(gen_frame + 0x24)) <= *(int *)((int)pvVar3 + 8)) &&
      (uVar5 + (*(uint *)(gen_frame + 0x2c)) == *(int *)((int)pvVar3 + 0xc))) &&
     (*(uint *)((int)pvVar3 + 0x14) != (*(uint *)(gen_frame + 0x2c)))) {
    *(uint *)((int)pvVar3 + 0xc) = (*(uint *)(gen_frame + 0x2c));
    return (uint)pvVar3;
  }
  uVar5 = F_00d945c0(pvVar3,(*(uint *)(gen_frame + 0x2c)),uVar5);
  return uVar5;
}

/* ref: FUN_00d3d4d0 */
uint F_00d3d4d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xd3d4d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  uint * param_4 = (uint *)(uintptr_t)gen_a4;
  uint * param_5 = (uint *)(uintptr_t)gen_a5;
  int * param_6 = (int *)(uintptr_t)gen_a6;
  int * param_7 = (int *)(uintptr_t)gen_a7;
  int param_8 = (int)gen_a8;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  LPVOID pvVar4;
  uint in_esi;
  undefined4 * puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  short * psVar10;
  int in_eax;
  undefined4 * puVar11;
  uint local_24;
  undefined4 * local_1c;
  undefined4 * local_18;
  undefined4 * local_14;
  int local_10;
  undefined4 * local_c;
  int local_8;
  
  if (param_8 == 0) {
    in_eax = *(int *)this;
  }
  else {
    in_eax = param_3[0x2e];
  }
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  local_14 = *(undefined4 * PTR32 *)((int)pvVar4 + 0xc);
  uVar8 = in_eax * 0x30 + 0x7fU & 0xffffff80;
  if ((*(int *)((int)pvVar4 + 8) < (int)uVar8) ||
     (*(uint *)((int)pvVar4 + 0x10) < (int)local_14 + uVar8)) {
    local_14 = (undefined4 *)F_00d94390(pvVar4,uVar8);
  }
  else {
    *(uint *)((int)pvVar4 + 0xc) = (int)local_14 + uVar8;
  }
  iVar6 = *(int *)((int)this + 0xc);
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  local_c = *(undefined4 * PTR32 *)((int)pvVar4 + 0xc);
  uVar9 = iVar6 * 4 + 0x7fU & 0xffffff80;
  if ((*(int *)((int)pvVar4 + 8) < (int)uVar9) ||
     (*(uint *)((int)pvVar4 + 0x10) < (int)local_c + uVar9)) {
    local_c = (undefined4 *)F_00d94390(pvVar4,uVar9);
  }
  else {
    *(uint *)((int)pvVar4 + 0xc) = (int)local_c + uVar9;
  }
  if (param_6[1] == 0) {
    local_24 = *param_4;
    local_1c = local_14;
    local_10 = in_eax;
  }
  else {
    local_24 = F_00d367f0(in_eax);
    F_00da1030(local_24,0,in_eax);
    iVar6 = param_6[1] + -1;
    local_10 = 0;
    if (-1 < iVar6) {
      psVar10 = (short *)(*param_6 + iVar6 * 2);
      do {
        if (((-1 < *psVar10) && (*psVar10 < in_eax)) &&
           ((param_4[1] == 0 || (*(char *)(iVar6 + *param_4) != '\0')))) {
          local_10 = iVar6 + 1;
          break;
        }
        psVar10 = psVar10 + -1;
        iVar6 = iVar6 + -1;
      } while (-1 < iVar6);
    }
    local_1c = (undefined4 *)F_00d368e0(local_10);
    iVar6 = in_eax * 0xc;
    puVar11 = local_14;
    if (-1 < iVar6 + -1) {
      for (; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar11 = 0;
        puVar11 = puVar11 + 1;
      }
    }
  }
  iVar6 = *(int *)((int)this + 0xc);
  if (param_7[1] == 0) {
    in_esi = *param_5;
    local_18 = local_c;
    local_8 = iVar6;
  }
  else {
    in_esi = F_00d367f0(iVar6);
    F_00da1030(in_esi,0,iVar6);
    iVar7 = param_7[1] + -1;
    local_8 = 0;
    if (-1 < iVar7) {
      psVar10 = (short *)(*param_7 + iVar7 * 2);
      do {
        if (((-1 < *psVar10) && (*psVar10 < iVar6)) &&
           ((param_5[1] == 0 || (*(char *)(iVar7 + *param_5) != '\0')))) {
          local_8 = iVar7 + 1;
          break;
        }
        psVar10 = psVar10 + -1;
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
    }
    local_18 = (undefined4 *)F_00d36890(local_8);
    puVar11 = local_c;
    if (-1 < iVar6 + -1) {
      for (; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar11 = 0;
        puVar11 = puVar11 + 1;
      }
    }
  }
  iVar6 = param_3[3];
  if (iVar6 == 1) {
    F_00d6ae50(*param_3,GEN_TOF(gen_bits2f(param_3[1])),local_10,local_1c,local_8,local_18,param_1,param_2)
    ;
  }
  else if (iVar6 == 2) {
    F_00d6c0a0(*param_3,GEN_TOF(gen_bits2f(param_3[1])),local_10,local_8,*(undefined4 *)((int)this + 0x1c),
                 *(undefined4 *)((int)this + 0x20),param_1,param_2,local_1c,local_18);
  }
  else if (iVar6 == 3) {
    F_00d6de50(*param_3,GEN_TOF(gen_bits2f(param_3[1])),local_10,local_1c,local_8,local_18,param_1,param_2)
    ;
  }
  if ((param_6[1] != 0) && (param_2 = (undefined4 *)0x0, 0 < local_10)) {
    puVar11 = local_1c + 8;
    do {
      iVar6 = (int)*(short *)(*param_6 + (int)((int)(uintptr_t)param_2) * 2);
      uVar1 = puVar11[-7];
      uVar2 = puVar11[-6];
      uVar3 = puVar11[-5];
      puVar5 = local_14 + iVar6 * 0xc;
      *puVar5 = puVar11[-8];
      puVar5[1] = uVar1;
      puVar5[2] = uVar2;
      puVar5[3] = uVar3;
      uVar1 = puVar11[-3];
      uVar2 = puVar11[-2];
      uVar3 = puVar11[-1];
      puVar5[4] = puVar11[-4];
      puVar5[5] = uVar1;
      puVar5[6] = uVar2;
      puVar5[7] = uVar3;
      uVar1 = puVar11[1];
      uVar2 = puVar11[2];
      uVar3 = puVar11[3];
      puVar5[8] = *puVar11;
      puVar5[9] = uVar1;
      puVar5[10] = uVar2;
      puVar5[0xb] = uVar3;
      if (param_4[1] == 0) {
        *(undefined1 *)(iVar6 + local_24) = 0xff;
      }
      else {
        *(undefined1 *)(iVar6 + local_24) = *(undefined1 *)((int)param_2 + *param_4);
      }
      param_2 = (undefined4 *)((int)param_2 + 1);
      puVar11 = puVar11 + 0xc;
    } while ((int)param_2 < local_10);
  }
  if (param_7[1] != 0) {
    iVar6 = 0;
    if (3 < local_8) {
      param_2 = local_18 + 2;
      do {
        iVar7 = (int)*(short *)(*param_7 + iVar6 * 2);
        local_c[iVar7] = param_2[-2];
        if (param_5[1] == 0) {
          *(undefined1 *)(iVar7 + in_esi) = 0xff;
        }
        else {
          *(undefined1 *)(iVar7 + in_esi) = *(undefined1 *)(iVar6 + *param_5);
        }
        iVar7 = (int)*(short *)(*param_7 + 2 + iVar6 * 2);
        local_c[iVar7] = param_2[-1];
        if (param_5[1] == 0) {
          *(undefined1 *)(iVar7 + in_esi) = 0xff;
        }
        else {
          *(undefined1 *)(iVar7 + in_esi) = *(undefined1 *)(*param_5 + 1 + iVar6);
        }
        iVar7 = (int)*(short *)(*param_7 + 4 + iVar6 * 2);
        local_c[iVar7] = *param_2;
        if (param_5[1] == 0) {
          *(undefined1 *)(iVar7 + in_esi) = 0xff;
        }
        else {
          *(undefined1 *)(iVar7 + in_esi) = *(undefined1 *)(*param_5 + 2 + iVar6);
        }
        iVar7 = (int)*(short *)(*param_7 + 6 + iVar6 * 2);
        local_c[iVar7] = param_2[1];
        if (param_5[1] == 0) {
          *(undefined1 *)(iVar7 + in_esi) = 0xff;
        }
        else {
          *(undefined1 *)(iVar7 + in_esi) = *(undefined1 *)(*param_5 + 3 + iVar6);
        }
        param_2 = param_2 + 4;
        iVar6 = iVar6 + 4;
      } while (iVar6 < local_8 + -3);
    }
    for (; iVar6 < local_8; iVar6 = iVar6 + 1) {
      iVar7 = (int)*(short *)(*param_7 + iVar6 * 2);
      local_c[iVar7] = local_18[iVar6];
      if (param_5[1] == 0) {
        *(undefined1 *)(iVar7 + in_esi) = 0xff;
      }
      else {
        *(undefined1 *)(iVar7 + in_esi) = *(undefined1 *)(iVar6 + *param_5);
      }
    }
  }
  F_00d3d340(this,in_eax,local_14,local_24,local_c,in_esi,GEN_TOF(gen_bits2f(param_3[2])),param_8,
               (uint)((byte)((uint)param_3[0x2d] >> 5) & 1));
  uVar1 = *(undefined4 *)((int)this + 0xc);
  if (param_7[1] != 0) {
    F_00d36930(local_18,local_8);
    F_00d36840(in_esi,uVar1);
  }
  if (param_6[1] != 0) {
    F_00d36980(local_1c,local_10);
    F_00d36840(local_24,in_eax);
  }
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (((*(int *)((int)pvVar4 + 8) < (int)uVar9) ||
      (uVar9 + (int)local_c != *(int *)((int)pvVar4 + 0xc))) ||
     (*(undefined4 * PTR32 *)((int)pvVar4 + 0x14) == local_c)) {
    F_00d945c0(pvVar4,local_c,uVar9);
  }
  else {
    *(undefined4 * PTR32 *)((int)pvVar4 + 0xc) = local_c;
  }
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if ((((int)uVar8 <= *(int *)((int)pvVar4 + 8)) &&
      (uVar8 + (int)local_14 == *(int *)((int)pvVar4 + 0xc))) &&
     (*(undefined4 * PTR32 *)((int)pvVar4 + 0x14) != local_14)) {
    *(undefined4 * PTR32 *)((int)pvVar4 + 0xc) = local_14;
    return (uint)pvVar4;
  }
  uVar8 = F_00d945c0(pvVar4,local_14,uVar8);
  return uVar8;
}

/* ref: FUN_00d3d9f0 */
uint F_00d3d9f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xd3d9f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  uint param_6 = (uint)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int param_8 = (int)gen_a8;
  undefined4 uVar1;
  int iVar2;
  LPVOID pvVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint local_c;
  uint local_8;
  
  uVar1 = *param_1;
  if (param_8 == 0) {
    iVar7 = *(int *)this;
  }
  else {
    iVar7 = param_3[0x2e];
  }
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  local_c = *(uint *)((int)pvVar3 + 0xc);
  uVar4 = iVar7 + 0x7fU & 0xffffff80;
  if ((*(int *)((int)pvVar3 + 8) < (int)uVar4) || (*(uint *)((int)pvVar3 + 0x10) < local_c + uVar4))
  {
    local_c = F_00d94390(pvVar3,uVar4);
  }
  else {
    *(uint *)((int)pvVar3 + 0xc) = local_c + uVar4;
  }
  iVar2 = *(int *)((int)this + 0xc);
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  local_8 = *(uint *)((int)pvVar3 + 0xc);
  uVar5 = iVar2 + 0x7fU & 0xffffff80;
  if ((*(int *)((int)pvVar3 + 8) < (int)uVar5) || (*(uint *)((int)pvVar3 + 0x10) < local_8 + uVar5))
  {
    local_8 = F_00d94390(pvVar3,uVar5);
  }
  else {
    *(uint *)((int)pvVar3 + 0xc) = local_8 + uVar5;
  }
  F_00d35910(param_6,param_4[1],*param_4,iVar7,local_c);
  F_00d35910(param_7,param_5[1],*param_5,*(undefined4 *)((int)this + 0xc),local_8);
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  param_6 = *(uint *)((int)pvVar3 + 0xc);
  uVar8 = iVar7 * 0x30 + 0x7fU & 0xffffff80;
  if ((*(int *)((int)pvVar3 + 8) < (int)uVar8) || (*(uint *)((int)pvVar3 + 0x10) < param_6 + uVar8))
  {
    param_6 = F_00d94390(pvVar3,uVar8);
  }
  else {
    *(uint *)((int)pvVar3 + 0xc) = param_6 + uVar8;
  }
  iVar2 = *(int *)((int)this + 0xc);
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  param_4 = *(undefined4 * PTR32 *)((int)pvVar3 + 0xc);
  uVar6 = iVar2 * 4 + 0x7fU & 0xffffff80;
  if ((*(int *)((int)pvVar3 + 8) < (int)uVar6) ||
     (*(uint *)((int)pvVar3 + 0x10) < (int)param_4 + uVar6)) {
    param_4 = (undefined4 *)F_00d94390(pvVar3,uVar6);
  }
  else {
    *(uint *)((int)pvVar3 + 0xc) = (int)param_4 + uVar6;
  }
  F_00d6f800(uVar1,*param_3,GEN_TOF(gen_bits2f(param_3[1])),param_1[2],*(undefined4 *)((int)this + 0x1c),
               *(undefined4 *)((int)this + 0x20),*(undefined4 *)this,
               *(undefined4 *)((int)this + 0xc),param_6,param_4,local_c,local_8);
  F_00d3d340(this,iVar7,param_6,local_c,param_4,local_8,GEN_TOF(gen_bits2f(param_3[2])),param_8,
               (uint)((byte)((uint)param_3[0x2d] >> 5) & 1));
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar6) ||
      (uVar6 + (int)param_4 != *(int *)((int)pvVar3 + 0xc))) ||
     ((undefined4 *)*(uint *)((int)pvVar3 + 0x14) == param_4)) {
    F_00d945c0(pvVar3,param_4,uVar6);
  }
  else {
    *(undefined4 * PTR32 *)((int)pvVar3 + 0xc) = param_4;
  }
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar8) || (uVar8 + param_6 != *(int *)((int)pvVar3 + 0xc)))
     || (*(uint *)((int)pvVar3 + 0x14) == param_6)) {
    F_00d945c0(pvVar3,param_6,uVar8);
  }
  else {
    *(uint *)((int)pvVar3 + 0xc) = param_6;
  }
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar5) || (uVar5 + local_8 != *(int *)((int)pvVar3 + 0xc)))
     || (*(uint *)((int)pvVar3 + 0x14) == local_8)) {
    F_00d945c0(pvVar3,local_8,uVar5);
  }
  else {
    *(uint *)((int)pvVar3 + 0xc) = local_8;
  }
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if ((((int)uVar4 <= *(int *)((int)pvVar3 + 8)) && (uVar4 + local_c == *(int *)((int)pvVar3 + 0xc))
      ) && (*(uint *)((int)pvVar3 + 0x14) != local_c)) {
    *(uint *)((int)pvVar3 + 0xc) = local_c;
    return (uint)pvVar3;
  }
  uVar4 = F_00d945c0(pvVar3,local_c,uVar4);
  return uVar4;
}

/* ref: FUN_00d3dcd0 */
uint F_00d3dcd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3dcd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d3dcf0 */
unsigned int F_00d3dcf0(void)
{
  GEN_ENTER(0xd3dcf0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d3dd10 */
unsigned int F_00d3dd10(void)
{
  GEN_ENTER(0xd3dd10u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d3dd30 */
uint F_00d3dd30(unsigned int gen_a0)
{
  GEN_ENTER(0xd3dd30u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00d3dd40 */
unsigned int F_00d3dd40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3dd40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if ((param_1 != (undefined4 *)0x0) &&
     (*param_1 = (*(undefined * PTR32 (*)[19])REFP(0x113541c)), param_2 != 0)) {
    F_00d74e60(param_1);
    return 0;
  }
  return 0;
}

/* ref: FUN_00d3dd60 */
uint F_00d3dd60(void)
{
  GEN_ENTER(0xd3dd60u, 0u, 0u, 0u, 0u);
  return 0x113541c;
}

/* ref: FUN_00d3ddb0 */
uint F_00d3ddb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xd3ddb0u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00d3de10 */
unsigned int F_00d3de10(unsigned int gen_a0)
{
  GEN_ENTER(0xd3de10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00d3de50 */
uint F_00d3de50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3de50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00d3de80 */
uint F_00d3de80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3de80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 << 4);
  return uVar1;
}

/* ref: FUN_00d3dee0 */
unsigned int F_00d3dee0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3dee0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0x10);
  }
  return 0;
}

/* ref: FUN_00d3df10 */
unsigned int F_00d3df10(unsigned int gen_a0)
{
  GEN_ENTER(0xd3df10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,8);
  }
  return 0;
}

/* ref: FUN_00d3df50 */
uint F_00d3df50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3df50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d91510((undefined *)((int)this + 4));
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,8);
  }
  return (uint)this;
}

/* ref: FUN_00d3df90 */
uint F_00d3df90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3df90u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d3dfd0 */
unsigned int F_00d3dfd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3dfd0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  undefined * this;
  
  iVar1 = param_2 + -1;
  if (-1 < iVar1) {
    this = (undefined *)(param_1 + 4 + iVar1 * 8);
    do {
      F_00d91510(this);
      this = (undefined *)((int)this + -8);
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  return 0;
}

/* ref: FUN_00d3e000 */
uint F_00d3e000(unsigned int gen_a0)
{
  GEN_ENTER(0xd3e000u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d3e040 */
uint F_00d3e040(unsigned int gen_a0)
{
  GEN_ENTER(0xd3e040u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  uVar1 = *(uint *)this;
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(uVar1 + 4 + iVar2 * 8);
    do {
      uVar1 = F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -8);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  *(undefined4 *)((int)this + 4) = 0;
  return uVar1;
}

/* ref: FUN_00d3e070 */
uint F_00d3e070(unsigned int gen_a0)
{
  GEN_ENTER(0xd3e070u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d3e0b0 */
uint F_00d3e0b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3e0b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + 4 + iVar2 * 8);
    do {
      F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -8);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d3e110 */
uint F_00d3e110(unsigned int gen_a0)
{
  GEN_ENTER(0xd3e110u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + 4 + iVar2 * 8);
    do {
      F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -8);
      iVar2 = iVar2 + -1;
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

/* ref: FUN_00d3e170 */
uint F_00d3e170(unsigned int gen_a0)
{
  GEN_ENTER(0xd3e170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + 4 + iVar2 * 8);
    do {
      F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -8);
      iVar2 = iVar2 + -1;
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

/* ref: FUN_00d3e1d0 */
uint F_00d3e1d0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3e1d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 8) + -1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((*(int *)((int)this + 4) + 4 + iVar2 * 8)));
    do {
      F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -8);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  iVar2 = *(int *)((int)this + 0xc);
  *(undefined4 *)((int)this + 8) = 0;
  if (-1 < iVar2) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 4),iVar2 * 8);
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xc) = 0x80000000;
  uVar1 = F_00d91510(this);
  return uVar1;
}

/* ref: FUN_00d3e230 */
uint F_00d3e230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3e230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d3e1d0(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,0x10);
  }
  return (uint)this;
}

/* ref: FUN_00d3e270 */
unsigned int F_00d3e270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3e270u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * this;
  int * piVar1;
  int iVar2;
  
  param_2 = param_2 + -1;
  if (-1 < param_2) {
    piVar1 = (int *)(param_1 + 4 + param_2 * 0x10);
    do {
      iVar2 = piVar1[1] + -1;
      if (-1 < iVar2) {
        this = (undefined *)(*piVar1 + 4 + iVar2 * 8);
        do {
          F_00d91510(this);
          this = (undefined *)((int)this + -8);
          iVar2 = iVar2 + -1;
        } while (-1 < iVar2);
      }
      iVar2 = piVar1[2];
      piVar1[1] = 0;
      if (-1 < iVar2) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*piVar1,iVar2 * 8);
      }
      *piVar1 = 0;
      piVar1[2] = ((int)0x80000000);
      F_00d91510(piVar1 + -1);
      param_2 = param_2 + -1;
      piVar1 = piVar1 + -4;
    } while (-1 < param_2);
  }
  return 0;
}

/* ref: FUN_00d3e300 */
unsigned int F_00d3e300(unsigned int gen_a0)
{
  GEN_ENTER(0xd3e300u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  int * piVar1;
  int iVar2;
  int local_8;
  
  local_8 = *(int *)((int)this + 4) + -1;
  if (-1 < local_8) {
    piVar1 = (int *)(*(int *)this + 4 + local_8 * 0x10);
    do {
      iVar2 = piVar1[1] + -1;
      if (-1 < iVar2) {
        this_00 = (undefined *)(*piVar1 + 4 + iVar2 * 8);
        do {
          F_00d91510(this_00);
          this_00 = (undefined *)((int)this_00 + -8);
          iVar2 = iVar2 + -1;
        } while (-1 < iVar2);
      }
      iVar2 = piVar1[2];
      piVar1[1] = 0;
      if (-1 < iVar2) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*piVar1,iVar2 * 8);
      }
      *piVar1 = 0;
      piVar1[2] = ((int)0x80000000);
      F_00d91510(piVar1 + -1);
      local_8 = local_8 + -1;
      piVar1 = piVar1 + -4;
    } while (-1 < local_8);
  }
  *(undefined4 *)((int)this + 4) = 0;
  return 0;
}

/* ref: FUN_00d3e3a0 */
uint F_00d3e3a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3e3a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined * this_00;
  int * piVar2;
  int iVar3;
  int local_8;
  
  local_8 = *(int *)((int)this + 4) + -1;
  if (-1 < local_8) {
    piVar2 = (int *)(*(int *)this + 4 + local_8 * 0x10);
    do {
      iVar3 = piVar2[1] + -1;
      if (-1 < iVar3) {
        this_00 = (undefined *)(*piVar2 + 4 + iVar3 * 8);
        do {
          F_00d91510(this_00);
          this_00 = (undefined *)((int)this_00 + -8);
          iVar3 = iVar3 + -1;
        } while (-1 < iVar3);
      }
      iVar3 = piVar2[2];
      piVar2[1] = 0;
      if (-1 < iVar3) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*piVar2,iVar3 * 8);
      }
      *piVar2 = 0;
      piVar2[2] = ((int)0x80000000);
      F_00d91510(piVar2 + -1);
      local_8 = local_8 + -1;
      piVar2 = piVar2 + -4;
    } while (-1 < local_8);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d3e470 */
uint F_00d3e470(unsigned int gen_a0)
{
  GEN_ENTER(0xd3e470u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int * piVar2;
  int iVar3;
  int local_8;
  
  local_8 = *(int *)((int)this + 4) + -1;
  if (-1 < local_8) {
    piVar2 = (int *)(*(int *)this + 4 + local_8 * 0x10);
    do {
      iVar3 = piVar2[1] + -1;
      if (-1 < iVar3) {
        this_00 = (undefined *)(*piVar2 + 4 + iVar3 * 8);
        do {
          F_00d91510(this_00);
          this_00 = (undefined *)((int)this_00 + -8);
          iVar3 = iVar3 + -1;
        } while (-1 < iVar3);
      }
      iVar3 = piVar2[2];
      piVar2[1] = 0;
      if (-1 < iVar3) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*piVar2,iVar3 * 8);
      }
      *piVar2 = 0;
      piVar2[2] = ((int)0x80000000);
      F_00d91510(piVar2 + -1);
      local_8 = local_8 + -1;
      piVar2 = piVar2 + -4;
    } while (-1 < local_8);
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

/* ref: FUN_00d3e540 */
uint F_00d3e540(unsigned int gen_a0)
{
  GEN_ENTER(0xd3e540u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int * piVar2;
  int iVar3;
  int local_8;
  
  local_8 = *(int *)((int)this + 4) + -1;
  if (-1 < local_8) {
    piVar2 = (int *)(*(int *)this + 4 + local_8 * 0x10);
    do {
      iVar3 = piVar2[1] + -1;
      if (-1 < iVar3) {
        this_00 = (undefined *)(*piVar2 + 4 + iVar3 * 8);
        do {
          F_00d91510(this_00);
          this_00 = (undefined *)((int)this_00 + -8);
          iVar3 = iVar3 + -1;
        } while (-1 < iVar3);
      }
      iVar3 = piVar2[2];
      piVar2[1] = 0;
      if (-1 < iVar3) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*piVar2,iVar3 * 8);
      }
      *piVar2 = 0;
      piVar2[2] = ((int)0x80000000);
      F_00d91510(piVar2 + -1);
      local_8 = local_8 + -1;
      piVar2 = piVar2 + -4;
    } while (-1 < local_8);
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

/* ref: FUN_00d3e630 */
uint F_00d3e630(unsigned int gen_a0)
{
  GEN_ENTER(0xd3e630u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkaAnimation::vf12 */
uint F_00d3e660(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3e660u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x18) + 0xc))))
                    (*(int * PTR32 *)(param_1 + 0x18),(undefined4)gen_fl2bits(param_2),param_3);
  return uVar1;
}

/* ref: hkaAnimation::vf13 */
uint F_00d3e680(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5, float gen_a6)
{
  GEN_ENTER(0xd3e680u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x18) + 0x10))))
                    (*(int * PTR32 *)(param_1 + 0x18),(undefined4)gen_fl2bits(param_2),
                     (undefined4)gen_fl2bits(param_3));
  return uVar1;
}

/* ref: FUN_00d3e6d0 */
uint F_00d3e6d0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3e6d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int * piVar2;
  int iVar3;
  int local_8;
  
  local_8 = *(int *)((int)this + 0x20) + -1;
  if (-1 < local_8) {
    piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 0x1c) + 4 + local_8 * 0x10)));
    do {
      iVar3 = piVar2[1] + -1;
      if (-1 < iVar3) {
        this_00 = (undefined *)(*piVar2 + 4 + iVar3 * 8);
        do {
          F_00d91510(this_00);
          this_00 = (undefined *)((int)this_00 + -8);
          iVar3 = iVar3 + -1;
        } while (-1 < iVar3);
      }
      iVar3 = piVar2[2];
      piVar2[1] = 0;
      if (-1 < iVar3) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*piVar2,iVar3 * 8);
      }
      *piVar2 = 0;
      piVar2[2] = ((int)0x80000000);
      F_00d91510(piVar2 + -1);
      local_8 = local_8 + -1;
      piVar2 = piVar2 + -4;
    } while (-1 < local_8);
  }
  uVar1 = *(uint *)((int)this + 0x24);
  *(undefined4 *)((int)this + 0x20) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x1c),uVar1 << 4);
  }
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0x80000000;
  if (*(undefined * PTR32 *)((int)this + 0x18) != (undefined *)0x0) {
    uVar1 = F_00d91a80(*(undefined * PTR32 *)((int)this + 0x18));
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: FUN_00d3e7b0 */
uint F_00d3e7b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3e7b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x113541c));
  if (param_1 != 0) {
    F_00d74e60(this);
  }
  return (uint)this;
}

/* ref: FUN_00d3e7d0 */
uint F_00d3e7d0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3e7d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkaSplineCompressedAnimation::vf0 */
uint F_00d3e800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3e800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d6e770(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: hkaAnimation::vf0 */
uint F_00d3e840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3e840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d3e6d0(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00d3e880 */
uint F_00d3e880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3e880u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d3e8a0 */
unsigned int F_00d3e8a0(void)
{
  GEN_ENTER(0xd3e8a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d3e8c0 */
unsigned int F_00d3e8c0(void)
{
  GEN_ENTER(0xd3e8c0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d3e8e0 */
unsigned int F_00d3e8e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3e8e0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != 0) {
    F_00d64fd0(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00d3e900 */
uint F_00d3e900(unsigned int gen_a0)
{
  GEN_ENTER(0xd3e900u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00d64fe0(param_1);
  return uVar1;
}

/* ref: FUN_00d3e910 */
unsigned int F_00d3e910(unsigned int gen_a0)
{
  GEN_ENTER(0xd3e910u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0x70);
  }
  return 0;
}

/* ref: FUN_00d3e940 */
uint F_00d3e940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3e940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d64fe0(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,0x70);
  }
  return (uint)this;
}

/* ref: FUN_00d3e980 */
uint F_00d3e980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3e980u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d3e990 */
uint F_00d3e990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3e990u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d3e9c0 */
uint F_00d3e9c0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3e9c0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00d3e9d0 */
unsigned int F_00d3e9d0(void)
{
  GEN_ENTER(0xd3e9d0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d3e9e0 */
unsigned int F_00d3e9e0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3e9e0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if ((undefined *)*param_1 != (undefined *)0x0) {
    F_00d91a80((undefined *)*param_1);
  }
  *param_1 = 0;
  return 0;
}

/* ref: FUN_00d3ea00 */
uint F_00d3ea00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3ea00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x1135a3c));
    uVar1 = F_00d91350(param_1 + 2,param_2);
  }
  return uVar1;
}

/* ref: FUN_00d3ea20 */
uint F_00d3ea20(void)
{
  GEN_ENTER(0xd3ea20u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x70];
  
  F_00d91350(((undefined1 *)(gen_frame + 0x8)),0);
  return 0x1135a3c;
}

/* ref: FUN_00d3ead0 */
unsigned int F_00d3ead0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3ead0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00d3eb30 */
uint F_00d3eb30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3eb30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00d3eb60 */
uint F_00d3eb60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3eb60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00d3eb90 */
uint F_00d3eb90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3eb90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00d3ebc0 */
unsigned int F_00d3ebc0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3ebc0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,8);
  }
  return 0;
}

/* ref: FUN_00d3ebf0 */
unsigned int F_00d3ebf0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3ebf0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,8);
  }
  return 0;
}

/* ref: FUN_00d3ec30 */
unsigned int F_00d3ec30(unsigned int gen_a0)
{
  GEN_ENTER(0xd3ec30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00d3ecb0 */
uint F_00d3ecb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3ecb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d91510(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,8);
  }
  return (uint)this;
}

/* ref: FUN_00d3ecf0 */
unsigned int F_00d3ecf0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3ecf0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,4);
  }
  return 0;
}

/* ref: FUN_00d3ed20 */
uint F_00d3ed20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3ed20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,8);
  }
  return (uint)this;
}

/* ref: FUN_00d3ed60 */
unsigned int F_00d3ed60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3ed60u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  undefined * this;
  
  iVar1 = param_2 + -1;
  if (-1 < iVar1) {
    this = (undefined *)(param_1 + iVar1 * 8);
    do {
      F_00d91510(this);
      this = (undefined *)((int)this + -8);
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  return 0;
}

/* ref: FUN_00d3ed90 */
unsigned int F_00d3ed90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3ed90u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 + -1;
  while (-1 < iVar1) {
    this = *(undefined * PTR32 *)(param_1 + iVar1 * 8);
    if (this != (undefined *)0x0) {
      F_00d91a80(this);
    }
    iVar1 = iVar1 + -1;
    *(undefined4 *)(param_1 + 8 + iVar1 * 8) = 0;
  }
  return 0;
}

/* ref: FUN_00d3edc0 */
uint F_00d3edc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3edc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d91510(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,4);
  }
  return (uint)this;
}

/* ref: FUN_00d3ee00 */
uint F_00d3ee00(unsigned int gen_a0)
{
  GEN_ENTER(0xd3ee00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  uVar1 = *(uint *)this;
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(uVar1 + iVar2 * 8);
    do {
      uVar1 = F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -8);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  *(undefined4 *)((int)this + 4) = 0;
  return uVar1;
}

/* ref: FUN_00d3ee30 */
unsigned int F_00d3ee30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3ee30u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  undefined * this;
  
  iVar1 = param_2 + -1;
  if (-1 < iVar1) {
    this = (undefined *)(param_1 + iVar1 * 4);
    do {
      F_00d91510(this);
      this = (undefined *)((int)this + -4);
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  return 0;
}

/* ref: FUN_00d3eea0 */
uint F_00d3eea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3eea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + iVar2 * 8);
    do {
      F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -8);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d3ef00 */
uint F_00d3ef00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3ef00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) + -1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 8);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00);
    }
    iVar3 = iVar3 + -1;
    *(undefined4 *)(iVar1 + 8 + iVar3 * 8) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar2 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00d3ef70 */
uint F_00d3ef70(unsigned int gen_a0)
{
  GEN_ENTER(0xd3ef70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  uVar1 = *(uint *)this;
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(uVar1 + iVar2 * 4);
    do {
      uVar1 = F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -4);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  *(undefined4 *)((int)this + 4) = 0;
  return uVar1;
}

/* ref: FUN_00d3efa0 */
uint F_00d3efa0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3efa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + iVar2 * 8);
    do {
      F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -8);
      iVar2 = iVar2 + -1;
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

/* ref: FUN_00d3f000 */
uint F_00d3f000(unsigned int gen_a0)
{
  GEN_ENTER(0xd3f000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) + -1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 8);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00);
    }
    iVar3 = iVar3 + -1;
    *(undefined4 *)(iVar1 + 8 + iVar3 * 8) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00d3f070 */
uint F_00d3f070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3f070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + iVar2 * 4);
    do {
      F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -4);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d3f0d0 */
uint F_00d3f0d0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3f0d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + iVar2 * 8);
    do {
      F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -8);
      iVar2 = iVar2 + -1;
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

/* ref: FUN_00d3f130 */
uint F_00d3f130(unsigned int gen_a0)
{
  GEN_ENTER(0xd3f130u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) + -1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 8);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00);
    }
    iVar3 = iVar3 + -1;
    *(undefined4 *)(iVar1 + 8 + iVar3 * 8) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00d3f1a0 */
uint F_00d3f1a0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3f1a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + iVar2 * 4);
    do {
      F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -4);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d3f200 */
uint F_00d3f200(unsigned int gen_a0)
{
  GEN_ENTER(0xd3f200u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + iVar2 * 4);
    do {
      F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -4);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d3f260 */
uint F_00d3f260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3f260u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x1135a3c));
  F_00d91350(in_ecx + 2,param_2);
  return (uint)in_ecx;
}

/* ref: FUN_00d3f280 */
uint F_00d3f280(unsigned int gen_a0)
{
  GEN_ENTER(0xd3f280u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00d3f2b0 */
uint F_00d3f2b0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3f2b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)((int)this + 0x48);
  iVar3 = *(int *)((int)this + 0x4c) + -1;
  while (-1 < iVar3) {
    pvVar2 = *(undefined * PTR32 *)(iVar4 + iVar3 * 8);
    if (pvVar2 != (undefined *)0x0) {
      F_00d91a80(pvVar2);
    }
    iVar3 = iVar3 + -1;
    *(undefined4 *)(iVar4 + 8 + iVar3 * 8) = 0;
  }
  uVar1 = *(uint *)((int)this + 0x50);
  *(undefined4 *)((int)this + 0x4c) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x48),uVar1 * 8);
  }
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x50) = 0x80000000;
  iVar4 = *(int *)((int)this + 0x40) + -1;
  if (-1 < iVar4) {
    pvVar2 = ((undefined *)GEN_TOP((*(int *)((int)this + 0x3c) + iVar4 * 4)));
    do {
      F_00d91510(pvVar2);
      pvVar2 = (undefined *)((int)pvVar2 + -4);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  uVar1 = *(uint *)((int)this + 0x44);
  *(undefined4 *)((int)this + 0x40) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x3c),uVar1 * 4);
  }
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x44) = 0x80000000;
  *(undefined4 *)((int)this + 0x34) = 0;
  if ((*(uint *)((int)this + 0x38) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x30),
               *(uint *)((int)this + 0x38) * 4);
  }
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x38) = 0x80000000;
  *(undefined4 *)((int)this + 0x28) = 0;
  if ((*(uint *)((int)this + 0x2c) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x24),
               (*(uint *)((int)this + 0x2c) & 0x3fffffff) * 0x30);
  }
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0x80000000;
  iVar4 = *(int *)((int)this + 0x1c) + -1;
  if (-1 < iVar4) {
    pvVar2 = ((undefined *)GEN_TOP((*(int *)((int)this + 0x18) + iVar4 * 8)));
    do {
      F_00d91510(pvVar2);
      pvVar2 = (undefined *)((int)pvVar2 + -8);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  uVar1 = *(uint *)((int)this + 0x20);
  *(undefined4 *)((int)this + 0x1c) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x18),uVar1 * 8);
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0x80000000;
  *(undefined4 *)((int)this + 0x10) = 0;
  if ((*(uint *)((int)this + 0x14) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0xc),
               (*(uint *)((int)this + 0x14) & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  uVar1 = F_00d91510((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkaSkeleton::vf0 */
uint F_00d3f460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3f460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d3f2b0(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00d3f4a0 */
uint F_00d3f4a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3f4a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d3f4c0 */
unsigned int F_00d3f4c0(void)
{
  GEN_ENTER(0xd3f4c0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d3f4e0 */
uint F_00d3f4e0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3f4e0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00d3f4f0 */
unsigned int F_00d3f4f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3f4f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if ((param_1 != (undefined4 *)0x0) && (*param_1 = (*(undefined * PTR32 (*)[19])REFP(0x1135b5c)), param_2 != 0)) {
    F_00d76e30(param_1);
    return 0;
  }
  return 0;
}

/* ref: FUN_00d3f510 */
uint F_00d3f510(void)
{
  GEN_ENTER(0xd3f510u, 0u, 0u, 0u, 0u);
  return 0x1135b5c;
}

/* ref: FUN_00d3f520 */
uint F_00d3f520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3f520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x1135b5c));
  if (param_1 != 0) {
    F_00d76e30(this);
  }
  return (uint)this;
}

/* ref: FUN_00d3f540 */
uint F_00d3f540(unsigned int gen_a0)
{
  GEN_ENTER(0xd3f540u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkaQuantizedAnimation::vf0 */
uint F_00d3f570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3f570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d78ae0(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00d3f5b0 */
uint F_00d3f5b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3f5b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d3f5d0 */
unsigned int F_00d3f5d0(void)
{
  GEN_ENTER(0xd3f5d0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d3f5f0 */
unsigned int F_00d3f5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3f5f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00d7be90(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00d3f610 */
uint F_00d3f610(unsigned int gen_a0)
{
  GEN_ENTER(0xd3f610u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00d3f620 */
uint F_00d3f620(void)
{
  GEN_ENTER(0xd3f620u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  
  F_00d7be90(((uint *)(gen_frame + 0x0)),0);
  return ((uint *)(gen_frame + 0x0))[0];
}

/* ref: FUN_00d3f660 */
uint F_00d3f660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3f660u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d3f670 */
uint F_00d3f670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3f670u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d3f6a0 */
unsigned int F_00d3f6a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3f6a0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != 0) {
    F_00d7e8d0(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00d3f6c0 */
uint F_00d3f6c0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3f6c0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00d3f6d0 */
uint F_00d3f6d0(void)
{
  GEN_ENTER(0xd3f6d0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x40];
  
  F_00d7e8d0(((uint *)(gen_frame + 0x0)),0);
  return ((uint *)(gen_frame + 0x0))[0];
}

/* ref: FUN_00d3f700 */
unsigned int F_00d3f700(void)
{
  GEN_ENTER(0xd3f700u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d3f710 */
uint F_00d3f710(unsigned int gen_a0)
{
  GEN_ENTER(0xd3f710u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) * 2);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00d3f750 */
unsigned int F_00d3f750(unsigned int gen_a0)
{
  GEN_ENTER(0xd3f750u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0xc);
  }
  return 0;
}

/* ref: FUN_00d3f790 */
uint F_00d3f790(unsigned int gen_a0)
{
  GEN_ENTER(0xd3f790u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d3f7d0 */
uint F_00d3f7d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3f7d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  LPVOID pvVar2;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 2);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 8) = 0x80000000;
  if ((param_1 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar2 + 0x2c),this,0xc);
  }
  return (uint)this;
}

/* ref: FUN_00d3f840 */
uint F_00d3f840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3f840u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d3f850 */
uint F_00d3f850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3f850u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  F_00d91350(in_ecx,param_2);
  return in_ecx;
}

/* ref: FUN_00d3f880 */
unsigned int F_00d3f880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3f880u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != 0) {
    F_00d91350(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00d3f8a0 */
uint F_00d3f8a0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3f8a0u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00d91510(param_1);
  return uVar1;
}

/* ref: FUN_00d3f8d0 */
uint F_00d3f8d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3f8d0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_00d91350(param_1 + 4,param_2);
  }
  return uVar1;
}

/* ref: FUN_00d3f8f0 */
uint F_00d3f8f0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3f8f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00d91510((undefined *)(param_1 + 4));
  return uVar1;
}

/* ref: FUN_00d3f900 */
unsigned int F_00d3f900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3f900u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != 0) {
    F_00d91350(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00d3f920 */
uint F_00d3f920(unsigned int gen_a0)
{
  GEN_ENTER(0xd3f920u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00d3e1d0(param_1);
  return uVar1;
}

/* ref: FUN_00d3f930 */
uint F_00d3f930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3f930u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d3f940 */
uint F_00d3f940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3f940u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d3f950 */
uint F_00d3f950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3f950u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  F_00d91350(in_ecx + 4,param_2);
  return in_ecx;
}

/* ref: FUN_00d3f990 */
uint F_00d3f990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3f990u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  F_00d91350(in_ecx,param_2);
  return in_ecx;
}

/* ref: FUN_00d3f9b0 */
uint F_00d3f9b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3f9b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d3f9d0 */
uint F_00d3f9d0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3f9d0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00d3f9e0 */
uint F_00d3f9e0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3f9e0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[19])REFP(0x113657c));
  }
  return (uint)param_1;
}

/* ref: FUN_00d3fa00 */
uint F_00d3fa00(void)
{
  GEN_ENTER(0xd3fa00u, 0u, 0u, 0u, 0u);
  return 0x113657c;
}

/* ref: FUN_00d3fa20 */
uint F_00d3fa20(unsigned int gen_a0)
{
  GEN_ENTER(0xd3fa20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00d3fa50 */
uint F_00d3fa50(unsigned int gen_a0)
{
  GEN_ENTER(0xd3fa50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0x3c);
  *(undefined4 *)((int)this + 0x38) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x34),iVar1 * 4);
  }
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0x80000000;
  uVar2 = *(uint *)((int)this + 0x30);
  *(undefined4 *)((int)this + 0x2c) = 0;
  if (-1 < (int)uVar2) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x28),(uVar2 & 0x3fffffff) * 0x30);
  }
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x30) = 0x80000000;
  uVar2 = F_00d3e6d0(this);
  return uVar2;
}

/* ref: hkaInterleavedUncompressedAnimation::vf0 */
uint F_00d3fad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3fad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d3fa50(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00d3fb10 */
uint F_00d3fb10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3fb10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d3fb20 */
uint F_00d3fb20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3fb20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d3fb40 */
unsigned int F_00d3fb40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3fb40u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != 0) {
    F_00d7f240(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00d3fb60 */
uint F_00d3fb60(unsigned int gen_a0)
{
  GEN_ENTER(0xd3fb60u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00d3fb70 */
uint F_00d3fb70(void)
{
  GEN_ENTER(0xd3fb70u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  
  F_00d7f240(((uint *)(gen_frame + 0x0)),0);
  return ((uint *)(gen_frame + 0x0))[0];
}

/* ref: FUN_00d3fbc0 */
uint F_00d3fbc0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3fbc0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00d3fbd0 */
uint F_00d3fbd0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3fbd0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x113680c));
  }
  return (uint)param_1;
}

/* ref: FUN_00d3fbf0 */
uint F_00d3fbf0(void)
{
  GEN_ENTER(0xd3fbf0u, 0u, 0u, 0u, 0u);
  return 0x113680c;
}

/* ref: FUN_00d3fc30 */
uint F_00d3fc30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3fc30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00d3fc50 */
unsigned int F_00d3fc50(unsigned int gen_a0)
{
  GEN_ENTER(0xd3fc50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00d3fc80 */
unsigned int F_00d3fc80(unsigned int gen_a0)
{
  GEN_ENTER(0xd3fc80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,4);
  }
  return 0;
}

/* ref: FUN_00d3fcb0 */
uint F_00d3fcb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3fcb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,4);
  }
  return (uint)this;
}

/* ref: FUN_00d3fcf0 */
unsigned int F_00d3fcf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3fcf0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 + -1;
  while (-1 < iVar1) {
    this = *(undefined * PTR32 *)(param_1 + iVar1 * 4);
    if (this != (undefined *)0x0) {
      F_00d91a80(this);
    }
    iVar1 = iVar1 + -1;
    *(undefined4 *)(param_1 + 4 + iVar1 * 4) = 0;
  }
  return 0;
}

/* ref: FUN_00d3fd60 */
uint F_00d3fd60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3fd60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) + -1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00);
    }
    iVar3 = iVar3 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00d3fdd0 */
uint F_00d3fdd0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3fdd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) + -1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00);
    }
    iVar3 = iVar3 + -1;
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

/* ref: FUN_00d3fe40 */
uint F_00d3fe40(unsigned int gen_a0)
{
  GEN_ENTER(0xd3fe40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) + -1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00);
    }
    iVar3 = iVar3 + -1;
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

/* ref: FUN_00d3fec0 */
uint F_00d3fec0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3fec0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkaFootstepAnalysisInfoContainer::vf0 */
uint F_00d3fef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3fef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d7f590(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00d3ff30 */
uint F_00d3ff30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3ff30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d3ff50 */
uint F_00d3ff50(unsigned int gen_a0)
{
  GEN_ENTER(0xd3ff50u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00d3ff60 */
uint F_00d3ff60(unsigned int gen_a0)
{
  GEN_ENTER(0xd3ff60u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[6])REFP(0x1136938));
  }
  return (uint)param_1;
}

/* ref: FUN_00d3ff80 */
uint F_00d3ff80(void)
{
  GEN_ENTER(0xd3ff80u, 0u, 0u, 0u, 0u);
  return 0x1136938;
}

/* ref: FUN_00d3ffc0 */
uint F_00d3ffc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3ffc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 << 4);
  return uVar1;
}

/* ref: FUN_00d40030 */
uint F_00d40030(unsigned int gen_a0)
{
  GEN_ENTER(0xd40030u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00d40060 */
uint F_00d40060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd40060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)((int)this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00d400a0 */
uint F_00d400a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd400a0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d400e0 */
uint F_00d400e0(unsigned int gen_a0)
{
  GEN_ENTER(0xd400e0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d40120 */
uint F_00d40120(unsigned int gen_a0)
{
  GEN_ENTER(0xd40120u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d40170 */
uint F_00d40170(unsigned int gen_a0)
{
  GEN_ENTER(0xd40170u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00d401a0 */
uint F_00d401a0(unsigned int gen_a0)
{
  GEN_ENTER(0xd401a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x3c);
  *(undefined4 *)((int)this + 0x38) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x34),uVar1 << 4);
  }
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkaDefaultAnimatedReferenceFrame::vf0 */
uint F_00d401f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd401f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = *(int *)(this + 0x3c);
  *(undefined4 *)(this + 0x38) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)(this + 0x34),iVar1 << 4);
  }
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x3c) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar2 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00d40260 */
uint F_00d40260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd40260u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d40280 */
uint F_00d40280(unsigned int gen_a0)
{
  GEN_ENTER(0xd40280u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00d40290 */
unsigned int F_00d40290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd40290u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x1136a34));
    F_00d91350(param_1 + 2,param_2);
    F_00d91350(param_1 + 0x15,param_2);
  }
  return 0;
}

/* ref: FUN_00d402c0 */
uint F_00d402c0(void)
{
  GEN_ENTER(0xd402c0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x70];
  
  F_00d91350(((undefined1 *)(gen_frame + 0x8)),0);
  F_00d91350(((undefined1 *)(gen_frame + 0x54)),0);
  return 0x1136a34;
}

/* ref: FUN_00d40310 */
unsigned int F_00d40310(unsigned int gen_a0)
{
  GEN_ENTER(0xd40310u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00d40340 */
unsigned int F_00d40340(unsigned int gen_a0)
{
  GEN_ENTER(0xd40340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00d40360 */
uint F_00d40360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd40360u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x1136a34));
  F_00d91350(in_ecx + 2,param_2);
  F_00d91350(in_ecx + 0x15,param_2);
  return (uint)in_ecx;
}

/* ref: FUN_00d40390 */
uint F_00d40390(unsigned int gen_a0)
{
  GEN_ENTER(0xd40390u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00d403c0 */
uint F_00d403c0(unsigned int gen_a0)
{
  GEN_ENTER(0xd403c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00d91510((undefined *)((int)this + 0x54));
  if (*(undefined * PTR32 *)((int)this + 0x50) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 0x50));
  }
  *(undefined4 *)((int)this + 0x50) = 0;
  uVar1 = F_00d91510((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkaBoneAttachment::vf0 */
uint F_00d403f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd403f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d91510(this + 0x54);
  if (*(undefined * PTR32 *)(this + 0x50) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)(this + 0x50));
  }
  *(undefined4 *)(this + 0x50) = 0;
  F_00d91510(this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00d40450 */
uint F_00d40450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd40450u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d40470 */
uint F_00d40470(unsigned int gen_a0)
{
  GEN_ENTER(0xd40470u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00d40480 */
uint F_00d40480(unsigned int gen_a0)
{
  GEN_ENTER(0xd40480u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x1136a94));
  }
  return (uint)param_1;
}

/* ref: FUN_00d404a0 */
uint F_00d404a0(void)
{
  GEN_ENTER(0xd404a0u, 0u, 0u, 0u, 0u);
  return 0x1136a94;
}

/* ref: FUN_00d404c0 */
uint F_00d404c0(unsigned int gen_a0)
{
  GEN_ENTER(0xd404c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkaAnimationPreviewColorContainer::vf0 */
uint F_00d404f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd404f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d80c20(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00d40530 */
uint F_00d40530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd40530u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d40550 */
uint F_00d40550(unsigned int gen_a0)
{
  GEN_ENTER(0xd40550u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00d40560 */
uint F_00d40560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd40560u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x1136b9c));
    uVar1 = F_00d91350(param_1 + 2,param_2);
  }
  return uVar1;
}

/* ref: FUN_00d40580 */
uint F_00d40580(void)
{
  GEN_ENTER(0xd40580u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x40];
  
  F_00d91350(((undefined1 *)(gen_frame + 0x8)),0);
  return 0x1136b9c;
}

/* ref: FUN_00d405e0 */
uint F_00d405e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd405e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x1136b9c));
  F_00d91350(in_ecx + 2,param_2);
  return (uint)in_ecx;
}

/* ref: FUN_00d40600 */
uint F_00d40600(unsigned int gen_a0)
{
  GEN_ENTER(0xd40600u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00d40630 */
uint F_00d40630(unsigned int gen_a0)
{
  GEN_ENTER(0xd40630u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x24);
  *(undefined4 *)((int)this + 0x20) = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x1c),(uVar1 & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0x80000000;
  uVar1 = *(uint *)((int)this + 0x18);
  *(undefined4 *)((int)this + 0x14) = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x10),(uVar1 & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0x80000000;
  if (*(undefined * PTR32 *)((int)this + 0xc) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 0xc));
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar1 = F_00d91510((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkaAnimationBinding::vf0 */
uint F_00d406c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd406c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d40630(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: hkaRaycastInterface::vf2 */
uint F_00d40750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xd40750u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: hkaRaycastInterface::vf1 */
uint F_00d40760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xd40760u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00d407f0 */
unsigned int F_00d407f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd407f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1136c44));
  *(undefined2 *)((int)this + 6) = 1;
  puVar2 = param_1;
  puVar3 = (undefined4 *)((int)this + 0x10);
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined8 *)((int)this + 0xa0) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((int)this + 0xa8) = *(undefined8 *)(param_1 + 0xe);
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined1 *)((int)this + 0xb4) = 0;
  *(undefined8 *)((int)this + 0xc0) = REFG(undefined8, 0x1138ae0);
  *(undefined8 *)((int)this + 200) = REFG(undefined8, 0x1138ae8);
  *(undefined8 *)((int)this + 0xd0) = REFG(undefined8, 0x1138ae0);
  *(undefined8 *)((int)this + 0xd8) = REFG(undefined8, 0x1138ae8);
  *(undefined8 *)((int)this + 0xe0) = REFG(undefined8, 0x1138ae0);
  *(undefined8 *)((int)this + 0xe8) = REFG(undefined8, 0x1138ae8);
  return 0;
}

/* ref: FUN_00d41b10 */
byte F_00d41b10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd41b10u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  char * pcVar1;
  
  if (*(char *)((*(int *)&gen_args[0]) + 0x84) != '\0') {
    pcVar1 = ((char *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)&gen_args[0]) + 100) + 4))))
                               (*(int * PTR32 *)((*(int *)&gen_args[0]) + 100),(int)&(*(undefined4 *)&gen_args[4]) + 3,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),
                                *(undefined4 *)((*(int *)&gen_args[0]) + 0x80),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]))));
    return *pcVar1 != '\0';
  }
  pcVar1 = ((char *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)&gen_args[0]) + 100) + 8))))
                             (*(int * PTR32 *)((*(int *)&gen_args[0]) + 100),(int)&(*(undefined4 *)&gen_args[4]) + 3,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),
                              (*(undefined4 *)&gen_args[4]))));
  return *pcVar1 != '\0';
}

/* ref: FUN_00d41b80 */
uint F_00d41b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd41b80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *param_2;
  *in_ecx = uVar1;
  in_ecx[1] = uVar1;
  in_ecx[2] = uVar1;
  in_ecx[3] = uVar1;
  return (uint)param_2;
}

/* ref: FUN_00d41ba0 */
uint F_00d41ba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd41ba0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  fVar4 = param_3[1];
  fVar5 = param_3[2];
  fVar6 = param_3[3];
  fVar7 = param_1[1];
  fVar8 = param_1[2];
  fVar9 = param_1[3];
  *(float *)this = *param_1 - *param_2 * *param_3;
  *(float *)((int)this + 4) = fVar7 - fVar1 * fVar4;
  *(float *)((int)this + 8) = fVar8 - fVar2 * fVar5;
  *(float *)((int)this + 0xc) = fVar9 - fVar3 * fVar6;
  return (uint)param_1;
}

/* ref: FUN_00d41bc0 */
uint F_00d41bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd41bc0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *in_ecx = *param_2 & 0x7fffffff;
  in_ecx[1] = uVar1 & 0x7fffffff;
  in_ecx[2] = uVar2 & 0x7fffffff;
  in_ecx[3] = uVar3 & 0x7fffffff;
  return (uint)param_2;
}

/* ref: FUN_00d41be0 */
uint F_00d41be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd41be0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx + param_2 * 4;
}

/* ref: FUN_00d41bf0 */
uint F_00d41bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd41bf0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  
  uVar1 = gen_movmskps(&(*(gen_v16 *)(*(undefined * PTR32 *)&gen_args[0])));
  return (uint)((uVar1 & (*(uint *)&gen_args[1])) == (*(uint *)&gen_args[1]));
}

/* ref: FUN_00d41c10 */
uint F_00d41c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd41c10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *param_2;
  *in_ecx = uVar1;
  in_ecx[1] = uVar1;
  in_ecx[2] = uVar1;
  in_ecx[3] = uVar1;
  return (uint)param_2;
}

/* ref: FUN_00d41c30 */
uint F_00d41c30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd41c30u, gen_a0, gen_a1, gen_a2, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
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
  *param_2 = *param_3 + *in_ecx;
  param_2[1] = fVar1 + fVar4;
  param_2[2] = fVar2 + fVar5;
  param_2[3] = fVar3 + fVar6;
  return (uint)param_2;
}

/* ref: FUN_00d41c50 */
uint F_00d41c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd41c50u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  return (uint)!(*param_2 <= *in_ecx);
}

/* ref: FUN_00d41c70 */
uint F_00d41c70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd41c70u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  
  fVar1 = *in_ecx;
  return (uint)((!GEN_ISNAN(fVar1) && !GEN_ISNAN(*param_2)) && (!(fVar1 < *param_2) && fVar1 != *param_2));
}

/* ref: FUN_00d41c90 */
uint F_00d41c90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd41c90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
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
  *(float *)this = *(float *)this - *param_1 * *param_2;
  *(float *)((int)this + 4) = *(float *)((int)this + 4) - fVar1 * fVar4;
  *(float *)((int)this + 8) = *(float *)((int)this + 8) - fVar2 * fVar5;
  *(float *)((int)this + 0xc) = *(float *)((int)this + 0xc) - fVar3 * fVar6;
  return (uint)param_1;
}

/* ref: FUN_00d41cb0 */
uint F_00d41cb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd41cb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
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
  *(float *)this = *(float *)this - *param_1 * *param_2;
  *(float *)((int)this + 4) = *(float *)((int)this + 4) - fVar1 * fVar4;
  *(float *)((int)this + 8) = *(float *)((int)this + 8) - fVar2 * fVar5;
  *(float *)((int)this + 0xc) = *(float *)((int)this + 0xc) - fVar3 * fVar6;
  return (uint)param_1;
}

/* ref: FUN_00d41cd0 */
uint F_00d41cd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd41cd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
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
  *(float *)this = *param_1 * *param_2 + *(float *)this;
  *(float *)((int)this + 4) = fVar1 * fVar4 + *(float *)((int)this + 4);
  *(float *)((int)this + 8) = fVar2 * fVar5 + *(float *)((int)this + 8);
  *(float *)((int)this + 0xc) = fVar3 * fVar6 + *(float *)((int)this + 0xc);
  return (uint)param_1;
}

/* ref: FUN_00d41cf0 */
uint F_00d41cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd41cf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
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
  *(float *)this = *param_1 - *param_2;
  *(float *)((int)this + 4) = fVar1 - fVar4;
  *(float *)((int)this + 8) = fVar2 - fVar5;
  *(float *)((int)this + 0xc) = fVar3 - fVar6;
  return (uint)param_1;
}

/* ref: FUN_00d41d10 */
uint F_00d41d10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd41d10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  fVar4 = param_3[1];
  fVar5 = param_3[2];
  fVar6 = param_3[3];
  fVar7 = param_1[1];
  fVar8 = param_1[2];
  fVar9 = param_1[3];
  *(float *)this = *param_2 * *param_3 + *param_1;
  *(float *)((int)this + 4) = fVar1 * fVar4 + fVar7;
  *(float *)((int)this + 8) = fVar2 * fVar5 + fVar8;
  *(float *)((int)this + 0xc) = fVar3 * fVar6 + fVar9;
  return (uint)param_1;
}

/* ref: FUN_00d41d30 */
uint F_00d41d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd41d30u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d41d40 */
uint F_00d41d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd41d40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  fVar4 = param_3[1];
  fVar5 = param_3[2];
  fVar6 = param_3[3];
  fVar7 = param_1[1];
  fVar8 = param_1[2];
  fVar9 = param_1[3];
  *(float *)this = *param_2 * *param_3 + *param_1;
  *(float *)((int)this + 4) = fVar1 * fVar4 + fVar7;
  *(float *)((int)this + 8) = fVar2 * fVar5 + fVar8;
  *(float *)((int)this + 0xc) = fVar3 * fVar6 + fVar9;
  return (uint)param_1;
}

/* ref: FUN_00d41d70 */
uint F_00d41d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd41d70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(in_ecx + 0x10) = *param_2;
  *(undefined4 *)(in_ecx + 0x14) = uVar1;
  *(undefined4 *)(in_ecx + 0x18) = uVar2;
  *(undefined4 *)(in_ecx + 0x1c) = uVar3;
  return (uint)param_2;
}

/* ref: FUN_00d41da0 */
uint F_00d41da0(unsigned int gen_a0)
{
  GEN_ENTER(0xd41da0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)&REFG(undefined, 0x1138bdc);
  uVar2 = *(undefined4 *)&REFG(undefined, 0x1138bd8);
  uVar1 = *(undefined4 *)&REFG(undefined, 0x1138bd4);
  *param_1 = *(undefined4 *)&REFG(undefined, 0x1138bd0);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return (uint)param_1;
}

/* ref: FUN_00d41dc0 */
uint F_00d41dc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd41dc0u, gen_a0, gen_a1, gen_a2, 0u);
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
  *param_2 = -(uint)(*in_ecx <= *param_3);
  param_2[1] = -(uint)(fVar4 <= fVar1);
  param_2[2] = -(uint)(fVar5 <= fVar2);
  param_2[3] = -(uint)(fVar6 <= fVar3);
  return (uint)param_2;
}

/* ref: FUN_00d41df0 */
uint F_00d41df0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd41df0u, gen_a0, gen_a1, gen_a2, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *param_3 * *in_ecx;
  fVar2 = param_3[1] * in_ecx[1];
  fVar3 = param_3[2] * in_ecx[2];
  *param_2 = (fVar2 + fVar1) + fVar3;
  param_2[1] = (fVar2 + fVar1) + fVar3;
  param_2[2] = (fVar2 + fVar1) + fVar3;
  param_2[3] = (fVar2 + fVar1) + fVar3;
  return (uint)param_2;
}

/* ref: FUN_00d41e20 */
byte F_00d41e20(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xd41e20u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  undefined1 auVar1 [16];
  undefined4 uVar2;
  
  (*(undefined4 *)((char *)&auVar1 + 4)) = -(uint)(ABS(in_ecx[1] - param_2[1]) <= param_3);
  (*(undefined4 *)((char *)&auVar1 + 0)) = -(uint)(ABS(*in_ecx - *param_2) <= param_3);
  (*(undefined4 *)((char *)&auVar1 + 8)) = -(uint)(ABS(in_ecx[2] - param_2[2]) <= param_3);
  (*(undefined4 *)((char *)&auVar1 + 12)) = -(uint)(ABS(in_ecx[3] - param_2[3]) <= param_3);
  uVar2 = gen_movmskps(&(auVar1));
  return ((byte)uVar2 & 7) == 7;
}

/* ref: FUN_00d41f50 */
uint F_00d41f50(unsigned int gen_a0)
{
  GEN_ENTER(0xd41f50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkaFootPlacementIkSolver::vf0 */
uint F_00d41f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd41f80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00d41fc0 */
uint F_00d41fc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd41fc0u, gen_a0, gen_a1, 0u, 0u);
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
  fVar5 = *(float *)&REFG(undefined, 0x1136bf4) - ((*(float *)((char *)&auVar1 + 4)) * fVar2) * fVar2;
  fVar6 = *(float *)&REFG(undefined, 0x1136bf8) - ((*(float *)((char *)&auVar1 + 8)) * fVar3) * fVar3;
  fVar7 = *(float *)&REFG(undefined, 0x1136bfc) - ((*(float *)((char *)&auVar1 + 12)) * fVar4) * fVar4;
  fVar2 = *(float *)&REFG(undefined, 0x1136c04) * fVar2;
  fVar3 = *(float *)&REFG(undefined, 0x1136c08) * fVar3;
  fVar4 = *(float *)&REFG(undefined, 0x1136c0c) * fVar4;
  *param_2 = ~-(uint)((*(float *)((char *)&auVar1 + 0)) <= 0.0) &
             (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1136bf0) - ((*(float *)((char *)&auVar1 + 0)) * fVar8) * fVar8) *
                               (*(float *)&REFG(undefined, 0x1136c00) * fVar8));
  param_2[1] = ~-(uint)((*(float *)((char *)&auVar1 + 4)) <= 0.0) & (uint)gen_fl2bits(fVar5 * fVar2);
  param_2[2] = ~-(uint)((*(float *)((char *)&auVar1 + 8)) <= 0.0) & (uint)gen_fl2bits(fVar6 * fVar3);
  param_2[3] = ~-(uint)((*(float *)((char *)&auVar1 + 12)) <= 0.0) & (uint)gen_fl2bits(fVar7 * fVar4);
  return (uint)param_2;
}

/* ref: FUN_00d42330 */
uint F_00d42330(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xd42330u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x1136ca4));
  param_1[2] = param_2;
  param_1[3] = (undefined4)gen_fl2bits(param_3);
  return (uint)param_1;
}

/* ref: FUN_00d428f0 */
uint F_00d428f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd428f0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x20 + *in_ecx;
}

/* ref: FUN_00d42900 */
uint F_00d42900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd42900u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  *in_ecx = *in_ecx;
  in_ecx[1] = in_ecx[1];
  in_ecx[2] = in_ecx[2];
  in_ecx[3] = uVar1;
  return param_2;
}

/* ref: FUN_00d42940 */
uint F_00d42940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd42940u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  gen_v16 * param_3 = (gen_v16 *)(uintptr_t)gen_a2;
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 in_XMM2 [16] = {0};
  undefined1 auVar8 [16];
  
  memcpy(&(auVar1), &(*param_3), sizeof(*param_3) < sizeof(auVar1) ? sizeof(*param_3) : sizeof(auVar1));
  gen_rcpps(&(auVar8), &(in_XMM2), &(auVar1));
  fVar5 = *(float *)&REFG(undefined, 0x1136c64) - (*(float *)((char *)&auVar1 + 4)) * (*(float *)((char *)&auVar8 + 4));
  fVar6 = *(float *)&REFG(undefined, 0x1136c68) - (*(float *)((char *)&auVar1 + 8)) * (*(float *)((char *)&auVar8 + 8));
  fVar7 = *(float *)&REFG(undefined, 0x1136c6c) - (*(float *)((char *)&auVar1 + 12)) * (*(float *)((char *)&auVar8 + 12));
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  *param_1 = *param_2 * ((*(float *)&REFG(undefined, 0x1136c60) - (*(float *)((char *)&auVar1 + 0)) * (*(float *)((char *)&auVar8 + 0))) * (*(float *)((char *)&auVar8 + 0)));
  param_1[1] = fVar2 * (fVar5 * (*(float *)((char *)&auVar8 + 4)));
  param_1[2] = fVar3 * (fVar6 * (*(float *)((char *)&auVar8 + 8)));
  param_1[3] = fVar4 * (fVar7 * (*(float *)((char *)&auVar8 + 12)));
  return (uint)param_3;
}

/* ref: FUN_00d429b0 */
uint F_00d429b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd429b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a2;
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 in_XMM2 [16] = {0};
  undefined1 auVar8 [16];
  
  memcpy(&(auVar1), &(*param_2), sizeof(*param_2) < sizeof(auVar1) ? sizeof(*param_2) : sizeof(auVar1));
  gen_rcpps(&(auVar8), &(in_XMM2), &(auVar1));
  fVar5 = *(float *)&REFG(undefined, 0x1136c64) - (*(float *)((char *)&auVar1 + 4)) * (*(float *)((char *)&auVar8 + 4));
  fVar6 = *(float *)&REFG(undefined, 0x1136c68) - (*(float *)((char *)&auVar1 + 8)) * (*(float *)((char *)&auVar8 + 8));
  fVar7 = *(float *)&REFG(undefined, 0x1136c6c) - (*(float *)((char *)&auVar1 + 12)) * (*(float *)((char *)&auVar8 + 12));
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = param_1[3];
  *(float *)this =
       *param_1 * ((*(float *)&REFG(undefined, 0x1136c60) - (*(float *)((char *)&auVar1 + 0)) * (*(float *)((char *)&auVar8 + 0))) * (*(float *)((char *)&auVar8 + 0)));
  *(float *)((int)this + 4) = fVar2 * (fVar5 * (*(float *)((char *)&auVar8 + 4)));
  *(float *)((int)this + 8) = fVar3 * (fVar6 * (*(float *)((char *)&auVar8 + 8)));
  *(float *)((int)this + 0xc) = fVar4 * (fVar7 * (*(float *)((char *)&auVar8 + 12)));
  return (uint)param_2;
}

/* ref: FUN_00d42a20 */
uint F_00d42a20(unsigned int gen_a0)
{
  GEN_ENTER(0xd42a20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkaCcdIkSolver::vf0 */
uint F_00d42a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd42a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00d42a90 */
uint F_00d42a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd42a90u, gen_a0, gen_a1, 0u, 0u);
  gen_v16 * in_ecx = (gen_v16 *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 in_XMM3 [16] = {0};
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  
  memcpy(&(auVar9), &(*in_ecx), sizeof(*in_ecx) < sizeof(auVar9) ? sizeof(*in_ecx) : sizeof(auVar9));
  fVar1 = (*(float *)((char *)&auVar9 + 0));
  fVar2 = (*(float *)((char *)&auVar9 + 4));
  fVar3 = (*(float *)((char *)&auVar9 + 8));
  fVar4 = (*(float *)((char *)&auVar9 + 12));
  gen_rsqrtps(&(auVar9), &(in_XMM3), &(auVar9));
  fVar8 = (*(float *)((char *)&auVar9 + 0));
  fVar10 = (*(float *)((char *)&auVar9 + 4));
  fVar11 = (*(float *)((char *)&auVar9 + 8));
  fVar12 = (*(float *)((char *)&auVar9 + 12));
  fVar5 = *(float *)&REFG(undefined, 0x1136c74) - (fVar2 * fVar10) * fVar10;
  fVar6 = *(float *)&REFG(undefined, 0x1136c78) - (fVar3 * fVar11) * fVar11;
  fVar7 = *(float *)&REFG(undefined, 0x1136c7c) - (fVar4 * fVar12) * fVar12;
  fVar10 = *(float *)&REFG(undefined, 0x1136c84) * fVar10;
  fVar11 = *(float *)&REFG(undefined, 0x1136c88) * fVar11;
  fVar12 = *(float *)&REFG(undefined, 0x1136c8c) * fVar12;
  *param_2 = ~-(uint)(fVar1 <= 0.0) &
             (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1136c70) - (fVar1 * fVar8) * fVar8) *
                               (*(float *)&REFG(undefined, 0x1136c80) * fVar8)) * fVar1);
  param_2[1] = ~-(uint)(fVar2 <= 0.0) & (uint)gen_fl2bits((fVar5 * fVar10) * fVar2);
  param_2[2] = ~-(uint)(fVar3 <= 0.0) & (uint)gen_fl2bits((fVar6 * fVar11) * fVar3);
  param_2[3] = ~-(uint)(fVar4 <= 0.0) & (uint)gen_fl2bits((fVar7 * fVar12) * fVar4);
  return (uint)param_2;
}

/* ref: hkaDefaultAnimationControl::vf14 */
uint F_00d42db0(unsigned int gen_a0)
{
  GEN_ENTER(0xd42db0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x90) == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x90) + 8)));
}

/* ref: hkaDefaultAnimationControl::vf4 */
uint F_00d42e20(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd42e20u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  float fVar1;
  int * piVar2;
  int iVar3;
  float fVar4;
  
  fVar4 = (*((float *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 0x28) + 0xc))) + 0xc))) - *(float *)(param_1 + 0x80))
          - *(float *)(param_1 + 0x7c);
  if (fVar4 <= 0.0) {
    *param_3 = *(float *)(param_1 + 8);
    *param_4 = 0;
    return (uint)param_3;
  }
  piVar2 = param_4;
  *param_3 = (*(float *)(param_1 + 8) - *(float *)(param_1 + 0x7c)) +
             *(float *)(param_1 + 0x40) * param_2;
  *param_4 = 0;
  fVar1 = *param_3;
  if (fVar4 < fVar1) {
    iVar3 = (int)(fVar1 / fVar4);
    *param_4 = iVar3;
    if ((0 < (int)*(uint *)(param_1 + 0x4c)) &&
       (*(uint *)(param_1 + 0x4c) <= (uint)(*(int *)(param_1 + 0x44) + iVar3))) {
      *param_3 = fVar4;
      *param_4 = (*(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x44)) + -1;
      *param_3 = *param_3 + *(float *)(param_1 + 0x7c);
      return (uint)piVar2;
    }
  }
  else {
    if (!(fVar1 < 0.0)) goto LAB_00d42f22;
    iVar3 = (int)(fVar1 / fVar4) + -1;
    *param_4 = iVar3;
    if ((0 < *(int *)(param_1 + 0x4c)) &&
       (*(int *)(param_1 + 0x4c) + 1U <= (uint)(*(int *)(param_1 + 0x48) - iVar3))) {
      *param_3 = 0.0;
      *param_4 = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x48);
      *param_3 = *param_3 + *(float *)(param_1 + 0x7c);
      return (uint)piVar2;
    }
  }
  *param_3 = *param_3 - (float)iVar3 * fVar4;
LAB_00d42f22: ;
  *param_3 = *param_3 + *(float *)(param_1 + 0x7c);
  return (uint)piVar2;
}

/* ref: hkaDefaultAnimationControl::vf8 */
uint F_00d42f40(unsigned int gen_a0)
{
  GEN_ENTER(0xd42f40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x90) == 0) {
    return *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(in_ecx + 0x28) + 0xc))) + 0x10)));
  }
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x90) + 0x28)));
}

/* ref: hkaDefaultAnimationControl::vf9 */
uint F_00d42f60(unsigned int gen_a0)
{
  GEN_ENTER(0xd42f60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(in_ecx + 0x28) + 0xc))) + 0x14)));
}

/* ref: hkaDefaultAnimationControl::vf10 */
uint F_00d42f70(unsigned int gen_a0)
{
  GEN_ENTER(0xd42f70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x90) == 0) {
    return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x28) + 0x14)));
  }
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x90) + 0x28)));
}

/* ref: hkaDefaultAnimationControl::vf11 */
uint F_00d42f90(unsigned int gen_a0)
{
  GEN_ENTER(0xd42f90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x90) == 0) {
    return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x28) + 0x10)));
  }
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x90) + 0x24)));
}

/* ref: hkaDefaultAnimationControl::vf6 */
uint F_00d42fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd42fb0u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: hkaDefaultAnimationControl::vf7 */
uint F_00d42ff0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd42ff0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  
  F_00d82ba0(param_1,param_2,&(*(undefined4 *)(gen_frame + 0x0)),*(float *)(param_1 + 0x7c),*(float *)(param_1 + 0x80));
  if (*(int *)(param_1 + 0x90) == 0) {
    *param_3 = (*(undefined4 *)(gen_frame + 0x0));
    param_3[1] = (*(undefined4 *)(gen_frame + 0x4));
    param_3[2] = (*(undefined4 *)(gen_frame + 0x8));
    param_3[3] = (*(undefined4 *)(gen_frame + 0xc));
    param_3[4] = (*(undefined4 *)(gen_frame + 0x10));
    param_3[5] = (*(undefined4 *)(gen_frame + 0x14));
    param_3[6] = (*(undefined4 *)(gen_frame + 0x18));
    param_3[7] = (*(undefined4 *)(gen_frame + 0x1c));
    param_3[8] = (*(undefined4 *)(gen_frame + 0x20));
    param_3[9] = (*(undefined4 *)(gen_frame + 0x24));
    param_3[10] = (*(undefined4 *)(gen_frame + 0x28));
    param_3[0xb] = (*(undefined4 *)(gen_frame + 0x2c));
    return (uint)param_3;
  }
  uVar1 = F_00d65320(*((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x90) + 8))),&(*(undefined4 *)(gen_frame + 0x0)),param_3);
  return uVar1;
}

/* ref: hkaDefaultAnimationControl::vf3 */
unsigned int F_00d43090(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xd43090u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  bool bVar2;
  bool bVar3;
  float * pfVar4;
  code * pcVar5;
  int * piVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int local_18;
  
  fVar11 = REFG(float, 0x1136c54);
  if (((*(int *)(param_1 + 0x28) != 0) &&
      (iVar8 = *((int *)GEN_TOP((*(int *)(param_1 + 0x28) + 0xc))), iVar8 != 0)) &&
     (fVar11 = (*(float *)(iVar8 + 0xc) - *(float *)(param_1 + 0x80)) - *(float *)(param_1 + 0x7c),
     fVar11 < 0.0)) {
    fVar11 = 0.0;
  }
  fVar9 = *(float *)(param_1 + 8) - *(float *)(param_1 + 0x7c);
  *(float *)(param_1 + 8) = fVar9;
  if (fVar9 < 0.0) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (GEN_ISNAN(fVar11) != (GEN_ISNAN(fVar11) || fVar11 == 0.0)) goto LAB_00d43360;
  fVar9 = *(float *)(param_1 + 0x40) * param_2 + *(float *)(param_1 + 8);
  *(float *)(param_1 + 8) = fVar9;
  local_18 = 0;
  if (fVar11 < fVar9) {
    local_18 = (int)(fVar9 / fVar11);
    fVar9 = fVar9 - (float)local_18 * fVar11;
    *(float *)(param_1 + 8) = fVar9;
    if (!(0.0 < fVar9)) {
      fVar9 = 0.0;
    }
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + local_18;
    *(float *)(param_1 + 8) = fVar9;
  }
  else if (fVar9 < 0.0) {
    iVar8 = (int)gen_bits2f((uint)gen_fl2bits(fVar9 / fVar11) ^ REFG(uint, 0x10920d0));
    fVar9 = (float)(iVar8 + 1) * fVar11 + fVar9;
    *(float *)(param_1 + 8) = fVar9;
    if (!(fVar9 < fVar11)) {
      fVar9 = fVar11;
    }
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + iVar8 + 1;
    *(float *)(param_1 + 8) = fVar9;
    local_18 = -1 - iVar8;
  }
  uVar1 = *(uint *)(param_1 + 0x4c);
  if (0 < (int)uVar1) {
    if (*(uint *)(param_1 + 0x44) < uVar1) {
      if (*(uint *)(param_1 + 0x48) < uVar1 + 1) goto LAB_00d431c7;
      *(undefined4 *)(param_1 + 8) = 0;
    }
    else {
      *(float *)(param_1 + 8) = fVar11;
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
LAB_00d431c7: ;
  fVar11 = REFG(float, 0x1087f04);
  pfVar4 = (float *)(param_1 + 0x74);
  bVar3 = false;
  if (((!GEN_ISNAN(REFG(float, 0x1087f04)) && !GEN_ISNAN(*pfVar4)) &&
       (!(REFG(float, 0x1087f04) < *pfVar4) && REFG(uint, 0x1087f04) != *pfVar4)) &&
     (fVar9 = *(float *)(param_1 + 0x70) * ABS(param_2) + *(float *)(param_1 + 0x74),
     bVar2 = REFG(float, 0x1087f04) <= fVar9, *(float *)(param_1 + 0x74) = fVar9, bVar2)) {
    *(float *)(param_1 + 0x74) = fVar11;
    bVar3 = true;
    *(uint *)(param_1 + 0x78) = (uint)(*(int *)(param_1 + 0x78) != 0) * 2 + 1;
  }
  if ((*(int *)(param_1 + 0x78) == 1) ||
     (pfVar4 = (float *)(param_1 + 0x60), *(int *)(param_1 + 0x78) == 0)) {
    pfVar4 = (float *)(param_1 + 0x50);
  }
  fVar11 = *pfVar4;
  fVar9 = *(float *)(param_1 + 0x74);
  fVar10 = pfVar4[1] * REFG(float, 0x1087ef8);
  *(float *)(param_1 + 0xc) =
       ((((((fVar10 - fVar11) - pfVar4[2] * REFG(float, 0x1087ef8)) + pfVar4[3]) * ((fVar9 * fVar9) * fVar9) +
         ((fVar11 * REFG(float, 0x1087ef8) - pfVar4[1] * REFG(float, 0x10adb9c)) + pfVar4[2] * REFG(float, 0x1087ef8)) *
         (fVar9 * fVar9)) + (fVar10 - fVar11 * REFG(float, 0x1087ef8)) * fVar9) + fVar11) *
       *(float *)(param_1 + 0x3c);
  if ((local_18 != 0) && (iVar8 = 0, 0 < *(int *)(param_1 + 0x88))) {
    do {
      if (local_18 < 1) {
        piVar6 = *((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x84) + iVar8 * 4)));
        iVar7 = -local_18;
        pcVar5 = *(gen_code32 *)(*piVar6 + 4);
      }
      else {
        piVar6 = *((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x84) + iVar8 * 4)));
        pcVar5 = *(gen_code32 *)*piVar6;
        iVar7 = local_18;
      }
      (*pcVar5)(piVar6,param_1,(undefined4)gen_fl2bits(param_2),iVar7);
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(param_1 + 0x88));
  }
  if ((bVar3) && (iVar8 = 0, 0 < *(int *)(param_1 + 0x88))) {
    do {
      if ((*(int *)(param_1 + 0x78) == 1) || (*(int *)(param_1 + 0x78) == 0)) {
        piVar6 = *((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x84) + iVar8 * 4)));
        pcVar5 = *(gen_code32 *)(*piVar6 + 8);
      }
      else {
        piVar6 = *((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x84) + iVar8 * 4)));
        pcVar5 = *(gen_code32 *)(*piVar6 + 0xc);
      }
      (*pcVar5)(piVar6,param_1,(undefined4)gen_fl2bits(param_2));
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(param_1 + 0x88));
  }
LAB_00d43360: ;
  *(float *)(param_1 + 8) = *(float *)(param_1 + 0x7c) + *(float *)(param_1 + 8);
  return 0;
}

/* ref: hkaDefaultAnimationControl::vf5 */
uint F_00d43380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd43380u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  short sVar7;
  uint uVar8;
  LPVOID pvVar9;
  undefined4 * puVar10;
  int iVar11;
  undefined4 * puVar12;
  uint local_8;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x28) + 0xc)));
  if (*(int *)(this + 0x90) == 0) {
    uVar8 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(this + 8),param_1,param_2);
    return uVar8;
  }
  iVar2 = piVar1[4];
  pvVar9 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  local_8 = *(uint *)((int)pvVar9 + 0xc);
  uVar8 = iVar2 * 0x30 + 0x7fU & 0xffffff80;
  if ((*(int *)((int)pvVar9 + 8) < (int)uVar8) || (*(uint *)((int)pvVar9 + 0x10) < local_8 + uVar8))
  {
    local_8 = F_00d94390(pvVar9,uVar8);
  }
  else {
    *(uint *)((int)pvVar9 + 0xc) = local_8 + uVar8;
  }
  ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x28) + 0xc))) + 0xc))))
            (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x28) + 0xc))),*(undefined4 *)(this + 8),local_8,param_2);
  iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x90) + 8))) + 0x14)));
  iVar3 = *((int *)GEN_TOP((*(int *)(this + 0x90) + 0x28)));
  iVar11 = 0;
  sVar7 = 0;
  if (0 < iVar3) {
    do {
      puVar10 = ((undefined4 *)GEN_TOP((*((short *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x90) + 0x24))) + iVar11 * 2))) * 0x30 +
                *(int *)(iVar2 + 0x24))));
      uVar4 = puVar10[1];
      uVar5 = puVar10[2];
      uVar6 = puVar10[3];
      puVar12 = (undefined4 *)(iVar11 * 0x30 + param_1);
      *puVar12 = *puVar10;
      puVar12[1] = uVar4;
      puVar12[2] = uVar5;
      puVar12[3] = uVar6;
      uVar4 = puVar10[5];
      uVar5 = puVar10[6];
      uVar6 = puVar10[7];
      puVar12[4] = puVar10[4];
      puVar12[5] = uVar4;
      puVar12[6] = uVar5;
      puVar12[7] = uVar6;
      uVar4 = puVar10[9];
      uVar5 = puVar10[10];
      uVar6 = puVar10[0xb];
      sVar7 = sVar7 + 1;
      puVar12[8] = puVar10[8];
      puVar12[9] = uVar4;
      puVar12[10] = uVar5;
      puVar12[0xb] = uVar6;
      iVar11 = (int)sVar7;
    } while (iVar11 < iVar3);
  }
  F_00d657d0(*((undefined4 *)GEN_TOP((*(int *)(this + 0x90) + 8))),local_8,param_1,
               *((undefined4 *)GEN_TOP((*(int *)(this + 0x90) + 0xc))),
               *((undefined4 *)GEN_TOP((*(int *)(this + 0x90) + 0x18))),
               (uint)(*((char *)GEN_TOP((*(int *)(this + 0x28) + 0x28))) == '\x01'),0,0);
  pvVar9 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if ((((int)uVar8 <= *(int *)((int)pvVar9 + 8)) && (uVar8 + local_8 == *(int *)((int)pvVar9 + 0xc))
      ) && (*(uint *)((int)pvVar9 + 0x14) != local_8)) {
    *(uint *)((int)pvVar9 + 0xc) = local_8;
    return (uint)pvVar9;
  }
  uVar8 = F_00d945c0(pvVar9,local_8,uVar8);
  return uVar8;
}

/* ref: FUN_00d43510 */
uint F_00d43510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd43510u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  F_00d82c40(this,param_1);
  uVar5 = *(undefined4 *)&REFG(undefined, 0x1136ccc);
  uVar4 = *(undefined4 *)&REFG(undefined, 0x1136cc8);
  uVar3 = *(undefined4 *)&REFG(undefined, 0x1136cc4);
  uVar2 = *(undefined4 *)&REFG(undefined, 0x1136cc0);
  uVar1 = REFG(float, 0x1087f04);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x1136ce4));
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0x80000000;
  *(undefined4 *)((int)this + 0x50) = uVar2;
  *(undefined4 *)((int)this + 0x54) = uVar3;
  *(undefined4 *)((int)this + 0x58) = uVar4;
  *(undefined4 *)((int)this + 0x5c) = uVar5;
  uVar4 = *(undefined4 *)&REFG(undefined, 0x1136cdc);
  uVar3 = *(undefined4 *)&REFG(undefined, 0x1136cd8);
  uVar2 = *(undefined4 *)&REFG(undefined, 0x1136cd4);
  *(undefined4 *)((int)this + 0x60) = *(undefined4 *)&REFG(undefined, 0x1136cd0);
  *(undefined4 *)((int)this + 100) = uVar2;
  *(undefined4 *)((int)this + 0x68) = uVar3;
  *(undefined4 *)((int)this + 0x6c) = uVar4;
  *(undefined4 *)((int)this + 0x28) = param_1;
  *(undefined4 *)((int)this + 0x3c) = uVar1;
  *(undefined4 *)((int)this + 0x40) = uVar1;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = param_3;
  *(undefined4 *)((int)this + 0x90) = 0;
  if ((char)param_2 == '\0') {
    *(undefined4 *)((int)this + 0x78) = 3;
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  else {
    *(undefined4 *)((int)this + 0x78) = 1;
    *(undefined4 *)((int)this + 0xc) = uVar1;
  }
  *(undefined4 *)((int)this + 0x70) = REFG(float, 0x1094880);
  *(undefined4 *)((int)this + 0x74) = uVar1;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  return (uint)this;
}

/* ref: FUN_00d435d0 */
uint F_00d435d0(unsigned int gen_a0)
{
  GEN_ENTER(0xd435d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  int iVar1;
  uint uVar2;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x90);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x1136ce4));
  if (this_00 != (undefined *)0x0) {
    F_00d91a80(this_00);
  }
  iVar1 = *(int *)((int)this + 0x8c);
  *(undefined4 *)((int)this + 0x88) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x84),iVar1 * 4);
  }
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0x80000000;
  uVar2 = F_00d82db0(this);
  return uVar2;
}

/* ref: FUN_00d43640 */
uint F_00d43640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd43640u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1136d24));
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0x80000000;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0x80000000;
  *(undefined * PTR32 *)((int)this + 8) = param_1;
  F_00d919e0(param_1);
  F_00d66360(param_1,param_2,(int)this + 0xc,(int)this + 0x18,(int)this + 0x24);
  return (uint)this;
}

/* ref: FUN_00d436b0 */
uint F_00d436b0(unsigned int gen_a0)
{
  GEN_ENTER(0xd436b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  
  this_00 = *(undefined * PTR32 *)((int)this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1136d24));
  F_00d91a80(this_00);
  uVar1 = *(uint *)((int)this + 0x2c);
  *(undefined4 *)((int)this + 0x28) = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x24),(uVar1 & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0x80000000;
  uVar1 = *(uint *)((int)this + 0x20);
  *(undefined4 *)((int)this + 0x1c) = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x18),(uVar1 & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0x80000000;
  uVar1 = *(uint *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x10) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0xc),
                       (uVar1 & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: FUN_00d43760 */
unsigned int F_00d43760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd43760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  LPVOID pvVar1;
  undefined * this_00;
  uint uVar2;
  
  if (*(undefined * PTR32 *)((int)this + 0x90) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 0x90));
  }
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))
                                (*(int * PTR32 *)((int)pvVar1 + 0x2c),0x30)));
    *(undefined2 *)((int)this_00 + 4) = 0x30;
    uVar2 = F_00d43640(this_00,param_1,*(undefined4 *)((int)this + 0x28));
    *(uint *)((int)this + 0x90) = uVar2;
    return 0;
  }
  *(undefined4 *)((int)this + 0x90) = 0;
  return 0;
}

/* ref: FUN_00d437d0 */
uint F_00d437d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd437d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  F_00d82c40(this,param_1[10]);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x1136ce4));
  *(undefined4 *)((int)this + 0x8c) = 0x80000000;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(int *)((int)this + 0x3c) = param_1[0xf];
  *(int *)((int)this + 0x40) = param_1[0x10];
  *(int *)((int)this + 0x44) = param_1[0x11];
  *(int *)((int)this + 0x48) = param_1[0x12];
  iVar1 = param_1[0x15];
  iVar2 = param_1[0x16];
  iVar3 = param_1[0x17];
  *(int *)((int)this + 0x50) = param_1[0x14];
  *(int *)((int)this + 0x54) = iVar1;
  *(int *)((int)this + 0x58) = iVar2;
  *(int *)((int)this + 0x5c) = iVar3;
  iVar1 = param_1[0x19];
  iVar2 = param_1[0x1a];
  iVar3 = param_1[0x1b];
  *(int *)((int)this + 0x60) = param_1[0x18];
  *(int *)((int)this + 100) = iVar1;
  *(int *)((int)this + 0x68) = iVar2;
  *(int *)((int)this + 0x6c) = iVar3;
  *(int *)((int)this + 0x70) = param_1[0x1c];
  *(int *)((int)this + 0x74) = param_1[0x1d];
  *(int *)((int)this + 0x78) = param_1[0x1e];
  *(int *)((int)this + 0x7c) = param_1[0x1f];
  *(int *)((int)this + 0x80) = param_1[0x20];
  uVar4 = ((code *)*(gen_code32 *)(*param_1 + 0x38))(param_1);
  F_00d43760(this,uVar4);
  return (uint)this;
}

/* ref: FUN_00d438b0 */
uint F_00d438b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd438b0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00d438e0 */
uint F_00d438e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd438e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00d43900 */
uint F_00d43900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd43900u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx + param_2 * 4;
}

/* ref: FUN_00d43910 */
uint F_00d43910(unsigned int gen_a0)
{
  GEN_ENTER(0xd43910u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  *(short *)(uVar2 + 4) = (short)param_1;
  return uVar2;
}

/* ref: FUN_00d43960 */
uint F_00d43960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd43960u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d439a0 */
uint F_00d439a0(unsigned int gen_a0)
{
  GEN_ENTER(0xd439a0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d439e0 */
uint F_00d439e0(unsigned int gen_a0)
{
  GEN_ENTER(0xd439e0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d43a20 */
uint F_00d43a20(unsigned int gen_a0)
{
  GEN_ENTER(0xd43a20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkaDefaultAnimationControl::vf0 */
uint F_00d43a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd43a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d435d0(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00d43a90 */
uint F_00d43a90(unsigned int gen_a0)
{
  GEN_ENTER(0xd43a90u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkaDefaultAnimationControlMapperData::vf0 */
uint F_00d43ac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd43ac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d436b0(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: hkaAnimationControlListener::vf0 */
unsigned int F_00d43b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd43b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: hkaAnimationControlListener::vf1 */
uint F_00d43b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd43b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1136d34));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00d43c70 */
unsigned int F_00d43c70(float gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xd43c70u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  float in_xmm0 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  if ((!GEN_ISNAN(in_xmm0) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(in_xmm0 <= *(float *)&REFG(undefined, 0x1088114))) {
    return 0;
  }
  return 0;
}

/* ref: FUN_00d43c90 */
ushort F_00d43c90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd43c90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  ushort uVar1;
  
  if ((param_3 != 0) &&
     (((short)param_2 <= (short)(ushort)param_1 ||
      (*(ushort *)(param_3 + (short)(ushort)param_1 * 2) != (ushort)param_1)))) {
    uVar1 = 0;
    if (0 < (short)param_2) {
      do {
        if (*(ushort *)(param_3 + (short)uVar1 * 2) == (ushort)param_1) {
          return uVar1;
        }
        uVar1 = uVar1 + 1;
      } while ((short)uVar1 < (short)param_2);
    }
    return 0xffff;
  }
  return (ushort)param_1;
}

/* ref: hkaAnimatedSkeleton::vf3 */
uint F_00d43ce0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xd43ce0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 * puVar1;
  int * piVar2;
  undefined8 uVar3;
  LPVOID pvVar4;
  LPVOID pvVar5;
  int iVar6;
  
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar1 = *(undefined4 * PTR32 *)((int)pvVar4 + 4);
  if (puVar1 < *(undefined4 * PTR32 *)((int)pvVar4 + 0xc)) {
    *puVar1 = "TtStepDelta";
    uVar3 = rdtsc();
    puVar1[1] = (int)uVar3;
    *(undefined4 * PTR32 *)((int)pvVar4 + 4) = puVar1 + 3;
  }
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x10) + iVar6 * 4)));
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,(undefined4)gen_fl2bits(param_2));
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 0x14));
  }
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar1 = *(undefined4 * PTR32 *)((int)pvVar5 + 4);
  pvVar4 = pvVar5;
  if (puVar1 < *(undefined4 * PTR32 *)((int)pvVar5 + 0xc)) {
    *puVar1 = &REFG(undefined, 0x1136cb0);
    uVar3 = rdtsc();
    pvVar4 = (LPVOID)uVar3;
    puVar1[1] = pvVar4;
    *(undefined4 * PTR32 *)((int)pvVar5 + 4) = puVar1 + 3;
  }
  return (uint)pvVar4;
}

/* ref: FUN_00d43d90 */
uint F_00d43d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd43d90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  if (0 < *(int *)((int)this + 0x14)) {
    piVar2 = *(int * PTR32 *)((int)this + 0x10);
    while ((undefined *)*piVar2 != param_1) {
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
      if (*(int *)((int)this + 0x14) <= (int)uVar1) {
        return uVar1;
      }
    }
    if (uVar1 != 0xffffffff) {
      *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + -1;
      if (*(uint *)((int)this + 0x14) != uVar1) {
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + uVar1 * 4))) =
             *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + *(uint *)((int)this + 0x14) * 4)));
      }
      F_00d82a00(param_1,(int)this + 8);
      uVar1 = F_00d91a80(param_1);
    }
  }
  return uVar1;
}

/* ref: FUN_00d43df0 */
uint F_00d43df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd43df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  if (0 < *(int *)((int)this + 0xc)) {
    piVar2 = *(int * PTR32 *)((int)this + 8);
    while ((undefined *)*piVar2 != param_1) {
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
      if (*(int *)((int)this + 0xc) <= (int)uVar1) {
        return uVar1;
      }
    }
    if (uVar1 != 0xffffffff) {
      *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + -1;
      if (*(uint *)((int)this + 0xc) != uVar1) {
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + uVar1 * 4))) =
             *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + *(uint *)((int)this + 0xc) * 4)));
      }
      uVar1 = F_00d82a00(param_1,-(uint)(this != (undefined *)0x8) & (uint)this);
    }
  }
  return uVar1;
}

/* ref: FUN_00d43e50 */
uint F_00d43e50(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xd43e50u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 0x10) + iVar4 * 4))) + 0x28))) + 0xc)));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x38))(piVar1);
      iVar4 = iVar4 + 1;
      uVar3 = uVar3 + uVar2;
    } while (iVar4 < *(int *)(param_1 + 0x14));
  }
  return uVar3;
}

/* ref: FUN_00d43ea0 */
uint F_00d43ea0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd43ea0u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  uint uVar2;
  ushort * puVar3;
  int iVar4;
  uint uVar5;
  int local_8;
  
  uVar5 = 0;
  local_8 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      iVar4 = *((int *)GEN_TOP((*(int *)(param_1 + 0x10) + local_8 * 4)));
      iVar1 = *(int *)(iVar4 + 0x28);
      puVar3 = (ushort *)(param_3 + uVar5 * 0xc);
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar1 + 0xc) + 0x3c))))
                        (*(int * PTR32 *)(iVar1 + 0xc),*(undefined4 *)(iVar4 + 8),
                         (undefined4)gen_fl2bits(param_2));
      if ((*(int *)(iVar1 + 0x14) != 0) && (uVar5 < uVar2 + uVar5)) {
        iVar4 = (uVar2 + uVar5) - uVar5;
        do {
          *puVar3 = *((ushort *)GEN_TOP((*(int *)(iVar1 + 0x10) + (uint)*puVar3 * 2)));
          puVar3 = puVar3 + 6;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      uVar5 = uVar5 + uVar2;
      local_8 = local_8 + 1;
    } while (local_8 < *(int *)(param_1 + 0x14));
  }
  return uVar5;
}

/* ref: FUN_00d43f50 */
uint F_00d43f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd43f50u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  bool bVar1;
  bool bVar2;
  undefined * this_00;
  int iVar3;
  undefined4 * puVar4;
  int * this_01;
  
  if (*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) == (*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))),4);
  }
  this_00 = (*(int * PTR32 *)&gen_args[1]);
  *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) * 4))) = (*(int * PTR32 *)&gen_args[1]);
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) + 1;
  F_00d919e0((*(int * PTR32 *)&gen_args[1]));
  if ((*(undefined * PTR32 *)&gen_args[0]) == (undefined *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (int)(*(undefined * PTR32 *)&gen_args[0]) + 8;
  }
  F_00d82b40(this_00,iVar3);
  iVar3 = *(int *)((int)this_00 + 0x28);
  if (iVar3 == 0) {
    bVar2 = true;
    bVar1 = false;
    this_01 = (int *)0x0;
  }
  else {
    if (*(undefined * PTR32 *)(iVar3 + 0xc) != (undefined *)0x0) {
      F_00d919e0(*(undefined * PTR32 *)(iVar3 + 0xc));
    }
    this_01 = *(int * PTR32 *)(iVar3 + 0xc);
    bVar2 = false;
    bVar1 = true;
  }
  puVar4 = &(*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[1]) = this_01;
  if ((bVar1) && (this_01 != (int *)0x0)) {
    puVar4 = (undefined4 *)F_00d91a80(this_01);
  }
  if ((bVar2) && (this_01 != (int *)0x0)) {
    puVar4 = (undefined4 *)F_00d91a80(this_01);
  }
  if (this_01 != (int *)0x0) {
    puVar4 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*this_01 + 0x44))(this_01)));
    if ((puVar4 == (undefined4 *)0x0) &&
       (puVar4 = (undefined4 *)0x0, *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) != 0)) {
      puVar4 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*this_01 + 0x48))(this_01,*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))))));
    }
    if (this_01[2] == 4) {
      *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) + 1;
    }
  }
  return (uint)puVar4;
}

/* ref: FUN_00d44040 */
uint F_00d44040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd44040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  
  uVar1 = REFG(float, 0x1094884);
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[2])REFP(0x1136d34));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1136dac));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[2])REFP(0x1136da0));
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0x80000000;
  *(undefined4 *)((int)this + 0x1c) = param_1;
  *(undefined4 *)((int)this + 0x20) = uVar1;
  *(undefined4 *)((int)this + 0x24) = 0;
  return (uint)this;
}

/* ref: FUN_00d44090 */
uint F_00d44090(unsigned int gen_a0)
{
  GEN_ENTER(0xd44090u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  puVar1 = (undefined4 *)((int)this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1136dac));
  *puVar1 = (*(undefined * PTR32 (*)[2])REFP(0x1136da0));
  if (0 < *(int *)((int)this + 0x14)) {
    do {
      F_00d82a00(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + iVar3 * 4))),puVar1);
      F_00d91a80(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + iVar3 * 4))));
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)((int)this + 0x14));
  }
  uVar2 = *(uint *)((int)this + 0x18);
  *(undefined4 *)((int)this + 0x14) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x10),uVar2 * 4);
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  *puVar1 = (*(undefined * PTR32 (*)[2])REFP(0x1136d34));
  return uVar2;
}

/* ref: FUN_00d44120 */
uint F_00d44120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xd44120u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  uint param_4 = (uint)gen_a4;
  int param_5 = (int)gen_a5;
  int param_6 = (int)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  short sVar1;
  undefined4 * puVar2;
  undefined8 uVar3;
  int * piVar4;
  ushort uVar5;
  LPVOID pvVar6;
  uint uVar7;
  gen_v16 * pauVar8;
  float * pfVar9;
  uint uVar10;
  uint uVar11;
  float * pfVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  float * pfVar16;
  undefined * pvVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
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
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar42;
  float fVar43;
  
  (*(undefined * PTR32 *)(gen_frame + 0x90)) = this;
  pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar2 = *(undefined4 * PTR32 *)((int)pvVar6 + 4);
  if (puVar2 < *(undefined4 * PTR32 *)((int)pvVar6 + 0xc)) {
    *puVar2 = "LtSampCombIndividual";
    puVar2[3] = "StInit";
    uVar3 = rdtsc();
    (*(int *)(gen_frame + 0xcc)) = (int)uVar3;
    puVar2[1] = (int)uVar3;
    *(undefined4 * PTR32 *)((int)pvVar6 + 4) = puVar2 + 4;
  }
  uVar7 = 0;
  (*(uint *)(gen_frame + 0x94)) = 0;
  (*(float * PTR32 *)(gen_frame + 0x98)) = (float *)0x0;
  (*(uint *)(gen_frame + 0x9c)) = 0x80000000;
  (*(float * PTR32 *)(gen_frame + 0xa4)) = param_1;
  if (param_1 != (float *)0x0) {
    pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar7 = *(uint *)((int)pvVar6 + 0xc);
    uVar14 = (int)((int)(uintptr_t)param_1) * 4 + 0x7fU & 0xffffff80;
    if ((*(int *)((int)pvVar6 + 8) < (int)uVar14) ||
       (*(uint *)((int)pvVar6 + 0x10) < uVar7 + uVar14)) {
      uVar7 = F_00d94390(pvVar6,uVar14);
    }
    else {
      *(uint *)((int)pvVar6 + 0xc) = uVar7 + uVar14;
    }
  }
  (*(uint *)(gen_frame + 0x94)) = uVar7;
  (*(uint *)(gen_frame + 0x9c)) = (uint)param_1 | 0x80000000;
  (*(uint *)(gen_frame + 0xa0)) = uVar7;
  if ((int)((uint)param_1 & 0x3fffffff) < (int)param_1) {
    pfVar9 = ((float *)GEN_TOP((((uint)param_1 & 0x3fffffff) * 2)));
    if ((int)pfVar9 <= (int)param_1) {
      pfVar9 = param_1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(uint *)(gen_frame + 0x94)),pfVar9,4);
  }
  uVar7 = 0;
  (*(float * PTR32 *)(gen_frame + 0x98)) = param_1;
  (*(uint *)(gen_frame + 0xb0)) = 0;
  (*(uint *)(gen_frame + 0xb4)) = 0;
  (*(uint *)(gen_frame + 0xb8)) = 0x80000000;
  (*(uint *)(gen_frame + 0xc0)) = param_4;
  if (param_4 != 0) {
    pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar7 = *(uint *)((int)pvVar6 + 0xc);
    uVar14 = param_4 * 4 + 0x7f & 0xffffff80;
    if ((*(int *)((int)pvVar6 + 8) < (int)uVar14) ||
       (*(uint *)((int)pvVar6 + 0x10) < uVar7 + uVar14)) {
      uVar7 = F_00d94390(pvVar6,uVar14);
    }
    else {
      *(uint *)((int)pvVar6 + 0xc) = uVar7 + uVar14;
    }
  }
  (*(uint *)(gen_frame + 0xb0)) = uVar7;
  (*(uint *)(gen_frame + 0xb8)) = param_4 | 0x80000000;
  (*(uint *)(gen_frame + 0xbc)) = uVar7;
  if ((int)(param_4 & 0x3fffffff) < (int)param_4) {
    uVar7 = (param_4 & 0x3fffffff) * 2;
    if ((int)uVar7 <= (int)param_4) {
      uVar7 = param_4;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(uint *)(gen_frame + 0xb0)),uVar7,4);
  }
  pfVar9 = (float *)0x0;
  (*(uint *)(gen_frame + 0xb4)) = param_4;
  if (param_1 != (float *)0x0) {
    pfVar16 = param_3 + 8;
    do {
      pfVar16[-8] = 0.0;
      pfVar16[-7] = 0.0;
      pfVar16[-6] = 0.0;
      pfVar16[-5] = 0.0;
      pfVar16[-4] = 0.0;
      pfVar16[-3] = 0.0;
      pfVar16[-2] = 0.0;
      pfVar16[-1] = 0.0;
      *pfVar16 = 0.0;
      pfVar16[1] = 0.0;
      pfVar16[2] = 0.0;
      pfVar16[3] = 0.0;
      *(undefined4 *)((*(uint *)(gen_frame + 0x94)) + (int)((int)(uintptr_t)pfVar9) * 4) = 0;
      pfVar9 = (float *)((int)pfVar9 + 1);
      pfVar16 = pfVar16 + 0xc;
    } while (pfVar9 < param_1);
  }
  uVar7 = 0;
  if (param_4 != 0) {
    do {
      *(undefined4 *)(param_6 + uVar7 * 4) = 0;
      *(undefined4 *)((*(uint *)(gen_frame + 0xb0)) + uVar7 * 4) = 0;
      uVar7 = uVar7 + 1;
    } while (uVar7 < param_4);
  }
  (*(int *)(gen_frame + 0x84)) = 0;
  pvVar17 = (*(undefined * PTR32 *)(gen_frame + 0x90));
  do {
    (*(int *)(gen_frame + 0x4c)) = 0;
    if (0 < *(int *)((int)pvVar17 + 0x14)) {
      do {
        iVar13 = *((int *)GEN_TOP((*(int *)((int)pvVar17 + 0x10) + (*(int *)(gen_frame + 0x4c)) * 4)));
        pfVar9 = (float *)(iVar13 + 0xc);
        if ((GEN_ISNAN(REFG(float, 0x10905c4)) || GEN_ISNAN(*pfVar9)) ||
            (REFG(float, 0x10905c4) < *pfVar9 || REFG(uint, 0x10905c4) == *pfVar9)) {
          iVar15 = *(int *)(iVar13 + 0x28);
          (*(int *)(gen_frame + 0xcc)) = iVar15;
          if ((iVar15 != 0) && (*(char *)(iVar15 + 0x28) == (*(int *)(gen_frame + 0x84)))) {
            (*(int * PTR32 *)(gen_frame + 0xac)) = *(int * PTR32 *)(iVar15 + 0xc);
            pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
            uVar14 = *(uint *)((int)pvVar6 + 0xc);
            uVar10 = (int)((int)(uintptr_t)param_1) * 0x30 + 0x7fU & 0xffffff80;
            uVar7 = uVar14 + uVar10;
            if ((*(int *)((int)pvVar6 + 8) < (int)uVar10) || (*(uint *)((int)pvVar6 + 0x10) < uVar7)
               ) {
              uVar7 = F_00d94390(pvVar6,uVar10);
              (*(uint *)(gen_frame + 0x88)) = uVar7;
            }
            else {
              *(uint *)((int)pvVar6 + 0xc) = uVar7;
              (*(uint *)(gen_frame + 0x88)) = uVar14;
            }
            pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
            uVar14 = *(uint *)((int)pvVar6 + 0xc);
            uVar11 = param_4 * 4 + 0x7f & 0xffffff80;
            uVar7 = uVar14 + uVar11;
            if ((*(int *)((int)pvVar6 + 8) < (int)uVar11) || (*(uint *)((int)pvVar6 + 0x10) < uVar7)
               ) {
              uVar7 = F_00d94390(pvVar6,uVar11);
              (*(uint *)(gen_frame + 0xa8)) = uVar7;
            }
            else {
              *(uint *)((int)pvVar6 + 0xc) = uVar7;
              (*(uint *)(gen_frame + 0xa8)) = uVar14;
            }
            pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
            puVar2 = *(undefined4 * PTR32 *)((int)pvVar6 + 4);
            if (puVar2 < *(undefined4 * PTR32 *)((int)pvVar6 + 0xc)) {
              *puVar2 = "StSample";
              uVar3 = rdtsc();
              puVar2[1] = (int)uVar3;
              *(undefined4 * PTR32 *)((int)pvVar6 + 4) = puVar2 + 3;
            }
            uVar7 = 0;
            (*(uint *)(gen_frame + 0x5c)) = 0;
            (*(float * PTR32 *)(gen_frame + 0x60)) = (float *)0x0;
            (*(uint *)(gen_frame + 0x64)) = 0x80000000;
            (*(float * PTR32 *)(gen_frame + 0x6c)) = param_1;
            if (param_1 != (float *)0x0) {
              pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
              uVar7 = *(uint *)((int)pvVar6 + 0xc);
              uVar14 = (int)((int)(uintptr_t)param_1) * 2 + 0x7fU & 0xffffff80;
              if ((*(int *)((int)pvVar6 + 8) < (int)uVar14) ||
                 (*(uint *)((int)pvVar6 + 0x10) < uVar7 + uVar14)) {
                uVar7 = F_00d94390(pvVar6,uVar14);
              }
              else {
                *(uint *)((int)pvVar6 + 0xc) = uVar7 + uVar14;
              }
            }
            (*(uint *)(gen_frame + 0x64)) = (uint)param_1 | 0x80000000;
            (*(uint *)(gen_frame + 0x5c)) = uVar7;
            (*(uint *)(gen_frame + 0x68)) = uVar7;
            if ((int)((uint)param_1 & 0x3fffffff) < (int)param_1) {
              pfVar9 = ((float *)GEN_TOP((((uint)param_1 & 0x3fffffff) * 2)));
              if ((int)pfVar9 <= (int)param_1) {
                pfVar9 = param_1;
              }
              F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(uint *)(gen_frame + 0x5c)),pfVar9,2);
            }
            uVar7 = 0;
            (*(float * PTR32 *)(gen_frame + 0x60)) = param_1;
            (*(uint *)(gen_frame + 0x70)) = 0;
            (*(uint *)(gen_frame + 0x74)) = 0;
            (*(uint *)(gen_frame + 0x78)) = 0x80000000;
            (*(uint *)(gen_frame + 0x80)) = param_4;
            if (param_4 != 0) {
              pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
              uVar7 = *(uint *)((int)pvVar6 + 0xc);
              uVar14 = param_4 * 2 + 0x7f & 0xffffff80;
              if ((*(int *)((int)pvVar6 + 8) < (int)uVar14) ||
                 (*(uint *)((int)pvVar6 + 0x10) < uVar7 + uVar14)) {
                uVar7 = F_00d94390(pvVar6,uVar14);
              }
              else {
                *(uint *)((int)pvVar6 + 0xc) = uVar7 + uVar14;
              }
            }
            (*(uint *)(gen_frame + 0x78)) = param_4 | 0x80000000;
            (*(uint *)(gen_frame + 0x70)) = uVar7;
            (*(uint *)(gen_frame + 0x7c)) = uVar7;
            if ((int)(param_4 & 0x3fffffff) < (int)param_4) {
              uVar7 = (param_4 & 0x3fffffff) * 2;
              uVar14 = param_4;
              if ((int)param_4 < (int)uVar7) {
                uVar14 = uVar7;
              }
              F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(uint *)(gen_frame + 0x70)),uVar14,2);
            }
            pfVar9 = (float *)0x0;
            (*(uint *)(gen_frame + 0x74)) = param_4;
            if (param_1 != (float *)0x0) {
              do {
                uVar5 = F_00d43c90((uint)*(ushort *)(param_2 + (int)((int)(uintptr_t)pfVar9) * 2),
                                     (uint)*(ushort *)((*(int *)(gen_frame + 0xcc)) + 0x14),
                                     *(undefined4 *)((*(int *)(gen_frame + 0xcc)) + 0x10));
                *(ushort *)((*(uint *)(gen_frame + 0x5c)) + (int)((int)(uintptr_t)pfVar9) * 2) = uVar5;
                pfVar9 = (float *)((int)pfVar9 + 1);
              } while (pfVar9 < param_1);
            }
            uVar7 = 0;
            if (param_4 != 0) {
              do {
                uVar5 = F_00d43c90((uint)*(ushort *)(param_5 + uVar7 * 2),
                                     (uint)*(ushort *)((*(int *)(gen_frame + 0xcc)) + 0x20),
                                     *(undefined4 *)((*(int *)(gen_frame + 0xcc)) + 0x1c));
                *(ushort *)((*(uint *)(gen_frame + 0x70)) + uVar7 * 2) = uVar5;
                uVar7 = uVar7 + 1;
              } while (uVar7 < param_4);
            }
            piVar4 = (*(int * PTR32 *)(gen_frame + 0xac));
            ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0xac)) + 0x14))
                      ((*(int * PTR32 *)(gen_frame + 0xac)),*(undefined4 *)(iVar13 + 8),(*(uint *)(gen_frame + 0x5c)),param_1,(*(uint *)(gen_frame + 0x88)));
            ((code *)*(gen_code32 *)(*piVar4 + 0x18))
                      (piVar4,*(undefined4 *)(iVar13 + 8),(*(uint *)(gen_frame + 0x70)),param_4,(*(uint *)(gen_frame + 0xa8)));
            pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
            uVar14 = (*(uint *)(gen_frame + 0x80));
            uVar7 = (*(uint *)(gen_frame + 0x7c));
            puVar2 = *(undefined4 * PTR32 *)((int)pvVar6 + 4);
            if (puVar2 < *(undefined4 * PTR32 *)((int)pvVar6 + 0xc)) {
              *puVar2 = "StCombine";
              uVar3 = rdtsc();
              puVar2[1] = (int)uVar3;
              *(undefined4 * PTR32 *)((int)pvVar6 + 4) = puVar2 + 3;
            }
            (*(float * PTR32 *)(gen_frame + 0xc8)) = (float *)0x0;
            fVar39 = REFG(float, 0x10addc0);
            if (param_1 != (float *)0x0) {
              iVar15 = (int)param_3 - (*(uint *)(gen_frame + 0x88));
              (*(int *)(gen_frame + 0xcc)) = iVar15;
              pauVar8 = (gen_v16 *)((*(uint *)(gen_frame + 0x88)) + 0x10);
              pfVar9 = param_3;
              do {
                sVar1 = *(short *)((*(uint *)(gen_frame + 0x5c)) + (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0xc8))) * 2);
                if ((-1 < sVar1) && ((int)sVar1 < (*(int * PTR32 *)(gen_frame + 0xac))[4])) {
                  fVar43 = ((float)*((byte *)GEN_TOP((*(int *)(iVar13 + 0x10) + (int)sVar1))) * fVar39) *
                           *(float *)(iVar13 + 0xc);
                  if ((*(int *)(gen_frame + 0x84)) == 0) {
                    fVar26 = *(float *)(pauVar8[-1] + 4);
                    fVar25 = *(float *)(pauVar8[-1] + 8);
                    fVar28 = *(float *)(pauVar8[-1] + 0xc);
                    fVar33 = pfVar9[1];
                    fVar30 = pfVar9[2];
                    fVar32 = pfVar9[3];
                    *pfVar9 = *(float *)pauVar8[-1] * fVar43 + *pfVar9;
                    pfVar9[1] = fVar26 * fVar43 + fVar33;
                    pfVar9[2] = fVar25 * fVar43 + fVar30;
                    pfVar9[3] = fVar28 * fVar43 + fVar32;
                    fVar26 = *(float *)(pauVar8[1] + 4);
                    fVar25 = *(float *)(pauVar8[1] + 8);
                    fVar28 = *(float *)(pauVar8[1] + 0xc);
                    fVar33 = pfVar9[9];
                    fVar30 = pfVar9[10];
                    fVar32 = pfVar9[0xb];
                    pfVar9[8] = *(float *)pauVar8[1] * fVar43 + pfVar9[8];
                    pfVar9[9] = fVar26 * fVar43 + fVar33;
                    pfVar9[10] = fVar25 * fVar43 + fVar30;
                    pfVar9[0xb] = fVar28 * fVar43 + fVar32;
                    memcpy(&(auVar41), &(*pauVar8), sizeof(*pauVar8) < sizeof(auVar41) ? sizeof(*pauVar8) : sizeof(auVar41));
                    fVar26 = (*(float *)((char *)&auVar41 + 0));
                    fVar33 = (*(float *)((char *)&auVar41 + 12));
                    pfVar16 = (float *)(iVar15 + (int)pauVar8);
                    fVar34 = (*(float *)((char *)&auVar41 + 4));
                    fVar27 = (*(float *)((char *)&auVar41 + 8));
                    fVar25 = pfVar16[2] * fVar27 + *pfVar16 * fVar26;
                    fVar28 = pfVar16[3] * fVar33 + pfVar16[1] * fVar34;
                    fVar30 = *pfVar16 * fVar26 + pfVar16[2] * fVar27;
                    fVar32 = pfVar16[1] * fVar34 + pfVar16[3] * fVar33;
                    uVar18 = -(uint)(fVar28 + fVar25 < 0.0);
                    uVar19 = -(uint)(fVar25 + fVar28 < 0.0);
                    uVar20 = -(uint)(fVar32 + fVar30 < 0.0);
                    uVar21 = -(uint)(fVar30 + fVar32 < 0.0);
                    pfVar16 = (float *)(iVar15 + (int)pauVar8);
                    fVar26 = gen_bits2f(((uint)gen_fl2bits(fVar26) ^ *(uint *)&REFG(undefined, 0x10ab9c0)) &
                                        uVar18 | ~uVar18 & (uint)gen_fl2bits(fVar26)) * fVar43 +
                             *pfVar16;
                    fVar25 = gen_bits2f(((uint)gen_fl2bits(fVar34) ^ *(uint *)&REFG(undefined, 0x10ab9c4)) &
                                        uVar19 | ~uVar19 & (uint)gen_fl2bits(fVar34)) * fVar43 +
                             pfVar16[1];
                    fVar28 = gen_bits2f(((uint)gen_fl2bits(fVar27) ^ *(uint *)&REFG(undefined, 0x10ab9c8)) &
                                        uVar20 | ~uVar20 & (uint)gen_fl2bits(fVar27)) * fVar43 +
                             pfVar16[2];
                    fVar33 = gen_bits2f(((uint)gen_fl2bits(fVar33) ^ *(uint *)&REFG(undefined, 0x10ab9cc)) &
                                        uVar21 | ~uVar21 & (uint)gen_fl2bits(fVar33)) * fVar43 +
                             pfVar16[3];
                  }
                  else {
                    fVar39 = *(float *)*pauVar8;
                    fVar26 = *(float *)(*pauVar8 + 4);
                    fVar25 = *(float *)(*pauVar8 + 8);
                    fVar28 = *(float *)(*pauVar8 + 0xc);
                    fVar33 = *pfVar9;
                    fVar30 = pfVar9[1];
                    fVar32 = pfVar9[2];
                    fVar34 = pfVar9[3];
                    fVar27 = fVar39 * fVar33;
                    fVar29 = fVar26 * fVar30;
                    fVar31 = fVar25 * fVar32;
                    (*(float *)(gen_frame + 0x10)) = gen_bits2f((uint)*(undefined8 *)(iVar15 + (int)pauVar8));
                    (*(float *)(gen_frame + 0x14)) = gen_bits2f((uint)((ulonglong)*(undefined8 *)(iVar15 + (int)pauVar8)
                                                 >> 0x20));
                    (*(float *)(gen_frame + 0x18)) = gen_bits2f((uint)*(undefined8 *)(iVar15 + 8 + (int)pauVar8));
                    fVar35 = (((fVar29 + fVar27) + fVar31) * fVar39 +
                             (fVar28 * fVar28 +
                             gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0))) * fVar33)
                             + (fVar32 * fVar26 - fVar30 * fVar25) * fVar28;
                    fVar36 = (((fVar29 + fVar27) + fVar31) * fVar26 +
                             (fVar28 * fVar28 +
                             gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4))) * fVar30)
                             + (fVar33 * fVar25 - fVar32 * fVar39) * fVar28;
                    fVar37 = (((fVar29 + fVar27) + fVar31) * fVar25 +
                             (fVar28 * fVar28 +
                             gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8))) * fVar32)
                             + (fVar30 * fVar39 - fVar33 * fVar26) * fVar28;
                    fVar38 = (((fVar29 + fVar27) + fVar31) * fVar28 +
                             (fVar28 * fVar28 +
                             gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc))) * fVar34)
                             + (fVar34 * fVar28 - fVar34 * fVar28) * fVar28;
                    fVar39 = *(float *)((int)pauVar8 + iVar15 + 0xc);
                    (*(float *)(gen_frame + 0x0)) = gen_bits2f((uint)*(undefined8 *)*pauVar8);
                    (*(float *)(gen_frame + 0x4)) = gen_bits2f((uint)((ulonglong)*(undefined8 *)*pauVar8 >> 0x20));
                    (*(float *)(gen_frame + 0x8)) = gen_bits2f((uint)*(undefined8 *)(*pauVar8 + 8));
                    fVar26 = *(float *)pauVar8[-1];
                    fVar25 = *(float *)(pauVar8[-1] + 4);
                    fVar33 = *(float *)(pauVar8[-1] + 8);
                    fVar30 = *(float *)(pauVar8[-1] + 0xc);
                    fVar22 = (((*(float *)(gen_frame + 0x4)) * (*(float *)(gen_frame + 0x18)) - (*(float *)(gen_frame + 0x8)) * (*(float *)(gen_frame + 0x14))) + (*(float *)(gen_frame + 0x10)) * fVar28) +
                             (*(float *)(gen_frame + 0x0)) * fVar39;
                    fVar23 = (((*(float *)(gen_frame + 0x8)) * (*(float *)(gen_frame + 0x10)) - (*(float *)(gen_frame + 0x0)) * (*(float *)(gen_frame + 0x18))) + (*(float *)(gen_frame + 0x14)) * fVar28) +
                             (*(float *)(gen_frame + 0x4)) * fVar39;
                    fVar24 = (((*(float *)(gen_frame + 0x0)) * (*(float *)(gen_frame + 0x14)) - (*(float *)(gen_frame + 0x4)) * (*(float *)(gen_frame + 0x10))) + (*(float *)(gen_frame + 0x18)) * fVar28) +
                             (*(float *)(gen_frame + 0x8)) * fVar39;
                    fVar32 = pfVar9[8];
                    fVar34 = pfVar9[9];
                    fVar27 = pfVar9[10];
                    fVar29 = pfVar9[0xb];
                    fVar42 = fVar39 * fVar28 -
                             (((*(float *)(gen_frame + 0x4)) * (*(float *)(gen_frame + 0x14)) + (*(float *)(gen_frame + 0x0)) * (*(float *)(gen_frame + 0x10))) + (*(float *)(gen_frame + 0x8)) * (*(float *)(gen_frame + 0x18)))
                    ;
                    fVar39 = *(float *)(pauVar8[1] + 4);
                    fVar28 = *(float *)(pauVar8[1] + 8);
                    fVar31 = *(float *)(pauVar8[1] + 0xc);
                    pfVar9[8] = (*(float *)pauVar8[1] * fVar32 - fVar32) * fVar43 + fVar32;
                    pfVar9[9] = (fVar39 * fVar34 - fVar34) * fVar43 + fVar34;
                    pfVar9[10] = (fVar28 * fVar27 - fVar27) * fVar43 + fVar27;
                    pfVar9[0xb] = (fVar31 * fVar29 - fVar29) * fVar43 + fVar29;
                    fVar39 = pfVar9[1];
                    fVar28 = pfVar9[2];
                    fVar32 = pfVar9[3];
                    fVar34 = pfVar9[1];
                    fVar27 = pfVar9[2];
                    fVar29 = pfVar9[3];
                    *pfVar9 = (((fVar35 + fVar35) + fVar26) - *pfVar9) * fVar43 + *pfVar9;
                    pfVar9[1] = (((fVar36 + fVar36) + fVar25) - fVar39) * fVar43 + fVar34;
                    pfVar9[2] = (((fVar37 + fVar37) + fVar33) - fVar28) * fVar43 + fVar27;
                    pfVar9[3] = (((fVar38 + fVar38) + fVar30) - fVar32) * fVar43 + fVar29;
                    pfVar16 = (float *)(iVar15 + (int)pauVar8);
                    fVar39 = *pfVar16 * fVar22;
                    fVar26 = pfVar16[1] * fVar23;
                    fVar25 = pfVar16[2] * fVar24;
                    fVar28 = pfVar16[3] * fVar42;
                    (*(float *)((char *)&auVar40 + 0)) = fVar25 + fVar39;
                    (*(float *)((char *)&auVar40 + 4)) = fVar28 + fVar26;
                    (*(float *)((char *)&auVar40 + 8)) = fVar39 + fVar25;
                    (*(float *)((char *)&auVar40 + 12)) = fVar26 + fVar28;
                    uVar18 = -(uint)((*(float *)((char *)&auVar40 + 4)) + (*(float *)((char *)&auVar40 + 0)) < 0.0);
                    uVar19 = -(uint)((*(float *)((char *)&auVar40 + 0)) + (*(float *)((char *)&auVar40 + 4)) < 0.0);
                    uVar20 = -(uint)((*(float *)((char *)&auVar40 + 12)) + (*(float *)((char *)&auVar40 + 8)) < 0.0);
                    uVar21 = -(uint)((*(float *)((char *)&auVar40 + 8)) + (*(float *)((char *)&auVar40 + 12)) < 0.0);
                    fVar26 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar43) & uVar18 |
                                        ~uVar18 & (uint)gen_fl2bits(fVar43)) * fVar22 +
                             (*(float *)&REFG(undefined, 0x1138af0) - fVar43) * *pfVar16;
                    fVar25 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar43) & uVar19 |
                                        ~uVar19 & (uint)gen_fl2bits(fVar43)) * fVar23 +
                             (*(float *)&REFG(undefined, 0x1138af4) - fVar43) * pfVar16[1];
                    fVar28 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar43) & uVar20 |
                                        ~uVar20 & (uint)gen_fl2bits(fVar43)) * fVar24 +
                             (*(float *)&REFG(undefined, 0x1138af8) - fVar43) * pfVar16[2];
                    fVar33 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar43) & uVar21 |
                                        ~uVar21 & (uint)gen_fl2bits(fVar43)) * fVar42 +
                             (*(float *)&REFG(undefined, 0x1138afc) - fVar43) * pfVar16[3];
                    fVar39 = fVar28 * fVar28 + fVar26 * fVar26;
                    fVar30 = fVar33 * fVar33 + fVar25 * fVar25;
                    fVar32 = fVar26 * fVar26 + fVar28 * fVar28;
                    fVar34 = fVar25 * fVar25 + fVar33 * fVar33;
                    fVar27 = fVar30 + fVar39;
                    fVar39 = fVar39 + fVar30;
                    fVar30 = fVar34 + fVar32;
                    fVar32 = fVar32 + fVar34;
                    (*(undefined4 *)((char *)&auVar41 + 4)) = (undefined4)gen_fl2bits(fVar39);
                    (*(undefined4 *)((char *)&auVar41 + 0)) = (undefined4)gen_fl2bits(fVar27);
                    (*(undefined4 *)((char *)&auVar41 + 8)) = (undefined4)gen_fl2bits(fVar30);
                    (*(undefined4 *)((char *)&auVar41 + 12)) = (undefined4)gen_fl2bits(fVar32);
                    gen_rsqrtps(&(auVar41), &(auVar40), &(auVar41));
                    fVar34 = (*(float *)((char *)&auVar41 + 0));
                    fVar29 = (*(float *)((char *)&auVar41 + 4));
                    fVar31 = (*(float *)((char *)&auVar41 + 8));
                    fVar22 = (*(float *)((char *)&auVar41 + 12));
                    fVar26 = ((*(float *)&REFG(undefined, 0x1136d50) - (fVar34 * fVar27) * fVar34) *
                             (*(float *)&REFG(undefined, 0x1136d60) * fVar34)) * fVar26;
                    fVar25 = ((*(float *)&REFG(undefined, 0x1136d54) - (fVar29 * fVar39) * fVar29) *
                             (*(float *)&REFG(undefined, 0x1136d64) * fVar29)) * fVar25;
                    fVar28 = ((*(float *)&REFG(undefined, 0x1136d58) - (fVar31 * fVar30) * fVar31) *
                             (*(float *)&REFG(undefined, 0x1136d68) * fVar31)) * fVar28;
                    fVar33 = ((*(float *)&REFG(undefined, 0x1136d5c) - (fVar22 * fVar32) * fVar22) *
                             (*(float *)&REFG(undefined, 0x1136d6c) * fVar22)) * fVar33;
                    fVar39 = REFG(float, 0x10addc0);
                  }
                  pfVar16 = (float *)(iVar15 + (int)pauVar8);
                  *pfVar16 = fVar26;
                  pfVar16[1] = fVar25;
                  pfVar16[2] = fVar28;
                  pfVar16[3] = fVar33;
                  *(float *)((*(uint *)(gen_frame + 0x94)) + (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0xc8))) * 4) =
                       *(float *)((*(uint *)(gen_frame + 0x94)) + (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0xc8))) * 4) + fVar43;
                }
                pfVar16 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0xc8)) + 1);
                pauVar8 = pauVar8 + 3;
                pfVar9 = pfVar9 + 0xc;
                (*(float * PTR32 *)(gen_frame + 0xc8)) = pfVar16;
              } while (pfVar16 < param_1);
            }
            uVar18 = 0;
            if (3 < (int)param_4) {
              (*(int *)(gen_frame + 0xcc)) = (*(uint *)(gen_frame + 0xa8)) - param_6;
              iVar15 = -param_6;
              (*(float * PTR32 *)(gen_frame + 0xc8)) = (float *)((*(uint *)(gen_frame + 0xa8)) + 0xc);
              pfVar9 = (float *)(param_6 + 4);
              do {
                uVar5 = *(ushort *)((*(uint *)(gen_frame + 0x70)) + uVar18 * 2);
                (*(uint *)(gen_frame + 0xc4)) = (uint)uVar5;
                if ((-1 < (short)uVar5) && ((int)(short)uVar5 < (*(int * PTR32 *)(gen_frame + 0xac))[5])) {
                  fVar43 = ((float)*((byte *)GEN_TOP((*(int *)(iVar13 + 0x1c) + (int)(short)uVar5))) * fVar39)
                           * *(float *)(iVar13 + 0xc);
                  pfVar9[-1] = (*(float * PTR32 *)(gen_frame + 0xc8))[-3] * fVar43 + pfVar9[-1];
                  *(float *)((int)pfVar9 + (*(uint *)(gen_frame + 0xb0)) + iVar15 + -4) =
                       fVar43 + *(float *)((int)pfVar9 + (*(uint *)(gen_frame + 0xb0)) + iVar15 + -4);
                }
                uVar5 = *(ushort *)((*(uint *)(gen_frame + 0x70)) + 2 + uVar18 * 2);
                (*(uint *)(gen_frame + 0xc4)) = (uint)uVar5;
                if ((-1 < (short)uVar5) && ((int)(short)uVar5 < (*(int * PTR32 *)(gen_frame + 0xac))[5])) {
                  fVar43 = ((float)*((byte *)GEN_TOP((*(int *)(iVar13 + 0x1c) + (int)(short)uVar5))) * fVar39)
                           * *(float *)(iVar13 + 0xc);
                  *pfVar9 = *((float *)GEN_TOP((((*(uint *)(gen_frame + 0xa8)) - param_6) + (int)pfVar9))) * fVar43 + *pfVar9;
                  *(float *)((int)pfVar9 + (*(uint *)(gen_frame + 0xb0)) + iVar15) =
                       *(float *)((int)pfVar9 + (*(uint *)(gen_frame + 0xb0)) + iVar15) + fVar43;
                }
                sVar1 = *(short *)((*(uint *)(gen_frame + 0x70)) + 4 + uVar18 * 2);
                if ((-1 < sVar1) && ((int)sVar1 < (*(int * PTR32 *)(gen_frame + 0xac))[5])) {
                  fVar43 = ((float)*((byte *)GEN_TOP((*(int *)(iVar13 + 0x1c) + (int)sVar1))) * fVar39) *
                           *(float *)(iVar13 + 0xc);
                  pfVar9[1] = (*(float * PTR32 *)(gen_frame + 0xc8))[-1] * fVar43 + pfVar9[1];
                  *((float *)GEN_TOP(((int)pfVar9 + (*(uint *)(gen_frame + 0xb0)) + (4 - param_6)))) =
                       fVar43 + *((float *)GEN_TOP(((int)pfVar9 + (*(uint *)(gen_frame + 0xb0)) + (4 - param_6))));
                }
                uVar5 = *(ushort *)((*(uint *)(gen_frame + 0x70)) + 6 + uVar18 * 2);
                (*(uint *)(gen_frame + 0xc4)) = (uint)uVar5;
                if ((-1 < (short)uVar5) && ((int)(short)uVar5 < (*(int * PTR32 *)(gen_frame + 0xac))[5])) {
                  fVar43 = ((float)*((byte *)GEN_TOP((*(int *)(iVar13 + 0x1c) + (int)(short)uVar5))) * fVar39)
                           * *(float *)(iVar13 + 0xc);
                  pfVar9[2] = *(*(float * PTR32 *)(gen_frame + 0xc8)) * fVar43 + pfVar9[2];
                  *((float *)GEN_TOP(((int)pfVar9 + (*(uint *)(gen_frame + 0xb0)) + (8 - param_6)))) =
                       fVar43 + *((float *)GEN_TOP(((int)pfVar9 + (*(uint *)(gen_frame + 0xb0)) + (8 - param_6))));
                }
                (*(float * PTR32 *)(gen_frame + 0xc8)) = (*(float * PTR32 *)(gen_frame + 0xc8)) + 4;
                uVar18 = uVar18 + 4;
                pfVar9 = pfVar9 + 4;
              } while (uVar18 < param_4 - 3);
            }
            if (uVar18 < param_4) {
              pfVar9 = (float *)(param_6 + uVar18 * 4);
              (*(int *)(gen_frame + 0xcc)) = (*(uint *)(gen_frame + 0xa8)) - param_6;
              do {
                uVar5 = *(ushort *)((*(uint *)(gen_frame + 0x70)) + uVar18 * 2);
                (*(uint *)(gen_frame + 0xc4)) = (uint)uVar5;
                if ((-1 < (short)uVar5) && ((int)(short)uVar5 < (*(int * PTR32 *)(gen_frame + 0xac))[5])) {
                  fVar43 = ((float)*((byte *)GEN_TOP((*(int *)(iVar13 + 0x1c) + (int)(short)uVar5))) * fVar39)
                           * *(float *)(iVar13 + 0xc);
                  *pfVar9 = *((float *)GEN_TOP((((*(uint *)(gen_frame + 0xa8)) - param_6) + (int)pfVar9))) * fVar43 + *pfVar9;
                  *(float *)((*(uint *)(gen_frame + 0xb0)) + uVar18 * 4) = fVar43 + *(float *)((*(uint *)(gen_frame + 0xb0)) + uVar18 * 4);
                }
                uVar18 = uVar18 + 1;
                pfVar9 = pfVar9 + 1;
              } while (uVar18 < param_4);
            }
            if ((*(uint *)(gen_frame + 0x7c)) == (*(uint *)(gen_frame + 0x70))) {
              (*(uint *)(gen_frame + 0x74)) = 0;
            }
            pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
            uVar14 = uVar14 * 2 + 0x7f & 0xffffff80;
            if (((*(int *)((int)pvVar6 + 8) < (int)uVar14) ||
                (uVar14 + uVar7 != *(int *)((int)pvVar6 + 0xc))) ||
               (*(uint *)((int)pvVar6 + 0x14) == uVar7)) {
              F_00d945c0(pvVar6,uVar7,uVar14);
            }
            else {
              *(uint *)((int)pvVar6 + 0xc) = uVar7;
            }
            (*(uint *)(gen_frame + 0x74)) = 0;
            if (-1 < (int)(*(uint *)(gen_frame + 0x78))) {
              ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                        (&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x70)),((*(uint *)(gen_frame + 0x78)) & 0x3fffffff) * 2);
            }
            pfVar9 = (*(float * PTR32 *)(gen_frame + 0x6c));
            uVar7 = (*(uint *)(gen_frame + 0x68));
            (*(uint *)(gen_frame + 0x70)) = 0;
            (*(uint *)(gen_frame + 0x78)) = 0x80000000;
            if ((*(uint *)(gen_frame + 0x68)) == (*(uint *)(gen_frame + 0x5c))) {
              (*(float * PTR32 *)(gen_frame + 0x60)) = (float *)0x0;
            }
            pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
            uVar14 = (int)((int)(uintptr_t)pfVar9) * 2 + 0x7fU & 0xffffff80;
            if (((*(int *)((int)pvVar6 + 8) < (int)uVar14) ||
                (uVar14 + uVar7 != *(int *)((int)pvVar6 + 0xc))) ||
               (*(uint *)((int)pvVar6 + 0x14) == uVar7)) {
              F_00d945c0(pvVar6,uVar7,uVar14);
            }
            else {
              *(uint *)((int)pvVar6 + 0xc) = uVar7;
            }
            (*(float * PTR32 *)(gen_frame + 0x60)) = (float *)0x0;
            if (-1 < (int)(*(uint *)(gen_frame + 0x64))) {
              ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                        (&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x5c)),((*(uint *)(gen_frame + 0x64)) & 0x3fffffff) * 2);
            }
            (*(uint *)(gen_frame + 0x5c)) = 0;
            (*(uint *)(gen_frame + 0x64)) = 0x80000000;
            pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
            if (((*(int *)((int)pvVar6 + 8) < (int)uVar11) ||
                (uVar11 + (*(uint *)(gen_frame + 0xa8)) != *(int *)((int)pvVar6 + 0xc))) ||
               (*(uint *)((int)pvVar6 + 0x14) == (*(uint *)(gen_frame + 0xa8)))) {
              F_00d945c0(pvVar6,(*(uint *)(gen_frame + 0xa8)),uVar11);
            }
            else {
              *(uint *)((int)pvVar6 + 0xc) = (*(uint *)(gen_frame + 0xa8));
            }
            pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
            if (((*(int *)((int)pvVar6 + 8) < (int)uVar10) ||
                (uVar10 + (*(uint *)(gen_frame + 0x88)) != *(int *)((int)pvVar6 + 0xc))) ||
               (*(uint *)((int)pvVar6 + 0x14) == (*(uint *)(gen_frame + 0x88)))) {
              F_00d945c0(pvVar6,(*(uint *)(gen_frame + 0x88)),uVar10);
              pvVar17 = (*(undefined * PTR32 *)(gen_frame + 0x90));
            }
            else {
              *(uint *)((int)pvVar6 + 0xc) = (*(uint *)(gen_frame + 0x88));
              pvVar17 = (*(undefined * PTR32 *)(gen_frame + 0x90));
            }
          }
        }
        (*(int *)(gen_frame + 0x4c)) = (*(int *)(gen_frame + 0x4c)) + 1;
      } while ((*(int *)(gen_frame + 0x4c)) < *(int *)((int)pvVar17 + 0x14));
    }
    if ((*(int *)(gen_frame + 0x84)) == 0) {
      pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
      puVar2 = *(undefined4 * PTR32 *)((int)pvVar6 + 4);
      if (puVar2 < *(undefined4 * PTR32 *)((int)pvVar6 + 0xc)) {
        *puVar2 = "StReferencePose";
        uVar3 = rdtsc();
        puVar2[1] = (int)uVar3;
        *(undefined4 * PTR32 *)((int)pvVar6 + 4) = puVar2 + 3;
      }
      if (((!GEN_ISNAN(*(float *)((int)pvVar17 + 0x20)) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
           !(*(float *)((int)pvVar17 + 0x20) <= *(float *)&REFG(undefined, 0x1088114))) &&
         (pfVar9 = (float *)0x0, param_1 != (float *)0x0)) {
        pfVar16 = param_3 + 4;
        do {
          fVar39 = *(float *)((*(uint *)(gen_frame + 0x94)) + (int)((int)(uintptr_t)pfVar9) * 4);
          if (fVar39 <= *(float *)((int)pvVar17 + 0x20)) {
            fVar39 = *(float *)((int)pvVar17 + 0x20) - fVar39;
            pfVar12 = ((float *)GEN_TOP((*(short *)(param_2 + (int)((int)(uintptr_t)pfVar9) * 2) * 0x30 +
                               *((int *)GEN_TOP((*(int *)((int)pvVar17 + 0x1c) + 0x24))))));
            fVar43 = pfVar12[1];
            fVar26 = pfVar12[2];
            fVar25 = pfVar12[3];
            fVar28 = pfVar16[-3];
            fVar33 = pfVar16[-2];
            fVar30 = pfVar16[-1];
            pfVar16[-4] = fVar39 * *pfVar12 + pfVar16[-4];
            pfVar16[-3] = fVar39 * fVar43 + fVar28;
            pfVar16[-2] = fVar39 * fVar26 + fVar33;
            pfVar16[-1] = fVar39 * fVar25 + fVar30;
            fVar43 = pfVar12[9];
            fVar26 = pfVar12[10];
            fVar25 = pfVar12[0xb];
            fVar28 = pfVar16[5];
            fVar33 = pfVar16[6];
            fVar30 = pfVar16[7];
            pfVar16[4] = pfVar12[8] * fVar39 + pfVar16[4];
            pfVar16[5] = fVar43 * fVar39 + fVar28;
            pfVar16[6] = fVar26 * fVar39 + fVar33;
            pfVar16[7] = fVar25 * fVar39 + fVar30;
            fVar43 = pfVar12[4];
            fVar26 = pfVar12[5];
            fVar25 = pfVar12[6];
            fVar28 = pfVar12[7];
            fVar33 = pfVar16[2] * fVar25 + *pfVar16 * fVar43;
            fVar30 = pfVar16[3] * fVar28 + pfVar16[1] * fVar26;
            fVar32 = *pfVar16 * fVar43 + pfVar16[2] * fVar25;
            fVar34 = pfVar16[1] * fVar26 + pfVar16[3] * fVar28;
            uVar7 = -(uint)(fVar30 + fVar33 < 0.0);
            uVar14 = -(uint)(fVar33 + fVar30 < 0.0);
            uVar10 = -(uint)(fVar34 + fVar32 < 0.0);
            uVar11 = -(uint)(fVar32 + fVar34 < 0.0);
            uVar18 = (uint)gen_fl2bits(fVar26) ^ *(uint *)&REFG(undefined, 0x10ab9c4);
            uVar19 = (uint)gen_fl2bits(fVar25) ^ *(uint *)&REFG(undefined, 0x10ab9c8);
            uVar20 = (uint)gen_fl2bits(fVar28) ^ *(uint *)&REFG(undefined, 0x10ab9cc);
            fVar33 = pfVar16[1];
            fVar30 = pfVar16[2];
            fVar32 = pfVar16[3];
            *pfVar16 = gen_bits2f(((uint)gen_fl2bits(fVar43) ^ *(uint *)&REFG(undefined, 0x10ab9c0)) & uVar7 |
                                  ~uVar7 & (uint)gen_fl2bits(fVar43)) * fVar39 + *pfVar16;
            pfVar16[1] = gen_bits2f(uVar18 & uVar14 | ~uVar14 & (uint)gen_fl2bits(fVar26)) * fVar39
                         + fVar33;
            pfVar16[2] = gen_bits2f(uVar19 & uVar10 | ~uVar10 & (uint)gen_fl2bits(fVar25)) * fVar39
                         + fVar30;
            pfVar16[3] = gen_bits2f(uVar20 & uVar11 | ~uVar11 & (uint)gen_fl2bits(fVar28)) * fVar39
                         + fVar32;
            *(float *)((*(uint *)(gen_frame + 0x94)) + (int)((int)(uintptr_t)pfVar9) * 4) = fVar39 + *(float *)((*(uint *)(gen_frame + 0x94)) + (int)((int)(uintptr_t)pfVar9) * 4)
            ;
            pvVar17 = (*(undefined * PTR32 *)(gen_frame + 0x90));
          }
          pfVar9 = (float *)((int)pfVar9 + 1);
          pfVar16 = pfVar16 + 0xc;
        } while (pfVar9 < param_1);
      }
      pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
      puVar2 = *(undefined4 * PTR32 *)((int)pvVar6 + 4);
      if (puVar2 < *(undefined4 * PTR32 *)((int)pvVar6 + 0xc)) {
        *puVar2 = "StNormalize";
        uVar3 = rdtsc();
        (*(undefined4 *)(gen_frame + 0x8c)) = (int)uVar3;
        puVar2[1] = (int)uVar3;
        *(undefined4 * PTR32 *)((int)pvVar6 + 4) = puVar2 + 3;
      }
      F_00d93ba0(param_3,(*(uint *)(gen_frame + 0x94)),param_1);
      fVar39 = REFG(float, 0x1087f04);
      uVar7 = 0;
      if (3 < (int)param_4) {
        pfVar9 = (float *)((*(uint *)(gen_frame + 0xb0)) + 0xc);
        iVar13 = (param_4 - 4 >> 2) + 1;
        pfVar16 = (float *)(param_6 + 4);
        uVar7 = iVar13 * 4;
        do {
          fVar43 = pfVar9[-3];
          if (!(0.0 < pfVar9[-3])) {
            fVar43 = fVar39;
          }
          pfVar16[-1] = pfVar16[-1] / fVar43;
          fVar43 = *((float *)GEN_TOP((((*(uint *)(gen_frame + 0xb0)) - param_6) + (int)pfVar16)));
          if (!(0.0 < fVar43)) {
            fVar43 = fVar39;
          }
          *pfVar16 = *pfVar16 / fVar43;
          fVar43 = pfVar9[-1];
          if (!(0.0 < pfVar9[-1])) {
            fVar43 = fVar39;
          }
          pfVar16[1] = pfVar16[1] / fVar43;
          fVar43 = *pfVar9;
          if (!(0.0 < *pfVar9)) {
            fVar43 = fVar39;
          }
          pfVar16[2] = pfVar16[2] / fVar43;
          pfVar16 = pfVar16 + 4;
          pfVar9 = pfVar9 + 4;
          iVar13 = iVar13 + -1;
          pvVar17 = (*(undefined * PTR32 *)(gen_frame + 0x90));
        } while (iVar13 != 0);
      }
      if (uVar7 < param_4) {
        pfVar9 = (float *)(param_6 + uVar7 * 4);
        iVar13 = param_4 - uVar7;
        do {
          fVar43 = *((float *)GEN_TOP(((int)pfVar9 + ((*(uint *)(gen_frame + 0xb0)) - param_6))));
          if (!(0.0 < fVar43)) {
            fVar43 = fVar39;
          }
          *pfVar9 = *pfVar9 / fVar43;
          pfVar9 = pfVar9 + 1;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
      }
    }
    iVar13 = (*(int *)(gen_frame + 0x84)) + 1;
    (*(int *)(gen_frame + 0x84)) = iVar13;
  } while (iVar13 < 2);
  pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  uVar14 = (*(uint *)(gen_frame + 0xc0));
  uVar7 = (*(uint *)(gen_frame + 0xbc));
  puVar2 = *(undefined4 * PTR32 *)((int)pvVar6 + 4);
  if (puVar2 < *(undefined4 * PTR32 *)((int)pvVar6 + 0xc)) {
    *puVar2 = &REFG(undefined, 0x1134dd0);
    uVar3 = rdtsc();
    (*(undefined4 *)(gen_frame + 0x8c)) = (int)uVar3;
    puVar2[1] = (int)uVar3;
    *(undefined4 * PTR32 *)((int)pvVar6 + 4) = puVar2 + 3;
  }
  if ((*(uint *)(gen_frame + 0xbc)) == (*(uint *)(gen_frame + 0xb0))) {
    (*(uint *)(gen_frame + 0xb4)) = 0;
  }
  pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar14 = uVar14 * 4 + 0x7f & 0xffffff80;
  if (((*(int *)((int)pvVar6 + 8) < (int)uVar14) || (uVar14 + uVar7 != *(int *)((int)pvVar6 + 0xc)))
     || (*(uint *)((int)pvVar6 + 0x14) == uVar7)) {
    F_00d945c0(pvVar6,uVar7,uVar14);
  }
  else {
    *(uint *)((int)pvVar6 + 0xc) = uVar7;
  }
  (*(uint *)(gen_frame + 0xb4)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0xb8))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0xb0)),(*(uint *)(gen_frame + 0xb8)) * 4);
  }
  pfVar9 = (*(float * PTR32 *)(gen_frame + 0xa4));
  uVar7 = (*(uint *)(gen_frame + 0xa0));
  (*(uint *)(gen_frame + 0xb0)) = 0;
  (*(uint *)(gen_frame + 0xb8)) = 0x80000000;
  if ((*(uint *)(gen_frame + 0xa0)) == (*(uint *)(gen_frame + 0x94))) {
    (*(float * PTR32 *)(gen_frame + 0x98)) = (float *)0x0;
  }
  pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar14 = (int)((int)(uintptr_t)pfVar9) * 4 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)pvVar6 + 8) < (int)uVar14) || (uVar14 + uVar7 != *(int *)((int)pvVar6 + 0xc)))
     || (*(uint *)((int)pvVar6 + 0x14) == uVar7)) {
    F_00d945c0(pvVar6,uVar7,uVar14);
  }
  else {
    *(uint *)((int)pvVar6 + 0xc) = uVar7;
  }
  (*(float * PTR32 *)(gen_frame + 0x98)) = (float *)0x0;
  uVar7 = (*(uint *)(gen_frame + 0x9c));
  if (-1 < (int)(*(uint *)(gen_frame + 0x9c))) {
    uVar7 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x94)),(*(uint *)(gen_frame + 0x9c)) * 4);
  }
  return uVar7;
}

/* ref: hkaAnimatedSkeleton::vf4 */
uint F_00d45b20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd45b20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00d45060(this,param_1,*((undefined4 *)GEN_TOP((*(int *)(this + 0x1c) + 0x1c))),param_2,
                       *((undefined4 *)GEN_TOP((*(int *)(this + 0x1c) + 0x40))),0);
  return uVar1;
}

/* ref: hkaAnimatedSkeleton::vf5 */
uint F_00d45b50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd45b50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_00d45060(this,param_1,param_2,param_3,param_4,1);
  return uVar1;
}

/* ref: hkaAnimatedSkeleton::vf6 */
uint F_00d45b70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd45b70u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  
  uVar1 = F_00d44120((*(undefined * PTR32 *)&gen_args[0]),1,&(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[1]),0,0,0);
  return uVar1;
}

/* ref: hkaAnimatedSkeleton::vf7 */
uint F_00d45b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd45b90u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  
  uVar1 = F_00d44120((*(undefined * PTR32 *)&gen_args[0]),0,0,0,1,&(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[1]));
  return uVar1;
}

/* ref: hkaAnimatedSkeleton::vf8 */
uint F_00d45bb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd45bb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00d44120(this,param_3,param_2,param_1,0,0,0);
  return uVar1;
}

/* ref: hkaAnimatedSkeleton::vf9 */
uint F_00d45bd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd45bd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00d44120(this,0,0,0,param_3,param_2,param_1);
  return uVar1;
}

/* ref: FUN_00d461b0 */
uint F_00d461b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd461b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = param_2[1] & *(uint *)&REFG(undefined, 0x1136d84);
  uVar5 = param_2[2] & *(uint *)&REFG(undefined, 0x1136d88);
  uVar6 = param_2[3] & *(uint *)&REFG(undefined, 0x1136d8c);
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *(uint *)this = *param_2 & *(uint *)&REFG(undefined, 0x1136d80) ^ *param_1;
  *(uint *)((int)this + 4) = uVar4 ^ uVar1;
  *(uint *)((int)this + 8) = uVar5 ^ uVar2;
  *(uint *)((int)this + 0xc) = uVar6 ^ uVar3;
  return (uint)param_2;
}

/* ref: FUN_00d461d0 */
unsigned int F_00d461d0(unsigned int gen_a0)
{
  GEN_ENTER(0xd461d0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_00d461f0 */
uint F_00d461f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd461f0u, gen_a0, gen_a1, gen_a2, 0u);
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
  *param_2 = -(uint)(*in_ecx < *param_3);
  param_2[1] = -(uint)(fVar4 < fVar1);
  param_2[2] = -(uint)(fVar5 < fVar2);
  param_2[3] = -(uint)(fVar6 < fVar3);
  return (uint)param_2;
}

/* ref: FUN_00d46220 */
uint F_00d46220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd46220u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *in_ecx = *param_2 & 0x7fffffff;
  in_ecx[1] = uVar1 & 0x7fffffff;
  in_ecx[2] = uVar2 & 0x7fffffff;
  in_ecx[3] = uVar3 & 0x7fffffff;
  return (uint)param_2;
}

/* ref: FUN_00d46250 */
uint F_00d46250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd46250u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = in_ecx[3] != *in_ecx;
  return param_2;
}

/* ref: FUN_00d462a0 */
uint F_00d462a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd462a0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00d462b0 */
uint F_00d462b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd462b0u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00d462f0 */
uint F_00d462f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd462f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1);
  }
  *(undefined * PTR32 *)this = param_1;
  return (uint)this;
}

/* ref: FUN_00d46310 */
uint F_00d46310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd46310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if ((undefined *)*param_1 != (undefined *)0x0) {
    F_00d919e0((undefined *)*param_1);
  }
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00d46340 */
uint F_00d46340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd46340u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2;
}

/* ref: FUN_00d46350 */
uint F_00d46350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd46350u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  return param_3;
}

/* ref: FUN_00d463a0 */
unsigned int F_00d463a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd463a0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00d463d0 */
uint F_00d463d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd463d0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d46420 */
uint F_00d46420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd46420u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00d46450 */
uint F_00d46450(unsigned int gen_a0)
{
  GEN_ENTER(0xd46450u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)&REFG(undefined, 0x1138ccc);
  uVar2 = *(undefined4 *)&REFG(undefined, 0x1138cc8);
  uVar1 = *(undefined4 *)&REFG(undefined, 0x1138cc4);
  *param_1 = *(undefined4 *)&REFG(undefined, 0x1138cc0);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return (uint)param_1;
}

/* ref: FUN_00d46470 */
uint F_00d46470(unsigned int gen_a0)
{
  GEN_ENTER(0xd46470u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)&REFG(undefined, 0x1138cdc);
  uVar2 = *(undefined4 *)&REFG(undefined, 0x1138cd8);
  uVar1 = *(undefined4 *)&REFG(undefined, 0x1138cd4);
  *param_1 = *(undefined4 *)&REFG(undefined, 0x1138cd0);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return (uint)param_1;
}

/* ref: FUN_00d46490 */
byte F_00d46490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd46490u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((byte *)GEN_TOP((param_2 + *(int *)(in_ecx + 0x10))));
}

/* ref: FUN_00d464a0 */
byte F_00d464a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd464a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((byte *)GEN_TOP((param_2 + *(int *)(in_ecx + 0x1c))));
}

/* ref: FUN_00d464b0 */
uint F_00d464b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd464b0u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  return (uint)!(*param_2 <= *param_1);
}

/* ref: FUN_00d464d0 */
uint F_00d464d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd464d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined1 *)this = (undefined1)param_1;
  *(undefined2 *)((int)this + 1) = 0x204;
  *(undefined2 *)((int)this + 6) = 0xffff;
  *(undefined2 *)((int)this + 4) = (undefined2)param_2;
  *(undefined4 *)((int)this + 0x10) = 0x11800;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  return (uint)this;
}

/* ref: FUN_00d46590 */
uint F_00d46590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd46590u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00d465d0 */
uint F_00d465d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd465d0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d465f0 */
uint F_00d465f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd465f0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00d46630 */
uint F_00d46630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd46630u, gen_a0, gen_a1, 0u, 0u);
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
    (*(int *)&gen_args[1]) = (*(int *)&gen_args[1]) * 0x30;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0xc))))(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)&gen_args[1]));
    iVar3 = (*(int *)&gen_args[1]) / 0x30;
    if (iVar3 != 0) goto LAB_00d4668e;
  }
  iVar3 = ((int)0x80000000);
LAB_00d4668e: ;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = iVar1;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = iVar3;
  *(uint *)(*(undefined * PTR32 *)&gen_args[0]) = uVar2;
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00d466b0 */
uint F_00d466b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd466b0u, gen_a0, gen_a1, 0u, 0u);
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
    (*(int *)&gen_args[1]) = (*(int *)&gen_args[1]) * 4;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0xc))))(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)&gen_args[1]));
    iVar3 = (int)((*(int *)&gen_args[1]) + ((*(int *)&gen_args[1]) >> 0x1f & 3U)) >> 2;
    if (iVar3 != 0) goto LAB_00d46706;
  }
  iVar3 = ((int)0x80000000);
LAB_00d46706: ;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = iVar1;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = iVar3;
  *(uint *)(*(undefined * PTR32 *)&gen_args[0]) = uVar2;
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00d46720 */
uint F_00d46720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd46720u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d46800 */
uint F_00d46800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd46800u, gen_a0, gen_a1, 0u, 0u);
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
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,4);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_1;
  return uVar2;
}

/* ref: FUN_00d46840 */
uint F_00d46840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd46840u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d46880 */
uint F_00d46880(unsigned int gen_a0)
{
  GEN_ENTER(0xd46880u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d468c0 */
uint F_00d468c0(unsigned int gen_a0)
{
  GEN_ENTER(0xd468c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x30);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d46900 */
uint F_00d46900(unsigned int gen_a0)
{
  GEN_ENTER(0xd46900u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d46980 */
uint F_00d46980(unsigned int gen_a0)
{
  GEN_ENTER(0xd46980u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d469c0 */
uint F_00d469c0(unsigned int gen_a0)
{
  GEN_ENTER(0xd469c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x30);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d46a00 */
uint F_00d46a00(unsigned int gen_a0)
{
  GEN_ENTER(0xd46a00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d46a40 */
uint F_00d46a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd46a40u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  float fVar22;
  undefined1 in_XMM2 [16] = {0};
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar23;
  float fVar24;
  undefined1 in_XMM3 [16] = {0};
  
  fVar4 = *(float *)&REFG(undefined, 0x1138ccc);
  fVar3 = *(float *)&REFG(undefined, 0x1138cc8);
  fVar2 = *(float *)&REFG(undefined, 0x1138cc4);
  fVar1 = *(float *)&REFG(undefined, 0x1138cc0);
  memcpy(&(auVar21), &(*param_2), sizeof(*param_2) < sizeof(auVar21) ? sizeof(*param_2) : sizeof(auVar21));
  if (!(*(float *)&REFG(undefined, 0x1138cc0) <= ABS((*(float *)((char *)&auVar21 + 0))))) {
    *in_ecx = 0.0;
    in_ecx[1] = 0.0;
    in_ecx[2] = 0.0;
    in_ecx[3] = 0.0;
    fVar3 = *(float *)&REFG(undefined, 0x1138cac);
    fVar2 = *(float *)&REFG(undefined, 0x1138ca8);
    fVar1 = *(float *)&REFG(undefined, 0x1138ca4);
    in_ecx[4] = *(float *)&REFG(undefined, 0x1138ca0);
    in_ecx[5] = fVar1;
    in_ecx[6] = fVar2;
    in_ecx[7] = fVar3;
    fVar3 = *(float *)&REFG(undefined, 0x1138afc);
    fVar2 = *(float *)&REFG(undefined, 0x1138af8);
    fVar1 = *(float *)&REFG(undefined, 0x1138af4);
    in_ecx[8] = *(float *)&REFG(undefined, 0x1138af0);
    in_ecx[9] = fVar1;
    in_ecx[10] = fVar2;
    in_ecx[0xb] = fVar3;
    return (uint)param_2;
  }
  gen_rcpps(&(auVar20), &(in_XMM2), &(auVar21));
  fVar9 = (*(float *)&REFG(undefined, 0x1136d40) - (*(float *)((char *)&auVar21 + 0)) * (*(float *)((char *)&auVar20 + 0))) * (*(float *)((char *)&auVar20 + 0));
  fVar11 = (*(float *)&REFG(undefined, 0x1136d44) - (*(float *)((char *)&auVar21 + 4)) * (*(float *)((char *)&auVar20 + 4))) * (*(float *)((char *)&auVar20 + 4));
  fVar13 = (*(float *)&REFG(undefined, 0x1136d48) - (*(float *)((char *)&auVar21 + 8)) * (*(float *)((char *)&auVar20 + 8))) * (*(float *)((char *)&auVar20 + 8));
  fVar15 = (*(float *)&REFG(undefined, 0x1136d4c) - (*(float *)((char *)&auVar21 + 12)) * (*(float *)((char *)&auVar20 + 12))) * (*(float *)((char *)&auVar20 + 12));
  *in_ecx = *in_ecx * fVar9;
  in_ecx[1] = in_ecx[1] * fVar11;
  in_ecx[2] = in_ecx[2] * fVar13;
  in_ecx[3] = in_ecx[3] * fVar15;
  in_ecx[8] = in_ecx[8] * fVar9;
  in_ecx[9] = in_ecx[9] * fVar11;
  in_ecx[10] = in_ecx[10] * fVar13;
  in_ecx[0xb] = in_ecx[0xb] * fVar15;
  fVar13 = *(float *)&REFG(undefined, 0x1138cac);
  fVar11 = *(float *)&REFG(undefined, 0x1138ca8);
  fVar9 = *(float *)&REFG(undefined, 0x1138ca4);
  fVar15 = (in_ecx[7] * in_ecx[7] + in_ecx[5] * in_ecx[5]) +
           (in_ecx[6] * in_ecx[6] + in_ecx[4] * in_ecx[4]);
  if ((GEN_ISNAN(fVar15) || GEN_ISNAN(fVar1)) || fVar15 < fVar1) {
    in_ecx[4] = *(float *)&REFG(undefined, 0x1138ca0);
    in_ecx[5] = fVar9;
    in_ecx[6] = fVar11;
    in_ecx[7] = fVar13;
  }
  else {
    fVar9 = in_ecx[4];
    fVar11 = in_ecx[5];
    fVar13 = in_ecx[6];
    fVar15 = in_ecx[7];
    fVar10 = fVar13 * fVar13 + fVar9 * fVar9;
    fVar12 = fVar15 * fVar15 + fVar11 * fVar11;
    fVar14 = fVar9 * fVar9 + fVar13 * fVar13;
    fVar16 = fVar11 * fVar11 + fVar15 * fVar15;
    (*(float *)((char *)&auVar21 + 0)) = fVar12 + fVar10;
    (*(float *)((char *)&auVar21 + 4)) = fVar10 + fVar12;
    (*(float *)((char *)&auVar21 + 8)) = fVar16 + fVar14;
    (*(float *)((char *)&auVar21 + 12)) = fVar14 + fVar16;
    gen_rsqrtps(&(auVar20), &(in_XMM3), &(auVar21));
    fVar24 = (*(float *)((char *)&auVar20 + 0));
    fVar16 = (*(float *)((char *)&auVar20 + 4));
    fVar22 = (*(float *)((char *)&auVar20 + 8));
    fVar23 = (*(float *)((char *)&auVar20 + 12));
    fVar10 = *(float *)&REFG(undefined, 0x1136d54) - (fVar16 * (*(float *)((char *)&auVar21 + 4))) * fVar16;
    fVar12 = *(float *)&REFG(undefined, 0x1136d58) - (fVar22 * (*(float *)((char *)&auVar21 + 8))) * fVar22;
    fVar14 = *(float *)&REFG(undefined, 0x1136d5c) - (fVar23 * (*(float *)((char *)&auVar21 + 12))) * fVar23;
    fVar16 = *(float *)&REFG(undefined, 0x1136d64) * fVar16;
    fVar22 = *(float *)&REFG(undefined, 0x1136d68) * fVar22;
    fVar23 = *(float *)&REFG(undefined, 0x1136d6c) * fVar23;
    in_ecx[4] = fVar9 * ((*(float *)&REFG(undefined, 0x1136d50) - (fVar24 * (*(float *)((char *)&auVar21 + 0))) * fVar24) *
                        (*(float *)&REFG(undefined, 0x1136d60) * fVar24));
    in_ecx[5] = fVar11 * (fVar10 * fVar16);
    in_ecx[6] = fVar13 * (fVar12 * fVar22);
    in_ecx[7] = fVar15 * (fVar14 * fVar23);
  }
  fVar9 = in_ecx[8] * in_ecx[8];
  fVar11 = in_ecx[9] * in_ecx[9];
  fVar13 = in_ecx[10] * in_ecx[10];
  uVar5 = -(uint)((fVar11 + fVar9) + fVar13 < fVar1);
  uVar6 = -(uint)((fVar11 + fVar9) + fVar13 < fVar2);
  uVar7 = -(uint)((fVar11 + fVar9) + fVar13 < fVar3);
  uVar8 = -(uint)((fVar11 + fVar9) + fVar13 < fVar4);
  uVar17 = uVar6 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af4));
  uVar18 = uVar7 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af8));
  uVar19 = uVar8 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138afc));
  in_ecx[8] = gen_bits2f(uVar5 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af0)) |
                         ~uVar5 & (uint)gen_fl2bits(in_ecx[8]));
  in_ecx[9] = gen_bits2f(uVar17 | ~uVar6 & (uint)gen_fl2bits(in_ecx[9]));
  in_ecx[10] = gen_bits2f(uVar18 | ~uVar7 & (uint)gen_fl2bits(in_ecx[10]));
  in_ecx[0xb] = gen_bits2f(uVar19 | ~uVar8 & (uint)gen_fl2bits(in_ecx[0xb]));
  return (uint)param_2;
}

/* ref: FUN_00d46b60 */
uint F_00d46b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd46b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00d46d00((undefined *)((int)this + -8),param_1);
  return uVar1;
}

/* ref: FUN_00d46b70 */
uint F_00d46b70(unsigned int gen_a0)
{
  GEN_ENTER(0xd46b70u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00d46ba0 */
uint F_00d46ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd46ba0u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_00d94390(this_00,uVar2);
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

/* ref: FUN_00d46c10 */
uint F_00d46c10(unsigned int gen_a0)
{
  GEN_ENTER(0xd46c10u, gen_a0, 0u, 0u, 0u);
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
    F_00d945c0(this_00,iVar1,uVar3);
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

/* ref: hkaAnimatedSkeleton::vf0 */
uint F_00d46d00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd46d00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d44090(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00d46ea0 */
unsigned int F_00d46ea0(float gen_a0)
{
  GEN_ENTER(0xd46ea0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00d470c0 */
float F_00d470c0(unsigned int gen_a0)
{
  GEN_ENTER(0xd470c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  float fVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = *(float *)param_1;
  uVar2 = *(uint *)(param_1 + 4);
  uVar3 = *(uint *)(param_1 + 8);
  fVar4 = F_01052372(GEN_TOD(gen_bits2d((ulonglong)uVar3)));
  fVar4 = fVar4 * fVar1;
  fVar5 = F_01052372(GEN_TOD(gen_bits2d((ulonglong)uVar2)));
  fVar6 = F_01052223(GEN_TOD(gen_bits2d((ulonglong)uVar2)));
  fVar6 = fVar6 * fVar4;
  fVar7 = F_01052223(GEN_TOD(gen_bits2d((ulonglong)uVar3)));
  *(float *)param_1 = fVar5 * fVar4;
  *(float *)(param_1 + 4) = fVar6;
  *(float *)(param_1 + 8) = fVar7 * fVar1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return fVar6;
}

/* ref: FUN_00d47150 */
float10 F_00d47150(float gen_a0, float gen_a1)
{
  GEN_ENTER(0xd47150u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), 0u, 0u);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  float fVar2;
  float local_14;
  
  fVar1 = ABS(param_1);
  fVar2 = ABS(param_2);
  if (fVar1 <= fVar2) {
    fVar1 = fVar1 / (fVar2 + REFG(float, 0x10905c4));
    fVar2 = (REFG(float, 0x1087f04) - fVar1 * *(float *)&REFG(undefined, 0x1136e94)) * fVar1;
    fVar1 = ((fVar1 * *(float *)&REFG(undefined, 0x1136e90)) * fVar1) * fVar1;
  }
  else {
    fVar2 = fVar2 / (fVar1 + REFG(float, 0x10905c4));
    fVar1 = (REFG(float, 0x1087f04) - fVar2 * *(float *)&REFG(undefined, 0x1136e94)) * fVar2 -
            ((fVar2 * *(float *)&REFG(undefined, 0x1136e90)) * fVar2) * fVar2;
    fVar2 = REFG(float, 0x109ca64);
  }
  local_14 = fVar2 - fVar1;
  if (param_2 < 0.0) {
    local_14 = REFG(float, 0x110e250) - local_14;
  }
  if (param_1 < 0.0) {
    local_14 = gen_bits2f((uint)gen_fl2bits(local_14) ^ REFG(uint, 0x10920d0));
  }
  return (float10)local_14;
}

/* ref: FUN_00d47d40 */
uint F_00d47d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd47d40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_v16 * param_1 = (gen_v16 *)(uintptr_t)gen_a1;
  gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a2;
  undefined1 auVar1 [16];
  
  gen_minps(&(auVar1), &(*param_1), &(*param_2));
  memcpy(&(*(gen_v16 *)this), &(auVar1), sizeof(auVar1) < sizeof(*(gen_v16 *)this) ? sizeof(auVar1) : sizeof(*(gen_v16 *)this));
  return (uint)param_1;
}

/* ref: FUN_00d47d60 */
uint F_00d47d60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd47d60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_v16 * param_1 = (gen_v16 *)(uintptr_t)gen_a1;
  gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a2;
  undefined1 auVar1 [16];
  
  gen_maxps(&(auVar1), &(*param_1), &(*param_2));
  memcpy(&(*(gen_v16 *)this), &(auVar1), sizeof(auVar1) < sizeof(*(gen_v16 *)this) ? sizeof(auVar1) : sizeof(*(gen_v16 *)this));
  return (uint)param_1;
}

/* ref: FUN_00d47d80 */
uint F_00d47d80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd47d80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = uVar1;
  *(undefined4 *)((int)this + 8) = uVar2;
  *(undefined4 *)((int)this + 0xc) = uVar3;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)((int)this + 0x10) = *param_2;
  *(undefined4 *)((int)this + 0x14) = uVar1;
  *(undefined4 *)((int)this + 0x18) = uVar2;
  *(undefined4 *)((int)this + 0x1c) = uVar3;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)((int)this + 0x20) = *param_3;
  *(undefined4 *)((int)this + 0x24) = uVar1;
  *(undefined4 *)((int)this + 0x28) = uVar2;
  *(undefined4 *)((int)this + 0x2c) = uVar3;
  return (uint)param_3;
}

