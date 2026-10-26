#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BN::vf5 */
int F_00eb8420(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8420u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(in_ecx + 0x5b4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
    iVar2 = iVar2 + *(int *)(iVar1 + 0x10);
  }
  return iVar2;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BN::vf6 */
unsigned int F_00eb8440(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *(int *)((int)this + 0x5b4); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x18)) {
    iVar4 = *(int *)(iVar2 + 0xc);
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = (uint *)(iVar4 + 8);
        iVar4 = *(int *)(iVar4 + 4);
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb8480 */
unsigned int F_00eb8480(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8480u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d2d4));
  F_00eb1c30(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_ME::vf1 */
uint F_00eb84a0(void)
{
  GEN_ENTER(0xeb84a0u, 0u, 0u, 0u, 0u);
  return 0x5555555;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_ME::vf2 */
uint F_00eb84b0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb84b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x24d8) << 5;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_ME::vf3 */
uint F_00eb84c0(void)
{
  GEN_ENTER(0xeb84c0u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_ME::vf4 */
uint F_00eb84d0(void)
{
  GEN_ENTER(0xeb84d0u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_ME::vf5 */
int F_00eb8510(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8510u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(in_ecx + 0x2504); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
    iVar2 = iVar2 + *(int *)(iVar1 + 0x10);
  }
  return iVar2;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_ME::vf6 */
unsigned int F_00eb8530(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8530u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *(int *)((int)this + 0x2504); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x18)) {
    iVar4 = *(int *)(iVar2 + 0xc);
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = (uint *)(iVar4 + 8);
        iVar4 = *(int *)(iVar4 + 4);
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb8570 */
unsigned int F_00eb8570(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8570u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d2f4));
  F_00eb1c90(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_M::vf1 */
uint F_00eb8590(void)
{
  GEN_ENTER(0xeb8590u, 0u, 0u, 0u, 0u);
  return 0x5555555;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_M::vf2 */
uint F_00eb85a0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb85a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 600) << 5;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_M::vf3 */
uint F_00eb85b0(void)
{
  GEN_ENTER(0xeb85b0u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_M::vf4 */
uint F_00eb85c0(void)
{
  GEN_ENTER(0xeb85c0u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_M::vf5 */
int F_00eb8600(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8600u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(in_ecx + 0x284); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
    iVar2 = iVar2 + *(int *)(iVar1 + 0x10);
  }
  return iVar2;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_M::vf6 */
unsigned int F_00eb8620(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *(int *)((int)this + 0x284); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x18)) {
    iVar4 = *(int *)(iVar2 + 0xc);
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = (uint *)(iVar4 + 8);
        iVar4 = *(int *)(iVar4 + 4);
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb8660 */
unsigned int F_00eb8660(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8660u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d314));
  F_00eb1ce0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BE::vf1 */
uint F_00eb8680(void)
{
  GEN_ENTER(0xeb8680u, 0u, 0u, 0u, 0u);
  return 0x5555555;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BE::vf2 */
uint F_00eb8690(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8690u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x3d8) << 5;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BE::vf3 */
uint F_00eb86a0(void)
{
  GEN_ENTER(0xeb86a0u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BE::vf4 */
uint F_00eb86b0(void)
{
  GEN_ENTER(0xeb86b0u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BE::vf5 */
int F_00eb86f0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb86f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(in_ecx + 0x404); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
    iVar2 = iVar2 + *(int *)(iVar1 + 0x10);
  }
  return iVar2;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BE::vf6 */
unsigned int F_00eb8710(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8710u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *(int *)((int)this + 0x404); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x18)) {
    iVar4 = *(int *)(iVar2 + 0xc);
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = (uint *)(iVar4 + 8);
        iVar4 = *(int *)(iVar4 + 4);
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb8750 */
unsigned int F_00eb8750(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8750u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d334));
  F_00eb1d30(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BC::vf1 */
uint F_00eb8770(void)
{
  GEN_ENTER(0xeb8770u, 0u, 0u, 0u, 0u);
  return 0x5555555;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BC::vf2 */
uint F_00eb8780(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8780u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x378) << 5;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BC::vf3 */
uint F_00eb8790(void)
{
  GEN_ENTER(0xeb8790u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BC::vf4 */
uint F_00eb87a0(void)
{
  GEN_ENTER(0xeb87a0u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BC::vf5 */
int F_00eb87e0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb87e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(in_ecx + 0x3a4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
    iVar2 = iVar2 + *(int *)(iVar1 + 0x10);
  }
  return iVar2;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BC::vf6 */
unsigned int F_00eb8800(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8800u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *(int *)((int)this + 0x3a4); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x18)) {
    iVar4 = *(int *)(iVar2 + 0xc);
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = (uint *)(iVar4 + 8);
        iVar4 = *(int *)(iVar4 + 4);
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb8840 */
unsigned int F_00eb8840(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8840u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d354));
  F_00eb1d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_O::vf1 */
uint F_00eb8860(void)
{
  GEN_ENTER(0xeb8860u, 0u, 0u, 0u, 0u);
  return 0x5555555;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_O::vf2 */
uint F_00eb8870(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8870u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x2b8) << 5;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_O::vf3 */
uint F_00eb8880(void)
{
  GEN_ENTER(0xeb8880u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_O::vf4 */
uint F_00eb8890(void)
{
  GEN_ENTER(0xeb8890u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_O::vf5 */
int F_00eb88d0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb88d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(in_ecx + 0x2e4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
    iVar2 = iVar2 + *(int *)(iVar1 + 0x10);
  }
  return iVar2;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_O::vf6 */
unsigned int F_00eb88f0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb88f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *(int *)((int)this + 0x2e4); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x18)) {
    iVar4 = *(int *)(iVar2 + 0xc);
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = (uint *)(iVar4 + 8);
        iVar4 = *(int *)(iVar4 + 4);
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb8930 */
unsigned int F_00eb8930(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8930u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d374));
  F_00eb1dd0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BG::vf1 */
uint F_00eb8950(void)
{
  GEN_ENTER(0xeb8950u, 0u, 0u, 0u, 0u);
  return 0x5555555;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BG::vf2 */
uint F_00eb8960(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8960u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x438) << 5;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BG::vf3 */
uint F_00eb8970(void)
{
  GEN_ENTER(0xeb8970u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BG::vf4 */
uint F_00eb8980(void)
{
  GEN_ENTER(0xeb8980u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BG::vf5 */
int F_00eb89c0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb89c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(in_ecx + 0x464); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
    iVar2 = iVar2 + *(int *)(iVar1 + 0x10);
  }
  return iVar2;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BG::vf6 */
unsigned int F_00eb89e0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb89e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *(int *)((int)this + 0x464); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x18)) {
    iVar4 = *(int *)(iVar2 + 0xc);
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = (uint *)(iVar4 + 8);
        iVar4 = *(int *)(iVar4 + 4);
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb8a20 */
unsigned int F_00eb8a20(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8a20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d394));
  F_00eb1e20(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_CH::vf1 */
uint F_00eb8a40(void)
{
  GEN_ENTER(0xeb8a40u, 0u, 0u, 0u, 0u);
  return 0x5555555;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_CH::vf2 */
uint F_00eb8a50(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8a50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x768) << 5;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_CH::vf3 */
uint F_00eb8a60(void)
{
  GEN_ENTER(0xeb8a60u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_CH::vf4 */
uint F_00eb8a70(void)
{
  GEN_ENTER(0xeb8a70u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_CH::vf5 */
int F_00eb8ab0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8ab0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(in_ecx + 0x794); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
    iVar2 = iVar2 + *(int *)(iVar1 + 0x10);
  }
  return iVar2;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_CH::vf6 */
unsigned int F_00eb8ad0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8ad0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *(int *)((int)this + 0x794); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x18)) {
    iVar4 = *(int *)(iVar2 + 0xc);
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = (uint *)(iVar4 + 8);
        iVar4 = *(int *)(iVar4 + 4);
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb8b10 */
unsigned int F_00eb8b10(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8b10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d3b4));
  F_00eb1e70(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BH::vf1 */
uint F_00eb8b30(void)
{
  GEN_ENTER(0xeb8b30u, 0u, 0u, 0u, 0u);
  return 0x5555555;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BH::vf2 */
uint F_00eb8b40(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8b40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x468) << 5;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BH::vf3 */
uint F_00eb8b50(void)
{
  GEN_ENTER(0xeb8b50u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BH::vf4 */
uint F_00eb8b60(void)
{
  GEN_ENTER(0xeb8b60u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BH::vf5 */
int F_00eb8ba0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8ba0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(in_ecx + 0x494); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
    iVar2 = iVar2 + *(int *)(iVar1 + 0x10);
  }
  return iVar2;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BH::vf6 */
unsigned int F_00eb8bc0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8bc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *(int *)((int)this + 0x494); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x18)) {
    iVar4 = *(int *)(iVar2 + 0xc);
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = (uint *)(iVar4 + 8);
        iVar4 = *(int *)(iVar4 + 4);
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb8c00 */
unsigned int F_00eb8c00(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8c00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d3d4));
  F_00eb1ec0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DH::vf1 */
uint F_00eb8c20(void)
{
  GEN_ENTER(0xeb8c20u, 0u, 0u, 0u, 0u);
  return 0x5555555;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DH::vf2 */
uint F_00eb8c30(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8c30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0xa68) << 5;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DH::vf3 */
uint F_00eb8c40(void)
{
  GEN_ENTER(0xeb8c40u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DH::vf4 */
uint F_00eb8c50(void)
{
  GEN_ENTER(0xeb8c50u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DH::vf5 */
int F_00eb8c90(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8c90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(in_ecx + 0xa94); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
    iVar2 = iVar2 + *(int *)(iVar1 + 0x10);
  }
  return iVar2;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DH::vf6 */
unsigned int F_00eb8cb0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8cb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *(int *)((int)this + 0xa94); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x18)) {
    iVar4 = *(int *)(iVar2 + 0xc);
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = (uint *)(iVar4 + 8);
        iVar4 = *(int *)(iVar4 + 4);
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb8cf0 */
unsigned int F_00eb8cf0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8cf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d3f4));
  F_00eb1f10(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_CM::vf1 */
uint F_00eb8d10(void)
{
  GEN_ENTER(0xeb8d10u, 0u, 0u, 0u, 0u);
  return 0x5555555;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_CM::vf2 */
uint F_00eb8d20(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8d20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x858) << 5;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_CM::vf3 */
uint F_00eb8d30(void)
{
  GEN_ENTER(0xeb8d30u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_CM::vf4 */
uint F_00eb8d40(void)
{
  GEN_ENTER(0xeb8d40u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_CM::vf5 */
int F_00eb8d80(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8d80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(in_ecx + 0x884); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
    iVar2 = iVar2 + *(int *)(iVar1 + 0x10);
  }
  return iVar2;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_CM::vf6 */
unsigned int F_00eb8da0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8da0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *(int *)((int)this + 0x884); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x18)) {
    iVar4 = *(int *)(iVar2 + 0xc);
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = (uint *)(iVar4 + 8);
        iVar4 = *(int *)(iVar4 + 4);
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb8de0 */
unsigned int F_00eb8de0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8de0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d414));
  F_00eb1f60(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DN::vf1 */
uint F_00eb8e00(void)
{
  GEN_ENTER(0xeb8e00u, 0u, 0u, 0u, 0u);
  return 0x5555555;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DN::vf2 */
uint F_00eb8e10(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8e10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0xb88) << 5;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DN::vf3 */
uint F_00eb8e20(void)
{
  GEN_ENTER(0xeb8e20u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DN::vf4 */
uint F_00eb8e30(void)
{
  GEN_ENTER(0xeb8e30u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DN::vf5 */
int F_00eb8e70(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8e70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(in_ecx + 0xbb4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
    iVar2 = iVar2 + *(int *)(iVar1 + 0x10);
  }
  return iVar2;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DN::vf6 */
unsigned int F_00eb8e90(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8e90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *(int *)((int)this + 0xbb4); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x18)) {
    iVar4 = *(int *)(iVar2 + 0xc);
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = (uint *)(iVar4 + 8);
        iVar4 = *(int *)(iVar4 + 4);
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb8ed0 */
unsigned int F_00eb8ed0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8ed0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d434));
  F_00eb1fb0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_P::vf1 */
uint F_00eb8ef0(void)
{
  GEN_ENTER(0xeb8ef0u, 0u, 0u, 0u, 0u);
  return 0x5555555;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_P::vf2 */
uint F_00eb8f00(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8f00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x2e8) << 5;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_P::vf3 */
uint F_00eb8f10(void)
{
  GEN_ENTER(0xeb8f10u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_P::vf4 */
uint F_00eb8f20(void)
{
  GEN_ENTER(0xeb8f20u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_P::vf5 */
int F_00eb8f60(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8f60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(in_ecx + 0x314); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
    iVar2 = iVar2 + *(int *)(iVar1 + 0x10);
  }
  return iVar2;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_P::vf6 */
unsigned int F_00eb8f80(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8f80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *(int *)((int)this + 0x314); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x18)) {
    iVar4 = *(int *)(iVar2 + 0xc);
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = (uint *)(iVar4 + 8);
        iVar4 = *(int *)(iVar4 + 4);
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb8fc0 */
unsigned int F_00eb8fc0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8fc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d454));
  F_00eb2000(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_BC::vf1 */
uint F_00eb8fe0(void)
{
  GEN_ENTER(0xeb8fe0u, 0u, 0u, 0u, 0u);
  return 0x7ffffff;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_BC::vf2 */
uint F_00eb8ff0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb8ff0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 600) << 5;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_BC::vf3 */
uint F_00eb9000(void)
{
  GEN_ENTER(0xeb9000u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_BC::vf4 */
uint F_00eb9010(void)
{
  GEN_ENTER(0xeb9010u, 0u, 0u, 0u, 0u);
  return 0x10;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_BC::vf5 */
int F_00eb9050(unsigned int gen_a0)
{
  GEN_ENTER(0xeb9050u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(in_ecx + 0x284); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
    iVar2 = iVar2 + *(int *)(iVar1 + 0x10);
  }
  return iVar2;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_BC::vf6 */
unsigned int F_00eb9070(unsigned int gen_a0)
{
  GEN_ENTER(0xeb9070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *(int *)((int)this + 0x284); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x18)) {
    iVar4 = *(int *)(iVar2 + 0xc);
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = (uint *)(iVar4 + 8);
        iVar4 = *(int *)(iVar4 + 4);
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb90b0 */
unsigned int F_00eb90b0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb90b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d474));
  F_00eb2050(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DC::vf1 */
uint F_00eb90d0(void)
{
  GEN_ENTER(0xeb90d0u, 0u, 0u, 0u, 0u);
  return 0x5555555;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DC::vf2 */
uint F_00eb90e0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb90e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x978) << 5;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DC::vf3 */
uint F_00eb90f0(void)
{
  GEN_ENTER(0xeb90f0u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DC::vf4 */
uint F_00eb9100(void)
{
  GEN_ENTER(0xeb9100u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DC::vf5 */
int F_00eb9140(unsigned int gen_a0)
{
  GEN_ENTER(0xeb9140u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(in_ecx + 0x9a4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
    iVar2 = iVar2 + *(int *)(iVar1 + 0x10);
  }
  return iVar2;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DC::vf6 */
unsigned int F_00eb9160(unsigned int gen_a0)
{
  GEN_ENTER(0xeb9160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *(int *)((int)this + 0x9a4); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x18)) {
    iVar4 = *(int *)(iVar2 + 0xc);
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = (uint *)(iVar4 + 8);
        iVar4 = *(int *)(iVar4 + 4);
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb91a0 */
unsigned int F_00eb91a0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb91a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d494));
  F_00eb20a0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_CF::vf1 */
uint F_00eb91c0(void)
{
  GEN_ENTER(0xeb91c0u, 0u, 0u, 0u, 0u);
  return 0x7ffffff;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_CF::vf2 */
uint F_00eb91d0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb91d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x4b8) << 5;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_CF::vf3 */
uint F_00eb91e0(void)
{
  GEN_ENTER(0xeb91e0u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_CF::vf4 */
uint F_00eb91f0(void)
{
  GEN_ENTER(0xeb91f0u, 0u, 0u, 0u, 0u);
  return 0x10;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_CF::vf5 */
int F_00eb9230(unsigned int gen_a0)
{
  GEN_ENTER(0xeb9230u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(in_ecx + 0x4e4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
    iVar2 = iVar2 + *(int *)(iVar1 + 0x10);
  }
  return iVar2;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_CF::vf6 */
unsigned int F_00eb9250(unsigned int gen_a0)
{
  GEN_ENTER(0xeb9250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *(int *)((int)this + 0x4e4); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x18)) {
    iVar4 = *(int *)(iVar2 + 0xc);
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = (uint *)(iVar4 + 8);
        iVar4 = *(int *)(iVar4 + 4);
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb9290 */
unsigned int F_00eb9290(unsigned int gen_a0)
{
  GEN_ENTER(0xeb9290u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d4b4));
  F_00eb20f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_IG::vf1 */
uint F_00eb92b0(void)
{
  GEN_ENTER(0xeb92b0u, 0u, 0u, 0u, 0u);
  return 0x5555555;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_IG::vf2 */
uint F_00eb92c0(unsigned int gen_a0)
{
  GEN_ENTER(0xeb92c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x1938) << 5;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_IG::vf3 */
uint F_00eb92d0(void)
{
  GEN_ENTER(0xeb92d0u, 0u, 0u, 0u, 0u);
  return 0x30;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_IG::vf4 */
uint F_00eb92e0(void)
{
  GEN_ENTER(0xeb92e0u, 0u, 0u, 0u, 0u);
  return 0x20;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_IG::vf5 */
int F_00eb9320(unsigned int gen_a0)
{
  GEN_ENTER(0xeb9320u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(in_ecx + 0x1964); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
    iVar2 = iVar2 + *(int *)(iVar1 + 0x10);
  }
  return iVar2;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_IG::vf6 */
unsigned int F_00eb9340(unsigned int gen_a0)
{
  GEN_ENTER(0xeb9340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (iVar2 = *(int *)((int)this + 0x1964); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x18)) {
    iVar4 = *(int *)(iVar2 + 0xc);
    uVar5 = 0;
    if (iVar4 != 0) {
      do {
        puVar1 = (uint *)(iVar4 + 8);
        iVar4 = *(int *)(iVar4 + 4);
        if (uVar5 < *puVar1) {
          uVar5 = *puVar1;
        }
      } while (iVar4 != 0);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00eb9380 */
uint F_00eb9380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb9380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  
  this_00 = (undefined *)((int)this + -0x60);
  F_00eb6ea0(this_00);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this_00);
  }
  return (uint)this_00;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf0 */
uint F_00eb93b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb93b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d0f4));
  F_00eb1780(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf0 */
uint F_00eb93e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb93e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d114));
  F_00eb17d0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf0_00eb9410 */
uint F_00eb9410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb9410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d134));
  F_00eb1820(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf0_00eb9440 */
uint F_00eb9440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb9440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d154));
  F_00eb1870(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf0_00eb9470 */
uint F_00eb9470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb9470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d174));
  F_00eb18c0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf0_00eb94a0 */
uint F_00eb94a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb94a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d194));
  F_00eb1910(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf0_00eb94d0 */
uint F_00eb94d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb94d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d1b4));
  F_00eb1960(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf0_00eb9500 */
uint F_00eb9500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb9500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d1d4));
  F_00eb19b0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf0_00eb9530 */
uint F_00eb9530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb9530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d1f4));
  F_00eb1a00(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_WorkDefinitions::vf0_00eb9560 */
uint F_00eb9560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb9560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d214));
  F_00eb1a50(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf0_00eb9590 */
uint F_00eb9590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb9590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d234));
  F_00eb1aa0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DB::vf0 */
uint F_00eb95c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb95c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d254));
  F_00eb1af0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_WorkDefinitions::vf0_00eb95f0 */
uint F_00eb95f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb95f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb1b40(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BA::vf0 */
uint F_00eb9620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb9620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d294));
  F_00eb1b90(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BN::vf0 */
uint F_00eb9650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb9650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d2b4));
  F_00eb1be0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_ME::vf0 */
uint F_00eb9680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb9680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d2d4));
  F_00eb1c30(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_M::vf0 */
uint F_00eb96b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb96b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d2f4));
  F_00eb1c90(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BE::vf0 */
uint F_00eb96e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb96e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d314));
  F_00eb1ce0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BC::vf0 */
uint F_00eb9710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb9710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d334));
  F_00eb1d30(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_O::vf0 */
uint F_00eb9740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb9740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d354));
  F_00eb1d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BG::vf0 */
uint F_00eb9770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb9770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d374));
  F_00eb1dd0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_CH::vf0 */
uint F_00eb97a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb97a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d394));
  F_00eb1e20(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_BH::vf0 */
uint F_00eb97d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb97d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d3b4));
  F_00eb1e70(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DH::vf0 */
uint F_00eb9800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb9800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d3d4));
  F_00eb1ec0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_CM::vf0 */
uint F_00eb9830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb9830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d3f4));
  F_00eb1f10(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DN::vf0 */
uint F_00eb9860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb9860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d414));
  F_00eb1f60(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_P::vf0 */
uint F_00eb9890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb9890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d434));
  F_00eb1fb0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_BC::vf0 */
uint F_00eb98c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb98c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d454));
  F_00eb2000(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_DC::vf0 */
uint F_00eb98f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb98f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d474));
  F_00eb2050(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PoolAllocator_PAVBase_WorkDefinitions_Network_Application_CF::vf0 */
uint F_00eb9920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb9920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d494));
  F_00eb20a0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PoolAllocator_USetParameterInfo_WorkDefinitions_Network_Application_IG::vf0 */
uint F_00eb9950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb9950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d4b4));
  F_00eb20f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00eb9980 */
uint F_00eb9980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb9980u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  char cVar1;
  undefined4 * puVar2;
  byte bVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar5 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)((int)this + 4))[1]));
  cVar1 = *(char *)((int)puVar5 + 0xb5);
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  while (cVar1 == '\0') {
    bVar3 = F_0042c7c0(puVar5 + 3,param_2);
    if (bVar3 == 0) {
      puVar4 = (undefined4 *)*puVar5;
    }
    else {
      puVar4 = (undefined4 *)puVar5[2];
      puVar5 = puVar2;
    }
    puVar2 = puVar5;
    puVar5 = puVar4;
    cVar1 = *(char *)((int)puVar4 + 0xb5);
  }
  *param_1 = (int)puVar2;
  return (uint)param_1;
}

/* ref: FUN_00eb99d0 */
uint F_00eb99d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb99d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00eb99e0 */
uint F_00eb99e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb99e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x81) == '\0') {
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

/* ref: FUN_00eb9a40 */
byte F_00eb9a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb9a40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (0xaaaaaaa < param_1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_004069f0(param_1 * 0x18);
    if (uVar1 == 0) {
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
    }
  }
  *(uint *)this = uVar1;
  *(uint *)((int)this + 4) = uVar1;
  *(uint *)((int)this + 8) = uVar1 + param_1 * 0x18;
  return 1;
}

/* ref: FUN_00eb9ad0 */
uint F_00eb9ad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb9ad0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00eb9ae0 */
uint F_00eb9ae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb9ae0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_0042cbc0(this,param_1);
  F_0042cbc0((undefined *)((int)this + 0x54),param_2);
  return (uint)this;
}

/* ref: FUN_00eb9b10 */
uint F_00eb9b10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb9b10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *param_1 = *(int *)this + param_2 * 0x18;
  return (uint)param_1;
}

/* ref: FUN_00eb9b30 */
uint F_00eb9b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeb9b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  F_00eb2150(this);
  uVar1 = 0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[15])REFP(0x115cfd4));
  if ((param_1 & 1) == 0) {
    uVar1 = 4;
  }
  if ((param_1 & 2) == 0) {
    uVar1 = uVar1 | 2;
  }
  if ((param_1 & 8) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((param_1 & 4) != 0) {
    uVar1 = uVar1 | 0x10;
  }
  *(uint *)((int)this + 0x40) = uVar1;
  *(undefined4 *)((int)this + 0x3c) = 0;
  return (uint)this;
}

/* ref: FUN_00eb9b80 */
uint F_00eb9b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb9b80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004069f0(0xb8);
  if (uVar1 != 0) {
    *(uint *)((int)this + 4) = uVar1;
    *(uint *)uVar1 = uVar1;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0xb4))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0xb5))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00eb9bf0 */
uint F_00eb9bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb9bf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004069f0(0x88);
  if (uVar1 != 0) {
    *(uint *)((int)this + 4) = uVar1;
    *(uint *)uVar1 = uVar1;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x80))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x81))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00eb9c60 */
uint F_00eb9c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb9c60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x20) + param_1)));
  *(int *)(param_1 + -8) = param_2;
  *(undefined4 *)(param_1 + -0xc) = *(undefined4 *)(uVar1 + 0xc);
  *(int *)(uVar1 + 0xc) = param_1 + -0x10;
  *(int *)(uVar1 + 0x10) = *(int *)(uVar1 + 0x10) + (param_2 + -1) * -0x10 + -0x20;
  return uVar1;
}

/* ref: FUN_00eb9ca0 */
uint F_00eb9ca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb9ca0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x30) + param_1)));
  *(int *)(param_1 + -8) = param_2;
  *(undefined4 *)(param_1 + -0xc) = *(undefined4 *)(uVar1 + 0xc);
  *(int *)(uVar1 + 0xc) = param_1 + -0x10;
  *(int *)(uVar1 + 0x10) = *(int *)(uVar1 + 0x10) + (param_2 + -1) * -0x20 + -0x30;
  return uVar1;
}

/* ref: FUN_00eb9ce0 */
uint F_00eb9ce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb9ce0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x30) + param_1)));
  *(int *)(param_1 + -8) = param_2;
  *(undefined4 *)(param_1 + -0xc) = *(undefined4 *)(uVar1 + 0xc);
  *(int *)(uVar1 + 0xc) = param_1 + -0x10;
  *(int *)(uVar1 + 0x10) = *(int *)(uVar1 + 0x10) + (param_2 + -1) * -0x20 + -0x30;
  return uVar1;
}

/* ref: FUN_00eb9d20 */
uint F_00eb9d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb9d20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x30) + param_1)));
  *(int *)(param_1 + -8) = param_2;
  *(undefined4 *)(param_1 + -0xc) = *(undefined4 *)(uVar1 + 0xc);
  *(int *)(uVar1 + 0xc) = param_1 + -0x10;
  *(int *)(uVar1 + 0x10) = *(int *)(uVar1 + 0x10) + (param_2 + -1) * -0x20 + -0x30;
  return uVar1;
}

