#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00751030 */
uint F_00751030(unsigned int gen_a0)
{
  GEN_ENTER(0x751030u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00749bf0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x1c,800);
  return (uint)uVar1;
}

/* ref: FUN_00751070 */
uint F_00751070(unsigned int gen_a0)
{
  GEN_ENTER(0x751070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00749c90(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,800);
  return (uint)uVar1;
}

/* ref: FUN_007510b0 */
uint F_007510b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7510b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (((*(int *)((int)this + 0xc) + *(int *)((int)this + 0x10) & 1U) == 0) &&
     (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 2U >> 1)) {
    F_0074d9d0(this,1);
  }
  uVar3 = *(int *)((int)this + 0xc) + *(int *)((int)this + 0x10);
  uVar4 = uVar3 >> 1;
  if (*(uint *)((int)this + 8) <= uVar4) {
    uVar4 = uVar4 - *(uint *)((int)this + 8);
  }
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar4 * 4))) == 0) {
    uVar2 = F_004296a0(0x10,0,800);
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar4 * 4))) = uVar2;
  }
  uVar4 = *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar4 * 4)));
  puVar1 = ((undefined4 *)GEN_TOP((uVar4 + (uVar3 & 1) * 8)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
    uVar4 = param_1[1];
    puVar1[1] = uVar4;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  return uVar4;
}

/* ref: FUN_00751140 */
uint F_00751140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x751140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  puVar5 = param_1;
  if (((undefined4 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2))) < param_1) {
    puVar3 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,800);
    puVar5 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar6 = puVar3;
    for (puVar4 = *(undefined4 * PTR32 *)this; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar4;
      }
      puVar6 = puVar6 + 1;
    }
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,800);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_007511f0 */
unsigned int F_007511f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7511f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_0074dbb0(this,1);
    }
    puVar2 = ((undefined4 *)GEN_TOP(((((int)param_1 - (int)puVar2) / 0x88) * 0x88 + *(int *)this)));
  }
  else {
    puVar2 = param_1;
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_0074dbb0(this,1);
    }
  }
  if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    for (iVar1 = 0x22; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x88;
  return 0;
}

/* ref: FUN_00751260 */
unsigned int F_00751260(unsigned int gen_a0)
{
  GEN_ENTER(0x751260u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)this != *(int *)((int)this + 4)) {
    *(int *)((int)this + 4) = *(int *)this;
  }
  return 0;
}

/* ref: FUN_007512b0 */
uint F_007512b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7512b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * puVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  
  piVar4 = (int *)0x0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar2 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar2 != (undefined4 *)0x0)) {
    piVar4 = (int *)*puVar2;
  }
  uVar1 = (*(int *)((int)this + 0x10) + *(int *)((int)this + 0xc)) - 1;
  if (((piVar4 == (int *)0x0) || ((int *)*piVar4 == (int *)0x0)) ||
     (piVar4 = *(int * PTR32 *)*piVar4, piVar4 == (int *)0x0)) {
    iVar5 = 0;
  }
  else {
    iVar5 = *piVar4;
  }
  uVar3 = uVar1 >> 2;
  if (*(uint *)(iVar5 + 8) <= uVar3) {
    uVar3 = uVar3 - *(uint *)(iVar5 + 8);
  }
  return *((int *)GEN_TOP((*(int *)(iVar5 + 4) + uVar3 * 4))) + (uVar1 & 3) * 4;
}

/* ref: FUN_00751300 */
unsigned int F_00751300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x751300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_0074dcc0(this,1);
    }
    puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + (((int)param_1 - (int)puVar2) / 0x14) * 0x14)));
    puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
      puVar2[3] = puVar1[3];
      puVar2[4] = puVar1[4];
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x14;
      return 0;
    }
  }
  else {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_0074dcc0(this,1);
    }
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_1;
      puVar1[1] = param_1[1];
      puVar1[2] = param_1[2];
      puVar1[3] = param_1[3];
      puVar1[4] = param_1[4];
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x14;
  return 0;
}

/* ref: FUN_007513b0 */
uint F_007513b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7513b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 4);
  if (*(uint *)this != uVar1) {
    uVar1 = F_0073f510(uVar1,uVar1,*(uint *)this);
    *(uint *)((int)this + 4) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_007513d0 */
unsigned int F_007513d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7513d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  
  if (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 1U) {
    F_0074dd50(this,1);
  }
  iVar3 = *(int *)((int)this + 0xc);
  if (iVar3 == 0) {
    iVar3 = *(int *)((int)this + 8);
  }
  iVar3 = iVar3 + -1;
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + iVar3 * 4))) == 0) {
    uVar2 = F_004296a0(0x30,0,800);
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + iVar3 * 4))) = uVar2;
  }
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + iVar3 * 4)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10b8a5c));
    puVar1[2] = *(undefined4 *)(param_1 + 8);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[5] = *(undefined4 *)(param_1 + 0x14);
    *(undefined1 *)(puVar1 + 6) = *(undefined1 *)(param_1 + 0x18);
    puVar1[7] = *(undefined4 *)(param_1 + 0x1c);
    *(undefined1 *)(puVar1 + 8) = *(undefined1 *)(param_1 + 0x20);
    puVar1[9] = *(undefined4 *)(param_1 + 0x24);
    puVar1[10] = *(undefined4 *)(param_1 + 0x28);
    *(undefined1 *)(puVar1 + 0xb) = *(undefined1 *)(param_1 + 0x2c);
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  *(int *)((int)this + 0xc) = iVar3;
  return 0;
}

/* ref: FUN_00751470 */
unsigned int F_00751470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x751470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 1U) {
    F_0074dd50(this,1);
  }
  uVar3 = *(int *)((int)this + 0xc) + *(int *)((int)this + 0x10);
  if (*(uint *)((int)this + 8) <= uVar3) {
    uVar3 = uVar3 - *(uint *)((int)this + 8);
  }
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar3 * 4))) == 0) {
    uVar2 = F_004296a0(0x30,0,800);
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar3 * 4))) = uVar2;
  }
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + uVar3 * 4)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10b8a5c));
    puVar1[2] = *(undefined4 *)(param_1 + 8);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[5] = *(undefined4 *)(param_1 + 0x14);
    *(undefined1 *)(puVar1 + 6) = *(undefined1 *)(param_1 + 0x18);
    puVar1[7] = *(undefined4 *)(param_1 + 0x1c);
    *(undefined1 *)(puVar1 + 8) = *(undefined1 *)(param_1 + 0x20);
    puVar1[9] = *(undefined4 *)(param_1 + 0x24);
    puVar1[10] = *(undefined4 *)(param_1 + 0x28);
    *(undefined1 *)(puVar1 + 0xb) = *(undefined1 *)(param_1 + 0x2c);
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  return 0;
}

/* ref: FUN_00751510 */
uint F_00751510(unsigned int gen_a0)
{
  GEN_ENTER(0x751510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00749d30(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x38,800);
  return (uint)uVar1;
}

/* ref: FUN_00751590 */
uint F_00751590(unsigned int gen_a0)
{
  GEN_ENTER(0x751590u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,*(int *)((int)this + 8) - iVar1 & 0xfffffff0,800);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_007515d0 */
uint F_007515d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7515d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0074df70(this,*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar1 = *(uint *)((int)this + 4);
  *(uint *)(uVar1 + 8) = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00751600 */
unsigned int F_00751600(unsigned int gen_a0)
{
  GEN_ENTER(0x751600u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0x28) * 0x28,800);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_00751650 */
unsigned int F_00751650(unsigned int gen_a0)
{
  GEN_ENTER(0x751650u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)this != *(int *)((int)this + 4)) {
    *(int *)((int)this + 4) = *(int *)this;
  }
  return 0;
}

/* ref: FUN_007516a0 */
uint F_007516a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7516a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0074e060(this,*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar1 = *(uint *)((int)this + 4);
  *(uint *)(uVar1 + 8) = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_007516d0 */
uint F_007516d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7516d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined2 * puVar3;
  undefined2 * puVar4;
  undefined2 * puVar5;
  undefined2 * puVar6;
  
  puVar5 = param_1;
  if (((undefined2 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 1))) < param_1) {
    puVar3 = (undefined2 *)F_004296a0((int)((int)(uintptr_t)param_1) * 2,0,800);
    puVar5 = *(undefined2 * PTR32 *)((int)this + 4);
    puVar6 = puVar3;
    for (puVar4 = *(undefined2 * PTR32 *)this; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar6 != (undefined2 *)0x0) {
        *puVar6 = *puVar4;
      }
      puVar6 = puVar6 + 1;
    }
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 1) * 2,800);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined2 * PTR32 *)this = puVar3;
    *(undefined2 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined2 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 1);
  }
  return (uint)puVar5;
}

/* ref: FUN_00751770 */
unsigned int F_00751770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x751770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_0074e140(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) =
           *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar2) >> 2) * 4)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
      return 0;
    }
  }
  else {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_0074e140(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return 0;
}

/* ref: FUN_00751810 */
uint F_00751810(unsigned int gen_a0)
{
  GEN_ENTER(0x751810u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0074e1b0(this,*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar1 = *(uint *)((int)this + 4);
  *(uint *)(uVar1 + 8) = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00751840 */
unsigned int F_00751840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x751840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_0074e210(this,1);
    }
    puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + (((int)param_1 - (int)puVar2) / 0xc) * 0xc)));
    puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0xc;
      return 0;
    }
  }
  else {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_0074e210(this,1);
    }
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_1;
      puVar1[1] = param_1[1];
      puVar1[2] = param_1[2];
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0xc;
  return 0;
}

/* ref: FUN_007518d0 */
uint F_007518d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7518d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  
  puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar4) && (*(undefined4 * PTR32 *)this <= param_1)) {
    iVar5 = (int)param_1 - (int)*(undefined4 * PTR32 *)((int)(uintptr_t)this) >> 3;
    if (puVar4 == *(undefined4 * PTR32 *)((int)this + 8)) {
      puVar4 = (undefined4 *)F_0074e290(this,1);
    }
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = *(int *)this;
      *puVar1 = *(undefined4 *)(iVar2 + iVar5 * 8);
      uVar3 = *(uint *)(iVar2 + 4 + iVar5 * 8);
      puVar1[1] = uVar3;
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 8;
      return uVar3;
    }
  }
  else {
    if (puVar4 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_0074e290(this,1);
    }
    puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *param_1;
      puVar4[1] = param_1[1];
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 8;
  return (uint)puVar4;
}

/* ref: FUN_00751950 */
uint F_00751950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x751950u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int iVar2;
  
  F_007390c0(param_2 + 0xb8,*(undefined4 *)((int)this + 4),param_2,param_2);
  iVar1 = *(int *)((int)this + 4);
  for (iVar2 = iVar1 + -0xb8; iVar2 != iVar1; iVar2 = iVar2 + 0xb8) {
    F_0042c880((undefined *)(iVar2 + 0x58));
    F_0042c880((undefined *)(iVar2 + 4));
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -0xb8;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_007519b0 */
uint F_007519b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7519b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  puVar5 = param_1;
  if (((undefined4 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2))) < param_1) {
    puVar3 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,800);
    puVar5 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar6 = puVar3;
    for (puVar4 = *(undefined4 * PTR32 *)this; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar4;
      }
      puVar6 = puVar6 + 1;
    }
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,800);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_00751aa0 */
uint F_00751aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x751aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xd0];
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  (*(uint *)(gen_frame + 0xc8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xcc);
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x6d) == '\0') {
    puVar2 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar2[3] < *param_1) {
        puVar1 = (undefined4 *)puVar2[2];
      }
      else {
        puVar1 = (undefined4 *)*puVar2;
        puVar3 = puVar2;
      }
      puVar2 = puVar1;
    } while (*(char *)((int)puVar1 + 0x6d) == '\0');
  }
  if ((puVar3 != *(undefined4 * PTR32 *)((int)this + 4)) && ((uint)puVar3[3] <= *param_1)) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xcc) ^ (uint)(uint)(gen_frame + 0xcc));
    return (uint)(puVar3 + 4);
  }
  F_0042b630(((undefined1 *)(gen_frame + 0x14)));
  (*(uint *)(gen_frame + 0x68)) = *param_1;
  ((byte *)(gen_frame + 0x6c))[0] = ((byte *)(gen_frame + 0x8))[4];
  ((byte *)(gen_frame + 0x6c))[1] = ((byte *)(gen_frame + 0x8))[5];
  ((byte *)(gen_frame + 0x6c))[2] = ((byte *)(gen_frame + 0x8))[6];
  ((byte *)(gen_frame + 0x6c))[3] = ((byte *)(gen_frame + 0x8))[7];
  ((byte *)(gen_frame + 0x70))[0] = ((byte *)(gen_frame + 0x8))[8];
  ((byte *)(gen_frame + 0x70))[1] = ((byte *)(gen_frame + 0x8))[9];
  ((byte *)(gen_frame + 0x70))[2] = ((byte *)(gen_frame + 0x8))[10];
  ((byte *)(gen_frame + 0x70))[3] = ((byte *)(gen_frame + 0x8))[0xb];
  F_0042cbc0(((undefined1 *)(gen_frame + 0x74)),((undefined1 *)(gen_frame + 0x14)));
  puVar2 = (undefined4 *)F_004296a0(0x70,0,800);
  *puVar2 = *(undefined4 *)((int)this + 4);
  puVar2[1] = *(undefined4 *)((int)this + 4);
  puVar2[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar2 + 0x1b) = 0;
  if (puVar2 + 3 != (uint *)0x0) {
    puVar2[3] = (*(uint *)(gen_frame + 0x68));
    puVar2[4] = ((byte *)(gen_frame + 0x6c));
    puVar2[5] = ((byte *)(gen_frame + 0x70));
    F_0042cbc0(puVar2 + 6,((undefined1 *)(gen_frame + 0x74)));
  }
  F_0074aca0(this,((byte *)(gen_frame + 0x8)),puVar3,puVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x74)));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc));
  return (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)) + 0x10;
}

/* ref: FUN_00751bd0 */
uint F_00751bd0(unsigned int gen_a0)
{
  GEN_ENTER(0x751bd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00749ea0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,800);
  return (uint)uVar1;
}

/* ref: FUN_00751c10 */
uint F_00751c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x751c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_0074e360(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_0074e360(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00751c80 */
uint F_00751c80(unsigned int gen_a0)
{
  GEN_ENTER(0x751c80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0074e410(this,*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar1 = *(uint *)((int)this + 4);
  *(uint *)(uVar1 + 8) = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00751cb0 */
unsigned int F_00751cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x751cb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x54;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x54;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      F_0074e460(this,uVar1);
      return 0;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    F_0074e460(this,uVar1);
  }
  return 0;
}

/* ref: FUN_00751d40 */
uint F_00751d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x751d40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 != param_3) {
    uVar2 = F_00739130(param_3,*(undefined4 *)((int)this + 4),param_2,param_1);
    uVar1 = *(uint *)((int)this + 4);
    for (uVar3 = uVar2; uVar3 != uVar1; uVar3 = uVar3 + 0x140) {
      F_0042c880((undefined *)(uVar3 + 8));
    }
    *(uint *)((int)this + 4) = uVar2;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00751db0 */
uint F_00751db0(unsigned int gen_a0)
{
  GEN_ENTER(0x751db0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)this;
  if (iVar2 != 0) {
    iVar1 = *(int *)((int)this + 4);
    for (; iVar2 != iVar1; iVar2 = iVar2 + 0x140) {
      F_0042c880((undefined *)(iVar2 + 8));
    }
    F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x140) * 0x140,800);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_00751e10 */
uint F_00751e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x751e10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00751140(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00751140(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00751e80 */
unsigned int F_00751e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x751e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (((*(int *)((int)this + 0xc) + *(int *)((int)this + 0x10) & 3U) == 0) &&
     (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 4U >> 2)) {
    F_0074e580(this,1);
  }
  uVar3 = *(int *)((int)this + 0xc) + *(int *)((int)this + 0x10);
  uVar4 = uVar3 >> 2;
  if (*(uint *)((int)this + 8) <= uVar4) {
    uVar4 = uVar4 - *(uint *)((int)this + 8);
  }
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar4 * 4))) == 0) {
    uVar2 = F_004296a0(0x10,0,800);
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar4 * 4))) = uVar2;
  }
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar4 * 4))) + (uVar3 & 3) * 4)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  return 0;
}

/* ref: FUN_00751f00 */
unsigned int F_00751f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x751f00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 4;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 4;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      F_0074e700(this,uVar2);
      return 0;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    F_0074e700(this,uVar2);
  }
  return 0;
}

/* ref: FUN_00751f70 */
unsigned int F_00751f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x751f70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x28;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x28;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      F_0074e790(this,uVar1);
      return 0;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    F_0074e790(this,uVar1);
  }
  return 0;
}

/* ref: FUN_00752000 */
uint F_00752000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x752000u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  piVar2 = *(int * PTR32 *)((int)this + 4);
  piVar3 = param_2;
  if ((param_2 == (int *)*piVar2) && (param_3 == piVar2)) {
    F_0074e060(this,piVar2[1]);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x2cd) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x2cd) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x2cd);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x2cd);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x2cd);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x2cd);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_0074e880(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_007520d0 */
uint F_007520d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7520d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00752000(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_007520f0 */
uint F_007520f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7520f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 1;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 1;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_007516d0(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_007516d0(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00752160 */
uint F_00752160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x752160u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  piVar2 = *(int * PTR32 *)((int)this + 4);
  piVar3 = param_2;
  if ((param_2 == (int *)*piVar2) && (param_3 == piVar2)) {
    F_0074e1b0(this,piVar2[1]);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x101) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x101) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x101);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x101);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x101);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x101);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_0074ebb0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00752230 */
uint F_00752230(unsigned int gen_a0)
{
  GEN_ENTER(0x752230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00752160(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00752250 */
unsigned int F_00752250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x752250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0xb8;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0xb8;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      F_0074f1b0(this,uVar1);
      return 0;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    F_0074f1b0(this,uVar1);
  }
  return 0;
}

/* ref: FUN_007522e0 */
uint F_007522e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7522e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_0074a1e0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x28,800);
  return (uint)uVar1;
}

/* ref: FUN_00752320 */
uint F_00752320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x752320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_007519b0(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_007519b0(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00752390 */
uint F_00752390(unsigned int gen_a0)
{
  GEN_ENTER(0x752390u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)this;
  if (iVar2 != 0) {
    iVar1 = *(int *)((int)this + 4);
    for (; iVar2 != iVar1; iVar2 = iVar2 + 0x140) {
      F_0042c880((undefined *)(iVar2 + 0x1c));
    }
    F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x140) * 0x140,800);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_007523f0 */
uint F_007523f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7523f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 != param_3) {
    uVar2 = F_007394b0(param_3,*(undefined4 *)((int)this + 4),param_2,param_1);
    uVar1 = *(uint *)((int)this + 4);
    for (uVar3 = uVar2; uVar3 != uVar1; uVar3 = uVar3 + 0x74) {
      F_0042c880((undefined *)(uVar3 + 0x20));
    }
    *(uint *)((int)this + 4) = uVar2;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00752460 */
uint F_00752460(unsigned int gen_a0)
{
  GEN_ENTER(0x752460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)this;
  if (iVar2 != 0) {
    iVar1 = *(int *)((int)this + 4);
    for (; iVar2 != iVar1; iVar2 = iVar2 + 0x74) {
      F_0042c880((undefined *)(iVar2 + 0x20));
    }
    F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x74) * 0x74,800);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_007524c0 */
uint F_007524c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7524c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_0074f310(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_007524e0 */
unsigned int F_007524e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7524e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  
  if (this != param_1) {
    iVar1 = *(int *)this;
    if (iVar1 != 0) {
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,800);
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)this = *param_1;
    *(undefined4 *)((int)this + 4) = param_1[1];
    *(undefined4 *)((int)this + 8) = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return 0;
}

/* ref: FUN_00752540 */
uint F_00752540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x752540u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  piVar2 = *(int * PTR32 *)((int)this + 4);
  piVar3 = param_2;
  if ((param_2 == (int *)*piVar2) && (param_3 == piVar2)) {
    F_0074d7c0(this,piVar2[1]);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0xbd) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0xbd) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0xbd);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0xbd);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0xbd);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0xbd);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_0074f3d0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00752610 */
uint F_00752610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x752610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined1 * puVar3;
  undefined1 * puVar4;
  undefined1 * puVar5;
  undefined1 * puVar6;
  
  puVar5 = param_1;
  if (((undefined1 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)this))) < param_1) {
    puVar3 = (undefined1 *)F_004296a0(param_1,0,0x323);
    puVar5 = *(undefined1 * PTR32 *)((int)this + 4);
    puVar6 = puVar3;
    for (puVar4 = *(undefined1 * PTR32 *)this; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar6 != (undefined1 *)0x0) {
        *puVar6 = *puVar4;
      }
      puVar6 = puVar6 + 1;
    }
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,*(int *)((int)this + 8) - iVar1,0x323);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined1 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1);
    *(undefined1 * PTR32 *)this = puVar3;
    *(undefined1 * PTR32 *)((int)this + 8) = puVar5;
  }
  return (uint)puVar5;
}

/* ref: FUN_007526a0 */
unsigned int F_007526a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7526a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if ((uint)((*(int *)((int)this + 8) - *(int *)this) / 0x140) < param_1) {
    uVar3 = F_004296a0(param_1 * 0x140,0,800);
    F_0074aa00(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3);
    iVar1 = *(int *)((int)this + 4);
    iVar2 = *(int *)this;
    iVar4 = *(int *)this;
    if (iVar4 != 0) {
      for (; iVar4 != iVar1; iVar4 = iVar4 + 0x140) {
        F_0042c880((undefined *)(iVar4 + 8));
      }
      F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x140) * 0x140,800);
    }
    *(uint *)((int)this + 8) = param_1 * 0x140 + uVar3;
    *(uint *)((int)this + 4) = ((iVar1 - iVar2) / 0x140) * 0x140 + uVar3;
    *(uint *)this = uVar3;
  }
  return 0;
}

/* ref: FUN_007527a0 */
uint F_007527a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7527a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  puVar5 = param_1;
  if (((undefined4 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2))) < param_1) {
    puVar3 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,800);
    puVar5 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar6 = puVar3;
    for (puVar4 = *(undefined4 * PTR32 *)this; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar4;
      }
      puVar6 = puVar6 + 1;
    }
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,800);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_00752850 */
uint F_00752850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x752850u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  piVar3 = param_2;
  if ((param_2 == ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 4)))) && (param_3 == *(int * PTR32 *)((int)this + 4))) {
    F_0074f6d0(this);
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x15) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x15) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x15);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x15);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x15);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_00749f80(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_007528f0 */
uint F_007528f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7528f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  piVar2 = *(int * PTR32 *)((int)this + 4);
  piVar3 = param_2;
  if ((param_2 == (int *)*piVar2) && (param_3 == piVar2)) {
    F_0074df70(this,piVar2[1]);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x65) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x65) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x65);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x65);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x65);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x65);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_0074f730(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_007529b0 */
uint F_007529b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7529b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0074f990(this,*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar1 = *(uint *)((int)this + 4);
  *(uint *)(uVar1 + 8) = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_007529e0 */
uint F_007529e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7529e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = (*(int *)((int)this + 8) - *(int *)this) / 0x140;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x140,0,800);
    F_00748740(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3,(int)this + 0xc,0,param_1)
    ;
    iVar1 = *(int *)((int)this + 4);
    iVar2 = *(int *)this;
    iVar4 = *(int *)this;
    if (iVar4 != 0) {
      for (; iVar4 != iVar1; iVar4 = iVar4 + 0x140) {
        F_0042c880((undefined *)(iVar4 + 0x1c));
      }
      F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x140) * 0x140,800);
    }
    *(uint *)((int)this + 8) = param_1 * 0x140 + uVar3;
    *(uint *)((int)this + 4) = ((iVar1 - iVar2) / 0x140) * 0x140 + uVar3;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00752ae0 */
uint F_00752ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x752ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = (*(int *)((int)this + 8) - *(int *)this) / 0x74;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x74,0,800);
    F_007487d0(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3,(int)this + 0xc,0,param_1)
    ;
    iVar1 = *(int *)((int)this + 4);
    iVar2 = *(int *)this;
    iVar4 = *(int *)this;
    if (iVar4 != 0) {
      for (; iVar4 != iVar1; iVar4 = iVar4 + 0x74) {
        F_0042c880((undefined *)(iVar4 + 0x20));
      }
      F_00429760(*(undefined4 *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x74) * 0x74,800)
      ;
    }
    *(uint *)((int)this + 4) = ((iVar1 - iVar2) / 0x74) * 0x74 + uVar3;
    *(uint *)((int)this + 8) = param_1 * 0x74 + uVar3;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00752be0 */
