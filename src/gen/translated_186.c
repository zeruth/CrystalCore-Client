#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00e47bb0 */
uint F_00e47bb0(unsigned int gen_a0)
{
  GEN_ENTER(0xe47bb0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e47bc0 */
uint F_00e47bc0(unsigned int gen_a0)
{
  GEN_ENTER(0xe47bc0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00e47bd0 */
uint F_00e47bd0(unsigned int gen_a0)
{
  GEN_ENTER(0xe47bd0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00e47be0 */
uint F_00e47be0(unsigned int gen_a0)
{
  GEN_ENTER(0xe47be0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00e47bf0 */
uint F_00e47bf0(unsigned int gen_a0)
{
  GEN_ENTER(0xe47bf0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x15)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x15);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00e47c10 */
uint F_00e47c10(unsigned int gen_a0)
{
  GEN_ENTER(0xe47c10u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x15);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x15);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00e47c30 */
uint F_00e47c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe47c30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00e47c50 */
byte F_00e47c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe47c50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00e47c80 */
byte F_00e47c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe47c80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00e47cb0 */
unsigned int F_00e47cb0(unsigned int gen_a0)
{
  GEN_ENTER(0xe47cb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x15) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x15) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x15);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x15);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x15);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x15);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00e47d00 */
unsigned int F_00e47d00(unsigned int gen_a0)
{
  GEN_ENTER(0xe47d00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x15) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x15) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x15);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x15);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x15);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x15);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00e47d50 */
uint F_00e47d50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe47d50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e47d60 */
uint F_00e47d60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe47d60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e47d70 */
uint F_00e47d70(unsigned int gen_a0)
{
  GEN_ENTER(0xe47d70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e47d80 */
uint F_00e47d80(unsigned int gen_a0)
{
  GEN_ENTER(0xe47d80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e47da0 */
byte F_00e47da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe47da0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00e47dc0 */
byte F_00e47dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe47dc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00e47e10 */
uint F_00e47e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe47e10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00e47e30 */
uint F_00e47e30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe47e30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00e47e50 */
uint F_00e47e50(unsigned int gen_a0)
{
  GEN_ENTER(0xe47e50u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e47e60 */
uint F_00e47e60(unsigned int gen_a0)
{
  GEN_ENTER(0xe47e60u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00e47e70 */
uint F_00e47e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe47e70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00e47ec0 */
uint F_00e47ec0(unsigned int gen_a0)
{
  GEN_ENTER(0xe47ec0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00e47ee0 */
byte F_00e47ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe47ee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00e47f00 */
uint F_00e47f00(unsigned int gen_a0)
{
  GEN_ENTER(0xe47f00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x14;
}

/* ref: FUN_00e47f10 */
uint F_00e47f10(unsigned int gen_a0)
{
  GEN_ENTER(0xe47f10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x15)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x15);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00e47f30 */
uint F_00e47f30(unsigned int gen_a0)
{
  GEN_ENTER(0xe47f30u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x15);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x15);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00e47f50 */
uint F_00e47f50(unsigned int gen_a0)
{
  GEN_ENTER(0xe47f50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x14;
}

/* ref: FUN_00e47f60 */
uint F_00e47f60(unsigned int gen_a0)
{
  GEN_ENTER(0xe47f60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x15)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x15);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00e47f80 */
uint F_00e47f80(unsigned int gen_a0)
{
  GEN_ENTER(0xe47f80u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x15);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x15);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00e47fa0 */
uint F_00e47fa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe47fa0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e47fb0 */
unsigned int F_00e47fb0(unsigned int gen_a0)
{
  GEN_ENTER(0xe47fb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x15) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x15) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x15);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x15);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x15);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x15);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00e48000 */
unsigned int F_00e48000(unsigned int gen_a0)
{
  GEN_ENTER(0xe48000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x15) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x15) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x15);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x15);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x15);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x15);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00e48080 */
uint F_00e48080(unsigned int gen_a0)
{
  GEN_ENTER(0xe48080u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e48090 */
uint F_00e48090(unsigned int gen_a0)
{
  GEN_ENTER(0xe48090u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: PrimaryEntityFactoryClass_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf0 */
uint F_00e480a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe480a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x1157d50));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00e48120 */
uint F_00e48120(unsigned int gen_a0)
{
  GEN_ENTER(0xe48120u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0xaaaaaab) && (uVar1 = F_004069f0(param_1 * 0x18), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00e48170 */
uint F_00e48170(unsigned int gen_a0)
{
  GEN_ENTER(0xe48170u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0xaaaaaab) && (uVar1 = F_004069f0(param_1 * 0x18), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00e481d0 */
uint F_00e481d0(unsigned int gen_a0)
{
  GEN_ENTER(0xe481d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00e47fb0(this);
  return (uint)this;
}

/* ref: FUN_00e48210 */
byte F_00e48210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe48210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00e48230 */
uint F_00e48230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe48230u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: TargetEntityFactoryClass_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf6 */
unsigned int F_00e482e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe482e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*param_1)(param_1,1);
  }
  return 0;
}

/* ref: IpcEntityTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf0 */
uint F_00e48300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe48300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x1157d80));
  F_01050b80(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: EntityWrapper_TargetEntityTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application::vf0 */
uint F_00e48330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe48330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x1157d88));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: TargetEntityFactoryClass_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf0 */
uint F_00e48360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe48360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x1157d60));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00e48390 */
uint F_00e48390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe48390u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_01050b90(in_ecx,param_3);
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1157d80));
  in_ecx[4] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e483d0 */
uint F_00e483d0(unsigned int gen_a0)
{
  GEN_ENTER(0xe483d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0x15555556) && (uVar1 = F_004069f0(param_1 * 0xc), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00e48430 */
uint F_00e48430(unsigned int gen_a0)
{
  GEN_ENTER(0xe48430u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0xaaaaaab) && (uVar1 = F_004069f0(param_1 * 0x18), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00e48490 */
uint F_00e48490(unsigned int gen_a0)
{
  GEN_ENTER(0xe48490u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0xaaaaaab) && (uVar1 = F_004069f0(param_1 * 0x18), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00e484e0 */
uint F_00e484e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe484e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x1157d88));
  if (param_1 != 0) {
    *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 8);
    *(int *)((int)this + 8) = param_1;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return (uint)this;
}

/* ref: FUN_00e485b0 */
uint F_00e485b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe485b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x1157d88));
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  return (uint)this;
}

/* ref: Application::Network::LobbyClient::LobbyProtoDownDummyCallback::vf0 */
uint F_00e485e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe485e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00e3b8a0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00e48640 */
uint F_00e48640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe48640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x15))) == '\0') {
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

/* ref: FUN_00e486d0 */
uint F_00e486d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe486d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x15))) == '\0') {
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

/* ref: FUN_00e48730 */
uint F_00e48730(unsigned int gen_a0)
{
  GEN_ENTER(0xe48730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00e47cb0(this);
  return (uint)this;
}

/* ref: FUN_00e48740 */
uint F_00e48740(unsigned int gen_a0)
{
  GEN_ENTER(0xe48740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00e47d00(this);
  return (uint)this;
}

/* ref: FUN_00e48750 */
uint F_00e48750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe48750u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e48760 */
uint F_00e48760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe48760u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e487a0 */
uint F_00e487a0(unsigned int gen_a0)
{
  GEN_ENTER(0xe487a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00e47cb0(this);
  return (uint)this;
}

/* ref: FUN_00e487b0 */
uint F_00e487b0(unsigned int gen_a0)
{
  GEN_ENTER(0xe487b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00e47d00(this);
  return (uint)this;
}

/* ref: FUN_00e48830 */
uint F_00e48830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe48830u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00e48860 */
uint F_00e48860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe48860u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00e47cb0(this);
  return (uint)param_1;
}

/* ref: FUN_00e48880 */
uint F_00e48880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe48880u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00e47d00(this);
  return (uint)param_1;
}

/* ref: FUN_00e488a0 */
uint F_00e488a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe488a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e488c0 */
uint F_00e488c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe488c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x15))) == '\0') {
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

/* ref: FUN_00e48930 */
uint F_00e48930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe48930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x15))) == '\0') {
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

/* ref: FUN_00e48990 */
uint F_00e48990(unsigned int gen_a0)
{
  GEN_ENTER(0xe48990u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00e47fb0(this);
  return (uint)this;
}

/* ref: FUN_00e489a0 */
uint F_00e489a0(unsigned int gen_a0)
{
  GEN_ENTER(0xe489a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00e48000(this);
  return (uint)this;
}

/* ref: FUN_00e489e0 */
uint F_00e489e0(unsigned int gen_a0)
{
  GEN_ENTER(0xe489e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00e36c00(this);
  return (uint)this;
}

/* ref: PrimaryEntityFactoryClass_LF_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf0 */
uint F_00e48a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe48a20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x1157d50));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PrimaryEntityFactoryClass_LF_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf2 */
unsigned int F_00e48a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe48a60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*param_1)(param_1,1);
  }
  return 0;
}

/* ref: FUN_00e48a80 */
uint F_00e48a80(unsigned int gen_a0)
{
  GEN_ENTER(0xe48a80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 8) + 0x10))))(*(int * PTR32 *)(param_1 + 8),param_1);
  return uVar1;
}

/* ref: FUN_00e48ae0 */
uint F_00e48ae0(unsigned int gen_a0)
{
  GEN_ENTER(0xe48ae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00e48000(this);
  return (uint)this;
}

/* ref: FUN_00e48af0 */
uint F_00e48af0(unsigned int gen_a0)
{
  GEN_ENTER(0xe48af0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0xaaaaaab) && (uVar1 = F_004069f0(param_1 * 0x18), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00e48b40 */
uint F_00e48b40(unsigned int gen_a0)
{
  GEN_ENTER(0xe48b40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0xaaaaaab) && (uVar1 = F_004069f0(param_1 * 0x18), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00e48bb0 */
uint F_00e48bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe48bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x1157d88));
  if (param_1 != 0) {
    *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 8);
    *(int *)((int)this + 8) = param_1;
    *(undefined * PTR32 * PTR32 *)this =
         (*(undefined * PTR32 (*)[1])REFP(0x1157da0));
    return (uint)this;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x1157da0));
  return (uint)this;
}

/* ref: ConnectionOwner_TargetEntityTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application::vf0 */
uint F_00e48bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe48bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x1157d88));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00e48c20 */
uint F_00e48c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe48c20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00e48c30 */
byte F_00e48c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe48c30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00e48c60 */
uint F_00e48c60(unsigned int gen_a0)
{
  GEN_ENTER(0xe48c60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0x15555556) && (uVar1 = F_004069f0(param_1 * 0xc), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00e48cc0 */
uint F_00e48cc0(unsigned int gen_a0)
{
  GEN_ENTER(0xe48cc0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0xaaaaaab) && (uVar1 = F_004069f0(param_1 * 0x18), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00e48d20 */
uint F_00e48d20(unsigned int gen_a0)
{
  GEN_ENTER(0xe48d20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0xaaaaaab) && (uVar1 = F_004069f0(param_1 * 0x18), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00e48d70 */
uint F_00e48d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe48d70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x1157d88));
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x1157da0));
  return (uint)this;
}

/* ref: FUN_00e48de0 */
uint F_00e48de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe48de0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x15) == '\0') {
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

/* ref: FUN_00e48e40 */
uint F_00e48e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe48e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x15) == '\0') {
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

/* ref: FUN_00e48ea0 */
uint F_00e48ea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe48ea0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e48eb0 */
uint F_00e48eb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe48eb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e48ee0 */
uint F_00e48ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe48ee0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00e48f00 */
uint F_00e48f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe48f00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00e48f50 */
uint F_00e48f50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe48f50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e48f60 */
uint F_00e48f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe48f60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00e47fb0(this);
  return (uint)param_1;
}

/* ref: FUN_00e48f80 */
uint F_00e48f80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe48f80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00e48000(this);
  return (uint)param_1;
}

/* ref: FUN_00e48fa0 */
uint F_00e48fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe48fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x15) == '\0') {
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

/* ref: FUN_00e49000 */
uint F_00e49000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe49000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x15) == '\0') {
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

/* ref: FUN_00e49060 */
unsigned int F_00e49060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe49060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x15);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00e49060(this,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00406ad0(piVar3);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x15);
  }
  return 0;
}

/* ref: FUN_00e490a0 */
unsigned int F_00e490a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe490a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x15);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00e490a0(this,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00406ad0(piVar3);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x15);
  }
  return 0;
}

/* ref: FUN_00e49120 */
uint F_00e49120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe49120u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_01050b90(in_ecx,param_3);
  in_ecx[4] = param_2;
  in_ecx[5] = param_3;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1157da8));
  in_ecx[7] = 0;
  in_ecx[8] = 0;
  in_ecx[6] = (*(undefined * PTR32 (*)[1])REFP(0x1157da0));
  return (uint)in_ecx;
}

/* ref: TargetEntityTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf0 */
uint F_00e49180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe49180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) =
       (*(undefined * PTR32 (*)[1])REFP(0x1157d88));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x1157d80));
  F_01050b80(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00e491b0 */
uint F_00e491b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe491b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 uVar1;
  
  if (*(int *)(param_3 + 8) == 0) {
    uVar1 = *(undefined4 *)(param_3 + 4);
  }
  else {
    uVar1 = *((undefined4 *)GEN_TOP((*(int *)(param_3 + 8) + 8)));
  }
  F_01050b90(this,uVar1);
  *(undefined4 *)((int)this + 0x10) = param_1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x1157da8));
  *(undefined4 *)((int)this + 0x14) = param_2;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) =
       (*(undefined * PTR32 (*)[1])REFP(0x1157d88));
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_3 + 8);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) =
       (*(undefined * PTR32 (*)[1])REFP(0x1157da0));
  return (uint)this;
}

/* ref: FUN_00e49210 */
uint F_00e49210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe49210u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00e49220 */
uint F_00e49220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe49220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  uVar1 = F_004069f0(0xc);
  if (uVar1 != 0) {
    *(uint *)this = uVar1;
    *(uint *)uVar1 = uVar1;
    *(int *)(*(int *)this + 4) = *(int *)this;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00e49270 */
uint F_00e49270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe49270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *(uint *)((int)this + 4) = uVar1;
    *(uint *)uVar1 = uVar1;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00e492d0 */
uint F_00e492d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe492d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *(uint *)((int)this + 4) = uVar1;
    *(uint *)uVar1 = uVar1;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00e49330 */
uint F_00e49330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe49330u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *(uint *)((int)this + 4) = uVar1;
    *(uint *)uVar1 = uVar1;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00e49390 */
uint F_00e49390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe49390u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *(uint *)((int)this + 4) = uVar1;
    *(uint *)uVar1 = uVar1;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00e49400 */
uint F_00e49400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe49400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  uVar1 = F_004069f0(0xc);
  if (uVar1 != 0) {
    *(uint *)this = uVar1;
    *(uint *)uVar1 = uVar1;
    *(int *)(*(int *)this + 4) = *(int *)this;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00e49450 */
uint F_00e49450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe49450u, gen_a0, gen_a1, gen_a2, 0u);
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
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x15))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  F_00e47cb0(&(*(int * PTR32 *)&gen_args[2]));
  piVar6 = (int *)*piVar3;
  if (*(char *)((int)piVar6 + 0x15) == '\0') {
    piVar7 = piVar6;
    if ((*(char *)(piVar3[2] + 0x15) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar3[2]) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0x15) == '\0') {
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
      iVar1 = (*(int * PTR32 *)&gen_args[2])[5];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 5))) = (char)piVar3[5];
      *(char *)(piVar3 + 5) = (char)iVar1;
      goto LAB_00e4956a;
    }
  }
  else {
    piVar7 = (int *)piVar3[2];
  }
  piVar6 = (int *)piVar3[1];
  if (*(char *)((int)piVar7 + 0x15) == '\0') {
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
    if (*(char *)((int)piVar7 + 0x15) == '\0') {
      piVar4 = (int *)F_00e47b50(piVar7);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0x15) == '\0') {
      uVar5 = F_00e47b30(piVar7);
      *(uint *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar6;
    }
  }
LAB_00e4956a: ;
  if ((char)piVar3[5] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[5] != '\x01') break;
        piVar6 = (int *)*piVar4;
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar4[2];
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00e48de0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0x15) == '\0') {
            if ((*(char *)(*piVar6 + 0x14) != '\x01') || (*(char *)(piVar6[2] + 0x14) != '\x01')) {
              if (*(char *)(piVar6[2] + 0x14) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x14) = 1;
                *(undefined1 *)(piVar6 + 5) = 0;
                F_00e48640((*(undefined * PTR32 *)&gen_args[0]),piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 5) = (char)piVar4[5];
              *(undefined1 *)(piVar4 + 5) = 1;
              *(undefined1 *)(piVar6[2] + 0x14) = 1;
              F_00e48de0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
              break;
            }
LAB_00e49628: ;
            *(undefined1 *)(piVar6 + 5) = 0;
          }
        }
        else {
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00e48640((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0x15) == '\0') {
            if ((*(char *)(piVar6[2] + 0x14) == '\x01') && (*(char *)(*piVar6 + 0x14) == '\x01'))
            goto LAB_00e49628;
            if (*(char *)(*piVar6 + 0x14) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x14) = 1;
              *(undefined1 *)(piVar6 + 5) = 0;
              F_00e48de0((*(undefined * PTR32 *)&gen_args[0]),piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 5) = (char)piVar4[5];
            *(undefined1 *)(piVar4 + 5) = 1;
            *(undefined1 *)(*piVar6 + 0x14) = 1;
            F_00e48640((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 5) = 1;
  }
  F_00406ad0(piVar3);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + -1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00e496a0 */
uint F_00e496a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe496a0u, gen_a0, gen_a1, gen_a2, 0u);
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
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x15))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  F_00e47d00(&(*(int * PTR32 *)&gen_args[2]));
  piVar6 = (int *)*piVar3;
  if (*(char *)((int)piVar6 + 0x15) == '\0') {
    piVar7 = piVar6;
    if ((*(char *)(piVar3[2] + 0x15) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar3[2]) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0x15) == '\0') {
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
      iVar1 = (*(int * PTR32 *)&gen_args[2])[5];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 5))) = (char)piVar3[5];
      *(char *)(piVar3 + 5) = (char)iVar1;
      goto LAB_00e497ba;
    }
  }
  else {
    piVar7 = (int *)piVar3[2];
  }
  piVar6 = (int *)piVar3[1];
  if (*(char *)((int)piVar7 + 0x15) == '\0') {
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
    if (*(char *)((int)piVar7 + 0x15) == '\0') {
      piVar4 = (int *)F_00e47c10(piVar7);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0x15) == '\0') {
      uVar5 = F_00e47bf0(piVar7);
      *(uint *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar6;
    }
  }
LAB_00e497ba: ;
  if ((char)piVar3[5] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[5] != '\x01') break;
        piVar6 = (int *)*piVar4;
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar4[2];
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00e48e40((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0x15) == '\0') {
            if ((*(char *)(*piVar6 + 0x14) != '\x01') || (*(char *)(piVar6[2] + 0x14) != '\x01')) {
              if (*(char *)(piVar6[2] + 0x14) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x14) = 1;
                *(undefined1 *)(piVar6 + 5) = 0;
                F_00e486d0((*(undefined * PTR32 *)&gen_args[0]),piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 5) = (char)piVar4[5];
              *(undefined1 *)(piVar4 + 5) = 1;
              *(undefined1 *)(piVar6[2] + 0x14) = 1;
              F_00e48e40((*(undefined * PTR32 *)&gen_args[0]),piVar4);
              break;
            }
LAB_00e49878: ;
            *(undefined1 *)(piVar6 + 5) = 0;
          }
        }
        else {
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00e486d0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0x15) == '\0') {
            if ((*(char *)(piVar6[2] + 0x14) == '\x01') && (*(char *)(*piVar6 + 0x14) == '\x01'))
            goto LAB_00e49878;
            if (*(char *)(*piVar6 + 0x14) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x14) = 1;
              *(undefined1 *)(piVar6 + 5) = 0;
              F_00e48e40((*(undefined * PTR32 *)&gen_args[0]),piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 5) = (char)piVar4[5];
            *(undefined1 *)(piVar4 + 5) = 1;
            *(undefined1 *)(*piVar6 + 0x14) = 1;
            F_00e486d0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 5) = 1;
  }
  F_00406ad0(piVar3);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + -1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00e498f0 */
uint F_00e498f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe498f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00e49900 */
uint F_00e49900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe49900u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00e49910 */
uint F_00e49910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe49910u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00e49930 */
uint F_00e49930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe49930u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)*in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00e49940 */
uint F_00e49940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe49940u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00e49960 */
uint F_00e49960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe49960u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00e49970 */
unsigned int F_00e49970(unsigned int gen_a0)
{
  GEN_ENTER(0xe49970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  
  piVar1 = *(int * PTR32 *)this;
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*(int *)this + 4) = *(int *)this;
  *(undefined4 *)((int)this + 4) = 0;
  if (piVar2 != *(int * PTR32 *)this) {
    do {
      piVar1 = (int *)*piVar2;
      F_00406ad0(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)this);
  }
  return 0;
}