/* ref: FUN_00eb9d60 */
uint F_00eb9d60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb9d60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x30) + param_1)));
  *(int *)(param_1 + -8) = param_2;
  *(undefined4 *)(param_1 + -0xc) = *(undefined4 *)(uVar1 + 0xc);
  *(int *)(uVar1 + 0xc) = param_1 + -0x10;
  *(int *)(uVar1 + 0x10) = *(int *)(uVar1 + 0x10) + (param_2 + -1) * -0x20 + -0x30;
  return uVar1;
}

/* ref: FUN_00eb9da0 */
uint F_00eb9da0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb9da0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x30) + param_1)));
  *(int *)(param_1 + -8) = param_2;
  *(undefined4 *)(param_1 + -0xc) = *(undefined4 *)(uVar1 + 0xc);
  *(int *)(uVar1 + 0xc) = param_1 + -0x10;
  *(int *)(uVar1 + 0x10) = *(int *)(uVar1 + 0x10) + (param_2 + -1) * -0x20 + -0x30;
  return uVar1;
}

/* ref: FUN_00eb9de0 */
uint F_00eb9de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb9de0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x30) + param_1)));
  *(int *)(param_1 + -8) = param_2;
  *(undefined4 *)(param_1 + -0xc) = *(undefined4 *)(uVar1 + 0xc);
  *(int *)(uVar1 + 0xc) = param_1 + -0x10;
  *(int *)(uVar1 + 0x10) = *(int *)(uVar1 + 0x10) + (param_2 + -1) * -0x20 + -0x30;
  return uVar1;
}

/* ref: FUN_00eb9e20 */
uint F_00eb9e20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb9e20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x20) + param_1)));
  *(int *)(param_1 + -8) = param_2;
  *(undefined4 *)(param_1 + -0xc) = *(undefined4 *)(uVar1 + 0xc);
  *(int *)(uVar1 + 0xc) = param_1 + -0x10;
  *(int *)(uVar1 + 0x10) = *(int *)(uVar1 + 0x10) + (param_2 + -1) * -0x10 + -0x20;
  return uVar1;
}

/* ref: FUN_00eb9e60 */
uint F_00eb9e60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb9e60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x30) + param_1)));
  *(int *)(param_1 + -8) = param_2;
  *(undefined4 *)(param_1 + -0xc) = *(undefined4 *)(uVar1 + 0xc);
  *(int *)(uVar1 + 0xc) = param_1 + -0x10;
  *(int *)(uVar1 + 0x10) = *(int *)(uVar1 + 0x10) + (param_2 + -1) * -0x20 + -0x30;
  return uVar1;
}

/* ref: FUN_00eb9ea0 */
uint F_00eb9ea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb9ea0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x30) + param_1)));
  *(int *)(param_1 + -8) = param_2;
  *(undefined4 *)(param_1 + -0xc) = *(undefined4 *)(uVar1 + 0xc);
  *(int *)(uVar1 + 0xc) = param_1 + -0x10;
  *(int *)(uVar1 + 0x10) = *(int *)(uVar1 + 0x10) + (param_2 + -1) * -0x20 + -0x30;
  return uVar1;
}

/* ref: FUN_00eb9ee0 */
uint F_00eb9ee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb9ee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x20) + param_1)));
  *(int *)(param_1 + -8) = param_2;
  *(undefined4 *)(param_1 + -0xc) = *(undefined4 *)(uVar1 + 0xc);
  *(int *)(uVar1 + 0xc) = param_1 + -0x10;
  *(int *)(uVar1 + 0x10) = *(int *)(uVar1 + 0x10) + (param_2 + -1) * -0x10 + -0x20;
  return uVar1;
}

/* ref: FUN_00eb9f20 */
uint F_00eb9f20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb9f20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x30) + param_1)));
  *(int *)(param_1 + -8) = param_2;
  *(undefined4 *)(param_1 + -0xc) = *(undefined4 *)(uVar1 + 0xc);
  *(int *)(uVar1 + 0xc) = param_1 + -0x10;
  *(int *)(uVar1 + 0x10) = *(int *)(uVar1 + 0x10) + (param_2 + -1) * -0x20 + -0x30;
  return uVar1;
}

/* ref: FUN_00eb9f60 */
uint F_00eb9f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb9f60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x20) + param_1)));
  *(int *)(param_1 + -8) = param_2;
  *(undefined4 *)(param_1 + -0xc) = *(undefined4 *)(uVar1 + 0xc);
  *(int *)(uVar1 + 0xc) = param_1 + -0x10;
  *(int *)(uVar1 + 0x10) = *(int *)(uVar1 + 0x10) + (param_2 + -1) * -0x10 + -0x20;
  return uVar1;
}

/* ref: FUN_00eb9fa0 */
uint F_00eb9fa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb9fa0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x30) + param_1)));
  *(int *)(param_1 + -8) = param_2;
  *(undefined4 *)(param_1 + -0xc) = *(undefined4 *)(uVar1 + 0xc);
  *(int *)(uVar1 + 0xc) = param_1 + -0x10;
  *(int *)(uVar1 + 0x10) = *(int *)(uVar1 + 0x10) + (param_2 + -1) * -0x20 + -0x30;
  return uVar1;
}

/* ref: FUN_00eb9fe0 */
uint F_00eb9fe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeb9fe0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x30) + param_1)));
  *(int *)(param_1 + -8) = param_2;
  *(undefined4 *)(param_1 + -0xc) = *(undefined4 *)(uVar1 + 0xc);
  *(int *)(uVar1 + 0xc) = param_1 + -0x10;
  *(int *)(uVar1 + 0x10) = *(int *)(uVar1 + 0x10) + (param_2 + -1) * -0x20 + -0x30;
  return uVar1;
}

/* ref: FUN_00eba020 */
uint F_00eba020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeba020u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x30) + param_1)));
  *(int *)(param_1 + -8) = param_2;
  *(undefined4 *)(param_1 + -0xc) = *(undefined4 *)(uVar1 + 0xc);
  *(int *)(uVar1 + 0xc) = param_1 + -0x10;
  *(int *)(uVar1 + 0x10) = *(int *)(uVar1 + 0x10) + (param_2 + -1) * -0x20 + -0x30;
  return uVar1;
}

/* ref: FUN_00eba060 */
uint F_00eba060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeba060u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x30) + param_1)));
  *(int *)(param_1 + -8) = param_2;
  *(undefined4 *)(param_1 + -0xc) = *(undefined4 *)(uVar1 + 0xc);
  *(int *)(uVar1 + 0xc) = param_1 + -0x10;
  *(int *)(uVar1 + 0x10) = *(int *)(uVar1 + 0x10) + (param_2 + -1) * -0x20 + -0x30;
  return uVar1;
}

/* ref: FUN_00eba0a0 */
uint F_00eba0a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeba0a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x30) + param_1)));
  *(int *)(param_1 + -8) = param_2;
  *(undefined4 *)(param_1 + -0xc) = *(undefined4 *)(uVar1 + 0xc);
  *(int *)(uVar1 + 0xc) = param_1 + -0x10;
  *(int *)(uVar1 + 0x10) = *(int *)(uVar1 + 0x10) + (param_2 + -1) * -0x20 + -0x30;
  return uVar1;
}

/* ref: FUN_00eba0e0 */
uint F_00eba0e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeba0e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x30) + param_1)));
  *(int *)(param_1 + -8) = param_2;
  *(undefined4 *)(param_1 + -0xc) = *(undefined4 *)(uVar1 + 0xc);
  *(int *)(uVar1 + 0xc) = param_1 + -0x10;
  *(int *)(uVar1 + 0x10) = *(int *)(uVar1 + 0x10) + (param_2 + -1) * -0x20 + -0x30;
  return uVar1;
}

/* ref: FUN_00eba120 */
uint F_00eba120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeba120u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x30) + param_1)));
  *(int *)(param_1 + -8) = param_2;
  *(undefined4 *)(param_1 + -0xc) = *(undefined4 *)(uVar1 + 0xc);
  *(int *)(uVar1 + 0xc) = param_1 + -0x10;
  *(int *)(uVar1 + 0x10) = *(int *)(uVar1 + 0x10) + (param_2 + -1) * -0x20 + -0x30;
  return uVar1;
}

/* ref: FUN_00eba160 */
uint F_00eba160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeba160u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x30) + param_1)));
  *(int *)(param_1 + -8) = param_2;
  *(undefined4 *)(param_1 + -0xc) = *(undefined4 *)(uVar1 + 0xc);
  *(int *)(uVar1 + 0xc) = param_1 + -0x10;
  *(int *)(uVar1 + 0x10) = *(int *)(uVar1 + 0x10) + (param_2 + -1) * -0x20 + -0x30;
  return uVar1;
}

/* ref: FUN_00eba1a0 */
uint F_00eba1a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeba1a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x30) + param_1)));
  *(int *)(param_1 + -8) = param_2;
  *(undefined4 *)(param_1 + -0xc) = *(undefined4 *)(uVar1 + 0xc);
  *(int *)(uVar1 + 0xc) = param_1 + -0x10;
  *(int *)(uVar1 + 0x10) = *(int *)(uVar1 + 0x10) + (param_2 + -1) * -0x20 + -0x30;
  return uVar1;
}

/* ref: FUN_00eba1e0 */
uint F_00eba1e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeba1e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x30) + param_1)));
  *(int *)(param_1 + -8) = param_2;
  *(undefined4 *)(param_1 + -0xc) = *(undefined4 *)(uVar1 + 0xc);
  *(int *)(uVar1 + 0xc) = param_1 + -0x10;
  *(int *)(uVar1 + 0x10) = *(int *)(uVar1 + 0x10) + (param_2 + -1) * -0x20 + -0x30;
  return uVar1;
}

/* ref: FUN_00eba220 */
uint F_00eba220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeba220u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x30) + param_1)));
  *(int *)(param_1 + -8) = param_2;
  *(undefined4 *)(param_1 + -0xc) = *(undefined4 *)(uVar1 + 0xc);
  *(int *)(uVar1 + 0xc) = param_1 + -0x10;
  *(int *)(uVar1 + 0x10) = *(int *)(uVar1 + 0x10) + (param_2 + -1) * -0x20 + -0x30;
  return uVar1;
}

/* ref: FUN_00eba260 */
uint F_00eba260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeba260u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x30) + param_1)));
  *(int *)(param_1 + -8) = param_2;
  *(undefined4 *)(param_1 + -0xc) = *(undefined4 *)(uVar1 + 0xc);
  *(int *)(uVar1 + 0xc) = param_1 + -0x10;
  *(int *)(uVar1 + 0x10) = *(int *)(uVar1 + 0x10) + (param_2 + -1) * -0x20 + -0x30;
  return uVar1;
}

/* ref: FUN_00eba2a0 */
uint F_00eba2a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeba2a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x30) + param_1)));
  *(int *)(param_1 + -8) = param_2;
  *(undefined4 *)(param_1 + -0xc) = *(undefined4 *)(uVar1 + 0xc);
  *(int *)(uVar1 + 0xc) = param_1 + -0x10;
  *(int *)(uVar1 + 0x10) = *(int *)(uVar1 + 0x10) + (param_2 + -1) * -0x20 + -0x30;
  return uVar1;
}

/* ref: FUN_00eba2e0 */
uint F_00eba2e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeba2e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x30) + param_1)));
  *(int *)(param_1 + -8) = param_2;
  *(undefined4 *)(param_1 + -0xc) = *(undefined4 *)(uVar1 + 0xc);
  *(int *)(uVar1 + 0xc) = param_1 + -0x10;
  *(int *)(uVar1 + 0x10) = *(int *)(uVar1 + 0x10) + (param_2 + -1) * -0x20 + -0x30;
  return uVar1;
}

/* ref: FUN_00eba320 */
uint F_00eba320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeba320u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x20) + param_1)));
  *(int *)(param_1 + -8) = param_2;
  *(undefined4 *)(param_1 + -0xc) = *(undefined4 *)(uVar1 + 0xc);
  *(int *)(uVar1 + 0xc) = param_1 + -0x10;
  *(int *)(uVar1 + 0x10) = *(int *)(uVar1 + 0x10) + (param_2 + -1) * -0x10 + -0x20;
  return uVar1;
}

/* ref: FUN_00eba360 */
uint F_00eba360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeba360u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x30) + param_1)));
  *(int *)(param_1 + -8) = param_2;
  *(undefined4 *)(param_1 + -0xc) = *(undefined4 *)(uVar1 + 0xc);
  *(int *)(uVar1 + 0xc) = param_1 + -0x10;
  *(int *)(uVar1 + 0x10) = *(int *)(uVar1 + 0x10) + (param_2 + -1) * -0x20 + -0x30;
  return uVar1;
}

/* ref: FUN_00eba3a0 */
uint F_00eba3a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeba3a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x20) + param_1)));
  *(int *)(param_1 + -8) = param_2;
  *(undefined4 *)(param_1 + -0xc) = *(undefined4 *)(uVar1 + 0xc);
  *(int *)(uVar1 + 0xc) = param_1 + -0x10;
  *(int *)(uVar1 + 0x10) = *(int *)(uVar1 + 0x10) + (param_2 + -1) * -0x10 + -0x20;
  return uVar1;
}

/* ref: FUN_00eba3e0 */
uint F_00eba3e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeba3e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  uVar1 = *((uint *)GEN_TOP(((uVar1 - 0x30) + param_1)));
  *(int *)(param_1 + -8) = param_2;
  *(undefined4 *)(param_1 + -0xc) = *(undefined4 *)(uVar1 + 0xc);
  *(int *)(uVar1 + 0xc) = param_1 + -0x10;
  *(int *)(uVar1 + 0x10) = *(int *)(uVar1 + 0x10) + (param_2 + -1) * -0x20 + -0x30;
  return uVar1;
}

/* ref: FUN_00eba420 */
uint F_00eba420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xeba420u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  ushort * param_5 = (ushort *)(uintptr_t)gen_a4;
  int param_6 = (int)gen_a5;
  int * piVar1;
  ushort * puVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  ushort * puVar6;
  
  puVar6 = param_5;
  iVar5 = param_6;
  do {
    if (iVar5 == 0) {
      *param_2 = param_3;
      param_2[1] = param_4;
      return (uint)param_2;
    }
    if (param_4 == (int *)0x0) {
LAB_00eba475: ;
      uVar4 = (uint)param_3 >> 8;
      param_3 = CONCAT31((int3)uVar4,1);
    }
    else {
      uVar3 = *puVar6;
      if ((*(int *)param_4[9] == 0) || (piVar1 = (int *)param_4[0xd], *piVar1 < 1)) {
        uVar4 = ((code *)*(gen_code32 *)(*param_4 + 0xc))(param_4,(uint)uVar3);
        uVar3 = (ushort)uVar4;
      }
      else {
        *piVar1 = *piVar1 + -1;
        puVar2 = *(ushort * PTR32 *)param_4[9];
        *(ushort * PTR32 *)param_4[9] = puVar2 + 1;
        *puVar2 = uVar3;
      }
      if (uVar3 == 0xffff) goto LAB_00eba475;
    }
    puVar6 = puVar6 + 1;
    iVar5 = iVar5 + -1;
  } while( true );
}

/* ref: FUN_00eba490 */
uint F_00eba490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xeba490u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  uint param_5 = (uint)gen_a4;
  int param_6 = (int)gen_a5;
  int * piVar1;
  undefined2 * puVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = param_6;
  do {
    if (iVar4 == 0) {
      *param_2 = param_3;
      param_2[1] = param_4;
      return (uint)param_2;
    }
    if (param_4 == (int *)0x0) {
LAB_00eba4e2: ;
      uVar3 = (uint)param_3 >> 8;
      param_3 = CONCAT31((int3)uVar3,1);
    }
    else {
      if ((*(int *)param_4[9] == 0) || (piVar1 = (int *)param_4[0xd], *piVar1 < 1)) {
        uVar3 = ((code *)*(gen_code32 *)(*param_4 + 0xc))(param_4,param_5);
      }
      else {
        *piVar1 = *piVar1 + -1;
        puVar2 = *(undefined2 * PTR32 *)param_4[9];
        *(undefined2 * PTR32 *)param_4[9] = puVar2 + 1;
        *puVar2 = (short)param_5;
        uVar3 = param_5;
      }
      if ((short)uVar3 == -1) goto LAB_00eba4e2;
    }
    iVar4 = iVar4 + -1;
  } while( true );
}

/* ref: FUN_00eba500 */
uint F_00eba500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeba500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int * piVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  uVar3 = **(uint * PTR32 *)((int)this + 0x30);
  (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x4))))) = uVar3;
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x8)),0);
  if (*(int *)(uVar3 + 4) != -1) {
    *(int *)(uVar3 + 4) = *(int *)(uVar3 + 4) + 1;
  }
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x8)));
  piVar2 = (int *)F_00eb70c0(&(*(undefined4 *)(gen_frame + 0x4)));
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x4)),0);
  iVar1 = *(int *)(uVar3 + 4);
  if ((iVar1 != 0) && (iVar1 != -1)) {
    *(int *)(uVar3 + 4) = iVar1 + -1;
  }
  iVar1 = *(int *)(uVar3 + 4);
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x4)));
  puVar4 = ((undefined4 *)GEN_TOP((~-(uint)(iVar1 != 0) & uVar3)));
  if (puVar4 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar4)(puVar4,1);
  }
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2,param_1);
  return uVar3;
}

/* ref: FUN_00eba590 */
uint F_00eba590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeba590u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00eb1600(this);
  return (uint)param_1;
}

/* ref: FUN_00eba5b0 */
uint F_00eba5b0(unsigned int gen_a0)
{
  GEN_ENTER(0xeba5b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  undefined * pvVar3;
  
  puVar1 = (undefined4 *)((int)this + 0x3c);
  uVar2 = (int)this + 0x13U & 0xfffffff0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d0f4));
  *(undefined4 *)((int)this + 0x38) = 1;
  *(undefined4 * PTR32 *)((int)this + 0x5c) = puVar1;
  *(uint *)((int)this + 0x34) = uVar2;
  *(undefined4 * PTR32 *)((int)this + 0x68) = puVar1;
  *(undefined4 * PTR32 *)((int)this + 100) = puVar1;
  *(undefined4 * PTR32 *)((int)this + 0x60) = puVar1;
  *(undefined4 *)((int)this + 0x44) = 1;
  if (uVar2 == 0) {
    pvVar3 = F_00c51787(0x20);
    *puVar1 = pvVar3;
    uVar2 = (int)pvVar3 + 0xfU & 0xfffffff0;
  }
  else {
    *puVar1 = 0;
  }
  *(uint *)((int)this + 0x48) = uVar2;
  *(uint *)((int)this + 0x40) = uVar2;
  *(undefined4 *)(uVar2 + 4) = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x48) + 8))) = *(undefined4 *)((int)this + 0x44);
  *(undefined4 *)((int)this + 0x4c) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x48) = puVar1;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  return (uint)this;
}

/* ref: FUN_00eba620 */
uint F_00eba620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeba620u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = F_00eb2de0(*(undefined * PTR32 *)((int)this + 0x60),param_1,param_2);
  pvVar2 = *(undefined * PTR32 *)((int)this + 100);
  while( true ) {
    if (uVar1 != 0) {
      return uVar1;
    }
    if (pvVar2 == (undefined *)0x0) break;
    uVar1 = F_00eb2de0(pvVar2,param_1,param_2);
    pvVar2 = *(undefined * PTR32 *)((int)pvVar2 + 0x18);
  }
  pvVar2 = (undefined *)F_00eb2d60(this,param_1);
  if (pvVar2 == (undefined *)0x0) {
    return 0;
  }
  uVar1 = F_00eb2de0(pvVar2,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00eba690 */
uint F_00eba690(unsigned int gen_a0)
{
  GEN_ENTER(0xeba690u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d114));
  F_00eb2e90(this);
  return (uint)this;
}

/* ref: FUN_00eba6b0 */
uint F_00eba6b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeba6b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = F_00eb2fb0(*(undefined * PTR32 *)((int)this + 0x100),param_1,param_2);
  pvVar2 = *(undefined * PTR32 *)((int)this + 0x104);
  while( true ) {
    if (uVar1 != 0) {
      return uVar1;
    }
    if (pvVar2 == (undefined *)0x0) break;
    uVar1 = F_00eb2fb0(pvVar2,param_1,param_2);
    pvVar2 = *(undefined * PTR32 *)((int)pvVar2 + 0x18);
  }
  pvVar2 = (undefined *)F_00eb2f10(this,param_1);
  if (pvVar2 == (undefined *)0x0) {
    return 0;
  }
  uVar1 = F_00eb2fb0(pvVar2,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00eba730 */
uint F_00eba730(unsigned int gen_a0)
{
  GEN_ENTER(0xeba730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d134));
  F_00eb3050(this);
  return (uint)this;
}

/* ref: FUN_00eba750 */
uint F_00eba750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeba750u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = F_00eb3160(*(undefined * PTR32 *)((int)this + 0xa0),param_1,param_2);
  pvVar2 = *(undefined * PTR32 *)((int)this + 0xa4);
  while( true ) {
    if (uVar1 != 0) {
      return uVar1;
    }
    if (pvVar2 == (undefined *)0x0) break;
    uVar1 = F_00eb3160(pvVar2,param_1,param_2);
    pvVar2 = *(undefined * PTR32 *)((int)pvVar2 + 0x18);
  }
  pvVar2 = (undefined *)F_00eb30d0(this,param_1);
  if (pvVar2 == (undefined *)0x0) {
    return 0;
  }
  uVar1 = F_00eb3160(pvVar2,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00eba7d0 */
uint F_00eba7d0(unsigned int gen_a0)
{
  GEN_ENTER(0xeba7d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d154));
  F_00eb3200(this);
  return (uint)this;
}

/* ref: FUN_00eba7f0 */
uint F_00eba7f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeba7f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = F_00eb3320(*(undefined * PTR32 *)((int)this + 400),param_1,param_2);
  pvVar2 = *(undefined * PTR32 *)((int)this + 0x194);
  while( true ) {
    if (uVar1 != 0) {
      return uVar1;
    }
    if (pvVar2 == (undefined *)0x0) break;
    uVar1 = F_00eb3320(pvVar2,param_1,param_2);
    pvVar2 = *(undefined * PTR32 *)((int)pvVar2 + 0x18);
  }
  pvVar2 = (undefined *)F_00eb3280(this,param_1);
  if (pvVar2 == (undefined *)0x0) {
    return 0;
  }
  uVar1 = F_00eb3320(pvVar2,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00eba870 */
uint F_00eba870(unsigned int gen_a0)
{
  GEN_ENTER(0xeba870u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d174));
  F_00eb33c0(this);
  return (uint)this;
}

/* ref: FUN_00eba890 */
uint F_00eba890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeba890u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = F_00eb34e0(*(undefined * PTR32 *)((int)this + 0xd0),param_1,param_2);
  pvVar2 = *(undefined * PTR32 *)((int)this + 0xd4);
  while( true ) {
    if (uVar1 != 0) {
      return uVar1;
    }
    if (pvVar2 == (undefined *)0x0) break;
    uVar1 = F_00eb34e0(pvVar2,param_1,param_2);
    pvVar2 = *(undefined * PTR32 *)((int)pvVar2 + 0x18);
  }
  pvVar2 = (undefined *)F_00eb3440(this,param_1);
  if (pvVar2 == (undefined *)0x0) {
    return 0;
  }
  uVar1 = F_00eb34e0(pvVar2,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00eba910 */
uint F_00eba910(unsigned int gen_a0)
{
  GEN_ENTER(0xeba910u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d194));
  F_00eb3580(this);
  return (uint)this;
}

/* ref: FUN_00eba930 */
uint F_00eba930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeba930u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = F_00eb36a0(*(undefined * PTR32 *)((int)this + 0x1f0),param_1,param_2);
  pvVar2 = *(undefined * PTR32 *)((int)this + 500);
  while( true ) {
    if (uVar1 != 0) {
      return uVar1;
    }
    if (pvVar2 == (undefined *)0x0) break;
    uVar1 = F_00eb36a0(pvVar2,param_1,param_2);
    pvVar2 = *(undefined * PTR32 *)((int)pvVar2 + 0x18);
  }
  pvVar2 = (undefined *)F_00eb3600(this,param_1);
  if (pvVar2 == (undefined *)0x0) {
    return 0;
  }
  uVar1 = F_00eb36a0(pvVar2,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00eba9b0 */
uint F_00eba9b0(unsigned int gen_a0)
{
  GEN_ENTER(0xeba9b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d1b4));
  F_00eb3740(this);
  return (uint)this;
}

/* ref: FUN_00eba9d0 */
uint F_00eba9d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeba9d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = F_00eb3860(*(undefined * PTR32 *)((int)this + 0x220),param_1,param_2);
  pvVar2 = *(undefined * PTR32 *)((int)this + 0x224);
  while( true ) {
    if (uVar1 != 0) {
      return uVar1;
    }
    if (pvVar2 == (undefined *)0x0) break;
    uVar1 = F_00eb3860(pvVar2,param_1,param_2);
    pvVar2 = *(undefined * PTR32 *)((int)pvVar2 + 0x18);
  }
  pvVar2 = (undefined *)F_00eb37c0(this,param_1);
  if (pvVar2 == (undefined *)0x0) {
    return 0;
  }
  uVar1 = F_00eb3860(pvVar2,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ebaa50 */
uint F_00ebaa50(unsigned int gen_a0)
{
  GEN_ENTER(0xebaa50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d1d4));
  F_00eb3900(this);
  return (uint)this;
}

/* ref: FUN_00ebaa70 */
uint F_00ebaa70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xebaa70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = F_00eb3a10(*(undefined * PTR32 *)((int)this + 0xa0),param_1,param_2);
  pvVar2 = *(undefined * PTR32 *)((int)this + 0xa4);
  while( true ) {
    if (uVar1 != 0) {
      return uVar1;
    }
    if (pvVar2 == (undefined *)0x0) break;
    uVar1 = F_00eb3a10(pvVar2,param_1,param_2);
    pvVar2 = *(undefined * PTR32 *)((int)pvVar2 + 0x18);
  }
  pvVar2 = (undefined *)F_00eb3980(this,param_1);
  if (pvVar2 == (undefined *)0x0) {
    return 0;
  }
  uVar1 = F_00eb3a10(pvVar2,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ebaaf0 */
uint F_00ebaaf0(unsigned int gen_a0)
{
  GEN_ENTER(0xebaaf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d1f4));
  F_00eb3ac0(this);
  return (uint)this;
}

