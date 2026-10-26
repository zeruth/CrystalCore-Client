#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_0105bac0 */
uint F_0105bac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105bac0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return ((*(uint *)&gen_args[0]) >> 4) * -0x61c8864f & (*(uint *)&gen_args[1]);
}

/* ref: FUN_0105bae0 */
uint F_0105bae0(unsigned int gen_a0)
{
  GEN_ENTER(0x105bae0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  *param_1 = 0xffffffff;
  return (uint)param_1;
}

/* ref: FUN_0105baf0 */
uint F_0105baf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105baf0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  return ((*(uint *)&gen_args[0]) >> 4) * -0x61c8864f & (*(uint *)&gen_args[2]);
}

/* ref: FUN_0105bb10 */
uint F_0105bb10(unsigned int gen_a0)
{
  GEN_ENTER(0x105bb10u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  return (uint)param_1;
}

/* ref: FUN_0105bb30 */
uint F_0105bb30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105bb30u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  if (((*(uint *)&gen_args[0]) & (*(uint *)&gen_args[1])) != 0xffffffff) {
    return 1;
  }
  return 0;
}

/* ref: FUN_0105bb50 */
uint F_0105bb50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105bb50u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  if ((param_1 == param_3) && (param_2 == param_4)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_0105bb70 */
uint F_0105bb70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105bb70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = (*(uint *)(in_ecx + 4) & 0x80000000) == 0;
  return param_2;
}

/* ref: FUN_0105bb90 */
uint F_0105bb90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105bb90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0105b680(this,param_2);
  *(bool *)param_1 = (int)uVar1 <= *(int *)((int)this + 8);
  return param_1;
}

/* ref: FUN_0105bbb0 */
uint F_0105bbb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105bbb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = (*(uint *)(in_ecx + 4) & 0x80000000) == 0;
  return param_2;
}

/* ref: FUN_0105bbd0 */
uint F_0105bbd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105bbd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = (*(uint *)(in_ecx + 4) & 0x80000000) == 0;
  return param_2;
}

/* ref: FUN_0105bbf0 */
unsigned int F_0105bbf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105bbf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  uint uVar2;
  
  uVar2 = param_2 >> 3;
  *(uint *)((int)this + 8) = uVar2 - 1;
  iVar1 = 0;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = 0x80000000;
  if (uVar2 != 0) {
    do {
      *(undefined4 *)(*(int *)this + iVar1 * 8) = 0xffffffff;
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)uVar2);
  }
  return 0;
}

/* ref: FUN_0105bc30 */
unsigned int F_0105bc30(unsigned int gen_a0)
{
  GEN_ENTER(0x105bc30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if ((*(uint *)((int)this + 4) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 8))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,*(int *)((int)this + 8) * 8 + 8);
  }
  return 0;
}

/* ref: FUN_0105bc60 */
int F_0105bc60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105bc60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = *(int *)this;
  uVar4 = (param_1 >> 4) * -0x61c8864f & *(uint *)((int)this + 8);
  iVar3 = 0;
  uVar2 = *(uint *)(iVar1 + uVar4 * 8);
  while (uVar2 != 0xffffffff) {
    if ((uVar2 == param_1) && (*(int *)(iVar1 + 4 + uVar4 * 8) == param_2)) {
      iVar3 = iVar3 + 1;
    }
    uVar4 = uVar4 + 1 & *(uint *)((int)this + 8);
    uVar2 = *(uint *)(iVar1 + uVar4 * 8);
  }
  return iVar3;
}

/* ref: FUN_0105bcb0 */
int F_0105bcb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105bcb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (param_1 >> 4) * -0x61c8864f & *(uint *)((int)this + 8);
  iVar2 = 0;
  uVar1 = *(uint *)(*(int *)this + uVar3 * 8);
  while (uVar1 != 0xffffffff) {
    if (uVar1 == param_1) {
      iVar2 = iVar2 + 1;
    }
    uVar3 = uVar3 + 1 & *(uint *)((int)this + 8);
    uVar1 = *(uint *)(*(int *)this + uVar3 * 8);
  }
  return iVar2;
}

/* ref: FUN_0105bcf0 */
unsigned int F_0105bcf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105bcf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)((int)this + 8) < *(int *)((int)this + 4) * 2) {
    F_0105bf90(this,*(int *)((int)this + 8) * 2 + 2);
  }
  iVar1 = *(int *)this;
  uVar3 = (param_1 >> 4) * -0x61c8864f & *(uint *)((int)this + 8);
  iVar2 = *(int *)(iVar1 + uVar3 * 8);
  while (iVar2 != -1) {
    uVar3 = uVar3 + 1 & *(uint *)((int)this + 8);
    iVar2 = *(int *)(iVar1 + uVar3 * 8);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(uint *)(iVar1 + uVar3 * 8) = param_1;
  *(undefined4 *)(*(int *)this + 4 + uVar3 * 8) = param_2;
  return 0;
}

/* ref: FUN_0105bd60 */
uint F_0105bd60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105bd60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)((int)this + 8);
  uVar3 = (param_1 >> 4) * -0x61c8864f & uVar1;
  uVar2 = *(uint *)(*(int *)this + uVar3 * 8);
  while( true ) {
    if (uVar2 == 0xffffffff) {
      return uVar1 + 1;
    }
    if (uVar2 == param_1) break;
    uVar3 = uVar3 + 1 & uVar1;
    uVar2 = *(uint *)(*(int *)this + uVar3 * 8);
  }
  return uVar3;
}

/* ref: FUN_0105bda0 */
uint F_0105bda0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105bda0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *(uint *)((int)this + 8);
  iVar2 = *(int *)this;
  uVar4 = (param_1 >> 4) * -0x61c8864f & uVar1;
  iVar3 = *(int *)(iVar2 + uVar4 * 8);
  while( true ) {
    if (iVar3 == -1) {
      return uVar1 + 1;
    }
    if ((*(uint *)(iVar2 + uVar4 * 8) == param_1) && (*(int *)(iVar2 + 4 + uVar4 * 8) == param_2))
    break;
    uVar4 = uVar4 + 1 & uVar1;
    iVar3 = *(int *)(iVar2 + uVar4 * 8);
  }
  return uVar4;
}

/* ref: FUN_0105bde0 */
uint F_0105bde0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105bde0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *(int *)this;
  uVar3 = (param_1 >> 4) * -0x61c8864f & *(uint *)((int)this + 8);
  uVar2 = *(uint *)(iVar1 + uVar3 * 8);
  while( true ) {
    if (uVar2 == 0xffffffff) {
      return param_2;
    }
    if (uVar2 == param_1) break;
    uVar3 = uVar3 + 1 & *(uint *)((int)this + 8);
    uVar2 = *(uint *)(iVar1 + uVar3 * 8);
  }
  return *(uint *)(iVar1 + 4 + uVar3 * 8);
}

/* ref: FUN_0105be30 */
uint F_0105be30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105be30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_0105bd60(this,param_1);
  if ((int)uVar1 <= *(int *)((int)this + 8)) {
    *param_2 = *(undefined4 *)(*(int *)this + 4 + uVar1 * 8);
    return 0;
  }
  return 1;
}

/* ref: FUN_0105be60 */
unsigned int F_0105be60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105be60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  *(undefined4 *)(*(int *)this + param_1 * 8) = 0xffffffff;
  iVar1 = *(int *)this;
  uVar5 = *(uint *)((int)this + 8);
  uVar3 = uVar5 + param_1 & uVar5;
  iVar2 = *(int *)(iVar1 + uVar3 * 8);
  while (iVar2 != -1) {
    uVar3 = uVar3 + uVar5 & uVar5;
    iVar2 = *(int *)(iVar1 + uVar3 * 8);
  }
  uVar4 = uVar3 + 1 & uVar5;
  uVar3 = param_1 + 1 & uVar5;
  iVar1 = *(int *)(iVar1 + uVar3 * 8);
  uVar6 = param_1;
  while (iVar1 != -1) {
    iVar1 = *(int *)this;
    uVar5 = (*(uint *)(iVar1 + uVar3 * 8) >> 4) * -0x61c8864f & uVar5;
    if ((((uVar3 < uVar4) || (uVar5 <= uVar6)) &&
        ((uVar6 <= uVar3 || ((uVar5 <= uVar6 && (uVar3 < uVar5)))))) &&
       ((uVar5 <= uVar6 || (uVar4 <= uVar5)))) {
      *(undefined4 *)(iVar1 + uVar6 * 8) = *(undefined4 *)(iVar1 + uVar3 * 8);
      *(undefined4 *)(*(int *)this + 4 + uVar6 * 8) = *(undefined4 *)(*(int *)this + 4 + uVar3 * 8);
      *(undefined4 *)(*(int *)this + uVar3 * 8) = 0xffffffff;
      uVar6 = uVar3;
    }
    uVar5 = *(uint *)((int)this + 8);
    uVar3 = uVar3 + 1 & uVar5;
    iVar1 = *(int *)(*(int *)this + uVar3 * 8);
  }
  return 0;
}

/* ref: FUN_0105bf10 */
uint F_0105bf10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105bf10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar1 = *(uint *)((int)this + 8);
  iVar6 = 0;
  if (-1 < (int)uVar1) {
    iVar2 = *(int *)this;
    do {
      uVar3 = *(uint *)(iVar2 + iVar6 * 8);
      if (uVar3 != 0xffffffff) {
        uVar5 = (uVar3 >> 4) * -0x61c8864f & uVar1;
        uVar4 = *(uint *)(iVar2 + uVar5 * 8);
        while (uVar4 != uVar3) {
          uVar5 = uVar5 + 1 & uVar1;
          uVar4 = *(uint *)(iVar2 + uVar5 * 8);
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <= (int)uVar1);
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_0105bf60 */
unsigned int F_0105bf60(unsigned int gen_a0)
{
  GEN_ENTER(0x105bf60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 8) + 1;
  iVar1 = 0;
  if (0 < iVar2) {
    do {
      *(undefined4 *)(*(int *)this + iVar1 * 8) = 0xffffffff;
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar2);
  }
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) & 0x80000000;
  return 0;
}

/* ref: FUN_0105bf90 */
uint F_0105bf90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105bf90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *(uint *)((int)this + 4);
  iVar2 = *(int *)this;
  iVar6 = *(int *)((int)this + 8) + 1;
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 4))))(&REFG(undefined * PTR32, 0x13516ac),param_1 * 8);
  if (uVar4 == 0) {
    return 1;
  }
  *(uint *)this = uVar4;
  iVar5 = 0;
  if (0 < param_1) {
    do {
      *(undefined4 *)(*(int *)this + iVar5 * 8) = 0xffffffff;
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_1);
  }
  *(int *)((int)this + 8) = param_1 + -1;
  iVar5 = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (0 < iVar6) {
    do {
      iVar3 = *(int *)(iVar2 + iVar5 * 8);
      if (iVar3 != -1) {
        F_0105bcf0(this,iVar3,*(undefined4 *)(iVar2 + 4 + iVar5 * 8));
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar6);
  }
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 8))))(&REFG(undefined * PTR32, 0x13516ac),iVar2,iVar6 * 8);
  }
  return 0;
}

/* ref: FUN_0105c050 */
uint F_0105c050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105c050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  
  iVar2 = 4;
  *(undefined4 *)((int)this + 4) = 0;
  if (4 < param_1 * 3) {
    do {
      iVar2 = iVar2 * 2;
    } while (iVar2 < param_1 * 3);
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 4))))(&REFG(undefined * PTR32, 0x13516ac),iVar2 * 8);
  *(uint *)this = uVar1;
  *(int *)((int)this + 8) = iVar2 + -1;
  F_0105b870(this);
  return (uint)this;
}

/* ref: FUN_0105c120 */
uint F_0105c120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105c120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint local_8;
  
  uVar4 = param_1 * -0x61c8864f & *(uint *)((int)this + 8);
  iVar3 = *(int *)this;
  iVar2 = uVar4 * 8;
  local_8 = 0;
  uVar1 = uVar4;
  if (*(int *)(iVar2 + iVar3) == -1) {
    return 0;
  }
  do {
    if (*(int *)(iVar3 + iVar2) == param_1) {
      F_0105b780(this,uVar1);
      local_8 = local_8 + 1;
      uVar1 = uVar4;
    }
    else {
      uVar1 = uVar1 + 1 & *(uint *)((int)this + 8);
    }
    iVar3 = *(int *)this;
    iVar2 = uVar1 * 8;
  } while (*(int *)(iVar3 + uVar1 * 8) != -1);
  return local_8;
}

/* ref: FUN_0105c1a0 */
uint F_0105c1a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105c1a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((*(int *)((int)this + 8) < *(int *)((int)this + 4) * 2) &&
     (uVar3 = F_0105b8f0(this,*(int *)((int)this + 8) * 2 + 2), uVar3 != 0)) {
    return 1;
  }
  iVar1 = *(int *)this;
  uVar3 = param_1 * -0x61c8864f & *(uint *)((int)this + 8);
  iVar2 = *(int *)(iVar1 + uVar3 * 8);
  while (iVar2 != -1) {
    uVar3 = uVar3 + 1 & *(uint *)((int)this + 8);
    iVar2 = *(int *)(iVar1 + uVar3 * 8);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int *)(iVar1 + uVar3 * 8) = param_1;
  *(undefined4 *)(*(int *)this + 4 + uVar3 * 8) = param_2;
  return 0;
}

/* ref: FUN_0105c220 */
unsigned int F_0105c220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105c220u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 8) < *(int *)((int)this + 4) * 2 + 2) {
    F_0105b8f0(this,*(int *)((int)this + 8) * 2 + 2);
  }
  iVar1 = *(int *)this;
  uVar2 = param_1 * -0x61c8864f & *(uint *)((int)this + 8);
  if (*(int *)(iVar1 + uVar2 * 8) != param_1) {
    while (*(int *)(iVar1 + uVar2 * 8) != -1) {
      uVar2 = uVar2 + 1 & *(uint *)((int)this + 8);
      if (*(int *)(iVar1 + uVar2 * 8) == param_1) {
        return 0;
      }
    }
    *(int *)(iVar1 + uVar2 * 8) = param_1;
    *(undefined4 *)(*(int *)this + 4 + uVar2 * 8) = param_2;
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  }
  return 0;
}

/* ref: FUN_0105c290 */
uint F_0105c290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105c290u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0105b6c0(this,param_1,param_2);
  if ((int)uVar1 <= *(int *)((int)this + 8)) {
    F_0105b780(this,uVar1);
    return 0;
  }
  return 1;
}

/* ref: FUN_0105c2d0 */
uint F_0105c2d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105c2d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0105b680(this,param_1);
  if ((int)uVar1 <= *(int *)((int)this + 8)) {
    F_0105b780(this,uVar1);
    return 0;
  }
  return 1;
}

/* ref: FUN_0105c300 */
uint F_0105c300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105c300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = 4;
  if (4 < param_1 * 3) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_1 * 3);
  }
  uVar2 = F_0105b8f0(this,iVar1);
  return uVar2;
}

/* ref: FUN_0105c330 */
unsigned int F_0105c330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105c330u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = param_2 >> 4;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = 0x80000000;
  *(uint *)((int)this + 8) = uVar2 - 1;
  if (uVar2 != 0) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)this;
      *(undefined4 *)(iVar3 + iVar1) = 0xffffffff;
      *(undefined4 *)(iVar3 + 4 + iVar1) = 0xffffffff;
      iVar3 = iVar3 + 0x10;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return 0;
}

/* ref: FUN_0105c370 */
uint F_0105c370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x105c370u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint local_8;
  
  uVar4 = (param_1 >> 4) * -0x61c8864f;
  iVar1 = *(int *)this;
  local_8 = 0;
  while( true ) {
    uVar4 = uVar4 & *(uint *)((int)this + 8);
    iVar3 = uVar4 * 0x10;
    uVar2 = *(uint *)(iVar3 + 4 + iVar1);
    if ((*(uint *)(iVar3 + iVar1) & uVar2) == 0xffffffff) break;
    if ((((*(uint *)(iVar3 + iVar1) == param_1) && (uVar2 == param_2)) &&
        (*(int *)(iVar3 + iVar1 + 8) == param_3)) && (*(int *)(iVar3 + iVar1 + 0xc) == param_4)) {
      local_8 = local_8 + 1;
    }
    uVar4 = uVar4 + 1;
  }
  return local_8;
}