unsigned int F_00752be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x752be0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_0074c430(param_1,param_2,(int)this + 0xc,param_2);
  return 0;
}

/* ref: FUN_00752c00 */
uint F_00752c00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x752c00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  piVar2 = *(int * PTR32 *)((int)this + 4);
  piVar3 = param_2;
  if ((param_2 == (int *)*piVar2) && (param_3 == piVar2)) {
    F_0074e410(this,piVar2[1]);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x65) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x65) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x65);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x65);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x65);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x65);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_0074d560(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00752cc0 */
uint F_00752cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x752cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_0074a520(this,param_1);
  return (uint)this;
}

/* ref: FUN_00752ce0 */
uint F_00752ce0(unsigned int gen_a0)
{
  GEN_ENTER(0x752ce0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_0074f9e0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)this,*(undefined4 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00752d00 */
uint F_00752d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x752d00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_007506b0(this,((undefined1 *)(gen_frame + 0x4)),param_2);
  *param_1 = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00752d20 */
uint F_00752d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x752d20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_00750720(this,((undefined1 *)(gen_frame + 0x4)),param_2);
  *param_1 = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00752d40 */
uint F_00752d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x752d40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0xc0,0,800);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 0x2f) = 0;
  F_00748140((int)this + 0xd,puVar1 + 3,param_2);
  F_00750050(param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_00752da0 */
uint F_00752da0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x752da0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x2d0,0,800);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 0xb3) = 0;
  F_007481e0((int)this + 0xd,puVar1 + 3,param_2);
  F_007503b0(this,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_00752e00 */
uint F_00752e00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x752e00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_0074bd60(this,param_2);
  F_007504b0(this,param_1,uVar1,uVar2);
  return param_1;
}

/* ref: FUN_00752e30 */
uint F_00752e30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x752e30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_0074be10(this,param_2);
  F_007502b0(this,param_1,uVar1,uVar2);
  return param_1;
}

/* ref: FUN_00752e60 */
uint F_00752e60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x752e60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_007507e0(this,((undefined1 *)(gen_frame + 0x4)),param_2);
  *param_1 = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00752e80 */
uint F_00752e80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x752e80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_0074bea0(this,param_2);
  F_007505b0(this,param_1,uVar1,uVar2);
  return param_1;
}

/* ref: FUN_00752eb0 */
uint F_00752eb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x752eb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_00750850(this,((undefined1 *)(gen_frame + 0x4)),param_2);
  *param_1 = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00752ed0 */
uint F_00752ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x752ed0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined4 uVar1;
  undefined4 * puVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  puVar2 = (undefined4 *)F_004296a0(0x68,0,800);
  *puVar2 = *(undefined4 *)((int)this + 4);
  puVar2[1] = *(undefined4 *)((int)this + 4);
  puVar2[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar2 + 0x19) = 0;
  uVar1 = *param_2;
  F_0042cbc0(((undefined1 *)(gen_frame + 0x4)),param_2 + 1);
  if (puVar2 + 3 != (undefined4 *)0x0) {
    puVar2[3] = uVar1;
    F_0042cbc0(puVar2 + 4,((undefined1 *)(gen_frame + 0x4)));
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0074ff60(this,param_1,puVar2,0);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return param_1;
}

/* ref: FUN_00752f70 */
uint F_00752f70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x752f70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x18,0,800);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 5) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = *param_3;
    *(undefined2 *)(puVar1 + 4) = *(undefined2 *)(param_3 + 1);
  }
  F_00750150(this,param_1,param_2,puVar1);
  return param_1;
}

/* ref: FUN_00752fd0 */
uint F_00752fd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x752fd0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != (undefined *)0x0) {
        F_00738690(this,(param_1 - (int)param_3) + (int)this);
      }
      this = (undefined *)((int)this + 0x1b0);
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00753010 */
uint F_00753010(unsigned int gen_a0)
{
  GEN_ENTER(0x753010u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_007496b0((undefined *)((int)this + 100),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x68),
               *(undefined4 * PTR32 *)((int)this + 0x68));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 0x68),0x18,800);
  return (uint)uVar1;
}

/* ref: FUN_00753060 */
uint F_00753060(unsigned int gen_a0)
{
  GEN_ENTER(0x753060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_007509a0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)this,*(undefined4 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00753080 */
unsigned int F_00753080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x753080u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00750a20(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_007530a0 */
uint F_007530a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7530a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00750930(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_007530d0 */
uint F_007530d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7530d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004296a0(0x18,0,800);
  *(uint *)((int)this + 4) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x15))) = 1;
  F_00750ab0(this,param_1);
  return (uint)this;
}

/* ref: FUN_00753120 */
uint F_00753120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x753120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004296a0(0x28,0,800);
  *(uint *)((int)this + 4) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x24))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x25))) = 1;
  F_00750b30(this,param_1);
  return (uint)this;
}

/* ref: FUN_00753170 */
uint F_00753170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x753170u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  byte bVar6;
  uint uVar7;
  
  piVar5 = (*(int * PTR32 *)&gen_args[1]);
  if ((*(undefined * PTR32 *)&gen_args[0]) != (*(int * PTR32 *)&gen_args[1])) {
    uVar7 = ((*(int * PTR32 *)&gen_args[1])[1] - *(*(int * PTR32 *)&gen_args[1])) / 0xb8;
    if (uVar7 == 0) {
      (*(int * PTR32 *)&gen_args[1]) = (int *)uVar7;
      F_007509a0((*(undefined * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)&gen_args[1]),*(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))));
      return (uint)(*(undefined * PTR32 *)&gen_args[0]);
    }
    iVar2 = *(int *)(*(undefined * PTR32 *)&gen_args[0]);
    uVar4 = (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) - iVar2) / 0xb8;
    if (uVar7 <= uVar4) {
      piVar1 = (*(int * PTR32 *)&gen_args[1]) + 1;
      iVar3 = *(*(int * PTR32 *)&gen_args[1]);
      (*(int * PTR32 *)&gen_args[1]) = (int *)uVar7;
      uVar7 = F_0072db20(iVar3,*piVar1,iVar2,uVar7);
      F_0074e300(uVar7,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))));
      *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = ((piVar5[1] - *piVar5) / 0xb8) * 0xb8 + *(int *)(*(undefined * PTR32 *)&gen_args[0]);
      return (uint)(*(undefined * PTR32 *)&gen_args[0]);
    }
    if (uVar7 <= (uint)((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) - iVar2) / 0xb8)) {
      iVar3 = *(*(int * PTR32 *)&gen_args[1]);
      (*(int * PTR32 *)&gen_args[1]) = (int *)(uVar4 * 0xb8 + iVar3);
      F_0072db20(iVar3,(*(int * PTR32 *)&gen_args[1]),iVar2,(*(int * PTR32 *)&gen_args[1]));
      uVar7 = F_007428e0((*(int * PTR32 *)&gen_args[1]),piVar5[1],*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),(int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc,(*(int * PTR32 *)&gen_args[1]))
      ;
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = uVar7;
      return (uint)(*(undefined * PTR32 *)&gen_args[0]);
    }
    (*(int * PTR32 *)&gen_args[1]) = (int *)uVar7;
    if (iVar2 != 0) {
      F_0074e300(iVar2,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))));
      F_00726420(*(int *)(*(undefined * PTR32 *)&gen_args[0]),(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) - *(int *)(*(undefined * PTR32 *)&gen_args[0])) / 0xb8);
    }
    bVar6 = F_0073a230((*(undefined * PTR32 *)&gen_args[0]),(piVar5[1] - *piVar5) / 0xb8);
    if (bVar6 != 0) {
      uVar7 = F_0074c7a0((*(undefined * PTR32 *)&gen_args[0]),*piVar5,piVar5[1],*(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]));
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = uVar7;
    }
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00753310 */
unsigned int F_00753310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x753310u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_00750a20(param_2,param_3);
  }
  return 0;
}

/* ref: FUN_00753330 */
unsigned int F_00753330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x753330u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_00750a20(param_2,param_3);
  }
  return 0;
}

/* ref: FUN_00753350 */
uint F_00753350(unsigned int gen_a0)
{
  GEN_ENTER(0x753350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  
  if (*(int *)((int)this + 0x24) == 0) {
    return 0;
  }
  puVar1 = (uint *)F_007512b0((undefined *)((int)this + 0x14));
  return *puVar1;
}

/* ref: FUN_00753370 */
uint F_00753370(unsigned int gen_a0)
{
  GEN_ENTER(0x753370u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00749d30(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x38,800);
  return (uint)uVar1;
}

/* ref: FUN_007533b0 */
uint F_007533b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7533b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_007496b0((undefined *)((int)this + 100),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x68),
               *(undefined4 * PTR32 *)((int)this + 0x68));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 0x68),0x18,800);
  return (uint)uVar1;
}

/* ref: FUN_00753450 */
unsigned int F_00753450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x753450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x10b90b4));
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  return 0;
}

/* ref: FUN_00753480 */
uint F_00753480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x753480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x10b90d4));
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  return (uint)this;
}

/* ref: FUN_007534a0 */
byte F_007534a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7534a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (param_1 != 0) {
    uVar1 = F_004296a0(param_1 * 0x54,0,0x35);
    *(uint *)((int)this + 8) = param_1 * 0x54 + uVar1;
    *(uint *)this = uVar1;
    *(uint *)((int)this + 4) = uVar1;
    return 1;
  }
  return 0;
}

/* ref: FUN_007534f0 */
uint F_007534f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7534f0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (this != (undefined *)0x0) {
      F_0042cbc0(this,param_1);
    }
    param_1 = param_1 + 0x54;
    this = (undefined *)((int)this + 0x54);
  } while (param_1 != param_2);
  return (uint)this;
}

/* ref: FUN_00753530 */
uint F_00753530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x753530u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  int iVar1;
  
  this = param_3;
  for (iVar1 = param_1; iVar1 != param_2; iVar1 = iVar1 + 0x54) {
    if (this != (undefined *)0x0) {
      F_0042cbc0(this,iVar1);
    }
    this = (undefined *)((int)this + 0x54);
  }
  return (uint)this;
}

/* ref: FUN_00753570 */
uint F_00753570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x753570u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  int iVar1;
  
  this = param_3;
  for (iVar1 = param_1; iVar1 != param_2; iVar1 = iVar1 + 0x54) {
    if (this != (undefined *)0x0) {
      F_0042cbc0(this,iVar1);
    }
    this = (undefined *)((int)this + 0x54);
  }
  return (uint)this;
}

/* ref: FUN_007535b0 */
uint F_007535b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7535b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined * this_00;
  int iVar1;
  int iVar2;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  iVar2 = (param_1[1] - *param_1) / 0x54;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (iVar2 != 0) {
    iVar2 = iVar2 * 0x54;
    this_00 = (undefined *)F_004296a0(iVar2,0,0x35);
    *(undefined * PTR32 *)((int)this + 8) = (undefined *)(iVar2 + (int)this_00);
    *(undefined * PTR32 *)this = this_00;
    *(undefined * PTR32 *)((int)this + 4) = this_00;
    iVar2 = param_1[1];
    for (iVar1 = *param_1; iVar1 != iVar2; iVar1 = iVar1 + 0x54) {
      if (this_00 != (undefined *)0x0) {
        F_0042cbc0(this_00,iVar1);
      }
      this_00 = (undefined *)((int)this_00 + 0x54);
    }
    *(undefined * PTR32 *)((int)this + 4) = this_00;
  }
  return (uint)this;
}

/* ref: FUN_00753650 */
uint F_00753650(unsigned int gen_a0)
{
  GEN_ENTER(0x753650u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10ba654));
  uVar1 = F_004876d0((undefined *)((int)this + 0x18));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[3])REFP(0x10b8174));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar1;
}

/* ref: Client::Game::Event::SelectOkCallback::vf0 */
uint F_00753670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x753670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10ba654));
  F_004876d0(this + 0x18);
  *(undefined * PTR32 * PTR32 *)(this + 0x10) = (*(undefined * PTR32 (*)[3])REFP(0x10b8174));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_007536b0 */
uint F_007536b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7536b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x10b90b4));
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10ba654));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) =
       (*(undefined * PTR32 (*)[3])REFP(0x10b90d4));
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  F_007535b0((undefined *)((int)this + 0x18),param_1 + 0x18);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  return (uint)this;
}

/* ref: FUN_00753750 */
uint F_00753750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x753750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x10b90e4));
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  return (uint)this;
}

/* ref: FUN_00753770 */
uint F_00753770(unsigned int gen_a0)
{
  GEN_ENTER(0x753770u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10ba664));
  uVar1 = F_004876d0((undefined *)((int)this + 0x18));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[3])REFP(0x10b8174));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar1;
}

/* ref: Client::Game::Event::SelectYesNoCallback::vf2 */
uint F_00753790(unsigned int gen_a0)
{
  GEN_ENTER(0x753790u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  uVar1 = F_00487650(this + 0x18,&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)(this + 0x18),
                       *(undefined4 *)(this + 0x1c));
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  return uVar1;
}

/* ref: Client::Game::Event::SelectYesNoCallback::vf0 */
uint F_007537d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7537d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10ba664));
  F_004876d0(this + 0x18);
  *(undefined * PTR32 * PTR32 *)(this + 0x10) = (*(undefined * PTR32 (*)[3])REFP(0x10b8174));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00753810 */
uint F_00753810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x753810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x10b90b4));
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10ba664));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) =
       (*(undefined * PTR32 (*)[3])REFP(0x10b90e4));
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  F_007535b0((undefined *)((int)this + 0x18),param_1 + 0x18);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  return (uint)this;
}

/* ref: FUN_007538c0 */
uint F_007538c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7538c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x10b90f4));
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  return (uint)this;
}

/* ref: FUN_007538e0 */
uint F_007538e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7538e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10ba674));
  uVar1 = F_004876d0((undefined *)((int)this + 0x18));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[3])REFP(0x10b8174));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar1;
}

/* ref: Client::Game::Event::SelectYesNoCountCallback::vf2 */
uint F_00753900(unsigned int gen_a0)
{
  GEN_ENTER(0x753900u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  uVar1 = F_00487650(this + 0x18,&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)(this + 0x18),
                       *(undefined4 *)(this + 0x1c));
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  this[0x36] = (undefined1)0x0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined2 *)(this + 0x34) = 0x100;
  return uVar1;
}

/* ref: Client::Game::Event::SelectYesNoCountCallback::vf0 */
uint F_00753950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x753950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10ba674));
  F_004876d0(this + 0x18);
  *(undefined * PTR32 * PTR32 *)(this + 0x10) = (*(undefined * PTR32 (*)[3])REFP(0x10b8174));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00753990 */
uint F_00753990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x753990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x10b90b4));
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10ba674));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) =
       (*(undefined * PTR32 (*)[3])REFP(0x10b90f4));
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  F_007535b0((undefined *)((int)this + 0x18),param_1 + 0x18);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined1 *)((int)this + 0x34) = *(undefined1 *)(param_1 + 0x34);
  *(undefined1 *)((int)this + 0x35) = *(undefined1 *)(param_1 + 0x35);
  *(undefined1 *)((int)this + 0x36) = *(undefined1 *)(param_1 + 0x36);
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  return (uint)this;
}

/* ref: FUN_00753a50 */
uint F_00753a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x753a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x10b9104));
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  return (uint)this;
}

/* ref: FUN_00753a70 */
uint F_00753a70(unsigned int gen_a0)
{
  GEN_ENTER(0x753a70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10ba684));
  uVar1 = F_004876d0((undefined *)((int)this + 0x18));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[3])REFP(0x10b8174));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar1;
}

/* ref: Client::Game::Event::SelectYesNoCheckCallback::vf2 */
uint F_00753a90(unsigned int gen_a0)
{
  GEN_ENTER(0x753a90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  uVar1 = F_00487650(this + 0x18,&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)(this + 0x18),
                       *(undefined4 *)(this + 0x1c));
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  this[0x30] = (undefined1)0x0;
  *(undefined4 *)(this + 0x34) = 0;
  return uVar1;
}

/* ref: Client::Game::Event::SelectYesNoCheckCallback::vf0 */
uint F_00753ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x753ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10ba684));
  F_004876d0(this + 0x18);
  *(undefined * PTR32 * PTR32 *)(this + 0x10) = (*(undefined * PTR32 (*)[3])REFP(0x10b8174));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00753b10 */
uint F_00753b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x753b10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x10b90b4));
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10ba684));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) =
       (*(undefined * PTR32 (*)[3])REFP(0x10b9104));
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  F_007535b0((undefined *)((int)this + 0x18),param_1 + 0x18);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined1 *)((int)this + 0x30) = *(undefined1 *)(param_1 + 0x30);
  *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  return (uint)this;
}

/* ref: FUN_00753bb0 */
uint F_00753bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x753bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x10b9114))
  ;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  return (uint)this;
}

/* ref: FUN_00753bd0 */
uint F_00753bd0(unsigned int gen_a0)
{
  GEN_ENTER(0x753bd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10ba694));
  uVar1 = F_004876d0((undefined *)((int)this + 0x18));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[3])REFP(0x10b8174));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar1;
}

/* ref: Client::Game::Event::SelectStringCallback::vf2 */
uint F_00753bf0(unsigned int gen_a0)
{
  GEN_ENTER(0x753bf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  uVar1 = F_00487650(this + 0x18,&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)(this + 0x18),
                       *(undefined4 *)(this + 0x1c));
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  return uVar1;
}

/* ref: Client::Game::Event::SelectStringCallback::vf0 */
uint F_00753c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x753c30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10ba694));
  F_004876d0(this + 0x18);
  *(undefined * PTR32 * PTR32 *)(this + 0x10) = (*(undefined * PTR32 (*)[3])REFP(0x10b8174));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00753c70 */
uint F_00753c70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x753c70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x10b90b4));
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10ba694));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) =
       (*(undefined * PTR32 (*)[3])REFP(0x10b9114))
  ;
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  F_007535b0((undefined *)((int)this + 0x18),param_1 + 0x18);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  return (uint)this;
}

/* ref: FUN_00753d10 */
uint F_00753d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x753d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x10b9124));
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  return (uint)this;
}

/* ref: FUN_00753d40 */
byte F_00753d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x753d40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (param_1 != 0) {
    uVar1 = F_004296a0(param_1 * 4,0,800);
    *(uint *)((int)this + 8) = param_1 * 4 + uVar1;
    *(uint *)this = uVar1;
    *(uint *)((int)this + 4) = uVar1;
    return 1;
  }
  return 0;
}

/* ref: FUN_00753da0 */
unsigned int F_00753da0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x753da0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00753dd0 */
unsigned int F_00753dd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x753dd0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00753e00 */
unsigned int F_00753e00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x753e00u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00753e30 */
uint F_00753e30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x753e30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  iVar3 = param_1[1];
  iVar1 = *param_1;
  *(undefined4 *)this = 0;
  iVar3 = iVar3 - iVar1 >> 2;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (iVar3 != 0) {
    puVar4 = (undefined4 *)F_004296a0(iVar3 * 4,0,800);
    *(undefined4 * PTR32 *)this = puVar4;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar4;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar4 + iVar3;
    puVar2 = (undefined4 *)param_1[1];
    for (puVar5 = (undefined4 *)*param_1; puVar5 != puVar2; puVar5 = puVar5 + 1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = *puVar5;
      }
      puVar4 = puVar4 + 1;
    }
    *(undefined4 * PTR32 *)((int)this + 4) = puVar4;
  }
  return (uint)this;
}

/* ref: FUN_00753eb0 */
uint F_00753eb0(unsigned int gen_a0)
{
  GEN_ENTER(0x753eb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10ba6a4));
  iVar1 = *(int *)((int)this + 0x38);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0x40) - iVar1 >> 2) * 4,800);
  }
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  iVar1 = *(int *)((int)this + 0x28);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0x30) - iVar1 >> 2) * 4,800);
  }
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  uVar2 = F_004876d0((undefined *)((int)this + 0x18));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[3])REFP(0x10b8174));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: Client::Game::Event::SelectIconStringCallback::vf2 */
uint F_00753f30(unsigned int gen_a0)
{
  GEN_ENTER(0x753f30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  F_00487650(this + 0x18,&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c));
  iVar1 = *(int *)(this + 0x28);
  if (iVar1 != *(int *)(this + 0x2c)) {
    F_00c46e20(iVar1,*(int *)(this + 0x2c),0);
    *(int *)(this + 0x2c) = iVar1;
  }
  iVar1 = *(int *)(this + 0x38);
  if (iVar1 != *(int *)(this + 0x3c)) {
    F_00c46e20(iVar1,*(int *)(this + 0x3c),0);
    *(int *)(this + 0x3c) = iVar1;
  }
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  return 0;
}

/* ref: Client::Game::Event::SelectIconStringCallback::vf0 */
uint F_00753fc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x753fc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00753eb0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00753ff0 */
uint F_00753ff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x753ff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x10b90b4));
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10ba6a4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) =
       (*(undefined * PTR32 (*)[3])REFP(0x10b9124));
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  F_007535b0((undefined *)((int)this + 0x18),param_1 + 0x18);
  F_00753e30((undefined *)((int)this + 0x28),param_1 + 0x28);
  F_00753e30((undefined *)((int)this + 0x38),param_1 + 0x38);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  return (uint)this;
}

/* ref: FUN_00754090 */
uint F_00754090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x754090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x10b9134));
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  return (uint)this;
}

/* ref: FUN_007540b0 */
uint F_007540b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7540b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10ba6b4));
  uVar1 = F_004876d0((undefined *)((int)this + 0x18));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[3])REFP(0x10b8174));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar1;
}

/* ref: Client::Game::Event::SelectListCallback::vf0 */
uint F_007540d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7540d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10ba6b4));
  F_004876d0(this + 0x18);
  *(undefined * PTR32 * PTR32 *)(this + 0x10) = (*(undefined * PTR32 (*)[3])REFP(0x10b8174));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00754110 */
uint F_00754110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x754110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x10b90b4));
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10ba6b4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) =
       (*(undefined * PTR32 (*)[3])REFP(0x10b9134));
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  F_007535b0((undefined *)((int)this + 0x18),param_1 + 0x18);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  return (uint)this;
}

/* ref: FUN_00754160 */
unsigned int F_00754160(unsigned int gen_a0)
{
  GEN_ENTER(0x754160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int local_8;
  
  local_8 = 10;
  puVar1 = (undefined4 *)((int)this + 8);
  do {
    F_0042b630(puVar1 + 4);
    puVar1[-2] = 0;
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1[1] = 0x1000000;
    puVar1[2] = 0;
    puVar1[3] = 0;
    F_0042e430(puVar1 + 4,&REFG(undefined1, 0x107fc63));
    puVar1[0x19] = 0;
    puVar1 = puVar1 + 0x1c;
    local_8 = local_8 + -1;
  } while (-1 < local_8);
  *(undefined4 *)((int)this + 0x4d0) = 0;
  *(undefined4 *)((int)this + 0x4d4) = 0;
  *(undefined4 *)((int)this + 0x4d8) = 0;
  return 0;
}

/* ref: FUN_00754200 */
uint F_00754200(unsigned int gen_a0)
{
  GEN_ENTER(0x754200u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00749bf0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x1c,800);
  return (uint)uVar1;
}

/* ref: FUN_00754240 */
uint F_00754240(unsigned int gen_a0)
{
  GEN_ENTER(0x754240u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00749ea0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,800);
  return (uint)uVar1;
}

/* ref: FUN_00754280 */
uint F_00754280(unsigned int gen_a0)
{
  GEN_ENTER(0x754280u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00749c90(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,800);
  return (uint)uVar1;
}

/* ref: FUN_007542c0 */
unsigned int F_007542c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7542c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00751c10(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) =
           *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar2) >> 2) * 4)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
      return 0;
    }
  }
  else {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00751c10(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return 0;
}

/* ref: FUN_00754330 */
uint F_00754330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x754330u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  uint uVar1;
  ulonglong uVar2;
  undefined * PTR32 * ppvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  (*(uint *)(gen_frame + 0xe8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xec);
  F_004ff300(((undefined1 *)(gen_frame + 0x34)),0xb);
  (*(undefined4 *)(gen_frame + 0x38)) = 0x6c756162;
  F_0042ce40(((undefined1 *)(gen_frame + 0x94)),"game_script/%s/%s.luab",param_1,param_2);
  uVar5 = 0;
  uVar4 = 0;
  ppvVar3 = &(*(undefined * PTR32 *)(gen_frame + 0xc));
  (*(undefined4 *)(gen_frame + 0x10)) = param_3;
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 5;
  (*(undefined1 *)(gen_frame + 0x20)) = 0xff;
  (*(undefined4 *)(gen_frame + 0x29)) = 0x101;
  (*(undefined2 *)(gen_frame + 0x2d)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0x94)));
  uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x34)),&(*(undefined4 *)(gen_frame + 0x38)),uVar1,ppvVar3,uVar4,uVar5);
  (*(uint *)(gen_frame + 0x3c)) = uVar1;
  F_0042cbc0(((undefined1 *)(gen_frame + 0x40)),((undefined1 *)(gen_frame + 0x94)));
  F_00752ed0((undefined *)((int)this + 0xc),((undefined1 *)(gen_frame + 0x4)),&(*(uint *)(gen_frame + 0x3c)));
  F_0042c880(((undefined1 *)(gen_frame + 0x40)));
  uVar2 = F_0042c880(((undefined1 *)(gen_frame + 0x94)));
  F_00c47745((*(uint *)(gen_frame + 0xe8)) ^ (uint)(uint)(gen_frame + 0xec));
  return (uint)uVar2;
}