/* ref: FUN_00ebab10 */
uint F_00ebab10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xebab10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = F_00eb3be0(*(undefined * PTR32 *)((int)this + 0x1c0),param_1,param_2);
  pvVar2 = *(undefined * PTR32 *)((int)this + 0x1c4);
  while( true ) {
    if (uVar1 != 0) {
      return uVar1;
    }
    if (pvVar2 == (undefined *)0x0) break;
    uVar1 = F_00eb3be0(pvVar2,param_1,param_2);
    pvVar2 = *(undefined * PTR32 *)((int)pvVar2 + 0x18);
  }
  pvVar2 = (undefined *)F_00eb3b40(this,param_1);
  if (pvVar2 == (undefined *)0x0) {
    return 0;
  }
  uVar1 = F_00eb3be0(pvVar2,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ebab90 */
uint F_00ebab90(unsigned int gen_a0)
{
  GEN_ENTER(0xebab90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d214));
  F_00eb3c80(this);
  return (uint)this;
}

/* ref: FUN_00ebabb0 */
uint F_00ebabb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xebabb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = F_00eb3da0(*(undefined * PTR32 *)((int)this + 0x160),param_1,param_2);
  pvVar2 = *(undefined * PTR32 *)((int)this + 0x164);
  while( true ) {
    if (uVar1 != 0) {
      return uVar1;
    }
    if (pvVar2 == (undefined *)0x0) break;
    uVar1 = F_00eb3da0(pvVar2,param_1,param_2);
    pvVar2 = *(undefined * PTR32 *)((int)pvVar2 + 0x18);
  }
  pvVar2 = (undefined *)F_00eb3d00(this,param_1);
  if (pvVar2 == (undefined *)0x0) {
    return 0;
  }
  uVar1 = F_00eb3da0(pvVar2,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ebac30 */
uint F_00ebac30(unsigned int gen_a0)
{
  GEN_ENTER(0xebac30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d234));
  F_00eb3e40(this);
  return (uint)this;
}

/* ref: FUN_00ebac50 */
uint F_00ebac50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xebac50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = F_00eb3f50(*(undefined * PTR32 *)((int)this + 0xc0),param_1,param_2);
  pvVar2 = *(undefined * PTR32 *)((int)this + 0xc4);
  while( true ) {
    if (uVar1 != 0) {
      return uVar1;
    }
    if (pvVar2 == (undefined *)0x0) break;
    uVar1 = F_00eb3f50(pvVar2,param_1,param_2);
    pvVar2 = *(undefined * PTR32 *)((int)pvVar2 + 0x18);
  }
  pvVar2 = (undefined *)F_00eb3ec0(this,param_1);
  if (pvVar2 == (undefined *)0x0) {
    return 0;
  }
  uVar1 = F_00eb3f50(pvVar2,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ebacd0 */
uint F_00ebacd0(unsigned int gen_a0)
{
  GEN_ENTER(0xebacd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d254));
  F_00eb4000(this);
  return (uint)this;
}

/* ref: FUN_00ebacf0 */
uint F_00ebacf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xebacf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = F_00eb4120(*(undefined * PTR32 *)((int)this + 0x970),param_1,param_2);
  pvVar2 = *(undefined * PTR32 *)((int)this + 0x974);
  while( true ) {
    if (uVar1 != 0) {
      return uVar1;
    }
    if (pvVar2 == (undefined *)0x0) break;
    uVar1 = F_00eb4120(pvVar2,param_1,param_2);
    pvVar2 = *(undefined * PTR32 *)((int)pvVar2 + 0x18);
  }
  pvVar2 = (undefined *)F_00eb4080(this,param_1);
  if (pvVar2 == (undefined *)0x0) {
    return 0;
  }
  uVar1 = F_00eb4120(pvVar2,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ebad70 */
uint F_00ebad70(unsigned int gen_a0)
{
  GEN_ENTER(0xebad70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0(this);
  return (uint)this;
}

/* ref: FUN_00ebad90 */
uint F_00ebad90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xebad90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = F_00eb42d0(*(undefined * PTR32 *)((int)this + 0x80),param_1,param_2);
  pvVar2 = *(undefined * PTR32 *)((int)this + 0x84);
  while( true ) {
    if (uVar1 != 0) {
      return uVar1;
    }
    if (pvVar2 == (undefined *)0x0) break;
    uVar1 = F_00eb42d0(pvVar2,param_1,param_2);
    pvVar2 = *(undefined * PTR32 *)((int)pvVar2 + 0x18);
  }
  pvVar2 = (undefined *)F_00eb4240(this,param_1);
  if (pvVar2 == (undefined *)0x0) {
    return 0;
  }
  uVar1 = F_00eb42d0(pvVar2,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ebae10 */
uint F_00ebae10(unsigned int gen_a0)
{
  GEN_ENTER(0xebae10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d294));
  F_00eb4380(this);
  return (uint)this;
}

/* ref: FUN_00ebae30 */
uint F_00ebae30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xebae30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = F_00eb44a0(*(undefined * PTR32 *)((int)this + 0x340),param_1,param_2);
  pvVar2 = *(undefined * PTR32 *)((int)this + 0x344);
  while( true ) {
    if (uVar1 != 0) {
      return uVar1;
    }
    if (pvVar2 == (undefined *)0x0) break;
    uVar1 = F_00eb44a0(pvVar2,param_1,param_2);
    pvVar2 = *(undefined * PTR32 *)((int)pvVar2 + 0x18);
  }
  pvVar2 = (undefined *)F_00eb4400(this,param_1);
  if (pvVar2 == (undefined *)0x0) {
    return 0;
  }
  uVar1 = F_00eb44a0(pvVar2,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ebaeb0 */
uint F_00ebaeb0(unsigned int gen_a0)
{
  GEN_ENTER(0xebaeb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d2b4));
  F_00eb4540(this);
  return (uint)this;
}

/* ref: FUN_00ebaed0 */
uint F_00ebaed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xebaed0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = F_00eb4660(*(undefined * PTR32 *)((int)this + 0x5b0),param_1,param_2);
  pvVar2 = *(undefined * PTR32 *)((int)this + 0x5b4);
  while( true ) {
    if (uVar1 != 0) {
      return uVar1;
    }
    if (pvVar2 == (undefined *)0x0) break;
    uVar1 = F_00eb4660(pvVar2,param_1,param_2);
    pvVar2 = *(undefined * PTR32 *)((int)pvVar2 + 0x18);
  }
  pvVar2 = (undefined *)F_00eb45c0(this,param_1);
  if (pvVar2 == (undefined *)0x0) {
    return 0;
  }
  uVar1 = F_00eb4660(pvVar2,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ebaf50 */
uint F_00ebaf50(unsigned int gen_a0)
{
  GEN_ENTER(0xebaf50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d2d4));
  F_00eb4700(this);
  return (uint)this;
}

/* ref: FUN_00ebaf70 */
uint F_00ebaf70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xebaf70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = F_00eb4820(*(undefined * PTR32 *)((int)this + 0x2500),param_1,param_2);
  pvVar2 = *(undefined * PTR32 *)((int)this + 0x2504);
  while( true ) {
    if (uVar1 != 0) {
      return uVar1;
    }
    if (pvVar2 == (undefined *)0x0) break;
    uVar1 = F_00eb4820(pvVar2,param_1,param_2);
    pvVar2 = *(undefined * PTR32 *)((int)pvVar2 + 0x18);
  }
  pvVar2 = (undefined *)F_00eb4780(this,param_1);
  if (pvVar2 == (undefined *)0x0) {
    return 0;
  }
  uVar1 = F_00eb4820(pvVar2,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ebaff0 */
uint F_00ebaff0(unsigned int gen_a0)
{
  GEN_ENTER(0xebaff0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d2f4));
  F_00eb48c0(this);
  return (uint)this;
}

/* ref: FUN_00ebb010 */
uint F_00ebb010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xebb010u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = F_00eb49e0(*(undefined * PTR32 *)((int)this + 0x280),param_1,param_2);
  pvVar2 = *(undefined * PTR32 *)((int)this + 0x284);
  while( true ) {
    if (uVar1 != 0) {
      return uVar1;
    }
    if (pvVar2 == (undefined *)0x0) break;
    uVar1 = F_00eb49e0(pvVar2,param_1,param_2);
    pvVar2 = *(undefined * PTR32 *)((int)pvVar2 + 0x18);
  }
  pvVar2 = (undefined *)F_00eb4940(this,param_1);
  if (pvVar2 == (undefined *)0x0) {
    return 0;
  }
  uVar1 = F_00eb49e0(pvVar2,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ebb090 */
uint F_00ebb090(unsigned int gen_a0)
{
  GEN_ENTER(0xebb090u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d314));
  F_00eb4a80(this);
  return (uint)this;
}

/* ref: FUN_00ebb0b0 */
uint F_00ebb0b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xebb0b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = F_00eb4ba0(*(undefined * PTR32 *)((int)this + 0x400),param_1,param_2);
  pvVar2 = *(undefined * PTR32 *)((int)this + 0x404);
  while( true ) {
    if (uVar1 != 0) {
      return uVar1;
    }
    if (pvVar2 == (undefined *)0x0) break;
    uVar1 = F_00eb4ba0(pvVar2,param_1,param_2);
    pvVar2 = *(undefined * PTR32 *)((int)pvVar2 + 0x18);
  }
  pvVar2 = (undefined *)F_00eb4b00(this,param_1);
  if (pvVar2 == (undefined *)0x0) {
    return 0;
  }
  uVar1 = F_00eb4ba0(pvVar2,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ebb130 */
uint F_00ebb130(unsigned int gen_a0)
{
  GEN_ENTER(0xebb130u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d334));
  F_00eb4c40(this);
  return (uint)this;
}

/* ref: FUN_00ebb150 */
uint F_00ebb150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xebb150u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = F_00eb4d60(*(undefined * PTR32 *)((int)this + 0x3a0),param_1,param_2);
  pvVar2 = *(undefined * PTR32 *)((int)this + 0x3a4);
  while( true ) {
    if (uVar1 != 0) {
      return uVar1;
    }
    if (pvVar2 == (undefined *)0x0) break;
    uVar1 = F_00eb4d60(pvVar2,param_1,param_2);
    pvVar2 = *(undefined * PTR32 *)((int)pvVar2 + 0x18);
  }
  pvVar2 = (undefined *)F_00eb4cc0(this,param_1);
  if (pvVar2 == (undefined *)0x0) {
    return 0;
  }
  uVar1 = F_00eb4d60(pvVar2,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ebb1d0 */
uint F_00ebb1d0(unsigned int gen_a0)
{
  GEN_ENTER(0xebb1d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d354));
  F_00eb4e00(this);
  return (uint)this;
}

/* ref: FUN_00ebb1f0 */
uint F_00ebb1f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xebb1f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = F_00eb4f20(*(undefined * PTR32 *)((int)this + 0x2e0),param_1,param_2);
  pvVar2 = *(undefined * PTR32 *)((int)this + 0x2e4);
  while( true ) {
    if (uVar1 != 0) {
      return uVar1;
    }
    if (pvVar2 == (undefined *)0x0) break;
    uVar1 = F_00eb4f20(pvVar2,param_1,param_2);
    pvVar2 = *(undefined * PTR32 *)((int)pvVar2 + 0x18);
  }
  pvVar2 = (undefined *)F_00eb4e80(this,param_1);
  if (pvVar2 == (undefined *)0x0) {
    return 0;
  }
  uVar1 = F_00eb4f20(pvVar2,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ebb270 */
uint F_00ebb270(unsigned int gen_a0)
{
  GEN_ENTER(0xebb270u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d374));
  F_00eb4fc0(this);
  return (uint)this;
}

/* ref: FUN_00ebb290 */
uint F_00ebb290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xebb290u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = F_00eb50e0(*(undefined * PTR32 *)((int)this + 0x460),param_1,param_2);
  pvVar2 = *(undefined * PTR32 *)((int)this + 0x464);
  while( true ) {
    if (uVar1 != 0) {
      return uVar1;
    }
    if (pvVar2 == (undefined *)0x0) break;
    uVar1 = F_00eb50e0(pvVar2,param_1,param_2);
    pvVar2 = *(undefined * PTR32 *)((int)pvVar2 + 0x18);
  }
  pvVar2 = (undefined *)F_00eb5040(this,param_1);
  if (pvVar2 == (undefined *)0x0) {
    return 0;
  }
  uVar1 = F_00eb50e0(pvVar2,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ebb310 */
uint F_00ebb310(unsigned int gen_a0)
{
  GEN_ENTER(0xebb310u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d394));
  F_00eb5180(this);
  return (uint)this;
}

/* ref: FUN_00ebb330 */
uint F_00ebb330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xebb330u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = F_00eb52a0(*(undefined * PTR32 *)((int)this + 0x790),param_1,param_2);
  pvVar2 = *(undefined * PTR32 *)((int)this + 0x794);
  while( true ) {
    if (uVar1 != 0) {
      return uVar1;
    }
    if (pvVar2 == (undefined *)0x0) break;
    uVar1 = F_00eb52a0(pvVar2,param_1,param_2);
    pvVar2 = *(undefined * PTR32 *)((int)pvVar2 + 0x18);
  }
  pvVar2 = (undefined *)F_00eb5200(this,param_1);
  if (pvVar2 == (undefined *)0x0) {
    return 0;
  }
  uVar1 = F_00eb52a0(pvVar2,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ebb3b0 */
uint F_00ebb3b0(unsigned int gen_a0)
{
  GEN_ENTER(0xebb3b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d3b4));
  F_00eb5340(this);
  return (uint)this;
}

/* ref: FUN_00ebb3d0 */
uint F_00ebb3d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xebb3d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = F_00eb5460(*(undefined * PTR32 *)((int)this + 0x490),param_1,param_2);
  pvVar2 = *(undefined * PTR32 *)((int)this + 0x494);
  while( true ) {
    if (uVar1 != 0) {
      return uVar1;
    }
    if (pvVar2 == (undefined *)0x0) break;
    uVar1 = F_00eb5460(pvVar2,param_1,param_2);
    pvVar2 = *(undefined * PTR32 *)((int)pvVar2 + 0x18);
  }
  pvVar2 = (undefined *)F_00eb53c0(this,param_1);
  if (pvVar2 == (undefined *)0x0) {
    return 0;
  }
  uVar1 = F_00eb5460(pvVar2,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ebb450 */
uint F_00ebb450(unsigned int gen_a0)
{
  GEN_ENTER(0xebb450u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d3d4));
  F_00eb5500(this);
  return (uint)this;
}

/* ref: FUN_00ebb470 */
uint F_00ebb470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xebb470u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = F_00eb5620(*(undefined * PTR32 *)((int)this + 0xa90),param_1,param_2);
  pvVar2 = *(undefined * PTR32 *)((int)this + 0xa94);
  while( true ) {
    if (uVar1 != 0) {
      return uVar1;
    }
    if (pvVar2 == (undefined *)0x0) break;
    uVar1 = F_00eb5620(pvVar2,param_1,param_2);
    pvVar2 = *(undefined * PTR32 *)((int)pvVar2 + 0x18);
  }
  pvVar2 = (undefined *)F_00eb5580(this,param_1);
  if (pvVar2 == (undefined *)0x0) {
    return 0;
  }
  uVar1 = F_00eb5620(pvVar2,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ebb4f0 */
uint F_00ebb4f0(unsigned int gen_a0)
{
  GEN_ENTER(0xebb4f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d3f4));
  F_00eb56c0(this);
  return (uint)this;
}

/* ref: FUN_00ebb510 */
uint F_00ebb510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xebb510u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = F_00eb57e0(*(undefined * PTR32 *)((int)this + 0x880),param_1,param_2);
  pvVar2 = *(undefined * PTR32 *)((int)this + 0x884);
  while( true ) {
    if (uVar1 != 0) {
      return uVar1;
    }
    if (pvVar2 == (undefined *)0x0) break;
    uVar1 = F_00eb57e0(pvVar2,param_1,param_2);
    pvVar2 = *(undefined * PTR32 *)((int)pvVar2 + 0x18);
  }
  pvVar2 = (undefined *)F_00eb5740(this,param_1);
  if (pvVar2 == (undefined *)0x0) {
    return 0;
  }
  uVar1 = F_00eb57e0(pvVar2,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ebb590 */
uint F_00ebb590(unsigned int gen_a0)
{
  GEN_ENTER(0xebb590u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d414));
  F_00eb5880(this);
  return (uint)this;
}

/* ref: FUN_00ebb5b0 */
uint F_00ebb5b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xebb5b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = F_00eb59a0(*(undefined * PTR32 *)((int)this + 0xbb0),param_1,param_2);
  pvVar2 = *(undefined * PTR32 *)((int)this + 0xbb4);
  while( true ) {
    if (uVar1 != 0) {
      return uVar1;
    }
    if (pvVar2 == (undefined *)0x0) break;
    uVar1 = F_00eb59a0(pvVar2,param_1,param_2);
    pvVar2 = *(undefined * PTR32 *)((int)pvVar2 + 0x18);
  }
  pvVar2 = (undefined *)F_00eb5900(this,param_1);
  if (pvVar2 == (undefined *)0x0) {
    return 0;
  }
  uVar1 = F_00eb59a0(pvVar2,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ebb630 */
uint F_00ebb630(unsigned int gen_a0)
{
  GEN_ENTER(0xebb630u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d434));
  F_00eb5a40(this);
  return (uint)this;
}

/* ref: FUN_00ebb650 */
uint F_00ebb650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xebb650u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = F_00eb5b60(*(undefined * PTR32 *)((int)this + 0x310),param_1,param_2);
  pvVar2 = *(undefined * PTR32 *)((int)this + 0x314);
  while( true ) {
    if (uVar1 != 0) {
      return uVar1;
    }
    if (pvVar2 == (undefined *)0x0) break;
    uVar1 = F_00eb5b60(pvVar2,param_1,param_2);
    pvVar2 = *(undefined * PTR32 *)((int)pvVar2 + 0x18);
  }
  pvVar2 = (undefined *)F_00eb5ac0(this,param_1);
  if (pvVar2 == (undefined *)0x0) {
    return 0;
  }
  uVar1 = F_00eb5b60(pvVar2,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ebb6d0 */
uint F_00ebb6d0(unsigned int gen_a0)
{
  GEN_ENTER(0xebb6d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d454));
  F_00eb5c00(this);
  return (uint)this;
}

/* ref: FUN_00ebb6f0 */
uint F_00ebb6f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xebb6f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = F_00eb5d20(*(undefined * PTR32 *)((int)this + 0x280),param_1,param_2);
  pvVar2 = *(undefined * PTR32 *)((int)this + 0x284);
  while( true ) {
    if (uVar1 != 0) {
      return uVar1;
    }
    if (pvVar2 == (undefined *)0x0) break;
    uVar1 = F_00eb5d20(pvVar2,param_1,param_2);
    pvVar2 = *(undefined * PTR32 *)((int)pvVar2 + 0x18);
  }
  pvVar2 = (undefined *)F_00eb5c80(this,param_1);
  if (pvVar2 == (undefined *)0x0) {
    return 0;
  }
  uVar1 = F_00eb5d20(pvVar2,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ebb770 */
uint F_00ebb770(unsigned int gen_a0)
{
  GEN_ENTER(0xebb770u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d474));
  F_00eb5dd0(this);
  return (uint)this;
}

/* ref: FUN_00ebb790 */
uint F_00ebb790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xebb790u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = F_00eb5ef0(*(undefined * PTR32 *)((int)this + 0x9a0),param_1,param_2);
  pvVar2 = *(undefined * PTR32 *)((int)this + 0x9a4);
  while( true ) {
    if (uVar1 != 0) {
      return uVar1;
    }
    if (pvVar2 == (undefined *)0x0) break;
    uVar1 = F_00eb5ef0(pvVar2,param_1,param_2);
    pvVar2 = *(undefined * PTR32 *)((int)pvVar2 + 0x18);
  }
  pvVar2 = (undefined *)F_00eb5e50(this,param_1);
  if (pvVar2 == (undefined *)0x0) {
    return 0;
  }
  uVar1 = F_00eb5ef0(pvVar2,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ebb810 */
uint F_00ebb810(unsigned int gen_a0)
{
  GEN_ENTER(0xebb810u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d494));
  F_00eb5f90(this);
  return (uint)this;
}

/* ref: FUN_00ebb830 */
uint F_00ebb830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xebb830u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = F_00eb60a0(*(undefined * PTR32 *)((int)this + 0x4e0),param_1,param_2);
  pvVar2 = *(undefined * PTR32 *)((int)this + 0x4e4);
  while( true ) {
    if (uVar1 != 0) {
      return uVar1;
    }
    if (pvVar2 == (undefined *)0x0) break;
    uVar1 = F_00eb60a0(pvVar2,param_1,param_2);
    pvVar2 = *(undefined * PTR32 *)((int)pvVar2 + 0x18);
  }
  pvVar2 = (undefined *)F_00eb6010(this,param_1);
  if (pvVar2 == (undefined *)0x0) {
    return 0;
  }
  uVar1 = F_00eb60a0(pvVar2,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ebb8b0 */
uint F_00ebb8b0(unsigned int gen_a0)
{
  GEN_ENTER(0xebb8b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d4b4));
  F_00eb6150(this);
  return (uint)this;
}

/* ref: FUN_00ebb8d0 */
uint F_00ebb8d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xebb8d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = F_00eb6270(*(undefined * PTR32 *)((int)this + 0x1960),param_1,param_2);
  pvVar2 = *(undefined * PTR32 *)((int)this + 0x1964);
  while( true ) {
    if (uVar1 != 0) {
      return uVar1;
    }
    if (pvVar2 == (undefined *)0x0) break;
    uVar1 = F_00eb6270(pvVar2,param_1,param_2);
    pvVar2 = *(undefined * PTR32 *)((int)pvVar2 + 0x18);
  }
  pvVar2 = (undefined *)F_00eb61d0(this,param_1);
  if (pvVar2 == (undefined *)0x0) {
    return 0;
  }
  uVar1 = F_00eb6270(pvVar2,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ebb950 */
uint F_00ebb950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xebb950u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  short * psVar2;
  uint uVar3;
  short sVar4;
  char * pcVar5;
  
  if ((*(int *)&gen_args[5]) == 0) {
    *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(undefined4 *)&gen_args[2]);
    (*(undefined4 * PTR32 *)&gen_args[1])[1] = (*(int * PTR32 *)&gen_args[3]);
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (undefined *)((*(int *)&gen_args[0]) + 8);
  pcVar5 = (*(char * PTR32 *)&gen_args[4]);
  do {
    ((char *)(gen_frame + 0x18))[0] = *pcVar5;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(int *)(gen_frame + 0xc)) = 0;
    F_010512d7((wchar_t *)&(*(undefined4 *)(gen_frame + 0x14)),((char *)(gen_frame + 0x18)),1,&(*(int *)(gen_frame + 0xc)),(*(undefined * PTR32 *)(gen_frame + 0x10)));
    if ((*(int * PTR32 *)&gen_args[3]) == (int *)0x0) {
LAB_00ebb9e1: ;
      (*(undefined4 *)&gen_args[2]) = CONCAT31(GEN_PIECE(&(*(undefined4 *)&gen_args[2]), 1, 3),1);
    }
    else {
      sVar4 = (short)(*(undefined4 *)(gen_frame + 0x14));
      if ((*((int *)GEN_TOP((*(int * PTR32 *)&gen_args[3])[9])) == 0) || (piVar1 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[3])[0xd])), *piVar1 < 1)) {
        uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[3]) + 0xc))))((*(int * PTR32 *)&gen_args[3]),(*(undefined4 *)(gen_frame + 0x14)));
        sVar4 = (short)uVar3;
      }
      else {
        *piVar1 = *piVar1 + -1;
        psVar2 = *((short * PTR32 *)GEN_TOP((*(int * PTR32 *)&gen_args[3])[9]));
        *((short * PTR32 *)GEN_TOP((*(int * PTR32 *)&gen_args[3])[9])) = psVar2 + 1;
        *psVar2 = sVar4;
      }
      if (sVar4 == -1) goto LAB_00ebb9e1;
    }
    (*(int *)&gen_args[5]) = (*(int *)&gen_args[5]) + -1;
    pcVar5 = pcVar5 + 1;
    if ((*(int *)&gen_args[5]) == 0) {
      *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(undefined4 *)&gen_args[2]);
      (*(undefined4 * PTR32 *)&gen_args[1])[1] = (*(int * PTR32 *)&gen_args[3]);
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
  } while( true );
}

/* ref: FUN_00ebba20 */
uint F_00ebba20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xebba20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined * param_5 = (undefined *)(uintptr_t)gen_a4;
  gen_size32 param_6 = (gen_size32)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  undefined * pvVar2;
  undefined4 * puVar3;
  gen_size32 _MaxCount;
  gen_size32 sVar4;
  undefined * _Buf;
  
  _MaxCount = param_6;
  _Buf = param_5;
  while( true ) {
    pvVar2 = F_00c48f80(_Buf,0,_MaxCount);
    sVar4 = _MaxCount;
    if (pvVar2 != (undefined *)0x0) {
      sVar4 = (int)pvVar2 - (int)_Buf;
    }
    puVar3 = (undefined4 *)F_00ebb950(param_1,((undefined1 *)(gen_frame + 0x14)),param_3,param_4,_Buf,sVar4);
    param_3 = *puVar3;
    param_4 = puVar3[1];
    if (_MaxCount - sVar4 == 0) break;
    if ((short)param_7 != 0) {
      puVar3 = (undefined4 *)F_00eba490(param_1,((undefined1 *)(gen_frame + 0xc)),*puVar3,puVar3[1],param_7,1);
      param_3 = *puVar3;
      param_4 = puVar3[1];
    }
    _Buf = (undefined *)((int)_Buf + sVar4 + 1);
    _MaxCount = (_MaxCount - sVar4) - 1;
  }
  uVar1 = *puVar3;
  param_2[1] = puVar3[1];
  *param_2 = uVar1;
  return (uint)param_2;
}

/* ref: FUN_00ebbac0 */
byte F_00ebbac0(unsigned int gen_a0)
{
  GEN_ENTER(0xebbac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (*(char *)((int)this + 4) == '\0') {
    piVar1 = *(int * PTR32 *)this;
    if (piVar1 != (int *)0x0) {
      if ((*(int *)piVar1[8] == 0) || (*(int *)piVar1[0xc] < 1)) {
        uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1);
      }
      else {
        uVar2 = (uint)**(byte * PTR32 *)piVar1[8];
      }
      if (uVar2 != 0xffffffff) {
        *(byte *)((int)this + 5) = (byte)uVar2;
        *(undefined1 *)((int)this + 4) = 1;
        return (byte)uVar2;
      }
    }
    *(undefined4 *)this = 0;
    *(undefined1 *)((int)this + 4) = 1;
  }
  return *(byte *)((int)this + 5);
}

