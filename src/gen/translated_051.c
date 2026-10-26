#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_006b6f10 */
uint F_006b6f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x6b6f10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  *(undefined4 *)this = *param_3;
  *(undefined4 *)((int)this + 4) = *param_4;
  *(undefined4 *)((int)this + 8) = param_5;
  *(undefined4 *)((int)this + 0xc) = param_6;
  *(undefined4 *)((int)this + 0x10) = param_2;
  *(undefined4 *)((int)this + 0x28) = 0xf;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0x14) = 0;
  F_004e54d0((undefined1 *)((int)this + 0x14),param_1,0,0xffffffff);
  return (uint)this;
}

/* ref: FUN_006b6f60 */
uint F_006b6f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x6b6f60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  byte * pbVar1;
  uint uVar2;
  int iVar3;
  
  *(undefined4 *)((int)this + 4) = *param_3;
  *(undefined4 *)((int)this + 8) = *param_4;
  *(undefined4 *)((int)this + 0xc) = param_5;
  *(undefined4 *)((int)this + 0x10) = param_6;
  *(undefined4 *)((int)this + 0x14) = param_2;
  *(undefined4 *)((int)this + 0x2c) = 0xf;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x18) = 0;
  F_004e54d0((undefined1 *)((int)this + 0x18),param_1,0,0xffffffff);
  uVar2 = 0x811c9dc5;
  pbVar1 = (byte *)((int)this + 5);
  iVar3 = 8;
  do {
    uVar2 = (uint)pbVar1[4] ^
            ((((((uint)pbVar1[-1] ^ uVar2 * 0x1000193) * 0x1000193 ^ (uint)*pbVar1) * 0x1000193 ^
              (uint)pbVar1[1]) * 0x1000193 ^ (uint)pbVar1[2]) * 0x1000193 ^ (uint)pbVar1[3]) *
            0x1000193;
    pbVar1 = pbVar1 + 6;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(uint *)this = uVar2;
  return (uint)this;
}

/* ref: FUN_006b7020 */
uint F_006b7020(unsigned int gen_a0)
{
  GEN_ENTER(0x6b7020u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_006b5f20(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,0xd8);
  return (uint)uVar1;
}

/* ref: FUN_006b70a0 */
uint F_006b70a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b70a0u, gen_a0, gen_a1, 0u, 0u);
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
      puVar4 = (undefined4 *)F_006b69e0(this,1);
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
      F_006b69e0(this,1);
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

/* ref: FUN_006b7120 */
uint F_006b7120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b7120u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_006b6a50(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_006b6a50(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_006b7190 */
uint F_006b7190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b7190u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_006b6b00(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_006b6b00(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_006b7200 */
uint F_006b7200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b7200u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_006b6bb0(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_006b6bb0(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_006b7270 */
unsigned int F_006b7270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b7270u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_006b6cf0(param_1,param_2,param_2 - param_1 >> 3,param_3);
  return 0;
}

/* ref: FUN_006b72a0 */
uint F_006b72a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b72a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)this = 0;
  F_006b6c60(this,param_1);
  return (uint)this;
}

/* ref: FUN_006b72d0 */
uint F_006b72d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b72d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (0xf < *(uint *)((int)this + 0x2c)) {
    F_00429760(*(undefined4 *)((int)this + 0x18),*(uint *)((int)this + 0x2c) + 1,0x32);
  }
  *(undefined4 *)((int)this + 0x2c) = 0xf;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x18) = 0;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_006b7320 */
uint F_006b7320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b7320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x2c) = 0xf;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x18) = 0;
  F_004e54d0((undefined1 *)((int)this + 0x18),param_1 + 6,0,0xffffffff);
  return (uint)this;
}

/* ref: Client::Graphics::Scene::GrassManager::vf0 */
uint F_006b7380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b7380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_006a9c90(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_006b73b0 */
uint F_006b73b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b73b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_005296e0(this,1);
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
      F_005296e0(this,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_006b7460 */
uint F_006b7460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b7460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_006b7120(this,1);
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
      F_006b7120(this,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_006b74d0 */
uint F_006b74d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b74d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_006b7120(this,1);
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
      F_006b7120(this,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_006b7540 */
uint F_006b7540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b7540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_006b7190(this,1);
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
      F_006b7190(this,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_006b75b0 */
uint F_006b75b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b75b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_006b7200(this,1);
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
      F_006b7200(this,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_006b7620 */
unsigned int F_006b7620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b7620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  
  if (this != param_1) {
    iVar1 = *(int *)this;
    if (iVar1 != 0) {
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0xcb);
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

/* ref: FUN_006b7680 */
uint F_006b7680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b7680u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_006b6030(param_3,0,param_2,0,0xffffffff);
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  F_006b6c60(param_1,uVar1);
  return (uint)param_1;
}

/* ref: FUN_006b76c0 */
uint F_006b76c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b76c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x2c) = 0xf;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x18) = 0;
  F_004e54d0((undefined1 *)((int)this + 0x18),param_1 + 6,0,0xffffffff);
  *(undefined4 *)((int)this + 0x34) = *param_2;
  return (uint)this;
}

/* ref: FUN_006b7720 */
uint F_006b7720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b7720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x2c) = 0xf;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x18) = 0;
  F_004e54d0((undefined1 *)((int)this + 0x18),param_1 + 6,0,0xffffffff);
  *(undefined4 *)((int)this + 0x34) = param_1[0xd];
  return (uint)this;
}

/* ref: FUN_006b7780 */
uint F_006b7780(unsigned int gen_a0)
{
  GEN_ENTER(0x6b7780u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (0xf < *(uint *)(param_1 + 0x2c)) {
    F_00429760(*(undefined4 *)(param_1 + 0x18),*(uint *)(param_1 + 0x2c) + 1,0x32);
  }
  *(undefined4 *)(param_1 + 0x2c) = 0xf;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  return 0;
}

/* ref: FUN_006b77c0 */
uint F_006b77c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b77c0u, gen_a0, gen_a1, 0u, 0u);
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
  return (uint)this;
}

/* ref: FUN_006b7800 */
uint F_006b7800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b7800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  
  if (this != param_1) {
    iVar1 = *(int *)this;
    if (iVar1 != 0) {
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0xcb);
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

/* ref: FUN_006b7860 */
uint F_006b7860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b7860u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x2c) = 0xf;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x18) = 0;
  F_004e54d0((undefined1 *)((int)this + 0x18),param_1 + 6,0,0xffffffff);
  *(undefined4 *)((int)this + 0x34) = *param_2;
  return (uint)this;
}

/* ref: FUN_006b78c0 */
uint F_006b78c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b78c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x2c) = 0xf;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x18) = 0;
  F_004e54d0((undefined1 *)((int)this + 0x18),param_1 + 6,0,0xffffffff);
  *(undefined4 *)((int)this + 0x34) = param_1[0xd];
  return (uint)this;
}

/* ref: FUN_006b7920 */
uint F_006b7920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b7920u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  if (0xf < *(uint *)(param_2 + 0x2c)) {
    F_00429760(*(undefined4 *)(param_2 + 0x18),*(uint *)(param_2 + 0x2c) + 1,0x32);
  }
  *(undefined4 *)(param_2 + 0x2c) = 0xf;
  *(undefined4 *)(param_2 + 0x28) = 0;
  *(undefined1 *)(param_2 + 0x18) = 0;
  return 0;
}

/* ref: FUN_006b7960 */
uint F_006b7960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b7960u, gen_a0, gen_a1, 0u, 0u);
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
  return (uint)param_1;
}

/* ref: FUN_006b79a0 */
uint F_006b79a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6b79a0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    if (0xf < (uint)param_4[0xe]) {
      F_00429760(param_4[9],param_4[0xe] + 1,0x32);
    }
    param_4[0xe] = 0xf;
    param_4[0xd] = 0;
    *(undefined1 *)(param_4 + 9) = 0;
    F_00429760(param_4,0x48,0xcb);
                    
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
  cVar1 = *(char *)(param_4[1] + 0x44);
  piVar4 = param_4;
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      *param_1 = param_4;
      *(undefined1 *)(iVar2 + 0x44) = 1;
      return (uint)param_1;
    }
    piVar5 = (int *)piVar4[1];
    piVar6 = (int *)piVar5[1];
    if (piVar5 == (int *)*piVar6) {
      iVar2 = piVar6[2];
      if (*(char *)(iVar2 + 0x44) == '\0') {
        *(undefined1 *)(piVar5 + 0x11) = 1;
        *(undefined1 *)(iVar2 + 0x44) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x44))) = 0;
        piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
      }
      else {
        if (piVar4 == (int *)piVar5[2]) {
          piVar4 = (int *)piVar5[2];
          piVar5[2] = *piVar4;
          if (*(char *)(*piVar4 + 0x45) == '\0') {
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
        *(undefined1 *)(piVar4[1] + 0x44) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x44))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)*piVar5;
        *piVar5 = piVar6[2];
        if (*(char *)(piVar6[2] + 0x45) == '\0') {
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
LAB_006b7bc3: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*(char *)(iVar2 + 0x44) != '\0') {
        if (piVar4 == (int *)*piVar5) {
          iVar2 = *piVar5;
          *piVar5 = *(int *)(iVar2 + 8);
          if (*((char *)GEN_TOP((*(int *)(iVar2 + 8) + 0x45))) == '\0') {
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
        *(undefined1 *)(piVar4[1] + 0x44) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x44))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)piVar5[2];
        piVar5[2] = *piVar6;
        if (*(char *)(*piVar6 + 0x45) == '\0') {
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
        goto LAB_006b7bc3;
      }
      *(undefined1 *)(piVar5 + 0x11) = 1;
      *(undefined1 *)(iVar2 + 0x44) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x44))) = 0;
      piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
    }
    cVar1 = *(char *)(piVar4[1] + 0x44);
  } while( true );
}

/* ref: FUN_006b7bf0 */
unsigned int F_006b7bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b7bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_006b78c0(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_006b7c10 */
uint F_006b7c10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b7c10u, gen_a0, gen_a1, gen_a2, 0u);
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
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x45))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  F_006b1d30(&(*(int * PTR32 *)&gen_args[2]));
  piVar6 = (int *)*piVar3;
  if (*(char *)((int)piVar6 + 0x45) == '\0') {
    piVar7 = piVar6;
    if ((*(char *)(piVar3[2] + 0x45) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar3[2]) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0x45) == '\0') {
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
      iVar1 = (*(int * PTR32 *)&gen_args[2])[0x11];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 0x11))) = (char)piVar3[0x11];
      *(char *)(piVar3 + 0x11) = (char)iVar1;
      goto LAB_006b7d2a;
    }
  }
  else {
    piVar7 = (int *)piVar3[2];
  }
  piVar6 = (int *)piVar3[1];
  if (*(char *)((int)piVar7 + 0x45) == '\0') {
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
    if (*(char *)((int)piVar7 + 0x45) == '\0') {
      piVar4 = (int *)F_006b1cf0(piVar7);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0x45) == '\0') {
      uVar5 = F_006b1cd0(piVar7);
      *(uint *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar6;
    }
  }
LAB_006b7d2a: ;
  if ((char)piVar3[0x11] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[0x11] != '\x01') break;
        piVar6 = (int *)*piVar4;
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar4[2];
          if ((char)piVar6[0x11] == '\0') {
            *(undefined1 *)(piVar6 + 0x11) = 1;
            *(undefined1 *)(piVar4 + 0x11) = 0;
            F_006b5290((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0x45) == '\0') {
            if ((*(char *)(*piVar6 + 0x44) != '\x01') || (*(char *)(piVar6[2] + 0x44) != '\x01')) {
              if (*(char *)(piVar6[2] + 0x44) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x44) = 1;
                *(undefined1 *)(piVar6 + 0x11) = 0;
                F_006b3a00((*(undefined * PTR32 *)&gen_args[0]),piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 0x11) = (char)piVar4[0x11];
              *(undefined1 *)(piVar4 + 0x11) = 1;
              *(undefined1 *)(piVar6[2] + 0x44) = 1;
              F_006b5290((*(undefined * PTR32 *)&gen_args[0]),piVar4);
              break;
            }
LAB_006b7de8: ;
            *(undefined1 *)(piVar6 + 0x11) = 0;
          }
        }
        else {
          if ((char)piVar6[0x11] == '\0') {
            *(undefined1 *)(piVar6 + 0x11) = 1;
            *(undefined1 *)(piVar4 + 0x11) = 0;
            F_006b3a00((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0x45) == '\0') {
            if ((*(char *)(piVar6[2] + 0x44) == '\x01') && (*(char *)(*piVar6 + 0x44) == '\x01'))
            goto LAB_006b7de8;
            if (*(char *)(*piVar6 + 0x44) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x44) = 1;
              *(undefined1 *)(piVar6 + 0x11) = 0;
              F_006b5290((*(undefined * PTR32 *)&gen_args[0]),piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 0x11) = (char)piVar4[0x11];
            *(undefined1 *)(piVar4 + 0x11) = 1;
            *(undefined1 *)(*piVar6 + 0x44) = 1;
            F_006b3a00((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 0x11) = 1;
  }
  if (0xf < (uint)piVar3[0xe]) {
    F_00429760(piVar3[9],piVar3[0xe] + 1,0x32);
  }
  piVar3[0xe] = 0xf;
  piVar3[0xd] = 0;
  *(undefined1 *)(piVar3 + 9) = 0;
  F_00429760(piVar3,0x48,0xcb);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + -1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_006b7ea0 */
unsigned int F_006b7ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b7ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x45);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_006b7ea0(this,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    if (0xf < (uint)piVar3[0xe]) {
      F_00429760(piVar3[9],piVar3[0xe] + 1,0x32);
    }
    piVar3[0xe] = 0xf;
    piVar3[0xd] = 0;
    *(undefined1 *)(piVar3 + 9) = 0;
    F_00429760(piVar3,0x48,0xcb);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x45);
  }
  return 0;
}