/* ref: FUN_0105c3e0 */
uint F_0105c3e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105c3e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint local_8;
  
  uVar3 = (param_1 >> 4) * -0x61c8864f;
  local_8 = 0;
  while( true ) {
    uVar3 = uVar3 & *(uint *)((int)this + 8);
    uVar1 = *(uint *)(*(int *)this + uVar3 * 0x10);
    uVar2 = *(uint *)(*(int *)this + 4 + uVar3 * 0x10);
    if ((uVar1 & uVar2) == 0xffffffff) break;
    if ((uVar1 == param_1) && (uVar2 == param_2)) {
      local_8 = local_8 + 1;
    }
    uVar3 = uVar3 + 1;
  }
  return local_8;
}

/* ref: FUN_0105c470 */
uint F_0105c470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105c470u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  int iVar1;
  uint uVar2;
  uint * puVar3;
  
  iVar1 = *(int *)((int)this + 8);
  uVar2 = param_1 + 1;
  do {
    if ((int)uVar2 <= iVar1) {
      puVar3 = (uint *)(uVar2 * 0x10 + *(int *)this);
      do {
        if ((*puVar3 & puVar3[1]) == 0xffffffff) {
          return iVar1 + 1;
        }
        if ((*puVar3 == param_2) && (puVar3[1] == param_3)) {
          return uVar2;
        }
        uVar2 = uVar2 + 1;
        puVar3 = puVar3 + 4;
      } while ((int)uVar2 <= iVar1);
    }
    uVar2 = 0;
  } while( true );
}

/* ref: FUN_0105c4d0 */
unsigned int F_0105c4d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105c4d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint * puVar2;
  
  iVar1 = param_1 + 1;
  if (iVar1 <= *(int *)((int)this + 8)) {
    puVar2 = (uint *)(iVar1 * 0x10 + *(int *)this);
    do {
      if ((*puVar2 & puVar2[1]) != 0xffffffff) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 4;
    } while (iVar1 <= *(int *)((int)this + 8));
  }
  return 0;
}

/* ref: FUN_0105c500 */
uint F_0105c500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x105c500u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 8) < *(int *)((int)this + 4) * 2) {
    F_0105c860(this,*(int *)((int)this + 8) * 2 + 2);
  }
  iVar1 = *(int *)this;
  uVar2 = (param_1 >> 4) * -0x61c8864f;
  while (uVar2 = uVar2 & *(uint *)((int)this + 8),
        (*(uint *)(iVar1 + uVar2 * 0x10) & *(uint *)(iVar1 + 4 + uVar2 * 0x10)) != 0xffffffff) {
    uVar2 = uVar2 + 1;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(uint *)(iVar1 + uVar2 * 0x10) = param_1;
  *(undefined4 *)(iVar1 + 4 + uVar2 * 0x10) = param_2;
  iVar1 = *(int *)this;
  *(undefined4 *)(iVar1 + 8 + uVar2 * 0x10) = param_3;
  *(undefined4 *)(iVar1 + 0xc + uVar2 * 0x10) = param_4;
  return uVar2 * 2;
}

/* ref: FUN_0105c580 */
uint F_0105c580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105c580u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (param_1 >> 4) * -0x61c8864f;
  while( true ) {
    uVar3 = uVar3 & *(uint *)((int)this + 8);
    uVar1 = *(uint *)(*(int *)this + uVar3 * 0x10);
    uVar2 = *(uint *)(*(int *)this + 4 + uVar3 * 0x10);
    if ((uVar1 & uVar2) == 0xffffffff) {
      return *(uint *)((int)this + 8) + 1;
    }
    if ((uVar1 == param_1) && (uVar2 == param_2)) break;
    uVar3 = uVar3 + 1;
  }
  return uVar3;
}

/* ref: FUN_0105c5d0 */
uint F_0105c5d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x105c5d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint param_4 = (uint)gen_a4;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint * puVar4;
  
  iVar1 = *(int *)this;
  uVar2 = (param_1 >> 4) * -0x61c8864f;
  while( true ) {
    uVar2 = uVar2 & *(uint *)((int)this + 8);
    iVar3 = uVar2 * 0x10;
    puVar4 = (uint *)(iVar3 + iVar1);
    if ((*(uint *)(iVar3 + iVar1) & *(uint *)(iVar3 + 4 + iVar1)) == 0xffffffff) {
      return *(uint *)((int)this + 8) + 1;
    }
    if ((((*puVar4 == param_1) && (puVar4[1] == param_2)) && (puVar4[2] == param_3)) &&
       (puVar4[3] == param_4)) break;
    uVar2 = uVar2 + 1;
  }
  return uVar2;
}

/* ref: FUN_0105c630 */
uint F_0105c630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x105c630u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = *(int *)this;
  uVar4 = (param_1 >> 4) * -0x61c8864f;
  while( true ) {
    uVar4 = uVar4 & *(uint *)((int)this + 8);
    uVar2 = *(uint *)(iVar1 + uVar4 * 0x10);
    uVar3 = *(uint *)(iVar1 + 4 + uVar4 * 0x10);
    if ((uVar2 & uVar3) == 0xffffffff) {
      return param_3;
    }
    if ((uVar2 == param_1) && (uVar3 == param_2)) break;
    uVar4 = uVar4 + 1;
  }
  return *(uint *)(iVar1 + 8 + uVar4 * 0x10);
}

/* ref: FUN_0105c690 */
uint F_0105c690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105c690u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int iVar1;
  uint uVar2;
  
  uVar2 = F_0105c580(this,param_1,param_2);
  if ((int)uVar2 <= *(int *)((int)this + 8)) {
    iVar1 = *(int *)this;
    *param_3 = *(undefined4 *)(iVar1 + 8 + uVar2 * 0x10);
    param_3[1] = *(undefined4 *)(iVar1 + 0xc + uVar2 * 0x10);
    return 0;
  }
  return 1;
}

/* ref: FUN_0105c6d0 */
unsigned int F_0105c6d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105c6d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = *(int *)this;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  *(undefined4 *)(iVar1 + param_1 * 0x10) = 0xffffffff;
  *(undefined4 *)(iVar1 + 4 + param_1 * 0x10) = 0xffffffff;
  uVar4 = *(uint *)((int)this + 8);
  uVar3 = param_1;
  do {
    uVar3 = uVar4 + uVar3 & uVar4;
  } while ((*(uint *)(*(int *)this + uVar3 * 0x10) & *(uint *)(*(int *)this + 4 + uVar3 * 0x10)) !=
           0xffffffff);
  uVar3 = uVar3 + 1 & uVar4;
  uVar4 = param_1 + 1 & uVar4;
  while( true ) {
    iVar1 = *(int *)this;
    uVar2 = *(uint *)(iVar1 + 4 + uVar4 * 0x10);
    if ((*(uint *)(iVar1 + uVar4 * 0x10) & uVar2) == 0xffffffff) break;
    uVar5 = (*(uint *)(iVar1 + uVar4 * 0x10) >> 4) * -0x61c8864f & *(uint *)((int)this + 8);
    if ((((uVar4 < uVar3) || (uVar5 <= param_1)) &&
        ((param_1 <= uVar4 || ((uVar5 <= param_1 && (uVar4 < uVar5)))))) &&
       ((uVar5 <= param_1 || (uVar3 <= uVar5)))) {
      *(undefined4 *)(iVar1 + param_1 * 0x10) = *(undefined4 *)(iVar1 + uVar4 * 0x10);
      *(uint *)(iVar1 + 4 + param_1 * 0x10) = uVar2;
      iVar1 = *(int *)this;
      *(undefined4 *)(iVar1 + 8 + param_1 * 0x10) = *(undefined4 *)(iVar1 + 8 + uVar4 * 0x10);
      *(undefined4 *)(iVar1 + 0xc + param_1 * 0x10) = *(undefined4 *)(iVar1 + 0xc + uVar4 * 0x10);
      iVar1 = *(int *)this;
      *(undefined4 *)(iVar1 + uVar4 * 0x10) = 0xffffffff;
      *(undefined4 *)(iVar1 + 4 + uVar4 * 0x10) = 0xffffffff;
      param_1 = uVar4;
    }
    uVar4 = uVar4 + 1 & *(uint *)((int)this + 8);
  }
  return 0;
}

/* ref: FUN_0105c7b0 */
uint F_0105c7b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105c7b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  uint uVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  uint * puVar5;
  int local_c;
  
  uVar1 = *(uint *)((int)this + 8);
  if (-1 < (int)uVar1) {
    puVar2 = *(uint * PTR32 *)this;
    local_c = uVar1 + 1;
    puVar5 = puVar2;
    do {
      uVar3 = *puVar5;
      if ((uVar3 & puVar5[1]) != 0xffffffff) {
        uVar4 = (uVar3 >> 4) * -0x61c8864f;
        while ((uVar4 = uVar4 & uVar1, puVar2[uVar4 * 4] != uVar3 ||
               (puVar2[uVar4 * 4 + 1] != puVar5[1]))) {
          uVar4 = uVar4 + 1;
        }
      }
      puVar5 = puVar5 + 4;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_0105c830 */
unsigned int F_0105c830(unsigned int gen_a0)
{
  GEN_ENTER(0x105c830u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 8) + 1;
  if (0 < iVar3) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)this;
      *(undefined4 *)(iVar2 + iVar1) = 0xffffffff;
      *(undefined4 *)(iVar2 + 4 + iVar1) = 0xffffffff;
      iVar2 = iVar2 + 0x10;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) & 0x80000000;
  return 0;
}

/* ref: FUN_0105c860 */
uint F_0105c860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105c860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint * puVar8;
  
  puVar1 = *(uint * PTR32 *)this;
  uVar2 = *(uint *)((int)this + 4);
  iVar7 = *(int *)((int)this + 8) + 1;
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 4))))(&REFG(undefined * PTR32, 0x13516ac),param_1 << 4);
  if (uVar4 != 0) {
    *(uint *)this = uVar4;
    if (0 < param_1) {
      iVar5 = 0;
      iVar6 = param_1;
      do {
        iVar3 = *(int *)this;
        *(undefined4 *)(iVar5 + iVar3) = 0xffffffff;
        *(undefined4 *)(iVar5 + 4 + iVar3) = 0xffffffff;
        iVar5 = iVar5 + 0x10;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    *(undefined4 *)((int)this + 4) = 0;
    *(int *)((int)this + 8) = param_1 + -1;
    puVar8 = puVar1;
    param_1 = iVar7;
    if (0 < iVar7) {
      do {
        if ((*puVar8 & puVar8[1]) != 0xffffffff) {
          F_0105c500(this,*puVar8,puVar8[1],puVar8[2],puVar8[3]);
        }
        iVar6 = param_1 + -1;
        puVar8 = puVar8 + 4;
        param_1 = iVar6;
      } while (iVar6 != 0);
    }
    if ((uVar2 & 0x80000000) == 0) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 8))))(&REFG(undefined * PTR32, 0x13516ac),puVar1,iVar7 * 0x10);
    }
    return 0;
  }
  return 1;
}

/* ref: FUN_0105c940 */
uint F_0105c940(unsigned int gen_a0)
{
  GEN_ENTER(0x105c940u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  return uVar2;
}

/* ref: FUN_0105c960 */
unsigned int F_0105c960(unsigned int gen_a0)
{
  GEN_ENTER(0x105c960u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0xc);
  }
  return 0;
}

/* ref: FUN_0105c990 */
uint F_0105c990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105c990u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0105bd60(this,param_2);
  *(bool *)param_1 = (int)uVar1 <= *(int *)((int)this + 8);
  return param_1;
}

/* ref: FUN_0105c9b0 */
uint F_0105c9b0(unsigned int gen_a0)
{
  GEN_ENTER(0x105c9b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  return uVar2;
}

/* ref: FUN_0105c9d0 */
unsigned int F_0105c9d0(unsigned int gen_a0)
{
  GEN_ENTER(0x105c9d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0xc);
  }
  return 0;
}

/* ref: FUN_0105ca00 */
uint F_0105ca00(unsigned int gen_a0)
{
  GEN_ENTER(0x105ca00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  return uVar2;
}

/* ref: FUN_0105ca20 */
unsigned int F_0105ca20(unsigned int gen_a0)
{
  GEN_ENTER(0x105ca20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0xc);
  }
  return 0;
}

/* ref: FUN_0105ca50 */
uint F_0105ca50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105ca50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_0105c580(this,param_2,param_3);
  *(bool *)param_1 = (int)uVar1 <= *(int *)((int)this + 8);
  return param_1;
}

/* ref: FUN_0105ca80 */
uint F_0105ca80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105ca80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  
  iVar2 = 4;
  *(undefined4 *)((int)this + 4) = 0;
  if (4 < param_1 * 3) {
    do {
      iVar2 = iVar2 * 2;
    } while (iVar2 < param_1 * 3);
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 4))))(&REFG(undefined * PTR32, 0x13516ac),iVar2 * 8);
  *(uint *)this = uVar1;
  *(int *)((int)this + 8) = iVar2 + -1;
  F_0105bf60(this);
  return (uint)this;
}

/* ref: FUN_0105cae0 */
uint F_0105cae0(unsigned int gen_a0)
{
  GEN_ENTER(0x105cae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 4))))(&REFG(undefined * PTR32, 0x13516ac),0x80);
  *(uint *)this = uVar1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0xf;
  if (uVar1 != 0) {
    F_0105bf60(this);
  }
  return (uint)this;
}

/* ref: FUN_0105cb20 */
uint F_0105cb20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105cb20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint local_8;
  
  uVar4 = (param_1 >> 4) * -0x61c8864f & *(uint *)((int)this + 8);
  iVar3 = *(int *)this;
  iVar2 = uVar4 * 8;
  local_8 = 0;
  uVar1 = uVar4;
  if (*(int *)(iVar2 + iVar3) == -1) {
    return 0;
  }
  do {
    if (*(uint *)(iVar3 + iVar2) == param_1) {
      F_0105be60(this,uVar1);
      local_8 = local_8 + 1;
      uVar1 = uVar4;
    }
    else {
      uVar1 = uVar1 + 1 & *(uint *)((int)this + 8);
    }
    iVar3 = *(int *)this;
    iVar2 = uVar1 * 8;
  } while (*(int *)(iVar3 + uVar1 * 8) != -1);
  return local_8;
}

/* ref: FUN_0105cba0 */
uint F_0105cba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105cba0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((*(int *)((int)this + 8) < *(int *)((int)this + 4) * 2) &&
     (uVar3 = F_0105bf90(this,*(int *)((int)this + 8) * 2 + 2), uVar3 != 0)) {
    return 1;
  }
  iVar1 = *(int *)this;
  uVar3 = (param_1 >> 4) * -0x61c8864f & *(uint *)((int)this + 8);
  iVar2 = *(int *)(iVar1 + uVar3 * 8);
  while (iVar2 != -1) {
    uVar3 = uVar3 + 1 & *(uint *)((int)this + 8);
    iVar2 = *(int *)(iVar1 + uVar3 * 8);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(uint *)(iVar1 + uVar3 * 8) = param_1;
  *(undefined4 *)(*(int *)this + 4 + uVar3 * 8) = param_2;
  return 0;
}

/* ref: FUN_0105cc20 */
unsigned int F_0105cc20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105cc20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 8) < *(int *)((int)this + 4) * 2 + 2) {
    F_0105bf90(this,*(int *)((int)this + 8) * 2 + 2);
  }
  iVar1 = *(int *)this;
  uVar2 = (param_1 >> 4) * -0x61c8864f & *(uint *)((int)this + 8);
  if (*(uint *)(iVar1 + uVar2 * 8) != param_1) {
    while (*(int *)(iVar1 + uVar2 * 8) != -1) {
      uVar2 = uVar2 + 1 & *(uint *)((int)this + 8);
      if (*(uint *)(iVar1 + uVar2 * 8) == param_1) {
        return 0;
      }
    }
    *(uint *)(iVar1 + uVar2 * 8) = param_1;
    *(undefined4 *)(*(int *)this + 4 + uVar2 * 8) = param_2;
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  }
  return 0;
}