/* ref: FUN_00ebbb10 */
uint F_00ebbb10(unsigned int gen_a0)
{
  GEN_ENTER(0xebbb10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  byte * pbVar3;
  uint uVar4;
  
  piVar1 = *(int * PTR32 *)this;
  if (piVar1 != (int *)0x0) {
    if ((*(int *)piVar1[8] == 0) || (piVar2 = (int *)piVar1[0xc], *piVar2 < 1)) {
      uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1);
    }
    else {
      *piVar2 = *piVar2 + -1;
      pbVar3 = *(byte * PTR32 *)piVar1[8];
      *(byte * PTR32 *)piVar1[8] = pbVar3 + 1;
      uVar4 = (uint)*pbVar3;
    }
    if (uVar4 != 0xffffffff) {
      *(undefined1 *)((int)this + 4) = 0;
      return (uint)this;
    }
  }
  *(undefined4 *)this = 0;
  *(undefined1 *)((int)this + 4) = 1;
  return (uint)this;
}

/* ref: FUN_00ebbb60 */
byte F_00ebbb60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xebbb60u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_2;
  if (0xf < (uint)param_2[5]) {
    puVar1 = (undefined4 *)*param_2;
  }
  uVar2 = F_00e68a50(param_1,0,*(undefined4 *)((int)param_1 + 0x10),puVar1,param_2[4]);
  return 1 - (uVar2 != 0);
}

/* ref: FUN_00ebbb90 */
byte F_00ebbb90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xebbb90u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00eb6af0(param_1,param_2);
  return bVar1;
}

/* ref: FUN_00ebbbb0 */
unsigned int F_00ebbbb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xebbbb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined1 * puVar2;
  
  puVar2 = param_1;
  for (iVar1 = param_2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_3;
    puVar2 = puVar2 + 1;
  }
  return 0;
}

/* ref: FUN_00ebbbd0 */
byte F_00ebbbd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xebbbd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00eb6af0(param_1,param_2);
  return bVar1 == 0;
}

/* ref: FUN_00ebbbf0 */
uint F_00ebbbf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xebbbf0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 * puVar1;
  int iVar2;
  bool bVar3;
  undefined8 _Var4;
  
  bVar3 = false;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  if ((param_1 != (int *)0x0) && (*param_1 == 0)) {
    puVar1 = (undefined4 *)F_004069f0(0x10);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      iVar2 = *(int *)(*param_2 + 0x18);
      bVar3 = true;
      if (iVar2 == 0) {
        iVar2 = *param_2 + 0x1c;
      }
      F_0047dca0(((undefined1 *)(gen_frame + 0x4)),iVar2);
      puVar1[1] = 0;
      *puVar1 = (*(undefined * PTR32 (*)[9])REFP(0x115d01c));
      _Var4 = F_01051073();
      *(undefined *)(puVar1 + 2) = _Var4;
    }
    *param_1 = (int)puVar1;
    if (bVar3) {
      F_0047dd00(((undefined1 *)(gen_frame + 0x4)));
    }
  }
  return 4;
}

/* ref: FUN_00ebbc70 */
uint F_00ebbc70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xebbc70u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 * puVar1;
  int iVar2;
  bool bVar3;
  undefined8 _Var4;
  
  bVar3 = false;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  if ((param_1 != (int *)0x0) && (*param_1 == 0)) {
    puVar1 = (undefined4 *)F_004069f0(0x10);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      iVar2 = *(int *)(*param_2 + 0x18);
      bVar3 = true;
      if (iVar2 == 0) {
        iVar2 = *param_2 + 0x1c;
      }
      F_0047dca0(((undefined1 *)(gen_frame + 0x4)),iVar2);
      puVar1[1] = 0;
      *puVar1 = (*(undefined * PTR32 (*)[12])REFP(0x115d044));
      _Var4 = F_01051073();
      *(undefined *)(puVar1 + 2) = _Var4;
    }
    *param_1 = (int)puVar1;
    if (bVar3) {
      F_0047dd00(((undefined1 *)(gen_frame + 0x4)));
    }
  }
  return 4;
}

/* ref: FUN_00ebbcf0 */
uint F_00ebbcf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xebbcf0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 * this;
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = false;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  if ((param_1 != (int *)0x0) && (*param_1 == 0)) {
    this = (undefined4 *)F_004069f0(0x18);
    if (this == (undefined4 *)0x0) {
      this = (undefined4 *)0x0;
    }
    else {
      iVar2 = *(int *)(*param_2 + 0x18);
      bVar3 = true;
      if (iVar2 == 0) {
        iVar2 = *param_2 + 0x1c;
      }
      uVar1 = F_0047dca0(((undefined1 *)(gen_frame + 0x4)),iVar2);
      this[1] = 0;
      *this = (*(undefined * PTR32 (*)[6])REFP(0x115d078));
      F_00eb6750(this,uVar1,1);
    }
    *param_1 = (int)this;
    if (bVar3) {
      F_0047dd00(((undefined1 *)(gen_frame + 0x4)));
    }
  }
  return 4;
}

/* ref: FUN_00ebbd70 */
uint F_00ebbd70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xebbd70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00ebbd90 */
uint F_00ebbd90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xebbd90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00ebbdb0 */
unsigned int F_00ebbdb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xebbdb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
    *(undefined4 *)((int)param_2 + 0x58) = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
    *(undefined4 *)((int)param_2 + 0x60) = 0;
    *(undefined4 *)((int)param_2 + 0x68) = 0;
    F_00ea7d20((undefined4 *)((int)param_2 + 0x58),param_3 + 0x58);
  }
  return 0;
}

/* ref: FUN_00ebbdf0 */
uint F_00ebbdf0(unsigned int gen_a0)
{
  GEN_ENTER(0xebbdf0u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)param_1 + 0x54));
  uVar1 = F_0042c880(param_1);
  return (uint)uVar1;
}

/* ref: FUN_00ebbe10 */
uint F_00ebbe10(unsigned int gen_a0)
{
  GEN_ENTER(0xebbe10u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  *(undefined4 *)((int)param_1 + 0x58) = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
  F_00ea7c20((undefined4 *)((int)param_1 + 0x58));
  uVar1 = F_0042c880(param_1);
  return (uint)uVar1;
}

/* ref: FUN_00ebbe30 */
uint F_00ebbe30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xebbe30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_2)(param_2,0);
  return uVar1;
}

/* ref: FUN_00ebbe40 */
uint F_00ebbe40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xebbe40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042cbc0(this,param_1);
  F_0042cbc0((undefined *)((int)this + 0x54),param_1 + 0x54);
  return (uint)this;
}

/* ref: FUN_00ebbe70 */
uint F_00ebbe70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xebbe70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 8);
  return (uint)param_2;
}

/* ref: FUN_00ebbe90 */
uint F_00ebbe90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xebbe90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 8);
  return (uint)param_2;
}

/* ref: FUN_00ebbea0 */
uint F_00ebbea0(unsigned int gen_a0)
{
  GEN_ENTER(0xebbea0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *(uint *)((int)this + 0x14);
  if (7 < uVar1) {
    uVar2 = F_00429760(*(undefined4 *)this,uVar1 * 2 + 2,0x3d);
    uVar1 = (uint)uVar2;
  }
  *(undefined4 *)((int)this + 0x14) = 7;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)this = 0;
  return uVar1;
}

/* ref: FUN_00ebbee0 */
uint F_00ebbee0(unsigned int gen_a0)
{
  GEN_ENTER(0xebbee0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * piVar1;
  uint extraout_EAX = 0;
  
  piVar1 = (undefined *)((int)this + 0x50);
  *((undefined * PTR32 * PTR32 *)GEN_TOP((piVar1 + *(int *)(*(int *)this + 4) + -0x50))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d0ec));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[15])REFP(0x115cfd4));
  F_00eacbd0((undefined *)((int)this + 4));
  F_00eaf3b0((undefined *)((int)this + 4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP((piVar1 + *(int *)(*(int *)this + 4) + -0x50))) =
       (*(undefined * PTR32 (*)[1])REFP(0x1159a60));
  *(undefined * PTR32 * PTR32 *)piVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1091054));
  F_00c46453(piVar1);
  return extraout_EAX;
}

/* ref: FUN_00ebbf30 */
uint F_00ebbf30(unsigned int gen_a0)
{
  GEN_ENTER(0xebbf30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if ((*((byte *)GEN_TOP((*(int *)(*(int *)this + 4) + 0xc + (int)this))) & 6) == 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x38 + (int)this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x34))(piVar1);
    if (uVar3 == 0xffffffff) {
      uVar4 = 4;
    }
  }
  iVar2 = *(int *)(*(int *)this + 4);
  if (uVar4 != 0) {
    uVar4 = *(uint *)((int)this + iVar2 + 0xc) | uVar4;
    if (*(int *)((int)this + iVar2 + 0x38) == 0) {
      uVar4 = uVar4 | 4;
    }
    *(uint *)((int)this + iVar2 + 0xc) = uVar4 & 0x17;
    uVar4 = *(uint *)((int)this + iVar2 + 0x10) & uVar4 & 0x17;
    if (uVar4 != 0) {
      if ((uVar4 & 4) == 0) {
        if ((uVar4 & 2) == 0) {
          uVar4 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x10)) = "ios_base::eofbit set";
        }
        else {
          uVar4 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x10)) = "ios_base::failbit set";
        }
      }
      else {
        uVar4 = F_00c46280();
        (*(char * PTR32 *)(gen_frame + 0x10)) = "ios_base::badbit set";
      }
      (*(undefined4 *)(gen_frame + 0x14)) = 1;
      (*(uint *)(gen_frame + 0x18)) = uVar4;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 (*)[3])REFP(0x10910a4));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)));
    }
  }
  return (uint)this;
}

/* ref: FUN_00ebbfe0 */
uint F_00ebbfe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xebbfe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  undefined * this_00;
  
  *(int * PTR32 *)this = param_1;
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(*param_1 + 4) + 0x38 + (int)param_1)));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  }
  if ((*((int *)GEN_TOP((*(int *)(*param_1 + 4) + 0xc + (int)param_1))) == 0) &&
     (this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)(*param_1 + 4) + 0x3c + (int)param_1))), this_00 != (undefined *)0x0)) {
    F_00ebbf30(this_00);
  }
  *(bool *)((int)this + 4) = *((int *)GEN_TOP((*(int *)(*param_1 + 4) + 0xc + (int)param_1))) == 0;
  return (uint)this;
}

/* ref: FUN_00ebc060 */
byte F_00ebc060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xebc060u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = *((int *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + (int)(*(undefined * PTR32 *)&gen_args[0]);
  if (*(int *)(iVar2 + 0xc) == 0) {
    if (*(undefined * PTR32 *)(iVar2 + 0x3c) != (undefined *)0x0) {
      F_00a16e10(*(undefined * PTR32 *)(iVar2 + 0x3c));
    }
    if (((char)(*(int *)&gen_args[1]) == '\0') &&
       ((*((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x14 + (int)(*(undefined * PTR32 *)&gen_args[0])))) & 1) != 0)) {
      iVar2 = **((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x30 + (int)(*(undefined * PTR32 *)&gen_args[0]))));
      (*(int *)&gen_args[1]) = iVar2;
      F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x18)),0);
      if (*(int *)(iVar2 + 4) != -1) {
        *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
      }
      F_00c45be8(&(*(undefined4 *)(gen_frame + 0x18)));
      uVar3 = F_0047e5d0(&(*(int *)&gen_args[1]));
      F_00478ec0(&(*(int *)&gen_args[1]));
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x38 + (int)(*(undefined * PTR32 *)&gen_args[0]))));
      if ((*(int *)piVar1[8] == 0) || (*(int *)piVar1[0xc] < 1)) {
        uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1);
      }
      else {
        uVar4 = (uint)**(byte * PTR32 *)piVar1[8];
      }
      while (uVar4 != 0xffffffff) {
        if ((*((byte *)GEN_TOP((*(int *)(uVar3 + 0x10) + (uVar4 & 0xff) * 2))) & 0x48) == 0) goto LAB_00ebc1a7;
        uVar4 = F_00eb6fd0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x38 + (int)(*(undefined * PTR32 *)&gen_args[0])))));
      }
      iVar2 = *((int *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
      uVar3 = *((uint *)GEN_TOP((iVar2 + 0xc + (int)(*(undefined * PTR32 *)&gen_args[0]))));
      uVar4 = uVar3 | 1;
      if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar2 + 0x38))) == 0) {
        uVar4 = uVar3 | 5;
      }
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar2 + 0xc))) = uVar4 & 0x17;
      uVar3 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar2 + 0x10))) & uVar4 & 0x17;
      if (uVar3 != 0) goto joined_r0x00ebc1e4;
    }
LAB_00ebc1a7: ;
    iVar2 = *((int *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + (int)(*(undefined * PTR32 *)&gen_args[0]);
    if (*(int *)(iVar2 + 0xc) == 0) {
      return 1;
    }
  }
  uVar3 = *(uint *)(iVar2 + 0xc) | 2;
  if (*(int *)(iVar2 + 0x38) == 0) {
    uVar3 = *(uint *)(iVar2 + 0xc) | 6;
  }
  *(uint *)(iVar2 + 0xc) = uVar3 & 0x17;
  uVar3 = *(uint *)(iVar2 + 0x10) & uVar3 & 0x17;
  if (uVar3 == 0) {
    return 0;
  }
joined_r0x00ebc1e4: ;
  if ((uVar3 & 4) == 0) {
    if ((uVar3 & 2) == 0) {
      uVar3 = F_00c46280();
      (*(char * PTR32 *)(gen_frame + 0xc)) = "ios_base::eofbit set";
    }
    else {
      uVar3 = F_00c46280();
      (*(char * PTR32 *)(gen_frame + 0xc)) = "ios_base::failbit set";
    }
  }
  else {
    uVar3 = F_00c46280();
    (*(char * PTR32 *)(gen_frame + 0xc)) = "ios_base::badbit set";
  }
  (*(undefined4 *)(gen_frame + 0x10)) = 1;
  (*(uint *)(gen_frame + 0x14)) = uVar3;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[3])REFP(0x10910a4));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
}

/* ref: FUN_00ebc1f0 */
uint F_00ebc1f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xebc1f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1);
  return param_1;
}

/* ref: FUN_00ebc210 */
uint F_00ebc210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xebc210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this,param_1);
  return param_1;
}

/* ref: FUN_00ebc230 */
uint F_00ebc230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xebc230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_1);
  return param_1;
}

/* ref: FUN_00ebc250 */
uint F_00ebc250(unsigned int gen_a0)
{
  GEN_ENTER(0xebc250u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint in_edi;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x0)),0);
  (*(uint *)(gen_frame + 0x8)) = REFG(undefined4, 0x15e38f8);
  if (REFG(undefined4, 0x1370b98) == 0) {
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x4)),0);
    if (REFG(undefined4, 0x1370b98) == 0) {
      REFG(undefined4, 0x1370b98) = REFG(undefined4, 0x15d6788) + 1;
      REFG(undefined4, 0x15d6788) = REFG(undefined4, 0x1370b98);
    }
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x4)));
  }
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  in_edi = REFG(undefined4, 0x1370b98);
  iVar1 = *(*(int * PTR32 *)&gen_args[0]);
  if (REFG(undefined4, 0x1370b98) < *(uint *)(iVar1 + 0xc)) {
    uVar3 = *((uint *)GEN_TOP((*(int *)(iVar1 + 8) + REFG(undefined4, 0x1370b98) * 4)));
    if (uVar3 != 0) goto LAB_00ebc351;
  }
  else {
    uVar3 = 0;
  }
  if (*(char *)(iVar1 + 0x14) == '\0') {
LAB_00ebc2d3: ;
    if (uVar3 != 0) goto LAB_00ebc351;
  }
  else {
    uVar3 = F_00c45d58();
    if (in_edi < *(uint *)(uVar3 + 0xc)) {
      uVar3 = *((uint *)GEN_TOP((*(int *)(uVar3 + 8) + in_edi * 4)));
      goto LAB_00ebc2d3;
    }
  }
  uVar3 = (*(uint *)(gen_frame + 0x8));
  if ((*(uint *)(gen_frame + 0x8)) != 0) {
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x0)));
    return uVar3;
  }
  uVar4 = F_00eb73d0(&(*(uint *)(gen_frame + 0x8)),piVar2);
  uVar3 = (*(uint *)(gen_frame + 0x8));
  if (uVar4 == 0xffffffff) {
                    
    F_00c4c6c9(0,in_edi);
  }
  REFG(undefined4, 0x15e38f8) = (*(uint *)(gen_frame + 0x8));
  F_00c45bc0((undefined *)&(*(int * PTR32 *)&gen_args[0]),0);
  if (*(int *)(uVar3 + 4) != -1) {
    *(int *)(uVar3 + 4) = *(int *)(uVar3 + 4) + 1;
  }
  F_00c45be8(&(*(int * PTR32 *)&gen_args[0]));
  F_00c45ce1(uVar3);
LAB_00ebc351: ;
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x0)));
  return uVar3;
}

/* ref: FUN_00ebc370 */
uint F_00ebc370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xebc370u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 * this;
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = false;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  if ((param_1 != (int *)0x0) && (*param_1 == 0)) {
    this = (undefined4 *)F_004069f0(0x18);
    if (this == (undefined4 *)0x0) {
      this = (undefined4 *)0x0;
    }
    else {
      iVar2 = *(int *)(*param_2 + 0x18);
      bVar3 = true;
      if (iVar2 == 0) {
        iVar2 = *param_2 + 0x1c;
      }
      uVar1 = F_0047dca0(((undefined1 *)(gen_frame + 0x4)),iVar2);
      this[1] = 0;
      *this = (*(undefined * PTR32 (*)[6])REFP(0x115d094));
      F_00eafca0(this,uVar1,1);
    }
    *param_1 = (int)this;
    if (bVar3) {
      F_0047dd00(((undefined1 *)(gen_frame + 0x4)));
    }
  }
  return 4;
}

/* ref: FUN_00ebc410 */
uint F_00ebc410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xebc410u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00ebc430 */
uint F_00ebc430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xebc430u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00ebc440 */
uint F_00ebc440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xebc440u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  char cVar1;
  undefined4 * puVar2;
  byte bVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar5 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)((int)this + 4))[1]));
  cVar1 = *(char *)((int)puVar5 + 0xb5);
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  while (cVar1 == '\0') {
    bVar3 = F_0042c7c0(puVar5 + 3,param_2);
    if (bVar3 == 0) {
      puVar4 = (undefined4 *)*puVar5;
    }
    else {
      puVar4 = (undefined4 *)puVar5[2];
      puVar5 = puVar2;
    }
    puVar2 = puVar5;
    puVar5 = puVar4;
    cVar1 = *(char *)((int)puVar4 + 0xb5);
  }
  if ((puVar2 != *(undefined4 * PTR32 *)((int)this + 4)) &&
     (bVar3 = F_0042c7c0(param_2,puVar2 + 3), bVar3 == 0)) {
    *param_1 = puVar2;
    return (uint)param_1;
  }
  *param_1 = *(undefined4 *)((int)this + 4);
  return (uint)param_1;
}

/* ref: FUN_00ebc4d0 */
uint F_00ebc4d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xebc4d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00ebc4f0 */
uint F_00ebc4f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xebc4f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00ebc500 */
uint F_00ebc500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xebc500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = (int *)((int)this + -0x50);
  *((undefined * PTR32 * PTR32 *)GEN_TOP((*(int *)(*piVar1 + 4) + -0x50 + (int)this))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d0ec));
  *(undefined * PTR32 * PTR32 *)((int)this + -0x4c) =
       (*(undefined * PTR32 (*)[15])REFP(0x115cfd4));
  F_00eacbd0((undefined *)((int)this + -0x4c));
  F_00eaf3b0((undefined *)((int)this + -0x4c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + -0x50) + 4))) + -0x50 + (int)this))) =
       (*(undefined * PTR32 (*)[1])REFP(0x1159a60));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1091054));
  F_00c46453(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(piVar1);
  }
  return (uint)piVar1;
}

/* ref: FUN_00ebc570 */
uint F_00ebc570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xebc570u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004069f0(0xb8);
  if (uVar1 != 0) {
    *(uint *)((int)this + 4) = uVar1;
    *(uint *)uVar1 = uVar1;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0xb4))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0xb5))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00ebc5e0 */
uint F_00ebc5e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xebc5e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  char cVar1;
  undefined4 * puVar2;
  byte bVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar5 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)((int)this + 4))[1]));
  cVar1 = *(char *)((int)puVar5 + 0xb5);
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  while (cVar1 == '\0') {
    bVar3 = F_0042c7c0(puVar5 + 3,param_2);
    if (bVar3 == 0) {
      puVar4 = (undefined4 *)*puVar5;
    }
    else {
      puVar4 = (undefined4 *)puVar5[2];
      puVar5 = puVar2;
    }
    puVar2 = puVar5;
    puVar5 = puVar4;
    cVar1 = *(char *)((int)puVar4 + 0xb5);
  }
  *param_1 = (int)puVar2;
  return (uint)param_1;
}

/* ref: FUN_00ebc630 */
uint F_00ebc630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xebc630u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004069f0(0x88);
  if (uVar1 != 0) {
    *(uint *)((int)this + 4) = uVar1;
    *(uint *)uVar1 = uVar1;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x80))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x81))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00ebc6a0 */
uint F_00ebc6a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xebc6a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  char cVar1;
  undefined4 * puVar2;
  byte bVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar5 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)((int)this + 4))[1]));
  cVar1 = *(char *)((int)puVar5 + 0x81);
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  while (cVar1 == '\0') {
    bVar3 = F_0042c7c0(puVar5 + 4,param_2);
    if (bVar3 == 0) {
      puVar4 = (undefined4 *)*puVar5;
    }
    else {
      puVar4 = (undefined4 *)puVar5[2];
      puVar5 = puVar2;
    }
    puVar2 = puVar5;
    puVar5 = puVar4;
    cVar1 = *(char *)((int)puVar4 + 0x81);
  }
  *param_1 = (int)puVar2;
  return (uint)param_1;
}

/* ref: FUN_00ebc6f0 */
uint F_00ebc6f0(unsigned int gen_a0)
{
  GEN_ENTER(0xebc6f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = *(int *)((int)this + 0x6c);
  if (iVar1 != 0) {
    iVar2 = *(int *)((int)this + 0x74);
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar3 = *((int *)GEN_TOP(((uVar4 - 0x20) + iVar1)));
    *(int *)(iVar1 + -8) = iVar2;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar1 + -0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar2 + -1) * -0x10 + -0x20;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d0f4));
  uVar4 = F_00eb1780(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return uVar4;
}

/* ref: FUN_00ebc740 */
unsigned int F_00ebc740(unsigned int gen_a0)
{
  GEN_ENTER(0xebc740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 0x10c) != 0) {
    uVar4 = 0;
    if (*(int *)((int)this + 0x110) != 0) {
      iVar3 = 0;
      do {
        (*((code *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10c) + iVar3))))))
                  (*(int *)((int)this + 0x10c) + iVar3,0);
        uVar4 = uVar4 + 1;
        iVar3 = iVar3 + 0x14;
      } while (uVar4 < *(uint *)((int)this + 0x110));
    }
    iVar3 = *(int *)((int)this + 0x114);
    iVar1 = *(int *)((int)this + 0x10c);
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar2 = *((int *)GEN_TOP(((uVar4 - 0x30) + iVar1)));
    *(int *)(iVar1 + -8) = iVar3;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar2 + 0xc);
    *(int *)(iVar2 + 0xc) = iVar1 + -0x10;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + (iVar3 + -1) * -0x20 + -0x30;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d114));
  F_00eb17d0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: FUN_00ebc7d0 */
unsigned int F_00ebc7d0(unsigned int gen_a0)
{
  GEN_ENTER(0xebc7d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 0xac) != 0) {
    uVar4 = 0;
    if (*(int *)((int)this + 0xb0) != 0) {
      iVar3 = 0;
      do {
        (*((code *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0xac) + iVar3))))))
                  (*(int *)((int)this + 0xac) + iVar3,0);
        uVar4 = uVar4 + 1;
        iVar3 = iVar3 + 0x14;
      } while (uVar4 < *(uint *)((int)this + 0xb0));
    }
    iVar3 = *(int *)((int)this + 0xb4);
    iVar1 = *(int *)((int)this + 0xac);
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar2 = *((int *)GEN_TOP(((uVar4 - 0x30) + iVar1)));
    *(int *)(iVar1 + -8) = iVar3;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar2 + 0xc);
    *(int *)(iVar2 + 0xc) = iVar1 + -0x10;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + (iVar3 + -1) * -0x20 + -0x30;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d134));
  F_00eb1820(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: FUN_00ebc860 */
unsigned int F_00ebc860(unsigned int gen_a0)
{
  GEN_ENTER(0xebc860u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 0x19c) != 0) {
    uVar4 = 0;
    if (*(int *)((int)this + 0x1a0) != 0) {
      iVar3 = 0;
      do {
        (*((code *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x19c) + iVar3))))))
                  (*(int *)((int)this + 0x19c) + iVar3,0);
        uVar4 = uVar4 + 1;
        iVar3 = iVar3 + 0x14;
      } while (uVar4 < *(uint *)((int)this + 0x1a0));
    }
    iVar3 = *(int *)((int)this + 0x1a4);
    iVar1 = *(int *)((int)this + 0x19c);
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar2 = *((int *)GEN_TOP(((uVar4 - 0x30) + iVar1)));
    *(int *)(iVar1 + -8) = iVar3;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar2 + 0xc);
    *(int *)(iVar2 + 0xc) = iVar1 + -0x10;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + (iVar3 + -1) * -0x20 + -0x30;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d154));
  F_00eb1870(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: FUN_00ebc8f0 */
unsigned int F_00ebc8f0(unsigned int gen_a0)
{
  GEN_ENTER(0xebc8f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 0xdc) != 0) {
    uVar4 = 0;
    if (*(int *)((int)this + 0xe0) != 0) {
      iVar3 = 0;
      do {
        (*((code *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0xdc) + iVar3))))))
                  (*(int *)((int)this + 0xdc) + iVar3,0);
        uVar4 = uVar4 + 1;
        iVar3 = iVar3 + 0x14;
      } while (uVar4 < *(uint *)((int)this + 0xe0));
    }
    iVar3 = *(int *)((int)this + 0xe4);
    iVar1 = *(int *)((int)this + 0xdc);
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar2 = *((int *)GEN_TOP(((uVar4 - 0x30) + iVar1)));
    *(int *)(iVar1 + -8) = iVar3;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar2 + 0xc);
    *(int *)(iVar2 + 0xc) = iVar1 + -0x10;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + (iVar3 + -1) * -0x20 + -0x30;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d174));
  F_00eb18c0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: FUN_00ebc980 */