/* ref: FUN_00e499b0 */
uint F_00e499b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe499b0u, gen_a0, gen_a1, gen_a2, 0u);
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
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x15))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  F_00e47fb0(&(*(int * PTR32 *)&gen_args[2]));
  piVar6 = (int *)*piVar3;
  if (*(char *)((int)piVar6 + 0x15) == '\0') {
    piVar7 = piVar6;
    if ((*(char *)(piVar3[2] + 0x15) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar3[2]) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0x15) == '\0') {
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
      iVar1 = (*(int * PTR32 *)&gen_args[2])[5];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 5))) = (char)piVar3[5];
      *(char *)(piVar3 + 5) = (char)iVar1;
      goto LAB_00e49aca;
    }
  }
  else {
    piVar7 = (int *)piVar3[2];
  }
  piVar6 = (int *)piVar3[1];
  if (*(char *)((int)piVar7 + 0x15) == '\0') {
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
    if (*(char *)((int)piVar7 + 0x15) == '\0') {
      piVar4 = (int *)F_00e47f30(piVar7);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0x15) == '\0') {
      uVar5 = F_00e47f10(piVar7);
      *(uint *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar6;
    }
  }
LAB_00e49aca: ;
  if ((char)piVar3[5] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[5] != '\x01') break;
        piVar6 = (int *)*piVar4;
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar4[2];
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00e48fa0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0x15) == '\0') {
            if ((*(char *)(*piVar6 + 0x14) != '\x01') || (*(char *)(piVar6[2] + 0x14) != '\x01')) {
              if (*(char *)(piVar6[2] + 0x14) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x14) = 1;
                *(undefined1 *)(piVar6 + 5) = 0;
                F_00e488c0((*(undefined * PTR32 *)&gen_args[0]),piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 5) = (char)piVar4[5];
              *(undefined1 *)(piVar4 + 5) = 1;
              *(undefined1 *)(piVar6[2] + 0x14) = 1;
              F_00e48fa0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
              break;
            }
LAB_00e49b88: ;
            *(undefined1 *)(piVar6 + 5) = 0;
          }
        }
        else {
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00e488c0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0x15) == '\0') {
            if ((*(char *)(piVar6[2] + 0x14) == '\x01') && (*(char *)(*piVar6 + 0x14) == '\x01'))
            goto LAB_00e49b88;
            if (*(char *)(*piVar6 + 0x14) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x14) = 1;
              *(undefined1 *)(piVar6 + 5) = 0;
              F_00e48fa0((*(undefined * PTR32 *)&gen_args[0]),piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 5) = (char)piVar4[5];
            *(undefined1 *)(piVar4 + 5) = 1;
            *(undefined1 *)(*piVar6 + 0x14) = 1;
            F_00e488c0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 5) = 1;
  }
  F_00406ad0(piVar3);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + -1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00e49c00 */
uint F_00e49c00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe49c00u, gen_a0, gen_a1, gen_a2, 0u);
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
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x15))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  F_00e48000(&(*(int * PTR32 *)&gen_args[2]));
  piVar6 = (int *)*piVar3;
  if (*(char *)((int)piVar6 + 0x15) == '\0') {
    piVar7 = piVar6;
    if ((*(char *)(piVar3[2] + 0x15) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar3[2]) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0x15) == '\0') {
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
      iVar1 = (*(int * PTR32 *)&gen_args[2])[5];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 5))) = (char)piVar3[5];
      *(char *)(piVar3 + 5) = (char)iVar1;
      goto LAB_00e49d1a;
    }
  }
  else {
    piVar7 = (int *)piVar3[2];
  }
  piVar6 = (int *)piVar3[1];
  if (*(char *)((int)piVar7 + 0x15) == '\0') {
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
    if (*(char *)((int)piVar7 + 0x15) == '\0') {
      piVar4 = (int *)F_00e47f80(piVar7);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0x15) == '\0') {
      uVar5 = F_00e47f60(piVar7);
      *(uint *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar6;
    }
  }
LAB_00e49d1a: ;
  if ((char)piVar3[5] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[5] != '\x01') break;
        piVar6 = (int *)*piVar4;
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar4[2];
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00e49000((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0x15) == '\0') {
            if ((*(char *)(*piVar6 + 0x14) != '\x01') || (*(char *)(piVar6[2] + 0x14) != '\x01')) {
              if (*(char *)(piVar6[2] + 0x14) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x14) = 1;
                *(undefined1 *)(piVar6 + 5) = 0;
                F_00e48930((*(undefined * PTR32 *)&gen_args[0]),piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 5) = (char)piVar4[5];
              *(undefined1 *)(piVar4 + 5) = 1;
              *(undefined1 *)(piVar6[2] + 0x14) = 1;
              F_00e49000((*(undefined * PTR32 *)&gen_args[0]),piVar4);
              break;
            }
LAB_00e49dd8: ;
            *(undefined1 *)(piVar6 + 5) = 0;
          }
        }
        else {
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00e48930((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0x15) == '\0') {
            if ((*(char *)(piVar6[2] + 0x14) == '\x01') && (*(char *)(*piVar6 + 0x14) == '\x01'))
            goto LAB_00e49dd8;
            if (*(char *)(*piVar6 + 0x14) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x14) = 1;
              *(undefined1 *)(piVar6 + 5) = 0;
              F_00e49000((*(undefined * PTR32 *)&gen_args[0]),piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 5) = (char)piVar4[5];
            *(undefined1 *)(piVar4 + 5) = 1;
            *(undefined1 *)(*piVar6 + 0x14) = 1;
            F_00e48930((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 5) = 1;
  }
  F_00406ad0(piVar3);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + -1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00e49e50 */
uint F_00e49e50(unsigned int gen_a0)
{
  GEN_ENTER(0xe49e50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  cVar1 = *(char *)((int)piVar2 + 0x15);
  while (cVar1 == '\0') {
    F_00e49060(this,piVar2[2]);
    piVar3 = (int *)*piVar2;
    F_00406ad0(piVar2);
    piVar2 = piVar3;
    cVar1 = *(char *)((int)piVar3 + 0x15);
  }
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar4 = *(uint *)((int)this + 4);
  *(uint *)(uVar4 + 8) = uVar4;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar4;
}

/* ref: FUN_00e49ea0 */
uint F_00e49ea0(unsigned int gen_a0)
{
  GEN_ENTER(0xe49ea0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  cVar1 = *(char *)((int)piVar2 + 0x15);
  while (cVar1 == '\0') {
    F_00e490a0(this,piVar2[2]);
    piVar3 = (int *)*piVar2;
    F_00406ad0(piVar2);
    piVar2 = piVar3;
    cVar1 = *(char *)((int)piVar3 + 0x15);
  }
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar4 = *(uint *)((int)this + 4);
  *(uint *)(uVar4 + 8) = uVar4;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar4;
}

/* ref: FUN_00e49ef0 */
unsigned int F_00e49ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe49ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x15);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00e49ef0(this,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00406ad0(piVar3);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x15);
  }
  return 0;
}

/* ref: FUN_00e49f30 */
unsigned int F_00e49f30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe49f30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x15);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00e49f30(this,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00406ad0(piVar3);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x15);
  }
  return 0;
}

/* ref: TargetEntityFactoryClass_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf1 */
uint F_00e49f70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe49f70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 * in_ecx;
  undefined4 uVar3;
  undefined4 local_10;
  
  in_ecx = (undefined4 *)F_004069f0(0x24);
  if (in_ecx == (undefined4 *)0x0) {
    return 0;
  }
  if (param_2 == 0) {
    local_10 = 0;
  }
  else {
    local_10 = *(undefined4 *)(param_2 + 8);
  }
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  uVar3 = local_10;
  if (param_2 != 0) {
    uVar3 = *(undefined4 *)(param_2 + 8);
  }
  F_01050b90(in_ecx,uVar3);
  in_ecx[5] = uVar2;
  in_ecx[4] = uVar1;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1157da8));
  in_ecx[8] = param_2;
  in_ecx[7] = local_10;
  in_ecx[6] = (*(undefined * PTR32 (*)[1])REFP(0x1157da0));
  return (uint)in_ecx;
}

/* ref: TargetEntityFactoryClass_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf2 */
uint F_00e4a000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe4a000u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 uVar1;
  undefined4 * in_ecx;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  in_ecx = (undefined4 *)F_004069f0(0x24);
  if (in_ecx == (undefined4 *)0x0) {
    return 0;
  }
  if (param_3 != 0) {
    uVar3 = *(undefined4 *)(param_3 + 8);
  }
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = uVar3;
  if (param_3 != 0) {
    uVar2 = *(undefined4 *)(param_3 + 8);
  }
  F_01050b90(in_ecx,uVar2);
  in_ecx[5] = uVar1;
  in_ecx[4] = param_1;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1157da8));
  in_ecx[8] = param_3;
  in_ecx[7] = uVar3;
  in_ecx[6] = (*(undefined * PTR32 (*)[1])REFP(0x1157da0));
  return (uint)in_ecx;
}

/* ref: TargetEntityFactoryClass_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf3 */
uint F_00e4a080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4a080u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 * in_ecx;
  undefined4 uVar3;
  
  in_ecx = (undefined4 *)F_004069f0(0x24);
  if (in_ecx != (undefined4 *)0x0) {
    uVar1 = *(undefined4 *)(param_1 + 0x14);
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    if (*(int *)(param_2 + 8) == 0) {
      uVar3 = *(undefined4 *)(param_2 + 4);
    }
    else {
      uVar3 = *((undefined4 *)GEN_TOP((*(int *)(param_2 + 8) + 8)));
    }
    F_01050b90(in_ecx,uVar3);
    in_ecx[5] = uVar1;
    in_ecx[4] = uVar2;
    *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1157da8));
    in_ecx[6] = (*(undefined * PTR32 (*)[1])REFP(0x1157d88));
    in_ecx[7] = *(undefined4 *)(param_2 + 4);
    in_ecx[8] = *(undefined4 *)(param_2 + 8);
    in_ecx[6] = (*(undefined * PTR32 (*)[1])REFP(0x1157da0));
    return (uint)in_ecx;
  }
  return 0;
}

/* ref: TargetEntityFactoryClass_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf4 */
uint F_00e4a100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4a100u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * in_ecx;
  
  in_ecx = (undefined4 *)F_004069f0(0x24);
  if (in_ecx != (undefined4 *)0x0) {
    F_01050b90(in_ecx,param_2);
    in_ecx[5] = param_2;
    in_ecx[4] = param_1;
    *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1157da8));
    in_ecx[7] = 0;
    in_ecx[8] = 0;
    in_ecx[6] = (*(undefined * PTR32 (*)[1])REFP(0x1157da0));
    return (uint)in_ecx;
  }
  return 0;
}

/* ref: TargetEntityFactoryClass_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf5 */
uint F_00e4a160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe4a160u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 * in_ecx;
  undefined4 uVar1;
  
  in_ecx = (undefined4 *)F_004069f0(0x24);
  if (in_ecx != (undefined4 *)0x0) {
    if (*(int *)(param_3 + 8) == 0) {
      uVar1 = *(undefined4 *)(param_3 + 4);
    }
    else {
      uVar1 = *((undefined4 *)GEN_TOP((*(int *)(param_3 + 8) + 8)));
    }
    F_01050b90(in_ecx,uVar1);
    in_ecx[4] = param_1;
    *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1157da8));
    in_ecx[5] = param_2;
    in_ecx[6] = (*(undefined * PTR32 (*)[1])REFP(0x1157d88));
    in_ecx[7] = *(undefined4 *)(param_3 + 4);
    in_ecx[8] = *(undefined4 *)(param_3 + 8);
    in_ecx[6] = (*(undefined * PTR32 (*)[1])REFP(0x1157da0));
    return (uint)in_ecx;
  }
  return 0;
}

/* ref: FUN_00e4a1d0 */
unsigned int F_00e4a1d0(unsigned int gen_a0)
{
  GEN_ENTER(0xe4a1d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  
  piVar1 = *(int * PTR32 *)this;
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*(int *)this + 4) = *(int *)this;
  *(undefined4 *)((int)this + 4) = 0;
  if (piVar2 != *(int * PTR32 *)this) {
    do {
      piVar1 = (int *)*piVar2;
      F_00406ad0(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)this);
  }
  return 0;
}

/* ref: FUN_00e4a210 */
uint F_00e4a210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe4a210u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  undefined * pvVar2;
  uint uVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 4))))();
  F_00c330c0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  pvVar2 = (*(undefined * PTR32 *)(gen_frame + 0x8));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18)))) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) + 0x4c)));
    ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1,*(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10));
    F_00e49c00(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))),&(*(undefined4 *)&gen_args[1]),pvVar2);
  }
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 8))))((*(undefined * PTR32 *)&gen_args[0]));
  return uVar3;
}

/* ref: FUN_00e4a270 */
uint F_00e4a270(unsigned int gen_a0)
{
  GEN_ENTER(0xe4a270u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  uVar1 = F_004069f0(0xc);
  if (uVar1 != 0) {
    *(uint *)this = uVar1;
    *(uint *)uVar1 = uVar1;
    *(int *)(*(int *)this + 4) = *(int *)this;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00e4a2c0 */
uint F_00e4a2c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4a2c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *(uint *)((int)this + 4) = uVar1;
    *(uint *)uVar1 = uVar1;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00e4a320 */
uint F_00e4a320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4a320u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *(uint *)((int)this + 4) = uVar1;
    *(uint *)uVar1 = uVar1;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00e4a380 */
uint F_00e4a380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4a380u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *(uint *)((int)this + 4) = uVar1;
    *(uint *)uVar1 = uVar1;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00e4a3e0 */
uint F_00e4a3e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4a3e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *(uint *)((int)this + 4) = uVar1;
    *(uint *)uVar1 = uVar1;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00e4a440 */
byte F_00e4a440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4a440u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  for (puVar1 = param_1; puVar1 != param_2; puVar1 = (undefined4 *)*puVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(puVar1[2] + 8) + 0x10))))(puVar1[2]);
  }
  return (byte)param_3;
}

/* ref: FUN_00e4a470 */
uint F_00e4a470(unsigned int gen_a0)
{
  GEN_ENTER(0xe4a470u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  uVar1 = F_004069f0(0xc);
  if (uVar1 != 0) {
    *(uint *)this = uVar1;
    *(uint *)uVar1 = uVar1;
    *(int *)(*(int *)this + 4) = *(int *)this;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00e4a4d0 */
uint F_00e4a4d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4a4d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = *param_2;
  if (param_2 != *(int * PTR32 *)this) {
    *(int *)param_2[1] = *param_2;
    *(int *)(*param_2 + 4) = param_2[1];
    F_00406ad0(param_2);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: FUN_00e4a510 */
unsigned int F_00e4a510(unsigned int gen_a0)
{
  GEN_ENTER(0xe4a510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  
  piVar1 = *(int * PTR32 *)this;
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*(int *)this + 4) = *(int *)this;
  *(undefined4 *)((int)this + 4) = 0;
  if (piVar2 != *(int * PTR32 *)this) {
    do {
      piVar1 = (int *)*piVar2;
      F_00406ad0(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)this);
  }
  return 0;
}

/* ref: FUN_00e4a550 */
uint F_00e4a550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe4a550u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00e49e50(this);
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
    F_00e49450(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00e4a5f0 */
uint F_00e4a5f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe4a5f0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00e49ea0(this);
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
    F_00e496a0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00e4a690 */
uint F_00e4a690(unsigned int gen_a0)
{
  GEN_ENTER(0xe4a690u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  cVar1 = *(char *)((int)piVar2 + 0x15);
  while (cVar1 == '\0') {
    F_00e49ef0(this,piVar2[2]);
    piVar3 = (int *)*piVar2;
    F_00406ad0(piVar2);
    piVar2 = piVar3;
    cVar1 = *(char *)((int)piVar3 + 0x15);
  }
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar4 = *(uint *)((int)this + 4);
  *(uint *)(uVar4 + 8) = uVar4;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar4;
}

/* ref: FUN_00e4a6e0 */
uint F_00e4a6e0(unsigned int gen_a0)
{
  GEN_ENTER(0xe4a6e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  cVar1 = *(char *)((int)piVar2 + 0x15);
  while (cVar1 == '\0') {
    F_00e49f30(this,piVar2[2]);
    piVar3 = (int *)*piVar2;
    F_00406ad0(piVar2);
    piVar2 = piVar3;
    cVar1 = *(char *)((int)piVar3 + 0x15);
  }
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar4 = *(uint *)((int)this + 4);
  *(uint *)(uVar4 + 8) = uVar4;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar4;
}

/* ref: FUN_00e4a730 */
unsigned int F_00e4a730(unsigned int gen_a0)
{
  GEN_ENTER(0xe4a730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  
  piVar1 = *(int * PTR32 *)this;
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*(int *)this + 4) = *(int *)this;
  *(undefined4 *)((int)this + 4) = 0;
  if (piVar2 != *(int * PTR32 *)this) {
    do {
      piVar1 = (int *)*piVar2;
      F_00406ad0(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)this);
  }
  return 0;
}

/* ref: FUN_00e4a770 */
byte F_00e4a770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4a770u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * piVar1;
  undefined4 * puVar2;
  
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = (undefined4 *)*puVar2) {
    piVar1 = *(int * PTR32 *)(puVar2[2] + 8);
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,puVar2[2]);
  }
  return (byte)param_3;
}

/* ref: FUN_00e4a7a0 */
uint F_00e4a7a0(unsigned int gen_a0)
{
  GEN_ENTER(0xe4a7a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  
  piVar1 = *(int * PTR32 *)this;
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*(int *)this + 4) = *(int *)this;
  *(undefined4 *)((int)this + 4) = 0;
  if (piVar2 != *(int * PTR32 *)this) {
    do {
      piVar1 = (int *)*piVar2;
      F_00406ad0(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)this);
  }
  uVar3 = F_00406ad0(*(undefined4 *)this);
  return uVar3;
}

/* ref: FUN_00e4a7e0 */
uint F_00e4a7e0(unsigned int gen_a0)
{
  GEN_ENTER(0xe4a7e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP(**(int * PTR32 *)this));
  if (piVar1 != *(int * PTR32 *)this) {
    *(int *)piVar1[1] = *piVar1;
    *(int *)(*piVar1 + 4) = piVar1[1];
    piVar1 = (int *)F_00406ad0(piVar1);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  }
  return (uint)piVar1;
}

/* ref: FUN_00e4a810 */
uint F_00e4a810(unsigned int gen_a0)
{
  GEN_ENTER(0xe4a810u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00e4a550(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00e4a830 */
uint F_00e4a830(unsigned int gen_a0)
{
  GEN_ENTER(0xe4a830u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00e4a5f0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00e4a850 */
uint F_00e4a850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe4a850u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00e4a690(this);
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
    F_00e499b0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00e4a8f0 */
uint F_00e4a8f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe4a8f0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00e4a6e0(this);
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
    F_00e49c00(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00e4a990 */
uint F_00e4a990(unsigned int gen_a0)
{
  GEN_ENTER(0xe4a990u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  
  piVar1 = *(int * PTR32 *)this;
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*(int *)this + 4) = *(int *)this;
  *(undefined4 *)((int)this + 4) = 0;
  if (piVar2 != *(int * PTR32 *)this) {
    do {
      piVar1 = (int *)*piVar2;
      F_00406ad0(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)this);
  }
  uVar3 = F_00406ad0(*(undefined4 *)this);
  return uVar3;
}

/* ref: FUN_00e4a9d0 */
uint F_00e4a9d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4a9d0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  undefined * pvVar2;
  uint uVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))))();
  F_00c33050(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(uint *)&gen_args[1]));
  pvVar2 = (*(undefined * PTR32 *)(gen_frame + 0x8));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)))) {
    ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))),*(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10));
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x60)));
    if (piVar1 == (int *)0x0) {
      if ((((*(uint *)&gen_args[1]) & 0x5ff80000) == 0) &&
         ((((*(uint *)&gen_args[1]) >> 0x1d == 1 || ((*(uint *)&gen_args[1]) >> 0x1d == 2)) && ((char)(*(undefined4 *)&gen_args[2]) != '\0')))) {
        F_0074d410(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))),&(*(uint *)&gen_args[1]));
      }
    }
    else if ((char)(*(undefined4 *)&gen_args[2]) != '\0') {
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,&(*(uint *)&gen_args[1]));
    }
    F_00e499b0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))),&(*(undefined4 *)&gen_args[2]),pvVar2);
  }
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))))((*(undefined * PTR32 *)&gen_args[0]));
  return uVar3;
}

