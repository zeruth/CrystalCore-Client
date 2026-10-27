#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00e13200 */
uint F_00e13200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe13200u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,0x18);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 0x18)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
    puVar1[2] = param_2[2];
    puVar1[3] = param_2[3];
    puVar1[4] = param_2[4];
    puVar1[5] = param_2[5];
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00e13260 */
uint F_00e13260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe13260u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e132a0 */
uint F_00e132a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe132a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,0x10);
  }
  puVar2 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 4) * 0x10 + *(int *)this)));
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return iVar1 * 0x10 + *(int *)this;
}

/* ref: FUN_00e132f0 */
uint F_00e132f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe132f0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e13330 */
uint F_00e13330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe13330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 8)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  iVar2 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar2 + 1;
  return *(int *)this + iVar2 * 8;
}

/* ref: FUN_00e13380 */
uint F_00e13380(unsigned int gen_a0)
{
  GEN_ENTER(0xe13380u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e133c0 */
uint F_00e133c0(unsigned int gen_a0)
{
  GEN_ENTER(0xe133c0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e13400 */
uint F_00e13400(unsigned int gen_a0)
{
  GEN_ENTER(0xe13400u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e13440 */
uint F_00e13440(unsigned int gen_a0)
{
  GEN_ENTER(0xe13440u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e13480 */
uint F_00e13480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe13480u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e134c0 */
uint F_00e134c0(unsigned int gen_a0)
{
  GEN_ENTER(0xe134c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return *(int *)this + iVar1 * 8;
}

/* ref: FUN_00e134f0 */
uint F_00e134f0(unsigned int gen_a0)
{
  GEN_ENTER(0xe134f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return *(int *)this + iVar1 * 8;
}

/* ref: FUN_00e13520 */
uint F_00e13520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe13520u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00e124d0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))),param_1,param_2);
  return param_1;
}

/* ref: FUN_00e13540 */
uint F_00e13540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe13540u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined2 *)((int)this + 6) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x114de1c));
  *(int *)((int)this + 0xc) = param_1;
  F_00e124d0(*(undefined * PTR32 *)(param_1 + 8),(int)this + 0x10,param_2);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0x80000000;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0x80000000;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0x80000000;
  return (uint)this;
}

/* ref: hkDataClassDict::vf1 */
uint F_00e135a0(unsigned int gen_a0)
{
  GEN_ENTER(0xe135a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xc);
}

/* ref: hkDataClassDict::vf3 */
uint F_00e135b0(unsigned int gen_a0)
{
  GEN_ENTER(0xe135b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x14);
}

/* ref: hkDataClassDict::vf2 */
uint F_00e135e0(unsigned int gen_a0)
{
  GEN_ENTER(0xe135e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x10) + 8)));
}

/* ref: hkDataClassDict::vf6 */
uint F_00e135f0(unsigned int gen_a0)
{
  GEN_ENTER(0xe135f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x2c);
}

/* ref: hkDataClassDict::vf7 */
uint F_00e13600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe13600u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x28) + param_1 * 0x18)));
  *param_2 = *puVar1;
  param_2[1] = this;
  param_2[2] = puVar1[4];
  uVar2 = puVar1[5];
  param_2[3] = uVar2;
  return uVar2;
}

/* ref: hkDataClassDict::vf4 */
uint F_00e13630(unsigned int gen_a0)
{
  GEN_ENTER(0xe13630u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x18);
}

/* ref: hkDataClassDict::vf5 */
uint F_00e13640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe13640u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  int * piVar3;
  
  piVar3 = param_2;
  while( true ) {
    if (piVar3 == (int *)0x0) {
      *param_1 = 0;
      return (uint)param_1;
    }
    uVar1 = ((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3);
    if (uVar1 == 0) {
      uVar2 = 0;
    }
    else {
      this_00 = ((undefined *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 8))) + 0x50)));
      uVar2 = F_00da4190(this_00,uVar1,0);
      if (uVar2 == 0) {
        uVar2 = F_00da1210(uVar1);
        F_00da3a20(this_00,uVar2,uVar2);
      }
    }
    if (uVar2 == *((uint *)GEN_TOP((*(int *)(this + 0x10) + 8)))) break;
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3)));
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: hkDataClassDict::vf8 */
uint F_00e136d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe136d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint * puVar4;
  
  iVar1 = *((int *)GEN_TOP((*(int *)(this + 0xc) + 8)));
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = F_00da4190((undefined *)(iVar1 + 0x50),param_1,0);
    if (uVar2 == 0) {
      uVar2 = F_00da1210(param_1);
      F_00da3a20((undefined *)(iVar1 + 0x50),uVar2,uVar2);
    }
  }
  uVar3 = 0;
  if (0 < *(int *)(this + 0x2c)) {
    puVar4 = *(uint * PTR32 *)(this + 0x28);
    do {
      if (*puVar4 == uVar2) {
        return uVar3;
      }
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 6;
    } while ((int)uVar3 < *(int *)(this + 0x2c));
  }
  return 0xffffffff;
}

/* ref: hkDataClassDict::vf9 */
int F_00e13740(unsigned int gen_a0)
{
  GEN_ENTER(0xe13740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x2c);
  for (iVar1 = *(int *)(this + 0x18); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
    iVar2 = iVar2 + *(int *)(iVar1 + 0x2c);
  }
  return iVar2;
}

/* ref: hkDataClassDict::vf11 */
uint F_00e13760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe13760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint * puVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *((int *)GEN_TOP((*(int *)(this + 0xc) + 8)));
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00da4190((undefined *)(iVar4 + 0x50),param_1,0);
    if (uVar1 == 0) {
      uVar1 = F_00da1210(param_1);
      F_00da3a20((undefined *)(iVar4 + 0x50),uVar1,uVar1);
    }
  }
  do {
    iVar4 = 0;
    if (0 < *(int *)(this + 0x2c)) {
      puVar2 = *(uint * PTR32 *)(this + 0x28);
      do {
        if (*puVar2 == uVar1) {
          uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this);
          uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this);
          return uVar3 + (iVar4 - uVar1);
        }
        iVar4 = iVar4 + 1;
        puVar2 = puVar2 + 6;
      } while (iVar4 < *(int *)(this + 0x2c));
    }
    this = *(undefined * PTR32 *)(this + 0x18);
  } while (this != (undefined *)0x0);
  return 0xffffffff;
}

/* ref: hkDataClassDict::vf10 */
uint F_00e13800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe13800u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this);
  iVar3 = param_1 - uVar2;
  do {
    iVar3 = iVar3 + *(int *)(this + 0x2c);
    if (-1 < iVar3) {
      uVar1 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x28) + iVar3 * 0x18)));
      iVar3 = *(int *)(this + 0x28) + iVar3 * 0x18;
      param_2[1] = this;
      *param_2 = uVar1;
      param_2[2] = *(undefined4 *)(iVar3 + 0x10);
      uVar2 = *(uint *)(iVar3 + 0x14);
      param_2[3] = uVar2;
      return uVar2;
    }
    this = *(undefined * PTR32 *)(this + 0x18);
  } while (this != (undefined *)0x0);
  return uVar2;
}

/* ref: hkDataClassDict::vf12 */
unsigned int F_00e13850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe13850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined * phVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = param_1[1] * 0x10 + *param_1;
  for (phVar1 = this; phVar1 != (undefined *)0x0;
      phVar1 = *(undefined * PTR32 *)(phVar1 + 0x18)) {
    iVar4 = *(int *)(phVar1 + 0x2c);
    iVar5 = iVar5 + iVar4 * -0x10;
    if (0 < iVar4) {
      puVar3 = ((undefined4 *)GEN_TOP((*(int *)(phVar1 + 0x28) + 0x14)));
      puVar2 = (undefined4 *)(iVar5 + 8);
      do {
        puVar2[-2] = puVar3[-5];
        puVar2[-1] = this;
        *puVar2 = puVar3[-1];
        puVar2[1] = *puVar3;
        puVar2 = puVar2 + 4;
        puVar3 = puVar3 + 6;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return 0;
}

/* ref: FUN_00e138c0 */
uint F_00e138c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe138c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 0x2c) == (*(uint *)((int)this + 0x30) & 0x3fffffff)) {
    F_00d95710(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc))),(int *)((int)this + 0x28),0x18);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x28) + *(int *)((int)this + 0x2c) * 0x18)));
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[3] = 0;
    *puVar1 = param_1;
    puVar1[2] = 0;
    puVar1[4] = param_2;
    puVar1[5] = param_3;
  }
  *(int *)((int)this + 0x2c) = *(int *)((int)this + 0x2c) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00e13930 */
uint F_00e13930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe13930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  uint uVar4;
  int * piVar5;
  
  iVar2 = *(int *)((int)this + 0x2c) + -1;
  if (-1 < iVar2) {
    piVar5 = ((int *)GEN_TOP((*(int *)((int)this + 0x28) + iVar2 * 0x18)));
    do {
      if (*piVar5 == param_1) goto LAB_00e13954;
      piVar5 = piVar5 + -6;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  iVar2 = -1;
LAB_00e13954: ;
  *(int *)((int)this + 0x2c) = *(int *)((int)this + 0x2c) + -1;
  iVar1 = (*(int *)((int)this + 0x2c) - iVar2) * 0x18;
  puVar3 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x28) + iVar2 * 0x18)));
  if (0 < iVar1) {
    iVar2 = (iVar1 - 1U >> 3) + 1;
    do {
      *puVar3 = puVar3[6];
      puVar3[1] = puVar3[7];
      puVar3 = puVar3 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  uVar4 = F_00e11bf0(this,param_1);
  return (uint)(uVar4 != 0);
}

/* ref: FUN_00e139b0 */
uint F_00e139b0(unsigned int gen_a0)
{
  GEN_ENTER(0xe139b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  LPVOID pvVar3;
  uint uVar4;
  int local_8;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc)));
  *(undefined4 *)((int)this + 0x2c) = 0;
  if (-1 < (int)*(uint *)((int)this + 0x30)) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))
              (piVar1,*(undefined4 *)((int)this + 0x28),
               (*(uint *)((int)this + 0x30) & 0x3fffffff) * 0x18);
  }
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x30) = 0x80000000;
  local_8 = 0;
  if (0 < *(int *)((int)this + 0x20)) {
    do {
      iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0x1c) + local_8 * 4)));
      *(undefined4 *)(iVar2 + 8) = 0;
      if (-1 < *(int *)(iVar2 + 0xc)) {
        ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,*(undefined4 *)(iVar2 + 4),*(int *)(iVar2 + 0xc) * 8);
      }
      *(undefined4 *)(iVar2 + 4) = 0;
      *(undefined4 *)(iVar2 + 0xc) = 0x80000000;
      if (iVar2 != 0) {
        pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar3 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar3 + 0x2c),iVar2,0x10);
      }
      local_8 = local_8 + 1;
    } while (local_8 < *(int *)((int)this + 0x20));
  }
  *(undefined4 *)((int)this + 0x20) = 0;
  if (-1 < *(int *)((int)this + 0x24)) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))
              (piVar1,*(undefined4 *)((int)this + 0x1c),*(int *)((int)this + 0x24) * 4);
  }
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0x80000000;
  uVar4 = F_00d919e0(&REFG(undefined * PTR32, 0x1354948));
  if (*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0) {
    uVar4 = F_00d91a80(*(undefined * PTR32 *)((int)this + 0x10));
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = &REFG(undefined * PTR32, 0x1354948);
  return uVar4;
}

/* ref: FUN_00e13ac0 */
uint F_00e13ac0(unsigned int gen_a0)
{
  GEN_ENTER(0xe13ac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  int local_c;
  int local_8;
  
  local_8 = 0;
  if (0 < *(int *)((int)this + 0x14)) {
    local_c = 0;
    do {
      piVar2 = ((int *)GEN_TOP((local_c + *(int *)((int)this + 0x10))));
      for (iVar1 = *(int *)((int)this + 0xc); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
        iVar3 = 0;
        if (0 < *(int *)(iVar1 + 0x2c)) {
          piVar5 = *(int * PTR32 *)(iVar1 + 0x28);
          do {
            if (*piVar5 == *piVar2) {
              iVar1 = *(int *)(iVar1 + 0x28) + iVar3 * 0x18;
              if (iVar1 != 0) {
                F_00e0ceb0(*(undefined4 *)(iVar1 + 0x10),piVar2 + 2,1,0);
              }
              goto LAB_00e13b39;
            }
            iVar3 = iVar3 + 1;
            piVar5 = piVar5 + 6;
          } while (iVar3 < *(int *)(iVar1 + 0x2c));
        }
      }
LAB_00e13b39: ;
      local_8 = local_8 + 1;
      local_c = local_c + 0x10;
    } while (local_8 < *(int *)((int)this + 0x14));
  }
  uVar4 = *(uint *)((int)this + 0x18);
  piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc))) + 0xc)));
  *(undefined4 *)((int)this + 0x14) = 0;
  if ((uVar4 & 0x80000000) == 0) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2,*(undefined4 *)((int)this + 0x10),uVar4 << 4);
  }
  *(undefined4 *)((int)this + 0x18) = 0x80000000;
  *(undefined4 *)((int)this + 0x10) = 0;
  return uVar4;
}

/* ref: hkDataObjectDict::vf28 */
uint F_00e13b90(unsigned int gen_a0)
{
  GEN_ENTER(0xe13b90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  int local_c;
  int local_8;
  
  local_8 = 0;
  if (0 < *(int *)(this + 0x14)) {
    local_c = 0;
    do {
      for (iVar1 = *(int *)(this + 0xc); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
        iVar2 = 0;
        if (0 < *(int *)(iVar1 + 0x2c)) {
          piVar4 = *(int * PTR32 *)(iVar1 + 0x28);
          do {
            if (*piVar4 == *((int *)GEN_TOP((local_c + *(int *)(this + 0x10))))) {
              iVar1 = *(int *)(iVar1 + 0x28) + iVar2 * 0x18;
              if (iVar1 != 0) {
                F_00e0ceb0(*(undefined4 *)(iVar1 + 0x10),
                             ((int *)GEN_TOP((local_c + *(int *)(this + 0x10)))) + 2,1,1);
              }
              goto LAB_00e13c09;
            }
            iVar2 = iVar2 + 1;
            piVar4 = piVar4 + 6;
          } while (iVar2 < *(int *)(iVar1 + 0x2c));
        }
      }
LAB_00e13c09: ;
      local_8 = local_8 + 1;
      local_c = local_c + 0x10;
    } while (local_8 < *(int *)(this + 0x14));
  }
  uVar3 = *(uint *)(this + 0x18);
  piVar4 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 0xc)));
  *(undefined4 *)(this + 0x14) = 0;
  if ((uVar3 & 0x80000000) == 0) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x10))(piVar4,*(undefined4 *)(this + 0x10),uVar3 << 4);
  }
  *(undefined4 *)(this + 0x18) = 0x80000000;
  *(undefined4 *)(this + 0x10) = 0;
  return uVar3;
}

/* ref: FUN_00e13c60 */
unsigned int F_00e13c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe13c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  int iVar5;
  
  iVar5 = 0;
  if (0 < *(int *)((int)this + 0x14)) {
    piVar1 = *(int * PTR32 *)((int)this + 0x10);
    while (*piVar1 != param_1) {
      iVar5 = iVar5 + 1;
      piVar1 = piVar1 + 4;
      if (*(int *)((int)this + 0x14) <= iVar5) {
        return 0;
      }
    }
    for (iVar3 = *(int *)((int)this + 0xc); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x18)) {
      iVar2 = 0;
      if (0 < *(int *)(iVar3 + 0x2c)) {
        piVar1 = *(int * PTR32 *)(iVar3 + 0x28);
        do {
          if (*piVar1 == *((int *)GEN_TOP((*(int *)((int)this + 0x10) + iVar5 * 0x10)))) {
            iVar3 = *(int *)(iVar3 + 0x28) + iVar2 * 0x18;
            if (iVar3 != 0) {
              F_00e0ceb0(*(undefined4 *)(iVar3 + 0x10),
                           *(int *)((int)this + 0x10) + 8 + iVar5 * 0x10,1,0);
            }
            goto LAB_00e13d09;
          }
          iVar2 = iVar2 + 1;
          piVar1 = piVar1 + 6;
        } while (iVar2 < *(int *)(iVar3 + 0x2c));
      }
    }
LAB_00e13d09: ;
    iVar3 = *(int *)((int)this + 0x14) + -1;
    *(int *)((int)this + 0x14) = iVar3;
    if (iVar3 != iVar5) {
      puVar4 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + iVar5 * 0x10)));
      iVar5 = (*(int *)((int)this + 0x10) + iVar3 * 0x10) - (int)puVar4;
      iVar3 = 2;
      do {
        *puVar4 = *(undefined4 *)(iVar5 + (int)puVar4);
        puVar4[1] = *(undefined4 *)(iVar5 + 4 + (int)puVar4);
        puVar4 = puVar4 + 2;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return 0;
}

/* ref: FUN_00e13d50 */
uint F_00e13d50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe13d50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  int iVar4;
  
  iVar1 = *(int *)((int)this + 0x14);
  iVar4 = 0;
  if (0 < iVar1) {
    piVar3 = *(int * PTR32 *)((int)this + 0x10);
    do {
      if (*piVar3 == *param_2) {
        F_00e0ceb0(param_2[4],*(int *)((int)this + 0x10) + 8 + iVar4 * 0x10,1,0);
        param_1[1] = iVar4;
        *param_1 = param_2;
        return (uint)param_1;
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 4;
    } while (iVar4 < iVar1);
  }
  piVar3 = (int *)((int)this + 0x10);
  if (*(uint *)((int)this + 0x14) == (*(uint *)((int)this + 0x18) & 0x3fffffff)) {
    F_00d95710(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc))) + 0xc))),piVar3,0x10);
  }
  puVar2 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x14) * 0x10 + *piVar3)));
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
  }
  piVar3 = ((int *)GEN_TOP((*(int *)((int)this + 0x14) * 0x10 + *piVar3)));
  *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + 1;
  *piVar3 = *param_2;
  piVar3[2] = 0;
  piVar3[3] = 0;
  param_1[1] = iVar1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: hkDataObjectDict::vf23 */
uint F_00e13e00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe13e00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_2 != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  F_00e13d50(this,((undefined1 *)(gen_frame + 0x4)),param_1,6);
  uVar1 = *(uint *)(this + 0x10);
  *(int *)(uVar1 + 8 + (*(int *)(gen_frame + 0x8)) * 0x10) = param_2;
  return uVar1;
}

/* ref: hkDataObjectDict::vf22 */
uint F_00e13e40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe13e40u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * this_00;
  int * piVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar1 = (*(int * PTR32 *)&gen_args[2]);
  (*(int * PTR32 *)&gen_args[2])[2] = (*(int * PTR32 *)&gen_args[2])[2] + 1;
  F_00e13d50((*(undefined * PTR32 *)&gen_args[0]),&(*(int *)(gen_frame + 0x4)),(*(undefined4 *)&gen_args[1]),1);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1)));
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x4)) + 0x10) + 4)));
  piVar3 = (int *)F_00e19f20(this_00,(int)&(*(int * PTR32 *)&gen_args[2]) + 3,piVar2);
  if ((char)*piVar3 == '\0') {
    if (*this_00 != 6) {
      return (uint)piVar3;
    }
    uVar4 = F_00e19c80(this_00);
    if (uVar4 != 0) {
      return uVar4;
    }
    piVar3 = piVar2;
    if (*piVar2 != 6) {
      return (uint)piVar2;
    }
  }
  *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x10))) + 8 + (*(int *)(gen_frame + 0x8)) * 0x10))) = piVar1;
  return (uint)piVar3;
}

/* ref: hkDataObjectDict::vf21 */
uint F_00e13ec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe13ec0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  F_00e13d50(this,((undefined1 *)(gen_frame + 0x4)),param_1,5);
  if (param_2 != 0) {
    uVar1 = F_00da1210(param_2);
    *((uint *)GEN_TOP((*(int *)(this + 0x10) + 8 + (*(int *)(gen_frame + 0x8)) * 0x10))) = uVar1;
    return uVar1;
  }
  *((undefined4 *)GEN_TOP((*(int *)(this + 0x10) + 8 + (*(int *)(gen_frame + 0x8)) * 0x10))) = 0;
  return 0;
}

/* ref: hkDataObjectDict::vf20 */
uint F_00e13f20(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xe13f20u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  F_00e13d50(param_1,((undefined1 *)(gen_frame + 0x4)),param_2,3);
  uVar1 = *(uint *)((int)param_1 + 0x10);
  *(float *)(uVar1 + 8 + (*(int *)(gen_frame + 0x8)) * 0x10) = param_3;
  return uVar1;
}

/* ref: hkDataObjectDict::vf19 */
uint F_00e13f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe13f60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  F_00e13d50(param_1,((undefined1 *)(gen_frame + 0x4)),param_2,3);
  *((int *)GEN_TOP((*(int *)((int)param_1 + 0x10) + 8 + (*(int *)(gen_frame + 0x8)) * 0x10))) = (int)(short)param_3 << 0x10;
  return (*(int *)(gen_frame + 0x8)) * 2;
}

/* ref: hkDataObjectDict::vf16 */
uint F_00e13fa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe13fa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  
  F_00e13d50(this,&(*(int *)(gen_frame + 0x4)),param_1,1);
  iVar1 = **(int * PTR32 *)((*(int *)(gen_frame + 0x4)) + 0x10);
  uVar2 = (*(int *)(gen_frame + 0x8)) * 0x10 + *(int *)(this + 0x10);
  if (iVar1 != 2) {
    if (iVar1 == 3) {
      *(float *)(uVar2 + 8) = (float)(longlong)CONCAT44(param_3,param_2);
      return uVar2;
    }
    if (iVar1 != 4) {
      return uVar2;
    }
  }
  *(undefined4 *)(uVar2 + 8) = param_2;
  *(undefined4 *)(uVar2 + 0xc) = param_3;
  return uVar2;
}

/* ref: hkDataObjectDict::vf17 */
uint F_00e14000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe14000u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  
  F_00e13d50(this,&(*(int *)(gen_frame + 0x4)),param_1,1);
  iVar1 = **(int * PTR32 *)((*(int *)(gen_frame + 0x4)) + 0x10);
  iVar2 = (*(int *)(gen_frame + 0x8)) * 0x10 + *(int *)(this + 0x10);
  if (iVar1 != 2) {
    if (iVar1 == 3) {
      *(float *)(iVar2 + 8) = (float)(int)param_2;
      return 0;
    }
    if (iVar1 - 4U != 0) {
      return iVar1 - 4U;
    }
  }
  *(uint *)(iVar2 + 8) = param_2;
  *(int *)(iVar2 + 0xc) = (int)param_2 >> 0x1f;
  return param_2;
}

/* ref: FUN_00e14060 */
uint F_00e14060(unsigned int gen_a0)
{
  GEN_ENTER(0xe14060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[40])REFP(0x114d894));
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc)));
  *(undefined4 *)((int)this + 0x18) = 0;
  if (-1 < *(int *)((int)this + 0x1c)) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))
              (piVar1,*(undefined4 *)((int)this + 0x14),*(int *)((int)this + 0x1c) * 4);
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0x80000000;
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc)));
  uVar2 = *(uint *)((int)this + 0x28);
  *(undefined4 *)((int)this + 0x24) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,*(undefined4 *)((int)this + 0x20),uVar2 * 8);
  }
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x28) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  return uVar2;
}

/* ref: VariableIntArrayImplementation::vf2 */
uint F_00e140e0(unsigned int gen_a0)
{
  GEN_ENTER(0xe140e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  *(undefined4 *)(this + 0x18) = 0;
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0xc)));
  uVar2 = *(uint *)(this + 0x28);
  *(undefined4 *)(this + 0x24) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,*(undefined4 *)(this + 0x20),uVar2 * 8);
  }
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x80000000;
  *(undefined4 *)(this + 0x10) = 0;
  this[0x2c] = (undefined1)0x0;
  return uVar2;
}

/* ref: VariableIntArrayImplementation::vf32 */
uint F_00e14130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe14130u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  uint uVar2;
  int iVar3;
  undefined * pVVar4;
  undefined4 * puVar5;
  
  if (*(int *)(this + 0x10) != 0) {
    *(undefined4 *)(this + 0x10) = 0;
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0xc)));
    *(undefined4 *)(this + 0x24) = 0;
    if (-1 < *(int *)(this + 0x28)) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,*(undefined4 *)(this + 0x20),*(int *)(this + 0x28) * 8);
    }
    *(undefined4 *)(this + 0x20) = 0;
    *(undefined4 *)(this + 0x28) = 0x80000000;
  }
  pVVar4 = this + 0x14;
  if ((int)(*(uint *)(this + 0x1c) & 0x3fffffff) < param_2) {
    iVar3 = (*(uint *)(this + 0x1c) & 0x3fffffff) * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    F_00d95690(*((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + 0xc))),pVVar4,iVar3,4);
  }
  iVar3 = param_2 - *(int *)(this + 0x18);
  puVar5 = ((undefined4 *)GEN_TOP((*(int *)pVVar4 + *(int *)(this + 0x18) * 4)));
  if (0 < iVar3) {
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
  }
  *(int *)(this + 0x18) = param_2;
  uVar2 = F_00da1010(*(int *)pVVar4,param_1,param_2 * 4);
  return uVar2;
}