/* ref: FUN_00754440 */
uint F_00754440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x754440u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  uint uVar1;
  ulonglong uVar2;
  undefined * PTR32 * ppvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  (*(uint *)(gen_frame + 0xe8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xec);
  F_004ff300(((undefined1 *)(gen_frame + 0x34)),0xb);
  (*(undefined4 *)(gen_frame + 0x38)) = 0x6c756162;
  F_0042ce40(((undefined1 *)(gen_frame + 0x94)),"game_script/%s/%s.luab",param_1,param_2);
  uVar5 = 0;
  uVar4 = 0;
  ppvVar3 = &(*(undefined * PTR32 *)(gen_frame + 0xc));
  (*(undefined4 *)(gen_frame + 0x10)) = param_3;
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 5;
  (*(undefined1 *)(gen_frame + 0x20)) = 0xff;
  (*(undefined4 *)(gen_frame + 0x29)) = 0x101;
  (*(undefined2 *)(gen_frame + 0x2d)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0x94)));
  uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x34)),&(*(undefined4 *)(gen_frame + 0x38)),uVar1,ppvVar3,uVar4,uVar5);
  (*(uint *)(gen_frame + 0x3c)) = uVar1;
  F_0042cbc0(((undefined1 *)(gen_frame + 0x40)),((undefined1 *)(gen_frame + 0x94)));
  F_00752ed0((undefined *)((int)this + 0xc),((undefined1 *)(gen_frame + 0x4)),&(*(uint *)(gen_frame + 0x3c)));
  F_0042c880(((undefined1 *)(gen_frame + 0x40)));
  uVar2 = F_0042c880(((undefined1 *)(gen_frame + 0x94)));
  F_00c47745((*(uint *)(gen_frame + 0xe8)) ^ (uint)(uint)(gen_frame + 0xec));
  return (uint)uVar2;
}

/* ref: FUN_00754550 */
uint F_00754550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x754550u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = (*(uint *)&gen_args[1]);
  uVar2 = (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) - *(int *)(*(undefined * PTR32 *)&gen_args[0])) / 0x54;
  if ((*(uint *)&gen_args[1]) < uVar2) {
    uVar2 = F_0074d820((*(undefined * PTR32 *)&gen_args[0]),&(*(uint *)&gen_args[1]),(*(uint *)&gen_args[1]) * 0x54 + *(int *)(*(undefined * PTR32 *)&gen_args[0]),*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))));
    return uVar2;
  }
  if (uVar2 < (*(uint *)&gen_args[1])) {
    F_00751cb0((*(undefined * PTR32 *)&gen_args[0]),(*(uint *)&gen_args[1]) - uVar2);
    F_00746710(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),uVar1 - (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) - *(int *)(*(undefined * PTR32 *)&gen_args[0])) / 0x54,0,
                 (int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc);
    uVar2 = (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) - *(int *)(*(undefined * PTR32 *)&gen_args[0])) / 0x54;
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = (uVar1 - uVar2) * 0x54 + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  }
  return uVar2;
}

/* ref: FUN_00754690 */
uint F_00754690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x754690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00751e10(this,1);
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar3 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar1) >> 2) * 4)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00751e10(this,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_00754700 */
unsigned int F_00754700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x754700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00751e80(this,param_1);
  return 0;
}

/* ref: FUN_00754710 */
uint F_00754710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x754710u, gen_a0, gen_a1, 0u, 0u);
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
  (*(uint * PTR32 *)&gen_args[1]) = ((uint *)GEN_TOP(((uint)(*(uint * PTR32 *)&gen_args[1]) & 0xffff)));
  puVar3 = (undefined4 *)F_004296a0(0x18,0,800);
  *puVar3 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  puVar3[1] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  puVar3[2] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  *(undefined2 *)(puVar3 + 5) = 0;
  if (puVar3 + 3 != (uint *)0x0) {
    puVar3[3] = uVar1;
    *(undefined2 *)(puVar3 + 4) = (*((undefined2 *)GEN_TOP(((char *)&(*(uint * PTR32 *)&gen_args[1]) + 2))));
  }
  F_00750150((*(undefined * PTR32 *)&gen_args[0]),&(*(uint * PTR32 *)&gen_args[1]),puVar4,puVar3);
  return (int)(*(uint * PTR32 *)&gen_args[1]) + 0x10;
}

/* ref: FUN_00754800 */
uint F_00754800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x754800u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint * puVar4;
  int iVar5;
  uint local_14;
  uint local_8;
  
  uVar2 = (*(uint *)&gen_args[1]);
  uVar3 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) - *(int *)(*(undefined * PTR32 *)&gen_args[0]) >> 4;
  if ((*(uint *)&gen_args[1]) < uVar3) {
    uVar3 = F_0074dee0((*(undefined * PTR32 *)&gen_args[0]),&(*(uint *)&gen_args[1]),(*(uint *)&gen_args[1]) * 0x10 + *(int *)(*(undefined * PTR32 *)&gen_args[0]),*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))));
    return uVar3;
  }
  if (uVar3 < (*(uint *)&gen_args[1])) {
    F_00751f00((*(undefined * PTR32 *)&gen_args[0]),(*(uint *)&gen_args[1]) - uVar3);
    puVar4 = *((uint * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
    uVar3 = local_8;
    uVar1 = local_14;
    for (iVar5 = uVar2 - ((int)puVar4 - *(int *)(*(undefined * PTR32 *)&gen_args[0]) >> 4); iVar5 != 0; iVar5 = iVar5 + -1) {
      local_14 = uVar1 & 0xffff0000;
      local_8 = uVar3 & 0xffffff00;
      if (puVar4 != (uint *)0x0) {
        *puVar4 = local_14;
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar4[3] = local_8;
      }
      puVar4 = puVar4 + 4;
      uVar3 = local_8;
      uVar1 = local_14;
    }
    uVar3 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = (uVar2 - ((int)(uVar3 - *(int *)(*(undefined * PTR32 *)&gen_args[0])) >> 4)) * 0x10 + uVar3;
  }
  return uVar3;
}

/* ref: FUN_007548a0 */
unsigned int F_007548a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7548a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00751f70(this,1);
    }
    puVar2 = ((undefined4 *)GEN_TOP((*(int *)this + (((int)param_1 - (int)puVar2) / 0x28) * 0x28)));
  }
  else {
    puVar2 = param_1;
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00751f70(this,1);
    }
  }
  if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x28;
  return 0;
}

/* ref: FUN_00754910 */
uint F_00754910(unsigned int gen_a0)
{
  GEN_ENTER(0x754910u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00752000(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x2d0,800);
  return (uint)uVar1;
}

/* ref: FUN_00754950 */
uint F_00754950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x754950u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  F_0073dba0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x4)),(*(uint *)&gen_args[1]));
  (*(uint *)&gen_args[1]) = 0;
  F_00747b00((*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),&(*(uint *)&gen_args[1]),0);
  F_00752000((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
  return (*(uint *)&gen_args[1]);
}

/* ref: FUN_007549b0 */
unsigned int F_007549b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7549b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined2 * puVar1;
  undefined2 * puVar2;
  
  puVar1 = *(undefined2 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined2 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined2 * PTR32 *)((int)this + 8)) {
      F_007520f0(this,1);
    }
    if (*(undefined2 * PTR32 *)((int)this + 4) != (undefined2 *)0x0) {
      **(undefined2 * PTR32 *)((int)this + 4) =
           *((undefined2 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar2) >> 1) * 2)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 2;
      return 0;
    }
  }
  else {
    if (puVar1 == *(undefined2 * PTR32 *)((int)this + 8)) {
      F_007520f0(this,1);
    }
    if (*(undefined2 * PTR32 *)((int)this + 4) != (undefined2 *)0x0) {
      **(undefined2 * PTR32 *)((int)this + 4) = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 2;
  return 0;
}

/* ref: FUN_00754a20 */
uint F_00754a20(unsigned int gen_a0)
{
  GEN_ENTER(0x754a20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00752160(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x104,800);
  return (uint)uVar1;
}

/* ref: FUN_00754a60 */
uint F_00754a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x754a60u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  F_0073dcb0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x4)),(*(uint *)&gen_args[1]));
  (*(uint *)&gen_args[1]) = 0;
  F_007410e0((*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),&(*(uint *)&gen_args[1]),0);
  F_00752160((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
  return (*(uint *)&gen_args[1]);
}

/* ref: FUN_00754ac0 */
unsigned int F_00754ac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x754ac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar2 = *(uint *)((int)this + 4);
  if ((param_1 < uVar2) && (uVar1 = *(uint *)this, uVar1 <= param_1)) {
    if (uVar2 == *(uint *)((int)this + 8)) {
      F_00752250(this,1);
    }
    uVar3 = *(undefined4 *)((int)this + 4);
    uVar2 = ((int)(param_1 - uVar1) / 0xb8) * 0xb8 + *(int *)this;
  }
  else {
    if (uVar2 == *(uint *)((int)this + 8)) {
      F_00752250(this,1);
    }
    uVar3 = *(undefined4 *)((int)this + 4);
    uVar2 = param_1;
  }
  F_007380d0((int)this + 0xc,uVar3,uVar2);
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0xb8;
  return 0;
}

/* ref: FUN_00754b40 */
unsigned int F_00754b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x754b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00752320(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) =
           *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar2) >> 2) * 4)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
      return 0;
    }
  }
  else {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00752320(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return 0;
}

/* ref: FUN_00754bb0 */
uint F_00754bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x754bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  iVar2 = (param_1[1] - *param_1) / 0x140;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (iVar2 != 0) {
    iVar2 = iVar2 * 0x140;
    uVar1 = F_004296a0(iVar2,0,800);
    *(uint *)this = uVar1;
    *(uint *)((int)this + 4) = uVar1;
    *(uint *)((int)this + 8) = iVar2 + uVar1;
    uVar1 = F_00748620(*param_1,param_1[1],uVar1,(int)this + 0xc,param_1);
    *(uint *)((int)this + 4) = uVar1;
  }
  return (uint)this;
}

/* ref: FUN_00754c60 */
uint F_00754c60(unsigned int gen_a0)
{
  GEN_ENTER(0x754c60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_007523f0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)this,*(undefined4 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00754c80 */
uint F_00754c80(unsigned int gen_a0)
{
  GEN_ENTER(0x754c80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_0074f310(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x70,800);
  return (uint)uVar1;
}

/* ref: FUN_00754cc0 */
uint F_00754cc0(unsigned int gen_a0)
{
  GEN_ENTER(0x754cc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004296a0(0x18,0,800);
  *(uint *)((int)this + 4) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x15))) = 1;
  return (uint)this;
}

/* ref: FUN_00754d00 */
uint F_00754d00(unsigned int gen_a0)
{
  GEN_ENTER(0x754d00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_0074a1e0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x28,800);
  return (uint)uVar1;
}

/* ref: FUN_00754d40 */
uint F_00754d40(unsigned int gen_a0)
{
  GEN_ENTER(0x754d40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_0074a1e0((undefined *)((int)this + 4),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 8),
               *(undefined4 * PTR32 *)((int)this + 8));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 8),0x28,800);
  return (uint)uVar1;
}

/* ref: FUN_00754d80 */
uint F_00754d80(unsigned int gen_a0)
{
  GEN_ENTER(0x754d80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_0074a1e0((undefined *)((int)this + 4),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 8),
               *(undefined4 * PTR32 *)((int)this + 8));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 8),0x28,800);
  return (uint)uVar1;
}

/* ref: FUN_00754dd0 */
unsigned int F_00754dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x754dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (this != param_1) {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)this = *param_1;
    *(undefined4 *)((int)this + 4) = param_1[1];
    *(undefined4 *)((int)this + 8) = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return 0;
}

/* ref: FUN_00754e10 */
uint F_00754e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x754e10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  
  if (this != param_1) {
    iVar1 = *(int *)this;
    if (iVar1 != 0) {
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,800);
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)this = *param_1;
    *(undefined4 *)((int)this + 4) = param_1[1];
    *(undefined4 *)((int)this + 8) = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return (uint)this;
}

/* ref: FUN_00754e70 */
uint F_00754e70(unsigned int gen_a0)
{
  GEN_ENTER(0x754e70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00752540(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00754e90 */
uint F_00754e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x754e90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)this;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)this;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00752610(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00752610(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00754ef0 */
unsigned int F_00754ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x754ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x140;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x140;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      F_007526a0(this,uVar1);
      return 0;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    F_007526a0(this,uVar1);
  }
  return 0;
}

/* ref: FUN_00754f80 */
uint F_00754f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x754f80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_007527a0(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_007527a0(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00754ff0 */
uint F_00754ff0(unsigned int gen_a0)
{
  GEN_ENTER(0x754ff0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00752850(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00755010 */
uint F_00755010(unsigned int gen_a0)
{
  GEN_ENTER(0x755010u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_007528f0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00755030 */
uint F_00755030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x755030u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  piVar2 = *(int * PTR32 *)((int)this + 4);
  piVar3 = param_2;
  if ((param_2 == (int *)*piVar2) && (param_3 == piVar2)) {
    F_0074f990(this,piVar2[1]);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x9d) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x9d) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x9d);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x9d);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x9d);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x9d);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_0074eeb0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00755100 */
uint F_00755100(unsigned int gen_a0)
{
  GEN_ENTER(0x755100u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00755030(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00755160 */
unsigned int F_00755160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x755160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x140;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x140;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      F_007529e0(this,uVar1);
      return 0;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    F_007529e0(this,uVar1);
  }
  return 0;
}

/* ref: FUN_007551f0 */
unsigned int F_007551f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7551f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x74;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x74;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      F_00752ae0(this,uVar1);
      return 0;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    F_00752ae0(this,uVar1);
  }
  return 0;
}

/* ref: FUN_00755280 */
uint F_00755280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x755280u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  if (param_2 != param_3) {
    uVar1 = F_007413b0(param_3,*(undefined4 *)((int)this + 4),param_2,param_1);
    F_0074c430(uVar1,*(undefined4 *)((int)this + 4),(int)this + 0xc,param_1);
    *(uint *)((int)this + 4) = uVar1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_007552d0 */
uint F_007552d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7552d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    F_0074c430(*(int *)this,*(undefined4 *)((int)this + 4),(int)this + 0xc,this);
    uVar2 = F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x1b0) * 0x1b0,800
                        );
    uVar1 = (uint)uVar2;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00755340 */
uint F_00755340(unsigned int gen_a0)
{
  GEN_ENTER(0x755340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00752c00(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00755360 */
uint F_00755360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x755360u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined1 *)this = *param_1;
  F_0074a520((undefined *)((int)this + 4),param_2);
  return (uint)this;
}

/* ref: FUN_00755380 */
uint F_00755380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x755380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (*(int *)((int)this + 8) - *(int *)this) / 0x1b0;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x1b0,0,800);
    F_00752fd0(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3);
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_0074c430(iVar1,*(undefined4 *)((int)this + 4),(int)this + 0xc,uVar3);
      F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x1b0) * 0x1b0,800);
    }
    *(uint *)((int)this + 4) = ((iVar2 - iVar1) / 0x1b0) * 0x1b0 + uVar3;
    *(uint *)((int)this + 8) = param_1 * 0x1b0 + uVar3;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00755460 */
uint F_00755460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x755460u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined1 *)this = *param_1;
  F_0074a520((undefined *)((int)this + 4),param_2);
  return (uint)this;
}

/* ref: FUN_00755480 */
unsigned int F_00755480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x755480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 4);
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00755160(this,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_00720120(*(undefined * PTR32 *)((int)this + 4),((int)(param_1 - uVar2) / 0x140) * 0x140 + *(int *)this
                  );
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x140;
      return 0;
    }
  }
  else {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00755160(this,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_00720120(*(undefined * PTR32 *)((int)this + 4),param_1);
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x140;
  return 0;
}

/* ref: FUN_00755510 */
uint F_00755510(unsigned int gen_a0)
{
  GEN_ENTER(0x755510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_007496b0((undefined *)((int)this + 100),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x68),
               *(undefined4 * PTR32 *)((int)this + 0x68));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 0x68),0x18,800);
  return (uint)uVar1;
}

/* ref: FUN_00755550 */
unsigned int F_00755550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x755550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if (this != param_1) {
    F_00750930(this);
    *(undefined4 *)this = *param_1;
    *(undefined4 *)((int)this + 4) = param_1[1];
    *(undefined4 *)((int)this + 8) = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return 0;
}

/* ref: FUN_00755590 */
unsigned int F_00755590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x755590u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_00750a20(param_2,param_3);
  }
  return 0;
}

/* ref: FUN_007555b0 */
uint F_007555b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7555b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004296a0(0x18,0,800);
  *(uint *)((int)this + 4) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x15))) = 1;
  F_00750ab0(this,param_1);
  return (uint)this;
}

/* ref: FUN_00755600 */
uint F_00755600(unsigned int gen_a0)
{
  GEN_ENTER(0x755600u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00750930(param_1);
  return uVar1;
}

/* ref: FUN_00755610 */
uint F_00755610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x755610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *(undefined1 *)this = *param_1;
  F_00754bb0((undefined *)((int)this + 4),param_1 + 4);
  return (uint)this;
}

/* ref: FUN_00755630 */
uint F_00755630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x755630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004296a0(0x28,0,800);
  *(uint *)((int)this + 4) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x24))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x25))) = 1;
  F_00750b30(this,param_1);
  return (uint)this;
}

/* ref: FUN_00755680 */
uint F_00755680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x755680u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int * piVar6;
  int * this;
  undefined * this_00;
  
  piVar6 = param_1;
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (this != piVar6) {
      uVar4 = (piVar6[1] - *piVar6) / 0xb8;
      if (uVar4 == 0) {
        F_007509a0(this,((undefined1 *)(gen_frame + 0x8)),*this,this[1]);
      }
      else {
        iVar1 = *this;
        uVar3 = (this[1] - iVar1) / 0xb8;
        if (uVar3 < uVar4) {
          if ((uint)((this[2] - iVar1) / 0xb8) < uVar4) {
            if (iVar1 != 0) {
              F_0074e300(iVar1,this[1]);
              F_00429760(*this,((this[2] - *this) / 0xb8) * 0xb8,800);
            }
            bVar2 = F_0073a230(this,(piVar6[1] - *piVar6) / 0xb8);
            if (bVar2 == 0) goto LAB_0075582c;
            uVar4 = F_007428e0(*piVar6,piVar6[1],*this,this + 3,param_2);
          }
          else {
            iVar5 = uVar3 * 0xb8 + *piVar6;
            F_0072db20(*piVar6,iVar5,iVar1,param_2);
            uVar4 = F_007428e0(iVar5,piVar6[1],this[1],this + 3,param_2);
          }
        }
        else {
          uVar3 = F_0072db20(*piVar6,piVar6[1],iVar1,param_2);
          uVar4 = this[1];
          if (uVar3 != uVar4) {
            this_00 = (undefined *)(uVar3 + 4);
            do {
              F_0042c880((undefined *)((int)this_00 + 0x54));
              F_0042c880(this_00);
              uVar3 = (int)this_00 + 0xb4;
              this_00 = (undefined *)((int)this_00 + 0xb8);
            } while (uVar3 != uVar4);
          }
          uVar4 = ((piVar6[1] - *piVar6) / 0xb8) * 0xb8 + *this;
        }
        this[1] = uVar4;
      }
    }
LAB_0075582c: ;
    piVar6 = piVar6 + 4;
    this = this + 4;
    if (piVar6 == param_2) {
      return (uint)this;
    }
  } while( true );
}

/* ref: FUN_00755850 */
uint F_00755850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x755850u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined1 *)this = *param_1;
  F_0074a520((undefined *)((int)this + 4),param_2);
  return (uint)this;
}

/* ref: FUN_00755870 */
uint F_00755870(unsigned int gen_a0)
{
  GEN_ENTER(0x755870u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_007496b0((undefined *)((int)this + 100),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x68),
               *(undefined4 * PTR32 *)((int)this + 0x68));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 0x68),0x18,800);
  return (uint)uVar1;
}

/* ref: Client::Game::Event::SelectOkCallback::vf1 */
uint F_007558b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7558b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  
  iVar1 = *(int *)(this + 4);
  if (iVar1 == 0) {
    ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
    *param_1 = 2;
    *(undefined1 *)(param_1 + 1) = 1;
    return (uint)param_1;
  }
  ((byte *)(gen_frame + 0xc))[4] = (char)iVar1;
  ((byte *)(gen_frame + 0xc))[5] = (char)((uint)iVar1 >> 8);
  ((byte *)(gen_frame + 0xc))[6] = (char)((uint)iVar1 >> 0x10);
  ((byte *)(gen_frame + 0xc))[7] = (char)((uint)iVar1 >> 0x18);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) = *(undefined4 *)(this + 8);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 12)) = *(undefined4 *)(this + 0xc);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) = (*(undefined * PTR32 (*)[3])REFP(0x10ba654));
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 16)) = (*(undefined * PTR32 (*)[3])REFP(0x10b90d4));
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 20)) = *(undefined4 *)(this + 0x14);
  F_007535b0(((byte *)(gen_frame + 0xc)) + 0x18,this + 0x18);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 40)) = *(undefined4 *)(this + 0x28);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 44)) = *(undefined4 *)(this + 0x2c);
  ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 4)) + 0xd8))))((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 4)),0);
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) = (*(undefined * PTR32 (*)[3])REFP(0x10ba654));
  F_004876d0(((byte *)(gen_frame + 0xc)) + 0x18);
  return (uint)param_1;
}

/* ref: Client::Game::Event::SelectYesNoCallback::vf1 */
uint F_00755960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x755960u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined4 uVar1;
  
  if (*(int *)(this + 4) == 0) {
    ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
    *param_1 = 2;
    *(undefined1 *)(param_1 + 1) = 1;
    return (uint)param_1;
  }
  F_00753810(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)),this);
  ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  if ((*param_2 & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 4);
  }
  ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0xdc))((*(int * PTR32 *)(gen_frame + 0x8)),uVar1,(*(undefined4 *)(gen_frame + 0x34)));
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x10ba664));
  F_004876d0(((undefined1 *)(gen_frame + 0x1c)));
  return (uint)param_1;
}

/* ref: Client::Game::Event::SelectYesNoCountCallback::vf1 */
uint F_007559f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7559f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  
  if (*(int *)(this + 4) == 0) {
    ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
    *param_1 = 2;
    *(undefined1 *)(param_1 + 1) = 1;
    return (uint)param_1;
  }
  if ((*param_2 & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_2 + 4);
    if (iVar1 == 4) {
      *param_1 = 2;
      *(undefined1 *)(param_1 + 1) = 0;
      return (uint)param_1;
    }
  }
  F_00753990(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),this);
  ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x4)) + 0xdc))((*(int * PTR32 *)(gen_frame + 0x4)),iVar1,(*(undefined4 *)(gen_frame + 0x38)));
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x10ba674));
  F_004876d0(((undefined1 *)(gen_frame + 0x18)));
  return (uint)param_1;
}

/* ref: Client::Game::Event::SelectYesNoCheckCallback::vf1 */
uint F_00755a90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x755a90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined4 uVar1;
  
  if (*(int *)(this + 4) == 0) {
    ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
    *param_1 = 2;
    *(undefined1 *)(param_1 + 1) = 1;
    return (uint)param_1;
  }
  F_00753b10(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)),this);
  ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  if ((*param_2 & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 4);
  }
  ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0xdc))((*(int * PTR32 *)(gen_frame + 0x8)),uVar1,(*(undefined4 *)(gen_frame + 0x38)));
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x10ba684));
  F_004876d0(((undefined1 *)(gen_frame + 0x1c)));
  return (uint)param_1;
}