/* ref: FUN_0105cc90 */
uint F_0105cc90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105cc90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0105bda0(this,param_1,param_2);
  if ((int)uVar1 <= *(int *)((int)this + 8)) {
    F_0105be60(this,uVar1);
    return 0;
  }
  return 1;
}

/* ref: FUN_0105ccd0 */
uint F_0105ccd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105ccd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0105bd60(this,param_1);
  if ((int)uVar1 <= *(int *)((int)this + 8)) {
    F_0105be60(this,uVar1);
    return 0;
  }
  return 1;
}

/* ref: FUN_0105cd00 */
uint F_0105cd00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105cd00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = 4;
  if (4 < param_1 * 3) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_1 * 3);
  }
  uVar2 = F_0105bf90(this,iVar1);
  return uVar2;
}

/* ref: FUN_0105cd30 */
uint F_0105cd30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105cd30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  
  iVar2 = 4;
  *(undefined4 *)((int)this + 4) = 0;
  if (4 < param_1 * 3) {
    do {
      iVar2 = iVar2 * 2;
    } while (iVar2 < param_1 * 3);
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 4))))(&REFG(undefined * PTR32, 0x13516ac),iVar2 << 4);
  *(uint *)this = uVar1;
  *(int *)((int)this + 8) = iVar2 + -1;
  F_0105c830(this);
  return (uint)this;
}

/* ref: FUN_0105cdd0 */
uint F_0105cdd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105cdd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint local_8;
  
  uVar4 = (param_1 >> 4) * -0x61c8864f & *(uint *)((int)this + 8);
  local_8 = 0;
  uVar3 = uVar4;
  while( true ) {
    uVar1 = *(uint *)(*(int *)this + uVar3 * 0x10);
    uVar2 = *(uint *)(*(int *)this + 4 + uVar3 * 0x10);
    if ((uVar1 & uVar2) == 0xffffffff) break;
    if ((uVar1 == param_1) && (uVar2 == param_2)) {
      F_0105c6d0(this,uVar3);
      local_8 = local_8 + 1;
      uVar3 = uVar4;
    }
    else {
      uVar3 = uVar3 + 1 & *(uint *)((int)this + 8);
    }
  }
  return local_8;
}

/* ref: FUN_0105ce30 */
uint F_0105ce30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x105ce30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 8) < *(int *)((int)this + 4) * 2) {
    uVar2 = F_0105c860(this,*(int *)((int)this + 8) * 2 + 2);
    if (uVar2 != 0) {
      return 1;
    }
  }
  iVar1 = *(int *)this;
  uVar2 = (param_1 >> 4) * -0x61c8864f;
  while (uVar2 = uVar2 & *(uint *)((int)this + 8),
        (*(uint *)(iVar1 + uVar2 * 0x10) & *(uint *)(iVar1 + 4 + uVar2 * 0x10)) != 0xffffffff) {
    uVar2 = uVar2 + 1;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(uint *)(iVar1 + uVar2 * 0x10) = param_1;
  *(undefined4 *)(iVar1 + 4 + uVar2 * 0x10) = param_2;
  iVar1 = *(int *)this;
  *(undefined4 *)(iVar1 + 8 + uVar2 * 0x10) = param_3;
  *(undefined4 *)(iVar1 + 0xc + uVar2 * 0x10) = param_4;
  return 0;
}

/* ref: FUN_0105cec0 */
unsigned int F_0105cec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x105cec0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 8) < *(int *)((int)this + 4) * 2 + 2) {
    F_0105c860(this,*(int *)((int)this + 8) * 2 + 2);
  }
  iVar1 = *(int *)this;
  uVar4 = (param_1 >> 4) * -0x61c8864f;
  while( true ) {
    uVar4 = uVar4 & *(uint *)((int)this + 8);
    uVar2 = *(uint *)(iVar1 + uVar4 * 0x10);
    uVar3 = *(uint *)(iVar1 + 4 + uVar4 * 0x10);
    if ((uVar2 == param_1) && (uVar3 == param_2)) break;
    if ((uVar2 & uVar3) == 0xffffffff) {
      *(uint *)(iVar1 + uVar4 * 0x10) = param_1;
      *(uint *)(iVar1 + 4 + uVar4 * 0x10) = param_2;
      iVar1 = *(int *)this;
      *(undefined4 *)(iVar1 + 8 + uVar4 * 0x10) = param_3;
      *(undefined4 *)(iVar1 + 0xc + uVar4 * 0x10) = param_4;
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
      return 0;
    }
    uVar4 = uVar4 + 1;
  }
  return 0;
}

/* ref: FUN_0105cf40 */
uint F_0105cf40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x105cf40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_0105c5d0(this,param_1,param_2,param_3,param_4);
  if ((int)uVar1 <= *(int *)((int)this + 8)) {
    F_0105c6d0(this,uVar1);
    return 0;
  }
  return 1;
}

/* ref: FUN_0105cf80 */
uint F_0105cf80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105cf80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0105c580(this,param_1,param_2);
  if ((int)uVar1 <= *(int *)((int)this + 8)) {
    F_0105c6d0(this,uVar1);
    return 0;
  }
  return 1;
}

/* ref: FUN_0105cfc0 */
uint F_0105cfc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105cfc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = 4;
  if (4 < param_1 * 3) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_1 * 3);
  }
  uVar2 = F_0105c860(this,iVar1);
  return uVar2;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf2 */
unsigned int F_0105cff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105cff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf3 */
unsigned int F_0105d000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d000u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf4 */
unsigned int F_0105d010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d010u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf5 */
unsigned int F_0105d020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d020u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf6 */
unsigned int F_0105d030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d030u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf7 */
unsigned int F_0105d040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d040u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf8 */
unsigned int F_0105d050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d050u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf9 */
unsigned int F_0105d060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d060u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf10 */
unsigned int F_0105d070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d070u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf11 */
unsigned int F_0105d080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d080u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf12 */
unsigned int F_0105d090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d090u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf13 */
unsigned int F_0105d0a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d0a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf14 */
unsigned int F_0105d0b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d0b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf15 */
unsigned int F_0105d0c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d0c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf16 */
unsigned int F_0105d0d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d0d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf17 */
unsigned int F_0105d0e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d0e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf18 */
unsigned int F_0105d0f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d0f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf19 */
unsigned int F_0105d100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d100u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf20 */
unsigned int F_0105d110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d110u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf21 */
unsigned int F_0105d120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d120u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf22 */
unsigned int F_0105d130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d130u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf23 */
unsigned int F_0105d140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d140u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf24 */
unsigned int F_0105d150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d150u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf25 */
unsigned int F_0105d160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d160u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf26 */
unsigned int F_0105d170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d170u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf27 */
unsigned int F_0105d180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d180u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf28 */
unsigned int F_0105d190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d190u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf29 */
unsigned int F_0105d1a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d1a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf30 */
unsigned int F_0105d1b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d1b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf31 */
unsigned int F_0105d1c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d1c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf32 */
unsigned int F_0105d1d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d1d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf33 */
unsigned int F_0105d1e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d1e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf34 */
unsigned int F_0105d1f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d1f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf35 */
unsigned int F_0105d200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d200u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf36 */
unsigned int F_0105d210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d210u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf37 */
unsigned int F_0105d220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d220u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf38 */
unsigned int F_0105d230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d230u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf39 */
unsigned int F_0105d240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d240u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf40 */
unsigned int F_0105d250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d250u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf41 */
unsigned int F_0105d260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d260u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf42 */
unsigned int F_0105d270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d270u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf43 */
unsigned int F_0105d280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d280u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf44 */
unsigned int F_0105d290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d290u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf45 */
unsigned int F_0105d2a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d2a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf46 */
unsigned int F_0105d2b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d2b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf47 */
unsigned int F_0105d2c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d2c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf48 */
unsigned int F_0105d2d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d2d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf49 */
unsigned int F_0105d2e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d2e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf50 */
unsigned int F_0105d2f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d2f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf51 */
unsigned int F_0105d300(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d300u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf52 */
unsigned int F_0105d310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d310u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf53 */
unsigned int F_0105d320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d320u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf54 */
unsigned int F_0105d330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d330u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf55 */
unsigned int F_0105d340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d340u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf56 */
unsigned int F_0105d350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d350u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf57 */
unsigned int F_0105d360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d360u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf58 */
unsigned int F_0105d370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d370u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf59 */
unsigned int F_0105d380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d380u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf60 */
unsigned int F_0105d390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d390u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf61 */
unsigned int F_0105d3a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d3a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf62 */
unsigned int F_0105d3b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d3b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf63 */
unsigned int F_0105d3c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d3c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf64 */
unsigned int F_0105d3d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d3d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf65 */
unsigned int F_0105d3e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d3e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf66 */
unsigned int F_0105d3f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d3f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf67 */
unsigned int F_0105d400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d400u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf68 */
unsigned int F_0105d410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d410u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf69 */
unsigned int F_0105d420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d420u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf70 */
unsigned int F_0105d430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d430u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf71 */
unsigned int F_0105d440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d440u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf72 */
unsigned int F_0105d450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d450u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf73 */
unsigned int F_0105d460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d460u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf74 */
unsigned int F_0105d470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d470u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf75 */
unsigned int F_0105d480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d480u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf76 */
unsigned int F_0105d490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d490u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf77 */
unsigned int F_0105d4a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d4a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf78 */
unsigned int F_0105d4b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d4b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf79 */
unsigned int F_0105d4c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d4c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf80 */
unsigned int F_0105d4d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d4d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf81 */
unsigned int F_0105d4e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d4e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf82 */
unsigned int F_0105d4f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d4f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf83 */
unsigned int F_0105d500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d500u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf84 */
unsigned int F_0105d510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d510u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf85 */
unsigned int F_0105d520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d520u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf86 */
unsigned int F_0105d530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d530u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf87 */
unsigned int F_0105d540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d540u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf88 */
unsigned int F_0105d550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d550u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf89 */
unsigned int F_0105d560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d560u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf90 */
unsigned int F_0105d570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d570u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf91 */
unsigned int F_0105d580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d580u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf92 */
unsigned int F_0105d590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d590u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf93 */
unsigned int F_0105d5a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d5a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf94 */
unsigned int F_0105d5b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d5b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf95 */
unsigned int F_0105d5c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d5c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf96 */
unsigned int F_0105d5d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d5d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf97 */
unsigned int F_0105d5e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d5e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf98 */
unsigned int F_0105d5f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d5f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf99 */
unsigned int F_0105d600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d600u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf100 */
unsigned int F_0105d610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d610u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf101 */
unsigned int F_0105d620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d620u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf102 */
unsigned int F_0105d630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d630u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf103 */
unsigned int F_0105d640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d640u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf104 */
unsigned int F_0105d650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d650u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf105 */
unsigned int F_0105d660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d660u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf106 */
unsigned int F_0105d670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d670u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf107 */
unsigned int F_0105d680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d680u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf108 */
unsigned int F_0105d690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d690u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf109 */
unsigned int F_0105d6a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d6a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf110 */
unsigned int F_0105d6b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d6b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf111 */
unsigned int F_0105d6c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d6c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf112 */
unsigned int F_0105d6d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d6d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf113 */
unsigned int F_0105d6e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d6e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf114 */
unsigned int F_0105d6f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d6f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf115 */
unsigned int F_0105d700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d700u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf116 */
unsigned int F_0105d710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d710u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf117 */
unsigned int F_0105d720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d720u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf118 */
unsigned int F_0105d730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d730u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf119 */
unsigned int F_0105d740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d740u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf120 */
unsigned int F_0105d750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d750u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf121 */
unsigned int F_0105d760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d760u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf122 */
unsigned int F_0105d770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d770u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf123 */
unsigned int F_0105d780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d780u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf124 */
unsigned int F_0105d790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d790u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf125 */
unsigned int F_0105d7a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d7a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf126 */
unsigned int F_0105d7b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d7b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf127 */
unsigned int F_0105d7c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d7c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf128 */
unsigned int F_0105d7d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d7d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf129 */
unsigned int F_0105d7e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d7e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf130 */
unsigned int F_0105d7f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d7f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf131 */
unsigned int F_0105d800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d800u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf132 */
unsigned int F_0105d810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d810u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf133 */
unsigned int F_0105d820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d820u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf134 */
unsigned int F_0105d830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d830u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf135 */
unsigned int F_0105d840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d840u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf136 */
unsigned int F_0105d850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d850u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf137 */
unsigned int F_0105d860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d860u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf138 */
unsigned int F_0105d870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d870u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf139 */
unsigned int F_0105d880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d880u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf140 */
unsigned int F_0105d890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d890u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf141 */
unsigned int F_0105d8a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d8a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf142 */
unsigned int F_0105d8b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d8b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf143 */
unsigned int F_0105d8c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d8c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf144 */
unsigned int F_0105d8d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d8d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf145 */
unsigned int F_0105d8e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d8e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf146 */
unsigned int F_0105d8f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d8f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf147 */
unsigned int F_0105d900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d900u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf148 */
unsigned int F_0105d910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d910u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf149 */
unsigned int F_0105d920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d920u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf150 */
unsigned int F_0105d930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d930u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf151 */
unsigned int F_0105d940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d940u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf152 */
unsigned int F_0105d950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d950u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf153 */
unsigned int F_0105d960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d960u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf154 */
unsigned int F_0105d970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d970u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf155 */
unsigned int F_0105d980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d980u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf156 */
unsigned int F_0105d990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d990u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf157 */
unsigned int F_0105d9a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d9a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf158 */
unsigned int F_0105d9b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d9b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf159 */
unsigned int F_0105d9c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d9c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf160 */
unsigned int F_0105d9d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d9d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf161 */
unsigned int F_0105d9e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d9e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf162 */
unsigned int F_0105d9f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d9f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf163 */
unsigned int F_0105da00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105da00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf164 */
unsigned int F_0105da10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105da10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf165 */
unsigned int F_0105da20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105da20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf166 */
unsigned int F_0105da30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105da30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf167 */
unsigned int F_0105da40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105da40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf168 */
unsigned int F_0105da50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105da50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf169 */
unsigned int F_0105da60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105da60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf170 */
unsigned int F_0105da70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105da70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf171 */
unsigned int F_0105da80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105da80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf172 */
unsigned int F_0105da90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105da90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf173 */
unsigned int F_0105daa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105daa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf174 */
unsigned int F_0105dab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105dab0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf175 */
unsigned int F_0105dac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105dac0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf176 */
unsigned int F_0105dad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105dad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf177 */
unsigned int F_0105dae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105dae0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf178 */
unsigned int F_0105daf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105daf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf179 */
unsigned int F_0105db00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105db00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf180 */
unsigned int F_0105db10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105db10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf181 */
unsigned int F_0105db20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105db20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf182 */
unsigned int F_0105db30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105db30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf183 */
unsigned int F_0105db40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105db40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf184 */
unsigned int F_0105db50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105db50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf185 */
unsigned int F_0105db60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105db60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf186 */
unsigned int F_0105db70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105db70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf187 */
unsigned int F_0105db80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105db80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf188 */
unsigned int F_0105db90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105db90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf189 */
unsigned int F_0105dba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105dba0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf190 */
unsigned int F_0105dbb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105dbb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf191 */
unsigned int F_0105dbc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105dbc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf192 */
unsigned int F_0105dbd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105dbd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf193 */
unsigned int F_0105dbe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105dbe0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf194 */
unsigned int F_0105dbf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105dbf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf195 */
unsigned int F_0105dc00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105dc00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf196 */
unsigned int F_0105dc10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105dc10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf197 */
unsigned int F_0105dc20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105dc20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf198 */
unsigned int F_0105dc30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105dc30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf199 */
unsigned int F_0105dc40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105dc40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf200 */
unsigned int F_0105dc50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105dc50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf201 */
unsigned int F_0105dc60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105dc60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf202 */
unsigned int F_0105dc70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105dc70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf203 */
unsigned int F_0105dc80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105dc80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf204 */
unsigned int F_0105dc90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105dc90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf205 */
unsigned int F_0105dca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105dca0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf206 */
unsigned int F_0105dcb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105dcb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf207 */
unsigned int F_0105dcc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105dcc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf208 */
unsigned int F_0105dcd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105dcd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf209 */
unsigned int F_0105dce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105dce0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf210 */
unsigned int F_0105dcf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105dcf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf211 */
unsigned int F_0105dd00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105dd00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf212 */
unsigned int F_0105dd10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105dd10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf213 */
unsigned int F_0105dd20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105dd20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf214 */
unsigned int F_0105dd30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105dd30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf215 */
unsigned int F_0105dd40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105dd40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf216 */
unsigned int F_0105dd50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105dd50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf217 */
unsigned int F_0105dd60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105dd60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf218 */
unsigned int F_0105dd70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105dd70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf219 */
unsigned int F_0105dd80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105dd80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf220 */
unsigned int F_0105dd90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105dd90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf221 */
unsigned int F_0105dda0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105dda0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf222 */
unsigned int F_0105ddb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105ddb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf223 */
unsigned int F_0105ddc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105ddc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf224 */
unsigned int F_0105ddd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105ddd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf225 */
unsigned int F_0105dde0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105dde0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf226 */
unsigned int F_0105ddf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105ddf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf227 */
unsigned int F_0105de00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105de00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf228 */
unsigned int F_0105de10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105de10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf229 */
unsigned int F_0105de20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105de20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf230 */
unsigned int F_0105de30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105de30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf231 */
unsigned int F_0105de40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105de40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf232 */
unsigned int F_0105de50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105de50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf233 */
unsigned int F_0105de60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105de60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf234 */
unsigned int F_0105de70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105de70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf235 */
unsigned int F_0105de80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105de80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf236 */
unsigned int F_0105de90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105de90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf237 */
unsigned int F_0105dea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105dea0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf238 */
unsigned int F_0105deb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105deb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf239 */
unsigned int F_0105dec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105dec0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf240 */
unsigned int F_0105ded0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105ded0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf241 */
unsigned int F_0105dee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105dee0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf242 */
unsigned int F_0105def0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105def0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf243 */
unsigned int F_0105df00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105df00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf244 */
unsigned int F_0105df10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105df10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf245 */
unsigned int F_0105df20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105df20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf246 */
unsigned int F_0105df30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105df30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf247 */
unsigned int F_0105df40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105df40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf248 */
unsigned int F_0105df50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105df50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: FUN_0105df60 */
uint F_0105df60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105df60u, gen_a0, gen_a1, 0u, 0u);
  uint in_eax = (uint)gen_a0;
  int in_ecx = (int)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  for (uVar3 = in_eax >> 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    uVar1 = *(undefined1 *)(in_ecx + uVar2);
    *(undefined1 *)(in_ecx + uVar2) = *(undefined1 *)(in_ecx + 7 + uVar2);
    *(undefined1 *)(in_ecx + 7 + uVar2) = uVar1;
    uVar1 = *(undefined1 *)(in_ecx + 1 + uVar2);
    *(undefined1 *)(in_ecx + 1 + uVar2) = *(undefined1 *)(in_ecx + 6 + uVar2);
    *(undefined1 *)(in_ecx + 6 + uVar2) = uVar1;
    uVar1 = *(undefined1 *)(in_ecx + 2 + uVar2);
    *(undefined1 *)(in_ecx + 2 + uVar2) = *(undefined1 *)(in_ecx + 5 + uVar2);
    *(undefined1 *)(in_ecx + 5 + uVar2) = uVar1;
    uVar1 = *(undefined1 *)(in_ecx + 3 + uVar2);
    *(undefined1 *)(in_ecx + 3 + uVar2) = *(undefined1 *)(in_ecx + 4 + uVar2);
    *(undefined1 *)(in_ecx + 4 + uVar2) = uVar1;
    uVar2 = uVar2 + 8;
  }
  return uVar2;
}