/* ref: FUN_006b7f10 */
uint F_006b7f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6b7f10u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  undefined4 uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  bool bVar5;
  
  iVar2 = (*(int *)&gen_args[2]);
  puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  bVar5 = true;
  (*(int *)&gen_args[2]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[2]), 1, 3),1);
  if (*(char *)((int)puVar4[1] + 0x45) == '\0') {
    puVar3 = (undefined4 *)puVar4[1];
    do {
      puVar4 = puVar3;
      if ((char)(*(undefined4 * PTR32 *)&gen_args[3]) == '\0') {
        bVar5 = *(uint *)(iVar2 + 0xc) < (uint)puVar4[3];
      }
      else {
        bVar5 = *(uint *)(iVar2 + 0xc) <= (uint)puVar4[3];
      }
      (*(int *)&gen_args[2]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[2]), 1, 3),bVar5);
      if (bVar5 == false) {
        puVar3 = (undefined4 *)puVar4[2];
      }
      else {
        puVar3 = (undefined4 *)*puVar4;
      }
    } while (*(char *)((int)puVar3 + 0x45) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = puVar4;
  if (bVar5 != false) {
    if (puVar4 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      puVar4 = (undefined4 *)F_006b79a0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar4,iVar2);
      *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar4;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_006b2b00(&(*(undefined4 * PTR32 *)&gen_args[3]));
  }
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[3])[3] < *(uint *)(iVar2 + 0xc)) {
    puVar4 = (undefined4 *)F_006b79a0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),(*(int *)&gen_args[2]),puVar4,iVar2);
    uVar1 = *puVar4;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
    *(*(undefined4 * PTR32 *)&gen_args[1]) = uVar1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  if (0xf < *(uint *)(iVar2 + 0x38)) {
    F_00429760(*(undefined4 *)(iVar2 + 0x24),*(uint *)(iVar2 + 0x38) + 1,0x32);
  }
  *(undefined4 *)(iVar2 + 0x38) = 0xf;
  *(undefined4 *)(iVar2 + 0x34) = 0;
  *(undefined1 *)(iVar2 + 0x24) = 0;
  F_00429760(iVar2,0x48,0xcb);
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(undefined4 * PTR32 *)&gen_args[3]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_006b8010 */
unsigned int F_006b8010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b8010u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_006b78c0(param_2,param_3);
  }
  return 0;
}

/* ref: FUN_006b8030 */
unsigned int F_006b8030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b8030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_006b78c0(param_2,param_3);
  }
  return 0;
}

/* ref: FUN_006b8050 */
uint F_006b8050(unsigned int gen_a0)
{
  GEN_ENTER(0x6b8050u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_006b7ea0(this,*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar1 = *(uint *)((int)this + 4);
  *(uint *)(uVar1 + 8) = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_006b8080 */
uint F_006b8080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b8080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x48,0,0xcb);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 0x11) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    F_006b78c0(puVar1 + 3,param_1);
  }
  return (uint)puVar1;
}

/* ref: FUN_006b80d0 */
uint F_006b80d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b80d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x48,0,0xcb);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 0x11) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    F_006b78c0(puVar1 + 3,param_1);
  }
  return (uint)puVar1;
}

/* ref: FUN_006b8120 */
uint F_006b8120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6b8120u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_006b7ea0(this,piVar2[1]);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x45) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x45) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x45);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x45);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x45);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x45);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_006b7c10(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_006b81e0 */
uint F_006b81e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b81e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x48,0,0xcb);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 0x11) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    F_006b78c0(puVar1 + 3,param_2);
  }
  F_006b7f10(this,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_006b8240 */
uint F_006b8240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b8240u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x48,0,0xcb);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 0x11) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    F_006b78c0(puVar1 + 3,param_2);
  }
  F_006b7f10(this,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_006b82a0 */
uint F_006b82a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b82a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_006b8120(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_006b82c0 */
uint F_006b82c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b82c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_006b8120(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x48,0xcb);
  return (uint)uVar1;
}

/* ref: FUN_006b8340 */
uint F_006b8340(unsigned int gen_a0)
{
  GEN_ENTER(0x6b8340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_006b8120(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x48,0xcb);
  return (uint)uVar1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf3 */
byte F_006b8380(void)
{
  GEN_ENTER(0x6b8380u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf52 */
unsigned int F_006b8390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b8390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf53 */
unsigned int F_006b83a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b83a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf54 */
unsigned int F_006b83b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b83b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf56 */
unsigned int F_006b83c0(void)
{
  GEN_ENTER(0x6b83c0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf55 */
unsigned int F_006b83d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b83d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf57 */
unsigned int F_006b83e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b83e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf58 */
unsigned int F_006b83f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b83f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf59 */
unsigned int F_006b8400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b8400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf60 */
unsigned int F_006b8410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b8410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf61 */
unsigned int F_006b8420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b8420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf62 */
unsigned int F_006b8430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b8430u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf73 */
uint F_006b8440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6b8440u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf86 */
unsigned int F_006b8450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6b8450u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: FUN_006b8460 */
unsigned int F_006b8460(unsigned int gen_a0)
{
  GEN_ENTER(0x6b8460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  int iVar3;
  undefined * this_00;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[91])REFP(0x10b32ec));
  F_00b89b90();
  F_00b826a0((undefined *)((int)this + 0x700));
  F_006b8120((undefined *)((int)this + 0x6d0),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x6d4),
               *(undefined4 * PTR32 *)((int)this + 0x6d4));
  F_00429760(*(undefined4 *)((int)this + 0x6d4),0x48,0xcb);
  F_006b8120((undefined *)((int)this + 0x6c0),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x6c4),
               *(undefined4 * PTR32 *)((int)this + 0x6c4));
  F_00429760(*(undefined4 *)((int)this + 0x6c4),0x48,0xcb);
  this_00 = (undefined *)((int)this + 0x6c0);
  iVar3 = 4;
  do {
    this_00 = (undefined *)((int)this_00 + -0x88);
    F_009fa170(this_00);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  iVar3 = *(int *)((int)this + 0x3fc);
  if (iVar3 != 0) {
    F_00429760(iVar3,(*(int *)((int)this + 0x404) - iVar3 >> 2) * 4,0xcb);
  }
  *(undefined4 *)((int)this + 0x3fc) = 0;
  *(undefined4 *)((int)this + 0x400) = 0;
  *(undefined4 *)((int)this + 0x404) = 0;
  iVar3 = *(int *)((int)this + 0x3ec);
  if (iVar3 != 0) {
    F_00429760(iVar3,(*(int *)((int)this + 0x3f4) - iVar3 >> 2) * 4,0xcb);
  }
  *(undefined4 *)((int)this + 0x3ec) = 0;
  *(undefined4 *)((int)this + 0x3f0) = 0;
  *(undefined4 *)((int)this + 0x3f4) = 0;
  iVar3 = *(int *)((int)this + 0x3dc);
  if (iVar3 != 0) {
    F_00429760(iVar3,(*(int *)((int)this + 0x3e4) - iVar3 >> 2) * 4,0xcb);
  }
  *(undefined4 *)((int)this + 0x3dc) = 0;
  *(undefined4 *)((int)this + 0x3e0) = 0;
  *(undefined4 *)((int)this + 0x3e4) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x90) = (*(undefined * PTR32 (*)[5])REFP(0x10abff4));
  F_004a05c0((undefined *)((int)this + 0x90));
  if (this == (undefined *)0xffffff48) {
    iVar3 = 0;
  }
  else {
    iVar3 = (int)this + 0x90;
  }
  iVar1 = *(int *)(iVar3 + 0x28);
  iVar3 = *(int *)(iVar3 + 0x2c);
  iVar2 = iVar3;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x2c) = iVar3;
    iVar2 = *(int *)&REFG(undefined, 0x1487c7c);
  }
  *(int *)&REFG(undefined, 0x1487c7c) = iVar2;
  if (iVar3 != 0) {
    *(int *)(iVar3 + 0x28) = iVar1;
    iVar1 = REFG(int, 0x1487c80);
  }
  REFG(int, 0x1487c80) = iVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) = (*(undefined * PTR32 (*)[10])REFP(0x10b2a9c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf0 */
uint F_006b8610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b8610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_006b8460(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Scene::Human::vf80 */
uint F_006b8640(void)
{
  GEN_ENTER(0x6b8640u, 0u, 0u, 0u, 0u);
  return 5;
}

/* ref: Client::Graphics::Scene::Human::vf74 */
ushort F_006b8650(unsigned int gen_a0)
{
  GEN_ENTER(0x6b8650u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 0x778);
}

/* ref: Client::Graphics::Scene::Human::vf0 */
uint F_006b8670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b8670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[91])REFP(0x10b345c));
  F_006b8460(this);
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Scene::Demihuman::vf80 */
uint F_006b86a0(void)
{
  GEN_ENTER(0x6b86a0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Graphics::Scene::Demihuman::vf74 */
ushort F_006b86b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b86b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 0x748);
}

/* ref: Client::Graphics::Scene::Demihuman::vf0 */
uint F_006b86d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b86d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[91])REFP(0x10b35cc));
  F_006b8460(this);
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Scene::Weapon::vf55 */
unsigned int F_006b8700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b8700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Graphics::Scene::Weapon::vf80 */
uint F_006b8710(void)
{
  GEN_ENTER(0x6b8710u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Graphics::Scene::Weapon::vf74 */
ushort F_006b8720(unsigned int gen_a0)
{
  GEN_ENTER(0x6b8720u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 0x730);
}

/* ref: Client::Graphics::Scene::Weapon::vf0 */
uint F_006b8740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b8740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[91])REFP(0x10b373c));
  F_006b8460(this);
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Scene::Monster::vf55 */
unsigned int F_006b8770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b8770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Graphics::Scene::Monster::vf80 */
uint F_006b8780(void)
{
  GEN_ENTER(0x6b8780u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Graphics::Scene::Monster::vf74 */
ushort F_006b8790(unsigned int gen_a0)
{
  GEN_ENTER(0x6b8790u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 0x730);
}

/* ref: Client::Graphics::Scene::Monster::vf0 */
uint F_006b87b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b87b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[91])REFP(0x10b38ac));
  F_006b8460(this);
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),this);
  }
  return (uint)this;
}

/* ref: FUN_006b87f0 */
uint F_006b87f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b87f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * piVar1;
  undefined * pvVar2;
  uint uVar3;
  
  pvVar2 = (undefined *)F_00406b90(0x360,0,0);
  if (pvVar2 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = F_00498e80(pvVar2,*param_1);
  }
  *(uint *)this = uVar3;
  pvVar2 = (undefined *)F_00406b90(0x20,0,0);
  if (pvVar2 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = F_00b8a620(pvVar2,*param_1);
  }
  *(uint *)((int)this + 4) = uVar3;
  pvVar2 = (undefined *)F_00406b90(0x18,0,0);
  if (pvVar2 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = F_00b12aa0(pvVar2,*param_1);
  }
  piVar1 = *(int * PTR32 *)this;
  *(uint *)((int)this + 8) = uVar3;
  if (piVar1 != (int *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,param_1[1]);
    if ((char)uVar3 != '\0') {
      *(uint *)((int)this + 0xc) = *(uint *)((int)this + 0xc) | 1;
    }
    uVar3 = F_00406b90(0x120,0,0);
    if (uVar3 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = F_00b8a1b0(uVar3);
    }
    *(uint *)((int)this + 0x14) = uVar3;
  }
  piVar1 = *(int * PTR32 *)((int)this + 4);
  if (piVar1 != (int *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    if ((char)uVar3 != '\0') {
      *(uint *)((int)this + 0xc) = *(uint *)((int)this + 0xc) | 2;
    }
  }
  piVar1 = *(int * PTR32 *)((int)this + 8);
  if (piVar1 != (int *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    if ((char)uVar3 != '\0') {
      *(uint *)((int)this + 0xc) = *(uint *)((int)this + 0xc) | 4;
    }
  }
  return uVar3;
}

/* ref: FUN_006b88f0 */
unsigned int F_006b88f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b88f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 8);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 8) = 0;
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x14);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  puVar1 = *(undefined4 * PTR32 *)this;
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)this = 0;
  }
  return 0;
}

/* ref: FUN_006b8950 */
byte F_006b8950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b8950u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return (*(uint *)((*(int *)&gen_args[0]) + 0xc) & (*(uint *)&gen_args[1])) != 0;
}

/* ref: FUN_006b8990 */
uint F_006b8990(void)
{
  GEN_ENTER(0x6b8990u, 0u, 0u, 0u, 0u);
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_00406b90(0x18,0,0);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined1 *)(puVar1 + 4) = 0;
    puVar1[5] = 0;
    REFG(undefined4 * PTR32, 0x1488338) = puVar1;
    return (uint)puVar1;
  }
  REFG(undefined4 * PTR32, 0x1488338) = (undefined4 *)0x0;
  return 0;
}

/* ref: FUN_006b89d0 */
unsigned int F_006b89d0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6b89d0u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  longlong lVar1;
  float fVar2;
  int * piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  undefined4 * puVar7;
  int iVar8;
  undefined4 * puVar9;
  
  if (*param_1 != 0) {
    if (param_1[5] != 0) {
      F_00b89e70(param_1[5],param_2);
      bVar6 = F_00b8a090(param_1[5],&(*(float *)(gen_frame + 0x8)));
      if (bVar6 == 0) {
        if (*(byte *)(param_1 + 4) < 5) {
          ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x2c))((int *)*param_1,0,0);
          *(char *)(param_1 + 4) = (char)param_1[4] + '\x01';
        }
      }
      else {
        fVar2 = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0xc)))));
        (*(float *)(gen_frame + 0x18)) = fVar2;
        (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x18)) + 2)) = ((undefined2)0x27f);
        (*(float *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 4)) = gen_bits2f(((undefined2)0x27f) | 0xc00);
        (*(longlong *)(gen_frame + 0x10)) = (longlong)TRUNC((float10)fVar2);
        (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 0)) = (undefined4)(longlong)TRUNC((float10)fVar2);
        uVar4 = (undefined4)(*(longlong *)(gen_frame + 0x10));
        (*(float *)(gen_frame + 0x18)) = gen_bits2f(CONCAT22(((undefined2)0x27f),(short)(uint)gen_fl2bits(fVar2)));
        (*(float *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 4)) = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0x8)))));
        (*(float *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 4)) = gen_bits2f(((undefined2)0x27f) | 0xc00);
        lVar1 = (longlong)TRUNC((float10)((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0x8))))));
        (*(longlong *)(gen_frame + 0x10)) = lVar1;
        lVar1 = (*(longlong *)(gen_frame + 0x10));
        (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 0)) = (undefined4)lVar1;
        uVar5 = (undefined4)(*(longlong *)(gen_frame + 0x10));
        (*(longlong *)(gen_frame + 0x10)) = lVar1;
        ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x2c))((int *)*param_1,uVar5,uVar4);
        *(undefined1 *)(param_1 + 4) = 0;
      }
    }
    ((code *)*(gen_code32 *)(*(int *)*param_1 + 8))((int *)*param_1,(undefined4)gen_fl2bits(param_2));
    puVar7 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*param_1 + 0x14))((int *)*param_1)));
    puVar9 = param_3;
    for (iVar8 = 0x65; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
  }
  piVar3 = (int *)param_1[1];
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3,(undefined4)gen_fl2bits(param_2));
    puVar7 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)param_1[1] + 0x10))((int *)param_1[1])));
    puVar9 = param_4;
    for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
    ((code *)*(gen_code32 *)(*(int *)param_1[1] + 0x14))((int *)param_1[1]);
  }
  piVar3 = (int *)param_1[2];
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3,(undefined4)gen_fl2bits(param_2));
    puVar7 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)param_1[2] + 0x10))((int *)param_1[2])));
    puVar9 = param_5;
    for (iVar8 = 0x125; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
    ((code *)*(gen_code32 *)(*(int *)param_1[2] + 0x14))((int *)param_1[2],0);
  }
  return 0;
}