/* ref: Client::Game::Event::SelectStringCallback::vf1 */
uint F_00755b20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x755b20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(this + 4);
  if (iVar1 == 0) {
    ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
    *param_1 = 2;
    *(undefined1 *)(param_1 + 1) = 1;
    return (uint)param_1;
  }
  ((byte *)(gen_frame + 0xc))[4] = (char)iVar1;
  ((byte *)(gen_frame + 0xc))[5] = (char)((uint)iVar1 >> 8);
  ((byte *)(gen_frame + 0xc))[6] = (char)((uint)iVar1 >> 0x10);
  ((byte *)(gen_frame + 0xc))[7] = (char)((uint)iVar1 >> 0x18);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) = *(undefined4 *)(this + 8);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 12)) = *(undefined4 *)(this + 0xc);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) = (*(undefined * PTR32 (*)[3])REFP(0x10ba694));
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 16)) = (*(undefined * PTR32 (*)[3])REFP(0x10b9114));
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 20)) = *(undefined4 *)(this + 0x14);
  F_007535b0(((byte *)(gen_frame + 0xc)) + 0x18,this + 0x18);
  uVar2 = *(undefined4 *)(this + 0x2c);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 40)) = *(undefined4 *)(this + 0x28);
  ((byte *)(gen_frame + 0xc))[0x2c] = (byte)uVar2;
  ((byte *)(gen_frame + 0xc))[0x2d] = SUB41(uVar2,1);
  ((byte *)(gen_frame + 0xc))[0x2e] = SUB41(uVar2,2);
  ((byte *)(gen_frame + 0xc))[0x2f] = SUB41(uVar2,3);
  ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  if ((*param_2 & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_2 + 4);
  }
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 4)) + 0xe0))))((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 4)),uVar3,uVar2);
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) = (*(undefined * PTR32 (*)[3])REFP(0x10ba694));
  F_004876d0(((byte *)(gen_frame + 0xc)) + 0x18);
  return (uint)param_1;
}

/* ref: Client::Game::Event::SelectIconStringCallback::vf1 */
uint F_00755be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x755be0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined4 uVar1;
  
  if (*(int *)(this + 4) == 0) {
    ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
    *param_1 = 2;
    *(undefined1 *)(param_1 + 1) = 1;
    return (uint)param_1;
  }
  F_00753ff0(((byte *)(gen_frame + 0xc)),this);
  ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  if ((*param_2 & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 4);
  }
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 4)) + 0xe4))))((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 4)),uVar1,(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 76)));
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  F_00753eb0(((byte *)(gen_frame + 0xc)));
  return (uint)param_1;
}

/* ref: Client::Game::Event::SelectListCallback::vf1 */
uint F_00755c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x755c60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(this + 4);
  if (iVar1 == 0) {
    ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
    *param_1 = 2;
    *(undefined1 *)(param_1 + 1) = 1;
    return (uint)param_1;
  }
  ((byte *)(gen_frame + 0x0))[4] = (char)iVar1;
  ((byte *)(gen_frame + 0x0))[5] = (char)((uint)iVar1 >> 8);
  ((byte *)(gen_frame + 0x0))[6] = (char)((uint)iVar1 >> 0x10);
  ((byte *)(gen_frame + 0x0))[7] = (char)((uint)iVar1 >> 0x18);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) = *(undefined4 *)(this + 8);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)) = *(undefined4 *)(this + 0xc);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) = (*(undefined * PTR32 (*)[3])REFP(0x10ba6b4));
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)) = (*(undefined * PTR32 (*)[3])REFP(0x10b9134));
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20)) = *(undefined4 *)(this + 0x14);
  F_007535b0(((byte *)(gen_frame + 0x0)) + 0x18,this + 0x18);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 40)) = *(undefined4 *)(this + 0x28);
  ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  if ((*param_2 & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_2 + 4);
  }
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) + 0xe8))))((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)),uVar2);
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) = (*(undefined * PTR32 (*)[3])REFP(0x10ba6b4));
  F_004876d0(((byte *)(gen_frame + 0x0)) + 0x18);
  return (uint)param_1;
}

/* ref: FUN_00755d50 */
uint F_00755d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x755d50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined1 *)((int)this + 0xc) = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)((int)this + 0xd) = *(undefined1 *)((int)param_1 + 0xd);
  *(undefined1 *)((int)this + 0xe) = *(undefined1 *)((int)param_1 + 0xe);
  *(undefined1 *)((int)this + 0xf) = *(undefined1 *)((int)param_1 + 0xf);
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  F_0042ccf0((undefined *)((int)this + 0x18),param_1 + 6);
  *(undefined4 *)((int)this + 0x6c) = param_1[0x1b];
  return (uint)this;
}

/* ref: FUN_00755db0 */
uint F_00755db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x755db0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x70 + *in_ecx;
}

/* ref: FUN_00755df0 */
uint F_00755df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x755df0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x70,param_2,800);
  return uVar1;
}

/* ref: FUN_00755e20 */
uint F_00755e20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x755e20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00755e40 */
uint F_00755e40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x755e40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_1 != param_2) {
    puVar2 = param_1 + 2;
    puVar3 = param_3;
    do {
      *puVar3 = puVar2[-2];
      puVar3[1] = puVar2[-1];
      puVar3[2] = *puVar2;
      *(undefined1 *)(puVar3 + 3) = *(undefined1 *)(puVar2 + 1);
      *(undefined1 *)((int)puVar3 + 0xd) = *(undefined1 *)((int)puVar2 + 5);
      *(undefined1 *)((int)puVar3 + 0xe) = *(undefined1 *)((int)puVar2 + 6);
      *(undefined1 *)((int)puVar3 + 0xf) = *(undefined1 *)((int)puVar2 + 7);
      puVar3[4] = puVar2[2];
      puVar3[5] = puVar2[3];
      F_0042ccf0(puVar3 + 6,puVar2 + 4);
      puVar3[0x1b] = puVar2[0x19];
      puVar1 = puVar2 + 0x1a;
      puVar3 = puVar3 + 0x1c;
      puVar2 = puVar2 + 0x1c;
    } while (puVar1 != param_2);
    return (uint)puVar3;
  }
  return (uint)param_3;
}

/* ref: FUN_00755ec0 */
uint F_00755ec0(unsigned int gen_a0)
{
  GEN_ENTER(0x755ec0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00755ed0 */
unsigned int F_00755ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x755ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_0071f820(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00755ef0 */
uint F_00755ef0(unsigned int gen_a0)
{
  GEN_ENTER(0x755ef0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00755f00 */
uint F_00755f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x755f00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_007565e0((undefined *)((int)this + -0x10),param_1);
  return uVar1;
}

/* ref: FUN_00755f20 */
uint F_00755f20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x755f20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00755f30 */
byte F_00755f30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x755f30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00755f50 */
uint F_00755f50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x755f50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00755e40(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_00755f70 */
uint F_00755f70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x755f70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_1 != param_2) {
    puVar2 = param_1 + 2;
    puVar3 = param_3;
    do {
      *puVar3 = puVar2[-2];
      puVar3[1] = puVar2[-1];
      puVar3[2] = *puVar2;
      *(undefined1 *)(puVar3 + 3) = *(undefined1 *)(puVar2 + 1);
      *(undefined1 *)((int)puVar3 + 0xd) = *(undefined1 *)((int)puVar2 + 5);
      *(undefined1 *)((int)puVar3 + 0xe) = *(undefined1 *)((int)puVar2 + 6);
      *(undefined1 *)((int)puVar3 + 0xf) = *(undefined1 *)((int)puVar2 + 7);
      puVar3[4] = puVar2[2];
      puVar3[5] = puVar2[3];
      F_0042ccf0(puVar3 + 6,puVar2 + 4);
      puVar3[0x1b] = puVar2[0x19];
      puVar1 = puVar2 + 0x1a;
      puVar3 = puVar3 + 0x1c;
      puVar2 = puVar2 + 0x1c;
    } while (puVar1 != param_2);
    return (uint)puVar3;
  }
  return (uint)param_3;
}

/* ref: FUN_00755ff0 */
unsigned int F_00755ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x755ff0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0071f820(param_2,param_3);
  }
  return 0;
}

/* ref: FUN_00756010 */
uint F_00756010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x756010u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00756020 */
uint F_00756020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x756020u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00756030 */
byte F_00756030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x756030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (param_1 != 0) {
    uVar1 = F_004296a0(param_1 * 0x70,0,800);
    *(uint *)((int)this + 8) = param_1 * 0x70 + uVar1;
    *(uint *)this = uVar1;
    *(uint *)((int)this + 4) = uVar1;
    return 1;
  }
  return 0;
}

/* ref: FUN_00756090 */
uint F_00756090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x756090u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_007560a0 */
byte F_007560a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7560a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_007560c0 */
uint F_007560c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7560c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00755f70(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_007560e0 */
uint F_007560e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7560e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_1 != param_2) {
    puVar2 = param_1 + 2;
    puVar3 = param_3;
    do {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = puVar2[-2];
        puVar3[1] = puVar2[-1];
        puVar3[2] = *puVar2;
        *(undefined1 *)(puVar3 + 3) = *(undefined1 *)(puVar2 + 1);
        *(undefined1 *)((int)puVar3 + 0xd) = *(undefined1 *)((int)puVar2 + 5);
        *(undefined1 *)((int)puVar3 + 0xe) = *(undefined1 *)((int)puVar2 + 6);
        *(undefined1 *)((int)puVar3 + 0xf) = *(undefined1 *)((int)puVar2 + 7);
        puVar3[4] = puVar2[2];
        puVar3[5] = puVar2[3];
        F_0042cbc0(puVar3 + 6,puVar2 + 4);
        puVar3[0x1b] = puVar2[0x19];
      }
      puVar1 = puVar2 + 0x1a;
      puVar3 = puVar3 + 0x1c;
      puVar2 = puVar2 + 0x1c;
    } while (puVar1 != param_2);
    return (uint)puVar3;
  }
  return (uint)param_3;
}

/* ref: FUN_00756160 */
uint F_00756160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x756160u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_007560e0(param_1,param_2,param_3,param_4,in_ECX);
  return uVar1;
}

/* ref: FUN_00756190 */
uint F_00756190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x756190u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_007560e0(param_1,param_2,param_3,(int)this + 0xc,param_3);
  return uVar1;
}

/* ref: FUN_007561c0 */
uint F_007561c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7561c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 != param_3) {
    uVar2 = F_00755f70(param_3,*(undefined4 *)((int)this + 4),param_2,param_1);
    uVar1 = *(uint *)((int)this + 4);
    for (uVar3 = uVar2; uVar3 != uVar1; uVar3 = uVar3 + 0x70) {
      F_0042c880((undefined *)(uVar3 + 0x18));
    }
    *(uint *)((int)this + 4) = uVar2;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00756230 */
uint F_00756230(unsigned int gen_a0)
{
  GEN_ENTER(0x756230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_007561c0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)this,*(undefined4 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00756250 */
uint F_00756250(unsigned int gen_a0)
{
  GEN_ENTER(0x756250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined4 * puVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  
  puVar4 = (undefined4 *)((int)this + 8);
  iVar6 = 0xb;
  do {
    puVar4[-2] = 0;
    puVar4[-1] = 0;
    *puVar4 = 0;
    puVar4[1] = 0x1000000;
    puVar4[2] = 0;
    puVar4[3] = 0;
    F_0042e430(puVar4 + 4,&REFG(undefined1, 0x107fc63));
    puVar4[0x19] = 0;
    puVar4 = puVar4 + 0x1c;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  pvVar3 = *(undefined * PTR32 *)((int)this + 0x4d4);
  if (*(undefined * PTR32 *)((int)this + 0x4d0) != pvVar3) {
    uVar2 = F_00755f70(pvVar3,pvVar3,*(undefined * PTR32 *)((int)this + 0x4d0),this);
    uVar1 = *(uint *)((int)this + 0x4d4);
    pvVar3 = this;
    for (uVar5 = uVar2; uVar5 != uVar1; uVar5 = uVar5 + 0x70) {
      uVar7 = F_0042c880((undefined *)(uVar5 + 0x18));
      pvVar3 = (undefined *)uVar7;
    }
    *(uint *)((int)this + 0x4d4) = uVar2;
  }
  return (uint)pvVar3;
}

/* ref: FUN_007562f0 */
uint F_007562f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7562f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  ulonglong uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10ba6e8));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[2])REFP(0x10ba6dc));
  F_0074d930((undefined *)((int)this + 0x4e8));
  iVar1 = 10;
  this_00 = (undefined *)((int)this + 0x500);
  do {
    this_00 = (undefined *)((int)this_00 + -0x70);
    uVar2 = F_0042c880(this_00);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[2])REFP(0x10b8168));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return (uint)uVar2;
}

/* ref: Client::Game::Event::GrandCompanySupplyDutyCallback::vf1 */
uint F_00756340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x756340u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  undefined * this_00;
  int iVar6;
  undefined * pGVar7;
  byte bVar8;
  uint uVar9;
  undefined4 uVar10;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  if ((*param_2 & 0xf) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(param_2 + 4);
  }
  (*(bool *)(gen_frame + 0xf)) = iVar6 != 0;
  (*(int *)(gen_frame + 0x80)) = 0;
  (*(uint *)(gen_frame + 0x84)) = 0;
  (*(undefined4 *)(gen_frame + 0x88)) = 0;
  (*(uint *)(gen_frame + 0x8c)) = 0;
  (*(uint *)(gen_frame + 0x90)) = 0;
  (*(undefined4 *)(gen_frame + 0x94)) = 0;
  (*(uint *)(gen_frame + 0x98)) = 0;
  (*(uint *)(gen_frame + 0x9c)) = 0;
  (*(undefined4 *)(gen_frame + 0xa0)) = 0;
  (*(undefined4 *)(gen_frame + 0xa4)) = 0;
  (*(byte *)(gen_frame + 0xe)) = 0;
  if ((iVar6 < 1) || (param_3 < 2)) goto LAB_00756575;
  if ((param_2[8] & 0xf) == 0) {
    bVar8 = 0;
  }
  else {
    bVar8 = (byte)*(undefined4 *)(param_2 + 0xc);
  }
  F_0042b630(((undefined1 *)(gen_frame + 0x28)));
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(uint *)(gen_frame + 0x18)) = 0;
  (*(uint *)(gen_frame + 0x1c)) = 0x1000000;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  F_0042e430(((undefined1 *)(gen_frame + 0x28)),&REFG(undefined1, 0x107fc63));
  (*(undefined4 *)(gen_frame + 0x7c)) = 0;
  uVar9 = (uint)bVar8;
  if (bVar8 < 0xb) {
    pGVar7 = this + uVar9 * 0x70 + 0x18;
  }
  else {
    pGVar7 = ((undefined *)GEN_TOP(((uVar9 - 0xb) * 0x70 + *(int *)(this + 0x4e8))));
  }
  F_00755d50(&(*(undefined4 *)(gen_frame + 0x10)),pGVar7);
  uVar1 = F_00a41080(&REFG(undefined, 0x14a4230),(*(undefined4 *)(gen_frame + 0x10)),1,0,1);
  uVar2 = F_00a41080(&REFG(undefined, 0x14a4230),(*(undefined4 *)(gen_frame + 0x10)),0,0,1);
  uVar3 = F_00a3ded0(&REFG(undefined, 0x14a4230),(*(undefined4 *)(gen_frame + 0x10)),1000,1);
  uVar4 = F_00a3ded0(&REFG(undefined, 0x14a4230),(*(undefined4 *)(gen_frame + 0x10)),1000,0);
  if ((uVar1 + uVar2 == 0) && (uVar3 + uVar4 != 0)) {
    piVar5 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar10 = 0x700;
LAB_007564e6: ;
    (*(bool *)(gen_frame + 0xf)) = false;
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar5 + 0x28))(piVar5)));
    F_0046a630(this_00,uVar10);
  }
  else {
    uVar3 = (*(uint *)(gen_frame + 0x1c)) >> 0x10 & 0xff;
    if (uVar1 + uVar2 < uVar3) {
      piVar5 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      uVar10 = 0x6fe;
      goto LAB_007564e6;
    }
    if (REFG(char, 0x14ab0d0) == '\x01') {
      uVar1 = (*(uint *)(gen_frame + 0x18)) >> 1;
    }
    else {
      uVar1 = (*(uint *)(gen_frame + 0x18));
      if (REFG(char, 0x14ab0d0) == '\x02') {
        uVar1 = 0;
      }
    }
    (*(uint *)(gen_frame + 0x8c)) = uVar3;
    (*(int *)(gen_frame + 0x80)) = iVar6;
    (*(uint *)(gen_frame + 0x90)) = (*(uint *)(gen_frame + 0x1c)) & 0xff;
    (*(undefined4 *)(gen_frame + 0x88)) = (*(undefined4 *)(gen_frame + 0x10));
    (*(uint *)(gen_frame + 0x98)) = uVar1;
    (*(uint *)(gen_frame + 0x84)) = uVar9;
    (*(undefined4 *)(gen_frame + 0x94)) = (*(undefined4 *)(gen_frame + 0x14));
    (*(uint *)(gen_frame + 0x9c)) = (*(uint *)(gen_frame + 0x1c)) >> 8 & 0xff;
    (*(undefined4 *)(gen_frame + 0xa0)) = (*(undefined4 *)(gen_frame + 0x20));
    (*(byte *)(gen_frame + 0xe)) = 9;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x28)));
LAB_00756575: ;
  if ((*(bool *)(gen_frame + 0xf)) != false) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x138))))(*(int * PTR32 *)(this + 4),&(*(int *)(gen_frame + 0x80)),(uint)(*(byte *)(gen_frame + 0xe)));
    F_00b9cea0(&REFG(undefined, 0x14b3134));
    ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
    *(undefined4 *)(this + 0x14) = 0;
    F_00756250(this + 0x18);
  }
  *(bool *)(param_1 + 1) = (*(bool *)(gen_frame + 0xf));
  *param_1 = 2;
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return (uint)param_1;
}

/* ref: Client::Game::Event::GrandCompanySupplyDutyCallback::vf0 */
uint F_007565e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7565e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_007562f0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00756610 */
uint F_00756610(unsigned int gen_a0)
{
  GEN_ENTER(0x756610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00752000(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x2d0,800);
  return (uint)uVar1;
}

/* ref: FUN_00756650 */
uint F_00756650(unsigned int gen_a0)
{
  GEN_ENTER(0x756650u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00752160(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x104,800);
  return (uint)uVar1;
}

/* ref: FUN_007566a0 */
uint F_007566a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7566a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_0074f310(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x70,800);
  return (uint)uVar1;
}

/* ref: FUN_007566e0 */
unsigned int F_007566e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7566e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  if (this != param_1) {
    uVar1 = *(undefined4 *)this;
    *(undefined4 *)this = *param_1;
    *param_1 = uVar1;
    uVar1 = *(undefined4 *)((int)this + 4);
    *(undefined4 *)((int)this + 4) = param_1[1];
    param_1[1] = uVar1;
    uVar1 = *(undefined4 *)((int)this + 8);
    *(undefined4 *)((int)this + 8) = param_1[2];
    param_1[2] = uVar1;
  }
  return 0;
}

/* ref: FUN_00756720 */
uint F_00756720(unsigned int gen_a0)
{
  GEN_ENTER(0x756720u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00752540(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0xc0,800);
  return (uint)uVar1;
}

/* ref: FUN_00756760 */
unsigned int F_00756760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x756760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * puVar1;
  undefined1 * puVar2;
  
  puVar1 = *(undefined1 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined1 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined1 * PTR32 *)((int)this + 8)) {
      F_00754e90(this,1);
    }
    if (*(undefined1 * PTR32 *)((int)this + 4) != (undefined1 *)0x0) {
      **(undefined1 * PTR32 *)((int)this + 4) = param_1[*(int *)this - (int)puVar2];
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
      return 0;
    }
  }
  else {
    if (puVar1 == *(undefined1 * PTR32 *)((int)this + 8)) {
      F_00754e90(this,1);
    }
    if (*(undefined1 * PTR32 *)((int)this + 4) != (undefined1 *)0x0) {
      **(undefined1 * PTR32 *)((int)this + 4) = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return 0;
}

/* ref: FUN_007567c0 */
uint F_007567c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7567c0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = (*(uint *)&gen_args[1]);
  uVar2 = (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) - *(int *)(*(undefined * PTR32 *)&gen_args[0])) / 0x140;
  if ((*(uint *)&gen_args[1]) < uVar2) {
    uVar2 = F_00751d40((*(undefined * PTR32 *)&gen_args[0]),&(*(uint *)&gen_args[1]),(*(uint *)&gen_args[1]) * 0x140 + *(int *)(*(undefined * PTR32 *)&gen_args[0]),*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))));
    return uVar2;
  }
  if (uVar2 < (*(uint *)&gen_args[1])) {
    F_00754ef0((*(undefined * PTR32 *)&gen_args[0]),(*(uint *)&gen_args[1]) - uVar2);
    F_007477e0(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),uVar1 - (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) - *(int *)(*(undefined * PTR32 *)&gen_args[0])) / 0x140,0,
                 (int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc,0,(*(uint *)&gen_args[1]));
    uVar2 = (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) - *(int *)(*(undefined * PTR32 *)&gen_args[0])) / 0x140;
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = (uVar1 - uVar2) * 0x140 + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  }
  return uVar2;
}

/* ref: FUN_00756870 */
uint F_00756870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x756870u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  int * piVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if ((*(undefined * PTR32 *)&gen_args[0]) != (*(int * PTR32 *)&gen_args[1])) {
    iVar1 = (*(int * PTR32 *)&gen_args[1])[1] - *(*(int * PTR32 *)&gen_args[1]) >> 0x1f;
    iVar5 = ((*(int * PTR32 *)&gen_args[1])[1] - *(*(int * PTR32 *)&gen_args[1])) / 0x70 + iVar1;
    uVar6 = iVar5 - iVar1;
    if (iVar5 == iVar1) {
      F_007561c0((*(undefined * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)&gen_args[1]),*(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))));
      return (uint)(*(undefined * PTR32 *)&gen_args[0]);
    }
    iVar1 = *(int *)(*(undefined * PTR32 *)&gen_args[0]);
    uVar4 = (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) - iVar1) / 0x70;
    if (uVar6 <= uVar4) {
      uVar4 = F_00755e40(*(*(int * PTR32 *)&gen_args[1]),(*(int * PTR32 *)&gen_args[1])[1],iVar1,(*(int * PTR32 *)&gen_args[1]));
      uVar6 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
      for (; uVar4 != uVar6; uVar4 = uVar4 + 0x70) {
        F_0042c880((undefined *)(uVar4 + 0x18));
      }
      *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = (((*(int * PTR32 *)&gen_args[1])[1] - *(*(int * PTR32 *)&gen_args[1])) / 0x70) * 0x70 + *(int *)(*(undefined * PTR32 *)&gen_args[0]);
      return (uint)(*(undefined * PTR32 *)&gen_args[0]);
    }
    if (uVar6 <= (uint)((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) - iVar1) / 0x70)) {
      iVar5 = *(*(int * PTR32 *)&gen_args[1]) + uVar4 * 0x70;
      F_00755e40(*(*(int * PTR32 *)&gen_args[1]),iVar5,iVar1,(*(int * PTR32 *)&gen_args[1]));
      uVar6 = F_007560e0(iVar5,(*(int * PTR32 *)&gen_args[1])[1],*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),(int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc,(*(int * PTR32 *)&gen_args[1]));
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = uVar6;
      return (uint)(*(undefined * PTR32 *)&gen_args[0]);
    }
    if (iVar1 != 0) {
      F_0074d900(iVar1,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))));
      F_00722430(*(int *)(*(undefined * PTR32 *)&gen_args[0]),(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) - *(int *)(*(undefined * PTR32 *)&gen_args[0])) / 0x70);
    }
    piVar2 = (*(int * PTR32 *)&gen_args[1]);
    bVar3 = F_00756030((*(undefined * PTR32 *)&gen_args[0]),((*(int * PTR32 *)&gen_args[1])[1] - *(*(int * PTR32 *)&gen_args[1])) / 0x70);
    if (bVar3 != 0) {
      uVar6 = F_00756190((*(undefined * PTR32 *)&gen_args[0]),*piVar2,piVar2[1],*(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]));
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = uVar6;
    }
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00756a20 */
unsigned int F_00756a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x756a20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00754f80(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) =
           *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar2) >> 2) * 4)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
      return 0;
    }
  }
  else {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00754f80(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return 0;
}

/* ref: FUN_00756a90 */
uint F_00756a90(unsigned int gen_a0)
{
  GEN_ENTER(0x756a90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00752850(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,800);
  return (uint)uVar1;
}

/* ref: FUN_00756ad0 */
uint F_00756ad0(unsigned int gen_a0)
{
  GEN_ENTER(0x756ad0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_007528f0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x68,800);
  return (uint)uVar1;
}

/* ref: FUN_00756bb0 */
uint F_00756bb0(unsigned int gen_a0)
{
  GEN_ENTER(0x756bb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00755030(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0xa0,0x324);
  return (uint)uVar1;
}

/* ref: FUN_00756bf0 */
uint F_00756bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x756bf0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  F_0073dda0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x4)),(*(uint *)&gen_args[1]));
  (*(uint *)&gen_args[1]) = 0;
  F_00741170((*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),&(*(uint *)&gen_args[1]));
  F_00755030((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
  return (*(uint *)&gen_args[1]);
}

/* ref: FUN_00756c50 */
unsigned int F_00756c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x756c50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 4);
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00755160(this,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_00720120(*(undefined * PTR32 *)((int)this + 4),((int)(param_1 - uVar2) / 0x140) * 0x140 + *(int *)this
                  );
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x140;
      return 0;
    }
  }
  else {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00755160(this,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_00720120(*(undefined * PTR32 *)((int)this + 4),param_1);
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x140;
  return 0;
}

/* ref: FUN_00756ce0 */
unsigned int F_00756ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x756ce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 4);
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_007551f0(this,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_00728760(*(undefined * PTR32 *)((int)this + 4),((int)(param_1 - uVar2) / 0x74) * 0x74 + *(int *)this);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x74;
      return 0;
    }
  }
  else {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_007551f0(this,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_00728760(*(undefined * PTR32 *)((int)this + 4),param_1);
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x74;
  return 0;
}

/* ref: FUN_00756d70 */
unsigned int F_00756d70(unsigned int gen_a0)
{
  GEN_ENTER(0x756d70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if (*(int *)this != iVar1) {
    uVar2 = F_007413b0(iVar1,iVar1,*(int *)this,this);
    F_0074c430(uVar2,*(undefined4 *)((int)this + 4),(int)this + 0xc,this);
    *(uint *)((int)this + 4) = uVar2;
  }
  return 0;
}

/* ref: FUN_00756df0 */
uint F_00756df0(unsigned int gen_a0)
{
  GEN_ENTER(0x756df0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_0074a1e0((undefined *)((int)this + 4),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 8),
               *(undefined4 * PTR32 *)((int)this + 8));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 8),0x28,800);
  return (uint)uVar1;
}