/* ref: FUN_00e4aa70 */
unsigned int F_00e4aa70(unsigned int gen_a0)
{
  GEN_ENTER(0xe4aa70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  int * piVar3;
  int * piVar4;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
    piVar3 = *(int * PTR32 *)(puVar2[2] + 8);
    ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3,puVar2[2]);
  }
  piVar3 = *(int * PTR32 *)((int)this + 4);
  piVar4 = (int *)*piVar3;
  *piVar3 = (int)piVar3;
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)((int)this + 8) = 0;
  if (piVar4 != *(int * PTR32 *)((int)this + 4)) {
    do {
      piVar3 = (int *)*piVar4;
      F_00406ad0(piVar4);
      piVar4 = piVar3;
    } while (piVar3 != (int *)*(int *)((int)this + 4));
  }
  return 0;
}

/* ref: FUN_00e4aad0 */
uint F_00e4aad0(unsigned int gen_a0)
{
  GEN_ENTER(0xe4aad0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x1157db0));
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004069f0(0xc);
  if (uVar1 != 0) {
    *(uint *)((int)this + 4) = uVar1;
    *(uint *)uVar1 = uVar1;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00e4ab20 */
uint F_00e4ab20(unsigned int gen_a0)
{
  GEN_ENTER(0xe4ab20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00e4a550(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00406ad0(*(undefined4 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00e4ab50 */
uint F_00e4ab50(unsigned int gen_a0)
{
  GEN_ENTER(0xe4ab50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00e4a5f0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00406ad0(*(undefined4 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00e4ab80 */
uint F_00e4ab80(unsigned int gen_a0)
{
  GEN_ENTER(0xe4ab80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00e4a850(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00e4aba0 */
uint F_00e4aba0(unsigned int gen_a0)
{
  GEN_ENTER(0xe4aba0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00e4a8f0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00e4abc0 */
unsigned int F_00e4abc0(unsigned int gen_a0)
{
  GEN_ENTER(0xe4abc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * PTR32 * ppuVar5;
  undefined4 * puVar6;
  
  iVar2 = *(int *)((int)this + 0x24);
  while (iVar2 != 0) {
    (*(uint *)(gen_frame + 0x18)) = *((uint *)GEN_TOP((**(int * PTR32 *)((int)this + 0x20) + 0xc)));
    ((code *)*(gen_code32 *)(*(int *)this + 0x44))(this);
    puVar6 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)((int)this + 0x20))[1]));
    cVar1 = *(char *)((int)puVar6 + 0x15);
    puVar3 = *(undefined4 * PTR32 *)((int)this + 0x20);
    while (cVar1 == '\0') {
      if ((uint)puVar6[3] < (*(uint *)(gen_frame + 0x18))) {
        puVar4 = (undefined4 *)puVar6[2];
        puVar6 = puVar3;
      }
      else {
        puVar4 = (undefined4 *)*puVar6;
      }
      puVar3 = puVar6;
      puVar6 = puVar4;
      cVar1 = *(char *)((int)puVar4 + 0x15);
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x14)) = puVar3;
    if ((puVar3 == *(undefined4 * PTR32 *)((int)this + 0x20)) || ((*(uint *)(gen_frame + 0x18)) < (uint)puVar3[3])) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = *(undefined4 * PTR32 *)((int)this + 0x20);
      ppuVar5 = &(*(undefined4 * PTR32 *)(gen_frame + 0x10));
    }
    else {
      ppuVar5 = &(*(undefined4 * PTR32 *)(gen_frame + 0x14));
    }
    puVar6 = *ppuVar5;
    if (puVar6 != *(undefined4 * PTR32 *)((int)this + 0x20)) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x44) + 8))))(*(int * PTR32 *)((int)this + 0x44),puVar6[4]);
      if (*(int *)((int)this + 0x60) == 0) {
        if ((((*(uint *)(gen_frame + 0x18)) & 0x5ff80000) == 0) && (((*(uint *)(gen_frame + 0x18)) >> 0x1d == 1 || ((*(uint *)(gen_frame + 0x18)) >> 0x1d == 2)))) {
          F_0074d410((undefined *)((int)this + 0xc),&(*(uint *)(gen_frame + 0x18)));
        }
      }
      else {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x60) + 0xc))))(*(int * PTR32 *)((int)this + 0x60),&(*(uint *)(gen_frame + 0x18)));
      }
      F_00e499b0((undefined *)((int)this + 0x1c),((undefined1 *)(gen_frame + 0xc)),puVar6);
    }
    ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this);
    iVar2 = *(int *)((int)this + 0x24);
  }
  return 0;
}

/* ref: FUN_00e4aca0 */
uint F_00e4aca0(unsigned int gen_a0)
{
  GEN_ENTER(0xe4aca0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x1157db0));
  F_00e4aa70(this);
  piVar1 = *(int * PTR32 *)((int)this + 4);
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)((int)this + 8) = 0;
  if (piVar2 != *(int * PTR32 *)((int)this + 4)) {
    do {
      piVar1 = (int *)*piVar2;
      F_00406ad0(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)((int)this + 4));
  }
  uVar3 = F_00406ad0(*(undefined4 *)((int)this + 4));
  return uVar3;
}

/* ref: NetBufferQueueCoreTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application_IpcChannel::vf0 */
uint F_00e4acf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe4acf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00e4aca0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00e4ad20 */
uint F_00e4ad20(unsigned int gen_a0)
{
  GEN_ENTER(0xe4ad20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *(uint *)((int)this + 4) = uVar1;
    *(uint *)uVar1 = uVar1;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00e4ad80 */
uint F_00e4ad80(unsigned int gen_a0)
{
  GEN_ENTER(0xe4ad80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *(uint *)((int)this + 4) = uVar1;
    *(uint *)uVar1 = uVar1;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00e4ade0 */
uint F_00e4ade0(unsigned int gen_a0)
{
  GEN_ENTER(0xe4ade0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x1157db0));
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004069f0(0xc);
  if (uVar1 != 0) {
    *(uint *)((int)this + 4) = uVar1;
    *(uint *)uVar1 = uVar1;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *(undefined * PTR32 * PTR32 *)this =
         (*(undefined * PTR32 (*)[3])REFP(0x1157dc0));
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: NetBufferQueueTmpl_LF_TLobbyProtoUp_LobbyProtoChannel_Network_Application_IpcChannel::vf1 */
unsigned int F_00e4ae60(void)
{
  GEN_ENTER(0xe4ae60u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: NetBufferQueueTmpl_LF_TLobbyProtoUp_LobbyProtoChannel_Network_Application_IpcChannel::vf2 */
unsigned int F_00e4ae70(void)
{
  GEN_ENTER(0xe4ae70u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00e4ae90 */
uint F_00e4ae90(unsigned int gen_a0)
{
  GEN_ENTER(0xe4ae90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00e4a550(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00406ad0(*(undefined4 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00e4aec0 */
uint F_00e4aec0(unsigned int gen_a0)
{
  GEN_ENTER(0xe4aec0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00e4a5f0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00406ad0(*(undefined4 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00e4aef0 */
uint F_00e4aef0(unsigned int gen_a0)
{
  GEN_ENTER(0xe4aef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00e4a850(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00406ad0(*(undefined4 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00e4af20 */
uint F_00e4af20(unsigned int gen_a0)
{
  GEN_ENTER(0xe4af20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00e4a8f0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00406ad0(*(undefined4 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00e4af50 */
uint F_00e4af50(unsigned int gen_a0)
{
  GEN_ENTER(0xe4af50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *(uint *)((int)this + 4) = uVar1;
    *(uint *)uVar1 = uVar1;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00e4afb0 */
uint F_00e4afb0(unsigned int gen_a0)
{
  GEN_ENTER(0xe4afb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *(uint *)((int)this + 4) = uVar1;
    *(uint *)uVar1 = uVar1;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00e4b010 */
uint F_00e4b010(unsigned int gen_a0)
{
  GEN_ENTER(0xe4b010u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x1157dd0));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *(uint *)((int)this + 0xc) = uVar1;
    *(uint *)uVar1 = uVar1;
    *((int *)GEN_TOP((*(int *)((int)this + 0xc) + 4))) = *(int *)((int)this + 0xc);
    *((int *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(int *)((int)this + 0xc);
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0xc) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0xc) + 0x15))) = 1;
    *(undefined4 *)((int)this + 0x20) = 0;
    uVar1 = F_004069f0(0x18);
    if (uVar1 != 0) {
      *(uint *)((int)this + 0x1c) = uVar1;
      *(uint *)uVar1 = uVar1;
      *((int *)GEN_TOP((*(int *)((int)this + 0x1c) + 4))) = *(int *)((int)this + 0x1c);
      *((int *)GEN_TOP((*(int *)((int)this + 0x1c) + 8))) = *(int *)((int)this + 0x1c);
      *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0x14))) = 1;
      *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0x15))) = 1;
      return (uint)this;
    }
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: NetBufferFactoryTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application_IpcChannel::vf1 */
uint F_00e4b0a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe4b0a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00406bb0(param_1,0,0);
  return uVar1;
}

/* ref: NetBufferFactoryTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application_IpcChannel::vf2 */
uint F_00e4b0c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe4b0c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00406b30(param_1);
  return (uint)uVar1;
}

/* ref: FUN_00e4b100 */
uint F_00e4b100(unsigned int gen_a0)
{
  GEN_ENTER(0xe4b100u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e4b120 */
uint F_00e4b120(unsigned int gen_a0)
{
  GEN_ENTER(0xe4b120u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x15) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x15) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x15) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x15) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x15);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x15);
    }
    if (*(char *)(*(int *)this + 0x15) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00e4b180 */
uint F_00e4b180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe4b180u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  F_01050c90(this);
  *(undefined4 *)((int)this + 4) = param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x1157df0));
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  if (param_2 < 0x241) {
    *(undefined4 *)((int)this + 0x1c) = 0x240;
  }
  else {
    *(uint *)((int)this + 0x1c) = param_2;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 4))))
                    (*(int * PTR32 *)((int)this + 8),*(undefined4 *)((int)this + 0x1c));
  *(undefined4 *)((int)this + 0x20) = 0;
  *(uint *)((int)this + 0x24) = uVar1;
  return (uint)this;
}

/* ref: NetBufferTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application_IpcChannel::vf1 */
unsigned int F_00e4b1e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe4b1e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: NetBufferTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application_IpcChannel::vf2 */
unsigned int F_00e4b1f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe4b1f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00e4b200 */
uint F_00e4b200(unsigned int gen_a0)
{
  GEN_ENTER(0xe4b200u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x1157df0));
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 8))))
                    (*(int * PTR32 *)((int)this + 8),*(undefined4 *)((int)this + 0x24));
  F_01050c80(this);
  return uVar1;
}

/* ref: NetBufferTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application_IpcChannel::vf0 */
uint F_00e4b220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe4b220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x1157df0));
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 8))))
            (*(int * PTR32 *)((int)this + 8),*(undefined4 *)((int)this + 0x24));
  F_01050c80(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00e4b260 */
uint F_00e4b260(unsigned int gen_a0)
{
  GEN_ENTER(0xe4b260u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e4b270 */
uint F_00e4b270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4b270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e4b290 */
uint F_00e4b290(unsigned int gen_a0)
{
  GEN_ENTER(0xe4b290u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e4b2a0 */
uint F_00e4b2a0(unsigned int gen_a0)
{
  GEN_ENTER(0xe4b2a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e4b2b0 */
uint F_00e4b2b0(unsigned int gen_a0)
{
  GEN_ENTER(0xe4b2b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e4b2c0 */
uint F_00e4b2c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4b2c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e4b2e0 */
uint F_00e4b2e0(unsigned int gen_a0)
{
  GEN_ENTER(0xe4b2e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e4b2f0 */
uint F_00e4b2f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4b2f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e4b310 */
uint F_00e4b310(unsigned int gen_a0)
{
  GEN_ENTER(0xe4b310u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00e4b320 */
undefined4 * F_00e4b320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe4b320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
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

/* ref: FUN_00e4b350 */
uint F_00e4b350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe4b350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  code * pcVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this);
  pcVar1 = *(gen_code32 *)(*(int *)this + 0x18);
  iVar3 = *(int *)((int)this + 4) + 1;
  *(int *)((int)this + 4) = iVar3;
  (*pcVar1)(this);
  this_00 = (undefined *)F_00406b90(0x28,0,0);
  if (this_00 != (undefined *)0x0) {
    uVar2 = F_00e4b180(this_00,this,param_1,iVar3);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_00e4b3a0 */
uint F_00e4b3a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4b3a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e4b3c0 */
uint F_00e4b3c0(unsigned int gen_a0)
{
  GEN_ENTER(0xe4b3c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * pcVar1;
  undefined4 * in_ecx;
  uint uVar2;
  int iVar3;
  
  ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this);
  pcVar1 = *(gen_code32 *)(*(int *)this + 0x18);
  iVar3 = *(int *)((int)this + 4) + 1;
  *(int *)((int)this + 4) = iVar3;
  (*pcVar1)(this);
  in_ecx = (undefined4 *)F_00406b90(0x28,0,0);
  if (in_ecx != (undefined4 *)0x0) {
    F_01050c90(in_ecx);
    in_ecx[2] = this;
    *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x1157df0));
    in_ecx[1] = iVar3;
    in_ecx[3] = 0;
    in_ecx[4] = 0;
    in_ecx[9] = 0;
    in_ecx[7] = 0x240;
    uVar2 = ((code *)*(gen_code32 *)(*(int *)in_ecx[2] + 4))((int *)in_ecx[2],0x240);
    in_ecx[8] = 0;
    in_ecx[9] = uVar2;
    return (uint)in_ecx;
  }
  return 0;
}

/* ref: FUN_00e4b450 */
uint F_00e4b450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4b450u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e4b470 */
uint F_00e4b470(unsigned int gen_a0)
{
  GEN_ENTER(0xe4b470u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00e4b120(this);
  return (uint)this;
}

/* ref: FUN_00e4b480 */
uint F_00e4b480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4b480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e4b4a0 */
uint F_00e4b4a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe4b4a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00e4b4c0 */
uint F_00e4b4c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe4b4c0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
LAB_00e4b6bd: ;
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
        goto LAB_00e4b6bd;
      }
      *(undefined1 *)(piVar5 + 5) = 1;
      *(undefined1 *)(iVar2 + 0x14) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x14))) = 0;
      piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
    }
    cVar1 = *(char *)(piVar4[1] + 0x14);
  } while( true );
}

/* ref: FUN_00e4b6f0 */
uint F_00e4b6f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4b6f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e4b710 */
uint F_00e4b710(unsigned int gen_a0)
{
  GEN_ENTER(0xe4b710u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00e4b120(this);
  return (uint)this;
}

/* ref: FUN_00e4b720 */
uint F_00e4b720(unsigned int gen_a0)
{
  GEN_ENTER(0xe4b720u, gen_a0, 0u, 0u, 0u);
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

/* ref: std::allocator<std::_Container_proxy>::construct_00e4b770 */
unsigned int F_00e4b770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4b770u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  if (param_1 != (undefined *)0x0) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_00e4b790 */
uint F_00e4b790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4b790u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
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

/* ref: FUN_00e4b7d0 */
uint F_00e4b7d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe4b7d0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    } while (*(char *)((int)puVar1 + 0x15) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = puVar2;
  if (bVar3 != false) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      puVar2 = (undefined4 *)F_00e4b4c0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar2,(*(int *)&gen_args[2]));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_00e4b120(&(*(undefined4 * PTR32 *)&gen_args[3]));
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[3]);
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[3])[3] < *(uint *)((*(int *)&gen_args[2]) + 0xc)) {
    puVar2 = (undefined4 *)F_00e4b4c0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),(*(undefined4 *)(gen_frame + 0x8)),puVar2,(*(int *)&gen_args[2]));
    *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  F_00406ad0((*(int *)&gen_args[2]));
  *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00e4b8b0 */
unsigned int F_00e4b8b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4b8b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_00e4b8d0 */
uint F_00e4b8d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4b8d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
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
  if ((puVar3 != *(undefined4 * PTR32 *)((int)this + 4)) && ((uint)puVar3[3] <= *param_2)) {
    *param_1 = puVar3;
    return (uint)param_1;
  }
  *param_1 = *(undefined4 * PTR32 *)((int)this + 4);
  return (uint)param_1;
}

/* ref: FUN_00e4b940 */
uint F_00e4b940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe4b940u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e4b9a0 */
uint F_00e4b9a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4b9a0u, gen_a0, gen_a1, gen_a2, 0u);
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
    F_00e4b7d0(this,param_1,puVar1,0);
    return param_1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: NetBufferFactoryTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application_IpcChannel::vf4 */
uint F_00e4ba20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe4ba20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this);
  F_00e4b8d0((undefined *)((int)this + 0x18),&(*(undefined4 *)(gen_frame + 0x18)),param_1 + 1);
  F_00e49450((undefined *)((int)this + 0x18),&(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x18)));
  if (0x240 < (uint)param_1[7]) {
    ((code *)*(gen_code32 *)*param_1)(param_1,1);
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this);
    return uVar2;
  }
  uVar1 = param_1[1];
  puVar3 = (undefined4 *)F_004069f0(0x18);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = *(undefined4 *)((int)this + 0xc);
    puVar3[1] = *(undefined4 *)((int)this + 0xc);
    puVar3[2] = *(undefined4 *)((int)this + 0xc);
    *(undefined2 *)(puVar3 + 5) = 0;
    if (puVar3 + 3 != (undefined4 *)0x0) {
      puVar3[3] = uVar1;
      puVar3[4] = param_1;
    }
    F_00e4b7d0((undefined *)((int)this + 8),((undefined1 *)(gen_frame + 0xc)),puVar3,0);
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this);
    return uVar2;
  }
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x14)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x14)));
}

/* ref: FUN_00e4baf0 */
uint F_00e4baf0(unsigned int gen_a0)
{
  GEN_ENTER(0xe4baf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this);
  piVar1 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0xc)));
  if (piVar1 != *(int * PTR32 *)((int)this + 0xc)) {
    uVar2 = piVar1[4];
    F_00e49450((undefined *)((int)this + 8),&(*(undefined4 *)(gen_frame + 0x18)),piVar1);
    if (uVar2 != 0) goto LAB_00e4bb28;
  }
  uVar2 = F_00e4b3c0(this);
LAB_00e4bb28: ;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x14)) = *(undefined * PTR32 * PTR32 *)(uVar2 + 4);
  puVar3 = (undefined4 *)F_004069f0(0x18);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = *(undefined4 *)((int)this + 0x1c);
    puVar3[1] = *(undefined4 *)((int)this + 0x1c);
    puVar3[2] = *(undefined4 *)((int)this + 0x1c);
    *(undefined2 *)(puVar3 + 5) = 0;
    if (puVar3 + 3 != (undefined4 *)0x0) {
      puVar3[3] = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x14));
      puVar3[4] = uVar2;
    }
    F_00e4b7d0((undefined *)((int)this + 0x18),((undefined1 *)(gen_frame + 0xc)),puVar3,0);
    ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this);
    return uVar2;
  }
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x14)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x14)));
}

/* ref: NetBufferFactoryTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application_IpcChannel::vf3 */
uint F_00e4bba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4bba0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  code * pcVar1;
  undefined * this_00;
  uint uVar2;
  undefined4 * puVar3;
  int iVar4;
  
  if ((uint)(param_1 + param_2) < 0x241) {
    uVar2 = F_00e4baf0(this);
    return uVar2;
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this);
  pcVar1 = *(gen_code32 *)(*(int *)this + 0x18);
  iVar4 = *(int *)((int)this + 4) + 1;
  *(int *)((int)this + 4) = iVar4;
  (*pcVar1)(this);
  this_00 = (undefined *)F_00406b90(0x28,0,0);
  if (this_00 == (undefined *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = F_00e4b180(this_00,this,param_1 + param_2,iVar4);
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x14)) = *(undefined * PTR32 * PTR32 *)(uVar2 + 4);
  puVar3 = (undefined4 *)F_004069f0(0x18);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = *(undefined4 *)((int)this + 0x1c);
    puVar3[1] = *(undefined4 *)((int)this + 0x1c);
    puVar3[2] = *(undefined4 *)((int)this + 0x1c);
    *(undefined2 *)(puVar3 + 5) = 0;
    if (puVar3 + 3 != (undefined4 *)0x0) {
      puVar3[3] = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x14));
      puVar3[4] = uVar2;
    }
    F_00e4b7d0((undefined *)((int)this + 0x18),((undefined1 *)(gen_frame + 0xc)),puVar3,0);
    ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this);
    return uVar2;
  }
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x14)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x14)));
}