/* ref: FUN_006b8b20 */
unsigned int F_006b8b20(void)
{
  GEN_ENTER(0x6b8b20u, 0u, 0u, 0u, 0u);
  undefined * pvVar1;
  
  pvVar1 = REFG(void * PTR32, 0x1488338);
  if (REFG(void * PTR32, 0x1488338) != (undefined *)0x0) {
    F_006b88f0(REFG(void * PTR32, 0x1488338));
    F_00406ad0(pvVar1);
    REFG(void * PTR32, 0x1488338) = (undefined *)0x0;
  }
  return 0;
}

/* ref: FUN_006b8b50 */
uint F_006b8b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b8b50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_006b88f0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_006b8bc0 */
unsigned int F_006b8bc0(float gen_a0)
{
  GEN_ENTER(0x6b8bc0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_006b8be0 */
unsigned int F_006b8be0(float gen_a0)
{
  GEN_ENTER(0x6b8be0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_006b8c00 */
uint F_006b8c00(void)
{
  GEN_ENTER(0x6b8c00u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x1488344);
}

/* ref: FUN_006b8c30 */
byte F_006b8c30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6b8c30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  if ((param_2 & 0xffff) == 8) {
    if ((char)param_4 == '\x05') {
      F_00a50eb0(*param_3,(uint)*(ushort *)(param_3 + 1),(uint)(param_3[2] != 0),
                   (uint)*(byte *)(param_3 + 3),param_3[4]);
    }
  }
  else {
    if ((param_2 & 0xffff) != 9) {
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,param_1,param_2,param_3,param_4);
      return (char)uVar1 != '\0';
    }
    if ((char)param_4 == '\x05') {
      F_00a510e0(*param_3,(uint)*(ushort *)(param_3 + 1),(uint)(param_3[2] != 0),
                   (uint)*(byte *)(param_3 + 3),param_3[4]);
      return 1;
    }
  }
  return 1;
}

/* ref: FUN_006b8cd0 */
unsigned int F_006b8cd0(void)
{
  GEN_ENTER(0x6b8cd0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_006b8cf0 */
unsigned int F_006b8cf0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b8cf0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_006b8d00 */
uint F_006b8d00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b8d00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00b070f0();
  uVar1 = F_00b093a0(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_006b8d20 */
uint F_006b8d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b8d20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00b070f0();
  uVar1 = F_00b0a050(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_006b8d40 */
uint F_006b8d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6b8d40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00b070f0();
  uVar1 = F_00b085e0(this,param_1,param_2,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_006b8d70 */
uint F_006b8d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b8d70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00b070f0();
  uVar1 = F_00b093e0(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_006b8d90 */
uint F_006b8d90(unsigned int gen_a0)
{
  GEN_ENTER(0x6b8d90u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00b070f0();
  uVar1 = F_00b08630(this,param_1);
  return uVar1;
}

/* ref: FUN_006b8db0 */
uint F_006b8db0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b8db0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b8dce0(param_1);
  return uVar1;
}

/* ref: FUN_006b8dd0 */
uint F_006b8dd0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b8dd0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b8dd00(param_1);
  return uVar1;
}

/* ref: FUN_006b8df0 */
uint F_006b8df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b8df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (*(int *)((int)this + 0x208) == 0) {
    *(undefined4 *)((int)this + 0x208) = *(undefined4 *)(param_1 + 8);
    return (int)this + 0x1e8;
  }
  return 0;
}

/* ref: FUN_006b8e20 */
unsigned int F_006b8e20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b8e20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)((int)this + 0x1e8);
  if (this_00 == (undefined *)*param_1) {
    uVar1 = F_00a022b0(this_00);
    if (uVar1 == 0) {
      F_00a019e0(this_00,0);
    }
    else {
      F_00a02120(*(undefined * PTR32 *)((int)this + 0x1e4),this_00);
      F_00a02040(*(undefined * PTR32 *)((int)this + 0x1e4),this_00);
    }
    *(undefined4 *)((int)this + 0x208) = 0;
    *param_1 = 0;
  }
  return 0;
}

/* ref: FUN_006b8e80 */
byte F_006b8e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b8e80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (*(int *)(in_ecx + 0x720) == 0) {
    *(undefined4 *)(in_ecx + 0x720) = param_2;
    return 1;
  }
  return 0;
}

/* ref: FUN_006b8ef0 */
uint F_006b8ef0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b8ef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x720) != 0) {
    uVar1 = F_00a4a810(&REFG(undefined, 0x14a7360),*(int *)((int)this + 0x720));
    *(undefined4 *)((int)this + 0x720) = 0;
  }
  return uVar1;
}

/* ref: FUN_006b8f20 */
uint F_006b8f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b8f20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined * this;
  uint uVar2;
  
  bVar1 = F_00b070e0();
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 != 0) {
    this = (undefined *)F_00b070f0();
    uVar2 = F_00b0a830(this,param_1,param_2);
  }
  return uVar2;
}

/* ref: FUN_006b8f50 */
uint F_006b8f50(unsigned int gen_a0)
{
  GEN_ENTER(0x6b8f50u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  uint uVar2;
  float fVar3;
  
  uVar1 = REFG(undefined4, 0x1379694);
  uVar2 = param_1;
  if (REFG(undefined4, 0x1379694) != param_1) {
    fVar3 = F_00a5ffa0(REFG(undefined4, 0x1379694),param_1);
    uVar2 = F_00a9f870(uVar1,fVar3);
  }
  return uVar2;
}

/* ref: FUN_006b8f80 */
byte F_006b8f80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b8f80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  int * piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = F_00a5f380(param_2,((int *)(gen_frame + 0xc)));
  uVar4 = 0;
  if (uVar2 != 0) {
    do {
      piVar1 = (int *)((int *)(gen_frame + 0xc))[(int)(uVar4)];
      if (piVar1 != (int *)0x0) {
        uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
        if ((char)uVar3 != '\0') {
          uVar3 = ((code *)*(gen_code32 *)(*(int *)((int *)(gen_frame + 0xc))[(int)(uVar4)] + 0x224))
                            ((int *)((int *)(gen_frame + 0xc))[(int)(uVar4)],param_1,param_2,param_3);
          if ((char)uVar3 != '\0') {
            return 1;
          }
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  return 0;
}

/* ref: Client::Game::Event::ModuleBase::vf1 */
unsigned int F_006b8ff0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b8ff0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0x24) = 1;
  return 0;
}

/* ref: Client::Game::Event::ModuleBase::vf2 */
unsigned int F_006b9000(unsigned int gen_a0)
{
  GEN_ENTER(0x6b9000u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0x24) = 0;
  return 0;
}

/* ref: Client::Game::Event::ModuleBase::vf3 */
byte F_006b9010(unsigned int gen_a0)
{
  GEN_ENTER(0x6b9010u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x24);
}

/* ref: Client::Game::Event::ModuleBase::vf4 */
unsigned int F_006b9020(void)
{
  GEN_ENTER(0x6b9020u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Event::ModuleBase::vf5 */
unsigned int F_006b9030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b9030u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * piVar1;
  
  piVar1 = (int *)(in_ecx + 0x28);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined1 *)(in_ecx + 0x24) = 1;
  }
  return 0;
}

/* ref: FUN_006b9070 */
uint F_006b9070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x6b9070u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined4 *)((int)this + 0x10) = param_2;
  *(undefined4 *)((int)this + 0x1c) = param_5;
  *(undefined1 *)((int)this + 0x18) = (undefined1)param_4;
  *(undefined4 *)((int)this + 0x24) = param_7;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10b8a5c));
  *(undefined1 *)((int)this + 0x20) = (undefined1)param_6;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x2c) = 0;
  return (uint)this;
}

/* ref: FUN_006b90d0 */
uint F_006b90d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x6b90d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  uint param_7 = (uint)gen_a7;
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0x10) = param_2;
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined1 *)((int)this + 0x18) = (undefined1)param_4;
  *(undefined4 *)((int)this + 0x1c) = param_5;
  *(undefined1 *)((int)this + 0x20) = (undefined1)param_6;
  *(uint *)((int)this + 0x24) = param_7;
  return param_7;
}

/* ref: FUN_006b9110 */
byte F_006b9110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x6b9110u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int param_5 = (int)gen_a5;
  if ((((*(int *)((int)this + 8) == param_1) && (*(int *)((int)this + 0x10) == param_2)) &&
      (*(int *)((int)this + 0x14) == param_3)) &&
     ((*(char *)((int)this + 0x18) == (char)param_4 && (*(int *)((int)this + 0x1c) == param_5)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_006b9150 */
uint F_006b9150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6b9150u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  if (((*(int *)((int)this + 8) == param_1) && (*(char *)((int)this + 0x18) == (char)param_2)) &&
     (*(int *)((int)this + 0x1c) == param_3)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_006b9180 */
uint F_006b9180(unsigned int gen_a0)
{
  GEN_ENTER(0x6b9180u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 8) = 0;
  *(undefined4 *)(in_ecx + 0x10) = 0xe0000000;
  *(undefined4 *)(in_ecx + 0x14) = 0;
  *(undefined1 *)(in_ecx + 0x18) = 0;
  *(undefined4 *)(in_ecx + 0x1c) = 0;
  *(undefined1 *)(in_ecx + 0x20) = 0;
  *(undefined4 *)(in_ecx + 0x24) = 0;
  *(undefined4 *)(in_ecx + 0x28) = 0;
  *(undefined1 *)(in_ecx + 0x2c) = 0;
  return 0;
}

/* ref: FUN_006b91f0 */
byte F_006b91f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b91f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x20) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_006b9210 */
uint F_006b9210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b9210u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x28) = param_2;
  return param_2;
}

/* ref: FUN_006b92d0 */
byte F_006b92d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x6b92d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int param_5 = (int)gen_a5;
  int param_6 = (int)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  byte bVar1;
  ushort uVar2;
  undefined * pvVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = param_1;
  if (((char)param_2 != '\0') && (param_1 < 1000000)) {
    uVar5 = param_1 + 1000000;
  }
  if (*(char *)((int)this + 6) == '\0') {
    uVar4 = *(uint *)((int)this + 8);
    if ((*(byte *)((int)this + 0x14) & 1) != 0) {
      uVar4 = uVar4 + 1000000;
    }
  }
  else {
    pvVar3 = (undefined *)F_00a3a860(this);
    uVar4 = F_0046e5e0(pvVar3);
  }
  if ((((uVar4 == uVar5) && (*(char *)((int)this + 0x48) == (char)param_3)) &&
      (*(char *)((int)this + 0x49) == (char)param_4)) &&
     (*(char *)((int)this + 0x40) == (char)param_7)) {
    uVar5 = 0;
    while( true ) {
      if ((*(char *)((int)this + 6) == '\0') || (uVar4 = F_00a3a860(this), uVar4 == 0)) {
        uVar2 = *((ushort *)GEN_TOP(((int)this + (uVar5 & 0xff) * 2 + 0x20)));
      }
      else {
        uVar4 = uVar5;
        pvVar3 = (undefined *)F_00a3a860(this);
        uVar2 = F_0071d2c0(pvVar3,uVar4);
      }
      if (uVar2 != *(ushort *)(param_5 + uVar5 * 2)) break;
      if ((*(char *)((int)this + 6) == '\0') || (uVar4 = F_00a3a860(this), uVar4 == 0)) {
        bVar1 = *((byte *)GEN_TOP(((uVar5 & 0xff) + 0x2a + (int)this)));
      }
      else {
        uVar4 = uVar5;
        pvVar3 = (undefined *)F_00a3a860(this);
        bVar1 = F_0071d300(pvVar3,uVar4);
      }
      if (bVar1 != *(byte *)(uVar5 + param_6)) {
        return 0;
      }
      uVar5 = uVar5 + 1;
      if (4 < uVar5) {
        return 1;
      }
    }
    return 0;
  }
  return 0;
}

/* ref: FUN_006b93e0 */
byte F_006b93e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b93e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    cVar1 = (char)iVar2 + '\x01' + *(char *)((int)this + 0x40);
    if ('\x0f' < cVar1) {
      cVar1 = cVar1 + -0x10;
    }
    if (*(int *)((int)this + cVar1 * 4) == 0) break;
    iVar2 = iVar2 + 1;
    if (0xf < iVar2) {
      return 0;
    }
  }
  *(undefined4 *)((int)this + cVar1 * 4) = param_1;
  if (cVar1 < '\0') {
    return 0;
  }
  if (*(char *)((int)this + 0x40) < '\0') {
    *(char *)((int)this + 0x40) = cVar1;
  }
  return 1;
}