/* ref: VariableIntArrayImplementation::vf0 */
uint F_00e141e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe141e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00e14060(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00e14220 */
uint F_00e14220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe14220u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined2 *)((int)this + 6) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114de54));
  return (uint)this;
}

/* ref: ByteArrayImplementation::vf19 */
uint F_00e14260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe14260u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (uint)*((byte *)GEN_TOP((*(int *)(in_ecx + 0xc) + param_2)));
}

/* ref: ByteArrayImplementation::vf20 */
uint F_00e14280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe14280u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0xc);
  *(undefined1 *)(param_1 + uVar1) = (undefined1)param_2;
  return uVar1;
}

/* ref: ByteArrayImplementation::vf22 */
uint F_00e142a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe142a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0xc);
  *(undefined1 *)(param_1 + uVar1) = (undefined1)param_2;
  return uVar1;
}

/* ref: ByteArrayImplementation::vf8 */
uint F_00e142c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe142c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = 4;
  param_1[3] = *(undefined4 *)(this + 0x10);
  param_1[2] = *(undefined4 *)(this + 0xc);
  param_1[1] = 1;
  param_1[4] = 1;
  return 0;
}

/* ref: ByteArrayImplementation::vf35 */
uint F_00e142f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe142f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  
  if ((int)(*(uint *)(this + 0x14) & 0x3fffffff) < param_2) {
    iVar1 = (*(uint *)(this + 0x14) & 0x3fffffff) * 2;
    if (iVar1 <= param_2) {
      iVar1 = param_2;
    }
    F_00d95690(*((undefined4 *)GEN_TOP((*(int *)(this + 0x18) + 0xc))),this + 0xc,iVar1,1);
  }
  *(int *)(this + 0x10) = param_2;
  uVar2 = F_00da1010(*(undefined4 *)(this + 0xc),param_1,param_2);
  return uVar2;
}

/* ref: FUN_00e14340 */
uint F_00e14340(unsigned int gen_a0)
{
  GEN_ENTER(0xe14340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114da7c));
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + 0xc)));
  uVar2 = *(uint *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x10) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))
                      (piVar1,*(undefined4 *)((int)this + 0xc),uVar2 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  return uVar2;
}

/* ref: FUN_00e14390 */
uint F_00e14390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe14390u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined2 *)((int)this + 6) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114def4));
  return (uint)this;
}

/* ref: RealArrayImplementation::vf15 */
float10 F_00e143d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe143d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (float10)*((float *)GEN_TOP((*(int *)(in_ecx + 0xc) + param_2 * 4)));
}

/* ref: RealArrayImplementation::vf16 */
uint F_00e143e0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xe143e0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float param_3 = (float)gen_a2;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0xc);
  *(float *)(uVar1 + param_2 * 4) = param_3;
  return uVar1;
}

/* ref: RealArrayImplementation::vf8 */
uint F_00e14400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe14400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  param_1[2] = *(undefined4 *)(this + 0xc);
  param_1[3] = *(undefined4 *)(this + 0x10);
  param_1[4] = 4;
  *param_1 = 0xb;
  param_1[1] = 1;
  return 0;
}

/* ref: RealArrayImplementation::vf28 */
uint F_00e14430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe14430u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  
  if ((int)(*(uint *)(this + 0x14) & 0x3fffffff) < param_2) {
    iVar1 = (*(uint *)(this + 0x14) & 0x3fffffff) * 2;
    if (iVar1 <= param_2) {
      iVar1 = param_2;
    }
    F_00d95690(*((undefined4 *)GEN_TOP((*(int *)(this + 0x18) + 0xc))),this + 0xc,iVar1,4);
  }
  *(int *)(this + 0x10) = param_2;
  uVar2 = F_00da1010(*(undefined4 *)(this + 0xc),param_1,param_2 * 4);
  return uVar2;
}

/* ref: FUN_00e14490 */
uint F_00e14490(unsigned int gen_a0)
{
  GEN_ENTER(0xe14490u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114db1c));
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + 0xc)));
  uVar2 = *(uint *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x10) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,*(undefined4 *)((int)this + 0xc),uVar2 * 4);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  return uVar2;
}

/* ref: FUN_00e144e0 */
uint F_00e144e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe144e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined2 *)((int)this + 6) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114df94));
  return (uint)this;
}

/* ref: PointerArrayImplementation::vf8 */
uint F_00e14520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe14520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: FUN_00e14530 */
uint F_00e14530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe14530u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: PointerArrayImplementation::vf23 */
uint F_00e14540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe14540u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0xc) + param_2 * 4)));
}

/* ref: PointerArrayImplementation::vf24 */
uint F_00e14550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe14550u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  int * piVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  if (param_2 != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  piVar2 = ((int *)GEN_TOP((*(int *)(this + 0xc) + param_1 * 4)));
  if (*((int *)GEN_TOP((*(int *)(this + 0xc) + param_1 * 4))) != 0) {
    puVar3 = (undefined4 *)*piVar2;
    piVar1 = puVar3 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      uVar4 = ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
      *((int *)GEN_TOP((*(int *)(this + 0xc) + param_1 * 4))) = param_2;
      return uVar4;
    }
    *((int *)GEN_TOP((*(int *)(this + 0xc) + param_1 * 4))) = param_2;
    return (uint)piVar2;
  }
  uVar4 = *(uint *)(this + 0xc);
  *(int *)(uVar4 + param_1 * 4) = param_2;
  return uVar4;
}

/* ref: FUN_00e145b0 */
uint F_00e145b0(unsigned int gen_a0)
{
  GEN_ENTER(0xe145b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114df94));
  if (0 < *(int *)((int)this + 0x10)) {
    do {
      if (*((int *)GEN_TOP((*(int *)((int)this + 0xc) + iVar4 * 4))) != 0) {
        puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + iVar4 * 4)));
        piVar2 = puVar1 + 2;
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)((int)this + 0x10));
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114dbbc));
  uVar3 = *(uint *)((int)this + 0x14);
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + 0xc)));
  *(undefined4 *)((int)this + 0x10) = 0;
  if (-1 < (int)uVar3) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2,*(undefined4 *)((int)this + 0xc),uVar3 * 4);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  return uVar3;
}

/* ref: PointerArrayImplementation::vf0 */
uint F_00e14630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe14630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00e145b0(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00e14670 */
uint F_00e14670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe14670u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined2 *)((int)this + 6) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114e034));
  return (uint)this;
}

/* ref: CstringArrayImplementation::vf8 */
uint F_00e146b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe146b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: FUN_00e146c0 */
uint F_00e146c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe146c0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: CstringArrayImplementation::vf13 */
uint F_00e146d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe146d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0xc) + param_2 * 4)));
}

/* ref: CstringArrayImplementation::vf14 */
uint F_00e146e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe146e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  F_00da11e0(*((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + param_1 * 4))));
  if (param_2 != 0) {
    uVar1 = F_00da1210(param_2);
    *((uint *)GEN_TOP((*(int *)(this + 0xc) + param_1 * 4))) = uVar1;
    return uVar1;
  }
  *((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + param_1 * 4))) = 0;
  return 0;
}

/* ref: FUN_00e14730 */
uint F_00e14730(unsigned int gen_a0)
{
  GEN_ENTER(0xe14730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114e034));
  if (0 < *(int *)((int)this + 0x10)) {
    do {
      F_00da11e0(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + iVar3 * 4))));
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)((int)this + 0x10));
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114dc5c));
  uVar2 = *(uint *)((int)this + 0x14);
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + 0xc)));
  *(undefined4 *)((int)this + 0x10) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,*(undefined4 *)((int)this + 0xc),uVar2 * 4);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  return uVar2;
}

/* ref: CstringArrayImplementation::vf0 */
uint F_00e147a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe147a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00e14730(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00e147e0 */
uint F_00e147e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe147e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined2 *)((int)this + 6) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114e0d4));
  return (uint)this;
}

/* ref: ArrayArrayImplementation::vf8 */
uint F_00e14820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe14820u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: FUN_00e14830 */
uint F_00e14830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe14830u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: ArrayArrayImplementation::vf2 */
unsigned int F_00e14840(unsigned int gen_a0)
{
  GEN_ENTER(0xe14840u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(this + 0x10)) {
    do {
      puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + iVar3 * 4)));
      if (puVar2 != (undefined4 *)0x0) {
        piVar1 = puVar2 + 2;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(this + 0x10));
  }
  return 0;
}

/* ref: ArrayArrayImplementation::vf26 */
uint F_00e14870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe14870u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  int * piVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  if (param_2 != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  piVar2 = ((int *)GEN_TOP((*(int *)(this + 0xc) + param_1 * 4)));
  if (*((int *)GEN_TOP((*(int *)(this + 0xc) + param_1 * 4))) != 0) {
    puVar3 = (undefined4 *)*piVar2;
    piVar1 = puVar3 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      uVar4 = ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
      *((int *)GEN_TOP((*(int *)(this + 0xc) + param_1 * 4))) = param_2;
      return uVar4;
    }
    *((int *)GEN_TOP((*(int *)(this + 0xc) + param_1 * 4))) = param_2;
    return (uint)piVar2;
  }
  uVar4 = *(uint *)(this + 0xc);
  *(int *)(uVar4 + param_1 * 4) = param_2;
  return uVar4;
}

/* ref: FUN_00e148d0 */
uint F_00e148d0(unsigned int gen_a0)
{
  GEN_ENTER(0xe148d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114e0d4));
  if (0 < *(int *)((int)this + 0x10)) {
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + iVar4 * 4)));
      if (puVar1 != (undefined4 *)0x0) {
        piVar2 = puVar1 + 2;
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)((int)this + 0x10));
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114dcfc));
  uVar3 = *(uint *)((int)this + 0x14);
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + 0xc)));
  *(undefined4 *)((int)this + 0x10) = 0;
  if (-1 < (int)uVar3) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2,*(undefined4 *)((int)this + 0xc),uVar3 * 4);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  return uVar3;
}

/* ref: ArrayArrayImplementation::vf4 */
uint F_00e14950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe14950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 * puVar5;
  
  iVar4 = param_1;
  if (param_1 < *(int *)(this + 0x10)) {
    do {
      puVar5 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + iVar4 * 4)));
      if (puVar5 != (undefined4 *)0x0) {
        piVar1 = puVar5 + 2;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          ((code *)*(gen_code32 *)*puVar5)(puVar5,1);
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(this + 0x10));
  }
  if ((int)(*(uint *)(this + 0x14) & 0x3fffffff) < param_1) {
    iVar4 = (*(uint *)(this + 0x14) & 0x3fffffff) * 2;
    if (iVar4 <= param_1) {
      iVar4 = param_1;
    }
    F_00d95690(*((undefined4 *)GEN_TOP((*(int *)(this + 0x18) + 0xc))),this + 0xc,iVar4,4);
  }
  uVar2 = *(uint *)(this + 0x10);
  iVar3 = param_1 - uVar2;
  iVar4 = uVar2 * 4;
  if (0 < iVar3) {
    uVar2 = 0;
    puVar5 = ((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + iVar4)));
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
  }
  *(int *)(this + 0x10) = param_1;
  return uVar2;
}

/* ref: ArrayArrayImplementation::vf0 */
uint F_00e149d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe149d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00e148d0(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00e14a10 */
uint F_00e14a10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe14a10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  int * in_ecx;
  uint uVar4;
  uint uVar5;
  undefined4 * puVar6;
  int iVar7;
  
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = this;
  if (*(int *)param_1[4] != 1) {
    piVar1 = (int *)((int)this + 0xc);
    if (*(uint *)((int)this + 0x10) == (*(uint *)((int)this + 0x14) & 0x3fffffff)) {
      F_00d95710(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x24) + 0xc))),piVar1,8);
    }
    puVar2 = ((undefined4 *)GEN_TOP((*piVar1 + *(int *)((int)this + 0x10) * 8)));
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
    }
    puVar2 = ((undefined4 *)GEN_TOP((*piVar1 + *(int *)((int)this + 0x10) * 8)));
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
    *puVar2 = *param_1;
    piVar1 = (int *)param_1[4];
    (*(int * PTR32 *)(gen_frame + 0x10)) = piVar1;
    in_ecx = (int *)F_00e19d40(piVar1);
    if (*in_ecx == 6) {
      F_00e19c80(in_ecx);
    }
    uVar4 = F_00e0dd10(*(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x24),piVar1,0);
    puVar2[1] = uVar4;
    *(int *)(uVar4 + 8) = *(int *)(uVar4 + 8) + 1;
    ((code *)*(gen_code32 *)(*(int *)puVar2[1] + 0x10))((int *)puVar2[1],param_2);
    if (((param_1[5] != 0) || (*piVar1 == 6)) && ((*(int *)(gen_frame + 0x18)) = 0, 0 < param_2)) {
      do {
        iVar7 = (*(int *)(gen_frame + 0x18));
        iVar3 = *(*(int * PTR32 *)(gen_frame + 0x10));
        if ((iVar3 == 4) || (iVar3 == 2)) {
          ((code *)*(gen_code32 *)(*(int *)puVar2[1] + 0x58))
                    ((int *)puVar2[1],(*(int *)(gen_frame + 0x18)),*(undefined4 *)param_1[5],
                     ((undefined4 *)param_1[5])[1]);
        }
        else if (iVar3 == 3) {
          ((code *)*(gen_code32 *)(*(int *)puVar2[1] + 0x40))
                    ((int *)puVar2[1],(*(int *)(gen_frame + 0x18)),*(undefined4 *)param_1[5]);
        }
        else if (iVar3 == 9) {
          if (*(int *)(*(int * PTR32 *)(gen_frame + 0x10))[1] == 3) {
            ((code *)*(gen_code32 *)(*(int *)puVar2[1] + 0x30))((int *)puVar2[1],(*(int *)(gen_frame + 0x18)),param_1[5]);
          }
        }
        else if (iVar3 == 6) {
          piVar1 = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x18);
          uVar4 = F_00e19c80((*(int * PTR32 *)(gen_frame + 0x10)));
          uVar5 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
          if (uVar4 == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = F_00da4190(((undefined *)GEN_TOP((*(int *)(uVar5 + 8) + 4))),uVar4,0);
          }
          iVar3 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x18);
          (*(uint *)(gen_frame + 0xc)) = uVar4;
          piVar1 = *(int * PTR32 *)(iVar3 + 0xc);
          puVar6 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,&(*(uint *)(gen_frame + 0xc)),0)));
          if (puVar6 != (undefined4 *)0x0) {
            *(short *)((int)puVar6 + 6) = *(short *)((int)puVar6 + 6) + 1;
            puVar6[2] = puVar6[2] + 1;
          }
          ((code *)*(gen_code32 *)(*(int *)puVar2[1] + 0x60))((int *)puVar2[1],(*(int *)(gen_frame + 0x18)),puVar6);
          iVar7 = (*(int *)(gen_frame + 0x18));
          if (puVar6 != (undefined4 *)0x0) {
            *(short *)((int)puVar6 + 6) = *(short *)((int)puVar6 + 6) + -1;
            piVar1 = puVar6 + 2;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              ((code *)*(gen_code32 *)*puVar6)(puVar6,1);
              iVar7 = (*(int *)(gen_frame + 0x18));
            }
          }
        }
        else if (iVar3 == 5) {
          ((code *)*(gen_code32 *)(*(int *)puVar2[1] + 0x38))((int *)puVar2[1],(*(int *)(gen_frame + 0x18)),param_1[5]);
        }
        (*(int *)(gen_frame + 0x18)) = iVar7 + 1;
      } while (iVar7 + 1 < param_2);
    }
    return *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x10) - 1;
  }
  return 0xffffffff;
}

/* ref: FUN_00e14c10 */
uint F_00e14c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe14c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined4 * this_00;
  LPVOID pvVar2;
  undefined4 * puVar3;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x18))(param_1);
  this_00 = (undefined4 *)F_00dbd970((undefined *)((int)this + 0x70),uVar1,0);
  if (this_00 == (undefined4 *)0x0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    puVar3 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar2 + 0x2c),0xc)));
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0xffffffff;
      this_00 = puVar3;
    }
    F_00dbd8b0((undefined *)((int)this + 0x70),&REFG(undefined * PTR32, 0x13516ac),uVar1,this_00);
  }
  uVar1 = F_00dbd8b0(this_00,&REFG(undefined * PTR32, 0x13516ac),param_1,0);
  return uVar1;
}

/* ref: FUN_00e14c90 */
uint F_00e14c90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe14c90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  int iVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  int iVar6;
  uint uVar7;
  undefined4 * puVar8;
  
  piVar3 = (int *)F_00dbd970((undefined *)((int)this + 0x70),param_1,0);
  piVar4 = piVar3;
  if ((piVar3 != (int *)0x0) && (uVar7 = piVar3[1] & 0x7fffffff, uVar7 != 0)) {
    iVar1 = param_3[1];
    iVar6 = iVar1 + uVar7;
    if ((int)(param_3[2] & 0x3fffffffU) < iVar6) {
      iVar2 = (param_3[2] & 0x3fffffffU) * 2;
      if (iVar6 < iVar2) {
        iVar6 = iVar2;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516a4),param_3,iVar6,4);
    }
    param_3[1] = param_3[1] + uVar7;
    puVar8 = (undefined4 *)(*param_3 + iVar1 * 4);
    iVar6 = piVar3[2];
    piVar4 = (int *)0x0;
    if (-1 < iVar6) {
      piVar5 = (int *)*piVar3;
      do {
        if (*piVar5 != -1) break;
        piVar4 = (int *)((int)piVar4 + 1);
        piVar5 = piVar5 + 2;
      } while ((int)piVar4 <= iVar6);
    }
    if ((int)piVar4 <= iVar6) {
      do {
        *puVar8 = *(undefined4 *)(*piVar3 + (int)((int)(uintptr_t)piVar4) * 8);
        iVar6 = piVar3[2];
        piVar4 = (int *)((int)piVar4 + 1);
        puVar8 = puVar8 + 1;
        if (iVar6 < (int)piVar4) break;
        piVar5 = (int *)(*piVar3 + (int)((int)(uintptr_t)piVar4) * 8);
        do {
          if (*piVar5 != -1) break;
          piVar4 = (int *)((int)piVar4 + 1);
          piVar5 = piVar5 + 2;
        } while ((int)piVar4 <= iVar6);
      } while ((int)piVar4 <= iVar6);
    }
  }
  if (param_2 != 0) {
    piVar4 = (int *)F_00e11310((undefined *)((int)this + 0x14),param_1);
    if (piVar4 != (int *)0xffffffff) {
      piVar5 = *(int * PTR32 *)((int)this + 0x14);
      piVar3 = piVar4;
      do {
        F_00e14c90(this,piVar5[(int)((int)(uintptr_t)piVar3) * 2],param_2,param_3);
        piVar4 = *(int * PTR32 *)((int)this + 0x14);
        piVar3 = (int *)piVar4[(int)((int)(uintptr_t)piVar3) * 2 + 1];
        piVar5 = piVar4;
      } while (piVar3 != (int *)0xffffffff);
    }
  }
  return (uint)piVar4;
}

/* ref: FUN_00e14d90 */
uint F_00e14d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe14d90u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined * this_00;
  int iVar1;
  char cVar2;
  int * piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  piVar3 = (*(int * PTR32 *)&gen_args[1]);
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  if ((int)((*(int * PTR32 *)&gen_args[1])[2] & 0x3fffffffU) < iVar1) {
    iVar4 = ((*(int * PTR32 *)&gen_args[1])[2] & 0x3fffffffU) * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516a4),(*(int * PTR32 *)&gen_args[1]),iVar4,4);
  }
  this_00 = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  uVar5 = F_00da3970(this_00);
  uVar6 = F_00da3e40(this_00,(int)&(*(int * PTR32 *)&gen_args[1]) + 3,uVar5);
  cVar2 = (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[1]) + 3))));
  while (cVar2 != '\0') {
    uVar6 = F_00da39b0(this_00,uVar5);
    *(uint *)(*piVar3 + piVar3[1] * 4) = uVar6;
    piVar3[1] = piVar3[1] + 1;
    uVar5 = F_00da39f0(this_00,uVar5);
    uVar6 = F_00da3e40(this_00,(int)&(*(int * PTR32 *)&gen_args[1]) + 3,uVar5);
    cVar2 = (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[1]) + 3))));
  }
  return uVar6;
}

/* ref: FUN_00e14e20 */
uint F_00e14e20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe14e20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  undefined4 uVar1;
  uint uVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  int iVar7;
  int * piVar8;
  int iVar9;
  
  piVar3 = (int *)0x0;
  if (param_1 != (int *)0x0) {
    uVar2 = F_00da4190((undefined *)((int)this + 4),param_1,0);
    piVar3 = (int *)0x0;
    if (uVar2 != 0) {
      piVar3 = (int *)F_00e113a0((undefined *)((int)this + 0x34),uVar2);
      for (piVar4 = piVar3; piVar4 != (int *)0xffffffff; piVar4 = (int *)piVar3[(int)((int)(uintptr_t)piVar4) * 2 + 1]
          ) {
        uVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x34) + (int)((int)(uintptr_t)piVar4) * 8)));
        if (param_4[1] == (param_4[2] & 0x3fffffffU)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516a4),param_4,4);
        }
        *(undefined4 *)(*param_4 + param_4[1] * 4) = uVar1;
        param_4[1] = param_4[1] + 1;
        piVar3 = *(int * PTR32 *)((int)this + 0x34);
      }
      if (((param_3 != 0) &&
          (piVar4 = (int *)F_00dbd970((undefined *)((int)this + 0x70),uVar2,0), piVar3 = piVar4,
          piVar4 != (int *)0x0)) && ((piVar4[1] & 0x7fffffffU) != 0)) {
        iVar7 = piVar4[2];
        piVar6 = (int *)0x0;
        if (-1 < iVar7) {
          piVar8 = (int *)*piVar4;
          do {
            if (*piVar8 != -1) break;
            piVar6 = (int *)((int)piVar6 + 1);
            piVar8 = piVar8 + 2;
          } while ((int)piVar6 <= iVar7);
        }
        param_1 = piVar6;
        if ((int)piVar6 <= iVar7) {
          do {
            piVar3 = *(int * PTR32 *)(*piVar4 + (int)((int)(uintptr_t)param_1) * 8);
            uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 0x14))(piVar3);
            if (0 < (int)uVar5) {
              iVar7 = 0;
              do {
                uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3,iVar7);
                if (param_4[1] == (param_4[2] & 0x3fffffffU)) {
                  F_00d95710(&REFG(undefined * PTR32, 0x13516a4),param_4,4);
                }
                *(uint *)(*param_4 + param_4[1] * 4) = uVar5;
                param_4[1] = param_4[1] + 1;
                iVar7 = iVar7 + 1;
                uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 0x14))(piVar3);
              } while (iVar7 < (int)uVar5);
            }
            iVar7 = piVar4[2];
            piVar3 = (int *)((int)param_1 + 1);
            if ((int)piVar3 <= iVar7) {
              piVar6 = (int *)(*piVar4 + (int)((int)(uintptr_t)piVar3) * 8);
              do {
                if (*piVar6 != -1) break;
                piVar3 = (int *)((int)piVar3 + 1);
                piVar6 = piVar6 + 2;
              } while ((int)piVar3 <= iVar7);
            }
            param_1 = piVar3;
          } while ((int)piVar3 <= iVar7);
        }
      }
      if ((param_2 != 0) &&
         (piVar4 = (int *)F_00e11310((undefined *)((int)this + 0x14),uVar2), piVar3 = piVar4,
         piVar4 != (int *)0xffffffff)) {
        piVar3 = *(int * PTR32 *)((int)this + 0x14);
        do {
          iVar7 = param_2;
          iVar9 = param_3;
          piVar6 = param_4;
          uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)piVar3[(int)((int)(uintptr_t)piVar4) * 2] + 8))))((int *)piVar3[(int)((int)(uintptr_t)piVar4) * 2])
          ;
          F_00e14e20(this,(int *)uVar2,iVar7,iVar9,piVar6);
          piVar3 = *(int * PTR32 *)((int)this + 0x14);
          piVar4 = (int *)piVar3[(int)((int)(uintptr_t)piVar4) * 2 + 1];
        } while (piVar4 != (int *)0xffffffff);
      }
    }
  }
  return (uint)piVar3;
}