/* ref: FUN_00756e30 */
uint F_00756e30(unsigned int gen_a0)
{
  GEN_ENTER(0x756e30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_0074a1e0((undefined *)((int)this + 4),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 8),
               *(undefined4 * PTR32 *)((int)this + 8));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 8),0x28,800);
  return (uint)uVar1;
}

/* ref: FUN_00756e80 */
uint F_00756e80(unsigned int gen_a0)
{
  GEN_ENTER(0x756e80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00752c00(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x68,800);
  return (uint)uVar1;
}

/* ref: FUN_00756ec0 */
uint F_00756ec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x756ec0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined1 *)this = *param_1;
  F_0074a520((undefined *)((int)this + 4),param_2);
  return (uint)this;
}

/* ref: FUN_00756ee0 */
unsigned int F_00756ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x756ee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x1b0;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x1b0;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      F_00755380(this,uVar1);
      return 0;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    F_00755380(this,uVar1);
  }
  return 0;
}

/* ref: FUN_00756f70 */
uint F_00756f70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x756f70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined1 *)this = *param_1;
  F_0074a520((undefined *)((int)this + 4),param_2);
  return (uint)this;
}

/* ref: FUN_00756f90 */
unsigned int F_00756f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x756f90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if (this != param_1) {
    F_00752390(this);
    *(undefined4 *)this = *param_1;
    *(undefined4 *)((int)this + 4) = param_1[1];
    *(undefined4 *)((int)this + 8) = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return 0;
}

/* ref: FUN_00756fd0 */
uint F_00756fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x756fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_007496b0((undefined *)((int)this + 100),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x68),
               *(undefined4 * PTR32 *)((int)this + 0x68));
  F_00429760(*(undefined4 *)((int)this + 0x68),0x18,800);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00757020 */
uint F_00757020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x757020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_0074a1e0((undefined *)((int)this + 4),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 8),
               *(undefined4 * PTR32 *)((int)this + 8));
  F_00429760(*(undefined4 *)((int)this + 8),0x28,800);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00757070 */
uint F_00757070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x757070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00752390((undefined *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_007570a0 */
uint F_007570a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7570a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if (this != param_1) {
    F_00750930(this);
    *(undefined4 *)this = *param_1;
    *(undefined4 *)((int)this + 4) = param_1[1];
    *(undefined4 *)((int)this + 8) = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return (uint)this;
}

/* ref: FUN_007570e0 */
uint F_007570e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7570e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00750930(param_2);
  return uVar1;
}

/* ref: FUN_007570f0 */
uint F_007570f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7570f0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  undefined * this;
  
  iVar1 = param_1;
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (this != (undefined *)0x0) {
      F_00750a20(this,iVar1);
    }
    iVar1 = iVar1 + 0x10;
    this = (undefined *)((int)this + 0x10);
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00757130 */
uint F_00757130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x757130u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00755680(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_00757150 */
uint F_00757150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x757150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar3 = param_1;
  puVar4 = this;
  for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined1 *)((int)this + 0x48) = *(undefined1 *)(param_1 + 0x12);
  *(undefined1 *)((int)this + 0x49) = *(undefined1 *)((int)param_1 + 0x49);
  *(undefined4 *)((int)this + 0x4c) = param_1[0x13];
  *(undefined4 *)((int)this + 0x50) = param_1[0x14];
  *(undefined4 *)((int)this + 0x54) = param_1[0x15];
  *(undefined1 *)((int)this + 0x58) = *(undefined1 *)(param_1 + 0x16);
  *(undefined4 *)((int)this + 100) = 0;
  uVar1 = F_004296a0(0x18,0,800);
  *(uint *)((int)this + 0x60) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x60) + 4))) = *(int *)((int)this + 0x60);
  *((int *)GEN_TOP((*(int *)((int)this + 0x60) + 8))) = *(int *)((int)this + 0x60);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x60) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x60) + 0x15))) = 1;
  F_00750ab0((undefined *)((int)this + 0x5c),param_1 + 0x17);
  return (uint)this;
}

/* ref: FUN_007571e0 */
uint F_007571e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7571e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *(undefined1 *)this = *param_1;
  F_00754bb0((undefined *)((int)this + 4),param_1 + 4);
  return (uint)this;
}

/* ref: FUN_00757200 */
uint F_00757200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x757200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined1 *)this = *param_1;
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar1 = F_004296a0(0x28,0,800);
  *(uint *)((int)this + 8) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(int *)((int)this + 8);
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 8))) = *(int *)((int)this + 8);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x24))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x25))) = 1;
  F_00750b30((undefined *)((int)this + 4),param_1 + 4);
  return (uint)this;
}

/* ref: FUN_00757260 */
uint F_00757260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x757260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *(undefined1 *)this = *param_1;
  F_0074a520((undefined *)((int)this + 4),param_1 + 4);
  return (uint)this;
}

/* ref: FUN_00757280 */
uint F_00757280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x757280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  F_00757150((undefined *)((int)this + 8),param_1 + 2);
  return (uint)this;
}

/* ref: FUN_007572a0 */
uint F_007572a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7572a0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  undefined * this;
  
  iVar1 = param_1;
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (this != (undefined *)0x0) {
      F_00750a20(this,iVar1);
    }
    iVar1 = iVar1 + 0x10;
    this = (undefined *)((int)this + 0x10);
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_007572e0 */
uint F_007572e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7572e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = *param_1;
  F_00757150((undefined *)((int)this + 8),param_2);
  return (uint)this;
}

/* ref: FUN_00757300 */
uint F_00757300(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x757300u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (this != (undefined *)0x0) {
      F_00750a20(this,param_1);
    }
    param_1 = param_1 + 0x10;
    this = (undefined *)((int)this + 0x10);
  } while (param_1 != param_2);
  return (uint)this;
}

/* ref: FUN_00757340 */
uint F_00757340(unsigned int gen_a0)
{
  GEN_ENTER(0x757340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00752850(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,800);
  return (uint)uVar1;
}

/* ref: FUN_00757380 */
uint F_00757380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x757380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  undefined1 * puVar2;
  int local_8;
  
  puVar2 = (undefined1 *)(param_1 + 0xc);
  puVar1 = (undefined4 *)((int)this + 4);
  local_8 = 0xb;
  do {
    puVar1[-1] = *(undefined4 *)(puVar2 + -0xc);
    *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)this) + (int)puVar1)));
    puVar1[1] = *(undefined4 *)(puVar2 + -4);
    *(undefined1 *)(puVar1 + 2) = *puVar2;
    *(undefined1 *)((int)puVar1 + 9) = puVar2[1];
    *(undefined1 *)((int)puVar1 + 10) = puVar2[2];
    *(undefined1 *)((int)puVar1 + 0xb) = puVar2[3];
    puVar1[3] = *(undefined4 *)(puVar2 + 4);
    puVar1[4] = *(undefined4 *)(puVar2 + 8);
    F_0042ccf0(puVar1 + 5,puVar2 + 0xc);
    puVar1[0x1a] = *(undefined4 *)(puVar2 + 0x60);
    puVar2 = puVar2 + 0x70;
    puVar1 = puVar1 + 0x1c;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  F_00756870((undefined *)((int)this + 0x4d0),param_1 + 0x4d0);
  return (uint)this;
}

/* ref: FUN_00757420 */
uint F_00757420(unsigned int gen_a0)
{
  GEN_ENTER(0x757420u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00752540(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0xc0,800);
  return (uint)uVar1;
}

/* ref: FUN_00757460 */
uint F_00757460(unsigned int gen_a0)
{
  GEN_ENTER(0x757460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_007528f0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x68,800);
  return (uint)uVar1;
}

/* ref: FUN_007574a0 */
uint F_007574a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7574a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00755030(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0xa0,0x324);
  return (uint)uVar1;
}

/* ref: FUN_00757610 */
unsigned int F_00757610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x757610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 4);
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00756ee0(this,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_00738690(*(undefined * PTR32 *)((int)this + 4),((int)(param_1 - uVar2) / 0x1b0) * 0x1b0 + *(int *)this
                  );
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x1b0;
      return 0;
    }
  }
  else {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00756ee0(this,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_00738690(*(undefined * PTR32 *)((int)this + 4),param_1);
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x1b0;
  return 0;
}

/* ref: FUN_007576a0 */
uint F_007576a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7576a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00752c00(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x68,800);
  return (uint)uVar1;
}

/* ref: FUN_00757720 */
uint F_00757720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x757720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (this != param_1) {
    F_00752390(this);
    *(undefined4 *)this = *param_1;
    *(undefined4 *)((int)this + 4) = param_1[1];
    *(undefined4 *)((int)this + 8) = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return (uint)this;
}

/* ref: FUN_00757760 */
uint F_00757760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x757760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_00a038b0(*(undefined * PTR32 *)((int)this + 0x1d0),param_1);
  uVar3 = 1;
  if (uVar2 != 1) {
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *(uint *)((int)this + 0x60) = uVar2;
    }
    uVar3 = F_006f4000(this);
  }
  return uVar3;
}

/* ref: FUN_007577a0 */
uint F_007577a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7577a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_00a03850(*(undefined * PTR32 *)((int)this + 0x1d0),param_1);
  uVar3 = 1;
  if (uVar2 != 1) {
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *(uint *)((int)this + 0x60) = uVar2;
    }
    uVar3 = F_006f4000(this);
  }
  return uVar3;
}

/* ref: FUN_007577e0 */
uint F_007577e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7577e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_00a03970(*(undefined * PTR32 *)((int)this + 0x1d0),param_1);
  uVar3 = 1;
  if (uVar2 != 1) {
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *(uint *)((int)this + 0x60) = uVar2;
    }
    uVar3 = F_006f4000(this);
  }
  return uVar3;
}

/* ref: FUN_00757820 */
uint F_00757820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x757820u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_00a03a70(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1d0))),&(*(undefined4 *)&gen_args[1]));
  uVar3 = 1;
  if (uVar2 != 1) {
    bVar1 = F_00a02270(uVar2);
    if (bVar1 != 0) {
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x60))) = uVar2;
    }
    uVar3 = F_006f4000((*(undefined * PTR32 *)&gen_args[0]));
  }
  return uVar3;
}

/* ref: FUN_00757860 */
uint F_00757860(unsigned int gen_a0)
{
  GEN_ENTER(0x757860u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = (*(int *)&gen_args[0]);
  F_007496b0((undefined *)((*(int *)&gen_args[0]) + 100),&(*(int *)&gen_args[0]),**(undefined4 * PTR32 *)((*(int *)&gen_args[0]) + 0x68),
               *(undefined4 * PTR32 *)((*(int *)&gen_args[0]) + 0x68));
  uVar2 = F_00429760(*(undefined4 *)(iVar1 + 0x68),0x18,800);
  return (uint)uVar2;
}

/* ref: FUN_007578a0 */
uint F_007578a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7578a0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = (*(int *)&gen_args[0]);
  F_0074a1e0((undefined *)((*(int *)&gen_args[0]) + 4),&(*(int *)&gen_args[0]),**(undefined4 * PTR32 *)((*(int *)&gen_args[0]) + 8),
               *(undefined4 * PTR32 *)((*(int *)&gen_args[0]) + 8));
  uVar2 = F_00429760(*(undefined4 *)(iVar1 + 8),0x28,800);
  return (uint)uVar2;
}

/* ref: FUN_007578e0 */
uint F_007578e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7578e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00752390((undefined *)(param_1 + 4));
  return uVar1;
}

/* ref: FUN_00757900 */
unsigned int F_00757900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x757900u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  undefined * this;
  
  this = param_1;
  for (iVar1 = param_2; iVar1 != 0; iVar1 = iVar1 + -1) {
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    if (this != (undefined *)0x0) {
      F_00750a20(this,&(*(undefined4 *)(gen_frame + 0xc)));
    }
    F_00750930(&(*(undefined4 *)(gen_frame + 0xc)));
    this = (undefined *)((int)this + 0x10);
  }
  return 0;
}

/* ref: FUN_00757950 */
uint F_00757950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x757950u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 * puVar1;
  undefined4 * this;
  
  puVar1 = param_1;
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (this != puVar1) {
      F_00750930(this);
      *this = *puVar1;
      this[1] = puVar1[1];
      this[2] = puVar1[2];
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
    }
    puVar1 = puVar1 + 4;
    this = this + 4;
  } while (puVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_007579a0 */
uint F_007579a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7579a0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != (undefined *)0x0) {
        F_00750a20(this,(param_1 - (int)param_3) + (int)this);
      }
      this = (undefined *)((int)this + 0x10);
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: std::_Destroy_range<fuzzer__fuzzer_allocator<fuzzer__MergeFileInfo>_>_007579e0 */
unsigned int F_007579e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7579e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  for (this = param_1; this != param_2; this = this + 0x10) {
    F_00750930(this);
  }
  return 0;
}

/* ref: FUN_00757a10 */
uint F_00757a10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x757a10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = *param_1;
  F_00757150((undefined *)((int)this + 8),param_2);
  return (uint)this;
}

/* ref: FUN_00757a30 */
uint F_00757a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x757a30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * this_00;
  
  this_00 = (undefined4 *)((int)this + 4);
  *(undefined1 *)this = *param_1;
  *this_00 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (this_00 != param_2) {
    F_00752390(this_00);
    *this_00 = *param_2;
    *(undefined4 *)((int)this + 8) = param_2[1];
    *(undefined4 *)((int)this + 0xc) = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  return (uint)this;
}

/* ref: FUN_00757a80 */
uint F_00757a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x757a80u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = *param_2;
    uVar1 = F_00754bb0(param_1 + 4,param_2 + 4);
  }
  return uVar1;
}

/* ref: FUN_00757ab0 */
uint F_00757ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x757ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined1 *)this = *param_1;
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar1 = F_004296a0(0x28,0,800);
  *(uint *)((int)this + 8) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(int *)((int)this + 8);
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 8))) = *(int *)((int)this + 8);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x24))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x25))) = 1;
  F_00750b30((undefined *)((int)this + 4),param_1 + 4);
  return (uint)this;
}

/* ref: FUN_00757b10 */
uint F_00757b10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x757b10u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != (undefined *)0x0) {
        F_00750a20(this,(param_1 - (int)param_3) + (int)this);
      }
      this = (undefined *)((int)this + 0x10);
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00757b50 */
uint F_00757b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x757b50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  F_00757150((undefined *)((int)this + 8),param_1 + 2);
  return (uint)this;
}

/* ref: FUN_00757b70 */
uint F_00757b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x757b70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  F_00757150((undefined *)((int)this + 8),param_1 + 2);
  return (uint)this;
}

/* ref: FUN_00757b90 */
uint F_00757b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x757b90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * this_00;
  
  this_00 = (undefined4 *)((int)this + 4);
  *(undefined1 *)this = *param_1;
  *this_00 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (this_00 != param_2) {
    F_00752390(this_00);
    *this_00 = *param_2;
    *(undefined4 *)((int)this + 8) = param_2[1];
    *(undefined4 *)((int)this + 0xc) = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  return (uint)this;
}

/* ref: FUN_00757be0 */
uint F_00757be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x757be0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  int iVar1;
  
  this = param_3;
  for (iVar1 = param_1; iVar1 != param_2; iVar1 = iVar1 + 0x10) {
    if (this != (undefined *)0x0) {
      F_00750a20(this,iVar1);
    }
    this = (undefined *)((int)this + 0x10);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::SelectEventListCallback::vf1 */
uint F_00757c20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x757c20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 uVar1;
  
  if ((param_3 < 1) || ((*param_2 & 0xf) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 4);
  }
  F_006f0f30(REFG(undefined4, 0x1488344),uVar1);
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  return (uint)param_1;
}

/* ref: FUN_00757c60 */
byte F_00757c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x757c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if ((*(int *)((int)this + 4) != 0) && (param_1 == 0x16)) {
    F_00756250((undefined *)((int)this + 8));
    uVar1 = F_00b9cdd0(&REFG(undefined, 0x14b3134));
    F_00757380((undefined *)((int)this + 8),uVar1);
    F_006c6040();
  }
  return 1;
}

/* ref: Client::Game::Event::ShopMenuCallback::vf1 */
uint F_00757ca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x757ca0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 uVar1;
  
  if (*(undefined * PTR32 *)(this + 4) == (undefined *)0x0) {
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 2;
    return (uint)param_1;
  }
  if ((*param_2 & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 4);
  }
  F_006f4dc0(*(undefined * PTR32 *)(this + 4),uVar1);
  ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: Client::Game::Event::ShopItemListCallback::vf1 */
uint F_00757cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x757cf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = 0;
  if ((1 < param_3) && ((param_2[8] & 0xf) != 0)) {
    uVar2 = *(undefined4 *)(param_2 + 0xc);
  }
  if ((*param_2 & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_2 + 4);
  }
  bVar1 = F_006f4e90(*(undefined * PTR32 *)(this + 4),uVar3,uVar2);
  if (bVar1 != 0) {
    F_006c21d0();
    ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  }
  *(byte *)(param_1 + 1) = bVar1;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: Client::Game::Event::GCShopMenuCallback::vf1 */
uint F_00757d50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x757d50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 uVar1;
  
  if (*(undefined * PTR32 *)(this + 4) == (undefined *)0x0) {
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 2;
    return (uint)param_1;
  }
  if ((*param_2 & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 4);
  }
  F_006f5b00(*(undefined * PTR32 *)(this + 4),uVar1);
  ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: Client::Game::Event::SpecialShopEventHandler::vf0 */
uint F_00757da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x757da0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_006f6430(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00757dd0 */
uint F_00757dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x757dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_00509590(this);
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[5])REFP(0x10ba948));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  uVar1 = F_004296a0(0x68,0,800);
  *(uint *)((int)this + 0x10) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 4))) = *(int *)((int)this + 0x10);
  *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 8))) = *(int *)((int)this + 0x10);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x10) + 100))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x65))) = 1;
  return (uint)this;
}

/* ref: FUN_00757e30 */
undefined4 * F_00757e30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x757e30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x65) == '\0') {
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
    } while (*(char *)((int)puVar3 + 0x65) == '\0');
  }
  return puVar2;
}

/* ref: FUN_00757e60 */
uint F_00757e60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x757e60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x65) == '\0') {
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
    } while (*(char *)((int)puVar2 + 0x65) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_00757ea0 */
uint F_00757ea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x757ea0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x65) == '\0') {
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
    } while (*(char *)((int)puVar2 + 0x65) == '\0');
  }
  if ((puVar3 != *(undefined4 * PTR32 *)((int)this + 4)) && ((uint)puVar3[3] <= *param_2)) {
    *param_1 = puVar3;
    return (uint)param_1;
  }
  *param_1 = *(undefined4 * PTR32 *)((int)this + 4);
  return (uint)param_1;
}

/* ref: LuaScriptLoader_VModuleBase_Event_Game_Client_Event::vf3 */
uint F_00757f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x757f10u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  
  F_00757ea0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))),&(*(int *)(gen_frame + 0x8)),&(*(int * PTR32 *)&gen_args[1]));
  piVar2 = (*(int * PTR32 *)&gen_args[1]);
  piVar1 = (*(int * PTR32 *)&gen_args[1]) + 0x23;
  LOCK();
  iVar5 = *piVar1;
  *piVar1 = *piVar1;
  UNLOCK();
  if (iVar5 < 8) {
    iVar5 = (*(int * PTR32 *)&gen_args[1])[7];
    uVar6 = 1;
    uVar3 = F_0042a990((*(int *)(gen_frame + 0x8)) + 0x10);
    uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2);
    uVar3 = F_00a022c0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),uVar4,iVar5,uVar3,uVar6);
    ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 0x14))))
              (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),(uint)(uVar3 == 0),piVar2[4]);
  }
  F_0050c620(piVar2,0,0);
  uVar3 = F_0074d560(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))),&(*(int * PTR32 *)&gen_args[1]),(*(int *)(gen_frame + 0x8)));
  return uVar3;
}

/* ref: FUN_00757fb0 */
uint F_00757fb0(unsigned int gen_a0)
{
  GEN_ENTER(0x757fb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  char cVar1;
  int * piVar2;
  undefined * pvVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[5])REFP(0x10ba948));
  piVar6 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x10)));
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (piVar6 != *(int * PTR32 *)((int)this + 0x10)) {
    do {
      F_0050c620(piVar6[3],0,0);
      if (*(char *)((int)piVar6 + 0x65) == '\0') {
        piVar2 = (int *)piVar6[2];
        if (*(char *)((int)piVar2 + 0x65) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x65);
          piVar6 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x65);
            piVar6 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar6[1] + 0x65);
          piVar4 = (int *)piVar6[1];
          piVar2 = piVar6;
          while ((piVar6 = piVar4, cVar1 == '\0' && (piVar2 == (int *)piVar6[2]))) {
            cVar1 = *(char *)(piVar6[1] + 0x65);
            piVar4 = (int *)piVar6[1];
            piVar2 = piVar6;
          }
        }
      }
    } while (piVar6 != *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10));
  }
  pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x8));
  piVar6 = *((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10) + 4)));
  this_00 = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0xc);
  cVar1 = *(char *)((int)piVar6 + 0x65);
  while (cVar1 == '\0') {
    F_0074e410(this_00,piVar6[2]);
    piVar2 = (int *)*piVar6;
    F_0042c880(piVar6 + 4);
    F_00429760(piVar6,0x68,800);
    piVar6 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x65);
  }
  *((int *)GEN_TOP((*(int *)((int)pvVar3 + 0x10) + 4))) = *(int *)((int)pvVar3 + 0x10);
  *(undefined4 *)*(undefined4 *)((int)pvVar3 + 0x10) = *(undefined4 *)((int)pvVar3 + 0x10);
  *((int *)GEN_TOP((*(int *)((int)pvVar3 + 0x10) + 8))) = *(int *)((int)pvVar3 + 0x10);
  *(undefined4 *)((int)pvVar3 + 0x14) = 0;
  F_00752c00(this_00,((undefined1 *)(gen_frame + 0x4)),**(undefined4 * PTR32 *)((int)pvVar3 + 0x10),
               *(undefined4 * PTR32 *)((int)pvVar3 + 0x10));
  F_00429760(*(undefined4 *)((int)pvVar3 + 0x10),0x68,800);
  uVar5 = F_005095f0((*(undefined * PTR32 *)(gen_frame + 0x8)));
  return uVar5;
}