unsigned int F_00ebc980(unsigned int gen_a0)
{
  GEN_ENTER(0xebc980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 0x1fc) != 0) {
    uVar4 = 0;
    if (*(int *)((int)this + 0x200) != 0) {
      iVar3 = 0;
      do {
        (*((code *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1fc) + iVar3))))))
                  (*(int *)((int)this + 0x1fc) + iVar3,0);
        uVar4 = uVar4 + 1;
        iVar3 = iVar3 + 0x14;
      } while (uVar4 < *(uint *)((int)this + 0x200));
    }
    iVar3 = *(int *)((int)this + 0x204);
    iVar1 = *(int *)((int)this + 0x1fc);
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar2 = *((int *)GEN_TOP(((uVar4 - 0x30) + iVar1)));
    *(int *)(iVar1 + -8) = iVar3;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar2 + 0xc);
    *(int *)(iVar2 + 0xc) = iVar1 + -0x10;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + (iVar3 + -1) * -0x20 + -0x30;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d194));
  F_00eb1910(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: FUN_00ebca10 */
unsigned int F_00ebca10(unsigned int gen_a0)
{
  GEN_ENTER(0xebca10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 0x22c) != 0) {
    uVar4 = 0;
    if (*(int *)((int)this + 0x230) != 0) {
      iVar3 = 0;
      do {
        (*((code *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x22c) + iVar3))))))
                  (*(int *)((int)this + 0x22c) + iVar3,0);
        uVar4 = uVar4 + 1;
        iVar3 = iVar3 + 0x14;
      } while (uVar4 < *(uint *)((int)this + 0x230));
    }
    iVar3 = *(int *)((int)this + 0x234);
    iVar1 = *(int *)((int)this + 0x22c);
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar2 = *((int *)GEN_TOP(((uVar4 - 0x30) + iVar1)));
    *(int *)(iVar1 + -8) = iVar3;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar2 + 0xc);
    *(int *)(iVar2 + 0xc) = iVar1 + -0x10;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + (iVar3 + -1) * -0x20 + -0x30;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d1b4));
  F_00eb1960(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: FUN_00ebcaa0 */
uint F_00ebcaa0(unsigned int gen_a0)
{
  GEN_ENTER(0xebcaa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = *(int *)((int)this + 0xac);
  if (iVar1 != 0) {
    iVar2 = *(int *)((int)this + 0xb4);
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar3 = *((int *)GEN_TOP(((uVar4 - 0x20) + iVar1)));
    *(int *)(iVar1 + -8) = iVar2;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar1 + -0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar2 + -1) * -0x10 + -0x20;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d1d4));
  uVar4 = F_00eb19b0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return uVar4;
}

/* ref: FUN_00ebcb00 */
unsigned int F_00ebcb00(unsigned int gen_a0)
{
  GEN_ENTER(0xebcb00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 0x1cc) != 0) {
    uVar4 = 0;
    if (*(int *)((int)this + 0x1d0) != 0) {
      iVar3 = 0;
      do {
        (*((code *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1cc) + iVar3))))))
                  (*(int *)((int)this + 0x1cc) + iVar3,0);
        uVar4 = uVar4 + 1;
        iVar3 = iVar3 + 0x14;
      } while (uVar4 < *(uint *)((int)this + 0x1d0));
    }
    iVar3 = *(int *)((int)this + 0x1d4);
    iVar1 = *(int *)((int)this + 0x1cc);
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar2 = *((int *)GEN_TOP(((uVar4 - 0x30) + iVar1)));
    *(int *)(iVar1 + -8) = iVar3;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar2 + 0xc);
    *(int *)(iVar2 + 0xc) = iVar1 + -0x10;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + (iVar3 + -1) * -0x20 + -0x30;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d1f4));
  F_00eb1a00(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: FUN_00ebcb90 */
unsigned int F_00ebcb90(unsigned int gen_a0)
{
  GEN_ENTER(0xebcb90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 0x16c) != 0) {
    uVar4 = 0;
    if (*(int *)((int)this + 0x170) != 0) {
      iVar3 = 0;
      do {
        (*((code *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x16c) + iVar3))))))
                  (*(int *)((int)this + 0x16c) + iVar3,0);
        uVar4 = uVar4 + 1;
        iVar3 = iVar3 + 0x14;
      } while (uVar4 < *(uint *)((int)this + 0x170));
    }
    iVar3 = *(int *)((int)this + 0x174);
    iVar1 = *(int *)((int)this + 0x16c);
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar2 = *((int *)GEN_TOP(((uVar4 - 0x30) + iVar1)));
    *(int *)(iVar1 + -8) = iVar3;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar2 + 0xc);
    *(int *)(iVar2 + 0xc) = iVar1 + -0x10;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + (iVar3 + -1) * -0x20 + -0x30;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d214));
  F_00eb1a50(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: FUN_00ebcc20 */
unsigned int F_00ebcc20(unsigned int gen_a0)
{
  GEN_ENTER(0xebcc20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = *(int *)((int)this + 0xcc);
  if (iVar1 != 0) {
    iVar2 = *(int *)((int)this + 0xd4);
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar3 = *((int *)GEN_TOP(((uVar4 - 0x20) + iVar1)));
    *(int *)(iVar1 + -8) = iVar2;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar1 + -0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar2 + -1) * -0x10 + -0x20;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d234));
  F_00eb1aa0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: FUN_00ebcc80 */
unsigned int F_00ebcc80(unsigned int gen_a0)
{
  GEN_ENTER(0xebcc80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 0x97c) != 0) {
    uVar4 = 0;
    if (*(int *)((int)this + 0x980) != 0) {
      iVar3 = 0;
      do {
        (*((code *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x97c) + iVar3))))))
                  (*(int *)((int)this + 0x97c) + iVar3,0);
        uVar4 = uVar4 + 1;
        iVar3 = iVar3 + 0x14;
      } while (uVar4 < *(uint *)((int)this + 0x980));
    }
    iVar3 = *(int *)((int)this + 0x984);
    iVar1 = *(int *)((int)this + 0x97c);
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar2 = *((int *)GEN_TOP(((uVar4 - 0x30) + iVar1)));
    *(int *)(iVar1 + -8) = iVar3;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar2 + 0xc);
    *(int *)(iVar2 + 0xc) = iVar1 + -0x10;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + (iVar3 + -1) * -0x20 + -0x30;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d254));
  F_00eb1af0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: FUN_00ebcd10 */
unsigned int F_00ebcd10(unsigned int gen_a0)
{
  GEN_ENTER(0xebcd10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = *(int *)((int)this + 0x8c);
  if (iVar1 != 0) {
    iVar2 = *(int *)((int)this + 0x94);
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar3 = *((int *)GEN_TOP(((uVar4 - 0x20) + iVar1)));
    *(int *)(iVar1 + -8) = iVar2;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar1 + -0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar2 + -1) * -0x10 + -0x20;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb1b40(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: FUN_00ebcd70 */
unsigned int F_00ebcd70(unsigned int gen_a0)
{
  GEN_ENTER(0xebcd70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 0x34c) != 0) {
    uVar4 = 0;
    if (*(int *)((int)this + 0x350) != 0) {
      iVar3 = 0;
      do {
        (*((code *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x34c) + iVar3))))))
                  (*(int *)((int)this + 0x34c) + iVar3,0);
        uVar4 = uVar4 + 1;
        iVar3 = iVar3 + 0x14;
      } while (uVar4 < *(uint *)((int)this + 0x350));
    }
    iVar3 = *(int *)((int)this + 0x354);
    iVar1 = *(int *)((int)this + 0x34c);
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar2 = *((int *)GEN_TOP(((uVar4 - 0x30) + iVar1)));
    *(int *)(iVar1 + -8) = iVar3;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar2 + 0xc);
    *(int *)(iVar2 + 0xc) = iVar1 + -0x10;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + (iVar3 + -1) * -0x20 + -0x30;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d294));
  F_00eb1b90(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: FUN_00ebce00 */
unsigned int F_00ebce00(unsigned int gen_a0)
{
  GEN_ENTER(0xebce00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 0x5bc) != 0) {
    uVar4 = 0;
    if (*(int *)((int)this + 0x5c0) != 0) {
      iVar3 = 0;
      do {
        (*((code *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x5bc) + iVar3))))))
                  (*(int *)((int)this + 0x5bc) + iVar3,0);
        uVar4 = uVar4 + 1;
        iVar3 = iVar3 + 0x14;
      } while (uVar4 < *(uint *)((int)this + 0x5c0));
    }
    iVar3 = *(int *)((int)this + 0x5c4);
    iVar1 = *(int *)((int)this + 0x5bc);
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar2 = *((int *)GEN_TOP(((uVar4 - 0x30) + iVar1)));
    *(int *)(iVar1 + -8) = iVar3;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar2 + 0xc);
    *(int *)(iVar2 + 0xc) = iVar1 + -0x10;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + (iVar3 + -1) * -0x20 + -0x30;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d2b4));
  F_00eb1be0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: FUN_00ebce90 */
unsigned int F_00ebce90(unsigned int gen_a0)
{
  GEN_ENTER(0xebce90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 0x250c) != 0) {
    uVar4 = 0;
    if (*(int *)((int)this + 0x2510) != 0) {
      iVar3 = 0;
      do {
        (*((code *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x250c) + iVar3))))))
                  (*(int *)((int)this + 0x250c) + iVar3,0);
        uVar4 = uVar4 + 1;
        iVar3 = iVar3 + 0x14;
      } while (uVar4 < *(uint *)((int)this + 0x2510));
    }
    iVar3 = *(int *)((int)this + 0x2514);
    iVar1 = *(int *)((int)this + 0x250c);
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar2 = *((int *)GEN_TOP(((uVar4 - 0x30) + iVar1)));
    *(int *)(iVar1 + -8) = iVar3;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar2 + 0xc);
    *(int *)(iVar2 + 0xc) = iVar1 + -0x10;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + (iVar3 + -1) * -0x20 + -0x30;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d2d4));
  F_00eb1c30(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: FUN_00ebcf20 */
unsigned int F_00ebcf20(unsigned int gen_a0)
{
  GEN_ENTER(0xebcf20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 0x28c) != 0) {
    uVar4 = 0;
    if (*(int *)((int)this + 0x290) != 0) {
      iVar3 = 0;
      do {
        (*((code *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x28c) + iVar3))))))
                  (*(int *)((int)this + 0x28c) + iVar3,0);
        uVar4 = uVar4 + 1;
        iVar3 = iVar3 + 0x14;
      } while (uVar4 < *(uint *)((int)this + 0x290));
    }
    iVar3 = *(int *)((int)this + 0x294);
    iVar1 = *(int *)((int)this + 0x28c);
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar2 = *((int *)GEN_TOP(((uVar4 - 0x30) + iVar1)));
    *(int *)(iVar1 + -8) = iVar3;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar2 + 0xc);
    *(int *)(iVar2 + 0xc) = iVar1 + -0x10;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + (iVar3 + -1) * -0x20 + -0x30;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d2f4));
  F_00eb1c90(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: FUN_00ebcfb0 */
unsigned int F_00ebcfb0(unsigned int gen_a0)
{
  GEN_ENTER(0xebcfb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 0x40c) != 0) {
    uVar4 = 0;
    if (*(int *)((int)this + 0x410) != 0) {
      iVar3 = 0;
      do {
        (*((code *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x40c) + iVar3))))))
                  (*(int *)((int)this + 0x40c) + iVar3,0);
        uVar4 = uVar4 + 1;
        iVar3 = iVar3 + 0x14;
      } while (uVar4 < *(uint *)((int)this + 0x410));
    }
    iVar3 = *(int *)((int)this + 0x414);
    iVar1 = *(int *)((int)this + 0x40c);
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar2 = *((int *)GEN_TOP(((uVar4 - 0x30) + iVar1)));
    *(int *)(iVar1 + -8) = iVar3;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar2 + 0xc);
    *(int *)(iVar2 + 0xc) = iVar1 + -0x10;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + (iVar3 + -1) * -0x20 + -0x30;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d314));
  F_00eb1ce0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: FUN_00ebd040 */
unsigned int F_00ebd040(unsigned int gen_a0)
{
  GEN_ENTER(0xebd040u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 0x3ac) != 0) {
    uVar4 = 0;
    if (*(int *)((int)this + 0x3b0) != 0) {
      iVar3 = 0;
      do {
        (*((code *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x3ac) + iVar3))))))
                  (*(int *)((int)this + 0x3ac) + iVar3,0);
        uVar4 = uVar4 + 1;
        iVar3 = iVar3 + 0x14;
      } while (uVar4 < *(uint *)((int)this + 0x3b0));
    }
    iVar3 = *(int *)((int)this + 0x3b4);
    iVar1 = *(int *)((int)this + 0x3ac);
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar2 = *((int *)GEN_TOP(((uVar4 - 0x30) + iVar1)));
    *(int *)(iVar1 + -8) = iVar3;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar2 + 0xc);
    *(int *)(iVar2 + 0xc) = iVar1 + -0x10;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + (iVar3 + -1) * -0x20 + -0x30;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d334));
  F_00eb1d30(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: FUN_00ebd0d0 */
unsigned int F_00ebd0d0(unsigned int gen_a0)
{
  GEN_ENTER(0xebd0d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 0x2ec) != 0) {
    uVar4 = 0;
    if (*(int *)((int)this + 0x2f0) != 0) {
      iVar3 = 0;
      do {
        (*((code *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x2ec) + iVar3))))))
                  (*(int *)((int)this + 0x2ec) + iVar3,0);
        uVar4 = uVar4 + 1;
        iVar3 = iVar3 + 0x14;
      } while (uVar4 < *(uint *)((int)this + 0x2f0));
    }
    iVar3 = *(int *)((int)this + 0x2f4);
    iVar1 = *(int *)((int)this + 0x2ec);
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar2 = *((int *)GEN_TOP(((uVar4 - 0x30) + iVar1)));
    *(int *)(iVar1 + -8) = iVar3;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar2 + 0xc);
    *(int *)(iVar2 + 0xc) = iVar1 + -0x10;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + (iVar3 + -1) * -0x20 + -0x30;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d354));
  F_00eb1d80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: FUN_00ebd160 */
unsigned int F_00ebd160(unsigned int gen_a0)
{
  GEN_ENTER(0xebd160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 0x46c) != 0) {
    uVar4 = 0;
    if (*(int *)((int)this + 0x470) != 0) {
      iVar3 = 0;
      do {
        (*((code *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x46c) + iVar3))))))
                  (*(int *)((int)this + 0x46c) + iVar3,0);
        uVar4 = uVar4 + 1;
        iVar3 = iVar3 + 0x14;
      } while (uVar4 < *(uint *)((int)this + 0x470));
    }
    iVar3 = *(int *)((int)this + 0x474);
    iVar1 = *(int *)((int)this + 0x46c);
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar2 = *((int *)GEN_TOP(((uVar4 - 0x30) + iVar1)));
    *(int *)(iVar1 + -8) = iVar3;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar2 + 0xc);
    *(int *)(iVar2 + 0xc) = iVar1 + -0x10;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + (iVar3 + -1) * -0x20 + -0x30;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d374));
  F_00eb1dd0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: FUN_00ebd1f0 */
unsigned int F_00ebd1f0(unsigned int gen_a0)
{
  GEN_ENTER(0xebd1f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 0x79c) != 0) {
    uVar4 = 0;
    if (*(int *)((int)this + 0x7a0) != 0) {
      iVar3 = 0;
      do {
        (*((code *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x79c) + iVar3))))))
                  (*(int *)((int)this + 0x79c) + iVar3,0);
        uVar4 = uVar4 + 1;
        iVar3 = iVar3 + 0x14;
      } while (uVar4 < *(uint *)((int)this + 0x7a0));
    }
    iVar3 = *(int *)((int)this + 0x7a4);
    iVar1 = *(int *)((int)this + 0x79c);
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar2 = *((int *)GEN_TOP(((uVar4 - 0x30) + iVar1)));
    *(int *)(iVar1 + -8) = iVar3;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar2 + 0xc);
    *(int *)(iVar2 + 0xc) = iVar1 + -0x10;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + (iVar3 + -1) * -0x20 + -0x30;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d394));
  F_00eb1e20(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: FUN_00ebd280 */
unsigned int F_00ebd280(unsigned int gen_a0)
{
  GEN_ENTER(0xebd280u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 0x49c) != 0) {
    uVar4 = 0;
    if (*(int *)((int)this + 0x4a0) != 0) {
      iVar3 = 0;
      do {
        (*((code *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x49c) + iVar3))))))
                  (*(int *)((int)this + 0x49c) + iVar3,0);
        uVar4 = uVar4 + 1;
        iVar3 = iVar3 + 0x14;
      } while (uVar4 < *(uint *)((int)this + 0x4a0));
    }
    iVar3 = *(int *)((int)this + 0x4a4);
    iVar1 = *(int *)((int)this + 0x49c);
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar2 = *((int *)GEN_TOP(((uVar4 - 0x30) + iVar1)));
    *(int *)(iVar1 + -8) = iVar3;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar2 + 0xc);
    *(int *)(iVar2 + 0xc) = iVar1 + -0x10;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + (iVar3 + -1) * -0x20 + -0x30;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d3b4));
  F_00eb1e70(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: FUN_00ebd310 */
unsigned int F_00ebd310(unsigned int gen_a0)
{
  GEN_ENTER(0xebd310u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 0xa9c) != 0) {
    uVar4 = 0;
    if (*(int *)((int)this + 0xaa0) != 0) {
      iVar3 = 0;
      do {
        (*((code *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0xa9c) + iVar3))))))
                  (*(int *)((int)this + 0xa9c) + iVar3,0);
        uVar4 = uVar4 + 1;
        iVar3 = iVar3 + 0x14;
      } while (uVar4 < *(uint *)((int)this + 0xaa0));
    }
    iVar3 = *(int *)((int)this + 0xaa4);
    iVar1 = *(int *)((int)this + 0xa9c);
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar2 = *((int *)GEN_TOP(((uVar4 - 0x30) + iVar1)));
    *(int *)(iVar1 + -8) = iVar3;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar2 + 0xc);
    *(int *)(iVar2 + 0xc) = iVar1 + -0x10;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + (iVar3 + -1) * -0x20 + -0x30;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d3d4));
  F_00eb1ec0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: FUN_00ebd3a0 */
unsigned int F_00ebd3a0(unsigned int gen_a0)
{
  GEN_ENTER(0xebd3a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 0x88c) != 0) {
    uVar4 = 0;
    if (*(int *)((int)this + 0x890) != 0) {
      iVar3 = 0;
      do {
        (*((code *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x88c) + iVar3))))))
                  (*(int *)((int)this + 0x88c) + iVar3,0);
        uVar4 = uVar4 + 1;
        iVar3 = iVar3 + 0x14;
      } while (uVar4 < *(uint *)((int)this + 0x890));
    }
    iVar3 = *(int *)((int)this + 0x894);
    iVar1 = *(int *)((int)this + 0x88c);
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar2 = *((int *)GEN_TOP(((uVar4 - 0x30) + iVar1)));
    *(int *)(iVar1 + -8) = iVar3;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar2 + 0xc);
    *(int *)(iVar2 + 0xc) = iVar1 + -0x10;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + (iVar3 + -1) * -0x20 + -0x30;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d3f4));
  F_00eb1f10(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: FUN_00ebd430 */
unsigned int F_00ebd430(unsigned int gen_a0)
{
  GEN_ENTER(0xebd430u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 0xbbc) != 0) {
    uVar4 = 0;
    if (*(int *)((int)this + 0xbc0) != 0) {
      iVar3 = 0;
      do {
        (*((code *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0xbbc) + iVar3))))))
                  (*(int *)((int)this + 0xbbc) + iVar3,0);
        uVar4 = uVar4 + 1;
        iVar3 = iVar3 + 0x14;
      } while (uVar4 < *(uint *)((int)this + 0xbc0));
    }
    iVar3 = *(int *)((int)this + 0xbc4);
    iVar1 = *(int *)((int)this + 0xbbc);
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar2 = *((int *)GEN_TOP(((uVar4 - 0x30) + iVar1)));
    *(int *)(iVar1 + -8) = iVar3;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar2 + 0xc);
    *(int *)(iVar2 + 0xc) = iVar1 + -0x10;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + (iVar3 + -1) * -0x20 + -0x30;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d414));
  F_00eb1f60(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: FUN_00ebd4c0 */
unsigned int F_00ebd4c0(unsigned int gen_a0)
{
  GEN_ENTER(0xebd4c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 0x31c) != 0) {
    uVar4 = 0;
    if (*(int *)((int)this + 800) != 0) {
      iVar3 = 0;
      do {
        (*((code *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x31c) + iVar3))))))
                  (*(int *)((int)this + 0x31c) + iVar3,0);
        uVar4 = uVar4 + 1;
        iVar3 = iVar3 + 0x14;
      } while (uVar4 < *(uint *)((int)this + 800));
    }
    iVar3 = *(int *)((int)this + 0x324);
    iVar1 = *(int *)((int)this + 0x31c);
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar2 = *((int *)GEN_TOP(((uVar4 - 0x30) + iVar1)));
    *(int *)(iVar1 + -8) = iVar3;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar2 + 0xc);
    *(int *)(iVar2 + 0xc) = iVar1 + -0x10;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + (iVar3 + -1) * -0x20 + -0x30;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d434));
  F_00eb1fb0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: FUN_00ebd550 */
unsigned int F_00ebd550(unsigned int gen_a0)
{
  GEN_ENTER(0xebd550u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = *(int *)((int)this + 0x28c);
  if (iVar1 != 0) {
    iVar2 = *(int *)((int)this + 0x294);
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar3 = *((int *)GEN_TOP(((uVar4 - 0x20) + iVar1)));
    *(int *)(iVar1 + -8) = iVar2;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar1 + -0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar2 + -1) * -0x10 + -0x20;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d454));
  F_00eb2000(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: FUN_00ebd5b0 */
unsigned int F_00ebd5b0(unsigned int gen_a0)
{
  GEN_ENTER(0xebd5b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 0x9ac) != 0) {
    uVar4 = 0;
    if (*(int *)((int)this + 0x9b0) != 0) {
      iVar3 = 0;
      do {
        (*((code *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x9ac) + iVar3))))))
                  (*(int *)((int)this + 0x9ac) + iVar3,0);
        uVar4 = uVar4 + 1;
        iVar3 = iVar3 + 0x14;
      } while (uVar4 < *(uint *)((int)this + 0x9b0));
    }
    iVar3 = *(int *)((int)this + 0x9b4);
    iVar1 = *(int *)((int)this + 0x9ac);
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar2 = *((int *)GEN_TOP(((uVar4 - 0x30) + iVar1)));
    *(int *)(iVar1 + -8) = iVar3;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar2 + 0xc);
    *(int *)(iVar2 + 0xc) = iVar1 + -0x10;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + (iVar3 + -1) * -0x20 + -0x30;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d474));
  F_00eb2050(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: FUN_00ebd640 */
unsigned int F_00ebd640(unsigned int gen_a0)
{
  GEN_ENTER(0xebd640u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = *(int *)((int)this + 0x4ec);
  if (iVar1 != 0) {
    iVar2 = *(int *)((int)this + 0x4f4);
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar3 = *((int *)GEN_TOP(((uVar4 - 0x20) + iVar1)));
    *(int *)(iVar1 + -8) = iVar2;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar1 + -0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar2 + -1) * -0x10 + -0x20;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d494));
  F_00eb20a0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: FUN_00ebd6a0 */
unsigned int F_00ebd6a0(unsigned int gen_a0)
{
  GEN_ENTER(0xebd6a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 0x196c) != 0) {
    uVar4 = 0;
    if (*(int *)((int)this + 0x1970) != 0) {
      iVar3 = 0;
      do {
        (*((code *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x196c) + iVar3))))))
                  (*(int *)((int)this + 0x196c) + iVar3,0);
        uVar4 = uVar4 + 1;
        iVar3 = iVar3 + 0x14;
      } while (uVar4 < *(uint *)((int)this + 0x1970));
    }
    iVar3 = *(int *)((int)this + 0x1974);
    iVar1 = *(int *)((int)this + 0x196c);
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    iVar2 = *((int *)GEN_TOP(((uVar4 - 0x30) + iVar1)));
    *(int *)(iVar1 + -8) = iVar3;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar2 + 0xc);
    *(int *)(iVar2 + 0xc) = iVar1 + -0x10;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + (iVar3 + -1) * -0x20 + -0x30;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d4b4));
  F_00eb20f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: FUN_00ebd730 */
uint F_00ebd730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xebd730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a17030(this,1,param_1);
  return uVar1;
}

/* ref: FUN_00ebd750 */
uint F_00ebd750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xebd750u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint extraout_EAX = 0;
  uint uVar2;
  
  F_004797a0(this);
  *(undefined4 *)((int)this + 0x38) = param_1;
  *(undefined4 *)((int)this + 0x3c) = 0;
  uVar1 = F_00eba500(this,0x20);
  *(short *)((int)this + 0x40) = (short)uVar1;
  if (*(int *)((int)this + 0x38) == 0) {
    uVar1 = *(uint *)((int)this + 0xc) & 0x17 | 4;
    uVar2 = *(uint *)((int)this + 0x10) & uVar1;
    *(uint *)((int)this + 0xc) = uVar1;
    if (uVar2 != 0) {
      if ((uVar2 & 4) == 0) {
        if ((uVar2 & 2) == 0) {
          uVar1 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x10)) = "ios_base::eofbit set";
        }
        else {
          uVar1 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x10)) = "ios_base::failbit set";
        }
      }
      else {
        uVar1 = F_00c46280();
        (*(char * PTR32 *)(gen_frame + 0x10)) = "ios_base::badbit set";
      }
      (*(undefined4 *)(gen_frame + 0x14)) = 1;
      (*(uint *)(gen_frame + 0x18)) = uVar1;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 (*)[3])REFP(0x10910a4));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)));
    }
  }
  if ((char)param_2 != '\0') {
    F_00c463fe(this);
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ebd800 */
uint F_00ebd800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xebd800u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined1 * puVar2;
  
  puVar2 = param_1;
  for (iVar1 = param_2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_3;
    puVar2 = puVar2 + 1;
  }
  return (uint)(param_1 + param_2);
}