/* ref: FUN_00e4bc80 */
uint F_00e4bc80(unsigned int gen_a0)
{
  GEN_ENTER(0xe4bc80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x1157e00));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *(uint *)((int)this + 0xc) = uVar1;
    *(uint *)uVar1 = uVar1;
    *((int *)GEN_TOP((*(int *)((int)this + 0xc) + 4))) = *(int *)((int)this + 0xc);
    *((int *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(int *)((int)this + 0xc);
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0xc) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0xc) + 0x15))) = 1;
    *(undefined4 *)((int)this + 0x20) = 0;
    uVar1 = F_004069f0(0x18);
    if (uVar1 != 0) {
      *(uint *)((int)this + 0x1c) = uVar1;
      *(uint *)uVar1 = uVar1;
      *((int *)GEN_TOP((*(int *)((int)this + 0x1c) + 4))) = *(int *)((int)this + 0x1c);
      *((int *)GEN_TOP((*(int *)((int)this + 0x1c) + 8))) = *(int *)((int)this + 0x1c);
      *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0x14))) = 1;
      *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0x15))) = 1;
      return (uint)this;
    }
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: NetBufferFactoryTmpl_TLobbyProtoDown_LobbyProtoChannel_Network_Application_IpcChannel::vf1 */
uint F_00e4bd10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe4bd10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00406bb0(param_1,0,0);
  return uVar1;
}

/* ref: NetBufferFactoryTmpl_TLobbyProtoDown_LobbyProtoChannel_Network_Application_IpcChannel::vf2 */
uint F_00e4bd30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe4bd30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00406b30(param_1);
  return (uint)uVar1;
}

/* ref: FUN_00e4bd70 */
uint F_00e4bd70(unsigned int gen_a0)
{
  GEN_ENTER(0xe4bd70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e4bd90 */
uint F_00e4bd90(unsigned int gen_a0)
{
  GEN_ENTER(0xe4bd90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x15) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x15) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x15) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x15) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x15);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x15);
    }
    if (*(char *)(*(int *)this + 0x15) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00e4bdf0 */
uint F_00e4bdf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe4bdf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  F_01050c90(this);
  *(undefined4 *)((int)this + 4) = param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x1157e20));
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  if (param_2 < 0x8c9) {
    *(undefined4 *)((int)this + 0x1c) = 0x8c8;
  }
  else {
    *(uint *)((int)this + 0x1c) = param_2;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 4))))
                    (*(int * PTR32 *)((int)this + 8),*(undefined4 *)((int)this + 0x1c));
  *(undefined4 *)((int)this + 0x20) = 0;
  *(uint *)((int)this + 0x24) = uVar1;
  return (uint)this;
}

/* ref: NetBufferTmpl_TLobbyProtoDown_LobbyProtoChannel_Network_Application_IpcChannel::vf1 */
unsigned int F_00e4be50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe4be50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: NetBufferTmpl_TLobbyProtoDown_LobbyProtoChannel_Network_Application_IpcChannel::vf2 */
unsigned int F_00e4be60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe4be60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00e4be70 */
uint F_00e4be70(unsigned int gen_a0)
{
  GEN_ENTER(0xe4be70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x1157e20));
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 8))))
                    (*(int * PTR32 *)((int)this + 8),*(undefined4 *)((int)this + 0x24));
  F_01050c80(this);
  return uVar1;
}

/* ref: NetBufferTmpl_TLobbyProtoDown_LobbyProtoChannel_Network_Application_IpcChannel::vf0 */
uint F_00e4be90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe4be90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x1157e20));
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 8))))
            (*(int * PTR32 *)((int)this + 8),*(undefined4 *)((int)this + 0x24));
  F_01050c80(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00e4bed0 */
uint F_00e4bed0(unsigned int gen_a0)
{
  GEN_ENTER(0xe4bed0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e4bee0 */
uint F_00e4bee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4bee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e4bf00 */
uint F_00e4bf00(unsigned int gen_a0)
{
  GEN_ENTER(0xe4bf00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e4bf10 */
uint F_00e4bf10(unsigned int gen_a0)
{
  GEN_ENTER(0xe4bf10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e4bf20 */
uint F_00e4bf20(unsigned int gen_a0)
{
  GEN_ENTER(0xe4bf20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e4bf30 */
uint F_00e4bf30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4bf30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e4bf50 */
uint F_00e4bf50(unsigned int gen_a0)
{
  GEN_ENTER(0xe4bf50u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e4bf60 */
uint F_00e4bf60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4bf60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e4bf80 */
uint F_00e4bf80(unsigned int gen_a0)
{
  GEN_ENTER(0xe4bf80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00e4bf90 */
undefined4 * F_00e4bf90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe4bf90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
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

/* ref: FUN_00e4bfc0 */
uint F_00e4bfc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe4bfc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  code * pcVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this);
  pcVar1 = *(gen_code32 *)(*(int *)this + 0x18);
  iVar3 = *(int *)((int)this + 4) + 1;
  *(int *)((int)this + 4) = iVar3;
  (*pcVar1)(this);
  this_00 = (undefined *)F_00406b90(0x28,0,0);
  if (this_00 != (undefined *)0x0) {
    uVar2 = F_00e4bdf0(this_00,this,param_1,iVar3);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_00e4c010 */
uint F_00e4c010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4c010u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e4c030 */
uint F_00e4c030(unsigned int gen_a0)
{
  GEN_ENTER(0xe4c030u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * pcVar1;
  undefined4 * in_ecx;
  uint uVar2;
  int iVar3;
  
  ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this);
  pcVar1 = *(gen_code32 *)(*(int *)this + 0x18);
  iVar3 = *(int *)((int)this + 4) + 1;
  *(int *)((int)this + 4) = iVar3;
  (*pcVar1)(this);
  in_ecx = (undefined4 *)F_00406b90(0x28,0,0);
  if (in_ecx != (undefined4 *)0x0) {
    F_01050c90(in_ecx);
    in_ecx[2] = this;
    *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x1157e20));
    in_ecx[1] = iVar3;
    in_ecx[3] = 0;
    in_ecx[4] = 0;
    in_ecx[9] = 0;
    in_ecx[7] = 0x8c8;
    uVar2 = ((code *)*(gen_code32 *)(*(int *)in_ecx[2] + 4))((int *)in_ecx[2],0x8c8);
    in_ecx[8] = 0;
    in_ecx[9] = uVar2;
    return (uint)in_ecx;
  }
  return 0;
}

/* ref: FUN_00e4c0c0 */
uint F_00e4c0c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4c0c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e4c0e0 */
uint F_00e4c0e0(unsigned int gen_a0)
{
  GEN_ENTER(0xe4c0e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00e4bd90(this);
  return (uint)this;
}

/* ref: FUN_00e4c0f0 */
uint F_00e4c0f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4c0f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e4c110 */
uint F_00e4c110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe4c110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00e4c130 */
uint F_00e4c130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe4c130u, gen_a0, gen_a1, gen_a2, gen_a3);
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
LAB_00e4c32d: ;
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
        goto LAB_00e4c32d;
      }
      *(undefined1 *)(piVar5 + 5) = 1;
      *(undefined1 *)(iVar2 + 0x14) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x14))) = 0;
      piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
    }
    cVar1 = *(char *)(piVar4[1] + 0x14);
  } while( true );
}

/* ref: FUN_00e4c360 */
uint F_00e4c360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4c360u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e4c380 */
uint F_00e4c380(unsigned int gen_a0)
{
  GEN_ENTER(0xe4c380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00e4bd90(this);
  return (uint)this;
}

/* ref: FUN_00e4c390 */
uint F_00e4c390(unsigned int gen_a0)
{
  GEN_ENTER(0xe4c390u, gen_a0, 0u, 0u, 0u);
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

/* ref: std::allocator<std::_Container_proxy>::construct_00e4c3e0 */
unsigned int F_00e4c3e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4c3e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  if (param_1 != (undefined *)0x0) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_00e4c400 */
uint F_00e4c400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4c400u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
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

/* ref: FUN_00e4c440 */
uint F_00e4c440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe4c440u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    } while (*(char *)((int)puVar1 + 0x15) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = puVar2;
  if (bVar3 != false) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      puVar2 = (undefined4 *)F_00e4c130((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar2,(*(int *)&gen_args[2]));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_00e4bd90(&(*(undefined4 * PTR32 *)&gen_args[3]));
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[3]);
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[3])[3] < *(uint *)((*(int *)&gen_args[2]) + 0xc)) {
    puVar2 = (undefined4 *)F_00e4c130((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),(*(undefined4 *)(gen_frame + 0x8)),puVar2,(*(int *)&gen_args[2]));
    *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  F_00406ad0((*(int *)&gen_args[2]));
  *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00e4c520 */
unsigned int F_00e4c520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4c520u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_00e4c540 */
uint F_00e4c540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4c540u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
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
  if ((puVar3 != *(undefined4 * PTR32 *)((int)this + 4)) && ((uint)puVar3[3] <= *param_2)) {
    *param_1 = puVar3;
    return (uint)param_1;
  }
  *param_1 = *(undefined4 * PTR32 *)((int)this + 4);
  return (uint)param_1;
}

/* ref: FUN_00e4c5b0 */
uint F_00e4c5b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe4c5b0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e4c610 */
uint F_00e4c610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4c610u, gen_a0, gen_a1, gen_a2, 0u);
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
    F_00e4c440(this,param_1,puVar1,0);
    return param_1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: NetBufferFactoryTmpl_TLobbyProtoDown_LobbyProtoChannel_Network_Application_IpcChannel::vf4 */
uint F_00e4c690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe4c690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this);
  F_00e4c540((undefined *)((int)this + 0x18),&(*(undefined4 *)(gen_frame + 0x18)),param_1 + 1);
  F_00e496a0((undefined *)((int)this + 0x18),&(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x18)));
  if (0x8c8 < (uint)param_1[7]) {
    ((code *)*(gen_code32 *)*param_1)(param_1,1);
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this);
    return uVar2;
  }
  uVar1 = param_1[1];
  puVar3 = (undefined4 *)F_004069f0(0x18);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = *(undefined4 *)((int)this + 0xc);
    puVar3[1] = *(undefined4 *)((int)this + 0xc);
    puVar3[2] = *(undefined4 *)((int)this + 0xc);
    *(undefined2 *)(puVar3 + 5) = 0;
    if (puVar3 + 3 != (undefined4 *)0x0) {
      puVar3[3] = uVar1;
      puVar3[4] = param_1;
    }
    F_00e4c440((undefined *)((int)this + 8),((undefined1 *)(gen_frame + 0xc)),puVar3,0);
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this);
    return uVar2;
  }
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x14)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x14)));
}

/* ref: FUN_00e4c760 */
uint F_00e4c760(unsigned int gen_a0)
{
  GEN_ENTER(0xe4c760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this);
  piVar1 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0xc)));
  if (piVar1 != *(int * PTR32 *)((int)this + 0xc)) {
    uVar2 = piVar1[4];
    F_00e496a0((undefined *)((int)this + 8),&(*(undefined4 *)(gen_frame + 0x18)),piVar1);
    if (uVar2 != 0) goto LAB_00e4c798;
  }
  uVar2 = F_00e4c030(this);
LAB_00e4c798: ;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x14)) = *(undefined * PTR32 * PTR32 *)(uVar2 + 4);
  puVar3 = (undefined4 *)F_004069f0(0x18);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = *(undefined4 *)((int)this + 0x1c);
    puVar3[1] = *(undefined4 *)((int)this + 0x1c);
    puVar3[2] = *(undefined4 *)((int)this + 0x1c);
    *(undefined2 *)(puVar3 + 5) = 0;
    if (puVar3 + 3 != (undefined4 *)0x0) {
      puVar3[3] = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x14));
      puVar3[4] = uVar2;
    }
    F_00e4c440((undefined *)((int)this + 0x18),((undefined1 *)(gen_frame + 0xc)),puVar3,0);
    ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this);
    return uVar2;
  }
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x14)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x14)));
}

/* ref: NetBufferFactoryTmpl_TLobbyProtoDown_LobbyProtoChannel_Network_Application_IpcChannel::vf3 */
uint F_00e4c810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4c810u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  code * pcVar1;
  undefined * this_00;
  uint uVar2;
  undefined4 * puVar3;
  int iVar4;
  
  if ((uint)(param_1 + param_2) < 0x8c9) {
    uVar2 = F_00e4c760(this);
    return uVar2;
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this);
  pcVar1 = *(gen_code32 *)(*(int *)this + 0x18);
  iVar4 = *(int *)((int)this + 4) + 1;
  *(int *)((int)this + 4) = iVar4;
  (*pcVar1)(this);
  this_00 = (undefined *)F_00406b90(0x28,0,0);
  if (this_00 == (undefined *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = F_00e4bdf0(this_00,this,param_1 + param_2,iVar4);
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x14)) = *(undefined * PTR32 * PTR32 *)(uVar2 + 4);
  puVar3 = (undefined4 *)F_004069f0(0x18);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = *(undefined4 *)((int)this + 0x1c);
    puVar3[1] = *(undefined4 *)((int)this + 0x1c);
    puVar3[2] = *(undefined4 *)((int)this + 0x1c);
    *(undefined2 *)(puVar3 + 5) = 0;
    if (puVar3 + 3 != (undefined4 *)0x0) {
      puVar3[3] = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x14));
      puVar3[4] = uVar2;
    }
    F_00e4c440((undefined *)((int)this + 0x18),((undefined1 *)(gen_frame + 0xc)),puVar3,0);
    ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this);
    return uVar2;
  }
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x14)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x14)));
}

/* ref: NetBufferQueueTmpl_LF_TLobbyProtoUp_LobbyProtoChannel_Network_Application_IpcChannel::vf0 */
uint F_00e4c8f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe4c8f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00e4aca0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00e4c920 */
uint F_00e4c920(unsigned int gen_a0)
{
  GEN_ENTER(0xe4c920u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  uint uVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0xc);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x1157dd0));
  puVar3 = (undefined4 *)*puVar2;
  while (puVar3 != puVar2) {
    puVar4 = (undefined4 *)puVar3[4];
    if (puVar4 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar4)(puVar4,1);
    }
    if (*(char *)((int)puVar3 + 0x15) == '\0') {
      puVar4 = (undefined4 *)puVar3[2];
      if (*(char *)((int)puVar4 + 0x15) == '\0') {
        cVar1 = *(char *)((int)*puVar4 + 0x15);
        puVar3 = puVar4;
        puVar4 = (undefined4 *)*puVar4;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar4 + 0x15);
          puVar3 = puVar4;
          puVar4 = (undefined4 *)*puVar4;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar3[1] + 0x15);
        puVar5 = (undefined4 *)puVar3[1];
        puVar4 = puVar3;
        while ((puVar3 = puVar5, cVar1 == '\0' && (puVar4 == (undefined4 *)puVar3[2]))) {
          cVar1 = *(char *)((int)puVar3[1] + 0x15);
          puVar5 = (undefined4 *)puVar3[1];
          puVar4 = puVar3;
        }
      }
    }
  }
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x1c);
  puVar3 = (undefined4 *)*puVar2;
  while (puVar3 != puVar2) {
    puVar4 = (undefined4 *)puVar3[4];
    if (puVar4 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar4)(puVar4,1);
    }
    if (*(char *)((int)puVar3 + 0x15) == '\0') {
      puVar4 = (undefined4 *)puVar3[2];
      if (*(char *)((int)puVar4 + 0x15) == '\0') {
        cVar1 = *(char *)((int)*puVar4 + 0x15);
        puVar3 = puVar4;
        puVar4 = (undefined4 *)*puVar4;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar4 + 0x15);
          puVar3 = puVar4;
          puVar4 = (undefined4 *)*puVar4;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar3[1] + 0x15);
        puVar5 = (undefined4 *)puVar3[1];
        puVar4 = puVar3;
        while ((puVar3 = puVar5, cVar1 == '\0' && (puVar4 == (undefined4 *)puVar3[2]))) {
          cVar1 = *(char *)((int)puVar3[1] + 0x15);
          puVar5 = (undefined4 *)puVar3[1];
          puVar4 = puVar3;
        }
      }
    }
  }
  F_00e4a550((undefined *)((int)this + 0x18),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x1c),
               *(undefined4 * PTR32 *)((int)this + 0x1c));
  F_00406ad0(*(undefined4 *)((int)this + 0x1c));
  F_00e4a550((undefined *)((int)this + 8),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0xc),
               *(undefined4 * PTR32 *)((int)this + 0xc));
  uVar6 = F_00406ad0(*(undefined4 *)((int)this + 0xc));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[5])REFP(0x1157d20));
  return uVar6;
}

/* ref: NetBufferFactoryTmpl_LF_TLobbyProtoUp_LobbyProtoChannel_Network_Application_IpcChannel::vf5 */
unsigned int F_00e4ca70(void)
{
  GEN_ENTER(0xe4ca70u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: NetBufferFactoryTmpl_LF_TLobbyProtoUp_LobbyProtoChannel_Network_Application_IpcChannel::vf6 */
unsigned int F_00e4ca80(void)
{
  GEN_ENTER(0xe4ca80u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00e4ca90 */
uint F_00e4ca90(unsigned int gen_a0)
{
  GEN_ENTER(0xe4ca90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  uint uVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0xc);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x1157e00));
  puVar3 = (undefined4 *)*puVar2;
  while (puVar3 != puVar2) {
    puVar4 = (undefined4 *)puVar3[4];
    if (puVar4 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar4)(puVar4,1);
    }
    if (*(char *)((int)puVar3 + 0x15) == '\0') {
      puVar4 = (undefined4 *)puVar3[2];
      if (*(char *)((int)puVar4 + 0x15) == '\0') {
        cVar1 = *(char *)((int)*puVar4 + 0x15);
        puVar3 = puVar4;
        puVar4 = (undefined4 *)*puVar4;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar4 + 0x15);
          puVar3 = puVar4;
          puVar4 = (undefined4 *)*puVar4;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar3[1] + 0x15);
        puVar5 = (undefined4 *)puVar3[1];
        puVar4 = puVar3;
        while ((puVar3 = puVar5, cVar1 == '\0' && (puVar4 == (undefined4 *)puVar3[2]))) {
          cVar1 = *(char *)((int)puVar3[1] + 0x15);
          puVar5 = (undefined4 *)puVar3[1];
          puVar4 = puVar3;
        }
      }
    }
  }
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x1c);
  puVar3 = (undefined4 *)*puVar2;
  while (puVar3 != puVar2) {
    puVar4 = (undefined4 *)puVar3[4];
    if (puVar4 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar4)(puVar4,1);
    }
    if (*(char *)((int)puVar3 + 0x15) == '\0') {
      puVar4 = (undefined4 *)puVar3[2];
      if (*(char *)((int)puVar4 + 0x15) == '\0') {
        cVar1 = *(char *)((int)*puVar4 + 0x15);
        puVar3 = puVar4;
        puVar4 = (undefined4 *)*puVar4;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar4 + 0x15);
          puVar3 = puVar4;
          puVar4 = (undefined4 *)*puVar4;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar3[1] + 0x15);
        puVar5 = (undefined4 *)puVar3[1];
        puVar4 = puVar3;
        while ((puVar3 = puVar5, cVar1 == '\0' && (puVar4 == (undefined4 *)puVar3[2]))) {
          cVar1 = *(char *)((int)puVar3[1] + 0x15);
          puVar5 = (undefined4 *)puVar3[1];
          puVar4 = puVar3;
        }
      }
    }
  }
  F_00e4a5f0((undefined *)((int)this + 0x18),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x1c),
               *(undefined4 * PTR32 *)((int)this + 0x1c));
  F_00406ad0(*(undefined4 *)((int)this + 0x1c));
  F_00e4a5f0((undefined *)((int)this + 8),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0xc),
               *(undefined4 * PTR32 *)((int)this + 0xc));
  uVar6 = F_00406ad0(*(undefined4 *)((int)this + 0xc));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[5])REFP(0x1157d38));
  return uVar6;
}