/* ref: FUN_006b9490 */
uint F_006b9490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b9490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined8 uVar5;
  
  *(undefined4 *)((int)this + 0x14) = param_1;
  uVar5 = ((gen_lcode *)*(gen_code32 *)*param_2)(param_2);
  *(undefined8 *)this = uVar5;
  *(uint *)((int)this + 8) = (uint)*(ushort *)(param_2 + 0x22);
  puVar4 = (undefined4 *)F_00a5feb0(param_2);
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  *(undefined4 *)((int)this + 0x58) = *puVar4;
  *(undefined4 *)((int)this + 0x5c) = uVar1;
  *(undefined4 *)((int)this + 0x60) = uVar2;
  *(undefined4 *)((int)this + 100) = param_2[0x2c];
  *(undefined4 *)((int)this + 0x68) = param_2[0x145];
  *(byte *)((int)this + 0x7d) = *(byte *)((int)param_2 + 0x2dd2) >> 2 & 1;
  *(undefined4 *)((int)this + 0x18) = param_2[0x5ac];
  *(undefined4 *)((int)this + 0x1c) = param_2[0x5ad];
  *(undefined4 *)((int)this + 0x20) = param_2[0x794];
  *(undefined4 *)((int)this + 0x24) = param_2[0x795];
  *(undefined4 *)((int)this + 0x28) = param_2[0x97c];
  *(undefined4 *)((int)this + 0x2c) = param_2[0x97d];
  *(undefined4 *)((int)this + 0x30) = param_2[0xb64];
  *(undefined4 *)((int)this + 0x34) = param_2[0xb65];
  *(undefined4 *)((int)this + 0x38) = param_2[0xb66];
  *(undefined4 *)((int)this + 0x3c) = param_2[0xb67];
  *(undefined4 *)((int)this + 0x40) = param_2[0xb68];
  *(undefined4 *)((int)this + 0x44) = param_2[0xb69];
  *(undefined4 *)((int)this + 0x48) = param_2[0xb6a];
  *(undefined4 *)((int)this + 0x4c) = param_2[0xb6b];
  uVar3 = param_2[0xb6c];
  *(uint *)((int)this + 0x50) = uVar3;
  *(undefined4 *)((int)this + 0x54) = param_2[0xb6d];
  return uVar3;
}

/* ref: FUN_006b95a0 */
uint F_006b95a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b95a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  undefined8 uVar4;
  
  *(undefined4 *)((int)this + 0x14) = param_1;
  uVar4 = ((gen_lcode *)*(gen_code32 *)*param_2)(param_2);
  *(undefined8 *)this = uVar4;
  *(uint *)((int)this + 8) = (uint)*(ushort *)(param_2 + 0x22);
  puVar3 = (undefined4 *)F_00a5feb0(param_2);
  uVar1 = puVar3[1];
  uVar2 = puVar3[2];
  *(undefined4 *)((int)this + 0x58) = *puVar3;
  *(undefined4 *)((int)this + 0x5c) = uVar1;
  *(undefined4 *)((int)this + 0x60) = uVar2;
  *(undefined4 *)((int)this + 100) = param_2[0x2c];
  *(uint *)((int)this + 0x6c) = (uint)*(ushort *)((int)param_2 + 0x18a);
  return (uint)puVar3;
}

/* ref: FUN_006b9610 */
unsigned int F_006b9610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b9610u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if ((char)param_3 != '\0') {
    *(undefined1 *)(in_ecx + 0xd4) = 1;
  }
  return 0;
}

/* ref: FUN_006b9670 */
uint F_006b9670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b9670u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00aa02d0(param_1,param_2,0);
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  uVar1 = F_00aa01d0(param_1,param_2,0);
  return CONCAT31((int3)(uVar1 >> 8),1);
}

/* ref: FUN_006b96b0 */
uint F_006b96b0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b96b0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x140];
  float fVar1;
  float * pfVar2;
  int * piVar3;
  uint uVar4;
  float10 fVar5;
  float fVar6;
  
  (*(uint *)(gen_frame + 0x12c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x130);
  fVar6 = *(float *)((int)param_1 + 0xb0);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(float *)(gen_frame + 0x54)) = fVar6;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = REFG(float, 0x1087f04);
  fVar5 = ((float10)GEN_TOD(fsin((float10)fVar6)));
  fVar1 = (float)fVar5;
  (*(float *)(gen_frame + 0x58)) = fVar1;
  (*(float *)(gen_frame + 0x5c)) = fVar1;
  fVar5 = ((float10)GEN_TOD(fcos((float10)fVar6)));
  fVar6 = (float)fVar5;
  (*(float *)(gen_frame + 0x58)) = fVar6;
  ((float *)(gen_frame + 0xa0))[0] = fVar6;
  ((float *)(gen_frame + 0xa0))[2] = ((float)GEN_TOF(-(float10)fVar1));
  ((float *)(gen_frame + 0xa0))[1] = 0.0;
  (*(float *)(gen_frame + 0xc0)) = fVar1;
  (*(undefined4 *)(gen_frame + 0xb0)) = 0;
  (*(undefined4 *)(gen_frame + 0xb4)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0xc8)) = fVar6;
  (*(undefined4 *)(gen_frame + 0xb8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc4)) = 0;
  (*(undefined4 *)(gen_frame + 0xd0)) = 0;
  (*(undefined4 *)(gen_frame + 0xd4)) = 0;
  (*(undefined4 *)(gen_frame + 0xd8)) = 0;
  pfVar2 = (float *)F_004ee670(&(*(float *)(gen_frame + 0x10)),(uint)&(*(undefined4 *)(gen_frame + 0x0)),(uint)((float *)(gen_frame + 0xa0)));
  (*(float *)(gen_frame + 0x30)) = *pfVar2;
  (*(float *)(gen_frame + 0x34)) = pfVar2[1];
  (*(float *)(gen_frame + 0x38)) = pfVar2[2];
  fVar5 = ((float10)GEN_TOD(fsin((float10)param_2)));
  fVar6 = (float)fVar5;
  (*(float *)(gen_frame + 0x5c)) = fVar6;
  (*(float *)(gen_frame + 0x58)) = fVar6;
  fVar5 = ((float10)GEN_TOD(fcos((float10)param_2)));
  fVar1 = (float)fVar5;
  (*(float *)(gen_frame + 0x5c)) = fVar1;
  ((float *)(gen_frame + 0xe0))[0] = fVar1;
  ((float *)(gen_frame + 0xe0))[1] = 0.0;
  (*(undefined4 *)(gen_frame + 0xf0)) = 0;
  (*(undefined4 *)(gen_frame + 0xf4)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0xf8)) = 0;
  ((float *)(gen_frame + 0xe0))[2] = ((float)GEN_TOF(-(float10)fVar6));
  (*(undefined4 *)(gen_frame + 0x104)) = 0;
  (*(undefined4 *)(gen_frame + 0x110)) = 0;
  (*(float *)(gen_frame + 0x100)) = fVar6;
  (*(undefined4 *)(gen_frame + 0x114)) = 0;
  (*(undefined4 *)(gen_frame + 0x118)) = 0;
  (*(float *)(gen_frame + 0x108)) = fVar1;
  pfVar2 = (float *)F_004ee670(&(*(float *)(gen_frame + 0x10)),(uint)&(*(float *)(gen_frame + 0x30)),(uint)((float *)(gen_frame + 0xe0)));
  fVar6 = *pfVar2;
  (*(float *)(gen_frame + 0x40)) = fVar6;
  (*(float *)(gen_frame + 0x44)) = pfVar2[1];
  (*(float *)(gen_frame + 0x48)) = pfVar2[2];
  fVar6 = ((float)GEN_TOF(((float10)pfVar2[2] * (float10)(*(float *)(gen_frame + 0x38)) +
                 ((float10)fVar6 * (float10)(*(float *)(gen_frame + 0x30)) + (float10)pfVar2[1] * (float10)(*(float *)(gen_frame + 0x34))))));
  (*(float *)(gen_frame + 0x5c)) = fVar6;
  if (((float10)REFG(float, 0x1088068) < (float10)fVar6) && ((char)param_3 != '\0')) {
    piVar3 = (int *)F_00a5f8a0(param_1);
    ((code *)*(gen_code32 *)(*piVar3 + 0x40))(piVar3,((undefined1 *)(gen_frame + 0x60)),1);
    (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(float *)(gen_frame + 0x90)) + (float10)(*(float *)(gen_frame + 0x40)));
    (*(float *)(gen_frame + 0x24)) = (float)((float10)(*(float *)(gen_frame + 0x94)) + (float10)(*(float *)(gen_frame + 0x44)));
    (*(float *)(gen_frame + 0x28)) = (float)((float10)(*(float *)(gen_frame + 0x98)) + (float10)(*(float *)(gen_frame + 0x48)));
    (*(float *)(gen_frame + 0x10)) = (float)((float10)(*(float *)(gen_frame + 0x90)) + (float10)(*(float *)(gen_frame + 0x40)));
    (*(float *)(gen_frame + 0x14)) = (float)((float10)(*(float *)(gen_frame + 0x94)) + (float10)(*(float *)(gen_frame + 0x44)));
    (*(float *)(gen_frame + 0x18)) = (float)((float10)(*(float *)(gen_frame + 0x98)) + (float10)(*(float *)(gen_frame + 0x48)));
    F_00aa3410(param_1,0xffffffff);
    uVar4 = F_00aa52e0(param_1,&(*(float *)(gen_frame + 0x10)),0xffffffff,0);
    F_00c47745((*(uint *)(gen_frame + 0x12c)) ^ (uint)(uint)(gen_frame + 0x130));
    return uVar4;
  }
  fVar6 = F_00aae7a0(&(*(float *)(gen_frame + 0x40)),&(*(undefined4 *)(gen_frame + 0x0)));
  (*(float *)(gen_frame + 0x5c)) = fVar6;
  uVar4 = F_00aa0000(param_1,0x30f,&(*(float *)(gen_frame + 0x5c)),0,0,0);
  F_00c47745((*(uint *)(gen_frame + 0x12c)) ^ (uint)(uint)(gen_frame + 0x130));
  return uVar4;
}

/* ref: FUN_006b99d0 */
uint F_006b99d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b99d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00aa0560(param_1,param_2);
  return uVar1;
}

/* ref: FUN_006b99f0 */
uint F_006b99f0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x6b99f0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  uint uVar1;
  
  uVar1 = F_00aa5250(param_1,param_2,param_3,param_4,0xffffffff,0);
  return uVar1;
}

/* ref: FUN_006b9a20 */
uint F_006b9a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b9a20u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  if ((char)param_2 != '\0') {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x24))(param_1,2,0);
    return uVar1;
  }
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x28))(param_1,2,0);
  return uVar1;
}

/* ref: FUN_006b9a50 */
uint F_006b9a50(unsigned int gen_a0)
{
  GEN_ENTER(0x6b9a50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00ab6c00(param_1,0,0,0,0,0);
  return uVar1;
}

/* ref: FUN_006b9a70 */
byte F_006b9a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b9a70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_006b93e0((undefined *)((int)this + 0x70),param_1);
  return bVar1;
}

/* ref: FUN_006b9a80 */
unsigned int F_006b9a80(float gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b9a80u, gen_trace_f(gen_a0), gen_a1, 0u, 0u);
  float param_1 = (float)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  F_00ab05d0(param_1,param_2);
  return 0;
}

/* ref: FUN_006b9b00 */
uint F_006b9b00(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x6b9b00u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  uint uVar1;
  
  uVar1 = F_00aa0980(param_1,(float)((float10)1 - (float10)param_2),0);
  *(uint *)(param_1 + 0x2ec8) = (uint)gen_fl2bits(param_3) ^ REFG(uint, 0x10920d0);
  return uVar1;
}

/* ref: FUN_006b9b40 */
uint F_006b9b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b9b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00aa6f20(param_1,param_2,1);
  return uVar1;
}

/* ref: FUN_006b9b60 */
uint F_006b9b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b9b60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  if ((char)param_2 != '\0') {
    uVar1 = F_00aa05d0(param_1,0);
    return uVar1;
  }
  uVar1 = F_00aa0600(param_1,0);
  return uVar1;
}

/* ref: FUN_006b9bb0 */
uint F_006b9bb0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b9bb0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = 0x1d;
  if ((short)param_1 == 1) {
    return 0x34;
  }
  if (((short)param_1 == 2) || ((short)param_1 == 1000)) {
    uVar1 = 0x35;
  }
  else {
    if ((short)param_1 == 3) {
      return 0x36;
    }
    if ((short)param_1 == 4) {
      return 0x37;
    }
  }
  return uVar1;
}

/* ref: FUN_006b9c10 */
float F_006b9c10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6b9c10u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  undefined1 gen_out[0x34];
  float fVar1;
  uint uVar2;
  float * pfVar3;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_out + 0x30);
  local_8 = uVar2;
  local_30 = 0;
  local_2c = 2;
  local_28 = 4;
  local_24 = 6;
  local_20 = 8;
  local_1c = 1;
  local_18 = 3;
  local_14 = 5;
  local_10 = 7;
  local_c = 9;
  if (4 < param_1 - 1U) {
    F_00c47745(uVar2 ^ (uint)(uint)(gen_out + 0x30));
    return (float)(float10)0;
  }
  if ((4 < param_3 - 1U) || ((param_2 != 0 && (param_2 != 1)))) {
    F_00c47745(uVar2 ^ (uint)(uint)(gen_out + 0x30));
    return (float)(float10)0;
  }
  if ((param_4 == 0) || (param_4 == 1)) {
    pfVar3 = (float *)F_00ab37b0(*((undefined4 *)GEN_TOP(((gen_out + 0x0) + param_1 * 4 + param_2 * 0x14))))
    ;
    if (pfVar3 != (float *)0x0) {
      if (param_4 == 0) {
        if (param_3 == 1) {
          fVar1 = *pfVar3;
          F_00c47745(local_8 ^ (uint)(uint)(gen_out + 0x30));
          return fVar1;
        }
        if (param_3 == 2) {
          fVar1 = pfVar3[2];
          F_00c47745(local_8 ^ (uint)(uint)(gen_out + 0x30));
          return fVar1;
        }
        if (param_3 == 3) {
          fVar1 = pfVar3[4];
          F_00c47745(local_8 ^ (uint)(uint)(gen_out + 0x30));
          return fVar1;
        }
        if (param_3 == 4) {
          fVar1 = pfVar3[6];
          F_00c47745(local_8 ^ (uint)(uint)(gen_out + 0x30));
          return fVar1;
        }
        if (param_3 == 5) {
          fVar1 = pfVar3[8];
          F_00c47745(local_8 ^ (uint)(uint)(gen_out + 0x30));
          return fVar1;
        }
      }
      else if (param_4 == 1) {
        if (param_3 == 1) {
          fVar1 = pfVar3[1];
          F_00c47745(local_8 ^ (uint)(uint)(gen_out + 0x30));
          return fVar1;
        }
        if (param_3 == 2) {
          fVar1 = pfVar3[3];
          F_00c47745(local_8 ^ (uint)(uint)(gen_out + 0x30));
          return fVar1;
        }
        if (param_3 == 3) {
          fVar1 = pfVar3[5];
          F_00c47745(local_8 ^ (uint)(uint)(gen_out + 0x30));
          return fVar1;
        }
        if (param_3 == 4) {
          fVar1 = pfVar3[7];
          F_00c47745(local_8 ^ (uint)(uint)(gen_out + 0x30));
          return fVar1;
        }
        if (param_3 == 5) {
          fVar1 = pfVar3[9];
          F_00c47745(local_8 ^ (uint)(uint)(gen_out + 0x30));
          return fVar1;
        }
      }
    }
  }
  F_00c47745(local_8 ^ (uint)(uint)(gen_out + 0x30));
  return (float)(float10)0;
}