/* ref: FUN_00ebd830 */
uint F_00ebd830(unsigned int gen_a0)
{
  GEN_ENTER(0xebd830u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00eba5b0(this);
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 1;
  uVar1 = F_00eba620(this,1,0);
  *(uint *)((int)this + 0x6c) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ebd860 */
uint F_00ebd860(unsigned int gen_a0)
{
  GEN_ENTER(0xebd860u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d114));
  F_00eb2e90(this);
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 4;
  uVar1 = F_00eba6b0(this,4,0);
  *(uint *)((int)this + 0x10c) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ebd8a0 */
uint F_00ebd8a0(unsigned int gen_a0)
{
  GEN_ENTER(0xebd8a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d134));
  F_00eb3050(this);
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 2;
  uVar1 = F_00eba750(this,2,0);
  *(uint *)((int)this + 0xac) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ebd8e0 */
uint F_00ebd8e0(unsigned int gen_a0)
{
  GEN_ENTER(0xebd8e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d154));
  F_00eb3200(this);
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 7;
  uVar1 = F_00eba7f0(this,7,0);
  *(uint *)((int)this + 0x19c) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ebd920 */
uint F_00ebd920(unsigned int gen_a0)
{
  GEN_ENTER(0xebd920u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d174));
  F_00eb33c0(this);
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 3;
  uVar1 = F_00eba890(this,3,0);
  *(uint *)((int)this + 0xdc) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ebd960 */
uint F_00ebd960(unsigned int gen_a0)
{
  GEN_ENTER(0xebd960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d194));
  F_00eb3580(this);
  *(undefined4 *)((int)this + 0x1fc) = 0;
  *(undefined4 *)((int)this + 0x200) = 0;
  *(undefined4 *)((int)this + 0x204) = 9;
  uVar1 = F_00eba930(this,9,0);
  *(uint *)((int)this + 0x1fc) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ebd9a0 */
uint F_00ebd9a0(unsigned int gen_a0)
{
  GEN_ENTER(0xebd9a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d1b4));
  F_00eb3740(this);
  *(undefined4 *)((int)this + 0x22c) = 0;
  *(undefined4 *)((int)this + 0x230) = 0;
  *(undefined4 *)((int)this + 0x234) = 10;
  uVar1 = F_00eba9d0(this,10,0);
  *(uint *)((int)this + 0x22c) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ebd9e0 */
uint F_00ebd9e0(unsigned int gen_a0)
{
  GEN_ENTER(0xebd9e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d1d4));
  F_00eb3900(this);
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 3;
  uVar1 = F_00ebaa70(this,3,0);
  *(uint *)((int)this + 0xac) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ebda20 */
uint F_00ebda20(unsigned int gen_a0)
{
  GEN_ENTER(0xebda20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d1f4));
  F_00eb3ac0(this);
  *(undefined4 *)((int)this + 0x1cc) = 0;
  *(undefined4 *)((int)this + 0x1d0) = 0;
  *(undefined4 *)((int)this + 0x1d4) = 8;
  uVar1 = F_00ebab10(this,8,0);
  *(uint *)((int)this + 0x1cc) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ebda60 */
uint F_00ebda60(unsigned int gen_a0)
{
  GEN_ENTER(0xebda60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d214));
  F_00eb3c80(this);
  *(undefined4 *)((int)this + 0x16c) = 0;
  *(undefined4 *)((int)this + 0x170) = 0;
  *(undefined4 *)((int)this + 0x174) = 6;
  uVar1 = F_00ebabb0(this,6,0);
  *(uint *)((int)this + 0x16c) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ebdaa0 */
uint F_00ebdaa0(unsigned int gen_a0)
{
  GEN_ENTER(0xebdaa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d234));
  F_00eb3e40(this);
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 4;
  uVar1 = F_00ebac50(this,4,0);
  *(uint *)((int)this + 0xcc) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ebdae0 */
uint F_00ebdae0(unsigned int gen_a0)
{
  GEN_ENTER(0xebdae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d254));
  F_00eb4000(this);
  *(undefined4 *)((int)this + 0x97c) = 0;
  *(undefined4 *)((int)this + 0x980) = 0;
  *(undefined4 *)((int)this + 0x984) = 0x31;
  uVar1 = F_00ebacf0(this,0x31,0);
  *(uint *)((int)this + 0x97c) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ebdb20 */
uint F_00ebdb20(unsigned int gen_a0)
{
  GEN_ENTER(0xebdb20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0(this);
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 2;
  uVar1 = F_00ebad90(this,2,0);
  *(uint *)((int)this + 0x8c) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ebdb60 */
uint F_00ebdb60(unsigned int gen_a0)
{
  GEN_ENTER(0xebdb60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d294));
  F_00eb4380(this);
  *(undefined4 *)((int)this + 0x34c) = 0;
  *(undefined4 *)((int)this + 0x350) = 0;
  *(undefined4 *)((int)this + 0x354) = 0x10;
  uVar1 = F_00ebae30(this,0x10,0);
  *(uint *)((int)this + 0x34c) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ebdba0 */
uint F_00ebdba0(unsigned int gen_a0)
{
  GEN_ENTER(0xebdba0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d2b4));
  F_00eb4540(this);
  *(undefined4 *)((int)this + 0x5bc) = 0;
  *(undefined4 *)((int)this + 0x5c0) = 0;
  *(undefined4 *)((int)this + 0x5c4) = 0x1d;
  uVar1 = F_00ebaed0(this,0x1d,0);
  *(uint *)((int)this + 0x5bc) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ebdbe0 */
uint F_00ebdbe0(unsigned int gen_a0)
{
  GEN_ENTER(0xebdbe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d2d4));
  F_00eb4700(this);
  *(undefined4 *)((int)this + 0x250c) = 0;
  *(undefined4 *)((int)this + 0x2510) = 0;
  *(undefined4 *)((int)this + 0x2514) = 0xc4;
  uVar1 = F_00ebaf70(this,0xc4,0);
  *(uint *)((int)this + 0x250c) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ebdc20 */
uint F_00ebdc20(unsigned int gen_a0)
{
  GEN_ENTER(0xebdc20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d2f4));
  F_00eb48c0(this);
  *(undefined4 *)((int)this + 0x28c) = 0;
  *(undefined4 *)((int)this + 0x290) = 0;
  *(undefined4 *)((int)this + 0x294) = 0xc;
  uVar1 = F_00ebb010(this,0xc,0);
  *(uint *)((int)this + 0x28c) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ebdc60 */
uint F_00ebdc60(unsigned int gen_a0)
{
  GEN_ENTER(0xebdc60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d314));
  F_00eb4a80(this);
  *(undefined4 *)((int)this + 0x40c) = 0;
  *(undefined4 *)((int)this + 0x410) = 0;
  *(undefined4 *)((int)this + 0x414) = 0x14;
  uVar1 = F_00ebb0b0(this,0x14,0);
  *(uint *)((int)this + 0x40c) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ebdca0 */
uint F_00ebdca0(unsigned int gen_a0)
{
  GEN_ENTER(0xebdca0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d334));
  F_00eb4c40(this);
  *(undefined4 *)((int)this + 0x3ac) = 0;
  *(undefined4 *)((int)this + 0x3b0) = 0;
  *(undefined4 *)((int)this + 0x3b4) = 0x12;
  uVar1 = F_00ebb150(this,0x12,0);
  *(uint *)((int)this + 0x3ac) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ebdce0 */
uint F_00ebdce0(unsigned int gen_a0)
{
  GEN_ENTER(0xebdce0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d354));
  F_00eb4e00(this);
  *(undefined4 *)((int)this + 0x2ec) = 0;
  *(undefined4 *)((int)this + 0x2f0) = 0;
  *(undefined4 *)((int)this + 0x2f4) = 0xe;
  uVar1 = F_00ebb1f0(this,0xe,0);
  *(uint *)((int)this + 0x2ec) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ebdd20 */
uint F_00ebdd20(unsigned int gen_a0)
{
  GEN_ENTER(0xebdd20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d374));
  F_00eb4fc0(this);
  *(undefined4 *)((int)this + 0x46c) = 0;
  *(undefined4 *)((int)this + 0x470) = 0;
  *(undefined4 *)((int)this + 0x474) = 0x16;
  uVar1 = F_00ebb290(this,0x16,0);
  *(uint *)((int)this + 0x46c) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ebdd60 */
uint F_00ebdd60(unsigned int gen_a0)
{
  GEN_ENTER(0xebdd60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d394));
  F_00eb5180(this);
  *(undefined4 *)((int)this + 0x79c) = 0;
  *(undefined4 *)((int)this + 0x7a0) = 0;
  *(undefined4 *)((int)this + 0x7a4) = 0x27;
  uVar1 = F_00ebb330(this,0x27,0);
  *(uint *)((int)this + 0x79c) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ebdda0 */
uint F_00ebdda0(unsigned int gen_a0)
{
  GEN_ENTER(0xebdda0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d3b4));
  F_00eb5340(this);
  *(undefined4 *)((int)this + 0x49c) = 0;
  *(undefined4 *)((int)this + 0x4a0) = 0;
  *(undefined4 *)((int)this + 0x4a4) = 0x17;
  uVar1 = F_00ebb3d0(this,0x17,0);
  *(uint *)((int)this + 0x49c) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ebdde0 */
uint F_00ebdde0(unsigned int gen_a0)
{
  GEN_ENTER(0xebdde0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d3d4));
  F_00eb5500(this);
  *(undefined4 *)((int)this + 0xa9c) = 0;
  *(undefined4 *)((int)this + 0xaa0) = 0;
  *(undefined4 *)((int)this + 0xaa4) = 0x37;
  uVar1 = F_00ebb470(this,0x37,0);
  *(uint *)((int)this + 0xa9c) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ebde20 */
uint F_00ebde20(unsigned int gen_a0)
{
  GEN_ENTER(0xebde20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d3f4));
  F_00eb56c0(this);
  *(undefined4 *)((int)this + 0x88c) = 0;
  *(undefined4 *)((int)this + 0x890) = 0;
  *(undefined4 *)((int)this + 0x894) = 0x2c;
  uVar1 = F_00ebb510(this,0x2c,0);
  *(uint *)((int)this + 0x88c) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ebde60 */
uint F_00ebde60(unsigned int gen_a0)
{
  GEN_ENTER(0xebde60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d414));
  F_00eb5880(this);
  *(undefined4 *)((int)this + 0xbbc) = 0;
  *(undefined4 *)((int)this + 0xbc0) = 0;
  *(undefined4 *)((int)this + 0xbc4) = 0x3d;
  uVar1 = F_00ebb5b0(this,0x3d,0);
  *(uint *)((int)this + 0xbbc) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ebdea0 */
uint F_00ebdea0(unsigned int gen_a0)
{
  GEN_ENTER(0xebdea0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d434));
  F_00eb5a40(this);
  *(undefined4 *)((int)this + 0x31c) = 0;
  *(undefined4 *)((int)this + 800) = 0;
  *(undefined4 *)((int)this + 0x324) = 0xf;
  uVar1 = F_00ebb650(this,0xf,0);
  *(uint *)((int)this + 0x31c) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ebdee0 */
uint F_00ebdee0(unsigned int gen_a0)
{
  GEN_ENTER(0xebdee0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d454));
  F_00eb5c00(this);
  *(undefined4 *)((int)this + 0x28c) = 0;
  *(undefined4 *)((int)this + 0x290) = 0;
  *(undefined4 *)((int)this + 0x294) = 0x12;
  uVar1 = F_00ebb6f0(this,0x12,0);
  *(uint *)((int)this + 0x28c) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ebdf20 */
uint F_00ebdf20(unsigned int gen_a0)
{
  GEN_ENTER(0xebdf20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d474));
  F_00eb5dd0(this);
  *(undefined4 *)((int)this + 0x9ac) = 0;
  *(undefined4 *)((int)this + 0x9b0) = 0;
  *(undefined4 *)((int)this + 0x9b4) = 0x32;
  uVar1 = F_00ebb790(this,0x32,0);
  *(uint *)((int)this + 0x9ac) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ebdf60 */
uint F_00ebdf60(unsigned int gen_a0)
{
  GEN_ENTER(0xebdf60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d494));
  F_00eb5f90(this);
  *(undefined4 *)((int)this + 0x4ec) = 0;
  *(undefined4 *)((int)this + 0x4f0) = 0;
  *(undefined4 *)((int)this + 0x4f4) = 0x25;
  uVar1 = F_00ebb830(this,0x25,0);
  *(uint *)((int)this + 0x4ec) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ebdfa0 */
uint F_00ebdfa0(unsigned int gen_a0)
{
  GEN_ENTER(0xebdfa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115d4b4));
  F_00eb6150(this);
  *(undefined4 *)((int)this + 0x196c) = 0;
  *(undefined4 *)((int)this + 0x1970) = 0;
  *(undefined4 *)((int)this + 0x1974) = 0x86;
  uVar1 = F_00ebb8d0(this,0x86,0);
  *(uint *)((int)this + 0x196c) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ebdfe0 */
uint F_00ebdfe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xebdfe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1);
  return param_1;
}

/* ref: FUN_00ebe000 */
uint F_00ebe000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xebe000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this,param_1);
  return param_1;
}

/* ref: FUN_00ebe020 */
uint F_00ebe020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xebe020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_1);
  return param_1;
}

/* ref: FUN_00ebe040 */
uint F_00ebe040(unsigned int gen_a0)
{
  GEN_ENTER(0xebe040u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint in_edi;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x0)),0);
  (*(uint *)(gen_frame + 0x8)) = REFG(undefined4, 0x15e38fc);
  if (REFG(undefined4, 0x15e3a34) == 0) {
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x4)),0);
    if (REFG(undefined4, 0x15e3a34) == 0) {
      REFG(undefined4, 0x15d6788) = REFG(undefined4, 0x15d6788) + 1;
      REFG(undefined4, 0x15e3a34) = REFG(undefined4, 0x15d6788);
    }
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x4)));
  }
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  in_edi = REFG(undefined4, 0x15e3a34);
  iVar1 = *(*(int * PTR32 *)&gen_args[0]);
  if (REFG(undefined4, 0x15e3a34) < *(uint *)(iVar1 + 0xc)) {
    uVar3 = *((uint *)GEN_TOP((*(int *)(iVar1 + 8) + REFG(undefined4, 0x15e3a34) * 4)));
    if (uVar3 != 0) goto LAB_00ebe141;
  }
  else {
    uVar3 = 0;
  }
  if (*(char *)(iVar1 + 0x14) == '\0') {
LAB_00ebe0c3: ;
    if (uVar3 != 0) goto LAB_00ebe141;
  }
  else {
    uVar3 = F_00c45d58();
    if (in_edi < *(uint *)(uVar3 + 0xc)) {
      uVar3 = *((uint *)GEN_TOP((*(int *)(uVar3 + 8) + in_edi * 4)));
      goto LAB_00ebe0c3;
    }
  }
  uVar3 = (*(uint *)(gen_frame + 0x8));
  if ((*(uint *)(gen_frame + 0x8)) != 0) {
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x0)));
    return uVar3;
  }
  uVar4 = F_00ebbbf0(&(*(uint *)(gen_frame + 0x8)),piVar2);
  uVar3 = (*(uint *)(gen_frame + 0x8));
  if (uVar4 == 0xffffffff) {
                    
    F_00c4c6c9(0,in_edi);
  }
  REFG(undefined4, 0x15e38fc) = (*(uint *)(gen_frame + 0x8));
  F_00c45bc0((undefined *)&(*(int * PTR32 *)&gen_args[0]),0);
  if (*(int *)(uVar3 + 4) != -1) {
    *(int *)(uVar3 + 4) = *(int *)(uVar3 + 4) + 1;
  }
  F_00c45be8(&(*(int * PTR32 *)&gen_args[0]));
  F_00c45ce1(uVar3);
LAB_00ebe141: ;
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x0)));
  return uVar3;
}

/* ref: FUN_00ebe160 */
uint F_00ebe160(unsigned int gen_a0)
{
  GEN_ENTER(0xebe160u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint in_edi;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x0)),0);
  (*(uint *)(gen_frame + 0x8)) = REFG(undefined4, 0x15e3900);
  if (REFG(undefined4, 0x15e3a30) == 0) {
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x4)),0);
    if (REFG(undefined4, 0x15e3a30) == 0) {
      REFG(undefined4, 0x15d6788) = REFG(undefined4, 0x15d6788) + 1;
      REFG(undefined4, 0x15e3a30) = REFG(undefined4, 0x15d6788);
    }
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x4)));
  }
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  in_edi = REFG(undefined4, 0x15e3a30);
  iVar1 = *(*(int * PTR32 *)&gen_args[0]);
  if (REFG(undefined4, 0x15e3a30) < *(uint *)(iVar1 + 0xc)) {
    uVar3 = *((uint *)GEN_TOP((*(int *)(iVar1 + 8) + REFG(undefined4, 0x15e3a30) * 4)));
    if (uVar3 != 0) goto LAB_00ebe261;
  }
  else {
    uVar3 = 0;
  }
  if (*(char *)(iVar1 + 0x14) == '\0') {
LAB_00ebe1e3: ;
    if (uVar3 != 0) goto LAB_00ebe261;
  }
  else {
    uVar3 = F_00c45d58();
    if (in_edi < *(uint *)(uVar3 + 0xc)) {
      uVar3 = *((uint *)GEN_TOP((*(int *)(uVar3 + 8) + in_edi * 4)));
      goto LAB_00ebe1e3;
    }
  }
  uVar3 = (*(uint *)(gen_frame + 0x8));
  if ((*(uint *)(gen_frame + 0x8)) != 0) {
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x0)));
    return uVar3;
  }
  uVar4 = F_00ebbc70(&(*(uint *)(gen_frame + 0x8)),piVar2);
  uVar3 = (*(uint *)(gen_frame + 0x8));
  if (uVar4 == 0xffffffff) {
                    
    F_00c4c6c9(0,in_edi);
  }
  REFG(undefined4, 0x15e3900) = (*(uint *)(gen_frame + 0x8));
  F_00c45bc0((undefined *)&(*(int * PTR32 *)&gen_args[0]),0);
  if (*(int *)(uVar3 + 4) != -1) {
    *(int *)(uVar3 + 4) = *(int *)(uVar3 + 4) + 1;
  }
  F_00c45be8(&(*(int * PTR32 *)&gen_args[0]));
  F_00c45ce1(uVar3);
LAB_00ebe261: ;
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x0)));
  return uVar3;
}

/* ref: FUN_00ebe280 */
uint F_00ebe280(unsigned int gen_a0)
{
  GEN_ENTER(0xebe280u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint in_edi;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x0)),0);
  (*(uint *)(gen_frame + 0x8)) = REFG(undefined4, 0x15e3904);
  if (REFG(undefined4, 0x15e3a2c) == 0) {
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x4)),0);
    if (REFG(undefined4, 0x15e3a2c) == 0) {
      REFG(undefined4, 0x15d6788) = REFG(undefined4, 0x15d6788) + 1;
      REFG(undefined4, 0x15e3a2c) = REFG(undefined4, 0x15d6788);
    }
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x4)));
  }
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  in_edi = REFG(undefined4, 0x15e3a2c);
  iVar1 = *(*(int * PTR32 *)&gen_args[0]);
  if (REFG(undefined4, 0x15e3a2c) < *(uint *)(iVar1 + 0xc)) {
    uVar3 = *((uint *)GEN_TOP((*(int *)(iVar1 + 8) + REFG(undefined4, 0x15e3a2c) * 4)));
    if (uVar3 != 0) goto LAB_00ebe381;
  }
  else {
    uVar3 = 0;
  }
  if (*(char *)(iVar1 + 0x14) == '\0') {
LAB_00ebe303: ;
    if (uVar3 != 0) goto LAB_00ebe381;
  }
  else {
    uVar3 = F_00c45d58();
    if (in_edi < *(uint *)(uVar3 + 0xc)) {
      uVar3 = *((uint *)GEN_TOP((*(int *)(uVar3 + 8) + in_edi * 4)));
      goto LAB_00ebe303;
    }
  }
  uVar3 = (*(uint *)(gen_frame + 0x8));
  if ((*(uint *)(gen_frame + 0x8)) != 0) {
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x0)));
    return uVar3;
  }
  uVar4 = F_00ebbcf0(&(*(uint *)(gen_frame + 0x8)),piVar2);
  uVar3 = (*(uint *)(gen_frame + 0x8));
  if (uVar4 == 0xffffffff) {
                    
    F_00c4c6c9(0,in_edi);
  }
  REFG(undefined4, 0x15e3904) = (*(uint *)(gen_frame + 0x8));
  F_00c45bc0((undefined *)&(*(int * PTR32 *)&gen_args[0]),0);
  if (*(int *)(uVar3 + 4) != -1) {
    *(int *)(uVar3 + 4) = *(int *)(uVar3 + 4) + 1;
  }
  F_00c45be8(&(*(int * PTR32 *)&gen_args[0]));
  F_00c45ce1(uVar3);
LAB_00ebe381: ;
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x0)));
  return uVar3;
}

/* ref: FUN_00ebe3a0 */
uint F_00ebe3a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xebe3a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004069f0(0x88);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *(undefined4 *)((int)this + 4);
    puVar1[1] = *(undefined4 *)((int)this + 4);
    puVar1[2] = *(undefined4 *)((int)this + 4);
    *(undefined2 *)(puVar1 + 0x20) = 0;
    if (puVar1 + 4 != (undefined4 *)0x0) {
      F_0042cbc0(puVar1 + 4,param_1);
      puVar1[0x1a] = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
      puVar1[0x1c] = 0;
      puVar1[0x1e] = 0;
      F_00ea7d20(puVar1 + 0x1a,param_1 + 0x58);
    }
    return (uint)puVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00ebe430 */
uint F_00ebe430(unsigned int gen_a0)
{
  GEN_ENTER(0xebe430u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)param_1 + 0x54));
  uVar1 = F_0042c880(param_1);
  return (uint)uVar1;
}

/* ref: FUN_00ebe450 */
uint F_00ebe450(unsigned int gen_a0)
{
  GEN_ENTER(0xebe450u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  *(undefined4 *)((int)param_1 + 0x58) = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
  F_00ea7c20((undefined4 *)((int)param_1 + 0x58));
  uVar1 = F_0042c880(param_1);
  return (uint)uVar1;
}

/* ref: FUN_00ebe480 */
unsigned int F_00ebe480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xebe480u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  for (puVar1 = param_1; puVar1 != param_2; puVar1 = puVar1 + 6) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
  }
  return 0;
}

/* ref: FUN_00ebe4b0 */
uint F_00ebe4b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xebe4b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 * this;
  int iVar1;
  
  this = param_3;
  iVar1 = param_1;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (this != (undefined4 *)0x0) {
      *this = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
      this[2] = 0;
      this[4] = 0;
      F_00ea7d20(this,iVar1);
    }
    iVar1 = iVar1 + 0x18;
    this = this + 6;
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00ebe500 */
unsigned int F_00ebe500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xebe500u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_0042cbc0(param_1,param_2);
    F_0042cbc0((undefined *)((int)param_1 + 0x54),param_2 + 0x54);
  }
  return 0;
}

/* ref: Component::ServerFramework::JsonParser::StringToken::vf8 */
uint F_00ebe550(unsigned int gen_a0)
{
  GEN_ENTER(0xebe550u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 8;
}

/* ref: FUN_00ebe560 */
uint F_00ebe560(unsigned int gen_a0)
{
  GEN_ENTER(0xebe560u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x115d4d4));
  if (0xf < *(uint *)((int)this + 0x1c)) {
    F_00406ad0(*(undefined4 *)((int)this + 8));
  }
  *(undefined4 *)((int)this + 0x1c) = 0xf;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined1 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x1159994));
  return 0;
}

/* ref: Component::ServerFramework::JsonParser::SimpleJsonToken::vf8 */
uint F_00ebe5c0(unsigned int gen_a0)
{
  GEN_ENTER(0xebe5c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 8;
}

/* ref: FUN_00ebe5d0 */
uint F_00ebe5d0(unsigned int gen_a0)
{
  GEN_ENTER(0xebe5d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x115d4fc));
  if (0xf < *(uint *)((int)this + 0x1c)) {
    F_00406ad0(*(undefined4 *)((int)this + 8));
  }
  *(undefined4 *)((int)this + 0x1c) = 0xf;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined1 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x1159994));
  return 0;
}

/* ref: Component::ServerFramework::JsonParser::StringToken::vf0 */
uint F_00ebe610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xebe610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x115d4d4));
  if (0xf < *(uint *)(this + 0x1c)) {
    F_00406ad0(*(undefined4 *)(this + 8));
  }
  *(undefined4 *)(this + 0x1c) = 0xf;
  *(undefined4 *)(this + 0x18) = 0;
  this[8] = (undefined1)0x0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x1159994));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::ServerFramework::JsonParser::SimpleJsonToken::vf0 */
uint F_00ebe660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xebe660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x115d4fc));
  if (0xf < *(uint *)(this + 0x1c)) {
    F_00406ad0(*(undefined4 *)(this + 8));
  }
  *(undefined4 *)(this + 0x1c) = 0xf;
  *(undefined4 *)(this + 0x18) = 0;
  this[8] = (undefined1)0x0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x1159994));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00ebe6b0 */
uint F_00ebe6b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xebe6b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)this;
  if ((*((byte *)GEN_TOP((*(int *)(*piVar1 + 4) + 0x14 + (int)piVar1))) & 2) != 0) {
    F_00ebbf30(piVar1);
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((**(int * PTR32 *)this + 4))) + 0x38 + (int)*(int * PTR32 *)this)));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))
                      (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_00ebe6e0 */
uint F_00ebe6e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xebe6e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  byte bVar2;
  
  *(int * PTR32 *)this = param_1;
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(*param_1 + 4) + 0x38 + (int)param_1)));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  }
  bVar2 = F_00ebc060(*(undefined * PTR32 *)this,param_2);
  *(byte *)((int)this + 4) = bVar2;
  return (uint)this;
}