/* ref: FUN_00e14ff0 */
uint F_00e14ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe14ff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  uint uVar1;
  
  *(undefined4 *)(param_4 + 4) = 0;
  uVar1 = F_00e14e20(this,param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00e15020 */
uint F_00e15020(unsigned int gen_a0)
{
  GEN_ENTER(0xe15020u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e15060 */
uint F_00e15060(unsigned int gen_a0)
{
  GEN_ENTER(0xe15060u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e150a0 */
uint F_00e150a0(unsigned int gen_a0)
{
  GEN_ENTER(0xe150a0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e150e0 */
uint F_00e150e0(unsigned int gen_a0)
{
  GEN_ENTER(0xe150e0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e15120 */
uint F_00e15120(unsigned int gen_a0)
{
  GEN_ENTER(0xe15120u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x18);
  if (uVar1 != 0xffffffff) {
    *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(*(int *)this + 4 + uVar1 * 8);
    return uVar1;
  }
  uVar1 = *(uint *)((int)this + 4);
  if (uVar1 == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return uVar1;
}

/* ref: FUN_00e15160 */
uint F_00e15160(unsigned int gen_a0)
{
  GEN_ENTER(0xe15160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x18);
  if (uVar1 != 0xffffffff) {
    *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(*(int *)this + 4 + uVar1 * 8);
    return uVar1;
  }
  uVar1 = *(uint *)((int)this + 4);
  if (uVar1 == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return uVar1;
}

/* ref: FUN_00e151a0 */
uint F_00e151a0(unsigned int gen_a0)
{
  GEN_ENTER(0xe151a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x114de1c));
  uVar3 = F_00e139b0(this);
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x18);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      uVar3 = ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    }
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  if (*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0) {
    uVar3 = F_00d91a80(*(undefined * PTR32 *)((int)this + 0x10));
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  return uVar3;
}

/* ref: hkDataClassDict::vf0 */
uint F_00e151f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe151f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  LPVOID pvVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x114de1c));
  F_00e139b0(this);
  puVar2 = *(undefined4 * PTR32 *)(this + 0x18);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    }
  }
  *(undefined4 *)(this + 0x18) = 0;
  if (*(undefined * PTR32 *)(this + 0x10) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)(this + 0x10));
  }
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  if ((param_1 & 1) != 0) {
    pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar3 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar3 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00e15260 */
uint F_00e15260(unsigned int gen_a0)
{
  GEN_ENTER(0xe15260u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[30])REFP(0x114d814));
  uVar3 = F_00e13ac0(this);
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0xc);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      uVar3 = ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    }
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  return uVar3;
}

/* ref: hkDataObjectDict::vf0 */
uint F_00e152a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe152a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  LPVOID pvVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[30])REFP(0x114d814));
  F_00e13ac0(this);
  puVar2 = *(undefined4 * PTR32 *)(this + 0xc);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    }
  }
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  if ((param_1 & 1) != 0) {
    pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar3 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar3 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: ByteArrayImplementation::vf0 */
uint F_00e15300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe15300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  LPVOID pvVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114da7c));
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x18) + 0xc)));
  *(undefined4 *)(this + 0x10) = 0;
  if (-1 < (int)*(uint *)(this + 0x14)) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))
              (piVar1,*(undefined4 *)(this + 0xc),*(uint *)(this + 0x14) & 0x3fffffff);
  }
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x14) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  if ((param_1 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar2 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: RealArrayImplementation::vf0 */
uint F_00e15370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe15370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  LPVOID pvVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114db1c));
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x18) + 0xc)));
  *(undefined4 *)(this + 0x10) = 0;
  if (-1 < *(int *)(this + 0x14)) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,*(undefined4 *)(this + 0xc),*(int *)(this + 0x14) * 4);
  }
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x14) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  if ((param_1 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar2 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00e153f0 */
uint F_00e153f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe153f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined * this_00;
  int * piVar1;
  uint uVar2;
  int * piVar3;
  undefined4 * this_01;
  LPVOID pvVar4;
  undefined4 * puVar5;
  int iVar6;
  int iVar7;
  
  *(undefined2 *)((int)this + 6) = 0;
  iVar7 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114e174));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  if (param_3 != 0) {
    *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
  }
  *(int *)((int)this + 0x18) = param_3;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  *(undefined4 *)((int)this + 0x24) = param_1;
  *(undefined4 *)((int)this + 0x20) = param_4;
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 0x24))))(*(int * PTR32 *)((int)this + 0x18));
  if (0 < (int)uVar2) {
    do {
      piVar1 = *(int * PTR32 *)((int)this + 0x18);
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1);
      iVar6 = iVar7 - uVar2;
      piVar3 = piVar1;
      do {
        iVar6 = iVar6 + piVar3[0xb];
        if (-1 < iVar6) {
          iVar6 = piVar3[10] + iVar6 * 0x18;
          goto LAB_00e1546b;
        }
        piVar3 = (int *)piVar3[6];
      } while (piVar3 != (int *)0x0);
      iVar6 = piVar1[10] + -0x18;
LAB_00e1546b: ;
      F_00e14a10(this,iVar6,*(undefined4 *)((int)this + 0x20));
      iVar7 = iVar7 + 1;
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 0x24))))(*(int * PTR32 *)((int)this + 0x18));
    } while (iVar7 < (int)uVar2);
  }
  iVar7 = *((int *)GEN_TOP((*(int *)((int)this + 0x24) + 8)));
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this);
  this_00 = (undefined *)(iVar7 + 0x70);
  this_01 = (undefined4 *)F_00dbd970(this_00,uVar2,0);
  if (this_01 == (undefined4 *)0x0) {
    pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    puVar5 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar4 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar4 + 0x2c),0xc)));
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0xffffffff;
      this_01 = puVar5;
    }
    F_00dbd8b0(this_00,&REFG(undefined * PTR32, 0x13516ac),uVar2,this_01);
  }
  F_00dbd8b0(this_01,&REFG(undefined * PTR32, 0x13516ac),this,0);
  return (uint)this;
}

/* ref: StructArrayImplementation::vf8 */
uint F_00e15510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe15510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: FUN_00e15520 */
uint F_00e15520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe15520u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined2 *)((int)this + 6) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[36])REFP(0x114e214));
  *(undefined4 *)((int)this + 0xc) = param_1;
  *(undefined4 *)((int)this + 0x10) = param_2;
  return (uint)this;
}

/* ref: StructArrayImplementation::Object::vf2 */
uint F_00e15550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xe15550u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x18))))
                    (*(int * PTR32 *)(this + 0xc),param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                     param_8);
  return uVar1;
}

/* ref: StructArrayImplementation::Object::vf1 */
uint F_00e15560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe15560u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = in_ecx;
  param_2[1] = 0;
  return (uint)param_2;
}

/* ref: StructArrayImplementation::Object::vf5 */
uint F_00e15580(void)
{
  GEN_ENTER(0xe15580u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: StructArrayImplementation::Object::vf7 */
uint F_00e15590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe15590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return param_1 + 1;
}

/* ref: StructArrayImplementation::Object::vf31 */
unsigned int F_00e155a0(void)
{
  GEN_ENTER(0xe155a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: StructArrayImplementation::Object::vf28 */
unsigned int F_00e155b0(void)
{
  GEN_ENTER(0xe155b0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: StructArrayImplementation::Object::vf25 */
uint F_00e155c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe155c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *param_2 = *param_1;
  param_2[1] = 0;
  param_2[2] = param_1[4];
  param_2[3] = param_1[5];
  return (uint)param_2;
}

/* ref: StructArrayImplementation::Object::vf27 */
uint F_00e155f0(void)
{
  GEN_ENTER(0xe155f0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: StructArrayImplementation::vf1 */
uint F_00e15600(unsigned int gen_a0)
{
  GEN_ENTER(0xe15600u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x1c);
}

/* ref: StructArrayImplementation::vf7 */
uint F_00e15610(unsigned int gen_a0)
{
  GEN_ENTER(0xe15610u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x24);
}

/* ref: StructArrayImplementation::vf5 */
uint F_00e15620(unsigned int gen_a0)
{
  GEN_ENTER(0xe15620u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x20);
}

/* ref: FUN_00e15640 */
uint F_00e15640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe15640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00dbe420(this,param_1);
  return uVar1;
}

/* ref: FUN_00e15650 */
uint F_00e15650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe15650u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00e15660 */
uint F_00e15660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe15660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 8);
  return uVar1;
}

/* ref: CWiauPropertyList::LookupPropId */
int F_00e15680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe15680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(this + 0x10)) {
    piVar2 = *(int * PTR32 *)(this + 0xc);
    do {
      if (*piVar2 == param_1) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar1 < *(int *)(this + 0x10));
  }
  return -1;
}

/* ref: FUN_00e156b0 */
uint F_00e156b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe156b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  if (0 < *(int *)((int)this + 0x10)) {
    piVar2 = *(int * PTR32 *)((int)this + 0xc);
    do {
      if (*piVar2 == *param_1) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 2;
    } while ((int)uVar1 < *(int *)((int)this + 0x10));
  }
  return 0xffffffff;
}

/* ref: StructArrayImplementation::Object::vf4 */
uint F_00e156e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe156e0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x78))))((*(undefined * PTR32 *)&gen_args[0]),&(*(int *)&gen_args[1]),(*(int *)&gen_args[1]));
  iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xc))) + 0x10)));
  iVar2 = 0;
  if (0 < iVar1) {
    piVar3 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xc))) + 0xc)));
    do {
      if ((*(int *)&gen_args[1]) == *piVar3) {
        return 1;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 2;
    } while (iVar2 < iVar1);
  }
  return 0;
}

/* ref: StructArrayImplementation::Object::vf26 */
uint F_00e15730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe15730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int * piVar2;
  int iVar3;
  
  iVar1 = *((int *)GEN_TOP((*(int *)(this + 0xc) + 0x10)));
  iVar3 = 0;
  if (0 < iVar1) {
    piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0xc)));
    do {
      if (*param_1 == *piVar2) {
        return 1;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar3 < iVar1);
  }
  return 0;
}

/* ref: StructArrayImplementation::Object::vf6 */
uint F_00e15770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe15770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (uint)(param_1 < *((int *)GEN_TOP((*(int *)(this + 0xc) + 0x10))));
}

/* ref: StructArrayImplementation::Object::vf8 */
uint F_00e15790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe15790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + param_1 * 8)));
}

/* ref: StructArrayImplementation::Object::vf9 */
uint F_00e157b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe157b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *param_1 = this;
  param_1[1] = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + param_2 * 8)));
  return (uint)param_1;
}

/* ref: StructArrayImplementation::vf23 */
uint F_00e157d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe157d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  LPVOID pvVar1;
  undefined4 * puVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar2 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),0x14)));
  puVar2[3] = this;
  puVar2[1] = 0x14;
  puVar2[2] = 0;
  *puVar2 = (*(undefined * PTR32 (*)[36])REFP(0x114e214));
  puVar2[4] = param_1;
  return (uint)puVar2;
}

/* ref: StructArrayImplementation::vf24 */
unsigned int F_00e15810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe15810u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  int iVar4;
  
  param_2[2] = param_2[2] + 1;
  iVar4 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (0 < *(int *)(this + 0x10)) {
    do {
      puVar2 = ((undefined4 *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x8)) + 0xc) + iVar4 * 8)));
      uVar3 = ((code *)*(gen_code32 *)(*param_2 + 0xc))(param_2,((undefined1 *)(gen_frame + 0x0)),*puVar2);
      F_00e1d1b0(puVar2[1],param_1,uVar3);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)((*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10));
  }
  piVar1 = param_2 + 2;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    ((code *)*(gen_code32 *)*param_2)(param_2,1);
  }
  return 0;
}

/* ref: StructArrayImplementation::vf2 */
unsigned int F_00e15880(unsigned int gen_a0)
{
  GEN_ENTER(0xe15880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)(this + 0x10) < 1) {
    *(undefined4 *)(this + 0x20) = 0;
    return 0;
  }
  do {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 4 + iVar2 * 8)));
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < *(int *)(this + 0x10));
  *(undefined4 *)(this + 0x20) = 0;
  return 0;
}

/* ref: StructArrayImplementation::vf3 */
unsigned int F_00e158c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe158c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(this + 0x10)) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 4 + iVar2 * 8)));
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,param_1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(this + 0x10));
  }
  return 0;
}

/* ref: StructArrayImplementation::vf4 */
unsigned int F_00e158f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe158f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  int iVar2;
  
  iVar2 = 0;
  *(undefined4 *)(this + 0x20) = param_1;
  if (0 < *(int *)(this + 0x10)) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 4 + iVar2 * 8)));
      ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,param_1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(this + 0x10));
  }
  return 0;
}

/* ref: StructArrayImplementation::Object::vf0 */
uint F_00e15930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe15930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00e15970 */
uint F_00e15970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe15970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined * this_00;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x18))(param_1);
  this_00 = (undefined *)F_00dbd970((undefined *)((int)this + 0x70),uVar1,0);
  uVar1 = F_00dbe420(this_00,param_1);
  return uVar1;
}

/* ref: FUN_00e159b0 */
uint F_00e159b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe159b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x18) + 0xc))) + 8)));
  if (param_2 != 0) {
    uVar2 = F_00da4190((undefined *)(iVar1 + 0x50),param_2,0);
    if (uVar2 == 0) {
      uVar2 = F_00da1210(param_2);
      F_00da3a20((undefined *)(iVar1 + 0x50),uVar2,uVar2);
    }
    *param_1 = uVar2;
    return (uint)param_1;
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00e15a10 */
uint F_00e15a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe15a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint * puVar4;
  
  iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x18) + 0xc))) + 8)));
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = F_00da4190((undefined *)(iVar1 + 0x50),param_1,0);
    if (uVar2 == 0) {
      uVar2 = F_00da1210(param_1);
      F_00da3a20((undefined *)(iVar1 + 0x50),uVar2,uVar2);
    }
  }
  uVar3 = 0;
  if (0 < *(int *)((int)this + 0x10)) {
    puVar4 = *(uint * PTR32 *)((int)this + 0xc);
    do {
      if (*puVar4 == uVar2) {
        return uVar3;
      }
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 2;
    } while ((int)uVar3 < *(int *)((int)this + 0x10));
  }
  return 0xffffffff;
}

/* ref: StructArrayImplementation::Object::vf3 */
uint F_00e15a80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe15a80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * this_00;
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    this_00 = ((undefined *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0x18))) + 0xc))) + 8))) + 0x50)));
    uVar1 = F_00da4190(this_00,param_2,0);
    if (uVar1 == 0) {
      uVar1 = F_00da1210(param_2);
      F_00da3a20(this_00,uVar1,uVar1);
    }
  }
  uVar1 = F_00e11bf0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x18))),uVar1);
  if (uVar1 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return (uint)param_1;
  }
  *param_1 = this;
  param_1[1] = uVar1;
  return (uint)param_1;
}

/* ref: StructArrayImplementation::Object::vf29 */
unsigned int F_00e15b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe15b10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00e11b60(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x18))),param_1);
  return 0;
}

/* ref: StructArrayImplementation::Object::vf30 */
uint F_00e15b20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe15b20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0x18))) + 0xc))) + 8)));
  if (param_2 != 0) {
    uVar2 = F_00da4190((undefined *)(iVar1 + 0x50),param_2,0);
    if (uVar2 == 0) {
      uVar2 = F_00da1210(param_2);
      F_00da3a20((undefined *)(iVar1 + 0x50),uVar2,uVar2);
    }
    *param_1 = uVar2;
    return (uint)param_1;
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: StructArrayImplementation::vf6 */
uint F_00e15b80(unsigned int gen_a0)
{
  GEN_ENTER(0xe15b80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x18);
}

/* ref: StructArrayImplementation::vf10 */
uint F_00e15b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe15b90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00e15a10(this,param_1);
  return *((uint *)GEN_TOP((*(int *)(this + 0xc) + 4 + uVar1 * 8)));
}

/* ref: FUN_00e15bb0 */
uint F_00e15bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe15bb0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e15bf0 */
uint F_00e15bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe15bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this);
  uVar1 = F_00e14a10(this,param_1,uVar1);
  return uVar1;
}

/* ref: FUN_00e15c10 */
uint F_00e15c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe15c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  if (0 < *(int *)((int)this + 0x10)) {
    piVar2 = *(int * PTR32 *)((int)this + 0xc);
    do {
      if (*piVar2 == *param_1) {
        if (uVar1 != 0xffffffff) {
          return uVar1;
        }
        break;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 2;
    } while ((int)uVar1 < *(int *)((int)this + 0x10));
  }
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this);
  uVar1 = F_00e14a10(this,param_1,uVar1);
  return uVar1;
}

/* ref: StructArrayImplementation::Object::vf14 */
uint F_00e15c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe15c60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00e15c10(*(undefined * PTR32 *)(this + 0xc),param_1);
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 4 + uVar2 * 8)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1,*(undefined4 *)(this + 0x10));
  return uVar2;
}

/* ref: StructArrayImplementation::Object::vf11 */
uint F_00e15c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe15c90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00e15c10(*(undefined * PTR32 *)(this + 0xc),param_1);
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 4 + uVar2 * 8)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x34))(piVar1,*(undefined4 *)(this + 0x10));
  return uVar2;
}

/* ref: StructArrayImplementation::Object::vf10 */
uint F_00e15cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe15cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00e15c10(*(undefined * PTR32 *)(this + 0xc),param_1);
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 4 + uVar2 * 8)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 100))(piVar1,*(undefined4 *)(this + 0x10));
  return uVar2;
}

/* ref: StructArrayImplementation::Object::vf12 */
uint F_00e15cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe15cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00e15c10(*(undefined * PTR32 *)(this + 0xc),param_1);
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 4 + uVar2 * 8)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*(undefined4 *)(this + 0x10));
  return uVar2;
}

/* ref: StructArrayImplementation::Object::vf32 */
uint F_00e15d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe15d20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00e15c10(*(undefined * PTR32 *)(this + 0xc),param_1);
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 4 + uVar2 * 8)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 0x10));
  return uVar2;
}

/* ref: StructArrayImplementation::Object::vf15 */
uint F_00e15d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe15d50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00e15c10(*(undefined * PTR32 *)(this + 0xc),param_1);
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 4 + uVar2 * 8)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1,*(undefined4 *)(this + 0x10));
  return uVar2;
}

/* ref: StructArrayImplementation::Object::vf33 */
uint F_00e15d80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe15d80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00e15c10(*(undefined * PTR32 *)(this + 0xc),param_2);
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 4 + uVar2 * 8)));
  ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1,param_1,*(undefined4 *)(this + 0x10));
  return param_1;
}

/* ref: StructArrayImplementation::Object::vf13 */
uint F_00e15dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe15dc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00e15c10(*(undefined * PTR32 *)(this + 0xc),param_1);
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 4 + uVar2 * 8)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x5c))(piVar1,*(undefined4 *)(this + 0x10));
  return uVar2;
}

/* ref: StructArrayImplementation::Object::vf24 */
uint F_00e15df0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe15df0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  
  uVar1 = F_00e15c10(*(undefined * PTR32 *)(this + 0xc),param_1);
  uVar1 = F_00e1d1b0(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 4 + uVar1 * 8))),
                       *(undefined4 *)(this + 0x10),param_2);
  return uVar1;
}

/* ref: StructArrayImplementation::Object::vf23 */
uint F_00e15e20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe15e20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00e15c10(*(undefined * PTR32 *)(this + 0xc),param_1);
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 4 + uVar2 * 8)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x60))(piVar1,*(undefined4 *)(this + 0x10),param_2);
  return uVar2;
}

/* ref: StructArrayImplementation::Object::vf22 */
uint F_00e15e50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe15e50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00e15c10(*(undefined * PTR32 *)(this + 0xc),param_1);
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 4 + uVar2 * 8)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x68))(piVar1,*(undefined4 *)(this + 0x10),param_2);
  return uVar2;
}

/* ref: StructArrayImplementation::Object::vf21 */
uint F_00e15e80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe15e80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00e15c10(*(undefined * PTR32 *)(this + 0xc),param_1);
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 4 + uVar2 * 8)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x38))(piVar1,*(undefined4 *)(this + 0x10),param_2);
  return uVar2;
}

/* ref: StructArrayImplementation::Object::vf20 */
uint F_00e15eb0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xe15eb0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00e15c10(*(undefined * PTR32 *)(param_1 + 0xc),param_2);
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 0xc) + 0xc))) + 4 + uVar2 * 8)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x40))
                    (piVar1,*(undefined4 *)(param_1 + 0x10),(undefined4)gen_fl2bits(param_3));
  return uVar2;
}

/* ref: StructArrayImplementation::Object::vf19 */
uint F_00e15ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe15ef0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00e15c10(*(undefined * PTR32 *)(this + 0xc),param_1);
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 4 + uVar2 * 8)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1,*(undefined4 *)(this + 0x10),param_2);
  return uVar2;
}

/* ref: StructArrayImplementation::Object::vf18 */
uint F_00e15f20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe15f20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00e15c10(*(undefined * PTR32 *)(this + 0xc),param_1);
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 4 + uVar2 * 8)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x30))(piVar1,*(undefined4 *)(this + 0x10),param_2);
  return uVar2;
}

/* ref: StructArrayImplementation::Object::vf35 */
uint F_00e15f50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe15f50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00e15c10(*(undefined * PTR32 *)(this + 0xc),param_1);
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 4 + uVar2 * 8)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x50))(piVar1,*(undefined4 *)(this + 0x10),(int)(char)param_2);
  return uVar2;
}

/* ref: StructArrayImplementation::Object::vf34 */
uint F_00e15f90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe15f90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00e15c10(*(undefined * PTR32 *)(this + 0xc),param_1);
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 4 + uVar2 * 8)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x50))(piVar1,*(undefined4 *)(this + 0x10),(int)(short)param_2);
  return uVar2;
}

/* ref: StructArrayImplementation::Object::vf17 */
uint F_00e15fd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe15fd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00e15c10(*(undefined * PTR32 *)(this + 0xc),param_1);
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 4 + uVar2 * 8)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x50))(piVar1,*(undefined4 *)(this + 0x10),param_2);
  return uVar2;
}

/* ref: StructArrayImplementation::Object::vf16 */
uint F_00e16000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe16000u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00e15c10(*(undefined * PTR32 *)(this + 0xc),param_1);
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 4 + uVar2 * 8)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x58))(piVar1,*(undefined4 *)(this + 0x10),param_2,param_3);
  return uVar2;
}

/* ref: FUN_00e16040 */
uint F_00e16040(unsigned int gen_a0)
{
  GEN_ENTER(0xe16040u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  undefined * this_00;
  int iVar4;
  
  iVar4 = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114e174));
  if (0 < *(int *)((int)this + 0x10)) {
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 4 + iVar4 * 8)));
      piVar2 = puVar1 + 2;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)((int)this + 0x10));
  }
  iVar4 = *((int *)GEN_TOP((*(int *)((int)this + 0x24) + 8)));
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this);
  this_00 = (undefined *)F_00dbd970((undefined *)(iVar4 + 0x70),uVar3,0);
  F_00dbe420(this_00,this);
  uVar3 = *(uint *)((int)this + 0x14);
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x24) + 0xc)));
  *(undefined4 *)((int)this + 0x10) = 0;
  if (-1 < (int)uVar3) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2,*(undefined4 *)((int)this + 0xc),uVar3 * 8);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x18);
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = puVar1 + 2;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      uVar3 = ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    }
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  return uVar3;
}