/* ref: FUN_0105dfc0 */
uint F_0105dfc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105dfc0u, gen_a0, gen_a1, 0u, 0u);
  uint in_eax = (uint)gen_a0;
  int in_ecx = (int)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  for (uVar3 = in_eax >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    uVar1 = *(undefined1 *)(in_ecx + uVar2);
    *(undefined1 *)(in_ecx + uVar2) = *(undefined1 *)(in_ecx + 3 + uVar2);
    *(undefined1 *)(in_ecx + 3 + uVar2) = uVar1;
    uVar1 = *(undefined1 *)(in_ecx + 1 + uVar2);
    *(undefined1 *)(in_ecx + 1 + uVar2) = *(undefined1 *)(in_ecx + 2 + uVar2);
    *(undefined1 *)(in_ecx + 2 + uVar2) = uVar1;
    uVar2 = uVar2 + 4;
  }
  return uVar2;
}

/* ref: FUN_0105e000 */
uint F_0105e000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105e000u, gen_a0, gen_a1, 0u, 0u);
  uint in_eax = (uint)gen_a0;
  int in_ecx = (int)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  for (uVar3 = in_eax >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
    uVar1 = *(undefined1 *)(in_ecx + uVar2);
    *(undefined1 *)(in_ecx + uVar2) = *(undefined1 *)(in_ecx + 1 + uVar2);
    *(undefined1 *)(in_ecx + 1 + uVar2) = uVar1;
    uVar2 = uVar2 + 2;
  }
  return uVar2;
}

/* ref: FUN_0105e030 */
uint F_0105e030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105e030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = param_1[3];
  uVar2 = param_1[2];
  param_1[3] = *param_1;
  param_1[2] = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar2;
  uVar3 = 4;
  if (param_2 < 0x10) {
    if (param_2 < 5) goto LAB_0105e0ad;
    uVar3 = F_0105dfc0(param_2 - 4,param_1 + 4);
  }
  else {
    uVar3 = 0;
    iVar4 = 3;
    do {
      uVar1 = param_1[uVar3 + 4];
      param_1[uVar3 + 4] = param_1[uVar3 + 7];
      param_1[uVar3 + 7] = uVar1;
      uVar1 = param_1[uVar3 + 5];
      param_1[uVar3 + 5] = param_1[uVar3 + 6];
      param_1[uVar3 + 6] = uVar1;
      uVar3 = uVar3 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  uVar3 = uVar3 + 4;
LAB_0105e0ad: ;
  if (uVar3 + 4 <= param_2) {
    uVar1 = param_1[0x10];
    param_1[0x10] = param_1[0x13];
    uVar2 = param_1[0x12];
    param_1[0x13] = uVar1;
    param_1[0x12] = param_1[0x11];
    param_1[0x11] = uVar2;
    uVar3 = uVar3 + 4;
  }
  return uVar3;
}

/* ref: FUN_0105e0e0 */
uint F_0105e0e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105e0e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = param_2;
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  if (param_2 < 4) {
    return 2;
  }
  uVar1 = param_1[2];
  param_1[2] = param_1[3];
  param_1[3] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[7];
  param_1[7] = param_1[4];
  uVar2 = param_1[5];
  param_1[4] = uVar1;
  param_1[5] = param_1[6];
  param_1[6] = uVar2;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[0xb];
  param_1[0xb] = param_1[8];
  uVar2 = param_1[9];
  param_1[8] = uVar1;
  param_1[9] = param_1[10];
  param_1[10] = uVar2;
  if (param_2 < 0x14) {
    return 0xc;
  }
  uVar4 = F_0105df60(8,param_1 + 0x10);
  if (param_2 < uVar4 + 0x10) {
    return uVar4 + 0xe;
  }
  uVar1 = param_1[0x1b];
  param_1[0x1b] = param_1[0x1a];
  param_1[0x1a] = uVar1;
  if (param_2 < uVar4 + 0x12) {
    return uVar4 + 0x10;
  }
  uVar1 = param_1[0x1d];
  param_1[0x1d] = param_1[0x1c];
  uVar5 = uVar4 + 0x18;
  param_1[0x1c] = uVar1;
  if (param_2 < uVar5) {
    return uVar4 + 0x14;
  }
  uVar1 = param_1[0x23];
  uVar2 = param_1[0x22];
  param_1[0x23] = param_1[0x20];
  param_1[0x22] = param_1[0x21];
  param_1[0x20] = uVar1;
  param_1[0x21] = uVar2;
  if (param_2 < uVar4 + 0x22) {
    if (param_2 <= uVar5) goto LAB_0105e21c;
    uVar4 = F_0105e000(param_2 - uVar5,param_1 + 0x24);
  }
  else {
    uVar4 = 0;
    param_2 = 5;
    do {
      uVar1 = param_1[uVar4 + 0x24];
      param_1[uVar4 + 0x24] = param_1[uVar4 + 0x25];
      param_1[uVar4 + 0x25] = uVar1;
      uVar4 = uVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  uVar5 = uVar5 + uVar4;
LAB_0105e21c: ;
  if (uVar5 + 5 <= uVar3) {
    uVar4 = uVar5 + 5;
    if (uVar5 + 10 <= uVar3) {
      uVar4 = uVar5 + 10;
    }
    return uVar4;
  }
  return uVar5;
}

/* ref: FUN_0105e240 */
uint F_0105e240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105e240u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  if (param_2 < 4) {
    return 2;
  }
  uVar1 = param_1[2];
  param_1[2] = param_1[3];
  param_1[3] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 0x10) {
    return 0xc;
  }
  uVar1 = param_1[0xc];
  param_1[0xc] = param_1[0xf];
  uVar2 = param_1[0xe];
  param_1[0xf] = uVar1;
  param_1[0xe] = param_1[0xd];
  param_1[0xd] = uVar2;
  uVar4 = 0x10;
  if (0x17 < param_2) {
    iVar6 = 4;
    iVar3 = 0;
    do {
      iVar5 = iVar3;
      uVar1 = param_1[iVar5 + 0x10];
      param_1[iVar5 + 0x10] = param_1[iVar5 + 0x11];
      param_1[iVar5 + 0x11] = uVar1;
      iVar6 = iVar6 + -1;
      iVar3 = iVar5 + 2;
    } while (iVar6 != 0);
    return iVar5 + 0x12;
  }
  if (0x10 < param_2) {
    uVar4 = F_0105e000(param_2 - 0x10,param_1 + 0x10);
    uVar4 = uVar4 + 0x10;
  }
  return uVar4;
}

/* ref: FUN_0105e310 */
uint F_0105e310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105e310u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 uVar1;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  if (param_2 < 4) {
    return 2;
  }
  uVar1 = param_1[2];
  param_1[2] = param_1[3];
  param_1[3] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 10) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[9];
  param_1[9] = uVar1;
  if (param_2 < 0xc) {
    return 10;
  }
  uVar1 = param_1[10];
  param_1[10] = param_1[0xb];
  param_1[0xb] = uVar1;
  return 0xc;
}

/* ref: FUN_0105e3b0 */
uint F_0105e3b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105e3b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[5];
  param_1[5] = uVar1;
  if (param_2 < 8) {
    return 6;
  }
  uVar1 = param_1[6];
  param_1[6] = param_1[7];
  param_1[7] = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  return 0xc;
}

/* ref: FUN_0105e440 */
uint F_0105e440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105e440u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  return (-(uint)(param_2 < 10) & 0xfffffffa) + 10;
}

/* ref: FUN_0105e470 */
uint F_0105e470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105e470u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 uVar1;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[5];
  param_1[5] = uVar1;
  if (param_2 < 8) {
    return 6;
  }
  uVar1 = param_1[6];
  param_1[6] = param_1[7];
  param_1[7] = uVar1;
  return 9;
}

/* ref: FUN_0105e4d0 */
uint F_0105e4d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105e4d0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  return (-(uint)(param_2 < 0x10) & 0xfffffff6) + 0x10;
}

/* ref: FUN_0105e520 */
uint F_0105e520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105e520u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (-(uint)(param_2 < 6) & 0xfffffffc) + 6;
}

/* ref: FUN_0105e540 */
uint F_0105e540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105e540u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  uVar2 = param_1[6];
  param_1[7] = uVar1;
  param_1[6] = param_1[5];
  param_1[5] = uVar2;
  uVar3 = 8;
  if (0x1b < param_2) {
    uVar3 = F_0105e030(param_1 + 8,0x14,param_3);
    return uVar3 + 8;
  }
  if (8 < param_2) {
    uVar3 = F_0105e030(param_1 + 8,param_2 - 8,param_3);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_0105e5e0 */
uint F_0105e5e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105e5e0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  return 0xc;
}

/* ref: FUN_0105e670 */
uint F_0105e670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105e670u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  if (param_2 < 0xc) {
    return 4;
  }
  uVar3 = F_0105df60(8,param_1 + 8);
  uVar4 = uVar3 + 4;
  if (uVar3 + 8 <= param_2) {
    uVar1 = param_1[0x13];
    param_1[0x13] = param_1[0x10];
    param_1[0x10] = uVar1;
    uVar1 = param_1[0x12];
    param_1[0x12] = param_1[0x11];
    uVar4 = uVar3 + 0x28;
    param_1[0x11] = uVar1;
    uVar2 = uVar3 + 8;
    if ((param_2 < uVar4) || (uVar2 = uVar3 + 0x428, uVar3 + 0x428 <= param_2)) {
      uVar4 = uVar2;
    }
  }
  return uVar4;
}

/* ref: FUN_0105e6f0 */
uint F_0105e6f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105e6f0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  return 4;
}

/* ref: FUN_0105e720 */
uint F_0105e720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105e720u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  if (param_2 < 4) {
    return 2;
  }
  uVar1 = param_1[2];
  param_1[2] = param_1[3];
  param_1[3] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[5];
  param_1[5] = uVar1;
  if (param_2 < 8) {
    return 6;
  }
  uVar1 = param_1[6];
  param_1[6] = param_1[7];
  param_1[7] = uVar1;
  if (param_2 < 0x28) {
    return 8;
  }
  return (-(uint)(param_2 < 0x48) & 0xffffffe0) + 0x48;
}

/* ref: FUN_0105e7b0 */
uint F_0105e7b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105e7b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (-(uint)(param_2 < 0x11) & 0xffffffef) + 0x11;
}

/* ref: FUN_0105e7d0 */
uint F_0105e7d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105e7d0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  return (-(uint)(param_2 < 0x26) & 0xffffffe0) + 0x26;
}

/* ref: FUN_0105e810 */
uint F_0105e810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105e810u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  return (-(uint)(param_2 < 0x27) & 0xffffffe0) + 0x27;
}

/* ref: FUN_0105e8a0 */
uint F_0105e8a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105e8a0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 2;
  }
  uVar1 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = uVar1;
  return 4;
}

/* ref: FUN_0105e8d0 */
uint F_0105e8d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105e8d0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar2 = F_0105df60(8,param_1);
  if (uVar2 + 8 <= param_2) {
    uVar3 = F_0105df60(8,param_1 + 8);
    uVar3 = uVar2 + uVar3;
    uVar2 = uVar3;
    if (uVar3 + 4 <= param_2) {
      uVar1 = *(undefined1 *)(param_1 + 0x10);
      *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_1 + 0x13);
      uVar2 = uVar3 + 8;
      *(undefined1 *)(param_1 + 0x13) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 0x11);
      *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_1 + 0x12);
      *(undefined1 *)(param_1 + 0x12) = uVar1;
      if (uVar3 + 0x10 <= param_2) {
        uVar2 = F_0105df60(8,param_1 + 0x18);
        uVar2 = uVar3 + 10 + uVar2;
        uVar3 = uVar2;
        if (uVar2 + 2 <= param_2) {
          uVar1 = *(undefined1 *)(param_1 + 0x23);
          *(undefined1 *)(param_1 + 0x23) = *(undefined1 *)(param_1 + 0x22);
          *(undefined1 *)(param_1 + 0x22) = uVar1;
          uVar3 = uVar2 + 2;
          if (uVar2 + 4 <= param_2) {
            uVar1 = *(undefined1 *)(param_1 + 0x25);
            *(undefined1 *)(param_1 + 0x25) = *(undefined1 *)(param_1 + 0x24);
            *(undefined1 *)(param_1 + 0x24) = uVar1;
            uVar3 = uVar2 + 5;
            if ((uVar2 + 0x25 <= param_2) && (uVar3 = uVar2 + 0x2c, param_2 < uVar2 + 0x2c)) {
              uVar3 = uVar2 + 0x25;
            }
          }
        }
        return uVar3;
      }
    }
  }
  return uVar2;
}