/* ref: FUN_007580c0 */
uint F_007580c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7580c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_00509590(this);
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[5])REFP(0x10ba960));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  uVar1 = F_004296a0(0x68,0,800);
  *(uint *)((int)this + 0x10) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 4))) = *(int *)((int)this + 0x10);
  *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 8))) = *(int *)((int)this + 0x10);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x10) + 100))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x65))) = 1;
  return (uint)this;
}

/* ref: LuaScriptLoader_VLuaEventHandler_Event_Game_Client_Event::vf3 */
uint F_00758120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x758120u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  
  F_00757ea0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))),&(*(int *)(gen_frame + 0x8)),&(*(int * PTR32 *)&gen_args[1]));
  piVar2 = (*(int * PTR32 *)&gen_args[1]);
  piVar1 = (*(int * PTR32 *)&gen_args[1]) + 0x23;
  LOCK();
  iVar5 = *piVar1;
  *piVar1 = *piVar1;
  UNLOCK();
  if (iVar5 < 8) {
    iVar5 = (*(int * PTR32 *)&gen_args[1])[7];
    uVar6 = 1;
    uVar3 = F_0042a990((*(int *)(gen_frame + 0x8)) + 0x10);
    uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2);
    uVar3 = F_00a022c0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),uVar4,iVar5,uVar3,uVar6);
    ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 0x240))))
              (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),(uint)(uVar3 == 0),piVar2[4]);
  }
  F_0050c620(piVar2,0,0);
  uVar3 = F_0074d560(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))),&(*(int * PTR32 *)&gen_args[1]),(*(int *)(gen_frame + 0x8)));
  return uVar3;
}

/* ref: FUN_007581c0 */
uint F_007581c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7581c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  char cVar1;
  int * piVar2;
  undefined * pvVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[5])REFP(0x10ba960));
  piVar6 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x10)));
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (piVar6 != *(int * PTR32 *)((int)this + 0x10)) {
    do {
      F_0050c620(piVar6[3],0,0);
      if (*(char *)((int)piVar6 + 0x65) == '\0') {
        piVar2 = (int *)piVar6[2];
        if (*(char *)((int)piVar2 + 0x65) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x65);
          piVar6 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x65);
            piVar6 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar6[1] + 0x65);
          piVar4 = (int *)piVar6[1];
          piVar2 = piVar6;
          while ((piVar6 = piVar4, cVar1 == '\0' && (piVar2 == (int *)piVar6[2]))) {
            cVar1 = *(char *)(piVar6[1] + 0x65);
            piVar4 = (int *)piVar6[1];
            piVar2 = piVar6;
          }
        }
      }
    } while (piVar6 != *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10));
  }
  pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x8));
  piVar6 = *((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10) + 4)));
  this_00 = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0xc);
  cVar1 = *(char *)((int)piVar6 + 0x65);
  while (cVar1 == '\0') {
    F_0074e410(this_00,piVar6[2]);
    piVar2 = (int *)*piVar6;
    F_0042c880(piVar6 + 4);
    F_00429760(piVar6,0x68,800);
    piVar6 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x65);
  }
  *((int *)GEN_TOP((*(int *)((int)pvVar3 + 0x10) + 4))) = *(int *)((int)pvVar3 + 0x10);
  *(undefined4 *)*(undefined4 *)((int)pvVar3 + 0x10) = *(undefined4 *)((int)pvVar3 + 0x10);
  *((int *)GEN_TOP((*(int *)((int)pvVar3 + 0x10) + 8))) = *(int *)((int)pvVar3 + 0x10);
  *(undefined4 *)((int)pvVar3 + 0x14) = 0;
  F_00752c00(this_00,((undefined1 *)(gen_frame + 0x4)),**(undefined4 * PTR32 *)((int)pvVar3 + 0x10),
               *(undefined4 * PTR32 *)((int)pvVar3 + 0x10));
  F_00429760(*(undefined4 *)((int)pvVar3 + 0x10),0x68,800);
  uVar5 = F_005095f0((*(undefined * PTR32 *)(gen_frame + 0x8)));
  return uVar5;
}

/* ref: LuaScriptLoader_VModuleBase_Event_Game_Client_Event::vf0 */
uint F_007582d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7582d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00757fb0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: LuaScriptLoader_VLuaEventHandler_Event_Game_Client_Event::vf0 */
uint F_00758300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x758300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_007581c0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00758330 */
uint F_00758330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x758330u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * this_00;
  
  this_00 = (undefined4 *)((int)this + 4);
  *(undefined1 *)this = *param_1;
  *this_00 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (this_00 != param_2) {
    F_00752390(this_00);
    *this_00 = *param_2;
    *(undefined4 *)((int)this + 8) = param_2[1];
    *(undefined4 *)((int)this + 0xc) = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  return (uint)this;
}

/* ref: FUN_00758380 */
unsigned int F_00758380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x758380u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 in_ECX = 0;
  
  F_00757900(param_1,param_2,param_3,param_4,0,in_ECX);
  return 0;
}

/* ref: FUN_007583b0 */
uint F_007583b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7583b0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = (*(int *)&gen_args[1]);
  F_007496b0((undefined *)((*(int *)&gen_args[1]) + 100),&(*(int *)&gen_args[1]),**(undefined4 * PTR32 *)((*(int *)&gen_args[1]) + 0x68),
               *(undefined4 * PTR32 *)((*(int *)&gen_args[1]) + 0x68));
  uVar2 = F_00429760(*(undefined4 *)(iVar1 + 0x68),0x18,800);
  return (uint)uVar2;
}

/* ref: FUN_007583e0 */
uint F_007583e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7583e0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = (*(int *)&gen_args[1]);
  F_0074a1e0((undefined *)((*(int *)&gen_args[1]) + 4),&(*(int *)&gen_args[1]),**(undefined4 * PTR32 *)((*(int *)&gen_args[1]) + 8),
               *(undefined4 * PTR32 *)((*(int *)&gen_args[1]) + 8));
  uVar2 = F_00429760(*(undefined4 *)(iVar1 + 8),0x28,800);
  return (uint)uVar2;
}

/* ref: FUN_00758410 */
uint F_00758410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x758410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00757950(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_00758430 */
uint F_00758430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x758430u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != (undefined *)0x0) {
        F_00750a20(this,(param_1 - (int)param_3) + (int)this);
      }
      this = (undefined *)((int)this + 0x10);
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: std::_Destroy_range<fuzzer__fuzzer_allocator<fuzzer__MergeFileInfo>_>_00758470 */
unsigned int F_00758470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x758470u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  for (this = param_1; this != param_2; this = this + 0x10) {
    F_00750930(this);
  }
  return 0;
}

/* ref: FUN_007584a0 */
uint F_007584a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7584a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_00752390((undefined *)(param_2 + 4));
  return uVar1;
}

/* ref: FUN_007584b0 */
uint F_007584b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7584b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  
  piVar4 = (*(int * PTR32 *)&gen_args[4]);
  if (0xfffffffd < *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)))) {
    F_0074a1e0((*(int * PTR32 *)&gen_args[4]) + 4,&(*(undefined4 *)&gen_args[2]),*((undefined4 *)GEN_TOP((*(int * PTR32 *)&gen_args[4])[5])),((undefined4 *)GEN_TOP((*(int * PTR32 *)&gen_args[4])[5])));
    F_00429760(piVar4[5],0x28,800);
    F_00429760(piVar4,0x24,800);
                    
    F_00c4579a("map/set<T> too long");
  }
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 1;
  (*(int * PTR32 *)&gen_args[4])[1] = (int)(*(undefined4 * PTR32 *)&gen_args[3]);
  if ((*(undefined4 * PTR32 *)&gen_args[3]) == *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))) {
    (*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))[1] = (*(int * PTR32 *)&gen_args[4]);
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = (*(int * PTR32 *)&gen_args[4]);
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 8))) = (*(int * PTR32 *)&gen_args[4]);
  }
  else if ((char)(*(undefined4 *)&gen_args[2]) == '\0') {
    (*(undefined4 * PTR32 *)&gen_args[3])[2] = (*(int * PTR32 *)&gen_args[4]);
    if ((*(undefined4 * PTR32 *)&gen_args[3]) == *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 8)))) {
      *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 8))) = (*(int * PTR32 *)&gen_args[4]);
    }
  }
  else {
    *(*(undefined4 * PTR32 *)&gen_args[3]) = (*(int * PTR32 *)&gen_args[4]);
    if ((*(undefined4 * PTR32 *)&gen_args[3]) == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      **((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = (int)(*(int * PTR32 *)&gen_args[4]);
    }
  }
  cVar1 = *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[4])[1] + 0x20)));
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[4]);
      *(undefined1 *)(iVar2 + 0x20) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    piVar5 = (int *)piVar4[1];
    piVar6 = (int *)piVar5[1];
    if (piVar5 == (int *)*piVar6) {
      iVar2 = piVar6[2];
      if (*(char *)(iVar2 + 0x20) == '\0') {
        *(undefined1 *)(piVar5 + 8) = 1;
        *(undefined1 *)(iVar2 + 0x20) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x20))) = 0;
        piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
      }
      else {
        if (piVar4 == (int *)piVar5[2]) {
          piVar4 = (int *)piVar5[2];
          piVar5[2] = *piVar4;
          if (*(char *)(*piVar4 + 0x21) == '\0') {
            *(int * PTR32 *)(*piVar4 + 4) = piVar5;
          }
          piVar4[1] = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = piVar4;
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
        *(undefined1 *)(piVar4[1] + 0x20) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x20))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)*piVar5;
        *piVar5 = piVar6[2];
        if (*(char *)(piVar6[2] + 0x21) == '\0') {
          *(int * PTR32 *)(piVar6[2] + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = piVar6;
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
LAB_007586cd: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*(char *)(iVar2 + 0x20) != '\0') {
        if (piVar4 == (int *)*piVar5) {
          iVar2 = *piVar5;
          *piVar5 = *(int *)(iVar2 + 8);
          if (*((char *)GEN_TOP((*(int *)(iVar2 + 8) + 0x21))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*(int *)(iVar2 + 8) + 4))) = piVar5;
          }
          *(int *)(iVar2 + 4) = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
            *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = iVar2;
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
        *(undefined1 *)(piVar4[1] + 0x20) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x20))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)piVar5[2];
        piVar5[2] = *piVar6;
        if (*(char *)(*piVar6 + 0x21) == '\0') {
          *(int * PTR32 *)(*piVar6 + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = piVar6;
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
        goto LAB_007586cd;
      }
      *(undefined1 *)(piVar5 + 8) = 1;
      *(undefined1 *)(iVar2 + 0x20) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x20))) = 0;
      piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
    }
    cVar1 = *(char *)(piVar4[1] + 0x20);
  } while( true );
}

/* ref: FUN_00758700 */
uint F_00758700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x758700u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  int * piVar5;
  int * piVar6;
  
  if (0xfffffffd < *(uint *)((int)this + 8)) {
    F_00752390(param_4 + 4);
    F_00429760(param_4,0x24,800);
                    
    F_00c4579a("map/set<T> too long");
  }
  *(uint *)((int)this + 8) = *(uint *)((int)this + 8) + 1;
  param_4[1] = (int)param_3;
  if (param_3 == *(undefined4 * PTR32 *)((int)this + 4)) {
    (*(undefined4 * PTR32 *)((int)this + 4))[1] = param_4;
    **(undefined4 * PTR32 *)((int)this + 4) = param_4;
    iVar4 = *(int *)((int)this + 4);
  }
  else {
    if ((char)param_2 != '\0') {
      *param_3 = param_4;
      if (param_3 == ((undefined4 *)GEN_TOP(**(int * PTR32 *)((int)this + 4)))) {
        **(int * PTR32 *)((int)this + 4) = (int)param_4;
      }
      goto LAB_00758776;
    }
    param_3[2] = param_4;
    iVar4 = *(int *)((int)this + 4);
    if (param_3 != *(undefined4 * PTR32 *)(iVar4 + 8)) goto LAB_00758776;
  }
  *(int * PTR32 *)(iVar4 + 8) = param_4;
LAB_00758776: ;
  cVar1 = *(char *)(param_4[1] + 0x20);
  piVar3 = param_4;
  do {
    if (cVar1 != '\0') {
      iVar4 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      *param_1 = param_4;
      *(undefined1 *)(iVar4 + 0x20) = 1;
      return (uint)param_1;
    }
    piVar5 = (int *)piVar3[1];
    piVar6 = (int *)piVar5[1];
    if (piVar5 == (int *)*piVar6) {
      iVar4 = piVar6[2];
      if (*(char *)(iVar4 + 0x20) == '\0') {
        *(undefined1 *)(piVar5 + 8) = 1;
        *(undefined1 *)(iVar4 + 0x20) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar3[1] + 4) + 0x20))) = 0;
        piVar3 = *(int * PTR32 *)(piVar3[1] + 4);
      }
      else {
        if (piVar3 == (int *)piVar5[2]) {
          piVar3 = (int *)piVar5[2];
          piVar5[2] = *piVar3;
          if (*(char *)(*piVar3 + 0x21) == '\0') {
            *(int * PTR32 *)(*piVar3 + 4) = piVar5;
          }
          piVar3[1] = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar3;
          }
          else {
            piVar6 = (int *)piVar5[1];
            if (piVar5 == (int *)*piVar6) {
              *piVar6 = (int)piVar3;
            }
            else {
              piVar6[2] = (int)piVar3;
            }
          }
          *piVar3 = (int)piVar5;
          piVar5[1] = (int)piVar3;
          piVar3 = piVar5;
        }
        *(undefined1 *)(piVar3[1] + 0x20) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar3[1] + 4) + 0x20))) = 0;
        piVar5 = *(int * PTR32 *)(piVar3[1] + 4);
        piVar6 = (int *)*piVar5;
        *piVar5 = piVar6[2];
        if (*(char *)(piVar6[2] + 0x21) == '\0') {
          *(int * PTR32 *)(piVar6[2] + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar6;
          piVar6[2] = (int)piVar5;
        }
        else {
          piVar2 = (int *)piVar5[1];
          if (piVar5 == (int *)piVar2[2]) {
            piVar2[2] = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            *piVar2 = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
        }
LAB_00758901: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar4 = *piVar6;
      if (*(char *)(iVar4 + 0x20) != '\0') {
        if (piVar3 == (int *)*piVar5) {
          iVar4 = *piVar5;
          *piVar5 = *(int *)(iVar4 + 8);
          if (*((char *)GEN_TOP((*(int *)(iVar4 + 8) + 0x21))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*(int *)(iVar4 + 8) + 4))) = piVar5;
          }
          *(int *)(iVar4 + 4) = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
            *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = iVar4;
          }
          else {
            piVar3 = (int *)piVar5[1];
            if (piVar5 == (int *)piVar3[2]) {
              piVar3[2] = iVar4;
            }
            else {
              *piVar3 = iVar4;
            }
          }
          *(int * PTR32 *)(iVar4 + 8) = piVar5;
          piVar5[1] = iVar4;
          piVar3 = piVar5;
        }
        *(undefined1 *)(piVar3[1] + 0x20) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar3[1] + 4) + 0x20))) = 0;
        piVar5 = *(int * PTR32 *)(piVar3[1] + 4);
        piVar6 = (int *)piVar5[2];
        piVar5[2] = *piVar6;
        if (*(char *)(*piVar6 + 0x21) == '\0') {
          *(int * PTR32 *)(*piVar6 + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar6;
        }
        else {
          piVar2 = (int *)piVar5[1];
          if (piVar5 == (int *)*piVar2) {
            *piVar2 = (int)piVar6;
          }
          else {
            piVar2[2] = (int)piVar6;
          }
        }
        *piVar6 = (int)piVar5;
        goto LAB_00758901;
      }
      *(undefined1 *)(piVar5 + 8) = 1;
      *(undefined1 *)(iVar4 + 0x20) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar3[1] + 4) + 0x20))) = 0;
      piVar3 = *(int * PTR32 *)(piVar3[1] + 4);
    }
    cVar1 = *(char *)(piVar3[1] + 0x20);
  } while( true );
}

/* ref: FUN_00758930 */
uint F_00758930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x758930u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = *param_1;
  F_00757150((undefined *)((int)this + 8),param_2);
  return (uint)this;
}

/* ref: FUN_00758950 */
uint F_00758950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x758950u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * this_00;
  
  this_00 = (undefined4 *)((int)this + 4);
  *(undefined1 *)this = *param_1;
  *this_00 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (this_00 != param_2) {
    F_00752390(this_00);
    *this_00 = *param_2;
    *(undefined4 *)((int)this + 8) = param_2[1];
    *(undefined4 *)((int)this + 0xc) = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  return (uint)this;
}

/* ref: FUN_007589a0 */
uint F_007589a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7589a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  int * piVar5;
  int * piVar6;
  
  piVar6 = (*(int * PTR32 *)&gen_args[4]);
  if (0xfffffffd < *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)))) {
    F_007496b0((*(int * PTR32 *)&gen_args[4]) + 0x1d,&(*(undefined4 *)&gen_args[2]),*((undefined4 *)GEN_TOP((*(int * PTR32 *)&gen_args[4])[0x1e])),((undefined4 *)GEN_TOP((*(int * PTR32 *)&gen_args[4])[0x1e])));
    F_00429760(piVar6[0x1e],0x18,800);
    F_00429760(piVar6,0x90,800);
                    
    F_00c4579a("map/set<T> too long");
  }
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 1;
  (*(int * PTR32 *)&gen_args[4])[1] = (int)(*(undefined4 * PTR32 *)&gen_args[3]);
  if ((*(undefined4 * PTR32 *)&gen_args[3]) == *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))) {
    (*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))[1] = (*(int * PTR32 *)&gen_args[4]);
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = (*(int * PTR32 *)&gen_args[4]);
    iVar4 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  }
  else {
    if ((char)(*(undefined4 *)&gen_args[2]) != '\0') {
      *(*(undefined4 * PTR32 *)&gen_args[3]) = (*(int * PTR32 *)&gen_args[4]);
      if ((*(undefined4 * PTR32 *)&gen_args[3]) == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
        **((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = (int)(*(int * PTR32 *)&gen_args[4]);
      }
      goto LAB_00758a35;
    }
    (*(undefined4 * PTR32 *)&gen_args[3])[2] = (*(int * PTR32 *)&gen_args[4]);
    iVar4 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
    if ((*(undefined4 * PTR32 *)&gen_args[3]) != *(undefined4 * PTR32 *)(iVar4 + 8)) goto LAB_00758a35;
  }
  *(int * PTR32 *)(iVar4 + 8) = (*(int * PTR32 *)&gen_args[4]);
LAB_00758a35: ;
  cVar1 = *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[4])[1] + 0x88)));
  piVar3 = (*(int * PTR32 *)&gen_args[4]);
  do {
    if (cVar1 != '\0') {
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) + 0x88))) = 1;
      *(*(undefined4 * PTR32 *)&gen_args[1]) = piVar3;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    piVar5 = (int *)piVar6[1];
    piVar2 = (int *)piVar5[1];
    if (piVar5 == (int *)*piVar2) {
      iVar4 = piVar2[2];
      if (*(char *)(iVar4 + 0x88) != '\0') {
        if (piVar6 == (int *)piVar5[2]) {
          piVar6 = (int *)piVar5[2];
          piVar5[2] = *piVar6;
          if (*(char *)(*piVar6 + 0x89) == '\0') {
            *(int * PTR32 *)(*piVar6 + 4) = piVar5;
          }
          piVar6[1] = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = piVar6;
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
          piVar5[1] = (int)piVar6;
          piVar6 = piVar5;
        }
        *(undefined1 *)(piVar6[1] + 0x88) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar6[1] + 4) + 0x88))) = 0;
        piVar3 = *(int * PTR32 *)(piVar6[1] + 4);
        piVar5 = (int *)*piVar3;
        *piVar3 = piVar5[2];
        if (*(char *)(piVar5[2] + 0x89) == '\0') {
          *(int * PTR32 *)(piVar5[2] + 4) = piVar3;
        }
        piVar5[1] = piVar3[1];
        if (piVar3 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = piVar5;
          piVar5[2] = (int)piVar3;
        }
        else {
          piVar2 = (int *)piVar3[1];
          if (piVar3 == (int *)piVar2[2]) {
            piVar2[2] = (int)piVar5;
            piVar5[2] = (int)piVar3;
          }
          else {
            *piVar2 = (int)piVar5;
            piVar5[2] = (int)piVar3;
          }
        }
        goto LAB_00758ba8;
      }
LAB_00758b24: ;
      *(undefined1 *)(piVar5 + 0x22) = 1;
      *(undefined1 *)(iVar4 + 0x88) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar6[1] + 4) + 0x88))) = 0;
      piVar6 = *(int * PTR32 *)(piVar6[1] + 4);
    }
    else {
      iVar4 = *piVar2;
      if (*(char *)(iVar4 + 0x88) == '\0') goto LAB_00758b24;
      if (piVar6 == (int *)*piVar5) {
        F_007313f0((*(undefined * PTR32 *)&gen_args[0]),piVar5);
        piVar6 = piVar5;
      }
      *(undefined1 *)(piVar6[1] + 0x88) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar6[1] + 4) + 0x88))) = 0;
      piVar3 = *(int * PTR32 *)(piVar6[1] + 4);
      piVar5 = (int *)piVar3[2];
      piVar3[2] = *piVar5;
      if (*(char *)(*piVar5 + 0x89) == '\0') {
        *(int * PTR32 *)(*piVar5 + 4) = piVar3;
      }
      piVar5[1] = piVar3[1];
      if (piVar3 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
        *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = piVar5;
      }
      else {
        piVar2 = (int *)piVar3[1];
        if (piVar3 == (int *)*piVar2) {
          *piVar2 = (int)piVar5;
        }
        else {
          piVar2[2] = (int)piVar5;
        }
      }
      *piVar5 = (int)piVar3;
LAB_00758ba8: ;
      piVar3[1] = (int)piVar5;
      piVar3 = (*(int * PTR32 *)&gen_args[4]);
    }
    cVar1 = *(char *)(piVar6[1] + 0x88);
  } while( true );
}

/* ref: FUN_00758be0 */
uint F_00758be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x758be0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = *param_3;
    uVar1 = F_00754bb0(param_2 + 4,param_3 + 4);
  }
  return uVar1;
}

/* ref: FUN_00758c00 */
uint F_00758c00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x758c00u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != (undefined *)0x0) {
        F_00750a20(this,(param_1 - (int)param_3) + (int)this);
      }
      this = (undefined *)((int)this + 0x10);
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00758c40 */
unsigned int F_00758c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x758c40u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 0xc) = 0;
    uVar1 = F_004296a0(0x28,0,800);
    *(uint *)(param_1 + 8) = uVar1;
    *(uint *)uVar1 = uVar1;
    *((int *)GEN_TOP((*(int *)(param_1 + 8) + 4))) = *(int *)(param_1 + 8);
    *((int *)GEN_TOP((*(int *)(param_1 + 8) + 8))) = *(int *)(param_1 + 8);
    *((undefined1 *)GEN_TOP((*(int *)(param_1 + 8) + 0x24))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)(param_1 + 8) + 0x25))) = 1;
    F_00750b30(param_1 + 4,param_2 + 4);
  }
  return 0;
}

/* ref: FUN_00758ca0 */
uint F_00758ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x758ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * this_00;
  
  puVar1 = (undefined4 *)(param_1 + 4);
  *(undefined1 *)this = *param_1;
  this_00 = (undefined4 *)((int)this + 4);
  *this_00 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (this_00 != puVar1) {
    F_00752390(this_00);
    *this_00 = *puVar1;
    *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *puVar1 = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return (uint)this;
}

/* ref: FUN_00758cf0 */
uint F_00758cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x758cf0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  int iVar1;
  
  this = param_3;
  for (iVar1 = param_1; iVar1 != param_2; iVar1 = iVar1 + 0x10) {
    if (this != (undefined *)0x0) {
      F_00750a20(this,iVar1);
    }
    this = (undefined *)((int)this + 0x10);
  }
  return (uint)this;
}

/* ref: FUN_00758d30 */
uint F_00758d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x758d30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    uVar1 = F_00757150(param_1 + 2,param_2 + 2);
  }
  return uVar1;
}