/* ref: StructArrayImplementation::vf0 */
uint F_00e160f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe160f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00e16040(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00e16130 */
uint F_00e16130(unsigned int gen_a0)
{
  GEN_ENTER(0xe16130u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00dbdb20((undefined *)((int)this + 0xc),&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
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

/* ref: FUN_00e161b0 */
uint F_00e161b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe161b0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e16220 */
uint F_00e16220(unsigned int gen_a0)
{
  GEN_ENTER(0xe16220u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e162b0 */
uint F_00e162b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe162b0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e16320 */
uint F_00e16320(unsigned int gen_a0)
{
  GEN_ENTER(0xe16320u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e163b0 */
uint F_00e163b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe163b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_00dbd970((undefined *)((int)this + 0xc),param_1,0xffffffff);
  uVar3 = F_00e15120(this);
  puVar1 = (undefined4 *)(*(int *)this + uVar3 * 8);
  *puVar1 = *param_2;
  puVar1[1] = uVar2;
  uVar2 = F_00dbd8b0((undefined *)((int)this + 0xc),&REFG(undefined * PTR32, 0x13516ac),param_1,uVar3);
  return uVar2;
}

/* ref: FUN_00e16400 */
uint F_00e16400(unsigned int gen_a0)
{
  GEN_ENTER(0xe16400u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e16440 */
uint F_00e16440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe16440u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_00dbd970((undefined *)((int)this + 0xc),param_1,0xffffffff);
  uVar3 = F_00e15160(this);
  puVar1 = (undefined4 *)(*(int *)this + uVar3 * 8);
  *puVar1 = *param_2;
  puVar1[1] = uVar2;
  uVar2 = F_00dbd8b0((undefined *)((int)this + 0xc),&REFG(undefined * PTR32, 0x13516ac),param_1,uVar3);
  return uVar2;
}

/* ref: FUN_00e16490 */
uint F_00e16490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe16490u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  int iVar7;
  
  iVar7 = *(int *)((int)this + 0x14);
  iVar1 = 0;
  (*(int *)(gen_frame + 0x18)) = -1;
  if (0 < iVar7) {
    piVar5 = *(int * PTR32 *)((int)this + 0x10);
    do {
      if (*piVar5 == *param_2) {
        (*(int *)(gen_frame + 0x18)) = iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar5 = piVar5 + 4;
    } while (iVar1 < iVar7);
    if ((*(int *)(gen_frame + 0x18)) != -1) goto LAB_00e16699;
  }
  piVar5 = (int *)((int)this + 0x10);
  (*(int *)(gen_frame + 0x18)) = iVar7;
  if (*(uint *)((int)this + 0x14) == (*(uint *)((int)this + 0x18) & 0x3fffffff)) {
    F_00d95710(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc))) + 0xc))),piVar5,0x10);
  }
  puVar2 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x14) * 0x10 + *piVar5)));
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
  }
  iVar7 = *(int *)((int)this + 0x14);
  *(int *)((int)this + 0x14) = iVar7 + 1;
  piVar6 = (int *)(iVar7 * 0x10 + *piVar5);
  *piVar6 = *param_2;
  piVar5 = (int *)param_2[4];
  iVar7 = *piVar5;
  if (iVar7 == 8) {
    uVar3 = F_00e0dd10(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc))),piVar5[1],0);
    piVar6[2] = uVar3;
    *(int *)(uVar3 + 8) = *(int *)(uVar3 + 8) + 1;
  }
  else if (iVar7 == 9) {
    (*(int * PTR32 *)(gen_frame + 0x10)) = (int *)piVar5[1];
    piVar4 = (int *)F_00e0dd10(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc))),(int *)piVar5[1],0
                                );
    piVar6[2] = (int)piVar4;
    iVar7 = *piVar4;
    (*(int * PTR32 *)(gen_frame + 0x14)) = piVar4;
    uVar3 = F_00e19c70(piVar5);
    ((code *)*(gen_code32 *)(iVar7 + 0x10))((*(int * PTR32 *)(gen_frame + 0x14)),uVar3);
    *(int *)(piVar6[2] + 8) = *(int *)(piVar6[2] + 8) + 1;
    if ((param_2[5] != 0) && (*(*(int * PTR32 *)(gen_frame + 0x10)) == 3)) {
      uVar3 = F_00e19c70(piVar5);
      iVar7 = 0;
      (*(int * PTR32 *)(gen_frame + 0x10)) = (int *)param_2[5];
      if (0 < (int)uVar3) {
        do {
          ((code *)*(gen_code32 *)(*(int *)piVar6[2] + 0x40))
                    ((int *)piVar6[2],iVar7,*(undefined4 *)((int)(*(int * PTR32 *)(gen_frame + 0x10)) + iVar7 * 4));
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)uVar3);
      }
    }
  }
  else if (iVar7 == 7) {
    piVar6[2] = 0;
  }
  else if (iVar7 == 6) {
    piVar4 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc)));
    (*(int * PTR32 *)(gen_frame + 0x10)) = piVar4;
    (*(int * PTR32 *)(gen_frame + 0x14)) = (int *)*piVar4;
    uVar3 = F_00e19c80(piVar5);
    uVar3 = ((code *)*(gen_code32 *)((int)(*(int * PTR32 *)(gen_frame + 0x14)) + 0x24))((*(int * PTR32 *)(gen_frame + 0x10)),uVar3);
    (*(uint *)(gen_frame + 0xc)) = uVar3;
    piVar5 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc)));
    puVar2 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar5 + 0x10))(piVar5,&(*(uint *)(gen_frame + 0xc)),1)));
    if (puVar2 != (undefined4 *)0x0) {
      *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + 1;
      puVar2[2] = puVar2[2] + 1;
    }
    piVar6[2] = (int)puVar2;
    puVar2[2] = puVar2[2] + 1;
    *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + -1;
    piVar5 = puVar2 + 2;
    *piVar5 = *piVar5 + -1;
    if (*piVar5 == 0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    }
  }
  else {
    piVar5 = (int *)param_2[5];
    if (piVar5 == (int *)0x0) {
      piVar6[2] = 0;
      piVar6[3] = 0;
    }
    else if ((iVar7 == 2) || (iVar7 == 4)) {
      piVar6[2] = *piVar5;
      piVar6[3] = piVar5[1];
    }
    else if (iVar7 == 3) {
      piVar6[2] = *piVar5;
    }
    else if (iVar7 == 5) {
      uVar3 = F_00da1210(piVar5);
      piVar6[2] = uVar3;
    }
  }
LAB_00e16699: ;
  *param_1 = param_2;
  param_1[1] = (*(int *)(gen_frame + 0x18));
  return (uint)param_1;
}

/* ref: hkDataObjectDict::vf10 */
uint F_00e166b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe166b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  F_00e16490(this,((undefined1 *)(gen_frame + 0x4)),param_1,8);
  return *((uint *)GEN_TOP((*(int *)(this + 0x10) + 8 + (*(int *)(gen_frame + 0x8)) * 0x10)));
}

/* ref: hkDataObjectDict::vf11 */
uint F_00e166e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe166e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  F_00e16490(this,((undefined1 *)(gen_frame + 0x4)),param_1,5);
  return *((uint *)GEN_TOP((*(int *)(this + 0x10) + 8 + (*(int *)(gen_frame + 0x8)) * 0x10)));
}

/* ref: hkDataObjectDict::vf12 */
uint F_00e16710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe16710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  F_00e16490(this,&(*(int *)(gen_frame + 0x4)),param_1,1);
  if ((**(int * PTR32 *)((*(int *)(gen_frame + 0x4)) + 0x10) != 2) && (**(int * PTR32 *)((*(int *)(gen_frame + 0x4)) + 0x10) != 4)) {
    return 0;
  }
  return *((uint *)GEN_TOP((*(int *)(this + 0x10) + 8 + (*(int *)(gen_frame + 0x8)) * 0x10)));
}

/* ref: hkDataObjectDict::vf13 */
uint F_00e16760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe16760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  F_00e16490(this,((undefined1 *)(gen_frame + 0x4)),param_1,6);
  return *((uint *)GEN_TOP((*(int *)(this + 0x10) + 8 + (*(int *)(gen_frame + 0x8)) * 0x10)));
}

/* ref: hkDataObjectDict::vf14 */
uint F_00e16790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe16790u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  F_00e16490(this,((undefined1 *)(gen_frame + 0x4)),param_1,9);
  uVar1 = F_00e0d670(*((undefined4 *)GEN_TOP((*(int *)(this + 0x10) + 8 + (*(int *)(gen_frame + 0x8)) * 0x10))),param_2);
  return uVar1;
}

/* ref: hkDataObjectDict::vf15 */
float F_00e167d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe167d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  F_00e16490(this,((undefined1 *)(gen_frame + 0x4)),param_1,3);
  return *((float *)GEN_TOP((*(int *)(this + 0x10) + 8 + (*(int *)(gen_frame + 0x8)) * 0x10)));
}

/* ref: hkDataObjectDict::vf24 */
uint F_00e16800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe16800u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this_00;
  int iVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  this_00 = (undefined *)*param_2;
  F_00e16490(this_00,&(*(int *)(gen_frame + 0xc)),param_2[1],1);
  F_00e13d50(this,&(*(int *)(gen_frame + 0x4)),param_1,1);
  iVar1 = *((int *)GEN_TOP((*(int *)((int)this_00 + 0x10) + 8 + (*(int *)(gen_frame + 0x10)) * 0x10)));
  (*(int *)(gen_frame + 0x14)) = iVar1;
  (*(undefined4 *)(gen_frame + 0x18)) = *((undefined4 *)GEN_TOP((*(int *)((int)this_00 + 0x10) + 0xc + (*(int *)(gen_frame + 0x10)) * 0x10)));
  piVar2 = *(int * PTR32 *)((*(int *)(gen_frame + 0x4)) + 0x10);
  iVar3 = **(int * PTR32 *)((*(int *)(gen_frame + 0xc)) + 0x10);
  if ((iVar3 == 8) || (iVar3 == 9)) {
    if (*piVar2 != 8) {
      bVar5 = *piVar2 == 9;
      goto LAB_00e1687c;
    }
  }
  else if ((iVar3 != 7) || (*piVar2 != 7)) {
    if (iVar3 != 6) goto LAB_00e16888;
    bVar5 = *(int * PTR32 *)((*(int *)(gen_frame + 0xc)) + 0x10) == piVar2;
LAB_00e1687c: ;
    if (!bVar5) goto LAB_00e16888;
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  }
LAB_00e16888: ;
  iVar1 = *(int *)((int)this_00 + 0x10);
  iVar3 = *(int *)(this + 0x10);
  *(undefined4 *)(iVar3 + 8 + (*(int *)(gen_frame + 0x8)) * 0x10) = *(undefined4 *)(iVar1 + 8 + (*(int *)(gen_frame + 0x10)) * 0x10);
  uVar4 = *(uint *)(iVar1 + 0xc + (*(int *)(gen_frame + 0x10)) * 0x10);
  *(uint *)(iVar3 + 0xc + (*(int *)(gen_frame + 0x8)) * 0x10) = uVar4;
  return uVar4;
}

/* ref: hkDataObjectDict::vf18 */
uint F_00e168b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe168b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  int * in_ecx;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  uVar2 = F_00e13d50(this,&(*(int *)(gen_frame + 0x4)),param_1,1);
  in_ecx = *(int * PTR32 *)((*(int *)(gen_frame + 0x4)) + 0x10);
  if ((*in_ecx == 9) && (*(int *)in_ecx[1] == 3)) {
    piVar1 = ((int *)GEN_TOP((*(int *)(this + 0x10) + 8 + (*(int *)(gen_frame + 0x8)) * 0x10)));
    if (*((int *)GEN_TOP((*(int *)(this + 0x10) + 8 + (*(int *)(gen_frame + 0x8)) * 0x10))) == 0) {
      piVar3 = (int *)F_00e0dd10(*((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + 0xc))),(int *)in_ecx[1],0);
      *piVar1 = (int)piVar3;
      iVar4 = *piVar3;
      uVar2 = F_00e19c70(in_ecx);
      ((code *)*(gen_code32 *)(iVar4 + 0x10))(*piVar1,uVar2);
      *(int *)(*piVar1 + 8) = *(int *)(*piVar1 + 8) + 1;
    }
    iVar4 = param_3 * 4;
    uVar2 = F_00e0d670(*piVar1,param_3);
    uVar2 = F_00da1010(uVar2,param_2,iVar4);
  }
  return uVar2;
}

/* ref: ArrayArrayImplementation::vf25 */
uint F_00e16950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe16950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((*(int *)(this + 0xc) + param_1 * 4)));
  if (uVar1 == 0) {
    uVar1 = F_00e0dd10(*(undefined4 *)(this + 0x18),*((undefined4 *)GEN_TOP((*(int *)(this + 0x1c) + 4))),0);
    *(int *)(uVar1 + 8) = *(int *)(uVar1 + 8) + 1;
    *((uint *)GEN_TOP((*(int *)(this + 0xc) + param_1 * 4))) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00e16990 */
uint F_00e16990(unsigned int gen_a0)
{
  GEN_ENTER(0xe16990u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00dbdb20((undefined *)((int)this + 0xc),&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
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

/* ref: FUN_00e169f0 */
uint F_00e169f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe169f0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]));
  uVar2 = F_00e16440(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))),uVar2,&(*(int * PTR32 *)&gen_args[1]));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) == 0) {
    *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) = piVar1;
  }
  return uVar2;
}

/* ref: FUN_00e16a20 */
uint F_00e16a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe16a20u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  uint uVar3;
  undefined * this_00;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x10))))((*(int * PTR32 *)&gen_args[1]));
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  this_00 = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  uVar3 = F_00da3ae0(this_00,uVar3);
  uVar3 = F_00da3e40(this_00,&(*(char *)(gen_frame + 0xb)),uVar3);
  if ((*(char *)(gen_frame + 0xb)) == '\0') {
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    uVar3 = F_00da3a20(this_00,uVar3,piVar1);
    if (uVar2 != 0) {
      uVar3 = F_00e163b0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))),uVar2,&(*(int * PTR32 *)&gen_args[1]));
    }
  }
  return uVar3;
}

/* ref: FUN_00e16aa0 */
uint F_00e16aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe16aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x230];
  undefined4 uVar1;
  undefined4 * puVar2;
  uint uVar3;
  LPVOID pvVar4;
  uint uVar5;
  int * piVar6;
  undefined * pvVar7;
  int iVar8;
  int iVar9;
  char * pcVar10;
  char * pcVar11;
  
  piVar6 = param_1;
  uVar3 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  if (uVar3 == 0) {
    param_1 = (int *)0x0;
  }
  else {
    param_1 = (int *)F_00da4190((undefined *)((int)this + 4),uVar3,0);
  }
  uVar3 = F_00e11310((undefined *)((int)this + 0x14),piVar6);
  if (uVar3 != 0xffffffff) {
    iVar9 = *(int *)((int)this + 0x14);
    do {
      F_00e16aa0(this,(int *)*(undefined4 *)(iVar9 + uVar3 * 8));
      iVar9 = *(int *)((int)this + 0x14);
      uVar3 = *(uint *)(iVar9 + 4 + uVar3 * 8);
    } while (uVar3 != 0xffffffff);
  }
  uVar3 = F_00e113a0((undefined *)((int)this + 0x34),param_1);
  if (uVar3 != 0xffffffff) {
    (*(uint *)(gen_frame + 0x218)) = 0;
    (*(uint *)(gen_frame + 0x21c)) = 0;
    (*(uint *)(gen_frame + 0x220)) = 0x80000000;
    (*(int *)(gen_frame + 0x228)) = 0x200;
    pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar5 = *(uint *)((int)pvVar4 + 0xc);
    if ((*(int *)((int)pvVar4 + 8) < 0x800) || (*(uint *)((int)pvVar4 + 0x10) < uVar5 + 0x800)) {
      uVar5 = F_00d94390(pvVar4,0x800);
    }
    else {
      *(uint *)((int)pvVar4 + 0xc) = uVar5 + 0x800;
    }
    (*(uint *)(gen_frame + 0x218)) = uVar5;
    (*(uint *)(gen_frame + 0x224)) = uVar5;
    (*(uint *)(gen_frame + 0x220)) = 0x80000200;
    do {
      uVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x34) + uVar3 * 8)));
      if ((*(uint *)(gen_frame + 0x21c)) == ((*(uint *)(gen_frame + 0x220)) & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(uint *)(gen_frame + 0x218)),4);
      }
      *(undefined4 *)((*(uint *)(gen_frame + 0x218)) + (*(uint *)(gen_frame + 0x21c)) * 4) = uVar1;
      uVar5 = (*(uint *)(gen_frame + 0x21c)) + 1;
      (*(uint *)(gen_frame + 0x21c)) = uVar5;
      uVar3 = *((uint *)GEN_TOP((*(int *)((int)this + 0x34) + 4 + uVar3 * 8)));
    } while (uVar3 != 0xffffffff);
    iVar9 = 0;
    if (0 < (int)uVar5) {
      do {
        if (*(int *)((int)this + 0x30) == *(int *)((*(uint *)(gen_frame + 0x218)) + iVar9 * 4)) {
          *(undefined4 *)((int)this + 0x30) = 0;
        }
        if (0 < *((short *)GEN_TOP((*(int *)((*(uint *)(gen_frame + 0x218)) + iVar9 * 4) + 6)))) {
          F_00da0a80(((undefined1 *)(gen_frame + 0x208)),((undefined1 *)(gen_frame + 0x8)),0x200);
          piVar6 = *(int * PTR32 *)((*(uint *)(gen_frame + 0x218)) + iVar9 * 4);
          piVar6 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar6 + 8))(piVar6)));
          iVar8 = (int)*((short *)GEN_TOP((*(int *)((*(uint *)(gen_frame + 0x218)) + iVar9 * 4) + 6)));
          pcVar11 = ") from outside the world and it will lead to unexpected behavior or crash.";
          pcVar10 = 
          " is about to be removed and all references to it will be invalid.\nHowever, the object is referenced ("
          ;
          uVar3 = ((code *)*(gen_code32 *)(*piVar6 + 8))(piVar6);
          pvVar7 = (undefined *)F_00d9fe80(((undefined1 *)(gen_frame + 0x208)),"The object of class ");
          pvVar7 = (undefined *)F_00d9fe80(pvVar7,uVar3);
          pvVar7 = (undefined *)F_00d9fe80(pvVar7,pcVar10);
          pvVar7 = (undefined *)F_00d9ff40(pvVar7,iVar8);
          F_00d9fe80(pvVar7,pcVar11);
          ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                    (REFG(int * PTR32, 0x15dff78),1,0x760d3794,((undefined1 *)(gen_frame + 0x8)),"Data\\Dict\\hkDataObjectDict.cpp",0xb87);
          F_00d9fda0(((undefined1 *)(gen_frame + 0x208)));
        }
        F_00e13ac0(*(undefined * PTR32 *)((*(uint *)(gen_frame + 0x218)) + iVar9 * 4));
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)(*(uint *)(gen_frame + 0x21c)));
    }
    iVar9 = 0;
    if (0 < (int)(*(uint *)(gen_frame + 0x21c))) {
      do {
        puVar2 = *(undefined4 * PTR32 *)((*(uint *)(gen_frame + 0x218)) + iVar9 * 4);
        piVar6 = puVar2 + 2;
        *piVar6 = *piVar6 + -1;
        if (*piVar6 == 0) {
          ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)(*(uint *)(gen_frame + 0x21c)));
    }
    F_00e113c0((undefined *)((int)this + 0x34),param_1);
    iVar9 = (*(int *)(gen_frame + 0x228));
    uVar3 = (*(uint *)(gen_frame + 0x224));
    if ((*(uint *)(gen_frame + 0x224)) == (*(uint *)(gen_frame + 0x218))) {
      (*(uint *)(gen_frame + 0x21c)) = 0;
    }
    pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar5 = iVar9 * 4 + 0x7fU & 0xffffff80;
    if (((*(int *)((int)pvVar4 + 8) < (int)uVar5) || (uVar5 + uVar3 != *(int *)((int)pvVar4 + 0xc)))
       || (*(uint *)((int)pvVar4 + 0x14) == uVar3)) {
      F_00d945c0(pvVar4,uVar3,uVar5);
    }
    else {
      *(uint *)((int)pvVar4 + 0xc) = uVar3;
    }
    (*(uint *)(gen_frame + 0x21c)) = 0;
    uVar3 = (*(uint *)(gen_frame + 0x220));
    if (-1 < (int)(*(uint *)(gen_frame + 0x220))) {
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                        (&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x218)),(*(uint *)(gen_frame + 0x220)) * 4);
    }
  }
  return uVar3;
}

/* ref: FUN_00e16d40 */
uint F_00e16d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe16d40u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  undefined4 * puVar2;
  undefined * pvVar3;
  uint uVar4;
  int * piVar5;
  LPVOID pvVar6;
  undefined * this_00;
  uint uVar7;
  int * this_01;
  int iVar8;
  
  this_01 = (*(int * PTR32 *)&gen_args[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]));
  (*(uint *)(gen_frame + 0x20)) = uVar4;
  if (uVar4 == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)F_00da4190(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),uVar4,0);
  }
  F_00e16aa0((*(undefined * PTR32 *)&gen_args[0]),this_01);
  uVar4 = ((code *)*(gen_code32 *)(*piVar5 + 0x10))(piVar5);
  if (uVar4 != 0) {
    F_00e13050(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))),uVar4,&(*(int * PTR32 *)&gen_args[1]));
  }
  F_00e139b0(this_01);
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(uint *)(gen_frame + 0x10)) = 0;
  (*(uint *)(gen_frame + 0x14)) = 0x80000000;
  (*(int *)(gen_frame + 0x1c)) = 0x40;
  pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar4 = *(uint *)((int)pvVar6 + 0xc);
  if ((*(int *)((int)pvVar6 + 8) < 0x100) || (*(uint *)((int)pvVar6 + 0x10) < uVar4 + 0x100)) {
    uVar4 = F_00d94390(pvVar6,0x100);
  }
  else {
    *(uint *)((int)pvVar6 + 0xc) = uVar4 + 0x100;
  }
  (*(uint *)(gen_frame + 0xc)) = uVar4;
  (*(uint *)(gen_frame + 0x14)) = 0x80000040;
  (*(uint *)(gen_frame + 0x18)) = uVar4;
  uVar4 = F_00e11310(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))),this_01);
  (*(bool *)(gen_frame + 0x2b)) = uVar4 != 0xffffffff;
  if (uVar4 != 0xffffffff) {
    for (; uVar4 != 0xffffffff; uVar4 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) + 4 + uVar4 * 8)))) {
      uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) + uVar4 * 8)));
      if ((*(uint *)(gen_frame + 0x10)) == ((*(uint *)(gen_frame + 0x14)) & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(uint *)(gen_frame + 0xc)),4);
      }
      *(undefined4 *)((*(uint *)(gen_frame + 0xc)) + (*(uint *)(gen_frame + 0x10)) * 4) = uVar1;
      (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) + 1;
      this_01 = (*(int * PTR32 *)&gen_args[1]);
    }
  }
  iVar8 = 0;
  if (0 < (int)(*(uint *)(gen_frame + 0x10))) {
    do {
      F_00e16d40((*(undefined * PTR32 *)&gen_args[0]),(int *)*(undefined4 *)((*(uint *)(gen_frame + 0xc)) + iVar8 * 4));
      puVar2 = *(undefined4 * PTR32 *)((*(uint *)(gen_frame + 0xc)) + iVar8 * 4);
      piVar5 = puVar2 + 2;
      *piVar5 = *piVar5 + -1;
      if (*piVar5 == 0) {
        ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < (int)(*(uint *)(gen_frame + 0x10)));
  }
  if ((*(bool *)(gen_frame + 0x2b)) != false) {
    F_00e11330(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))),this_01);
  }
  iVar8 = (*(int *)(gen_frame + 0x1c));
  uVar4 = (*(uint *)(gen_frame + 0x18));
  if ((*(uint *)(gen_frame + 0x18)) == (*(uint *)(gen_frame + 0xc))) {
    (*(uint *)(gen_frame + 0x10)) = 0;
  }
  pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar7 = iVar8 * 4 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)pvVar6 + 8) < (int)uVar7) || (uVar7 + uVar4 != *(int *)((int)pvVar6 + 0xc)))
     || (*(uint *)((int)pvVar6 + 0x14) == uVar4)) {
    F_00d945c0(pvVar6,uVar4,uVar7);
  }
  else {
    *(uint *)((int)pvVar6 + 0xc) = uVar4;
  }
  (*(uint *)(gen_frame + 0x10)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x14))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x14)) * 4);
  }
  pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x24));
  uVar4 = (*(uint *)(gen_frame + 0x20));
  this_00 = (undefined *)F_00da4190((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x60),(*(uint *)(gen_frame + 0x20)),0);
  F_00da3f00((undefined *)((int)pvVar3 + 0x60),uVar4);
  F_00d91a80(this_00);
  uVar4 = F_00da3f00((undefined *)((int)pvVar3 + 4),uVar4);
  return uVar4;
}

/* ref: FUN_00e16f50 */
uint F_00e16f50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe16f50u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int * this_00;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  piVar1 = (*(int * PTR32 *)&gen_args[2]);
  if ((*(int *)&gen_args[1]) != 0) {
    this_00 = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14)));
    uVar2 = F_00e11310(this_00,(*(int *)&gen_args[1]));
    if (uVar2 != 0xffffffff) {
      do {
        if (*(int * PTR32 *)(*this_00 + uVar2 * 8) == piVar1) {
          F_00e12fc0(this_00,(*(int *)&gen_args[1]),uVar2);
          break;
        }
        uVar2 = *(uint *)(*this_00 + 4 + uVar2 * 8);
      } while (uVar2 != 0xffffffff);
    }
  }
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
  uVar2 = 0;
  if (uVar3 != 0) {
    uVar2 = F_00e163b0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))),uVar3,&(*(int * PTR32 *)&gen_args[2]));
  }
  return uVar2;
}

/* ref: FUN_00e16fc0 */
uint F_00e16fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe16fc0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint * this_00;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]));
  this_00 = ((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34)));
  uVar2 = F_00e113a0(this_00,uVar1);
  uVar3 = uVar2;
  for (; (uVar1 != 0 && (uVar2 != 0xffffffff)); uVar2 = *(uint *)(*this_00 + 4 + uVar2 * 8)) {
    uVar3 = *this_00;
    if ((*(int * PTR32 *)&gen_args[1]) == *(int * PTR32 *)(uVar3 + uVar2 * 8)) {
      F_00e130a0(this_00,uVar1,uVar2);
      uVar3 = F_00e16440(this_00,(*(undefined4 *)&gen_args[2]),&(*(int * PTR32 *)&gen_args[1]));
      uVar1 = 0;
    }
  }
  return uVar3;
}

/* ref: FUN_00e17020 */
uint F_00e17020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe17020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00e0e030(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,0x7c);
  }
  return (uint)this;
}

