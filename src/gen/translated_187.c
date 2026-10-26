#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00e4ffe0 */
uint F_00e4ffe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe4ffe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00e50000 */
uint F_00e50000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe50000u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (0x1ffffffd < *(uint *)((int)this + 8)) {
    F_00406ad0(param_4);
                    
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
  cVar1 = *(char *)(param_4[1] + 0x14);
  piVar4 = param_4;
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      *param_1 = param_4;
      *(undefined1 *)(iVar2 + 0x14) = 1;
      return (uint)param_1;
    }
    piVar5 = (int *)piVar4[1];
    piVar6 = (int *)piVar5[1];
    if (piVar5 == (int *)*piVar6) {
      iVar2 = piVar6[2];
      if (*(char *)(iVar2 + 0x14) == '\0') {
        *(undefined1 *)(piVar5 + 5) = 1;
        *(undefined1 *)(iVar2 + 0x14) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x14))) = 0;
        piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
      }
      else {
        if (piVar4 == (int *)piVar5[2]) {
          piVar4 = (int *)piVar5[2];
          piVar5[2] = *piVar4;
          if (*(char *)(*piVar4 + 0x15) == '\0') {
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
        *(undefined1 *)(piVar4[1] + 0x14) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x14))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)*piVar5;
        *piVar5 = piVar6[2];
        if (*(char *)(piVar6[2] + 0x15) == '\0') {
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
LAB_00e501fd: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*(char *)(iVar2 + 0x14) != '\0') {
        if (piVar4 == (int *)*piVar5) {
          iVar2 = *piVar5;
          *piVar5 = *(int *)(iVar2 + 8);
          if (*((char *)GEN_TOP((*(int *)(iVar2 + 8) + 0x15))) == '\0') {
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
        *(undefined1 *)(piVar4[1] + 0x14) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x14))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)piVar5[2];
        piVar5[2] = *piVar6;
        if (*(char *)(*piVar6 + 0x15) == '\0') {
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
        goto LAB_00e501fd;
      }
      *(undefined1 *)(piVar5 + 5) = 1;
      *(undefined1 *)(iVar2 + 0x14) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x14))) = 0;
      piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
    }
    cVar1 = *(char *)(piVar4[1] + 0x14);
  } while( true );
}

/* ref: FUN_00e50230 */
uint F_00e50230(unsigned int gen_a0)
{
  GEN_ENTER(0xe50230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00e4fe10(this);
  return (uint)this;
}

/* ref: FUN_00e50240 */
uint F_00e50240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe50240u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e50260 */
uint F_00e50260(unsigned int gen_a0)
{
  GEN_ENTER(0xe50260u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004069f0(0x18);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *(undefined4 *)((int)this + 4);
    puVar1[1] = *(undefined4 *)((int)this + 4);
    puVar1[2] = *(undefined4 *)((int)this + 4);
    *(undefined2 *)(puVar1 + 5) = 0;
    return (uint)puVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: std::allocator<std::_Container_proxy>::construct_00e502b0 */
unsigned int F_00e502b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe502b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  if (param_1 != (undefined *)0x0) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_00e502d0 */
uint F_00e502d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe502d0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  if (*(char *)((int)puVar2[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar1;
      if ((char)(*(undefined4 * PTR32 *)&gen_args[3]) == '\0') {
        bVar3 = *(int *)((*(int *)&gen_args[2]) + 0xc) < (int)puVar2[3];
      }
      else {
        bVar3 = *(int *)((*(int *)&gen_args[2]) + 0xc) <= (int)puVar2[3];
      }
      (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar3);
      if (bVar3 == false) {
        puVar1 = (undefined4 *)puVar2[2];
      }
      else {
        puVar1 = (undefined4 *)*puVar2;
      }
    } while (*(char *)((int)puVar1 + 0x15) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = puVar2;
  if (bVar3 != false) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      puVar2 = (undefined4 *)F_00e50000((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar2,(*(int *)&gen_args[2]));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_00e4fe10(&(*(undefined4 * PTR32 *)&gen_args[3]));
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[3]);
  if ((int)(*(undefined4 * PTR32 *)&gen_args[3])[3] < *(int *)((*(int *)&gen_args[2]) + 0xc)) {
    puVar2 = (undefined4 *)F_00e50000((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),(*(undefined4 *)(gen_frame + 0x8)),puVar2,(*(int *)&gen_args[2]));
    *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  F_00406ad0((*(int *)&gen_args[2]));
  *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00e503b0 */
unsigned int F_00e503b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe503b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_00e503d0 */
uint F_00e503d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe503d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004069f0(0x18);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *(undefined4 *)((int)this + 4);
    puVar1[1] = *(undefined4 *)((int)this + 4);
    puVar1[2] = *(undefined4 *)((int)this + 4);
    *(undefined2 *)(puVar1 + 5) = 0;
    if (puVar1 + 3 != (undefined4 *)0x0) {
      puVar1[3] = *param_1;
      puVar1[4] = param_1[1];
    }
    return (uint)puVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00e50430 */
uint F_00e50430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe50430u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004069f0(0x18);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *(undefined4 *)((int)this + 4);
    puVar1[1] = *(undefined4 *)((int)this + 4);
    puVar1[2] = *(undefined4 *)((int)this + 4);
    *(undefined2 *)(puVar1 + 5) = 0;
    if (puVar1 + 3 != (undefined4 *)0x0) {
      puVar1[3] = *param_2;
      puVar1[4] = param_2[1];
    }
    F_00e502d0(this,param_1,puVar1,0);
    return param_1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: Application::Network::WorkDefinitions::Base_TypeInfoInterface::vf12 */
uint F_00e504c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xe504c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Base_TypeInfoInterface::vf16 */
uint F_00e504d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xe504d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Base_TypeInfoInterface::vf0 */
uint F_00e504e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe504e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[21])REFP(0x11584bc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Base::vf6 */
unsigned int F_00e50520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe50520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Base::vf5 */
unsigned int F_00e50530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe50530u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Base::vf0 */
uint F_00e50540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe50540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00e50570 */
ulonglong F_00e50570(unsigned int gen_a0)
{
  GEN_ENTER(0xe50570u, gen_a0, 0u, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  uint local_c;
  int iStack_8;
  
  cVar4 = *param_1;
  if (cVar4 < '0') {
    return 0;
  }
  iStack_8 = 0;
  local_c = 0;
  iVar6 = iStack_8;
  uVar7 = local_c;
  do {
    if ('9' < cVar4) break;
    uVar5 = (int)cVar4 - 0x30;
    uVar1 = uVar7 >> 0x1e;
    bVar8 = CARRY4(uVar7,uVar7 * 4);
    uVar3 = uVar7 * 5;
    uVar2 = uVar7 * 10;
    uVar7 = uVar2 + uVar5;
    iVar6 = (((iVar6 << 2 | uVar1) + iVar6 + (uint)bVar8) * 2 | uVar3 >> 0x1f) +
            ((int)uVar5 >> 0x1f) + (uint)CARRY4(uVar2,uVar5);
    param_1 = param_1 + 1;
    cVar4 = *param_1;
  } while ('/' < cVar4);
  return CONCAT44(iVar6,uVar7);
}

/* ref: FUN_00e505e0 */
ulonglong F_00e505e0(unsigned int gen_a0)
{
  GEN_ENTER(0xe505e0u, gen_a0, 0u, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  char cVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char * pcVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  uint local_10;
  int iStack_c;
  
  cVar1 = *param_1;
  if (cVar1 == '-') {
    param_1 = param_1 + 1;
  }
  cVar2 = *param_1;
  iStack_c = 0;
  local_10 = 0;
  iVar8 = iStack_c;
  uVar9 = local_10;
  pcVar7 = param_1;
  while (('/' < cVar2 && (cVar2 < ':'))) {
    uVar6 = (int)cVar2 - 0x30;
    uVar3 = uVar9 >> 0x1e;
    bVar10 = CARRY4(uVar9,uVar9 * 4);
    uVar5 = uVar9 * 5;
    uVar4 = uVar9 * 10;
    uVar9 = uVar4 + uVar6;
    iVar8 = (((iVar8 << 2 | uVar3) + iVar8 + (uint)bVar10) * 2 | uVar5 >> 0x1f) +
            ((int)uVar6 >> 0x1f) + (uint)CARRY4(uVar4,uVar6);
    pcVar7 = pcVar7 + 1;
    cVar2 = *pcVar7;
  }
  if (cVar1 == '-') {
    bVar10 = uVar9 != 0;
    uVar9 = -uVar9;
    iVar8 = -(iVar8 + (uint)bVar10);
  }
  return CONCAT44(iVar8,uVar9);
}

/* ref: FUN_00e50660 */
float F_00e50660(unsigned int gen_a0)
{
  GEN_ENTER(0xe50660u, gen_a0, 0u, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  char cVar1;
  char * pcVar2;
  float fVar3;
  float local_8;
  
  local_8 = 0.0;
  pcVar2 = param_1;
  if (*param_1 == '-') {
    pcVar2 = param_1 + 1;
  }
  cVar1 = *pcVar2;
  while (('/' < cVar1 && (cVar1 < ':'))) {
    if (cVar1 == '.') goto LAB_00e506d3;
    pcVar2 = pcVar2 + 1;
    local_8 = (float)((double)local_8 * REFG(double, 0x10944b8)) + (float)(cVar1 + -0x30);
    cVar1 = *pcVar2;
  }
  if (*pcVar2 == '.') {
LAB_00e506d3: ;
    cVar1 = pcVar2[1];
    fVar3 = REFG(float, 0x1094884);
    while (('/' < cVar1 && (cVar1 < ':'))) {
      local_8 = ((float)GEN_TOF(((double)(cVar1 + -0x30) * (double)fVar3 + (double)local_8)));
      fVar3 = (float)((double)fVar3 * REFG(double, 0x1094800));
      cVar1 = pcVar2[2];
      pcVar2 = pcVar2 + 1;
    }
  }
  if (*param_1 == '-') {
    local_8 = gen_bits2f((uint)gen_fl2bits(local_8) ^ REFG(uint, 0x10920d0));
  }
  return local_8;
}

/* ref: FUN_00e50750 */
uint F_00e50750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe50750u, gen_a0, gen_a1, gen_a2, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  char cVar1;
  char * pcVar2;
  uint _MaxCount;
  uint uVar3;
  int iVar4;
  
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  _MaxCount = (int)pcVar2 - (int)(param_2 + 1);
  if (param_3 == 0) {
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar3 = (int)pcVar2 - (int)(param_1 + 1);
  }
  else {
    uVar3 = (param_3 - (int)param_1) + 1;
  }
  if (_MaxCount <= uVar3) {
    pcVar2 = param_1 + (uVar3 - _MaxCount);
    while( true ) {
      if (pcVar2 < param_1) {
        return 0;
      }
      iVar4 = F_00c4b813(pcVar2,param_2,_MaxCount);
      if (iVar4 == 0) break;
      pcVar2 = pcVar2 + -1;
    }
    return (uint)pcVar2;
  }
  return 0;
}

/* ref: FUN_00e507d0 */
uint F_00e507d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe507d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00ea7e80(this,param_1);
  return uVar1;
}

/* ref: FUN_00e507e0 */
uint F_00e507e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe507e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00ea7eb0(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e50800 */
uint F_00e50800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe50800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00ea7fb0(this,param_1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup_TypeInfo::vf1 */
uint F_00e508d0(void)
{
  GEN_ENTER(0xe508d0u, 0u, 0u, 0u, 0u);
  return 10;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup_TypeInfo::vf2 */
uint F_00e508e0(void)
{
  GEN_ENTER(0xe508e0u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x135adb4);
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup_TypeInfo::vf3 */
uint F_00e508f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe508f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x1158250) + param_1 * 4);
}

/* ref: FUN_00e50910 */
uint F_00e50910(unsigned int gen_a0)
{
  GEN_ENTER(0xe50910u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(&REFG(undefined, 0x1158268) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup_TypeInfo::vf4 */
uint F_00e50930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe50930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,uVar2);
    if (uVar1 == param_1) {
      return uVar2;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 6);
  return 0xffffffff;
}

/* ref: FUN_00e50970 */
uint F_00e50970(unsigned int gen_a0)
{
  GEN_ENTER(0xe50970u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 - 0x28;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup_TypeInfo::vf6 */
uint F_00e50980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe50980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (uint)(&REFG(undefined * PTR32, 0x135ad9c))[param_1];
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup_TypeInfo::vf7 */
uint F_00e509a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe509a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x1158208) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup_TypeInfo::vf8 */
uint F_00e509c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe509c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x1158238) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup_TypeInfo::vf9 */
uint F_00e509e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe509e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x15e3780) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup_TypeInfo::vf10 */
uint F_00e50a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe50a00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x1158220) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup_TypeInfo::vf14 */
uint F_00e50a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe50a20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(&REFG(undefined, 0x1158238) + param_1 * 4) != 0x12) {
    if (*(int *)(&REFG(undefined, 0x1158238) + param_1 * 4) == 0x14) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(&REFG(undefined, 0x15e3780) + param_1 * 4) + 0x2c))))
                        (*(int * PTR32 *)(&REFG(undefined, 0x15e3780) + param_1 * 4));
      return uVar2 + 4;
    }
    return *(int *)(&REFG(undefined, 0x1158220) + param_1 * 4) + 4;
  }
  piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3780) + param_1 * 4);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
    return uVar2 * *(int *)(&REFG(undefined, 0x1158208) + param_1 * 4) + 7;
  }
  return *(int *)(&REFG(undefined, 0x1158220) + param_1 * 4) * *(int *)(&REFG(undefined, 0x1158208) + param_1 * 4) + 7;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup_TypeInfo::vf13 */
uint F_00e50aa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe50aa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 7;
  if ((char)param_2 == '\0') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3780) + param_1 * 4);
    if (piVar1 == (int *)0x0) {
      return *(int *)(&REFG(undefined, 0x1158220) + param_1 * 4) * *(int *)(&REFG(undefined, 0x1158208) + param_1 * 4) + 7;
    }
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
    uVar2 = uVar2 * *(int *)(&REFG(undefined, 0x1158208) + param_1 * 4) + 7;
  }
  else if ((char)param_2 == '\x01') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3780) + param_1 * 4);
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
      return uVar2 + 7;
    }
    return *(int *)(&REFG(undefined, 0x1158220) + param_1 * 4) + 7;
  }
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup_TypeInfo::vf12 */
uint F_00e50b20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xe50b20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = (((param_4 - param_3) + 1U & 0xffff) >> 5) + 1;
  uVar6 = 0;
  iVar1 = uVar4 * 4 + 9;
  uVar5 = 0;
  if (uVar4 != 0) {
    do {
      uVar2 = *(uint *)(param_5 + uVar5 * 4);
      if ((uVar2 & 1) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 2) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 4) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 8) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x10) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x20) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x40) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((char)uVar2 < '\0') {
        uVar6 = uVar6 + 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  piVar3 = *(int * PTR32 *)(&REFG(undefined, 0x15e3780) + param_1 * 4);
  if (piVar3 == (int *)0x0) {
    return (uVar6 & 0xffff) * *(int *)(&REFG(undefined, 0x1158220) + param_1 * 4) + iVar1;
  }
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x2c))(piVar3);
  return uVar4 * (uVar6 & 0xffff) + iVar1;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup_TypeInfo::vf11 */
uint F_00e50bb0(unsigned int gen_a0)
{
  GEN_ENTER(0xe50bb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,0);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,1);
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,2);
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,3);
  uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,4);
  uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,5);
  return uVar6 + uVar1 + uVar2 + uVar3 + uVar4 + uVar5;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup_TypeInfo::vf15 */
uint F_00e50c10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe50c10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,0,param_2);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,1,uVar1 + param_2);
  iVar3 = uVar1 + param_2 + uVar2;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,2,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,3,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,4,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,5,iVar3);
  return uVar1 + (iVar3 - param_2);
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup_TypeInfo::vf19 */
uint F_00e50c90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe50c90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,0,param_1,param_2);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,1,uVar1 + param_1,param_2);
  iVar3 = uVar1 + param_1 + uVar2;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,2,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,3,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,4,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,5,iVar3,param_2);
  return uVar1 + (iVar3 - param_1);
}

/* ref: FUN_00e50d10 */
unsigned int F_00e50d10(unsigned int gen_a0)
{
  GEN_ENTER(0xe50d10u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup::vf2 */
uint F_00e50d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe50d20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x135ae3c) + 0x10))))(&REFG(undefined * PTR32, 0x135ae3c),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: FUN_00e50d50 */
uint F_00e50d50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe50d50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x135ae3c) + 0x10))))(&REFG(undefined * PTR32, 0x135ae3c),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup::vf4 */
uint F_00e50d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe50d80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    return in_ecx + 4;
  case 1: ;
    return in_ecx + 5;
  case 2: ;
    return in_ecx + 8;
  case 3: ;
    return in_ecx + 0x10;
  case 4: ;
    return in_ecx + 0x18;
  case 5: ;
    return in_ecx + 0xd8;
  default: ;
    return 0;
  }
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup::vf3 */
uint F_00e50de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe50de0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  if ((param_2 < *(uint *)(&REFG(undefined, 0x1158208) + param_1 * 4)) && (param_1 == 4)) {
    return (uint)(this + param_2 * 8 + 0x18);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup::vf6 */
unsigned int F_00e50e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe50e10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  undefined * pFVar5;
  int iVar6;
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  if ((short)uVar3 == (short)uVar4) {
    this[4] = *(undefined *)(param_1 + 1);
    this[5] = *(undefined *)((int)param_1 + 5);
    *(int *)(this + 8) = param_1[2];
    *(int *)(this + 0xc) = param_1[3];
    this[0x10] = *(undefined *)(param_1 + 4);
    pFVar5 = this + 0x18;
    iVar6 = 0x18;
    do {
      *(undefined4 *)pFVar5 = *((undefined4 *)GEN_TOP((pFVar5 + ((int)param_1 - (int)this))));
      *(undefined4 *)(pFVar5 + 4) = *((undefined4 *)GEN_TOP((pFVar5 + ((int)param_1 - (int)this) + 4)));
      pFVar5 = pFVar5 + 8;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    *(int *)(this + 0xd8) = param_1[0x36];
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup::vf5 */
uint F_00e50eb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe50eb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined1 FVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  undefined * pFVar6;
  int iVar7;
  
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
  if ((short)uVar4 == (short)uVar5) {
    uVar5 = param_2;
    switch((unsigned int)(uintptr_t)(param_2)) {
    case 0: ;
      FVar1 = *(undefined *)(param_1 + 1);
      this[4] = FVar1;
      return CONCAT31((int3)(param_2 >> 8),FVar1);
    case 1: ;
      this[5] = *(undefined *)((int)param_1 + 5);
      return param_2;
    case 2: ;
      *(int *)(this + 8) = param_1[2];
      uVar5 = param_1[3];
      *(uint *)(this + 0xc) = uVar5;
      return uVar5;
    case 3: ;
      this[0x10] = *(undefined *)(param_1 + 4);
      return param_2;
    case 4: ;
      pFVar6 = this + 0x18;
      iVar7 = 0x18;
      do {
        *(undefined4 *)pFVar6 = *((undefined4 *)GEN_TOP((pFVar6 + ((int)param_1 - (int)this))));
        *(undefined4 *)(pFVar6 + 4) = *((undefined4 *)GEN_TOP((pFVar6 + ((int)param_1 - (int)this) + 4)));
        pFVar6 = pFVar6 + 8;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      return (uint)pFVar6;
    case 5: ;
      *(int *)(this + 0xd8) = param_1[0x36];
    }
  }
  return uVar5;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup::vf8 */
byte F_00e50f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe50f90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  char * pcVar7;
  int * piVar8;
  char * pcVar9;
  byte * pbVar10;
  byte * pbVar11;
  undefined * this_00;
  uint uVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  undefined4 uVar16;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  if (*(int *)((int)param_1 + 8) != 5) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c) ^ (uint)(uint)(gen_frame + 0x5c));
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
  uVar6 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  uVar6 = F_00e82f00(uVar6);
  pcVar7 = (char *)F_0042a990(uVar6);
  pcVar1 = pcVar7 + 1;
  do {
    cVar3 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar3 != '\0');
  piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar9 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 8))(piVar8)));
  pcVar2 = pcVar9 + 1;
  do {
    cVar3 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
    piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    pbVar10 = ((byte *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 8))(piVar8)));
    uVar6 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
    uVar6 = F_00e82f00(uVar6);
    pbVar11 = (byte *)F_0042a990(uVar6);
    do {
      bVar4 = *pbVar11;
      bVar15 = bVar4 < *pbVar10;
      if (bVar4 != *pbVar10) {
LAB_00e51093: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00e51098;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar11[1];
      bVar15 = bVar4 < pbVar10[1];
      if (bVar4 != pbVar10[1]) goto LAB_00e51093;
      pbVar11 = pbVar11 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00e51098: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"content",REFG(undefined4, 0x108cc50));
      this_00 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
      F_0042c880(((undefined1 *)(gen_frame + 0x4)));
      piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
      uVar6 = ((code *)*(gen_code32 *)(*piVar8 + 0x14))(piVar8);
      uVar12 = F_00e8c050(this_00);
      if ((int)uVar6 <= (int)uVar12) {
        iVar14 = 0;
        if (0 < (int)uVar6) {
          do {
            if ((int)uVar12 <= iVar14) break;
            iVar5 = *(int *)this;
            uVar16 = 0;
            uVar13 = F_00e9e450(this_00,iVar14,iVar14 >> 0x1f);
            uVar13 = ((code *)*(gen_code32 *)(iVar5 + 0x58))(this,iVar14,uVar13,uVar16);
            if ((char)uVar13 == '\0') goto LAB_00e5114a;
            iVar14 = iVar14 + 1;
          } while (iVar14 < (int)uVar6);
        }
        F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
        return 1;
      }
    }
  }
LAB_00e5114a: ;
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup::vf22 */
byte F_00e51160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe51160u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined * pFVar4;
  ulonglong uVar5;
  float fVar6;
  
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar2 = F_00e82f00(param_2);
    uVar2 = F_0042a990(uVar2);
    uVar5 = F_00e50570(uVar2);
    this[4] = SUB81(uVar5,0);
    return 1;
  case 1: ;
    uVar2 = F_00e82f00(param_2);
    uVar2 = F_0042a990(uVar2);
    uVar5 = F_00e50570(uVar2);
    this[5] = SUB81(uVar5,0);
    return 1;
  case 2: ;
    uVar2 = F_00e82f00(param_2);
    uVar2 = F_0042a990(uVar2);
    uVar5 = F_00e50570(uVar2);
    *(ulonglong *)(this + 8) = uVar5;
    return 1;
  case 3: ;
    uVar2 = F_00e82f00(param_2);
    uVar2 = F_0042a990(uVar2);
    uVar5 = F_00e50570(uVar2);
    this[0x10] = SUB81(uVar5,0);
    return 1;
  case 4: ;
    uVar2 = F_00e8c050(param_2);
    iVar3 = 0;
    pFVar4 = this + 0x18;
    while (iVar3 < (int)uVar2) {
      uVar1 = F_00e9e450(param_2,iVar3,iVar3 >> 0x1f);
      uVar1 = F_00e82f00(uVar1);
      uVar1 = F_0042a990(uVar1);
      uVar5 = F_00e50570(uVar1);
      *(ulonglong *)pFVar4 = uVar5;
      iVar3 = iVar3 + 1;
      pFVar4 = pFVar4 + 8;
      if (0x17 < iVar3) {
        return 1;
      }
    }
    break;
  case 5: ;
    uVar2 = F_00e82f00(param_2);
    uVar2 = F_0042a990(uVar2);
    fVar6 = F_00e50660(uVar2);
    *(float *)(this + 0xd8) = fVar6;
    break;
  default: ;
    return 0;
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup::vf17 */
byte F_00e512b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe512b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  uint uVar6;
  undefined * pFVar7;
  uint uVar8;
  ulonglong uVar9;
  float fVar10;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"classid\":%llu",uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813((char *)(param_1 + 1),((char *)(gen_frame + 0x8)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x8)) + 1))));
  if (iVar5 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return 0;
  }
  uVar3 = F_00c51da0((char *)(param_1 + 1),0x5b);
  uVar6 = F_00c51da0(uVar3 + 2,0x22);
  uVar9 = F_00e50570(uVar3 + 2);
  this[4] = SUB81(uVar9,0);
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  uVar9 = F_00e50570(uVar6 + 3);
  this[5] = SUB81(uVar9,0);
  uVar6 = F_00c51da0(uVar3 + 3,0x22);
  uVar9 = F_00e50570(uVar3 + 3);
  *(ulonglong *)(this + 8) = uVar9;
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  uVar3 = uVar3 + 1;
  uVar9 = F_00e50570(uVar6 + 3);
  this[0x10] = SUB81(uVar9,0);
  uVar6 = F_00fb9a80(uVar3,0x5b,0x5d);
  (*(int *)(gen_frame + 0x4)) = 0;
  pFVar7 = this + 0x18;
  while( true ) {
    uVar8 = uVar3 + 3;
    uVar3 = F_00c51da0(uVar8,0x22);
    if ((uVar6 < uVar8) || (uVar6 < uVar3)) break;
    uVar9 = F_00e50570(uVar8);
    (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + 1;
    *(ulonglong *)pFVar7 = uVar9;
    pFVar7 = pFVar7 + 8;
    if (0x17 < (*(int *)(gen_frame + 0x4))) {
LAB_00e513f1: ;
      uVar6 = F_00c51da0(uVar3 + 4,0x22);
      fVar10 = F_00e50660(uVar3 + 4);
      *(float *)(this + 0xd8) = fVar10;
      if (param_2 != (uint *)0x0) {
        uVar3 = F_00c51da0(uVar6,0x7d);
        *param_2 = uVar3;
      }
      F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
      return 1;
    }
  }
  uVar3 = uVar6 - 1;
  goto LAB_00e513f1;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup::vf10 */
uint F_00e51440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe51440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_00ea81c0(param_1);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classid",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"content",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
  F_00ea8220(pvVar3);
  F_00ea83e0(pvVar3,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this,pvVar3,0);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup::vf23 */
byte F_00e51560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe51560u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * pvVar1;
  undefined * pFVar2;
  undefined * this_00;
  int iVar3;
  undefined1 * puVar4;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  pvVar1 = (undefined *)F_00e9e450(param_1,0,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[4],0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,1,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[5],0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,2,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 8),*(undefined4 *)(this + 0xc));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,3,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x10],0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,4,0);
  F_00ea8220(pvVar1);
  F_00ea83e0(pvVar1,0x18,0);
  pFVar2 = this + 0x18;
  iVar3 = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)pFVar2,*(undefined4 *)(pFVar2 + 4));
    puVar4 = ((undefined1 *)(gen_frame + 0x8));
    this_00 = (undefined *)F_00e9e450(pvVar1,iVar3,iVar3 >> 0x1f);
    F_00ea7fb0(this_00,puVar4);
    pFVar2 = pFVar2 + 8;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x18);
  pvVar1 = (undefined *)F_00e9e450(param_1,5,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0xd8))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0xd8)) >> 0x20));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup::vf9 */
uint F_00e51710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe51710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,param_1,0);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup::vf11 */
byte F_00e51730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe51730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  char * pcVar6;
  int * piVar7;
  char * pcVar8;
  byte * pbVar9;
  byte * pbVar10;
  undefined * this_00;
  uint uVar11;
  uint uVar12;
  undefined * this_01;
  uint uVar13;
  int iVar14;
  bool bVar15;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  if (*(int *)((int)param_1 + 8) != 5) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc) ^ (uint)(uint)(gen_frame + 0xbc));
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"classname",REFG(undefined4, 0x108cc50));
  uVar5 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
  uVar5 = F_00e82f00(uVar5);
  pcVar6 = (char *)F_0042a990(uVar5);
  pcVar1 = pcVar6 + 1;
  do {
    cVar3 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar3 != '\0');
  piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar8 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 8))(piVar7)));
  pcVar2 = pcVar8 + 1;
  do {
    cVar3 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x64)));
  if ((int)pcVar6 - (int)pcVar1 == (int)pcVar8 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"classname",REFG(undefined4, 0x108cc50));
    piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    pbVar9 = ((byte *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 8))(piVar7)));
    uVar5 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
    uVar5 = F_00e82f00(uVar5);
    pbVar10 = (byte *)F_0042a990(uVar5);
    do {
      bVar4 = *pbVar10;
      bVar15 = bVar4 < *pbVar9;
      if (bVar4 != *pbVar9) {
LAB_00e51843: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00e51848;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar10[1];
      bVar15 = bVar4 < pbVar9[1];
      if (bVar4 != pbVar9[1]) goto LAB_00e51843;
      pbVar10 = pbVar10 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00e51848: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x64)));
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"contentdetail",REFG(undefined4, 0x108cc50));
      this_00 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
      F_0042c880(((undefined1 *)(gen_frame + 0x64)));
      if (*(int *)((int)this_00 + 8) == 6) {
        uVar5 = F_00e8c050(this_00);
        piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
        uVar11 = ((code *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7);
        (*(byte *)(gen_frame + 0xf)) = 1;
        (*(int *)(gen_frame + 0x8)) = 0;
        if (0 < (int)uVar11) {
          do {
            piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
            uVar12 = ((code *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7,(*(int *)(gen_frame + 0x8)));
            iVar14 = 0;
            if (0 < (int)uVar5) {
              do {
                this_01 = (undefined *)F_00e9e450(this_00,iVar14,iVar14 >> 0x1f);
                if (*(int *)((int)this_01 + 8) == 5) {
                  F_0042cc20(((undefined1 *)(gen_frame + 0x10)),"memberid",REFG(undefined4, 0x108cc50));
                  uVar13 = F_00ea8380(this_01,((undefined1 *)(gen_frame + 0x10)));
                  F_0042c880(((undefined1 *)(gen_frame + 0x10)));
                  if ((*(int *)(uVar13 + 8) == 1) &&
                     (uVar13 = F_00e82b90(uVar13), uVar13 == uVar12)) {
                    uVar12 = ((code *)*(gen_code32 *)(*(int *)this + 0x60))(this,(*(int *)(gen_frame + 0x8)),this_01);
                    (*(byte *)(gen_frame + 0xf)) = (byte)uVar12;
                    if ((*(byte *)(gen_frame + 0xf)) == 0) goto LAB_00e519b7;
                    break;
                  }
                }
                iVar14 = iVar14 + 1;
              } while (iVar14 < (int)uVar5);
            }
            (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
          } while ((*(int *)(gen_frame + 0x8)) < (int)uVar11);
        }
        F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
        return (*(byte *)(gen_frame + 0xf));
      }
    }
  }
LAB_00e519b7: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup::vf24 */
byte F_00e519d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe519d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined * pFVar4;
  ulonglong uVar5;
  float fVar6;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  this_00 = (undefined *)F_00ea8380(param_2,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar2 = F_00e82f00(this_00);
    uVar2 = F_0042a990(uVar2);
    uVar5 = F_00e50570(uVar2);
    this[4] = SUB81(uVar5,0);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 1: ;
    uVar2 = F_00e82f00(this_00);
    uVar2 = F_0042a990(uVar2);
    uVar5 = F_00e50570(uVar2);
    this[5] = SUB81(uVar5,0);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 2: ;
    uVar2 = F_00e82f00(this_00);
    uVar2 = F_0042a990(uVar2);
    uVar5 = F_00e50570(uVar2);
    *(ulonglong *)(this + 8) = uVar5;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 3: ;
    uVar2 = F_00e82f00(this_00);
    uVar2 = F_0042a990(uVar2);
    uVar5 = F_00e50570(uVar2);
    this[0x10] = SUB81(uVar5,0);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 4: ;
    uVar2 = F_00e8c050(this_00);
    iVar3 = 0;
    pFVar4 = this + 0x18;
    while (iVar3 < (int)uVar2) {
      uVar1 = F_00e9e450(this_00,iVar3,iVar3 >> 0x1f);
      uVar1 = F_00e82f00(uVar1);
      uVar1 = F_0042a990(uVar1);
      uVar5 = F_00e505e0(uVar1);
      *(ulonglong *)pFVar4 = uVar5;
      iVar3 = iVar3 + 1;
      pFVar4 = pFVar4 + 8;
      if (0x17 < iVar3) {
        F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
        return 1;
      }
    }
    break;
  case 5: ;
    uVar2 = F_00e82f00(this_00);
    uVar2 = F_0042a990(uVar2);
    fVar6 = F_00e50660(uVar2);
    *(float *)(this + 0xd8) = fVar6;
    break;
  default: ;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 0;
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup::vf18 */
byte F_00e51ba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe51ba0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  undefined * pFVar6;
  ulonglong uVar7;
  float fVar8;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"classid\":%llu",uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813((char *)(param_1 + 1),((char *)(gen_frame + 0x8)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x8)) + 1))));
  if (iVar5 == 0) {
    uVar3 = F_00c51da0((char *)(param_1 + 1),0x5b);
    iVar5 = uVar3 - 1;
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135aea8));
      iVar5 = uVar3 + 9;
      uVar7 = F_00e50570(iVar5);
      this[4] = SUB81(uVar7,0);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,1);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135aea8));
      iVar5 = uVar3 + 9;
      uVar7 = F_00e50570(iVar5);
      this[5] = SUB81(uVar7,0);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,2);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135aea8));
      iVar5 = uVar3 + 9;
      uVar7 = F_00e50570(iVar5);
      *(ulonglong *)(this + 8) = uVar7;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,3);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135aea8));
      iVar5 = uVar3 + 9;
      uVar7 = F_00e50570(iVar5);
      this[0x10] = SUB81(uVar7,0);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,4);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135aea4));
      iVar5 = uVar3 + 10;
      pFVar6 = this + 0x18;
      (*(int *)(gen_frame + 0x4)) = 0x18;
      do {
        uVar7 = F_00e50570(iVar5);
        *(ulonglong *)pFVar6 = uVar7;
        uVar3 = F_00c51da0(iVar5,0x2c);
        pFVar6 = pFVar6 + 8;
        (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + -1;
        iVar5 = uVar3 + 2;
      } while ((*(int *)(gen_frame + 0x4)) != 0);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,5);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135aea8));
      iVar5 = uVar3 + 9;
      fVar8 = F_00e50660(iVar5);
      *(float *)(this + 0xd8) = fVar8;
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar5;
    }
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup::vf13 */
uint F_00e51e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe51e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_00ea81c0(param_1);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classid",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"contentdetail",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
  F_00ea8220(pvVar3);
  F_00ea83e0(pvVar3,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 100))(this,pvVar3);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup::vf25 */
byte F_00e51f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe51f90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  undefined * pvVar1;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  undefined * pFVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 * puVar10;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  pvVar1 = (undefined *)F_00e9e450(param_1,0,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7e80(pvVar2,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7fb0(pvVar2,"UInt8");
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_00c472af(((undefined1 *)(gen_frame + 0x68)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[4],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x68)));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  pvVar1 = (undefined *)F_00e9e450(param_1,1,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7e80(pvVar2,1);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,1);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,1);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7fb0(pvVar2,"UInt8");
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_00c472af(((undefined1 *)(gen_frame + 0x68)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[5],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x68)));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  pvVar1 = (undefined *)F_00e9e450(param_1,2,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7e80(pvVar2,2);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,2);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,2);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7fb0(pvVar2,"UInt64");
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_00c472af(((undefined1 *)(gen_frame + 0x68)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 8),*(undefined4 *)(this + 0xc));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x68)));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  pvVar1 = (undefined *)F_00e9e450(param_1,3,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7e80(pvVar2,3);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,3);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,3);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7fb0(pvVar2,"UInt8");
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_00c472af(((undefined1 *)(gen_frame + 0x68)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x10],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x68)));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  pvVar1 = (undefined *)F_00e9e450(param_1,4,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7e80(pvVar2,4);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,4);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,4);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7fb0(pvVar2,"UInt64");
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"value",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea8220(pvVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"value",REFG(undefined4, 0x108cc50));
  uVar9 = 0;
  uVar8 = 0x18;
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea83e0(pvVar2,uVar8,uVar9);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  pFVar5 = this + 0x18;
  (*(int *)(gen_frame + 0x8)) = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x68)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)pFVar5,*(undefined4 *)(pFVar5 + 4));
    F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"value",REFG(undefined4, 0x108cc50));
    puVar10 = ((undefined1 *)(gen_frame + 0x68));
    iVar6 = (*(int *)(gen_frame + 0x8)) >> 0x1f;
    iVar7 = (*(int *)(gen_frame + 0x8));
    pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
    pvVar2 = (undefined *)F_00e9e450(pvVar2,iVar7,iVar6);
    F_00ea7fb0(pvVar2,puVar10);
    F_0042c880(((undefined1 *)(gen_frame + 0x14)));
    pFVar5 = pFVar5 + 8;
    (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
  } while ((*(int *)(gen_frame + 0x8)) < 0x18);
  pvVar1 = (undefined *)F_00e9e450(param_1,5,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7e80(pvVar2,5);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,5);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,5);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7fb0(pvVar2,"Float");
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_00c472af(((undefined1 *)(gen_frame + 0x68)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0xd8))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0xd8)) >> 0x20));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x68)));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup::vf14 */
byte F_00e52840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe52840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined * this_00;
  uint uVar6;
  char * pcVar7;
  int * piVar8;
  char * pcVar9;
  byte * pbVar10;
  byte * pbVar11;
  undefined * this_01;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)),"memberid",REFG(undefined4, 0x108cc50));
  this_00 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x10)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10)));
  if ((*(int *)((int)this_00 + 8) == 6) && (*(int *)((int)param_1 + 8) == 5)) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"classname",REFG(undefined4, 0x108cc50));
    uVar6 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
    uVar6 = F_00e82f00(uVar6);
    pcVar7 = (char *)F_0042a990(uVar6);
    pcVar1 = pcVar7 + 1;
    do {
      cVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar3 != '\0');
    piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    pcVar9 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 8))(piVar8)));
    pcVar2 = pcVar9 + 1;
    do {
      cVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
    F_0042c880(((undefined1 *)(gen_frame + 0x64)));
    if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"classname",REFG(undefined4, 0x108cc50));
      piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
      pbVar10 = ((byte *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 8))(piVar8)));
      uVar6 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
      uVar6 = F_00e82f00(uVar6);
      pbVar11 = (byte *)F_0042a990(uVar6);
      do {
        bVar4 = *pbVar11;
        bVar16 = bVar4 < *pbVar10;
        if (bVar4 != *pbVar10) {
LAB_00e52992: ;
          iVar15 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_00e52997;
        }
        if (bVar4 == 0) break;
        bVar4 = pbVar11[1];
        bVar16 = bVar4 < pbVar10[1];
        if (bVar4 != pbVar10[1]) goto LAB_00e52992;
        pbVar11 = pbVar11 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar4 != 0);
      iVar15 = 0;
LAB_00e52997: ;
      F_0042c880(((undefined1 *)(gen_frame + 0x64)));
      if (iVar15 == 0) {
        F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"content",REFG(undefined4, 0x108cc50));
        this_01 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
        F_0042c880(((undefined1 *)(gen_frame + 0x64)));
        piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
        uVar6 = ((code *)*(gen_code32 *)(*piVar8 + 0x14))(piVar8);
        uVar12 = F_00e8c050(this_01);
        uVar13 = F_00e8c050(this_00);
        if (uVar12 == uVar13) {
          (*(int *)(gen_frame + 0x8)) = 0;
          if (0 < (int)uVar6) {
            do {
              piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
              uVar13 = ((code *)*(gen_code32 *)(*piVar8 + 0xc))(piVar8,(*(int *)(gen_frame + 0x8)));
              iVar15 = 0;
              if (0 < (int)uVar12) {
                do {
                  uVar14 = F_00e9e450(this_00,iVar15,iVar15 >> 0x1f);
                  uVar14 = F_00e82f00(uVar14);
                  uVar14 = F_0042a990(uVar14);
                  uVar17 = F_00e505e0(uVar14);
                  if (((uint)uVar17 == uVar13) && ((int)(uVar17 >> 0x20) == 0)) {
                    iVar5 = *(int *)this;
                    uVar18 = 1;
                    uVar13 = F_00e9e450(this_01,iVar15,iVar15 >> 0x1f);
                    uVar13 = ((code *)*(gen_code32 *)(iVar5 + 0x58))(this,(*(int *)(gen_frame + 0x8)),uVar13,uVar18);
                    if ((char)uVar13 == '\0') goto LAB_00e5289e;
                    break;
                  }
                  iVar15 = iVar15 + 1;
                } while (iVar15 < (int)uVar12);
              }
              (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
            } while ((*(int *)(gen_frame + 0x8)) < (int)uVar6);
          }
          F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
          return 1;
        }
      }
    }
  }
LAB_00e5289e: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup::vf16 */
byte F_00e52af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe52af0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined * this_00;
  int iVar5;
  undefined1 * puVar6;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  F_00ea81c0(param_1);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classid",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"content",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
  F_00ea8220(pvVar3);
  F_00ea83e0(pvVar3,uVar2,(int)uVar2 >> 0x1f);
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this,pvVar3,1);
  if ((char)uVar4 == '\0') {
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberid",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00ea8220(pvVar3);
  F_00ea83e0(pvVar3,uVar2,(int)uVar2 >> 0x1f);
  iVar5 = 0;
  if (0 < (int)uVar2) {
    do {
      piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
      uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,iVar5);
      F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
      puVar6 = ((undefined1 *)(gen_frame + 0x58));
      this_00 = (undefined *)F_00e9e450(pvVar3,iVar5,iVar5 >> 0x1f);
      F_00ea7fb0(this_00,puVar6);
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar2);
  }
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return 1;
}

/* ref: FUN_00e52cc0 */
uint F_00e52cc0(unsigned int gen_a0)
{
  GEN_ENTER(0xe52cc0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined2 *)(in_ecx + 4) = 0;
  *(undefined4 *)(in_ecx + 8) = 0;
  *(undefined4 *)(in_ecx + 0xc) = 0;
  *(undefined1 *)(in_ecx + 0x10) = 0;
  *(undefined4 *)(in_ecx + 0x18) = 0;
  *(undefined4 *)(in_ecx + 0x1c) = 0;
  puVar2 = (undefined4 *)(in_ecx + 0x18);
  puVar3 = (undefined4 *)(in_ecx + 0x20);
  for (iVar1 = 0x2e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(in_ecx + 0xd8) = 0;
  return in_ecx;
}

/* ref: Application::Network::WorkDefinitions::Gambit_TypeInfo::vf1 */
uint F_00e52d20(void)
{
  GEN_ENTER(0xe52d20u, 0u, 0u, 0u, 0u);
  return 0x1d;
}

/* ref: Application::Network::WorkDefinitions::Gambit_TypeInfo::vf2 */
uint F_00e52d30(void)
{
  GEN_ENTER(0xe52d30u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x135adc8);
}

/* ref: Application::Network::WorkDefinitions::Gambit_TypeInfo::vf3 */
uint F_00e52d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe52d40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x11582b4) + param_1 * 4);
}

/* ref: FUN_00e52d60 */
uint F_00e52d60(unsigned int gen_a0)
{
  GEN_ENTER(0xe52d60u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(&REFG(undefined, 0x11582c4) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::Gambit_TypeInfo::vf4 */
uint F_00e52d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe52d80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,uVar2);
    if (uVar1 == param_1) {
      return uVar2;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 4);
  return 0xffffffff;
}

/* ref: FUN_00e52dc0 */
uint F_00e52dc0(unsigned int gen_a0)
{
  GEN_ENTER(0xe52dc0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 - 0x142;
}

/* ref: Application::Network::WorkDefinitions::Gambit_TypeInfo::vf6 */
uint F_00e52dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe52dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (uint)(&REFG(undefined * PTR32, 0x135adb8))[param_1];
}

/* ref: Application::Network::WorkDefinitions::Gambit_TypeInfo::vf7 */
uint F_00e52df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe52df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x1158284) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::Gambit_TypeInfo::vf8 */
uint F_00e52e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe52e10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x11582a4) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::Gambit_TypeInfo::vf9 */
uint F_00e52e30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe52e30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x15e3798) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::Gambit_TypeInfo::vf10 */
uint F_00e52e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe52e50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x1158294) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::Gambit_TypeInfo::vf14 */
uint F_00e52e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe52e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(&REFG(undefined, 0x11582a4) + param_1 * 4) != 0x12) {
    if (*(int *)(&REFG(undefined, 0x11582a4) + param_1 * 4) == 0x14) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(&REFG(undefined, 0x15e3798) + param_1 * 4) + 0x2c))))
                        (*(int * PTR32 *)(&REFG(undefined, 0x15e3798) + param_1 * 4));
      return uVar2 + 4;
    }
    return *(int *)(&REFG(undefined, 0x1158294) + param_1 * 4) + 4;
  }
  piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3798) + param_1 * 4);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
    return uVar2 * *(int *)(&REFG(undefined, 0x1158284) + param_1 * 4) + 7;
  }
  return *(int *)(&REFG(undefined, 0x1158294) + param_1 * 4) * *(int *)(&REFG(undefined, 0x1158284) + param_1 * 4) + 7;
}

/* ref: Application::Network::WorkDefinitions::Gambit_TypeInfo::vf13 */
uint F_00e52ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe52ef0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 7;
  if ((char)param_2 == '\0') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3798) + param_1 * 4);
    if (piVar1 == (int *)0x0) {
      return *(int *)(&REFG(undefined, 0x1158294) + param_1 * 4) * *(int *)(&REFG(undefined, 0x1158284) + param_1 * 4) + 7;
    }
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
    uVar2 = uVar2 * *(int *)(&REFG(undefined, 0x1158284) + param_1 * 4) + 7;
  }
  else if ((char)param_2 == '\x01') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e3798) + param_1 * 4);
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
      return uVar2 + 7;
    }
    return *(int *)(&REFG(undefined, 0x1158294) + param_1 * 4) + 7;
  }
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::Gambit_TypeInfo::vf12 */
uint F_00e52f70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xe52f70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = (((param_4 - param_3) + 1U & 0xffff) >> 5) + 1;
  uVar6 = 0;
  iVar1 = uVar4 * 4 + 9;
  uVar5 = 0;
  if (uVar4 != 0) {
    do {
      uVar2 = *(uint *)(param_5 + uVar5 * 4);
      if ((uVar2 & 1) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 2) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 4) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 8) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x10) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x20) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x40) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((char)uVar2 < '\0') {
        uVar6 = uVar6 + 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  piVar3 = *(int * PTR32 *)(&REFG(undefined, 0x15e3798) + param_1 * 4);
  if (piVar3 == (int *)0x0) {
    return (uVar6 & 0xffff) * *(int *)(&REFG(undefined, 0x1158294) + param_1 * 4) + iVar1;
  }
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x2c))(piVar3);
  return uVar4 * (uVar6 & 0xffff) + iVar1;
}

/* ref: Application::Network::WorkDefinitions::Gambit_TypeInfo::vf11 */
uint F_00e53000(unsigned int gen_a0)
{
  GEN_ENTER(0xe53000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,0);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,1);
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,2);
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,3);
  return uVar4 + uVar1 + uVar2 + uVar3;
}

/* ref: Application::Network::WorkDefinitions::Gambit_TypeInfo::vf15 */
uint F_00e53040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe53040u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,0,param_2);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,1,uVar1 + param_2);
  iVar3 = uVar1 + param_2 + uVar2;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,2,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,3,iVar3);
  return uVar1 + (iVar3 - param_2);
}

/* ref: Application::Network::WorkDefinitions::Gambit_TypeInfo::vf19 */
uint F_00e530a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe530a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,0,param_1,param_2);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,1,uVar1 + param_1,param_2);
  iVar3 = uVar1 + param_1 + uVar2;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,2,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,3,iVar3,param_2);
  return uVar1 + (iVar3 - param_1);
}

/* ref: FUN_00e53100 */
uint F_00e53100(unsigned int gen_a0)
{
  GEN_ENTER(0xe53100u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[27])REFP(0x1158654));
  in_ecx[1] = 0;
  *(undefined1 *)(in_ecx + 2) = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[8] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00e53130 */
unsigned int F_00e53130(unsigned int gen_a0)
{
  GEN_ENTER(0xe53130u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Gambit::vf2 */
uint F_00e53140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe53140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x135ae40) + 0x10))))(&REFG(undefined * PTR32, 0x135ae40),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: FUN_00e53170 */
uint F_00e53170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe53170u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x135ae40) + 0x10))))(&REFG(undefined * PTR32, 0x135ae40),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Gambit::vf4 */
uint F_00e531a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe531a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    return in_ecx + 4;
  case 1: ;
    return in_ecx + 8;
  case 2: ;
    return in_ecx + 0xc;
  case 3: ;
    return in_ecx + 0x14;
  default: ;
    return 0;
  }
}

/* ref: Application::Network::WorkDefinitions::Gambit::vf3 */
uint F_00e531f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe531f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  if (param_2 < *(uint *)(&REFG(undefined, 0x1158284) + param_1 * 4)) {
    if (param_1 == 2) {
      return (uint)(this + param_2 * 4 + 0xc);
    }
    if (param_1 == 3) {
      return (uint)(this + param_2 * 4 + 0x14);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Gambit::vf6 */
uint F_00e53220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe53220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  if ((short)uVar3 == (short)uVar4) {
    *(int *)(this + 4) = param_1[1];
    this[8] = *(undefined *)(param_1 + 2);
    *(int *)(this + 0xc) = param_1[3];
    *(int *)(this + 0x10) = param_1[4];
    *(int *)(this + 0x14) = param_1[5];
    uVar4 = param_1[6];
    *(uint *)(this + 0x18) = uVar4;
    *(int *)(this + 0x1c) = param_1[7];
    *(int *)(this + 0x20) = param_1[8];
  }
  return uVar4;
}

/* ref: Application::Network::WorkDefinitions::Gambit::vf5 */
uint F_00e532a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe532a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  if ((short)uVar3 == (short)uVar4) {
    uVar4 = param_2;
    switch((unsigned int)(uintptr_t)(param_2)) {
    case 0: ;
      uVar4 = param_1[1];
      *(uint *)(this + 4) = uVar4;
      return uVar4;
    case 1: ;
      this[8] = *(undefined *)(param_1 + 2);
      return param_2;
    case 2: ;
      *(int *)(this + 0xc) = param_1[3];
      *(int *)(this + 0x10) = param_1[4];
      return param_2;
    case 3: ;
      *(int *)(this + 0x14) = param_1[5];
      uVar4 = param_1[6];
      *(uint *)(this + 0x18) = uVar4;
      *(int *)(this + 0x1c) = param_1[7];
      *(int *)(this + 0x20) = param_1[8];
    }
  }
  return uVar4;
}

/* ref: Application::Network::WorkDefinitions::Gambit::vf8 */
byte F_00e53350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe53350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  char * pcVar7;
  int * piVar8;
  char * pcVar9;
  byte * pbVar10;
  byte * pbVar11;
  undefined * this_00;
  uint uVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  undefined4 uVar16;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  if (*(int *)((int)param_1 + 8) != 5) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c) ^ (uint)(uint)(gen_frame + 0x5c));
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
  uVar6 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  uVar6 = F_00e82f00(uVar6);
  pcVar7 = (char *)F_0042a990(uVar6);
  pcVar1 = pcVar7 + 1;
  do {
    cVar3 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar3 != '\0');
  piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar9 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 8))(piVar8)));
  pcVar2 = pcVar9 + 1;
  do {
    cVar3 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
    piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    pbVar10 = ((byte *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 8))(piVar8)));
    uVar6 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
    uVar6 = F_00e82f00(uVar6);
    pbVar11 = (byte *)F_0042a990(uVar6);
    do {
      bVar4 = *pbVar11;
      bVar15 = bVar4 < *pbVar10;
      if (bVar4 != *pbVar10) {
LAB_00e53453: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00e53458;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar11[1];
      bVar15 = bVar4 < pbVar10[1];
      if (bVar4 != pbVar10[1]) goto LAB_00e53453;
      pbVar11 = pbVar11 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00e53458: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"content",REFG(undefined4, 0x108cc50));
      this_00 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
      F_0042c880(((undefined1 *)(gen_frame + 0x4)));
      piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
      uVar6 = ((code *)*(gen_code32 *)(*piVar8 + 0x14))(piVar8);
      uVar12 = F_00e8c050(this_00);
      if ((int)uVar6 <= (int)uVar12) {
        iVar14 = 0;
        if (0 < (int)uVar6) {
          do {
            if ((int)uVar12 <= iVar14) break;
            iVar5 = *(int *)this;
            uVar16 = 0;
            uVar13 = F_00e9e450(this_00,iVar14,iVar14 >> 0x1f);
            uVar13 = ((code *)*(gen_code32 *)(iVar5 + 0x58))(this,iVar14,uVar13,uVar16);
            if ((char)uVar13 == '\0') goto LAB_00e5350a;
            iVar14 = iVar14 + 1;
          } while (iVar14 < (int)uVar6);
        }
        F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
        return 1;
      }
    }
  }
LAB_00e5350a: ;
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Gambit::vf22 */
byte F_00e53520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe53520u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined * pGVar4;
  ulonglong uVar5;
  float fVar6;
  
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar1 = F_00e82f00(param_2);
    uVar1 = F_0042a990(uVar1);
    uVar5 = F_00e50570(uVar1);
    *(int *)(this + 4) = (int)uVar5;
    return 1;
  case 1: ;
    uVar1 = F_00e82f00(param_2);
    uVar1 = F_0042a990(uVar1);
    uVar5 = F_00e50570(uVar1);
    this[8] = SUB81(uVar5,0);
    return 1;
  case 2: ;
    uVar1 = F_00e8c050(param_2);
    iVar3 = 0;
    pGVar4 = this + 0xc;
    while (iVar3 < (int)uVar1) {
      uVar2 = F_00e9e450(param_2,iVar3,iVar3 >> 0x1f);
      uVar2 = F_00e82f00(uVar2);
      uVar2 = F_0042a990(uVar2);
      fVar6 = F_00e50660(uVar2);
      *(float *)pGVar4 = fVar6;
      iVar3 = iVar3 + 1;
      pGVar4 = pGVar4 + 4;
      if (1 < iVar3) {
        return 1;
      }
    }
    break;
  case 3: ;
    uVar1 = F_00e8c050(param_2);
    iVar3 = 0;
    pGVar4 = this + 0x14;
    do {
      if ((int)uVar1 <= iVar3) {
        return 1;
      }
      uVar2 = F_00e9e450(param_2,iVar3,iVar3 >> 0x1f);
      uVar2 = F_00e82f00(uVar2);
      uVar2 = F_0042a990(uVar2);
      uVar5 = F_00e505e0(uVar2);
      *(int *)pGVar4 = (int)uVar5;
      iVar3 = iVar3 + 1;
      pGVar4 = pGVar4 + 4;
    } while (iVar3 < 4);
    break;
  default: ;
    return 0;
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::Gambit::vf17 */
byte F_00e53640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe53640u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  float fVar9;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"classid\":%llu",uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813((char *)(param_1 + 1),((char *)(gen_frame + 0x8)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x8)) + 1))));
  if (iVar5 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return 0;
  }
  uVar3 = F_00c51da0((char *)(param_1 + 1),0x5b);
  uVar6 = F_00c51da0(uVar3 + 2,0x22);
  uVar8 = F_00e50570(uVar3 + 2);
  *(int *)(this + 4) = (int)uVar8;
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  uVar8 = F_00e50570(uVar6 + 3);
  uVar3 = uVar3 + 1;
  this[8] = SUB81(uVar8,0);
  uVar6 = F_00fb9a80(uVar3,0x5b,0x5d);
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = this + 0xc;
  iVar5 = 0;
  do {
    uVar7 = uVar3 + 3;
    uVar3 = F_00c51da0(uVar7,0x22);
    if ((uVar6 < uVar7) || (uVar6 < uVar3)) {
      uVar3 = uVar6 - 1;
      break;
    }
    fVar9 = F_00e50660(uVar7);
    *(float *)(*(undefined * PTR32 *)(gen_frame + 0x4)) = fVar9;
    iVar5 = iVar5 + 1;
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 *)(gen_frame + 0x4)) + 4;
  } while (iVar5 < 2);
  uVar3 = uVar3 + 2;
  uVar6 = F_00fb9a80(uVar3,0x5b,0x5d);
  iVar5 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = this + 0x14;
  while( true ) {
    uVar7 = uVar3 + 3;
    uVar3 = F_00c51da0(uVar7,0x22);
    if ((uVar6 < uVar7) || (uVar6 < uVar3)) break;
    uVar8 = F_00e505e0(uVar7);
    *(int *)(*(undefined * PTR32 *)(gen_frame + 0x4)) = (int)uVar8;
    iVar5 = iVar5 + 1;
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 *)(gen_frame + 0x4)) + 4;
    if (3 < iVar5) {
LAB_00e537aa: ;
      if (param_2 != (uint *)0x0) {
        uVar3 = F_00c51da0(uVar3 + 1,0x7d);
        *param_2 = uVar3;
      }
      F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
      return 1;
    }
  }
  uVar3 = uVar6 - 1;
  goto LAB_00e537aa;
}

/* ref: Application::Network::WorkDefinitions::Gambit::vf10 */
uint F_00e537e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe537e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_00ea81c0(param_1);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classid",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"content",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
  F_00ea8220(pvVar3);
  F_00ea83e0(pvVar3,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this,pvVar3,0);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::Gambit::vf23 */
byte F_00e53900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe53900u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * pvVar1;
  undefined * pvVar2;
  undefined * pGVar3;
  int iVar4;
  undefined1 * puVar5;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  pvVar1 = (undefined *)F_00e9e450(param_1,0,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 4),0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,1,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[8],0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,2,0);
  F_00ea8220(pvVar1);
  F_00ea83e0(pvVar1,2,0);
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = this + 0xc;
  iVar4 = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(*(undefined * PTR32 *)(gen_frame + 0x4))),
               (int)((ulonglong)gen_d2bits((double)*(float *)(*(undefined * PTR32 *)(gen_frame + 0x4))) >> 0x20));
    puVar5 = ((undefined1 *)(gen_frame + 0x8));
    pvVar2 = (undefined *)F_00e9e450(pvVar1,iVar4,iVar4 >> 0x1f);
    F_00ea7fb0(pvVar2,puVar5);
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 *)(gen_frame + 0x4)) + 4;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 2);
  pvVar1 = (undefined *)F_00e9e450(param_1,3,0);
  F_00ea8220(pvVar1);
  F_00ea83e0(pvVar1,4,0);
  iVar4 = 0;
  pGVar3 = this + 0x14;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),*(int *)pGVar3,*(int *)((int)(uintptr_t)pGVar3) >> 0x1f);
    puVar5 = ((undefined1 *)(gen_frame + 0x8));
    pvVar2 = (undefined *)F_00e9e450(pvVar1,iVar4,iVar4 >> 0x1f);
    F_00ea7fb0(pvVar2,puVar5);
    iVar4 = iVar4 + 1;
    pGVar3 = pGVar3 + 4;
  } while (iVar4 < 4);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::Gambit::vf9 */
uint F_00e53a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe53a60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,param_1,0);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Gambit::vf11 */
byte F_00e53a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe53a80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  char * pcVar6;
  int * piVar7;
  char * pcVar8;
  byte * pbVar9;
  byte * pbVar10;
  undefined * this_00;
  uint uVar11;
  uint uVar12;
  undefined * this_01;
  uint uVar13;
  int iVar14;
  bool bVar15;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  if (*(int *)((int)param_1 + 8) != 5) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc) ^ (uint)(uint)(gen_frame + 0xbc));
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"classname",REFG(undefined4, 0x108cc50));
  uVar5 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
  uVar5 = F_00e82f00(uVar5);
  pcVar6 = (char *)F_0042a990(uVar5);
  pcVar1 = pcVar6 + 1;
  do {
    cVar3 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar3 != '\0');
  piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar8 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 8))(piVar7)));
  pcVar2 = pcVar8 + 1;
  do {
    cVar3 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x64)));
  if ((int)pcVar6 - (int)pcVar1 == (int)pcVar8 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"classname",REFG(undefined4, 0x108cc50));
    piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    pbVar9 = ((byte *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 8))(piVar7)));
    uVar5 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
    uVar5 = F_00e82f00(uVar5);
    pbVar10 = (byte *)F_0042a990(uVar5);
    do {
      bVar4 = *pbVar10;
      bVar15 = bVar4 < *pbVar9;
      if (bVar4 != *pbVar9) {
LAB_00e53b93: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00e53b98;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar10[1];
      bVar15 = bVar4 < pbVar9[1];
      if (bVar4 != pbVar9[1]) goto LAB_00e53b93;
      pbVar10 = pbVar10 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00e53b98: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x64)));
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"contentdetail",REFG(undefined4, 0x108cc50));
      this_00 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
      F_0042c880(((undefined1 *)(gen_frame + 0x64)));
      if (*(int *)((int)this_00 + 8) == 6) {
        uVar5 = F_00e8c050(this_00);
        piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
        uVar11 = ((code *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7);
        (*(byte *)(gen_frame + 0xf)) = 1;
        (*(int *)(gen_frame + 0x8)) = 0;
        if (0 < (int)uVar11) {
          do {
            piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
            uVar12 = ((code *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7,(*(int *)(gen_frame + 0x8)));
            iVar14 = 0;
            if (0 < (int)uVar5) {
              do {
                this_01 = (undefined *)F_00e9e450(this_00,iVar14,iVar14 >> 0x1f);
                if (*(int *)((int)this_01 + 8) == 5) {
                  F_0042cc20(((undefined1 *)(gen_frame + 0x10)),"memberid",REFG(undefined4, 0x108cc50));
                  uVar13 = F_00ea8380(this_01,((undefined1 *)(gen_frame + 0x10)));
                  F_0042c880(((undefined1 *)(gen_frame + 0x10)));
                  if ((*(int *)(uVar13 + 8) == 1) &&
                     (uVar13 = F_00e82b90(uVar13), uVar13 == uVar12)) {
                    uVar12 = ((code *)*(gen_code32 *)(*(int *)this + 0x60))(this,(*(int *)(gen_frame + 0x8)),this_01);
                    (*(byte *)(gen_frame + 0xf)) = (byte)uVar12;
                    if ((*(byte *)(gen_frame + 0xf)) == 0) goto LAB_00e53d07;
                    break;
                  }
                }
                iVar14 = iVar14 + 1;
              } while (iVar14 < (int)uVar5);
            }
            (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
          } while ((*(int *)(gen_frame + 0x8)) < (int)uVar11);
        }
        F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
        return (*(byte *)(gen_frame + 0xf));
      }
    }
  }
LAB_00e53d07: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Gambit::vf24 */
byte F_00e53d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe53d20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  undefined * pGVar3;
  int iVar4;
  ulonglong uVar5;
  float fVar6;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  this_00 = (undefined *)F_00ea8380(param_2,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar1 = F_00e82f00(this_00);
    uVar1 = F_0042a990(uVar1);
    uVar5 = F_00e50570(uVar1);
    *(int *)(this + 4) = (int)uVar5;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 1: ;
    uVar1 = F_00e82f00(this_00);
    uVar1 = F_0042a990(uVar1);
    uVar5 = F_00e50570(uVar1);
    this[8] = SUB81(uVar5,0);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 2: ;
    uVar1 = F_00e8c050(this_00);
    iVar4 = 0;
    pGVar3 = this + 0xc;
    while (iVar4 < (int)uVar1) {
      uVar2 = F_00e9e450(this_00,iVar4,iVar4 >> 0x1f);
      uVar2 = F_00e82f00(uVar2);
      uVar2 = F_0042a990(uVar2);
      fVar6 = F_00e50660(uVar2);
      *(float *)pGVar3 = fVar6;
      iVar4 = iVar4 + 1;
      pGVar3 = pGVar3 + 4;
      if (1 < iVar4) {
        F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
        return 1;
      }
    }
    break;
  case 3: ;
    uVar1 = F_00e8c050(this_00);
    iVar4 = 0;
    pGVar3 = this + 0x14;
    do {
      if ((int)uVar1 <= iVar4) break;
      uVar2 = F_00e9e450(this_00,iVar4,iVar4 >> 0x1f);
      uVar2 = F_00e82f00(uVar2);
      uVar2 = F_0042a990(uVar2);
      uVar5 = F_00e505e0(uVar2);
      *(int *)pGVar3 = (int)uVar5;
      iVar4 = iVar4 + 1;
      pGVar3 = pGVar3 + 4;
    } while (iVar4 < 4);
    break;
  default: ;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 0;
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::Gambit::vf18 */
byte F_00e53eb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe53eb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  undefined * pGVar6;
  int iVar7;
  ulonglong uVar8;
  float fVar9;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"classid\":%llu",uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813((char *)(param_1 + 1),((char *)(gen_frame + 0x8)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x8)) + 1))));
  if (iVar5 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return 0;
  }
  uVar3 = F_00c51da0((char *)(param_1 + 1),0x5b);
  iVar5 = uVar3 - 1;
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135af34));
    iVar5 = uVar3 + 9;
    uVar8 = F_00e50570(iVar5);
    *(int *)(this + 4) = (int)uVar8;
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135af34));
    iVar5 = uVar3 + 9;
    uVar8 = F_00e50570(iVar5);
    this[8] = SUB81(uVar8,0);
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135af30));
    iVar5 = uVar3 + 10;
    pGVar6 = this + 0xc;
    (*(int *)(gen_frame + 0x4)) = 2;
    do {
      fVar9 = F_00e50660(iVar5);
      *(float *)pGVar6 = fVar9;
      uVar3 = F_00c51da0(iVar5,0x2c);
      pGVar6 = pGVar6 + 4;
      (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + -1;
      iVar5 = uVar3 + 2;
    } while ((*(int *)(gen_frame + 0x4)) != 0);
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,3);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135af30));
    iVar5 = uVar3 + 10;
    pGVar6 = this + 0x14;
    iVar7 = 4;
    do {
      uVar8 = F_00e505e0(iVar5);
      *(int *)pGVar6 = (int)uVar8;
      uVar3 = F_00c51da0(iVar5,0x2c);
      pGVar6 = pGVar6 + 4;
      iVar7 = iVar7 + -1;
      iVar5 = uVar3 + 2;
    } while (iVar7 != 0);
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar5;
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::Gambit::vf13 */
uint F_00e540e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe540e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_00ea81c0(param_1);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classid",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"contentdetail",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
  F_00ea8220(pvVar3);
  F_00ea83e0(pvVar3,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 100))(this,pvVar3);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::Gambit::vf25 */
byte F_00e54200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe54200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  undefined * pvVar1;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined * pGVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 * puVar11;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  pvVar1 = (undefined *)F_00e9e450(param_1,0,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7e80(pvVar2,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7fb0(pvVar2,"UInt32");
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_00c472af(((undefined1 *)(gen_frame + 0x68)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 4),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x68)));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  pvVar1 = (undefined *)F_00e9e450(param_1,1,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7e80(pvVar2,1);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,1);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,1);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7fb0(pvVar2,"UInt8");
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_00c472af(((undefined1 *)(gen_frame + 0x68)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[8],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x68)));
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  pvVar1 = (undefined *)F_00e9e450(param_1,2,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7e80(pvVar2,2);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,2);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,2);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7fb0(pvVar2,"Float");
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"value",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea8220(pvVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"value",REFG(undefined4, 0x108cc50));
  uVar10 = 0;
  uVar9 = 2;
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea83e0(pvVar2,uVar9,uVar10);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this + 0xc;
  (*(int *)(gen_frame + 0x8)) = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x68)),0x20,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*(float *)(*(undefined * PTR32 *)(gen_frame + 0x10))),
               (int)((ulonglong)gen_d2bits((double)*(float *)(*(undefined * PTR32 *)(gen_frame + 0x10))) >> 0x20));
    F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"value",REFG(undefined4, 0x108cc50));
    iVar5 = (*(int *)(gen_frame + 0x8)) >> 0x1f;
    puVar11 = ((undefined1 *)(gen_frame + 0x68));
    iVar7 = (*(int *)(gen_frame + 0x8));
    pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
    pvVar2 = (undefined *)F_00e9e450(pvVar2,iVar7,iVar5);
    F_00ea7fb0(pvVar2,puVar11);
    F_0042c880(((undefined1 *)(gen_frame + 0x14)));
    (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*(undefined * PTR32 *)(gen_frame + 0x10)) + 4;
    (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
  } while ((*(int *)(gen_frame + 0x8)) < 2);
  pvVar1 = (undefined *)F_00e9e450(param_1,3,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7e80(pvVar2,3);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,3);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,3);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea7fb0(pvVar2,"Int32");
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"value",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea8220(pvVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"value",REFG(undefined4, 0x108cc50));
  uVar10 = 0;
  uVar9 = 4;
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
  F_00ea83e0(pvVar2,uVar9,uVar10);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  iVar7 = 0;
  pGVar8 = this + 0x14;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x68)),0x20,&REFG(undefined, 0x11585f0),*(int *)pGVar8,*(int *)((int)(uintptr_t)pGVar8) >> 0x1f);
    F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"value",REFG(undefined4, 0x108cc50));
    puVar11 = ((undefined1 *)(gen_frame + 0x68));
    iVar6 = iVar7 >> 0x1f;
    iVar5 = iVar7;
    pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x14)));
    pvVar2 = (undefined *)F_00e9e450(pvVar2,iVar5,iVar6);
    F_00ea7fb0(pvVar2,puVar11);
    F_0042c880(((undefined1 *)(gen_frame + 0x14)));
    iVar7 = iVar7 + 1;
    pGVar8 = pGVar8 + 4;
  } while (iVar7 < 4);
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::Gambit::vf14 */
byte F_00e54890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe54890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined * this_00;
  uint uVar6;
  char * pcVar7;
  int * piVar8;
  char * pcVar9;
  byte * pbVar10;
  byte * pbVar11;
  undefined * this_01;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)),"memberid",REFG(undefined4, 0x108cc50));
  this_00 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x10)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10)));
  if ((*(int *)((int)this_00 + 8) == 6) && (*(int *)((int)param_1 + 8) == 5)) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"classname",REFG(undefined4, 0x108cc50));
    uVar6 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
    uVar6 = F_00e82f00(uVar6);
    pcVar7 = (char *)F_0042a990(uVar6);
    pcVar1 = pcVar7 + 1;
    do {
      cVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar3 != '\0');
    piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    pcVar9 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 8))(piVar8)));
    pcVar2 = pcVar9 + 1;
    do {
      cVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
    F_0042c880(((undefined1 *)(gen_frame + 0x64)));
    if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"classname",REFG(undefined4, 0x108cc50));
      piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
      pbVar10 = ((byte *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 8))(piVar8)));
      uVar6 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
      uVar6 = F_00e82f00(uVar6);
      pbVar11 = (byte *)F_0042a990(uVar6);
      do {
        bVar4 = *pbVar11;
        bVar16 = bVar4 < *pbVar10;
        if (bVar4 != *pbVar10) {
LAB_00e549e2: ;
          iVar15 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_00e549e7;
        }
        if (bVar4 == 0) break;
        bVar4 = pbVar11[1];
        bVar16 = bVar4 < pbVar10[1];
        if (bVar4 != pbVar10[1]) goto LAB_00e549e2;
        pbVar11 = pbVar11 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar4 != 0);
      iVar15 = 0;
LAB_00e549e7: ;
      F_0042c880(((undefined1 *)(gen_frame + 0x64)));
      if (iVar15 == 0) {
        F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"content",REFG(undefined4, 0x108cc50));
        this_01 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
        F_0042c880(((undefined1 *)(gen_frame + 0x64)));
        piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
        uVar6 = ((code *)*(gen_code32 *)(*piVar8 + 0x14))(piVar8);
        uVar12 = F_00e8c050(this_01);
        uVar13 = F_00e8c050(this_00);
        if (uVar12 == uVar13) {
          (*(int *)(gen_frame + 0x8)) = 0;
          if (0 < (int)uVar6) {
            do {
              piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
              uVar13 = ((code *)*(gen_code32 *)(*piVar8 + 0xc))(piVar8,(*(int *)(gen_frame + 0x8)));
              iVar15 = 0;
              if (0 < (int)uVar12) {
                do {
                  uVar14 = F_00e9e450(this_00,iVar15,iVar15 >> 0x1f);
                  uVar14 = F_00e82f00(uVar14);
                  uVar14 = F_0042a990(uVar14);
                  uVar17 = F_00e505e0(uVar14);
                  if (((uint)uVar17 == uVar13) && ((int)(uVar17 >> 0x20) == 0)) {
                    iVar5 = *(int *)this;
                    uVar18 = 1;
                    uVar13 = F_00e9e450(this_01,iVar15,iVar15 >> 0x1f);
                    uVar13 = ((code *)*(gen_code32 *)(iVar5 + 0x58))(this,(*(int *)(gen_frame + 0x8)),uVar13,uVar18);
                    if ((char)uVar13 == '\0') goto LAB_00e548ee;
                    break;
                  }
                  iVar15 = iVar15 + 1;
                } while (iVar15 < (int)uVar12);
              }
              (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
            } while ((*(int *)(gen_frame + 0x8)) < (int)uVar6);
          }
          F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
          return 1;
        }
      }
    }
  }
LAB_00e548ee: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Gambit::vf16 */
byte F_00e54b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe54b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined * this_00;
  int iVar5;
  undefined1 * puVar6;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  F_00ea81c0(param_1);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classid",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"content",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
  F_00ea8220(pvVar3);
  F_00ea83e0(pvVar3,uVar2,(int)uVar2 >> 0x1f);
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this,pvVar3,1);
  if ((char)uVar4 == '\0') {
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberid",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00ea8220(pvVar3);
  F_00ea83e0(pvVar3,uVar2,(int)uVar2 >> 0x1f);
  iVar5 = 0;
  if (0 < (int)uVar2) {
    do {
      piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
      uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,iVar5);
      F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
      puVar6 = ((undefined1 *)(gen_frame + 0x58));
      this_00 = (undefined *)F_00e9e450(pvVar3,iVar5,iVar5 >> 0x1f);
      F_00ea7fb0(this_00,puVar6);
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar2);
  }
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return 1;
}

/* ref: FUN_00e54d10 */
uint F_00e54d10(unsigned int gen_a0)
{
  GEN_ENTER(0xe54d10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 4) = 0;
  *(undefined1 *)(in_ecx + 8) = 0;
  *(undefined4 *)(in_ecx + 0xc) = 0;
  *(undefined4 *)(in_ecx + 0x10) = 0;
  *(undefined4 *)(in_ecx + 0x14) = 0;
  *(undefined4 *)(in_ecx + 0x18) = 0;
  *(undefined4 *)(in_ecx + 0x1c) = 0;
  *(undefined4 *)(in_ecx + 0x20) = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork_TypeInfo::vf1 */
uint F_00e54d60(void)
{
  GEN_ENTER(0xe54d60u, 0u, 0u, 0u, 0u);
  return 0x25;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork_TypeInfo::vf2 */
uint F_00e54d70(void)
{
  GEN_ENTER(0xe54d70u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x135adf0);
}

/* ref: Application::Network::WorkDefinitions::BuddyWork_TypeInfo::vf3 */
uint F_00e54d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe54d80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x1158344) + param_1 * 4);
}

/* ref: FUN_00e54da0 */
uint F_00e54da0(unsigned int gen_a0)
{
  GEN_ENTER(0xe54da0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(&REFG(undefined, 0x1158368) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::BuddyWork_TypeInfo::vf4 */
uint F_00e54dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe54dc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,uVar2);
    if (uVar1 == param_1) {
      return uVar2;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 9);
  return 0xffffffff;
}

/* ref: FUN_00e54e00 */
uint F_00e54e00(unsigned int gen_a0)
{
  GEN_ENTER(0xe54e00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 - 0x15f;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork_TypeInfo::vf6 */
uint F_00e54e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe54e10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (uint)(&REFG(undefined * PTR32, 0x135adcc))[param_1];
}

/* ref: Application::Network::WorkDefinitions::BuddyWork_TypeInfo::vf7 */
uint F_00e54e30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe54e30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x11582d8) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::BuddyWork_TypeInfo::vf8 */
uint F_00e54e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe54e50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x1158320) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::BuddyWork_TypeInfo::vf9 */
uint F_00e54e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe54e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x15e37a8) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::BuddyWork_TypeInfo::vf10 */
uint F_00e54e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe54e90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x11582fc) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::BuddyWork_TypeInfo::vf14 */
uint F_00e54eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe54eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(&REFG(undefined, 0x1158320) + param_1 * 4) != 0x12) {
    if (*(int *)(&REFG(undefined, 0x1158320) + param_1 * 4) == 0x14) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(&REFG(undefined, 0x15e37a8) + param_1 * 4) + 0x2c))))
                        (*(int * PTR32 *)(&REFG(undefined, 0x15e37a8) + param_1 * 4));
      return uVar2 + 4;
    }
    return *(int *)(&REFG(undefined, 0x11582fc) + param_1 * 4) + 4;
  }
  piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e37a8) + param_1 * 4);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
    return uVar2 * *(int *)(&REFG(undefined, 0x11582d8) + param_1 * 4) + 7;
  }
  return *(int *)(&REFG(undefined, 0x11582fc) + param_1 * 4) * *(int *)(&REFG(undefined, 0x11582d8) + param_1 * 4) + 7;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork_TypeInfo::vf13 */
uint F_00e54f30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe54f30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 7;
  if ((char)param_2 == '\0') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e37a8) + param_1 * 4);
    if (piVar1 == (int *)0x0) {
      return *(int *)(&REFG(undefined, 0x11582fc) + param_1 * 4) * *(int *)(&REFG(undefined, 0x11582d8) + param_1 * 4) + 7;
    }
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
    uVar2 = uVar2 * *(int *)(&REFG(undefined, 0x11582d8) + param_1 * 4) + 7;
  }
  else if ((char)param_2 == '\x01') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e37a8) + param_1 * 4);
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
      return uVar2 + 7;
    }
    return *(int *)(&REFG(undefined, 0x11582fc) + param_1 * 4) + 7;
  }
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork_TypeInfo::vf12 */
uint F_00e54fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xe54fb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = (((param_4 - param_3) + 1U & 0xffff) >> 5) + 1;
  uVar6 = 0;
  iVar1 = uVar4 * 4 + 9;
  uVar5 = 0;
  if (uVar4 != 0) {
    do {
      uVar2 = *(uint *)(param_5 + uVar5 * 4);
      if ((uVar2 & 1) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 2) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 4) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 8) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x10) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x20) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x40) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((char)uVar2 < '\0') {
        uVar6 = uVar6 + 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  piVar3 = *(int * PTR32 *)(&REFG(undefined, 0x15e37a8) + param_1 * 4);
  if (piVar3 == (int *)0x0) {
    return (uVar6 & 0xffff) * *(int *)(&REFG(undefined, 0x11582fc) + param_1 * 4) + iVar1;
  }
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x2c))(piVar3);
  return uVar4 * (uVar6 & 0xffff) + iVar1;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork_TypeInfo::vf11 */
uint F_00e55040(unsigned int gen_a0)
{
  GEN_ENTER(0xe55040u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,0);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,1);
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,2);
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,3);
  uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,4);
  uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,5);
  uVar7 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,6);
  uVar8 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,7);
  uVar9 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,8);
  return uVar9 + uVar1 + uVar2 + uVar3 + uVar4 + uVar5 + uVar6 + uVar7 + uVar8;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork_TypeInfo::vf15 */
uint F_00e550c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe550c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,0,param_2);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,1,uVar1 + param_2);
  iVar3 = uVar1 + param_2 + uVar2;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,2,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,3,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,4,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,5,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,6,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,7,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,8,iVar3);
  return uVar1 + (iVar3 - param_2);
}

/* ref: Application::Network::WorkDefinitions::BuddyWork_TypeInfo::vf19 */
uint F_00e55170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe55170u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,0,param_1,param_2);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,1,uVar1 + param_1,param_2);
  iVar3 = uVar1 + param_1 + uVar2;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,2,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,3,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,4,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,5,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,6,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,7,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,8,iVar3,param_2);
  return uVar1 + (iVar3 - param_1);
}

/* ref: FUN_00e55220 */
uint F_00e55220(unsigned int gen_a0)
{
  GEN_ENTER(0xe55220u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[27])REFP(0x115872c));
  *(undefined2 *)(in_ecx + 9) = 0;
  in_ecx[0xb] = 0;
  in_ecx[0xc] = 0;
  in_ecx[0xd] = 0;
  *(undefined1 *)(in_ecx + 1) = 0;
  *(undefined8 *)((int)in_ecx + 0x19) = 0;
  *(undefined2 *)((int)in_ecx + 0x21) = 0;
  *(undefined1 *)((int)in_ecx + 0x23) = 0;
  *(undefined2 *)((int)in_ecx + 0x26) = 0;
  *(undefined1 *)(in_ecx + 10) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00e55260 */
unsigned int F_00e55260(unsigned int gen_a0)
{
  GEN_ENTER(0xe55260u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork::vf2 */
uint F_00e55270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe55270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x135ae44) + 0x10))))(&REFG(undefined * PTR32, 0x135ae44),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: FUN_00e552a0 */
uint F_00e552a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe552a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x135ae44) + 0x10))))(&REFG(undefined * PTR32, 0x135ae44),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork::vf4 */
uint F_00e552d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe552d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    return in_ecx + 4;
  case 1: ;
    return in_ecx + 0x19;
  case 2: ;
    return in_ecx + 0x21;
  case 3: ;
    return in_ecx + 0x24;
  case 4: ;
    return in_ecx + 0x25;
  case 5: ;
    return in_ecx + 0x26;
  case 6: ;
    return in_ecx + 0x2c;
  case 7: ;
    return in_ecx + 0x30;
  case 8: ;
    return in_ecx + 0x34;
  default: ;
    return 0;
  }
}

/* ref: Application::Network::WorkDefinitions::BuddyWork::vf3 */
uint F_00e55350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe55350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  if (param_2 < *(uint *)(&REFG(undefined, 0x11582d8) + param_1 * 4)) {
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0: ;
      return (uint)(this + param_2 + 4);
    case 1: ;
      return (uint)(this + param_2 + 0x19);
    case 2: ;
      return (uint)(this + param_2 + 0x21);
    case 5: ;
      return (uint)(this + param_2 + 0x26);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork::vf6 */
uint F_00e553b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe553b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  undefined * pBVar5;
  int iVar6;
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  if ((short)uVar3 == (short)uVar4) {
    pBVar5 = this + 4;
    iVar6 = 0x15;
    do {
      *pBVar5 = pBVar5[(int)param_1 - (int)this];
      pBVar5 = pBVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    this[0x19] = *(undefined *)((int)param_1 + 0x19);
    this[0x1a] = *(undefined *)((int)param_1 + 0x1a);
    this[0x1b] = *(undefined *)((int)param_1 + 0x1b);
    this[0x1c] = *(undefined *)(param_1 + 7);
    this[0x1d] = *(undefined *)((int)param_1 + 0x1d);
    this[0x1e] = *(undefined *)((int)param_1 + 0x1e);
    this[0x1f] = *(undefined *)((int)param_1 + 0x1f);
    this[0x20] = *(undefined *)(param_1 + 8);
    this[0x21] = *(undefined *)((int)param_1 + 0x21);
    this[0x22] = *(undefined *)((int)param_1 + 0x22);
    this[0x23] = *(undefined *)((int)param_1 + 0x23);
    this[0x24] = *(undefined *)(param_1 + 9);
    this[0x25] = *(undefined *)((int)param_1 + 0x25);
    this[0x26] = *(undefined *)((int)param_1 + 0x26);
    this[0x27] = *(undefined *)((int)param_1 + 0x27);
    this[0x28] = *(undefined *)(param_1 + 10);
    *(int *)(this + 0x2c) = param_1[0xb];
    *(int *)(this + 0x30) = param_1[0xc];
    uVar4 = param_1[0xd];
    *(uint *)(this + 0x34) = uVar4;
  }
  return uVar4;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork::vf5 */
uint F_00e554a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe554a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined1 BVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  undefined3 uVar7;
  undefined * pBVar6;
  int iVar8;
  
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
  if ((short)uVar4 == (short)uVar5) {
    uVar5 = param_2;
    uVar7 = (undefined3)(param_2 >> 8);
    switch((unsigned int)(uintptr_t)(param_2)) {
    case 0: ;
      pBVar6 = this + 4;
      iVar8 = 0x15;
      do {
        *pBVar6 = pBVar6[(int)param_1 - (int)this];
        pBVar6 = pBVar6 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      return (uint)pBVar6;
    case 1: ;
      this[0x19] = *(undefined *)((int)param_1 + 0x19);
      this[0x1a] = *(undefined *)((int)param_1 + 0x1a);
      this[0x1b] = *(undefined *)((int)param_1 + 0x1b);
      this[0x1c] = *(undefined *)(param_1 + 7);
      this[0x1d] = *(undefined *)((int)param_1 + 0x1d);
      this[0x1e] = *(undefined *)((int)param_1 + 0x1e);
      BVar1 = *(undefined *)((int)param_1 + 0x1f);
      this[0x1f] = BVar1;
      this[0x20] = *(undefined *)(param_1 + 8);
      return (uint)(byte)BVar1;
    case 2: ;
      this[0x21] = *(undefined *)((int)param_1 + 0x21);
      BVar1 = *(undefined *)((int)param_1 + 0x22);
      this[0x22] = BVar1;
      this[0x23] = *(undefined *)((int)param_1 + 0x23);
      return CONCAT31(uVar7,BVar1);
    case 3: ;
      this[0x24] = *(undefined *)(param_1 + 9);
      return uVar5;
    case 4: ;
      BVar1 = *(undefined *)((int)param_1 + 0x25);
      this[0x25] = BVar1;
      return CONCAT31(uVar7,BVar1);
    case 5: ;
      this[0x26] = *(undefined *)((int)param_1 + 0x26);
      this[0x27] = *(undefined *)((int)param_1 + 0x27);
      BVar1 = *(undefined *)(param_1 + 10);
      this[0x28] = BVar1;
      return CONCAT31(uVar7,BVar1);
    case 6: ;
      *(int *)(this + 0x2c) = param_1[0xb];
      return uVar5;
    case 7: ;
      *(int *)(this + 0x30) = param_1[0xc];
      return uVar5;
    case 8: ;
      uVar5 = param_1[0xd];
      *(uint *)(this + 0x34) = uVar5;
    }
  }
  return uVar5;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork::vf8 */
byte F_00e555f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe555f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  char * pcVar7;
  int * piVar8;
  char * pcVar9;
  byte * pbVar10;
  byte * pbVar11;
  undefined * this_00;
  uint uVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  undefined4 uVar16;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  if (*(int *)((int)param_1 + 8) != 5) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c) ^ (uint)(uint)(gen_frame + 0x5c));
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
  uVar6 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  uVar6 = F_00e82f00(uVar6);
  pcVar7 = (char *)F_0042a990(uVar6);
  pcVar1 = pcVar7 + 1;
  do {
    cVar3 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar3 != '\0');
  piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar9 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 8))(piVar8)));
  pcVar2 = pcVar9 + 1;
  do {
    cVar3 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
    piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    pbVar10 = ((byte *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 8))(piVar8)));
    uVar6 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
    uVar6 = F_00e82f00(uVar6);
    pbVar11 = (byte *)F_0042a990(uVar6);
    do {
      bVar4 = *pbVar11;
      bVar15 = bVar4 < *pbVar10;
      if (bVar4 != *pbVar10) {
LAB_00e556f3: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00e556f8;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar11[1];
      bVar15 = bVar4 < pbVar10[1];
      if (bVar4 != pbVar10[1]) goto LAB_00e556f3;
      pbVar11 = pbVar11 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00e556f8: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"content",REFG(undefined4, 0x108cc50));
      this_00 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
      F_0042c880(((undefined1 *)(gen_frame + 0x4)));
      piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
      uVar6 = ((code *)*(gen_code32 *)(*piVar8 + 0x14))(piVar8);
      uVar12 = F_00e8c050(this_00);
      if ((int)uVar6 <= (int)uVar12) {
        iVar14 = 0;
        if (0 < (int)uVar6) {
          do {
            if ((int)uVar12 <= iVar14) break;
            iVar5 = *(int *)this;
            uVar16 = 0;
            uVar13 = F_00e9e450(this_00,iVar14,iVar14 >> 0x1f);
            uVar13 = ((code *)*(gen_code32 *)(iVar5 + 0x58))(this,iVar14,uVar13,uVar16);
            if ((char)uVar13 == '\0') goto LAB_00e557aa;
            iVar14 = iVar14 + 1;
          } while (iVar14 < (int)uVar6);
        }
        F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
        return 1;
      }
    }
  }
LAB_00e557aa: ;
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork::vf22 */
byte F_00e557c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe557c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar5 = 0xffffffff;
    uVar2 = F_00e82f00(param_2);
    uVar2 = F_0042a990(uVar2);
    F_00c4d9ef(this + 4,0x15,uVar2,uVar5);
    return 1;
  case 1: ;
    uVar2 = F_00e8c050(param_2);
    iVar3 = 0;
    while (iVar3 < (int)uVar2) {
      uVar1 = F_00e9e450(param_2,iVar3,iVar3 >> 0x1f);
      uVar1 = F_00e82f00(uVar1);
      uVar1 = F_0042a990(uVar1);
      uVar4 = F_00e50570(uVar1);
      this[iVar3 + 0x19] = SUB81(uVar4,0);
      iVar3 = iVar3 + 1;
      if (7 < iVar3) {
        return 1;
      }
    }
    break;
  case 2: ;
    uVar2 = F_00e8c050(param_2);
    iVar3 = 0;
    while (iVar3 < (int)uVar2) {
      uVar1 = F_00e9e450(param_2,iVar3,iVar3 >> 0x1f);
      uVar1 = F_00e82f00(uVar1);
      uVar1 = F_0042a990(uVar1);
      uVar4 = F_00e50570(uVar1);
      this[iVar3 + 0x21] = SUB81(uVar4,0);
      iVar3 = iVar3 + 1;
      if (2 < iVar3) {
        return 1;
      }
    }
    break;
  case 3: ;
    uVar2 = F_00e82f00(param_2);
    uVar2 = F_0042a990(uVar2);
    uVar4 = F_00e50570(uVar2);
    this[0x24] = SUB81(uVar4,0);
    return 1;
  case 4: ;
    uVar2 = F_00e82f00(param_2);
    uVar2 = F_0042a990(uVar2);
    uVar4 = F_00e50570(uVar2);
    this[0x25] = SUB81(uVar4,0);
    return 1;
  case 5: ;
    uVar2 = F_00e8c050(param_2);
    iVar3 = 0;
    while (iVar3 < (int)uVar2) {
      uVar1 = F_00e9e450(param_2,iVar3,iVar3 >> 0x1f);
      uVar1 = F_00e82f00(uVar1);
      uVar1 = F_0042a990(uVar1);
      uVar4 = F_00e50570(uVar1);
      this[iVar3 + 0x26] = SUB81(uVar4,0);
      iVar3 = iVar3 + 1;
      if (2 < iVar3) {
        return 1;
      }
    }
    break;
  case 6: ;
    uVar2 = F_00e82f00(param_2);
    uVar2 = F_0042a990(uVar2);
    uVar4 = F_00e50570(uVar2);
    *(int *)(this + 0x2c) = (int)uVar4;
    return 1;
  case 7: ;
    uVar2 = F_00e82f00(param_2);
    uVar2 = F_0042a990(uVar2);
    uVar4 = F_00e50570(uVar2);
    *(int *)(this + 0x30) = (int)uVar4;
    return 1;
  case 8: ;
    uVar2 = F_00e82f00(param_2);
    uVar2 = F_0042a990(uVar2);
    uVar4 = F_00e50570(uVar2);
    *(int *)(this + 0x34) = (int)uVar4;
    break;
  default: ;
    return 0;
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork::vf17 */
byte F_00e559d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe559d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"classid\":%llu",uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813((char *)(param_1 + 1),((char *)(gen_frame + 0x8)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x8)) + 1))));
  if (iVar5 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return 0;
  }
  uVar3 = F_00c51da0((char *)(param_1 + 1),0x5b);
  iVar5 = uVar3 + 2;
  uVar3 = F_00c51da0(iVar5,0x22);
  F_00c4d9ef(this + 4,(uVar3 - iVar5) + 1,iVar5,0xffffffff);
  uVar3 = uVar3 + 1;
  uVar6 = F_00fb9a80(uVar3,0x5b,0x5d);
  iVar5 = 0;
  do {
    uVar7 = uVar3 + 3;
    uVar3 = F_00c51da0(uVar7,0x22);
    if ((uVar6 < uVar7) || (uVar6 < uVar3)) {
      uVar3 = uVar6 - 1;
      break;
    }
    uVar8 = F_00e50570(uVar7);
    this[iVar5 + 0x19] = SUB81(uVar8,0);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 8);
  uVar3 = uVar3 + 2;
  uVar6 = F_00fb9a80(uVar3,0x5b,0x5d);
  iVar5 = 0;
  do {
    uVar7 = uVar3 + 3;
    uVar3 = F_00c51da0(uVar7,0x22);
    if ((uVar6 < uVar7) || (uVar6 < uVar3)) {
      uVar3 = uVar6 - 1;
      break;
    }
    uVar8 = F_00e50570(uVar7);
    this[iVar5 + 0x21] = SUB81(uVar8,0);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 3);
  uVar6 = F_00c51da0(uVar3 + 4,0x22);
  uVar8 = F_00e50570(uVar3 + 4);
  this[0x24] = SUB81(uVar8,0);
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  uVar3 = uVar3 + 1;
  uVar8 = F_00e50570(uVar6 + 3);
  this[0x25] = SUB81(uVar8,0);
  uVar6 = F_00fb9a80(uVar3,0x5b,0x5d);
  iVar5 = 0;
  while( true ) {
    uVar7 = uVar3 + 3;
    uVar3 = F_00c51da0(uVar7,0x22);
    if ((uVar6 < uVar7) || (uVar6 < uVar3)) break;
    uVar8 = F_00e50570(uVar7);
    this[iVar5 + 0x26] = SUB81(uVar8,0);
    iVar5 = iVar5 + 1;
    if (2 < iVar5) {
LAB_00e55b8d: ;
      uVar6 = F_00c51da0(uVar3 + 4,0x22);
      uVar8 = F_00e50570(uVar3 + 4);
      *(int *)(this + 0x2c) = (int)uVar8;
      uVar3 = F_00c51da0(uVar6 + 3,0x22);
      uVar8 = F_00e50570(uVar6 + 3);
      *(int *)(this + 0x30) = (int)uVar8;
      uVar6 = F_00c51da0(uVar3 + 3,0x22);
      uVar8 = F_00e50570(uVar3 + 3);
      *(int *)(this + 0x34) = (int)uVar8;
      if (param_2 != (uint *)0x0) {
        uVar3 = F_00c51da0(uVar6,0x7d);
        *param_2 = uVar3;
      }
      F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
      return 1;
    }
  }
  uVar3 = uVar6 - 1;
  goto LAB_00e55b8d;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork::vf10 */
uint F_00e55c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe55c00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_00ea81c0(param_1);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classid",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"content",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
  F_00ea8220(pvVar3);
  F_00ea83e0(pvVar3,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this,pvVar3,0);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork::vf23 */
byte F_00e55d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe55d20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * pvVar1;
  undefined * pvVar2;
  int iVar3;
  undefined1 * puVar4;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  pvVar1 = (undefined *)F_00e9e450(param_1,0,0);
  F_00ea7fb0(pvVar1,this + 4);
  pvVar1 = (undefined *)F_00e9e450(param_1,1,0);
  F_00ea8220(pvVar1);
  F_00ea83e0(pvVar1,8,0);
  iVar3 = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[iVar3 + 0x19],0);
    puVar4 = ((undefined1 *)(gen_frame + 0x8));
    pvVar2 = (undefined *)F_00e9e450(pvVar1,iVar3,iVar3 >> 0x1f);
    F_00ea7fb0(pvVar2,puVar4);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 8);
  pvVar1 = (undefined *)F_00e9e450(param_1,2,0);
  F_00ea8220(pvVar1);
  F_00ea83e0(pvVar1,3,0);
  iVar3 = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[iVar3 + 0x21],0);
    puVar4 = ((undefined1 *)(gen_frame + 0x8));
    pvVar2 = (undefined *)F_00e9e450(pvVar1,iVar3,iVar3 >> 0x1f);
    F_00ea7fb0(pvVar2,puVar4);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  pvVar1 = (undefined *)F_00e9e450(param_1,3,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x24],0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,4,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x25],0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,5,0);
  F_00ea8220(pvVar1);
  F_00ea83e0(pvVar1,3,0);
  iVar3 = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[iVar3 + 0x26],0);
    puVar4 = ((undefined1 *)(gen_frame + 0x8));
    pvVar2 = (undefined *)F_00e9e450(pvVar1,iVar3,iVar3 >> 0x1f);
    F_00ea7fb0(pvVar2,puVar4);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  pvVar1 = (undefined *)F_00e9e450(param_1,6,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x2c),0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,7,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x30),0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,8,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x34),0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork::vf9 */
uint F_00e55f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe55f80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,param_1,0);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork::vf11 */
byte F_00e55fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe55fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  char * pcVar6;
  int * piVar7;
  char * pcVar8;
  byte * pbVar9;
  byte * pbVar10;
  undefined * this_00;
  uint uVar11;
  uint uVar12;
  undefined * this_01;
  uint uVar13;
  int iVar14;
  bool bVar15;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  if (*(int *)((int)param_1 + 8) != 5) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc) ^ (uint)(uint)(gen_frame + 0xbc));
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"classname",REFG(undefined4, 0x108cc50));
  uVar5 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
  uVar5 = F_00e82f00(uVar5);
  pcVar6 = (char *)F_0042a990(uVar5);
  pcVar1 = pcVar6 + 1;
  do {
    cVar3 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar3 != '\0');
  piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar8 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 8))(piVar7)));
  pcVar2 = pcVar8 + 1;
  do {
    cVar3 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x64)));
  if ((int)pcVar6 - (int)pcVar1 == (int)pcVar8 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"classname",REFG(undefined4, 0x108cc50));
    piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    pbVar9 = ((byte *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 8))(piVar7)));
    uVar5 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
    uVar5 = F_00e82f00(uVar5);
    pbVar10 = (byte *)F_0042a990(uVar5);
    do {
      bVar4 = *pbVar10;
      bVar15 = bVar4 < *pbVar9;
      if (bVar4 != *pbVar9) {
LAB_00e560b3: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00e560b8;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar10[1];
      bVar15 = bVar4 < pbVar9[1];
      if (bVar4 != pbVar9[1]) goto LAB_00e560b3;
      pbVar10 = pbVar10 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00e560b8: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x64)));
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"contentdetail",REFG(undefined4, 0x108cc50));
      this_00 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
      F_0042c880(((undefined1 *)(gen_frame + 0x64)));
      if (*(int *)((int)this_00 + 8) == 6) {
        uVar5 = F_00e8c050(this_00);
        piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
        uVar11 = ((code *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7);
        (*(byte *)(gen_frame + 0xf)) = 1;
        (*(int *)(gen_frame + 0x8)) = 0;
        if (0 < (int)uVar11) {
          do {
            piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
            uVar12 = ((code *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7,(*(int *)(gen_frame + 0x8)));
            iVar14 = 0;
            if (0 < (int)uVar5) {
              do {
                this_01 = (undefined *)F_00e9e450(this_00,iVar14,iVar14 >> 0x1f);
                if (*(int *)((int)this_01 + 8) == 5) {
                  F_0042cc20(((undefined1 *)(gen_frame + 0x10)),"memberid",REFG(undefined4, 0x108cc50));
                  uVar13 = F_00ea8380(this_01,((undefined1 *)(gen_frame + 0x10)));
                  F_0042c880(((undefined1 *)(gen_frame + 0x10)));
                  if ((*(int *)(uVar13 + 8) == 1) &&
                     (uVar13 = F_00e82b90(uVar13), uVar13 == uVar12)) {
                    uVar12 = ((code *)*(gen_code32 *)(*(int *)this + 0x60))(this,(*(int *)(gen_frame + 0x8)),this_01);
                    (*(byte *)(gen_frame + 0xf)) = (byte)uVar12;
                    if ((*(byte *)(gen_frame + 0xf)) == 0) goto LAB_00e56227;
                    break;
                  }
                }
                iVar14 = iVar14 + 1;
              } while (iVar14 < (int)uVar5);
            }
            (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
          } while ((*(int *)(gen_frame + 0x8)) < (int)uVar11);
        }
        F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
        return (*(byte *)(gen_frame + 0xf));
      }
    }
  }
LAB_00e56227: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork::vf24 */
byte F_00e56240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe56240u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  this_00 = (undefined *)F_00ea8380(param_2,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar5 = 0xffffffff;
    uVar2 = F_00e82f00(this_00);
    uVar2 = F_0042a990(uVar2);
    F_00c4d9ef(this + 4,0x15,uVar2,uVar5);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 1: ;
    uVar2 = F_00e8c050(this_00);
    iVar3 = 0;
    while (iVar3 < (int)uVar2) {
      uVar1 = F_00e9e450(this_00,iVar3,iVar3 >> 0x1f);
      uVar1 = F_00e82f00(uVar1);
      uVar1 = F_0042a990(uVar1);
      uVar4 = F_00e505e0(uVar1);
      this[iVar3 + 0x19] = SUB81(uVar4,0);
      iVar3 = iVar3 + 1;
      if (7 < iVar3) {
        F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
        return 1;
      }
    }
    break;
  case 2: ;
    uVar2 = F_00e8c050(this_00);
    iVar3 = 0;
    while (iVar3 < (int)uVar2) {
      uVar1 = F_00e9e450(this_00,iVar3,iVar3 >> 0x1f);
      uVar1 = F_00e82f00(uVar1);
      uVar1 = F_0042a990(uVar1);
      uVar4 = F_00e505e0(uVar1);
      this[iVar3 + 0x21] = SUB81(uVar4,0);
      iVar3 = iVar3 + 1;
      if (2 < iVar3) {
        F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
        return 1;
      }
    }
    break;
  case 3: ;
    uVar2 = F_00e82f00(this_00);
    uVar2 = F_0042a990(uVar2);
    uVar4 = F_00e50570(uVar2);
    this[0x24] = SUB81(uVar4,0);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 4: ;
    uVar2 = F_00e82f00(this_00);
    uVar2 = F_0042a990(uVar2);
    uVar4 = F_00e50570(uVar2);
    this[0x25] = SUB81(uVar4,0);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 5: ;
    uVar2 = F_00e8c050(this_00);
    iVar3 = 0;
    while (iVar3 < (int)uVar2) {
      uVar1 = F_00e9e450(this_00,iVar3,iVar3 >> 0x1f);
      uVar1 = F_00e82f00(uVar1);
      uVar1 = F_0042a990(uVar1);
      uVar4 = F_00e505e0(uVar1);
      this[iVar3 + 0x26] = SUB81(uVar4,0);
      iVar3 = iVar3 + 1;
      if (2 < iVar3) {
        F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
        return 1;
      }
    }
    break;
  case 6: ;
    uVar2 = F_00e82f00(this_00);
    uVar2 = F_0042a990(uVar2);
    uVar4 = F_00e50570(uVar2);
    *(int *)(this + 0x2c) = (int)uVar4;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 7: ;
    uVar2 = F_00e82f00(this_00);
    uVar2 = F_0042a990(uVar2);
    uVar4 = F_00e50570(uVar2);
    *(int *)(this + 0x30) = (int)uVar4;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 8: ;
    uVar2 = F_00e82f00(this_00);
    uVar2 = F_0042a990(uVar2);
    uVar4 = F_00e50570(uVar2);
    *(int *)(this + 0x34) = (int)uVar4;
    break;
  default: ;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 0;
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork::vf18 */
byte F_00e56500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe56500u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"classid\":%llu",uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813((char *)(param_1 + 1),((char *)(gen_frame + 0x8)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x8)) + 1))));
  if (iVar5 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return 0;
  }
  uVar3 = F_00c51da0((char *)(param_1 + 1),0x5b);
  uVar3 = uVar3 - 1;
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar6 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar6);
  uVar6 = F_00fb9ad0(uVar3,((char *)(gen_frame + 0x8)));
  if (uVar6 != 0) {
    uVar3 = F_00fb9ad0(uVar6,REFG(undefined * PTR32, 0x135afc0));
    iVar5 = uVar3 + 9;
    uVar3 = F_00c51da0(iVar5,0x22);
    F_00c4d9ef(this + 4,(uVar3 - iVar5) + 1,iVar5,0xffffffff);
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar6 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar6);
  uVar6 = F_00fb9ad0(uVar3,((char *)(gen_frame + 0x8)));
  if (uVar6 != 0) {
    uVar3 = F_00fb9ad0(uVar6,REFG(undefined * PTR32, 0x135afbc));
    uVar3 = uVar3 + 10;
    iVar5 = 0;
    do {
      uVar7 = F_00e50570(uVar3);
      this[iVar5 + 0x19] = SUB81(uVar7,0);
      uVar3 = F_00c51da0(uVar3,0x2c);
      iVar5 = iVar5 + 1;
      uVar3 = uVar3 + 2;
    } while (iVar5 < 8);
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar6 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar6);
  uVar6 = F_00fb9ad0(uVar3,((char *)(gen_frame + 0x8)));
  if (uVar6 != 0) {
    uVar3 = F_00fb9ad0(uVar6,REFG(undefined * PTR32, 0x135afbc));
    uVar3 = uVar3 + 10;
    iVar5 = 0;
    do {
      uVar7 = F_00e50570(uVar3);
      this[iVar5 + 0x21] = SUB81(uVar7,0);
      uVar3 = F_00c51da0(uVar3,0x2c);
      iVar5 = iVar5 + 1;
      uVar3 = uVar3 + 2;
    } while (iVar5 < 3);
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar6 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,3);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar6);
  uVar6 = F_00fb9ad0(uVar3,((char *)(gen_frame + 0x8)));
  if (uVar6 != 0) {
    uVar3 = F_00fb9ad0(uVar6,REFG(undefined * PTR32, 0x135afc0));
    uVar3 = uVar3 + 9;
    uVar7 = F_00e50570(uVar3);
    this[0x24] = SUB81(uVar7,0);
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar6 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,4);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar6);
  uVar6 = F_00fb9ad0(uVar3,((char *)(gen_frame + 0x8)));
  if (uVar6 != 0) {
    uVar3 = F_00fb9ad0(uVar6,REFG(undefined * PTR32, 0x135afc0));
    uVar3 = uVar3 + 9;
    uVar7 = F_00e50570(uVar3);
    this[0x25] = SUB81(uVar7,0);
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar6 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,5);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar6);
  uVar6 = F_00fb9ad0(uVar3,((char *)(gen_frame + 0x8)));
  if (uVar6 != 0) {
    uVar3 = F_00fb9ad0(uVar6,REFG(undefined * PTR32, 0x135afbc));
    uVar3 = uVar3 + 10;
    iVar5 = 0;
    do {
      uVar7 = F_00e50570(uVar3);
      this[iVar5 + 0x26] = SUB81(uVar7,0);
      uVar3 = F_00c51da0(uVar3,0x2c);
      iVar5 = iVar5 + 1;
      uVar3 = uVar3 + 2;
    } while (iVar5 < 3);
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar6 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,6);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar6);
  uVar6 = F_00fb9ad0(uVar3,((char *)(gen_frame + 0x8)));
  if (uVar6 != 0) {
    uVar3 = F_00fb9ad0(uVar6,REFG(undefined * PTR32, 0x135afc0));
    uVar3 = uVar3 + 9;
    uVar7 = F_00e50570(uVar3);
    *(int *)(this + 0x2c) = (int)uVar7;
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar6 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,7);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar6);
  uVar6 = F_00fb9ad0(uVar3,((char *)(gen_frame + 0x8)));
  if (uVar6 != 0) {
    uVar3 = F_00fb9ad0(uVar6,REFG(undefined * PTR32, 0x135afc0));
    uVar3 = uVar3 + 9;
    uVar7 = F_00e50570(uVar3);
    *(int *)(this + 0x30) = (int)uVar7;
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar6 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar6);
  uVar6 = F_00fb9ad0(uVar3,((char *)(gen_frame + 0x8)));
  if (uVar6 != 0) {
    uVar3 = F_00fb9ad0(uVar6,REFG(undefined * PTR32, 0x135afc0));
    uVar3 = uVar3 + 9;
    uVar7 = F_00e50570(uVar3);
    *(int *)(this + 0x34) = (int)uVar7;
  }
  if (param_2 != (uint *)0x0) {
    *param_2 = uVar3;
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork::vf13 */
uint F_00e56900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe56900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_00ea81c0(param_1);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classid",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"contentdetail",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
  F_00ea8220(pvVar3);
  F_00ea83e0(pvVar3,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 100))(this,pvVar3);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork::vf25 */
byte F_00e56a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe56a20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  undefined * pvVar1;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 * puVar9;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  pvVar1 = (undefined *)F_00e9e450(param_1,0,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar2,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,"String");
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar1,this + 4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  pvVar1 = (undefined *)F_00e9e450(param_1,1,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar2,1);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,1);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,1);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,"UInt8");
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea8220(pvVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  uVar8 = 0;
  uVar7 = 8;
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea83e0(pvVar2,uVar7,uVar8);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  (*(int *)(gen_frame + 0x0)) = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[(*(int *)(gen_frame + 0x0)) + 0x19],0);
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
    puVar9 = ((undefined1 *)(gen_frame + 0x58));
    iVar5 = (*(int *)(gen_frame + 0x0)) >> 0x1f;
    iVar6 = (*(int *)(gen_frame + 0x0));
    pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
    pvVar2 = (undefined *)F_00e9e450(pvVar2,iVar6,iVar5);
    F_00ea7fb0(pvVar2,puVar9);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
  } while ((*(int *)(gen_frame + 0x0)) < 8);
  pvVar1 = (undefined *)F_00e9e450(param_1,2,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar2,2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,2);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,2);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,"UInt8");
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea8220(pvVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  uVar8 = 0;
  uVar7 = 3;
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea83e0(pvVar2,uVar7,uVar8);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  (*(int *)(gen_frame + 0x0)) = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[(*(int *)(gen_frame + 0x0)) + 0x21],0);
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
    puVar9 = ((undefined1 *)(gen_frame + 0x58));
    iVar5 = (*(int *)(gen_frame + 0x0)) >> 0x1f;
    iVar6 = (*(int *)(gen_frame + 0x0));
    pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
    pvVar2 = (undefined *)F_00e9e450(pvVar2,iVar6,iVar5);
    F_00ea7fb0(pvVar2,puVar9);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
  } while ((*(int *)(gen_frame + 0x0)) < 3);
  pvVar1 = (undefined *)F_00e9e450(param_1,3,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar2,3);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,3);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,3);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,"UInt8");
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x24],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  pvVar1 = (undefined *)F_00e9e450(param_1,4,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar2,4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,4);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,4);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,"UInt8");
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x25],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  pvVar1 = (undefined *)F_00e9e450(param_1,5,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar2,5);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,5);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,5);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,"UInt8");
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea8220(pvVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  uVar8 = 0;
  uVar7 = 3;
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea83e0(pvVar2,uVar7,uVar8);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  (*(int *)(gen_frame + 0x0)) = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[(*(int *)(gen_frame + 0x0)) + 0x26],0);
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
    puVar9 = ((undefined1 *)(gen_frame + 0x58));
    iVar5 = (*(int *)(gen_frame + 0x0)) >> 0x1f;
    iVar6 = (*(int *)(gen_frame + 0x0));
    pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
    pvVar2 = (undefined *)F_00e9e450(pvVar2,iVar6,iVar5);
    F_00ea7fb0(pvVar2,puVar9);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
  } while ((*(int *)(gen_frame + 0x0)) < 3);
  pvVar1 = (undefined *)F_00e9e450(param_1,6,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar2,6);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,6);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,6);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,"UInt32");
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x2c),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  pvVar1 = (undefined *)F_00e9e450(param_1,7,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar2,7);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,7);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,7);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,"UInt32");
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x30),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  pvVar1 = (undefined *)F_00e9e450(param_1,8,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar2,8);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,8);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,8);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,"UInt32");
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x34),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork::vf14 */
byte F_00e57790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe57790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined * this_00;
  uint uVar6;
  char * pcVar7;
  int * piVar8;
  char * pcVar9;
  byte * pbVar10;
  byte * pbVar11;
  undefined * this_01;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)),"memberid",REFG(undefined4, 0x108cc50));
  this_00 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x10)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10)));
  if ((*(int *)((int)this_00 + 8) == 6) && (*(int *)((int)param_1 + 8) == 5)) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"classname",REFG(undefined4, 0x108cc50));
    uVar6 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
    uVar6 = F_00e82f00(uVar6);
    pcVar7 = (char *)F_0042a990(uVar6);
    pcVar1 = pcVar7 + 1;
    do {
      cVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar3 != '\0');
    piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    pcVar9 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 8))(piVar8)));
    pcVar2 = pcVar9 + 1;
    do {
      cVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
    F_0042c880(((undefined1 *)(gen_frame + 0x64)));
    if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"classname",REFG(undefined4, 0x108cc50));
      piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
      pbVar10 = ((byte *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 8))(piVar8)));
      uVar6 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
      uVar6 = F_00e82f00(uVar6);
      pbVar11 = (byte *)F_0042a990(uVar6);
      do {
        bVar4 = *pbVar11;
        bVar16 = bVar4 < *pbVar10;
        if (bVar4 != *pbVar10) {
LAB_00e578e2: ;
          iVar15 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_00e578e7;
        }
        if (bVar4 == 0) break;
        bVar4 = pbVar11[1];
        bVar16 = bVar4 < pbVar10[1];
        if (bVar4 != pbVar10[1]) goto LAB_00e578e2;
        pbVar11 = pbVar11 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar4 != 0);
      iVar15 = 0;
LAB_00e578e7: ;
      F_0042c880(((undefined1 *)(gen_frame + 0x64)));
      if (iVar15 == 0) {
        F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"content",REFG(undefined4, 0x108cc50));
        this_01 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
        F_0042c880(((undefined1 *)(gen_frame + 0x64)));
        piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
        uVar6 = ((code *)*(gen_code32 *)(*piVar8 + 0x14))(piVar8);
        uVar12 = F_00e8c050(this_01);
        uVar13 = F_00e8c050(this_00);
        if (uVar12 == uVar13) {
          (*(int *)(gen_frame + 0x8)) = 0;
          if (0 < (int)uVar6) {
            do {
              piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
              uVar13 = ((code *)*(gen_code32 *)(*piVar8 + 0xc))(piVar8,(*(int *)(gen_frame + 0x8)));
              iVar15 = 0;
              if (0 < (int)uVar12) {
                do {
                  uVar14 = F_00e9e450(this_00,iVar15,iVar15 >> 0x1f);
                  uVar14 = F_00e82f00(uVar14);
                  uVar14 = F_0042a990(uVar14);
                  uVar17 = F_00e505e0(uVar14);
                  if (((uint)uVar17 == uVar13) && ((int)(uVar17 >> 0x20) == 0)) {
                    iVar5 = *(int *)this;
                    uVar18 = 1;
                    uVar13 = F_00e9e450(this_01,iVar15,iVar15 >> 0x1f);
                    uVar13 = ((code *)*(gen_code32 *)(iVar5 + 0x58))(this,(*(int *)(gen_frame + 0x8)),uVar13,uVar18);
                    if ((char)uVar13 == '\0') goto LAB_00e577ee;
                    break;
                  }
                  iVar15 = iVar15 + 1;
                } while (iVar15 < (int)uVar12);
              }
              (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
            } while ((*(int *)(gen_frame + 0x8)) < (int)uVar6);
          }
          F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
          return 1;
        }
      }
    }
  }
LAB_00e577ee: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork::vf16 */
byte F_00e57a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe57a40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined * this_00;
  int iVar5;
  undefined1 * puVar6;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  F_00ea81c0(param_1);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classid",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"content",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
  F_00ea8220(pvVar3);
  F_00ea83e0(pvVar3,uVar2,(int)uVar2 >> 0x1f);
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this,pvVar3,1);
  if ((char)uVar4 == '\0') {
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberid",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00ea8220(pvVar3);
  F_00ea83e0(pvVar3,uVar2,(int)uVar2 >> 0x1f);
  iVar5 = 0;
  if (0 < (int)uVar2) {
    do {
      piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
      uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,iVar5);
      F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
      puVar6 = ((undefined1 *)(gen_frame + 0x58));
      this_00 = (undefined *)F_00e9e450(pvVar3,iVar5,iVar5 >> 0x1f);
      F_00ea7fb0(this_00,puVar6);
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar2);
  }
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork_TypeInfo::vf1 */
uint F_00e57c40(void)
{
  GEN_ENTER(0xe57c40u, 0u, 0u, 0u, 0u);
  return 0x2e;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork_TypeInfo::vf2 */
uint F_00e57c50(void)
{
  GEN_ENTER(0xe57c50u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x135ae08);
}

/* ref: Application::Network::WorkDefinitions::EventStateWork_TypeInfo::vf3 */
uint F_00e57c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe57c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x11583cc) + param_1 * 4);
}

/* ref: FUN_00e57c80 */
uint F_00e57c80(unsigned int gen_a0)
{
  GEN_ENTER(0xe57c80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(&REFG(undefined, 0x11583e0) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::EventStateWork_TypeInfo::vf4 */
uint F_00e57ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe57ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,uVar2);
    if (uVar1 == param_1) {
      return uVar2;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 5);
  return 0xffffffff;
}

/* ref: FUN_00e57ce0 */
uint F_00e57ce0(unsigned int gen_a0)
{
  GEN_ENTER(0xe57ce0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 - 0x1c2;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork_TypeInfo::vf6 */
uint F_00e57cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe57cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (uint)(&REFG(undefined * PTR32, 0x135adf4))[param_1];
}

/* ref: Application::Network::WorkDefinitions::EventStateWork_TypeInfo::vf7 */
uint F_00e57d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe57d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x1158390) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::EventStateWork_TypeInfo::vf8 */
uint F_00e57d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe57d30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x11583b8) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::EventStateWork_TypeInfo::vf9 */
uint F_00e57d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe57d50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x15e37cc) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::EventStateWork_TypeInfo::vf10 */
uint F_00e57d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe57d70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x11583a4) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::EventStateWork_TypeInfo::vf14 */
uint F_00e57d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe57d90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(&REFG(undefined, 0x11583b8) + param_1 * 4) != 0x12) {
    if (*(int *)(&REFG(undefined, 0x11583b8) + param_1 * 4) == 0x14) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(&REFG(undefined, 0x15e37cc) + param_1 * 4) + 0x2c))))
                        (*(int * PTR32 *)(&REFG(undefined, 0x15e37cc) + param_1 * 4));
      return uVar2 + 4;
    }
    return *(int *)(&REFG(undefined, 0x11583a4) + param_1 * 4) + 4;
  }
  piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e37cc) + param_1 * 4);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
    return uVar2 * *(int *)(&REFG(undefined, 0x1158390) + param_1 * 4) + 7;
  }
  return *(int *)(&REFG(undefined, 0x11583a4) + param_1 * 4) * *(int *)(&REFG(undefined, 0x1158390) + param_1 * 4) + 7;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork_TypeInfo::vf13 */
uint F_00e57e10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe57e10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 7;
  if ((char)param_2 == '\0') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e37cc) + param_1 * 4);
    if (piVar1 == (int *)0x0) {
      return *(int *)(&REFG(undefined, 0x11583a4) + param_1 * 4) * *(int *)(&REFG(undefined, 0x1158390) + param_1 * 4) + 7;
    }
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
    uVar2 = uVar2 * *(int *)(&REFG(undefined, 0x1158390) + param_1 * 4) + 7;
  }
  else if ((char)param_2 == '\x01') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e37cc) + param_1 * 4);
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
      return uVar2 + 7;
    }
    return *(int *)(&REFG(undefined, 0x11583a4) + param_1 * 4) + 7;
  }
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork_TypeInfo::vf12 */
uint F_00e57e90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xe57e90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = (((param_4 - param_3) + 1U & 0xffff) >> 5) + 1;
  uVar6 = 0;
  iVar1 = uVar4 * 4 + 9;
  uVar5 = 0;
  if (uVar4 != 0) {
    do {
      uVar2 = *(uint *)(param_5 + uVar5 * 4);
      if ((uVar2 & 1) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 2) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 4) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 8) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x10) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x20) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x40) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((char)uVar2 < '\0') {
        uVar6 = uVar6 + 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  piVar3 = *(int * PTR32 *)(&REFG(undefined, 0x15e37cc) + param_1 * 4);
  if (piVar3 == (int *)0x0) {
    return (uVar6 & 0xffff) * *(int *)(&REFG(undefined, 0x11583a4) + param_1 * 4) + iVar1;
  }
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x2c))(piVar3);
  return uVar4 * (uVar6 & 0xffff) + iVar1;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork_TypeInfo::vf11 */
uint F_00e57f20(unsigned int gen_a0)
{
  GEN_ENTER(0xe57f20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,0);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,1);
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,2);
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,3);
  uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,4);
  return uVar5 + uVar1 + uVar2 + uVar3 + uVar4;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork_TypeInfo::vf17 */
uint F_00e57f70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xe57f70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint * param_5 = (uint *)(uintptr_t)gen_a5;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_2);
  *param_5 = uVar1;
  return 4;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork_TypeInfo::vf16 */
uint F_00e57f90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xe57f90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  uint * param_7 = (uint *)(uintptr_t)gen_a7;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_2);
  *param_7 = uVar1;
  return 4;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork_TypeInfo::vf15 */
uint F_00e57fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe57fb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,0,param_2);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,1,uVar1 + param_2);
  iVar3 = uVar1 + param_2 + uVar2;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,2,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,3,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,4,iVar3);
  return uVar1 + (iVar3 - param_2);
}

/* ref: Application::Network::WorkDefinitions::EventStateWork_TypeInfo::vf19 */
uint F_00e58020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe58020u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,0,param_1,param_2);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,1,uVar1 + param_1,param_2);
  iVar3 = uVar1 + param_1 + uVar2;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,2,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,3,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,4,iVar3,param_2);
  return uVar1 + (iVar3 - param_1);
}

/* ref: FUN_00e58090 */
uint F_00e58090(unsigned int gen_a0)
{
  GEN_ENTER(0xe58090u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[27])REFP(0x11587fc));
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  *(undefined2 *)(in_ecx + 5) = 0;
  in_ecx[6] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00e580b0 */
unsigned int F_00e580b0(unsigned int gen_a0)
{
  GEN_ENTER(0xe580b0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork::vf2 */
uint F_00e580c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe580c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x135ae48) + 0x10))))(&REFG(undefined * PTR32, 0x135ae48),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: FUN_00e580f0 */
uint F_00e580f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe580f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x135ae48) + 0x10))))(&REFG(undefined * PTR32, 0x135ae48),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork::vf4 */
uint F_00e58120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe58120u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    return in_ecx + 8;
  case 1: ;
    return in_ecx + 0x10;
  case 2: ;
    return in_ecx + 0x14;
  case 3: ;
    return in_ecx + 0x15;
  case 4: ;
    return in_ecx + 0x18;
  default: ;
    return 0;
  }
}

/* ref: Application::Network::WorkDefinitions::EventStateWork::vf3 */
uint F_00e58170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe58170u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork::vf6 */
byte F_00e58180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe58180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  if ((short)uVar3 == (short)uVar4) {
    *(int *)(this + 8) = param_1[2];
    *(int *)(this + 0xc) = param_1[3];
    *(int *)(this + 0x10) = param_1[4];
    uVar4 = (uint)(byte)*(undefined *)(param_1 + 5);
    this[0x14] = *(undefined *)(param_1 + 5);
    this[0x15] = *(undefined *)((int)param_1 + 0x15);
    *(int *)(this + 0x18) = param_1[6];
  }
  return (byte)uVar4;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork::vf5 */
uint F_00e581f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe581f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined1 EVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
  if ((short)uVar4 == (short)uVar5) {
    uVar5 = param_2;
    switch((unsigned int)(uintptr_t)(param_2)) {
    case 0: ;
      uVar5 = param_1[2];
      *(uint *)(this + 8) = uVar5;
      *(int *)(this + 0xc) = param_1[3];
      return uVar5;
    case 1: ;
      *(int *)(this + 0x10) = param_1[4];
      return param_2;
    case 2: ;
      EVar1 = *(undefined *)(param_1 + 5);
      this[0x14] = EVar1;
      return CONCAT31((int3)(param_2 >> 8),EVar1);
    case 3: ;
      this[0x15] = *(undefined *)((int)param_1 + 0x15);
      return param_2;
    case 4: ;
      *(int *)(this + 0x18) = param_1[6];
    }
  }
  return uVar5;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork::vf8 */
byte F_00e582a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe582a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  char * pcVar7;
  int * piVar8;
  char * pcVar9;
  byte * pbVar10;
  byte * pbVar11;
  undefined * this_00;
  uint uVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  undefined4 uVar16;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  if (*(int *)((int)param_1 + 8) != 5) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c) ^ (uint)(uint)(gen_frame + 0x5c));
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
  uVar6 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  uVar6 = F_00e82f00(uVar6);
  pcVar7 = (char *)F_0042a990(uVar6);
  pcVar1 = pcVar7 + 1;
  do {
    cVar3 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar3 != '\0');
  piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar9 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 8))(piVar8)));
  pcVar2 = pcVar9 + 1;
  do {
    cVar3 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
    piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    pbVar10 = ((byte *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 8))(piVar8)));
    uVar6 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
    uVar6 = F_00e82f00(uVar6);
    pbVar11 = (byte *)F_0042a990(uVar6);
    do {
      bVar4 = *pbVar11;
      bVar15 = bVar4 < *pbVar10;
      if (bVar4 != *pbVar10) {
LAB_00e583a3: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00e583a8;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar11[1];
      bVar15 = bVar4 < pbVar10[1];
      if (bVar4 != pbVar10[1]) goto LAB_00e583a3;
      pbVar11 = pbVar11 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00e583a8: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"content",REFG(undefined4, 0x108cc50));
      this_00 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
      F_0042c880(((undefined1 *)(gen_frame + 0x4)));
      piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
      uVar6 = ((code *)*(gen_code32 *)(*piVar8 + 0x14))(piVar8);
      uVar12 = F_00e8c050(this_00);
      if ((int)uVar6 <= (int)uVar12) {
        iVar14 = 0;
        if (0 < (int)uVar6) {
          do {
            if ((int)uVar12 <= iVar14) break;
            iVar5 = *(int *)this;
            uVar16 = 0;
            uVar13 = F_00e9e450(this_00,iVar14,iVar14 >> 0x1f);
            uVar13 = ((code *)*(gen_code32 *)(iVar5 + 0x58))(this,iVar14,uVar13,uVar16);
            if ((char)uVar13 == '\0') goto LAB_00e5845a;
            iVar14 = iVar14 + 1;
          } while (iVar14 < (int)uVar6);
        }
        F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
        return 1;
      }
    }
  }
LAB_00e5845a: ;
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork::vf22 */
byte F_00e58470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe58470u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  ulonglong uVar2;
  
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar1 = F_00e82f00(param_2);
    uVar1 = F_0042a990(uVar1);
    uVar2 = F_00e50570(uVar1);
    *(ulonglong *)(this + 8) = uVar2;
    return 1;
  case 1: ;
    uVar1 = F_00e82f00(param_2);
    uVar1 = F_0042a990(uVar1);
    uVar2 = F_00e50570(uVar1);
    *(int *)(this + 0x10) = (int)uVar2;
    return 1;
  case 2: ;
    uVar1 = F_00e82f00(param_2);
    uVar1 = F_0042a990(uVar1);
    uVar2 = F_00e50570(uVar1);
    this[0x14] = SUB81(uVar2,0);
    return 1;
  case 3: ;
    uVar1 = F_00e82f00(param_2);
    uVar1 = F_0042a990(uVar1);
    uVar2 = F_00e50570(uVar1);
    this[0x15] = SUB81(uVar2,0);
    return 1;
  case 4: ;
    uVar1 = F_00e82f00(param_2);
    uVar1 = F_0042a990(uVar1);
    uVar2 = F_00e50570(uVar1);
    *(int *)(this + 0x18) = (int)uVar2;
    return 1;
  default: ;
    return 0;
  }
}

/* ref: Application::Network::WorkDefinitions::EventStateWork::vf17 */
byte F_00e58560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe58560u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"classid\":%llu",uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813((char *)(param_1 + 1),((char *)(gen_frame + 0x8)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x8)) + 1))));
  if (iVar5 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return 0;
  }
  uVar3 = F_00c51da0((char *)(param_1 + 1),0x5b);
  uVar6 = F_00c51da0(uVar3 + 2,0x22);
  uVar7 = F_00e50570(uVar3 + 2);
  *(ulonglong *)(this + 8) = uVar7;
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  uVar7 = F_00e50570(uVar6 + 3);
  *(int *)(this + 0x10) = (int)uVar7;
  uVar6 = F_00c51da0(uVar3 + 3,0x22);
  uVar7 = F_00e50570(uVar3 + 3);
  this[0x14] = SUB81(uVar7,0);
  uVar3 = F_00c51da0(uVar6 + 3,0x22);
  uVar7 = F_00e50570(uVar6 + 3);
  this[0x15] = SUB81(uVar7,0);
  uVar6 = F_00c51da0(uVar3 + 3,0x22);
  uVar7 = F_00e50570(uVar3 + 3);
  *(int *)(this + 0x18) = (int)uVar7;
  if (param_2 != (uint *)0x0) {
    uVar3 = F_00c51da0(uVar6,0x7d);
    *param_2 = uVar3;
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork::vf10 */
uint F_00e58690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe58690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_00ea81c0(param_1);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classid",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"content",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
  F_00ea8220(pvVar3);
  F_00ea83e0(pvVar3,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this,pvVar3,0);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork::vf23 */
byte F_00e587b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe587b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * pvVar1;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  pvVar1 = (undefined *)F_00e9e450(param_1,0,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 8),*(undefined4 *)(this + 0xc));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,1,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x10),0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,2,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x14],0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,3,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x15],0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,4,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x18),0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork::vf9 */
uint F_00e588e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe588e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,param_1,0);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork::vf11 */
byte F_00e58900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe58900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  char * pcVar6;
  int * piVar7;
  char * pcVar8;
  byte * pbVar9;
  byte * pbVar10;
  undefined * this_00;
  uint uVar11;
  uint uVar12;
  undefined * this_01;
  uint uVar13;
  int iVar14;
  bool bVar15;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  if (*(int *)((int)param_1 + 8) != 5) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc) ^ (uint)(uint)(gen_frame + 0xbc));
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"classname",REFG(undefined4, 0x108cc50));
  uVar5 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
  uVar5 = F_00e82f00(uVar5);
  pcVar6 = (char *)F_0042a990(uVar5);
  pcVar1 = pcVar6 + 1;
  do {
    cVar3 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar3 != '\0');
  piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar8 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 8))(piVar7)));
  pcVar2 = pcVar8 + 1;
  do {
    cVar3 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x64)));
  if ((int)pcVar6 - (int)pcVar1 == (int)pcVar8 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"classname",REFG(undefined4, 0x108cc50));
    piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    pbVar9 = ((byte *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 8))(piVar7)));
    uVar5 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
    uVar5 = F_00e82f00(uVar5);
    pbVar10 = (byte *)F_0042a990(uVar5);
    do {
      bVar4 = *pbVar10;
      bVar15 = bVar4 < *pbVar9;
      if (bVar4 != *pbVar9) {
LAB_00e58a13: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00e58a18;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar10[1];
      bVar15 = bVar4 < pbVar9[1];
      if (bVar4 != pbVar9[1]) goto LAB_00e58a13;
      pbVar10 = pbVar10 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00e58a18: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x64)));
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"contentdetail",REFG(undefined4, 0x108cc50));
      this_00 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
      F_0042c880(((undefined1 *)(gen_frame + 0x64)));
      if (*(int *)((int)this_00 + 8) == 6) {
        uVar5 = F_00e8c050(this_00);
        piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
        uVar11 = ((code *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7);
        (*(byte *)(gen_frame + 0xf)) = 1;
        (*(int *)(gen_frame + 0x8)) = 0;
        if (0 < (int)uVar11) {
          do {
            piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
            uVar12 = ((code *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7,(*(int *)(gen_frame + 0x8)));
            iVar14 = 0;
            if (0 < (int)uVar5) {
              do {
                this_01 = (undefined *)F_00e9e450(this_00,iVar14,iVar14 >> 0x1f);
                if (*(int *)((int)this_01 + 8) == 5) {
                  F_0042cc20(((undefined1 *)(gen_frame + 0x10)),"memberid",REFG(undefined4, 0x108cc50));
                  uVar13 = F_00ea8380(this_01,((undefined1 *)(gen_frame + 0x10)));
                  F_0042c880(((undefined1 *)(gen_frame + 0x10)));
                  if ((*(int *)(uVar13 + 8) == 1) &&
                     (uVar13 = F_00e82b90(uVar13), uVar13 == uVar12)) {
                    uVar12 = ((code *)*(gen_code32 *)(*(int *)this + 0x60))(this,(*(int *)(gen_frame + 0x8)),this_01);
                    (*(byte *)(gen_frame + 0xf)) = (byte)uVar12;
                    if ((*(byte *)(gen_frame + 0xf)) == 0) goto LAB_00e58b87;
                    break;
                  }
                }
                iVar14 = iVar14 + 1;
              } while (iVar14 < (int)uVar5);
            }
            (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
          } while ((*(int *)(gen_frame + 0x8)) < (int)uVar11);
        }
        F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
        return (*(byte *)(gen_frame + 0xf));
      }
    }
  }
LAB_00e58b87: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork::vf24 */
byte F_00e58ba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe58ba0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  ulonglong uVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  uVar1 = F_00ea8380(param_2,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar1 = F_00e82f00(uVar1);
    uVar1 = F_0042a990(uVar1);
    uVar2 = F_00e50570(uVar1);
    *(ulonglong *)(this + 8) = uVar2;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 1: ;
    uVar1 = F_00e82f00(uVar1);
    uVar1 = F_0042a990(uVar1);
    uVar2 = F_00e50570(uVar1);
    *(int *)(this + 0x10) = (int)uVar2;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 2: ;
    uVar1 = F_00e82f00(uVar1);
    uVar1 = F_0042a990(uVar1);
    uVar2 = F_00e50570(uVar1);
    this[0x14] = SUB81(uVar2,0);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 3: ;
    uVar1 = F_00e82f00(uVar1);
    uVar1 = F_0042a990(uVar1);
    uVar2 = F_00e50570(uVar1);
    this[0x15] = SUB81(uVar2,0);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 4: ;
    uVar1 = F_00e82f00(uVar1);
    uVar1 = F_0042a990(uVar1);
    uVar2 = F_00e50570(uVar1);
    *(int *)(this + 0x18) = (int)uVar2;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  default: ;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 0;
  }
}

/* ref: Application::Network::WorkDefinitions::EventStateWork::vf18 */
byte F_00e58d10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe58d10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  ulonglong uVar6;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"classid\":%llu",uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813((char *)(param_1 + 1),((char *)(gen_frame + 0x8)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x8)) + 1))));
  if (iVar5 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return 0;
  }
  uVar3 = F_00c51da0((char *)(param_1 + 1),0x5b);
  iVar5 = uVar3 - 1;
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b05c));
    iVar5 = uVar3 + 9;
    uVar6 = F_00e50570(iVar5);
    *(ulonglong *)(this + 8) = uVar6;
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b05c));
    iVar5 = uVar3 + 9;
    uVar6 = F_00e50570(iVar5);
    *(int *)(this + 0x10) = (int)uVar6;
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b05c));
    iVar5 = uVar3 + 9;
    uVar6 = F_00e50570(iVar5);
    this[0x14] = SUB81(uVar6,0);
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,3);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b05c));
    iVar5 = uVar3 + 9;
    uVar6 = F_00e50570(iVar5);
    this[0x15] = SUB81(uVar6,0);
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,4);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b05c));
    iVar5 = uVar3 + 9;
    uVar6 = F_00e50570(iVar5);
    *(int *)(this + 0x18) = (int)uVar6;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar5;
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork::vf13 */
uint F_00e58f60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe58f60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_00ea81c0(param_1);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classid",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"contentdetail",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
  F_00ea8220(pvVar3);
  F_00ea83e0(pvVar3,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 100))(this,pvVar3);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork::vf25 */
byte F_00e59080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe59080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  undefined * pvVar1;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  pvVar1 = (undefined *)F_00e9e450(param_1,0,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar2,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,"UInt64");
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 8),*(undefined4 *)(this + 0xc));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  pvVar1 = (undefined *)F_00e9e450(param_1,1,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar2,1);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,1);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,1);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,"UInt32");
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x10),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  pvVar1 = (undefined *)F_00e9e450(param_1,2,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar2,2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,2);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,2);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,"UInt8");
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x14],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  pvVar1 = (undefined *)F_00e9e450(param_1,3,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar2,3);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,3);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,3);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,"UInt8");
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x15],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  pvVar1 = (undefined *)F_00e9e450(param_1,4,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar2,4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,4);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,4);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,"UInt32");
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)(this + 0x18),0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork::vf14 */
byte F_00e59730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe59730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined * this_00;
  uint uVar6;
  char * pcVar7;
  int * piVar8;
  char * pcVar9;
  byte * pbVar10;
  byte * pbVar11;
  undefined * this_01;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)),"memberid",REFG(undefined4, 0x108cc50));
  this_00 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x10)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10)));
  if ((*(int *)((int)this_00 + 8) == 6) && (*(int *)((int)param_1 + 8) == 5)) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"classname",REFG(undefined4, 0x108cc50));
    uVar6 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
    uVar6 = F_00e82f00(uVar6);
    pcVar7 = (char *)F_0042a990(uVar6);
    pcVar1 = pcVar7 + 1;
    do {
      cVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar3 != '\0');
    piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    pcVar9 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 8))(piVar8)));
    pcVar2 = pcVar9 + 1;
    do {
      cVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
    F_0042c880(((undefined1 *)(gen_frame + 0x64)));
    if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"classname",REFG(undefined4, 0x108cc50));
      piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
      pbVar10 = ((byte *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 8))(piVar8)));
      uVar6 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
      uVar6 = F_00e82f00(uVar6);
      pbVar11 = (byte *)F_0042a990(uVar6);
      do {
        bVar4 = *pbVar11;
        bVar16 = bVar4 < *pbVar10;
        if (bVar4 != *pbVar10) {
LAB_00e59882: ;
          iVar15 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_00e59887;
        }
        if (bVar4 == 0) break;
        bVar4 = pbVar11[1];
        bVar16 = bVar4 < pbVar10[1];
        if (bVar4 != pbVar10[1]) goto LAB_00e59882;
        pbVar11 = pbVar11 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar4 != 0);
      iVar15 = 0;
LAB_00e59887: ;
      F_0042c880(((undefined1 *)(gen_frame + 0x64)));
      if (iVar15 == 0) {
        F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"content",REFG(undefined4, 0x108cc50));
        this_01 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
        F_0042c880(((undefined1 *)(gen_frame + 0x64)));
        piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
        uVar6 = ((code *)*(gen_code32 *)(*piVar8 + 0x14))(piVar8);
        uVar12 = F_00e8c050(this_01);
        uVar13 = F_00e8c050(this_00);
        if (uVar12 == uVar13) {
          (*(int *)(gen_frame + 0x8)) = 0;
          if (0 < (int)uVar6) {
            do {
              piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
              uVar13 = ((code *)*(gen_code32 *)(*piVar8 + 0xc))(piVar8,(*(int *)(gen_frame + 0x8)));
              iVar15 = 0;
              if (0 < (int)uVar12) {
                do {
                  uVar14 = F_00e9e450(this_00,iVar15,iVar15 >> 0x1f);
                  uVar14 = F_00e82f00(uVar14);
                  uVar14 = F_0042a990(uVar14);
                  uVar17 = F_00e505e0(uVar14);
                  if (((uint)uVar17 == uVar13) && ((int)(uVar17 >> 0x20) == 0)) {
                    iVar5 = *(int *)this;
                    uVar18 = 1;
                    uVar13 = F_00e9e450(this_01,iVar15,iVar15 >> 0x1f);
                    uVar13 = ((code *)*(gen_code32 *)(iVar5 + 0x58))(this,(*(int *)(gen_frame + 0x8)),uVar13,uVar18);
                    if ((char)uVar13 == '\0') goto LAB_00e5978e;
                    break;
                  }
                  iVar15 = iVar15 + 1;
                } while (iVar15 < (int)uVar12);
              }
              (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
            } while ((*(int *)(gen_frame + 0x8)) < (int)uVar6);
          }
          F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
          return 1;
        }
      }
    }
  }
LAB_00e5978e: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork::vf16 */
byte F_00e599e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe599e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined * this_00;
  int iVar5;
  undefined1 * puVar6;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  F_00ea81c0(param_1);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classid",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"content",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
  F_00ea8220(pvVar3);
  F_00ea83e0(pvVar3,uVar2,(int)uVar2 >> 0x1f);
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this,pvVar3,1);
  if ((char)uVar4 == '\0') {
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberid",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00ea8220(pvVar3);
  F_00ea83e0(pvVar3,uVar2,(int)uVar2 >> 0x1f);
  iVar5 = 0;
  if (0 < (int)uVar2) {
    do {
      piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
      uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,iVar5);
      F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
      puVar6 = ((undefined1 *)(gen_frame + 0x58));
      this_00 = (undefined *)F_00e9e450(pvVar3,iVar5,iVar5 >> 0x1f);
      F_00ea7fb0(this_00,puVar6);
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar2);
  }
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return 1;
}

/* ref: FUN_00e59bb0 */
unsigned int F_00e59bb0(void)
{
  GEN_ENTER(0xe59bb0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork_TypeInfo::vf1 */
uint F_00e59be0(void)
{
  GEN_ENTER(0xe59be0u, 0u, 0u, 0u, 0u);
  return 0xd4;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork_TypeInfo::vf2 */
uint F_00e59bf0(void)
{
  GEN_ENTER(0xe59bf0u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x135ae14);
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork_TypeInfo::vf3 */
uint F_00e59c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe59c00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x1158410) + param_1 * 4);
}

/* ref: FUN_00e59c20 */
uint F_00e59c20(unsigned int gen_a0)
{
  GEN_ENTER(0xe59c20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(&REFG(undefined, 0x1158418) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork_TypeInfo::vf4 */
uint F_00e59c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe59c40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,uVar2);
    if (uVar1 == param_1) {
      return uVar2;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 2);
  return 0xffffffff;
}

/* ref: FUN_00e59c80 */
uint F_00e59c80(unsigned int gen_a0)
{
  GEN_ENTER(0xe59c80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 - 0x1e9;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork_TypeInfo::vf6 */
uint F_00e59c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe59c90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (uint)(&REFG(undefined * PTR32, 0x135ae0c))[param_1];
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork_TypeInfo::vf7 */
uint F_00e59cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe59cb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x11583f8) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork_TypeInfo::vf8 */
uint F_00e59cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe59cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x1158408) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork_TypeInfo::vf9 */
uint F_00e59cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe59cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x15e37e0) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork_TypeInfo::vf10 */
uint F_00e59d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe59d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x1158400) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork_TypeInfo::vf14 */
uint F_00e59d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe59d30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(&REFG(undefined, 0x1158408) + param_1 * 4) != 0x12) {
    if (*(int *)(&REFG(undefined, 0x1158408) + param_1 * 4) == 0x14) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(&REFG(undefined, 0x15e37e0) + param_1 * 4) + 0x2c))))
                        (*(int * PTR32 *)(&REFG(undefined, 0x15e37e0) + param_1 * 4));
      return uVar2 + 4;
    }
    return *(int *)(&REFG(undefined, 0x1158400) + param_1 * 4) + 4;
  }
  piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e37e0) + param_1 * 4);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
    return uVar2 * *(int *)(&REFG(undefined, 0x11583f8) + param_1 * 4) + 7;
  }
  return *(int *)(&REFG(undefined, 0x1158400) + param_1 * 4) * *(int *)(&REFG(undefined, 0x11583f8) + param_1 * 4) + 7;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork_TypeInfo::vf13 */
uint F_00e59db0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe59db0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 7;
  if ((char)param_2 == '\0') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e37e0) + param_1 * 4);
    if (piVar1 == (int *)0x0) {
      return *(int *)(&REFG(undefined, 0x1158400) + param_1 * 4) * *(int *)(&REFG(undefined, 0x11583f8) + param_1 * 4) + 7;
    }
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
    uVar2 = uVar2 * *(int *)(&REFG(undefined, 0x11583f8) + param_1 * 4) + 7;
  }
  else if ((char)param_2 == '\x01') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e37e0) + param_1 * 4);
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
      return uVar2 + 7;
    }
    return *(int *)(&REFG(undefined, 0x1158400) + param_1 * 4) + 7;
  }
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork_TypeInfo::vf12 */
uint F_00e59e30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xe59e30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = (((param_4 - param_3) + 1U & 0xffff) >> 5) + 1;
  uVar6 = 0;
  iVar1 = uVar4 * 4 + 9;
  uVar5 = 0;
  if (uVar4 != 0) {
    do {
      uVar2 = *(uint *)(param_5 + uVar5 * 4);
      if ((uVar2 & 1) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 2) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 4) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 8) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x10) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x20) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x40) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((char)uVar2 < '\0') {
        uVar6 = uVar6 + 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  piVar3 = *(int * PTR32 *)(&REFG(undefined, 0x15e37e0) + param_1 * 4);
  if (piVar3 == (int *)0x0) {
    return (uVar6 & 0xffff) * *(int *)(&REFG(undefined, 0x1158400) + param_1 * 4) + iVar1;
  }
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x2c))(piVar3);
  return uVar4 * (uVar6 & 0xffff) + iVar1;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork_TypeInfo::vf11 */
uint F_00e59ec0(unsigned int gen_a0)
{
  GEN_ENTER(0xe59ec0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,0);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,1);
  return uVar2 + uVar1;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork_TypeInfo::vf15 */
uint F_00e59ee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe59ee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,0,param_2);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,1,param_2 + uVar1);
  return uVar2 + ((param_2 + uVar1) - param_2);
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork_TypeInfo::vf19 */
uint F_00e59f20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe59f20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,0,param_1,param_2);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,1,param_1 + uVar1,param_2);
  return uVar2 + ((param_1 + uVar1) - param_1);
}

/* ref: FUN_00e59f60 */
uint F_00e59f60(unsigned int gen_a0)
{
  GEN_ENTER(0xe59f60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 * puVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x11588c4));
  puVar2 = this;
  for (iVar1 = 0x50; puVar2 = puVar2 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
  }
  *(undefined8 *)((int)this + 0x144) = 0;
  *(undefined8 *)((int)this + 0x14c) = 0;
  *(undefined8 *)((int)this + 0x154) = 0;
  *(undefined8 *)((int)this + 0x15c) = 0;
  *(undefined8 *)((int)this + 0x164) = 0;
  *(undefined8 *)((int)this + 0x16c) = 0;
  *(undefined8 *)((int)this + 0x174) = 0;
  *(undefined8 *)((int)this + 0x17c) = 0;
  *(undefined8 *)((int)this + 0x184) = 0;
  *(undefined8 *)((int)this + 0x18c) = 0;
  return (uint)this;
}

/* ref: FUN_00e59fe0 */
unsigned int F_00e59fe0(unsigned int gen_a0)
{
  GEN_ENTER(0xe59fe0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork::vf2 */
uint F_00e59ff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe59ff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x135ae4c) + 0x10))))(&REFG(undefined * PTR32, 0x135ae4c),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: FUN_00e5a020 */
uint F_00e5a020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe5a020u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x135ae4c) + 0x10))))(&REFG(undefined * PTR32, 0x135ae4c),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork::vf4 */
uint F_00e5a050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe5a050u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 == 0) {
    return in_ecx + 4;
  }
  if (param_2 != 1) {
    return 0;
  }
  return in_ecx + 0x144;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork::vf3 */
uint F_00e5a080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe5a080u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  if (param_2 < *(uint *)(&REFG(undefined, 0x11583f8) + param_1 * 4)) {
    if (param_1 == 0) {
      return (uint)(this + param_2 * 2 + 4);
    }
    if (param_1 == 1) {
      return (uint)(this + param_2 * 4 + 0x144);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork::vf6 */
unsigned int F_00e5a0c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe5a0c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  undefined * pDVar5;
  int iVar6;
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  if ((short)uVar3 == (short)uVar4) {
    pDVar5 = this + 4;
    iVar6 = 0xa0;
    do {
      *(undefined2 *)pDVar5 = *((undefined2 *)GEN_TOP((pDVar5 + ((int)param_1 - (int)this))));
      pDVar5 = pDVar5 + 2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    pDVar5 = this + 0x144;
    iVar6 = 0x14;
    do {
      *(undefined4 *)pDVar5 = *((undefined4 *)GEN_TOP((pDVar5 + ((int)param_1 - (int)this))));
      pDVar5 = pDVar5 + 4;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork::vf5 */
unsigned int F_00e5a140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe5a140u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  undefined * pDVar5;
  int iVar6;
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  if ((short)uVar3 == (short)uVar4) {
    if (param_2 == 0) {
      pDVar5 = this + 4;
      iVar6 = 0xa0;
      do {
        *(undefined2 *)pDVar5 = *((undefined2 *)GEN_TOP((pDVar5 + ((int)param_1 - (int)this))));
        pDVar5 = pDVar5 + 2;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    else if (param_2 == 1) {
      pDVar5 = this + 0x144;
      iVar6 = 0x14;
      do {
        *(undefined4 *)pDVar5 = *((undefined4 *)GEN_TOP((pDVar5 + ((int)param_1 - (int)this))));
        pDVar5 = pDVar5 + 4;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      return 0;
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork::vf8 */
byte F_00e5a1d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe5a1d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  char * pcVar7;
  int * piVar8;
  char * pcVar9;
  byte * pbVar10;
  byte * pbVar11;
  undefined * this_00;
  uint uVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  undefined4 uVar16;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  if (*(int *)((int)param_1 + 8) != 5) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c) ^ (uint)(uint)(gen_frame + 0x5c));
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
  uVar6 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  uVar6 = F_00e82f00(uVar6);
  pcVar7 = (char *)F_0042a990(uVar6);
  pcVar1 = pcVar7 + 1;
  do {
    cVar3 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar3 != '\0');
  piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar9 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 8))(piVar8)));
  pcVar2 = pcVar9 + 1;
  do {
    cVar3 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
    piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    pbVar10 = ((byte *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 8))(piVar8)));
    uVar6 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
    uVar6 = F_00e82f00(uVar6);
    pbVar11 = (byte *)F_0042a990(uVar6);
    do {
      bVar4 = *pbVar11;
      bVar15 = bVar4 < *pbVar10;
      if (bVar4 != *pbVar10) {
LAB_00e5a2d3: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00e5a2d8;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar11[1];
      bVar15 = bVar4 < pbVar10[1];
      if (bVar4 != pbVar10[1]) goto LAB_00e5a2d3;
      pbVar11 = pbVar11 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00e5a2d8: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"content",REFG(undefined4, 0x108cc50));
      this_00 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
      F_0042c880(((undefined1 *)(gen_frame + 0x4)));
      piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
      uVar6 = ((code *)*(gen_code32 *)(*piVar8 + 0x14))(piVar8);
      uVar12 = F_00e8c050(this_00);
      if ((int)uVar6 <= (int)uVar12) {
        iVar14 = 0;
        if (0 < (int)uVar6) {
          do {
            if ((int)uVar12 <= iVar14) break;
            iVar5 = *(int *)this;
            uVar16 = 0;
            uVar13 = F_00e9e450(this_00,iVar14,iVar14 >> 0x1f);
            uVar13 = ((code *)*(gen_code32 *)(iVar5 + 0x58))(this,iVar14,uVar13,uVar16);
            if ((char)uVar13 == '\0') goto LAB_00e5a38a;
            iVar14 = iVar14 + 1;
          } while (iVar14 < (int)uVar6);
        }
        F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
        return 1;
      }
    }
  }
LAB_00e5a38a: ;
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork::vf22 */
byte F_00e5a3a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe5a3a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined * pDVar4;
  ulonglong uVar5;
  
  if (param_1 == 0) {
    uVar1 = F_00e8c050(param_2);
    iVar3 = 0;
    pDVar4 = this + 4;
    do {
      if ((int)uVar1 <= iVar3) {
        return 1;
      }
      uVar2 = F_00e9e450(param_2,iVar3,iVar3 >> 0x1f);
      uVar2 = F_00e82f00(uVar2);
      uVar2 = F_0042a990(uVar2);
      uVar5 = F_00e50570(uVar2);
      *(short *)pDVar4 = (short)uVar5;
      iVar3 = iVar3 + 1;
      pDVar4 = pDVar4 + 2;
    } while (iVar3 < 0xa0);
  }
  else {
    if (param_1 != 1) {
      return 0;
    }
    uVar1 = F_00e8c050(param_2);
    iVar3 = 0;
    pDVar4 = this + 0x144;
    while (iVar3 < (int)uVar1) {
      uVar2 = F_00e9e450(param_2,iVar3,iVar3 >> 0x1f);
      uVar2 = F_00e82f00(uVar2);
      uVar2 = F_0042a990(uVar2);
      uVar5 = F_00e50570(uVar2);
      *(int *)pDVar4 = (int)uVar5;
      iVar3 = iVar3 + 1;
      pDVar4 = pDVar4 + 4;
      if (0x13 < iVar3) {
        return 1;
      }
    }
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork::vf17 */
byte F_00e5a470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe5a470u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  uint uVar1;
  char cVar2;
  int * piVar3;
  uint uVar4;
  char * pcVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"classid\":%llu",uVar4 & 0xffff,0);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  iVar6 = F_00c4b813((char *)(param_1 + 1),((char *)(gen_frame + 0x8)),(gen_size32)(pcVar5 + (-1 - (int)(((char *)(gen_frame + 0x8)) + 1))));
  if (iVar6 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return 0;
  }
  uVar4 = F_00c51da0((char *)(param_1 + 1),0x5b);
  uVar7 = F_00fb9a80(uVar4,0x5b,0x5d);
  iVar6 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = this + 4;
  do {
    uVar1 = uVar4 + 3;
    uVar4 = F_00c51da0(uVar1,0x22);
    if ((uVar7 < uVar1) || (uVar7 < uVar4)) {
      uVar4 = uVar7 - 1;
      break;
    }
    uVar8 = F_00e50570(uVar1);
    *(short *)(*(undefined * PTR32 *)(gen_frame + 0x4)) = (short)uVar8;
    iVar6 = iVar6 + 1;
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 *)(gen_frame + 0x4)) + 2;
  } while (iVar6 < 0xa0);
  uVar4 = uVar4 + 2;
  uVar7 = F_00fb9a80(uVar4,0x5b,0x5d);
  iVar6 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = this + 0x144;
  while( true ) {
    uVar1 = uVar4 + 3;
    uVar4 = F_00c51da0(uVar1,0x22);
    if ((uVar7 < uVar1) || (uVar7 < uVar4)) break;
    uVar8 = F_00e50570(uVar1);
    *(int *)(*(undefined * PTR32 *)(gen_frame + 0x4)) = (int)uVar8;
    iVar6 = iVar6 + 1;
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 *)(gen_frame + 0x4)) + 4;
    if (0x13 < iVar6) {
LAB_00e5a5ad: ;
      if (param_2 != (uint *)0x0) {
        uVar4 = F_00c51da0(uVar4 + 1,0x7d);
        *param_2 = uVar4;
      }
      F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
      return 1;
    }
  }
  uVar4 = uVar7 - 1;
  goto LAB_00e5a5ad;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork::vf10 */
uint F_00e5a5e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe5a5e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_00ea81c0(param_1);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classid",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"content",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
  F_00ea8220(pvVar3);
  F_00ea83e0(pvVar3,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this,pvVar3,0);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork::vf23 */
byte F_00e5a700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe5a700u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * pvVar1;
  undefined * pvVar2;
  undefined * pDVar3;
  int iVar4;
  undefined1 * puVar5;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  pvVar1 = (undefined *)F_00e9e450(param_1,0,0);
  F_00ea8220(pvVar1);
  F_00ea83e0(pvVar1,0xa0,0);
  iVar4 = 0;
  pDVar3 = this + 4;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)*(ushort *)pDVar3,0);
    puVar5 = ((undefined1 *)(gen_frame + 0x8));
    pvVar2 = (undefined *)F_00e9e450(pvVar1,iVar4,iVar4 >> 0x1f);
    F_00ea7fb0(pvVar2,puVar5);
    iVar4 = iVar4 + 1;
    pDVar3 = pDVar3 + 2;
  } while (iVar4 < 0xa0);
  pvVar1 = (undefined *)F_00e9e450(param_1,1,0);
  F_00ea8220(pvVar1);
  F_00ea83e0(pvVar1,0x14,0);
  iVar4 = 0;
  pDVar3 = this + 0x144;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)pDVar3,0);
    puVar5 = ((undefined1 *)(gen_frame + 0x8));
    pvVar2 = (undefined *)F_00e9e450(pvVar1,iVar4,iVar4 >> 0x1f);
    F_00ea7fb0(pvVar2,puVar5);
    iVar4 = iVar4 + 1;
    pDVar3 = pDVar3 + 4;
  } while (iVar4 < 0x14);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork::vf9 */
uint F_00e5a800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe5a800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,param_1,0);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork::vf11 */
byte F_00e5a820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe5a820u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  char * pcVar6;
  int * piVar7;
  char * pcVar8;
  byte * pbVar9;
  byte * pbVar10;
  undefined * this_00;
  uint uVar11;
  uint uVar12;
  undefined * this_01;
  uint uVar13;
  int iVar14;
  bool bVar15;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  if (*(int *)((int)param_1 + 8) != 5) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc) ^ (uint)(uint)(gen_frame + 0xbc));
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"classname",REFG(undefined4, 0x108cc50));
  uVar5 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
  uVar5 = F_00e82f00(uVar5);
  pcVar6 = (char *)F_0042a990(uVar5);
  pcVar1 = pcVar6 + 1;
  do {
    cVar3 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar3 != '\0');
  piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar8 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 8))(piVar7)));
  pcVar2 = pcVar8 + 1;
  do {
    cVar3 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x64)));
  if ((int)pcVar6 - (int)pcVar1 == (int)pcVar8 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"classname",REFG(undefined4, 0x108cc50));
    piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    pbVar9 = ((byte *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 8))(piVar7)));
    uVar5 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
    uVar5 = F_00e82f00(uVar5);
    pbVar10 = (byte *)F_0042a990(uVar5);
    do {
      bVar4 = *pbVar10;
      bVar15 = bVar4 < *pbVar9;
      if (bVar4 != *pbVar9) {
LAB_00e5a933: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00e5a938;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar10[1];
      bVar15 = bVar4 < pbVar9[1];
      if (bVar4 != pbVar9[1]) goto LAB_00e5a933;
      pbVar10 = pbVar10 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00e5a938: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x64)));
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"contentdetail",REFG(undefined4, 0x108cc50));
      this_00 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
      F_0042c880(((undefined1 *)(gen_frame + 0x64)));
      if (*(int *)((int)this_00 + 8) == 6) {
        uVar5 = F_00e8c050(this_00);
        piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
        uVar11 = ((code *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7);
        (*(byte *)(gen_frame + 0xf)) = 1;
        (*(int *)(gen_frame + 0x8)) = 0;
        if (0 < (int)uVar11) {
          do {
            piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
            uVar12 = ((code *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7,(*(int *)(gen_frame + 0x8)));
            iVar14 = 0;
            if (0 < (int)uVar5) {
              do {
                this_01 = (undefined *)F_00e9e450(this_00,iVar14,iVar14 >> 0x1f);
                if (*(int *)((int)this_01 + 8) == 5) {
                  F_0042cc20(((undefined1 *)(gen_frame + 0x10)),"memberid",REFG(undefined4, 0x108cc50));
                  uVar13 = F_00ea8380(this_01,((undefined1 *)(gen_frame + 0x10)));
                  F_0042c880(((undefined1 *)(gen_frame + 0x10)));
                  if ((*(int *)(uVar13 + 8) == 1) &&
                     (uVar13 = F_00e82b90(uVar13), uVar13 == uVar12)) {
                    uVar12 = ((code *)*(gen_code32 *)(*(int *)this + 0x60))(this,(*(int *)(gen_frame + 0x8)),this_01);
                    (*(byte *)(gen_frame + 0xf)) = (byte)uVar12;
                    if ((*(byte *)(gen_frame + 0xf)) == 0) goto LAB_00e5aaa7;
                    break;
                  }
                }
                iVar14 = iVar14 + 1;
              } while (iVar14 < (int)uVar5);
            }
            (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
          } while ((*(int *)(gen_frame + 0x8)) < (int)uVar11);
        }
        F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
        return (*(byte *)(gen_frame + 0xf));
      }
    }
  }
LAB_00e5aaa7: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork::vf24 */
byte F_00e5aac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe5aac0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  undefined * pDVar3;
  int iVar4;
  ulonglong uVar5;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  this_00 = (undefined *)F_00ea8380(param_2,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  if (param_1 == 0) {
    uVar1 = F_00e8c050(this_00);
    iVar4 = 0;
    pDVar3 = this + 4;
    do {
      if ((int)uVar1 <= iVar4) break;
      uVar2 = F_00e9e450(this_00,iVar4,iVar4 >> 0x1f);
      uVar2 = F_00e82f00(uVar2);
      uVar2 = F_0042a990(uVar2);
      uVar5 = F_00e505e0(uVar2);
      *(short *)pDVar3 = (short)uVar5;
      iVar4 = iVar4 + 1;
      pDVar3 = pDVar3 + 2;
    } while (iVar4 < 0xa0);
  }
  else {
    if (param_1 != 1) {
      F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
      return 0;
    }
    uVar1 = F_00e8c050(this_00);
    iVar4 = 0;
    pDVar3 = this + 0x144;
    do {
      if ((int)uVar1 <= iVar4) break;
      uVar2 = F_00e9e450(this_00,iVar4,iVar4 >> 0x1f);
      uVar2 = F_00e82f00(uVar2);
      uVar2 = F_0042a990(uVar2);
      uVar5 = F_00e505e0(uVar2);
      *(int *)pDVar3 = (int)uVar5;
      iVar4 = iVar4 + 1;
      pDVar3 = pDVar3 + 4;
    } while (iVar4 < 0x14);
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork::vf18 */
byte F_00e5abd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe5abd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  undefined * pDVar6;
  int iVar7;
  ulonglong uVar8;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"classid\":%llu",uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813((char *)(param_1 + 1),((char *)(gen_frame + 0x8)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x8)) + 1))));
  if (iVar5 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return 0;
  }
  uVar3 = F_00c51da0((char *)(param_1 + 1),0x5b);
  iVar5 = uVar3 - 1;
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b0f0));
    iVar5 = uVar3 + 10;
    pDVar6 = this + 4;
    (*(int *)(gen_frame + 0x4)) = 0xa0;
    do {
      uVar8 = F_00e50570(iVar5);
      *(short *)pDVar6 = (short)uVar8;
      uVar3 = F_00c51da0(iVar5,0x2c);
      pDVar6 = pDVar6 + 2;
      (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + -1;
      iVar5 = uVar3 + 2;
    } while ((*(int *)(gen_frame + 0x4)) != 0);
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
  uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
  if (uVar3 != 0) {
    uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b0f0));
    iVar5 = uVar3 + 10;
    pDVar6 = this + 0x144;
    iVar7 = 0x14;
    do {
      uVar8 = F_00e50570(iVar5);
      *(int *)pDVar6 = (int)uVar8;
      uVar3 = F_00c51da0(iVar5,0x2c);
      pDVar6 = pDVar6 + 4;
      iVar7 = iVar7 + -1;
      iVar5 = uVar3 + 2;
    } while (iVar7 != 0);
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar5;
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork::vf13 */
uint F_00e5ad60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe5ad60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_00ea81c0(param_1);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classid",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"contentdetail",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
  F_00ea8220(pvVar3);
  F_00ea83e0(pvVar3,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 100))(this,pvVar3);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork::vf25 */
byte F_00e5ae80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe5ae80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  undefined * pvVar1;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined * pDVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 * puVar11;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  pvVar1 = (undefined *)F_00e9e450(param_1,0,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar2,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,"UInt16");
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea8220(pvVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  uVar10 = 0;
  uVar9 = 0xa0;
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea83e0(pvVar2,uVar9,uVar10);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this + 4;
  iVar6 = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),(uint)*(ushort *)(*(undefined * PTR32 *)(gen_frame + 0x0)),0);
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
    puVar11 = ((undefined1 *)(gen_frame + 0x58));
    iVar5 = iVar6 >> 0x1f;
    iVar8 = iVar6;
    pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
    pvVar2 = (undefined *)F_00e9e450(pvVar2,iVar8,iVar5);
    F_00ea7fb0(pvVar2,puVar11);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 *)(gen_frame + 0x0)) + 2;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0xa0);
  pvVar1 = (undefined *)F_00e9e450(param_1,1,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar2,1);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,1);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,1);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,"UInt32");
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea8220(pvVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  uVar10 = 0;
  uVar9 = 0x14;
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea83e0(pvVar2,uVar9,uVar10);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  iVar6 = 0;
  pDVar7 = this + 0x144;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),*(undefined4 *)pDVar7,0);
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
    puVar11 = ((undefined1 *)(gen_frame + 0x58));
    iVar5 = iVar6 >> 0x1f;
    iVar8 = iVar6;
    pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
    pvVar2 = (undefined *)F_00e9e450(pvVar2,iVar8,iVar5);
    F_00ea7fb0(pvVar2,puVar11);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    iVar6 = iVar6 + 1;
    pDVar7 = pDVar7 + 4;
  } while (iVar6 < 0x14);
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork::vf14 */
byte F_00e5b250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe5b250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined * this_00;
  uint uVar6;
  char * pcVar7;
  int * piVar8;
  char * pcVar9;
  byte * pbVar10;
  byte * pbVar11;
  undefined * this_01;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)),"memberid",REFG(undefined4, 0x108cc50));
  this_00 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x10)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10)));
  if ((*(int *)((int)this_00 + 8) == 6) && (*(int *)((int)param_1 + 8) == 5)) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"classname",REFG(undefined4, 0x108cc50));
    uVar6 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
    uVar6 = F_00e82f00(uVar6);
    pcVar7 = (char *)F_0042a990(uVar6);
    pcVar1 = pcVar7 + 1;
    do {
      cVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar3 != '\0');
    piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    pcVar9 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 8))(piVar8)));
    pcVar2 = pcVar9 + 1;
    do {
      cVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
    F_0042c880(((undefined1 *)(gen_frame + 0x64)));
    if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"classname",REFG(undefined4, 0x108cc50));
      piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
      pbVar10 = ((byte *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 8))(piVar8)));
      uVar6 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
      uVar6 = F_00e82f00(uVar6);
      pbVar11 = (byte *)F_0042a990(uVar6);
      do {
        bVar4 = *pbVar11;
        bVar16 = bVar4 < *pbVar10;
        if (bVar4 != *pbVar10) {
LAB_00e5b3a2: ;
          iVar15 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_00e5b3a7;
        }
        if (bVar4 == 0) break;
        bVar4 = pbVar11[1];
        bVar16 = bVar4 < pbVar10[1];
        if (bVar4 != pbVar10[1]) goto LAB_00e5b3a2;
        pbVar11 = pbVar11 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar4 != 0);
      iVar15 = 0;
LAB_00e5b3a7: ;
      F_0042c880(((undefined1 *)(gen_frame + 0x64)));
      if (iVar15 == 0) {
        F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"content",REFG(undefined4, 0x108cc50));
        this_01 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
        F_0042c880(((undefined1 *)(gen_frame + 0x64)));
        piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
        uVar6 = ((code *)*(gen_code32 *)(*piVar8 + 0x14))(piVar8);
        uVar12 = F_00e8c050(this_01);
        uVar13 = F_00e8c050(this_00);
        if (uVar12 == uVar13) {
          (*(int *)(gen_frame + 0x8)) = 0;
          if (0 < (int)uVar6) {
            do {
              piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
              uVar13 = ((code *)*(gen_code32 *)(*piVar8 + 0xc))(piVar8,(*(int *)(gen_frame + 0x8)));
              iVar15 = 0;
              if (0 < (int)uVar12) {
                do {
                  uVar14 = F_00e9e450(this_00,iVar15,iVar15 >> 0x1f);
                  uVar14 = F_00e82f00(uVar14);
                  uVar14 = F_0042a990(uVar14);
                  uVar17 = F_00e505e0(uVar14);
                  if (((uint)uVar17 == uVar13) && ((int)(uVar17 >> 0x20) == 0)) {
                    iVar5 = *(int *)this;
                    uVar18 = 1;
                    uVar13 = F_00e9e450(this_01,iVar15,iVar15 >> 0x1f);
                    uVar13 = ((code *)*(gen_code32 *)(iVar5 + 0x58))(this,(*(int *)(gen_frame + 0x8)),uVar13,uVar18);
                    if ((char)uVar13 == '\0') goto LAB_00e5b2ae;
                    break;
                  }
                  iVar15 = iVar15 + 1;
                } while (iVar15 < (int)uVar12);
              }
              (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
            } while ((*(int *)(gen_frame + 0x8)) < (int)uVar6);
          }
          F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
          return 1;
        }
      }
    }
  }
LAB_00e5b2ae: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork::vf16 */
byte F_00e5b500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe5b500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined * this_00;
  int iVar5;
  undefined1 * puVar6;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  F_00ea81c0(param_1);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classid",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"content",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
  F_00ea8220(pvVar3);
  F_00ea83e0(pvVar3,uVar2,(int)uVar2 >> 0x1f);
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this,pvVar3,1);
  if ((char)uVar4 == '\0') {
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberid",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00ea8220(pvVar3);
  F_00ea83e0(pvVar3,uVar2,(int)uVar2 >> 0x1f);
  iVar5 = 0;
  if (0 < (int)uVar2) {
    do {
      piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
      uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,iVar5);
      F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
      puVar6 = ((undefined1 *)(gen_frame + 0x58));
      this_00 = (undefined *)F_00e9e450(pvVar3,iVar5,iVar5 >> 0x1f);
      F_00ea7fb0(this_00,puVar6);
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar2);
  }
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::CharaMake_TypeInfo::vf1 */
uint F_00e5b770(void)
{
  GEN_ENTER(0xe5b770u, 0u, 0u, 0u, 0u);
  return 0x76;
}

/* ref: Application::Network::WorkDefinitions::CharaMake_TypeInfo::vf2 */
uint F_00e5b780(void)
{
  GEN_ENTER(0xe5b780u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x135ae34);
}

/* ref: Application::Network::WorkDefinitions::CharaMake_TypeInfo::vf3 */
uint F_00e5b790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe5b790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x1158478) + param_1 * 4);
}

/* ref: FUN_00e5b7b0 */
uint F_00e5b7b0(unsigned int gen_a0)
{
  GEN_ENTER(0xe5b7b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(&REFG(undefined, 0x1158494) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::CharaMake_TypeInfo::vf4 */
uint F_00e5b7d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe5b7d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,uVar2);
    if (uVar1 == param_1) {
      return uVar2;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 7);
  return 0xffffffff;
}

/* ref: FUN_00e5b810 */
uint F_00e5b810(unsigned int gen_a0)
{
  GEN_ENTER(0xe5b810u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 - 0x40f;
}

/* ref: Application::Network::WorkDefinitions::CharaMake_TypeInfo::vf6 */
uint F_00e5b820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe5b820u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (uint)(&REFG(undefined * PTR32, 0x135ae18))[param_1];
}

/* ref: Application::Network::WorkDefinitions::CharaMake_TypeInfo::vf7 */
uint F_00e5b840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe5b840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x1158424) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::CharaMake_TypeInfo::vf8 */
uint F_00e5b860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe5b860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x115845c) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::CharaMake_TypeInfo::vf9 */
uint F_00e5b880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe5b880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x15e37e8) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::CharaMake_TypeInfo::vf10 */
uint F_00e5b8a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe5b8a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(&REFG(undefined, 0x1158440) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::CharaMake_TypeInfo::vf14 */
uint F_00e5b8c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe5b8c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(&REFG(undefined, 0x115845c) + param_1 * 4) != 0x12) {
    if (*(int *)(&REFG(undefined, 0x115845c) + param_1 * 4) == 0x14) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(&REFG(undefined, 0x15e37e8) + param_1 * 4) + 0x2c))))
                        (*(int * PTR32 *)(&REFG(undefined, 0x15e37e8) + param_1 * 4));
      return uVar2 + 4;
    }
    return *(int *)(&REFG(undefined, 0x1158440) + param_1 * 4) + 4;
  }
  piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e37e8) + param_1 * 4);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
    return uVar2 * *(int *)(&REFG(undefined, 0x1158424) + param_1 * 4) + 7;
  }
  return *(int *)(&REFG(undefined, 0x1158440) + param_1 * 4) * *(int *)(&REFG(undefined, 0x1158424) + param_1 * 4) + 7;
}

/* ref: Application::Network::WorkDefinitions::CharaMake_TypeInfo::vf13 */
uint F_00e5b940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe5b940u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 7;
  if ((char)param_2 == '\0') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e37e8) + param_1 * 4);
    if (piVar1 == (int *)0x0) {
      return *(int *)(&REFG(undefined, 0x1158440) + param_1 * 4) * *(int *)(&REFG(undefined, 0x1158424) + param_1 * 4) + 7;
    }
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
    uVar2 = uVar2 * *(int *)(&REFG(undefined, 0x1158424) + param_1 * 4) + 7;
  }
  else if ((char)param_2 == '\x01') {
    piVar1 = *(int * PTR32 *)(&REFG(undefined, 0x15e37e8) + param_1 * 4);
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
      return uVar2 + 7;
    }
    return *(int *)(&REFG(undefined, 0x1158440) + param_1 * 4) + 7;
  }
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::CharaMake_TypeInfo::vf12 */
uint F_00e5b9c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xe5b9c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = (((param_4 - param_3) + 1U & 0xffff) >> 5) + 1;
  uVar6 = 0;
  iVar1 = uVar4 * 4 + 9;
  uVar5 = 0;
  if (uVar4 != 0) {
    do {
      uVar2 = *(uint *)(param_5 + uVar5 * 4);
      if ((uVar2 & 1) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 2) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 4) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 8) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x10) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x20) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((uVar2 & 0x40) != 0) {
        uVar6 = uVar6 + 1;
      }
      if ((char)uVar2 < '\0') {
        uVar6 = uVar6 + 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  piVar3 = *(int * PTR32 *)(&REFG(undefined, 0x15e37e8) + param_1 * 4);
  if (piVar3 == (int *)0x0) {
    return (uVar6 & 0xffff) * *(int *)(&REFG(undefined, 0x1158440) + param_1 * 4) + iVar1;
  }
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x2c))(piVar3);
  return uVar4 * (uVar6 & 0xffff) + iVar1;
}

/* ref: Application::Network::WorkDefinitions::CharaMake_TypeInfo::vf11 */
uint F_00e5ba50(unsigned int gen_a0)
{
  GEN_ENTER(0xe5ba50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,0);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,1);
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,2);
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,3);
  uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,4);
  uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,5);
  uVar7 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,6);
  return uVar7 + uVar1 + uVar2 + uVar3 + uVar4 + uVar5 + uVar6;
}

/* ref: Application::Network::WorkDefinitions::CharaMake_TypeInfo::vf15 */
uint F_00e5bab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe5bab0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,0,param_2);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,1,uVar1 + param_2);
  iVar3 = uVar1 + param_2 + uVar2;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,2,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,3,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,4,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,5,iVar3);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,param_1,6,iVar3);
  return uVar1 + (iVar3 - param_2);
}

/* ref: Application::Network::WorkDefinitions::CharaMake_TypeInfo::vf19 */
uint F_00e5bb40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe5bb40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,0,param_1,param_2);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,1,uVar1 + param_1,param_2);
  iVar3 = uVar1 + param_1 + uVar2;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,2,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,3,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,4,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,5,iVar3,param_2);
  iVar3 = iVar3 + uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,6,iVar3,param_2);
  return uVar1 + (iVar3 - param_1);
}

/* ref: FUN_00e5bbd0 */
uint F_00e5bbd0(unsigned int gen_a0)
{
  GEN_ENTER(0xe5bbd0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[27])REFP(0x1158994));
  *(undefined4 *)((int)in_ecx + 0x1e) = 0;
  *(undefined2 *)((int)in_ecx + 0x22) = 0;
  *(undefined8 *)(in_ecx + 1) = 0;
  *(undefined8 *)(in_ecx + 3) = 0;
  *(undefined8 *)(in_ecx + 5) = 0;
  *(undefined2 *)(in_ecx + 7) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00e5bc00 */
unsigned int F_00e5bc00(unsigned int gen_a0)
{
  GEN_ENTER(0xe5bc00u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf2 */
uint F_00e5bc10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe5bc10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x135ae50) + 0x10))))(&REFG(undefined * PTR32, 0x135ae50),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: FUN_00e5bc40 */
uint F_00e5bc40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe5bc40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x135ae50) + 0x10))))(&REFG(undefined * PTR32, 0x135ae50),param_1);
  return ((int)uVar1 < 0) - 1 & (uint)this;
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf4 */
uint F_00e5bc70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe5bc70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    return in_ecx + 4;
  case 1: ;
    return in_ecx + 0x1e;
  case 2: ;
    return in_ecx + 0x1f;
  case 3: ;
    return in_ecx + 0x20;
  case 4: ;
    return in_ecx + 0x21;
  case 5: ;
    return in_ecx + 0x22;
  case 6: ;
    return in_ecx + 0x23;
  default: ;
    return 0;
  }
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf3 */
uint F_00e5bce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe5bce0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  if ((param_2 < *(uint *)(&REFG(undefined, 0x1158424) + param_1 * 4)) && (param_1 == 0)) {
    return (uint)(this + param_2 + 4);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf6 */
uint F_00e5bd10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe5bd10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  undefined * pCVar5;
  int iVar6;
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  if ((short)uVar3 == (short)uVar4) {
    pCVar5 = this + 4;
    iVar6 = 0x1a;
    do {
      *pCVar5 = pCVar5[(int)param_1 - (int)this];
      pCVar5 = pCVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    this[0x1e] = *(undefined *)((int)param_1 + 0x1e);
    this[0x1f] = *(undefined *)((int)param_1 + 0x1f);
    this[0x20] = *(undefined *)(param_1 + 8);
    uVar4 = (uint)(byte)*(undefined *)((int)param_1 + 0x21);
    this[0x21] = *(undefined *)((int)param_1 + 0x21);
    this[0x22] = *(undefined *)((int)param_1 + 0x22);
    this[0x23] = *(undefined *)((int)param_1 + 0x23);
  }
  return uVar4;
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf5 */
byte F_00e5bda0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe5bda0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined1 CVar1;
  byte bVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  undefined * pCVar7;
  int iVar8;
  
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
  uVar6 = ((code *)*(gen_code32 *)(*piVar4 + 4))(piVar4);
  if ((short)uVar5 == (short)uVar6) {
    bVar2 = (byte)param_2;
    uVar6 = param_2;
    switch((unsigned int)(uintptr_t)(param_2)) {
    case 0: ;
      pCVar7 = this + 4;
      iVar8 = 0x1a;
      do {
        *pCVar7 = pCVar7[(int)param_1 - (int)this];
        pCVar7 = pCVar7 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      return (byte)pCVar7;
    case 1: ;
      CVar1 = *(undefined *)((int)param_1 + 0x1e);
      this[0x1e] = CVar1;
      return (byte)CVar1;
    case 2: ;
      this[0x1f] = *(undefined *)((int)param_1 + 0x1f);
      return bVar2;
    case 3: ;
      this[0x20] = *(undefined *)(param_1 + 8);
      return bVar2;
    case 4: ;
      CVar1 = *(undefined *)((int)param_1 + 0x21);
      this[0x21] = CVar1;
      return (byte)CVar1;
    case 5: ;
      this[0x22] = *(undefined *)((int)param_1 + 0x22);
      return bVar2;
    case 6: ;
      this[0x23] = *(undefined *)((int)param_1 + 0x23);
    }
  }
  return (byte)uVar6;
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf8 */
byte F_00e5be70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe5be70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  char * pcVar7;
  int * piVar8;
  char * pcVar9;
  byte * pbVar10;
  byte * pbVar11;
  undefined * this_00;
  uint uVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  undefined4 uVar16;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  if (*(int *)((int)param_1 + 8) != 5) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c) ^ (uint)(uint)(gen_frame + 0x5c));
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
  uVar6 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  uVar6 = F_00e82f00(uVar6);
  pcVar7 = (char *)F_0042a990(uVar6);
  pcVar1 = pcVar7 + 1;
  do {
    cVar3 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar3 != '\0');
  piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar9 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 8))(piVar8)));
  pcVar2 = pcVar9 + 1;
  do {
    cVar3 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
    piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    pbVar10 = ((byte *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 8))(piVar8)));
    uVar6 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
    uVar6 = F_00e82f00(uVar6);
    pbVar11 = (byte *)F_0042a990(uVar6);
    do {
      bVar4 = *pbVar11;
      bVar15 = bVar4 < *pbVar10;
      if (bVar4 != *pbVar10) {
LAB_00e5bf73: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00e5bf78;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar11[1];
      bVar15 = bVar4 < pbVar10[1];
      if (bVar4 != pbVar10[1]) goto LAB_00e5bf73;
      pbVar11 = pbVar11 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00e5bf78: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"content",REFG(undefined4, 0x108cc50));
      this_00 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
      F_0042c880(((undefined1 *)(gen_frame + 0x4)));
      piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
      uVar6 = ((code *)*(gen_code32 *)(*piVar8 + 0x14))(piVar8);
      uVar12 = F_00e8c050(this_00);
      if ((int)uVar6 <= (int)uVar12) {
        iVar14 = 0;
        if (0 < (int)uVar6) {
          do {
            if ((int)uVar12 <= iVar14) break;
            iVar5 = *(int *)this;
            uVar16 = 0;
            uVar13 = F_00e9e450(this_00,iVar14,iVar14 >> 0x1f);
            uVar13 = ((code *)*(gen_code32 *)(iVar5 + 0x58))(this,iVar14,uVar13,uVar16);
            if ((char)uVar13 == '\0') goto LAB_00e5c02a;
            iVar14 = iVar14 + 1;
          } while (iVar14 < (int)uVar6);
        }
        F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
        return 1;
      }
    }
  }
LAB_00e5c02a: ;
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf22 */
byte F_00e5c040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe5c040u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined * this_00;
  int iVar4;
  ulonglong uVar5;
  undefined * puVar6;
  
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar3 = F_00e8c050(param_2);
    iVar4 = 0;
    while (iVar4 < (int)uVar3) {
      uVar2 = F_00e9e450(param_2,iVar4,iVar4 >> 0x1f);
      uVar2 = F_00e82f00(uVar2);
      uVar2 = F_0042a990(uVar2);
      uVar5 = F_00e50570(uVar2);
      this[iVar4 + 4] = SUB81(uVar5,0);
      iVar4 = iVar4 + 1;
      if (0x19 < iVar4) {
        return 1;
      }
    }
    break;
  case 1: ;
    uVar3 = F_00e82f00(param_2);
    uVar3 = F_0042a990(uVar3);
    uVar5 = F_00e50570(uVar3);
    this[0x1e] = SUB81(uVar5,0);
    return 1;
  case 2: ;
    uVar3 = F_00e82f00(param_2);
    uVar3 = F_0042a990(uVar3);
    uVar5 = F_00e50570(uVar3);
    this[0x1f] = SUB81(uVar5,0);
    return 1;
  case 3: ;
    uVar3 = F_00e82f00(param_2);
    uVar3 = F_0042a990(uVar3);
    uVar5 = F_00e50570(uVar3);
    this[0x20] = SUB81(uVar5,0);
    return 1;
  case 4: ;
    uVar3 = F_00e82f00(param_2);
    uVar3 = F_0042a990(uVar3);
    uVar5 = F_00e50570(uVar3);
    this[0x21] = SUB81(uVar5,0);
    return 1;
  case 5: ;
    uVar3 = F_00e82f00(param_2);
    uVar3 = F_0042a990(uVar3);
    uVar5 = F_00e50570(uVar3);
    this[0x22] = SUB81(uVar5,0);
    return 1;
  case 6: ;
    puVar6 = &REFG(undefined, 0x1158a00);
    this_00 = (undefined *)F_00e82f00(param_2);
    bVar1 = F_0042b740(this_00,puVar6);
    this[0x23] = (undefined1)(bVar1 != 0);
    break;
  default: ;
    return 0;
  }
  return 1;
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf17 */
byte F_00e5c1b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe5c1b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"classid\":%llu",uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813((char *)(param_1 + 1),((char *)(gen_frame + 0x8)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x8)) + 1))));
  if (iVar5 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return 0;
  }
  uVar3 = F_00c51da0((char *)(param_1 + 1),0x5b);
  uVar6 = F_00fb9a80(uVar3,0x5b,0x5d);
  iVar5 = 0;
  while( true ) {
    uVar7 = uVar3 + 3;
    uVar3 = F_00c51da0(uVar7,0x22);
    if ((uVar6 < uVar7) || (uVar6 < uVar3)) break;
    uVar8 = F_00e50570(uVar7);
    this[iVar5 + 4] = SUB81(uVar8,0);
    iVar5 = iVar5 + 1;
    if (0x19 < iVar5) {
LAB_00e5c287: ;
      uVar6 = F_00c51da0(uVar3 + 4,0x22);
      uVar8 = F_00e50570(uVar3 + 4);
      this[0x1e] = SUB81(uVar8,0);
      uVar3 = F_00c51da0(uVar6 + 3,0x22);
      uVar8 = F_00e50570(uVar6 + 3);
      this[0x1f] = SUB81(uVar8,0);
      uVar6 = F_00c51da0(uVar3 + 3,0x22);
      uVar8 = F_00e50570(uVar3 + 3);
      this[0x20] = SUB81(uVar8,0);
      uVar3 = F_00c51da0(uVar6 + 3,0x22);
      uVar8 = F_00e50570(uVar6 + 3);
      this[0x21] = SUB81(uVar8,0);
      uVar6 = F_00c51da0(uVar3 + 3,0x22);
      uVar8 = F_00e50570(uVar3 + 3);
      this[0x22] = SUB81(uVar8,0);
      uVar3 = F_00c51da0((char *)(uVar6 + 3),0x22);
      this[0x23] = (undefined1)(*(char *)(uVar6 + 3) != '0');
      if (param_2 != (uint *)0x0) {
        uVar3 = F_00c51da0(uVar3,0x7d);
        *param_2 = uVar3;
      }
      F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
      return 1;
    }
  }
  uVar3 = uVar6 - 1;
  goto LAB_00e5c287;
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf10 */
uint F_00e5c340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe5c340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_00ea81c0(param_1);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classid",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"content",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
  F_00ea8220(pvVar3);
  F_00ea83e0(pvVar3,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this,pvVar3,0);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf23 */
byte F_00e5c460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe5c460u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * pvVar1;
  undefined * this_00;
  int iVar2;
  undefined1 * puVar3;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  pvVar1 = (undefined *)F_00e9e450(param_1,0,0);
  F_00ea8220(pvVar1);
  F_00ea83e0(pvVar1,0x1a,0);
  iVar2 = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[iVar2 + 4],0);
    puVar3 = ((undefined1 *)(gen_frame + 0x8));
    this_00 = (undefined *)F_00e9e450(pvVar1,iVar2,iVar2 >> 0x1f);
    F_00ea7fb0(this_00,puVar3);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x1a);
  pvVar1 = (undefined *)F_00e9e450(param_1,1,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x1e],0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,2,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x1f],0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,3,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x20],0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,4,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x21],0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,5,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x22],0);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  pvVar1 = (undefined *)F_00e9e450(param_1,6,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),(uint)(byte)this[0x23]);
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf9 */
uint F_00e5c620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe5c620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,param_1,0);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf11 */
byte F_00e5c640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe5c640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  char * pcVar6;
  int * piVar7;
  char * pcVar8;
  byte * pbVar9;
  byte * pbVar10;
  undefined * this_00;
  uint uVar11;
  uint uVar12;
  undefined * this_01;
  uint uVar13;
  int iVar14;
  bool bVar15;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  if (*(int *)((int)param_1 + 8) != 5) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc) ^ (uint)(uint)(gen_frame + 0xbc));
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"classname",REFG(undefined4, 0x108cc50));
  uVar5 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
  uVar5 = F_00e82f00(uVar5);
  pcVar6 = (char *)F_0042a990(uVar5);
  pcVar1 = pcVar6 + 1;
  do {
    cVar3 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar3 != '\0');
  piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar8 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 8))(piVar7)));
  pcVar2 = pcVar8 + 1;
  do {
    cVar3 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar3 != '\0');
  F_0042c880(((undefined1 *)(gen_frame + 0x64)));
  if ((int)pcVar6 - (int)pcVar1 == (int)pcVar8 - (int)pcVar2) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"classname",REFG(undefined4, 0x108cc50));
    piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    pbVar9 = ((byte *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 8))(piVar7)));
    uVar5 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
    uVar5 = F_00e82f00(uVar5);
    pbVar10 = (byte *)F_0042a990(uVar5);
    do {
      bVar4 = *pbVar10;
      bVar15 = bVar4 < *pbVar9;
      if (bVar4 != *pbVar9) {
LAB_00e5c753: ;
        iVar14 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00e5c758;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar10[1];
      bVar15 = bVar4 < pbVar9[1];
      if (bVar4 != pbVar9[1]) goto LAB_00e5c753;
      pbVar10 = pbVar10 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar4 != 0);
    iVar14 = 0;
LAB_00e5c758: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x64)));
    if (iVar14 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"contentdetail",REFG(undefined4, 0x108cc50));
      this_00 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
      F_0042c880(((undefined1 *)(gen_frame + 0x64)));
      if (*(int *)((int)this_00 + 8) == 6) {
        uVar5 = F_00e8c050(this_00);
        piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
        uVar11 = ((code *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7);
        (*(byte *)(gen_frame + 0xf)) = 1;
        (*(int *)(gen_frame + 0x8)) = 0;
        if (0 < (int)uVar11) {
          do {
            piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
            uVar12 = ((code *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7,(*(int *)(gen_frame + 0x8)));
            iVar14 = 0;
            if (0 < (int)uVar5) {
              do {
                this_01 = (undefined *)F_00e9e450(this_00,iVar14,iVar14 >> 0x1f);
                if (*(int *)((int)this_01 + 8) == 5) {
                  F_0042cc20(((undefined1 *)(gen_frame + 0x10)),"memberid",REFG(undefined4, 0x108cc50));
                  uVar13 = F_00ea8380(this_01,((undefined1 *)(gen_frame + 0x10)));
                  F_0042c880(((undefined1 *)(gen_frame + 0x10)));
                  if ((*(int *)(uVar13 + 8) == 1) &&
                     (uVar13 = F_00e82b90(uVar13), uVar13 == uVar12)) {
                    uVar12 = ((code *)*(gen_code32 *)(*(int *)this + 0x60))(this,(*(int *)(gen_frame + 0x8)),this_01);
                    (*(byte *)(gen_frame + 0xf)) = (byte)uVar12;
                    if ((*(byte *)(gen_frame + 0xf)) == 0) goto LAB_00e5c8c7;
                    break;
                  }
                }
                iVar14 = iVar14 + 1;
              } while (iVar14 < (int)uVar5);
            }
            (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
          } while ((*(int *)(gen_frame + 0x8)) < (int)uVar11);
        }
        F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
        return (*(byte *)(gen_frame + 0xf));
      }
    }
  }
LAB_00e5c8c7: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf24 */
byte F_00e5c8e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe5c8e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  undefined * pvVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined * puVar7;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(param_2,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar4 = F_00e8c050(pvVar2);
    iVar5 = 0;
    while (iVar5 < (int)uVar4) {
      uVar3 = F_00e9e450(pvVar2,iVar5,iVar5 >> 0x1f);
      uVar3 = F_00e82f00(uVar3);
      uVar3 = F_0042a990(uVar3);
      uVar6 = F_00e505e0(uVar3);
      this[iVar5 + 4] = SUB81(uVar6,0);
      iVar5 = iVar5 + 1;
      if (0x19 < iVar5) {
        F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
        return 1;
      }
    }
    break;
  case 1: ;
    uVar4 = F_00e82f00(pvVar2);
    uVar4 = F_0042a990(uVar4);
    uVar6 = F_00e50570(uVar4);
    this[0x1e] = SUB81(uVar6,0);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 2: ;
    uVar4 = F_00e82f00(pvVar2);
    uVar4 = F_0042a990(uVar4);
    uVar6 = F_00e50570(uVar4);
    this[0x1f] = SUB81(uVar6,0);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 3: ;
    uVar4 = F_00e82f00(pvVar2);
    uVar4 = F_0042a990(uVar4);
    uVar6 = F_00e50570(uVar4);
    this[0x20] = SUB81(uVar6,0);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 4: ;
    uVar4 = F_00e82f00(pvVar2);
    uVar4 = F_0042a990(uVar4);
    uVar6 = F_00e50570(uVar4);
    this[0x21] = SUB81(uVar6,0);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 5: ;
    uVar4 = F_00e82f00(pvVar2);
    uVar4 = F_0042a990(uVar4);
    uVar6 = F_00e50570(uVar4);
    this[0x22] = SUB81(uVar6,0);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  case 6: ;
    puVar7 = &REFG(undefined, 0x1158a00);
    pvVar2 = (undefined *)F_00e82f00(pvVar2);
    bVar1 = F_0042b6a0(pvVar2,puVar7);
    this[0x23] = (undefined1)(bVar1 == 0);
    break;
  default: ;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 0;
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf18 */
byte F_00e5cae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe5cae0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"classid\":%llu",uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813((char *)(param_1 + 1),((char *)(gen_frame + 0x8)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x8)) + 1))));
  if (iVar5 == 0) {
    uVar3 = F_00c51da0((char *)(param_1 + 1),0x5b);
    iVar5 = uVar3 - 1;
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b144));
      iVar5 = uVar3 + 10;
      iVar6 = 0;
      do {
        uVar7 = F_00e50570(iVar5);
        this[iVar6 + 4] = SUB81(uVar7,0);
        uVar3 = F_00c51da0(iVar5,0x2c);
        iVar6 = iVar6 + 1;
        iVar5 = uVar3 + 2;
      } while (iVar6 < 0x1a);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,1);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b140));
      iVar5 = uVar3 + 9;
      uVar7 = F_00e50570(iVar5);
      this[0x1e] = SUB81(uVar7,0);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,2);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b140));
      iVar5 = uVar3 + 9;
      uVar7 = F_00e50570(iVar5);
      this[0x1f] = SUB81(uVar7,0);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,3);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b140));
      iVar5 = uVar3 + 9;
      uVar7 = F_00e50570(iVar5);
      this[0x20] = SUB81(uVar7,0);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,4);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b140));
      iVar5 = uVar3 + 9;
      uVar7 = F_00e50570(iVar5);
      this[0x21] = SUB81(uVar7,0);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,5);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b140));
      iVar5 = uVar3 + 9;
      uVar7 = F_00e50570(iVar5);
      this[0x22] = SUB81(uVar7,0);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,6);
    F_00c472af(((char *)(gen_frame + 0x8)),0x40,"\"memberid\":%d",uVar3);
    uVar3 = F_00fb9ad0(iVar5,((char *)(gen_frame + 0x8)));
    if (uVar3 != 0) {
      uVar3 = F_00fb9ad0(uVar3,REFG(undefined * PTR32, 0x135b140));
      iVar5 = uVar3 + 9;
      this[0x23] = (undefined1)(*(char *)(uVar3 + 9) != '0');
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar5;
    }
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf13 */
uint F_00e5cdf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe5cdf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_00ea81c0(param_1);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classid",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"contentdetail",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
  F_00ea8220(pvVar3);
  F_00ea83e0(pvVar3,uVar2,(int)uVar2 >> 0x1f);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 100))(this,pvVar3);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf25 */
byte F_00e5cf10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe5cf10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  undefined * pvVar1;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 * puVar9;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  pvVar1 = (undefined *)F_00e9e450(param_1,0,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar2,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,"UInt8");
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea8220(pvVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  uVar8 = 0;
  uVar7 = 0x1a;
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea83e0(pvVar2,uVar7,uVar8);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  (*(int *)(gen_frame + 0x0)) = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[(*(int *)(gen_frame + 0x0)) + 4],0);
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
    puVar9 = ((undefined1 *)(gen_frame + 0x58));
    iVar5 = (*(int *)(gen_frame + 0x0)) >> 0x1f;
    iVar6 = (*(int *)(gen_frame + 0x0));
    pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
    pvVar2 = (undefined *)F_00e9e450(pvVar2,iVar6,iVar5);
    F_00ea7fb0(pvVar2,puVar9);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
  } while ((*(int *)(gen_frame + 0x0)) < 0x1a);
  pvVar1 = (undefined *)F_00e9e450(param_1,1,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar2,1);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,1);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,1);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,"UInt8");
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x1e],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  pvVar1 = (undefined *)F_00e9e450(param_1,2,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar2,2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,2);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,2);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,"UInt8");
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x1f],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  pvVar1 = (undefined *)F_00e9e450(param_1,3,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar2,3);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,3);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,3);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,"UInt8");
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x20],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  pvVar1 = (undefined *)F_00e9e450(param_1,4,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar2,4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,4);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,4);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,"UInt8");
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x21],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  pvVar1 = (undefined *)F_00e9e450(param_1,5,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar2,5);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,5);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,5);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,"UInt8");
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1080800),(uint)(byte)this[0x22],0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  pvVar1 = (undefined *)F_00e9e450(param_1,6,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberidx",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar2,6);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberid",REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,6);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7eb0(pvVar2,uVar4,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x1135940),REFG(undefined4, 0x108cc50));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,6);
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"datatype",REFG(undefined4, 0x108cc50));
  pvVar2 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar2,&REFG(undefined, 0x1158a08));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x1158a04),(uint)(byte)this[0x23]);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"value",REFG(undefined4, 0x108cc50));
  pvVar1 = (undefined *)F_00ea8380(pvVar1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar1,((undefined1 *)(gen_frame + 0x58)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf14 */
byte F_00e5d8e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe5d8e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined * this_00;
  uint uVar6;
  char * pcVar7;
  int * piVar8;
  char * pcVar9;
  byte * pbVar10;
  byte * pbVar11;
  undefined * this_01;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)),"memberid",REFG(undefined4, 0x108cc50));
  this_00 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x10)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10)));
  if ((*(int *)((int)this_00 + 8) == 6) && (*(int *)((int)param_1 + 8) == 5)) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"classname",REFG(undefined4, 0x108cc50));
    uVar6 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
    uVar6 = F_00e82f00(uVar6);
    pcVar7 = (char *)F_0042a990(uVar6);
    pcVar1 = pcVar7 + 1;
    do {
      cVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar3 != '\0');
    piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    pcVar9 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 8))(piVar8)));
    pcVar2 = pcVar9 + 1;
    do {
      cVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
    F_0042c880(((undefined1 *)(gen_frame + 0x64)));
    if ((int)pcVar7 - (int)pcVar1 == (int)pcVar9 - (int)pcVar2) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"classname",REFG(undefined4, 0x108cc50));
      piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
      pbVar10 = ((byte *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 8))(piVar8)));
      uVar6 = F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
      uVar6 = F_00e82f00(uVar6);
      pbVar11 = (byte *)F_0042a990(uVar6);
      do {
        bVar4 = *pbVar11;
        bVar16 = bVar4 < *pbVar10;
        if (bVar4 != *pbVar10) {
LAB_00e5da32: ;
          iVar15 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_00e5da37;
        }
        if (bVar4 == 0) break;
        bVar4 = pbVar11[1];
        bVar16 = bVar4 < pbVar10[1];
        if (bVar4 != pbVar10[1]) goto LAB_00e5da32;
        pbVar11 = pbVar11 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar4 != 0);
      iVar15 = 0;
LAB_00e5da37: ;
      F_0042c880(((undefined1 *)(gen_frame + 0x64)));
      if (iVar15 == 0) {
        F_0042cc20(((undefined1 *)(gen_frame + 0x64)),"content",REFG(undefined4, 0x108cc50));
        this_01 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x64)));
        F_0042c880(((undefined1 *)(gen_frame + 0x64)));
        piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
        uVar6 = ((code *)*(gen_code32 *)(*piVar8 + 0x14))(piVar8);
        uVar12 = F_00e8c050(this_01);
        uVar13 = F_00e8c050(this_00);
        if (uVar12 == uVar13) {
          (*(int *)(gen_frame + 0x8)) = 0;
          if (0 < (int)uVar6) {
            do {
              piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
              uVar13 = ((code *)*(gen_code32 *)(*piVar8 + 0xc))(piVar8,(*(int *)(gen_frame + 0x8)));
              iVar15 = 0;
              if (0 < (int)uVar12) {
                do {
                  uVar14 = F_00e9e450(this_00,iVar15,iVar15 >> 0x1f);
                  uVar14 = F_00e82f00(uVar14);
                  uVar14 = F_0042a990(uVar14);
                  uVar17 = F_00e505e0(uVar14);
                  if (((uint)uVar17 == uVar13) && ((int)(uVar17 >> 0x20) == 0)) {
                    iVar5 = *(int *)this;
                    uVar18 = 1;
                    uVar13 = F_00e9e450(this_01,iVar15,iVar15 >> 0x1f);
                    uVar13 = ((code *)*(gen_code32 *)(iVar5 + 0x58))(this,(*(int *)(gen_frame + 0x8)),uVar13,uVar18);
                    if ((char)uVar13 == '\0') goto LAB_00e5d93e;
                    break;
                  }
                  iVar15 = iVar15 + 1;
                } while (iVar15 < (int)uVar12);
              }
              (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
            } while ((*(int *)(gen_frame + 0x8)) < (int)uVar6);
          }
          F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
          return 1;
        }
      }
    }
  }
LAB_00e5d93e: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf16 */
byte F_00e5db90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe5db90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined * this_00;
  int iVar5;
  undefined1 * puVar6;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  F_00ea81c0(param_1);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classname",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7fb0(pvVar3,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"classid",REFG(undefined4, 0x108cc50));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_00ea7e80(pvVar3,uVar2 & 0xffff);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"content",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
  F_00ea8220(pvVar3);
  F_00ea83e0(pvVar3,uVar2,(int)uVar2 >> 0x1f);
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this,pvVar3,1);
  if ((char)uVar4 == '\0') {
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
    return 0;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"memberid",REFG(undefined4, 0x108cc50));
  pvVar3 = (undefined *)F_00ea8380(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00ea8220(pvVar3);
  F_00ea83e0(pvVar3,uVar2,(int)uVar2 >> 0x1f);
  iVar5 = 0;
  if (0 < (int)uVar2) {
    do {
      piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
      uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,iVar5);
      F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
      puVar6 = ((undefined1 *)(gen_frame + 0x58));
      this_00 = (undefined *)F_00e9e450(pvVar3,iVar5,iVar5 >> 0x1f);
      F_00ea7fb0(this_00,puVar6);
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar2);
  }
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return 1;
}

/* ref: FUN_00e5dd60 */
unsigned int F_00e5dd60(void)
{
  GEN_ENTER(0xe5dd60u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup_TypeInfo::vf18 */
uint F_00e5dd80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe5dd80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  uint * puVar1;
  uint uVar2;
  undefined4 * puVar3;
  uint * puVar4;
  int iVar5;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_2);
  *param_3 = uVar2;
  puVar1 = param_3 + 1;
  puVar4 = puVar1;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    *(undefined1 *)puVar1 = *(undefined1 *)(param_1 + 4);
    return 5;
  case 1: ;
    *(undefined1 *)puVar1 = *(undefined1 *)(param_1 + 5);
    return 5;
  case 2: ;
    *puVar1 = *(uint *)(param_1 + 8);
    param_3[2] = *(uint *)(param_1 + 0xc);
    return 0xc;
  case 3: ;
    *(undefined1 *)puVar1 = *(undefined1 *)(param_1 + 0x10);
    return 5;
  case 4: ;
    *(undefined1 *)puVar1 = 0;
    *(undefined2 *)((int)param_3 + 5) = 0x18;
    puVar3 = (undefined4 *)((int)param_3 + 7);
    iVar5 = 0;
    do {
      *puVar3 = *(undefined4 *)(param_1 + 0x18 + iVar5 * 8);
      puVar3[1] = *(undefined4 *)(param_1 + 0x1c + iVar5 * 8);
      iVar5 = iVar5 + 1;
      puVar3 = puVar3 + 2;
    } while (iVar5 < 0x18);
    return (int)puVar3 - (int)param_3;
  case 5: ;
    puVar4 = param_3 + 2;
    *puVar1 = *(uint *)(param_1 + 0xd8);
  }
  return (int)puVar4 - (int)param_3;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup_TypeInfo::vf17 */
uint F_00e5de60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xe5de60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint * param_5 = (uint *)(uintptr_t)gen_a5;
  uint uVar1;
  uint * puVar2;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_2);
  *param_5 = uVar1;
  puVar2 = param_5 + 1;
  if (param_2 == 4) {
    uVar1 = F_00e67cf0(param_1 + 0x18,param_3,param_4,puVar2);
    puVar2 = (uint *)((int)puVar2 + uVar1);
  }
  return (int)puVar2 - (int)param_5;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup_TypeInfo::vf16 */
uint F_00e5deb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xe5deb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  uint * param_7 = (uint *)(uintptr_t)gen_a7;
  uint uVar1;
  uint * puVar2;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_2);
  *param_7 = uVar1;
  puVar2 = param_7 + 1;
  if (param_2 == 4) {
    uVar1 = F_00e67d80(param_1 + 0x18,param_3,param_4,param_5,param_6,puVar2);
    puVar2 = (uint *)((int)puVar2 + uVar1);
  }
  return (int)puVar2 - (int)param_7;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup_TypeInfo::vf20 */
uint F_00e5df00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe5df00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  
  uVar2 = *param_2;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_1);
  puVar3 = param_2;
  if (uVar2 == uVar1) {
    puVar3 = param_2 + 1;
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0: ;
      *(char *)(param_3 + 4) = (char)*puVar3;
      return 5;
    case 1: ;
      *(char *)(param_3 + 5) = (char)*puVar3;
      return 5;
    case 2: ;
      *(uint *)(param_3 + 8) = *puVar3;
      *(uint *)(param_3 + 0xc) = param_2[2];
      return 0xc;
    case 3: ;
      *(char *)(param_3 + 0x10) = (char)*puVar3;
      return 5;
    case 4: ;
      uVar2 = F_00e67e80(puVar3,param_3 + 0x18,0x18);
      return (uint)((int)puVar3 + (uVar2 - (int)param_2));
    case 5: ;
      *(uint *)(param_3 + 0xd8) = *puVar3;
      puVar3 = param_2 + 2;
    }
  }
  return (int)puVar3 - (int)param_2;
}

/* ref: FUN_00e5dfe0 */
uint F_00e5dfe0(unsigned int gen_a0)
{
  GEN_ENTER(0xe5dfe0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined2 *)(in_ecx + 1) = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  *(undefined1 *)(in_ecx + 4) = 0;
  *in_ecx = (*(undefined * PTR32 (*)[27])REFP(0x1158a6c));
  in_ecx[0x36] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  puVar2 = in_ecx + 6;
  puVar3 = in_ecx + 8;
  for (iVar1 = 0x2e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)in_ecx;
}

/* ref: FUN_00e5e020 */
uint F_00e5e020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe5e020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x1158a6c));
  F_00e50e10(this,param_1);
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup::vf7 */
uint F_00e5e040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe5e040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = (undefined4 *)*param_1;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x44))(this,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup::vf19 */
uint F_00e5e060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe5e060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = (undefined4 *)*param_1;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup::vf21 */
uint F_00e5e080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe5e080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = (undefined4 *)*param_1;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,puVar1);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::Gambit_TypeInfo::vf18 */
uint F_00e5e0a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe5e0a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  uint uVar1;
  uint * puVar2;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_2);
  *param_3 = uVar1;
  puVar2 = param_3 + 1;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    *puVar2 = *(uint *)(param_1 + 4);
    return 8;
  case 1: ;
    *(undefined1 *)puVar2 = *(undefined1 *)(param_1 + 8);
    return 5;
  case 2: ;
    *(undefined1 *)puVar2 = 0;
    *(undefined2 *)((int)param_3 + 5) = 2;
    *(undefined4 *)((int)param_3 + 7) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)((int)param_3 + 0xb) = *(undefined4 *)(param_1 + 0x10);
    return 0xf;
  case 3: ;
    *(undefined1 *)puVar2 = 0;
    *(undefined2 *)((int)param_3 + 5) = 4;
    *(undefined4 *)((int)param_3 + 7) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)((int)param_3 + 0xb) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)((int)param_3 + 0xf) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)((int)param_3 + 0x13) = *(undefined4 *)(param_1 + 0x20);
    puVar2 = (uint *)((int)param_3 + 0x17);
  }
  return (int)puVar2 - (int)param_3;
}

/* ref: Application::Network::WorkDefinitions::Gambit_TypeInfo::vf17 */
uint F_00e5e150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xe5e150u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint * param_5 = (uint *)(uintptr_t)gen_a5;
  uint uVar1;
  uint * puVar2;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_2);
  *param_5 = uVar1;
  puVar2 = param_5 + 1;
  if (param_2 == 2) {
    uVar1 = F_00e67fb0(param_1 + 0xc,param_3,param_4,puVar2);
    puVar2 = (uint *)((int)puVar2 + uVar1);
  }
  else if (param_2 == 3) {
    uVar1 = F_00e68050(param_1 + 0x14,param_3,param_4,puVar2);
    return (int)puVar2 + (uVar1 - (int)param_5);
  }
  return (int)puVar2 - (int)param_5;
}

/* ref: Application::Network::WorkDefinitions::Gambit_TypeInfo::vf16 */
uint F_00e5e1c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xe5e1c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  uint * param_7 = (uint *)(uintptr_t)gen_a7;
  uint uVar1;
  uint * puVar2;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_2);
  *param_7 = uVar1;
  puVar2 = param_7 + 1;
  if (param_2 == 2) {
    uVar1 = F_00e680b0(param_1 + 0xc,param_3,param_4,param_5,param_6,puVar2);
    puVar2 = (uint *)((int)puVar2 + uVar1);
  }
  else if (param_2 == 3) {
    uVar1 = F_00e68160(param_1 + 0x14,param_3,param_4,param_5,param_6,puVar2);
    return (int)puVar2 + (uVar1 - (int)param_7);
  }
  return (int)puVar2 - (int)param_7;
}

/* ref: FUN_00e5e240 */
uint F_00e5e240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe5e240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x1158654));
  F_00e53220(this,param_1);
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Gambit::vf7 */
uint F_00e5e260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe5e260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = (undefined4 *)*param_1;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x44))(this,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::Gambit::vf19 */
uint F_00e5e280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe5e280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = (undefined4 *)*param_1;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::Gambit::vf21 */
uint F_00e5e2a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe5e2a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = (undefined4 *)*param_1;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,puVar1);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork_TypeInfo::vf18 */
uint F_00e5e2c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe5e2c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  uint uVar1;
  undefined1 * puVar2;
  uint * puVar3;
  int iVar4;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_2);
  *param_3 = uVar1;
  puVar3 = param_3 + 1;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    *(undefined1 *)puVar3 = 0;
    *(undefined2 *)((int)param_3 + 5) = 0x15;
    puVar2 = (undefined1 *)((int)param_3 + 7);
    iVar4 = 0;
    do {
      *puVar2 = *(undefined1 *)(iVar4 + 4 + param_1);
      iVar4 = iVar4 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar4 < 0x15);
    return (int)puVar2 - (int)param_3;
  case 1: ;
    *(undefined1 *)puVar3 = 0;
    *(undefined2 *)((int)param_3 + 5) = 8;
    *(undefined1 *)((int)param_3 + 7) = *(undefined1 *)(param_1 + 0x19);
    *(undefined1 *)(param_3 + 2) = *(undefined1 *)(param_1 + 0x1a);
    *(undefined1 *)((int)param_3 + 9) = *(undefined1 *)(param_1 + 0x1b);
    *(undefined1 *)((int)param_3 + 10) = *(undefined1 *)(param_1 + 0x1c);
    *(undefined1 *)((int)param_3 + 0xb) = *(undefined1 *)(param_1 + 0x1d);
    *(undefined1 *)(param_3 + 3) = *(undefined1 *)(param_1 + 0x1e);
    *(undefined1 *)((int)param_3 + 0xd) = *(undefined1 *)(param_1 + 0x1f);
    *(undefined1 *)((int)param_3 + 0xe) = *(undefined1 *)(param_1 + 0x20);
    return 0xf;
  case 2: ;
    *(undefined1 *)puVar3 = 0;
    *(undefined2 *)((int)param_3 + 5) = 3;
    *(undefined1 *)((int)param_3 + 7) = *(undefined1 *)(param_1 + 0x21);
    *(undefined1 *)(param_3 + 2) = *(undefined1 *)(param_1 + 0x22);
    *(undefined1 *)((int)param_3 + 9) = *(undefined1 *)(param_1 + 0x23);
    return 10;
  case 3: ;
    *(undefined1 *)puVar3 = *(undefined1 *)(param_1 + 0x24);
    return 5;
  case 4: ;
    *(undefined1 *)puVar3 = *(undefined1 *)(param_1 + 0x25);
    return 5;
  case 5: ;
    *(undefined1 *)puVar3 = 0;
    *(undefined2 *)((int)param_3 + 5) = 3;
    *(undefined1 *)((int)param_3 + 7) = *(undefined1 *)(param_1 + 0x26);
    *(undefined1 *)(param_3 + 2) = *(undefined1 *)(param_1 + 0x27);
    *(undefined1 *)((int)param_3 + 9) = *(undefined1 *)(param_1 + 0x28);
    return 10;
  case 6: ;
    *puVar3 = *(uint *)(param_1 + 0x2c);
    return 8;
  case 7: ;
    *puVar3 = *(uint *)(param_1 + 0x30);
    return 8;
  case 8: ;
    *puVar3 = *(uint *)(param_1 + 0x34);
    puVar3 = param_3 + 2;
  }
  return (int)puVar3 - (int)param_3;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork_TypeInfo::vf17 */
uint F_00e5e450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xe5e450u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint * param_5 = (uint *)(uintptr_t)gen_a5;
  uint uVar1;
  int iVar2;
  uint * puVar3;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_2);
  *param_5 = uVar1;
  puVar3 = param_5 + 1;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    uVar1 = F_00e68310(param_1 + 4,param_3,param_4,puVar3);
    return (int)puVar3 + (uVar1 - (int)param_5);
  case 1: ;
    iVar2 = param_1 + 0x19;
    break;
  case 2: ;
    iVar2 = param_1 + 0x21;
    break;
  default: ;
    goto switchD_00e5e46e_caseD_3;
  case 5: ;
    iVar2 = param_1 + 0x26;
  }
  uVar1 = F_00e68370(iVar2,param_3,param_4,puVar3);
  puVar3 = (uint *)((int)puVar3 + uVar1);
switchD_00e5e46e_caseD_3: ;
  return (int)puVar3 - (int)param_5;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork_TypeInfo::vf16 */
uint F_00e5e4f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xe5e4f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  uint * param_7 = (uint *)(uintptr_t)gen_a7;
  uint uVar1;
  int iVar2;
  uint * puVar3;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_2);
  *param_7 = uVar1;
  puVar3 = param_7 + 1;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    uVar1 = F_00e683d0(param_1 + 4,param_3,param_4,param_5,param_6,puVar3);
    return (int)puVar3 + (uVar1 - (int)param_7);
  case 1: ;
    iVar2 = param_1 + 0x19;
    break;
  case 2: ;
    iVar2 = param_1 + 0x21;
    break;
  default: ;
    goto switchD_00e5e512_caseD_3;
  case 5: ;
    iVar2 = param_1 + 0x26;
  }
  uVar1 = F_00e68470(iVar2,param_3,param_4,param_5,param_6,puVar3);
  puVar3 = (uint *)((int)puVar3 + uVar1);
switchD_00e5e512_caseD_3: ;
  return (int)puVar3 - (int)param_7;
}

/* ref: FUN_00e5e5c0 */
uint F_00e5e5c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe5e5c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x115872c));
  F_00e553b0(this,param_1);
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork::vf7 */
uint F_00e5e5e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe5e5e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = (undefined4 *)*param_1;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x44))(this,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork::vf19 */
uint F_00e5e600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe5e600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = (undefined4 *)*param_1;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork::vf21 */
uint F_00e5e620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe5e620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = (undefined4 *)*param_1;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,puVar1);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork_TypeInfo::vf18 */
uint F_00e5e640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe5e640u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  uint uVar1;
  uint * puVar2;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_2);
  *param_3 = uVar1;
  puVar2 = param_3 + 1;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    *puVar2 = *(uint *)(param_1 + 8);
    param_3[2] = *(uint *)(param_1 + 0xc);
    return 0xc;
  case 1: ;
    *puVar2 = *(uint *)(param_1 + 0x10);
    return 8;
  case 2: ;
    *(undefined1 *)puVar2 = *(undefined1 *)(param_1 + 0x14);
    return 5;
  case 3: ;
    *(undefined1 *)puVar2 = *(undefined1 *)(param_1 + 0x15);
    return 5;
  case 4: ;
    *puVar2 = *(uint *)(param_1 + 0x18);
    puVar2 = param_3 + 2;
  }
  return (int)puVar2 - (int)param_3;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork_TypeInfo::vf20 */
uint F_00e5e6e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe5e6e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  
  uVar1 = *param_2;
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_1);
  puVar3 = param_2;
  if (uVar1 == uVar2) {
    puVar3 = param_2 + 1;
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0: ;
      *(uint *)(param_3 + 8) = *puVar3;
      *(uint *)(param_3 + 0xc) = param_2[2];
      return 0xc;
    case 1: ;
      *(uint *)(param_3 + 0x10) = *puVar3;
      return 8;
    case 2: ;
      *(char *)(param_3 + 0x14) = (char)*puVar3;
      return 5;
    case 3: ;
      *(char *)(param_3 + 0x15) = (char)*puVar3;
      return 5;
    case 4: ;
      *(uint *)(param_3 + 0x18) = *puVar3;
      puVar3 = param_2 + 2;
    }
  }
  return (int)puVar3 - (int)param_2;
}

/* ref: FUN_00e5e7a0 */
uint F_00e5e7a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe5e7a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x11587fc));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  if ((short)uVar3 == (short)uVar4) {
    *(int *)((int)this + 8) = param_1[2];
    *(int *)((int)this + 0xc) = param_1[3];
    *(int *)((int)this + 0x10) = param_1[4];
    *(char *)((int)this + 0x14) = (char)param_1[5];
    *(undefined1 *)((int)this + 0x15) = *(undefined1 *)((int)param_1 + 0x15);
    *(int *)((int)this + 0x18) = param_1[6];
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork::vf7 */
uint F_00e5e810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe5e810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = (undefined4 *)*param_1;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x44))(this,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork::vf19 */
uint F_00e5e830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe5e830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = (undefined4 *)*param_1;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork::vf21 */
uint F_00e5e850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe5e850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = (undefined4 *)*param_1;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,puVar1);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork_TypeInfo::vf18 */
uint F_00e5e870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe5e870u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  uint uVar1;
  undefined4 * puVar2;
  uint * puVar3;
  int iVar4;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_2);
  *param_3 = uVar1;
  puVar3 = param_3 + 1;
  if (param_2 == 0) {
    *(undefined1 *)puVar3 = 0;
    *(undefined2 *)((int)param_3 + 5) = 0xa0;
    puVar3 = (uint *)((int)param_3 + 7);
    iVar4 = 0;
    do {
      *(undefined2 *)puVar3 = *(undefined2 *)(param_1 + 4 + iVar4 * 2);
      iVar4 = iVar4 + 1;
      puVar3 = (uint *)((int)puVar3 + 2);
    } while (iVar4 < 0xa0);
  }
  else if (param_2 == 1) {
    *(undefined1 *)puVar3 = 0;
    *(undefined2 *)((int)param_3 + 5) = 0x14;
    puVar2 = (undefined4 *)((int)param_3 + 7);
    iVar4 = 0;
    do {
      *puVar2 = *(undefined4 *)(param_1 + 0x144 + iVar4 * 4);
      iVar4 = iVar4 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar4 < 0x14);
    return (int)puVar2 - (int)param_3;
  }
  return (int)puVar3 - (int)param_3;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork_TypeInfo::vf17 */
uint F_00e5e8f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xe5e8f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint * param_5 = (uint *)(uintptr_t)gen_a5;
  uint uVar1;
  uint * puVar2;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_2);
  *param_5 = uVar1;
  puVar2 = param_5 + 1;
  if (param_2 == 0) {
    uVar1 = F_00e685e0(param_1 + 4,param_3,param_4,puVar2);
    puVar2 = (uint *)((int)puVar2 + uVar1);
  }
  else if (param_2 == 1) {
    uVar1 = F_00e68640(param_1 + 0x144,param_3,param_4,puVar2);
    return (int)puVar2 + (uVar1 - (int)param_5);
  }
  return (int)puVar2 - (int)param_5;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork_TypeInfo::vf16 */
uint F_00e5e960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xe5e960u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  uint * param_7 = (uint *)(uintptr_t)gen_a7;
  uint uVar1;
  uint * puVar2;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_2);
  *param_7 = uVar1;
  puVar2 = param_7 + 1;
  if (param_2 == 0) {
    uVar1 = F_00e686a0(param_1 + 4,param_3,param_4,param_5,param_6,puVar2);
    puVar2 = (uint *)((int)puVar2 + uVar1);
  }
  else if (param_2 == 1) {
    uVar1 = F_00e68750(param_1 + 0x144,param_3,param_4,param_5,param_6,puVar2);
    return (int)puVar2 + (uVar1 - (int)param_7);
  }
  return (int)puVar2 - (int)param_7;
}

/* ref: FUN_00e5e9e0 */
uint F_00e5e9e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe5e9e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x11588c4));
  F_00e5a0c0(this,param_1);
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork::vf7 */
uint F_00e5ea00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe5ea00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = (undefined4 *)*param_1;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x44))(this,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork::vf19 */
uint F_00e5ea20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe5ea20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = (undefined4 *)*param_1;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork::vf21 */
uint F_00e5ea40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe5ea40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = (undefined4 *)*param_1;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,puVar1);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::CharaMake_TypeInfo::vf18 */
uint F_00e5ea60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe5ea60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  uint uVar1;
  undefined1 * puVar2;
  uint * puVar3;
  int iVar4;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_2);
  *param_3 = uVar1;
  puVar3 = param_3 + 1;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    *(undefined1 *)puVar3 = 0;
    *(undefined2 *)((int)param_3 + 5) = 0x1a;
    puVar2 = (undefined1 *)((int)param_3 + 7);
    iVar4 = 0;
    do {
      *puVar2 = *(undefined1 *)(iVar4 + 4 + param_1);
      iVar4 = iVar4 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar4 < 0x1a);
    return (int)puVar2 - (int)param_3;
  case 1: ;
    *(undefined1 *)puVar3 = *(undefined1 *)(param_1 + 0x1e);
    return 5;
  case 2: ;
    *(undefined1 *)puVar3 = *(undefined1 *)(param_1 + 0x1f);
    return 5;
  case 3: ;
    *(undefined1 *)puVar3 = *(undefined1 *)(param_1 + 0x20);
    return 5;
  case 4: ;
    *(undefined1 *)puVar3 = *(undefined1 *)(param_1 + 0x21);
    return 5;
  case 5: ;
    *(undefined1 *)puVar3 = *(undefined1 *)(param_1 + 0x22);
    return 5;
  case 6: ;
    *(undefined1 *)puVar3 = *(undefined1 *)(param_1 + 0x23);
    puVar3 = (uint *)((int)param_3 + 5);
  }
  return (int)puVar3 - (int)param_3;
}

/* ref: Application::Network::WorkDefinitions::CharaMake_TypeInfo::vf17 */
uint F_00e5eb40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xe5eb40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint * param_5 = (uint *)(uintptr_t)gen_a5;
  uint uVar1;
  uint * puVar2;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_2);
  *param_5 = uVar1;
  puVar2 = param_5 + 1;
  if (param_2 == 0) {
    uVar1 = F_00e68370(param_1 + 4,param_3,param_4,puVar2);
    puVar2 = (uint *)((int)puVar2 + uVar1);
  }
  return (int)puVar2 - (int)param_5;
}

/* ref: Application::Network::WorkDefinitions::CharaMake_TypeInfo::vf16 */
uint F_00e5eb90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xe5eb90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  uint * param_7 = (uint *)(uintptr_t)gen_a7;
  uint uVar1;
  uint * puVar2;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_2);
  *param_7 = uVar1;
  puVar2 = param_7 + 1;
  if (param_2 == 0) {
    uVar1 = F_00e68470(param_1 + 4,param_3,param_4,param_5,param_6,puVar2);
    puVar2 = (uint *)((int)puVar2 + uVar1);
  }
  return (int)puVar2 - (int)param_7;
}

/* ref: Application::Network::WorkDefinitions::CharaMake_TypeInfo::vf20 */
uint F_00e5ebe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe5ebe0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  
  uVar2 = *param_2;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_1);
  puVar3 = param_2;
  if (uVar2 == uVar1) {
    puVar3 = param_2 + 1;
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0: ;
      uVar2 = F_00e68510(puVar3,param_3 + 4,0x1a);
      return (uint)((int)puVar3 + (uVar2 - (int)param_2));
    case 1: ;
      *(char *)(param_3 + 0x1e) = (char)*puVar3;
      return 5;
    case 2: ;
      *(char *)(param_3 + 0x1f) = (char)*puVar3;
      return 5;
    case 3: ;
      *(char *)(param_3 + 0x20) = (char)*puVar3;
      return 5;
    case 4: ;
      *(char *)(param_3 + 0x21) = (char)*puVar3;
      return 5;
    case 5: ;
      *(char *)(param_3 + 0x22) = (char)*puVar3;
      return 5;
    case 6: ;
      *(char *)(param_3 + 0x23) = (char)*puVar3;
      puVar3 = (uint *)((int)param_2 + 5);
    }
  }
  return (int)puVar3 - (int)param_2;
}

/* ref: FUN_00e5ecd0 */
uint F_00e5ecd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe5ecd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x1158994));
  F_00e5bd10(this,param_1);
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf7 */
uint F_00e5ecf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe5ecf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = (undefined4 *)*param_1;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x44))(this,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf19 */
uint F_00e5ed10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe5ed10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = (undefined4 *)*param_1;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,puVar1,0);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf21 */
uint F_00e5ed30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe5ed30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = (undefined4 *)*param_1;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,puVar1);
  return uVar2;
}

/* ref: Application::Network::WorkDefinitions::Gambit_TypeInfo::vf20 */
uint F_00e5ed50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe5ed50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  
  uVar2 = *param_2;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_1);
  puVar3 = param_2;
  if (uVar2 == uVar1) {
    puVar3 = param_2 + 1;
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0: ;
      *(uint *)(param_3 + 4) = *puVar3;
      return 8;
    case 1: ;
      *(char *)(param_3 + 8) = (char)*puVar3;
      return 5;
    case 2: ;
      uVar2 = F_00e68230(puVar3,param_3 + 0xc,2);
      return (uint)((int)puVar3 + (uVar2 - (int)param_2));
    case 3: ;
      uVar2 = F_00e68dc0(puVar3,param_3 + 0x14,4);
      puVar3 = (uint *)((int)puVar3 + uVar2);
    }
  }
  return (int)puVar3 - (int)param_2;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork_TypeInfo::vf20 */
uint F_00e5ee00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe5ee00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  
  uVar2 = *param_2;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_1);
  puVar3 = param_2;
  if (uVar2 == uVar1) {
    puVar3 = param_2 + 1;
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0: ;
      uVar2 = F_00e68ea0(puVar3,param_3 + 4,0x15);
      return (uint)((int)puVar3 + (uVar2 - (int)param_2));
    case 1: ;
      uVar2 = F_00e68510(puVar3,param_3 + 0x19,8);
      return (uint)((int)puVar3 + (uVar2 - (int)param_2));
    case 2: ;
      uVar2 = F_00e68510(puVar3,param_3 + 0x21,3);
      return (uint)((int)puVar3 + (uVar2 - (int)param_2));
    case 3: ;
      *(char *)(param_3 + 0x24) = (char)*puVar3;
      return 5;
    case 4: ;
      *(char *)(param_3 + 0x25) = (char)*puVar3;
      return 5;
    case 5: ;
      uVar2 = F_00e68510(puVar3,param_3 + 0x26,3);
      return (uint)((int)puVar3 + (uVar2 - (int)param_2));
    case 6: ;
      *(uint *)(param_3 + 0x2c) = *puVar3;
      return 8;
    case 7: ;
      *(uint *)(param_3 + 0x30) = *puVar3;
      return 8;
    case 8: ;
      *(uint *)(param_3 + 0x34) = *puVar3;
      puVar3 = param_2 + 2;
    }
  }
  return (int)puVar3 - (int)param_2;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork_TypeInfo::vf20 */
uint F_00e5ef50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe5ef50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  
  uVar2 = *param_2;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_1);
  puVar3 = param_2;
  if (uVar2 == uVar1) {
    puVar3 = param_2 + 1;
    if (param_1 == 0) {
      uVar2 = F_00e68f70(puVar3,param_3 + 4,0xa0);
      puVar3 = (uint *)((int)puVar3 + uVar2);
    }
    else if (param_1 == 1) {
      uVar2 = F_00e68800(puVar3,param_3 + 0x144,0x14);
      return (int)puVar3 + (uVar2 - (int)param_2);
    }
  }
  return (int)puVar3 - (int)param_2;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup::vf20 */
byte F_00e5efc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe5efc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  char * pcVar6;
  char * pcVar7;
  uint uVar8;
  char * PTR32 * ppcVar9;
  char * pcVar10;
  char * PTR32 * ppcVar11;
  char * PTR32 * ppcVar12;
  undefined * pFVar13;
  ulonglong uVar14;
  float fVar15;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  pcVar7 = param_1 + 1;
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  F_00c472af(((char *)(gen_frame + 0x38)),0x40,"\"classid\":%llu",uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x38));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813(pcVar7,((char *)(gen_frame + 0x38)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x38)) + 1))));
  if (iVar5 != 0) goto LAB_00e5f398;
  pcVar4 = (char *)F_00fb9ad0(pcVar7,"\"content\":[");
  (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar4;
  if (pcVar4 == (char *)0x0) goto LAB_00e5f398;
  (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar4 + 0xb;
  pcVar4 = param_1;
  do {
    pcVar10 = pcVar4;
    pcVar4 = pcVar10 + 1;
  } while (*pcVar10 != '\0');
  iVar5 = 1;
  for (pcVar4 = pcVar7; pcVar6 = pcVar10 + -1, pcVar4 < pcVar10 + -1; pcVar4 = pcVar4 + 1) {
    if (*pcVar4 == '{') {
      iVar5 = iVar5 + 1;
    }
    else if ((*pcVar4 == '}') && (iVar5 = iVar5 + -1, pcVar6 = pcVar4, iVar5 == 0)) break;
  }
  pcVar7 = (char *)F_00e50750(pcVar7,"\"memberid\":[",pcVar6);
  if (pcVar7 == (char *)0x0) goto LAB_00e5f398;
  (*(char * PTR32 *)(gen_frame + 0x1c)) = pcVar7 + 0xc;
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2);
  (*(uint *)(gen_frame + 0x18)) = uVar3;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x28)) = (char * PTR32 *)0x0;
  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x20)),uVar3);
  (*(char * PTR32 *)(gen_frame + 0x34)) = (*(char * PTR32 *)(gen_frame + 0x30));
  pcVar10 = (*(char * PTR32 *)(gen_frame + 0x1c));
  ppcVar11 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24));
  pcVar4 = (*(char * PTR32 *)(gen_frame + 0x30));
  while (pcVar4 != pcVar7) {
    cVar1 = *pcVar4;
    if (cVar1 == '\"') {
      pcVar4 = pcVar4 + 1;
      (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4;
      if ((&(*(char * PTR32 *)(gen_frame + 0x34)) < ppcVar11) && ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) <= &(*(char * PTR32 *)(gen_frame + 0x34)))) {
        iVar5 = (int)&(*(char * PTR32 *)(gen_frame + 0x34)) - (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x20));
        if (ppcVar11 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x28))) {
          F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x20)),1);
          ppcVar11 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24));
        }
        if (ppcVar11 != (char * PTR32 *)0x0) {
          *ppcVar11 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[iVar5 >> 2];
        }
      }
      else {
        if (ppcVar11 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x28))) {
          F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x20)),1);
          ppcVar11 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24));
        }
        if (ppcVar11 != (char * PTR32 *)0x0) {
          *ppcVar11 = pcVar4;
        }
      }
      ppcVar11 = ppcVar11 + 1;
      (*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) = ppcVar11;
      pcVar4 = (char *)F_00c51da0(pcVar4,0x22);
      pcVar10 = (*(char * PTR32 *)(gen_frame + 0x1c));
    }
    else {
      if (cVar1 == '{') {
        (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4;
        F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x20)),&(*(char * PTR32 *)(gen_frame + 0x34)));
        pcVar4 = (*(char * PTR32 *)(gen_frame + 0x34)) + 1;
        iVar5 = 1;
        if (pcVar4 == pcVar10) goto LAB_00e5f38b;
        do {
          if (*pcVar4 == '{') {
            iVar5 = iVar5 + 1;
          }
          else if ((*pcVar4 == '}') && (iVar5 = iVar5 + -1, iVar5 == 0)) break;
          pcVar4 = pcVar4 + 1;
        } while (pcVar4 != pcVar10);
      }
      else {
        if (cVar1 != '[') goto LAB_00e5f1f3;
        (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4 + 1;
        iVar5 = 1;
        if (pcVar4[1] == '\"') {
LAB_00e5f1bb: ;
          (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4 + 2;
        }
        else if (pcVar4[1] == '[') {
          iVar5 = 2;
          goto LAB_00e5f1bb;
        }
        F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x20)),&(*(char * PTR32 *)(gen_frame + 0x34)));
        for (pcVar4 = (*(char * PTR32 *)(gen_frame + 0x34)); pcVar4 != pcVar10; pcVar4 = pcVar4 + 1) {
          if (*pcVar4 == '[') {
            iVar5 = iVar5 + 1;
          }
          else if ((*pcVar4 == ']') && (iVar5 = iVar5 + -1, iVar5 == 0)) break;
        }
      }
      ppcVar11 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24));
      if (iVar5 == 1) goto LAB_00e5f38b;
    }
LAB_00e5f1f3: ;
    pcVar4 = pcVar4 + 1;
    (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4;
    uVar3 = (*(uint *)(gen_frame + 0x18));
  }
  pcVar7 = (char *)((int)ppcVar11 - (int)((int)(uintptr_t)(*(char * PTR32 * PTR32 *)(gen_frame + 0x20))) >> 2);
  (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar7;
  if ((int)uVar3 < (int)pcVar7) {
LAB_00e5f38b: ;
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != (char * PTR32 *)0x0) {
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
    }
    goto LAB_00e5f398;
  }
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0xc)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x10)) = (char * PTR32 *)0x0;
  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x8)),uVar3);
  cVar1 = *(*(char * PTR32 *)(gen_frame + 0x1c));
  (*(char * PTR32 *)(gen_frame + 0x30)) = (*(char * PTR32 *)(gen_frame + 0x1c));
  ppcVar11 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x8));
  ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0xc));
  ppcVar9 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x10));
  pcVar7 = (*(char * PTR32 *)(gen_frame + 0x1c));
  while (cVar1 != ']') {
    if (*pcVar7 == '\"') {
      (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar7;
      if ((&(*(char * PTR32 *)(gen_frame + 0x30)) < ppcVar12) && (ppcVar11 <= &(*(char * PTR32 *)(gen_frame + 0x30)))) {
        iVar5 = (int)&(*(char * PTR32 *)(gen_frame + 0x30)) - (int)ppcVar11;
        if (ppcVar12 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x10))) {
          uVar3 = (int)ppcVar12 - (int)((int)(uintptr_t)ppcVar11) >> 2;
          if (0x3ffffffe < uVar3) {
LAB_00e5f371: ;
                    
            F_00c4579a("vector<T> too long");
          }
          uVar3 = uVar3 + 1;
          uVar8 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x10)) - (int)((int)(uintptr_t)ppcVar11) >> 2;
          if (uVar8 < uVar3) {
            if (0x3fffffff - (uVar8 >> 1) < uVar8) {
              uVar8 = 0;
            }
            else {
              uVar8 = uVar8 + (uVar8 >> 1);
            }
            if (uVar8 < uVar3) {
              uVar8 = uVar3;
            }
            F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x8)),uVar8);
            ppcVar11 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x8));
            ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0xc));
          }
        }
        pcVar7 = (*(char * PTR32 *)(gen_frame + 0x30));
        if (ppcVar12 != (char * PTR32 *)0x0) {
          *ppcVar12 = ppcVar11[iVar5 >> 2];
        }
      }
      else {
        if (ppcVar12 == ppcVar9) {
          uVar3 = (int)ppcVar12 - (int)((int)(uintptr_t)ppcVar11) >> 2;
          if (0x3ffffffe < uVar3) goto LAB_00e5f371;
          uVar3 = uVar3 + 1;
          uVar8 = (int)ppcVar9 - (int)((int)(uintptr_t)ppcVar11) >> 2;
          if (uVar8 < uVar3) {
            if (0x3fffffff - (uVar8 >> 1) < uVar8) {
              uVar8 = 0;
            }
            else {
              uVar8 = uVar8 + (uVar8 >> 1);
            }
            if (uVar8 < uVar3) {
              uVar8 = uVar3;
            }
            F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x8)),uVar8);
            ppcVar11 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x8));
            ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0xc));
          }
        }
        if (ppcVar12 != (char * PTR32 *)0x0) {
          *ppcVar12 = pcVar7;
        }
      }
      ppcVar12 = ppcVar12 + 1;
      (*(char * PTR32 * PTR32 *)(gen_frame + 0xc)) = ppcVar12;
      pcVar7 = (char *)F_00c51da0(pcVar7 + 1,0x22);
      ppcVar9 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x10));
      if (pcVar7 == (char *)0x0) {
        if (ppcVar11 != (char * PTR32 *)0x0) {
          F_00406ad0(ppcVar11);
        }
        goto LAB_00e5f38b;
      }
    }
    pcVar7 = pcVar7 + 1;
    cVar1 = *pcVar7;
    (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar7;
  }
  pcVar7 = (char *)((int)ppcVar12 - (int)((int)(uintptr_t)ppcVar11) >> 2);
  (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar7;
  if ((int)(*(uint *)(gen_frame + 0x18)) < (int)pcVar7) {
    if (ppcVar11 != (char * PTR32 *)0x0) {
      F_00406ad0(ppcVar11);
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != (char * PTR32 *)0x0) {
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
      return 0;
    }
    goto LAB_00e5f398;
  }
  if ((*(char * PTR32 *)(gen_frame + 0x34)) != pcVar7) {
    if (ppcVar11 != (char * PTR32 *)0x0) {
      F_00406ad0(ppcVar11);
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != (char * PTR32 *)0x0) {
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
      return 0;
    }
    goto LAB_00e5f398;
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0);
  F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
  pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
  if (pcVar4 != (char *)0x0) {
    pcVar10 = (char *)0x0;
    if (pcVar7 != (char *)0x0) {
      do {
        if (pcVar4 == ppcVar11[(int)pcVar10]) break;
        pcVar10 = pcVar10 + 1;
      } while (pcVar10 < pcVar7);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar10) {
      if (ppcVar11 != (char * PTR32 *)0x0) {
        F_00406ad0(ppcVar11);
      }
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != (char * PTR32 *)0x0) {
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
        F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
        return 0;
      }
      goto LAB_00e5f398;
    }
    uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar10]);
    this[4] = SUB81(uVar14,0);
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,1);
  F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
  pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
  if (pcVar4 == (char *)0x0) {
LAB_00e5f519: ;
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,2);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
    if (pcVar4 != (char *)0x0) {
      pcVar10 = (char *)0x0;
      if (pcVar7 != (char *)0x0) {
        do {
          if (pcVar4 == ppcVar11[(int)pcVar10]) break;
          pcVar10 = pcVar10 + 1;
        } while (pcVar10 < pcVar7);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar10) goto LAB_00e5f4cf;
      uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar10]);
      *(ulonglong *)(this + 8) = uVar14;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,3);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
    if (pcVar4 != (char *)0x0) {
      pcVar10 = (char *)0x0;
      if (pcVar7 != (char *)0x0) {
        do {
          if (pcVar4 == ppcVar11[(int)pcVar10]) break;
          pcVar10 = pcVar10 + 1;
        } while (pcVar10 < pcVar7);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar10) goto LAB_00e5f4cf;
      uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar10]);
      this[0x10] = SUB81(uVar14,0);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,4);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar7 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
    if (pcVar7 != (char *)0x0) {
      pcVar4 = (char *)0x0;
      if ((*(char * PTR32 *)(gen_frame + 0x30)) != (char *)0x0) {
        do {
          if (pcVar7 == ppcVar11[(int)pcVar4]) break;
          pcVar4 = pcVar4 + 1;
        } while (pcVar4 < (*(char * PTR32 *)(gen_frame + 0x30)));
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar4) {
        if (ppcVar11 != (char * PTR32 *)0x0) {
          F_00406ad0(ppcVar11);
        }
        goto joined_r0x00e5f4e0;
      }
      pcVar7 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar4];
      pFVar13 = this + 0x18;
      (*(uint *)(gen_frame + 0x18)) = 0x18;
      do {
        uVar14 = F_00e50570(pcVar7);
        *(ulonglong *)pFVar13 = uVar14;
        uVar8 = F_00c51da0(pcVar7,0x2c);
        pFVar13 = pFVar13 + 8;
        uVar3 = (*(uint *)(gen_frame + 0x18)) - 1;
        (*(uint *)(gen_frame + 0x18)) = uVar3;
        pcVar7 = (char *)(uVar8 + 2);
      } while (uVar3 != 0);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,5);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar7 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
    ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x20));
    if (pcVar7 == (char *)0x0) {
LAB_00e5f717: ;
      if (ppcVar11 != (char * PTR32 *)0x0) {
        F_00406ad0(ppcVar11);
      }
      if (ppcVar12 != (char * PTR32 *)0x0) {
        F_00406ad0(ppcVar12);
      }
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
      return 1;
    }
    pcVar4 = (char *)0x0;
    if ((*(char * PTR32 *)(gen_frame + 0x30)) != (char *)0x0) {
      pcVar4 = (char *)0x0;
      do {
        if (pcVar7 == ppcVar11[(int)pcVar4]) break;
        pcVar4 = pcVar4 + 1;
      } while (pcVar4 < (*(char * PTR32 *)(gen_frame + 0x30)));
    }
    if (pcVar4 < (*(char * PTR32 *)(gen_frame + 0x34))) {
      fVar15 = F_00e50660((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar4]);
      *(float *)(this + 0xd8) = fVar15;
      goto LAB_00e5f717;
    }
    if (ppcVar11 != (char * PTR32 *)0x0) {
      F_00406ad0(ppcVar11);
    }
  }
  else {
    pcVar10 = (char *)0x0;
    if (pcVar7 != (char *)0x0) {
      do {
        if (pcVar4 == ppcVar11[(int)pcVar10]) break;
        pcVar10 = pcVar10 + 1;
      } while (pcVar10 < pcVar7);
    }
    if (pcVar10 < (*(char * PTR32 *)(gen_frame + 0x34))) {
      uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar10]);
      this[5] = SUB81(uVar14,0);
      goto LAB_00e5f519;
    }
LAB_00e5f4cf: ;
    if (ppcVar11 != (char * PTR32 *)0x0) {
      F_00406ad0(ppcVar11);
    }
  }
joined_r0x00e5f4e0: ;
  if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != (char * PTR32 *)0x0) {
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
    return 0;
  }
LAB_00e5f398: ;
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Gambit::vf20 */
byte F_00e5f750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe5f750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  char * pcVar6;
  char * pcVar7;
  char * pcVar8;
  char * pcVar9;
  uint uVar10;
  char * PTR32 * ppcVar11;
  char * PTR32 * ppcVar12;
  undefined * pGVar13;
  ulonglong uVar14;
  float fVar15;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
  pcVar8 = param_1 + 1;
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  F_00c472af(((char *)(gen_frame + 0x38)),0x40,"\"classid\":%llu",uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x38));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813(pcVar8,((char *)(gen_frame + 0x38)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x38)) + 1))));
  if (iVar5 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
    return 0;
  }
  uVar3 = F_00fb9ad0(pcVar8,"\"content\":[");
  if (uVar3 == 0) goto LAB_00e5fdc4;
  pcVar4 = (char *)(uVar3 + 0xb);
  pcVar9 = param_1;
  do {
    pcVar6 = pcVar9;
    pcVar9 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  iVar5 = 1;
  for (pcVar9 = pcVar8; pcVar7 = pcVar6 + -1, pcVar9 < pcVar6 + -1; pcVar9 = pcVar9 + 1) {
    if (*pcVar9 == '{') {
      iVar5 = iVar5 + 1;
    }
    else if ((*pcVar9 == '}') && (iVar5 = iVar5 + -1, pcVar7 = pcVar9, iVar5 == 0)) break;
  }
  pcVar8 = (char *)F_00e50750(pcVar8,"\"memberid\":[",pcVar7);
  if (pcVar8 == (char *)0x0) goto LAB_00e5fdc4;
  (*(char * PTR32 *)(gen_frame + 0x1c)) = pcVar8 + 0xc;
  (*(char * PTR32 *)(gen_frame + 0x20)) = pcVar8;
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 4))((*(undefined * PTR32 *)(gen_frame + 0x18)))));
  pcVar9 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2)));
  (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar9;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x28)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x2c)) = (char * PTR32 *)0x0;
  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x24)),pcVar9);
  (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4;
  pcVar9 = (*(char * PTR32 *)(gen_frame + 0x1c));
  ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x28));
  if (pcVar4 != pcVar8) {
    do {
      cVar1 = *pcVar4;
      if (cVar1 == '\"') {
        pcVar4 = pcVar4 + 1;
        (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4;
        if ((&(*(char * PTR32 *)(gen_frame + 0x34)) < ppcVar12) && ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) <= &(*(char * PTR32 *)(gen_frame + 0x34)))) {
          iVar5 = (int)&(*(char * PTR32 *)(gen_frame + 0x34)) - (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x24));
          if (ppcVar12 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x2c))) {
            F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x24)),1);
            ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x28));
          }
          if (ppcVar12 != (char * PTR32 *)0x0) {
            *ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[iVar5 >> 2];
          }
        }
        else {
          if (ppcVar12 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x2c))) {
            F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x24)),1);
            ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x28));
          }
          if (ppcVar12 != (char * PTR32 *)0x0) {
            *ppcVar12 = pcVar4;
          }
        }
        ppcVar12 = ppcVar12 + 1;
        (*(char * PTR32 * PTR32 *)(gen_frame + 0x28)) = ppcVar12;
        pcVar4 = (char *)F_00c51da0(pcVar4,0x22);
        pcVar9 = (*(char * PTR32 *)(gen_frame + 0x1c));
      }
      else {
        if (cVar1 == '{') {
          (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4;
          F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x24)),&(*(char * PTR32 *)(gen_frame + 0x34)));
          pcVar4 = (*(char * PTR32 *)(gen_frame + 0x34)) + 1;
          iVar5 = 1;
          if (pcVar4 == pcVar9) goto LAB_00e5fdb7;
          do {
            if (*pcVar4 == '{') {
              iVar5 = iVar5 + 1;
            }
            else if ((*pcVar4 == '}') && (iVar5 = iVar5 + -1, iVar5 == 0)) break;
            pcVar4 = pcVar4 + 1;
          } while (pcVar4 != pcVar9);
        }
        else {
          if (cVar1 != '[') goto LAB_00e5f993;
          (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4 + 1;
          iVar5 = 1;
          if (pcVar4[1] == '\"') {
LAB_00e5f95b: ;
            (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4 + 2;
          }
          else if (pcVar4[1] == '[') {
            iVar5 = 2;
            goto LAB_00e5f95b;
          }
          F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x24)),&(*(char * PTR32 *)(gen_frame + 0x34)));
          for (pcVar4 = (*(char * PTR32 *)(gen_frame + 0x34)); pcVar4 != pcVar9; pcVar4 = pcVar4 + 1) {
            if (*pcVar4 == '[') {
              iVar5 = iVar5 + 1;
            }
            else if ((*pcVar4 == ']') && (iVar5 = iVar5 + -1, iVar5 == 0)) break;
          }
        }
        ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x28));
        if (iVar5 == 1) goto LAB_00e5fdb7;
      }
LAB_00e5f993: ;
      pcVar4 = pcVar4 + 1;
      (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4;
    } while (pcVar4 != (*(char * PTR32 *)(gen_frame + 0x20)));
  }
  pcVar8 = (*(char * PTR32 *)(gen_frame + 0x14));
  pcVar4 = (char *)((int)ppcVar12 - (int)((int)(uintptr_t)(*(char * PTR32 * PTR32 *)(gen_frame + 0x24))) >> 2);
  (*(char * PTR32 *)(gen_frame + 0x20)) = pcVar4;
  if ((int)pcVar4 <= (int)(*(char * PTR32 *)(gen_frame + 0x14))) {
    (*(char * PTR32 * PTR32 *)(gen_frame + 0x4)) = (char * PTR32 *)0x0;
    (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = (char * PTR32 *)0x0;
    (*(char * PTR32 * PTR32 *)(gen_frame + 0xc)) = (char * PTR32 *)0x0;
    F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x4)),(*(char * PTR32 *)(gen_frame + 0x14)));
    cVar1 = *(*(char * PTR32 *)(gen_frame + 0x1c));
    (*(char * PTR32 *)(gen_frame + 0x34)) = (*(char * PTR32 *)(gen_frame + 0x1c));
    ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
    ppcVar11 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x8));
    pGVar13 = (*(undefined * PTR32 *)(gen_frame + 0x18));
    pcVar4 = (*(char * PTR32 *)(gen_frame + 0x1c));
    while ((*(undefined * PTR32 *)(gen_frame + 0x18)) = pGVar13, (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4, cVar1 != ']') {
      if (*pcVar4 == '\"') {
        if ((&(*(char * PTR32 *)(gen_frame + 0x34)) < ppcVar11) && (ppcVar12 <= &(*(char * PTR32 *)(gen_frame + 0x34)))) {
          iVar5 = (int)&(*(char * PTR32 *)(gen_frame + 0x34)) - (int)ppcVar12;
          if (ppcVar11 == (*(char * PTR32 * PTR32 *)(gen_frame + 0xc))) {
            uVar3 = (int)ppcVar11 - (int)((int)(uintptr_t)ppcVar12) >> 2;
            if (0x3ffffffe < uVar3) {
LAB_00e5fb19: ;
                    
              F_00c4579a("vector<T> too long");
            }
            uVar3 = uVar3 + 1;
            uVar10 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0xc)) - (int)((int)(uintptr_t)ppcVar12) >> 2;
            if (uVar10 < uVar3) {
              if (0x3fffffff - (uVar10 >> 1) < uVar10) {
                uVar10 = 0;
              }
              else {
                uVar10 = uVar10 + (uVar10 >> 1);
              }
              if (uVar10 < uVar3) {
                uVar10 = uVar3;
              }
              F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x4)),uVar10);
              ppcVar11 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x8));
              ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
            }
          }
          if (ppcVar11 != (char * PTR32 *)0x0) {
            *ppcVar11 = ppcVar12[iVar5 >> 2];
          }
        }
        else {
          if (ppcVar11 == (*(char * PTR32 * PTR32 *)(gen_frame + 0xc))) {
            uVar3 = (int)ppcVar11 - (int)((int)(uintptr_t)ppcVar12) >> 2;
            if (0x3ffffffe < uVar3) goto LAB_00e5fb19;
            uVar3 = uVar3 + 1;
            uVar10 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0xc)) - (int)((int)(uintptr_t)ppcVar12) >> 2;
            if (uVar10 < uVar3) {
              if (0x3fffffff - (uVar10 >> 1) < uVar10) {
                uVar10 = 0;
              }
              else {
                uVar10 = uVar10 + (uVar10 >> 1);
              }
              if (uVar10 < uVar3) {
                uVar10 = uVar3;
              }
              F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x4)),uVar10);
              ppcVar11 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x8));
              ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
            }
          }
          if (ppcVar11 != (char * PTR32 *)0x0) {
            *ppcVar11 = pcVar4;
          }
        }
        ppcVar11 = ppcVar11 + 1;
        (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = ppcVar11;
        pcVar4 = (char *)F_00c51da0((*(char * PTR32 *)(gen_frame + 0x34)) + 1,0x22);
        (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4;
        if (pcVar4 == (char *)0x0) {
          if (ppcVar12 != (char * PTR32 *)0x0) {
            F_00406ad0(ppcVar12);
          }
          if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) != (char * PTR32 *)0x0) {
            F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)));
            F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
            return 0;
          }
          goto LAB_00e5fdc4;
        }
      }
      pcVar4 = pcVar4 + 1;
      cVar1 = *pcVar4;
      (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4;
      pcVar8 = (*(char * PTR32 *)(gen_frame + 0x14));
      pGVar13 = (*(undefined * PTR32 *)(gen_frame + 0x18));
    }
    pcVar4 = (char *)((int)ppcVar11 - (int)((int)(uintptr_t)ppcVar12) >> 2);
    (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar4;
    if ((int)pcVar8 < (int)pcVar4) {
      if (ppcVar12 != (char * PTR32 *)0x0) {
        F_00406ad0(ppcVar12);
      }
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) != (char * PTR32 *)0x0) {
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)));
        F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
        return 0;
      }
      goto LAB_00e5fdc4;
    }
    if ((*(char * PTR32 *)(gen_frame + 0x20)) != pcVar4) {
      if (ppcVar12 != (char * PTR32 *)0x0) {
        F_00406ad0(ppcVar12);
      }
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) != (char * PTR32 *)0x0) {
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)));
        F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
        return 0;
      }
      goto LAB_00e5fdc4;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)pGVar13 + 4))(pGVar13)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar8 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
    if (pcVar8 != (char *)0x0) {
      pcVar9 = (char *)0x0;
      if (pcVar4 != (char *)0x0) {
        do {
          if (pcVar8 == ppcVar12[(int)pcVar9]) break;
          pcVar9 = pcVar9 + 1;
        } while (pcVar9 < pcVar4);
      }
      if (pcVar9 < (*(char * PTR32 *)(gen_frame + 0x20))) {
        uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[(int)pcVar9]);
        *(int *)(pGVar13 + 4) = (int)uVar14;
        goto LAB_00e5fbf9;
      }
LAB_00e5fc47: ;
      if (ppcVar12 != (char * PTR32 *)0x0) {
        F_00406ad0(ppcVar12);
      }
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) != (char * PTR32 *)0x0) {
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)));
        F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
        return 0;
      }
      goto LAB_00e5fdc4;
    }
LAB_00e5fbf9: ;
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)pGVar13 + 4))(pGVar13)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,1);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar8 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
    ppcVar11 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24));
    if (pcVar8 != (char *)0x0) {
      pcVar9 = (char *)0x0;
      if (pcVar4 != (char *)0x0) {
        do {
          if (pcVar8 == ppcVar12[(int)pcVar9]) break;
          pcVar9 = pcVar9 + 1;
        } while (pcVar9 < pcVar4);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x20)) <= pcVar9) goto LAB_00e5fc47;
      uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[(int)pcVar9]);
      pGVar13[8] = SUB81(uVar14,0);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)pGVar13 + 4))(pGVar13)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,2);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar8 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
    if (pcVar8 != (char *)0x0) {
      pcVar4 = (char *)0x0;
      if ((*(char * PTR32 *)(gen_frame + 0x14)) != (char *)0x0) {
        do {
          if (pcVar8 == ppcVar12[(int)pcVar4]) break;
          pcVar4 = pcVar4 + 1;
        } while (pcVar4 < (*(char * PTR32 *)(gen_frame + 0x14)));
      }
      if ((*(char * PTR32 *)(gen_frame + 0x20)) <= pcVar4) {
        if (ppcVar12 != (char * PTR32 *)0x0) {
          F_00406ad0(ppcVar12);
        }
        if (ppcVar11 != (char * PTR32 *)0x0) {
          F_00406ad0(ppcVar11);
          F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
          return 0;
        }
        goto LAB_00e5fdc4;
      }
      pcVar8 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[(int)pcVar4];
      pGVar13 = pGVar13 + 0xc;
      iVar5 = 2;
      do {
        fVar15 = F_00e50660(pcVar8);
        *(float *)pGVar13 = fVar15;
        uVar3 = F_00c51da0(pcVar8,0x2c);
        pGVar13 = pGVar13 + 4;
        iVar5 = iVar5 + -1;
        pcVar8 = (char *)(uVar3 + 2);
      } while (iVar5 != 0);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 4))((*(undefined * PTR32 *)(gen_frame + 0x18)))));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,3);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar8 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
    if (pcVar8 == (char *)0x0) {
LAB_00e5fe0c: ;
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x4)) != (char * PTR32 *)0x0) {
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x4)));
      }
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) != (char * PTR32 *)0x0) {
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)));
      }
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
      return 1;
    }
    pcVar4 = (char *)0x0;
    if ((*(char * PTR32 *)(gen_frame + 0x14)) != (char *)0x0) {
      do {
        if (pcVar8 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x4))[(int)pcVar4]) break;
        pcVar4 = pcVar4 + 1;
      } while (pcVar4 < (*(char * PTR32 *)(gen_frame + 0x14)));
    }
    if (pcVar4 < (*(char * PTR32 *)(gen_frame + 0x20))) {
      pcVar8 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[(int)pcVar4];
      pGVar13 = (*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x14;
      iVar5 = 4;
      do {
        uVar14 = F_00e505e0(pcVar8);
        *(int *)pGVar13 = (int)uVar14;
        uVar3 = F_00c51da0(pcVar8,0x2c);
        pGVar13 = pGVar13 + 4;
        iVar5 = iVar5 + -1;
        pcVar8 = (char *)(uVar3 + 2);
      } while (iVar5 != 0);
      goto LAB_00e5fe0c;
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x4)) != (char * PTR32 *)0x0) {
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x4)));
    }
  }
LAB_00e5fdb7: ;
  if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) != (char * PTR32 *)0x0) {
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)));
  }
LAB_00e5fdc4: ;
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork::vf20 */
byte F_00e5fe50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe5fe50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  char * pcVar6;
  char * pcVar7;
  char * pcVar8;
  uint uVar9;
  char * pcVar10;
  uint uVar11;
  char * PTR32 * ppcVar12;
  char * PTR32 * ppcVar13;
  ulonglong uVar14;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  pcVar8 = param_1 + 1;
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  F_00c472af(((char *)(gen_frame + 0x38)),0x40,"\"classid\":%llu",uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x38));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813(pcVar8,((char *)(gen_frame + 0x38)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x38)) + 1))));
  if (iVar5 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
    return 0;
  }
  uVar3 = F_00fb9ad0(pcVar8,"\"content\":[");
  if (uVar3 == 0) goto LAB_00e607fe;
  pcVar4 = (char *)(uVar3 + 0xb);
  pcVar10 = param_1;
  do {
    pcVar6 = pcVar10;
    pcVar10 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  iVar5 = 1;
  for (pcVar10 = pcVar8; pcVar7 = pcVar6 + -1, pcVar10 < pcVar6 + -1; pcVar10 = pcVar10 + 1) {
    if (*pcVar10 == '{') {
      iVar5 = iVar5 + 1;
    }
    else if ((*pcVar10 == '}') && (iVar5 = iVar5 + -1, pcVar7 = pcVar10, iVar5 == 0)) break;
  }
  pcVar8 = (char *)F_00e50750(pcVar8,"\"memberid\":[",pcVar7);
  if (pcVar8 == (char *)0x0) goto LAB_00e607fe;
  (*(char * PTR32 *)(gen_frame + 0x1c)) = pcVar8 + 0xc;
  (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar8;
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2);
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x28)) = (char * PTR32 *)0x0;
  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x20)),uVar3);
  (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4;
  pcVar10 = (*(char * PTR32 *)(gen_frame + 0x1c));
  ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24));
  if (pcVar4 != pcVar8) {
    do {
      cVar1 = *pcVar4;
      if (cVar1 == '\"') {
        pcVar4 = pcVar4 + 1;
        (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4;
        if ((&(*(char * PTR32 *)(gen_frame + 0x34)) < ppcVar12) && ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) <= &(*(char * PTR32 *)(gen_frame + 0x34)))) {
          iVar5 = (int)&(*(char * PTR32 *)(gen_frame + 0x34)) - (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x20));
          if (ppcVar12 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x28))) {
            F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x20)),1);
            ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24));
          }
          if (ppcVar12 != (char * PTR32 *)0x0) {
            *ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[iVar5 >> 2];
          }
        }
        else {
          if (ppcVar12 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x28))) {
            F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x20)),1);
            ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24));
          }
          if (ppcVar12 != (char * PTR32 *)0x0) {
            *ppcVar12 = pcVar4;
          }
        }
        ppcVar12 = ppcVar12 + 1;
        (*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) = ppcVar12;
        pcVar4 = (char *)F_00c51da0(pcVar4,0x22);
        pcVar10 = (*(char * PTR32 *)(gen_frame + 0x1c));
      }
      else {
        if (cVar1 == '{') {
          (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4;
          F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x20)),&(*(char * PTR32 *)(gen_frame + 0x34)));
          pcVar4 = (*(char * PTR32 *)(gen_frame + 0x34)) + 1;
          iVar5 = 1;
          if (pcVar4 == pcVar10) goto LAB_00e606ef;
          do {
            if (*pcVar4 == '{') {
              iVar5 = iVar5 + 1;
            }
            else if ((*pcVar4 == '}') && (iVar5 = iVar5 + -1, iVar5 == 0)) break;
            pcVar4 = pcVar4 + 1;
          } while (pcVar4 != pcVar10);
        }
        else {
          if (cVar1 != '[') goto LAB_00e60093;
          (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4 + 1;
          iVar5 = 1;
          if (pcVar4[1] == '\"') {
LAB_00e6005b: ;
            (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4 + 2;
          }
          else if (pcVar4[1] == '[') {
            iVar5 = 2;
            goto LAB_00e6005b;
          }
          F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x20)),&(*(char * PTR32 *)(gen_frame + 0x34)));
          for (pcVar4 = (*(char * PTR32 *)(gen_frame + 0x34)); pcVar4 != pcVar10; pcVar4 = pcVar4 + 1) {
            if (*pcVar4 == '[') {
              iVar5 = iVar5 + 1;
            }
            else if ((*pcVar4 == ']') && (iVar5 = iVar5 + -1, iVar5 == 0)) break;
          }
        }
        ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24));
        if (iVar5 == 1) goto LAB_00e606ef;
      }
LAB_00e60093: ;
      pcVar4 = pcVar4 + 1;
      (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4;
    } while (pcVar4 != (*(char * PTR32 *)(gen_frame + 0x30)));
  }
  pcVar8 = (char *)((int)ppcVar12 - (int)((int)(uintptr_t)(*(char * PTR32 * PTR32 *)(gen_frame + 0x20))) >> 2);
  (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar8;
  if ((int)uVar3 < (int)pcVar8) {
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != (char * PTR32 *)0x0) {
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
      return 0;
    }
    goto LAB_00e607fe;
  }
  (*(char * PTR32 * PTR32 *)(gen_frame + 0xc)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x10)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) = (char * PTR32 *)0x0;
  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0xc)),uVar3);
  cVar1 = *(*(char * PTR32 *)(gen_frame + 0x1c));
  (*(char * PTR32 *)(gen_frame + 0x30)) = (*(char * PTR32 *)(gen_frame + 0x1c));
  ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0xc));
  ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x10));
  while (cVar1 != ']') {
    if (*(*(char * PTR32 *)(gen_frame + 0x30)) == '\"') {
      if ((&(*(char * PTR32 *)(gen_frame + 0x30)) < ppcVar13) && (ppcVar12 <= &(*(char * PTR32 *)(gen_frame + 0x30)))) {
        iVar5 = (int)&(*(char * PTR32 *)(gen_frame + 0x30)) - (int)ppcVar12;
        if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x14))) {
          uVar9 = (int)ppcVar13 - (int)((int)(uintptr_t)ppcVar12) >> 2;
          if (0x3ffffffe < uVar9) {
LAB_00e60236: ;
                    
            F_00c4579a("vector<T> too long");
          }
          uVar9 = uVar9 + 1;
          uVar11 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) - (int)((int)(uintptr_t)ppcVar12) >> 2;
          if (uVar11 < uVar9) {
            if (0x3fffffff - (uVar11 >> 1) < uVar11) {
              uVar11 = 0;
            }
            else {
              uVar11 = uVar11 + (uVar11 >> 1);
            }
            if (uVar11 < uVar9) {
              uVar11 = uVar9;
            }
            F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0xc)),uVar11);
            ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0xc));
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x10));
          }
        }
        if (ppcVar13 != (char * PTR32 *)0x0) {
          *ppcVar13 = ppcVar12[iVar5 >> 2];
        }
      }
      else {
        if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x14))) {
          uVar9 = (int)ppcVar13 - (int)((int)(uintptr_t)ppcVar12) >> 2;
          if (0x3ffffffe < uVar9) goto LAB_00e60236;
          uVar9 = uVar9 + 1;
          uVar11 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) - (int)((int)(uintptr_t)ppcVar12) >> 2;
          if (uVar11 < uVar9) {
            if (0x3fffffff - (uVar11 >> 1) < uVar11) {
              uVar11 = 0;
            }
            else {
              uVar11 = uVar11 + (uVar11 >> 1);
            }
            if (uVar11 < uVar9) {
              uVar11 = uVar9;
            }
            F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0xc)),uVar11);
            ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0xc));
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x10));
          }
        }
        if (ppcVar13 != (char * PTR32 *)0x0) {
          *ppcVar13 = (*(char * PTR32 *)(gen_frame + 0x30));
        }
      }
      ppcVar13 = ppcVar13 + 1;
      (*(char * PTR32 * PTR32 *)(gen_frame + 0x10)) = ppcVar13;
      pcVar8 = (char *)F_00c51da0((*(char * PTR32 *)(gen_frame + 0x30)) + 1,0x22);
      (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar8;
      if (pcVar8 == (char *)0x0) {
        if (ppcVar12 != (char * PTR32 *)0x0) {
          F_00406ad0(ppcVar12);
        }
        if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != (char * PTR32 *)0x0) {
          F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
          F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
          return 0;
        }
        goto LAB_00e607fe;
      }
    }
    (*(char * PTR32 *)(gen_frame + 0x30)) = (*(char * PTR32 *)(gen_frame + 0x30)) + 1;
    cVar1 = *(*(char * PTR32 *)(gen_frame + 0x30));
  }
  pcVar8 = (char *)((int)ppcVar13 - (int)((int)(uintptr_t)ppcVar12) >> 2);
  (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar8;
  if ((int)uVar3 < (int)pcVar8) {
    if (ppcVar12 != (char * PTR32 *)0x0) {
      F_00406ad0(ppcVar12);
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != (char * PTR32 *)0x0) {
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
      return 0;
    }
    goto LAB_00e607fe;
  }
  if ((*(char * PTR32 *)(gen_frame + 0x34)) != pcVar8) {
    if (ppcVar12 != (char * PTR32 *)0x0) {
      F_00406ad0(ppcVar12);
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != (char * PTR32 *)0x0) {
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
      return 0;
    }
    goto LAB_00e607fe;
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0);
  F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
  pcVar8 = (*(char * PTR32 *)(gen_frame + 0x1c));
  pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
  if (pcVar4 != (char *)0x0) {
    pcVar10 = (char *)0x0;
    if ((*(char * PTR32 *)(gen_frame + 0x30)) != (char *)0x0) {
      do {
        if (pcVar4 == (*(char * PTR32 * PTR32 *)(gen_frame + 0xc))[(int)pcVar10]) break;
        pcVar10 = pcVar10 + 1;
      } while (pcVar10 < (*(char * PTR32 *)(gen_frame + 0x30)));
    }
    if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar10) {
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0xc)) != (char * PTR32 *)0x0) {
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0xc)));
      }
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != (char * PTR32 *)0x0) {
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
        F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
        return 0;
      }
      goto LAB_00e607fe;
    }
    pcVar4 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar10];
    uVar3 = F_00c51da0(pcVar4,0x22);
    F_00c4d9ef(this + 4,uVar3 + (1 - (int)pcVar4),pcVar4,0xffffffff);
  }
  pcVar4 = (*(char * PTR32 *)(gen_frame + 0x30));
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,1);
  F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
  pcVar10 = (char *)F_00fb9ad0(pcVar8,((char *)(gen_frame + 0x38)));
  if (pcVar10 != (char *)0x0) {
    pcVar8 = (char *)0x0;
    if (pcVar4 != (char *)0x0) {
      do {
        if (pcVar10 == (*(char * PTR32 * PTR32 *)(gen_frame + 0xc))[(int)pcVar8]) break;
        pcVar8 = pcVar8 + 1;
      } while (pcVar8 < pcVar4);
    }
    if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar8) {
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0xc)) != (char * PTR32 *)0x0) {
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0xc)));
      }
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != (char * PTR32 *)0x0) {
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
        F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
        return 0;
      }
      goto LAB_00e607fe;
    }
    pcVar4 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar8];
    iVar5 = 0;
    do {
      uVar14 = F_00e50570(pcVar4);
      this[iVar5 + 0x19] = SUB81(uVar14,0);
      uVar3 = F_00c51da0(pcVar4,0x2c);
      iVar5 = iVar5 + 1;
      pcVar4 = (char *)(uVar3 + 2);
      pcVar8 = (*(char * PTR32 *)(gen_frame + 0x1c));
    } while (iVar5 < 8);
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,2);
  F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
  pcVar8 = (char *)F_00fb9ad0(pcVar8,((char *)(gen_frame + 0x38)));
  if (pcVar8 != (char *)0x0) {
    pcVar4 = (char *)0x0;
    if ((*(char * PTR32 *)(gen_frame + 0x30)) != (char *)0x0) {
      do {
        if (pcVar8 == (*(char * PTR32 * PTR32 *)(gen_frame + 0xc))[(int)pcVar4]) break;
        pcVar4 = pcVar4 + 1;
      } while (pcVar4 < (*(char * PTR32 *)(gen_frame + 0x30)));
    }
    if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar4) {
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0xc)) != (char * PTR32 *)0x0) {
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0xc)));
      }
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != (char * PTR32 *)0x0) {
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
        F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
        return 0;
      }
      goto LAB_00e607fe;
    }
    pcVar8 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar4];
    iVar5 = 0;
    do {
      uVar14 = F_00e50570(pcVar8);
      this[iVar5 + 0x21] = SUB81(uVar14,0);
      uVar3 = F_00c51da0(pcVar8,0x2c);
      iVar5 = iVar5 + 1;
      pcVar8 = (char *)(uVar3 + 2);
    } while (iVar5 < 3);
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,3);
  F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
  pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
  pcVar8 = (*(char * PTR32 *)(gen_frame + 0x30));
  ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0xc));
  if (pcVar4 != (char *)0x0) {
    pcVar10 = (char *)0x0;
    if ((*(char * PTR32 *)(gen_frame + 0x30)) != (char *)0x0) {
      do {
        if (pcVar4 == (*(char * PTR32 * PTR32 *)(gen_frame + 0xc))[(int)pcVar10]) break;
        pcVar10 = pcVar10 + 1;
      } while (pcVar10 < (*(char * PTR32 *)(gen_frame + 0x30)));
    }
    if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar10) {
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0xc)) != (char * PTR32 *)0x0) {
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0xc)));
      }
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != (char * PTR32 *)0x0) {
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
        F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
        return 0;
      }
      goto LAB_00e607fe;
    }
    uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar10]);
    this[0x24] = SUB81(uVar14,0);
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,4);
  F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
  pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
  if (pcVar4 == (char *)0x0) {
LAB_00e605d5: ;
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,5);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar8 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
    if (pcVar8 != (char *)0x0) {
      pcVar4 = (char *)0x0;
      if ((*(char * PTR32 *)(gen_frame + 0x30)) != (char *)0x0) {
        do {
          if (pcVar8 == (*(char * PTR32 * PTR32 *)(gen_frame + 0xc))[(int)pcVar4]) break;
          pcVar4 = pcVar4 + 1;
        } while (pcVar4 < (*(char * PTR32 *)(gen_frame + 0x30)));
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar4) {
        if ((*(char * PTR32 * PTR32 *)(gen_frame + 0xc)) != (char * PTR32 *)0x0) {
          F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0xc)));
        }
        if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != (char * PTR32 *)0x0) {
          F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
          F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
          return 0;
        }
        goto LAB_00e607fe;
      }
      pcVar8 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar4];
      iVar5 = 0;
      do {
        uVar14 = F_00e50570(pcVar8);
        this[iVar5 + 0x26] = SUB81(uVar14,0);
        uVar3 = F_00c51da0(pcVar8,0x2c);
        iVar5 = iVar5 + 1;
        pcVar8 = (char *)(uVar3 + 2);
      } while (iVar5 < 3);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,6);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
    pcVar8 = (*(char * PTR32 *)(gen_frame + 0x30));
    ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0xc));
    if (pcVar4 != (char *)0x0) {
      pcVar10 = (char *)0x0;
      if ((*(char * PTR32 *)(gen_frame + 0x30)) != (char *)0x0) {
        do {
          if (pcVar4 == (*(char * PTR32 * PTR32 *)(gen_frame + 0xc))[(int)pcVar10]) break;
          pcVar10 = pcVar10 + 1;
        } while (pcVar10 < (*(char * PTR32 *)(gen_frame + 0x30)));
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar10) {
        if ((*(char * PTR32 * PTR32 *)(gen_frame + 0xc)) != (char * PTR32 *)0x0) {
          F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0xc)));
        }
LAB_00e606ef: ;
        if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != (char * PTR32 *)0x0) {
          F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
          F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
          return 0;
        }
        goto LAB_00e607fe;
      }
      uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar10]);
      *(int *)(this + 0x2c) = (int)uVar14;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,7);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
    if (pcVar4 != (char *)0x0) {
      pcVar10 = (char *)0x0;
      if (pcVar8 != (char *)0x0) {
        do {
          if (pcVar4 == ppcVar12[(int)pcVar10]) break;
          pcVar10 = pcVar10 + 1;
        } while (pcVar10 < pcVar8);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar10) goto LAB_00e607df;
      uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar10]);
      *(int *)(this + 0x30) = (int)uVar14;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,8);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
    ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x20));
    if (pcVar4 == (char *)0x0) {
LAB_00e6082a: ;
      if (ppcVar12 != (char * PTR32 *)0x0) {
        F_00406ad0(ppcVar12);
      }
      if (ppcVar13 != (char * PTR32 *)0x0) {
        F_00406ad0(ppcVar13);
      }
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
      return 1;
    }
    pcVar10 = (char *)0x0;
    if (pcVar8 != (char *)0x0) {
      do {
        if (pcVar4 == ppcVar12[(int)pcVar10]) break;
        pcVar10 = pcVar10 + 1;
      } while (pcVar10 < pcVar8);
    }
    if (pcVar10 < (*(char * PTR32 *)(gen_frame + 0x34))) {
      uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar10]);
      *(int *)(this + 0x34) = (int)uVar14;
      goto LAB_00e6082a;
    }
  }
  else {
    pcVar10 = (char *)0x0;
    if (pcVar8 != (char *)0x0) {
      do {
        if (pcVar4 == ppcVar12[(int)pcVar10]) break;
        pcVar10 = pcVar10 + 1;
      } while (pcVar10 < pcVar8);
    }
    if (pcVar10 < (*(char * PTR32 *)(gen_frame + 0x34))) {
      uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar10]);
      this[0x25] = SUB81(uVar14,0);
      goto LAB_00e605d5;
    }
  }
LAB_00e607df: ;
  if (ppcVar12 != (char * PTR32 *)0x0) {
    F_00406ad0(ppcVar12);
  }
  if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != (char * PTR32 *)0x0) {
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
  }
LAB_00e607fe: ;
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork::vf20 */
byte F_00e60860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe60860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  char * pcVar6;
  char * pcVar7;
  char * pcVar8;
  uint uVar9;
  char * pcVar10;
  uint uVar11;
  char * PTR32 * ppcVar12;
  char * PTR32 * ppcVar13;
  ulonglong uVar14;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  pcVar8 = param_1 + 1;
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  F_00c472af(((char *)(gen_frame + 0x38)),0x40,"\"classid\":%llu",uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x38));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813(pcVar8,((char *)(gen_frame + 0x38)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x38)) + 1))));
  if (iVar5 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
    return 0;
  }
  uVar3 = F_00fb9ad0(pcVar8,"\"content\":[");
  if (uVar3 == 0) goto LAB_00e60ea6;
  pcVar4 = (char *)(uVar3 + 0xb);
  pcVar10 = param_1;
  do {
    pcVar6 = pcVar10;
    pcVar10 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  iVar5 = 1;
  for (pcVar10 = pcVar8; pcVar7 = pcVar6 + -1, pcVar10 < pcVar6 + -1; pcVar10 = pcVar10 + 1) {
    if (*pcVar10 == '{') {
      iVar5 = iVar5 + 1;
    }
    else if ((*pcVar10 == '}') && (iVar5 = iVar5 + -1, pcVar7 = pcVar10, iVar5 == 0)) break;
  }
  pcVar8 = (char *)F_00e50750(pcVar8,"\"memberid\":[",pcVar7);
  if (pcVar8 == (char *)0x0) goto LAB_00e60ea6;
  (*(char * PTR32 *)(gen_frame + 0x1c)) = pcVar8 + 0xc;
  (*(char * PTR32 *)(gen_frame + 0x20)) = pcVar8;
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2);
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x28)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x2c)) = (char * PTR32 *)0x0;
  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x24)),uVar3);
  (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4;
  pcVar10 = (*(char * PTR32 *)(gen_frame + 0x1c));
  ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x28));
  if (pcVar4 != pcVar8) {
    do {
      cVar1 = *pcVar4;
      if (cVar1 == '\"') {
        pcVar4 = pcVar4 + 1;
        (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4;
        if ((&(*(char * PTR32 *)(gen_frame + 0x34)) < ppcVar13) && ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) <= &(*(char * PTR32 *)(gen_frame + 0x34)))) {
          iVar5 = (int)&(*(char * PTR32 *)(gen_frame + 0x34)) - (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x24));
          if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x2c))) {
            F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x24)),1);
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x28));
          }
          if (ppcVar13 != (char * PTR32 *)0x0) {
            *ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[iVar5 >> 2];
          }
        }
        else {
          if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x2c))) {
            F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x24)),1);
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x28));
          }
          if (ppcVar13 != (char * PTR32 *)0x0) {
            *ppcVar13 = pcVar4;
          }
        }
        ppcVar13 = ppcVar13 + 1;
        (*(char * PTR32 * PTR32 *)(gen_frame + 0x28)) = ppcVar13;
        pcVar4 = (char *)F_00c51da0(pcVar4,0x22);
        pcVar10 = (*(char * PTR32 *)(gen_frame + 0x1c));
      }
      else {
        if (cVar1 == '{') {
          (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4;
          F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x24)),&(*(char * PTR32 *)(gen_frame + 0x34)));
          pcVar4 = (*(char * PTR32 *)(gen_frame + 0x34)) + 1;
          iVar5 = 1;
          if (pcVar4 == pcVar10) goto LAB_00e60c40;
          do {
            if (*pcVar4 == '{') {
              iVar5 = iVar5 + 1;
            }
            else if ((*pcVar4 == '}') && (iVar5 = iVar5 + -1, iVar5 == 0)) break;
            pcVar4 = pcVar4 + 1;
          } while (pcVar4 != pcVar10);
        }
        else {
          if (cVar1 != '[') goto LAB_00e60aa3;
          (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4 + 1;
          iVar5 = 1;
          if (pcVar4[1] == '\"') {
LAB_00e60a6b: ;
            (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4 + 2;
          }
          else if (pcVar4[1] == '[') {
            iVar5 = 2;
            goto LAB_00e60a6b;
          }
          F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x24)),&(*(char * PTR32 *)(gen_frame + 0x34)));
          for (pcVar4 = (*(char * PTR32 *)(gen_frame + 0x34)); pcVar4 != pcVar10; pcVar4 = pcVar4 + 1) {
            if (*pcVar4 == '[') {
              iVar5 = iVar5 + 1;
            }
            else if ((*pcVar4 == ']') && (iVar5 = iVar5 + -1, iVar5 == 0)) break;
          }
        }
        ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x28));
        if (iVar5 == 1) goto LAB_00e60c40;
      }
LAB_00e60aa3: ;
      pcVar4 = pcVar4 + 1;
      (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4;
    } while (pcVar4 != (*(char * PTR32 *)(gen_frame + 0x20)));
  }
  pcVar8 = (char *)((int)ppcVar13 - (int)((int)(uintptr_t)(*(char * PTR32 * PTR32 *)(gen_frame + 0x24))) >> 2);
  (*(char * PTR32 *)(gen_frame + 0x20)) = pcVar8;
  if ((int)uVar3 < (int)pcVar8) {
LAB_00e60c40: ;
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) != (char * PTR32 *)0x0) {
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)));
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
      return 0;
    }
    goto LAB_00e60ea6;
  }
  (*(char * PTR32 * PTR32 *)(gen_frame + 0xc)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x10)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) = (char * PTR32 *)0x0;
  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0xc)),uVar3);
  cVar1 = *(*(char * PTR32 *)(gen_frame + 0x1c));
  (*(char * PTR32 *)(gen_frame + 0x34)) = (*(char * PTR32 *)(gen_frame + 0x1c));
  ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0xc));
  ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x10));
  pcVar8 = (*(char * PTR32 *)(gen_frame + 0x1c));
  while ((*(char * PTR32 *)(gen_frame + 0x34)) = pcVar8, cVar1 != ']') {
    if (*pcVar8 == '\"') {
      if ((&(*(char * PTR32 *)(gen_frame + 0x34)) < ppcVar12) && (ppcVar13 <= &(*(char * PTR32 *)(gen_frame + 0x34)))) {
        iVar5 = (int)&(*(char * PTR32 *)(gen_frame + 0x34)) - (int)ppcVar13;
        if (ppcVar12 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x14))) {
          uVar9 = (int)ppcVar12 - (int)((int)(uintptr_t)ppcVar13) >> 2;
          if (0x3ffffffe < uVar9) {
LAB_00e60c26: ;
                    
            F_00c4579a("vector<T> too long");
          }
          uVar9 = uVar9 + 1;
          uVar11 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) - (int)((int)(uintptr_t)ppcVar13) >> 2;
          if (uVar11 < uVar9) {
            if (0x3fffffff - (uVar11 >> 1) < uVar11) {
              uVar11 = 0;
            }
            else {
              uVar11 = uVar11 + (uVar11 >> 1);
            }
            if (uVar11 < uVar9) {
              uVar11 = uVar9;
            }
            F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0xc)),uVar11);
            ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x10));
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0xc));
          }
        }
        if (ppcVar12 != (char * PTR32 *)0x0) {
          *ppcVar12 = ppcVar13[iVar5 >> 2];
        }
      }
      else {
        if (ppcVar12 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x14))) {
          uVar9 = (int)ppcVar12 - (int)((int)(uintptr_t)ppcVar13) >> 2;
          if (0x3ffffffe < uVar9) goto LAB_00e60c26;
          uVar9 = uVar9 + 1;
          uVar11 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) - (int)((int)(uintptr_t)ppcVar13) >> 2;
          if (uVar11 < uVar9) {
            if (0x3fffffff - (uVar11 >> 1) < uVar11) {
              uVar11 = 0;
            }
            else {
              uVar11 = uVar11 + (uVar11 >> 1);
            }
            if (uVar11 < uVar9) {
              uVar11 = uVar9;
            }
            F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0xc)),uVar11);
            ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x10));
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0xc));
          }
        }
        if (ppcVar12 != (char * PTR32 *)0x0) {
          *ppcVar12 = pcVar8;
        }
      }
      ppcVar12 = ppcVar12 + 1;
      (*(char * PTR32 * PTR32 *)(gen_frame + 0x10)) = ppcVar12;
      pcVar8 = (char *)F_00c51da0((*(char * PTR32 *)(gen_frame + 0x34)) + 1,0x22);
      (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar8;
      if (pcVar8 == (char *)0x0) {
        if (ppcVar13 != (char * PTR32 *)0x0) {
          F_00406ad0(ppcVar13);
        }
        goto LAB_00e60c40;
      }
    }
    pcVar8 = pcVar8 + 1;
    cVar1 = *pcVar8;
    (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar8;
  }
  pcVar8 = (char *)((int)ppcVar12 - (int)((int)(uintptr_t)ppcVar13) >> 2);
  if ((int)uVar3 < (int)pcVar8) {
    if (ppcVar13 != (char * PTR32 *)0x0) {
      F_00406ad0(ppcVar13);
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) != (char * PTR32 *)0x0) {
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)));
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
      return 0;
    }
    goto LAB_00e60ea6;
  }
  if ((*(char * PTR32 *)(gen_frame + 0x20)) != pcVar8) {
    if (ppcVar13 != (char * PTR32 *)0x0) {
      F_00406ad0(ppcVar13);
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) != (char * PTR32 *)0x0) {
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)));
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
      return 0;
    }
    goto LAB_00e60ea6;
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0);
  F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
  pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
  if (pcVar4 == (char *)0x0) {
LAB_00e60d0d: ;
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,1);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
    if (pcVar4 != (char *)0x0) {
      pcVar10 = (char *)0x0;
      if (pcVar8 != (char *)0x0) {
        do {
          if (pcVar4 == ppcVar13[(int)pcVar10]) break;
          pcVar10 = pcVar10 + 1;
        } while (pcVar10 < pcVar8);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x20)) <= pcVar10) goto LAB_00e60e87;
      uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[(int)pcVar10]);
      *(int *)(this + 0x10) = (int)uVar14;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,2);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
    if (pcVar4 != (char *)0x0) {
      pcVar10 = (char *)0x0;
      if (pcVar8 != (char *)0x0) {
        do {
          if (pcVar4 == ppcVar13[(int)pcVar10]) break;
          pcVar10 = pcVar10 + 1;
        } while (pcVar10 < pcVar8);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x20)) <= pcVar10) goto LAB_00e60e87;
      uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[(int)pcVar10]);
      this[0x14] = SUB81(uVar14,0);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,3);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
    if (pcVar4 != (char *)0x0) {
      pcVar10 = (char *)0x0;
      if (pcVar8 != (char *)0x0) {
        do {
          if (pcVar4 == ppcVar13[(int)pcVar10]) break;
          pcVar10 = pcVar10 + 1;
        } while (pcVar10 < pcVar8);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x20)) <= pcVar10) goto LAB_00e60e87;
      uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[(int)pcVar10]);
      this[0x15] = SUB81(uVar14,0);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,4);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
    ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24));
    if (pcVar4 == (char *)0x0) {
LAB_00e60ed2: ;
      if (ppcVar13 != (char * PTR32 *)0x0) {
        F_00406ad0(ppcVar13);
      }
      if (ppcVar12 != (char * PTR32 *)0x0) {
        F_00406ad0(ppcVar12);
      }
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
      return 1;
    }
    pcVar10 = (char *)0x0;
    if (pcVar8 != (char *)0x0) {
      do {
        if (pcVar4 == ppcVar13[(int)pcVar10]) break;
        pcVar10 = pcVar10 + 1;
      } while (pcVar10 < pcVar8);
    }
    if (pcVar10 < (*(char * PTR32 *)(gen_frame + 0x20))) {
      uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[(int)pcVar10]);
      *(int *)(this + 0x18) = (int)uVar14;
      goto LAB_00e60ed2;
    }
  }
  else {
    pcVar10 = (char *)0x0;
    if (pcVar8 != (char *)0x0) {
      do {
        if (pcVar4 == ppcVar13[(int)pcVar10]) break;
        pcVar10 = pcVar10 + 1;
      } while (pcVar10 < pcVar8);
    }
    if (pcVar10 < (*(char * PTR32 *)(gen_frame + 0x20))) {
      uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[(int)pcVar10]);
      *(ulonglong *)(this + 8) = uVar14;
      goto LAB_00e60d0d;
    }
  }
LAB_00e60e87: ;
  if (ppcVar13 != (char * PTR32 *)0x0) {
    F_00406ad0(ppcVar13);
  }
  if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) != (char * PTR32 *)0x0) {
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)));
  }
LAB_00e60ea6: ;
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork::vf20 */
byte F_00e60f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe60f10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  char * pcVar6;
  char * pcVar7;
  uint uVar8;
  char * PTR32 * ppcVar9;
  char * pcVar10;
  char * PTR32 * ppcVar11;
  char * PTR32 * ppcVar12;
  undefined * pDVar13;
  ulonglong uVar14;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = this;
  pcVar7 = param_1 + 1;
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  F_00c472af(((char *)(gen_frame + 0x38)),0x40,"\"classid\":%llu",uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x38));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813(pcVar7,((char *)(gen_frame + 0x38)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x38)) + 1))));
  if (iVar5 == 0) {
    pcVar4 = (char *)F_00fb9ad0(pcVar7,"\"content\":[");
    (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4;
    if (pcVar4 != (char *)0x0) {
      (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4 + 0xb;
      pcVar4 = param_1;
      do {
        pcVar10 = pcVar4;
        pcVar4 = pcVar10 + 1;
      } while (*pcVar10 != '\0');
      iVar5 = 1;
      for (pcVar4 = pcVar7; pcVar6 = pcVar10 + -1, pcVar4 < pcVar10 + -1; pcVar4 = pcVar4 + 1) {
        if (*pcVar4 == '{') {
          iVar5 = iVar5 + 1;
        }
        else if ((*pcVar4 == '}') && (iVar5 = iVar5 + -1, pcVar6 = pcVar4, iVar5 == 0)) break;
      }
      pcVar7 = (char *)F_00e50750(pcVar7,"\"memberid\":[",pcVar6);
      if (pcVar7 != (char *)0x0) {
        (*(char * PTR32 *)(gen_frame + 0x18)) = pcVar7 + 0xc;
        (*(char * PTR32 *)(gen_frame + 0x1c)) = pcVar7;
        piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
        uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2);
        (*(uint *)(gen_frame + 0x30)) = uVar3;
        (*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) = (char * PTR32 *)0x0;
        (*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) = (char * PTR32 *)0x0;
        (*(char * PTR32 * PTR32 *)(gen_frame + 0x28)) = (char * PTR32 *)0x0;
        F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x20)),uVar3);
        pcVar4 = (*(char * PTR32 *)(gen_frame + 0x34));
        pcVar10 = (*(char * PTR32 *)(gen_frame + 0x18));
        ppcVar11 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24));
        if ((*(char * PTR32 *)(gen_frame + 0x34)) != pcVar7) {
          do {
            cVar1 = *pcVar4;
            if (cVar1 == '\"') {
              pcVar4 = pcVar4 + 1;
              (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4;
              if ((&(*(char * PTR32 *)(gen_frame + 0x34)) < ppcVar11) && ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) <= &(*(char * PTR32 *)(gen_frame + 0x34)))) {
                iVar5 = (int)&(*(char * PTR32 *)(gen_frame + 0x34)) - (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x20));
                if (ppcVar11 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x28))) {
                  F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x20)),1);
                  ppcVar11 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24));
                }
                if (ppcVar11 != (char * PTR32 *)0x0) {
                  *ppcVar11 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[iVar5 >> 2];
                }
              }
              else {
                if (ppcVar11 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x28))) {
                  F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x20)),1);
                  ppcVar11 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24));
                }
                if (ppcVar11 != (char * PTR32 *)0x0) {
                  *ppcVar11 = pcVar4;
                }
              }
              ppcVar11 = ppcVar11 + 1;
              (*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) = ppcVar11;
              pcVar4 = (char *)F_00c51da0(pcVar4,0x22);
              pcVar10 = (*(char * PTR32 *)(gen_frame + 0x18));
            }
            else {
              if (cVar1 == '{') {
                (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4;
                F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x20)),&(*(char * PTR32 *)(gen_frame + 0x34)));
                pcVar4 = (*(char * PTR32 *)(gen_frame + 0x34)) + 1;
                iVar5 = 1;
                if (pcVar4 == pcVar10) goto LAB_00e612db;
                do {
                  if (*pcVar4 == '{') {
                    iVar5 = iVar5 + 1;
                  }
                  else if ((*pcVar4 == '}') && (iVar5 = iVar5 + -1, iVar5 == 0)) break;
                  pcVar4 = pcVar4 + 1;
                } while (pcVar4 != pcVar10);
              }
              else {
                if (cVar1 != '[') goto LAB_00e61143;
                (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4 + 1;
                iVar5 = 1;
                if (pcVar4[1] == '\"') {
LAB_00e6110b: ;
                  (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4 + 2;
                }
                else if (pcVar4[1] == '[') {
                  iVar5 = 2;
                  goto LAB_00e6110b;
                }
                F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x20)),&(*(char * PTR32 *)(gen_frame + 0x34)));
                for (pcVar4 = (*(char * PTR32 *)(gen_frame + 0x34)); pcVar4 != pcVar10; pcVar4 = pcVar4 + 1) {
                  if (*pcVar4 == '[') {
                    iVar5 = iVar5 + 1;
                  }
                  else if ((*pcVar4 == ']') && (iVar5 = iVar5 + -1, iVar5 == 0)) break;
                }
              }
              ppcVar11 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24));
              if (iVar5 == 1) goto LAB_00e612db;
            }
LAB_00e61143: ;
            pcVar4 = pcVar4 + 1;
            (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4;
            uVar3 = (*(uint *)(gen_frame + 0x30));
          } while (pcVar4 != (*(char * PTR32 *)(gen_frame + 0x1c)));
        }
        pcVar7 = (char *)((int)ppcVar11 - (int)((int)(uintptr_t)(*(char * PTR32 * PTR32 *)(gen_frame + 0x20))) >> 2);
        (*(char * PTR32 *)(gen_frame + 0x1c)) = pcVar7;
        if ((int)uVar3 < (int)pcVar7) {
LAB_00e612db: ;
          if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != (char * PTR32 *)0x0) {
            F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
          }
        }
        else {
          (*(char * PTR32 * PTR32 *)(gen_frame + 0x4)) = (char * PTR32 *)0x0;
          (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = (char * PTR32 *)0x0;
          (*(char * PTR32 * PTR32 *)(gen_frame + 0xc)) = (char * PTR32 *)0x0;
          F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x4)),uVar3);
          cVar1 = *(*(char * PTR32 *)(gen_frame + 0x18));
          (*(char * PTR32 *)(gen_frame + 0x34)) = (*(char * PTR32 *)(gen_frame + 0x18));
          ppcVar11 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
          ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x8));
          ppcVar9 = (*(char * PTR32 * PTR32 *)(gen_frame + 0xc));
          pcVar7 = (*(char * PTR32 *)(gen_frame + 0x18));
          while (cVar1 != ']') {
            if (*pcVar7 == '\"') {
              (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar7;
              if ((&(*(char * PTR32 *)(gen_frame + 0x34)) < ppcVar12) && (ppcVar11 <= &(*(char * PTR32 *)(gen_frame + 0x34)))) {
                iVar5 = (int)&(*(char * PTR32 *)(gen_frame + 0x34)) - (int)ppcVar11;
                if (ppcVar12 == (*(char * PTR32 * PTR32 *)(gen_frame + 0xc))) {
                  uVar3 = (int)ppcVar12 - (int)((int)(uintptr_t)ppcVar11) >> 2;
                  if (0x3ffffffe < uVar3) {
LAB_00e612c1: ;
                    
                    F_00c4579a("vector<T> too long");
                  }
                  uVar3 = uVar3 + 1;
                  uVar8 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0xc)) - (int)((int)(uintptr_t)ppcVar11) >> 2;
                  if (uVar8 < uVar3) {
                    if (0x3fffffff - (uVar8 >> 1) < uVar8) {
                      uVar8 = 0;
                    }
                    else {
                      uVar8 = uVar8 + (uVar8 >> 1);
                    }
                    if (uVar8 < uVar3) {
                      uVar8 = uVar3;
                    }
                    F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x4)),uVar8);
                    ppcVar11 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
                    ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x8));
                  }
                }
                pcVar7 = (*(char * PTR32 *)(gen_frame + 0x34));
                if (ppcVar12 != (char * PTR32 *)0x0) {
                  *ppcVar12 = ppcVar11[iVar5 >> 2];
                }
              }
              else {
                if (ppcVar12 == ppcVar9) {
                  uVar3 = (int)ppcVar12 - (int)((int)(uintptr_t)ppcVar11) >> 2;
                  if (0x3ffffffe < uVar3) goto LAB_00e612c1;
                  uVar3 = uVar3 + 1;
                  uVar8 = (int)ppcVar9 - (int)((int)(uintptr_t)ppcVar11) >> 2;
                  if (uVar8 < uVar3) {
                    if (0x3fffffff - (uVar8 >> 1) < uVar8) {
                      uVar8 = 0;
                    }
                    else {
                      uVar8 = uVar8 + (uVar8 >> 1);
                    }
                    if (uVar8 < uVar3) {
                      uVar8 = uVar3;
                    }
                    F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x4)),uVar8);
                    ppcVar11 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x4));
                    ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x8));
                  }
                }
                if (ppcVar12 != (char * PTR32 *)0x0) {
                  *ppcVar12 = pcVar7;
                }
              }
              ppcVar12 = ppcVar12 + 1;
              (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = ppcVar12;
              pcVar7 = (char *)F_00c51da0(pcVar7 + 1,0x22);
              ppcVar9 = (*(char * PTR32 * PTR32 *)(gen_frame + 0xc));
              if (pcVar7 == (char *)0x0) {
                if (ppcVar11 != (char * PTR32 *)0x0) {
                  F_00406ad0(ppcVar11);
                }
                goto LAB_00e612db;
              }
            }
            pcVar7 = pcVar7 + 1;
            cVar1 = *pcVar7;
            (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar7;
          }
          pcVar7 = (char *)((int)ppcVar12 - (int)((int)(uintptr_t)ppcVar11) >> 2);
          (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar7;
          if ((int)(*(uint *)(gen_frame + 0x30)) < (int)pcVar7) {
            if (ppcVar11 != (char * PTR32 *)0x0) {
              F_00406ad0(ppcVar11);
            }
            if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != (char * PTR32 *)0x0) {
              F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
              F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
              return 0;
            }
          }
          else {
            if ((*(char * PTR32 *)(gen_frame + 0x1c)) == pcVar7) {
              piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 4))((*(undefined * PTR32 *)(gen_frame + 0x14)))));
              uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0);
              F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
              pcVar7 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x18)),((char *)(gen_frame + 0x38)));
              if (pcVar7 != (char *)0x0) {
                pcVar4 = (char *)0x0;
                if ((*(char * PTR32 *)(gen_frame + 0x34)) != (char *)0x0) {
                  do {
                    if (pcVar7 == ppcVar11[(int)pcVar4]) break;
                    pcVar4 = pcVar4 + 1;
                  } while (pcVar4 < (*(char * PTR32 *)(gen_frame + 0x34)));
                }
                if ((*(char * PTR32 *)(gen_frame + 0x1c)) <= pcVar4) {
                  if (ppcVar11 != (char * PTR32 *)0x0) {
                    F_00406ad0(ppcVar11);
                  }
                  if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != (char * PTR32 *)0x0) {
                    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
                    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
                    return 0;
                  }
                  goto LAB_00e612e8;
                }
                pcVar7 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar4];
                pDVar13 = (*(undefined * PTR32 *)(gen_frame + 0x14)) + 4;
                (*(uint *)(gen_frame + 0x30)) = 0xa0;
                do {
                  uVar14 = F_00e50570(pcVar7);
                  *(short *)pDVar13 = (short)uVar14;
                  uVar8 = F_00c51da0(pcVar7,0x2c);
                  pDVar13 = pDVar13 + 2;
                  uVar3 = (*(uint *)(gen_frame + 0x30)) - 1;
                  (*(uint *)(gen_frame + 0x30)) = uVar3;
                  pcVar7 = (char *)(uVar8 + 2);
                } while (uVar3 != 0);
              }
              piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 4))((*(undefined * PTR32 *)(gen_frame + 0x14)))));
              uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,1);
              F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
              pcVar7 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x18)),((char *)(gen_frame + 0x38)));
              if (pcVar7 != (char *)0x0) {
                pcVar4 = (char *)0x0;
                if ((*(char * PTR32 *)(gen_frame + 0x34)) != (char *)0x0) {
                  do {
                    if (pcVar7 == ppcVar11[(int)pcVar4]) break;
                    pcVar4 = pcVar4 + 1;
                  } while (pcVar4 < (*(char * PTR32 *)(gen_frame + 0x34)));
                }
                if ((*(char * PTR32 *)(gen_frame + 0x1c)) <= pcVar4) {
                  if (ppcVar11 != (char * PTR32 *)0x0) {
                    F_00406ad0(ppcVar11);
                  }
                  if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != (char * PTR32 *)0x0) {
                    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
                    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
                    return 0;
                  }
                  goto LAB_00e612e8;
                }
                pcVar7 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar4];
                pDVar13 = (*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x144;
                (*(uint *)(gen_frame + 0x30)) = 0x14;
                do {
                  uVar14 = F_00e50570(pcVar7);
                  *(int *)pDVar13 = (int)uVar14;
                  uVar8 = F_00c51da0(pcVar7,0x2c);
                  pDVar13 = pDVar13 + 4;
                  uVar3 = (*(uint *)(gen_frame + 0x30)) - 1;
                  (*(uint *)(gen_frame + 0x30)) = uVar3;
                  pcVar7 = (char *)(uVar8 + 2);
                } while (uVar3 != 0);
              }
              if (ppcVar11 != (char * PTR32 *)0x0) {
                F_00406ad0(ppcVar11);
              }
              if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != (char * PTR32 *)0x0) {
                F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
              }
              F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
              return 1;
            }
            if (ppcVar11 != (char * PTR32 *)0x0) {
              F_00406ad0(ppcVar11);
            }
            if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != (char * PTR32 *)0x0) {
              F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
              F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
              return 0;
            }
          }
        }
      }
    }
  }
LAB_00e612e8: ;
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf20 */
byte F_00e614f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe614f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  char * pcVar6;
  char * pcVar7;
  uint uVar8;
  uint uVar9;
  char * PTR32 * ppcVar10;
  char * pcVar11;
  char * PTR32 * ppcVar12;
  char * PTR32 * ppcVar13;
  ulonglong uVar14;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  pcVar7 = param_1 + 1;
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  F_00c472af(((char *)(gen_frame + 0x38)),0x40,"\"classid\":%llu",uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x38));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = F_00c4b813(pcVar7,((char *)(gen_frame + 0x38)),(gen_size32)(pcVar4 + (-1 - (int)(((char *)(gen_frame + 0x38)) + 1))));
  if (iVar5 != 0) goto LAB_00e618c8;
  pcVar4 = (char *)F_00fb9ad0(pcVar7,"\"content\":[");
  (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar4;
  if (pcVar4 == (char *)0x0) goto LAB_00e618c8;
  (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar4 + 0xb;
  pcVar4 = param_1;
  do {
    pcVar11 = pcVar4;
    pcVar4 = pcVar11 + 1;
  } while (*pcVar11 != '\0');
  iVar5 = 1;
  for (pcVar4 = pcVar7; pcVar6 = pcVar11 + -1, pcVar4 < pcVar11 + -1; pcVar4 = pcVar4 + 1) {
    if (*pcVar4 == '{') {
      iVar5 = iVar5 + 1;
    }
    else if ((*pcVar4 == '}') && (iVar5 = iVar5 + -1, pcVar6 = pcVar4, iVar5 == 0)) break;
  }
  pcVar7 = (char *)F_00e50750(pcVar7,"\"memberid\":[",pcVar6);
  if (pcVar7 == (char *)0x0) goto LAB_00e618c8;
  (*(char * PTR32 *)(gen_frame + 0x1c)) = pcVar7 + 0xc;
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2);
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x28)) = (char * PTR32 *)0x0;
  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x20)),uVar3);
  (*(char * PTR32 *)(gen_frame + 0x34)) = (*(char * PTR32 *)(gen_frame + 0x30));
  pcVar11 = (*(char * PTR32 *)(gen_frame + 0x1c));
  ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24));
  pcVar4 = (*(char * PTR32 *)(gen_frame + 0x30));
  while (pcVar4 != pcVar7) {
    cVar1 = *pcVar4;
    if (cVar1 == '\"') {
      pcVar4 = pcVar4 + 1;
      (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4;
      if ((&(*(char * PTR32 *)(gen_frame + 0x34)) < ppcVar12) && ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) <= &(*(char * PTR32 *)(gen_frame + 0x34)))) {
        iVar5 = (int)&(*(char * PTR32 *)(gen_frame + 0x34)) - (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x20));
        if (ppcVar12 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x28))) {
          F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x20)),1);
          ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24));
        }
        if (ppcVar12 != (char * PTR32 *)0x0) {
          *ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[iVar5 >> 2];
        }
      }
      else {
        if (ppcVar12 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x28))) {
          F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x20)),1);
          ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24));
        }
        if (ppcVar12 != (char * PTR32 *)0x0) {
          *ppcVar12 = pcVar4;
        }
      }
      ppcVar12 = ppcVar12 + 1;
      (*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) = ppcVar12;
      pcVar4 = (char *)F_00c51da0(pcVar4,0x22);
      pcVar11 = (*(char * PTR32 *)(gen_frame + 0x1c));
    }
    else {
      if (cVar1 == '{') {
        (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4;
        F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x20)),&(*(char * PTR32 *)(gen_frame + 0x34)));
        pcVar4 = (*(char * PTR32 *)(gen_frame + 0x34)) + 1;
        iVar5 = 1;
        if (pcVar4 == pcVar11) goto LAB_00e618bb;
        do {
          if (*pcVar4 == '{') {
            iVar5 = iVar5 + 1;
          }
          else if ((*pcVar4 == '}') && (iVar5 = iVar5 + -1, iVar5 == 0)) break;
          pcVar4 = pcVar4 + 1;
        } while (pcVar4 != pcVar11);
      }
      else {
        if (cVar1 != '[') goto LAB_00e61723;
        (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4 + 1;
        iVar5 = 1;
        if (pcVar4[1] == '\"') {
LAB_00e616eb: ;
          (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4 + 2;
        }
        else if (pcVar4[1] == '[') {
          iVar5 = 2;
          goto LAB_00e616eb;
        }
        F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x20)),&(*(char * PTR32 *)(gen_frame + 0x34)));
        for (pcVar4 = (*(char * PTR32 *)(gen_frame + 0x34)); pcVar4 != pcVar11; pcVar4 = pcVar4 + 1) {
          if (*pcVar4 == '[') {
            iVar5 = iVar5 + 1;
          }
          else if ((*pcVar4 == ']') && (iVar5 = iVar5 + -1, iVar5 == 0)) break;
        }
      }
      ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24));
      if (iVar5 == 1) goto LAB_00e618bb;
    }
LAB_00e61723: ;
    pcVar4 = pcVar4 + 1;
    (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4;
  }
  pcVar7 = (char *)((int)ppcVar12 - (int)((int)(uintptr_t)(*(char * PTR32 * PTR32 *)(gen_frame + 0x20))) >> 2);
  (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar7;
  if ((int)uVar3 < (int)pcVar7) {
LAB_00e618bb: ;
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != (char * PTR32 *)0x0) {
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
    }
    goto LAB_00e618c8;
  }
  (*(char * PTR32 * PTR32 *)(gen_frame + 0xc)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x10)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) = (char * PTR32 *)0x0;
  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0xc)),uVar3);
  cVar1 = *(*(char * PTR32 *)(gen_frame + 0x1c));
  (*(char * PTR32 *)(gen_frame + 0x30)) = (*(char * PTR32 *)(gen_frame + 0x1c));
  ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0xc));
  ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x10));
  ppcVar10 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x14));
  pcVar7 = (*(char * PTR32 *)(gen_frame + 0x1c));
  while (cVar1 != ']') {
    if (*pcVar7 == '\"') {
      (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar7;
      if ((&(*(char * PTR32 *)(gen_frame + 0x30)) < ppcVar13) && (ppcVar12 <= &(*(char * PTR32 *)(gen_frame + 0x30)))) {
        iVar5 = (int)&(*(char * PTR32 *)(gen_frame + 0x30)) - (int)ppcVar12;
        if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x14))) {
          uVar8 = (int)ppcVar13 - (int)((int)(uintptr_t)ppcVar12) >> 2;
          if (0x3ffffffe < uVar8) {
LAB_00e618a1: ;
                    
            F_00c4579a("vector<T> too long");
          }
          uVar8 = uVar8 + 1;
          uVar9 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) - (int)((int)(uintptr_t)ppcVar12) >> 2;
          if (uVar9 < uVar8) {
            if (0x3fffffff - (uVar9 >> 1) < uVar9) {
              uVar9 = 0;
            }
            else {
              uVar9 = uVar9 + (uVar9 >> 1);
            }
            if (uVar9 < uVar8) {
              uVar9 = uVar8;
            }
            F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0xc)),uVar9);
            ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0xc));
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x10));
          }
        }
        pcVar7 = (*(char * PTR32 *)(gen_frame + 0x30));
        if (ppcVar13 != (char * PTR32 *)0x0) {
          *ppcVar13 = ppcVar12[iVar5 >> 2];
        }
      }
      else {
        if (ppcVar13 == ppcVar10) {
          uVar8 = (int)ppcVar13 - (int)((int)(uintptr_t)ppcVar12) >> 2;
          if (0x3ffffffe < uVar8) goto LAB_00e618a1;
          uVar8 = uVar8 + 1;
          uVar9 = (int)ppcVar10 - (int)((int)(uintptr_t)ppcVar12) >> 2;
          if (uVar9 < uVar8) {
            if (0x3fffffff - (uVar9 >> 1) < uVar9) {
              uVar9 = 0;
            }
            else {
              uVar9 = uVar9 + (uVar9 >> 1);
            }
            if (uVar9 < uVar8) {
              uVar9 = uVar8;
            }
            F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0xc)),uVar9);
            ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0xc));
            ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x10));
          }
        }
        if (ppcVar13 != (char * PTR32 *)0x0) {
          *ppcVar13 = pcVar7;
        }
      }
      ppcVar13 = ppcVar13 + 1;
      (*(char * PTR32 * PTR32 *)(gen_frame + 0x10)) = ppcVar13;
      pcVar7 = (char *)F_00c51da0(pcVar7 + 1,0x22);
      ppcVar10 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x14));
      if (pcVar7 == (char *)0x0) {
        if (ppcVar12 != (char * PTR32 *)0x0) {
          F_00406ad0(ppcVar12);
        }
        goto LAB_00e618bb;
      }
    }
    pcVar7 = pcVar7 + 1;
    cVar1 = *pcVar7;
    (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar7;
  }
  pcVar7 = (char *)((int)ppcVar13 - (int)((int)(uintptr_t)ppcVar12) >> 2);
  (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar7;
  if ((int)uVar3 < (int)pcVar7) {
    if (ppcVar12 != (char * PTR32 *)0x0) {
      F_00406ad0(ppcVar12);
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != (char * PTR32 *)0x0) {
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
      return 0;
    }
    goto LAB_00e618c8;
  }
  if ((*(char * PTR32 *)(gen_frame + 0x34)) != pcVar7) {
    if (ppcVar12 != (char * PTR32 *)0x0) {
      F_00406ad0(ppcVar12);
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != (char * PTR32 *)0x0) {
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
      return 0;
    }
    goto LAB_00e618c8;
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0);
  F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
  pcVar7 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
  if (pcVar7 != (char *)0x0) {
    pcVar4 = (char *)0x0;
    if ((*(char * PTR32 *)(gen_frame + 0x30)) != (char *)0x0) {
      do {
        if (pcVar7 == ppcVar12[(int)pcVar4]) break;
        pcVar4 = pcVar4 + 1;
      } while (pcVar4 < (*(char * PTR32 *)(gen_frame + 0x30)));
    }
    if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar4) {
      if (ppcVar12 != (char * PTR32 *)0x0) {
        F_00406ad0(ppcVar12);
      }
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != (char * PTR32 *)0x0) {
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
        F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
        return 0;
      }
      goto LAB_00e618c8;
    }
    pcVar7 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar4];
    iVar5 = 0;
    do {
      uVar14 = F_00e50570(pcVar7);
      this[iVar5 + 4] = SUB81(uVar14,0);
      uVar3 = F_00c51da0(pcVar7,0x2c);
      iVar5 = iVar5 + 1;
      pcVar7 = (char *)(uVar3 + 2);
    } while (iVar5 < 0x1a);
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,1);
  F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
  pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
  pcVar7 = (*(char * PTR32 *)(gen_frame + 0x30));
  if (pcVar4 != (char *)0x0) {
    pcVar11 = (char *)0x0;
    if ((*(char * PTR32 *)(gen_frame + 0x30)) != (char *)0x0) {
      do {
        if (pcVar4 == ppcVar12[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < (*(char * PTR32 *)(gen_frame + 0x30)));
    }
    if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar11) {
      if (ppcVar12 != (char * PTR32 *)0x0) {
        F_00406ad0(ppcVar12);
      }
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != (char * PTR32 *)0x0) {
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
        F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
        return 0;
      }
      goto LAB_00e618c8;
    }
    uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar11]);
    this[0x1e] = SUB81(uVar14,0);
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,2);
  F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
  pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
  if (pcVar4 == (char *)0x0) {
LAB_00e61aff: ;
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,3);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
    if (pcVar4 != (char *)0x0) {
      pcVar11 = (char *)0x0;
      if (pcVar7 != (char *)0x0) {
        do {
          if (pcVar4 == ppcVar12[(int)pcVar11]) break;
          pcVar11 = pcVar11 + 1;
        } while (pcVar11 < pcVar7);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar11) goto LAB_00e61ab5;
      uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar11]);
      this[0x20] = SUB81(uVar14,0);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,4);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
    if (pcVar4 != (char *)0x0) {
      pcVar11 = (char *)0x0;
      if (pcVar7 != (char *)0x0) {
        do {
          if (pcVar4 == ppcVar12[(int)pcVar11]) break;
          pcVar11 = pcVar11 + 1;
        } while (pcVar11 < pcVar7);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar11) goto LAB_00e61ab5;
      uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar11]);
      this[0x21] = SUB81(uVar14,0);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,5);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
    if (pcVar4 != (char *)0x0) {
      pcVar11 = (char *)0x0;
      if (pcVar7 != (char *)0x0) {
        do {
          if (pcVar4 == ppcVar12[(int)pcVar11]) break;
          pcVar11 = pcVar11 + 1;
        } while (pcVar11 < pcVar7);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar11) goto LAB_00e61ab5;
      uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar11]);
      this[0x22] = SUB81(uVar14,0);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,6);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
    if (pcVar4 == (char *)0x0) {
LAB_00e61c92: ;
      if (ppcVar12 != (char * PTR32 *)0x0) {
        F_00406ad0(ppcVar12);
      }
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != (char * PTR32 *)0x0) {
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
      }
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
      return 1;
    }
    pcVar11 = (char *)0x0;
    if (pcVar7 != (char *)0x0) {
      do {
        if (pcVar4 == ppcVar12[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar7);
    }
    if (pcVar11 < (*(char * PTR32 *)(gen_frame + 0x34))) {
      this[0x23] = (undefined1)(*(*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar11] != '0');
      goto LAB_00e61c92;
    }
  }
  else {
    pcVar11 = (char *)0x0;
    if (pcVar7 != (char *)0x0) {
      do {
        if (pcVar4 == ppcVar12[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar7);
    }
    if (pcVar11 < (*(char * PTR32 *)(gen_frame + 0x34))) {
      uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar11]);
      this[0x1f] = SUB81(uVar14,0);
      goto LAB_00e61aff;
    }
  }
LAB_00e61ab5: ;
  if (ppcVar12 != (char * PTR32 *)0x0) {
    F_00406ad0(ppcVar12);
  }
  if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != (char * PTR32 *)0x0) {
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
    return 0;
  }
LAB_00e618c8: ;
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup::vf26 */
byte F_00e61cd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe61cd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  char * pcVar6;
  char * pcVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  undefined * pFVar10;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"classid\":",10);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 4))(piVar4);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),uVar5 & 0xffff,0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"classname\":\"",0xd);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar7 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 8))(piVar4)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"content\":[",0xb);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[4],0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[5],0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 8),*(undefined4 *)(this + 0xc));
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[0x10],0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
  pFVar10 = this + 0x18;
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x18;
  do {
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\",",*(undefined4 *)pFVar10,*(undefined4 *)(pFVar10 + 4));
    pcVar6 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
    pFVar10 = pFVar10 + 8;
    (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + -1);
  } while ((*(undefined4 * PTR32 *)(gen_frame + 0x4)) != (undefined4 *)0x0);
  uVar2 = param_1[4];
  uVar5 = uVar2 - 1;
  if (uVar2 < uVar5) {
                    
    F_00c457e7("invalid string position");
  }
  if (uVar2 - uVar5 != 0) {
    if ((uint)param_1[5] < 0x10) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = param_1;
    }
    else {
      (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)*param_1;
    }
    puVar8 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar8 = (undefined4 *)*param_1;
    }
    F_00c46e20((int)puVar8 + uVar5,(int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + uVar2,(uVar2 - uVar5) + -1);
    iVar3 = param_1[4];
    param_1[4] = iVar3 + -1;
    puVar8 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar8 = (undefined4 *)*param_1;
    }
    *(undefined1 *)((int)puVar8 + iVar3 + -1) = 0;
  }
  F_00e69490(param_1,&REFG(undefined, 0x1158b08),2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158b00),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0xd8))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0xd8)) >> 0x20));
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  uVar2 = param_1[4];
  uVar5 = uVar2 - 1;
  if (uVar5 <= uVar2) {
    if (uVar2 != uVar5) {
      puVar9 = param_1;
      puVar8 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar8 = (undefined4 *)*param_1;
        puVar9 = (undefined4 *)*param_1;
      }
      F_00c46e20((int)puVar9 + uVar5,(int)puVar8 + uVar2,(uVar2 - 1) - uVar5);
      iVar3 = param_1[4];
      param_1[4] = iVar3 + -1;
      puVar8 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar8 = (undefined4 *)*param_1;
      }
      *(undefined1 *)((int)puVar8 + iVar3 + -1) = 0;
    }
    F_00e69490(param_1,&REFG(undefined, 0x1158afc),2);
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
    return 1;
  }
                    
  F_00c457e7("invalid string position");
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup::vf12 */
byte F_00e62080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe62080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  char * pcVar6;
  char * pcVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  undefined * pFVar10;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"classid\":",10);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 4))(piVar4);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),uVar5 & 0xffff,0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"classname\":\"",0xd);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar7 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 8))(piVar4)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"contentdetail\":[",0x11);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4,0);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar7 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4,0)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"UInt8\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[4],0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),1);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4,1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar7 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4,1)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"UInt8\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[5],0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),2);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4,2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar7 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4,2)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"UInt64\",",0x14);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 8),*(undefined4 *)(this + 0xc));
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),3);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4,3);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar7 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4,3)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"UInt8\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[0x10],0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),4);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4,4);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar7 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4,4)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"UInt64\",",0x14);
  F_00e69490(param_1,"\"value\":",8);
  F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
  pFVar10 = this + 0x18;
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x18;
  do {
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\",",*(undefined4 *)pFVar10,*(undefined4 *)(pFVar10 + 4));
    pcVar6 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
    pFVar10 = pFVar10 + 8;
    (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + -1);
  } while ((*(undefined4 * PTR32 *)(gen_frame + 0x4)) != (undefined4 *)0x0);
  uVar2 = param_1[4];
  uVar5 = uVar2 - 1;
  if (uVar2 < uVar5) {
                    
    F_00c457e7("invalid string position");
  }
  if (uVar2 != uVar5) {
    if ((uint)param_1[5] < 0x10) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = param_1;
    }
    else {
      (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)*param_1;
    }
    puVar8 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar8 = (undefined4 *)*param_1;
    }
    F_00c46e20((int)puVar8 + uVar5,(int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + uVar2,(uVar2 - 1) - uVar5);
    iVar3 = param_1[4];
    param_1[4] = iVar3 + -1;
    puVar8 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar8 = (undefined4 *)*param_1;
    }
    *(undefined1 *)((int)puVar8 + iVar3 + -1) = 0;
  }
  F_00e69490(param_1,&REFG(undefined, 0x1158b54),1);
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),5);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4,5);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar7 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4,5)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"Float\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158b00),(int)(ulonglong)gen_d2bits((double)*(float *)(this + 0xd8))
             ,(int)((ulonglong)gen_d2bits((double)*(float *)(this + 0xd8)) >> 0x20));
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  uVar2 = param_1[4];
  uVar5 = uVar2 - 1;
  if (uVar5 <= uVar2) {
    if (uVar2 != uVar5) {
      puVar9 = param_1;
      puVar8 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar8 = (undefined4 *)*param_1;
        puVar9 = (undefined4 *)*param_1;
      }
      F_00c46e20((int)puVar9 + uVar5,(int)puVar8 + uVar2,(uVar2 - 1) - uVar5);
      iVar3 = param_1[4];
      param_1[4] = iVar3 + -1;
      puVar8 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar8 = (undefined4 *)*param_1;
      }
      *(undefined1 *)((int)puVar8 + iVar3 + -1) = 0;
    }
    F_00e69490(param_1,&REFG(undefined, 0x1158afc),2);
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
    return 1;
  }
                    
  F_00c457e7("invalid string position");
}

/* ref: Application::Network::WorkDefinitions::Gambit::vf26 */
byte F_00e62b30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe62b30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  char * pcVar6;
  char * pcVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  undefined * pGVar10;
  int iVar11;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"classid\":",10);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 4))(piVar4);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),uVar5 & 0xffff,0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"classname\":\"",0xd);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar7 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 8))(piVar4)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"content\":[",0xb);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 4),0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[8],0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
  pGVar10 = this + 0xc;
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x2;
  do {
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%f\",",(int)(ulonglong)gen_d2bits((double)*(float *)pGVar10),
               (int)((ulonglong)gen_d2bits((double)*(float *)pGVar10) >> 0x20));
    pcVar6 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
    pGVar10 = pGVar10 + 4;
    (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + -1);
  } while ((*(undefined4 * PTR32 *)(gen_frame + 0x4)) != (undefined4 *)0x0);
  uVar2 = param_1[4];
  uVar5 = uVar2 - 1;
  if (uVar2 < uVar5) {
                    
    F_00c457e7("invalid string position");
  }
  if (uVar2 - uVar5 != 0) {
    if ((uint)param_1[5] < 0x10) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = param_1;
    }
    else {
      (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)*param_1;
    }
    puVar8 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar8 = (undefined4 *)*param_1;
    }
    F_00c46e20((int)puVar8 + uVar5,(int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + uVar2,(uVar2 - uVar5) + -1);
    iVar3 = param_1[4];
    param_1[4] = iVar3 + -1;
    puVar8 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar8 = (undefined4 *)*param_1;
    }
    *(undefined1 *)((int)puVar8 + iVar3 + -1) = 0;
  }
  F_00e69490(param_1,&REFG(undefined, 0x1158b08),2);
  F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
  pGVar10 = this + 0x14;
  iVar3 = 4;
  do {
    iVar11 = iVar3;
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%lld\",",*(int *)pGVar10,*(int *)((int)(uintptr_t)pGVar10) >> 0x1f);
    pcVar6 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
    pGVar10 = pGVar10 + 4;
    iVar3 = iVar11 + -1;
  } while (iVar11 + -1 != 0);
  uVar2 = param_1[4];
  uVar5 = uVar2 - 1;
  if (uVar5 <= uVar2) {
    if (uVar2 != uVar5) {
      puVar9 = param_1;
      puVar8 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar8 = (undefined4 *)*param_1;
        puVar9 = (undefined4 *)*param_1;
      }
      F_00c46e20((int)puVar9 + uVar5,(int)puVar8 + uVar5 + iVar11,(uVar2 - iVar11) - uVar5);
      iVar3 = param_1[4];
      param_1[4] = iVar3 - iVar11;
      puVar8 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar8 = (undefined4 *)*param_1;
      }
      *((undefined1 *)GEN_TOP(((int)puVar8 + (iVar3 - iVar11)))) = 0;
    }
    F_00e69490(param_1,&REFG(undefined, 0x1158b08),2);
    uVar2 = param_1[4];
    uVar5 = uVar2 - 1;
    if (uVar5 <= uVar2) {
      if (uVar2 != uVar5) {
        puVar9 = param_1;
        puVar8 = param_1;
        if (0xf < (uint)param_1[5]) {
          puVar8 = (undefined4 *)*param_1;
          puVar9 = (undefined4 *)*param_1;
        }
        F_00c46e20((int)puVar9 + uVar5,(int)puVar8 + uVar2,(uVar2 - 1) - uVar5);
        iVar3 = param_1[4];
        param_1[4] = iVar3 + -1;
        puVar8 = param_1;
        if (0xf < (uint)param_1[5]) {
          puVar8 = (undefined4 *)*param_1;
        }
        *(undefined1 *)((int)puVar8 + iVar3 + -1) = 0;
      }
      F_00e69490(param_1,&REFG(undefined, 0x1158afc),2);
      F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
      return 1;
    }
                    
    F_00c457e7("invalid string position");
  }
                    
  F_00c457e7("invalid string position");
}

/* ref: Application::Network::WorkDefinitions::Gambit::vf12 */
byte F_00e62ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe62ee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  char * pcVar6;
  char * pcVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  undefined * pGVar10;
  int iVar11;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"classid\":",10);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 4))(piVar4);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),uVar5 & 0xffff,0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"classname\":\"",0xd);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar7 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 8))(piVar4)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"contentdetail\":[",0x11);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4,0);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar7 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4,0)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"UInt32\",",0x14);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 4),0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),1);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4,1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar7 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4,1)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"UInt8\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[8],0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),2);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4,2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar7 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4,2)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"Float\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
  pGVar10 = this + 0xc;
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x2;
  do {
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%f\",",(int)(ulonglong)gen_d2bits((double)*(float *)pGVar10),
               (int)((ulonglong)gen_d2bits((double)*(float *)pGVar10) >> 0x20));
    pcVar6 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
    pGVar10 = pGVar10 + 4;
    (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + -1);
  } while ((*(undefined4 * PTR32 *)(gen_frame + 0x4)) != (undefined4 *)0x0);
  uVar2 = param_1[4];
  uVar5 = uVar2 - 1;
  if (uVar2 < uVar5) {
                    
    F_00c457e7("invalid string position");
  }
  if (uVar2 != uVar5) {
    if ((uint)param_1[5] < 0x10) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = param_1;
    }
    else {
      (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)*param_1;
    }
    puVar8 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar8 = (undefined4 *)*param_1;
    }
    F_00c46e20((int)puVar8 + uVar5,(int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + uVar2,(uVar2 - 1) - uVar5);
    iVar3 = param_1[4];
    param_1[4] = iVar3 + -1;
    puVar8 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar8 = (undefined4 *)*param_1;
    }
    *(undefined1 *)((int)puVar8 + iVar3 + -1) = 0;
  }
  F_00e69490(param_1,&REFG(undefined, 0x1158b54),1);
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),3);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4,3);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar7 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4,3)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"Int32\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
  pGVar10 = this + 0x14;
  iVar3 = 4;
  do {
    iVar11 = iVar3;
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%lld\",",*(int *)pGVar10,*(int *)((int)(uintptr_t)pGVar10) >> 0x1f);
    pcVar6 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
    pGVar10 = pGVar10 + 4;
    iVar3 = iVar11 + -1;
  } while (iVar11 + -1 != 0);
  uVar2 = param_1[4];
  uVar5 = uVar2 - 1;
  if (uVar5 <= uVar2) {
    if (uVar2 != uVar5) {
      puVar9 = param_1;
      puVar8 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar8 = (undefined4 *)*param_1;
        puVar9 = (undefined4 *)*param_1;
      }
      F_00c46e20((int)puVar9 + uVar5,(int)puVar8 + uVar5 + iVar11,(uVar2 - iVar11) - uVar5);
      iVar3 = param_1[4];
      param_1[4] = iVar3 - iVar11;
      puVar8 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar8 = (undefined4 *)*param_1;
      }
      *((undefined1 *)GEN_TOP(((int)puVar8 + (iVar3 - iVar11)))) = 0;
    }
    F_00e69490(param_1,&REFG(undefined, 0x1158b54),1);
    F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
    uVar2 = param_1[4];
    uVar5 = uVar2 - 1;
    if (uVar5 <= uVar2) {
      if (uVar2 - uVar5 != 0) {
        puVar9 = param_1;
        puVar8 = param_1;
        if (0xf < (uint)param_1[5]) {
          puVar8 = (undefined4 *)*param_1;
          puVar9 = (undefined4 *)*param_1;
        }
        F_00c46e20((int)puVar9 + uVar5,(int)puVar8 + uVar2,(uVar2 - uVar5) + -1);
        iVar3 = param_1[4];
        param_1[4] = iVar3 + -1;
        puVar8 = param_1;
        if (0xf < (uint)param_1[5]) {
          puVar8 = (undefined4 *)*param_1;
        }
        *(undefined1 *)((int)puVar8 + iVar3 + -1) = 0;
      }
      F_00e69490(param_1,&REFG(undefined, 0x1158afc),2);
      F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
      return 1;
    }
                    
    F_00c457e7("invalid string position");
  }
                    
  F_00c457e7("invalid string position");
}

/* ref: Application::Network::WorkDefinitions::BuddyWork::vf26 */
byte F_00e63730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe63730u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  undefined1 BVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  char * pcVar6;
  char * pcVar7;
  undefined * pBVar8;
  undefined4 * puVar9;
  undefined4 * puVar10;
  int iVar11;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"classid\":",10);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 4))(piVar4);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),uVar5 & 0xffff,0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"classname\":\"",0xd);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar7 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 8))(piVar4)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"content\":[",0xb);
  F_00e69490(param_1,&REFG(undefined, 0x114b548),1);
  pBVar8 = this + 4;
  do {
    BVar2 = *(undefined1 *)pBVar8;
    pBVar8 = pBVar8 + 1;
  } while (BVar2 != (undefined1)0x0);
  F_00e69490(param_1,this + 4,(int)pBVar8 - (int)(this + 5));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
  iVar11 = 0;
  do {
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\",",(uint)(byte)this[iVar11 + 0x19],0);
    pcVar6 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
    iVar11 = iVar11 + 1;
  } while (iVar11 < 8);
  uVar3 = param_1[4];
  uVar5 = uVar3 - 1;
  if (uVar3 < uVar5) {
                    
    F_00c457e7("invalid string position");
  }
  if (uVar3 != uVar5) {
    if ((uint)param_1[5] < 0x10) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = param_1;
    }
    else {
      (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)*param_1;
    }
    puVar9 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar9 = (undefined4 *)*param_1;
    }
    F_00c46e20((int)puVar9 + uVar5,(int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + uVar3,(uVar3 - 1) - uVar5);
    iVar11 = param_1[4];
    param_1[4] = iVar11 + -1;
    puVar9 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar9 = (undefined4 *)*param_1;
    }
    *(undefined1 *)((int)puVar9 + iVar11 + -1) = 0;
  }
  F_00e69490(param_1,&REFG(undefined, 0x1158b08),2);
  F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
  iVar11 = 0;
  do {
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\",",(uint)(byte)this[iVar11 + 0x21],0);
    pcVar6 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
    iVar11 = iVar11 + 1;
  } while (iVar11 < 3);
  uVar3 = param_1[4];
  uVar5 = uVar3 - 1;
  if (uVar5 <= uVar3) {
    if (uVar3 != uVar5) {
      if ((uint)param_1[5] < 0x10) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = param_1;
      }
      else {
        (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)*param_1;
      }
      puVar9 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar9 = (undefined4 *)*param_1;
      }
      F_00c46e20((int)puVar9 + uVar5,(int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + uVar3,(uVar3 - 1) - uVar5);
      iVar11 = param_1[4];
      param_1[4] = iVar11 + -1;
      puVar9 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar9 = (undefined4 *)*param_1;
      }
      *(undefined1 *)((int)puVar9 + iVar11 + -1) = 0;
    }
    F_00e69490(param_1,&REFG(undefined, 0x1158b08),2);
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[0x24],0);
    pcVar6 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
    F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[0x25],0);
    pcVar6 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
    F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
    F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
    iVar11 = 0;
    do {
      F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\",",(uint)(byte)this[iVar11 + 0x26],0);
      pcVar6 = ((char *)(gen_frame + 0x8));
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
      iVar11 = iVar11 + 1;
    } while (iVar11 < 3);
    uVar3 = param_1[4];
    uVar5 = uVar3 - 1;
    if (uVar5 <= uVar3) {
      if (uVar3 != uVar5) {
        if ((uint)param_1[5] < 0x10) {
          (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = param_1;
        }
        else {
          (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)*param_1;
        }
        puVar9 = param_1;
        if (0xf < (uint)param_1[5]) {
          puVar9 = (undefined4 *)*param_1;
        }
        F_00c46e20((int)puVar9 + uVar5,(int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + uVar3,(uVar3 - 1) - uVar5)
        ;
        iVar11 = param_1[4];
        param_1[4] = iVar11 + -1;
        puVar9 = param_1;
        if (0xf < (uint)param_1[5]) {
          puVar9 = (undefined4 *)*param_1;
        }
        *(undefined1 *)((int)puVar9 + iVar11 + -1) = 0;
      }
      F_00e69490(param_1,&REFG(undefined, 0x1158b08),2);
      F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 0x2c),0);
      pcVar6 = ((char *)(gen_frame + 0x8));
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
      F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
      F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 0x30),0);
      pcVar6 = ((char *)(gen_frame + 0x8));
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
      F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
      F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 0x34),0);
      pcVar6 = ((char *)(gen_frame + 0x8));
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
      F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
      uVar3 = param_1[4];
      uVar5 = uVar3 - 1;
      if (uVar5 <= uVar3) {
        if (uVar3 != uVar5) {
          puVar10 = param_1;
          puVar9 = param_1;
          if (0xf < (uint)param_1[5]) {
            puVar9 = (undefined4 *)*param_1;
            puVar10 = (undefined4 *)*param_1;
          }
          F_00c46e20((int)puVar10 + uVar5,(int)puVar9 + uVar3,(uVar3 - 1) - uVar5);
          iVar11 = param_1[4];
          param_1[4] = iVar11 + -1;
          puVar9 = param_1;
          if (0xf < (uint)param_1[5]) {
            puVar9 = (undefined4 *)*param_1;
          }
          *(undefined1 *)((int)puVar9 + iVar11 + -1) = 0;
        }
        F_00e69490(param_1,&REFG(undefined, 0x1158afc),2);
        F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
        return 1;
      }
                    
      F_00c457e7("invalid string position");
    }
                    
    F_00c457e7("invalid string position");
  }
                    
  F_00c457e7("invalid string position");
}

/* ref: Application::Network::WorkDefinitions::BuddyWork::vf12 */
byte F_00e63c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe63c90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  undefined1 BVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  char * pcVar6;
  char * pcVar7;
  undefined * pBVar8;
  undefined4 * puVar9;
  undefined4 * puVar10;
  int iVar11;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"classid\":",10);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 4))(piVar4);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),uVar5 & 0xffff,0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"classname\":\"",0xd);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar7 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 8))(piVar4)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"contentdetail\":[",0x11);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4,0);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar7 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4,0)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"String\",",0x14);
  F_00e69490(param_1,"\"value\":\"",9);
  pBVar8 = this + 4;
  do {
    BVar2 = *(undefined1 *)pBVar8;
    pBVar8 = pBVar8 + 1;
  } while (BVar2 != (undefined1)0x0);
  F_00e69490(param_1,this + 4,(int)pBVar8 - (int)(this + 5));
  F_00e69490(param_1,&REFG(undefined, 0x1158c00),3);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),1);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4,1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar7 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4,1)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"UInt8\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
  iVar11 = 0;
  do {
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\",",(uint)(byte)this[iVar11 + 0x19],0);
    pcVar6 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
    iVar11 = iVar11 + 1;
  } while (iVar11 < 8);
  uVar3 = param_1[4];
  uVar5 = uVar3 - 1;
  if (uVar3 < uVar5) {
                    
    F_00c457e7("invalid string position");
  }
  if (uVar3 != uVar5) {
    if ((uint)param_1[5] < 0x10) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = param_1;
    }
    else {
      (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)*param_1;
    }
    puVar9 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar9 = (undefined4 *)*param_1;
    }
    F_00c46e20((int)puVar9 + uVar5,(int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + uVar3,(uVar3 - 1) - uVar5);
    iVar11 = param_1[4];
    param_1[4] = iVar11 + -1;
    puVar9 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar9 = (undefined4 *)*param_1;
    }
    *(undefined1 *)((int)puVar9 + iVar11 + -1) = 0;
  }
  F_00e69490(param_1,&REFG(undefined, 0x1158b54),1);
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),2);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4,2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar7 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4,2)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"UInt8\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
  iVar11 = 0;
  do {
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\",",(uint)(byte)this[iVar11 + 0x21],0);
    pcVar6 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
    iVar11 = iVar11 + 1;
  } while (iVar11 < 3);
  uVar3 = param_1[4];
  uVar5 = uVar3 - 1;
  if (uVar3 < uVar5) {
                    
    F_00c457e7("invalid string position");
  }
  if (uVar3 != uVar5) {
    if ((uint)param_1[5] < 0x10) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = param_1;
    }
    else {
      (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)*param_1;
    }
    puVar9 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar9 = (undefined4 *)*param_1;
    }
    F_00c46e20((int)puVar9 + uVar5,(int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + uVar3,(uVar3 - 1) - uVar5);
    iVar11 = param_1[4];
    param_1[4] = iVar11 + -1;
    puVar9 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar9 = (undefined4 *)*param_1;
    }
    *(undefined1 *)((int)puVar9 + iVar11 + -1) = 0;
  }
  F_00e69490(param_1,&REFG(undefined, 0x1158b54),1);
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),3);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4,3);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar7 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4,3)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"UInt8\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[0x24],0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),4);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4,4);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar7 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4,4)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"UInt8\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[0x25],0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),5);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4,5);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar7 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4,5)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"UInt8\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
  iVar11 = 0;
  do {
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\",",(uint)(byte)this[iVar11 + 0x26],0);
    pcVar6 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
    iVar11 = iVar11 + 1;
  } while (iVar11 < 3);
  uVar3 = param_1[4];
  uVar5 = uVar3 - 1;
  if (uVar3 < uVar5) {
                    
    F_00c457e7("invalid string position");
  }
  if (uVar3 != uVar5) {
    if ((uint)param_1[5] < 0x10) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = param_1;
    }
    else {
      (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)*param_1;
    }
    puVar9 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar9 = (undefined4 *)*param_1;
    }
    F_00c46e20((int)puVar9 + uVar5,(int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + uVar3,(uVar3 - 1) - uVar5);
    iVar11 = param_1[4];
    param_1[4] = iVar11 + -1;
    puVar9 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar9 = (undefined4 *)*param_1;
    }
    *(undefined1 *)((int)puVar9 + iVar11 + -1) = 0;
  }
  F_00e69490(param_1,&REFG(undefined, 0x1158b54),1);
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),6);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4,6);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar7 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4,6)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"UInt32\",",0x14);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 0x2c),0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),7);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4,7);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar7 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4,7)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"UInt32\",",0x14);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 0x30),0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),8);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4,8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar7 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4,8)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"UInt32\",",0x14);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 0x34),0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  uVar3 = param_1[4];
  uVar5 = uVar3 - 1;
  if (uVar5 <= uVar3) {
    if (uVar3 != uVar5) {
      puVar10 = param_1;
      puVar9 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar9 = (undefined4 *)*param_1;
        puVar10 = (undefined4 *)*param_1;
      }
      F_00c46e20(uVar5 + (int)puVar10,uVar3 + (int)puVar9,(uVar3 - 1) - uVar5);
      iVar11 = param_1[4];
      param_1[4] = iVar11 + -1;
      puVar9 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar9 = (undefined4 *)*param_1;
      }
      *(undefined1 *)(iVar11 + -1 + (int)puVar9) = 0;
    }
    F_00e69490(param_1,&REFG(undefined, 0x1158afc),2);
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
    return 1;
  }
                    
  F_00c457e7("invalid string position");
}

/* ref: Application::Network::WorkDefinitions::EventStateWork::vf26 */
byte F_00e64c80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe64c80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  char * pcVar5;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"classid\":",10);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"classname\":\"",0xd);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar5 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"content\":[",0xb);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 8),*(undefined4 *)(this + 0xc));
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 0x10),0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[0x14],0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[0x15],0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 0x18),0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00a15ee0(param_1,*(int *)((int)param_1 + 0x10) + -1,1);
  F_00e69490(param_1,&REFG(undefined, 0x1158afc),2);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork::vf12 */
byte F_00e64ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe64ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  char * pcVar5;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"classid\":",10);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),uVar3 & 0xffff,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"classname\":\"",0xd);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar5 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"contentdetail\":[",0x11);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar5 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2,0)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"UInt64\",",0x14);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 8),*(undefined4 *)(this + 0xc));
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),1);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar5 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2,1)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"UInt32\",",0x14);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 0x10),0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),2);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar5 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2,2)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"UInt8\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[0x14],0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),3);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,3);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar5 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2,3)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"UInt8\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[0x15],0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),4);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,4);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar3,0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar5 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2,4)));
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"UInt32\",",0x14);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 0x18),0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00a15ee0(param_1,*(int *)((int)param_1 + 0x10) + -1,1);
  F_00e69490(param_1,&REFG(undefined, 0x1158afc),2);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return 1;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork::vf26 */
byte F_00e65730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe65730u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  char * pcVar6;
  char * pcVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  int iVar10;
  undefined * pDVar11;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"classid\":",10);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 4))(piVar4);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),uVar5 & 0xffff,0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"classname\":\"",0xd);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar7 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 8))(piVar4)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"content\":[",0xb);
  F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
  pDVar11 = this + 4;
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0xa0;
  do {
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\",",(uint)*(ushort *)pDVar11,0);
    pcVar6 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
    pDVar11 = pDVar11 + 2;
    (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + -1);
  } while ((*(undefined4 * PTR32 *)(gen_frame + 0x4)) != (undefined4 *)0x0);
  uVar2 = param_1[4];
  uVar5 = uVar2 - 1;
  if (uVar2 < uVar5) {
                    
    F_00c457e7("invalid string position");
  }
  if (uVar2 - uVar5 != 0) {
    if ((uint)param_1[5] < 0x10) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = param_1;
    }
    else {
      (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)*param_1;
    }
    puVar8 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar8 = (undefined4 *)*param_1;
    }
    F_00c46e20((int)puVar8 + uVar5,(int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + uVar2,(uVar2 - uVar5) + -1);
    iVar3 = param_1[4];
    param_1[4] = iVar3 + -1;
    puVar8 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar8 = (undefined4 *)*param_1;
    }
    *(undefined1 *)((int)puVar8 + iVar3 + -1) = 0;
  }
  F_00e69490(param_1,&REFG(undefined, 0x1158b08),2);
  F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
  pDVar11 = this + 0x144;
  iVar3 = 0x14;
  do {
    iVar10 = iVar3;
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\",",*(undefined4 *)pDVar11,0);
    pcVar6 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
    pDVar11 = pDVar11 + 4;
    iVar3 = iVar10 + -1;
  } while (iVar10 + -1 != 0);
  uVar2 = param_1[4];
  uVar5 = uVar2 - 1;
  if (uVar5 <= uVar2) {
    if (uVar2 != uVar5) {
      puVar9 = param_1;
      puVar8 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar8 = (undefined4 *)*param_1;
        puVar9 = (undefined4 *)*param_1;
      }
      F_00c46e20((int)puVar9 + uVar5,(int)puVar8 + uVar5 + iVar10,(uVar2 - iVar10) - uVar5);
      iVar3 = param_1[4];
      param_1[4] = iVar3 - iVar10;
      puVar8 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar8 = (undefined4 *)*param_1;
      }
      *((undefined1 *)GEN_TOP(((int)puVar8 + (iVar3 - iVar10)))) = 0;
    }
    F_00e69490(param_1,&REFG(undefined, 0x1158b08),2);
    uVar2 = param_1[4];
    uVar5 = uVar2 - 1;
    if (uVar5 <= uVar2) {
      if (uVar2 != uVar5) {
        puVar9 = param_1;
        puVar8 = param_1;
        if (0xf < (uint)param_1[5]) {
          puVar8 = (undefined4 *)*param_1;
          puVar9 = (undefined4 *)*param_1;
        }
        F_00c46e20((int)puVar9 + uVar5,(int)puVar8 + uVar2,(uVar2 - 1) - uVar5);
        iVar3 = param_1[4];
        param_1[4] = iVar3 + -1;
        puVar8 = param_1;
        if (0xf < (uint)param_1[5]) {
          puVar8 = (undefined4 *)*param_1;
        }
        *(undefined1 *)((int)puVar8 + iVar3 + -1) = 0;
      }
      F_00e69490(param_1,&REFG(undefined, 0x1158afc),2);
      F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
      return 1;
    }
                    
    F_00c457e7("invalid string position");
  }
                    
  F_00c457e7("invalid string position");
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork::vf12 */
byte F_00e65a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe65a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  char * pcVar6;
  char * pcVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  undefined * pDVar10;
  int iVar11;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"classid\":",10);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 4))(piVar4);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),uVar5 & 0xffff,0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"classname\":\"",0xd);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar7 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 8))(piVar4)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"contentdetail\":[",0x11);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4,0);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar7 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4,0)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"UInt16\",",0x14);
  F_00e69490(param_1,"\"value\":",8);
  F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
  pDVar10 = this + 4;
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0xa0;
  do {
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\",",(uint)*(ushort *)pDVar10,0);
    pcVar6 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
    pDVar10 = pDVar10 + 2;
    (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + -1);
  } while ((*(undefined4 * PTR32 *)(gen_frame + 0x4)) != (undefined4 *)0x0);
  uVar2 = param_1[4];
  uVar5 = uVar2 - 1;
  if (uVar2 < uVar5) {
                    
    F_00c457e7("invalid string position");
  }
  if (uVar2 != uVar5) {
    if ((uint)param_1[5] < 0x10) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = param_1;
    }
    else {
      (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)*param_1;
    }
    puVar8 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar8 = (undefined4 *)*param_1;
    }
    F_00c46e20((int)puVar8 + uVar5,(int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + uVar2,(uVar2 - 1) - uVar5);
    iVar3 = param_1[4];
    param_1[4] = iVar3 + -1;
    puVar8 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar8 = (undefined4 *)*param_1;
    }
    *(undefined1 *)((int)puVar8 + iVar3 + -1) = 0;
  }
  F_00e69490(param_1,&REFG(undefined, 0x1158b54),1);
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),1);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4,1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar5,0);
  pcVar6 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar7 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4,1)));
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar7,(int)pcVar6 - (int)(pcVar7 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"UInt32\",",0x14);
  F_00e69490(param_1,"\"value\":",8);
  F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
  pDVar10 = this + 0x144;
  iVar3 = 0x14;
  do {
    iVar11 = iVar3;
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\",",*(undefined4 *)pDVar10,0);
    pcVar6 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x8)) + 1));
    pDVar10 = pDVar10 + 4;
    iVar3 = iVar11 + -1;
  } while (iVar11 + -1 != 0);
  uVar2 = param_1[4];
  uVar5 = uVar2 - 1;
  if (uVar5 <= uVar2) {
    if (uVar2 != uVar5) {
      puVar9 = param_1;
      puVar8 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar8 = (undefined4 *)*param_1;
        puVar9 = (undefined4 *)*param_1;
      }
      F_00c46e20((int)puVar9 + uVar5,(int)puVar8 + uVar5 + iVar11,(uVar2 - iVar11) - uVar5);
      iVar3 = param_1[4];
      param_1[4] = iVar3 - iVar11;
      puVar8 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar8 = (undefined4 *)*param_1;
      }
      *((undefined1 *)GEN_TOP(((int)puVar8 + (iVar3 - iVar11)))) = 0;
    }
    F_00e69490(param_1,&REFG(undefined, 0x1158b54),1);
    F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
    uVar2 = param_1[4];
    uVar5 = uVar2 - 1;
    if (uVar5 <= uVar2) {
      if (uVar2 - uVar5 != 0) {
        puVar9 = param_1;
        puVar8 = param_1;
        if (0xf < (uint)param_1[5]) {
          puVar8 = (undefined4 *)*param_1;
          puVar9 = (undefined4 *)*param_1;
        }
        F_00c46e20((int)puVar9 + uVar5,(int)puVar8 + uVar2,(uVar2 - uVar5) + -1);
        iVar3 = param_1[4];
        param_1[4] = iVar3 + -1;
        puVar8 = param_1;
        if (0xf < (uint)param_1[5]) {
          puVar8 = (undefined4 *)*param_1;
        }
        *(undefined1 *)((int)puVar8 + iVar3 + -1) = 0;
      }
      F_00e69490(param_1,&REFG(undefined, 0x1158afc),2);
      F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
      return 1;
    }
                    
    F_00c457e7("invalid string position");
  }
                    
  F_00c457e7("invalid string position");
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf26 */
byte F_00e65fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe65fc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  char * pcVar5;
  char * pcVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  int iVar9;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"classid\":",10);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),uVar4 & 0xffff,0);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"classname\":\"",0xd);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar6 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3)));
  pcVar5 = pcVar6;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar6,(int)pcVar5 - (int)(pcVar6 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"content\":[",0xb);
  F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
  iVar9 = 0;
  do {
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\",",(uint)(byte)this[iVar9 + 4],0);
    pcVar5 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0x1a);
  uVar2 = param_1[4];
  uVar4 = uVar2 - 1;
  if (uVar2 < uVar4) {
                    
    F_00c457e7("invalid string position");
  }
  if (uVar2 - uVar4 != 0) {
    if ((uint)param_1[5] < 0x10) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = param_1;
    }
    else {
      (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)*param_1;
    }
    puVar7 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar7 = (undefined4 *)*param_1;
    }
    F_00c46e20((int)puVar7 + uVar4,(int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + uVar2,(uVar2 - uVar4) + -1);
    iVar9 = param_1[4];
    param_1[4] = iVar9 + -1;
    puVar7 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar7 = (undefined4 *)*param_1;
    }
    *(undefined1 *)((int)puVar7 + iVar9 + -1) = 0;
  }
  F_00e69490(param_1,&REFG(undefined, 0x1158b08),2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[0x1e],0);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[0x1f],0);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[0x20],0);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[0x21],0);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[0x22],0);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158ad8),(uint)(byte)this[0x23]);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  uVar2 = param_1[4];
  uVar4 = uVar2 - 1;
  if (uVar4 <= uVar2) {
    if (uVar2 != uVar4) {
      puVar8 = param_1;
      puVar7 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar7 = (undefined4 *)*param_1;
        puVar8 = (undefined4 *)*param_1;
      }
      F_00c46e20((int)puVar8 + uVar4,(int)puVar7 + uVar2,(uVar2 - 1) - uVar4);
      iVar9 = param_1[4];
      param_1[4] = iVar9 + -1;
      puVar7 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar7 = (undefined4 *)*param_1;
      }
      *(undefined1 *)((int)puVar7 + iVar9 + -1) = 0;
    }
    F_00e69490(param_1,&REFG(undefined, 0x1158afc),2);
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
    return 1;
  }
                    
  F_00c457e7("invalid string position");
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf12 */
byte F_00e663a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe663a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  char * pcVar5;
  char * pcVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  int iVar9;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"classid\":",10);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1080800),uVar4 & 0xffff,0);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"classname\":\"",0xd);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar6 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3)));
  pcVar5 = pcVar6;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar6,(int)pcVar5 - (int)(pcVar6 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"contentdetail\":[",0x11);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),0);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar6 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0)));
  pcVar5 = pcVar6;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar6,(int)pcVar5 - (int)(pcVar6 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"UInt8\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
  iVar9 = 0;
  do {
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\",",(uint)(byte)this[iVar9 + 4],0);
    pcVar5 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0x1a);
  uVar2 = param_1[4];
  uVar4 = uVar2 - 1;
  if (uVar2 < uVar4) {
                    
    F_00c457e7("invalid string position");
  }
  if (uVar2 != uVar4) {
    if ((uint)param_1[5] < 0x10) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = param_1;
    }
    else {
      (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)*param_1;
    }
    puVar7 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar7 = (undefined4 *)*param_1;
    }
    F_00c46e20((int)puVar7 + uVar4,(int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + uVar2,(uVar2 - 1) - uVar4);
    iVar9 = param_1[4];
    param_1[4] = iVar9 + -1;
    puVar7 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar7 = (undefined4 *)*param_1;
    }
    *(undefined1 *)((int)puVar7 + iVar9 + -1) = 0;
  }
  F_00e69490(param_1,&REFG(undefined, 0x1158b54),1);
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),1);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar6 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,1)));
  pcVar5 = pcVar6;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar6,(int)pcVar5 - (int)(pcVar6 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"UInt8\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[0x1e],0);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),2);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar6 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,2)));
  pcVar5 = pcVar6;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar6,(int)pcVar5 - (int)(pcVar6 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"UInt8\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[0x1f],0);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),3);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,3);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar6 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,3)));
  pcVar5 = pcVar6;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar6,(int)pcVar5 - (int)(pcVar6 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"UInt8\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[0x20],0);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),4);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,4);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar6 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,4)));
  pcVar5 = pcVar6;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar6,(int)pcVar5 - (int)(pcVar6 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"UInt8\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[0x21],0);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),5);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,5);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar6 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,5)));
  pcVar5 = pcVar6;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar6,(int)pcVar5 - (int)(pcVar6 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"UInt8\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[0x22],0);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),6);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,6);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x11585f0),uVar4,0);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"name\":\"",8);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  pcVar6 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,6)));
  pcVar5 = pcVar6;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar6,(int)pcVar5 - (int)(pcVar6 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"Bool\",",0x12);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158ad8),(uint)(byte)this[0x23]);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  uVar2 = param_1[4];
  uVar4 = uVar2 - 1;
  if (uVar4 <= uVar2) {
    if (uVar2 != uVar4) {
      puVar8 = param_1;
      puVar7 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar7 = (undefined4 *)*param_1;
        puVar8 = (undefined4 *)*param_1;
      }
      F_00c46e20((int)puVar8 + uVar4,(int)puVar7 + uVar2,(uVar2 - 1) - uVar4);
      iVar9 = param_1[4];
      param_1[4] = iVar9 + -1;
      puVar7 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar7 = (undefined4 *)*param_1;
      }
      *(undefined1 *)((int)puVar7 + iVar9 + -1) = 0;
    }
    F_00e69490(param_1,&REFG(undefined, 0x1158afc),2);
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
    return 1;
  }
                    
  F_00c457e7("invalid string position");
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup::vf15 */
byte F_00e66fb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe66fb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char cVar1;
  bool bVar2;
  bool bVar3;
  undefined4 * PTR32 * PTR32 * pppuVar4;
  uint uVar5;
  undefined4 * PTR32 * PTR32 * PTR32 * ppppuVar6;
  int * piVar7;
  char * pcVar8;
  uint uVar9;
  int iVar10;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  bVar3 = false;
  uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,param_1,1);
  pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
  if ((char)uVar5 == '\0') goto LAB_00e66fdb;
  if (*(uint *)((int)param_1 + 0x10) < 2) {
LAB_00e6705d: ;
    bVar2 = true;
  }
  else {
    bVar3 = true;
    (*(uint *)(gen_frame + 0x20)) = 0xf;
    (*(uint *)(gen_frame + 0x1c)) = 0;
    (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] + 0)) = 0;
    ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (undefined4 * PTR32 * PTR32 *)((uint)pppuVar4 & 0xffffff00);
    F_00bb4bd0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),param_1,*(uint *)((int)param_1 + 0x10) - 2,0xffffffff);
    uVar5 = (*(uint *)(gen_frame + 0x1c));
    uVar9 = (*(uint *)(gen_frame + 0x1c));
    if (1 < (*(uint *)(gen_frame + 0x1c))) {
      uVar9 = 2;
    }
    ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
    if ((*(uint *)(gen_frame + 0x20)) < 0x10) {
      ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
    }
    uVar9 = F_0040d320(ppppuVar6,&REFG(undefined, 0x1158afc),uVar9);
    if (((uVar9 != 0) || (uVar5 < 2)) || (bVar2 = false, uVar5 != 2)) goto LAB_00e6705d;
  }
  if ((bVar3) && (0xf < (*(uint *)(gen_frame + 0x20)))) {
    F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0]);
  }
  if (!bVar2) {
    F_00a15ee0(param_1,*(int *)((int)param_1 + 0x10) + -1,1);
    F_00e69490(param_1,",\"memberid\":[",0xd);
    piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar5 = ((code *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7);
    if (0 < (int)uVar5) {
      iVar10 = 0;
      do {
        if (iVar10 != 0) {
          F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
        }
        F_00e69490(param_1,&REFG(undefined, 0x114b548),1);
        piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
        uVar9 = ((code *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7,iVar10);
        F_00c472af(((char *)(gen_frame + 0x28)),0x20,&REFG(undefined, 0x11585f0),uVar9,0);
        pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
        pcVar8 = ((char *)(gen_frame + 0x28));
        (*(uint *)(gen_frame + 0x20)) = 0xf;
        (*(uint *)(gen_frame + 0x1c)) = 0;
        (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] + 0)) = 0;
        ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (undefined4 * PTR32 * PTR32 *)((uint)pppuVar4 & 0xffffff00);
        do {
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        F_00bb56c0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),((char *)(gen_frame + 0x28)),(int)pcVar8 - (int)(((char *)(gen_frame + 0x28)) + 1));
        F_00e691f0(param_1,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),0,0xffffffff);
        if (0xf < (*(uint *)(gen_frame + 0x20))) {
          F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0]);
        }
        F_00e69490(param_1,&REFG(undefined, 0x114b548),1);
        iVar10 = iVar10 + 1;
      } while (iVar10 < (int)uVar5);
    }
    F_00e69490(param_1,&REFG(undefined, 0x1158afc),2);
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return 1;
  }
LAB_00e66fdb: ;
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Gambit::vf15 */
byte F_00e671a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe671a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char cVar1;
  bool bVar2;
  bool bVar3;
  undefined4 * PTR32 * PTR32 * pppuVar4;
  uint uVar5;
  undefined4 * PTR32 * PTR32 * PTR32 * ppppuVar6;
  int * piVar7;
  char * pcVar8;
  uint uVar9;
  int iVar10;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  bVar3 = false;
  uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,param_1,1);
  pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
  if ((char)uVar5 == '\0') goto LAB_00e671cb;
  if (*(uint *)((int)param_1 + 0x10) < 2) {
LAB_00e6724d: ;
    bVar2 = true;
  }
  else {
    bVar3 = true;
    (*(uint *)(gen_frame + 0x20)) = 0xf;
    (*(uint *)(gen_frame + 0x1c)) = 0;
    (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] + 0)) = 0;
    ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (undefined4 * PTR32 * PTR32 *)((uint)pppuVar4 & 0xffffff00);
    F_00bb4bd0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),param_1,*(uint *)((int)param_1 + 0x10) - 2,0xffffffff);
    uVar5 = (*(uint *)(gen_frame + 0x1c));
    uVar9 = (*(uint *)(gen_frame + 0x1c));
    if (1 < (*(uint *)(gen_frame + 0x1c))) {
      uVar9 = 2;
    }
    ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
    if ((*(uint *)(gen_frame + 0x20)) < 0x10) {
      ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
    }
    uVar9 = F_0040d320(ppppuVar6,&REFG(undefined, 0x1158afc),uVar9);
    if (((uVar9 != 0) || (uVar5 < 2)) || (bVar2 = false, uVar5 != 2)) goto LAB_00e6724d;
  }
  if ((bVar3) && (0xf < (*(uint *)(gen_frame + 0x20)))) {
    F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0]);
  }
  if (!bVar2) {
    F_00a15ee0(param_1,*(int *)((int)param_1 + 0x10) + -1,1);
    F_00e69490(param_1,",\"memberid\":[",0xd);
    piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar5 = ((code *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7);
    if (0 < (int)uVar5) {
      iVar10 = 0;
      do {
        if (iVar10 != 0) {
          F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
        }
        F_00e69490(param_1,&REFG(undefined, 0x114b548),1);
        piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
        uVar9 = ((code *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7,iVar10);
        F_00c472af(((char *)(gen_frame + 0x28)),0x20,&REFG(undefined, 0x11585f0),uVar9,0);
        pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
        pcVar8 = ((char *)(gen_frame + 0x28));
        (*(uint *)(gen_frame + 0x20)) = 0xf;
        (*(uint *)(gen_frame + 0x1c)) = 0;
        (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] + 0)) = 0;
        ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (undefined4 * PTR32 * PTR32 *)((uint)pppuVar4 & 0xffffff00);
        do {
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        F_00bb56c0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),((char *)(gen_frame + 0x28)),(int)pcVar8 - (int)(((char *)(gen_frame + 0x28)) + 1));
        F_00e691f0(param_1,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),0,0xffffffff);
        if (0xf < (*(uint *)(gen_frame + 0x20))) {
          F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0]);
        }
        F_00e69490(param_1,&REFG(undefined, 0x114b548),1);
        iVar10 = iVar10 + 1;
      } while (iVar10 < (int)uVar5);
    }
    F_00e69490(param_1,&REFG(undefined, 0x1158afc),2);
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return 1;
  }
LAB_00e671cb: ;
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork::vf15 */
byte F_00e67390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe67390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char cVar1;
  bool bVar2;
  bool bVar3;
  undefined4 * PTR32 * PTR32 * pppuVar4;
  uint uVar5;
  undefined4 * PTR32 * PTR32 * PTR32 * ppppuVar6;
  int * piVar7;
  char * pcVar8;
  uint uVar9;
  int iVar10;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  bVar3 = false;
  uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,param_1,1);
  pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
  if ((char)uVar5 == '\0') goto LAB_00e673bb;
  if (*(uint *)((int)param_1 + 0x10) < 2) {
LAB_00e6743d: ;
    bVar2 = true;
  }
  else {
    bVar3 = true;
    (*(uint *)(gen_frame + 0x20)) = 0xf;
    (*(uint *)(gen_frame + 0x1c)) = 0;
    (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] + 0)) = 0;
    ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (undefined4 * PTR32 * PTR32 *)((uint)pppuVar4 & 0xffffff00);
    F_00bb4bd0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),param_1,*(uint *)((int)param_1 + 0x10) - 2,0xffffffff);
    uVar5 = (*(uint *)(gen_frame + 0x1c));
    uVar9 = (*(uint *)(gen_frame + 0x1c));
    if (1 < (*(uint *)(gen_frame + 0x1c))) {
      uVar9 = 2;
    }
    ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
    if ((*(uint *)(gen_frame + 0x20)) < 0x10) {
      ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
    }
    uVar9 = F_0040d320(ppppuVar6,&REFG(undefined, 0x1158afc),uVar9);
    if (((uVar9 != 0) || (uVar5 < 2)) || (bVar2 = false, uVar5 != 2)) goto LAB_00e6743d;
  }
  if ((bVar3) && (0xf < (*(uint *)(gen_frame + 0x20)))) {
    F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0]);
  }
  if (!bVar2) {
    F_00a15ee0(param_1,*(int *)((int)param_1 + 0x10) + -1,1);
    F_00e69490(param_1,",\"memberid\":[",0xd);
    piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar5 = ((code *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7);
    if (0 < (int)uVar5) {
      iVar10 = 0;
      do {
        if (iVar10 != 0) {
          F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
        }
        F_00e69490(param_1,&REFG(undefined, 0x114b548),1);
        piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
        uVar9 = ((code *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7,iVar10);
        F_00c472af(((char *)(gen_frame + 0x28)),0x20,&REFG(undefined, 0x11585f0),uVar9,0);
        pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
        pcVar8 = ((char *)(gen_frame + 0x28));
        (*(uint *)(gen_frame + 0x20)) = 0xf;
        (*(uint *)(gen_frame + 0x1c)) = 0;
        (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] + 0)) = 0;
        ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (undefined4 * PTR32 * PTR32 *)((uint)pppuVar4 & 0xffffff00);
        do {
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        F_00bb56c0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),((char *)(gen_frame + 0x28)),(int)pcVar8 - (int)(((char *)(gen_frame + 0x28)) + 1));
        F_00e691f0(param_1,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),0,0xffffffff);
        if (0xf < (*(uint *)(gen_frame + 0x20))) {
          F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0]);
        }
        F_00e69490(param_1,&REFG(undefined, 0x114b548),1);
        iVar10 = iVar10 + 1;
      } while (iVar10 < (int)uVar5);
    }
    F_00e69490(param_1,&REFG(undefined, 0x1158afc),2);
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return 1;
  }
LAB_00e673bb: ;
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork::vf15 */
byte F_00e67580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe67580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char cVar1;
  bool bVar2;
  bool bVar3;
  undefined4 * PTR32 * PTR32 * pppuVar4;
  uint uVar5;
  undefined4 * PTR32 * PTR32 * PTR32 * ppppuVar6;
  int * piVar7;
  char * pcVar8;
  uint uVar9;
  int iVar10;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  bVar3 = false;
  uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,param_1,1);
  pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
  if ((char)uVar5 == '\0') goto LAB_00e675ab;
  if (*(uint *)((int)param_1 + 0x10) < 2) {
LAB_00e6762d: ;
    bVar2 = true;
  }
  else {
    bVar3 = true;
    (*(uint *)(gen_frame + 0x20)) = 0xf;
    (*(uint *)(gen_frame + 0x1c)) = 0;
    (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] + 0)) = 0;
    ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (undefined4 * PTR32 * PTR32 *)((uint)pppuVar4 & 0xffffff00);
    F_00bb4bd0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),param_1,*(uint *)((int)param_1 + 0x10) - 2,0xffffffff);
    uVar5 = (*(uint *)(gen_frame + 0x1c));
    uVar9 = (*(uint *)(gen_frame + 0x1c));
    if (1 < (*(uint *)(gen_frame + 0x1c))) {
      uVar9 = 2;
    }
    ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
    if ((*(uint *)(gen_frame + 0x20)) < 0x10) {
      ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
    }
    uVar9 = F_0040d320(ppppuVar6,&REFG(undefined, 0x1158afc),uVar9);
    if (((uVar9 != 0) || (uVar5 < 2)) || (bVar2 = false, uVar5 != 2)) goto LAB_00e6762d;
  }
  if ((bVar3) && (0xf < (*(uint *)(gen_frame + 0x20)))) {
    F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0]);
  }
  if (!bVar2) {
    F_00a15ee0(param_1,*(int *)((int)param_1 + 0x10) + -1,1);
    F_00e69490(param_1,",\"memberid\":[",0xd);
    piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar5 = ((code *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7);
    if (0 < (int)uVar5) {
      iVar10 = 0;
      do {
        if (iVar10 != 0) {
          F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
        }
        F_00e69490(param_1,&REFG(undefined, 0x114b548),1);
        piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
        uVar9 = ((code *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7,iVar10);
        F_00c472af(((char *)(gen_frame + 0x28)),0x20,&REFG(undefined, 0x11585f0),uVar9,0);
        pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
        pcVar8 = ((char *)(gen_frame + 0x28));
        (*(uint *)(gen_frame + 0x20)) = 0xf;
        (*(uint *)(gen_frame + 0x1c)) = 0;
        (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] + 0)) = 0;
        ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (undefined4 * PTR32 * PTR32 *)((uint)pppuVar4 & 0xffffff00);
        do {
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        F_00bb56c0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),((char *)(gen_frame + 0x28)),(int)pcVar8 - (int)(((char *)(gen_frame + 0x28)) + 1));
        F_00e691f0(param_1,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),0,0xffffffff);
        if (0xf < (*(uint *)(gen_frame + 0x20))) {
          F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0]);
        }
        F_00e69490(param_1,&REFG(undefined, 0x114b548),1);
        iVar10 = iVar10 + 1;
      } while (iVar10 < (int)uVar5);
    }
    F_00e69490(param_1,&REFG(undefined, 0x1158afc),2);
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return 1;
  }
LAB_00e675ab: ;
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork::vf15 */
byte F_00e67770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe67770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char cVar1;
  bool bVar2;
  bool bVar3;
  undefined4 * PTR32 * PTR32 * pppuVar4;
  uint uVar5;
  undefined4 * PTR32 * PTR32 * PTR32 * ppppuVar6;
  int * piVar7;
  char * pcVar8;
  uint uVar9;
  int iVar10;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  bVar3 = false;
  uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,param_1,1);
  pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
  if ((char)uVar5 == '\0') goto LAB_00e6779b;
  if (*(uint *)((int)param_1 + 0x10) < 2) {
LAB_00e6781d: ;
    bVar2 = true;
  }
  else {
    bVar3 = true;
    (*(uint *)(gen_frame + 0x20)) = 0xf;
    (*(uint *)(gen_frame + 0x1c)) = 0;
    (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] + 0)) = 0;
    ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (undefined4 * PTR32 * PTR32 *)((uint)pppuVar4 & 0xffffff00);
    F_00bb4bd0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),param_1,*(uint *)((int)param_1 + 0x10) - 2,0xffffffff);
    uVar5 = (*(uint *)(gen_frame + 0x1c));
    uVar9 = (*(uint *)(gen_frame + 0x1c));
    if (1 < (*(uint *)(gen_frame + 0x1c))) {
      uVar9 = 2;
    }
    ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
    if ((*(uint *)(gen_frame + 0x20)) < 0x10) {
      ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
    }
    uVar9 = F_0040d320(ppppuVar6,&REFG(undefined, 0x1158afc),uVar9);
    if (((uVar9 != 0) || (uVar5 < 2)) || (bVar2 = false, uVar5 != 2)) goto LAB_00e6781d;
  }
  if ((bVar3) && (0xf < (*(uint *)(gen_frame + 0x20)))) {
    F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0]);
  }
  if (!bVar2) {
    F_00a15ee0(param_1,*(int *)((int)param_1 + 0x10) + -1,1);
    F_00e69490(param_1,",\"memberid\":[",0xd);
    piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar5 = ((code *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7);
    if (0 < (int)uVar5) {
      iVar10 = 0;
      do {
        if (iVar10 != 0) {
          F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
        }
        F_00e69490(param_1,&REFG(undefined, 0x114b548),1);
        piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
        uVar9 = ((code *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7,iVar10);
        F_00c472af(((char *)(gen_frame + 0x28)),0x20,&REFG(undefined, 0x11585f0),uVar9,0);
        pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
        pcVar8 = ((char *)(gen_frame + 0x28));
        (*(uint *)(gen_frame + 0x20)) = 0xf;
        (*(uint *)(gen_frame + 0x1c)) = 0;
        (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] + 0)) = 0;
        ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (undefined4 * PTR32 * PTR32 *)((uint)pppuVar4 & 0xffffff00);
        do {
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        F_00bb56c0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),((char *)(gen_frame + 0x28)),(int)pcVar8 - (int)(((char *)(gen_frame + 0x28)) + 1));
        F_00e691f0(param_1,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),0,0xffffffff);
        if (0xf < (*(uint *)(gen_frame + 0x20))) {
          F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0]);
        }
        F_00e69490(param_1,&REFG(undefined, 0x114b548),1);
        iVar10 = iVar10 + 1;
      } while (iVar10 < (int)uVar5);
    }
    F_00e69490(param_1,&REFG(undefined, 0x1158afc),2);
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return 1;
  }
LAB_00e6779b: ;
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf15 */
byte F_00e67960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe67960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char cVar1;
  bool bVar2;
  bool bVar3;
  undefined4 * PTR32 * PTR32 * pppuVar4;
  uint uVar5;
  undefined4 * PTR32 * PTR32 * PTR32 * ppppuVar6;
  int * piVar7;
  char * pcVar8;
  uint uVar9;
  int iVar10;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  bVar3 = false;
  uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,param_1,1);
  pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
  if ((char)uVar5 == '\0') goto LAB_00e6798b;
  if (*(uint *)((int)param_1 + 0x10) < 2) {
LAB_00e67a0d: ;
    bVar2 = true;
  }
  else {
    bVar3 = true;
    (*(uint *)(gen_frame + 0x20)) = 0xf;
    (*(uint *)(gen_frame + 0x1c)) = 0;
    (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] + 0)) = 0;
    ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (undefined4 * PTR32 * PTR32 *)((uint)pppuVar4 & 0xffffff00);
    F_00bb4bd0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),param_1,*(uint *)((int)param_1 + 0x10) - 2,0xffffffff);
    uVar5 = (*(uint *)(gen_frame + 0x1c));
    uVar9 = (*(uint *)(gen_frame + 0x1c));
    if (1 < (*(uint *)(gen_frame + 0x1c))) {
      uVar9 = 2;
    }
    ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
    if ((*(uint *)(gen_frame + 0x20)) < 0x10) {
      ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
    }
    uVar9 = F_0040d320(ppppuVar6,&REFG(undefined, 0x1158afc),uVar9);
    if (((uVar9 != 0) || (uVar5 < 2)) || (bVar2 = false, uVar5 != 2)) goto LAB_00e67a0d;
  }
  if ((bVar3) && (0xf < (*(uint *)(gen_frame + 0x20)))) {
    F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0]);
  }
  if (!bVar2) {
    F_00a15ee0(param_1,*(int *)((int)param_1 + 0x10) + -1,1);
    F_00e69490(param_1,",\"memberid\":[",0xd);
    piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar5 = ((code *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7);
    if (0 < (int)uVar5) {
      iVar10 = 0;
      do {
        if (iVar10 != 0) {
          F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
        }
        F_00e69490(param_1,&REFG(undefined, 0x114b548),1);
        piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
        uVar9 = ((code *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7,iVar10);
        F_00c472af(((char *)(gen_frame + 0x28)),0x20,&REFG(undefined, 0x11585f0),uVar9,0);
        pppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
        pcVar8 = ((char *)(gen_frame + 0x28));
        (*(uint *)(gen_frame + 0x20)) = 0xf;
        (*(uint *)(gen_frame + 0x1c)) = 0;
        (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] + 0)) = 0;
        ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (undefined4 * PTR32 * PTR32 *)((uint)pppuVar4 & 0xffffff00);
        do {
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        F_00bb56c0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),((char *)(gen_frame + 0x28)),(int)pcVar8 - (int)(((char *)(gen_frame + 0x28)) + 1));
        F_00e691f0(param_1,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),0,0xffffffff);
        if (0xf < (*(uint *)(gen_frame + 0x20))) {
          F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0]);
        }
        F_00e69490(param_1,&REFG(undefined, 0x114b548),1);
        iVar10 = iVar10 + 1;
      } while (iVar10 < (int)uVar5);
    }
    F_00e69490(param_1,&REFG(undefined, 0x1158afc),2);
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return 1;
  }
LAB_00e6798b: ;
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Gambit_TypeInfo::vf5 */
uint F_00e67b60(void)
{
  GEN_ENTER(0xe67b60u, 0u, 0u, 0u, 0u);
  return 4;
}

/* ref: Application::Network::WorkDefinitions::Gambit::vf1 */
uint F_00e67b70(void)
{
  GEN_ENTER(0xe67b70u, 0u, 0u, 0u, 0u);
  return 0x135ae40;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork_TypeInfo::vf5 */
uint F_00e67b80(void)
{
  GEN_ENTER(0xe67b80u, 0u, 0u, 0u, 0u);
  return 9;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork::vf1 */
uint F_00e67b90(void)
{
  GEN_ENTER(0xe67b90u, 0u, 0u, 0u, 0u);
  return 0x135ae44;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork_TypeInfo::vf5 */
uint F_00e67ba0(void)
{
  GEN_ENTER(0xe67ba0u, 0u, 0u, 0u, 0u);
  return 5;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork::vf1 */
uint F_00e67bb0(void)
{
  GEN_ENTER(0xe67bb0u, 0u, 0u, 0u, 0u);
  return 0x135ae48;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork_TypeInfo::vf5 */
uint F_00e67bc0(void)
{
  GEN_ENTER(0xe67bc0u, 0u, 0u, 0u, 0u);
  return 2;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork::vf1 */
uint F_00e67bd0(void)
{
  GEN_ENTER(0xe67bd0u, 0u, 0u, 0u, 0u);
  return 0x135ae4c;
}

/* ref: Application::Network::WorkDefinitions::CharaMake_TypeInfo::vf5 */
uint F_00e67be0(void)
{
  GEN_ENTER(0xe67be0u, 0u, 0u, 0u, 0u);
  return 7;
}

/* ref: FUN_00e67c10 */
uint F_00e67c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe67c10u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00e67c30 */
uint F_00e67c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe67c30u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00e67c80 */
uint F_00e67c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe67c80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00e67cb0 */
uint F_00e67cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe67cb0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  *param_2 = *param_1;
  return 1;
}

/* ref: FUN_00e67cd0 */
uint F_00e67cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe67cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  return 8;
}

/* ref: FUN_00e67cf0 */
uint F_00e67cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe67cf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  byte * param_4 = (byte *)(uintptr_t)gen_a3;
  byte * pbVar1;
  int iVar2;
  
  *param_4 = (byte)param_2;
  pbVar1 = param_4 + 1;
  if (((byte)param_2 & 3) == 0) {
    *(short *)pbVar1 = (short)param_3;
    pbVar1 = param_4 + 3;
    iVar2 = 0;
    if (0 < param_3) {
      do {
        *(undefined4 *)pbVar1 = *(undefined4 *)(param_1 + iVar2 * 8);
        *(undefined4 *)(pbVar1 + 4) = *(undefined4 *)(param_1 + 4 + iVar2 * 8);
        iVar2 = iVar2 + 1;
        pbVar1 = pbVar1 + 8;
      } while (iVar2 < param_3);
      return (int)pbVar1 - (int)param_4;
    }
  }
  else if (((byte)param_2 & 3) == 1) {
    *(short *)pbVar1 = (short)param_3;
    *(undefined4 *)(param_4 + 3) = *(undefined4 *)(param_1 + param_3 * 8);
    *(undefined4 *)(param_4 + 7) = *(undefined4 *)(param_1 + 4 + param_3 * 8);
    pbVar1 = param_4 + 0xb;
  }
  return (int)pbVar1 - (int)param_4;
}

/* ref: FUN_00e67d60 */
uint F_00e67d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe67d60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *param_1;
  return 4;
}

/* ref: FUN_00e67d80 */
uint F_00e67d80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xe67d80u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  byte * param_6 = (byte *)(uintptr_t)gen_a5;
  ushort * puVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint local_8;
  
  *param_6 = (byte)param_2;
  puVar1 = (ushort *)(param_6 + 1);
  if (((byte)param_2 & 3) == 2) {
    uVar2 = ((ushort)param_4 - (ushort)param_3) + 1;
    local_8 = (uint)uVar2;
    *puVar1 = (ushort)param_3;
    *(ushort *)(param_6 + 3) = (ushort)param_4;
    uVar3 = (uint)(uVar2 >> 5);
    puVar1 = (ushort *)(param_6 + 5);
    uVar4 = 0;
    if (uVar3 != 0xffffffff) {
      do {
        *(undefined4 *)puVar1 = *(undefined4 *)(param_5 + uVar4 * 4);
        uVar4 = uVar4 + 1;
        puVar1 = puVar1 + 2;
      } while (uVar4 < uVar3 + 1);
    }
    uVar2 = 0;
    if ((ushort)param_3 <= (ushort)param_4) {
      uVar3 = (uint)(ushort)param_3;
      puVar5 = (undefined4 *)(param_1 + uVar3 * 8);
      do {
        if ((*((uint *)GEN_TOP((param_5 + (uint)(uVar2 >> 5) * 4))) & 1 << ((byte)uVar3 & 0x1f)) != 0) {
          *(undefined4 *)puVar1 = *puVar5;
          *(undefined4 *)(puVar1 + 2) = puVar5[1];
          puVar1 = puVar1 + 4;
        }
        uVar2 = uVar2 + 1;
        uVar3 = uVar3 + 1;
        puVar5 = puVar5 + 2;
        local_8 = local_8 - 1;
      } while (local_8 != 0);
    }
  }
  return (int)puVar1 - (int)param_6;
}

/* ref: FUN_00e67e40 */
uint F_00e67e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe67e40u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  *param_2 = *param_1;
  return 1;
}

/* ref: FUN_00e67e60 */
uint F_00e67e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe67e60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  return 8;
}

/* ref: FUN_00e67e80 */
uint F_00e67e80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe67e80u, gen_a0, gen_a1, gen_a2, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint * puVar1;
  byte bVar2;
  uint * puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ushort uVar9;
  uint * puVar10;
  uint uVar11;
  
  puVar1 = (uint *)(param_1 + 1);
  bVar2 = *param_1 & 3;
  if (bVar2 == 0) {
    uVar6 = (uint)(ushort)*puVar1;
    puVar1 = (uint *)(param_1 + 3);
    puVar3 = param_2;
    if (uVar6 != 0) {
      do {
        *puVar3 = *puVar1;
        puVar3[1] = puVar1[1];
        puVar1 = puVar1 + 2;
        puVar3 = puVar3 + 2;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      return (int)puVar1 - (int)param_1;
    }
  }
  else {
    if (bVar2 == 1) {
      uVar6 = *puVar1;
      param_2[(uint)(ushort)uVar6 * 2] = *(uint *)(param_1 + 3);
      param_2[(uint)(ushort)uVar6 * 2 + 1] = *(uint *)(param_1 + 7);
      return 0xb;
    }
    if (bVar2 == 2) {
      uVar9 = *(ushort *)(param_1 + 3);
      uVar6 = *puVar1;
      uVar8 = (uint)(ushort)uVar6;
      uVar4 = (uVar9 - uVar8) + 1 & 0xffff;
      puVar1 = (uint *)(param_1 + 5);
      iVar7 = (uVar4 >> 5) + 1;
      ((uint *)(gen_frame + 0x0))[2] = (uint)uVar9;
      ((uint *)(gen_frame + 0x0))[1] = uVar4;
      if (iVar7 != 0) {
        puVar3 = puVar1;
        puVar10 = ((uint *)(gen_frame + 0x0));
        for (iVar5 = iVar7; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar10 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar10 = puVar10 + 1;
        }
        uVar9 = (ushort)((uint *)(gen_frame + 0x0))[2];
        puVar1 = puVar1 + iVar7;
        uVar4 = ((uint *)(gen_frame + 0x0))[1];
      }
      uVar11 = 0;
      if ((ushort)uVar6 <= uVar9) {
        puVar3 = param_2 + uVar8 * 2;
        ((uint *)(gen_frame + 0x0))[2] = uVar4;
        do {
          if ((((uint *)(gen_frame + 0x0))[(int)((uVar11 & 0xffff) >> 5)] & 1 << ((byte)uVar8 & 0x1f)) != 0) {
            *puVar3 = *puVar1;
            puVar3[1] = puVar1[1];
            puVar1 = puVar1 + 2;
          }
          uVar11 = uVar11 + 1;
          uVar8 = uVar8 + 1;
          puVar3 = puVar3 + 2;
          uVar6 = ((uint *)(gen_frame + 0x0))[2] - 1;
          ((uint *)(gen_frame + 0x0))[2] = uVar6;
        } while (uVar6 != 0);
      }
    }
  }
  return (int)puVar1 - (int)param_1;
}

/* ref: FUN_00e67f70 */
uint F_00e67f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe67f70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *param_1;
  return 4;
}

/* ref: FUN_00e67f90 */
uint F_00e67f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe67f90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *param_1;
  return 4;
}

/* ref: FUN_00e67fb0 */
uint F_00e67fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe67fb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  byte * param_4 = (byte *)(uintptr_t)gen_a3;
  byte * pbVar1;
  byte * pbVar2;
  undefined4 * puVar3;
  int iVar4;
  int iVar5;
  
  *param_4 = (byte)param_2;
  pbVar1 = param_4 + 1;
  if (((byte)param_2 & 3) == 0) {
    *(short *)pbVar1 = (short)param_3;
    pbVar1 = param_4 + 3;
    iVar4 = 0;
    if (3 < param_3) {
      iVar5 = (param_3 - 4U >> 2) + 1;
      iVar4 = iVar5 * 4;
      pbVar2 = pbVar1;
      puVar3 = (undefined4 *)(param_1 + 8);
      do {
        pbVar1 = pbVar2 + 0x10;
        *(undefined4 *)pbVar2 = puVar3[-2];
        iVar5 = iVar5 + -1;
        *(undefined4 *)(pbVar2 + 4) = puVar3[-1];
        *(undefined4 *)(pbVar2 + 8) = *puVar3;
        *(undefined4 *)(pbVar2 + 0xc) = puVar3[1];
        pbVar2 = pbVar1;
        puVar3 = puVar3 + 4;
      } while (iVar5 != 0);
    }
    if (iVar4 < param_3) {
      do {
        iVar5 = iVar4 * 4;
        iVar4 = iVar4 + 1;
        *(undefined4 *)pbVar1 = *(undefined4 *)(param_1 + iVar5);
        pbVar1 = pbVar1 + 4;
      } while (iVar4 < param_3);
      return (int)pbVar1 - (int)param_4;
    }
  }
  else if (((byte)param_2 & 3) == 1) {
    *(short *)pbVar1 = (short)param_3;
    *(undefined4 *)(param_4 + 3) = *(undefined4 *)(param_1 + param_3 * 4);
    pbVar1 = param_4 + 7;
  }
  return (int)pbVar1 - (int)param_4;
}

/* ref: FUN_00e68050 */
uint F_00e68050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe68050u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  byte * param_4 = (byte *)(uintptr_t)gen_a3;
  byte * pbVar1;
  int iVar2;
  
  *param_4 = (byte)param_2;
  pbVar1 = param_4 + 1;
  if (((byte)param_2 & 3) == 0) {
    *(short *)pbVar1 = (short)param_3;
    pbVar1 = param_4 + 3;
    iVar2 = 0;
    if (0 < param_3) {
      do {
        *(undefined4 *)pbVar1 = *(undefined4 *)(param_1 + iVar2 * 4);
        iVar2 = iVar2 + 1;
        pbVar1 = pbVar1 + 4;
      } while (iVar2 < param_3);
      return (int)pbVar1 - (int)param_4;
    }
  }
  else if (((byte)param_2 & 3) == 1) {
    *(short *)pbVar1 = (short)param_3;
    *(undefined4 *)(param_4 + 3) = *(undefined4 *)(param_1 + param_3 * 4);
    pbVar1 = param_4 + 7;
  }
  return (int)pbVar1 - (int)param_4;
}

/* ref: FUN_00e680b0 */
uint F_00e680b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xe680b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  byte * param_6 = (byte *)(uintptr_t)gen_a5;
  ushort * puVar1;
  ushort * puVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 * puVar6;
  uint local_8;
  
  *param_6 = (byte)param_2;
  puVar1 = (ushort *)(param_6 + 1);
  if (((byte)param_2 & 3) == 2) {
    uVar3 = ((ushort)param_4 - (ushort)param_3) + 1;
    local_8 = (uint)uVar3;
    *puVar1 = (ushort)param_3;
    *(ushort *)(param_6 + 3) = (ushort)param_4;
    uVar4 = (uint)(uVar3 >> 5);
    puVar1 = (ushort *)(param_6 + 5);
    uVar5 = 0;
    if (uVar4 != 0xffffffff) {
      do {
        *(undefined4 *)puVar1 = *(undefined4 *)(param_5 + uVar5 * 4);
        uVar5 = uVar5 + 1;
        puVar1 = puVar1 + 2;
      } while (uVar5 < uVar4 + 1);
    }
    uVar3 = 0;
    if ((ushort)param_3 <= (ushort)param_4) {
      uVar4 = (uint)(ushort)param_3;
      puVar6 = (undefined4 *)(param_1 + uVar4 * 4);
      puVar2 = puVar1;
      do {
        puVar1 = puVar2;
        if ((*((uint *)GEN_TOP((param_5 + (uint)(uVar3 >> 5) * 4))) & 1 << ((byte)uVar4 & 0x1f)) != 0) {
          puVar1 = puVar2 + 2;
          *(undefined4 *)puVar2 = *puVar6;
        }
        uVar3 = uVar3 + 1;
        uVar4 = uVar4 + 1;
        puVar6 = puVar6 + 1;
        local_8 = local_8 - 1;
        puVar2 = puVar1;
      } while (local_8 != 0);
    }
  }
  return (int)puVar1 - (int)param_6;
}

/* ref: FUN_00e68160 */
uint F_00e68160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xe68160u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  byte * param_6 = (byte *)(uintptr_t)gen_a5;
  ushort * puVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint local_8;
  
  *param_6 = (byte)param_2;
  puVar1 = (ushort *)(param_6 + 1);
  if (((byte)param_2 & 3) == 2) {
    uVar2 = ((ushort)param_4 - (ushort)param_3) + 1;
    local_8 = (uint)uVar2;
    *puVar1 = (ushort)param_3;
    *(ushort *)(param_6 + 3) = (ushort)param_4;
    uVar3 = (uint)(uVar2 >> 5);
    puVar1 = (ushort *)(param_6 + 5);
    uVar4 = 0;
    if (uVar3 != 0xffffffff) {
      do {
        *(undefined4 *)puVar1 = *(undefined4 *)(param_5 + uVar4 * 4);
        uVar4 = uVar4 + 1;
        puVar1 = puVar1 + 2;
      } while (uVar4 < uVar3 + 1);
    }
    uVar2 = 0;
    if ((ushort)param_3 <= (ushort)param_4) {
      uVar3 = (uint)(ushort)param_3;
      puVar5 = (undefined4 *)(param_1 + uVar3 * 4);
      do {
        if ((*((uint *)GEN_TOP((param_5 + (uint)(uVar2 >> 5) * 4))) & 1 << ((byte)uVar3 & 0x1f)) != 0) {
          *(undefined4 *)puVar1 = *puVar5;
          puVar1 = puVar1 + 2;
        }
        uVar2 = uVar2 + 1;
        uVar3 = uVar3 + 1;
        puVar5 = puVar5 + 1;
        local_8 = local_8 - 1;
      } while (local_8 != 0);
    }
  }
  return (int)puVar1 - (int)param_6;
}

/* ref: FUN_00e68210 */
uint F_00e68210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe68210u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *param_1;
  return 4;
}

/* ref: FUN_00e68230 */
uint F_00e68230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe68230u, gen_a0, gen_a1, gen_a2, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint * puVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ushort uVar8;
  uint * puVar9;
  uint * puVar10;
  uint uVar11;
  
  puVar2 = (uint *)(param_1 + 1);
  bVar3 = *param_1 & 3;
  if (bVar3 == 0) {
    uVar1 = *puVar2;
    puVar2 = (uint *)(param_1 + 3);
    iVar4 = 0;
    if ((ushort)uVar1 != 0) {
      do {
        *(uint *)(param_2 + iVar4 * 4) = *puVar2;
        iVar4 = iVar4 + 1;
        puVar2 = puVar2 + 1;
      } while (iVar4 < (int)(uint)(ushort)uVar1);
      return (int)puVar2 - (int)param_1;
    }
  }
  else {
    if (bVar3 == 1) {
      *(undefined4 *)(param_2 + (uint)(ushort)*puVar2 * 4) = *(undefined4 *)(param_1 + 3);
      return 7;
    }
    if ((*param_1 & 3) == 2) {
      uVar8 = *(ushort *)(param_1 + 3);
      uVar1 = *puVar2;
      uVar7 = (uint)(ushort)uVar1;
      uVar5 = (uVar8 - uVar7) + 1 & 0xffff;
      puVar2 = (uint *)(param_1 + 5);
      iVar4 = (uVar5 >> 5) + 1;
      ((uint *)(gen_frame + 0x0))[2] = (uint)uVar8;
      ((uint *)(gen_frame + 0x0))[1] = uVar5;
      if (iVar4 != 0) {
        puVar9 = puVar2;
        puVar10 = ((uint *)(gen_frame + 0x0));
        for (iVar6 = iVar4; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        uVar8 = (ushort)((uint *)(gen_frame + 0x0))[2];
        puVar2 = puVar2 + iVar4;
        uVar5 = ((uint *)(gen_frame + 0x0))[1];
      }
      uVar11 = 0;
      if ((ushort)uVar1 <= uVar8) {
        puVar9 = (uint *)(param_2 + uVar7 * 4);
        ((uint *)(gen_frame + 0x0))[2] = uVar5;
        do {
          if ((((uint *)(gen_frame + 0x0))[(int)((uVar11 & 0xffff) >> 5)] & 1 << ((byte)uVar7 & 0x1f)) != 0) {
            *puVar9 = *puVar2;
            puVar2 = puVar2 + 1;
          }
          uVar11 = uVar11 + 1;
          uVar7 = uVar7 + 1;
          puVar9 = puVar9 + 1;
          uVar1 = ((uint *)(gen_frame + 0x0))[2] - 1;
          ((uint *)(gen_frame + 0x0))[2] = uVar1;
        } while (uVar1 != 0);
      }
    }
  }
  return (int)puVar2 - (int)param_1;
}

/* ref: FUN_00e68310 */
uint F_00e68310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe68310u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  byte * param_4 = (byte *)(uintptr_t)gen_a3;
  byte * pbVar1;
  int iVar2;
  
  *param_4 = (byte)param_2;
  pbVar1 = param_4 + 1;
  if (((byte)param_2 & 3) == 0) {
    *(short *)pbVar1 = (short)param_3;
    pbVar1 = param_4 + 3;
    iVar2 = 0;
    if (0 < param_3) {
      do {
        *pbVar1 = *(byte *)(iVar2 + param_1);
        iVar2 = iVar2 + 1;
        pbVar1 = pbVar1 + 1;
      } while (iVar2 < param_3);
      return (int)pbVar1 - (int)param_4;
    }
  }
  else if (((byte)param_2 & 3) == 1) {
    *(short *)pbVar1 = (short)param_3;
    param_4[3] = *(byte *)(param_1 + param_3);
    pbVar1 = param_4 + 4;
  }
  return (int)pbVar1 - (int)param_4;
}

/* ref: FUN_00e68370 */
uint F_00e68370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe68370u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  byte * param_4 = (byte *)(uintptr_t)gen_a3;
  byte * pbVar1;
  int iVar2;
  
  *param_4 = (byte)param_2;
  pbVar1 = param_4 + 1;
  if (((byte)param_2 & 3) == 0) {
    *(short *)pbVar1 = (short)param_3;
    pbVar1 = param_4 + 3;
    iVar2 = 0;
    if (0 < param_3) {
      do {
        *pbVar1 = *(byte *)(iVar2 + param_1);
        iVar2 = iVar2 + 1;
        pbVar1 = pbVar1 + 1;
      } while (iVar2 < param_3);
      return (int)pbVar1 - (int)param_4;
    }
  }
  else if (((byte)param_2 & 3) == 1) {
    *(short *)pbVar1 = (short)param_3;
    param_4[3] = *(byte *)(param_1 + param_3);
    pbVar1 = param_4 + 4;
  }
  return (int)pbVar1 - (int)param_4;
}

/* ref: FUN_00e683d0 */
uint F_00e683d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xe683d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  byte * param_6 = (byte *)(uintptr_t)gen_a5;
  ushort * puVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  *param_6 = (byte)param_2;
  puVar1 = (ushort *)(param_6 + 1);
  if (((byte)param_2 & 3) == 2) {
    uVar2 = ((ushort)param_4 - (ushort)param_3) + 1;
    uVar5 = (uint)uVar2;
    *puVar1 = (ushort)param_3;
    *(ushort *)(param_6 + 3) = (ushort)param_4;
    uVar3 = (uint)(uVar2 >> 5);
    puVar1 = (ushort *)(param_6 + 5);
    uVar4 = 0;
    if (uVar3 != 0xffffffff) {
      do {
        *(undefined4 *)puVar1 = *(undefined4 *)(param_5 + uVar4 * 4);
        uVar4 = uVar4 + 1;
        puVar1 = puVar1 + 2;
      } while (uVar4 < uVar3 + 1);
    }
    uVar2 = 0;
    if ((ushort)param_3 <= (ushort)param_4) {
      uVar3 = (uint)(ushort)param_3;
      do {
        if ((*((uint *)GEN_TOP((param_5 + (uint)(uVar2 >> 5) * 4))) & 1 << ((byte)uVar3 & 0x1f)) != 0) {
          *(byte *)puVar1 = *(byte *)(uVar3 + param_1);
          puVar1 = (ushort *)((int)puVar1 + 1);
        }
        uVar2 = uVar2 + 1;
        uVar3 = uVar3 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  return (int)puVar1 - (int)param_6;
}

/* ref: FUN_00e68470 */
uint F_00e68470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xe68470u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  byte * param_6 = (byte *)(uintptr_t)gen_a5;
  ushort * puVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  *param_6 = (byte)param_2;
  puVar1 = (ushort *)(param_6 + 1);
  if (((byte)param_2 & 3) == 2) {
    uVar2 = ((ushort)param_4 - (ushort)param_3) + 1;
    uVar5 = (uint)uVar2;
    *puVar1 = (ushort)param_3;
    *(ushort *)(param_6 + 3) = (ushort)param_4;
    uVar3 = (uint)(uVar2 >> 5);
    puVar1 = (ushort *)(param_6 + 5);
    uVar4 = 0;
    if (uVar3 != 0xffffffff) {
      do {
        *(undefined4 *)puVar1 = *(undefined4 *)(param_5 + uVar4 * 4);
        uVar4 = uVar4 + 1;
        puVar1 = puVar1 + 2;
      } while (uVar4 < uVar3 + 1);
    }
    uVar2 = 0;
    if ((ushort)param_3 <= (ushort)param_4) {
      uVar3 = (uint)(ushort)param_3;
      do {
        if ((*((uint *)GEN_TOP((param_5 + (uint)(uVar2 >> 5) * 4))) & 1 << ((byte)uVar3 & 0x1f)) != 0) {
          *(byte *)puVar1 = *(byte *)(uVar3 + param_1);
          puVar1 = (ushort *)((int)puVar1 + 1);
        }
        uVar2 = uVar2 + 1;
        uVar3 = uVar3 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  return (int)puVar1 - (int)param_6;
}

/* ref: FUN_00e68510 */
uint F_00e68510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe68510u, gen_a0, gen_a1, gen_a2, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint * puVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint * puVar9;
  uint * puVar10;
  uint uVar11;
  
  puVar2 = (uint *)(param_1 + 1);
  bVar3 = *param_1 & 3;
  if (bVar3 == 0) {
    uVar1 = *puVar2;
    puVar2 = (uint *)(param_1 + 3);
    iVar5 = 0;
    if ((ushort)uVar1 != 0) {
      do {
        *(byte *)(iVar5 + param_2) = (byte)*puVar2;
        iVar5 = iVar5 + 1;
        puVar2 = (uint *)((int)puVar2 + 1);
      } while (iVar5 < (int)(uint)(ushort)uVar1);
      return (int)puVar2 - (int)param_1;
    }
  }
  else {
    if (bVar3 == 1) {
      *(byte *)((uint)(ushort)*puVar2 + param_2) = param_1[3];
      return 4;
    }
    if ((*param_1 & 3) == 2) {
      uVar4 = *(ushort *)(param_1 + 3);
      uVar1 = *puVar2;
      uVar7 = (uint)(ushort)uVar1;
      uVar8 = (uVar4 - uVar7) + 1 & 0xffff;
      puVar2 = (uint *)(param_1 + 5);
      iVar5 = (uVar8 >> 5) + 1;
      ((uint *)(gen_frame + 0x0))[2] = (uint)uVar4;
      ((uint *)(gen_frame + 0x0))[1] = uVar8;
      if (iVar5 != 0) {
        puVar9 = puVar2;
        puVar10 = ((uint *)(gen_frame + 0x0));
        for (iVar6 = iVar5; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        uVar4 = (ushort)((uint *)(gen_frame + 0x0))[2];
        puVar2 = puVar2 + iVar5;
        uVar8 = ((uint *)(gen_frame + 0x0))[1];
      }
      uVar11 = 0;
      if ((ushort)uVar1 <= uVar4) {
        do {
          if ((((uint *)(gen_frame + 0x0))[(int)((uVar11 & 0xffff) >> 5)] & 1 << ((byte)uVar7 & 0x1f)) != 0) {
            *(byte *)(uVar7 + param_2) = (byte)*puVar2;
            puVar2 = (uint *)((int)puVar2 + 1);
          }
          uVar11 = uVar11 + 1;
          uVar7 = uVar7 + 1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
    }
  }
  return (int)puVar2 - (int)param_1;
}

/* ref: FUN_00e685e0 */
uint F_00e685e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe685e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  byte * param_4 = (byte *)(uintptr_t)gen_a3;
  byte * pbVar1;
  int iVar2;
  
  *param_4 = (byte)param_2;
  pbVar1 = param_4 + 1;
  if (((byte)param_2 & 3) == 0) {
    *(short *)pbVar1 = (short)param_3;
    pbVar1 = param_4 + 3;
    iVar2 = 0;
    if (0 < param_3) {
      do {
        *(undefined2 *)pbVar1 = *(undefined2 *)(param_1 + iVar2 * 2);
        iVar2 = iVar2 + 1;
        pbVar1 = pbVar1 + 2;
      } while (iVar2 < param_3);
      return (int)pbVar1 - (int)param_4;
    }
  }
  else if (((byte)param_2 & 3) == 1) {
    *(short *)pbVar1 = (short)param_3;
    *(undefined2 *)(param_4 + 3) = *(undefined2 *)(param_1 + param_3 * 2);
    pbVar1 = param_4 + 5;
  }
  return (int)pbVar1 - (int)param_4;
}

/* ref: FUN_00e68640 */
uint F_00e68640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe68640u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  byte * param_4 = (byte *)(uintptr_t)gen_a3;
  byte * pbVar1;
  int iVar2;
  
  *param_4 = (byte)param_2;
  pbVar1 = param_4 + 1;
  if (((byte)param_2 & 3) == 0) {
    *(short *)pbVar1 = (short)param_3;
    pbVar1 = param_4 + 3;
    iVar2 = 0;
    if (0 < param_3) {
      do {
        *(undefined4 *)pbVar1 = *(undefined4 *)(param_1 + iVar2 * 4);
        iVar2 = iVar2 + 1;
        pbVar1 = pbVar1 + 4;
      } while (iVar2 < param_3);
      return (int)pbVar1 - (int)param_4;
    }
  }
  else if (((byte)param_2 & 3) == 1) {
    *(short *)pbVar1 = (short)param_3;
    *(undefined4 *)(param_4 + 3) = *(undefined4 *)(param_1 + param_3 * 4);
    pbVar1 = param_4 + 7;
  }
  return (int)pbVar1 - (int)param_4;
}

/* ref: FUN_00e686a0 */
uint F_00e686a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xe686a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  byte * param_6 = (byte *)(uintptr_t)gen_a5;
  ushort * puVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint local_8;
  
  *param_6 = (byte)param_2;
  puVar1 = (ushort *)(param_6 + 1);
  if (((byte)param_2 & 3) == 2) {
    uVar2 = ((ushort)param_4 - (ushort)param_3) + 1;
    local_8 = (uint)uVar2;
    *puVar1 = (ushort)param_3;
    *(ushort *)(param_6 + 3) = (ushort)param_4;
    uVar3 = (uint)(uVar2 >> 5);
    puVar1 = (ushort *)(param_6 + 5);
    uVar4 = 0;
    if (uVar3 != 0xffffffff) {
      do {
        *(undefined4 *)puVar1 = *(undefined4 *)(param_5 + uVar4 * 4);
        uVar4 = uVar4 + 1;
        puVar1 = puVar1 + 2;
      } while (uVar4 < uVar3 + 1);
    }
    uVar3 = 0;
    if ((ushort)param_3 <= (ushort)param_4) {
      uVar4 = (uint)(ushort)param_3;
      param_2 = (ushort *)(param_1 + uVar4 * 2);
      do {
        if ((*((uint *)GEN_TOP((param_5 + ((uVar3 & 0xffff) >> 5) * 4))) & 1 << ((byte)uVar4 & 0x1f)) != 0) {
          *puVar1 = *param_2;
          puVar1 = puVar1 + 1;
        }
        param_2 = param_2 + 1;
        uVar3 = uVar3 + 1;
        uVar4 = uVar4 + 1;
        local_8 = local_8 - 1;
      } while (local_8 != 0);
    }
  }
  return (int)puVar1 - (int)param_6;
}

/* ref: FUN_00e68750 */
uint F_00e68750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xe68750u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  byte * param_6 = (byte *)(uintptr_t)gen_a5;
  ushort * puVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint local_8;
  
  *param_6 = (byte)param_2;
  puVar1 = (ushort *)(param_6 + 1);
  if (((byte)param_2 & 3) == 2) {
    uVar2 = ((ushort)param_4 - (ushort)param_3) + 1;
    local_8 = (uint)uVar2;
    *puVar1 = (ushort)param_3;
    *(ushort *)(param_6 + 3) = (ushort)param_4;
    uVar3 = (uint)(uVar2 >> 5);
    puVar1 = (ushort *)(param_6 + 5);
    uVar4 = 0;
    if (uVar3 != 0xffffffff) {
      do {
        *(undefined4 *)puVar1 = *(undefined4 *)(param_5 + uVar4 * 4);
        uVar4 = uVar4 + 1;
        puVar1 = puVar1 + 2;
      } while (uVar4 < uVar3 + 1);
    }
    uVar2 = 0;
    if ((ushort)param_3 <= (ushort)param_4) {
      uVar3 = (uint)(ushort)param_3;
      puVar5 = (undefined4 *)(param_1 + uVar3 * 4);
      do {
        if ((*((uint *)GEN_TOP((param_5 + (uint)(uVar2 >> 5) * 4))) & 1 << ((byte)uVar3 & 0x1f)) != 0) {
          *(undefined4 *)puVar1 = *puVar5;
          puVar1 = puVar1 + 2;
        }
        uVar2 = uVar2 + 1;
        uVar3 = uVar3 + 1;
        puVar5 = puVar5 + 1;
        local_8 = local_8 - 1;
      } while (local_8 != 0);
    }
  }
  return (int)puVar1 - (int)param_6;
}

/* ref: FUN_00e68800 */
uint F_00e68800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe68800u, gen_a0, gen_a1, gen_a2, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint * puVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ushort uVar8;
  uint * puVar9;
  uint * puVar10;
  uint uVar11;
  
  puVar2 = (uint *)(param_1 + 1);
  bVar3 = *param_1 & 3;
  if (bVar3 == 0) {
    uVar1 = *puVar2;
    puVar2 = (uint *)(param_1 + 3);
    iVar4 = 0;
    if ((ushort)uVar1 != 0) {
      do {
        *(uint *)(param_2 + iVar4 * 4) = *puVar2;
        iVar4 = iVar4 + 1;
        puVar2 = puVar2 + 1;
      } while (iVar4 < (int)(uint)(ushort)uVar1);
      return (int)puVar2 - (int)param_1;
    }
  }
  else {
    if (bVar3 == 1) {
      *(undefined4 *)(param_2 + (uint)(ushort)*puVar2 * 4) = *(undefined4 *)(param_1 + 3);
      return 7;
    }
    if ((*param_1 & 3) == 2) {
      uVar8 = *(ushort *)(param_1 + 3);
      uVar1 = *puVar2;
      uVar7 = (uint)(ushort)uVar1;
      uVar5 = (uVar8 - uVar7) + 1 & 0xffff;
      puVar2 = (uint *)(param_1 + 5);
      iVar4 = (uVar5 >> 5) + 1;
      ((uint *)(gen_frame + 0x0))[2] = (uint)uVar8;
      ((uint *)(gen_frame + 0x0))[1] = uVar5;
      if (iVar4 != 0) {
        puVar9 = puVar2;
        puVar10 = ((uint *)(gen_frame + 0x0));
        for (iVar6 = iVar4; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        uVar8 = (ushort)((uint *)(gen_frame + 0x0))[2];
        puVar2 = puVar2 + iVar4;
        uVar5 = ((uint *)(gen_frame + 0x0))[1];
      }
      uVar11 = 0;
      if ((ushort)uVar1 <= uVar8) {
        puVar9 = (uint *)(param_2 + uVar7 * 4);
        ((uint *)(gen_frame + 0x0))[2] = uVar5;
        do {
          if ((((uint *)(gen_frame + 0x0))[(int)((uVar11 & 0xffff) >> 5)] & 1 << ((byte)uVar7 & 0x1f)) != 0) {
            *puVar9 = *puVar2;
            puVar2 = puVar2 + 1;
          }
          uVar11 = uVar11 + 1;
          uVar7 = uVar7 + 1;
          puVar9 = puVar9 + 1;
          uVar1 = ((uint *)(gen_frame + 0x0))[2] - 1;
          ((uint *)(gen_frame + 0x0))[2] = uVar1;
        } while (uVar1 != 0);
      }
    }
  }
  return (int)puVar2 - (int)param_1;
}

/* ref: FUN_00e688e0 */
uint F_00e688e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe688e0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  *param_2 = *param_1;
  return 1;
}

/* ref: FUN_00e68900 */
uint F_00e68900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe68900u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  *param_2 = *param_1;
  return 1;
}

/* ref: FUN_00e68920 */
uint F_00e68920(unsigned int gen_a0)
{
  GEN_ENTER(0xe68920u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0x40000000) && (uVar1 = F_004069f0(param_1 * 4), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00e68970 */
uint F_00e68970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe68970u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *param_1;
  return 4;
}

/* ref: FUN_00e68990 */
uint F_00e68990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe68990u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  *param_2 = *param_1;
  return 1;
}

/* ref: FUN_00e689b0 */
uint F_00e689b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe689b0u, gen_a0, gen_a1, 0u, 0u);
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;
  *param_2 = *param_1;
  return 2;
}

/* ref: FUN_00e689d0 */
uint F_00e689d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe689d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00e68a00 */
uint F_00e68a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe68a00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00e68a20 */
uint F_00e68a20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe68a20u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  uVar2 = F_00c46e20(param_3,param_1,iVar1);
  return uVar2 + iVar1;
}

/* ref: FUN_00e68a50 */
uint F_00e68a50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe68a50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint param_4 = (uint)gen_a4;
  uint uVar1;
  uint uVar2;
  
  if (*(uint *)((int)this + 0x10) < param_1) {
                    
    F_00c457e7("invalid string position");
  }
  uVar1 = *(uint *)((int)this + 0x10) - param_1;
  uVar2 = param_2;
  if (uVar1 < param_2) {
    uVar2 = uVar1;
  }
  uVar1 = uVar2;
  if (param_4 <= uVar2) {
    uVar1 = param_4;
  }
  if (0xf < *(uint *)((int)this + 0x14)) {
    this = *(undefined * PTR32 *)this;
  }
  uVar1 = F_0040d320((int)this + param_1,param_3,uVar1);
  if (uVar1 == 0) {
    if (uVar2 < param_4) {
      return 0xffffffff;
    }
    uVar1 = (uint)(uVar2 != param_4);
  }
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup_TypeInfo::vf5 */
uint F_00e68ac0(void)
{
  GEN_ENTER(0xe68ac0u, 0u, 0u, 0u, 0u);
  return 6;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup_TypeInfo::vf0 */
uint F_00e68ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe68ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[21])REFP(0x11584bc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup::vf1 */
uint F_00e68b00(void)
{
  GEN_ENTER(0xe68b00u, 0u, 0u, 0u, 0u);
  return 0x135ae3c;
}

/* ref: Application::Network::WorkDefinitions::FirstAttackGroup::vf0 */
uint F_00e68b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe68b10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Gambit_TypeInfo::vf0 */
uint F_00e68b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe68b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[21])REFP(0x11584bc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Gambit::vf0 */
uint F_00e68b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe68b70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork_TypeInfo::vf0 */
uint F_00e68ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe68ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[21])REFP(0x11584bc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::BuddyWork::vf0 */
uint F_00e68bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe68bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork_TypeInfo::vf0 */
uint F_00e68c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe68c00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[21])REFP(0x11584bc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::EventStateWork::vf0 */
uint F_00e68c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe68c30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork_TypeInfo::vf0 */
uint F_00e68c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe68c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[21])REFP(0x11584bc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::DiscoveryWork::vf0 */
uint F_00e68c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe68c90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::CharaMake_TypeInfo::vf0 */
uint F_00e68cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe68cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[21])REFP(0x11584bc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf0 */
uint F_00e68cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe68cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00e68d40 */
uint F_00e68d40(unsigned int gen_a0)
{
  GEN_ENTER(0xe68d40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0x40000000) && (uVar1 = F_004069f0(param_1 * 4), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00e68d90 */
uint F_00e68d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe68d90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (0x3fffffff - (uVar1 >> 1) < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_00e68dc0 */
uint F_00e68dc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe68dc0u, gen_a0, gen_a1, gen_a2, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint * puVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ushort uVar8;
  uint * puVar9;
  uint * puVar10;
  uint uVar11;
  
  puVar2 = (uint *)(param_1 + 1);
  bVar3 = *param_1 & 3;
  if (bVar3 == 0) {
    uVar1 = *puVar2;
    puVar2 = (uint *)(param_1 + 3);
    iVar4 = 0;
    if ((ushort)uVar1 != 0) {
      do {
        *(uint *)(param_2 + iVar4 * 4) = *puVar2;
        iVar4 = iVar4 + 1;
        puVar2 = puVar2 + 1;
      } while (iVar4 < (int)(uint)(ushort)uVar1);
      return (int)puVar2 - (int)param_1;
    }
  }
  else {
    if (bVar3 == 1) {
      *(undefined4 *)(param_2 + (uint)(ushort)*puVar2 * 4) = *(undefined4 *)(param_1 + 3);
      return 7;
    }
    if ((*param_1 & 3) == 2) {
      uVar8 = *(ushort *)(param_1 + 3);
      uVar1 = *puVar2;
      uVar7 = (uint)(ushort)uVar1;
      uVar5 = (uVar8 - uVar7) + 1 & 0xffff;
      puVar2 = (uint *)(param_1 + 5);
      iVar4 = (uVar5 >> 5) + 1;
      ((uint *)(gen_frame + 0x0))[2] = (uint)uVar8;
      ((uint *)(gen_frame + 0x0))[1] = uVar5;
      if (iVar4 != 0) {
        puVar9 = puVar2;
        puVar10 = ((uint *)(gen_frame + 0x0));
        for (iVar6 = iVar4; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        uVar8 = (ushort)((uint *)(gen_frame + 0x0))[2];
        puVar2 = puVar2 + iVar4;
        uVar5 = ((uint *)(gen_frame + 0x0))[1];
      }
      uVar11 = 0;
      if ((ushort)uVar1 <= uVar8) {
        puVar9 = (uint *)(param_2 + uVar7 * 4);
        ((uint *)(gen_frame + 0x0))[2] = uVar5;
        do {
          if ((((uint *)(gen_frame + 0x0))[(int)((uVar11 & 0xffff) >> 5)] & 1 << ((byte)uVar7 & 0x1f)) != 0) {
            *puVar9 = *puVar2;
            puVar2 = puVar2 + 1;
          }
          uVar11 = uVar11 + 1;
          uVar7 = uVar7 + 1;
          puVar9 = puVar9 + 1;
          uVar1 = ((uint *)(gen_frame + 0x0))[2] - 1;
          ((uint *)(gen_frame + 0x0))[2] = uVar1;
        } while (uVar1 != 0);
      }
    }
  }
  return (int)puVar2 - (int)param_1;
}

/* ref: FUN_00e68ea0 */
uint F_00e68ea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe68ea0u, gen_a0, gen_a1, gen_a2, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint * puVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint * puVar9;
  uint * puVar10;
  uint uVar11;
  
  puVar2 = (uint *)(param_1 + 1);
  bVar3 = *param_1 & 3;
  if (bVar3 == 0) {
    uVar1 = *puVar2;
    puVar2 = (uint *)(param_1 + 3);
    iVar5 = 0;
    if ((ushort)uVar1 != 0) {
      do {
        *(byte *)(iVar5 + param_2) = (byte)*puVar2;
        iVar5 = iVar5 + 1;
        puVar2 = (uint *)((int)puVar2 + 1);
      } while (iVar5 < (int)(uint)(ushort)uVar1);
      return (int)puVar2 - (int)param_1;
    }
  }
  else {
    if (bVar3 == 1) {
      *(byte *)((uint)(ushort)*puVar2 + param_2) = param_1[3];
      return 4;
    }
    if ((*param_1 & 3) == 2) {
      uVar4 = *(ushort *)(param_1 + 3);
      uVar1 = *puVar2;
      uVar7 = (uint)(ushort)uVar1;
      uVar8 = (uVar4 - uVar7) + 1 & 0xffff;
      puVar2 = (uint *)(param_1 + 5);
      iVar5 = (uVar8 >> 5) + 1;
      ((uint *)(gen_frame + 0x0))[2] = (uint)uVar4;
      ((uint *)(gen_frame + 0x0))[1] = uVar8;
      if (iVar5 != 0) {
        puVar9 = puVar2;
        puVar10 = ((uint *)(gen_frame + 0x0));
        for (iVar6 = iVar5; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        uVar4 = (ushort)((uint *)(gen_frame + 0x0))[2];
        puVar2 = puVar2 + iVar5;
        uVar8 = ((uint *)(gen_frame + 0x0))[1];
      }
      uVar11 = 0;
      if ((ushort)uVar1 <= uVar4) {
        do {
          if ((((uint *)(gen_frame + 0x0))[(int)((uVar11 & 0xffff) >> 5)] & 1 << ((byte)uVar7 & 0x1f)) != 0) {
            *(byte *)(uVar7 + param_2) = (byte)*puVar2;
            puVar2 = (uint *)((int)puVar2 + 1);
          }
          uVar11 = uVar11 + 1;
          uVar7 = uVar7 + 1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
    }
  }
  return (int)puVar2 - (int)param_1;
}

/* ref: FUN_00e68f70 */
uint F_00e68f70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe68f70u, gen_a0, gen_a1, gen_a2, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint * puVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ushort uVar8;
  uint * puVar9;
  ushort * puVar10;
  uint * puVar11;
  uint uVar12;
  
  puVar2 = (uint *)(param_1 + 1);
  bVar3 = *param_1 & 3;
  if (bVar3 == 0) {
    uVar1 = *puVar2;
    puVar2 = (uint *)(param_1 + 3);
    iVar4 = 0;
    if ((ushort)uVar1 != 0) {
      do {
        *(ushort *)(param_2 + iVar4 * 2) = (ushort)*puVar2;
        iVar4 = iVar4 + 1;
        puVar2 = (uint *)((int)puVar2 + 2);
      } while (iVar4 < (int)(uint)(ushort)uVar1);
      return (int)puVar2 - (int)param_1;
    }
  }
  else {
    if (bVar3 == 1) {
      *(undefined2 *)(param_2 + (uint)(ushort)*puVar2 * 2) = *(undefined2 *)(param_1 + 3);
      return 5;
    }
    if ((*param_1 & 3) == 2) {
      uVar8 = *(ushort *)(param_1 + 3);
      uVar1 = *puVar2;
      uVar7 = (uint)(ushort)uVar1;
      uVar5 = (uVar8 - uVar7) + 1 & 0xffff;
      puVar2 = (uint *)(param_1 + 5);
      iVar4 = (uVar5 >> 5) + 1;
      ((uint *)(gen_frame + 0x0))[2] = (uint)uVar8;
      ((uint *)(gen_frame + 0x0))[1] = uVar5;
      if (iVar4 != 0) {
        puVar9 = puVar2;
        puVar11 = ((uint *)(gen_frame + 0x0));
        for (iVar6 = iVar4; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar11 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar11 = puVar11 + 1;
        }
        uVar8 = (ushort)((uint *)(gen_frame + 0x0))[2];
        puVar2 = puVar2 + iVar4;
        uVar5 = ((uint *)(gen_frame + 0x0))[1];
      }
      uVar12 = 0;
      if ((ushort)uVar1 <= uVar8) {
        puVar10 = (ushort *)(param_2 + uVar7 * 2);
        ((uint *)(gen_frame + 0x0))[2] = uVar5;
        do {
          if ((((uint *)(gen_frame + 0x0))[(int)((uVar12 & 0xffff) >> 5)] & 1 << ((byte)uVar7 & 0x1f)) != 0) {
            *puVar10 = (ushort)*puVar2;
            puVar2 = (uint *)((int)puVar2 + 2);
          }
          uVar12 = uVar12 + 1;
          uVar7 = uVar7 + 1;
          puVar10 = puVar10 + 1;
          uVar1 = ((uint *)(gen_frame + 0x0))[2] - 1;
          ((uint *)(gen_frame + 0x0))[2] = uVar1;
        } while (uVar1 != 0);
      }
    }
  }
  return (int)puVar2 - (int)param_1;
}

/* ref: FUN_00e69060 */
uint F_00e69060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe69060u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00e69090 */
uint F_00e69090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe69090u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00e690b0 */
uint F_00e690b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe690b0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  uVar2 = F_00c46e20(param_3,param_1,iVar1);
  return uVar2 + iVar1;
}

/* ref: FUN_00e690e0 */
uint F_00e690e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe690e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = F_00e68a50(this,0,*(undefined4 *)((int)this + 0x10),param_1,
                       (int)pcVar2 - (int)(param_1 + 1));
  return uVar3;
}

/* ref: FUN_00e69130 */
uint F_00e69130(unsigned int gen_a0)
{
  GEN_ENTER(0xe69130u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_00406ad0(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00e69160 */
uint F_00e69160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe69160u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  uVar2 = F_00c46e20(param_3,param_1,iVar1);
  return uVar2 + iVar1;
}