/* ref: FUN_006b9e30 */
uint F_006b9e30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b9e30u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a7d830(param_1 & 0xff,param_2);
  return uVar1;
}

/* ref: FUN_006b9e60 */
uint F_006b9e60(unsigned int gen_a0)
{
  GEN_ENTER(0x6b9e60u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 4))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006b9e80 */
uint F_006b9e80(unsigned int gen_a0)
{
  GEN_ENTER(0x6b9e80u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006b9ea0 */
uint F_006b9ea0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b9ea0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xc))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006b9ec0 */
uint F_006b9ec0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b9ec0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x10))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006b9ee0 */
uint F_006b9ee0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b9ee0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x14))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006b9f00 */
uint F_006b9f00(unsigned int gen_a0)
{
  GEN_ENTER(0x6b9f00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x18))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006b9f20 */
uint F_006b9f20(unsigned int gen_a0)
{
  GEN_ENTER(0x6b9f20u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x1c))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006b9f40 */
uint F_006b9f40(unsigned int gen_a0)
{
  GEN_ENTER(0x6b9f40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x20))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006b9f60 */
uint F_006b9f60(unsigned int gen_a0)
{
  GEN_ENTER(0x6b9f60u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x24))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006b9f80 */
uint F_006b9f80(unsigned int gen_a0)
{
  GEN_ENTER(0x6b9f80u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x28))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006b9fa0 */
uint F_006b9fa0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b9fa0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x2c))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006b9fc0 */
uint F_006b9fc0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b9fc0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x30))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006b9fe0 */
uint F_006b9fe0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b9fe0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x34))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba000 */
uint F_006ba000(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba000u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x38))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba020 */
uint F_006ba020(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba020u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xd4))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba040 */
uint F_006ba040(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba040u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xd8))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba060 */
uint F_006ba060(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba060u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xdc))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba080 */
uint F_006ba080(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba080u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xe0))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba0a0 */
uint F_006ba0a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba0a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x3c))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba0c0 */
uint F_006ba0c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba0c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x40))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba0e0 */
uint F_006ba0e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba0e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xd0))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba100 */
uint F_006ba100(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba100u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x44))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba120 */
uint F_006ba120(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba120u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x48))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba140 */
uint F_006ba140(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba140u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x4c))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba160 */
uint F_006ba160(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba160u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x50))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba180 */
uint F_006ba180(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba180u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x54))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba1a0 */
uint F_006ba1a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba1a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x58))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba1c0 */
uint F_006ba1c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba1c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x5c))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba1e0 */
uint F_006ba1e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba1e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x60))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba200 */
uint F_006ba200(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba200u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 100))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba220 */
uint F_006ba220(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba220u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x68))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba240 */
uint F_006ba240(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba240u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x6c))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba260 */
uint F_006ba260(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba260u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x70))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba280 */
uint F_006ba280(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba280u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x74))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba2a0 */
uint F_006ba2a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba2a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x78))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba2c0 */
uint F_006ba2c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba2c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x7c))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba2e0 */
uint F_006ba2e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba2e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x80))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba300 */
uint F_006ba300(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba300u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x84))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba320 */
uint F_006ba320(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba320u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x88))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba340 */
uint F_006ba340(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba340u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x8c))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba360 */
uint F_006ba360(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba360u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x90))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba380 */
uint F_006ba380(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba380u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x94))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba3a0 */
uint F_006ba3a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba3a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x98))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba3c0 */
uint F_006ba3c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba3c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x9c))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba3e0 */
uint F_006ba3e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba3e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xa0))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba400 */
uint F_006ba400(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba400u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xa4))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba420 */
uint F_006ba420(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba420u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xa8))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba440 */
uint F_006ba440(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba440u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xac))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba460 */
uint F_006ba460(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba460u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xb0))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba480 */
uint F_006ba480(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba480u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xb4))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba4a0 */
uint F_006ba4a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba4a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xb8))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba4c0 */
uint F_006ba4c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba4c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xbc))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba4e0 */
uint F_006ba4e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba4e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xc0))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba500 */
uint F_006ba500(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba500u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xc4))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba520 */
uint F_006ba520(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba520u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 200))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba540 */
uint F_006ba540(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba540u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xcc))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba560 */
uint F_006ba560(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba560u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xe4))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf3 */
uint F_006ba580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ba580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf7 */
uint F_006ba590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ba590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf8 */
uint F_006ba5a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ba5a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf9 */
uint F_006ba5b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ba5b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf10 */
uint F_006ba5c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ba5c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf11 */
uint F_006ba5d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ba5d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf12 */
uint F_006ba5e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ba5e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf13 */
uint F_006ba5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ba5f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf15 */
uint F_006ba600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ba600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf45 */
uint F_006ba610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ba610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf17 */
uint F_006ba620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ba620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf18 */
uint F_006ba630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ba630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_006ba640 */
uint F_006ba640(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba640u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  int iVar2;
  
  ((uint *)(gen_frame + 0xc))[3] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  if ((param_1 < 0) || (iVar2 = param_1, 2 < param_1)) {
    iVar2 = 0;
  }
  ((uint *)(gen_frame + 0xc))[0] = 0x3c;
  ((uint *)(gen_frame + 0xc))[1] = 0x1e;
  ((uint *)(gen_frame + 0xc))[2] = 0x5a;
  uVar1 = ((uint *)(gen_frame + 0xc))[(int)(iVar2)];
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar1;
}

/* ref: FUN_006ba6b0 */
uint F_006ba6b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba6b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xe8))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba6d0 */
uint F_006ba6d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba6d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xec))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba6f0 */
uint F_006ba6f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba6f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xf0))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba710 */
uint F_006ba710(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba710u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xf4))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba730 */
uint F_006ba730(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba730u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xf8))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba750 */
uint F_006ba750(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba750u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0xfc))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba770 */
uint F_006ba770(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba770u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x100))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba790 */
uint F_006ba790(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba790u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x104))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba7b0 */
uint F_006ba7b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba7b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x108))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba7d0 */
uint F_006ba7d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba7d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x10c))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba7f0 */
uint F_006ba7f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba7f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x110))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba810 */
uint F_006ba810(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba810u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x114))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba830 */
uint F_006ba830(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba830u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x118))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba850 */
uint F_006ba850(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba850u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x11c))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba870 */
uint F_006ba870(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba870u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x120))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba890 */
uint F_006ba890(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba890u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x124))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba8b0 */
uint F_006ba8b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba8b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x1a0))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba8d0 */
uint F_006ba8d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba8d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x1a4))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba8f0 */
uint F_006ba8f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba8f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x1a8))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba910 */
uint F_006ba910(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba910u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x128))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba930 */
uint F_006ba930(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba930u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 300))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba950 */
uint F_006ba950(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba950u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x130))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba970 */
uint F_006ba970(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba970u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x134))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba990 */
uint F_006ba990(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba990u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x138))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba9b0 */
uint F_006ba9b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba9b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x13c))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba9d0 */
uint F_006ba9d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba9d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x140))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006ba9f0 */
uint F_006ba9f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ba9f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x144))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006baa10 */
uint F_006baa10(unsigned int gen_a0)
{
  GEN_ENTER(0x6baa10u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x148))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006baa30 */
uint F_006baa30(unsigned int gen_a0)
{
  GEN_ENTER(0x6baa30u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x14c))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006baa50 */
uint F_006baa50(unsigned int gen_a0)
{
  GEN_ENTER(0x6baa50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x150))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006baa70 */
uint F_006baa70(unsigned int gen_a0)
{
  GEN_ENTER(0x6baa70u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x154))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006baa90 */
uint F_006baa90(unsigned int gen_a0)
{
  GEN_ENTER(0x6baa90u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x158))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006baab0 */
uint F_006baab0(unsigned int gen_a0)
{
  GEN_ENTER(0x6baab0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x15c))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006baad0 */
uint F_006baad0(unsigned int gen_a0)
{
  GEN_ENTER(0x6baad0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x160))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006baaf0 */
uint F_006baaf0(unsigned int gen_a0)
{
  GEN_ENTER(0x6baaf0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x164))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bab10 */
uint F_006bab10(unsigned int gen_a0)
{
  GEN_ENTER(0x6bab10u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x168))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bab30 */
uint F_006bab30(unsigned int gen_a0)
{
  GEN_ENTER(0x6bab30u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x16c))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bab50 */
uint F_006bab50(unsigned int gen_a0)
{
  GEN_ENTER(0x6bab50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x170))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bab70 */
uint F_006bab70(unsigned int gen_a0)
{
  GEN_ENTER(0x6bab70u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x174))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bab90 */
uint F_006bab90(unsigned int gen_a0)
{
  GEN_ENTER(0x6bab90u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x178))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006babb0 */
uint F_006babb0(unsigned int gen_a0)
{
  GEN_ENTER(0x6babb0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x17c))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006babd0 */
uint F_006babd0(unsigned int gen_a0)
{
  GEN_ENTER(0x6babd0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x180))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006babf0 */
uint F_006babf0(unsigned int gen_a0)
{
  GEN_ENTER(0x6babf0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x184))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bac10 */
uint F_006bac10(unsigned int gen_a0)
{
  GEN_ENTER(0x6bac10u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x188))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bac30 */
uint F_006bac30(unsigned int gen_a0)
{
  GEN_ENTER(0x6bac30u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x18c))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bac50 */
uint F_006bac50(unsigned int gen_a0)
{
  GEN_ENTER(0x6bac50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 400))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bac70 */
uint F_006bac70(unsigned int gen_a0)
{
  GEN_ENTER(0x6bac70u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x194))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bac90 */
uint F_006bac90(unsigned int gen_a0)
{
  GEN_ENTER(0x6bac90u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x198))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bacb0 */
uint F_006bacb0(unsigned int gen_a0)
{
  GEN_ENTER(0x6bacb0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x19c))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf84 */