/* ref: Client::Game::Event::GuildleveAssignmentRewardMenuCallback::vf1 */
uint F_00758d60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x758d60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  bVar1 = 1;
  if (*(undefined * PTR32 *)(this + 4) != (undefined *)0x0) {
    if ((param_3 < 2) || ((param_2[8] & 0xf) == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0xc);
    }
    if ((*param_2 & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_2 + 4);
    }
    bVar1 = F_006fad60(*(undefined * PTR32 *)(this + 4),uVar2,uVar3);
  }
  ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  *(byte *)(param_1 + 1) = bVar1;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: Client::Game::Event::GatheringBarCallback::vf1 */
uint F_00758dc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x758dc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  byte bVar1;
  
  if (*(undefined * PTR32 *)(this + 4) != (undefined *)0x0) {
    bVar1 = F_006fae00(*(undefined * PTR32 *)(this + 4),param_2,param_3);
    if (bVar1 == 0) {
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 2;
      return (uint)param_1;
    }
  }
  ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: Client::Game::Event::QuestOfferCallback::vf1 */
uint F_00758e10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x758e10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined * this_00;
  undefined4 uVar1;
  
  this_00 = *(undefined * PTR32 *)(this + 4);
  ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  if ((this_00 != (undefined *)0x0) && (0 < param_3)) {
    if ((*param_2 & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 4);
    }
    F_006fb930(this_00,uVar1);
  }
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  return (uint)param_1;
}

/* ref: Client::Game::Event::QuestRewardCallback::vf1 */
uint F_00758e60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x758e60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  bVar1 = 1;
  if (*(undefined * PTR32 *)(this + 4) != (undefined *)0x0) {
    if ((param_3 < 2) || ((param_2[8] & 0xf) == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0xc);
    }
    if ((*param_2 & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_2 + 4);
    }
    bVar1 = F_006fb9e0(*(undefined * PTR32 *)(this + 4),uVar2,uVar3);
    if (bVar1 == 0) goto LAB_00758eaa;
  }
  ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
LAB_00758eaa: ;
  *(byte *)(param_1 + 1) = bVar1;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: Client::Game::Event::ShopItemPriceChangedCallback::vf1 */
uint F_00758ec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x758ec0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  byte bVar1;
  undefined4 uVar2;
  
  if (((REFG(int, 0x1488760) != 0) && (*(short *)(REFG(int, 0x1488760) + 0x54) != -1)) &&
     (*(undefined * PTR32 *)(this + 4) != (undefined *)0x0)) {
    if ((*param_2 & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_2 + 4);
    }
    bVar1 = F_006fbd30(*(undefined * PTR32 *)(this + 4),uVar2);
    ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
    *(byte *)(param_1 + 1) = bVar1;
    *param_1 = 2;
    return (uint)param_1;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: Client::Game::Event::ShopConfirmWidgetCallback::vf1 */
uint F_00758f30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x758f30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 uVar1;
  
  if (((REFG(int, 0x1488760) != 0) && (*(short *)(REFG(int, 0x1488760) + 0x54) != -1)) &&
     (*(undefined * PTR32 *)(this + 4) != (undefined *)0x0)) {
    if ((*param_2 & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 4);
    }
    F_006fbdf0(*(undefined * PTR32 *)(this + 4),uVar1);
    ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = 2;
    return (uint)param_1;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: Client::Game::Event::CraftLeveRewardCallback::vf1 */
uint F_00758fa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x758fa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  
  uVar4 = 1;
  if (*(undefined * PTR32 *)(this + 4) == (undefined *)0x0) {
    ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  }
  else {
    if ((param_3 < 2) || ((param_2[8] & 0xf) == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0xc);
    }
    if ((*param_2 & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_2 + 4);
    }
    bVar1 = F_006fbeb0(*(undefined * PTR32 *)(this + 4),uVar2,uVar3);
    uVar4 = 0;
    if (bVar1 != 0) {
      *(undefined4 *)(this + 4) = 0;
      *(byte *)(param_1 + 1) = bVar1;
      *param_1 = 2;
      return (uint)param_1;
    }
  }
  *(undefined1 *)(param_1 + 1) = uVar4;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: Client::Game::Event::ChocoboTaxiStandEventHandler::vf110 */
uint F_00759020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x759020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_0042ccf0(param_1,this + 0x1d8);
  return uVar1;
}

/* ref: Client::Game::Event::Director::vf145 */
byte F_00759040(void)
{
  GEN_ENTER(0x759040u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Event::Director::vf146 */
unsigned int F_00759050(void)
{
  GEN_ENTER(0x759050u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Event::Director::vf147 */
byte F_00759060(void)
{
  GEN_ENTER(0x759060u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Game::Event::Director::vf148 */
byte F_00759070(void)
{
  GEN_ENTER(0x759070u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Event::Director::vf149 */
uint F_00759080(void)
{
  GEN_ENTER(0x759080u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Event::Director::vf150 */
unsigned int F_00759090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x759090u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  undefined4 param_9 = (undefined4)gen_a9;
  return 0;
}

/* ref: Client::Game::Event::Director::vf151 */
unsigned int F_007590a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7590a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::Director::vf152 */
unsigned int F_007590b0(void)
{
  GEN_ENTER(0x7590b0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Event::Director::vf110 */
uint F_007590c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7590c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_0042ccf0(param_1,this + 0x1e8);
  return uVar1;
}

/* ref: Client::Game::Event::Director::vf156 */
unsigned int F_007590e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7590e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::Game::Event::QuestBattleDirector::vf5 */
byte F_00759100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x759100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: Client::Game::Event::QuestBattleDirector::vf148 */
byte F_00759110(void)
{
  GEN_ENTER(0x759110u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Game::Event::QuestBattleDirector::vf149 */
uint F_00759120(unsigned int gen_a0)
{
  GEN_ENTER(0x759120u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x31c;
}

/* ref: Client::Game::Event::QuestBattleDirector::vf122 */
unsigned int F_00759130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x759130u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00ba0c90(this + 0x31c,param_1,param_2);
  return 0;
}

/* ref: Client::Game::Event::QuestBattleDirector::vf123 */
uint F_00759140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x759140u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00ba0ce0(this + 0x31c,param_1,param_2);
  return uVar1;
}

/* ref: Client::Game::Event::QuestBattleDirector::vf7 */
byte F_00759150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x759150u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 1;
}

/* ref: FUN_00759160 */
uint F_00759160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x759160u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  undefined * this_00;
  int * piVar6;
  int * piVar7;
  
  piVar6 = (*(int * PTR32 *)&gen_args[2]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x89))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  (*(int * PTR32 *)(gen_frame + 0x4)) = (*(int * PTR32 *)&gen_args[2]);
  F_00724e40(&(*(int * PTR32 *)&gen_args[2]));
  piVar5 = (int *)*piVar6;
  if (*(char *)((int)piVar5 + 0x89) == '\0') {
    piVar7 = piVar5;
    if ((*(char *)(piVar6[2] + 0x89) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar6)) {
      piVar5[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar6;
      piVar5 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar6[2]) {
        piVar5 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0x89) == '\0') {
          piVar7[1] = (int)piVar5;
        }
        *piVar5 = (int)piVar7;
        (*(int * PTR32 *)&gen_args[2])[2] = piVar6[2];
        *(int * PTR32 *)(piVar6[2] + 4) = (*(int * PTR32 *)&gen_args[2]);
      }
      if (*((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) + 4))) == piVar6) {
        *((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) + 4))) = (*(int * PTR32 *)&gen_args[2]);
      }
      else {
        puVar2 = (undefined4 *)piVar6[1];
        if ((int *)*puVar2 == piVar6) {
          *puVar2 = (*(int * PTR32 *)&gen_args[2]);
        }
        else {
          puVar2[2] = (*(int * PTR32 *)&gen_args[2]);
        }
      }
      (*(int * PTR32 *)&gen_args[2])[1] = piVar6[1];
      iVar1 = (*(int * PTR32 *)&gen_args[2])[0x22];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 0x22))) = (char)piVar6[0x22];
      *(char *)(piVar6 + 0x22) = (char)iVar1;
      goto LAB_0075929f;
    }
  }
  else {
    piVar7 = (int *)piVar6[2];
  }
  piVar5 = (int *)piVar6[1];
  if (*(char *)((int)piVar7 + 0x89) == '\0') {
    piVar7[1] = (int)piVar5;
  }
  if (*((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) + 4))) == piVar6) {
    *((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) + 4))) = piVar7;
  }
  else if ((int *)*piVar5 == piVar6) {
    *piVar5 = (int)piVar7;
  }
  else {
    piVar5[2] = (int)piVar7;
  }
  if (((int *)GEN_TOP(**(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4))) == piVar6) {
    piVar3 = piVar5;
    if (*(char *)((int)piVar7 + 0x89) == '\0') {
      piVar3 = (int *)F_00722c90(piVar7);
    }
    **(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) = piVar3;
  }
  iVar1 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4);
  (*(int *)(gen_frame + 0x0)) = iVar1;
  if (*(int * PTR32 *)(iVar1 + 8) == piVar6) {
    if (*(char *)((int)piVar7 + 0x89) == '\0') {
      uVar4 = F_00722c60(piVar7);
      *(uint *)((*(int *)(gen_frame + 0x0)) + 8) = uVar4;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar5;
    }
  }
LAB_0075929f: ;
  if ((char)(*(int * PTR32 *)(gen_frame + 0x4))[0x22] == '\x01') {
    this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) + 4)))) {
      do {
        piVar6 = piVar5;
        if ((char)piVar7[0x22] != '\x01') break;
        piVar5 = (int *)*piVar6;
        if (piVar7 == piVar5) {
          piVar5 = (int *)piVar6[2];
          if ((char)piVar5[0x22] == '\0') {
            *(undefined1 *)(piVar5 + 0x22) = 1;
            *(undefined1 *)(piVar6 + 0x22) = 0;
            F_0073c1b0(this_00,piVar6);
            piVar5 = (int *)piVar6[2];
            this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
          }
          if (*(char *)((int)piVar5 + 0x89) == '\0') {
            if ((*(char *)(*piVar5 + 0x88) != '\x01') || (*(char *)(piVar5[2] + 0x88) != '\x01')) {
              if (*(char *)(piVar5[2] + 0x88) == '\x01') {
                *(undefined1 *)(*piVar5 + 0x88) = 1;
                *(undefined1 *)(piVar5 + 0x22) = 0;
                F_007313f0(this_00,piVar5);
                piVar5 = (int *)piVar6[2];
                this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
              }
              *(char *)(piVar5 + 0x22) = (char)piVar6[0x22];
              *(undefined1 *)(piVar6 + 0x22) = 1;
              *(undefined1 *)(piVar5[2] + 0x88) = 1;
              F_0073c1b0(this_00,piVar6);
              break;
            }
LAB_007593ac: ;
            *(undefined1 *)(piVar5 + 0x22) = 0;
          }
        }
        else {
          if ((char)piVar5[0x22] == '\0') {
            *(undefined1 *)(piVar5 + 0x22) = 1;
            *(undefined1 *)(piVar6 + 0x22) = 0;
            F_007313f0(this_00,piVar6);
            piVar5 = (int *)*piVar6;
            this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
          }
          if (*(char *)((int)piVar5 + 0x89) == '\0') {
            if ((*(char *)(piVar5[2] + 0x88) == '\x01') && (*(char *)(*piVar5 + 0x88) == '\x01'))
            goto LAB_007593ac;
            if (*(char *)(*piVar5 + 0x88) == '\x01') {
              *(undefined1 *)(piVar5[2] + 0x88) = 1;
              *(undefined1 *)(piVar5 + 0x22) = 0;
              F_0073c1b0(this_00,piVar5);
              piVar5 = (int *)*piVar6;
              this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
            }
            *(char *)(piVar5 + 0x22) = (char)piVar6[0x22];
            *(undefined1 *)(piVar6 + 0x22) = 1;
            *(undefined1 *)(*piVar5 + 0x88) = 1;
            F_007313f0(this_00,piVar6);
            break;
          }
        }
        piVar5 = (int *)piVar6[1];
        piVar7 = piVar6;
      } while (piVar6 != *((int * PTR32 *)GEN_TOP((*(int *)((int)this_00 + 4) + 4))));
    }
    *(undefined1 *)(piVar7 + 0x22) = 1;
  }
  piVar6 = (*(int * PTR32 *)(gen_frame + 0x4));
  F_007496b0((*(int * PTR32 *)(gen_frame + 0x4)) + 0x1d,&(*(int *)(gen_frame + 0x0)),*(undefined4 *)(*(int * PTR32 *)(gen_frame + 0x4))[0x1e],(undefined4 *)(*(int * PTR32 *)(gen_frame + 0x4))[0x1e]);
  F_00429760(piVar6[0x1e],0x18,800);
  F_00429760(piVar6,0x90,800);
  if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 8) != 0) {
    *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 8) = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 8) + -1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00759470 */
uint F_00759470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x759470u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  undefined * this_00;
  int * piVar6;
  int * piVar7;
  
  piVar6 = (*(int * PTR32 *)&gen_args[2]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x21))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  (*(int * PTR32 *)(gen_frame + 0x4)) = (*(int * PTR32 *)&gen_args[2]);
  F_007237a0(&(*(int * PTR32 *)&gen_args[2]));
  piVar5 = (int *)*piVar6;
  if (*(char *)((int)piVar5 + 0x21) == '\0') {
    piVar7 = piVar5;
    if ((*(char *)(piVar6[2] + 0x21) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar6)) {
      piVar5[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar6;
      piVar5 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar6[2]) {
        piVar5 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0x21) == '\0') {
          piVar7[1] = (int)piVar5;
        }
        *piVar5 = (int)piVar7;
        (*(int * PTR32 *)&gen_args[2])[2] = piVar6[2];
        *(int * PTR32 *)(piVar6[2] + 4) = (*(int * PTR32 *)&gen_args[2]);
      }
      if (*((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) + 4))) == piVar6) {
        *((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) + 4))) = (*(int * PTR32 *)&gen_args[2]);
      }
      else {
        puVar2 = (undefined4 *)piVar6[1];
        if ((int *)*puVar2 == piVar6) {
          *puVar2 = (*(int * PTR32 *)&gen_args[2]);
        }
        else {
          puVar2[2] = (*(int * PTR32 *)&gen_args[2]);
        }
      }
      (*(int * PTR32 *)&gen_args[2])[1] = piVar6[1];
      iVar1 = (*(int * PTR32 *)&gen_args[2])[8];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 8))) = (char)piVar6[8];
      *(char *)(piVar6 + 8) = (char)iVar1;
      goto LAB_0075958a;
    }
  }
  else {
    piVar7 = (int *)piVar6[2];
  }
  piVar5 = (int *)piVar6[1];
  if (*(char *)((int)piVar7 + 0x21) == '\0') {
    piVar7[1] = (int)piVar5;
  }
  if (*((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) + 4))) == piVar6) {
    *((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) + 4))) = piVar7;
  }
  else if ((int *)*piVar5 == piVar6) {
    *piVar5 = (int)piVar7;
  }
  else {
    piVar5[2] = (int)piVar7;
  }
  if (((int *)GEN_TOP(**(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4))) == piVar6) {
    piVar3 = piVar5;
    if (*(char *)((int)piVar7 + 0x21) == '\0') {
      piVar3 = (int *)F_00722dc0(piVar7);
    }
    **(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) = piVar3;
  }
  iVar1 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4);
  (*(int *)(gen_frame + 0x0)) = iVar1;
  if (*(int * PTR32 *)(iVar1 + 8) == piVar6) {
    if (*(char *)((int)piVar7 + 0x21) == '\0') {
      uVar4 = F_00722da0(piVar7);
      *(uint *)((*(int *)(gen_frame + 0x0)) + 8) = uVar4;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar5;
    }
  }
LAB_0075958a: ;
  if ((char)(*(int * PTR32 *)(gen_frame + 0x4))[8] == '\x01') {
    this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) + 4)))) {
      do {
        piVar6 = piVar5;
        if ((char)piVar7[8] != '\x01') break;
        piVar5 = (int *)*piVar6;
        if (piVar7 == piVar5) {
          piVar5 = (int *)piVar6[2];
          if ((char)piVar5[8] == '\0') {
            *(undefined1 *)(piVar5 + 8) = 1;
            *(undefined1 *)(piVar6 + 8) = 0;
            F_0073c2d0(this_00,piVar6);
            piVar5 = (int *)piVar6[2];
            this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
          }
          if (*(char *)((int)piVar5 + 0x21) == '\0') {
            if ((*(char *)(*piVar5 + 0x20) != '\x01') || (*(char *)(piVar5[2] + 0x20) != '\x01')) {
              if (*(char *)(piVar5[2] + 0x20) == '\x01') {
                *(undefined1 *)(*piVar5 + 0x20) = 1;
                *(undefined1 *)(piVar5 + 8) = 0;
                F_00731500(this_00,piVar5);
                piVar5 = (int *)piVar6[2];
                this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
              }
              *(char *)(piVar5 + 8) = (char)piVar6[8];
              *(undefined1 *)(piVar6 + 8) = 1;
              *(undefined1 *)(piVar5[2] + 0x20) = 1;
              F_0073c2d0(this_00,piVar6);
              break;
            }
LAB_00759648: ;
            *(undefined1 *)(piVar5 + 8) = 0;
          }
        }
        else {
          if ((char)piVar5[8] == '\0') {
            *(undefined1 *)(piVar5 + 8) = 1;
            *(undefined1 *)(piVar6 + 8) = 0;
            F_00731500(this_00,piVar6);
            piVar5 = (int *)*piVar6;
            this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
          }
          if (*(char *)((int)piVar5 + 0x21) == '\0') {
            if ((*(char *)(piVar5[2] + 0x20) == '\x01') && (*(char *)(*piVar5 + 0x20) == '\x01'))
            goto LAB_00759648;
            if (*(char *)(*piVar5 + 0x20) == '\x01') {
              *(undefined1 *)(piVar5[2] + 0x20) = 1;
              *(undefined1 *)(piVar5 + 8) = 0;
              F_0073c2d0(this_00,piVar5);
              piVar5 = (int *)*piVar6;
              this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
            }
            *(char *)(piVar5 + 8) = (char)piVar6[8];
            *(undefined1 *)(piVar6 + 8) = 1;
            *(undefined1 *)(*piVar5 + 0x20) = 1;
            F_00731500(this_00,piVar6);
            break;
          }
        }
        piVar5 = (int *)piVar6[1];
        piVar7 = piVar6;
      } while (piVar6 != *((int * PTR32 *)GEN_TOP((*(int *)((int)this_00 + 4) + 4))));
    }
    *(undefined1 *)(piVar7 + 8) = 1;
  }
  piVar6 = (*(int * PTR32 *)(gen_frame + 0x4));
  F_0074a1e0((*(int * PTR32 *)(gen_frame + 0x4)) + 4,&(*(int *)(gen_frame + 0x0)),*(undefined4 *)(*(int * PTR32 *)(gen_frame + 0x4))[5],(undefined4 *)(*(int * PTR32 *)(gen_frame + 0x4))[5]);
  F_00429760(piVar6[5],0x28,800);
  F_00429760(piVar6,0x24,800);
  if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 8) != 0) {
    *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 8) = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 8) + -1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_007596f0 */
unsigned int F_007596f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7596f0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x21)));
  piVar3 = (*(int * PTR32 *)&gen_args[1]);
  while (cVar1 == '\0') {
    F_007596f0((*(undefined * PTR32 *)&gen_args[0]),(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_0074a1e0(piVar3 + 4,&(*(int * PTR32 *)&gen_args[1]),*(undefined4 *)piVar3[5],(undefined4 *)piVar3[5]);
    F_00429760(piVar3[5],0x28,800);
    F_00429760(piVar3,0x24,800);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x21);
  }
  return 0;
}

/* ref: FUN_00759760 */
uint F_00759760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x759760u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * this_00;
  
  this_00 = (undefined4 *)((int)this + 4);
  *(undefined1 *)this = *param_1;
  *this_00 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (this_00 != param_2) {
    F_00752390(this_00);
    *this_00 = *param_2;
    *(undefined4 *)((int)this + 8) = param_2[1];
    *(undefined4 *)((int)this + 0xc) = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  return (uint)this;
}

/* ref: FUN_007597b0 */
unsigned int F_007597b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7597b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * this;
  
  for (this = param_1; this != param_2; this = (undefined *)((int)this + 0x10)) {
    F_00750930(this);
  }
  return 0;
}

/* ref: FUN_007597e0 */
uint F_007597e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7597e0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  int * piVar7;
  
  piVar3 = (*(int * PTR32 *)&gen_args[2]);
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x21))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  F_00732f60(&(*(int * PTR32 *)&gen_args[2]));
  piVar6 = (int *)*piVar3;
  if (*(char *)((int)piVar6 + 0x21) == '\0') {
    piVar7 = piVar6;
    if ((*(char *)(piVar3[2] + 0x21) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar3[2]) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0x21) == '\0') {
          piVar7[1] = (int)piVar6;
        }
        *piVar6 = (int)piVar7;
        (*(int * PTR32 *)&gen_args[2])[2] = piVar3[2];
        *(int * PTR32 *)(piVar3[2] + 4) = (*(int * PTR32 *)&gen_args[2]);
      }
      if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) == piVar3) {
        *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = (*(int * PTR32 *)&gen_args[2]);
      }
      else {
        puVar2 = (undefined4 *)piVar3[1];
        if ((int *)*puVar2 == piVar3) {
          *puVar2 = (*(int * PTR32 *)&gen_args[2]);
        }
        else {
          puVar2[2] = (*(int * PTR32 *)&gen_args[2]);
        }
      }
      (*(int * PTR32 *)&gen_args[2])[1] = piVar3[1];
      iVar1 = (*(int * PTR32 *)&gen_args[2])[8];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 8))) = (char)piVar3[8];
      *(char *)(piVar3 + 8) = (char)iVar1;
      goto LAB_007598fa;
    }
  }
  else {
    piVar7 = (int *)piVar3[2];
  }
  piVar6 = (int *)piVar3[1];
  if (*(char *)((int)piVar7 + 0x21) == '\0') {
    piVar7[1] = (int)piVar6;
  }
  if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) == piVar3) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = piVar7;
  }
  else if ((int *)*piVar6 == piVar3) {
    *piVar6 = (int)piVar7;
  }
  else {
    piVar6[2] = (int)piVar7;
  }
  if (((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))) == piVar3) {
    piVar4 = piVar6;
    if (*(char *)((int)piVar7 + 0x21) == '\0') {
      piVar4 = (int *)F_00726550(piVar7);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0x21) == '\0') {
      uVar5 = F_00726c20(piVar7);
      *(uint *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar6;
    }
  }
LAB_007598fa: ;
  if ((char)piVar3[8] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[8] != '\x01') break;
        piVar6 = (int *)*piVar4;
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar4[2];
          if ((char)piVar6[8] == '\0') {
            *(undefined1 *)(piVar6 + 8) = 1;
            *(undefined1 *)(piVar4 + 8) = 0;
            F_00733f90((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0x21) == '\0') {
            if ((*(char *)(*piVar6 + 0x20) != '\x01') || (*(char *)(piVar6[2] + 0x20) != '\x01')) {
              if (*(char *)(piVar6[2] + 0x20) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x20) = 1;
                *(undefined1 *)(piVar6 + 8) = 0;
                F_00733ff0((*(undefined * PTR32 *)&gen_args[0]),piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 8) = (char)piVar4[8];
              *(undefined1 *)(piVar4 + 8) = 1;
              *(undefined1 *)(piVar6[2] + 0x20) = 1;
              F_00733f90((*(undefined * PTR32 *)&gen_args[0]),piVar4);
              break;
            }
LAB_007599b8: ;
            *(undefined1 *)(piVar6 + 8) = 0;
          }
        }
        else {
          if ((char)piVar6[8] == '\0') {
            *(undefined1 *)(piVar6 + 8) = 1;
            *(undefined1 *)(piVar4 + 8) = 0;
            F_00733ff0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0x21) == '\0') {
            if ((*(char *)(piVar6[2] + 0x20) == '\x01') && (*(char *)(*piVar6 + 0x20) == '\x01'))
            goto LAB_007599b8;
            if (*(char *)(*piVar6 + 0x20) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x20) = 1;
              *(undefined1 *)(piVar6 + 8) = 0;
              F_00733f90((*(undefined * PTR32 *)&gen_args[0]),piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 8) = (char)piVar4[8];
            *(undefined1 *)(piVar4 + 8) = 1;
            *(undefined1 *)(*piVar6 + 0x20) = 1;
            F_00733ff0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 8) = 1;
  }
  F_00752390(piVar3 + 4);
  F_00429760(piVar3,0x24,800);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + -1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00759a40 */