/* ref: NetBufferFactoryTmpl_LF_TLobbyProtoDown_LobbyProtoChannel_Network_Application_IpcChannel::vf5 */
unsigned int F_00e4cbe0(void)
{
  GEN_ENTER(0xe4cbe0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: NetBufferFactoryTmpl_LF_TLobbyProtoDown_LobbyProtoChannel_Network_Application_IpcChannel::vf6 */
unsigned int F_00e4cbf0(void)
{
  GEN_ENTER(0xe4cbf0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00e4cc00 */
uint F_00e4cc00(unsigned int gen_a0)
{
  GEN_ENTER(0xe4cc00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00e4a850(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00406ad0(*(undefined4 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00e4cc30 */
uint F_00e4cc30(unsigned int gen_a0)
{
  GEN_ENTER(0xe4cc30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00e4a8f0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00406ad0(*(undefined4 *)((int)this + 4));
  return uVar1;
}

/* ref: NetBufferFactoryTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application_IpcChannel::vf0 */
uint F_00e4cc60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe4cc60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00e4c920(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: NetBufferFactoryTmpl_LF_TLobbyProtoUp_LobbyProtoChannel_Network_Application_IpcChannel::vf0 */
uint F_00e4cc90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe4cc90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x1157e30));
  F_00e4c920(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: NetBufferFactoryTmpl_TLobbyProtoDown_LobbyProtoChannel_Network_Application_IpcChannel::vf0 */
uint F_00e4ccc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe4ccc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00e4ca90(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: NetBufferFactoryTmpl_LF_TLobbyProtoDown_LobbyProtoChannel_Network_Application_IpcChannel::vf0 */
uint F_00e4ccf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe4ccf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x1157e50));
  F_00e4ca90(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00e4cd20 */
uint F_00e4cd20(unsigned int gen_a0)
{
  GEN_ENTER(0xe4cd20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  int iVar2;
  int * piVar3;
  undefined4 * puVar4;
  int * piVar5;
  uint uVar6;
  int * piVar7;
  
  iVar2 = *(int *)((int)this + 0x1c);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x1157e70));
  piVar7 = ((int *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x18)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = this;
  puVar4 = (*(undefined4 * PTR32 *)(gen_frame + 0x18));
  while (((*(undefined4 * PTR32 *)(gen_frame + 0x18)) = puVar4, iVar2 != 0 && (piVar7 != (int *)puVar4[6]))) {
    if (piVar7[3] != puVar4[2]) {
      piVar3 = *(int * PTR32 *)(piVar7[4] + 0x20);
      (*(int *)(gen_frame + 0x10)) = puVar4[2];
      ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
      F_00c330c0(piVar3 + 5,&(*(int *)(gen_frame + 0x14)),&(*(int *)(gen_frame + 0x10)));
      if ((*(int *)(gen_frame + 0x14)) != piVar3[6]) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(piVar3[4] + 0x4c) + 0x18))))
                  (*(int * PTR32 *)(piVar3[4] + 0x4c),*(undefined4 *)((*(int *)(gen_frame + 0x14)) + 0x10));
        F_00e49c00(piVar3 + 5,((undefined1 *)(gen_frame + 0xc)),(*(int *)(gen_frame + 0x14)));
      }
      ((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3);
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(undefined4 * PTR32 *)(gen_frame + 0x18))[4] + 0x4c) + 0x18))))(*(int * PTR32 *)((*(undefined4 * PTR32 *)(gen_frame + 0x18))[4] + 0x4c),piVar7[4]);
    if (*(char *)((int)piVar7 + 0x15) == '\0') {
      piVar3 = (int *)piVar7[2];
      if (*(char *)((int)piVar3 + 0x15) == '\0') {
        cVar1 = *(char *)(*piVar3 + 0x15);
        piVar7 = piVar3;
        piVar3 = (int *)*piVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x15);
          piVar7 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar7[1] + 0x15);
        piVar5 = (int *)piVar7[1];
        piVar3 = piVar7;
        while ((piVar7 = piVar5, cVar1 == '\0' && (piVar3 == (int *)piVar7[2]))) {
          cVar1 = *(char *)(piVar7[1] + 0x15);
          piVar5 = (int *)piVar7[1];
          piVar3 = piVar7;
        }
      }
    }
    iVar2 = (*(undefined4 * PTR32 *)(gen_frame + 0x18))[7];
    puVar4 = (*(undefined4 * PTR32 *)(gen_frame + 0x18));
  }
  cVar1 = *((char *)GEN_TOP(((int)*(int * PTR32 *)(puVar4[6] + 4) + 0x15)));
  piVar7 = *(int * PTR32 *)(puVar4[6] + 4);
  while (cVar1 == '\0') {
    F_00e49f30(puVar4 + 5,piVar7[2]);
    piVar3 = (int *)*piVar7;
    F_00406ad0(piVar7);
    piVar7 = piVar3;
    cVar1 = *(char *)((int)piVar3 + 0x15);
  }
  *(undefined4 *)(puVar4[6] + 4) = puVar4[6];
  *(undefined4 *)puVar4[6] = puVar4[6];
  *(undefined4 *)(puVar4[6] + 8) = puVar4[6];
  puVar4[7] = 0;
  F_00e4a8f0(puVar4 + 5,((undefined1 *)(gen_frame + 0xc)),*(undefined4 *)puVar4[6],(undefined4 *)puVar4[6]);
  uVar6 = F_00406ad0(puVar4[6]);
  *(*(undefined4 * PTR32 *)(gen_frame + 0x18)) = (*(undefined * PTR32 (*)[1])REFP(0x1157d80));
  F_01050b80((*(undefined4 * PTR32 *)(gen_frame + 0x18)));
  return uVar6;
}

/* ref: FUN_00e4ce90 */
uint F_00e4ce90(unsigned int gen_a0)
{
  GEN_ENTER(0xe4ce90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x24);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[6])REFP(0x1157e80));
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
  }
  *(undefined4 *)((int)this + 0x24) = 0;
  uVar2 = F_00e4cd20(this);
  return uVar2;
}

/* ref: PrimaryEntityCoreTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf3 */
unsigned int F_00e4cec0(void)
{
  GEN_ENTER(0xe4cec0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: PrimaryEntityCoreTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf4 */
unsigned int F_00e4ced0(void)
{
  GEN_ENTER(0xe4ced0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: PrimaryEntityCoreTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf5 */
unsigned int F_00e4cee0(void)
{
  GEN_ENTER(0xe4cee0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: EntityContainerTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf0 */
uint F_00e4cef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe4cef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00e4cd20(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PrimaryEntityCoreTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf0 */
uint F_00e4cf20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe4cf20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x24);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[6])REFP(0x1157e80));
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
  }
  *(undefined4 *)((int)this + 0x24) = 0;
  F_00e4cd20(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00e4cf60 */
uint F_00e4cf60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe4cf60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  undefined4 * puVar2;
  
  F_01050ce0(this);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[25])REFP(0x1157e9c));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *(uint *)((int)this + 0x20) = uVar1;
    *(uint *)uVar1 = uVar1;
    *((int *)GEN_TOP((*(int *)((int)this + 0x20) + 4))) = *(int *)((int)this + 0x20);
    *((int *)GEN_TOP((*(int *)((int)this + 0x20) + 8))) = *(int *)((int)this + 0x20);
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x20) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x20) + 0x15))) = 1;
    *(undefined4 *)((int)this + 0x34) = 0;
    uVar1 = F_004069f0(0x18);
    if (uVar1 != 0) {
      *(uint *)((int)this + 0x30) = uVar1;
      *(uint *)uVar1 = uVar1;
      *((int *)GEN_TOP((*(int *)((int)this + 0x30) + 4))) = *(int *)((int)this + 0x30);
      *((int *)GEN_TOP((*(int *)((int)this + 0x30) + 8))) = *(int *)((int)this + 0x30);
      *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x30) + 0x14))) = 1;
      *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x30) + 0x15))) = 1;
      *(undefined4 *)((int)this + 0x3c) = 0;
      *(undefined1 *)((int)this + 0x40) = (undefined1)param_3;
      puVar2 = param_1;
      if (param_1 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)F_004069f0(4);
        if (puVar2 == (undefined4 *)0x0) {
          puVar2 = (undefined4 *)0x0;
        }
        else {
          *puVar2 = (*(undefined * PTR32 (*)[3])REFP(0x1157d90));
        }
      }
      *(undefined4 * PTR32 *)((int)this + 0x44) = puVar2;
      *(bool *)((int)this + 0x48) = param_1 == (undefined4 *)0x0;
      puVar2 = param_2;
      if (param_2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)F_004069f0(4);
        if (puVar2 == (undefined4 *)0x0) {
          puVar2 = (undefined4 *)0x0;
        }
        else {
          *puVar2 = (*(undefined * PTR32 (*)[7])REFP(0x1157d60));
        }
      }
      *(undefined4 * PTR32 *)((int)this + 0x4c) = puVar2;
      *(bool *)((int)this + 0x50) = param_2 == (undefined4 *)0x0;
      *(undefined4 *)((int)this + 0x58) = 0;
      uVar1 = F_004069f0(0xc);
      if (uVar1 != 0) {
        *(uint *)((int)this + 0x54) = uVar1;
        *(uint *)uVar1 = uVar1;
        *((int *)GEN_TOP((*(int *)((int)this + 0x54) + 4))) = *(int *)((int)this + 0x54);
        *(undefined4 *)((int)this + 0x60) = 0;
        uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x44) + 4))))(*(int * PTR32 *)((int)this + 0x44),this,0);
        *(uint *)((int)this + 0x3c) = uVar1;
        return (uint)this;
      }
    }
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: ChannelManagerCoreTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf5 */
unsigned int F_00e4d0a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe4d0a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: ChannelManagerCoreTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf6 */
unsigned int F_00e4d0b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe4d0b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: ChannelManagerCoreTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf19 */
unsigned int F_00e4d0c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe4d0c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: ChannelManagerCoreTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf20 */
unsigned int F_00e4d0d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe4d0d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: ChannelManagerCoreTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf21 */
unsigned int F_00e4d0e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe4d0e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: ChannelManagerCoreTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf24 */
unsigned int F_00e4d0f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4d0f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_00e4d120 */
float10 F_00e4d120(unsigned int gen_a0)
{
  GEN_ENTER(0xe4d120u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  
  iVar1 = *(int *)(in_ecx + 0xc);
  if (iVar1 == 0) {
    return (float10)1;
  }
  fVar2 = (float10)*(int *)(in_ecx + 0x10);
  if (*(int *)(in_ecx + 0x10) < 0) {
    fVar2 = fVar2 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar3 = (float10)iVar1;
  if (iVar1 < 0) {
    fVar3 = fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  return (float10)(float)(fVar2 / fVar3);
}

/* ref: FUN_00e4d190 */
uint F_00e4d190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4d190u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x4c) + 8))))
                    (*(int * PTR32 *)((int)this + 0x4c),this,param_1,param_2);
  return uVar1;
}

/* ref: ChannelManagerCoreTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf22 */
byte F_00e4d1b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe4d1b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  
  if ((param_1 != 0) && (piVar1 = *(int * PTR32 *)(param_1 + 0x2c), piVar1 != (int *)0x0)) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,param_1);
  }
  return 1;
}

/* ref: ChannelManagerCoreTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf23 */
byte F_00e4d1d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe4d1d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  
  if ((param_1 != 0) && (piVar1 = *(int * PTR32 *)(param_1 + 0x30), piVar1 != (int *)0x0)) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,param_1);
  }
  return 1;
}

/* ref: FUN_00e4d1f0 */
uint F_00e4d1f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4d1f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00e36c00(this);
  return (uint)param_1;
}

/* ref: FUN_00e4d210 */
uint F_00e4d210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe4d210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int iVar2;
  undefined * this_00;
  uint uVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 == 0) {
    iVar4 = 0;
    iVar2 = 0;
  }
  else {
    iVar4 = *(int *)(iVar2 + 0x14);
    iVar2 = *(int *)(iVar2 + 0x18);
  }
  if ((iVar4 == 0) || (iVar2 == 0)) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x4c) + 8))))
                      (*(int * PTR32 *)((int)this + 0x4c),this,*(undefined4 *)((int)this + 0x3c),
                       *(undefined4 *)((int)this + 0x3c));
    ((code *)*(gen_code32 *)(*(int *)this + 0x60))(this,uVar3,param_1);
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x4c) + 0x18))))(*(int * PTR32 *)((int)this + 0x4c),uVar3);
  }
  else {
    this_00 = (undefined *)F_00c33310(this,iVar2);
    uVar3 = 0;
    if (this_00 != (undefined *)0x0) {
      uVar3 = F_00c33360(this_00,iVar4);
      piVar1 = *(int * PTR32 *)((int)this_00 + 0x28);
      if (piVar1 != (int *)0x0) {
        uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,uVar3,param_1);
        return uVar3;
      }
    }
  }
  return uVar3;
}

/* ref: FUN_00e4d2a0 */
uint F_00e4d2a0(unsigned int gen_a0)
{
  GEN_ENTER(0xe4d2a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00e4b010(this);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x1157e30));
  return (uint)this;
}

/* ref: FUN_00e4d2c0 */
uint F_00e4d2c0(unsigned int gen_a0)
{
  GEN_ENTER(0xe4d2c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00e4bc80(this);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x1157e50));
  return (uint)this;
}

/* ref: FUN_00e4d2e0 */
uint F_00e4d2e0(unsigned int gen_a0)
{
  GEN_ENTER(0xe4d2e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  iVar1 = *((int *)GEN_TOP(((int)*(undefined * PTR32 *)(param_1 + 4) + 0x24)));
  if ((iVar1 == 0) || (bVar3 = *(int *)(iVar1 + 8) == 0, uVar2 = (uint)bVar3, !bVar3)) {
    uVar2 = F_00c33730(*(undefined * PTR32 *)(param_1 + 4),0);
  }
  return uVar2;
}

/* ref: FUN_00e4d310 */
uint F_00e4d310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4d310u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  F_01050b90(this,param_2);
  *(undefined4 *)((int)this + 0x10) = param_1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x1157e70));
  *(undefined4 *)((int)this + 0x1c) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *(uint *)((int)this + 0x18) = uVar1;
    *(uint *)uVar1 = uVar1;
    *((int *)GEN_TOP((*(int *)((int)this + 0x18) + 4))) = *(int *)((int)this + 0x18);
    *((int *)GEN_TOP((*(int *)((int)this + 0x18) + 8))) = *(int *)((int)this + 0x18);
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00e4d390 */
uint F_00e4d390(unsigned int gen_a0)
{
  GEN_ENTER(0xe4d390u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[25])REFP(0x1157e9c));
  F_00e4abc0(this);
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x44) + 8))))
            (*(int * PTR32 *)((int)this + 0x44),*(undefined4 *)((int)this + 0x3c));
  *(undefined4 *)((int)this + 0x3c) = 0;
  if ((*(char *)((int)this + 0x48) != '\0') &&
     (puVar1 = *(undefined4 * PTR32 *)((int)this + 0x44), puVar1 != (undefined4 *)0x0)) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
  }
  *(undefined4 *)((int)this + 0x44) = 0;
  if ((*(char *)((int)this + 0x50) != '\0') &&
     (puVar1 = *(undefined4 * PTR32 *)((int)this + 0x4c), puVar1 != (undefined4 *)0x0)) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
  }
  *(undefined4 *)((int)this + 0x4c) = 0;
  piVar2 = *(int * PTR32 *)((int)this + 0x54);
  piVar3 = (int *)*piVar2;
  *piVar2 = (int)piVar2;
  *((int *)GEN_TOP((*(int *)((int)this + 0x54) + 4))) = *(int *)((int)this + 0x54);
  *(undefined4 *)((int)this + 0x58) = 0;
  if (piVar3 != *(int * PTR32 *)((int)this + 0x54)) {
    do {
      piVar2 = (int *)*piVar3;
      F_00406ad0(piVar3);
      piVar3 = piVar2;
    } while (piVar2 != (int *)*(int *)((int)this + 0x54));
  }
  F_00406ad0(*(undefined4 *)((int)this + 0x54));
  F_00e4a8f0((undefined *)((int)this + 0x2c),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x30),
               *(undefined4 * PTR32 *)((int)this + 0x30));
  F_00406ad0(*(undefined4 *)((int)this + 0x30));
  F_00e4a850((undefined *)((int)this + 0x1c),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x20),
               *(undefined4 * PTR32 *)((int)this + 0x20));
  F_00406ad0(*(undefined4 *)((int)this + 0x20));
  uVar4 = 0;
  if (*(int *)((int)this + 0xc) != 0) {
    uVar4 = F_00406ad0(*(int *)((int)this + 0xc));
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  F_01050cd0(this);
  return uVar4;
}

/* ref: FUN_00e4d490 */
uint F_00e4d490(unsigned int gen_a0)
{
  GEN_ENTER(0xe4d490u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[25])REFP(0x1157f04));
  F_00e4abc0(this);
  *(undefined4 *)((int)this + 0x8c) =
       (*(undefined * PTR32 (*)[7])REFP(0x1157e50));
  F_00e4ca90((undefined4 *)((int)this + 0x8c));
  *(undefined4 *)((int)this + 100) =
       (*(undefined * PTR32 (*)[7])REFP(0x1157e30));
  F_00e4c920((undefined4 *)((int)this + 100));
  uVar1 = F_00e4d390(this);
  return uVar1;
}

/* ref: ChannelManagerTmpl_LF_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf13 */
uint F_00e4d4f0(unsigned int gen_a0)
{
  GEN_ENTER(0xe4d4f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0xb4);
  if (uVar1 == 0) {
    uVar1 = in_ecx + 100;
  }
  return uVar1;
}

/* ref: ChannelManagerTmpl_LF_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf14 */
uint F_00e4d500(unsigned int gen_a0)
{
  GEN_ENTER(0xe4d500u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0xb4);
  if (uVar1 == 0) {
    uVar1 = in_ecx + 100;
  }
  return uVar1;
}

/* ref: ChannelManagerTmpl_LF_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf15 */
uint F_00e4d510(unsigned int gen_a0)
{
  GEN_ENTER(0xe4d510u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0xb8);
  if (uVar1 == 0) {
    uVar1 = in_ecx + 0x8c;
  }
  return uVar1;
}

/* ref: ChannelManagerTmpl_LF_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf16 */
uint F_00e4d530(unsigned int gen_a0)
{
  GEN_ENTER(0xe4d530u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0xb8);
  if (uVar1 == 0) {
    uVar1 = in_ecx + 0x8c;
  }
  return uVar1;
}