uint F_006bacd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bacd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  
  F_00a02210(((undefined1 *)(gen_frame + 0xc)),param_1);
  F_00b6b910(&REFG(undefined, 0x1375b9c),2,REFG(float, 0x1094884),(float)(float10)0,1);
  F_00a02240(((undefined1 *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf85 */
uint F_006bad20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bad20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  
  F_00a02210(((undefined1 *)(gen_frame + 0xc)),param_1);
  F_00b6b970(&REFG(undefined, 0x1375b9c),(float)(float10)0,2);
  F_00a02240(((undefined1 *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf96 */
uint F_006bad60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bad60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf99 */
uint F_006bad70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bad70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  F_00a02210(((undefined1 *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00ab4c70();
  F_00ab6c00(uVar1,0,0,0,0,0);
  *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0xd0))) = 1;
  F_00a02240(((undefined1 *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf100 */
uint F_006badc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6badc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ab6d30();
  F_00ab6e30();
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf106 */
uint F_006badd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6badd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  
  F_00a02210(((undefined1 *)(gen_frame + 0xc)),param_2);
  *((undefined1 *)GEN_TOP((*(int *)(in_ecx + 4) + 0xd3))) = 1;
  F_00a02240(((undefined1 *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf88 */
uint F_006bae00(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6bae00u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float param_1 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float10 fVar1;
  float fVar2;
  
  F_00a02210(((undefined1 *)(gen_frame + 0xc)),(undefined4)gen_fl2bits(param_1));
  fVar1 = F_00a01dd0(((undefined1 *)(gen_frame + 0xc)),2);
  param_1 = (float)fVar1;
  if ((float10)param_1 < (float10)0) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = REFG(float, 0x1087f04);
    if (!(REFG(float, 0x1087f04) < param_1)) goto LAB_006bae46;
  }
  param_1 = fVar2;
LAB_006bae46: ;
  F_00ab05d0(param_1,1000);
  F_00a02240(((undefined1 *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf92 */
uint F_006bae70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bae70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(char *)(REFG(int, 0x1488344) + 0x724) == '\0') {
    *(undefined1 *)(REFG(int, 0x1488344) + 0x724) = 1;
  }
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf64 */
uint F_006bae90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bae90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf65 */
uint F_006baea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6baea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf74 */
uint F_006baeb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6baeb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf75 */
uint F_006baec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6baec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf77 */
uint F_006baed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6baed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf80 */
uint F_006baee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6baee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf88 */
uint F_006baef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6baef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_006baf20 */
uint F_006baf20(unsigned int gen_a0)
{
  GEN_ENTER(0x6baf20u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x1ac))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006baf40 */
uint F_006baf40(unsigned int gen_a0)
{
  GEN_ENTER(0x6baf40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x1b0))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006baf60 */
uint F_006baf60(unsigned int gen_a0)
{
  GEN_ENTER(0x6baf60u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x1b4))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006baf80 */
uint F_006baf80(unsigned int gen_a0)
{
  GEN_ENTER(0x6baf80u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x1b8))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bafa0 */
uint F_006bafa0(unsigned int gen_a0)
{
  GEN_ENTER(0x6bafa0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x1bc))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bafc0 */
uint F_006bafc0(unsigned int gen_a0)
{
  GEN_ENTER(0x6bafc0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x1c0))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bafe0 */
uint F_006bafe0(unsigned int gen_a0)
{
  GEN_ENTER(0x6bafe0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x1c4))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bb000 */
uint F_006bb000(unsigned int gen_a0)
{
  GEN_ENTER(0x6bb000u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x1c8))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bb020 */
uint F_006bb020(unsigned int gen_a0)
{
  GEN_ENTER(0x6bb020u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x1cc))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bb040 */
uint F_006bb040(unsigned int gen_a0)
{
  GEN_ENTER(0x6bb040u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x1d0))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bb060 */
uint F_006bb060(unsigned int gen_a0)
{
  GEN_ENTER(0x6bb060u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x1d4))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bb080 */
uint F_006bb080(unsigned int gen_a0)
{
  GEN_ENTER(0x6bb080u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x1d8))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bb0a0 */
uint F_006bb0a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6bb0a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x1dc))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bb0c0 */
uint F_006bb0c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6bb0c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x1e0))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bb0e0 */
uint F_006bb0e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6bb0e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x1e4))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bb100 */
uint F_006bb100(unsigned int gen_a0)
{
  GEN_ENTER(0x6bb100u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x1e8))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bb120 */
uint F_006bb120(unsigned int gen_a0)
{
  GEN_ENTER(0x6bb120u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x1ec))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bb140 */
uint F_006bb140(unsigned int gen_a0)
{
  GEN_ENTER(0x6bb140u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x1f0))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bb160 */
uint F_006bb160(unsigned int gen_a0)
{
  GEN_ENTER(0x6bb160u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 500))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bb180 */
uint F_006bb180(unsigned int gen_a0)
{
  GEN_ENTER(0x6bb180u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x1f8))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bb1a0 */
uint F_006bb1a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6bb1a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x1fc))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bb1c0 */
uint F_006bb1c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6bb1c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x200))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bb1e0 */
uint F_006bb1e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6bb1e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x204))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bb200 */
uint F_006bb200(unsigned int gen_a0)
{
  GEN_ENTER(0x6bb200u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x208))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bb220 */
uint F_006bb220(unsigned int gen_a0)
{
  GEN_ENTER(0x6bb220u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x20c))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bb240 */
uint F_006bb240(unsigned int gen_a0)
{
  GEN_ENTER(0x6bb240u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x210))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bb260 */
uint F_006bb260(unsigned int gen_a0)
{
  GEN_ENTER(0x6bb260u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x214))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bb280 */
uint F_006bb280(unsigned int gen_a0)
{
  GEN_ENTER(0x6bb280u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x218))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf116 */
uint F_006bb2a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bb2a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf119 */
uint F_006bb2b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bb2b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf121 */
uint F_006bb2c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bb2c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf126 */
uint F_006bb2d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bb2d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf128 */
uint F_006bb2e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bb2e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleSkipImpl::vf129 */
uint F_006bb2f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bb2f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_006bb320 */
uint F_006bb320(unsigned int gen_a0)
{
  GEN_ENTER(0x6bb320u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1488344) + 0x110) + 0x21c))))
                    (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x110),param_1);
  return uVar1;
}

/* ref: FUN_006bb340 */
uint F_006bb340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6bb340u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b8b94));
  F_0071edf0((undefined *)((int)this + 8));
  *(undefined4 *)((int)this + 0x94) = param_2;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0x98) = param_3;
  *(undefined4 *)((int)this + 0x9c) = param_1;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined2 *)((int)this + 0xbc) = 1;
  return (uint)this;
}

/* ref: FUN_006bb3a0 */
uint F_006bb3a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, unsigned int gen_a5, float gen_a6)
{
  GEN_ENTER(0x6bb3a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  float param_5 = (float)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  float param_7 = (float)gen_a6;
  *param_1 = (*(undefined * PTR32 (*)[6])REFP(0x10b8b94));
  F_0071edf0(param_1 + 2);
  param_1[0x25] = param_3;
  param_1[0x27] = param_2;
  param_1[0x24] = 0;
  param_1[0x26] = 0;
  param_1[0x28] = *param_4;
  param_1[0x29] = param_4[1];
  param_1[0x2a] = param_4[2];
  param_1[0x2c] = (undefined4)gen_fl2bits(param_5);
  param_1[0x2d] = param_6;
  param_1[0x2e] = (undefined4)gen_fl2bits(param_7);
  *(undefined2 *)(param_1 + 0x2f) = 0;
  return (uint)param_1;
}

/* ref: FUN_006bb440 */
uint F_006bb440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bb440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __time64_t _Var1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b8bb0));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = param_1;
  _Var1 = F_00c4b7c2((__time64_t *)0x0);
  *(__time64_t *)((int)this + 0x10) = _Var1;
  return (uint)this;
}

/* ref: Client::Game::Event::BindCharacterByEntityIdTask::vf1 */
uint F_006bb480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bb480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte * pbVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  __time64_t _Var6;
  
  if (*(int *)(this + 4) == 0) {
    uVar4 = F_00a64450(&REFG(undefined, 0x14a9a18),*(undefined4 *)(this + 8));
    *(uint *)(this + 4) = uVar4;
    if (uVar4 != 0) {
      *(byte *)(uVar4 + 0x2dd3) = *(byte *)(uVar4 + 0x2dd3) | 4;
    }
  }
  piVar2 = *(int * PTR32 *)(this + 4);
  if (piVar2 == (int *)0x0) {
    _Var6 = F_00c4b7c2((__time64_t *)0x0);
    iVar5 = (int)((ulonglong)_Var6 >> 0x20);
    uVar4 = (uint)((uint)_Var6 < *(uint *)(this + 0x10));
    uVar3 = iVar5 - *(int *)(this + 0x14);
    if ((-1 < (int)(uVar3 - uVar4)) &&
       ((uVar3 != uVar4 && SBORROW4(iVar5,*(int *)(this + 0x14)) == SBORROW4(uVar3,uVar4) ||
        (0xe < (uint)_Var6 - *(uint *)(this + 0x10))))) {
      if (*(int *)(this + 4) != 0) {
        pbVar1 = ((byte *)GEN_TOP((*(int *)(this + 4) + 0x2dd3)));
        *pbVar1 = *pbVar1 & 0xfb;
        *(undefined4 *)(this + 4) = 0;
      }
      return 1;
    }
  }
  else {
    uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x70))(piVar2);
    if (((char)uVar4 != '\0') &&
       (uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x68))))(*(int * PTR32 *)(this + 4)), (char)uVar4 != '\0'
       )) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_006bb520 */
uint F_006bb520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bb520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __time64_t _Var1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b8bcc));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = param_1;
  _Var1 = F_00c4b7c2((__time64_t *)0x0);
  *(__time64_t *)((int)this + 0x10) = _Var1;
  return (uint)this;
}

/* ref: Client::Game::Event::BindCharacterByLayoutIdTask::vf1 */
uint F_006bb560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bb560u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte * pbVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  __time64_t _Var6;
  
  if (((*(int *)(this + 4) == 0) &&
      (piVar3 = (int *)F_00a354d0(&REFG(undefined4, 0x14a31f0),*(undefined4 *)(this + 8),1), piVar3 != (int *)0x0
      )) && (uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xb8))(piVar3), (char)uVar4 != '\0')) {
    uVar4 = F_00a5f290(piVar3);
    *(uint *)(this + 4) = uVar4;
    if (uVar4 != 0) {
      *(byte *)(uVar4 + 0x2dd3) = *(byte *)(uVar4 + 0x2dd3) | 4;
    }
  }
  piVar3 = *(int * PTR32 *)(this + 4);
  if (piVar3 == (int *)0x0) {
    _Var6 = F_00c4b7c2((__time64_t *)0x0);
    iVar5 = (int)((ulonglong)_Var6 >> 0x20);
    uVar4 = (uint)((uint)_Var6 < *(uint *)(this + 0x10));
    uVar2 = iVar5 - *(int *)(this + 0x14);
    if ((-1 < (int)(uVar2 - uVar4)) &&
       ((uVar2 != uVar4 && SBORROW4(iVar5,*(int *)(this + 0x14)) == SBORROW4(uVar2,uVar4) ||
        (0xe < (uint)_Var6 - *(uint *)(this + 0x10))))) {
      if (*(int *)(this + 4) == 0) {
        return 1;
      }
      pbVar1 = ((byte *)GEN_TOP((*(int *)(this + 4) + 0x2dd3)));
      *pbVar1 = *pbVar1 & 0xfb;
      *(undefined4 *)(this + 4) = 0;
      return 1;
    }
  }
  else {
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x70))(piVar3);
    if (((char)uVar4 != '\0') &&
       (uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x68))))(*(int * PTR32 *)(this + 4)), (char)uVar4 != '\0'
       )) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_006bb620 */
uint F_006bb620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6bb620u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  *(undefined4 *)((int)this + 4) = param_1;
  *(int *)((int)this + 0x28) = param_3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b8be8));
  *(undefined4 *)((int)this + 0x2c) = 0;
  F_00c46aa0((int)this + 8,param_2,param_3 * 4);
  return (uint)this;
}

/* ref: Client::Game::Event::LoadMovePositionTask::vf2 */
unsigned int F_006bb670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bb670u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  if (param_2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_2 + 0x174))(param_2);
  }
  return 0;
}

/* ref: FUN_006bb690 */
uint F_006bb690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x6bb690u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b8c04));
  F_0042b630((int)this + 4);
  *(undefined4 *)((int)this + 0x58) = param_1;
  *(undefined4 *)((int)this + 100) = param_5;
  *(undefined4 *)((int)this + 0x5c) = param_3;
  *(undefined4 *)((int)this + 0x60) = param_4;
  *(undefined1 *)((int)this + 0x6f) = 0;
  *(undefined4 *)((int)this + 0x68) = param_6;
  *(undefined2 *)((int)this + 0x6c) = 0;
  *(undefined1 *)((int)this + 0x6e) = (undefined1)param_2;
  return (uint)this;
}

/* ref: FUN_006bb6e0 */
uint F_006bb6e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6bb6e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b8c04));
  uVar1 = F_0042c880((undefined *)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b8a64));
  return (uint)uVar1;
}

/* ref: FUN_006bb700 */
uint F_006bb700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bb700u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[6])REFP(0x10b8c20));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: Client::Game::Event::PrepareCutSceneTask::vf1 */
uint F_006bb730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bb730u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 1;
}

/* ref: FUN_006bb740 */
uint F_006bb740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bb740u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  undefined * puVar2;
  
  uVar1 = REFG(float, 0x1087f04);
  *(undefined4 *)((int)this + 0xc) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b8c3c));
  *(undefined2 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = uVar1;
  puVar2 = param_2;
  if (param_2 == (undefined *)0x0) {
    puVar2 = &REFG(undefined, 0x10b3a4a);
  }
  F_0042cc20((undefined *)((int)this + 0x10),puVar2,REFG(undefined4, 0x108cc50));
  return (uint)this;
}

/* ref: FUN_006bb790 */
uint F_006bb790(unsigned int gen_a0)
{
  GEN_ENTER(0x6bb790u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b8c3c));
  uVar1 = F_0042c880((undefined *)((int)this + 0x10));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b8a64));
  return (uint)uVar1;
}

/* ref: FUN_006bb7e0 */
uint F_006bb7e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bb7e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 uVar1;
  
  in_ecx[2] = GEN_FLT_TO(in_ecx[2], REFG(float, 0x1087f04));
  uVar1 = REFG(float, 0x1094838);
  *in_ecx = (*(undefined * PTR32 (*)[6])REFP(0x10b8c74));
  in_ecx[1] = param_2;
  in_ecx[3] = uVar1;
  *(undefined2 *)(in_ecx + 4) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_006bb830 */
uint F_006bb830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bb830u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  int * piVar2;
  undefined * this;
  int * piVar3;
  byte bVar4;
  uint uVar5;
  
  piVar3 = (*(int * PTR32 *)&gen_args[1]);
  this = REFG(void * PTR32, 0x1379694);
  if (REFG(void * PTR32, 0x1379694) == (undefined *)0x0) {
    return 1;
  }
  piVar1 = (*(int * PTR32 *)&gen_args[1]) + 0x14;
  if (*piVar1 == 0) {
    return 0;
  }
  piVar2 = (*(int * PTR32 *)&gen_args[1]) + 0x12;
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(int * PTR32 *)&gen_args[1]), 1, 3),(char)(*(int * PTR32 *)&gen_args[1])[0x11])));
  uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 0x210))(piVar3,REFG(void * PTR32, 0x1379694),*piVar1,(*(int * PTR32 *)&gen_args[1]),*piVar2);
  if (uVar5 != 0xf) {
    uVar5 = F_00a9fbf0(this);
    if ((char)uVar5 != '\0') {
      return 2;
    }
  }
  bVar4 = F_00a9fca0(this);
  if (bVar4 != 0) {
    return 3;
  }
  uVar5 = F_00a9fc60(this);
  if ((char)uVar5 != '\0') {
    return 4;
  }
  uVar5 = F_00aa02d0(this,2,0);
  if ((char)uVar5 != '\0') {
    return 5;
  }
  uVar5 = F_00aa02d0(this,0x4d,0);
  if ((char)uVar5 != '\0') {
    return 6;
  }
  uVar5 = F_00aa0f80(this);
  return -(uint)((uVar5 & 0xff) != 0) & 7;
}

/* ref: FUN_006bb910 */
uint F_006bb910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6bb910u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(byte *)((int)this + 0x400) = (byte)param_3;
  *(undefined4 *)((int)this + 0x404) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b8c90));
  *(undefined2 *)((int)this + 0x408) = 0;
  F_00c46aa0((int)this + 4,param_2,(uint)(byte)param_3 * 4);
  return (uint)this;
}