/* ref: FUN_00e17080 */
uint F_00e17080(unsigned int gen_a0)
{
  GEN_ENTER(0xe17080u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkDataWorldDict::vf0 */
uint F_00e170b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe170b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00e0ed30(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00e170f0 */
uint F_00e170f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe170f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e17100 */
uint F_00e17100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe17100u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  uint uVar2;
  char * pcVar3;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x1c))))((*(int * PTR32 *)&gen_args[1]),0x10);
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,&(*(undefined4 *)(gen_frame + 0xc)),0x10);
  if (uVar2 != 0x10) {
    *(*(undefined4 * PTR32 *)&gen_args[0]) = 0;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  ((code *)*(gen_code32 *)(*piVar1 + 0x20))(piVar1);
  pcVar3 = (char *)F_00dea6f0((int)&(*(int * PTR32 *)&gen_args[1]) + 3,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)));
  if (*pcVar3 != '\0') {
    *(*(undefined4 * PTR32 *)&gen_args[0]) = 2;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = 1;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00e171c0 */
uint F_00e171c0(unsigned int gen_a0)
{
  GEN_ENTER(0xe171c0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_00d91340(in_ecx);
  F_00d91340(in_ecx + 4);
  return in_ecx;
}

/* ref: hkMemoryResourceHandle::vf5 */
uint F_00e171e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe171e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00d91520(this + 0xc,param_1);
  return uVar1;
}

/* ref: hkMemoryResourceHandle::vf7 */
uint F_00e171f0(unsigned int gen_a0)
{
  GEN_ENTER(0xe171f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_010596b0(this + 8);
  return uVar1;
}

/* ref: hkMemoryResourceHandle::vf8 */
unsigned int F_00e17200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe17200u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_01059680(this + 8,param_1,param_2);
  return 0;
}

/* ref: hkMemoryResourceHandle::vf4 */
uint F_00e17210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe17210u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined * puVar1;
  
  puVar1 = ((undefined *)GEN_TOP((*(uint *)(in_ecx + 0xc) & 0xfffffffe)));
  if (puVar1 == (undefined *)0x0) {
    puVar1 = &REFG(undefined, 0x114c8d4);
  }
  return (uint)puVar1;
}

/* ref: hkMemoryResourceHandle::vf6 */
uint F_00e17220(unsigned int gen_a0)
{
  GEN_ENTER(0xe17220u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: hkMemoryResourceContainer::vf4 */
uint F_00e17230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe17230u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *(uint *)(in_ecx + 8) & 0xfffffffe;
}

/* ref: hkMemoryResourceContainer::vf12 */
uint F_00e17240(unsigned int gen_a0)
{
  GEN_ENTER(0xe17240u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x20);
}

/* ref: hkContainerResourceMap::vf0 */
uint F_00e17250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe17250u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  int * piVar1;
  uint uVar2;
  
  if (param_2 != (uint *)0x0) {
    *param_2 = 0;
  }
  piVar1 = (int *)F_00da4190(this + 4,param_1,0);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  if (param_2 != (uint *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1);
    *param_2 = uVar2;
  }
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1);
  return uVar2;
}

/* ref: hkMemoryResourceContainer::vf13 */
uint F_00e172a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe172a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = 0;
  do {
    if ((param_2 == 0) || (*(int *)(this + 0x20) <= iVar3)) break;
    iVar1 = iVar3 * 4;
    iVar3 = iVar3 + 1;
  } while (*((int *)GEN_TOP((*(int *)(this + 0x1c) + iVar1))) != param_2);
  if (iVar3 < *(int *)(this + 0x20)) {
    do {
      uVar2 = *((uint *)GEN_TOP((*(int *)(this + 0x1c) + iVar3 * 4)));
      if ((param_1 == 0) ||
         (uVar4 = F_00da0d20(param_1,*(uint *)(uVar2 + 8) & 0xfffffffe), uVar4 == 0)) {
        return uVar2;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(this + 0x20));
  }
  return 0;
}

/* ref: hkMemoryResourceHandle::vf9 */
uint F_00e17310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe17310u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * phVar1;
  int in_ecx;
  undefined * this_00;
  uint uVar2;
  
  phVar1 = this + 0x10;
  if (*(uint *)(this + 0x14) == (*(uint *)(this + 0x18) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),phVar1,8);
  }
  in_ecx = *(int *)phVar1 + *(int *)(this + 0x14) * 8;
  if (in_ecx != 0) {
    F_00d91340(in_ecx);
    F_00d91340(in_ecx + 4);
  }
  this_00 = ((undefined *)GEN_TOP((*(int *)phVar1 + *(int *)(this + 0x14) * 8)));
  *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
  F_00d91520(this_00,param_1);
  uVar2 = F_00d91520((undefined *)((int)this_00 + 4),param_2);
  return uVar2;
}

/* ref: hkMemoryResourceHandle::vf11 */
uint F_00e17380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe17380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x440];
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  uint * puVar4;
  undefined * pvVar5;
  uint uVar6;
  int iVar7;
  uint * puVar8;
  undefined1 * puVar9;
  
  param_1[1] = 0;
  iVar7 = *(int *)(this + 0x14);
  uVar2 = param_1[2] & 0x3fffffff;
  (*(undefined * PTR32 *)(gen_frame + 0x434)) = this;
  if ((int)uVar2 < iVar7) {
    iVar3 = uVar2 * 2;
    if ((int)(uVar2 * 2) <= iVar7) {
      iVar3 = iVar7;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),param_1,iVar3,0x10);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  (*(uint *)(gen_frame + 0x438)) = 0;
  if (0 < *(int *)(this + 0x14)) {
    do {
      puVar4 = (uint *)(param_1[1] * 0x10 + *param_1);
      param_1[1] = param_1[1] + 1;
      (*(uint * PTR32 *)(gen_frame + 0x42c)) = puVar4;
      uVar2 = *((uint *)GEN_TOP((*(int *)(this + 0x10) + (*(uint *)(gen_frame + 0x438)) * 8))) & 0xfffffffe;
      (*(int *)(gen_frame + 0x430)) = *(int *)(this + 8);
      pvVar5 = (undefined *)F_010596b0(this + 8);
      uVar6 = F_00da0ef0(uVar2,0x2e);
      while (uVar6 != 0) {
        iVar7 = uVar6 - uVar2;
        F_00da1010(((undefined1 *)(gen_frame + 0x20c)),uVar2,iVar7);
        ((undefined1 *)(gen_frame + 0x20c))[(int)(iVar7)] = 0;
        uVar2 = uVar2 + 1 + iVar7;
        uVar6 = F_00d928d0(pvVar5,((undefined1 *)(gen_frame + 0x20c)));
        if (uVar6 == 0) goto LAB_00e17512;
        if (*(char *)(uVar6 + 0xc) != '\x19') {
          F_00da0a80(((undefined1 *)(gen_frame + 0x414)),((undefined1 *)(gen_frame + 0xc)),0x200);
          puVar9 = ((undefined1 *)(gen_frame + 0x20c));
          pvVar5 = (undefined *)F_00d9fe80(((undefined1 *)(gen_frame + 0x414)),"Member is not of type struct : ");
          F_00d9fe80(pvVar5,puVar9);
          ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                    (REFG(int * PTR32, 0x15dff78),1,0xf032edfe,((undefined1 *)(gen_frame + 0xc)),"ResourceDatabase\\hkResourceHandle.cpp",
                     0x80);
          F_00d9fda0(((undefined1 *)(gen_frame + 0x414)));
          goto LAB_00e17512;
        }
        pvVar5 = (undefined *)F_00da5fd0(uVar6);
        (*(int *)(gen_frame + 0x430)) = (*(int *)(gen_frame + 0x430)) + (uint)*(ushort *)(uVar6 + 0x12);
        uVar6 = F_00da0ef0(uVar2,0x2e);
        puVar4 = (*(uint * PTR32 *)(gen_frame + 0x42c));
      }
      uVar6 = F_00d928d0(pvVar5,uVar2);
      if (uVar6 == 0) {
LAB_00e17512: ;
        param_1[1] = param_1[1] + -1;
        F_00da0a80(((undefined1 *)(gen_frame + 0x420)),((undefined1 *)(gen_frame + 0xc)),0x200);
        pvVar5 = (undefined *)F_00d9fe80(((undefined1 *)(gen_frame + 0x420)),"Cannot find member : ");
        F_00d9fe80(pvVar5,uVar2);
        ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                  (REFG(int * PTR32, 0x15dff78),1,0xf032edf1,((undefined1 *)(gen_frame + 0xc)),"ResourceDatabase\\hkResourceHandle.cpp",0x92
                  );
        F_00d9fda0(((undefined1 *)(gen_frame + 0x420)));
      }
      else {
        *puVar4 = uVar2;
        puVar8 = (uint *)F_0105a6b0(((undefined1 *)(gen_frame + 0x40c)),(*(int *)(gen_frame + 0x430)),uVar6);
        puVar4[2] = *puVar8;
        puVar4[3] = puVar8[1];
        puVar4[1] = *((uint *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x434)) + 0x10) + 4 + (*(uint *)(gen_frame + 0x438)) * 8))) & 0xfffffffe;
      }
      uVar2 = (*(uint *)(gen_frame + 0x438)) + 1;
      (*(uint *)(gen_frame + 0x438)) = uVar2;
      this = (*(undefined * PTR32 *)(gen_frame + 0x434));
    } while ((int)uVar2 < *(int *)((*(undefined * PTR32 *)(gen_frame + 0x434)) + 0x14));
  }
  return uVar2;
}

/* ref: FUN_00e17590 */
unsigned int F_00e17590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe17590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  for (this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x34))(this,0,0))); this_00 != (undefined *)0x0;
      this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x34))(this,0,this_00)))) {
    F_00e17590(this_00,param_1);
  }
  for (uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x20))(this,0,0,0); uVar1 != 0;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x20))(this,0,0,uVar1)) {
    if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_1,4);
    }
    *(uint *)(*param_1 + param_1[1] * 4) = uVar1;
    param_1[1] = param_1[1] + 1;
  }
  return 0;
}

/* ref: FUN_00e17630 */
unsigned int F_00e17630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe17630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined * this_00;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_1,4);
  }
  *(undefined * PTR32 *)(*param_1 + param_1[1] * 4) = this;
  param_1[1] = param_1[1] + 1;
  for (this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x34))(this,0,0))); this_00 != (undefined *)0x0;
      this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x34))(this,0,this_00)))) {
    F_00e17630(this_00,param_1);
  }
  return 0;
}

/* ref: hkMemoryResourceHandle::vf12 */
uint F_00e176a0(unsigned int gen_a0)
{
  GEN_ENTER(0xe176a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  uVar1 = *(uint *)(this + 0x10);
  iVar2 = *(int *)(this + 0x14) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(uVar1 + iVar2 * 8);
    do {
      F_00d91510((undefined *)((int)this_00 + 4));
      uVar1 = F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -8);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  *(undefined4 *)(this + 0x14) = 0;
  return uVar1;
}

/* ref: hkMemoryResourceHandle::vf10 */
unsigned int F_00e176e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe176e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined * this_00;
  int iVar4;
  
  iVar4 = 0;
  if (0 < *(int *)(this + 0x14)) {
    while (uVar1 = F_00da0d20(*((uint *)GEN_TOP((*(int *)(this + 0x10) + iVar4 * 8))) & 0xfffffffe,param_1),
          uVar1 != 0) {
      iVar4 = iVar4 + 1;
      if (*(int *)(this + 0x14) <= iVar4) {
        return 0;
      }
    }
    this_00 = ((undefined *)GEN_TOP((*(int *)(this + 0x10) + iVar4 * 8)));
    F_00d91510((undefined *)((int)this_00 + 4));
    F_00d91510(this_00);
    iVar2 = *(int *)(this + 0x14) + -1;
    *(int *)(this + 0x14) = iVar2;
    if (iVar2 != iVar4) {
      puVar3 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x10) + iVar4 * 8)));
      iVar4 = (*(int *)(this + 0x10) + iVar2 * 8) - (int)puVar3;
      iVar2 = 2;
      do {
        *puVar3 = *(undefined4 *)(iVar4 + (int)puVar3);
        puVar3 = puVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return 0;
}

/* ref: hkMemoryResourceHandle::vf13 */
uint F_00e17770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe17770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x240];
  code * pcVar1;
  undefined * phVar2;
  uint uVar3;
  undefined4 * in_ecx;
  undefined * pvVar4;
  char * pcVar5;
  uint uVar6;
  uint * puVar7;
  int iVar8;
  undefined * puVar9;
  
  pcVar1 = *(gen_code32 *)(*(int *)this + 0x2c);
  (*(undefined * PTR32 *)(gen_frame + 0x218)) = this;
  (*(int *)(gen_frame + 0x22c)) = 0;
  (*(int *)(gen_frame + 0x230)) = 0;
  (*(uint *)(gen_frame + 0x234)) = 0x80000000;
  (*pcVar1)(this,&(*(int *)(gen_frame + 0x22c)));
  iVar8 = (*(int *)(gen_frame + 0x230)) + -1;
  (*(int *)(gen_frame + 0x220)) = iVar8;
  if (-1 < iVar8) {
    (*(int *)(gen_frame + 0x224)) = iVar8 * 0x10;
    do {
      iVar8 = (*(int *)(gen_frame + 0x224)) + (*(int *)(gen_frame + 0x22c));
      uVar3 = ((code *)*(gen_code32 *)*param_1)(param_1,*(undefined4 *)(iVar8 + 4),&(*(undefined * PTR32 *)(gen_frame + 0x238)));
      (*(uint *)(gen_frame + 0x21c)) = uVar3;
      if (uVar3 != 0) {
        iVar8 = iVar8 + 8;
        in_ecx = (undefined4 *)F_0105a8f0(iVar8);
        pvVar4 = (undefined *)F_00da5fd0(in_ecx);
        pcVar5 = (char *)F_00d92650(pvVar4,&(*(undefined1 *)(gen_frame + 0x22b)),(*(undefined * PTR32 *)(gen_frame + 0x238)));
        phVar2 = (*(undefined * PTR32 *)(gen_frame + 0x218));
        if ((*pcVar5 == '\0') && ((*(undefined * PTR32 *)(gen_frame + 0x238)) != pvVar4)) {
          F_00da0a80(((undefined1 *)(gen_frame + 0x20c)),((undefined1 *)(gen_frame + 0xc)),0x200);
          uVar3 = F_00d92610(pvVar4);
          puVar9 = &REFG(undefined, 0x114e50c);
          uVar6 = F_00d92610((*(undefined * PTR32 *)(gen_frame + 0x238)));
          pvVar4 = (undefined *)F_00d9fe80(((undefined1 *)(gen_frame + 0x20c)),"Class mismatch, cannot resolve link: ");
          pvVar4 = (undefined *)F_00d9fe80(pvVar4,uVar6);
          pvVar4 = (undefined *)F_00d9fe80(pvVar4,puVar9);
          F_00d9fe80(pvVar4,uVar3);
          ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                    (REFG(int * PTR32, 0x15dff78),1,0xf034ed21,((undefined1 *)(gen_frame + 0xc)),"ResourceDatabase\\hkResourceHandle.cpp",
                     0xb2);
          F_00d9fda0(((undefined1 *)(gen_frame + 0x20c)));
        }
        else {
          uVar3 = ((code *)*(gen_code32 *)(*(int *)(*(undefined * PTR32 *)(gen_frame + 0x218)) + 0x18))((*(undefined * PTR32 *)(gen_frame + 0x218)));
          if ((*(uint *)(gen_frame + 0x21c)) == uVar3) {
            (*(int *)(gen_frame + 0x230)) = 0;
            uVar3 = (*(uint *)(gen_frame + 0x234));
            goto joined_r0x00e17901;
          }
          puVar7 = (uint *)F_0105a760(iVar8,0);
          *puVar7 = (*(uint *)(gen_frame + 0x21c));
          ((code *)*(gen_code32 *)(*(int *)phVar2 + 0x28))(phVar2,*in_ecx);
        }
      }
      iVar8 = (*(int *)(gen_frame + 0x220)) + -1;
      (*(int *)(gen_frame + 0x224)) = (*(int *)(gen_frame + 0x224)) + -0x10;
      (*(int *)(gen_frame + 0x220)) = iVar8;
    } while (-1 < iVar8);
  }
  (*(int *)(gen_frame + 0x230)) = 0;
  uVar3 = (*(uint *)(gen_frame + 0x234));
joined_r0x00e17901: ;
  if (-1 < (int)uVar3) {
    (*(int *)(gen_frame + 0x230)) = 0;
    (*(uint *)(gen_frame + 0x234)) = uVar3;
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x22c)),uVar3 << 4);
  }
  return uVar3;
}

/* ref: hkMemoryResourceContainer::vf15 */
uint F_00e17920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe17920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  (*(int *)(gen_frame + 0x0)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0x80000000;
  F_00e17590(this,&(*(int *)(gen_frame + 0x0)));
  iVar3 = 0;
  if (0 < (*(int *)(gen_frame + 0x4))) {
    do {
      piVar1 = *(int * PTR32 *)((*(int *)(gen_frame + 0x0)) + iVar3 * 4);
      ((code *)*(gen_code32 *)(*piVar1 + 0x34))(piVar1,param_1);
      iVar3 = iVar3 + 1;
    } while (iVar3 < (*(int *)(gen_frame + 0x4)));
  }
  (*(int *)(gen_frame + 0x4)) = 0;
  uVar2 = (*(uint *)(gen_frame + 0x8));
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) * 4);
  }
  return uVar2;
}

/* ref: hkMemoryResourceContainer::vf8 */
uint F_00e179a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe179a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x2a0];
  int iVar1;
  int * piVar2;
  code * pcVar3;
  int iVar4;
  uint uVar5;
  undefined * pvVar6;
  char * pcVar7;
  uint uVar8;
  undefined * puVar9;
  
  iVar4 = 0;
  do {
    if (((*(int *)&gen_args[3]) == 0) || (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x14))) <= iVar4)) break;
    iVar1 = iVar4 * 4;
    iVar4 = iVar4 + 1;
  } while (*((int *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x10))) + iVar1))) != (*(int *)&gen_args[3]));
  (*(int *)(gen_frame + 0x298)) = iVar4;
  if (iVar4 < *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x14)))) {
    do {
      piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x10))) + iVar4 * 4)));
      (*(int *)(gen_frame + 0x298)) = iVar4;
      if ((*(int *)&gen_args[1]) == 0) {
LAB_00e17a81: ;
        if ((((*(undefined * PTR32 *)&gen_args[2]) == (undefined *)0x0) ||
            (pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2))), (*(undefined * PTR32 *)&gen_args[2]) == pvVar6)) ||
           (pcVar7 = (char *)F_00d92650((*(undefined * PTR32 *)&gen_args[2]),(int)&(*(int *)&gen_args[3]) + 3,pvVar6), *pcVar7 != '\0')) {
          return (uint)piVar2;
        }
        iVar4 = (*(int *)(gen_frame + 0x298));
        if ((*(int *)&gen_args[1]) != 0) {
          F_00da0a80(((undefined1 *)(gen_frame + 0x28c)),((undefined1 *)(gen_frame + 0x0)),0x200);
          uVar5 = F_00d92610(pvVar6);
          puVar9 = &REFG(undefined, 0x114e50c);
          uVar8 = F_00d92610((*(undefined * PTR32 *)&gen_args[2]));
          pvVar6 = (undefined *)F_00d9fe80(((undefined1 *)(gen_frame + 0x28c)),"Class mismatch, cannot resolve link: ");
          pvVar6 = (undefined *)F_00d9fe80(pvVar6,uVar8);
          pvVar6 = (undefined *)F_00d9fe80(pvVar6,puVar9);
          F_00d9fe80(pvVar6,uVar5);
          ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                    (REFG(int * PTR32, 0x15dff78),1,0xf034ed22,((undefined1 *)(gen_frame + 0x0)),"ResourceDatabase\\hkResourceHandle.cpp",
                     0x138);
          F_00d9fda0(((undefined1 *)(gen_frame + 0x28c)));
          return 0;
        }
      }
      else {
        pcVar3 = *(gen_code32 *)(*piVar2 + 0x10);
        (*(undefined1 * PTR32 *)(gen_frame + 0x200)) = ((undefined1 *)(gen_frame + 0x20c));
        (*(uint *)(gen_frame + 0x208)) = 0x80000080;
        (*(undefined4 *)(gen_frame + 0x204)) = 1;
        ((undefined1 *)(gen_frame + 0x20c))[0] = 0;
        uVar5 = (*pcVar3)(piVar2,&(*(undefined1 * PTR32 *)(gen_frame + 0x200)));
        uVar5 = F_00da0d20((*(int *)&gen_args[1]),uVar5);
        (*(undefined4 *)(gen_frame + 0x204)) = 0;
        if (uVar5 == 0) {
          if (-1 < (int)(*(uint *)(gen_frame + 0x208))) {
            ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),(*(undefined1 * PTR32 *)(gen_frame + 0x200)),(*(uint *)(gen_frame + 0x208)) & 0x3fffffff);
          }
          goto LAB_00e17a81;
        }
        if (-1 < (int)(*(uint *)(gen_frame + 0x208))) {
          ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                    (&REFG(undefined * PTR32, 0x13516a4),(*(undefined1 * PTR32 *)(gen_frame + 0x200)),(*(uint *)(gen_frame + 0x208)) & 0x3fffffff);
        }
      }
      iVar4 = iVar4 + 1;
      (*(int *)(gen_frame + 0x298)) = iVar4;
    } while (iVar4 < *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x14))));
  }
  return 0;
}

/* ref: hkMemoryResourceContainer::vf6 */
uint F_00e17b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe17b70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  int * piVar7;
  
  pvVar2 = param_1;
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1);
  }
  uVar4 = 0;
  if (0 < *(int *)(this + 0x14)) {
    piVar7 = *(int * PTR32 *)(this + 0x10);
    do {
      uVar3 = uVar4;
      if ((undefined *)*piVar7 == param_1) goto LAB_00e17ba8;
      uVar4 = uVar4 + 1;
      piVar7 = piVar7 + 1;
    } while ((int)uVar4 < *(int *)(this + 0x14));
  }
  param_1 = (undefined *)0xffffffff;
  uVar3 = (uint)param_1;
LAB_00e17ba8: ;
  param_1 = (undefined *)uVar3;
  if (pvVar2 != (undefined *)0x0) {
    uVar4 = F_00d91a80(pvVar2);
  }
  if (-1 < (int)param_1) {
    iVar5 = (int)((int)(uintptr_t)param_1) * 4;
    iVar1 = *(int *)(this + 0x10);
    pvVar2 = *(undefined * PTR32 *)(iVar1 + iVar5);
    if (pvVar2 != (undefined *)0x0) {
      F_00d91a80(pvVar2);
    }
    *(undefined4 *)(iVar1 + iVar5) = 0;
    *(int *)(this + 0x14) = *(int *)(this + 0x14) + -1;
    uVar4 = (*(int *)(this + 0x14) - (int)param_1) * 4;
    puVar6 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x10) + iVar5)));
    if (0 < (int)uVar4) {
      iVar5 = (uVar4 - 1 >> 2) + 1;
      do {
        *puVar6 = puVar6[1];
        puVar6 = puVar6 + 1;
        iVar5 = iVar5 + -1;
        uVar4 = 0;
      } while (iVar5 != 0);
    }
  }
  return uVar4;
}

/* ref: hkMemoryResourceContainer::vf11 */
uint F_00e17c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe17c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined * this_00;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1);
  }
  uVar3 = 0;
  if (0 < *(int *)(this + 0x20)) {
    piVar4 = *(int * PTR32 *)(this + 0x1c);
    do {
      uVar5 = uVar3;
      if ((undefined *)*piVar4 == param_1) goto LAB_00e17c41;
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 1;
    } while ((int)uVar3 < *(int *)(this + 0x20));
  }
  uVar5 = 0xffffffff;
LAB_00e17c41: ;
  if (param_1 != (undefined *)0x0) {
    uVar3 = F_00d91a80(param_1);
  }
  if (-1 < (int)uVar5) {
    iVar2 = *(int *)(this + 0x1c);
    iVar1 = uVar5 * 4;
    this_00 = *(undefined * PTR32 *)(iVar2 + iVar1);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00);
    }
    *(undefined4 *)(iVar2 + iVar1) = 0;
    uVar3 = *(int *)(this + 0x20) - 1;
    *(uint *)(this + 0x20) = uVar3;
    if (uVar3 != uVar5) {
      uVar3 = *((uint *)GEN_TOP((*(int *)(this + 0x1c) + uVar3 * 4)));
      *((uint *)GEN_TOP((*(int *)(this + 0x1c) + iVar1))) = uVar3;
    }
  }
  return uVar3;
}