unsigned int F_00759a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x759a40u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x89)));
  piVar3 = (*(int * PTR32 *)&gen_args[1]);
  while (cVar1 == '\0') {
    F_00759a40((*(undefined * PTR32 *)&gen_args[0]),(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_007496b0(piVar3 + 0x1d,&(*(int * PTR32 *)&gen_args[1]),*(undefined4 *)piVar3[0x1e],(undefined4 *)piVar3[0x1e]);
    F_00429760(piVar3[0x1e],0x18,800);
    F_00429760(piVar3,0x90,800);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x89);
  }
  return 0;
}

/* ref: FUN_00759ab0 */
unsigned int F_00759ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x759ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int iVar3;
  int * piVar4;
  int iVar5;
  
  cVar1 = *(char *)((int)param_1 + 0x21);
  piVar4 = param_1;
  while (cVar1 == '\0') {
    F_00759ab0(this,(int *)piVar4[2]);
    iVar5 = piVar4[4];
    piVar2 = (int *)*piVar4;
    if (iVar5 != 0) {
      iVar3 = piVar4[5];
      for (; iVar5 != iVar3; iVar5 = iVar5 + 0x140) {
        F_0042c880((undefined *)(iVar5 + 0x1c));
      }
      F_00429760(piVar4[4],((piVar4[6] - piVar4[4]) / 0x140) * 0x140,800);
    }
    piVar4[4] = 0;
    piVar4[5] = 0;
    piVar4[6] = 0;
    F_00429760(piVar4,0x24,800);
    piVar4 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x21);
  }
  return 0;
}

/* ref: FUN_00759b70 */
uint F_00759b70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x759b70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *param_1 = *param_2;
  F_00757150(param_1 + 2,param_3);
  return (uint)param_1;
}

/* ref: FUN_00759b90 */
uint F_00759b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x759b90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * this;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_00754bb0(((undefined1 *)(gen_frame + 0xc)),param_3);
  this = (undefined4 *)(param_1 + 4);
  *param_1 = *param_2;
  *this = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (this != puVar1) {
    F_00752390(this);
    *this = *puVar1;
    *(undefined4 *)(param_1 + 8) = puVar1[1];
    *(undefined4 *)(param_1 + 0xc) = puVar1[2];
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
  }
  F_00752390(((undefined1 *)(gen_frame + 0xc)));
  return (uint)param_1;
}

/* ref: FUN_00759c00 */
uint F_00759c00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x759c00u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  if (*(char *)((int)puVar2[1] + 0x21) == '\0') {
    puVar1 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar1;
      if ((char)(*(undefined4 * PTR32 *)&gen_args[3]) == '\0') {
        bVar3 = *(byte *)((*(int *)&gen_args[2]) + 0xc) < *(byte *)(puVar2 + 3);
      }
      else {
        bVar3 = *(byte *)((*(int *)&gen_args[2]) + 0xc) <= *(byte *)(puVar2 + 3);
      }
      (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar3);
      if (bVar3 == false) {
        puVar1 = (undefined4 *)puVar2[2];
      }
      else {
        puVar1 = (undefined4 *)*puVar2;
      }
    } while (*(char *)((int)puVar1 + 0x21) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = puVar2;
  if (bVar3 != false) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      puVar2 = (undefined4 *)F_00758700((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar2,(*(int *)&gen_args[2]));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_00728aa0(&(*(undefined4 * PTR32 *)&gen_args[3]));
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[3]);
  if (*((byte *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[3]) + 3))) < *(byte *)((*(int *)&gen_args[2]) + 0xc)) {
    puVar2 = (undefined4 *)F_00758700((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),(*(undefined4 *)(gen_frame + 0x8)),puVar2,(*(int *)&gen_args[2]));
    *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  F_00752390((undefined *)((*(int *)&gen_args[2]) + 0x10));
  F_00429760((*(int *)&gen_args[2]),0x24,800);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00759cf0 */
uint F_00759cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x759cf0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00758700((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),1,piVar1,(*(int * PTR32 *)&gen_args[3]));
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  if ((*(int * PTR32 *)&gen_args[2]) == (int *)*piVar1) {
    if (*((byte *)GEN_TOP(((*(int * PTR32 *)&gen_args[3]) + 3))) < *((byte *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 3)))) {
      F_00758700((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),1,(*(int * PTR32 *)&gen_args[2]),(*(int * PTR32 *)&gen_args[3]));
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
  }
  else if ((*(int * PTR32 *)&gen_args[2]) == piVar1) {
    if (*(byte *)(piVar1[2] + 0xc) < *((byte *)GEN_TOP(((*(int * PTR32 *)&gen_args[3]) + 3)))) {
      F_00758700((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),0,piVar1[2],(*(int * PTR32 *)&gen_args[3]));
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
  }
  else {
    if (*((byte *)GEN_TOP(((*(int * PTR32 *)&gen_args[3]) + 3))) < *((byte *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 3)))) {
      (*(int * PTR32 *)&gen_args[3]) = (*(int * PTR32 *)&gen_args[2]);
      F_00728aa0(&(*(int * PTR32 *)&gen_args[3]));
      if (*((byte *)GEN_TOP(((*(int * PTR32 *)&gen_args[3]) + 3))) < *(byte *)(piVar2 + 3)) {
        if (*((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[3])[2] + 0x21))) != '\0') {
          F_00758700((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),0,(*(int * PTR32 *)&gen_args[3]),piVar2);
          return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
        }
        F_00758700((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),1,(*(int * PTR32 *)&gen_args[2]),piVar2);
        return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
      }
    }
    if (*((byte *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 3))) < *(byte *)(piVar2 + 3)) {
      (*(int * PTR32 *)&gen_args[3]) = (*(int * PTR32 *)&gen_args[2]);
      F_00732f60(&(*(int * PTR32 *)&gen_args[3]));
      if (((*(int * PTR32 *)&gen_args[3]) == *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))) || (*(byte *)(piVar2 + 3) < *((byte *)GEN_TOP(((*(int * PTR32 *)&gen_args[3]) + 3)))))
      {
        if (*((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2])[2] + 0x21))) != '\0') {
          F_00758700((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),0,(*(int * PTR32 *)&gen_args[2]),piVar2);
          return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
        }
        F_00758700((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),1,(*(int * PTR32 *)&gen_args[3]),piVar2);
        return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
      }
    }
  }
  puVar3 = (undefined4 *)F_00759c00((*(undefined * PTR32 *)&gen_args[0]),((undefined1 *)(gen_frame + 0x4)),piVar2,0);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar3;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00759e50 */
uint F_00759e50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x759e50u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  bool bVar6;
  
  puVar5 = ((undefined4 *)GEN_TOP((*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))[1]));
  cVar1 = *(char *)((int)puVar5 + 0x21);
  bVar6 = true;
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),1);
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  uVar3 = (*(undefined4 *)(gen_frame + 0x8));
  while (cVar1 == '\0') {
    if ((char)(*(undefined4 * PTR32 *)&gen_args[3]) == '\0') {
      bVar6 = *(byte *)((*(int *)&gen_args[2]) + 0xc) < *(byte *)(puVar5 + 3);
    }
    else {
      bVar6 = *(byte *)((*(int *)&gen_args[2]) + 0xc) <= *(byte *)(puVar5 + 3);
    }
    gen_piece_set(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((undefined3)((uint)uVar3 >> 8)));
    (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar6);
    if (bVar6 == false) {
      puVar4 = (undefined4 *)puVar5[2];
    }
    else {
      puVar4 = (undefined4 *)*puVar5;
    }
    puVar2 = puVar5;
    puVar5 = puVar4;
    uVar3 = (*(undefined4 *)(gen_frame + 0x8));
    cVar1 = *(char *)((int)puVar4 + 0x21);
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = puVar2;
  if (bVar6 != false) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      puVar5 = (undefined4 *)F_007584b0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar2,(*(int *)&gen_args[2]));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar5;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_00728a30(&(*(undefined4 * PTR32 *)&gen_args[3]));
  }
  puVar5 = (*(undefined4 * PTR32 *)&gen_args[3]);
  if (*((byte *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[3]) + 3))) < *(byte *)((*(int *)&gen_args[2]) + 0xc)) {
    puVar5 = (undefined4 *)F_007584b0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),uVar3,puVar2,(*(int *)&gen_args[2]));
    *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar5;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  F_0074a1e0((undefined *)((*(int *)&gen_args[2]) + 0x10),&(*(undefined4 * PTR32 *)&gen_args[3]),**(undefined4 * PTR32 *)((*(int *)&gen_args[2]) + 0x14),
               *(undefined4 * PTR32 *)((*(int *)&gen_args[2]) + 0x14));
  F_00429760(*(undefined4 *)((*(int *)&gen_args[2]) + 0x14),0x28,800);
  F_00429760((*(int *)&gen_args[2]),0x24,800);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar5;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00759f60 */
uint F_00759f60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x759f60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x24,0,800);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 8) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    *(undefined1 *)(puVar1 + 3) = *param_1;
    F_00754bb0(puVar1 + 4,param_1 + 4);
  }
  return (uint)puVar1;
}

/* ref: FUN_00759fc0 */
uint F_00759fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x759fc0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  gen_piece_set(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((undefined3)((uint)(*(undefined * PTR32 *)&gen_args[0]) >> 8)));
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),1);
  if (*(char *)((int)puVar2[1] + 0x89) == '\0') {
    puVar1 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar1;
      if ((char)(*(undefined4 *)&gen_args[3]) == '\0') {
        bVar3 = *(uint *)((*(int *)&gen_args[2]) + 0x10) < (uint)puVar2[4];
      }
      else {
        bVar3 = *(uint *)((*(int *)&gen_args[2]) + 0x10) <= (uint)puVar2[4];
      }
      (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar3);
      if (bVar3 == false) {
        puVar1 = (undefined4 *)puVar2[2];
      }
      else {
        puVar1 = (undefined4 *)*puVar2;
      }
    } while (*(char *)((int)puVar1 + 0x89) == '\0');
  }
  puVar2 = (undefined4 *)F_007589a0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)&gen_args[3]),(*(undefined4 *)(gen_frame + 0x8)),puVar2,(*(int *)&gen_args[2]));
  *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_0075a040 */
uint F_0075a040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75a040u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  undefined1 uVar2;
  uint uVar3;
  
  puVar1 = (undefined4 *)(param_3 + 4);
  uVar2 = *param_3;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  if (&(*(undefined4 *)(gen_frame + 0xc)) != puVar1) {
    F_00752390(&(*(undefined4 *)(gen_frame + 0xc)));
    (*(undefined4 *)(gen_frame + 0xc)) = *puVar1;
    (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(param_3 + 8);
    (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(param_3 + 0xc);
    *puVar1 = 0;
    *(undefined4 *)(param_3 + 8) = 0;
    *(undefined4 *)(param_3 + 0xc) = 0;
  }
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = uVar2;
    F_00754bb0(param_2 + 4,&(*(undefined4 *)(gen_frame + 0xc)));
  }
  uVar3 = F_00752390(&(*(undefined4 *)(gen_frame + 0xc)));
  return uVar3;
}

/* ref: FUN_0075a0b0 */
uint F_0075a0b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75a0b0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined1 uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar1 = *(*(undefined1 * PTR32 *)&gen_args[2]);
  F_0074a520(((undefined1 *)(gen_frame + 0xc)),(*(undefined1 * PTR32 *)&gen_args[2]) + 4);
  if ((*(undefined1 * PTR32 *)&gen_args[1]) != (undefined1 *)0x0) {
    *(*(undefined1 * PTR32 *)&gen_args[1]) = uVar1;
    *((undefined4 *)GEN_TOP(((*(undefined1 * PTR32 *)&gen_args[1]) + 0xc))) = 0;
    uVar2 = F_004296a0(0x28,0,800);
    *((uint *)GEN_TOP(((*(undefined1 * PTR32 *)&gen_args[1]) + 8))) = uVar2;
    *(uint *)uVar2 = uVar2;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((*(undefined1 * PTR32 *)&gen_args[1]) + 8))) + 4))) = *((int *)GEN_TOP(((*(undefined1 * PTR32 *)&gen_args[1]) + 8)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((*(undefined1 * PTR32 *)&gen_args[1]) + 8))) + 8))) = *((int *)GEN_TOP(((*(undefined1 * PTR32 *)&gen_args[1]) + 8)));
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined1 * PTR32 *)&gen_args[1]) + 8))) + 0x24))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined1 * PTR32 *)&gen_args[1]) + 8))) + 0x25))) = 1;
    F_00750b30((*(undefined1 * PTR32 *)&gen_args[1]) + 4,((undefined1 *)(gen_frame + 0xc)));
  }
  F_0074a1e0(((undefined1 *)(gen_frame + 0xc)),&(*(undefined1 * PTR32 *)&gen_args[2]),*(*(undefined4 * PTR32 *)(gen_frame + 0x10)),(*(undefined4 * PTR32 *)(gen_frame + 0x10)));
  uVar3 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x10)),0x28,800);
  return (uint)uVar3;
}

/* ref: FUN_0075a150 */
unsigned int F_0075a150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75a150u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_00758c40(param_2,param_3);
  return 0;
}

/* ref: FUN_0075a170 */
uint F_0075a170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75a170u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  ulonglong uVar1;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  (*(undefined4 *)(gen_frame + 0x10)) = *param_3;
  F_00757150(((undefined1 *)(gen_frame + 0x18)),param_3 + 2);
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = (*(undefined4 *)(gen_frame + 0x10));
    F_00757150(param_2 + 2,((undefined1 *)(gen_frame + 0x18)));
  }
  F_007496b0(((undefined1 *)(gen_frame + 0x74)),((undefined1 *)(gen_frame + 0xc)),*(*(undefined4 * PTR32 *)(gen_frame + 0x78)),(*(undefined4 * PTR32 *)(gen_frame + 0x78)));
  uVar1 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x78)),0x18,800);
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return (uint)uVar1;
}

/* ref: Client::Game::Event::ModuleBase::vf0 */
uint F_0075a1f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75a1f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10ba978));
  F_00757fb0(this + 8);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::LuaActorModule::vf0 */
uint F_0075a220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75a220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10ba994));
  F_00744fa0(this + 0x2c,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)(this + 0x30),*(undefined4 * PTR32 *)(this + 0x30));
  F_00429760(*(undefined4 *)(this + 0x30),0x28,0x322);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10ba978));
  F_00757fb0(this + 8);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::LuaEventHandler::vf0 */
uint F_0075a280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75a280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_006fd580(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::AetheryteEventHandler::vf0 */
uint F_0075a2b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75a2b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_006fd840(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::CompanyLeveOfficerEventHandler::vf0 */
uint F_0075a2e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75a2e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[145])REFP(0x10bae44));
  F_006fd580(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::CustomTalkEventHandler::vf0 */
uint F_0075a310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75a310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_006fdd70(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::CraftLeveClientEventHandler::vf0 */
uint F_0075a340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75a340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_006fe160(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::WarpEventHandler::vf0 */
uint F_0075a370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75a370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_006fe4f0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::StoryEventHandler::vf0 */
uint F_0075a3a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75a3a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_006fe690(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::EventHandlerModule::vf0 */
uint F_0075a3d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75a3d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_006fe800(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::LeveDirector::vf145 */
byte F_0075a400(void)
{
  GEN_ENTER(0x75a400u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Game::Event::LeveDirector::vf158 */
unsigned int F_0075a410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75a410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::Game::Event::CompanyLeveDirector::vf149 */
uint F_0075a420(unsigned int gen_a0)
{
  GEN_ENTER(0x75a420u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x4f0;
}

/* ref: Client::Game::Event::CompanyLeveDirector::vf122 */
unsigned int F_0075a430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75a430u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00ba0c90(this + 0x4f0,param_1,param_2);
  return 0;
}

/* ref: Client::Game::Event::CompanyLeveDirector::vf123 */
uint F_0075a440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75a440u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00ba0ce0(this + 0x4f0,param_1,param_2);
  return uVar1;
}

/* ref: Client::Game::Event::CompanyLeveDirector::vf7 */
byte F_0075a450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75a450u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 1;
}

/* ref: Client::Game::Event::DirectorModule::vf0 */
uint F_0075a460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75a460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_006fe980(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::OpeningEventHandler::vf0 */
uint F_0075a490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75a490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_006feae0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::ExitRangeEventHandler::vf0 */
uint F_0075a4c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75a4c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[145])REFP(0x10bbc3c));
  F_006fd580(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::ChocoboTaxiStandEventHandler::vf0 */
uint F_0075a4f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75a4f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[145])REFP(0x10bbe84));
  F_0042c880(this + 0x1d8);
  F_006fd580(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::Director::vf0 */
uint F_0075a530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75a530u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 in_edi = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  F_006fed10(in_ecx,in_edi);
  if ((param_3 & 1) != 0) {
    F_00406ad0(in_ecx);
  }
  return in_ecx;
}

/* ref: Client::Game::Event::QuestBattleDirector::vf0 */
uint F_0075a560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x75a560u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 in_edi = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  F_006feea0(in_ecx,in_edi);
  if ((param_3 & 1) != 0) {
    F_00406ad0(in_ecx);
  }
  return in_ecx;
}

/* ref: FUN_0075a590 */
uint F_0075a590(unsigned int gen_a0)
{
  GEN_ENTER(0x75a590u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_007596f0(this,*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar1 = *(uint *)((int)this + 4);
  *(uint *)(uVar1 + 8) = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_0075a5c0 */
uint F_0075a5c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x75a5c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined * pvVar1;
  undefined * pvVar2;
  undefined * this_00;
  
  if (param_2 != param_3) {
    pvVar2 = (undefined *)F_00757950(param_3,*(undefined4 *)((int)this + 4),param_2,param_1);
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    for (this_00 = pvVar2; this_00 != pvVar1; this_00 = (undefined *)((int)this_00 + 0x10)) {
      F_00750930(this_00);
    }
    *(undefined * PTR32 *)((int)this + 4) = pvVar2;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_0075a630 */
uint F_0075a630(unsigned int gen_a0)
{
  GEN_ENTER(0x75a630u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)this;
  if (this_00 != (undefined *)0x0) {
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    for (; this_00 != pvVar1; this_00 = (undefined *)((int)this_00 + 0x10)) {
      F_00750930(this_00);
    }
    F_00429760(*(int *)this,*(int *)((int)this + 8) - *(int *)this & 0xfffffff0,800);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_0075a680 */
unsigned int F_0075a680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75a680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  undefined * this_00;
  uint uVar3;
  
  if ((uint)(*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 4) < param_1) {
    uVar2 = F_004296a0(param_1 * 0x10,0,800);
    F_00758430(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar2);
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    this_00 = *(undefined * PTR32 *)this;
    uVar3 = (int)pvVar1 - (int)this_00;
    if (this_00 != (undefined *)0x0) {
      for (; this_00 != pvVar1; this_00 = (undefined *)((int)this_00 + 0x10)) {
        F_00750930(this_00);
      }
      F_00429760(*(int *)this,*(int *)((int)this + 8) - *(int *)this & 0xfffffff0,800);
    }
    *(uint *)((int)this + 4) = (uVar3 & 0xfffffff0) + uVar2;
    *(uint *)((int)this + 8) = param_1 * 0x10 + uVar2;
    *(uint *)this = uVar2;
  }
  return 0;
}

/* ref: FUN_0075a740 */
uint F_0075a740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x75a740u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  piVar2 = *(int * PTR32 *)((int)this + 4);
  piVar3 = param_2;
  if ((param_2 == (int *)*piVar2) && (param_3 == piVar2)) {
    F_007596f0(this,piVar2[1]);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x21) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x21) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x21);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x21);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x21);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x21);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_00759470(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_0075a800 */
uint F_0075a800(unsigned int gen_a0)
{
  GEN_ENTER(0x75a800u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00759a40(this,*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar1 = *(uint *)((int)this + 4);
  *(uint *)(uVar1 + 8) = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_0075a830 */
uint F_0075a830(unsigned int gen_a0)
{
  GEN_ENTER(0x75a830u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00759ab0(this,*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar1 = *(uint *)((int)this + 4);
  *(uint *)(uVar1 + 8) = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_0075a860 */
uint F_0075a860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x75a860u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x24,0,800);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 8) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    *(undefined1 *)(puVar1 + 3) = *param_3;
    F_00754bb0(puVar1 + 4,param_3 + 4);
  }
  F_00759cf0(this,param_1,param_2,puVar1);
  return param_1;
}

/* ref: FUN_0075a8d0 */
uint F_0075a8d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x75a8d0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_007584b0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),1,piVar1,(*(int * PTR32 *)&gen_args[3]));
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  if ((*(int * PTR32 *)&gen_args[2]) == (int *)*piVar1) {
    if (*((byte *)GEN_TOP(((*(int * PTR32 *)&gen_args[3]) + 3))) < *((byte *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 3)))) {
      F_007584b0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),1,(*(int * PTR32 *)&gen_args[2]),(*(int * PTR32 *)&gen_args[3]));
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
  }
  else if ((*(int * PTR32 *)&gen_args[2]) == piVar1) {
    if (*(byte *)(piVar1[2] + 0xc) < *((byte *)GEN_TOP(((*(int * PTR32 *)&gen_args[3]) + 3)))) {
      F_007584b0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),0,piVar1[2],(*(int * PTR32 *)&gen_args[3]));
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
  }
  else {
    if (*((byte *)GEN_TOP(((*(int * PTR32 *)&gen_args[3]) + 3))) < *((byte *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 3)))) {
      (*(int * PTR32 *)&gen_args[3]) = (*(int * PTR32 *)&gen_args[2]);
      F_00728a30(&(*(int * PTR32 *)&gen_args[3]));
      if (*((byte *)GEN_TOP(((*(int * PTR32 *)&gen_args[3]) + 3))) < *(byte *)(piVar2 + 3)) {
        if (*((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[3])[2] + 0x21))) != '\0') {
          F_007584b0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),0,(*(int * PTR32 *)&gen_args[3]),piVar2);
          return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
        }
        F_007584b0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),1,(*(int * PTR32 *)&gen_args[2]),piVar2);
        return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
      }
    }
    if (*((byte *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 3))) < *(byte *)(piVar2 + 3)) {
      (*(int * PTR32 *)&gen_args[3]) = (*(int * PTR32 *)&gen_args[2]);
      F_007237a0(&(*(int * PTR32 *)&gen_args[3]));
      if (((*(int * PTR32 *)&gen_args[3]) == *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))) || (*(byte *)(piVar2 + 3) < *((byte *)GEN_TOP(((*(int * PTR32 *)&gen_args[3]) + 3)))))
      {
        if (*((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2])[2] + 0x21))) != '\0') {
          F_007584b0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),0,(*(int * PTR32 *)&gen_args[2]),piVar2);
          return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
        }
        F_007584b0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),1,(*(int * PTR32 *)&gen_args[3]),piVar2);
        return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
      }
    }
  }
  puVar3 = (undefined4 *)F_00759e50((*(undefined * PTR32 *)&gen_args[0]),((undefined1 *)(gen_frame + 0x4)),piVar2,0);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar3;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_0075aa30 */
uint F_0075aa30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75aa30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  undefined1 uVar2;
  undefined4 * puVar3;
  
  puVar3 = (undefined4 *)F_004296a0(0x24,0,800);
  *puVar3 = *(undefined4 *)((int)this + 4);
  puVar3[1] = *(undefined4 *)((int)this + 4);
  puVar1 = (undefined4 *)(param_1 + 4);
  puVar3[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar3 + 8) = 0;
  uVar2 = *param_1;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  if (&(*(undefined4 *)(gen_frame + 0xc)) != puVar1) {
    F_00752390(&(*(undefined4 *)(gen_frame + 0xc)));
    (*(undefined4 *)(gen_frame + 0xc)) = *puVar1;
    (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(param_1 + 8);
    (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(param_1 + 0xc);
    *puVar1 = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (puVar3 + 3 != (undefined4 *)0x0) {
    *(undefined1 *)(puVar3 + 3) = uVar2;
    F_00754bb0(puVar3 + 4,&(*(undefined4 *)(gen_frame + 0xc)));
  }
  F_00752390(&(*(undefined4 *)(gen_frame + 0xc)));
  return (uint)puVar3;
}

/* ref: FUN_0075aad0 */
uint F_0075aad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75aad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x24,0,800);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 8) = 0;
  F_0075a0b0((int)this + 0xd,puVar1 + 3,param_1);
  return (uint)puVar1;
}

/* ref: FUN_0075ab20 */
uint F_0075ab20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x75ab20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x24,0,800);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 8) = 0;
  F_00758c40(puVar1 + 3,param_1);
  return (uint)puVar1;
}