/* ref: Client::Game::Event::FinalizeSceneTask::vf2 */
uint F_006bb970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bb970u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_2 + 0x70))(param_2,this + 4,(uint)(byte)this[0x400]);
  return uVar1;
}

/* ref: Client::Game::Event::FinalizeSceneTask::vf3 */
byte F_006bb9a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bb9a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_006bb9b0 */
uint F_006bb9b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6bb9b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b8cac));
  *(undefined4 *)((int)this + 0x10) = param_3;
  *(undefined4 *)((int)this + 0x14) = param_4;
  *(undefined2 *)((int)this + 0x3c) = 0x100;
  return (uint)this;
}

/* ref: FUN_006bb9e0 */
uint F_006bb9e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5, unsigned int gen_a6, float gen_a7)
{
  GEN_ENTER(0x6bb9e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  float param_6 = (float)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  float param_8 = (float)gen_a7;
  param_1[2] = param_2;
  param_1[4] = param_4;
  param_1[3] = param_3;
  *param_1 = (*(undefined * PTR32 (*)[6])REFP(0x10b8cac));
  param_1[8] = *param_5;
  param_1[9] = param_5[1];
  param_1[10] = param_5[2];
  param_1[0xc] = (undefined4)gen_fl2bits(param_6);
  param_1[0xd] = param_7;
  param_1[0xe] = (undefined4)gen_fl2bits(param_8);
  *(undefined2 *)(param_1 + 0xf) = 0;
  return (uint)param_1;
}

/* ref: Client::Game::Event::SetPositionTask::vf2 */
unsigned int F_006bba50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bba50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  if (param_2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_2 + 0x188))(param_2);
  }
  return 0;
}

/* ref: FUN_006bba70 */
uint F_006bba70(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6bba70u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[6])REFP(0x10b8cc8));
  in_ecx[1] = (undefined4)gen_fl2bits(param_2);
  return (uint)in_ecx;
}

/* ref: Client::Game::Event::WaitForTimeTask::vf2 */
unsigned int F_006bbaa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bbaa0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  if (param_2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_2 + 0x150))(param_2);
  }
  return 0;
}

/* ref: Client::Game::Event::CancelEventSceneTask::vf2 */
unsigned int F_006bbae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bbae0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_006bbaf0 */
uint F_006bbaf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6bbaf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x10b8d00));
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined4 *)((int)this + 0x10) = param_3;
  return (uint)this;
}

/* ref: FUN_006bbb30 */
uint F_006bbb30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6bbb30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined4 *)((int)this + 0x10) = param_3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x10b8d20));
  return (uint)this;
}

/* ref: Client::Game::Event::WaitForTurnTask::vf2 */
unsigned int F_006bbb70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bbb70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  if (param_2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_2 + 400))(param_2);
  }
  return 0;
}

/* ref: Client::Game::Event::WaitForTurnTask::vf6 */
uint F_006bbb90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bbb90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  bVar1 = F_00a9fc00(param_2);
  if (bVar1 == 0) {
    bVar1 = F_00aa07c0(param_2);
    if (bVar1 == 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_006bbbd0 */
uint F_006bbbd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6bbbd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined4 *)((int)this + 0x10) = param_3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x10b8d40));
  *(undefined4 *)((int)this + 0x18) = param_4;
  return (uint)this;
}

/* ref: Client::Game::Event::WaitForActionTask::vf2 */
unsigned int F_006bbc10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bbc10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  if (param_2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_2 + 0x18c))(param_2);
  }
  return 0;
}

/* ref: Client::Game::Event::WaitForActionTask::vf6 */
uint F_006bbc30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bbc30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00aa02d0(param_2,*(undefined4 *)(this + 0x18),0);
  if ((char)uVar2 == '\0') {
    bVar1 = F_00aa2d60(param_2,*(undefined4 *)(this + 0x18),0);
    if (bVar1 == 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_006bbc70 */
uint F_006bbc70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6bbc70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined4 *)((int)this + 0x10) = param_3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x10b8d60));
  return (uint)this;
}

/* ref: Client::Game::Event::WaitForLookAtTask::vf2 */
unsigned int F_006bbcb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bbcb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  if (param_2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_2 + 0x194))(param_2);
  }
  return 0;
}

/* ref: FUN_006bbcd0 */
byte F_006bbcd0(unsigned int gen_a0)
{
  GEN_ENTER(0x6bbcd0u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00aa1320(param_1,0xffffffff);
  if (bVar1 != 0) {
    bVar1 = F_00aa1330(param_1,0xffffffff);
    return bVar1 == 0;
  }
  bVar1 = F_00aa1340(param_1,0xffffffff);
  if (bVar1 != 0) {
    bVar1 = F_00aa1350(param_1,0xffffffff);
    return bVar1 == 0;
  }
  return 0;
}

/* ref: FUN_006bbd20 */
uint F_006bbd20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6bbd20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined4 *)((int)this + 0x10) = param_3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x10b8d80));
  return (uint)this;
}

/* ref: Client::Game::Event::WaitForMoveTask::vf2 */
unsigned int F_006bbd60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bbd60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  if (param_2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_2 + 0x198))(param_2);
  }
  return 0;
}

/* ref: Client::Game::Event::WaitForMoveTask::vf6 */
uint F_006bbd80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bbd80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00a9fbf0(param_2);
  return (uint)((char)uVar1 == '\0');
}

/* ref: FUN_006bbda0 */
uint F_006bbda0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6bbda0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined4 *)((int)this + 0x10) = param_3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x10b8da0));
  return (uint)this;
}

/* ref: Client::Game::Event::WaitForCharacterTransparency::vf2 */
unsigned int F_006bbde0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bbde0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  if (param_2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_2 + 0x19c))(param_2);
  }
  return 0;
}

/* ref: Client::Game::Event::WaitForCharacterTransparency::vf6 */
uint F_006bbe00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bbe00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  bool bVar1;
  
  bVar1 = GEN_ISNAN(*(float *)(param_2 + 0x2ec8)) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
  if (bVar1 == (bVar1 || *(float *)(param_2 + 0x2ec8) == *(float *)&REFG(undefined, 0x1088114))) {
    return 0;
  }
  return 1;
}

/* ref: FUN_006bbe40 */
uint F_006bbe40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4)
{
  GEN_ENTER(0x6bbe40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float param_5 = (float)gen_a4;
  param_1[2] = param_2;
  param_1[3] = param_3;
  param_1[4] = param_4;
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x10b8dc0));
  param_1[6] = (undefined4)gen_fl2bits(param_5);
  return (uint)param_1;
}

/* ref: Client::Game::Event::WaitTimeAfterCharacterTransparency::vf2 */
unsigned int F_006bbe80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bbe80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::Game::Event::WaitTimeAfterCharacterTransparency::vf4 */
unsigned int F_006bbe90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bbe90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 == 0) {
    *(undefined4 *)(in_ecx + 0x18) = 0;
  }
  return 0;
}

/* ref: Client::Game::Event::WaitForFadeTask::vf2 */
unsigned int F_006bbeb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bbeb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  if (param_2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_2 + 0x170))(param_2);
  }
  return 0;
}

/* ref: Client::Game::Event::WaitForCameraPanTask::vf1 */
uint F_006bbed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bbed0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  if (REFG(int, 0x1375bbc) != 1) {
    F_00b70d10(&REFG(undefined4, 0x1375b90),1);
  }
  if (REFG(int, 0x1375bbc) == -1) {
    bVar1 = F_00b6b550(0);
    return (uint)(bVar1 == 0);
  }
  bVar1 = F_00b6b550((&REFG(undefined4, 0x1375b90))[REFG(int, 0x1375bbc)]);
  return (uint)(bVar1 == 0);
}

/* ref: Client::Game::Event::WaitForCameraPanTask::vf2 */
unsigned int F_006bbf20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bbf20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  if (param_2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_2 + 0x160))(param_2);
  }
  return 0;
}

/* ref: Client::Game::Event::WaitForCameraDollyTask::vf1 */
uint F_006bbf40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bbf40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  if (REFG(int, 0x1375bbc) != 1) {
    F_00b70d10(&REFG(undefined4, 0x1375b90),1);
  }
  if (REFG(int, 0x1375bbc) == -1) {
    bVar1 = F_00b6b580(0);
    return (uint)(bVar1 == 0);
  }
  bVar1 = F_00b6b580((&REFG(undefined4, 0x1375b90))[REFG(int, 0x1375bbc)]);
  return (uint)(bVar1 == 0);
}

/* ref: Client::Game::Event::WaitForCameraDollyTask::vf2 */
unsigned int F_006bbf90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bbf90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  if (param_2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_2 + 0x164))(param_2);
  }
  return 0;
}

/* ref: Client::Game::Event::WaitForCameraZoomTask::vf1 */
uint F_006bbfb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bbfb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  if (REFG(int, 0x1375bbc) != 1) {
    F_00b70d10(&REFG(undefined4, 0x1375b90),1);
  }
  if (REFG(int, 0x1375bbc) == -1) {
    bVar1 = F_00b6b5b0(0);
    return (uint)(bVar1 == 0);
  }
  bVar1 = F_00b6b5b0((&REFG(undefined4, 0x1375b90))[REFG(int, 0x1375bbc)]);
  return (uint)(bVar1 == 0);
}

/* ref: Client::Game::Event::WaitForCameraZoomTask::vf2 */
unsigned int F_006bc000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bc000u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  if (param_2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_2 + 0x168))(param_2);
  }
  return 0;
}

/* ref: Client::Game::Event::WaitForCameraGyroTask::vf1 */
uint F_006bc020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bc020u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  if (REFG(int, 0x1375bbc) != 1) {
    F_00b70d10(&REFG(undefined4, 0x1375b90),1);
  }
  if (REFG(int, 0x1375bbc) == -1) {
    bVar1 = F_00b6b5d0(0);
    return (uint)(bVar1 == 0);
  }
  bVar1 = F_00b6b5d0((&REFG(undefined4, 0x1375b90))[REFG(int, 0x1375bbc)]);
  return (uint)(bVar1 == 0);
}

/* ref: Client::Game::Event::WaitForCameraGyroTask::vf2 */
unsigned int F_006bc070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bc070u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  if (param_2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_2 + 0x16c))(param_2);
  }
  return 0;
}

/* ref: Client::Game::Event::IsItemObtainableTask::vf1 */
uint F_006bc090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bc090u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00ab24a0(*(undefined4 *)(this + 4));
  if (uVar1 == 0) {
    return 0;
  }
  uVar1 = F_00a40d10(&REFG(undefined, 0x14a4230),*(undefined4 *)(this + 4),*(undefined4 *)(this + 8),
                       (uint)(byte)this[0xc]);
  if (uVar1 == 0) {
    this[0xd] = (undefined1)0x1;
  }
  return 1;
}

/* ref: Client::Game::Event::IsItemObtainableTask::vf2 */
uint F_006bc0d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bc0d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != (int *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)(*param_2 + 0x1a8))(param_2,(uint)(byte)this[0xd]);
  }
  return uVar1;
}

/* ref: FUN_006bc0f0 */
uint F_006bc0f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bc0f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  *(undefined4 *)(in_ecx + 4) = 4;
  *(undefined1 *)(in_ecx + 0xc) = 1;
  return param_2;
}

/* ref: Client::Game::Event::LuaActor::vf1 */
unsigned int F_006bc110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bc110u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_006bc120 */
uint F_006bc120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bc120u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x10b8de0));
  in_ecx[1] = param_2;
  F_0042b630(in_ecx + 2);
  in_ecx[0x17] = param_3;
  return (uint)in_ecx;
}

/* ref: FUN_006bc150 */
uint F_006bc150(unsigned int gen_a0)
{
  GEN_ENTER(0x6bc150u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  char * pcVar2;
  
  pcVar2 = *(char * PTR32 *)((int)this + 8);
  if (*pcVar2 != '\0') {
    uVar1 = F_0042a990((int)this + 8);
    pcVar2 = (char *)F_00a023f0(*(undefined * PTR32 *)((int)this + 0x5c),uVar1);
  }
  return (uint)pcVar2;
}

/* ref: FUN_006bc310 */
uint F_006bc310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bc310u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (uint)*((byte *)GEN_TOP((*(int *)(in_ecx + 0x60) + 0x2db8 + param_2)));
}

/* ref: FUN_006bc330 */
uint F_006bc330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bc330u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_00ab3fa0(((*(uint *)&gen_args[1]) & 0xff) + 1);
  if (uVar2 == 0) {
    return 0;
  }
  bVar1 = F_00a62b00((*(undefined4 *)&gen_args[0]));
  (*(uint *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(uint *)&gen_args[1]), 1, 3),bVar1);
  uVar3 = F_00a629e0(&REFG(undefined, 0x14a9728),(*(uint *)&gen_args[1]));
  return (uint)(*(byte *)(uVar2 + 0x22) <= *(byte *)(uVar3 + 0x30));
}

/* ref: FUN_006bc3c0 */
uint F_006bc3c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bc3c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0x60);
  if ((char)param_1 != '\0') {
    return (uint)*(byte *)(iVar1 + 0x1689);
  }
  if (iVar1 != REFG(int, 0x1379694)) {
    return 0;
  }
  uVar2 = F_00a68280(&REFG(undefined1, 0x14ab070),(uint)*(byte *)(iVar1 + 0x1688),0);
  return uVar2;
}

/* ref: FUN_006bc400 */
uint F_006bc400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bc400u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if (*(int *)((int)this + 0x60) != REFG(int, 0x1379694)) {
    return 0;
  }
  uVar1 = F_00a68280(&REFG(undefined1, 0x14ab070),param_1,param_2);
  return uVar1;
}

/* ref: FUN_006bc420 */
uint F_006bc420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bc420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*(int *)((int)this + 0x60) != REFG(int, 0x1379694)) {
    return 0;
  }
  uVar1 = F_00a68310(&REFG(undefined1, 0x14ab070),param_1);
  return uVar1;
}

/* ref: FUN_006bc480 */
byte F_006bc480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bc480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (*(int *)((int)this + 0x60) != REFG(int, 0x1379694)) {
    return 0;
  }
  return ((&REFG(undefined1, 0x14b4ec0))[param_1 >> 3] & (byte)(1 << ((byte)param_1 & 7))) != 0;
}