/* ref: FUN_0105ea10 */
uint F_0105ea10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105ea10u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 * puVar4;
  int iVar5;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar2 = F_0105df60(8,param_1);
  if (uVar2 + 8 <= param_2) {
    uVar3 = F_0105df60(8,param_1 + 8);
    uVar2 = uVar2 + uVar3;
    if (uVar2 + 8 <= param_2) {
      uVar3 = F_0105df60(8,param_1 + 0x10);
      uVar2 = uVar2 + uVar3;
      if (uVar2 + 8 <= param_2) {
        uVar3 = F_0105df60(8,param_1 + 0x18);
        uVar3 = uVar2 + 1 + uVar3;
        uVar2 = uVar3;
        if (uVar3 + 0xc1 <= param_2) {
          uVar2 = uVar3 + 0xd8;
          if (param_2 < uVar2) {
            return uVar3 + 0xc1;
          }
          if (uVar3 + 0xdb <= param_2) {
            iVar5 = 0;
            puVar4 = (undefined1 *)(param_1 + 0xfe);
            uVar2 = uVar3 + 0xdb;
            do {
              if (param_2 <= uVar2) {
                return uVar2;
              }
              uVar1 = *puVar4;
              *puVar4 = puVar4[1];
              puVar4[1] = uVar1;
              iVar5 = iVar5 + 1;
              uVar2 = uVar2 + 4;
              puVar4 = puVar4 + 4;
            } while (iVar5 < 0x1c);
          }
        }
      }
    }
  }
  return uVar2;
}

/* ref: FUN_0105ead0 */
uint F_0105ead0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105ead0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar2 = F_0105df60(8,param_1);
  if (uVar2 + 8 <= param_2) {
    uVar3 = F_0105df60(8,param_1 + 8);
    uVar2 = uVar2 + uVar3;
    if (uVar2 + 4 <= param_2) {
      uVar1 = *(undefined1 *)(param_1 + 0x13);
      *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_1 + 0x10);
      *(undefined1 *)(param_1 + 0x10) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 0x12);
      *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_1 + 0x11);
      *(undefined1 *)(param_1 + 0x11) = uVar1;
      uVar3 = uVar2 + 6;
      if (uVar2 + 199 <= param_2) {
        uVar3 = uVar2 + 199;
      }
      return uVar3;
    }
  }
  return uVar2;
}

/* ref: FUN_0105eba0 */
uint F_0105eba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105eba0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  return (-(uint)(param_2 < 0xc5) & 0xffffff3f) + 0xc5;
}

/* ref: FUN_0105ebf0 */
uint F_0105ebf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105ebf0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  if (uVar1 + 0x20 <= param_2) {
    uVar1 = uVar1 + 0x20;
  }
  return uVar1;
}

/* ref: FUN_0105ec20 */
uint F_0105ec20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105ec20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar2 = F_0105df60(8,param_1);
  if (uVar2 + 8 <= param_2) {
    uVar3 = F_0105df60(8,param_1 + 8);
    uVar2 = uVar2 + uVar3;
    if (uVar2 + 8 <= param_2) {
      uVar3 = F_0105df60(8,param_1 + 0x10);
      uVar2 = uVar2 + uVar3;
      if (uVar2 + 4 <= param_2) {
        uVar1 = *(undefined1 *)(param_1 + 0x1b);
        *(undefined1 *)(param_1 + 0x1b) = *(undefined1 *)(param_1 + 0x18);
        *(undefined1 *)(param_1 + 0x18) = uVar1;
        uVar1 = *(undefined1 *)(param_1 + 0x1a);
        *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_1 + 0x19);
        *(undefined1 *)(param_1 + 0x19) = uVar1;
        if (param_2 < uVar2 + 8) {
          return uVar2 + 4;
        }
        uVar1 = *(undefined1 *)(param_1 + 0x1c);
        *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_1 + 0x1f);
        *(undefined1 *)(param_1 + 0x1f) = uVar1;
        uVar1 = *(undefined1 *)(param_1 + 0x1d);
        *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(param_1 + 0x1e);
        *(undefined1 *)(param_1 + 0x1e) = uVar1;
        return uVar2 + 8;
      }
    }
  }
  return uVar2;
}

/* ref: FUN_0105ecd0 */
uint F_0105ecd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105ecd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (-(uint)(param_2 < 0x302) & 0xfffffcff) + 0x302;
}

/* ref: FUN_0105ecf0 */
uint F_0105ecf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105ecf0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (-(uint)(param_2 < 0x302) & 0xfffffcff) + 0x302;
}

/* ref: FUN_0105ed10 */
uint F_0105ed10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105ed10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  return uVar1;
}

/* ref: FUN_0105ed30 */
uint F_0105ed30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105ed30u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  return 8;
}

/* ref: FUN_0105edf0 */
uint F_0105edf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105edf0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  if (uVar1 + 0x20 <= param_2) {
    uVar1 = uVar1 + 0x20;
  }
  return uVar1;
}

/* ref: FUN_0105ef90 */
uint F_0105ef90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105ef90u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  return 2;
}

/* ref: FUN_0105efc0 */
uint F_0105efc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105efc0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar2 = F_0105df60(8,param_1);
  if (uVar2 + 8 <= param_2) {
    uVar3 = F_0105df60(8,param_1 + 8);
    uVar2 = uVar2 + uVar3;
    if (uVar2 + 4 <= param_2) {
      uVar1 = *(undefined1 *)(param_1 + 0x13);
      *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_1 + 0x10);
      *(undefined1 *)(param_1 + 0x10) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 0x12);
      *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_1 + 0x11);
      *(undefined1 *)(param_1 + 0x11) = uVar1;
      uVar3 = uVar2 + 4;
      if (uVar2 + 8 <= param_2) {
        uVar1 = *(undefined1 *)(param_1 + 0x17);
        *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_1 + 0x14);
        *(undefined1 *)(param_1 + 0x14) = uVar1;
        uVar1 = *(undefined1 *)(param_1 + 0x16);
        *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_1 + 0x15);
        *(undefined1 *)(param_1 + 0x15) = uVar1;
        uVar3 = uVar2 + 10;
        if ((uVar2 + 0x2a <= param_2) && (uVar3 = uVar2 + 0x4a, param_2 < uVar2 + 0x4a)) {
          uVar3 = uVar2 + 0x2a;
        }
      }
      return uVar3;
    }
  }
  return uVar2;
}

/* ref: FUN_0105f060 */
uint F_0105f060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105f060u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar2 = F_0105df60(8,param_1);
  if (uVar2 + 8 <= param_2) {
    uVar3 = F_0105df60(8,param_1 + 8);
    uVar2 = uVar2 + uVar3;
    if (uVar2 + 4 <= param_2) {
      uVar1 = *(undefined1 *)(param_1 + 0x13);
      *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_1 + 0x10);
      *(undefined1 *)(param_1 + 0x10) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 0x12);
      *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_1 + 0x11);
      *(undefined1 *)(param_1 + 0x11) = uVar1;
      uVar3 = uVar2 + 4;
      if (uVar2 + 0x24 <= param_2) {
        uVar3 = uVar2 + 0x24;
      }
      return uVar3;
    }
  }
  return uVar2;
}

/* ref: FUN_0105f0d0 */
unsigned int F_0105f0d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105f0d0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 * puVar5;
  uint local_8;
  
  iVar4 = 0;
  local_8 = 0;
  puVar5 = (undefined1 *)(param_1 + 0x11);
  do {
    if (param_2 <= local_8) {
      return 0;
    }
    uVar2 = F_0105df60(8,puVar5 + -0x11);
    if (uVar2 + 8 < 0x39) {
      uVar3 = F_0105df60(8,puVar5 + -9);
      uVar2 = uVar2 + uVar3;
      if (uVar2 + 4 < 0x39) {
        uVar1 = puVar5[2];
        puVar5[2] = puVar5[-1];
        puVar5[-1] = uVar1;
        uVar1 = puVar5[1];
        puVar5[1] = *puVar5;
        uVar3 = uVar2 + 0x24;
        *puVar5 = uVar1;
        uVar2 = uVar2 + 4;
        if (uVar3 < 0x39) {
          uVar2 = uVar3;
        }
      }
    }
    local_8 = local_8 + uVar2;
    iVar4 = iVar4 + 1;
    puVar5 = puVar5 + 0x38;
  } while (iVar4 < 8);
  return 0;
}

/* ref: FUN_0105f160 */
uint F_0105f160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105f160u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  return 8;
}

/* ref: FUN_0105f1c0 */
uint F_0105f1c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105f1c0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 uVar1;
  undefined1 * puVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  iVar3 = 0;
  puVar2 = (undefined1 *)(param_1 + 5);
  do {
    if (param_2 <= uVar4) break;
    uVar1 = puVar2[-5];
    puVar2[-5] = puVar2[-2];
    puVar2[-2] = uVar1;
    uVar1 = puVar2[-4];
    puVar2[-4] = puVar2[-3];
    puVar2[-3] = uVar1;
    uVar1 = puVar2[-1];
    puVar2[-1] = puVar2[2];
    puVar2[2] = uVar1;
    uVar1 = *puVar2;
    *puVar2 = puVar2[1];
    puVar2[1] = uVar1;
    iVar3 = iVar3 + 1;
    uVar4 = uVar4 + 8;
    puVar2 = puVar2 + 8;
  } while (iVar3 < 5);
  if (uVar4 + 8 <= param_2) {
    uVar1 = *(undefined1 *)(param_1 + 0x28);
    *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_1 + 0x2b);
    *(undefined1 *)(param_1 + 0x2b) = uVar1;
    uVar1 = *(undefined1 *)(param_1 + 0x29);
    *(undefined1 *)(param_1 + 0x29) = *(undefined1 *)(param_1 + 0x2a);
    *(undefined1 *)(param_1 + 0x2a) = uVar1;
    uVar1 = *(undefined1 *)(param_1 + 0x2c);
    *(undefined1 *)(param_1 + 0x2c) = *(undefined1 *)(param_1 + 0x2f);
    *(undefined1 *)(param_1 + 0x2f) = uVar1;
    uVar1 = *(undefined1 *)(param_1 + 0x2d);
    *(undefined1 *)(param_1 + 0x2d) = *(undefined1 *)(param_1 + 0x2e);
    *(undefined1 *)(param_1 + 0x2e) = uVar1;
    return uVar4 + 8;
  }
  if (param_2 <= uVar4) {
    return uVar4;
  }
  if (param_2 - uVar4 < 4) {
    return uVar4;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x28);
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_1 + 0x2b);
  *(undefined1 *)(param_1 + 0x2b) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0x29);
  *(undefined1 *)(param_1 + 0x29) = *(undefined1 *)(param_1 + 0x2a);
  *(undefined1 *)(param_1 + 0x2a) = uVar1;
  if (7 < param_2 - uVar4) {
    uVar1 = *(undefined1 *)(param_1 + 0x2f);
    *(undefined1 *)(param_1 + 0x2f) = *(undefined1 *)(param_1 + 0x2c);
    *(undefined1 *)(param_1 + 0x2c) = uVar1;
    uVar1 = *(undefined1 *)(param_1 + 0x2e);
    *(undefined1 *)(param_1 + 0x2e) = *(undefined1 *)(param_1 + 0x2d);
    *(undefined1 *)(param_1 + 0x2d) = uVar1;
    return uVar4 + 8;
  }
  return uVar4 + 4;
}

/* ref: FUN_0105f2d0 */
uint F_0105f2d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105f2d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = param_1[3];
  param_1[3] = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = param_1[2];
  param_1[2] = uVar2;
  if (param_2 < 0xc) {
    return 4;
  }
  uVar3 = F_0105df60(8,param_1 + 8);
  uVar4 = uVar3 + 8;
  if (param_2 < uVar4) {
    return uVar3 + 4;
  }
  uVar1 = param_1[0x13];
  uVar2 = param_1[0x12];
  param_1[0x13] = param_1[0x10];
  param_1[0x12] = param_1[0x11];
  param_1[0x10] = uVar1;
  param_1[0x11] = uVar2;
  if (param_2 < uVar3 + 0x38) {
    if (param_2 <= uVar4) goto LAB_0105f363;
    iVar5 = param_2 - uVar4;
  }
  else {
    iVar5 = 0x30;
  }
  uVar3 = F_0105f1c0(param_1 + 0x14,iVar5,param_3);
  uVar4 = uVar4 + uVar3;
LAB_0105f363: ;
  if (uVar4 + 4 <= param_2) {
    uVar1 = param_1[0x44];
    param_1[0x44] = param_1[0x47];
    param_1[0x47] = uVar1;
    uVar1 = param_1[0x45];
    param_1[0x45] = param_1[0x46];
    param_1[0x46] = uVar1;
    return uVar4 + 4;
  }
  return uVar4;
}

/* ref: FUN_0105f420 */
uint F_0105f420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105f420u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  undefined1 * puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint local_8;
  
  iVar4 = 0;
  local_8 = 0;
  puVar5 = (undefined1 *)(param_1 + 9);
  do {
    if (param_2 <= local_8) break;
    uVar3 = F_0105df60(8,puVar5 + -9);
    uVar6 = uVar3 + 4;
    if (uVar6 < 0xa1) {
      uVar1 = puVar5[2];
      uVar2 = puVar5[1];
      puVar5[2] = puVar5[-1];
      puVar5[1] = *puVar5;
      puVar5[-1] = uVar1;
      *puVar5 = uVar2;
      if (uVar3 + 0x34 < 0xa1) {
        iVar8 = 0x30;
LAB_0105f491: ;
        uVar3 = F_0105f1c0(puVar5 + 3,iVar8,param_3);
        uVar6 = uVar6 + uVar3;
      }
      else if (uVar6 < 0xa0) {
        iVar8 = 0xa0 - uVar6;
        goto LAB_0105f491;
      }
      uVar3 = uVar6 + 0x23;
      uVar7 = uVar6 + 3;
      if ((uVar3 < 0xa1) && (uVar7 = uVar6 + 0x60, 0xa0 < uVar6 + 0x60)) goto LAB_0105f4b7;
    }
    else {
LAB_0105f4b7: ;
      uVar7 = uVar3;
    }
    local_8 = local_8 + uVar7;
    iVar4 = iVar4 + 1;
    puVar5 = puVar5 + 0xa0;
  } while (iVar4 < 5);
  return local_8 + 3;
}

/* ref: FUN_0105f530 */
uint F_0105f530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105f530u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[5];
  param_1[5] = uVar1;
  return 0xb;
}

/* ref: FUN_0105f580 */
uint F_0105f580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105f580u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  return 0xb;
}