/* ref: ChannelManagerTmpl_LF_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf17 */
unsigned int F_00e4d550(void)
{
  GEN_ENTER(0xe4d550u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: ChannelManagerTmpl_LF_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf18 */
unsigned int F_00e4d560(void)
{
  GEN_ENTER(0xe4d560u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00e4d570 */
uint F_00e4d570(unsigned int gen_a0)
{
  GEN_ENTER(0xe4d570u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[25])REFP(0x1157f04));
  F_00e4abc0(this);
  *(undefined4 *)((int)this + 0x8c) =
       (*(undefined * PTR32 (*)[7])REFP(0x1157e50));
  F_00e4ca90((undefined4 *)((int)this + 0x8c));
  *(undefined4 *)((int)this + 100) =
       (*(undefined * PTR32 (*)[7])REFP(0x1157e30));
  F_00e4c920((undefined4 *)((int)this + 100));
  uVar1 = F_00e4d390(this);
  return uVar1;
}

/* ref: ChannelManagerCoreTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf0 */
uint F_00e4d5b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe4d5b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00e4d390(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: ChannelManagerTmpl_LF_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf0 */
uint F_00e4d5e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe4d5e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[25])REFP(0x1157f04));
  F_00e4abc0(this);
  *(undefined4 *)((int)this + 0x8c) =
       (*(undefined * PTR32 (*)[7])REFP(0x1157e50));
  F_00e4ca90((undefined4 *)((int)this + 0x8c));
  *(undefined4 *)((int)this + 100) =
       (*(undefined * PTR32 (*)[7])REFP(0x1157e30));
  F_00e4c920((undefined4 *)((int)this + 100));
  F_00e4d390(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00e4d630 */
byte F_00e4d630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4)
{
  GEN_ENTER(0xe4d630u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  float param_5 = (float)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  undefined1 SVar2;
  int * piVar3;
  undefined4 * puVar4;
  int iVar5;
  int iVar6;
  undefined4 * puVar7;
  float fVar8;
  int * piVar9;
  undefined4 * puVar10;
  byte bVar11;
  uint uVar12;
  undefined * pSVar13;
  undefined * pSVar14;
  int * piVar15;
  undefined * pSVar16;
  float10 fVar17;
  float10 fVar18;
  float fVar19;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = param_1;
  (*(LPCRITICAL_SECTION *)(gen_frame + 0x4)) = (LPCRITICAL_SECTION)(param_1 + 0x68);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  piVar15 = ((int *)GEN_TOP(**(int * PTR32 *)(param_1 + 0x10)));
  if (piVar15 != *(int * PTR32 *)(param_1 + 0x10)) {
    do {
      uVar12 = ((code *)*(gen_code32 *)(*(int *)piVar15[4] + 0xc))((int *)piVar15[4]);
      if ((char)uVar12 != '\0') {
        puVar4 = (undefined4 *)piVar15[4];
        iVar5 = piVar15[3];
        F_00e38a40((*(undefined * PTR32 *)(gen_frame + 0x8)) + 0xc,((undefined1 *)(gen_frame + 0x0)),piVar15);
        pSVar16 = (*(undefined * PTR32 *)(gen_frame + 0x8));
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0x8)) + 8) + 0x14))))(*(int * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0x8)) + 8),iVar5);
        if (*(int *)(pSVar16 + 0x80) != 0) {
          piVar15 = *(int * PTR32 *)(pSVar16 + 0x80);
          ((code *)*(gen_code32 *)(*piVar15 + 0x20))(piVar15,iVar5);
        }
        param_1 = (*(undefined * PTR32 *)(gen_frame + 0x8));
        if (puVar4 != (undefined4 *)0x0) {
          ((code *)*(gen_code32 *)*puVar4)(puVar4,1);
          param_1 = (*(undefined * PTR32 *)(gen_frame + 0x8));
        }
        break;
      }
      if (*(char *)((int)piVar15 + 0x15) == '\0') {
        piVar3 = (int *)piVar15[2];
        if (*(char *)((int)piVar3 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x15);
          piVar15 = piVar3;
          piVar3 = (int *)*piVar3;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar3 + 0x15);
            piVar15 = piVar3;
            piVar3 = (int *)*piVar3;
          }
        }
        else {
          cVar1 = *(char *)(piVar15[1] + 0x15);
          piVar9 = (int *)piVar15[1];
          piVar3 = piVar15;
          while ((piVar15 = piVar9, cVar1 == '\0' && (piVar3 == (int *)piVar15[2]))) {
            cVar1 = *(char *)(piVar15[1] + 0x15);
            piVar9 = (int *)piVar15[1];
            piVar3 = piVar15;
          }
        }
      }
    } while (piVar15 != *(int * PTR32 *)(param_1 + 0x10));
  }
  if ((param_3 == 0) || (param_3 == 0xe0000000)) {
    pSVar16 = ((undefined *)GEN_TOP(**(undefined4 * PTR32 *)(param_1 + 0x10)));
  }
  else {
    pSVar14 = *((undefined * PTR32 *)GEN_TOP((*(undefined * PTR32 *)(param_1 + 0x10) + 4)));
    SVar2 = pSVar14[0x15];
    pSVar16 = *(undefined * PTR32 *)(param_1 + 0x10);
    while (SVar2 == (undefined1)0x0) {
      if (*(uint *)(pSVar14 + 0xc) < param_3) {
        pSVar13 = *(undefined * PTR32 *)(pSVar14 + 8);
        pSVar14 = pSVar16;
      }
      else {
        pSVar13 = *(undefined * PTR32 *)pSVar14;
      }
      pSVar16 = pSVar14;
      pSVar14 = pSVar13;
      SVar2 = pSVar13[0x15];
    }
    pSVar14 = *(undefined * PTR32 *)(param_1 + 0x10);
    if ((pSVar16 == pSVar14) || (param_3 < *(uint *)(pSVar16 + 0xc))) {
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = pSVar14;
      pSVar16 = pSVar14;
    }
  }
  if (pSVar16 != *(undefined * PTR32 *)(param_1 + 0x10)) {
    do {
      fVar8 = REFG(float, 0x1087f04);
      *param_4 = 0xe0000000;
      puVar4 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)(param_1 + 0x10)));
      while (puVar4 != *(undefined4 * PTR32 *)(param_1 + 0x10)) {
        iVar5 = puVar4[4];
        if (*(int *)(iVar5 + 0x30) != 0) {
          iVar6 = *(int *)(iVar5 + 0x30);
          fVar19 = fVar8;
          if (iVar6 != 0) {
            fVar17 = (float10)*(int *)(iVar5 + 0x34);
            if (*(int *)(iVar5 + 0x34) < 0) {
              fVar17 = fVar17 + (float10)*(float *)&REFG(undefined, 0x1088110);
            }
            fVar18 = (float10)iVar6;
            if (iVar6 < 0) {
              fVar18 = fVar18 + (float10)*(float *)&REFG(undefined, 0x1088110);
            }
            fVar19 = (float)(fVar17 / fVar18);
          }
          if ((!GEN_ISNAN(param_5) && !GEN_ISNAN(fVar19)) && !(param_5 <= fVar19)) {
            *param_4 = puVar4[3];
            break;
          }
        }
        if (*(char *)((int)puVar4 + 0x15) == '\0') {
          puVar7 = (undefined4 *)puVar4[2];
          if (*(char *)((int)puVar7 + 0x15) == '\0') {
            cVar1 = *(char *)((int)*puVar7 + 0x15);
            puVar4 = puVar7;
            puVar7 = (undefined4 *)*puVar7;
            while (cVar1 == '\0') {
              cVar1 = *(char *)((int)*puVar7 + 0x15);
              puVar4 = puVar7;
              puVar7 = (undefined4 *)*puVar7;
            }
          }
          else {
            cVar1 = *(char *)((int)puVar4[1] + 0x15);
            puVar10 = (undefined4 *)puVar4[1];
            puVar7 = puVar4;
            while ((puVar4 = puVar10, cVar1 == '\0' && (puVar7 == (undefined4 *)puVar4[2]))) {
              cVar1 = *(char *)((int)puVar4[1] + 0x15);
              puVar10 = (undefined4 *)puVar4[1];
              puVar7 = puVar4;
            }
          }
        }
      }
      bVar11 = F_00e393a0(param_1,param_2,*(undefined4 *)(pSVar16 + 0xc),
                               *(undefined4 *)(pSVar16 + 0x10));
      if (bVar11 != 0) {
        iVar5 = *(int *)(param_2 + 0xc);
        gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x4)));
        return iVar5 != 0;
      }
      if (pSVar16[0x15] == (undefined1)0x0) {
        pSVar14 = *(undefined * PTR32 *)(pSVar16 + 8);
        if (pSVar14[0x15] == (undefined1)0x0) {
          SVar2 = (*(undefined * PTR32 *)pSVar14)[0x15];
          pSVar16 = pSVar14;
          pSVar14 = *(undefined * PTR32 *)pSVar14;
          while (SVar2 == (undefined1)0x0) {
            SVar2 = (*(undefined * PTR32 *)pSVar14)[0x15];
            pSVar16 = pSVar14;
            pSVar14 = *(undefined * PTR32 *)pSVar14;
          }
        }
        else {
          SVar2 = (*(undefined * PTR32 *)(pSVar16 + 4))[0x15];
          pSVar13 = *(undefined * PTR32 *)(pSVar16 + 4);
          pSVar14 = pSVar16;
          while ((pSVar16 = pSVar13, SVar2 == (undefined1)0x0 &&
                 (pSVar14 == *(undefined * PTR32 *)(pSVar16 + 8)))) {
            SVar2 = (*(undefined * PTR32 *)(pSVar16 + 4))[0x15];
            pSVar13 = *(undefined * PTR32 *)(pSVar16 + 4);
            pSVar14 = pSVar16;
          }
        }
      }
    } while (pSVar16 != *(undefined * PTR32 *)(param_1 + 0x10));
  }
  gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x4)));
  return 0;
}

/* ref: FUN_00e4d8c0 */
byte F_00e4d8c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe4d8c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined * pSVar5;
  int * piVar6;
  byte bVar7;
  uint uVar8;
  int * piVar9;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  (*(LPCRITICAL_SECTION *)(gen_frame + 0x4)) = (LPCRITICAL_SECTION)((int)this + 0x68);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x68));
  piVar9 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x10)));
  if (piVar9 != *(int * PTR32 *)((int)this + 0x10)) {
    do {
      uVar8 = ((code *)*(gen_code32 *)(*(int *)piVar9[4] + 0xc))((int *)piVar9[4]);
      pSVar5 = (*(undefined * PTR32 *)(gen_frame + 0x8));
      if ((char)uVar8 != '\0') {
        puVar3 = (undefined4 *)piVar9[4];
        iVar4 = piVar9[3];
        F_00e38a40((*(undefined * PTR32 *)(gen_frame + 0x8)) + 0xc,((undefined1 *)(gen_frame + 0x0)),piVar9);
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(pSVar5 + 8) + 0x14))))(*(int * PTR32 *)(pSVar5 + 8),iVar4);
        if (*(int *)(pSVar5 + 0x80) != 0) {
          ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(pSVar5 + 0x80) + 0x20))))(*(int * PTR32 *)(pSVar5 + 0x80),iVar4);
        }
        this = pSVar5;
        if (puVar3 != (undefined4 *)0x0) {
          ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
        }
        break;
      }
      if (*(char *)((int)piVar9 + 0x15) == '\0') {
        piVar2 = (int *)piVar9[2];
        if (*(char *)((int)piVar2 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          piVar9 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x15);
            piVar9 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar9[1] + 0x15);
          piVar6 = (int *)piVar9[1];
          piVar2 = piVar9;
          while ((piVar9 = piVar6, cVar1 == '\0' && (piVar2 == (int *)piVar9[2]))) {
            cVar1 = *(char *)(piVar9[1] + 0x15);
            piVar6 = (int *)piVar9[1];
            piVar2 = piVar9;
          }
        }
      }
    } while (piVar9 != *(int * PTR32 *)((int)this + 0x10));
  }
  piVar9 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x10)));
  if (piVar9 != *(int * PTR32 *)((int)this + 0x10)) {
    do {
      bVar7 = F_00e393a0(this,param_1,piVar9[3],piVar9[4]);
      if (bVar7 != 0) {
        iVar4 = *(int *)(param_1 + 0xc);
        gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x4)));
        return iVar4 != 0;
      }
      if (*(char *)((int)piVar9 + 0x15) == '\0') {
        piVar2 = (int *)piVar9[2];
        if (*(char *)((int)piVar2 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          piVar9 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x15);
            piVar9 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar9[1] + 0x15);
          piVar6 = (int *)piVar9[1];
          piVar2 = piVar9;
          while ((piVar9 = piVar6, cVar1 == '\0' && (piVar2 == (int *)piVar9[2]))) {
            cVar1 = *(char *)(piVar9[1] + 0x15);
            piVar6 = (int *)piVar9[1];
            piVar2 = piVar9;
          }
        }
      }
    } while (piVar9 != *(int * PTR32 *)((int)this + 0x10));
  }
  gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x4)));
  return 0;
}

/* ref: FUN_00e4da20 */
uint F_00e4da20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe4da20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int * piVar4;
  int * piVar5;
  byte bVar6;
  uint uVar7;
  int * piVar8;
  int * piVar9;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  (*(LPCRITICAL_SECTION *)(gen_frame + 0x4)) = (LPCRITICAL_SECTION)((int)this + 0x68);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x68));
  piVar9 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x10)));
  if (piVar9 != *(int * PTR32 *)((int)this + 0x10)) {
    do {
      uVar7 = ((code *)*(gen_code32 *)(*(int *)piVar9[4] + 0xc))((int *)piVar9[4]);
      piVar8 = piVar9;
      if ((char)uVar7 == '\0') {
        if (*(char *)((int)piVar9 + 0x15) == '\0') {
          piVar8 = (int *)piVar9[2];
          if (*(char *)((int)piVar8 + 0x15) == '\0') {
            cVar1 = *(char *)(*piVar8 + 0x15);
            piVar9 = (int *)*piVar8;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*piVar9 + 0x15);
              piVar8 = piVar9;
              piVar9 = (int *)*piVar9;
            }
          }
          else {
            cVar1 = *(char *)(piVar9[1] + 0x15);
            piVar4 = (int *)piVar9[1];
            while ((piVar8 = piVar4, cVar1 == '\0' && (piVar9 == (int *)piVar8[2]))) {
              cVar1 = *(char *)(piVar8[1] + 0x15);
              piVar4 = (int *)piVar8[1];
              piVar9 = piVar8;
            }
          }
        }
      }
      else {
        puVar2 = (undefined4 *)piVar9[4];
        iVar3 = piVar9[3];
        if (*(char *)((int)piVar9 + 0x15) == '\0') {
          piVar8 = (int *)piVar9[2];
          if (*(char *)((int)piVar8 + 0x15) == '\0') {
            cVar1 = *(char *)(*piVar8 + 0x15);
            piVar4 = (int *)*piVar8;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*piVar4 + 0x15);
              piVar8 = piVar4;
              piVar4 = (int *)*piVar4;
            }
          }
          else {
            cVar1 = *(char *)(piVar9[1] + 0x15);
            piVar5 = (int *)piVar9[1];
            piVar4 = piVar9;
            while ((piVar8 = piVar5, cVar1 == '\0' && (piVar4 == (int *)piVar8[2]))) {
              cVar1 = *(char *)(piVar8[1] + 0x15);
              piVar5 = (int *)piVar8[1];
              piVar4 = piVar8;
            }
          }
        }
        F_00e38a40((*(undefined * PTR32 *)(gen_frame + 0x8)) + 0xc,((undefined1 *)(gen_frame + 0x0)),piVar9);
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0x8)) + 8) + 0x14))))(*(int * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0x8)) + 8),iVar3);
        if (*(int *)((*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x80) != 0) {
          ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x80) + 0x20))))(*(int * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x80),iVar3);
        }
        this = (*(undefined * PTR32 *)(gen_frame + 0x8));
        if (puVar2 != (undefined4 *)0x0) {
          ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
          this = (*(undefined * PTR32 *)(gen_frame + 0x8));
        }
      }
      piVar9 = piVar8;
    } while (piVar8 != *(int * PTR32 *)((int)this + 0x10));
  }
  piVar9 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x10)));
  if (piVar9 != *(int * PTR32 *)((int)this + 0x10)) {
    do {
      bVar6 = F_00e393a0(this,param_1,piVar9[3],piVar9[4]);
      if (bVar6 != 0) {
        if (*(int *)(param_1 + 0xc) == 0) {
          gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x4)));
          return 0;
        }
        gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x4)));
        return 1;
      }
      if (*(char *)((int)piVar9 + 0x15) == '\0') {
        piVar8 = (int *)piVar9[2];
        if (*(char *)((int)piVar8 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar8 + 0x15);
          piVar9 = piVar8;
          piVar8 = (int *)*piVar8;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar8 + 0x15);
            piVar9 = piVar8;
            piVar8 = (int *)*piVar8;
          }
        }
        else {
          cVar1 = *(char *)(piVar9[1] + 0x15);
          piVar4 = (int *)piVar9[1];
          piVar8 = piVar9;
          while ((piVar9 = piVar4, cVar1 == '\0' && (piVar8 == (int *)piVar9[2]))) {
            cVar1 = *(char *)(piVar9[1] + 0x15);
            piVar4 = (int *)piVar9[1];
            piVar8 = piVar9;
          }
        }
      }
    } while (piVar9 != *(int * PTR32 *)((int)this + 0x10));
  }
  gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x4)));
  return 0xffffffff;
}

/* ref: FUN_00e4dc10 */
uint F_00e4dc10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xe4dc10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 * puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)F_004069f0(4);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x1157d90));
    }
  }
  F_00e4cf60(this,puVar1,param_2,param_5,param_6);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[25])REFP(0x1157f04));
  F_00e4b010((undefined *)((int)this + 100));
  *(undefined * PTR32 * PTR32 *)((int)this + 100) =
       (*(undefined * PTR32 (*)[7])REFP(0x1157e30));
  F_00e4bc80((undefined *)((int)this + 0x8c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x8c) =
       (*(undefined * PTR32 (*)[7])REFP(0x1157e50));
  *(undefined4 *)((int)this + 0xb8) = param_4;
  *(undefined4 *)((int)this + 0xb4) = param_3;
  return (uint)this;
}

/* ref: FUN_00e4dc90 */
byte F_00e4dc90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4dc90u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  
  piVar5 = param_1;
  piVar3 = param_1;
  while (piVar5 != param_2) {
    iVar2 = *(int *)(piVar5[4] + 0x24);
    if ((iVar2 == 0) || (*(int *)(iVar2 + 8) != 0)) {
      F_00c33730((undefined *)piVar5[4],0);
      piVar5 = piVar3;
    }
    if (*(char *)((int)piVar5 + 0x15) == '\0') {
      piVar3 = (int *)piVar5[2];
      if (*(char *)((int)piVar3 + 0x15) == '\0') {
        cVar1 = *(char *)(*piVar3 + 0x15);
        piVar5 = piVar3;
        piVar4 = (int *)*piVar3;
        while (piVar3 = piVar5, cVar1 == '\0') {
          cVar1 = *(char *)(*piVar4 + 0x15);
          piVar5 = piVar4;
          piVar4 = (int *)*piVar4;
        }
      }
      else {
        cVar1 = *(char *)(piVar5[1] + 0x15);
        piVar3 = (int *)piVar5[1];
        piVar4 = piVar5;
        while ((piVar5 = piVar3, piVar3 = piVar5, cVar1 == '\0' && (piVar4 == (int *)piVar5[2]))) {
          cVar1 = *(char *)(piVar5[1] + 0x15);
          piVar3 = (int *)piVar5[1];
          piVar4 = piVar5;
        }
      }
    }
  }
  return (byte)param_3;
}

/* ref: FUN_00e4dd20 */
uint F_00e4dd20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe4dd20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  F_01050b90(this,param_2);
  *(undefined4 *)((int)this + 0x10) = param_1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x1157e70));
  *(undefined4 *)((int)this + 0x1c) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *(uint *)((int)this + 0x18) = uVar1;
    *(uint *)uVar1 = uVar1;
    *((int *)GEN_TOP((*(int *)((int)this + 0x18) + 4))) = *(int *)((int)this + 0x18);
    *((int *)GEN_TOP((*(int *)((int)this + 0x18) + 8))) = *(int *)((int)this + 0x18);
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x15))) = 1;
    *(undefined4 *)((int)this + 0x28) = 0;
    *(undefined4 *)((int)this + 0x2c) = 0;
    *(undefined4 *)((int)this + 0x30) = 0;
    *(undefined * PTR32 * PTR32 *)this =
         (*(undefined * PTR32 (*)[6])REFP(0x1157e80));
    *(undefined4 *)((int)this + 0x24) = param_3;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: Application::Network::LobbyClient::RaptureChannelManager::vf4 */