/* ref: FUN_006bc4c0 */
byte F_006bc4c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bc4c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00ab1ed0(param_1);
  if (((uVar2 != 0) && (bVar1 = *(byte *)(uVar2 + 0x27), bVar1 != 0)) &&
     (*(int *)((int)this + 0x60) == REFG(int, 0x1379694))) {
    return ((&REFG(undefined1, 0x14b4ec0))[bVar1 >> 3] & (byte)(1 << (bVar1 & 7))) != 0;
  }
  return 0;
}

/* ref: FUN_006bc510 */
byte F_006bc510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bc510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (*(int *)((int)this + 0x60) != REFG(int, 0x1379694)) {
    return 0;
  }
  return ((&REFG(undefined1, 0x14b4edc))[param_1 >> 3] & (byte)(1 << ((byte)param_1 & 7))) != 0;
}

/* ref: FUN_006bc550 */
byte F_006bc550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bc550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(int *)((int)this + 0x60) != REFG(int, 0x1379694)) {
    return 0;
  }
  return ((&REFG(undefined, 0x14b4f0c))[(ushort)param_1 >> 3] & (byte)(1 << ((byte)(ushort)param_1 & 7))) != 0;
}

/* ref: FUN_006bc5b0 */
uint F_006bc5b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6bc5b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00a3c850(&REFG(undefined, 0x14a4230),param_1);
  return uVar1;
}

/* ref: FUN_006bc5c0 */
uint F_006bc5c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6bc5c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  ushort uVar2;
  
  uVar1 = F_00a3c850(&REFG(undefined, 0x14a4230),param_1);
  if (uVar1 == 0) {
    return 0;
  }
  uVar2 = 0;
  uVar1 = F_00ab24a0(uVar1);
  if (uVar1 != 0) {
    uVar2 = (ushort)*(byte *)(uVar1 + 0x9e);
  }
  return CONCAT22((short)(uVar1 >> 0x10),uVar2);
}

/* ref: FUN_006bc600 */
uint F_006bc600(unsigned int gen_a0)
{
  GEN_ENTER(0x6bc600u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  ushort uVar2;
  
  uVar1 = F_00a3c850(&REFG(undefined, 0x14a4230),param_1);
  if (uVar1 == 0) {
    return 0;
  }
  uVar2 = 0;
  uVar1 = F_00ab24a0(uVar1);
  if (uVar1 != 0) {
    uVar2 = (ushort)*(byte *)(uVar1 + 0x9f);
  }
  return CONCAT22((short)(uVar1 >> 0x10),uVar2);
}

/* ref: FUN_006bc640 */
uint F_006bc640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x6bc640u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  int param_6 = (int)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined1 * puVar1;
  uint uVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  (*(undefined4 *)(gen_frame + 0x0)) = 9999;
  (*(undefined2 *)(gen_frame + 0x4)) = 0;
  (*(undefined1 *)(gen_frame + 0x6)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined1 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0x75300000;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined2 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2a)) = 0;
  (*(undefined2 *)(gen_frame + 0x2e)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined1 *)(gen_frame + 0x38)) = 0;
  F_00a35f30(&(*(undefined4 *)(gen_frame + 0x0)));
  (*(undefined2 *)(gen_frame + 0x40)) = 0;
  (*(uint *)(gen_frame + 0x44)) = 0;
  F_00a35ee0(&(*(undefined4 *)(gen_frame + 0x0)),param_1,1);
  (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x40)) + 0)) = (undefined1)param_7;
  (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x40)) + 1)) = param_2 != 0;
  (*(undefined2 *)(gen_frame + 0x40)) = CONCAT11(param_2 != 0,(undefined1)param_7);
  uVar2 = 0;
  do {
    uVar3 = uVar2 & 0xff;
    *(undefined2 *)((int)&(*(undefined4 *)(gen_frame + 0x20)) + uVar3 * 2) = *(undefined2 *)(param_5 + uVar2 * 2);
    puVar1 = (undefined1 *)(uVar2 + param_6);
    uVar2 = uVar2 + 1;
    *(undefined1 *)((int)&(*(undefined4 *)(gen_frame + 0x2a)) + uVar3) = *puVar1;
  } while (uVar2 < 5);
  uVar2 = F_00a411a0(&REFG(undefined, 0x14a4230),&(*(undefined4 *)(gen_frame + 0x0)),param_3,param_4);
  uVar2 = uVar2 - (*(uint *)(gen_frame + 0x44));
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    break;
  case 1: ;
    uVar2 = (*(uint *)(gen_frame + 0x44));
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return uVar2;
  case 2: ;
    if (uVar2 <= (*(uint *)(gen_frame + 0x44))) {
      uVar2 = (*(uint *)(gen_frame + 0x44));
      F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
      return uVar2;
    }
    break;
  case 3: ;
    uVar2 = uVar2 + (*(uint *)(gen_frame + 0x44));
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return uVar2;
  default: ;
    uVar2 = 0;
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar2;
}

/* ref: FUN_006bc780 */
uint F_006bc780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bc780u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00a41080(&REFG(undefined, 0x14a4230),param_1,0,param_2,param_3);
  return uVar1;
}

/* ref: FUN_006bc7a0 */
uint F_006bc7a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bc7a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00a41080(&REFG(undefined, 0x14a4230),param_1,1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_006bc7c0 */
byte F_006bc7c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bc7c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  
  bVar1 = *((byte *)GEN_TOP((*(int *)((int)this + 0x60) + 0x1688)));
  uVar2 = F_00ab21d0(param_1);
  if (uVar2 == 0) {
    return 0;
  }
  return *(byte *)(uVar2 + 4 + (uint)bVar1);
}

/* ref: FUN_006bc7f0 */
byte F_006bc7f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bc7f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  ushort * puVar2;
  ushort * puVar3;
  uint uVar4;
  
  uVar1 = F_00ab3e80(param_1);
  if (uVar1 != 0) {
    uVar4 = 0;
    puVar3 = (ushort *)(uVar1 + 4);
    do {
      uVar1 = (uint)*puVar3;
      if ((uVar1 != 0) && (uVar1 < 0x70)) {
        while (puVar2 = (ushort *)F_00ab3e50(uVar1), puVar2 != (ushort *)0x0) {
          if (*(int *)puVar2 != 0) {
            if ((*(int *)((int)this + 0x60) == REFG(int, 0x1379694)) &&
               (((&REFG(undefined, 0x14b4f0c))[*puVar2 >> 3] & (byte)(1 << ((byte)*puVar2 & 7))) != 0)) {
              return 1;
            }
            break;
          }
          uVar1 = uVar1 + 1;
          if (0x6f < uVar1) break;
        }
      }
      uVar4 = uVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar4 < 8);
  }
  return 0;
}

/* ref: FUN_006bc890 */
uint F_006bc890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bc890u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  char cVar1;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(in_ecx + 0x60) + 0x2e08)));
  if (cVar1 == '\0') {
    return *(uint *)(in_ecx + 0x60) & 0xffffff00;
  }
  if (((char)param_2 != '\0') && ((char)param_2 != cVar1)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_006bc900 */
byte F_006bc900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bc900u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  if (*(int *)(in_ecx + 0x60) != REFG(int, 0x1379694)) {
    return 0;
  }
  bVar1 = F_00a68920(&REFG(undefined1, 0x14ab070),param_2);
  return bVar1;
}

/* ref: FUN_006bc920 */
byte F_006bc920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bc920u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint * puVar4;
  byte local_5;
  
  local_5 = 1;
  puVar4 = param_1;
  if (param_2 == 0) {
    return 1;
  }
  do {
    bVar1 = false;
    uVar3 = 0;
    do {
      uVar2 = F_00a3c850(&REFG(undefined, 0x14a4230),uVar3);
      if (1000000 < uVar2) {
        uVar2 = uVar2 - 1000000;
      }
      if (*puVar4 == uVar2) {
        bVar1 = true;
        break;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0xe);
    if ((local_5 == 0) || (local_5 = 1, !bVar1)) {
      local_5 = 0;
    }
    puVar4 = puVar4 + 1;
    param_2 = param_2 + -1;
    if (param_2 == 0) {
      return local_5;
    }
  } while( true );
}

/* ref: FUN_006bc9f0 */
byte F_006bc9f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bc9f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(int *)((int)this + 0x60) != REFG(int, 0x1379694)) {
    return 0;
  }
  return ((&REFG(undefined1, 0x14b4ed0))[(byte)param_1 >> 3] & (byte)(1 << ((byte)param_1 & 7))) != 0;
}

/* ref: FUN_006bca30 */
byte F_006bca30(unsigned int gen_a0)
{
  GEN_ENTER(0x6bca30u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return (&REFG(undefined1, 0x14ab29f))[(byte)param_1];
}

/* ref: FUN_006bca50 */
byte F_006bca50(unsigned int gen_a0)
{
  GEN_ENTER(0x6bca50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte bVar1;
  
  bVar1 = F_00a68770(&REFG(undefined1, 0x14ab070),param_1);
  return bVar1;
}

/* ref: FUN_006bcaa0 */
byte F_006bcaa0(unsigned int gen_a0)
{
  GEN_ENTER(0x6bcaa0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00a4ffd0();
  bVar1 = F_00b8de30(uVar2,param_1);
  return bVar1;
}

/* ref: FUN_006bcac0 */
byte F_006bcac0(unsigned int gen_a0)
{
  GEN_ENTER(0x6bcac0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00a4ffd0();
  bVar1 = F_00b8df80(uVar2,param_1);
  return bVar1;
}

/* ref: FUN_006bcb30 */
byte F_006bcb30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bcb30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  undefined * this_00;
  
  bVar1 = F_00a9f620(*(undefined4 *)((int)this + 0x60));
  if (bVar1 != 0) {
    this_00 = (undefined *)F_00a5f290(*(undefined * PTR32 *)(param_1 + 4));
    if (this_00 != (undefined *)0x0) {
      bVar1 = F_00a9fd60(this_00);
      return bVar1;
    }
  }
  return 0;
}

/* ref: FUN_006bcb60 */
uint F_006bcb60(unsigned int gen_a0)
{
  GEN_ENTER(0x6bcb60u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1[0x5d];
  if (uVar1 != 0) {
    uVar2 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
    if (uVar2 == 1) {
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_006bcb90 */
uint F_006bcb90(unsigned int gen_a0)
{
  GEN_ENTER(0x6bcb90u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0xb8))(param_1);
  if ((((char)uVar1 != '\0') && (uVar1 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1), uVar1 == 3)) &&
     (param_1[0x5d] != 0)) {
    return param_1[0x5d];
  }
  return 0;
}

/* ref: FUN_006bcbd0 */
uint F_006bcbd0(unsigned int gen_a0)
{
  GEN_ENTER(0x6bcbd0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0xb8))(param_1);
  if ((((char)uVar1 != '\0') && (uVar1 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1), uVar1 == 2)) &&
     (param_1[0x5d] != 0)) {
    return param_1[0x5d];
  }
  return 0;
}

/* ref: FUN_006bcc10 */
uint F_006bcc10(unsigned int gen_a0)
{
  GEN_ENTER(0x6bcc10u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0xb8))(param_1);
  if ((((char)uVar1 != '\0') && (uVar1 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1), uVar1 == 10)) &&
     (param_1[0x5d] != 0)) {
    return param_1[0x5d];
  }
  return 0;
}

/* ref: FUN_006bcc50 */
uint F_006bcc50(unsigned int gen_a0)
{
  GEN_ENTER(0x6bcc50u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0xb8))(param_1);
  if ((((char)uVar1 == '\0') && (uVar1 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1), uVar1 == 7)) &&
     (param_1[0x5d] != 0)) {
    return param_1[0x5d];
  }
  return 0;
}

/* ref: FUN_006bcc90 */
uint F_006bcc90(unsigned int gen_a0)
{
  GEN_ENTER(0x6bcc90u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0xb8))(param_1);
  if ((((char)uVar1 == '\0') && (uVar1 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1), uVar1 == 5)) &&
     (param_1[0x5d] != 0)) {
    return param_1[0x5d];
  }
  return 0;
}

/* ref: FUN_006bccd0 */
uint F_006bccd0(unsigned int gen_a0)
{
  GEN_ENTER(0x6bccd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined4 in_EAX = 0;
  uint uVar2;
  
  *(byte *)((int)this + 0x1c) = *(byte *)((int)this + 0x1c) & 0xfd;
  bVar1 = *(byte *)((int)this + 0x1c);
  if ((bVar1 & 1) == 0) {
    *(byte *)((int)this + 0x1c) = bVar1 | 1;
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x23c))(this);
    return uVar2;
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),bVar1);
}

/* ref: FUN_006bccf0 */
unsigned int F_006bccf0(unsigned int gen_a0)
{
  GEN_ENTER(0x6bccf0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(byte *)(in_ecx + 0x1c) = *(byte *)(in_ecx + 0x1c) | 2;
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf143 */
unsigned int F_006bcd00(void)
{
  GEN_ENTER(0x6bcd00u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_006bcd10 */
uint F_006bcd10(unsigned int gen_a0)
{
  GEN_ENTER(0x6bcd10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  if (*(int *)((int)this + 100) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x68);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*(int *)((int)this + 100));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 100);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 100) = 0;
    }
  }
  if (*(int *)((int)this + 0x6c) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x70);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*(int *)((int)this + 0x6c));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x6c);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x6c) = 0;
    }
  }
  uVar3 = *(uint *)((int)this + 0x74);
  if (uVar3 != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x78);
    if (piVar1 != (int *)0x0) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,uVar3);
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x74);
    if (puVar2 != (undefined4 *)0x0) {
      uVar3 = ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x74) = 0;
    }
  }
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  return uVar3;
}

/* ref: Client::Game::Event::EventHandler::vf5 */
byte F_006bcda0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bcda0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: Client::Game::Event::EventHandler::vf7 */
byte F_006bcdb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6bcdb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 1;
}

/* ref: Client::Game::Event::EventHandler::vf9 */
byte F_006bcdc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bcdc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: Client::Game::Event::EventHandler::vf11 */
byte F_006bcdd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6bcdd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