/* ref: hkMemoryResourceContainer::vf14 */
uint F_00e17ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe17ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x220];
  int iVar1;
  undefined * phVar2;
  int * piVar3;
  int iVar4;
  undefined * pvVar5;
  int iVar6;
  undefined4 * puVar7;
  undefined * phVar8;
  char * pcVar9;
  char * pcVar10;
  
  for (phVar2 = param_1; phVar2 != (undefined *)0x0;
      phVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)phVar2 + 0x24))(phVar2)))) {
    if (phVar2 == this) {
      F_00da0a80(((undefined1 *)(gen_frame + 0x208)),((undefined1 *)(gen_frame + 0x8)),0x200);
      pcVar10 = "\' as this would create a circular dependency ";
      phVar8 = param_1 + 8;
      pcVar9 = "\' to \'";
      phVar2 = this + 8;
      pvVar5 = (undefined *)F_00d9fe80(((undefined1 *)(gen_frame + 0x208)),"Cannot parent \'");
      pvVar5 = (undefined *)F_00da0420(pvVar5,phVar2);
      pvVar5 = (undefined *)F_00d9fe80(pvVar5,pcVar9);
      pvVar5 = (undefined *)F_00da0420(pvVar5,phVar8);
      F_00d9fe80(pvVar5,pcVar10);
      ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                (REFG(int * PTR32, 0x15dff78),1,0xabba4554,((undefined1 *)(gen_frame + 0x8)),"ResourceDatabase\\hkResourceHandle.cpp",0x198)
      ;
      F_00d9fda0(((undefined1 *)(gen_frame + 0x208)));
      return 1;
    }
  }
  F_00d919e0(this);
  if (this != (undefined *)0x0) {
    F_00d919e0(this);
  }
  iVar4 = *((int *)GEN_TOP((*(int *)(this + 0xc) + 0x20)));
  iVar6 = 0;
  if (0 < iVar4) {
    piVar3 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x1c)));
    do {
      if ((undefined *)*piVar3 == this) {
        (*(int *)(gen_frame + 0x218)) = iVar6;
        goto LAB_00e17d07;
      }
      iVar6 = iVar6 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar6 < iVar4);
  }
  (*(int *)(gen_frame + 0x218)) = -1;
LAB_00e17d07: ;
  F_00d91a80(this);
  iVar4 = *(int *)(this + 0xc);
  iVar6 = *(int *)(iVar4 + 0x1c);
  iVar1 = (*(int *)(gen_frame + 0x218)) * 4;
  pvVar5 = *(undefined * PTR32 *)(iVar6 + iVar1);
  (*(int *)(gen_frame + 0x214)) = iVar1;
  if (pvVar5 != (undefined *)0x0) {
    F_00d91a80(pvVar5);
  }
  *(undefined4 *)(iVar6 + iVar1) = 0;
  *(int *)(iVar4 + 0x20) = *(int *)(iVar4 + 0x20) + -1;
  iVar6 = (*(int *)(iVar4 + 0x20) - (*(int *)(gen_frame + 0x218))) * 4;
  puVar7 = ((undefined4 *)GEN_TOP((*(int *)(iVar4 + 0x1c) + (*(int *)(gen_frame + 0x214)))));
  if (0 < iVar6) {
    iVar4 = (iVar6 - 1U >> 2) + 1;
    do {
      *puVar7 = puVar7[1];
      puVar7 = puVar7 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  F_00d919e0(this);
  if (*(uint *)(param_1 + 0x20) == (*(uint *)(param_1 + 0x24) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_1 + 0x1c,4);
  }
  puVar7 = ((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x20) * 4)));
  if (puVar7 != (undefined4 *)0x0) {
    F_00d919e0(this);
    *puVar7 = this;
  }
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  F_00d91a80(this);
  *(undefined * PTR32 *)(this + 0xc) = param_1;
  F_00d91a80(this);
  return 0;
}

/* ref: FUN_00e17e60 */
uint F_00e17e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe17e60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  undefined * this_00;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (*(uint *)(gen_frame + 0x98));
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x98)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x98)) = uVar2 & 0xffffff00;
  this_00 = (undefined *)((int)this + 4);
  (*(undefined * PTR32 *)(gen_frame + 0x9c)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x114e560));
  F_00da3de0(this_00,(*(uint *)(gen_frame + 0x98)));
  iVar3 = 0;
  (*(int *)(gen_frame + 0xa0)) = 0;
  (*(int *)(gen_frame + 0xa4)) = 0;
  (*(int *)(gen_frame + 0xa8)) = ((int)0x80000000);
  F_00e17590(param_1,&(*(int *)(gen_frame + 0xa0)));
  if (0 < (*(int *)(gen_frame + 0xa4))) {
    do {
      piVar1 = *(int * PTR32 *)((*(int *)(gen_frame + 0xa0)) + iVar3 * 4);
      (*(undefined1 * PTR32 *)(gen_frame + 0xc)) = ((undefined1 *)(gen_frame + 0x18));
      (*(uint *)(gen_frame + 0x14)) = 0x80000080;
      (*(undefined4 *)(gen_frame + 0x10)) = 1;
      ((undefined1 *)(gen_frame + 0x18))[0] = 0;
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,&(*(undefined1 * PTR32 *)(gen_frame + 0xc)));
      F_00da3a20(this_00,uVar2,piVar1);
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      if (-1 < (int)(*(uint *)(gen_frame + 0x14))) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516a4),(*(undefined1 * PTR32 *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x14)) & 0x3fffffff);
      }
      iVar3 = iVar3 + 1;
      this = (*(undefined * PTR32 *)(gen_frame + 0x9c));
    } while (iVar3 < (*(int *)(gen_frame + 0xa4)));
  }
  (*(int *)(gen_frame + 0xa4)) = 0;
  if (-1 < (*(int *)(gen_frame + 0xa8))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0xa0)),(*(int *)(gen_frame + 0xa8)) * 4);
  }
  return (uint)this;
}

/* ref: FUN_00e17f70 */
uint F_00e17f70(unsigned int gen_a0)
{
  GEN_ENTER(0xe17f70u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *(undefined2 *)((int)in_ecx + 6) = 1;
  *in_ecx = (*(undefined * PTR32 (*)[14])REFP(0x114e56c));
  in_ecx[2] = 0;
  F_00d91340(in_ecx + 3);
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0x80000000;
  return (uint)in_ecx;
}

/* ref: FUN_00e17fb0 */
uint F_00e17fb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe17fb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[14])REFP(0x114e56c));
  F_00d91350(in_ecx + 3,param_2);
  return (uint)in_ecx;
}

/* ref: FUN_00e17fd0 */
uint F_00e17fd0(unsigned int gen_a0)
{
  GEN_ENTER(0xe17fd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[14])REFP(0x114e56c));
  iVar2 = *(int *)((int)this + 0x14) + -1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + iVar2 * 8)));
    do {
      F_00d91510((undefined *)((int)this_00 + 4));
      F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -8);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  iVar2 = *(int *)((int)this + 0x18);
  *(undefined4 *)((int)this + 0x14) = 0;
  if (-1 < iVar2) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x10),iVar2 * 8);
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0x80000000;
  uVar1 = F_00d91510((undefined *)((int)this + 0xc));
  if (*(undefined * PTR32 *)((int)this + 8) != (undefined *)0x0) {
    uVar1 = F_00d91a80(*(undefined * PTR32 *)((int)this + 8));
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: FUN_00e18060 */
uint F_00e18060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe18060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  code * pcVar1;
  undefined * this_00;
  uint uVar2;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x24))(this)));
  if (this_00 != (undefined *)0x0) {
    F_00e18060(this_00,param_1);
  }
  pcVar1 = *(gen_code32 *)(*(int *)this + 0x10);
  (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = ((undefined1 *)(gen_frame + 0xc));
  (*(uint *)(gen_frame + 0x8)) = 0x80000080;
  (*(undefined4 *)(gen_frame + 0x4)) = 1;
  ((undefined1 *)(gen_frame + 0xc))[0] = 0;
  uVar2 = (*pcVar1)(this,&(*(undefined1 * PTR32 *)(gen_frame + 0x0)));
  F_00da4d70(param_1,&REFG(undefined, 0x1080808));
  F_00da4d70(param_1,uVar2);
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  uVar2 = (*(uint *)(gen_frame + 0x8));
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) & 0x3fffffff);
  }
  return uVar2;
}

/* ref: hkMemoryResourceContainer::vf5 */
uint F_00e18110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe18110u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  LPVOID pvVar2;
  uint in_ecx;
  int * this_00;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  in_ecx = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar2 + 0x2c),0x1c);
  *(undefined2 *)(in_ecx + 4) = 0x1c;
  this_00 = (int *)F_00e17f70(in_ecx);
  ((code *)*(gen_code32 *)(*this_00 + 0x14))(this_00,param_1);
  ((code *)*(gen_code32 *)(*this_00 + 0x20))(this_00,param_2,param_3);
  F_00d919e0(this_00);
  if (*(uint *)(this + 0x14) == (*(uint *)(this + 0x18) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this + 0x10,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x10) + *(int *)(this + 0x14) * 4)));
  if (puVar1 != (undefined4 *)0x0) {
    F_00d919e0(this_00);
    *puVar1 = this_00;
  }
  *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
  F_00d91a80(this_00);
  F_00d91a80(this_00);
  return (uint)this_00;
}

/* ref: FUN_00e181c0 */
uint F_00e181c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe181c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x114e5ac));
  F_00d91480((undefined *)((int)this + 8),param_1);
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0x80000000;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0x80000000;
  return (uint)this;
}

/* ref: FUN_00e18210 */
uint F_00e18210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe18210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x114e5ac));
  F_00d91350((int)this + 8,param_1);
  if ((param_1 != 0) && (iVar2 = 0, 0 < *(int *)((int)this + 0x20))) {
    do {
      iVar1 = iVar2 * 4;
      iVar2 = iVar2 + 1;
      *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x1c) + iVar1))) + 0xc))) = this;
    } while (iVar2 < *(int *)((int)this + 0x20));
  }
  return (uint)this;
}

/* ref: FUN_00e18250 */
uint F_00e18250(unsigned int gen_a0)
{
  GEN_ENTER(0xe18250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  int iVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x114e5ac));
  iVar4 = *(int *)((int)this + 0x20) + -1;
  iVar1 = *(int *)((int)this + 0x1c);
  while (-1 < iVar4) {
    pvVar2 = *(undefined * PTR32 *)(iVar1 + iVar4 * 4);
    if (pvVar2 != (undefined *)0x0) {
      F_00d91a80(pvVar2);
    }
    iVar4 = iVar4 + -1;
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
  iVar4 = *(int *)((int)this + 0x14) + -1;
  iVar1 = *(int *)((int)this + 0x10);
  while (-1 < iVar4) {
    pvVar2 = *(undefined * PTR32 *)(iVar1 + iVar4 * 4);
    if (pvVar2 != (undefined *)0x0) {
      F_00d91a80(pvVar2);
    }
    iVar4 = iVar4 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar4 * 4) = 0;
  }
  iVar1 = *(int *)((int)this + 0x18);
  *(undefined4 *)((int)this + 0x14) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x10),iVar1 * 4);
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0x80000000;
  uVar3 = F_00d91510((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar3;
}

/* ref: hkMemoryResourceContainer::vf10 */
uint F_00e18330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe18330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  undefined * pvVar2;
  LPVOID pvVar3;
  
  pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x34))(this,param_1,0)));
  if (pvVar2 == (undefined *)0x0) {
    pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar3 + 0x2c) + 4))))
                               (*(int * PTR32 *)((int)pvVar3 + 0x2c),0x28)));
    *(undefined2 *)((int)pvVar2 + 4) = 0x28;
    pvVar2 = (undefined *)F_00e181c0(pvVar2,param_1);
    if (pvVar2 != (undefined *)0x0) {
      F_00d919e0(pvVar2);
    }
    if (*(uint *)(this + 0x20) == (*(uint *)(this + 0x24) & 0x3fffffff)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this + 0x1c,4);
    }
    puVar1 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x1c) + *(int *)(this + 0x20) * 4)));
    if (puVar1 != (undefined4 *)0x0) {
      if (pvVar2 != (undefined *)0x0) {
        F_00d919e0(pvVar2);
      }
      *puVar1 = pvVar2;
    }
    *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
    if (pvVar2 != (undefined *)0x0) {
      F_00d91a80(pvVar2);
    }
    *(undefined * PTR32 *)((int)pvVar2 + 0xc) = this;
    F_00d91a80(pvVar2);
  }
  return (uint)pvVar2;
}

/* ref: FUN_00e18400 */
uint F_00e18400(unsigned int gen_a0)
{
  GEN_ENTER(0xe18400u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint local_8;
  
  local_8 = (uint)this & 0xffffff00;
  F_00da3de0(this,local_8);
  return (uint)this;
}

/* ref: FUN_00e18420 */
uint F_00e18420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe18420u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00da3a20(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e18430 */
uint F_00e18430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe18430u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00da4190(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e184a0 */
uint F_00e184a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe184a0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00e184f0 */
uint F_00e184f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe184f0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00e18540 */
uint F_00e18540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe18540u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00e18550 */
uint F_00e18550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe18550u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00e185a0 */
uint F_00e185a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe185a0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00e185f0 */
uint F_00e185f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe185f0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00e18610 */
uint F_00e18610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe18610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1);
  }
  *(undefined * PTR32 *)this = param_1;
  return (uint)this;
}

/* ref: FUN_00e18630 */
unsigned int F_00e18630(unsigned int gen_a0)
{
  GEN_ENTER(0xe18630u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00e18660 */
uint F_00e18660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe18660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1);
  }
  *(undefined * PTR32 *)this = param_1;
  return (uint)this;
}

/* ref: FUN_00e18680 */
unsigned int F_00e18680(unsigned int gen_a0)
{
  GEN_ENTER(0xe18680u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00e186b0 */
unsigned int F_00e186b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe186b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int in_ecx;
  int iVar1;
  
  in_ecx = param_1;
  iVar1 = param_2;
  if (0 < param_2) {
    do {
      if (in_ecx != 0) {
        F_00d91340(in_ecx);
        F_00d91340(in_ecx + 4);
      }
      in_ecx = in_ecx + 8;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}

/* ref: FUN_00e18760 */
unsigned int F_00e18760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe18760u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e187a0 */
unsigned int F_00e187a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe187a0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e187d0 */
uint F_00e187d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe187d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00e187f0 */
uint F_00e187f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe187f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00e18810 */
uint F_00e18810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe18810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if ((undefined *)*param_1 != (undefined *)0x0) {
    F_00d919e0((undefined *)*param_1);
  }
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00e18840 */
uint F_00e18840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe18840u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00e18850 */
uint F_00e18850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe18850u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00e18870 */
uint F_00e18870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe18870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if ((undefined *)*param_1 != (undefined *)0x0) {
    F_00d919e0((undefined *)*param_1);
  }
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00e188a0 */
uint F_00e188a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe188a0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00e188b0 */
uint F_00e188b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe188b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 << 4);
  return uVar1;
}

/* ref: FUN_00e188d0 */
uint F_00e188d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe188d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: hkMemoryResourceHandle::vf3 */
uint F_00e18950(void)
{
  GEN_ENTER(0xe18950u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: hkMemoryResourceContainer::vf3 */
uint F_00e189b0(void)
{
  GEN_ENTER(0xe189b0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00e189e0 */
unsigned int F_00e189e0(unsigned int gen_a0)
{
  GEN_ENTER(0xe189e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,4);
  }
  return 0;
}

/* ref: hkResourceMap::vf1 */
uint F_00e18a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe18a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x114e3e0));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,4);
  }
  return (uint)this;
}

/* ref: FUN_00e18a50 */
uint F_00e18a50(unsigned int gen_a0)
{
  GEN_ENTER(0xe18a50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  *(short *)(uVar2 + 4) = (short)param_1;
  return uVar2;
}

/* ref: FUN_00e18a80 */
uint F_00e18a80(unsigned int gen_a0)
{
  GEN_ENTER(0xe18a80u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  *(short *)(uVar2 + 4) = (short)param_1;
  return uVar2;
}

/* ref: FUN_00e18b80 */
uint F_00e18b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe18b80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,8);
  }
  iVar1 = *(int *)this + *(int *)((int)this + 4) * 8;
  if (iVar1 != 0) {
    F_00d91340(iVar1);
    F_00d91340(iVar1 + 4);
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return *(int *)this + iVar1 * 8;
}

/* ref: FUN_00e18be0 */
uint F_00e18be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe18be0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(int *)(in_ecx + 4) = *(int *)(in_ecx + 4) - param_2;
  return param_2;
}

/* ref: FUN_00e18bf0 */
uint F_00e18bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe18bf0u, gen_a0, gen_a1, gen_a2, 0u);
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
    bVar1 = F_00d95690(param_1,this,iVar3,0x10);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00e18c30 */
uint F_00e18c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe18c30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = param_1 + iVar1;
  return iVar1 * 0x10 + *(int *)this;
}

/* ref: FUN_00e18c50 */
uint F_00e18c50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe18c50u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e18c90 */
uint F_00e18c90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe18c90u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e18cf0 */
unsigned int F_00e18cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe18cf0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e18d30 */
unsigned int F_00e18d30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe18d30u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e18d70 */
uint F_00e18d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe18d70u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e18db0 */
unsigned int F_00e18db0(unsigned int gen_a0)
{
  GEN_ENTER(0xe18db0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,4);
  }
  return 0;
}

/* ref: FUN_00e18de0 */
unsigned int F_00e18de0(unsigned int gen_a0)
{
  GEN_ENTER(0xe18de0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,4);
  }
  return 0;
}