unsigned int F_00e4ddb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe4ddb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00e4ddd0 */
uint F_00e4ddd0(unsigned int gen_a0)
{
  GEN_ENTER(0xe4ddd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x15) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x15) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x15) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x15) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x15);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x15);
    }
    if (*(char *)(*(int *)this + 0x15) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00e4de30 */
uint F_00e4de30(unsigned int gen_a0)
{
  GEN_ENTER(0xe4de30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e4de40 */
uint F_00e4de40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4de40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e4de60 */
uint F_00e4de60(unsigned int gen_a0)
{
  GEN_ENTER(0xe4de60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e4de70 */
uint F_00e4de70(unsigned int gen_a0)
{
  GEN_ENTER(0xe4de70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e4de80 */
uint F_00e4de80(unsigned int gen_a0)
{
  GEN_ENTER(0xe4de80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e4de90 */
uint F_00e4de90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4de90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e4dec0 */
uint F_00e4dec0(unsigned int gen_a0)
{
  GEN_ENTER(0xe4dec0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x15) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x15) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x15) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x15) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x15);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x15);
    }
    if (*(char *)(*(int *)this + 0x15) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00e4df20 */
uint F_00e4df20(unsigned int gen_a0)
{
  GEN_ENTER(0xe4df20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e4df30 */
uint F_00e4df30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4df30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e4df50 */
uint F_00e4df50(unsigned int gen_a0)
{
  GEN_ENTER(0xe4df50u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e4df60 */
uint F_00e4df60(unsigned int gen_a0)
{
  GEN_ENTER(0xe4df60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e4df70 */
uint F_00e4df70(unsigned int gen_a0)
{
  GEN_ENTER(0xe4df70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e4df80 */
uint F_00e4df80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4df80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e4dfa0 */
uint F_00e4dfa0(unsigned int gen_a0)
{
  GEN_ENTER(0xe4dfa0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e4dfb0 */
uint F_00e4dfb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4dfb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e4dfd0 */
uint F_00e4dfd0(unsigned int gen_a0)
{
  GEN_ENTER(0xe4dfd0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e4dfe0 */
uint F_00e4dfe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4dfe0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e4e000 */
uint F_00e4e000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4e000u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e4e030 */
uint F_00e4e030(unsigned int gen_a0)
{
  GEN_ENTER(0xe4e030u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00e4ddd0(this);
  return (uint)this;
}

/* ref: FUN_00e4e040 */
uint F_00e4e040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4e040u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e4e060 */
uint F_00e4e060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4e060u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e4e080 */
uint F_00e4e080(unsigned int gen_a0)
{
  GEN_ENTER(0xe4e080u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e4e0d0 */
uint F_00e4e0d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4e0d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e4e100 */
uint F_00e4e100(unsigned int gen_a0)
{
  GEN_ENTER(0xe4e100u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00e4dec0(this);
  return (uint)this;
}

/* ref: FUN_00e4e110 */
uint F_00e4e110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4e110u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e4e130 */
uint F_00e4e130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4e130u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e4e150 */
uint F_00e4e150(unsigned int gen_a0)
{
  GEN_ENTER(0xe4e150u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e4e1a0 */
uint F_00e4e1a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe4e1a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00e4e1c0 */
uint F_00e4e1c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe4e1c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00e4e1e0 */
uint F_00e4e1e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe4e1e0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
LAB_00e4e3dd: ;
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
        goto LAB_00e4e3dd;
      }
      *(undefined1 *)(piVar5 + 5) = 1;
      *(undefined1 *)(iVar2 + 0x14) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x14))) = 0;
      piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
    }
    cVar1 = *(char *)(piVar4[1] + 0x14);
  } while( true );
}

/* ref: FUN_00e4e410 */
uint F_00e4e410(unsigned int gen_a0)
{
  GEN_ENTER(0xe4e410u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00e4ddd0(this);
  return (uint)this;
}

/* ref: FUN_00e4e420 */
uint F_00e4e420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4e420u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e4e440 */
uint F_00e4e440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe4e440u, gen_a0, gen_a1, gen_a2, gen_a3);
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
LAB_00e4e63d: ;
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
        goto LAB_00e4e63d;
      }
      *(undefined1 *)(piVar5 + 5) = 1;
      *(undefined1 *)(iVar2 + 0x14) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x14))) = 0;
      piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
    }
    cVar1 = *(char *)(piVar4[1] + 0x14);
  } while( true );
}

/* ref: FUN_00e4e670 */
uint F_00e4e670(unsigned int gen_a0)
{
  GEN_ENTER(0xe4e670u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00e4dec0(this);
  return (uint)this;
}

/* ref: FUN_00e4e680 */
uint F_00e4e680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4e680u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: std::allocator<std::_Container_proxy>::construct_00e4e6a0 */
unsigned int F_00e4e6a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4e6a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  if (param_1 != (undefined *)0x0) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: std::allocator<std::_Container_proxy>::construct_00e4e6c0 */
unsigned int F_00e4e6c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4e6c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  if (param_1 != (undefined *)0x0) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_00e4e6e0 */
uint F_00e4e6e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe4e6e0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    } while (*(char *)((int)puVar1 + 0x15) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = puVar2;
  if (bVar3 != false) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      puVar2 = (undefined4 *)F_00e4e1e0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar2,(*(int *)&gen_args[2]));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_00e4ddd0(&(*(undefined4 * PTR32 *)&gen_args[3]));
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[3]);
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[3])[3] < *(uint *)((*(int *)&gen_args[2]) + 0xc)) {
    puVar2 = (undefined4 *)F_00e4e1e0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),(*(undefined4 *)(gen_frame + 0x8)),puVar2,(*(int *)&gen_args[2]));
    *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  F_00406ad0((*(int *)&gen_args[2]));
  *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00e4e7c0 */
unsigned int F_00e4e7c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4e7c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_00e4e7e0 */
uint F_00e4e7e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe4e7e0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    } while (*(char *)((int)puVar1 + 0x15) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = puVar2;
  if (bVar3 != false) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      puVar2 = (undefined4 *)F_00e4e440((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar2,(*(int *)&gen_args[2]));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_00e4dec0(&(*(undefined4 * PTR32 *)&gen_args[3]));
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[3]);
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[3])[3] < *(uint *)((*(int *)&gen_args[2]) + 0xc)) {
    puVar2 = (undefined4 *)F_00e4e440((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),(*(undefined4 *)(gen_frame + 0x8)),puVar2,(*(int *)&gen_args[2]));
    *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  F_00406ad0((*(int *)&gen_args[2]));
  *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00e4e8c0 */
unsigned int F_00e4e8c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4e8c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_00e4e8e0 */
uint F_00e4e8e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4e8e0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined1 * puVar1;
  int * piVar2;
  uint uVar3;
  bool bVar4;
  
  puVar1 = (*(undefined1 * PTR32 *)&gen_args[2]);
  uVar3 = (*(uint *)&gen_args[1]);
  *(*(undefined1 * PTR32 *)&gen_args[2]) = 0;
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x60))) != 0) {
    if ((((((*(uint *)&gen_args[1]) != 0) && ((*(uint *)&gen_args[1]) != 0x20000000)) && ((*(uint *)&gen_args[1]) != 0x40000000)) &&
        (((*(uint *)&gen_args[1]) != 0x60000000 && ((*(uint *)&gen_args[1]) != 0x80000000)))) &&
       (((*(uint *)&gen_args[1]) != 0xa0000000 && (((*(uint *)&gen_args[1]) != 0xc0000000 && ((*(uint *)&gen_args[1]) != 0xe0000000)))))) {
      piVar2 = (int *)F_00c33050(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))),&(*(undefined1 * PTR32 *)&gen_args[2]),&(*(uint *)&gen_args[1]));
      if (*piVar2 == *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)))) {
        return uVar3;
      }
      *puVar1 = 1;
      return uVar3;
    }
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x60))) + 8))))
                      (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x60))),(*(uint *)&gen_args[1]) >> 0x1d);
    return uVar3;
  }
  if ((*(uint *)&gen_args[1]) < 0x80000001) {
    if ((*(uint *)&gen_args[1]) == 0x80000000) goto LAB_00e4ea24;
    if ((*(uint *)&gen_args[1]) < 0x40000001) {
      if ((*(uint *)&gen_args[1]) == 0x40000000) {
        uVar3 = F_01050cf0((*(undefined * PTR32 *)&gen_args[0]));
        return uVar3 | 0x40000000;
      }
      if ((*(uint *)&gen_args[1]) == 0) goto LAB_00e4ea24;
      if ((*(uint *)&gen_args[1]) == 0x20000000) {
        if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) - *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) >> 2 == 0) {
          uVar3 = F_01050cf0((*(undefined * PTR32 *)&gen_args[0]));
          return uVar3 | 0x20000000;
        }
        uVar3 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) + -4)));
        if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) == *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10)))) {
          return uVar3;
        }
        *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) + -4;
        return uVar3;
      }
      goto LAB_00e4ea01;
    }
    bVar4 = (*(uint *)&gen_args[1]) == 0x60000000;
  }
  else {
    if (((*(uint *)&gen_args[1]) == 0xa0000000) || ((*(uint *)&gen_args[1]) == 0xc0000000)) goto LAB_00e4ea24;
    bVar4 = (*(uint *)&gen_args[1]) == 0xe0000000;
  }
  if (!bVar4) {
LAB_00e4ea01: ;
    piVar2 = (int *)F_00c33050(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))),&(*(undefined1 * PTR32 *)&gen_args[2]),&(*(uint *)&gen_args[1]));
    if (*piVar2 == *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)))) {
      return uVar3;
    }
    *puVar1 = 1;
    return uVar3;
  }
LAB_00e4ea24: ;
  uVar3 = F_01050cf0((*(undefined * PTR32 *)&gen_args[0]));
  return uVar3 | 0xe0000000;
}

/* ref: FUN_00e4ea40 */
uint F_00e4ea40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe4ea40u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e4eaa0 */
uint F_00e4eaa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe4eaa0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e4eb00 */
uint F_00e4eb00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4eb00u, gen_a0, gen_a1, gen_a2, 0u);
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
    F_00e4e6e0(this,param_1,puVar1,0);
    return param_1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00e4eb80 */
uint F_00e4eb80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4eb80u, gen_a0, gen_a1, gen_a2, 0u);
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
    F_00e4e7e0(this,param_1,puVar1,0);
    return param_1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00e4ec00 */
uint F_00e4ec00(unsigned int gen_a0)
{
  GEN_ENTER(0xe4ec00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  iVar1 = *(int *)((int)this + 0x10);
  if (iVar1 == 0) {
    (*(uint *)(gen_frame + 0x18)) = 0;
  }
  else {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar1 + 0x4c) + 8))))(*(int * PTR32 *)(iVar1 + 0x4c),iVar1,this,this);
    (*(uint *)(gen_frame + 0x18)) = uVar3;
  }
  ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
  uVar2 = *(undefined4 *)((int)this + 8);
  puVar4 = (undefined4 *)F_004069f0(0x18);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = *(undefined4 *)((int)this + 0x18);
    puVar4[1] = *(undefined4 *)((int)this + 0x18);
    puVar4[2] = *(undefined4 *)((int)this + 0x18);
    *(undefined2 *)(puVar4 + 5) = 0;
    if (puVar4 + 3 != (undefined4 *)0x0) {
      puVar4[3] = uVar2;
      puVar4[4] = (*(uint *)(gen_frame + 0x18));
    }
    F_00e4e7e0((undefined *)((int)this + 0x14),((undefined1 *)(gen_frame + 0xc)),puVar4,0);
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
    return uVar3;
  }
  (*(uint *)(gen_frame + 0x18)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x14)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x14)));
}

/* ref: FUN_00e4ecb0 */
uint F_00e4ecb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe4ecb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
  (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(param_1 + 8);
  ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
  F_00c330c0((undefined *)((int)this + 0x14),&(*(int *)(gen_frame + 0x10)),&(*(undefined4 *)(gen_frame + 0x18)));
  if ((*(int *)(gen_frame + 0x10)) == *(int *)((int)this + 0x18)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)((*(int *)(gen_frame + 0x10)) + 0x10);
  }
  ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  if (uVar3 == 0) {
    iVar1 = *(int *)((int)this + 0x10);
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar1 + 0x4c) + 8))))
                        (*(int * PTR32 *)(iVar1 + 0x4c),iVar1,this,param_1);
    }
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = *(undefined * PTR32 * PTR32 *)(param_1 + 8);
    puVar2 = (undefined4 *)F_004069f0(0x18);
    if (puVar2 == (undefined4 *)0x0) {
      (*(int *)(gen_frame + 0x10)) = 0;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)));
    }
    *puVar2 = *(undefined4 *)((int)this + 0x18);
    puVar2[1] = *(undefined4 *)((int)this + 0x18);
    puVar2[2] = *(undefined4 *)((int)this + 0x18);
    *(undefined2 *)(puVar2 + 5) = 0;
    if (puVar2 + 3 != (undefined4 *)0x0) {
      puVar2[3] = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc));
      puVar2[4] = uVar3;
    }
    F_00e4e7e0((undefined *)((int)this + 0x14),((undefined1 *)(gen_frame + 0x14)),puVar2,0);
  }
  ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  return uVar3;
}

/* ref: FUN_00e4edb0 */
uint F_00e4edb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe4edb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  F_00e4ecb0(param_1,this);
  uVar1 = F_00e4ecb0(this,param_1);
  return uVar1;
}

/* ref: FUN_00e4edd0 */
uint F_00e4edd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe4edd0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  undefined * this_00;
  int * piVar2;
  uint uVar3;
  undefined * this_01;
  undefined4 * puVar4;
  
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))))((*(undefined * PTR32 *)&gen_args[0]));
  piVar2 = (*(int * PTR32 *)&gen_args[1]);
  (*(char *)(gen_frame + 0x1b)) = '\0';
  uVar3 = F_00e4e8e0((*(undefined * PTR32 *)&gen_args[0]),(*(int * PTR32 *)&gen_args[1]),&(*(char *)(gen_frame + 0x1b)));
  (*(uint *)(gen_frame + 0x14)) = uVar3;
  if ((*(char *)(gen_frame + 0x1b)) != '\0') {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))))((*(undefined * PTR32 *)&gen_args[0]));
    return (uint)piVar2;
  }
  this_01 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) + 4))))
                              (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))),(*(undefined * PTR32 *)&gen_args[0]),uVar3)));
  F_00e4ec00(this_01);
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)));
  (*(int * PTR32 *)(gen_frame + 0x10)) = piVar1;
  if ((piVar2 != (int *)0x40000000) && (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) != 0)) {
    (*(int * PTR32 *)&gen_args[1]) = (int *)*piVar1;
    if ((*(int * PTR32 *)&gen_args[1]) != piVar1) {
      do {
        this_00 = ((undefined *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[4]));
        F_00e4ecb0(this_00,this_01);
        F_00e4ecb0(this_01,this_00);
        F_00e47fb0(&(*(int * PTR32 *)&gen_args[1]));
      } while ((*(int * PTR32 *)&gen_args[1]) != (*(int * PTR32 *)(gen_frame + 0x10)));
    }
  }
  puVar4 = (undefined4 *)F_004069f0(0x18);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)));
    puVar4[1] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)));
    puVar4[2] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)));
    *(undefined2 *)(puVar4 + 5) = 0;
    if (puVar4 + 3 != (uint *)0x0) {
      puVar4[3] = (*(uint *)(gen_frame + 0x14));
      puVar4[4] = this_01;
    }
    F_00e4e6e0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))),((undefined1 *)(gen_frame + 0x4)),puVar4,0);
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))))((*(undefined * PTR32 *)&gen_args[0]));
    return (*(uint *)(gen_frame + 0x14));
  }
  (*(int * PTR32 *)(gen_frame + 0x10)) = (int *)0x0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)));
}

/* ref: FUN_00e4eee0 */
uint F_00e4eee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe4eee0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  int * piVar2;
  uint uVar3;
  
  uVar1 = (*(undefined4 *)&gen_args[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  F_00e4edd0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]));
  (*(undefined4 *)&gen_args[1]) = uVar1;
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))))((*(undefined * PTR32 *)&gen_args[0]));
  piVar2 = (int *)F_00c33050(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  if (*piVar2 == *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)))) {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))))((*(undefined * PTR32 *)&gen_args[0]));
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *(int * PTR32 *)(*piVar2 + 0x10);
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))))((*(undefined * PTR32 *)&gen_args[0]));
  }
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))))((*(undefined * PTR32 *)&gen_args[0]),piVar2);
  ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))))((*(undefined * PTR32 *)&gen_args[0]),piVar2);
  return uVar3;
}

/* ref: FUN_00e4ef50 */
uint F_00e4ef50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe4ef50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00e4eee0(this,param_1);
  return uVar1;
}

/* ref: ChannelManagerCoreTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf7 */
unsigned int F_00e4ef60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe4ef60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int * piVar2;
  byte bVar3;
  
  if (*(int *)((int)this + 8) == 0) {
    return 0;
  }
  F_01050b60(((undefined1 *)(gen_frame + 0xc)));
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x4))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f8ac));
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(undefined8 *)(gen_frame + 0x14)) = 0;
  if (*(int *)((int)this + 0x58) == 0) {
    bVar3 = F_00e4d8c0(*(undefined * PTR32 *)((int)this + 8),((undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
    if (bVar3 == 0) goto LAB_00e4effc;
  }
  else {
    piVar1 = *(int * PTR32 *)((int)this + 0x54);
    (*(int *)(gen_frame + 0x10)) = *(int *)(*piVar1 + 8);
    piVar2 = (int *)*piVar1;
    if (piVar2 != piVar1) {
      *(int *)piVar2[1] = *piVar2;
      *(int *)(*piVar2 + 4) = piVar2[1];
      F_00406ad0(piVar2);
      *(int *)((int)this + 0x58) = *(int *)((int)this + 0x58) + -1;
    }
  }
  F_00e4d210(this,((undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)(gen_frame + 0x10)) + 8) + 0x10))))(*(int * PTR32 *)((*(int *)(gen_frame + 0x10)) + 8),(*(int *)(gen_frame + 0x10)));
  (*(int *)(gen_frame + 0x10)) = 0;
LAB_00e4effc: ;
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x4))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f8ac));
  F_01050b70();
  return 0;
}

/* ref: ChannelManagerCoreTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf8 */
unsigned int F_00e4f020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe4f020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int * piVar2;
  uint uVar3;
  byte bVar4;
  
  if (*(int *)((int)this + 8) != 0) {
    if (*(int *)((int)this + 0x58) != 0) {
      F_01050b60(((undefined1 *)(gen_frame + 0x8)));
      piVar1 = *(int * PTR32 *)((int)this + 0x54);
      (*(int *)(gen_frame + 0xc)) = 0;
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f8ac));
      (*(undefined8 *)(gen_frame + 0x10)) = 0;
      (*(int *)(gen_frame + 0xc)) = *(int *)(*piVar1 + 8);
      piVar2 = (int *)*piVar1;
      if (piVar2 != piVar1) {
        *(int *)piVar2[1] = *piVar2;
        *(int *)(*piVar2 + 4) = piVar2[1];
        F_00406ad0(piVar2);
        *(int *)((int)this + 0x58) = *(int *)((int)this + 0x58) + -1;
      }
      F_00e4d210(this,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)(gen_frame + 0xc)) + 8) + 0x10))))(*(int * PTR32 *)((*(int *)(gen_frame + 0xc)) + 8),(*(int *)(gen_frame + 0xc)));
      (*(int *)(gen_frame + 0xc)) = 0;
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f8ac));
      F_01050b70();
      return 0;
    }
    (*(uint *)(gen_frame + 0x18)) = 0xe0000000;
    do {
      uVar3 = (*(uint *)(gen_frame + 0x18));
      F_01050b60(((undefined1 *)(gen_frame + 0x8)));
      (*(undefined8 *)(gen_frame + 0x10)) = 0;
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f8ac));
      (*(int *)(gen_frame + 0xc)) = 0;
      bVar4 = F_00e4d630(*(undefined4 *)((int)this + 8),((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),uVar3,&(*(uint *)(gen_frame + 0x18)),REFG(float, 0x10ac050));
      if (bVar4 != 0) {
        F_00e4d210(this,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)(gen_frame + 0xc)) + 8) + 0x10))))(*(int * PTR32 *)((*(int *)(gen_frame + 0xc)) + 8),(*(int *)(gen_frame + 0xc)));
        (*(int *)(gen_frame + 0xc)) = 0;
      }
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f8ac));
      F_01050b70();
    } while (((*(uint *)(gen_frame + 0x18)) != 0) && ((*(uint *)(gen_frame + 0x18)) != 0xe0000000));
  }
  return 0;
}

/* ref: ChannelManagerCoreTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf9 */
uint F_00e4f150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe4f150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int * piVar2;
  byte bVar3;
  uint uVar4;
  
  uVar4 = *(uint *)((int)this + 0x58);
  if (*(int *)((int)this + 8) != 0) {
    F_01050b60(((undefined1 *)(gen_frame + 0xc)));
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x4))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f8ac))
    ;
    (*(int *)(gen_frame + 0x10)) = 0;
    (*(undefined8 *)(gen_frame + 0x14)) = 0;
    if (uVar4 == 0) {
      bVar3 = F_00e4d8c0(*(undefined * PTR32 *)((int)this + 8),((undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
      while (bVar3 != 0) {
        F_00e4d210(this,((undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)(gen_frame + 0x10)) + 8) + 0x10))))(*(int * PTR32 *)((*(int *)(gen_frame + 0x10)) + 8),(*(int *)(gen_frame + 0x10)));
        (*(int *)(gen_frame + 0x10)) = 0;
        uVar4 = uVar4 + 1;
        bVar3 = F_00e4d8c0(*(undefined * PTR32 *)((int)this + 8),((undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
      }
    }
    else {
      piVar1 = *(int * PTR32 *)((int)this + 0x54);
      (*(int *)(gen_frame + 0x10)) = *(int *)(*piVar1 + 8);
      piVar2 = (int *)*piVar1;
      if (piVar2 != piVar1) {
        *(int *)piVar2[1] = *piVar2;
        *(int *)(*piVar2 + 4) = piVar2[1];
        F_00406ad0(piVar2);
        *(int *)((int)this + 0x58) = *(int *)((int)this + 0x58) + -1;
      }
      F_00e4d210(this,((undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)(gen_frame + 0x10)) + 8) + 0x10))))(*(int * PTR32 *)((*(int *)(gen_frame + 0x10)) + 8),(*(int *)(gen_frame + 0x10)));
      (*(int *)(gen_frame + 0x10)) = 0;
    }
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x4))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f8ac))
    ;
    F_01050b70();
  }
  return uVar4;
}

/* ref: ChannelManagerCoreTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf10 */
uint F_00e4f230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe4f230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *(uint *)((int)this + 0x58);
  if (*(int *)((int)this + 8) != 0) {
    F_01050b60(((undefined1 *)(gen_frame + 0xc)));
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x4))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f8ac))
    ;
    (*(int *)(gen_frame + 0x10)) = 0;
    (*(undefined8 *)(gen_frame + 0x14)) = 0;
    if (uVar4 == 0) {
      do {
        while( true ) {
          uVar3 = F_00e4da20(*(undefined * PTR32 *)((int)this + 8),((undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
          if (uVar3 != 1) break;
          F_00e4d210(this,((undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
          ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)(gen_frame + 0x10)) + 8) + 0x10))))(*(int * PTR32 *)((*(int *)(gen_frame + 0x10)) + 8),(*(int *)(gen_frame + 0x10)));
          (*(int *)(gen_frame + 0x10)) = 0;
          uVar4 = uVar4 + 1;
        }
      } while (uVar3 == 0);
    }
    else {
      piVar1 = *(int * PTR32 *)((int)this + 0x54);
      (*(int *)(gen_frame + 0x10)) = *(int *)(*piVar1 + 8);
      piVar2 = (int *)*piVar1;
      if (piVar2 != piVar1) {
        *(int *)piVar2[1] = *piVar2;
        *(int *)(*piVar2 + 4) = piVar2[1];
        F_00406ad0(piVar2);
        *(int *)((int)this + 0x58) = *(int *)((int)this + 0x58) + -1;
      }
      F_00e4d210(this,((undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)(gen_frame + 0x10)) + 8) + 0x10))))(*(int * PTR32 *)((*(int *)(gen_frame + 0x10)) + 8),(*(int *)(gen_frame + 0x10)));
      (*(int *)(gen_frame + 0x10)) = 0;
    }
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x4))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f8ac))
    ;
    F_01050b70();
  }
  return uVar4;
}