/* ref: FUN_0105f5e0 */
uint F_0105f5e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105f5e0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = param_2;
  if (param_2 < 8) {
    return 0;
  }
  uVar3 = F_0105df60(8,param_1);
  if (param_2 < uVar3 + 8) {
    return uVar3;
  }
  uVar4 = F_0105df60(8,param_1 + 8);
  uVar3 = uVar3 + uVar4;
  if (param_2 < uVar3 + 8) {
    return uVar3;
  }
  uVar4 = F_0105df60(8,param_1 + 0x10);
  uVar3 = uVar3 + uVar4;
  if (param_2 < uVar3 + 8) {
    return uVar3;
  }
  uVar4 = F_0105df60(8,param_1 + 0x18);
  uVar3 = uVar3 + uVar4;
  if (param_2 < uVar3 + 4) {
    return uVar3;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x23);
  *(undefined1 *)(param_1 + 0x23) = *(undefined1 *)(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x20) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0x22);
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_1 + 0x21);
  *(undefined1 *)(param_1 + 0x21) = uVar1;
  if (param_2 < uVar3 + 8) {
    return uVar3 + 4;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x27);
  *(undefined1 *)(param_1 + 0x27) = *(undefined1 *)(param_1 + 0x24);
  *(undefined1 *)(param_1 + 0x24) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0x26);
  *(undefined1 *)(param_1 + 0x26) = *(undefined1 *)(param_1 + 0x25);
  *(undefined1 *)(param_1 + 0x25) = uVar1;
  if (param_2 < uVar3 + 0xc) {
    return uVar3 + 8;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x2b);
  *(undefined1 *)(param_1 + 0x2b) = *(undefined1 *)(param_1 + 0x28);
  *(undefined1 *)(param_1 + 0x28) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0x2a);
  *(undefined1 *)(param_1 + 0x2a) = *(undefined1 *)(param_1 + 0x29);
  *(undefined1 *)(param_1 + 0x29) = uVar1;
  if (param_2 < uVar3 + 0x10) {
    return uVar3 + 0xc;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x2f);
  *(undefined1 *)(param_1 + 0x2f) = *(undefined1 *)(param_1 + 0x2c);
  *(undefined1 *)(param_1 + 0x2c) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0x2e);
  *(undefined1 *)(param_1 + 0x2e) = *(undefined1 *)(param_1 + 0x2d);
  *(undefined1 *)(param_1 + 0x2d) = uVar1;
  if (param_2 < uVar3 + 0x14) {
    return uVar3 + 0x10;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x33);
  *(undefined1 *)(param_1 + 0x33) = *(undefined1 *)(param_1 + 0x30);
  *(undefined1 *)(param_1 + 0x30) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0x32);
  *(undefined1 *)(param_1 + 0x32) = *(undefined1 *)(param_1 + 0x31);
  *(undefined1 *)(param_1 + 0x31) = uVar1;
  if (param_2 < uVar3 + 0x16) {
    return uVar3 + 0x14;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x35);
  *(undefined1 *)(param_1 + 0x35) = *(undefined1 *)(param_1 + 0x34);
  *(undefined1 *)(param_1 + 0x34) = uVar1;
  if (param_2 < uVar3 + 0x18) {
    return uVar3 + 0x16;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x37);
  *(undefined1 *)(param_1 + 0x37) = *(undefined1 *)(param_1 + 0x36);
  *(undefined1 *)(param_1 + 0x36) = uVar1;
  if (param_2 < uVar3 + 0x1a) {
    return uVar3 + 0x18;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x39);
  *(undefined1 *)(param_1 + 0x39) = *(undefined1 *)(param_1 + 0x38);
  *(undefined1 *)(param_1 + 0x38) = uVar1;
  uVar4 = uVar3 + 0x1c;
  if (param_2 < uVar4) {
    return uVar3 + 0x1a;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x3a);
  *(undefined1 *)(param_1 + 0x3a) = *(undefined1 *)(param_1 + 0x3b);
  *(undefined1 *)(param_1 + 0x3b) = uVar1;
  if (param_2 < uVar3 + 0x2c) {
    if (param_2 <= uVar4) goto LAB_0105f7ac;
    uVar3 = F_0105e000(param_2 - uVar4,param_1 + 0x3c);
  }
  else {
    uVar3 = 0;
    param_2 = 8;
    do {
      uVar1 = *(undefined1 *)(param_1 + 0x3c + uVar3);
      *(undefined1 *)(param_1 + 0x3c + uVar3) = *(undefined1 *)(param_1 + 0x3d + uVar3);
      *(undefined1 *)(param_1 + 0x3d + uVar3) = uVar1;
      uVar3 = uVar3 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  uVar4 = uVar4 + uVar3;
LAB_0105f7ac: ;
  if (uVar4 + 0x20 <= uVar2) {
    uVar4 = uVar4 + 0x24;
  }
  return uVar4;
}

/* ref: FUN_0105f7c0 */
uint F_0105f7c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105f7c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 * puVar5;
  uint uVar6;
  int local_c;
  uint local_8;
  
  local_8 = 0;
  local_c = 0;
  puVar5 = (undefined1 *)(param_1 + 0x21);
  do {
    if (param_2 <= local_8) break;
    uVar2 = F_0105df60(8,puVar5 + -0x21);
    if (uVar2 + 8 < 0x71) {
      uVar3 = F_0105df60(8,puVar5 + -0x19);
      uVar2 = uVar2 + uVar3;
      if (uVar2 + 8 < 0x71) {
        uVar3 = F_0105df60(8,puVar5 + -0x11);
        uVar2 = uVar2 + uVar3;
        if (uVar2 + 8 < 0x71) {
          uVar3 = F_0105df60(8,puVar5 + -9);
          uVar3 = uVar2 + uVar3;
          uVar2 = uVar3;
          if (uVar3 + 4 < 0x71) {
            uVar1 = puVar5[-1];
            puVar5[-1] = puVar5[2];
            puVar5[2] = uVar1;
            uVar1 = *puVar5;
            *puVar5 = puVar5[1];
            puVar5[1] = uVar1;
            uVar2 = uVar3 + 4;
            if (uVar3 + 8 < 0x71) {
              uVar1 = puVar5[3];
              puVar5[3] = puVar5[6];
              puVar5[6] = uVar1;
              uVar1 = puVar5[4];
              puVar5[4] = puVar5[5];
              puVar5[5] = uVar1;
              uVar2 = uVar3 + 8;
              if (uVar3 + 0xc < 0x71) {
                uVar1 = puVar5[7];
                puVar5[7] = puVar5[10];
                puVar5[10] = uVar1;
                uVar1 = puVar5[8];
                puVar5[8] = puVar5[9];
                puVar5[9] = uVar1;
                uVar2 = uVar3 + 0xc;
                if (uVar3 + 0x10 < 0x71) {
                  uVar1 = puVar5[0xb];
                  puVar5[0xb] = puVar5[0xe];
                  puVar5[0xe] = uVar1;
                  uVar1 = puVar5[0xc];
                  puVar5[0xc] = puVar5[0xd];
                  puVar5[0xd] = uVar1;
                  uVar2 = uVar3 + 0x10;
                  if (uVar3 + 0x14 < 0x71) {
                    uVar1 = puVar5[0x12];
                    puVar5[0x12] = puVar5[0xf];
                    puVar5[0xf] = uVar1;
                    uVar1 = puVar5[0x11];
                    puVar5[0x11] = puVar5[0x10];
                    puVar5[0x10] = uVar1;
                    uVar2 = uVar3 + 0x14;
                    if (uVar3 + 0x16 < 0x71) {
                      uVar1 = puVar5[0x14];
                      puVar5[0x14] = puVar5[0x13];
                      puVar5[0x13] = uVar1;
                      uVar2 = uVar3 + 0x16;
                      if (uVar3 + 0x18 < 0x71) {
                        uVar1 = puVar5[0x15];
                        puVar5[0x15] = puVar5[0x16];
                        puVar5[0x16] = uVar1;
                        uVar2 = uVar3 + 0x18;
                        if (uVar3 + 0x1a < 0x71) {
                          uVar1 = puVar5[0x18];
                          puVar5[0x18] = puVar5[0x17];
                          uVar6 = uVar3 + 0x1c;
                          puVar5[0x17] = uVar1;
                          uVar2 = uVar3 + 0x1a;
                          if (uVar6 < 0x71) {
                            uVar1 = puVar5[0x1a];
                            puVar5[0x1a] = puVar5[0x19];
                            puVar5[0x19] = uVar1;
                            if (uVar3 + 0x2c < 0x71) {
                              uVar2 = 0;
                              iVar4 = 8;
                              do {
                                uVar1 = puVar5[uVar2 + 0x1b];
                                puVar5[uVar2 + 0x1b] = puVar5[uVar2 + 0x1c];
                                puVar5[uVar2 + 0x1c] = uVar1;
                                uVar2 = uVar2 + 2;
                                iVar4 = iVar4 + -1;
                              } while (iVar4 != 0);
LAB_0105f9af: ;
                              uVar6 = uVar6 + uVar2;
                            }
                            else if (uVar6 < 0x70) {
                              uVar2 = F_0105e000(0x70 - uVar6,puVar5 + 0x1b);
                              goto LAB_0105f9af;
                            }
                            uVar2 = uVar6;
                            if (uVar6 + 0x20 < 0x71) {
                              uVar2 = uVar6 + 0x24;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    local_c = local_c + 1;
    local_8 = local_8 + uVar2;
    puVar5 = puVar5 + 0x70;
  } while (local_c < 10);
  return local_8 + 3;
}

/* ref: FUN_0105fa30 */
uint F_0105fa30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105fa30u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 * puVar5;
  int iVar6;
  
  uVar4 = 0;
  iVar6 = 0;
  puVar5 = (undefined1 *)(param_1 + 9);
  do {
    if (param_2 <= uVar4) {
      return uVar4;
    }
    uVar2 = F_0105df60(8,puVar5 + -9);
    uVar3 = uVar2;
    if (uVar2 + 4 < 0x31) {
      uVar1 = puVar5[2];
      puVar5[2] = puVar5[-1];
      puVar5[-1] = uVar1;
      uVar1 = puVar5[1];
      puVar5[1] = *puVar5;
      *puVar5 = uVar1;
      uVar3 = uVar2 + 7;
      if (uVar2 + 0x27 < 0x31) {
        uVar3 = uVar2 + 0x27;
      }
    }
    iVar6 = iVar6 + 1;
    uVar4 = uVar4 + uVar3;
    puVar5 = puVar5 + 0x30;
  } while (iVar6 < 8);
  return uVar4;
}

/* ref: FUN_0105faa0 */
uint F_0105faa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105faa0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  return 0xd;
}

/* ref: FUN_0105fb30 */
uint F_0105fb30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105fb30u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  if (param_2 < 0x10) {
    return 0xc;
  }
  uVar1 = param_1[0xc];
  param_1[0xc] = param_1[0xf];
  param_1[0xf] = uVar1;
  uVar1 = param_1[0xd];
  param_1[0xd] = param_1[0xe];
  param_1[0xe] = uVar1;
  return 0x12;
}

/* ref: FUN_0105fbe0 */
uint F_0105fbe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105fbe0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  if (param_2 < 0x10) {
    return 0xc;
  }
  uVar1 = param_1[0xc];
  param_1[0xc] = param_1[0xf];
  param_1[0xf] = uVar1;
  uVar1 = param_1[0xd];
  param_1[0xd] = param_1[0xe];
  param_1[0xe] = uVar1;
  return (-(uint)(param_2 < 0x32) & 0xffffffe0) + 0x32;
}

/* ref: FUN_0105fc90 */
uint F_0105fc90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105fc90u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 * puVar2;
  int iVar3;
  uint uVar4;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  iVar3 = 0;
  uVar4 = 4;
  puVar2 = param_1 + 9;
  do {
    if (param_2 <= uVar4) {
      return uVar4;
    }
    uVar1 = puVar2[-5];
    puVar2[-5] = puVar2[-2];
    puVar2[-2] = uVar1;
    uVar1 = puVar2[-4];
    puVar2[-4] = puVar2[-3];
    puVar2[-3] = uVar1;
    uVar1 = puVar2[-1];
    puVar2[-1] = puVar2[2];
    puVar2[2] = uVar1;
    uVar1 = *puVar2;
    *puVar2 = puVar2[1];
    puVar2[1] = uVar1;
    uVar1 = puVar2[3];
    puVar2[3] = puVar2[6];
    puVar2[6] = uVar1;
    uVar1 = puVar2[4];
    puVar2[4] = puVar2[5];
    puVar2[5] = uVar1;
    uVar1 = puVar2[7];
    puVar2[7] = puVar2[10];
    puVar2[10] = uVar1;
    uVar1 = puVar2[8];
    puVar2[8] = puVar2[9];
    puVar2[9] = uVar1;
    iVar3 = iVar3 + 1;
    uVar4 = uVar4 + 0x32;
    puVar2 = puVar2 + 0x34;
  } while (iVar3 < 0x14);
  return uVar4;
}

/* ref: FUN_0105fe00 */
uint F_0105fe00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105fe00u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar2 = F_0105df60(8,param_1);
  if (uVar2 + 8 <= param_2) {
    uVar3 = F_0105df60(8,param_1 + 8);
    uVar2 = uVar2 + uVar3;
    if (uVar2 + 4 <= param_2) {
      uVar1 = *(undefined1 *)(param_1 + 0x10);
      *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_1 + 0x13);
      *(undefined1 *)(param_1 + 0x13) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 0x11);
      *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_1 + 0x12);
      *(undefined1 *)(param_1 + 0x12) = uVar1;
      return uVar2 + 5;
    }
  }
  return uVar2;
}

/* ref: FUN_0105fe70 */
uint F_0105fe70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105fe70u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[5];
  param_1[5] = uVar1;
  return 6;
}

/* ref: FUN_0105fec0 */
uint F_0105fec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105fec0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined1 * puVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = 0;
  iVar5 = 0;
  puVar4 = (undefined1 *)(param_1 + 3);
  do {
    if (param_2 <= uVar6) break;
    uVar1 = puVar4[-3];
    puVar4[-3] = *puVar4;
    *puVar4 = uVar1;
    uVar1 = puVar4[-2];
    puVar4[-2] = puVar4[-1];
    puVar4[-1] = uVar1;
    uVar1 = puVar4[1];
    puVar4[1] = puVar4[2];
    puVar4[2] = uVar1;
    iVar5 = iVar5 + 1;
    uVar6 = uVar6 + 6;
    puVar4 = puVar4 + 8;
  } while (iVar5 < 0x14);
  if (uVar6 + 4 <= param_2) {
    uVar1 = *(undefined1 *)(param_1 + 0xa0);
    *(undefined1 *)(param_1 + 0xa0) = *(undefined1 *)(param_1 + 0xa3);
    uVar2 = *(undefined1 *)(param_1 + 0xa2);
    *(undefined1 *)(param_1 + 0xa3) = uVar1;
    *(undefined1 *)(param_1 + 0xa2) = *(undefined1 *)(param_1 + 0xa1);
    *(undefined1 *)(param_1 + 0xa1) = uVar2;
    uVar3 = uVar6 + 4;
    if (uVar6 + 8 <= param_2) {
      uVar1 = *(undefined1 *)(param_1 + 0xa4);
      *(undefined1 *)(param_1 + 0xa4) = *(undefined1 *)(param_1 + 0xa7);
      *(undefined1 *)(param_1 + 0xa7) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 0xa5);
      *(undefined1 *)(param_1 + 0xa5) = *(undefined1 *)(param_1 + 0xa6);
      *(undefined1 *)(param_1 + 0xa6) = uVar1;
      uVar3 = uVar6 + 8;
      if (uVar6 + 0xc <= param_2) {
        uVar1 = *(undefined1 *)(param_1 + 0xa8);
        *(undefined1 *)(param_1 + 0xa8) = *(undefined1 *)(param_1 + 0xab);
        uVar2 = *(undefined1 *)(param_1 + 0xaa);
        *(undefined1 *)(param_1 + 0xab) = uVar1;
        *(undefined1 *)(param_1 + 0xaa) = *(undefined1 *)(param_1 + 0xa9);
        *(undefined1 *)(param_1 + 0xa9) = uVar2;
        uVar3 = uVar6 + 0xe;
      }
    }
    return uVar3;
  }
  return uVar6;
}

/* ref: FUN_0105ffe0 */
uint F_0105ffe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105ffe0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar2 = F_0105df60(8,param_1);
  if (uVar2 + 8 <= param_2) {
    uVar3 = F_0105df60(8,param_1 + 8);
    uVar2 = uVar2 + uVar3;
    if (uVar2 + 4 <= param_2) {
      uVar1 = *(undefined1 *)(param_1 + 0x13);
      *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_1 + 0x10);
      *(undefined1 *)(param_1 + 0x10) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 0x12);
      *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_1 + 0x11);
      *(undefined1 *)(param_1 + 0x11) = uVar1;
      uVar3 = uVar2 + 4;
      if (uVar2 + 8 <= param_2) {
        uVar1 = *(undefined1 *)(param_1 + 0x17);
        *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_1 + 0x14);
        *(undefined1 *)(param_1 + 0x14) = uVar1;
        uVar1 = *(undefined1 *)(param_1 + 0x16);
        *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_1 + 0x15);
        *(undefined1 *)(param_1 + 0x15) = uVar1;
        uVar3 = uVar2 + 10;
        if ((uVar2 + 0x38 <= param_2) && (uVar3 = uVar2 + 0x58, param_2 < uVar2 + 0x58)) {
          uVar3 = uVar2 + 0x38;
        }
      }
      return uVar3;
    }
  }
  return uVar2;
}