/* ref: FUN_00ebe720 */
uint F_00ebe720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xebe720u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined * pvVar4;
  
  uVar2 = *(uint *)((int)this + 0x10);
  if (uVar2 < param_1) {
                    
    F_00c457e7("invalid string position");
  }
  if (-uVar2 - 1 <= param_2) {
                    
    F_00c4579a("string too long");
  }
  if (param_2 != 0) {
    uVar1 = uVar2 + param_2;
    if (uVar1 == 0xffffffff) {
                    
      F_00c4579a("string too long");
    }
    if (*(uint *)((int)this + 0x14) < uVar1) {
      F_00a16590(this,uVar1,uVar2);
      if (uVar1 == 0) {
        return (uint)this;
      }
    }
    else if (uVar1 == 0) {
      *(undefined4 *)((int)this + 0x10) = 0;
      if (*(uint *)((int)this + 0x14) < 0x10) {
        *(undefined1 *)this = 0;
        return (uint)this;
      }
      **(undefined1 * PTR32 *)this = 0;
      return (uint)this;
    }
    pvVar4 = this;
    pvVar3 = this;
    if (0xf < *(uint *)((int)this + 0x14)) {
      pvVar4 = *(undefined * PTR32 *)this;
      pvVar3 = *(undefined * PTR32 *)this;
    }
    F_00c46e20((int)pvVar4 + param_2 + param_1,(int)pvVar3 + param_1,
               *(int *)((int)this + 0x10) - param_1);
    F_00a14a80(this,param_1,param_2,param_3);
    *(uint *)((int)this + 0x10) = uVar1;
    if (0xf < *(uint *)((int)this + 0x14)) {
      *(undefined1 *)(*(int *)this + uVar1) = 0;
      return (uint)this;
    }
    *(undefined1 *)((int)this + uVar1) = 0;
  }
  return (uint)this;
}

/* ref: FUN_00ebe820 */
uint F_00ebe820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xebe820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  
  if (param_1 != (undefined *)0x0) {
    uVar2 = *(uint *)((int)this + 0x14);
    pvVar3 = this;
    if (7 < uVar2) {
      pvVar3 = *(undefined * PTR32 *)this;
    }
    if (pvVar3 <= param_1) {
      pvVar3 = this;
      if (7 < uVar2) {
        pvVar3 = *(undefined * PTR32 *)this;
      }
      if (param_1 < ((undefined *)GEN_TOP(((int)pvVar3 + *(int *)((int)this + 0x10) * 2)))) {
        pvVar3 = this;
        if (7 < uVar2) {
          pvVar3 = *(undefined * PTR32 *)this;
        }
        uVar2 = F_00b123c0(this,this,(int)param_1 - (int)((int)(uintptr_t)pvVar3) >> 1,param_2);
        return uVar2;
      }
    }
  }
  if (0x7ffffffe < param_2) {
                    
    F_00c4579a("string too long");
  }
  if (*(uint *)((int)this + 0x14) < param_2) {
    F_00b11fc0(this,param_2,*(undefined4 *)((int)this + 0x10));
    if (param_2 == 0) {
      return (uint)this;
    }
  }
  else if (param_2 == 0) {
    *(undefined4 *)((int)this + 0x10) = 0;
    if (7 < *(uint *)((int)this + 0x14)) {
      **(undefined2 * PTR32 *)this = 0;
      return (uint)this;
    }
    *(undefined2 *)this = 0;
    return (uint)this;
  }
  pvVar3 = this;
  if (7 < *(uint *)((int)this + 0x14)) {
    pvVar3 = *(undefined * PTR32 *)this;
  }
  iVar1 = param_2 * 2;
  F_00c46aa0(pvVar3,param_1,iVar1);
  *(uint *)((int)this + 0x10) = param_2;
  if (*(uint *)((int)this + 0x14) < 8) {
    *(undefined2 *)(iVar1 + (int)this) = 0;
    return (uint)this;
  }
  *(undefined2 *)(iVar1 + *(int *)this) = 0;
  return (uint)this;
}

/* ref: FUN_00ebe910 */
uint F_00ebe910(unsigned int gen_a0)
{
  GEN_ENTER(0xebe910u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint in_edi;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x0)),0);
  (*(uint *)(gen_frame + 0x8)) = REFG(undefined4, 0x15e3908);
  if (REFG(undefined4, 0x1370b94) == 0) {
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x4)),0);
    if (REFG(undefined4, 0x1370b94) == 0) {
      REFG(undefined4, 0x1370b94) = REFG(undefined4, 0x15d6788) + 1;
      REFG(undefined4, 0x15d6788) = REFG(undefined4, 0x1370b94);
    }
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x4)));
  }
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  in_edi = REFG(undefined4, 0x1370b94);
  iVar1 = *(*(int * PTR32 *)&gen_args[0]);
  if (REFG(undefined4, 0x1370b94) < *(uint *)(iVar1 + 0xc)) {
    uVar3 = *((uint *)GEN_TOP((*(int *)(iVar1 + 8) + REFG(undefined4, 0x1370b94) * 4)));
    if (uVar3 != 0) goto LAB_00ebea11;
  }
  else {
    uVar3 = 0;
  }
  if (*(char *)(iVar1 + 0x14) == '\0') {
LAB_00ebe993: ;
    if (uVar3 != 0) goto LAB_00ebea11;
  }
  else {
    uVar3 = F_00c45d58();
    if (in_edi < *(uint *)(uVar3 + 0xc)) {
      uVar3 = *((uint *)GEN_TOP((*(int *)(uVar3 + 8) + in_edi * 4)));
      goto LAB_00ebe993;
    }
  }
  uVar3 = (*(uint *)(gen_frame + 0x8));
  if ((*(uint *)(gen_frame + 0x8)) != 0) {
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x0)));
    return uVar3;
  }
  uVar4 = F_00ebc370(&(*(uint *)(gen_frame + 0x8)),piVar2);
  uVar3 = (*(uint *)(gen_frame + 0x8));
  if (uVar4 == 0xffffffff) {
                    
    F_00c4c6c9(0,in_edi);
  }
  REFG(undefined4, 0x15e3908) = (*(uint *)(gen_frame + 0x8));
  F_00c45bc0((undefined *)&(*(int * PTR32 *)&gen_args[0]),0);
  if (*(int *)(uVar3 + 4) != -1) {
    *(int *)(uVar3 + 4) = *(int *)(uVar3 + 4) + 1;
  }
  F_00c45be8(&(*(int * PTR32 *)&gen_args[0]));
  F_00c45ce1(uVar3);
LAB_00ebea11: ;
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x0)));
  return uVar3;
}

/* ref: FUN_00ebea30 */
uint F_00ebea30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xebea30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  undefined * this_00;
  int iVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  undefined4 * puVar6;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x38 + (int)this)));
  (*(uint *)(gen_frame + 0x14)) = 0;
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  }
  if ((*((int *)GEN_TOP((*(int *)(*(int *)this + 4) + 0xc + (int)this))) == 0) &&
     (this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x3c + (int)this))), this_00 != (undefined *)0x0))
  {
    F_00a16e10(this_00);
  }
  if (*((int *)GEN_TOP((*(int *)(*(int *)this + 4) + 0xc + (int)this))) == 0) {
    piVar1 = ((int *)GEN_TOP(**((uint * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x30 + (int)this)))));
    (*(int * PTR32 *)(gen_frame + 0x18)) = piVar1;
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x10)),0);
    if (piVar1[1] != -1) {
      piVar1[1] = piVar1[1] + 1;
    }
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x10)));
    piVar4 = (int *)F_00ebc250(&(*(int * PTR32 *)(gen_frame + 0x18)));
    (*(int * PTR32 *)(gen_frame + 0x18)) = piVar4;
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0xc)),0);
    iVar2 = piVar1[1];
    if ((iVar2 != 0) && (iVar2 != -1)) {
      piVar1[1] = iVar2 + -1;
    }
    iVar2 = piVar1[1];
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0xc)));
    puVar6 = ((undefined4 *)GEN_TOP((~-(uint)(iVar2 != 0) & (uint)piVar1)));
    if (puVar6 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar6)(puVar6,1);
    }
    uVar5 = (*(uint *)(gen_frame + 0x8));
    iVar2 = *(int *)this;
    iVar3 = *(int *)(iVar2 + 4);
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x8)) + 0)) = 0;
    (*(uint *)(gen_frame + 0x8)) = uVar5 & 0xffffff00;
    iVar2 = *(int *)(iVar2 + 4);
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x18)) + 0x18))
              ((*(int * PTR32 *)(gen_frame + 0x18)),&(*(uint *)(gen_frame + 0x8)),(*(uint *)(gen_frame + 0x8)),*(undefined4 *)(iVar2 + 0x38 + (int)this),
               iVar3 + (int)this,(uint)*(byte *)(iVar2 + 0x40 + (int)this),param_1);
    if ((char)(*(uint *)(gen_frame + 0x8)) != '\0') {
      (*(uint *)(gen_frame + 0x14)) = 4;
    }
  }
  iVar2 = *(int *)(*(int *)this + 4);
  if ((*(uint *)(gen_frame + 0x14)) != 0) {
    uVar5 = *(uint *)((int)this + iVar2 + 0xc) | (*(uint *)(gen_frame + 0x14));
    if (*(int *)((int)this + iVar2 + 0x38) == 0) {
      uVar5 = uVar5 | 4;
    }
    *(uint *)((int)this + iVar2 + 0xc) = uVar5 & 0x17;
    uVar5 = *(uint *)((int)this + iVar2 + 0x10) & uVar5 & 0x17;
    if (uVar5 != 0) {
      if ((uVar5 & 4) == 0) {
        if ((uVar5 & 2) == 0) {
          uVar5 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x4)) = "ios_base::eofbit set";
        }
        else {
          uVar5 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x4)) = "ios_base::failbit set";
        }
      }
      else {
        uVar5 = F_00c46280();
        (*(char * PTR32 *)(gen_frame + 0x4)) = "ios_base::badbit set";
      }
      (*(uint *)(gen_frame + 0x8)) = 1;
      (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0xc))))) = uVar5;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x10910a4));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
    }
  }
  if ((*((byte *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x14 + (int)this))) & 2) != 0) {
    F_00a16e10(this);
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x38 + (int)this)));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  }
  return (uint)this;
}

/* ref: FUN_00ebebe0 */
uint F_00ebebe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xebebe0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  undefined * this_00;
  int iVar2;
  int * piVar3;
  uint uVar4;
  undefined4 * puVar5;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x38 + (int)(*(undefined * PTR32 *)&gen_args[0]))));
  (*(uint *)(gen_frame + 0x14)) = 0;
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  }
  if ((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0xc + (int)(*(undefined * PTR32 *)&gen_args[0])))) == 0) &&
     (this_00 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x3c + (int)(*(undefined * PTR32 *)&gen_args[0])))), this_00 != (undefined *)0x0))
  {
    F_00ebbf30(this_00);
  }
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0xc + (int)(*(undefined * PTR32 *)&gen_args[0])))) == 0) {
    piVar1 = ((int *)GEN_TOP(**((uint * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x30 + (int)(*(undefined * PTR32 *)&gen_args[0]))))));
    (*(int * PTR32 *)(gen_frame + 0x18)) = piVar1;
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x10)),0);
    if (piVar1[1] != -1) {
      piVar1[1] = piVar1[1] + 1;
    }
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x10)));
    piVar3 = (int *)F_00ebe040(&(*(int * PTR32 *)(gen_frame + 0x18)));
    (*(int * PTR32 *)(gen_frame + 0x18)) = piVar3;
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0xc)),0);
    iVar2 = piVar1[1];
    if ((iVar2 != 0) && (iVar2 != -1)) {
      piVar1[1] = iVar2 + -1;
    }
    iVar2 = piVar1[1];
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0xc)));
    puVar5 = ((undefined4 *)GEN_TOP((~-(uint)(iVar2 != 0) & (uint)piVar1)));
    if (puVar5 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar5)(puVar5,1);
    }
    uVar4 = (*(uint *)(gen_frame + 0x8));
    iVar2 = *((int *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x8)) + 0)) = 0;
    (*(uint *)(gen_frame + 0x8)) = uVar4 & 0xffffff00;
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x18)) + 0x14))
              ((*(int * PTR32 *)(gen_frame + 0x18)),&(*(undefined4 *)&gen_args[1]),(*(uint *)(gen_frame + 0x8)),*((undefined4 *)GEN_TOP((iVar2 + 0x38 + (int)(*(undefined * PTR32 *)&gen_args[0])))),
               *((int *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + (int)(*(undefined * PTR32 *)&gen_args[0]),(uint)*((ushort *)GEN_TOP((iVar2 + 0x40 + (int)(*(undefined * PTR32 *)&gen_args[0])))),
               (*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]));
    if ((char)(*(undefined4 *)&gen_args[1]) != '\0') {
      (*(uint *)(gen_frame + 0x14)) = 4;
    }
  }
  iVar2 = *((int *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if ((*(uint *)(gen_frame + 0x14)) != 0) {
    uVar4 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar2 + 0xc))) | (*(uint *)(gen_frame + 0x14));
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar2 + 0x38))) == 0) {
      uVar4 = uVar4 | 4;
    }
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar2 + 0xc))) = uVar4 & 0x17;
    uVar4 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar2 + 0x10))) & uVar4 & 0x17;
    if (uVar4 != 0) {
      if ((uVar4 & 4) == 0) {
        if ((uVar4 & 2) == 0) {
          uVar4 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x4)) = "ios_base::eofbit set";
        }
        else {
          uVar4 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x4)) = "ios_base::failbit set";
        }
      }
      else {
        uVar4 = F_00c46280();
        (*(char * PTR32 *)(gen_frame + 0x4)) = "ios_base::badbit set";
      }
      (*(uint *)(gen_frame + 0x8)) = 1;
      (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0xc))))) = uVar4;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x10910a4));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
    }
  }
  if ((*((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x14 + (int)(*(undefined * PTR32 *)&gen_args[0])))) & 2) != 0) {
    F_00ebbf30((*(undefined * PTR32 *)&gen_args[0]));
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x38 + (int)(*(undefined * PTR32 *)&gen_args[0]))));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00ebed90 */
uint F_00ebed90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xebed90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  undefined * this_00;
  int iVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  undefined4 * puVar6;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x38 + (int)this)));
  (*(uint *)(gen_frame + 0x14)) = 0;
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  }
  if ((*((int *)GEN_TOP((*(int *)(*(int *)this + 4) + 0xc + (int)this))) == 0) &&
     (this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x3c + (int)this))), this_00 != (undefined *)0x0))
  {
    F_00a16e10(this_00);
  }
  if (*((int *)GEN_TOP((*(int *)(*(int *)this + 4) + 0xc + (int)this))) == 0) {
    piVar1 = ((int *)GEN_TOP(**((uint * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x30 + (int)this)))));
    (*(int * PTR32 *)(gen_frame + 0x18)) = piVar1;
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x10)),0);
    if (piVar1[1] != -1) {
      piVar1[1] = piVar1[1] + 1;
    }
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x10)));
    piVar4 = (int *)F_00ebc250(&(*(int * PTR32 *)(gen_frame + 0x18)));
    (*(int * PTR32 *)(gen_frame + 0x18)) = piVar4;
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0xc)),0);
    iVar2 = piVar1[1];
    if ((iVar2 != 0) && (iVar2 != -1)) {
      piVar1[1] = iVar2 + -1;
    }
    iVar2 = piVar1[1];
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0xc)));
    puVar6 = ((undefined4 *)GEN_TOP((~-(uint)(iVar2 != 0) & (uint)piVar1)));
    if (puVar6 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar6)(puVar6,1);
    }
    uVar5 = (*(uint *)(gen_frame + 0x8));
    iVar2 = *(int *)this;
    iVar3 = *(int *)(iVar2 + 4);
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x8)) + 0)) = 0;
    (*(uint *)(gen_frame + 0x8)) = uVar5 & 0xffffff00;
    iVar2 = *(int *)(iVar2 + 4);
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x18)) + 0x20))
              ((*(int * PTR32 *)(gen_frame + 0x18)),&(*(uint *)(gen_frame + 0x8)),(*(uint *)(gen_frame + 0x8)),*(undefined4 *)(iVar2 + 0x38 + (int)this),
               iVar3 + (int)this,(uint)*(byte *)(iVar2 + 0x40 + (int)this),param_1);
    if ((char)(*(uint *)(gen_frame + 0x8)) != '\0') {
      (*(uint *)(gen_frame + 0x14)) = 4;
    }
  }
  iVar2 = *(int *)(*(int *)this + 4);
  if ((*(uint *)(gen_frame + 0x14)) != 0) {
    uVar5 = *(uint *)((int)this + iVar2 + 0xc) | (*(uint *)(gen_frame + 0x14));
    if (*(int *)((int)this + iVar2 + 0x38) == 0) {
      uVar5 = uVar5 | 4;
    }
    *(uint *)((int)this + iVar2 + 0xc) = uVar5 & 0x17;
    uVar5 = *(uint *)((int)this + iVar2 + 0x10) & uVar5 & 0x17;
    if (uVar5 != 0) {
      if ((uVar5 & 4) == 0) {
        if ((uVar5 & 2) == 0) {
          uVar5 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x4)) = "ios_base::eofbit set";
        }
        else {
          uVar5 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x4)) = "ios_base::failbit set";
        }
      }
      else {
        uVar5 = F_00c46280();
        (*(char * PTR32 *)(gen_frame + 0x4)) = "ios_base::badbit set";
      }
      (*(uint *)(gen_frame + 0x8)) = 1;
      (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0xc))))) = uVar5;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x10910a4));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
    }
  }
  if ((*((byte *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x14 + (int)this))) & 2) != 0) {
    F_00a16e10(this);
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x38 + (int)this)));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  }
  return (uint)this;
}

/* ref: FUN_00ebef40 */
uint F_00ebef40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xebef40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  undefined * this_00;
  int iVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  undefined4 * puVar6;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x38 + (int)this)));
  (*(uint *)(gen_frame + 0x14)) = 0;
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  }
  if ((*((int *)GEN_TOP((*(int *)(*(int *)this + 4) + 0xc + (int)this))) == 0) &&
     (this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x3c + (int)this))), this_00 != (undefined *)0x0))
  {
    F_00a16e10(this_00);
  }
  if (*((int *)GEN_TOP((*(int *)(*(int *)this + 4) + 0xc + (int)this))) == 0) {
    piVar1 = ((int *)GEN_TOP(**((uint * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x30 + (int)this)))));
    (*(int * PTR32 *)(gen_frame + 0x18)) = piVar1;
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x10)),0);
    if (piVar1[1] != -1) {
      piVar1[1] = piVar1[1] + 1;
    }
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x10)));
    piVar4 = (int *)F_00ebc250(&(*(int * PTR32 *)(gen_frame + 0x18)));
    (*(int * PTR32 *)(gen_frame + 0x18)) = piVar4;
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0xc)),0);
    iVar2 = piVar1[1];
    if ((iVar2 != 0) && (iVar2 != -1)) {
      piVar1[1] = iVar2 + -1;
    }
    iVar2 = piVar1[1];
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0xc)));
    puVar6 = ((undefined4 *)GEN_TOP((~-(uint)(iVar2 != 0) & (uint)piVar1)));
    if (puVar6 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar6)(puVar6,1);
    }
    uVar5 = (*(uint *)(gen_frame + 0x8));
    iVar2 = *(int *)this;
    iVar3 = *(int *)(iVar2 + 4);
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x8)) + 0)) = 0;
    (*(uint *)(gen_frame + 0x8)) = uVar5 & 0xffffff00;
    iVar2 = *(int *)(iVar2 + 4);
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x18)) + 0x1c))
              ((*(int * PTR32 *)(gen_frame + 0x18)),&(*(uint *)(gen_frame + 0x8)),(*(uint *)(gen_frame + 0x8)),*(undefined4 *)(iVar2 + 0x38 + (int)this),
               iVar3 + (int)this,(uint)*(byte *)(iVar2 + 0x40 + (int)this),param_1);
    if ((char)(*(uint *)(gen_frame + 0x8)) != '\0') {
      (*(uint *)(gen_frame + 0x14)) = 4;
    }
  }
  iVar2 = *(int *)(*(int *)this + 4);
  if ((*(uint *)(gen_frame + 0x14)) != 0) {
    uVar5 = *(uint *)((int)this + iVar2 + 0xc) | (*(uint *)(gen_frame + 0x14));
    if (*(int *)((int)this + iVar2 + 0x38) == 0) {
      uVar5 = uVar5 | 4;
    }
    *(uint *)((int)this + iVar2 + 0xc) = uVar5 & 0x17;
    uVar5 = *(uint *)((int)this + iVar2 + 0x10) & uVar5 & 0x17;
    if (uVar5 != 0) {
      if ((uVar5 & 4) == 0) {
        if ((uVar5 & 2) == 0) {
          uVar5 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x4)) = "ios_base::eofbit set";
        }
        else {
          uVar5 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x4)) = "ios_base::failbit set";
        }
      }
      else {
        uVar5 = F_00c46280();
        (*(char * PTR32 *)(gen_frame + 0x4)) = "ios_base::badbit set";
      }
      (*(uint *)(gen_frame + 0x8)) = 1;
      (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0xc))))) = uVar5;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x10910a4));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
    }
  }
  if ((*((byte *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x14 + (int)this))) & 2) != 0) {
    F_00a16e10(this);
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x38 + (int)this)));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  }
  return (uint)this;
}

/* ref: FUN_00ebf0f0 */
uint F_00ebf0f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xebf0f0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  undefined * this_00;
  int iVar2;
  int * piVar3;
  uint uVar4;
  undefined4 * puVar5;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x38 + (int)(*(undefined * PTR32 *)&gen_args[0]))));
  (*(uint *)(gen_frame + 0x14)) = 0;
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  }
  if ((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0xc + (int)(*(undefined * PTR32 *)&gen_args[0])))) == 0) &&
     (this_00 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x3c + (int)(*(undefined * PTR32 *)&gen_args[0])))), this_00 != (undefined *)0x0))
  {
    F_00a16e10(this_00);
  }
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0xc + (int)(*(undefined * PTR32 *)&gen_args[0])))) == 0) {
    piVar1 = ((int *)GEN_TOP(**((uint * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x30 + (int)(*(undefined * PTR32 *)&gen_args[0]))))));
    (*(int * PTR32 *)(gen_frame + 0x18)) = piVar1;
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x10)),0);
    if (piVar1[1] != -1) {
      piVar1[1] = piVar1[1] + 1;
    }
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x10)));
    piVar3 = (int *)F_00ebc250(&(*(int * PTR32 *)(gen_frame + 0x18)));
    (*(int * PTR32 *)(gen_frame + 0x18)) = piVar3;
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0xc)),0);
    iVar2 = piVar1[1];
    if ((iVar2 != 0) && (iVar2 != -1)) {
      piVar1[1] = iVar2 + -1;
    }
    iVar2 = piVar1[1];
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0xc)));
    puVar5 = ((undefined4 *)GEN_TOP((~-(uint)(iVar2 != 0) & (uint)piVar1)));
    if (puVar5 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar5)(puVar5,1);
    }
    uVar4 = (*(uint *)(gen_frame + 0x8));
    iVar2 = *((int *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x8)) + 0)) = 0;
    (*(uint *)(gen_frame + 0x8)) = uVar4 & 0xffffff00;
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x18)) + 0x14))
              ((*(int * PTR32 *)(gen_frame + 0x18)),&(*(undefined4 *)&gen_args[1]),(*(uint *)(gen_frame + 0x8)),*((undefined4 *)GEN_TOP((iVar2 + 0x38 + (int)(*(undefined * PTR32 *)&gen_args[0])))),
               *((int *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + (int)(*(undefined * PTR32 *)&gen_args[0]),(uint)*((byte *)GEN_TOP((iVar2 + 0x40 + (int)(*(undefined * PTR32 *)&gen_args[0])))),
               (*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]));
    if ((char)(*(undefined4 *)&gen_args[1]) != '\0') {
      (*(uint *)(gen_frame + 0x14)) = 4;
    }
  }
  iVar2 = *((int *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if ((*(uint *)(gen_frame + 0x14)) != 0) {
    uVar4 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar2 + 0xc))) | (*(uint *)(gen_frame + 0x14));
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar2 + 0x38))) == 0) {
      uVar4 = uVar4 | 4;
    }
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar2 + 0xc))) = uVar4 & 0x17;
    uVar4 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar2 + 0x10))) & uVar4 & 0x17;
    if (uVar4 != 0) {
      if ((uVar4 & 4) == 0) {
        if ((uVar4 & 2) == 0) {
          uVar4 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x4)) = "ios_base::eofbit set";
        }
        else {
          uVar4 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x4)) = "ios_base::failbit set";
        }
      }
      else {
        uVar4 = F_00c46280();
        (*(char * PTR32 *)(gen_frame + 0x4)) = "ios_base::badbit set";
      }
      (*(uint *)(gen_frame + 0x8)) = 1;
      (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0xc))))) = uVar4;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x10910a4));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
    }
  }
  if ((*((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x14 + (int)(*(undefined * PTR32 *)&gen_args[0])))) & 2) != 0) {
    F_00a16e10((*(undefined * PTR32 *)&gen_args[0]));
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x38 + (int)(*(undefined * PTR32 *)&gen_args[0]))));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00ebf2a0 */
uint F_00ebf2a0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xebf2a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this;
  int iVar1;
  int * piVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(*param_1 + 4) + 0x38 + (int)param_1)));
  (*(uint *)(gen_frame + 0x28)) = 0;
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  }
  if ((*((int *)GEN_TOP((*(int *)(*param_1 + 4) + 0xc + (int)param_1))) == 0) &&
     (this = *((undefined * PTR32 *)GEN_TOP((*(int *)(*param_1 + 4) + 0x3c + (int)param_1))), this != (undefined *)0x0)) {
    F_00a16e10(this);
  }
  if (*((int *)GEN_TOP((*(int *)(*param_1 + 4) + 0xc + (int)param_1))) == 0) {
    uVar3 = **((uint * PTR32 *)GEN_TOP((*(int *)(*param_1 + 4) + 0x30 + (int)param_1)));
    (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x20))))) = uVar3;
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x24)),0);
    if (*(int *)(uVar3 + 4) != -1) {
      *(int *)(uVar3 + 4) = *(int *)(uVar3 + 4) + 1;
    }
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x24)));
    piVar2 = (int *)F_00ebc250(&(*(undefined4 *)(gen_frame + 0x20)));
    (*(int * PTR32 *)(gen_frame + 0x18)) = piVar2;
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x20)),0);
    iVar1 = *(int *)(uVar3 + 4);
    if ((iVar1 != 0) && (iVar1 != -1)) {
      *(int *)(uVar3 + 4) = iVar1 + -1;
    }
    iVar1 = *(int *)(uVar3 + 4);
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x20)));
    puVar4 = ((undefined4 *)GEN_TOP((~-(uint)(iVar1 != 0) & uVar3)));
    if (puVar4 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar4)(puVar4,1);
    }
    uVar3 = (*(uint *)(gen_frame + 0x1c));
    iVar1 = *(int *)(*param_1 + 4);
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x1c)) + 0)) = 0;
    (*(uint *)(gen_frame + 0x1c)) = uVar3 & 0xffffff00;
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x18)) + 0xc))
              ((*(int * PTR32 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x14)),(*(uint *)(gen_frame + 0x1c)),*(undefined4 *)(iVar1 + 0x38 + (int)param_1),
               *(int *)(*param_1 + 4) + (int)param_1,(uint)*(byte *)(iVar1 + 0x40 + (int)param_1));
    if ((char)(*(undefined4 *)(gen_frame + 0x14)) != '\0') {
      (*(uint *)(gen_frame + 0x28)) = 4;
    }
  }
  iVar1 = *(int *)(*param_1 + 4);
  if ((*(uint *)(gen_frame + 0x28)) != 0) {
    uVar3 = *(uint *)((int)param_1 + iVar1 + 0xc) | (*(uint *)(gen_frame + 0x28));
    if (*(int *)((int)param_1 + iVar1 + 0x38) == 0) {
      uVar3 = uVar3 | 4;
    }
    *(uint *)((int)param_1 + iVar1 + 0xc) = uVar3 & 0x17;
    uVar3 = *(uint *)((int)param_1 + iVar1 + 0x10) & uVar3 & 0x17;
    if (uVar3 != 0) {
      if ((uVar3 & 4) == 0) {
        if ((uVar3 & 2) == 0) {
          uVar3 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x10)) = "ios_base::eofbit set";
        }
        else {
          uVar3 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x10)) = "ios_base::failbit set";
        }
      }
      else {
        uVar3 = F_00c46280();
        (*(char * PTR32 *)(gen_frame + 0x10)) = "ios_base::badbit set";
      }
      (*(undefined4 *)(gen_frame + 0x14)) = 1;
      (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)uVar3;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 (*)[3])REFP(0x10910a4));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)));
    }
  }
  if ((*((byte *)GEN_TOP((*(int *)(*param_1 + 4) + 0x14 + (int)param_1))) & 2) != 0) {
    F_00a16e10(param_1);
  }
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(*param_1 + 4) + 0x38 + (int)param_1)));
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
  }
  return (uint)param_1;
}