/* ref: FUN_00e18e20 */
uint F_00e18e20(unsigned int gen_a0)
{
  GEN_ENTER(0xe18e20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00e18e50 */
uint F_00e18e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe18e50u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e18e90 */
uint F_00e18e90(unsigned int gen_a0)
{
  GEN_ENTER(0xe18e90u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00e18ec0 */
uint F_00e18ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe18ec0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e18f00 */
uint F_00e18f00(unsigned int gen_a0)
{
  GEN_ENTER(0xe18f00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00e18f30 */
uint F_00e18f30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe18f30u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e18f70 */
uint F_00e18f70(unsigned int gen_a0)
{
  GEN_ENTER(0xe18f70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  iVar1 = *(int *)this + *(int *)((int)this + 4) * 8;
  if (iVar1 != 0) {
    F_00d91340(iVar1);
    F_00d91340(iVar1 + 4);
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return *(int *)this + iVar1 * 8;
}

/* ref: FUN_00e18fc0 */
uint F_00e18fc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe18fc0u, gen_a0, gen_a1, 0u, 0u);
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
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,0x10);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00e19000 */
uint F_00e19000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe19000u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e19040 */
uint F_00e19040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe19040u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e19080 */
uint F_00e19080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe19080u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00e190c0 */
uint F_00e190c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe190c0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e19110 */
uint F_00e19110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe19110u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00e19150 */
uint F_00e19150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe19150u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e191a0 */
uint F_00e191a0(unsigned int gen_a0)
{
  GEN_ENTER(0xe191a0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e191e0 */
unsigned int F_00e191e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe191e0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 + -1;
  if (-1 < iVar1) {
    this = (undefined *)(param_1 + iVar1 * 8);
    do {
      F_00d91510((undefined *)((int)this + 4));
      F_00d91510(this);
      this = (undefined *)((int)this + -8);
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  return 0;
}

/* ref: FUN_00e19210 */
uint F_00e19210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe19210u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e19250 */
uint F_00e19250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe19250u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e19290 */
uint F_00e19290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe19290u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e192d0 */
uint F_00e192d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe192d0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e19320 */
uint F_00e19320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe19320u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e19370 */
uint F_00e19370(unsigned int gen_a0)
{
  GEN_ENTER(0xe19370u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  uVar1 = *(uint *)this;
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(uVar1 + iVar2 * 8);
    do {
      F_00d91510((undefined *)((int)this_00 + 4));
      uVar1 = F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -8);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  *(undefined4 *)((int)this + 4) = 0;
  return uVar1;
}

/* ref: FUN_00e193a0 */
unsigned int F_00e193a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe193a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  undefined * this_00;
  
  this_00 = (undefined *)(*(int *)this + param_1 * 8);
  F_00d91510((undefined *)((int)this_00 + 4));
  F_00d91510(this_00);
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  if (*(int *)((int)this + 4) != param_1) {
    puVar1 = (undefined4 *)(*(int *)this + param_1 * 8);
    iVar2 = (*(int *)this + *(int *)((int)this + 4) * 8) - (int)puVar1;
    iVar3 = 2;
    do {
      *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
      puVar1 = puVar1 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}

/* ref: FUN_00e19400 */
uint F_00e19400(unsigned int gen_a0)
{
  GEN_ENTER(0xe19400u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e19440 */
uint F_00e19440(unsigned int gen_a0)
{
  GEN_ENTER(0xe19440u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e19480 */
uint F_00e19480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe19480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + iVar2 * 8);
    do {
      F_00d91510((undefined *)((int)this_00 + 4));
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

/* ref: FUN_00e194f0 */
unsigned int F_00e194f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe194f0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e19520 */
unsigned int F_00e19520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe19520u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e195d0 */
unsigned int F_00e195d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe195d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  
  iVar2 = *(int *)this;
  iVar1 = param_1 * 4;
  this_00 = *(undefined * PTR32 *)(iVar2 + iVar1);
  if (this_00 != (undefined *)0x0) {
    F_00d91a80(this_00);
  }
  *(undefined4 *)(iVar2 + iVar1) = 0;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  iVar2 = (*(int *)((int)this + 4) - param_1) * 4;
  puVar3 = (undefined4 *)(*(int *)this + iVar1);
  if (0 < iVar2) {
    iVar2 = (iVar2 - 1U >> 2) + 1;
    do {
      *puVar3 = puVar3[1];
      puVar3 = puVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00e19630 */
uint F_00e19630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe19630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  undefined * this_00;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)this;
  iVar2 = param_1 * 4;
  this_00 = *(undefined * PTR32 *)(iVar1 + iVar2);
  if (this_00 != (undefined *)0x0) {
    F_00d91a80(this_00);
  }
  *(undefined4 *)(iVar1 + iVar2) = 0;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  uVar3 = *(uint *)((int)this + 4);
  if (uVar3 != param_1) {
    uVar3 = *(uint *)(*(int *)this + uVar3 * 4);
    *(uint *)(*(int *)this + iVar2) = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00e19670 */
unsigned int F_00e19670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe19670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  
  iVar2 = *(int *)this;
  iVar1 = param_1 * 4;
  this_00 = *(undefined * PTR32 *)(iVar2 + iVar1);
  if (this_00 != (undefined *)0x0) {
    F_00d91a80(this_00);
  }
  *(undefined4 *)(iVar2 + iVar1) = 0;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  iVar2 = (*(int *)((int)this + 4) - param_1) * 4;
  puVar3 = (undefined4 *)(*(int *)this + iVar1);
  if (0 < iVar2) {
    iVar2 = (iVar2 - 1U >> 2) + 1;
    do {
      *puVar3 = puVar3[1];
      puVar3 = puVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00e196d0 */
uint F_00e196d0(unsigned int gen_a0)
{
  GEN_ENTER(0xe196d0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e19710 */
uint F_00e19710(unsigned int gen_a0)
{
  GEN_ENTER(0xe19710u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + iVar2 * 8);
    do {
      F_00d91510((undefined *)((int)this_00 + 4));
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

/* ref: FUN_00e19780 */
uint F_00e19780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe19780u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e197f0 */
uint F_00e197f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe197f0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e19860 */
uint F_00e19860(unsigned int gen_a0)
{
  GEN_ENTER(0xe19860u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00da3e20((undefined *)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x114e3e0));
  return uVar1;
}

/* ref: FUN_00e19880 */
unsigned int F_00e19880(unsigned int gen_a0)
{
  GEN_ENTER(0xe19880u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0x14);
  }
  return 0;
}

/* ref: hkContainerResourceMap::vf1 */
uint F_00e198b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe198b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00da3e20(this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x114e3e0));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,0x14);
  }
  return (uint)this;
}

/* ref: FUN_00e198f0 */
uint F_00e198f0(unsigned int gen_a0)
{
  GEN_ENTER(0xe198f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + iVar2 * 8);
    do {
      F_00d91510((undefined *)((int)this_00 + 4));
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

/* ref: FUN_00e19960 */
uint F_00e19960(unsigned int gen_a0)
{
  GEN_ENTER(0xe19960u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e199d0 */
uint F_00e199d0(unsigned int gen_a0)
{
  GEN_ENTER(0xe199d0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e19a40 */
uint F_00e19a40(unsigned int gen_a0)
{
  GEN_ENTER(0xe19a40u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00e19a70 */
uint F_00e19a70(unsigned int gen_a0)
{
  GEN_ENTER(0xe19a70u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e19ae0 */
uint F_00e19ae0(unsigned int gen_a0)
{
  GEN_ENTER(0xe19ae0u, gen_a0, 0u, 0u, 0u);
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

/* ref: hkMemoryResourceHandle::vf0 */
uint F_00e19b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe19b50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00e17fd0(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: hkMemoryResourceContainer::vf9 */
uint F_00e19b90(unsigned int gen_a0)
{
  GEN_ENTER(0xe19b90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xc);
}

/* ref: FUN_00e19ba0 */
uint F_00e19ba0(unsigned int gen_a0)
{
  GEN_ENTER(0xe19ba0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkMemoryResourceContainer::vf7 */
uint F_00e19bd0(unsigned int gen_a0)
{
  GEN_ENTER(0xe19bd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x14);
}

/* ref: hkMemoryResourceContainer::vf0 */
uint F_00e19be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe19be0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00e18250(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00e19c20 */
uint F_00e19c20(unsigned int gen_a0)
{
  GEN_ENTER(0xe19c20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00dc17f0(this);
  uVar1 = F_00dc1690(this);
  return uVar1;
}

/* ref: FUN_00e19c30 */
uint F_00e19c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe19c30u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = *in_ecx != 0;
  return param_2;
}

/* ref: FUN_00e19c70 */
uint F_00e19c70(unsigned int gen_a0)
{
  GEN_ENTER(0xe19c70u, gen_a0, 0u, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  if (*in_ecx == 9) {
    return in_ecx[2];
  }
  return 0xffffffff;
}

/* ref: FUN_00e19c80 */
uint F_00e19c80(unsigned int gen_a0)
{
  GEN_ENTER(0xe19c80u, gen_a0, 0u, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  if (*in_ecx == 6) {
    return in_ecx[2];
  }
  return 0;
}

/* ref: FUN_00e19c90 */
uint F_00e19c90(unsigned int gen_a0)
{
  GEN_ENTER(0xe19c90u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  uVar2 = 0;
  piVar3 = param_1;
  do {
    iVar1 = *piVar3;
    uVar2 = (uVar2 << 1 | (uint)((int)uVar2 < 0)) ^ iVar1 * -0x61c8864f;
    if (iVar1 == 6) {
      uVar2 = uVar2 ^ (uint)piVar3;
    }
    else if (iVar1 == 9) {
      uVar2 = uVar2 ^ piVar3[2];
    }
    piVar3 = (int *)piVar3[1];
  } while (piVar3 != (int *)0x0);
  return uVar2;
}

/* ref: FUN_00e19cd0 */
uint F_00e19cd0(unsigned int gen_a0)
{
  GEN_ENTER(0xe19cd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00e19c90(this);
  if (uVar1 == 0xffffffff) {
    uVar1 = 0x7af1f32a;
  }
  return uVar1;
}

/* ref: FUN_00e19cf0 */
uint F_00e19cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe19cf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = *(int *)this;
  if ((iVar1 != *param_2) || (*(int *)((int)this + 4) != param_2[1])) {
    *param_1 = 0;
    return (uint)param_1;
  }
  if ((iVar1 != 6) && (iVar1 != 9)) {
    *param_1 = 1;
    return (uint)param_1;
  }
  *param_1 = *(int *)((int)this + 8) == param_2[2];
  return (uint)param_1;
}

/* ref: FUN_00e19d40 */
uint F_00e19d40(unsigned int gen_a0)
{
  GEN_ENTER(0xe19d40u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(in_ecx + 4);
  while (uVar1 = uVar2, uVar1 != 0) {
    in_ecx = uVar1;
    uVar2 = *(uint *)(uVar1 + 4);
  }
  return in_ecx;
}

/* ref: FUN_00e19d60 */
unsigned int F_00e19d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe19d60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 * in_ecx;
  uint uVar1;
  undefined * pvVar2;
  undefined4 in_ecx_00;
  undefined4 uVar3;
  char * pcVar4;
  
  in_ecx = param_1;
  do {
    if (in_ecx == (undefined4 *)0x0) {
      return 0;
    }
    pvVar2 = param_2;
    switch((unsigned int)(uintptr_t)(*in_ecx)) {
    case 0: ;
      pcVar4 = &REFG(undefined, 0x11261a0);
      break;
    case 1: ;
      pcVar4 = &REFG(undefined, 0x1126468);
      break;
    case 2: ;
      pcVar4 = &REFG(undefined, 0x114c8bc);
      break;
    case 3: ;
      pcVar4 = &REFG(undefined, 0x114c8b4);
      break;
    case 4: ;
      pcVar4 = ((char *)GEN_TOP((*(undefined * PTR32 (*)[1])REFP(0x112673c))));
      break;
    case 5: ;
      pcVar4 = "cstring";
      break;
    case 6: ;
      uVar1 = F_00e19c80(in_ecx);
      if (uVar1 == 0) {
        pcVar4 = "homogeneous/variant class";
      }
      else {
        pcVar4 = (char *)F_00e19c80(in_ecx_00);
        pvVar2 = (undefined *)F_00d9fe80(param_2,"class ");
      }
      break;
    case 7: ;
      pcVar4 = &REFG(undefined, 0x111869c);
      break;
    case 8: ;
      pcVar4 = &REFG(undefined, 0x1126194);
      break;
    case 9: ;
      uVar3 = in_ecx[2];
      pcVar4 = &REFG(undefined, 0x1092088);
      pvVar2 = (undefined *)F_00d9fe80(param_2,&REFG(undefined, 0x1092090));
      pvVar2 = (undefined *)F_00d9ff40(pvVar2,uVar3);
      break;
    default: ;
      goto switchD_00e19d7e_default;
    }
    F_00d9fe80(pvVar2,pcVar4);
switchD_00e19d7e_default: ;
    in_ecx = (undefined4 *)in_ecx[1];
  } while( true );
}

/* ref: FUN_00e19e60 */
unsigned int F_00e19e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe19e60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00e19d60(this,param_1);
  return 0;
}

/* ref: FUN_00e19e80 */
uint F_00e19e80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe19e80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  int * in_ecx;
  int * in_ecx_00;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  in_ecx = param_2;
  in_ecx_00 = param_3;
  do {
    piVar2 = in_ecx_00;
    if ((in_ecx == (int *)0x0) || (piVar2 = in_ecx, in_ecx_00 == (int *)0x0)) {
      if (piVar2 == (int *)0x0) {
        *param_1 = 1;
        return (uint)param_1;
      }
      *param_1 = 0;
      return (uint)param_1;
    }
    iVar1 = *in_ecx;
    if (iVar1 != *in_ecx_00) goto LAB_00e19ef7;
    if (iVar1 == 6) {
      uVar3 = F_00e19c80(in_ecx);
      uVar4 = F_00e19c80(in_ecx_00);
      if ((uVar3 == 0) || (uVar4 == 0)) {
        *param_1 = 1;
        return (uint)param_1;
      }
      uVar3 = F_00da0d20(uVar3,uVar4);
      bVar5 = uVar3 == 0;
LAB_00e19edc: ;
      if (!bVar5) {
LAB_00e19ef7: ;
        *param_1 = 0;
        return (uint)param_1;
      }
    }
    else if (iVar1 == 9) {
      uVar3 = F_00e19c70(in_ecx);
      uVar4 = F_00e19c70(in_ecx_00);
      bVar5 = uVar3 == uVar4;
      goto LAB_00e19edc;
    }
    in_ecx = (int *)in_ecx[1];
    in_ecx_00 = (int *)in_ecx_00[1];
  } while( true );
}

/* ref: FUN_00e19f20 */
uint F_00e19f20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe19f20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 == this) {
    *param_1 = 1;
    return (uint)param_1;
  }
  F_00e19e80(param_1,this,param_2);
  return (uint)param_1;
}

/* ref: FUN_00e19f50 */
uint F_00e19f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe19f50u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  char * pcVar2;
  
  if (((param_2 != (char *)0x0) && (cVar1 = *param_2, cVar1 != '\0')) &&
     ((('`' < cVar1 && (cVar1 < '{')) || ((('@' < cVar1 && (cVar1 < '[')) || (cVar1 == '_')))))) {
    cVar1 = param_2[1];
    pcVar2 = param_2;
    while( true ) {
      if (cVar1 == '\0') {
        *param_1 = 1;
        return (uint)param_1;
      }
      if (((((cVar1 < 'a') || ('z' < cVar1)) && ((cVar1 < 'A' || ('Z' < cVar1)))) &&
          ((cVar1 < '0' || ('9' < cVar1)))) && ((cVar1 != ':' && (cVar1 != '_')))) break;
      cVar1 = pcVar2[2];
      pcVar2 = pcVar2 + 1;
    }
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00e19fc0 */
unsigned int F_00e19fc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe19fc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 * in_ecx;
  uint uVar1;
  undefined * pvVar2;
  undefined * puVar3;
  
  in_ecx = param_1;
  do {
    if (in_ecx == (undefined4 *)0x0) {
      return 0;
    }
    pvVar2 = param_2;
    switch((unsigned int)(uintptr_t)(*in_ecx)) {
    case 0: ;
      puVar3 = &REFG(undefined, 0x11261a0);
      break;
    case 1: ;
      puVar3 = &REFG(undefined, 0x1145964);
      break;
    case 2: ;
      puVar3 = &REFG(undefined, 0x113a370);
      break;
    case 3: ;
      puVar3 = &REFG(undefined, 0x11187b8);
      break;
    case 4: ;
      puVar3 = &REFG(undefined, 0x114e614);
      break;
    case 5: ;
      puVar3 = &REFG(undefined, 0x114e610);
      break;
    case 6: ;
      puVar3 = &REFG(undefined, 0x1118a38);
      uVar1 = F_00e19c80(in_ecx);
      pvVar2 = (undefined *)F_00d9fe80(param_2,&REFG(undefined, 0x11186a8));
      pvVar2 = (undefined *)F_00d9fe80(pvVar2,uVar1);
      break;
    case 7: ;
      puVar3 = &REFG(undefined, 0x111869c);
      break;
    case 8: ;
      puVar3 = &REFG(undefined, 0x1126194);
      break;
    case 9: ;
      puVar3 = &REFG(undefined, 0x1092088);
      uVar1 = F_00e19c70(in_ecx);
      pvVar2 = (undefined *)F_00d9fe80(param_2,&REFG(undefined, 0x1092090));
      pvVar2 = (undefined *)F_00d9ff40(pvVar2,uVar1);
      break;
    default: ;
      goto switchD_00e19fde_default;
    }
    F_00d9fe80(pvVar2,puVar3);
switchD_00e19fde_default: ;
    in_ecx = (undefined4 *)in_ecx[1];
  } while( true );
}

/* ref: FUN_00e1a0b0 */
uint F_00e1a0b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1a0b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *param_2 = 0;
  switch((unsigned int)(uintptr_t)(*param_1)) {
  case 2: ;
    return 1;
  case 3: ;
    return 3;
  case 4: ;
    return 2;
  case 5: ;
    return 10;
  case 6: ;
    uVar1 = F_00e19c80(param_1);
    *param_2 = uVar1;
    return 9;
  case 7: ;
    if (*(int *)param_1[1] == 6) {
      uVar1 = F_00e19c80((int *)param_1[1]);
      *param_2 = uVar1;
      return 8;
    }
    break;
  case 9: ;
    if (*(int *)param_1[1] == 3) {
      uVar1 = F_00e19c70(param_1);
      switch((unsigned int)(uintptr_t)(uVar1)) {
      case 4: ;
        return 4;
      case 8: ;
        return 5;
      case 0xc: ;
        return 6;
      case 0x10: ;
        return 7;
      }
    }
  }
  return 0;
}

/* ref: FUN_00e1a1a0 */
uint F_00e1a1a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1a1a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00da4190((undefined *)((int)this + 0x34),param_1,0);
  return uVar1;
}

/* ref: FUN_00e1a1c0 */
uint F_00e1a1c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1a1c0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  int iVar1;
  uint uVar2;
  
  *param_2 = 0;
  *param_3 = 0;
  if (*param_1 == 8) {
    uVar2 = F_00e1a0b0(param_1[1],param_2);
    return uVar2 | 0x10;
  }
  if ((*param_1 == 9) && ((*(int *)param_1[1] != 3 || ((((iVar1 = param_1[2], iVar1 != 4 && (iVar1 != 8)) && (iVar1 != 0xc)) && (iVar1 != 0x10)))))) {
    uVar2 = F_00e19c70(param_1);
    *param_3 = uVar2;
    uVar2 = F_00e1a0b0(*(undefined4 *)(((int)(uint)(param_1)) + 4),param_2);
    return uVar2 | 0x20;
  }
  uVar2 = F_00e1a0b0(param_1,param_2);
  return uVar2;
}

/* ref: FUN_00e1a240 */
uint F_00e1a240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1a240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * this_00;
  uint uVar1;
  uint uVar2;
  undefined * this_01;
  undefined4 * puVar3;
  
  this_00 = (undefined4 *)F_00e1a1a0(this,param_1);
  if (this_00 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)((int)this + 0x50);
    this_00 = (undefined4 *)*puVar3;
    if (this_00 == (undefined4 *)0x0) {
      this_00 = *(undefined4 * PTR32 *)((int)this + 0x70);
      if (this_00 < *(undefined4 * PTR32 *)((int)this + 0x74)) {
        *(int *)((int)this + 0x84) = *(int *)((int)this + 0x84) + -1;
        *(int *)((int)this + 0x70) = *(int *)((int)this + 0x54) + (int)this_00;
      }
      else {
        this_00 = (undefined4 *)F_00dc1990(puVar3);
      }
    }
    else {
      *(int *)((int)this + 0x84) = *(int *)((int)this + 0x84) + -1;
      *puVar3 = *this_00;
    }
    this_01 = (undefined *)((int)this + 0x34);
    *this_00 = 6;
    this_00[1] = 0;
    uVar1 = F_00da3ae0(this_01,param_1);
    F_00da3e40(this_01,&(*(char *)(gen_frame + 0xb)),uVar1);
    if ((*(char *)(gen_frame + 0xb)) == '\0') {
      uVar2 = F_00da0f10(param_1,&REFG(undefined * PTR32, 0x13516ac));
      F_00da3a20(this_01,uVar2,this_00);
    }
    else {
      uVar2 = F_00da3990(this_01,uVar1);
      F_00da39d0(this_01,uVar1,this_00);
    }
    this_00[2] = uVar2;
    puVar3 = this_00;
    uVar1 = F_00e19cd0(this_00);
    F_0105bcf0((undefined *)((int)this + 0x44),uVar1,puVar3);
  }
  return (uint)this_00;
}

/* ref: FUN_00e1a310 */
unsigned int F_00e1a310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1a310u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  
  param_2[1] = 0;
  for (iVar1 = param_1; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_2,4);
    }
    *(int *)(*param_2 + param_2[1] * 4) = iVar1;
    param_2[1] = param_2[1] + 1;
  }
  return 0;
}

/* ref: FUN_00e1a370 */
uint F_00e1a370(unsigned int gen_a0)
{
  GEN_ENTER(0xe1a370u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x114e61c));
  F_00dc14d0((undefined *)((int)this + 0x50));
  F_0105bc30((undefined *)((int)this + 0x44));
  F_00e1b470((undefined *)((int)this + 0x34));
  uVar1 = F_00da3e20((undefined *)((int)this + 0x34));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: FUN_00e1a3b0 */
uint F_00e1a3b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1a3b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * this_00;
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char * pcVar7;
  undefined8 * puVar8;
  uint * puVar9;
  
  uVar5 = F_00e19cd0(param_1);
  this_00 = (int *)((int)this + 0x44);
  uVar6 = F_0105bd60(this_00,uVar5);
  iVar1 = *(int *)((int)this + 0x4c);
  if (iVar1 < (int)uVar6) {
LAB_00e1a438: ;
    puVar8 = *(undefined8 * PTR32 *)((int)this + 0x50);
    if (puVar8 == (undefined8 *)0x0) {
      puVar8 = *(undefined8 * PTR32 *)((int)this + 0x70);
      if (puVar8 < *(undefined8 * PTR32 *)((int)this + 0x74)) {
        *(int *)((int)this + 0x84) = *(int *)((int)this + 0x84) + -1;
        *(int *)((int)this + 0x70) = *(int *)((int)this + 0x54) + (int)puVar8;
      }
      else {
        puVar8 = (undefined8 *)F_00dc1990((undefined4 *)((int)this + 0x50));
      }
    }
    else {
      *(int *)((int)this + 0x84) = *(int *)((int)this + 0x84) + -1;
      *(undefined4 *)((int)this + 0x50) = *(undefined4 *)puVar8;
    }
    *puVar8 = *param_1;
    *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(param_1 + 1);
    F_0105bcf0(this_00,uVar5,puVar8);
    return (uint)puVar8;
  }
  iVar2 = *this_00;
LAB_00e1a3e5: ;
  uVar3 = *(uint *)(iVar2 + 4 + uVar6 * 8);
  pcVar7 = (char *)F_00e19cf0(param_1,&(*(undefined1 *)(gen_frame + 0xb)),uVar3);
  if (*pcVar7 != '\0') {
    return uVar3;
  }
  uVar6 = uVar6 + 1;
  iVar4 = *(int *)((int)this + 0x4c);
  do {
    if ((int)uVar6 <= iVar4) {
      puVar9 = (uint *)(iVar2 + uVar6 * 8);
      do {
        if (*puVar9 == 0xffffffff) {
          uVar6 = iVar4 + 1;
LAB_00e1a42b: ;
          if (iVar1 < (int)uVar6) goto LAB_00e1a438;
          goto LAB_00e1a3e5;
        }
        if (*puVar9 == uVar5) goto LAB_00e1a42b;
        uVar6 = uVar6 + 1;
        puVar9 = puVar9 + 2;
      } while ((int)uVar6 <= iVar4);
    }
    uVar6 = 0;
  } while( true );
}

/* ref: FUN_00e1a4a0 */
unsigned int F_00e1a4a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1a4a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 in_ecx;
  int * piVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  
  piVar2 = param_2;
  iVar3 = 0;
  param_2[1] = 0;
  iVar1 = *(int *)((int)this + 0x4c);
  if (-1 < iVar1) {
    piVar5 = *(int * PTR32 *)((int)this + 0x44);
    do {
      if (*piVar5 != -1) break;
      iVar3 = iVar3 + 1;
      piVar5 = piVar5 + 2;
    } while (iVar3 <= iVar1);
  }
  param_2 = (int *)iVar3;
  if (iVar3 <= iVar1) {
    do {
      in_ecx = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x44) + 4 + (int)((int)(uintptr_t)param_2) * 8)));
      uVar4 = F_00e19d40(in_ecx);
      if (uVar4 == param_1) {
        if (piVar2[1] == (piVar2[2] & 0x3fffffffU)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar2,4);
        }
        *(undefined4 *)(*piVar2 + piVar2[1] * 4) = in_ecx;
        piVar2[1] = piVar2[1] + 1;
      }
      iVar1 = *(int *)((int)this + 0x4c);
      iVar3 = (int)param_2 + 1;
      if (iVar3 <= iVar1) {
        piVar5 = ((int *)GEN_TOP((*(int *)((int)this + 0x44) + iVar3 * 8)));
        do {
          if (*piVar5 != -1) break;
          iVar3 = iVar3 + 1;
          piVar5 = piVar5 + 2;
        } while (iVar3 <= iVar1);
      }
      param_2 = (int *)iVar3;
    } while (iVar3 <= iVar1);
  }
  return 0;
}

/* ref: FUN_00e1a550 */
uint F_00e1a550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1a550u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined * this_00;
  
  uVar1 = (*(undefined4 *)&gen_args[1]);
  uVar3 = F_00e1a1a0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]));
  uVar2 = (*(undefined4 *)&gen_args[2]);
  uVar4 = uVar3;
  if ((uVar3 != 0) && (uVar4 = F_00e1a1a0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[2])), uVar4 == 0)) {
    this_00 = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34)));
    F_00e1b630(this_00,uVar1);
    uVar4 = F_00da3ae0(this_00,uVar2);
    F_00da3e40(this_00,(int)&(*(undefined4 *)&gen_args[1]) + 3,uVar4);
    if ((*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[1]) + 3)) == '\0') {
      uVar4 = F_00da0f10(uVar2,&REFG(undefined * PTR32, 0x13516ac));
      F_00da3a20(this_00,uVar4,uVar3);
      *(uint *)(uVar3 + 8) = uVar4;
      return uVar3;
    }
    uVar5 = F_00da3990(this_00,uVar4);
    F_00da39d0(this_00,uVar4,uVar3);
    *(uint *)(uVar3 + 8) = uVar5;
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00e1a5f0 */
unsigned int F_00e1a5f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe1a5f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  if (((char)param_3 != '\0') && (*param_1 == 0)) {
    if (param_5[1] == (param_5[2] & 0x3fffffffU)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_5,4);
    }
    *(int * PTR32 *)(*param_5 + param_5[1] * 4) = param_1;
    param_5[1] = param_5[1] + 1;
  }
  return 0;
}

/* ref: FUN_00e1a640 */
uint F_00e1a640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1a640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 7;
  (*(undefined4 *)(gen_frame + 0x4)) = param_1;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00e1a3b0(this,&(*(undefined4 *)(gen_frame + 0x0)));
  return uVar1;
}

/* ref: FUN_00e1a670 */
uint F_00e1a670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1a670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 8;
  (*(undefined4 *)(gen_frame + 0x4)) = param_1;
  uVar1 = F_00e1a3b0(this,&(*(undefined4 *)(gen_frame + 0x0)));
  return uVar1;
}

/* ref: FUN_00e1a6a0 */
uint F_00e1a6a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1a6a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = param_1;
  (*(undefined4 *)(gen_frame + 0x0)) = 9;
  (*(undefined4 *)(gen_frame + 0x8)) = param_2;
  uVar1 = F_00e1a3b0(this,&(*(undefined4 *)(gen_frame + 0x0)));
  return uVar1;
}

/* ref: FUN_00e1a6d0 */
uint F_00e1a6d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1a6d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  piVar3 = param_1;
  if (param_1[1] != param_2) {
    iVar1 = *param_1;
    if (iVar1 != 7) {
      if (iVar1 == 8) {
        uVar2 = F_00e1a670(this,param_2);
        return uVar2;
      }
      if (iVar1 != 9) {
        return 0;
      }
      uVar2 = F_00e19c70(param_1);
      uVar2 = F_00e1a6a0(this,param_2,uVar2);
      return uVar2;
    }
    piVar3 = (int *)F_00e1a640(this,param_2);
  }
  return (uint)piVar3;
}

/* ref: FUN_00e1a730 */
uint F_00e1a730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1a730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + param_1 * 4 + 0xc);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = F_00e1a670(this,iVar1);
  return uVar2;
}

/* ref: FUN_00e1a750 */
uint F_00e1a750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1a750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00e1a240(this,param_1);
  uVar1 = F_00e1a640(this,uVar1);
  return uVar1;
}

/* ref: FUN_00e1a770 */
uint F_00e1a770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1a770u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint * puVar5;
  
  uVar3 = F_00e19cd0(param_2);
  uVar4 = F_0105bd60((int *)((int)this + 0x44),uVar3);
  if (*(int *)((int)this + 0x4c) < (int)uVar4) {
LAB_00e1a7d6: ;
    *param_1 = 0;
    return (uint)param_1;
  }
  iVar1 = *(int *)((int)this + 0x44);
LAB_00e1a7a0: ;
  if (*(undefined * PTR32 *)(iVar1 + 4 + uVar4 * 8) == param_2) {
    *param_1 = 1;
    return (uint)param_1;
  }
  iVar2 = *(int *)((int)this + 0x4c);
  uVar4 = uVar4 + 1;
  do {
    if ((int)uVar4 <= iVar2) {
      puVar5 = (uint *)(iVar1 + uVar4 * 8);
      do {
        if (*puVar5 == 0xffffffff) {
          uVar4 = iVar2 + 1;
LAB_00e1a7d1: ;
          if (*(int *)((int)this + 0x4c) < (int)uVar4) goto LAB_00e1a7d6;
          goto LAB_00e1a7a0;
        }
        if (*puVar5 == uVar3) goto LAB_00e1a7d1;
        uVar4 = uVar4 + 1;
        puVar5 = puVar5 + 2;
      } while ((int)uVar4 <= iVar2);
    }
    uVar4 = 0;
  } while( true );
}

/* ref: FUN_00e1a800 */
uint F_00e1a800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1a800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  char * pcVar6;
  int iVar7;
  
  switch((unsigned int)(uintptr_t)(*param_1)) {
  case 0x21: ;
    return *(uint *)((int)this + 0xc);
  case 0x2a: ;
    uVar4 = F_00e1a800(this,param_1 + 1);
    uVar4 = F_00e1a640(this,uVar4);
    return uVar4;
  case 0x43: ;
    pcVar1 = param_1 + 1;
    for (pcVar6 = pcVar1;
        ((((cVar3 = *pcVar6, '`' < cVar3 && (cVar3 < '{')) || (('@' < cVar3 && (cVar3 < '[')))) ||
         (('/' < cVar3 && (cVar3 < ':')))) || ((cVar3 == '_' || (cVar3 == ':'))));
        pcVar6 = pcVar6 + 1) {
    }
    iVar7 = (int)pcVar6 - (int)pcVar1;
    if (((0 < iVar7) && (iVar7 < 0x80)) && (*pcVar6 == ';')) {
      F_00da0e40(((undefined1 *)(gen_frame + 0x0)),pcVar1,iVar7);
      ((undefined1 *)(gen_frame + 0x0))[(int)(iVar7)] = 0;
      uVar4 = F_00e1a240(this,((undefined1 *)(gen_frame + 0x0)));
      return uVar4;
    }
    break;
  case 0x5b: ;
    uVar4 = F_00e1a800(this,param_1 + 2);
    uVar4 = F_00e1a670(this,uVar4);
    return uVar4;
  case 0x62: ;
    return *(uint *)((int)this + 0x14);
  case 0x69: ;
    return *(uint *)((int)this + 0x1c);
  case 0x72: ;
    return *(uint *)((int)this + 0x18);
  case 0x73: ;
    return *(uint *)((int)this + 0x20);
  case 0x76: ;
    return *(uint *)((int)this + 0x10);
  case 0x7b: ;
    pcVar1 = param_1 + 1;
    cVar3 = *pcVar1;
    pcVar6 = pcVar1;
    while (('/' < cVar3 && (cVar3 < ':'))) {
      pcVar2 = pcVar6 + 1;
      pcVar6 = pcVar6 + 1;
      cVar3 = *pcVar2;
    }
    iVar7 = (int)pcVar6 - (int)pcVar1;
    if (((0 < iVar7) && (iVar7 < 10)) && (*pcVar6 == '}')) {
      F_00da0e40(((undefined1 *)(gen_frame + 0x80)),pcVar1,iVar7);
      ((undefined1 *)(gen_frame + 0x80))[(int)(iVar7)] = 0;
      uVar4 = F_00da0e80(((undefined1 *)(gen_frame + 0x80)),0);
      uVar5 = F_00e1a800(this,pcVar6 + 1);
      uVar4 = F_00e1a6a0(this,uVar5,uVar4);
      return uVar4;
    }
    return 0;
  }
  return 0;
}