/* ref: ChannelManagerCoreTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf11 */
uint F_00e4f310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4f310u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *(uint *)((int)this + 0x58);
  if (*(int *)((int)this + 8) != 0) {
    F_01050b60(((undefined1 *)(gen_frame + 0xc)));
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x4))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f8ac))
    ;
    (*(int *)(gen_frame + 0x10)) = 0;
    (*(undefined8 *)(gen_frame + 0x14)) = 0;
    if (uVar4 == 0) {
      do {
        while( true ) {
          if (param_1 <= uVar4) goto LAB_00e4f3cd;
          uVar3 = F_00e4da20(*(undefined * PTR32 *)((int)this + 8),((undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
          if (uVar3 != 1) break;
          F_00e4d210(this,((undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
          ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)(gen_frame + 0x10)) + 8) + 0x10))))(*(int * PTR32 *)((*(int *)(gen_frame + 0x10)) + 8),(*(int *)(gen_frame + 0x10)));
          (*(int *)(gen_frame + 0x10)) = 0;
          uVar4 = uVar4 + 1;
        }
      } while (uVar3 == 0);
    }
    else {
      piVar1 = *(int * PTR32 *)((int)this + 0x54);
      (*(int *)(gen_frame + 0x10)) = *(int *)(*piVar1 + 8);
      piVar2 = (int *)*piVar1;
      if (piVar2 != piVar1) {
        *(int *)piVar2[1] = *piVar2;
        *(int *)(*piVar2 + 4) = piVar2[1];
        F_00406ad0(piVar2);
        *(int *)((int)this + 0x58) = *(int *)((int)this + 0x58) + -1;
      }
      F_00e4d210(this,((undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)(gen_frame + 0x10)) + 8) + 0x10))))(*(int * PTR32 *)((*(int *)(gen_frame + 0x10)) + 8),(*(int *)(gen_frame + 0x10)));
      (*(int *)(gen_frame + 0x10)) = 0;
    }
LAB_00e4f3cd: ;
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x4))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f8ac))
    ;
    F_01050b70();
  }
  return uVar4;
}

/* ref: ChannelManagerCoreTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf12 */
uint F_00e4f3f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe4f3f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar4 = *(uint *)((int)this + 0x58);
  uVar5 = 0;
  if (*(int *)((int)this + 8) != 0) {
    if (uVar4 == 0) {
      uVar6 = F_00427e30();
      (*(ulonglong *)(gen_frame + 0x24)) = uVar6 + (longlong)CONCAT44(param_2,param_1);
      F_01050b60(((undefined1 *)(gen_frame + 0x14)));
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f8ac));
      (*(int *)(gen_frame + 0x18)) = 0;
      (*(undefined8 *)(gen_frame + 0x1c)) = 0;
      do {
        while( true ) {
          uVar3 = F_00e4da20(*(undefined * PTR32 *)((int)this + 8),((undefined * PTR32 * PTR32 *)(gen_frame + 0xc)));
          if (uVar3 != 1) break;
          F_00e4d210(this,((undefined * PTR32 * PTR32 *)(gen_frame + 0xc)));
          ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)(gen_frame + 0x18)) + 8) + 0x10))))(*(int * PTR32 *)((*(int *)(gen_frame + 0x18)) + 8),(*(int *)(gen_frame + 0x18)));
          uVar5 = uVar5 + 1;
          uVar4 = uVar4 + 1;
          (*(int *)(gen_frame + 0x18)) = 0;
          if (param_3 <= uVar5) {
            uVar6 = F_00427e30();
            if ((*(ulonglong *)(gen_frame + 0x24)) < uVar6) goto LAB_00e4f4f4;
            uVar5 = 0;
          }
        }
      } while (uVar3 == 0);
    }
    else {
      F_01050b60(((undefined1 *)(gen_frame + 0x14)));
      piVar1 = *(int * PTR32 *)((int)this + 0x54);
      (*(int *)(gen_frame + 0x18)) = 0;
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f8ac));
      (*(undefined8 *)(gen_frame + 0x1c)) = 0;
      (*(int *)(gen_frame + 0x18)) = *(int *)(*piVar1 + 8);
      piVar2 = (int *)*piVar1;
      if (piVar2 != piVar1) {
        *(int *)piVar2[1] = *piVar2;
        *(int *)(*piVar2 + 4) = piVar2[1];
        F_00406ad0(piVar2);
        *(int *)((int)this + 0x58) = *(int *)((int)this + 0x58) + -1;
      }
      F_00e4d210(this,((undefined * PTR32 * PTR32 *)(gen_frame + 0xc)));
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)(gen_frame + 0x18)) + 8) + 0x10))))(*(int * PTR32 *)((*(int *)(gen_frame + 0x18)) + 8),(*(int *)(gen_frame + 0x18)));
      (*(int *)(gen_frame + 0x18)) = 0;
    }
LAB_00e4f4f4: ;
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f8ac))
    ;
    F_01050b70();
  }
  return uVar4;
}

/* ref: FUN_00e4f510 */
byte F_00e4f510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4f510u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  byte bVar2;
  
  if (*(int *)((int)this + 0x58) != 0) {
    *(undefined4 *)(param_1 + 0xc) = *((undefined4 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x54) + 8)));
    piVar1 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x54)));
    if (piVar1 != *(int * PTR32 *)((int)this + 0x54)) {
      *(int *)piVar1[1] = *piVar1;
      *(int *)(*piVar1 + 4) = piVar1[1];
      F_00406ad0(piVar1);
      *(int *)((int)this + 0x58) = *(int *)((int)this + 0x58) + -1;
    }
    return 1;
  }
  if (*(undefined * PTR32 *)((int)this + 8) != (undefined *)0x0) {
    bVar2 = F_00e4d8c0(*(undefined * PTR32 *)((int)this + 8),param_1);
    return bVar2;
  }
  return 0;
}

/* ref: FUN_00e4f580 */
uint F_00e4f580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xe4f580u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_00e4dc10(this,param_1,param_2,param_3,param_4,param_5,0x1000);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[25])REFP(0x1157fd4));
  *(undefined4 *)((int)this + 0xbc) = 0;
  return (uint)this;
}

/* ref: FUN_00e4f630 */
byte F_00e4f630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4f630u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  byte bVar1;
  
  bVar1 = F_00e4dc90(param_1,param_2,param_3);
  return bVar1;
}

/* ref: FUN_00e4f650 */
uint F_00e4f650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe4f650u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  uint uVar2;
  
  if ((char)param_3 != '\0') {
    puVar1 = (undefined4 *)F_004069f0(0x10);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x1157db0));
      puVar1[2] = 0;
      uVar2 = F_004069f0(0xc);
      if (uVar2 == 0) {
        (*(undefined4 *)(gen_frame + 0x8)) = 0;
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
        F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
      }
      puVar1[1] = uVar2;
      *(uint *)uVar2 = uVar2;
      *(undefined4 *)(puVar1[1] + 4) = puVar1[1];
      *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x1157dc0));
      goto LAB_00e4f6b6;
    }
  }
  puVar1 = (undefined4 *)0x0;
LAB_00e4f6b6: ;
  F_00e4dd20(this,param_1,param_2,puVar1);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[6])REFP(0x115803c));
  return (uint)this;
}

/* ref: PrimaryEntityTmpl_LF_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf1 */
unsigned int F_00e4f700(void)
{
  GEN_ENTER(0xe4f700u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: PrimaryEntityTmpl_LF_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf2 */
unsigned int F_00e4f710(void)
{
  GEN_ENTER(0xe4f710u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00e4f720 */
uint F_00e4f720(unsigned int gen_a0)
{
  GEN_ENTER(0xe4f720u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x24);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[6])REFP(0x1157e80));
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
  }
  *(undefined4 *)((int)this + 0x24) = 0;
  uVar2 = F_00e4cd20(this);
  return uVar2;
}

/* ref: PrimaryEntityTmpl_LF_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf0 */
uint F_00e4f750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe4f750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x24);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[6])REFP(0x1157e80));
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
  }
  *(undefined4 *)((int)this + 0x24) = 0;
  F_00e4cd20(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::LobbyClient::RaptureChannelManager::vf0 */
uint F_00e4f790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe4f790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)(this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[25])REFP(0x1157f6c));
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[25])REFP(0x1157f04));
  F_00e4abc0(this);
  *(undefined * PTR32 * PTR32 *)(this + 0x8c) =
       (*(undefined * PTR32 (*)[7])REFP(0x1157e50));
  F_00e4ca90(this + 0x8c);
  *(undefined * PTR32 * PTR32 *)(this + 100) =
       (*(undefined * PTR32 (*)[7])REFP(0x1157e30));
  F_00e4c920(this + 100);
  F_00e4d390(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00e4f800 */
uint F_00e4f800(unsigned int gen_a0)
{
  GEN_ENTER(0xe4f800u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint local_8;
  
  ((code *)*(gen_code32 *)(*(int *)this + 0x44))();
  if (*(int *)((int)this + 0x24) != 0) {
    local_8 = (uint)this & 0xffffff00;
    F_00e4dc90(**(undefined4 * PTR32 *)((int)this + 0x20),*(undefined4 * PTR32 *)((int)this + 0x20),local_8);
  }
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this);
  return uVar1;
}

/* ref: PrimaryEntityFactoryClass_LF_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf1 */
uint F_00e4f840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4f840u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * this_00;
  undefined4 * puVar1;
  uint uVar2;
  
  this_00 = (undefined4 *)F_004069f0(0x34);
  if (this_00 == (undefined4 *)0x0) {
    return 0;
  }
  puVar1 = (undefined4 *)F_004069f0(0x10);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x1157db0))
    ;
    puVar1[2] = 0;
    uVar2 = F_004069f0(0xc);
    if (uVar2 == 0) {
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
    }
    puVar1[1] = uVar2;
    *(uint *)uVar2 = uVar2;
    *(undefined4 *)(puVar1[1] + 4) = puVar1[1];
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x1157dc0));
  }
  F_00e4dd20(this_00,param_1,param_2,puVar1);
  *this_00 = (*(undefined * PTR32 (*)[6])REFP(0x115803c));
  return (uint)this_00;
}

/* ref: FUN_00e4f8f0 */
uint F_00e4f8f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe4f8f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1158064));
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0x10) = 1;
  F_00a1af40((undefined *)((int)this + 0x18));
  *(undefined4 *)((int)this + 0x34) = param_3;
  *(undefined4 *)((int)this + 0x30) = param_4;
  return (uint)this;
}

/* ref: FUN_00e4f930 */
unsigned int F_00e4f930(unsigned int gen_a0)
{
  GEN_ENTER(0xe4f930u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[5])REFP(0x1158064));
  return 0;
}

/* ref: Application::Network::LobbyClient::LobbyOperation::vf3 */
byte F_00e4f940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe4f940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00e4f950 */
byte F_00e4f950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4f950u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if (*(int *)((int)this + 0x10) == 2) {
    if (param_1 == 2) {
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 8))(this,param_2);
      if ((char)uVar1 == '\0') {
        if (*(int *)((int)this + 0x10) == 2) {
          *(undefined4 *)((int)this + 0x10) = 3;
        }
        if (*(int *)((int)this + 0x10) == 4) {
          *(undefined4 *)((int)this + 0x10) = 3;
        }
        return 1;
      }
    }
    else {
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this,param_2);
      if ((char)uVar1 == '\0') {
        if (*(int *)((int)this + 0x10) == 2) {
          *(undefined4 *)((int)this + 0x10) = 3;
        }
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00e4f9c0 */
byte F_00e4f9c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe4f9c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  int iVar1;
  uint uVar2;
  __time64_t _Var3;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  if (*(int *)((int)this + 0x10) != 2) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc) ^ (uint)(uint)(gen_frame + 0xbc));
    return 0;
  }
  if (param_1 == 0) {
    _Var3 = F_00c4b7c2((__time64_t *)0x0);
    if (*(uint *)((int)this + 0x30) < (uint)((int)_Var3 - *(int *)((int)this + 0x18))) {
      F_00e3bd90(((undefined4 *)(gen_frame + 0x54)));
      (*(undefined4 *)(gen_frame + 0x5c)) = 6;
      F_0042cc20(((undefined1 *)(gen_frame + 0x0)),"TIMEOUT",REFG(undefined4, 0x108cc50));
      F_0042ccf0(((undefined1 *)(gen_frame + 0x60)),((undefined1 *)(gen_frame + 0x0)));
      F_0042c880(((undefined1 *)(gen_frame + 0x0)));
      (*(undefined2 *)(gen_frame + 0xb4)) = 0x32c9;
      ((undefined4 *)(gen_frame + 0x54))[0] = 0x7d2;
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x34) + 0xc))))(*(int * PTR32 *)((int)this + 0x34),((undefined4 *)(gen_frame + 0x54)));
      iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 8) + 0x350)));
      if (iVar1 != 0) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x34) + 0x10))))
                  (*(int * PTR32 *)((int)this + 0x34),((undefined4 *)(gen_frame + 0x54)),iVar1);
      }
      if (*(int *)((int)this + 0x10) == 2) {
        *(undefined4 *)((int)this + 0x10) = 3;
      }
      F_0042c880(((undefined1 *)(gen_frame + 0x60)));
      F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
      return 1;
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x34) + 4))))(*(int * PTR32 *)((int)this + 0x34),0);
    F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
    return 1;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this,param_1);
  if (((char)uVar2 == '\0') && (*(int *)((int)this + 0x10) == 2)) {
    *(undefined4 *)((int)this + 0x10) = 3;
  }
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return 1;
}

/* ref: Application::Network::LobbyClient::LobbyOperation::ReadError */
byte F_00e4fb00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe4fb00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xd0];
  
  (*(uint *)(gen_frame + 0xc8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xcc);
  if (*(int *)(param_1 + 0x10) != *(int *)(this + 0xc)) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xcc) ^ (uint)(uint)(gen_frame + 0xcc));
    return 1;
  }
  F_00e3bd90(&(*(int *)(gen_frame + 0x64)));
  (*(int *)(gen_frame + 0x64)) = *(int *)(param_1 + 0x18);
  (*(undefined4 *)(gen_frame + 0x68)) = *(undefined4 *)(param_1 + 0x1c);
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)),param_1 + 0x24,REFG(undefined4, 0x108cc50));
  F_0042d970(((undefined1 *)(gen_frame + 0x70)),((undefined1 *)(gen_frame + 0x10)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10)));
  (*(undefined2 *)(gen_frame + 0xc4)) = *(undefined2 *)(param_1 + 0x20);
  if ((*(int *)(gen_frame + 0x64)) < 0xbb9) {
    if ((*(int *)(gen_frame + 0x64)) != 3000) {
      switch((unsigned int)(uintptr_t)((*(int *)(gen_frame + 0x64)))) {
      case 0x3e9: ;
      case 0x3f1: ;
      case 0x3f6: ;
      case 0x3f8: ;
        goto switchD_00e4fb92_caseD_3e9;
      default: ;
        goto switchD_00e4fb92_caseD_3ea;
      case 0x3eb: ;
      case 0x3f9: ;
switchD_00e4fb92_caseD_3eb: ;
        (*(undefined4 *)(gen_frame + 0x6c)) = 2;
        goto LAB_00e4fbf2;
      case 0x3ef: ;
        (*(undefined4 *)(gen_frame + 0x6c)) = 3;
        goto LAB_00e4fbf2;
      }
    }
  }
  else {
    if (0x138b < (*(int *)(gen_frame + 0x64))) {
      if ((*(int *)(gen_frame + 0x64)) == 0x138d) {
switchD_00e4fb92_caseD_3e9: ;
        (*(undefined4 *)(gen_frame + 0x6c)) = 1;
      }
      else {
switchD_00e4fb92_caseD_3ea: ;
        (*(undefined4 *)(gen_frame + 0x6c)) = 4;
      }
      goto LAB_00e4fbf2;
    }
    if ((*(int *)(gen_frame + 0x64)) < 0x1389) {
      switch((unsigned int)(uintptr_t)((*(int *)(gen_frame + 0x64)))) {
      case 0xbb9: ;
      case 0xbc0: ;
      case 0xbc1: ;
      case 0xbc5: ;
      case 0xbcb: ;
      case 0xbd2: ;
      case 0xbd8: ;
      case 0xbd9: ;
      case 0xbe1: ;
      case 0xbe2: ;
      case 0xbea: ;
      case 0xbee: ;
      case 0xbf1: ;
      case 0xbf2: ;
      case 0xbf3: ;
      case 0xbf4: ;
      case 0xbf5: ;
      case 0xbfe: ;
      case 0xc1d: ;
      case 0xc1e: ;
        goto switchD_00e4fb92_caseD_3e9;
      default: ;
        goto switchD_00e4fb92_caseD_3ea;
      case 0xbda: ;
      case 0xbdb: ;
      case 0xbff: ;
      case 0xc00: ;
      case 0xc01: ;
      case 0xc02: ;
      case 0xc07: ;
        goto switchD_00e4fb92_caseD_3eb;
      }
    }
  }
  (*(undefined4 *)(gen_frame + 0x6c)) = 5;
LAB_00e4fbf2: ;
  if ((*(int *)(gen_frame + 0x64)) == 0x3ef) {
    F_00e3ee30(param_1 + 0x10);
    (*(undefined4 *)(gen_frame + 0xc)) = (*(undefined4 *)(gen_frame + 0x68));
    F_00e3e790(*(undefined * PTR32 *)(this + 8),*(undefined4 *)(this + 0x34),&(*(undefined4 *)(gen_frame + 0xc)));
    if (*(int *)(this + 0x10) == 2) {
      *(undefined4 *)(this + 0x10) = 3;
      F_0042c880(((undefined1 *)(gen_frame + 0x70)));
      F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc));
      return 0;
    }
  }
  else {
    F_00e3ee30(param_1 + 0x10);
    F_00e3e750(*(undefined * PTR32 *)(this + 8),*(undefined4 *)(this + 0x34),&(*(int *)(gen_frame + 0x64)));
    *(undefined4 *)(this + 0x10) = 4;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x70)));
  F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc));
  return 0;
}

/* ref: FUN_00e4fd30 */
byte F_00e4fd30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4fd30u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this_00;
  uint uVar1;
  __time64_t _Var2;
  ulonglong uVar3;
  
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) == 1) {
    (*(int *)(gen_frame + 0x18)) = 0x1f6;
    uVar1 = (*((code *)GEN_TOP(**(undefined4 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]))))((*(undefined * PTR32 *)&gen_args[0]),(*(int *)&gen_args[1]),&(*(int *)(gen_frame + 0x18)));
    this_00 = (*(undefined * PTR32 *)&gen_args[2]);
    if ((char)uVar1 != '\0') {
      if ((*(int *)(gen_frame + 0x18)) != 0x1f6) {
        F_00e45300((*(undefined * PTR32 *)&gen_args[2]),&(*(int *)&gen_args[1]),&(*(int *)(gen_frame + 0x18)));
        if ((*(int *)&gen_args[1]) != *(int *)((int)this_00 + 4)) {
          F_00e44980(this_00,&(*(int *)&gen_args[1]),(*(int *)&gen_args[1]));
        }
        (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x18));
        (*(undefined * PTR32 *)(gen_frame + 0x14)) = (*(undefined * PTR32 *)&gen_args[0]);
        F_00e50430(this_00,((undefined1 *)(gen_frame + 0x8)),&(*(int *)(gen_frame + 0x10)));
      }
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = 2;
      _Var2 = F_00c4b7c2((__time64_t *)0x0);
      *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = (int)_Var2;
      uVar3 = F_00427d90();
      *((ulonglong *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = uVar3;
      uVar3 = F_00427e30();
      *((ulonglong *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = uVar3;
      return 1;
    }
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = 3;
  }
  return 0;
}

/* ref: FUN_00e4fe10 */
uint F_00e4fe10(unsigned int gen_a0)
{
  GEN_ENTER(0xe4fe10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x15) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x15) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x15) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x15) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x15);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x15);
    }
    if (*(char *)(*(int *)this + 0x15) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00e4fe70 */
uint F_00e4fe70(unsigned int gen_a0)
{
  GEN_ENTER(0xe4fe70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e4fe80 */
uint F_00e4fe80(unsigned int gen_a0)
{
  GEN_ENTER(0xe4fe80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e4fe90 */
uint F_00e4fe90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4fe90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e4feb0 */
uint F_00e4feb0(unsigned int gen_a0)
{
  GEN_ENTER(0xe4feb0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e4fec0 */
uint F_00e4fec0(unsigned int gen_a0)
{
  GEN_ENTER(0xe4fec0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e4fed0 */
uint F_00e4fed0(unsigned int gen_a0)
{
  GEN_ENTER(0xe4fed0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e4fee0 */
uint F_00e4fee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4fee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e4ff00 */
uint F_00e4ff00(unsigned int gen_a0)
{
  GEN_ENTER(0xe4ff00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e4ff10 */
uint F_00e4ff10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4ff10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: Application::Network::LobbyClient::LobbyOperation::vf4 */
uint F_00e4ff30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe4ff30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1158064));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00e4ff60 */
uint F_00e4ff60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4ff60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e4ff90 */
uint F_00e4ff90(unsigned int gen_a0)
{
  GEN_ENTER(0xe4ff90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00e4fe10(this);
  return (uint)this;
}

/* ref: FUN_00e4ffa0 */
uint F_00e4ffa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4ffa0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e4ffc0 */
uint F_00e4ffc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4ffc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