/* ref: FUN_00ebf460 */
uint F_00ebf460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xebf460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  int * piVar2;
  int iVar3;
  byte bVar4;
  int * piVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  iVar1 = *(int *)this;
  (*(uint *)(gen_frame + 0x28)) = 0;
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(iVar1 + 4) + 0x38 + (int)this)));
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  }
  bVar4 = F_00ebc060(this,0);
  if (bVar4 != 0) {
    iVar1 = *(int *)this;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    piVar2 = ((int *)GEN_TOP(**((uint * PTR32 *)GEN_TOP((*(int *)(iVar1 + 4) + 0x30 + (int)this)))));
    (*(int * PTR32 *)(gen_frame + 0x24)) = piVar2;
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x1c)),0);
    if (piVar2[1] != -1) {
      piVar2[1] = piVar2[1] + 1;
    }
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x1c)));
    piVar5 = (int *)F_00ebe160(&(*(int * PTR32 *)(gen_frame + 0x24)));
    (*(int * PTR32 *)(gen_frame + 0x24)) = piVar5;
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x18)),0);
    iVar1 = piVar2[1];
    if ((iVar1 != 0) && (iVar1 != -1)) {
      piVar2[1] = iVar1 + -1;
    }
    iVar1 = piVar2[1];
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x18)));
    puVar7 = ((undefined4 *)GEN_TOP((~-(uint)(iVar1 != 0) & (uint)piVar2)));
    if (puVar7 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar7)(puVar7,1);
    }
    iVar1 = *(int *)(*(int *)this + 4);
    iVar3 = *(int *)(iVar1 + 0x38 + (int)this);
    (*(undefined1 *)((char *)&(*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x18))))) + 0)) = 1;
    (*(undefined1 *)((char *)&(*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x18))))) + 0)) = 1;
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 0)) = iVar3 == 0;
    (*(uint *)(gen_frame + 0x10)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x10)), 1, 3),iVar3 == 0);
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x24)) + 0x20))
              ((*(int * PTR32 *)(gen_frame + 0x24)),&(*(undefined4 *)(gen_frame + 0xc)),iVar3,(*(uint *)(gen_frame + 0x10)),0,(*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x18))))),iVar1 + (int)this,&(*(uint *)(gen_frame + 0x28)),
               &(*(undefined4 *)(gen_frame + 0x20)));
    if (((*(uint *)(gen_frame + 0x28)) & 2) == 0) {
      *param_1 = (*(undefined4 *)(gen_frame + 0x20));
    }
    else {
      (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) | 2;
    }
  }
  iVar1 = *(int *)(*(int *)this + 4);
  if ((*(uint *)(gen_frame + 0x28)) != 0) {
    uVar6 = *(uint *)((int)this + iVar1 + 0xc) | (*(uint *)(gen_frame + 0x28));
    if (*(int *)((int)this + iVar1 + 0x38) == 0) {
      uVar6 = uVar6 | 4;
    }
    *(uint *)((int)this + iVar1 + 0xc) = uVar6 & 0x17;
    uVar6 = *(uint *)((int)this + iVar1 + 0x10) & uVar6 & 0x17;
    if (uVar6 != 0) {
      if ((uVar6 & 4) == 0) {
        if ((uVar6 & 2) == 0) {
          uVar6 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x8)) = "ios_base::eofbit set";
        }
        else {
          uVar6 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x8)) = "ios_base::failbit set";
        }
      }
      else {
        uVar6 = F_00c46280();
        (*(char * PTR32 *)(gen_frame + 0x8)) = "ios_base::badbit set";
      }
      (*(undefined4 *)(gen_frame + 0xc)) = 1;
      (*(uint *)(gen_frame + 0x10)) = uVar6;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x10910a4));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
    }
  }
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x38 + (int)this)));
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
  }
  return (uint)this;
}

/* ref: FUN_00ebf600 */
uint F_00ebf600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xebf600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int * piVar6;
  uint uVar7;
  undefined4 * puVar8;
  
  iVar1 = *(int *)this;
  (*(uint *)(gen_frame + 0x24)) = 0;
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(iVar1 + 4) + 0x38 + (int)this)));
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  }
  bVar5 = F_00ebc060(this,0);
  if (bVar5 != 0) {
    piVar2 = ((int *)GEN_TOP(**((uint * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x30 + (int)this)))));
    (*(int * PTR32 *)(gen_frame + 0x28)) = piVar2;
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x20)),0);
    if (piVar2[1] != -1) {
      piVar2[1] = piVar2[1] + 1;
    }
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x20)));
    piVar6 = (int *)F_00ebe160(&(*(int * PTR32 *)(gen_frame + 0x28)));
    (*(int * PTR32 *)(gen_frame + 0x28)) = piVar6;
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x1c)),0);
    iVar1 = piVar2[1];
    if ((iVar1 != 0) && (iVar1 != -1)) {
      piVar2[1] = iVar1 + -1;
    }
    iVar1 = piVar2[1];
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x1c)));
    puVar8 = ((undefined4 *)GEN_TOP((~-(uint)(iVar1 != 0) & (uint)piVar2)));
    if (puVar8 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar8)(puVar8,1);
    }
    iVar1 = *(int *)(*(int *)this + 4);
    iVar3 = *(int *)(iVar1 + 0x38 + (int)this);
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 0)) = iVar3 == 0;
    (*(uint *)(gen_frame + 0x14)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x14)), 1, 3),iVar3 == 0);
    iVar4 = *(*(int * PTR32 *)(gen_frame + 0x28));
    (*(undefined1 *)((char *)&(*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x1c))))) + 0)) = 1;
    (*(undefined1 *)((char *)&(*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x1c))))) + 0)) = 1;
    ((code *)*(gen_code32 *)(iVar4 + 0x24))
              ((*(int * PTR32 *)(gen_frame + 0x28)),&(*(undefined4 *)(gen_frame + 0x10)),iVar3,(*(uint *)(gen_frame + 0x14)),0,(*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x1c))))),iVar1 + (int)this,&(*(uint *)(gen_frame + 0x24)),
               param_1);
  }
  iVar1 = *(int *)(*(int *)this + 4);
  if ((*(uint *)(gen_frame + 0x24)) != 0) {
    uVar7 = *(uint *)((int)this + iVar1 + 0xc) | (*(uint *)(gen_frame + 0x24));
    if (*(int *)((int)this + iVar1 + 0x38) == 0) {
      uVar7 = uVar7 | 4;
    }
    *(uint *)((int)this + iVar1 + 0xc) = uVar7 & 0x17;
    uVar7 = *(uint *)((int)this + iVar1 + 0x10) & uVar7 & 0x17;
    if (uVar7 != 0) {
      if ((uVar7 & 4) == 0) {
        if ((uVar7 & 2) == 0) {
          uVar7 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0xc)) = "ios_base::eofbit set";
        }
        else {
          uVar7 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0xc)) = "ios_base::failbit set";
        }
      }
      else {
        uVar7 = F_00c46280();
        (*(char * PTR32 *)(gen_frame + 0xc)) = "ios_base::badbit set";
      }
      (*(undefined4 *)(gen_frame + 0x10)) = 1;
      (*(uint *)(gen_frame + 0x14)) = uVar7;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[3])REFP(0x10910a4));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
    }
  }
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x38 + (int)this)));
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
  }
  return (uint)this;
}

/* ref: FUN_00ebf780 */
uint F_00ebf780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xebf780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int * piVar6;
  uint uVar7;
  undefined4 * puVar8;
  
  iVar1 = *(int *)this;
  (*(uint *)(gen_frame + 0x24)) = 0;
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(iVar1 + 4) + 0x38 + (int)this)));
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  }
  bVar5 = F_00ebc060(this,0);
  if (bVar5 != 0) {
    piVar2 = ((int *)GEN_TOP(**((uint * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x30 + (int)this)))));
    (*(int * PTR32 *)(gen_frame + 0x28)) = piVar2;
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x20)),0);
    if (piVar2[1] != -1) {
      piVar2[1] = piVar2[1] + 1;
    }
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x20)));
    piVar6 = (int *)F_00ebe160(&(*(int * PTR32 *)(gen_frame + 0x28)));
    (*(int * PTR32 *)(gen_frame + 0x28)) = piVar6;
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x1c)),0);
    iVar1 = piVar2[1];
    if ((iVar1 != 0) && (iVar1 != -1)) {
      piVar2[1] = iVar1 + -1;
    }
    iVar1 = piVar2[1];
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x1c)));
    puVar8 = ((undefined4 *)GEN_TOP((~-(uint)(iVar1 != 0) & (uint)piVar2)));
    if (puVar8 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar8)(puVar8,1);
    }
    iVar1 = *(int *)(*(int *)this + 4);
    iVar3 = *(int *)(iVar1 + 0x38 + (int)this);
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 0)) = iVar3 == 0;
    (*(uint *)(gen_frame + 0x14)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x14)), 1, 3),iVar3 == 0);
    iVar4 = *(*(int * PTR32 *)(gen_frame + 0x28));
    (*(undefined1 *)((char *)&(*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x1c))))) + 0)) = 1;
    (*(undefined1 *)((char *)&(*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x1c))))) + 0)) = 1;
    ((code *)*(gen_code32 *)(iVar4 + 0x18))
              ((*(int * PTR32 *)(gen_frame + 0x28)),&(*(undefined4 *)(gen_frame + 0x10)),iVar3,(*(uint *)(gen_frame + 0x14)),0,(*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x1c))))),iVar1 + (int)this,&(*(uint *)(gen_frame + 0x24)),
               param_1);
  }
  iVar1 = *(int *)(*(int *)this + 4);
  if ((*(uint *)(gen_frame + 0x24)) != 0) {
    uVar7 = *(uint *)((int)this + iVar1 + 0xc) | (*(uint *)(gen_frame + 0x24));
    if (*(int *)((int)this + iVar1 + 0x38) == 0) {
      uVar7 = uVar7 | 4;
    }
    *(uint *)((int)this + iVar1 + 0xc) = uVar7 & 0x17;
    uVar7 = *(uint *)((int)this + iVar1 + 0x10) & uVar7 & 0x17;
    if (uVar7 != 0) {
      if ((uVar7 & 4) == 0) {
        if ((uVar7 & 2) == 0) {
          uVar7 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0xc)) = "ios_base::eofbit set";
        }
        else {
          uVar7 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0xc)) = "ios_base::failbit set";
        }
      }
      else {
        uVar7 = F_00c46280();
        (*(char * PTR32 *)(gen_frame + 0xc)) = "ios_base::badbit set";
      }
      (*(undefined4 *)(gen_frame + 0x10)) = 1;
      (*(uint *)(gen_frame + 0x14)) = uVar7;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[3])REFP(0x10910a4));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
    }
  }
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x38 + (int)this)));
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
  }
  return (uint)this;
}

/* ref: FUN_00ebf900 */
uint F_00ebf900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xebf900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int * piVar6;
  uint uVar7;
  undefined4 * puVar8;
  
  iVar1 = *(int *)this;
  (*(uint *)(gen_frame + 0x24)) = 0;
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(iVar1 + 4) + 0x38 + (int)this)));
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  }
  bVar5 = F_00ebc060(this,0);
  if (bVar5 != 0) {
    piVar2 = ((int *)GEN_TOP(**((uint * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x30 + (int)this)))));
    (*(int * PTR32 *)(gen_frame + 0x28)) = piVar2;
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x20)),0);
    if (piVar2[1] != -1) {
      piVar2[1] = piVar2[1] + 1;
    }
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x20)));
    piVar6 = (int *)F_00ebe160(&(*(int * PTR32 *)(gen_frame + 0x28)));
    (*(int * PTR32 *)(gen_frame + 0x28)) = piVar6;
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x1c)),0);
    iVar1 = piVar2[1];
    if ((iVar1 != 0) && (iVar1 != -1)) {
      piVar2[1] = iVar1 + -1;
    }
    iVar1 = piVar2[1];
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x1c)));
    puVar8 = ((undefined4 *)GEN_TOP((~-(uint)(iVar1 != 0) & (uint)piVar2)));
    if (puVar8 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar8)(puVar8,1);
    }
    iVar1 = *(int *)(*(int *)this + 4);
    iVar3 = *(int *)(iVar1 + 0x38 + (int)this);
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 0)) = iVar3 == 0;
    (*(uint *)(gen_frame + 0x14)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x14)), 1, 3),iVar3 == 0);
    iVar4 = *(*(int * PTR32 *)(gen_frame + 0x28));
    (*(undefined1 *)((char *)&(*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x1c))))) + 0)) = 1;
    (*(undefined1 *)((char *)&(*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x1c))))) + 0)) = 1;
    ((code *)*(gen_code32 *)(iVar4 + 0x10))
              ((*(int * PTR32 *)(gen_frame + 0x28)),&(*(undefined4 *)(gen_frame + 0x10)),iVar3,(*(uint *)(gen_frame + 0x14)),0,(*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x1c))))),iVar1 + (int)this,&(*(uint *)(gen_frame + 0x24)),
               param_1);
  }
  iVar1 = *(int *)(*(int *)this + 4);
  if ((*(uint *)(gen_frame + 0x24)) != 0) {
    uVar7 = *(uint *)((int)this + iVar1 + 0xc) | (*(uint *)(gen_frame + 0x24));
    if (*(int *)((int)this + iVar1 + 0x38) == 0) {
      uVar7 = uVar7 | 4;
    }
    *(uint *)((int)this + iVar1 + 0xc) = uVar7 & 0x17;
    uVar7 = *(uint *)((int)this + iVar1 + 0x10) & uVar7 & 0x17;
    if (uVar7 != 0) {
      if ((uVar7 & 4) == 0) {
        if ((uVar7 & 2) == 0) {
          uVar7 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0xc)) = "ios_base::eofbit set";
        }
        else {
          uVar7 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0xc)) = "ios_base::failbit set";
        }
      }
      else {
        uVar7 = F_00c46280();
        (*(char * PTR32 *)(gen_frame + 0xc)) = "ios_base::badbit set";
      }
      (*(undefined4 *)(gen_frame + 0x10)) = 1;
      (*(uint *)(gen_frame + 0x14)) = uVar7;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[3])REFP(0x10910a4));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
    }
  }
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x38 + (int)this)));
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
  }
  return (uint)this;
}

/* ref: FUN_00ebfb80 */
uint F_00ebfb80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xebfb80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int iVar2;
  byte bVar3;
  byte * pbVar4;
  uint uVar5;
  uint uVar6;
  
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x38 + (int)this)));
  uVar6 = 0;
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  }
  bVar3 = F_00ebc060(this,1);
  if (bVar3 != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x38 + (int)this)));
    uVar5 = *(uint *)piVar1[8];
    if (((uVar5 == 0) || (uVar5 <= *(uint *)piVar1[4])) || ((byte)param_1 != *(byte *)(uVar5 - 1)))
    {
      uVar5 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,(uint)(byte)param_1);
    }
    else {
      *(int *)piVar1[0xc] = *(int *)piVar1[0xc] + 1;
      pbVar4 = (byte *)(*(int *)piVar1[8] + -1);
      *(int *)piVar1[8] = (int)pbVar4;
      uVar5 = (uint)*pbVar4;
    }
    if (uVar5 == 0xffffffff) {
      uVar6 = 4;
    }
  }
  iVar2 = *(int *)(*(int *)this + 4);
  if (uVar6 != 0) {
    uVar6 = *(uint *)((int)this + iVar2 + 0xc) | uVar6;
    if (*(int *)((int)this + iVar2 + 0x38) == 0) {
      uVar6 = uVar6 | 4;
    }
    *(uint *)((int)this + iVar2 + 0xc) = uVar6 & 0x17;
    uVar6 = *(uint *)((int)this + iVar2 + 0x10) & uVar6 & 0x17;
    if (uVar6 != 0) {
      if ((uVar6 & 4) == 0) {
        if ((uVar6 & 2) == 0) {
          uVar6 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x10)) = "ios_base::eofbit set";
        }
        else {
          uVar6 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x10)) = "ios_base::failbit set";
        }
      }
      else {
        uVar6 = F_00c46280();
        (*(char * PTR32 *)(gen_frame + 0x10)) = "ios_base::badbit set";
      }
      (*(undefined4 *)(gen_frame + 0x14)) = 1;
      (*(uint *)(gen_frame + 0x18)) = uVar6;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 (*)[3])REFP(0x10910a4));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)));
    }
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x38 + (int)this)));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  }
  return (uint)this;
}

/* ref: FUN_00ebfc90 */
uint F_00ebfc90(unsigned int gen_a0)
{
  GEN_ENTER(0xebfc90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int iVar2;
  byte bVar3;
  byte * pbVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x38 + (int)this)));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  }
  bVar3 = F_00ebc060(this,1);
  if (bVar3 != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x38 + (int)this)));
    if ((*(uint *)piVar1[8] == 0) || (*(uint *)piVar1[8] <= *(uint *)piVar1[4])) {
      uVar5 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0xffffffff);
    }
    else {
      *(int *)piVar1[0xc] = *(int *)piVar1[0xc] + 1;
      pbVar4 = (byte *)(*(int *)piVar1[8] + -1);
      *(int *)piVar1[8] = (int)pbVar4;
      uVar5 = (uint)*pbVar4;
    }
    if (uVar5 == 0xffffffff) {
      uVar6 = 4;
    }
  }
  iVar2 = *(int *)(*(int *)this + 4);
  if (uVar6 != 0) {
    uVar6 = *(uint *)((int)this + iVar2 + 0xc) | uVar6;
    if (*(int *)((int)this + iVar2 + 0x38) == 0) {
      uVar6 = uVar6 | 4;
    }
    *(uint *)((int)this + iVar2 + 0xc) = uVar6 & 0x17;
    uVar6 = *(uint *)((int)this + iVar2 + 0x10) & uVar6 & 0x17;
    if (uVar6 != 0) {
      if ((uVar6 & 4) == 0) {
        if ((uVar6 & 2) == 0) {
          uVar6 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x10)) = "ios_base::eofbit set";
        }
        else {
          uVar6 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x10)) = "ios_base::failbit set";
        }
      }
      else {
        uVar6 = F_00c46280();
        (*(char * PTR32 *)(gen_frame + 0x10)) = "ios_base::badbit set";
      }
      (*(undefined4 *)(gen_frame + 0x14)) = 1;
      (*(uint *)(gen_frame + 0x18)) = uVar6;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 (*)[3])REFP(0x10910a4));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)));
    }
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(*(int *)this + 4) + 0x38 + (int)this)));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  }
  return (uint)this;
}

/* ref: FUN_00ebfd90 */
uint F_00ebfd90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xebfd90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  char cVar1;
  undefined4 * puVar2;
  byte bVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar5 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)((int)this + 4))[1]));
  cVar1 = *(char *)((int)puVar5 + 0x81);
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  while (cVar1 == '\0') {
    bVar3 = F_0042c7c0(puVar5 + 4,param_2);
    if (bVar3 == 0) {
      puVar4 = (undefined4 *)*puVar5;
    }
    else {
      puVar4 = (undefined4 *)puVar5[2];
      puVar5 = puVar2;
    }
    puVar2 = puVar5;
    puVar5 = puVar4;
    cVar1 = *(char *)((int)puVar4 + 0x81);
  }
  if ((puVar2 != *(undefined4 * PTR32 *)((int)this + 4)) &&
     (bVar3 = F_0042c7c0(param_2,puVar2 + 4), bVar3 == 0)) {
    *param_1 = puVar2;
    return (uint)param_1;
  }
  *param_1 = *(undefined4 *)((int)this + 4);
  return (uint)param_1;
}

/* ref: FUN_00ebfe20 */
uint F_00ebfe20(unsigned int gen_a0)
{
  GEN_ENTER(0xebfe20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  this_00 = (int *)((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d524));
  iVar1 = *(int *)((int)this + 0x70);
  if (iVar1 != 0) {
    iVar2 = *(int *)((int)this + 0x78);
    uVar4 = ((code *)*(gen_code32 *)(*this_00 + 0x10))(this_00);
    iVar3 = *((int *)GEN_TOP(((uVar4 - 0x20) + iVar1)));
    *(int *)(iVar1 + -8) = iVar2;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar1 + -0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar2 + -1) * -0x10 + -0x20;
  }
  *this_00 = (int)(*(undefined * PTR32 (*)[7])REFP(0x115d0f4));
  uVar4 = F_00eb1780(this_00);
  *this_00 = (int)(*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return uVar4;
}

/* ref: FUN_00ebfee0 */
uint F_00ebfee0(unsigned int gen_a0)
{
  GEN_ENTER(0xebfee0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  this_00 = (int *)((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d55c));
  iVar1 = *(int *)((int)this + 0xb0);
  if (iVar1 != 0) {
    iVar2 = *(int *)((int)this + 0xb8);
    uVar4 = ((code *)*(gen_code32 *)(*this_00 + 0x10))(this_00);
    iVar3 = *((int *)GEN_TOP(((uVar4 - 0x20) + iVar1)));
    *(int *)(iVar1 + -8) = iVar2;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar1 + -0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar2 + -1) * -0x10 + -0x20;
  }
  *this_00 = (int)(*(undefined * PTR32 (*)[7])REFP(0x115d1d4));
  uVar4 = F_00eb19b0(this_00);
  *this_00 = (int)(*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return uVar4;
}

/* ref: FUN_00ebff60 */
unsigned int F_00ebff60(unsigned int gen_a0)
{
  GEN_ENTER(0xebff60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  this_00 = (int *)((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d574));
  iVar1 = *(int *)((int)this + 0xd0);
  if (iVar1 != 0) {
    iVar2 = *(int *)((int)this + 0xd8);
    uVar4 = ((code *)*(gen_code32 *)(*this_00 + 0x10))(this_00);
    iVar3 = *((int *)GEN_TOP(((uVar4 - 0x20) + iVar1)));
    *(int *)(iVar1 + -8) = iVar2;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar1 + -0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar2 + -1) * -0x10 + -0x20;
  }
  *this_00 = (int)(*(undefined * PTR32 (*)[7])REFP(0x115d234));
  F_00eb1aa0(this_00);
  *this_00 = (int)(*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: FUN_00ebffd0 */
unsigned int F_00ebffd0(unsigned int gen_a0)
{
  GEN_ENTER(0xebffd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  this_00 = (int *)((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  iVar1 = *(int *)((int)this + 0x90);
  if (iVar1 != 0) {
    iVar2 = *(int *)((int)this + 0x98);
    uVar4 = ((code *)*(gen_code32 *)(*this_00 + 0x10))(this_00);
    iVar3 = *((int *)GEN_TOP(((uVar4 - 0x20) + iVar1)));
    *(int *)(iVar1 + -8) = iVar2;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar1 + -0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar2 + -1) * -0x10 + -0x20;
  }
  *this_00 = (int)(*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb1b40(this_00);
  *this_00 = (int)(*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: FUN_00ec0110 */
unsigned int F_00ec0110(unsigned int gen_a0)
{
  GEN_ENTER(0xec0110u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  this_00 = (int *)((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5fc));
  iVar1 = *(int *)((int)this + 0x290);
  if (iVar1 != 0) {
    iVar2 = *(int *)((int)this + 0x298);
    uVar4 = ((code *)*(gen_code32 *)(*this_00 + 0x10))(this_00);
    iVar3 = *((int *)GEN_TOP(((uVar4 - 0x20) + iVar1)));
    *(int *)(iVar1 + -8) = iVar2;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar1 + -0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar2 + -1) * -0x10 + -0x20;
  }
  *this_00 = (int)(*(undefined * PTR32 (*)[7])REFP(0x115d454));
  F_00eb2000(this_00);
  *this_00 = (int)(*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

/* ref: FUN_00ec0180 */
unsigned int F_00ec0180(unsigned int gen_a0)
{
  GEN_ENTER(0xec0180u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  this_00 = (int *)((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115d60c));
  iVar1 = *(int *)((int)this + 0x4f0);
  if (iVar1 != 0) {
    iVar2 = *(int *)((int)this + 0x4f8);
    uVar4 = ((code *)*(gen_code32 *)(*this_00 + 0x10))(this_00);
    iVar3 = *((int *)GEN_TOP(((uVar4 - 0x20) + iVar1)));
    *(int *)(iVar1 + -8) = iVar2;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(int *)(iVar3 + 0xc) = iVar1 + -0x10;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + (iVar2 + -1) * -0x10 + -0x20;
  }
  *this_00 = (int)(*(undefined * PTR32 (*)[7])REFP(0x115d494));
  F_00eb20a0(this_00);
  *this_00 = (int)(*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  return 0;
}