/* ref: FUN_01060080 */
uint F_01060080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1060080u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar2 = F_0105df60(8,param_1);
  if (uVar2 + 8 <= param_2) {
    uVar3 = F_0105df60(8,param_1 + 8);
    uVar2 = uVar2 + uVar3;
    if (uVar2 + 8 <= param_2) {
      uVar3 = F_0105df60(8,param_1 + 0x10);
      uVar2 = uVar2 + uVar3;
      if (uVar2 + 8 <= param_2) {
        uVar3 = F_0105df60(8,param_1 + 0x18);
        uVar2 = uVar2 + uVar3;
        if (uVar2 + 2 <= param_2) {
          uVar1 = *(undefined1 *)(param_1 + 0x20);
          *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_1 + 0x21);
          *(undefined1 *)(param_1 + 0x21) = uVar1;
          return uVar2 + 0xb;
        }
      }
    }
  }
  return uVar2;
}

/* ref: FUN_01060170 */
uint F_01060170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1060170u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = param_1;
  if (param_2 < 8) {
    return 0;
  }
  uVar3 = F_0105df60(8,param_1);
  if (param_2 < uVar3 + 8) {
    return uVar3;
  }
  uVar4 = F_0105df60(8,param_1 + 8);
  uVar3 = uVar3 + uVar4;
  if (param_2 < uVar3 + 4) {
    return uVar3;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_1 + 0x13);
  *(undefined1 *)(param_1 + 0x13) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0x11);
  uVar4 = uVar3 + 0xc;
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_1 + 0x12);
  *(undefined1 *)(param_1 + 0x12) = uVar1;
  if (param_2 < uVar4) {
    return uVar3 + 5;
  }
  if (param_2 < uVar3 + 0x44) {
    if (param_2 <= uVar4) goto LAB_0106020b;
    iVar7 = param_2 - uVar4;
  }
  else {
    iVar7 = 0x38;
  }
  uVar3 = F_01060110(param_1 + 0x20,iVar7,param_3);
  uVar4 = uVar4 + uVar3;
LAB_0106020b: ;
  uVar4 = uVar4 + 1;
  param_1 = 0;
  iVar6 = iVar6 + 0x60;
  do {
    if (param_2 <= uVar4) break;
    uVar3 = F_0105df60(8,iVar6);
    if (uVar3 + 8 < 0x39) {
      uVar5 = F_0105df60(8,iVar6 + 8);
      uVar5 = uVar3 + 4 + uVar5;
      uVar3 = uVar5 + 0x20;
      uVar2 = uVar5;
      if ((0x38 < uVar3) || (uVar2 = uVar5 + 0x23, uVar5 + 0x23 < 0x39)) {
        uVar3 = uVar2;
      }
    }
    uVar4 = uVar4 + uVar3;
    param_1 = param_1 + 1;
    iVar6 = iVar6 + 0x38;
  } while (param_1 < 3);
  if (param_2 < uVar4 + 0x16) {
    return uVar4;
  }
  return uVar4 + 0x16;
}

/* ref: FUN_01060280 */
uint F_01060280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1060280u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar2 = F_0105df60(8,param_1);
  if (param_2 < uVar2 + 8) {
    return uVar2;
  }
  uVar3 = F_0105df60(8,param_1 + 8);
  uVar2 = uVar2 + uVar3;
  if (param_2 < uVar2 + 8) {
    return uVar2;
  }
  uVar3 = F_0105df60(8,param_1 + 0x10);
  uVar2 = uVar2 + uVar3;
  if (uVar2 + 4 <= param_2) {
    uVar1 = *(undefined1 *)(param_1 + 0x1b);
    *(undefined1 *)(param_1 + 0x1b) = *(undefined1 *)(param_1 + 0x18);
    *(undefined1 *)(param_1 + 0x18) = uVar1;
    uVar1 = *(undefined1 *)(param_1 + 0x1a);
    *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_1 + 0x19);
    uVar3 = uVar2 + 8;
    *(undefined1 *)(param_1 + 0x19) = uVar1;
    if (param_2 < uVar3) {
      return uVar2 + 4;
    }
    uVar1 = *(undefined1 *)(param_1 + 0x1f);
    *(undefined1 *)(param_1 + 0x1f) = *(undefined1 *)(param_1 + 0x1c);
    *(undefined1 *)(param_1 + 0x1c) = uVar1;
    uVar1 = *(undefined1 *)(param_1 + 0x1e);
    *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(param_1 + 0x1d);
    *(undefined1 *)(param_1 + 0x1d) = uVar1;
    if (uVar2 + 0xc <= param_2) {
      uVar1 = *(undefined1 *)(param_1 + 0x23);
      *(undefined1 *)(param_1 + 0x23) = *(undefined1 *)(param_1 + 0x20);
      *(undefined1 *)(param_1 + 0x20) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 0x22);
      *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_1 + 0x21);
      *(undefined1 *)(param_1 + 0x21) = uVar1;
      if (param_2 < uVar2 + 0xe) {
        return uVar2 + 0xc;
      }
      uVar1 = *(undefined1 *)(param_1 + 0x25);
      *(undefined1 *)(param_1 + 0x25) = *(undefined1 *)(param_1 + 0x24);
      *(undefined1 *)(param_1 + 0x24) = uVar1;
      if (param_2 < uVar2 + 0x10) {
        return uVar2 + 0xe;
      }
      uVar1 = *(undefined1 *)(param_1 + 0x27);
      *(undefined1 *)(param_1 + 0x27) = *(undefined1 *)(param_1 + 0x26);
      uVar3 = uVar2 + 0x29;
      *(undefined1 *)(param_1 + 0x26) = uVar1;
      if (param_2 < uVar3) {
        return uVar2 + 0x13;
      }
      if (uVar2 + 0x30 <= param_2) {
        uVar3 = uVar2 + 0x50;
        if (param_2 < uVar3) {
          return uVar2 + 0x30;
        }
        if (uVar2 + 0x111 <= param_2) {
          return uVar2 + 0x111;
        }
      }
    }
    return uVar3;
  }
  return uVar2;
}

/* ref: FUN_01060390 */
uint F_01060390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1060390u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar2 = F_0105df60(8,param_1);
  if (param_2 < uVar2 + 8) {
    return uVar2;
  }
  uVar3 = F_0105df60(8,param_1 + 8);
  uVar2 = uVar2 + uVar3;
  if (param_2 < uVar2 + 8) {
    return uVar2;
  }
  uVar3 = F_0105df60(8,param_1 + 0x10);
  uVar2 = uVar2 + uVar3;
  if (param_2 < uVar2 + 8) {
    return uVar2;
  }
  uVar3 = F_0105df60(8,param_1 + 0x18);
  uVar2 = uVar2 + uVar3;
  if (param_2 < uVar2 + 4) {
    return uVar2;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x23);
  *(undefined1 *)(param_1 + 0x23) = *(undefined1 *)(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x20) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0x22);
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_1 + 0x21);
  uVar3 = uVar2 + 8;
  *(undefined1 *)(param_1 + 0x21) = uVar1;
  if (param_2 < uVar3) {
    return uVar2 + 4;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x27);
  *(undefined1 *)(param_1 + 0x27) = *(undefined1 *)(param_1 + 0x24);
  *(undefined1 *)(param_1 + 0x24) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0x26);
  *(undefined1 *)(param_1 + 0x26) = *(undefined1 *)(param_1 + 0x25);
  *(undefined1 *)(param_1 + 0x25) = uVar1;
  if (uVar2 + 0xc <= param_2) {
    uVar1 = *(undefined1 *)(param_1 + 0x2b);
    *(undefined1 *)(param_1 + 0x2b) = *(undefined1 *)(param_1 + 0x28);
    *(undefined1 *)(param_1 + 0x28) = uVar1;
    uVar1 = *(undefined1 *)(param_1 + 0x2a);
    *(undefined1 *)(param_1 + 0x2a) = *(undefined1 *)(param_1 + 0x29);
    *(undefined1 *)(param_1 + 0x29) = uVar1;
    if (param_2 < uVar2 + 0xe) {
      return uVar2 + 0xc;
    }
    uVar1 = *(undefined1 *)(param_1 + 0x2d);
    *(undefined1 *)(param_1 + 0x2d) = *(undefined1 *)(param_1 + 0x2c);
    *(undefined1 *)(param_1 + 0x2c) = uVar1;
    if (param_2 < uVar2 + 0x10) {
      return uVar2 + 0xe;
    }
    uVar1 = *(undefined1 *)(param_1 + 0x2f);
    *(undefined1 *)(param_1 + 0x2f) = *(undefined1 *)(param_1 + 0x2e);
    uVar3 = uVar2 + 0x28;
    *(undefined1 *)(param_1 + 0x2e) = uVar1;
    if (param_2 < uVar3) {
      return uVar2 + 0x12;
    }
    if (uVar2 + 0x2f <= param_2) {
      return uVar2 + 0x2f;
    }
  }
  return uVar3;
}

/* ref: FUN_010604a0 */
uint F_010604a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10604a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (-(uint)(param_2 < 0xc2) & 0xffffff3f) + 0xc2;
}

/* ref: FUN_01060510 */
uint F_01060510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1060510u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 * puVar5;
  int iVar6;
  
  uVar4 = 0x20;
  if (param_2 < 0x20) {
    return 0;
  }
  iVar6 = 0;
  puVar5 = (undefined1 *)(param_1 + 0x28);
  do {
    if (param_2 <= uVar4) {
      return uVar4;
    }
    uVar2 = F_0105df60(8,puVar5 + -8);
    uVar3 = uVar2;
    if (uVar2 + 2 < 0x41) {
      uVar1 = puVar5[1];
      puVar5[1] = *puVar5;
      *puVar5 = uVar1;
      uVar3 = uVar2 + 3;
      if (uVar2 + 0x31 < 0x41) {
        uVar3 = uVar2 + 0x31;
      }
    }
    iVar6 = iVar6 + 1;
    uVar4 = uVar4 + uVar3;
    puVar5 = puVar5 + 0x40;
  } while (iVar6 < 0x10);
  return uVar4;
}

/* ref: FUN_01060620 */
uint F_01060620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1060620u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 * puVar5;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  uVar3 = 4;
  iVar4 = 0;
  puVar5 = param_1 + 8;
  do {
    if (param_2 <= uVar3) {
      return uVar3;
    }
    uVar2 = F_01060580(puVar5,0x68,param_3);
    iVar4 = iVar4 + 1;
    uVar3 = uVar3 + uVar2;
    puVar5 = puVar5 + 0x68;
  } while (iVar4 < 5);
  return uVar3;
}

/* ref: FUN_010606b0 */
uint F_010606b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10606b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 * puVar4;
  int iVar5;
  
  uVar3 = 0;
  iVar5 = 0;
  puVar4 = (undefined1 *)(param_1 + 8);
  do {
    if (param_2 <= uVar3) {
      return uVar3;
    }
    uVar2 = F_0105df60(8,puVar4 + -8);
    if (uVar2 + 2 < 0x11) {
      uVar1 = puVar4[1];
      puVar4[1] = *puVar4;
      *puVar4 = uVar1;
      uVar2 = uVar2 + 3;
    }
    iVar5 = iVar5 + 1;
    uVar3 = uVar3 + uVar2;
    puVar4 = puVar4 + 0x10;
  } while (iVar5 < 0x10);
  return uVar3;
}

/* ref: FUN_01060700 */
uint F_01060700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1060700u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (-(uint)(param_2 < 0xc2) & 0xffffff3f) + 0xc2;
}

/* ref: FUN_01060720 */
uint F_01060720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1060720u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar3 = F_0105df60(8,param_1);
  if (uVar3 + 8 <= param_2) {
    uVar4 = F_0105df60(8,param_1 + 8);
    uVar3 = uVar3 + uVar4;
    if (uVar3 + 8 <= param_2) {
      uVar4 = F_0105df60(8,param_1 + 0x10);
      uVar3 = uVar3 + uVar4;
      if (uVar3 + 8 <= param_2) {
        uVar4 = F_0105df60(8,param_1 + 0x18);
        uVar3 = uVar3 + uVar4;
        if (uVar3 + 4 <= param_2) {
          uVar1 = *(undefined1 *)(param_1 + 0x23);
          *(undefined1 *)(param_1 + 0x23) = *(undefined1 *)(param_1 + 0x20);
          *(undefined1 *)(param_1 + 0x20) = uVar1;
          uVar1 = *(undefined1 *)(param_1 + 0x22);
          *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_1 + 0x21);
          *(undefined1 *)(param_1 + 0x21) = uVar1;
          uVar4 = uVar3 + 4;
          if (uVar3 + 8 <= param_2) {
            uVar1 = *(undefined1 *)(param_1 + 0x24);
            *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_1 + 0x27);
            uVar2 = *(undefined1 *)(param_1 + 0x26);
            *(undefined1 *)(param_1 + 0x27) = uVar1;
            *(undefined1 *)(param_1 + 0x26) = *(undefined1 *)(param_1 + 0x25);
            *(undefined1 *)(param_1 + 0x25) = uVar2;
            uVar6 = uVar3 + 0xc;
            uVar4 = uVar3 + 8;
            if (uVar6 <= param_2) {
              uVar1 = *(undefined1 *)(param_1 + 0x28);
              *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_1 + 0x2b);
              *(undefined1 *)(param_1 + 0x2b) = uVar1;
              uVar1 = *(undefined1 *)(param_1 + 0x29);
              *(undefined1 *)(param_1 + 0x29) = *(undefined1 *)(param_1 + 0x2a);
              *(undefined1 *)(param_1 + 0x2a) = uVar1;
              if (uVar3 + 0x18 <= param_2) {
                iVar5 = 0;
                iVar7 = 3;
                do {
                  uVar1 = *(undefined1 *)(param_1 + 0x2c + iVar5);
                  *(undefined1 *)(param_1 + 0x2c + iVar5) = *(undefined1 *)(param_1 + 0x2f + iVar5);
                  *(undefined1 *)(param_1 + 0x2f + iVar5) = uVar1;
                  uVar1 = *(undefined1 *)(param_1 + 0x2d + iVar5);
                  *(undefined1 *)(param_1 + 0x2d + iVar5) = *(undefined1 *)(param_1 + 0x2e + iVar5);
                  *(undefined1 *)(param_1 + 0x2e + iVar5) = uVar1;
                  iVar5 = iVar5 + 4;
                  iVar7 = iVar7 + -1;
                } while (iVar7 != 0);
                return uVar6 + iVar5 + 1;
              }
              if (uVar6 < param_2) {
                uVar3 = F_0105dfc0(param_2 - uVar6,param_1 + 0x2c);
                uVar6 = uVar6 + uVar3;
              }
              uVar4 = uVar6 + 1;
            }
          }
          return uVar4;
        }
      }
    }
  }
  return uVar3;
}