/* ref: FUN_00e1aa20 */
uint F_00e1aa20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe1aa20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  switch((unsigned int)(uintptr_t)(param_1 & 0xf)) {
  case 0: ;
    uVar1 = *(uint *)((int)this + 0x10);
    break;
  case 1: ;
    uVar1 = *(uint *)((int)this + 0x14);
    break;
  case 2: ;
    uVar1 = *(uint *)((int)this + 0x1c);
    break;
  case 3: ;
    uVar1 = *(uint *)((int)this + 0x18);
    break;
  case 4: ;
    uVar1 = F_00e1a6a0(this,*(undefined4 *)((int)this + 0x18),4);
    break;
  case 5: ;
    uVar1 = F_00e1a6a0(this,*(undefined4 *)((int)this + 0x18),8);
    break;
  case 6: ;
    uVar1 = F_00e1a6a0(this,*(undefined4 *)((int)this + 0x18),0xc);
    break;
  case 7: ;
    uVar1 = F_00e1a6a0(this,*(undefined4 *)((int)this + 0x18),0x10);
    break;
  case 8: ;
    if (param_2 == 0) {
      uVar1 = F_00e1a640(this,*(undefined4 *)((int)this + 8));
    }
    else {
      uVar1 = F_00e1a240(this,param_2);
      uVar1 = F_00e1a640(this,uVar1);
    }
    break;
  case 9: ;
    if (param_2 == 0) {
      uVar1 = *(uint *)((int)this + 8);
    }
    else {
      uVar1 = F_00e1a240(this,param_2);
    }
    break;
  case 10: ;
    uVar1 = *(uint *)((int)this + 0x20);
    break;
  default: ;
    goto switchD_00e1aa38_default;
  }
  if (uVar1 != 0) {
    if ((param_1 & 0x10) == 0) {
      if ((param_1 & 0x20) != 0) {
        uVar1 = F_00e1a6a0(this,uVar1,param_3);
      }
      return uVar1;
    }
    uVar1 = F_00e1a670(this,uVar1);
    return uVar1;
  }
switchD_00e1aa38_default: ;
  return 0;
}

/* ref: FUN_00e1ab30 */
uint F_00e1ab30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1ab30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(uint *)(gen_frame + 0x14)) = 0;
  (*(uint *)(gen_frame + 0x18)) = 0x80000000;
  F_00da04b0(((undefined1 *)(gen_frame + 0x4)),&(*(int *)(gen_frame + 0x10)));
  F_00e19e60(this,((undefined1 *)(gen_frame + 0x4)));
  if ((*(uint *)(gen_frame + 0x14)) == ((*(uint *)(gen_frame + 0x18)) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x10)),1);
  }
  *(undefined1 *)((*(int *)(gen_frame + 0x10)) + (*(uint *)(gen_frame + 0x14))) = 0;
  (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x14)) + 1;
  F_00d91480(param_1,(*(int *)(gen_frame + 0x10)));
  F_00d9fda0(((undefined1 *)(gen_frame + 0x4)));
  (*(uint *)(gen_frame + 0x14)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x18))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x10)),(*(uint *)(gen_frame + 0x18)) & 0x3fffffff);
  }
  return (uint)param_1;
}

/* ref: FUN_00e1abe0 */
uint F_00e1abe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1abe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  ((int *)(gen_frame + 0x0))[1] = 0;
  ((int *)(gen_frame + 0x0))[2] = 0;
  ((int *)(gen_frame + 0x0))[0] = param_1;
  uVar1 = F_00e1a3b0(this,((int *)(gen_frame + 0x0)));
  *(uint *)((int)this + param_1 * 4 + 0xc) = uVar1;
  return uVar1;
}

/* ref: FUN_00e1ac10 */
uint F_00e1ac10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1ac10u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this_00;
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 extraout_ECX = 0;
  int iVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)&gen_args[1]) = F_00e19c80((*(uint *)&gen_args[1]));
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(uint *)(gen_frame + 0x10)) = 0;
  (*(uint *)(gen_frame + 0x14)) = 0x80000000;
  F_00e1a4a0((*(undefined * PTR32 *)&gen_args[0]),extraout_ECX,&(*(int *)(gen_frame + 0xc)));
  uVar2 = (*(uint *)(gen_frame + 0x10));
  (*(int *)(gen_frame + 0x8)) = ((int)0x80000000);
  (*(int *)(gen_frame + 0x0)) = 0;
  (*(uint *)(gen_frame + 0x4)) = 0;
  if (0 < (int)(*(uint *)(gen_frame + 0x10))) {
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x10)) & ((int)(*(uint *)(gen_frame + 0x10)) < 0) - 1,4);
  }
  (*(uint *)(gen_frame + 0x4)) = uVar2;
  iVar4 = 0;
  if (0 < (int)(*(uint *)(gen_frame + 0x10))) {
    do {
      uVar2 = F_00e19cd0(*(undefined * PTR32 *)((*(int *)(gen_frame + 0xc)) + iVar4 * 4));
      *(uint *)((*(int *)(gen_frame + 0x0)) + iVar4 * 4) = uVar2;
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(*(uint *)(gen_frame + 0x10)));
  }
  iVar4 = 0;
  if (0 < (int)(*(uint *)(gen_frame + 0x10))) {
    do {
      puVar1 = *(undefined4 * PTR32 *)((*(int *)(gen_frame + 0xc)) + iVar4 * 4);
      F_0105cc90((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x44),*(undefined4 *)((*(int *)(gen_frame + 0x0)) + iVar4 * 4),puVar1);
      iVar4 = iVar4 + 1;
      *puVar1 = 0;
      puVar1[1] = 0;
      (*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 *)(gen_frame + 0x18));
    } while (iVar4 < (int)(*(uint *)(gen_frame + 0x10)));
  }
  this_00 = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34)));
  uVar2 = F_00da3ae0(this_00,(*(uint *)&gen_args[1]));
  F_00da3e40(this_00,(int)&(*(uint *)&gen_args[1]) + 3,uVar2);
  if ((*(undefined1 *)((char *)&(*(uint *)&gen_args[1]) + 3)) != '\0') {
    uVar3 = F_00da3990(this_00,uVar2);
    F_00da0f40(uVar3,&REFG(undefined * PTR32, 0x13516ac));
    F_00da3b70(this_00,uVar2);
  }
  (*(uint *)(gen_frame + 0x4)) = 0;
  if (-1 < (*(int *)(gen_frame + 0x8))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0x8)) * 4);
  }
  (*(int *)(gen_frame + 0x0)) = 0;
  (*(uint *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x8)) = 0x80000000;
  uVar2 = (*(uint *)(gen_frame + 0x14));
  if (-1 < (int)(*(uint *)(gen_frame + 0x14))) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x14)) * 4);
  }
  return uVar2;
}

/* ref: FUN_00e1ad70 */
uint F_00e1ad70(unsigned int gen_a0)
{
  GEN_ENTER(0xe1ad70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * this_00;
  undefined4 * puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  this_00 = (undefined4 *)((int)this + 0x50);
  (*(int *)(gen_frame + 0x0)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0x80000000;
  F_00dc18d0(this_00,((code *)REFP(0xe1a5f0)),0,&(*(int *)(gen_frame + 0x0)));
  iVar3 = 0;
  if (0 < (*(int *)(gen_frame + 0x4))) {
    do {
      puVar1 = *(undefined4 * PTR32 *)((*(int *)(gen_frame + 0x0)) + iVar3 * 4);
      uVar2 = *this_00;
      *(int *)((int)this + 0x84) = *(int *)((int)this + 0x84) + 1;
      *puVar1 = uVar2;
      iVar3 = iVar3 + 1;
      *this_00 = puVar1;
    } while (iVar3 < (*(int *)(gen_frame + 0x4)));
  }
  F_00dc17f0(this_00);
  F_00dc1690(this_00);
  (*(int *)(gen_frame + 0x4)) = 0;
  uVar4 = (*(uint *)(gen_frame + 0x8));
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) * 4);
  }
  return uVar4;
}

/* ref: FUN_00e1ae10 */
uint F_00e1ae10(unsigned int gen_a0)
{
  GEN_ENTER(0xe1ae10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * this_00;
  uint uVar1;
  undefined4 * puVar2;
  uint local_8;
  
  local_8 = (uint)this & 0xffffff00;
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x114e61c));
  F_00da3de0((undefined *)((int)this + 0x34),local_8);
  F_0105cae0((undefined *)((int)this + 0x44));
  F_00dc1c00((undefined *)((int)this + 0x50),0xc,4,0x800,0,0);
  F_00da1030((int)this + 0xc,0,0x28);
  F_00e1abe0(this,1);
  F_00e1abe0(this,4);
  F_00e1abe0(this,3);
  F_00e1abe0(this,5);
  F_00e1abe0(this,2);
  this_00 = *(undefined4 * PTR32 *)((int)this + 0x50);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = *(undefined4 * PTR32 *)((int)this + 0x70);
    if (this_00 < *(undefined4 * PTR32 *)((int)this + 0x74)) {
      *(int *)((int)this + 0x84) = *(int *)((int)this + 0x84) + -1;
      *(int *)((int)this + 0x70) = *(int *)((int)this + 0x54) + (int)this_00;
    }
    else {
      this_00 = (undefined4 *)F_00dc1990((undefined *)((int)this + 0x50));
    }
  }
  else {
    *(int *)((int)this + 0x84) = *(int *)((int)this + 0x84) + -1;
    *(undefined4 *)((int)this + 0x50) = *this_00;
  }
  *this_00 = 6;
  this_00[1] = 0;
  this_00[2] = 0;
  puVar2 = this_00;
  uVar1 = F_00e19cd0(this_00);
  F_0105bcf0((undefined *)((int)this + 0x44),uVar1,puVar2);
  *(undefined4 * PTR32 *)((int)this + 8) = this_00;
  return (uint)this;
}

/* ref: FUN_00e1af00 */
uint F_00e1af00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1af00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = ((undefined1 *)(gen_frame + 0xc));
  (*(uint *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0x80000010;
  uVar3 = param_1;
  do {
    if ((*(uint *)(gen_frame + 0x4)) == ((*(uint *)(gen_frame + 0x8)) & 0x3fffffff)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),4);
    }
    uVar4 = (*(uint *)(gen_frame + 0x4));
    *(uint *)((*(undefined1 * PTR32 *)(gen_frame + 0x0)) + (*(uint *)(gen_frame + 0x4)) * 4) = uVar3;
    uVar1 = (*(uint *)(gen_frame + 0x4)) + 1;
    (*(uint *)(gen_frame + 0x4)) = uVar1;
    uVar3 = *(uint *)(uVar3 + 4);
  } while (uVar3 != 0);
  uVar2 = param_2;
  if (*(uint *)((*(undefined1 * PTR32 *)(gen_frame + 0x0)) + uVar1 * 4 + -4) != param_2) {
    for (; -1 < (int)uVar4; uVar4 = uVar4 - 1) {
      uVar2 = F_00e1a6d0(this,*(undefined4 *)((*(undefined1 * PTR32 *)(gen_frame + 0x0)) + uVar4 * 4),uVar2);
    }
    (*(uint *)(gen_frame + 0x4)) = 0;
    if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) * 4);
    }
    return uVar2;
  }
  (*(uint *)(gen_frame + 0x4)) = uVar3;
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) * 4);
  }
  return param_1;
}

/* ref: FUN_00e1aff0 */
uint F_00e1aff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1aff0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char * pcVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (*(uint *)&gen_args[1]);
  pcVar1 = (char *)F_00e1a770((*(undefined * PTR32 *)&gen_args[0]),(int)&(*(uint *)&gen_args[1]) + 3,(*(uint *)&gen_args[1]));
  if (*pcVar1 != '\0') {
    return uVar2;
  }
  (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = ((undefined1 *)(gen_frame + 0xc));
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(int *)(gen_frame + 0x8)) = -0x7ffffff0;
  F_00e1a310(uVar2,&(*(undefined1 * PTR32 *)(gen_frame + 0x0)));
  iVar3 = **(int * PTR32 *)((*(undefined1 * PTR32 *)(gen_frame + 0x0)) + (*(int *)(gen_frame + 0x4)) * 4 + -4);
  if (iVar3 == 6) {
    uVar2 = F_00e19c80(*(int * PTR32 *)((*(undefined1 * PTR32 *)(gen_frame + 0x0)) + (*(int *)(gen_frame + 0x4)) * 4 + -4));
    uVar2 = F_00e1a240((*(undefined * PTR32 *)&gen_args[0]),uVar2);
  }
  else {
    uVar2 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar3 * 4 + 0xc)));
  }
  if (uVar2 == 0) {
    (*(int *)(gen_frame + 0x4)) = 0;
    if (-1 < (*(int *)(gen_frame + 0x8))) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0x8)) * 4);
    }
    return 0;
  }
  for (iVar3 = (*(int *)(gen_frame + 0x4)) + -2; -1 < iVar3; iVar3 = iVar3 + -1) {
    uVar2 = F_00e1a6d0((*(undefined * PTR32 *)&gen_args[0]),*(undefined4 *)((*(undefined1 * PTR32 *)(gen_frame + 0x0)) + iVar3 * 4),uVar2);
  }
  (*(int *)(gen_frame + 0x4)) = 0;
  if (-1 < (*(int *)(gen_frame + 0x8))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0x8)) * 4);
  }
  return uVar2;
}

/* ref: FUN_00e1b110 */
uint F_00e1b110(unsigned int gen_a0)
{
  GEN_ENTER(0xe1b110u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint local_8;
  
  local_8 = (uint)this & 0xffffff00;
  F_00da3de0(this,local_8);
  return (uint)this;
}

/* ref: FUN_00e1b130 */
uint F_00e1b130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1b130u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00da4190(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e1b140 */
uint F_00e1b140(unsigned int gen_a0)
{
  GEN_ENTER(0xe1b140u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0105cae0(this);
  return (uint)this;
}

/* ref: FUN_00e1b150 */
unsigned int F_00e1b150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1b150u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_0105bcf0(this,param_1,param_2);
  return 0;
}

/* ref: FUN_00e1b160 */
uint F_00e1b160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1b160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0105bd60(this,param_1);
  return uVar1;
}

/* ref: FUN_00e1b170 */
uint F_00e1b170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1b170u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0105cc90(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e1b180 */
uint F_00e1b180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1b180u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00da3a20(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e1b190 */
uint F_00e1b190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1b190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00da3ae0(this,param_1);
  return uVar1;
}

/* ref: FUN_00e1b1a0 */
uint F_00e1b1a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1b1a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00da3990(in_ecx,param_2);
  return uVar1;
}

/* ref: FUN_00e1b1b0 */
uint F_00e1b1b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1b1b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00da39d0(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e1b1c0 */
uint F_00e1b1c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1b1c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_00da3e40(in_ecx,param_2,param_3);
  return param_2;
}

/* ref: FUN_00e1b1e0 */
unsigned int F_00e1b1e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1b1e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00da3b70(this,param_1);
  return 0;
}

/* ref: FUN_00e1b200 */
uint F_00e1b200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1b200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00da39f0(this,param_1);
  return uVar1;
}

/* ref: FUN_00e1b220 */
uint F_00e1b220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1b220u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(*in_ecx + 4 + param_2 * 8);
}

/* ref: FUN_00e1b230 */
uint F_00e1b230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1b230u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  *(bool *)param_2 = param_3 <= *(int *)(in_ecx + 8);
  return param_2;
}

/* ref: FUN_00e1b280 */
uint F_00e1b280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1b280u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00e1b2b0 */
byte F_00e1b2b0(unsigned int gen_a0)
{
  GEN_ENTER(0xe1b2b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 != -1;
}

/* ref: FUN_00e1b2c0 */
byte F_00e1b2c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1b2c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_1 == param_2;
}

/* ref: FUN_00e1b2d0 */
uint F_00e1b2d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe1b2d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: FUN_00e1b310 */
unsigned int F_00e1b310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1b310u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e1b340 */
uint F_00e1b340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1b340u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00e1b360 */
uint F_00e1b360(unsigned int gen_a0)
{
  GEN_ENTER(0xe1b360u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint local_8;
  
  local_8 = (uint)this & 0xffffff00;
  F_00da3de0(this,local_8);
  return (uint)this;
}

/* ref: FUN_00e1b380 */
uint F_00e1b380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1b380u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (*(undefined4 *)&gen_args[1]);
  uVar2 = F_00da3ae0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]));
  F_00da3e40((*(undefined * PTR32 *)&gen_args[0]),(int)&(*(undefined4 *)&gen_args[1]) + 3,uVar2);
  if ((*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[1]) + 3)) == '\0') {
    uVar2 = F_00da0f10(uVar1,&REFG(undefined * PTR32, 0x13516ac));
    F_00da3a20((*(undefined * PTR32 *)&gen_args[0]),uVar2,(*(undefined4 *)&gen_args[2]));
    return uVar2;
  }
  uVar3 = F_00da3990((*(undefined * PTR32 *)&gen_args[0]),uVar2);
  F_00da39d0((*(undefined * PTR32 *)&gen_args[0]),uVar2,(*(undefined4 *)&gen_args[2]));
  return uVar3;
}

/* ref: FUN_00e1b3f0 */
uint F_00e1b3f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1b3f0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(*in_ecx + 4 + param_2 * 8);
}

/* ref: FUN_00e1b400 */
uint F_00e1b400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1b400u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  *(bool *)param_2 = param_3 <= *(int *)(in_ecx + 8);
  return param_2;
}

/* ref: FUN_00e1b440 */
unsigned int F_00e1b440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1b440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00da3990(this,param_1);
  F_00da0f40(uVar1,&REFG(undefined * PTR32, 0x13516ac));
  F_00da3b70(this,param_1);
  return 0;
}

/* ref: FUN_00e1b470 */
unsigned int F_00e1b470(unsigned int gen_a0)
{
  GEN_ENTER(0xe1b470u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar2 = F_00da3970(this);
  F_00da3e40(this,(int)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3,uVar2);
  cVar1 = (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3));
  while (cVar1 != '\0') {
    uVar3 = F_00da3990(this,uVar2);
    F_00da0f40(uVar3,&REFG(undefined * PTR32, 0x13516ac));
    uVar2 = F_00da39f0(this,uVar2);
    F_00da3e40(this,(int)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3,uVar2);
    cVar1 = (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3));
  }
  F_00da3cd0(this);
  return 0;
}

/* ref: FUN_00e1b4f0 */
uint F_00e1b4f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1b4f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  iVar1 = *(int *)((int)this + 8);
  uVar2 = param_1 + 1;
  do {
    if ((int)uVar2 <= iVar1) {
      piVar3 = (int *)(*(int *)this + uVar2 * 8);
      do {
        if (*piVar3 == -1) {
          return iVar1 + 1;
        }
        if (*piVar3 == param_2) {
          return uVar2;
        }
        uVar2 = uVar2 + 1;
        piVar3 = piVar3 + 2;
      } while ((int)uVar2 <= iVar1);
    }
    uVar2 = 0;
  } while( true );
}

/* ref: FUN_00e1b540 */
unsigned int F_00e1b540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1b540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  
  iVar1 = param_1 + 1;
  if (iVar1 <= *(int *)((int)this + 8)) {
    piVar2 = (int *)(*(int *)this + iVar1 * 8);
    do {
      if (*piVar2 != -1) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar1 <= *(int *)((int)this + 8));
  }
  return 0;
}

/* ref: FUN_00e1b580 */
uint F_00e1b580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1b580u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e1b5c0 */
uint F_00e1b5c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe1b5c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: FUN_00e1b5e0 */
uint F_00e1b5e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1b5e0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e1b620 */
uint F_00e1b620(unsigned int gen_a0)
{
  GEN_ENTER(0xe1b620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00e1b470(this);
  uVar1 = F_00da3e20(this);
  return uVar1;
}

/* ref: FUN_00e1b630 */
uint F_00e1b630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1b630u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00da3ae0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]));
  F_00da3e40((*(undefined * PTR32 *)&gen_args[0]),(int)&(*(undefined4 *)&gen_args[1]) + 3,uVar1);
  if ((*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[1]) + 3)) != '\0') {
    uVar2 = F_00da3990((*(undefined * PTR32 *)&gen_args[0]),uVar1);
    F_00da0f40(uVar2,&REFG(undefined * PTR32, 0x13516ac));
    F_00da3b70((*(undefined * PTR32 *)&gen_args[0]),uVar1);
    return 0;
  }
  return 1;
}

/* ref: FUN_00e1b6b0 */
unsigned int F_00e1b6b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1b6b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  
  iVar1 = param_1 + 1;
  if (iVar1 <= *(int *)((int)this + 8)) {
    piVar2 = (int *)(*(int *)this + iVar1 * 8);
    do {
      if (*piVar2 != -1) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar1 <= *(int *)((int)this + 8));
  }
  return 0;
}

/* ref: FUN_00e1b6e0 */
uint F_00e1b6e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1b6e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  iVar1 = *(int *)((int)this + 8);
  uVar2 = param_1 + 1;
  do {
    if ((int)uVar2 <= iVar1) {
      piVar3 = (int *)(*(int *)this + uVar2 * 8);
      do {
        if (*piVar3 == -1) {
          return iVar1 + 1;
        }
        if (*piVar3 == param_2) {
          return uVar2;
        }
        uVar2 = uVar2 + 1;
        piVar3 = piVar3 + 2;
      } while ((int)uVar2 <= iVar1);
    }
    uVar2 = 0;
  } while( true );
}

/* ref: FUN_00e1b730 */
uint F_00e1b730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1b730u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e1b770 */
uint F_00e1b770(unsigned int gen_a0)
{
  GEN_ENTER(0xe1b770u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e1b7b0 */
uint F_00e1b7b0(unsigned int gen_a0)
{
  GEN_ENTER(0xe1b7b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00e1b7e0 */
uint F_00e1b7e0(unsigned int gen_a0)
{
  GEN_ENTER(0xe1b7e0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e1b820 */
uint F_00e1b820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1b820u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(int *)this = (int)this + 0xc;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0x80000010;
  return (uint)this;
}

/* ref: hkTypeManager::vf0 */
uint F_00e1b840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1b840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00e1a370(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00e1b880 */
uint F_00e1b880(unsigned int gen_a0)
{
  GEN_ENTER(0xe1b880u, gen_a0, 0u, 0u, 0u);
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

/* ref: hkStaticClassNameRegistry::vf3 */
uint F_00e1b8c0(unsigned int gen_a0)
{
  GEN_ENTER(0xe1b8c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: FUN_00e1b8d0 */
unsigned int F_00e1b8d0(unsigned int gen_a0)
{
  GEN_ENTER(0xe1b8d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)((int)this + 0x14) == 0) {
    F_00e05570(*(undefined4 *)((int)this + 0xc),*(undefined4 *)((int)this + 0x10));
    *(undefined4 *)((int)this + 0x14) = 1;
  }
  return 0;
}

/* ref: FUN_00e1b900 */
uint F_00e1b900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe1b900u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined4 *)((int)this + 0xc) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x114e62c));
  *(undefined4 *)((int)this + 0x10) = param_2;
  *(undefined4 *)((int)this + 0x14) = 1;
  *(undefined4 *)((int)this + 8) = param_3;
  return (uint)this;
}

/* ref: hkStaticClassNameRegistry::vf4 */
uint F_00e1b940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1b940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  F_00e1b8d0(this);
  piVar1 = *(int * PTR32 *)(this + 0xc);
  iVar4 = 0;
  if (*piVar1 != 0) {
    iVar3 = 0;
    do {
      uVar2 = F_00d92610(*(undefined4 *)((int)piVar1 + iVar3));
      uVar2 = F_00da0d20(param_1,uVar2);
      piVar1 = *(int * PTR32 *)(this + 0xc);
      if (uVar2 == 0) {
        return piVar1[iVar4];
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar4 * 4;
    } while (piVar1[iVar4] != 0);
  }
  return 0;
}

/* ref: FUN_00e1b9a0 */
uint F_00e1b9a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe1b9a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined4 *)((int)this + 0xc) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x114e62c));
  *(undefined4 *)((int)this + 0x10) = param_2;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 8) = param_3;
  return (uint)this;
}