/* ref: FUN_01060860 */
uint F_01060860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1060860u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = param_1;
  if (param_2 < 8) {
    return 0;
  }
  uVar3 = F_0105df60(8,param_1);
  if (param_2 < uVar3 + 0xc) {
    if (uVar3 < param_2) {
      uVar4 = F_0105dfc0(param_2 - uVar3,param_1 + 8);
      goto LAB_010608dc;
    }
  }
  else {
    uVar4 = 0;
    param_1 = 3;
    do {
      uVar1 = *(undefined1 *)(iVar2 + 8 + uVar4);
      *(undefined1 *)(iVar2 + 8 + uVar4) = *(undefined1 *)(iVar2 + 0xb + uVar4);
      *(undefined1 *)(iVar2 + 0xb + uVar4) = uVar1;
      uVar1 = *(undefined1 *)(iVar2 + 9 + uVar4);
      *(undefined1 *)(iVar2 + 9 + uVar4) = *(undefined1 *)(iVar2 + 10 + uVar4);
      *(undefined1 *)(iVar2 + 10 + uVar4) = uVar1;
      uVar4 = uVar4 + 4;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
LAB_010608dc: ;
    uVar3 = uVar3 + uVar4;
  }
  if (param_2 < uVar3 + 0xc) {
    if (param_2 <= uVar3) goto LAB_0106092f;
    uVar4 = F_0105dfc0(param_2 - uVar3,iVar2 + 0x14);
  }
  else {
    uVar4 = 0;
    iVar6 = 3;
    do {
      uVar1 = *(undefined1 *)(iVar2 + 0x14 + uVar4);
      *(undefined1 *)(iVar2 + 0x14 + uVar4) = *(undefined1 *)(iVar2 + 0x17 + uVar4);
      *(undefined1 *)(iVar2 + 0x17 + uVar4) = uVar1;
      uVar1 = *(undefined1 *)(iVar2 + 0x15 + uVar4);
      *(undefined1 *)(iVar2 + 0x15 + uVar4) = *(undefined1 *)(iVar2 + 0x16 + uVar4);
      *(undefined1 *)(iVar2 + 0x16 + uVar4) = uVar1;
      uVar4 = uVar4 + 4;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  uVar3 = uVar3 + uVar4;
LAB_0106092f: ;
  if (param_2 < uVar3 + 0x3c) {
    if (uVar3 < param_2) {
      uVar4 = F_0105dfc0(param_2 - uVar3,iVar2 + 0x20);
      uVar3 = uVar3 + uVar4;
    }
    return uVar3;
  }
  iVar5 = 0;
  iVar6 = 0xf;
  do {
    uVar1 = *(undefined1 *)(iVar2 + 0x20 + iVar5);
    *(undefined1 *)(iVar2 + 0x20 + iVar5) = *(undefined1 *)(iVar2 + 0x23 + iVar5);
    *(undefined1 *)(iVar2 + 0x23 + iVar5) = uVar1;
    uVar1 = *(undefined1 *)(iVar2 + 0x21 + iVar5);
    *(undefined1 *)(iVar2 + 0x21 + iVar5) = *(undefined1 *)(iVar2 + 0x22 + iVar5);
    *(undefined1 *)(iVar2 + 0x22 + iVar5) = uVar1;
    iVar5 = iVar5 + 4;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  return uVar3 + iVar5;
}

/* ref: FUN_01060990 */
uint F_01060990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1060990u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  if (uVar1 + 0x20 <= param_2) {
    uVar1 = uVar1 + 0x20;
  }
  return uVar1;
}

/* ref: FUN_010609c0 */
uint F_010609c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10609c0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 10) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[9];
  param_1[9] = uVar1;
  if (param_2 < 0xc) {
    return 10;
  }
  uVar1 = param_1[10];
  param_1[10] = param_1[0xb];
  param_1[0xb] = uVar1;
  return 0xd - (param_2 < 0xd);
}

/* ref: FUN_01060a50 */
uint F_01060a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1060a50u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 10) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[9];
  param_1[9] = uVar1;
  if (param_2 < 0xc) {
    return 10;
  }
  uVar1 = param_1[10];
  param_1[10] = param_1[0xb];
  param_1[0xb] = uVar1;
  return (-(uint)(param_2 < 0x2c) & 0xffffffe0) + 0x2c;
}

/* ref: FUN_01060af0 */
uint F_01060af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1060af0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 10) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[9];
  param_1[9] = uVar1;
  if (param_2 < 0xc) {
    return 10;
  }
  uVar1 = param_1[10];
  param_1[10] = param_1[0xb];
  param_1[0xb] = uVar1;
  return (-(uint)(param_2 < 0x4c) & 0xffffffc0) + 0x4c;
}

/* ref: FUN_01060b90 */
uint F_01060b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1060b90u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 10) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[9];
  param_1[9] = uVar1;
  if (param_2 < 0xc) {
    return 10;
  }
  uVar1 = param_1[10];
  param_1[10] = param_1[0xb];
  param_1[0xb] = uVar1;
  return (-(uint)(param_2 < 0x8c) & 0xffffff80) + 0x8c;
}

/* ref: FUN_01060c30 */
uint F_01060c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1060c30u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 10) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[9];
  param_1[9] = uVar1;
  if (param_2 < 0xc) {
    return 10;
  }
  uVar1 = param_1[10];
  param_1[10] = param_1[0xb];
  param_1[0xb] = uVar1;
  return (-(uint)(param_2 < 0x10c) & 0xffffff00) + 0x10c;
}

/* ref: FUN_01060cd0 */
uint F_01060cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1060cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 10) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[9];
  param_1[9] = uVar1;
  if (param_2 < 0xc) {
    return 10;
  }
  uVar1 = param_1[10];
  param_1[10] = param_1[0xb];
  param_1[0xb] = uVar1;
  return (-(uint)(param_2 < 0x18c) & 0xfffffe80) + 0x18c;
}

/* ref: FUN_01060d70 */
uint F_01060d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1060d70u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 10) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[9];
  param_1[9] = uVar1;
  if (param_2 < 0xc) {
    return 10;
  }
  uVar1 = param_1[10];
  param_1[10] = param_1[0xb];
  param_1[0xb] = uVar1;
  return (-(uint)(param_2 < 0x20c) & 0xfffffe00) + 0x20c;
}

/* ref: FUN_01060e10 */
uint F_01060e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1060e10u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 10) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[9];
  param_1[9] = uVar1;
  if (param_2 < 0xc) {
    return 10;
  }
  uVar1 = param_1[10];
  param_1[10] = param_1[0xb];
  param_1[0xb] = uVar1;
  return (-(uint)(param_2 < 0x30c) & 0xfffffd00) + 0x30c;
}

/* ref: FUN_01060eb0 */
uint F_01060eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1060eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 10) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[9];
  param_1[9] = uVar1;
  if (param_2 < 0xc) {
    return 10;
  }
  uVar1 = param_1[10];
  param_1[10] = param_1[0xb];
  param_1[0xb] = uVar1;
  return (-(uint)(param_2 < 0x40c) & 0xfffffc00) + 0x40c;
}

/* ref: FUN_01060f50 */
uint F_01060f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1060f50u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 10) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[9];
  param_1[9] = uVar1;
  if (param_2 < 0xc) {
    return 10;
  }
  uVar1 = param_1[10];
  param_1[10] = param_1[0xb];
  param_1[0xb] = uVar1;
  return (-(uint)(param_2 < 0x60c) & 0xfffffa00) + 0x60c;
}

/* ref: FUN_01060ff0 */
uint F_01060ff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1060ff0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 10) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[9];
  param_1[9] = uVar1;
  if (param_2 < 0xc) {
    return 10;
  }
  uVar1 = param_1[10];
  param_1[10] = param_1[0xb];
  param_1[0xb] = uVar1;
  return (-(uint)(param_2 < 0x80c) & 0xfffff800) + 0x80c;
}

/* ref: FUN_01061090 */
uint F_01061090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1061090u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 10) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[9];
  param_1[9] = uVar1;
  if (param_2 < 0xc) {
    return 10;
  }
  uVar1 = param_1[10];
  param_1[10] = param_1[0xb];
  param_1[0xb] = uVar1;
  return (-(uint)(param_2 < 0xc0c) & 0xfffff400) + 0xc0c;
}

/* ref: FUN_01061130 */
uint F_01061130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1061130u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  if (param_2 < 4) {
    return 2;
  }
  uVar1 = param_1[2];
  param_1[2] = param_1[3];
  param_1[3] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  return 0xc;
}

/* ref: FUN_010611c0 */
uint F_010611c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x10611c0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 uVar1;
  
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_1 + 7);
  *(undefined1 *)(param_1 + 7) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 5);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_1 + 6);
  *(undefined1 *)(param_1 + 6) = uVar1;
  return 8;
}

/* ref: FUN_01061200 */
uint F_01061200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1061200u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 * puVar2;
  int iVar3;
  uint uVar4;
  
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_1 + 7);
  *(undefined1 *)(param_1 + 7) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 5);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_1 + 6);
  *(undefined1 *)(param_1 + 6) = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = *(undefined1 *)(param_1 + 8);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_1 + 0xb);
  *(undefined1 *)(param_1 + 0xb) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 9);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_1 + 10);
  *(undefined1 *)(param_1 + 10) = uVar1;
  if (param_2 < 0xe) {
    return 0xc;
  }
  uVar1 = *(undefined1 *)(param_1 + 0xc);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_1 + 0xd);
  *(undefined1 *)(param_1 + 0xd) = uVar1;
  if (0xf < param_2) {
    uVar1 = *(undefined1 *)(param_1 + 0xe);
    *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_1 + 0xf);
    *(undefined1 *)(param_1 + 0xf) = uVar1;
    if (param_2 < 0x12) {
      return 0x10;
    }
    uVar1 = *(undefined1 *)(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_1 + 0x11);
    *(undefined1 *)(param_1 + 0x11) = uVar1;
    iVar3 = 0;
    uVar4 = 0x14;
    puVar2 = (undefined1 *)(param_1 + 0x1b);
    do {
      if (param_2 <= uVar4) {
        return uVar4;
      }
      uVar1 = puVar2[-7];
      puVar2[-7] = puVar2[-6];
      puVar2[-6] = uVar1;
      uVar1 = puVar2[-5];
      puVar2[-5] = puVar2[-4];
      puVar2[-4] = uVar1;
      uVar1 = puVar2[-3];
      puVar2[-3] = *puVar2;
      *puVar2 = uVar1;
      uVar1 = puVar2[-2];
      puVar2[-2] = puVar2[-1];
      puVar2[-1] = uVar1;
      uVar1 = puVar2[1];
      puVar2[1] = puVar2[4];
      puVar2[4] = uVar1;
      uVar1 = puVar2[2];
      puVar2[2] = puVar2[3];
      puVar2[3] = uVar1;
      iVar3 = iVar3 + 1;
      uVar4 = uVar4 + 0xc;
      puVar2 = puVar2 + 0xc;
    } while (iVar3 < 0x1e);
    return uVar4;
  }
  return 0xe;
}

/* ref: FUN_01061320 */
uint F_01061320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1061320u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 2;
  }
  uVar1 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_1 + 5);
  *(undefined1 *)(param_1 + 5) = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = *(undefined1 *)(param_1 + 8);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_1 + 0xb);
  *(undefined1 *)(param_1 + 0xb) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 9);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_1 + 10);
  *(undefined1 *)(param_1 + 10) = uVar1;
  if (param_2 < 0x10) {
    return 0xc;
  }
  uVar1 = *(undefined1 *)(param_1 + 0xc);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_1 + 0xf);
  *(undefined1 *)(param_1 + 0xf) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0xd);
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_1 + 0xe);
  *(undefined1 *)(param_1 + 0xe) = uVar1;
  return 0x10;
}

/* ref: FUN_010613c0 */
uint F_010613c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10613c0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 * puVar2;
  int iVar3;
  uint uVar4;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 0x10) {
    return 0xc;
  }
  uVar1 = param_1[0xc];
  param_1[0xc] = param_1[0xf];
  param_1[0xf] = uVar1;
  uVar1 = param_1[0xd];
  param_1[0xd] = param_1[0xe];
  param_1[0xe] = uVar1;
  if (0x11 < param_2) {
    uVar1 = param_1[0x10];
    param_1[0x10] = param_1[0x11];
    param_1[0x11] = uVar1;
    if (param_2 < 0x14) {
      return 0x12;
    }
    uVar1 = param_1[0x12];
    param_1[0x12] = param_1[0x13];
    param_1[0x13] = uVar1;
    if (0x17 < param_2) {
      uVar1 = param_1[0x14];
      param_1[0x14] = param_1[0x17];
      param_1[0x17] = uVar1;
      uVar1 = param_1[0x15];
      param_1[0x15] = param_1[0x16];
      param_1[0x16] = uVar1;
      if (param_2 < 0x1a) {
        return 0x18;
      }
      uVar1 = param_1[0x18];
      param_1[0x18] = param_1[0x19];
      param_1[0x19] = uVar1;
      iVar3 = 0;
      uVar4 = 0x1c;
      puVar2 = param_1 + 0x21;
      do {
        if (param_2 <= uVar4) {
          return uVar4;
        }
        uVar1 = puVar2[-3];
        puVar2[-3] = puVar2[-2];
        puVar2[-2] = uVar1;
        uVar1 = puVar2[-1];
        puVar2[-1] = *puVar2;
        *puVar2 = uVar1;
        uVar1 = puVar2[3];
        puVar2[3] = puVar2[6];
        puVar2[6] = uVar1;
        uVar1 = puVar2[4];
        puVar2[4] = puVar2[5];
        puVar2[5] = uVar1;
        uVar1 = puVar2[7];
        puVar2[7] = puVar2[10];
        puVar2[10] = uVar1;
        uVar1 = puVar2[8];
        puVar2[8] = puVar2[9];
        puVar2[9] = uVar1;
        iVar3 = iVar3 + 1;
        uVar4 = uVar4 + 0x10;
        puVar2 = puVar2 + 0x10;
      } while (iVar3 < 4);
      return uVar4;
    }
    return 0x14;
  }
  return 0x10;
}

/* ref: FUN_01061520 */
uint F_01061520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1061520u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  if (param_2 < 0x10) {
    return 0xc;
  }
  uVar1 = param_1[0xc];
  param_1[0xc] = param_1[0xf];
  param_1[0xf] = uVar1;
  uVar1 = param_1[0xd];
  param_1[0xd] = param_1[0xe];
  param_1[0xe] = uVar1;
  if (param_2 < 0x14) {
    return 0x10;
  }
  uVar1 = param_1[0x10];
  param_1[0x10] = param_1[0x13];
  param_1[0x13] = uVar1;
  uVar1 = param_1[0x11];
  param_1[0x11] = param_1[0x12];
  param_1[0x12] = uVar1;
  return 0x14;
}

/* ref: FUN_010615f0 */
uint F_010615f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10615f0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  if (param_2 < 0x10) {
    return 0xc;
  }
  uVar1 = param_1[0xc];
  param_1[0xc] = param_1[0xf];
  param_1[0xf] = uVar1;
  uVar1 = param_1[0xd];
  param_1[0xd] = param_1[0xe];
  param_1[0xe] = uVar1;
  if (param_2 < 0x14) {
    return 0x10;
  }
  uVar1 = param_1[0x10];
  param_1[0x10] = param_1[0x13];
  param_1[0x13] = uVar1;
  uVar1 = param_1[0x11];
  param_1[0x11] = param_1[0x12];
  param_1[0x12] = uVar1;
  if (param_2 < 0x18) {
    return 0x14;
  }
  uVar1 = param_1[0x14];
  param_1[0x14] = param_1[0x17];
  param_1[0x17] = uVar1;
  uVar1 = param_1[0x15];
  param_1[0x15] = param_1[0x16];
  param_1[0x16] = uVar1;
  if (param_2 < 0x1c) {
    return 0x18;
  }
  uVar1 = param_1[0x18];
  param_1[0x18] = param_1[0x1b];
  param_1[0x1b] = uVar1;
  uVar1 = param_1[0x19];
  param_1[0x19] = param_1[0x1a];
  param_1[0x1a] = uVar1;
  return 0x1c;
}

/* ref: FUN_01061700 */
uint F_01061700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1061700u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  if (param_2 < 0x10) {
    return 0xc;
  }
  uVar1 = param_1[0xc];
  param_1[0xc] = param_1[0xf];
  param_1[0xf] = uVar1;
  uVar1 = param_1[0xd];
  param_1[0xd] = param_1[0xe];
  param_1[0xe] = uVar1;
  if (param_2 < 0x14) {
    return 0x10;
  }
  uVar1 = param_1[0x10];
  param_1[0x10] = param_1[0x13];
  param_1[0x13] = uVar1;
  uVar1 = param_1[0x11];
  param_1[0x11] = param_1[0x12];
  param_1[0x12] = uVar1;
  if (param_2 < 0x1c) {
    return 0x14;
  }
  uVar2 = F_0105df60(8,param_1 + 0x18);
  return uVar2 + 0x14;
}

/* ref: FUN_010617e0 */
uint F_010617e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10617e0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[5];
  param_1[5] = uVar1;
  if (param_2 < 8) {
    return 6;
  }
  uVar1 = param_1[6];
  param_1[6] = param_1[7];
  param_1[7] = uVar1;
  if (param_2 < 10) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[9];
  param_1[9] = uVar1;
  return 10;
}

