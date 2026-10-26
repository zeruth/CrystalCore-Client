#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: Application::Network::WorkDefinitions::ClassWork_TypeInfo::vf17 */
uint F_00e77ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xe77ed0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    uVar1 = F_00e68370(param_1 + 0xc,param_3,param_4,puVar2);
    puVar2 = (uint *)((int)puVar2 + uVar1);
  }
  return (int)puVar2 - (int)param_5;
}

/* ref: Application::Network::WorkDefinitions::ClassWork_TypeInfo::vf16 */
uint F_00e77f20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xe77f20u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    uVar1 = F_00e68470(param_1 + 0xc,param_3,param_4,param_5,param_6,puVar2);
    puVar2 = (uint *)((int)puVar2 + uVar1);
  }
  return (int)puVar2 - (int)param_7;
}

/* ref: Application::Network::WorkDefinitions::ClassWork_TypeInfo::vf20 */
uint F_00e77f70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe77f70u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      *(short *)(param_3 + 4) = (short)*puVar3;
      puVar3 = (uint *)((int)param_2 + 6);
    }
    else {
      if (param_1 == 1) {
        *(uint *)(param_3 + 8) = *puVar3;
        return 8;
      }
      if (param_1 == 2) {
        uVar2 = F_00e68510(puVar3,param_3 + 0xc,6);
        return (int)puVar3 + (uVar2 - (int)param_2);
      }
    }
  }
  return (int)puVar3 - (int)param_2;
}

/* ref: FUN_00e77ff0 */
uint F_00e77ff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe77ff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x1159154));
  F_00e6b380(this,param_1);
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::ClassWork::vf7 */
uint F_00e78010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe78010u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::ClassWork::vf19 */
uint F_00e78030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe78030u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::ClassWork::vf21 */
uint F_00e78050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe78050u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::LeveWork_TypeInfo::vf18 */
uint F_00e78070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe78070u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    *(undefined2 *)puVar2 = *(undefined2 *)(param_1 + 4);
    return 6;
  case 1: ;
    *(undefined1 *)puVar2 = *(undefined1 *)(param_1 + 6);
    return 5;
  case 2: ;
    *(undefined2 *)puVar2 = *(undefined2 *)(param_1 + 8);
    return 6;
  case 3: ;
    *(undefined2 *)puVar2 = *(undefined2 *)(param_1 + 10);
    return 6;
  case 4: ;
    *(undefined1 *)puVar2 = *(undefined1 *)(param_1 + 0xc);
    puVar2 = (uint *)((int)param_3 + 5);
  }
  return (int)puVar2 - (int)param_3;
}

/* ref: Application::Network::WorkDefinitions::LeveWork_TypeInfo::vf20 */
uint F_00e78110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe78110u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      *(short *)(param_3 + 4) = (short)*puVar3;
      return 6;
    case 1: ;
      *(char *)(param_3 + 6) = (char)*puVar3;
      return 5;
    case 2: ;
      *(short *)(param_3 + 8) = (short)*puVar3;
      return 6;
    case 3: ;
      *(short *)(param_3 + 10) = (short)*puVar3;
      return 6;
    case 4: ;
      *(char *)(param_3 + 0xc) = (char)*puVar3;
      puVar3 = (uint *)((int)param_2 + 5);
    }
  }
  return (int)puVar3 - (int)param_2;
}

/* ref: FUN_00e781d0 */
uint F_00e781d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe781d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x115921c));
  F_00e6cfa0(this,param_1);
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::LeveWork::vf7 */
uint F_00e781f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe781f0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::LeveWork::vf19 */
uint F_00e78210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe78210u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::LeveWork::vf21 */
uint F_00e78230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe78230u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::MonsterNoteCategory_TypeInfo::vf18 */
uint F_00e78250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe78250u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    *(undefined2 *)((int)param_3 + 5) = 0x28;
    puVar2 = (undefined1 *)((int)param_3 + 7);
    iVar4 = 0;
    do {
      *puVar2 = *(undefined1 *)(iVar4 + 4 + param_1);
      iVar4 = iVar4 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar4 < 0x28);
    return (int)puVar2 - (int)param_3;
  case 1: ;
    *puVar3 = *(uint *)(param_1 + 0x30);
    param_3[2] = *(uint *)(param_1 + 0x34);
    return 0xc;
  case 2: ;
    *(undefined1 *)puVar3 = *(undefined1 *)(param_1 + 0x38);
    return 5;
  case 3: ;
    *puVar3 = *(uint *)(param_1 + 0x3c);
    puVar3 = param_3 + 2;
  }
  return (int)puVar3 - (int)param_3;
}

/* ref: Application::Network::WorkDefinitions::MonsterNoteCategory_TypeInfo::vf17 */
uint F_00e782f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xe782f0u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: Application::Network::WorkDefinitions::MonsterNoteCategory_TypeInfo::vf16 */
uint F_00e78340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xe78340u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: Application::Network::WorkDefinitions::MonsterNoteCategory_TypeInfo::vf20 */
uint F_00e78390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe78390u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      uVar2 = F_00e68510(puVar3,param_3 + 4,0x28);
      return (uint)((int)puVar3 + (uVar2 - (int)param_2));
    case 1: ;
      *(uint *)(param_3 + 0x30) = *puVar3;
      *(uint *)(param_3 + 0x34) = param_2[2];
      return 0xc;
    case 2: ;
      *(char *)(param_3 + 0x38) = (char)*puVar3;
      return 5;
    case 3: ;
      *(uint *)(param_3 + 0x3c) = *puVar3;
      puVar3 = param_2 + 2;
    }
  }
  return (int)puVar3 - (int)param_2;
}

/* ref: FUN_00e78440 */
uint F_00e78440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe78440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x11592e4));
  F_00e6ef20(this,param_1);
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::MonsterNoteCategory::vf7 */
uint F_00e78460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe78460u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::MonsterNoteCategory::vf19 */
uint F_00e78480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe78480u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::MonsterNoteCategory::vf21 */
uint F_00e784a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe784a0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::CharaPvP_TypeInfo::vf18 */
uint F_00e784c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe784c0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    *(undefined1 *)puVar2 = 0;
    *(undefined2 *)((int)param_3 + 5) = 3;
    *(undefined1 *)((int)param_3 + 7) = *(undefined1 *)(param_1 + 4);
    *(undefined1 *)(param_3 + 2) = *(undefined1 *)(param_1 + 5);
    *(undefined1 *)((int)param_3 + 9) = *(undefined1 *)(param_1 + 6);
    return 10;
  case 1: ;
    *(undefined1 *)puVar2 = 0;
    *(undefined2 *)((int)param_3 + 5) = 3;
    *(undefined4 *)((int)param_3 + 7) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((int)param_3 + 0xb) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)((int)param_3 + 0xf) = *(undefined4 *)(param_1 + 0x10);
    return 0x13;
  case 2: ;
    *puVar2 = *(uint *)(param_1 + 0x14);
    return 8;
  case 3: ;
    *(undefined1 *)puVar2 = 0;
    *(undefined2 *)((int)param_3 + 5) = 3;
    *(undefined1 *)((int)param_3 + 7) = *(undefined1 *)(param_1 + 0x18);
    *(undefined1 *)(param_3 + 2) = *(undefined1 *)(param_1 + 0x19);
    *(undefined1 *)((int)param_3 + 9) = *(undefined1 *)(param_1 + 0x1a);
    return 10;
  case 4: ;
    *(undefined2 *)puVar2 = *(undefined2 *)(param_1 + 0x1c);
    return 6;
  case 5: ;
    *(undefined2 *)puVar2 = *(undefined2 *)(param_1 + 0x1e);
    return 6;
  case 6: ;
    *(undefined2 *)puVar2 = *(undefined2 *)(param_1 + 0x20);
    return 6;
  case 7: ;
    *(undefined2 *)puVar2 = *(undefined2 *)(param_1 + 0x22);
    return 6;
  case 8: ;
    *(undefined2 *)puVar2 = *(undefined2 *)(param_1 + 0x24);
    return 6;
  case 9: ;
    *(undefined1 *)puVar2 = 0;
    *(undefined2 *)((int)param_3 + 5) = 3;
    *(undefined4 *)((int)param_3 + 7) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)((int)param_3 + 0xb) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)((int)param_3 + 0xf) = *(undefined4 *)(param_1 + 0x30);
    return 0x13;
  case 10: ;
    *(undefined1 *)puVar2 = 0;
    *(undefined2 *)((int)param_3 + 5) = 3;
    *(undefined4 *)((int)param_3 + 7) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)((int)param_3 + 0xb) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)((int)param_3 + 0xf) = *(undefined4 *)(param_1 + 0x3c);
    return 0x13;
  case 0xb: ;
    *(undefined1 *)puVar2 = 0;
    *(undefined2 *)((int)param_3 + 5) = 3;
    *(undefined4 *)((int)param_3 + 7) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)((int)param_3 + 0xb) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)((int)param_3 + 0xf) = *(undefined4 *)(param_1 + 0x48);
    return 0x13;
  case 0xc: ;
    *(undefined1 *)puVar2 = 0;
    *(undefined2 *)((int)param_3 + 5) = 3;
    *(undefined2 *)((int)param_3 + 7) = *(undefined2 *)(param_1 + 0x4c);
    *(undefined2 *)((int)param_3 + 9) = *(undefined2 *)(param_1 + 0x4e);
    *(undefined2 *)((int)param_3 + 0xb) = *(undefined2 *)(param_1 + 0x50);
    return 0xd;
  case 0xd: ;
    *(undefined1 *)puVar2 = 0;
    *(undefined2 *)((int)param_3 + 5) = 3;
    *(undefined2 *)((int)param_3 + 7) = *(undefined2 *)(param_1 + 0x52);
    *(undefined2 *)((int)param_3 + 9) = *(undefined2 *)(param_1 + 0x54);
    *(undefined2 *)((int)param_3 + 0xb) = *(undefined2 *)(param_1 + 0x56);
    return 0xd;
  case 0xe: ;
    *(undefined1 *)puVar2 = 0;
    *(undefined2 *)((int)param_3 + 5) = 3;
    *(undefined2 *)((int)param_3 + 7) = *(undefined2 *)(param_1 + 0x58);
    *(undefined2 *)((int)param_3 + 9) = *(undefined2 *)(param_1 + 0x5a);
    *(undefined2 *)((int)param_3 + 0xb) = *(undefined2 *)(param_1 + 0x5c);
    puVar2 = (uint *)((int)param_3 + 0xd);
  }
  return (int)puVar2 - (int)param_3;
}

/* ref: Application::Network::WorkDefinitions::CharaPvP_TypeInfo::vf17 */
uint F_00e78750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xe78750u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    uVar1 = F_00e68370(param_1 + 4,param_3,param_4,puVar3);
    return (int)puVar3 + (uVar1 - (int)param_5);
  case 1: ;
    uVar1 = F_00e68640(param_1 + 8,param_3,param_4,puVar3);
    return (int)puVar3 + (uVar1 - (int)param_5);
  default: ;
    goto switchD_00e78772_caseD_2;
  case 3: ;
    uVar1 = F_00e68370(param_1 + 0x18,param_3,param_4,puVar3);
    return (int)puVar3 + (uVar1 - (int)param_5);
  case 9: ;
    uVar1 = F_00e68640(param_1 + 0x28,param_3,param_4,puVar3);
    return (int)puVar3 + (uVar1 - (int)param_5);
  case 10: ;
    uVar1 = F_00e68640(param_1 + 0x34,param_3,param_4,puVar3);
    return (int)puVar3 + (uVar1 - (int)param_5);
  case 0xb: ;
    uVar1 = F_00e68640(param_1 + 0x40,param_3,param_4,puVar3);
    return (int)puVar3 + (uVar1 - (int)param_5);
  case 0xc: ;
    iVar2 = param_1 + 0x4c;
    break;
  case 0xd: ;
    iVar2 = param_1 + 0x52;
    break;
  case 0xe: ;
    iVar2 = param_1 + 0x58;
  }
  uVar1 = F_00e685e0(iVar2,param_3,param_4,puVar3);
  puVar3 = (uint *)((int)puVar3 + uVar1);
switchD_00e78772_caseD_2: ;
  return (int)puVar3 - (int)param_5;
}

/* ref: Application::Network::WorkDefinitions::CharaPvP_TypeInfo::vf16 */
uint F_00e788d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xe788d0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    uVar1 = F_00e68470(param_1 + 4,param_3,param_4,param_5,param_6,puVar3);
    return (int)puVar3 + (uVar1 - (int)param_7);
  case 1: ;
    uVar1 = F_00e68750(param_1 + 8,param_3,param_4,param_5,param_6,puVar3);
    return (int)puVar3 + (uVar1 - (int)param_7);
  default: ;
    goto switchD_00e788f2_caseD_2;
  case 3: ;
    uVar1 = F_00e68470(param_1 + 0x18,param_3,param_4,param_5,param_6,puVar3);
    return (int)puVar3 + (uVar1 - (int)param_7);
  case 9: ;
    uVar1 = F_00e68750(param_1 + 0x28,param_3,param_4,param_5,param_6,puVar3);
    return (int)puVar3 + (uVar1 - (int)param_7);
  case 10: ;
    uVar1 = F_00e68750(param_1 + 0x34,param_3,param_4,param_5,param_6,puVar3);
    return (int)puVar3 + (uVar1 - (int)param_7);
  case 0xb: ;
    uVar1 = F_00e68750(param_1 + 0x40,param_3,param_4,param_5,param_6,puVar3);
    return (int)puVar3 + (uVar1 - (int)param_7);
  case 0xc: ;
    iVar2 = param_1 + 0x4c;
    break;
  case 0xd: ;
    iVar2 = param_1 + 0x52;
    break;
  case 0xe: ;
    iVar2 = param_1 + 0x58;
  }
  uVar1 = F_00e686a0(iVar2,param_3,param_4,param_5,param_6,puVar3);
  puVar3 = (uint *)((int)puVar3 + uVar1);
switchD_00e788f2_caseD_2: ;
  return (int)puVar3 - (int)param_7;
}

/* ref: Application::Network::WorkDefinitions::CharaPvP_TypeInfo::vf20 */
uint F_00e78ab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe78ab0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint * puVar4;
  
  uVar2 = *param_2;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_1);
  puVar4 = param_2;
  if (uVar2 == uVar1) {
    puVar4 = param_2 + 1;
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0: ;
      uVar2 = F_00e68510(puVar4,param_3 + 4,3);
      return (int)puVar4 + (uVar2 - (int)param_2);
    case 1: ;
      uVar2 = F_00e68800(puVar4,param_3 + 8,3);
      return (int)puVar4 + (uVar2 - (int)param_2);
    case 2: ;
      *(uint *)(param_3 + 0x14) = *puVar4;
      return 8;
    case 3: ;
      uVar2 = F_00e68510(puVar4,param_3 + 0x18,3);
      return (int)puVar4 + (uVar2 - (int)param_2);
    case 4: ;
      *(short *)(param_3 + 0x1c) = (short)*puVar4;
      return 6;
    case 5: ;
      *(short *)(param_3 + 0x1e) = (short)*puVar4;
      return 6;
    case 6: ;
      *(short *)(param_3 + 0x20) = (short)*puVar4;
      return 6;
    case 7: ;
      *(short *)(param_3 + 0x22) = (short)*puVar4;
      return 6;
    case 8: ;
      *(short *)(param_3 + 0x24) = (short)*puVar4;
      return 6;
    case 9: ;
      uVar2 = F_00e68800(puVar4,param_3 + 0x28,3);
      return (int)puVar4 + (uVar2 - (int)param_2);
    case 10: ;
      uVar2 = F_00e68800(puVar4,param_3 + 0x34,3);
      return (int)puVar4 + (uVar2 - (int)param_2);
    case 0xb: ;
      uVar2 = F_00e68800(puVar4,param_3 + 0x40,3);
      return (int)puVar4 + (uVar2 - (int)param_2);
    case 0xc: ;
      iVar3 = param_3 + 0x4c;
      break;
    case 0xd: ;
      iVar3 = param_3 + 0x52;
      break;
    case 0xe: ;
      iVar3 = param_3 + 0x58;
      break;
    default: ;
      goto switchD_00e78ada_default;
    }
    uVar2 = F_00e68f70(puVar4,iVar3,3);
    puVar4 = (uint *)((int)puVar4 + uVar2);
  }
switchD_00e78ada_default: ;
  return (int)puVar4 - (int)param_2;
}

/* ref: FUN_00e78cb0 */
uint F_00e78cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe78cb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x11593ac));
  F_00e710e0(this,param_1);
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::CharaPvP::vf7 */
uint F_00e78cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe78cd0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::CharaPvP::vf19 */
uint F_00e78cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe78cf0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::CharaPvP::vf21 */
uint F_00e78d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe78d10u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::CharaRemake_TypeInfo::vf18 */
uint F_00e78d30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe78d30u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    *puVar3 = *(uint *)(param_1 + 0x24);
    return 8;
  case 7: ;
    *puVar3 = *(uint *)(param_1 + 0x28);
    param_3[2] = *(uint *)(param_1 + 0x2c);
    puVar3 = param_3 + 3;
  }
  return (int)puVar3 - (int)param_3;
}

/* ref: Application::Network::WorkDefinitions::CharaRemake_TypeInfo::vf17 */
uint F_00e78e30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xe78e30u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: Application::Network::WorkDefinitions::CharaRemake_TypeInfo::vf16 */
uint F_00e78e80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xe78e80u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: Application::Network::WorkDefinitions::CharaRemake_TypeInfo::vf20 */
uint F_00e78ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe78ed0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      *(uint *)(param_3 + 0x24) = *puVar3;
      return 8;
    case 7: ;
      *(uint *)(param_3 + 0x28) = *puVar3;
      *(uint *)(param_3 + 0x2c) = param_2[2];
      puVar3 = param_2 + 3;
    }
  }
  return (int)puVar3 - (int)param_2;
}

/* ref: FUN_00e78fe0 */
uint F_00e78fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe78fe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x1159474));
  F_00e75990(this,param_1);
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::CharaRemake::vf7 */
uint F_00e79000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe79000u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::CharaRemake::vf19 */
uint F_00e79020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe79020u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::CharaRemake::vf21 */
uint F_00e79040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe79040u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Hater::vf20 */
byte F_00e79060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe79060u, gen_a0, gen_a1, 0u, 0u);
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
  if (uVar3 == 0) goto LAB_00e79573;
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
  if (pcVar8 == (char *)0x0) goto LAB_00e79573;
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
          if (pcVar4 == pcVar10) goto LAB_00e79440;
          do {
            if (*pcVar4 == '{') {
              iVar5 = iVar5 + 1;
            }
            else if ((*pcVar4 == '}') && (iVar5 = iVar5 + -1, iVar5 == 0)) break;
            pcVar4 = pcVar4 + 1;
          } while (pcVar4 != pcVar10);
        }
        else {
          if (cVar1 != '[') goto LAB_00e792a3;
          cVar1 = pcVar4[1];
          (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4 + 1;
          iVar5 = 1;
          if (cVar1 == '\"') {
LAB_00e7926b: ;
            (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4 + 2;
          }
          else if (cVar1 == '[') {
            iVar5 = 2;
            goto LAB_00e7926b;
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
        if (iVar5 == 1) goto LAB_00e79440;
      }
LAB_00e792a3: ;
      pcVar4 = pcVar4 + 1;
      (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4;
    } while (pcVar4 != (*(char * PTR32 *)(gen_frame + 0x20)));
  }
  pcVar8 = (char *)((int)ppcVar13 - (int)((int)(uintptr_t)(*(char * PTR32 * PTR32 *)(gen_frame + 0x24))) >> 2);
  (*(char * PTR32 *)(gen_frame + 0x20)) = pcVar8;
  if ((int)uVar3 < (int)pcVar8) {
LAB_00e79440: ;
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) != (char * PTR32 *)0x0) {
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)));
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
      return 0;
    }
    goto LAB_00e79573;
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
LAB_00e79426: ;
                    
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
          if (0x3ffffffe < uVar9) goto LAB_00e79426;
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
        goto LAB_00e79440;
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
    goto LAB_00e79573;
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
    goto LAB_00e79573;
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0);
  F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
  pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
  if (pcVar4 == (char *)0x0) {
LAB_00e79506: ;
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,1);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
    ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24));
    if (pcVar4 == (char *)0x0) {
LAB_00e7959f: ;
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
      this[8] = SUB81(uVar14,0);
      goto LAB_00e7959f;
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
      *(int *)(this + 4) = (int)uVar14;
      goto LAB_00e79506;
    }
  }
  if (ppcVar13 != (char * PTR32 *)0x0) {
    F_00406ad0(ppcVar13);
  }
  if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) != (char * PTR32 *)0x0) {
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)));
  }
LAB_00e79573: ;
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ClassWork::vf20 */
byte F_00e795d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe795d0u, gen_a0, gen_a1, 0u, 0u);
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
  if (iVar5 == 0) {
    pcVar4 = (char *)F_00fb9ad0(pcVar7,"\"content\":[");
    (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar4;
    if (pcVar4 != (char *)0x0) {
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
      if (pcVar7 != (char *)0x0) {
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
        while ((*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4, pcVar4 != pcVar7) {
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
              F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x20)),&(*(char * PTR32 *)(gen_frame + 0x34)));
              pcVar4 = (*(char * PTR32 *)(gen_frame + 0x34)) + 1;
              iVar5 = 1;
              if (pcVar4 == pcVar11) goto LAB_00e7999a;
              do {
                if (*pcVar4 == '{') {
                  iVar5 = iVar5 + 1;
                }
                else if ((*pcVar4 == '}') && (iVar5 = iVar5 + -1, iVar5 == 0)) break;
                pcVar4 = pcVar4 + 1;
              } while (pcVar4 != pcVar11);
            }
            else {
              if (cVar1 != '[') goto LAB_00e79803;
              cVar1 = pcVar4[1];
              (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4 + 1;
              iVar5 = 1;
              if (cVar1 == '\"') {
LAB_00e797cb: ;
                (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4 + 2;
              }
              else if (cVar1 == '[') {
                iVar5 = 2;
                goto LAB_00e797cb;
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
            if (iVar5 == 1) goto LAB_00e7999a;
          }
LAB_00e79803: ;
          pcVar4 = pcVar4 + 1;
          (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4;
        }
        pcVar7 = (char *)((int)ppcVar12 - (int)((int)(uintptr_t)(*(char * PTR32 * PTR32 *)(gen_frame + 0x20))) >> 2);
        (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar7;
        if ((int)uVar3 < (int)pcVar7) {
LAB_00e7999a: ;
          if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != (char * PTR32 *)0x0) {
            F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
          }
        }
        else {
          (*(char * PTR32 * PTR32 *)(gen_frame + 0xc)) = (char * PTR32 *)0x0;
          (*(char * PTR32 * PTR32 *)(gen_frame + 0x10)) = (char * PTR32 *)0x0;
          (*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) = (char * PTR32 *)0x0;
          F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0xc)),uVar3);
          cVar1 = *(*(char * PTR32 *)(gen_frame + 0x1c));
          (*(char * PTR32 *)(gen_frame + 0x34)) = (*(char * PTR32 *)(gen_frame + 0x1c));
          ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0xc));
          ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x10));
          ppcVar10 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x14));
          pcVar7 = (*(char * PTR32 *)(gen_frame + 0x1c));
          while ((*(char * PTR32 *)(gen_frame + 0x34)) = pcVar7, cVar1 != ']') {
            if (*pcVar7 == '\"') {
              if ((&(*(char * PTR32 *)(gen_frame + 0x34)) < ppcVar13) && (ppcVar12 <= &(*(char * PTR32 *)(gen_frame + 0x34)))) {
                iVar5 = (int)&(*(char * PTR32 *)(gen_frame + 0x34)) - (int)ppcVar12;
                if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x14))) {
                  uVar8 = (int)ppcVar13 - (int)((int)(uintptr_t)ppcVar12) >> 2;
                  if (0x3ffffffe < uVar8) {
LAB_00e79980: ;
                    
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
                pcVar7 = (*(char * PTR32 *)(gen_frame + 0x34));
                if (ppcVar13 != (char * PTR32 *)0x0) {
                  *ppcVar13 = ppcVar12[iVar5 >> 2];
                }
              }
              else {
                if (ppcVar13 == ppcVar10) {
                  uVar8 = (int)ppcVar13 - (int)((int)(uintptr_t)ppcVar12) >> 2;
                  if (0x3ffffffe < uVar8) goto LAB_00e79980;
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
                goto LAB_00e7999a;
              }
            }
            pcVar7 = pcVar7 + 1;
            cVar1 = *pcVar7;
            (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar7;
          }
          pcVar7 = (char *)((int)ppcVar13 - (int)((int)(uintptr_t)ppcVar12) >> 2);
          if ((int)uVar3 < (int)pcVar7) {
            if (ppcVar12 != (char * PTR32 *)0x0) {
              F_00406ad0(ppcVar12);
            }
            if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != (char * PTR32 *)0x0) {
              F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
              F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
              return 0;
            }
          }
          else {
            if ((*(char * PTR32 *)(gen_frame + 0x30)) == pcVar7) {
              piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
              uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0);
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
                if ((*(char * PTR32 *)(gen_frame + 0x30)) <= pcVar11) {
                  if (ppcVar12 != (char * PTR32 *)0x0) {
                    F_00406ad0(ppcVar12);
                  }
                  if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != (char * PTR32 *)0x0) {
                    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
                    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
                    return 0;
                  }
                  goto LAB_00e799a7;
                }
                uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar11]);
                *(short *)(this + 4) = (short)uVar14;
              }
              piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
              uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,1);
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
                if ((*(char * PTR32 *)(gen_frame + 0x30)) <= pcVar11) {
                  if (ppcVar12 != (char * PTR32 *)0x0) {
                    F_00406ad0(ppcVar12);
                  }
                  if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != (char * PTR32 *)0x0) {
                    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
                    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
                    return 0;
                  }
                  goto LAB_00e799a7;
                }
                uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar11]);
                *(int *)(this + 8) = (int)uVar14;
              }
              piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
              uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,2);
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
                if ((*(char * PTR32 *)(gen_frame + 0x30)) <= pcVar11) {
                  if (ppcVar12 != (char * PTR32 *)0x0) {
                    F_00406ad0(ppcVar12);
                  }
                  if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != (char * PTR32 *)0x0) {
                    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
                    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
                    return 0;
                  }
                  goto LAB_00e799a7;
                }
                pcVar7 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar11];
                iVar5 = 0;
                do {
                  uVar14 = F_00e50570(pcVar7);
                  this[iVar5 + 0xc] = SUB81(uVar14,0);
                  uVar3 = F_00c51da0(pcVar7,0x2c);
                  iVar5 = iVar5 + 1;
                  pcVar7 = (char *)(uVar3 + 2);
                } while (iVar5 < 6);
              }
              if (ppcVar12 != (char * PTR32 *)0x0) {
                F_00406ad0(ppcVar12);
              }
              if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != (char * PTR32 *)0x0) {
                F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
              }
              F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
              return 1;
            }
            if (ppcVar12 != (char * PTR32 *)0x0) {
              F_00406ad0(ppcVar12);
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
LAB_00e799a7: ;
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::LeveWork::vf20 */
byte F_00e79c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe79c10u, gen_a0, gen_a1, 0u, 0u);
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
  if (uVar3 == 0) goto LAB_00e7a25f;
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
  if (pcVar8 == (char *)0x0) goto LAB_00e7a25f;
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
          if (pcVar4 == pcVar10) goto LAB_00e79ff0;
          do {
            if (*pcVar4 == '{') {
              iVar5 = iVar5 + 1;
            }
            else if ((*pcVar4 == '}') && (iVar5 = iVar5 + -1, iVar5 == 0)) break;
            pcVar4 = pcVar4 + 1;
          } while (pcVar4 != pcVar10);
        }
        else {
          if (cVar1 != '[') goto LAB_00e79e53;
          cVar1 = pcVar4[1];
          (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4 + 1;
          iVar5 = 1;
          if (cVar1 == '\"') {
LAB_00e79e1b: ;
            (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4 + 2;
          }
          else if (cVar1 == '[') {
            iVar5 = 2;
            goto LAB_00e79e1b;
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
        if (iVar5 == 1) goto LAB_00e79ff0;
      }
LAB_00e79e53: ;
      pcVar4 = pcVar4 + 1;
      (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4;
    } while (pcVar4 != (*(char * PTR32 *)(gen_frame + 0x20)));
  }
  pcVar8 = (char *)((int)ppcVar13 - (int)((int)(uintptr_t)(*(char * PTR32 * PTR32 *)(gen_frame + 0x24))) >> 2);
  (*(char * PTR32 *)(gen_frame + 0x20)) = pcVar8;
  if ((int)uVar3 < (int)pcVar8) {
LAB_00e79ff0: ;
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) != (char * PTR32 *)0x0) {
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)));
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
      return 0;
    }
    goto LAB_00e7a25f;
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
LAB_00e79fd6: ;
                    
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
          if (0x3ffffffe < uVar9) goto LAB_00e79fd6;
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
        goto LAB_00e79ff0;
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
    goto LAB_00e7a25f;
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
    goto LAB_00e7a25f;
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0);
  F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
  pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
  if (pcVar4 == (char *)0x0) {
LAB_00e7a0bb: ;
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
      if ((*(char * PTR32 *)(gen_frame + 0x20)) <= pcVar10) goto LAB_00e7a240;
      uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[(int)pcVar10]);
      this[6] = SUB81(uVar14,0);
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
      if ((*(char * PTR32 *)(gen_frame + 0x20)) <= pcVar10) goto LAB_00e7a240;
      uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[(int)pcVar10]);
      *(short *)(this + 8) = (short)uVar14;
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
      if ((*(char * PTR32 *)(gen_frame + 0x20)) <= pcVar10) goto LAB_00e7a240;
      uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x24))[(int)pcVar10]);
      *(short *)(this + 10) = (short)uVar14;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,4);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
    ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x24));
    if (pcVar4 == (char *)0x0) {
LAB_00e7a28b: ;
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
      this[0xc] = SUB81(uVar14,0);
      goto LAB_00e7a28b;
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
      *(short *)(this + 4) = (short)uVar14;
      goto LAB_00e7a0bb;
    }
  }
LAB_00e7a240: ;
  if (ppcVar13 != (char * PTR32 *)0x0) {
    F_00406ad0(ppcVar13);
  }
  if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) != (char * PTR32 *)0x0) {
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x24)));
  }
LAB_00e7a25f: ;
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::MonsterNoteCategory::vf20 */
byte F_00e7a2c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe7a2c0u, gen_a0, gen_a1, 0u, 0u);
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
  if (iVar5 != 0) goto LAB_00e7a698;
  pcVar4 = (char *)F_00fb9ad0(pcVar7,"\"content\":[");
  (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar4;
  if (pcVar4 == (char *)0x0) goto LAB_00e7a698;
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
  if (pcVar7 == (char *)0x0) goto LAB_00e7a698;
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
  while ((*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4, pcVar4 != pcVar7) {
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
        F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x20)),&(*(char * PTR32 *)(gen_frame + 0x34)));
        pcVar4 = (*(char * PTR32 *)(gen_frame + 0x34)) + 1;
        iVar5 = 1;
        if (pcVar4 == pcVar11) goto LAB_00e7a68b;
        do {
          if (*pcVar4 == '{') {
            iVar5 = iVar5 + 1;
          }
          else if ((*pcVar4 == '}') && (iVar5 = iVar5 + -1, iVar5 == 0)) break;
          pcVar4 = pcVar4 + 1;
        } while (pcVar4 != pcVar11);
      }
      else {
        if (cVar1 != '[') goto LAB_00e7a4f3;
        cVar1 = pcVar4[1];
        (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4 + 1;
        iVar5 = 1;
        if (cVar1 == '\"') {
LAB_00e7a4bb: ;
          (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4 + 2;
        }
        else if (cVar1 == '[') {
          iVar5 = 2;
          goto LAB_00e7a4bb;
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
      if (iVar5 == 1) goto LAB_00e7a68b;
    }
LAB_00e7a4f3: ;
    pcVar4 = pcVar4 + 1;
    (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4;
  }
  pcVar7 = (char *)((int)ppcVar12 - (int)((int)(uintptr_t)(*(char * PTR32 * PTR32 *)(gen_frame + 0x20))) >> 2);
  (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar7;
  if ((int)uVar3 < (int)pcVar7) {
LAB_00e7a68b: ;
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != (char * PTR32 *)0x0) {
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
    }
    goto LAB_00e7a698;
  }
  (*(char * PTR32 * PTR32 *)(gen_frame + 0xc)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x10)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x14)) = (char * PTR32 *)0x0;
  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0xc)),uVar3);
  cVar1 = *(*(char * PTR32 *)(gen_frame + 0x1c));
  (*(char * PTR32 *)(gen_frame + 0x34)) = (*(char * PTR32 *)(gen_frame + 0x1c));
  ppcVar12 = (*(char * PTR32 * PTR32 *)(gen_frame + 0xc));
  ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x10));
  ppcVar10 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x14));
  pcVar7 = (*(char * PTR32 *)(gen_frame + 0x1c));
  while (cVar1 != ']') {
    if (*pcVar7 == '\"') {
      (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar7;
      if ((&(*(char * PTR32 *)(gen_frame + 0x34)) < ppcVar13) && (ppcVar12 <= &(*(char * PTR32 *)(gen_frame + 0x34)))) {
        iVar5 = (int)&(*(char * PTR32 *)(gen_frame + 0x34)) - (int)ppcVar12;
        if (ppcVar13 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x14))) {
          uVar8 = (int)ppcVar13 - (int)((int)(uintptr_t)ppcVar12) >> 2;
          if (0x3ffffffe < uVar8) {
LAB_00e7a671: ;
                    
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
        pcVar7 = (*(char * PTR32 *)(gen_frame + 0x34));
        if (ppcVar13 != (char * PTR32 *)0x0) {
          *ppcVar13 = ppcVar12[iVar5 >> 2];
        }
      }
      else {
        if (ppcVar13 == ppcVar10) {
          uVar8 = (int)ppcVar13 - (int)((int)(uintptr_t)ppcVar12) >> 2;
          if (0x3ffffffe < uVar8) goto LAB_00e7a671;
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
        goto LAB_00e7a68b;
      }
    }
    pcVar7 = pcVar7 + 1;
    cVar1 = *pcVar7;
    (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar7;
  }
  pcVar7 = (char *)((int)ppcVar13 - (int)((int)(uintptr_t)ppcVar12) >> 2);
  (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar7;
  if ((int)uVar3 < (int)pcVar7) {
    if (ppcVar12 != (char * PTR32 *)0x0) {
      F_00406ad0(ppcVar12);
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != (char * PTR32 *)0x0) {
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
      return 0;
    }
    goto LAB_00e7a698;
  }
  if ((*(char * PTR32 *)(gen_frame + 0x30)) != pcVar7) {
    if (ppcVar12 != (char * PTR32 *)0x0) {
      F_00406ad0(ppcVar12);
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != (char * PTR32 *)0x0) {
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
      return 0;
    }
    goto LAB_00e7a698;
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,0);
  F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
  pcVar7 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
  if (pcVar7 != (char *)0x0) {
    pcVar4 = (char *)0x0;
    if ((*(char * PTR32 *)(gen_frame + 0x34)) != (char *)0x0) {
      do {
        if (pcVar7 == ppcVar12[(int)pcVar4]) break;
        pcVar4 = pcVar4 + 1;
      } while (pcVar4 < (*(char * PTR32 *)(gen_frame + 0x34)));
    }
    if ((*(char * PTR32 *)(gen_frame + 0x30)) <= pcVar4) {
      if (ppcVar12 != (char * PTR32 *)0x0) {
        F_00406ad0(ppcVar12);
      }
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != (char * PTR32 *)0x0) {
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
        F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
        return 0;
      }
      goto LAB_00e7a698;
    }
    pcVar7 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar4];
    iVar5 = 0;
    do {
      uVar14 = F_00e50570(pcVar7);
      this[iVar5 + 4] = SUB81(uVar14,0);
      uVar3 = F_00c51da0(pcVar7,0x2c);
      iVar5 = iVar5 + 1;
      pcVar7 = (char *)(uVar3 + 2);
    } while (iVar5 < 0x28);
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,1);
  F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
  pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
  pcVar7 = (*(char * PTR32 *)(gen_frame + 0x34));
  if (pcVar4 != (char *)0x0) {
    pcVar11 = (char *)0x0;
    if ((*(char * PTR32 *)(gen_frame + 0x34)) != (char *)0x0) {
      do {
        if (pcVar4 == ppcVar12[(int)pcVar11]) break;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < (*(char * PTR32 *)(gen_frame + 0x34)));
    }
    if ((*(char * PTR32 *)(gen_frame + 0x30)) <= pcVar11) {
      if (ppcVar12 != (char * PTR32 *)0x0) {
        F_00406ad0(ppcVar12);
      }
      if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != (char * PTR32 *)0x0) {
        F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
        F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
        return 0;
      }
      goto LAB_00e7a698;
    }
    uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar11]);
    *(ulonglong *)(this + 0x30) = uVar14;
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,2);
  F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
  pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
  if (pcVar4 == (char *)0x0) {
LAB_00e7a8d9: ;
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,3);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
    ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x20));
    if (pcVar4 == (char *)0x0) {
LAB_00e7a942: ;
      if (ppcVar12 != (char * PTR32 *)0x0) {
        F_00406ad0(ppcVar12);
      }
      if (ppcVar13 != (char * PTR32 *)0x0) {
        F_00406ad0(ppcVar13);
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
    if (pcVar11 < (*(char * PTR32 *)(gen_frame + 0x30))) {
      uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar11]);
      *(int *)(this + 0x3c) = (int)uVar14;
      goto LAB_00e7a942;
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
    if (pcVar11 < (*(char * PTR32 *)(gen_frame + 0x30))) {
      uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar11]);
      this[0x38] = SUB81(uVar14,0);
      goto LAB_00e7a8d9;
    }
  }
  if (ppcVar12 != (char * PTR32 *)0x0) {
    F_00406ad0(ppcVar12);
  }
  if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != (char * PTR32 *)0x0) {
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
    return 0;
  }
LAB_00e7a698: ;
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::CharaPvP::vf20 */
byte F_00e7a980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe7a980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  char cVar1;
  code * pcVar2;
  int * piVar3;
  uint uVar4;
  char * pcVar5;
  int iVar6;
  char * pcVar7;
  char * pcVar8;
  char * pcVar9;
  uint uVar10;
  char * pcVar11;
  uint uVar12;
  char * PTR32 * ppcVar13;
  char * PTR32 * ppcVar14;
  char * PTR32 * ppcVar15;
  undefined * pCVar16;
  undefined * pCVar17;
  ulonglong uVar18;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
  pcVar9 = param_1 + 1;
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
  F_00c472af(((char *)(gen_frame + 0x38)),0x40,"\"classid\":%llu",uVar4 & 0xffff,0);
  pcVar5 = ((char *)(gen_frame + 0x38));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  iVar6 = F_00c4b813(pcVar9,((char *)(gen_frame + 0x38)),(gen_size32)(pcVar5 + (-1 - (int)(((char *)(gen_frame + 0x38)) + 1))));
  if (iVar6 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
    return 0;
  }
  uVar4 = F_00fb9ad0(pcVar9,"\"content\":[");
  if (uVar4 == 0) goto LAB_00e7b70c;
  pcVar5 = (char *)(uVar4 + 0xb);
  pcVar11 = param_1;
  do {
    pcVar7 = pcVar11;
    pcVar11 = pcVar7 + 1;
  } while (*pcVar7 != '\0');
  iVar6 = 1;
  for (pcVar11 = pcVar9; pcVar8 = pcVar7 + -1, pcVar11 < pcVar7 + -1; pcVar11 = pcVar11 + 1) {
    if (*pcVar11 == '{') {
      iVar6 = iVar6 + 1;
    }
    else if ((*pcVar11 == '}') && (iVar6 = iVar6 + -1, pcVar8 = pcVar11, iVar6 == 0)) break;
  }
  pcVar9 = (char *)F_00e50750(pcVar9,"\"memberid\":[",pcVar8);
  if (pcVar9 == (char *)0x0) goto LAB_00e7b70c;
  (*(char * PTR32 *)(gen_frame + 0x2c)) = pcVar9 + 0xc;
  pcVar2 = *(gen_code32 *)(*(int *)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 4);
  (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar9;
  piVar3 = ((int *)GEN_TOP((*pcVar2)((*(undefined * PTR32 *)(gen_frame + 0x18)))));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x14))(piVar3);
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x24)) = (char * PTR32 *)0x0;
  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)),uVar4);
  (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar5;
  pcVar11 = (*(char * PTR32 *)(gen_frame + 0x2c));
  ppcVar15 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x20));
  if (pcVar5 != pcVar9) {
    do {
      cVar1 = *pcVar5;
      if (cVar1 == '\"') {
        pcVar5 = pcVar5 + 1;
        (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar5;
        if ((&(*(char * PTR32 *)(gen_frame + 0x34)) < ppcVar15) && ((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) <= &(*(char * PTR32 *)(gen_frame + 0x34)))) {
          iVar6 = (int)&(*(char * PTR32 *)(gen_frame + 0x34)) - (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x1c));
          if (ppcVar15 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x24))) {
            F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)),1);
            ppcVar15 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x20));
          }
          if (ppcVar15 != (char * PTR32 *)0x0) {
            *ppcVar15 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c))[iVar6 >> 2];
          }
        }
        else {
          if (ppcVar15 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x24))) {
            F_00e693e0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)),1);
            ppcVar15 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x20));
          }
          if (ppcVar15 != (char * PTR32 *)0x0) {
            *ppcVar15 = pcVar5;
          }
        }
        ppcVar15 = ppcVar15 + 1;
        (*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) = ppcVar15;
        pcVar5 = (char *)F_00c51da0(pcVar5,0x22);
        pcVar11 = (*(char * PTR32 *)(gen_frame + 0x2c));
      }
      else {
        if (cVar1 == '{') {
          (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar5;
          F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)),&(*(char * PTR32 *)(gen_frame + 0x34)));
          pcVar5 = (*(char * PTR32 *)(gen_frame + 0x34)) + 1;
          iVar6 = 1;
          if (pcVar5 == pcVar11) goto LAB_00e7b6fc;
          do {
            if (*pcVar5 == '{') {
              iVar6 = iVar6 + 1;
            }
            else if ((*pcVar5 == '}') && (iVar6 = iVar6 + -1, iVar6 == 0)) break;
            pcVar5 = pcVar5 + 1;
          } while (pcVar5 != pcVar11);
        }
        else {
          if (cVar1 != '[') goto LAB_00e7abc3;
          cVar1 = pcVar5[1];
          (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar5 + 1;
          iVar6 = 1;
          if (cVar1 == '\"') {
LAB_00e7ab8b: ;
            (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar5 + 2;
          }
          else if (cVar1 == '[') {
            iVar6 = 2;
            goto LAB_00e7ab8b;
          }
          F_00e695d0(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)),&(*(char * PTR32 *)(gen_frame + 0x34)));
          for (pcVar5 = (*(char * PTR32 *)(gen_frame + 0x34)); pcVar5 != pcVar11; pcVar5 = pcVar5 + 1) {
            if (*pcVar5 == '[') {
              iVar6 = iVar6 + 1;
            }
            else if ((*pcVar5 == ']') && (iVar6 = iVar6 + -1, iVar6 == 0)) break;
          }
        }
        ppcVar15 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x20));
        if (iVar6 == 1) goto LAB_00e7b6fc;
      }
LAB_00e7abc3: ;
      pcVar5 = pcVar5 + 1;
      (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar5;
    } while (pcVar5 != (*(char * PTR32 *)(gen_frame + 0x30)));
  }
  pcVar9 = (char *)((int)ppcVar15 - (int)((int)(uintptr_t)(*(char * PTR32 * PTR32 *)(gen_frame + 0x1c))) >> 2);
  (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar9;
  if ((int)uVar4 < (int)pcVar9) {
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) != (char * PTR32 *)0x0) {
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)));
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
      return 0;
    }
    goto LAB_00e7b70c;
  }
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0xc)) = (char * PTR32 *)0x0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x10)) = (char * PTR32 *)0x0;
  F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x8)),uVar4);
  cVar1 = *(*(char * PTR32 *)(gen_frame + 0x2c));
  (*(char * PTR32 *)(gen_frame + 0x30)) = (*(char * PTR32 *)(gen_frame + 0x2c));
  ppcVar15 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x8));
  ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0xc));
  ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x10));
  pCVar16 = (*(undefined * PTR32 *)(gen_frame + 0x18));
  pcVar9 = (*(char * PTR32 *)(gen_frame + 0x2c));
  while ((*(undefined * PTR32 *)(gen_frame + 0x18)) = pCVar16, cVar1 != ']') {
    if (*pcVar9 == '\"') {
      (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar9;
      if ((&(*(char * PTR32 *)(gen_frame + 0x30)) < ppcVar14) && (ppcVar15 <= &(*(char * PTR32 *)(gen_frame + 0x30)))) {
        iVar6 = (int)&(*(char * PTR32 *)(gen_frame + 0x30)) - (int)ppcVar15;
        if (ppcVar14 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x10))) {
          uVar10 = (int)ppcVar14 - (int)((int)(uintptr_t)ppcVar15) >> 2;
          if (0x3ffffffe < uVar10) {
LAB_00e7ad67: ;
                    
            F_00c4579a("vector<T> too long");
          }
          uVar10 = uVar10 + 1;
          uVar12 = (int)(*(char * PTR32 * PTR32 *)(gen_frame + 0x10)) - (int)((int)(uintptr_t)ppcVar15) >> 2;
          if (uVar12 < uVar10) {
            if (0x3fffffff - (uVar12 >> 1) < uVar12) {
              uVar12 = 0;
            }
            else {
              uVar12 = uVar12 + (uVar12 >> 1);
            }
            if (uVar12 < uVar10) {
              uVar12 = uVar10;
            }
            F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x8)),uVar12);
            ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0xc));
            ppcVar15 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x8));
          }
        }
        pcVar9 = (*(char * PTR32 *)(gen_frame + 0x30));
        if (ppcVar14 != (char * PTR32 *)0x0) {
          *ppcVar14 = ppcVar15[iVar6 >> 2];
        }
      }
      else {
        if (ppcVar14 == ppcVar13) {
          uVar10 = (int)ppcVar14 - (int)((int)(uintptr_t)ppcVar15) >> 2;
          if (0x3ffffffe < uVar10) goto LAB_00e7ad67;
          uVar10 = uVar10 + 1;
          uVar12 = (int)ppcVar13 - (int)((int)(uintptr_t)ppcVar15) >> 2;
          if (uVar12 < uVar10) {
            if (0x3fffffff - (uVar12 >> 1) < uVar12) {
              uVar12 = 0;
            }
            else {
              uVar12 = uVar12 + (uVar12 >> 1);
            }
            if (uVar12 < uVar10) {
              uVar12 = uVar10;
            }
            F_00e69310(&(*(char * PTR32 * PTR32 *)(gen_frame + 0x8)),uVar12);
            ppcVar14 = (*(char * PTR32 * PTR32 *)(gen_frame + 0xc));
            ppcVar15 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x8));
          }
        }
        if (ppcVar14 != (char * PTR32 *)0x0) {
          *ppcVar14 = pcVar9;
        }
      }
      ppcVar14 = ppcVar14 + 1;
      (*(char * PTR32 * PTR32 *)(gen_frame + 0xc)) = ppcVar14;
      pcVar9 = (char *)F_00c51da0(pcVar9 + 1,0x22);
      ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x10));
      if (pcVar9 == (char *)0x0) {
        if (ppcVar15 != (char * PTR32 *)0x0) {
          F_00406ad0(ppcVar15);
        }
        if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) != (char * PTR32 *)0x0) {
          F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)));
          F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
          return 0;
        }
        goto LAB_00e7b70c;
      }
    }
    pcVar9 = pcVar9 + 1;
    cVar1 = *pcVar9;
    (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar9;
    pCVar16 = (*(undefined * PTR32 *)(gen_frame + 0x18));
  }
  pcVar9 = (char *)((int)ppcVar14 - (int)((int)(uintptr_t)ppcVar15) >> 2);
  (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar9;
  if ((int)uVar4 < (int)pcVar9) {
    if (ppcVar15 != (char * PTR32 *)0x0) {
      F_00406ad0(ppcVar15);
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) != (char * PTR32 *)0x0) {
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)));
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
      return 0;
    }
    goto LAB_00e7b70c;
  }
  if ((*(char * PTR32 *)(gen_frame + 0x34)) != pcVar9) {
    if (ppcVar15 != (char * PTR32 *)0x0) {
      F_00406ad0(ppcVar15);
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) != (char * PTR32 *)0x0) {
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)));
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
      return 0;
    }
    goto LAB_00e7b70c;
  }
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)pCVar16 + 4))(pCVar16)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0);
  F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
  pcVar5 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x2c)),((char *)(gen_frame + 0x38)));
  if (pcVar5 == (char *)0x0) {
LAB_00e7ae5e: ;
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)pCVar16 + 4))(pCVar16)));
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,1);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
    pcVar9 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x2c)),((char *)(gen_frame + 0x38)));
    if (pcVar9 != (char *)0x0) {
      pcVar5 = (char *)0x0;
      if ((*(char * PTR32 *)(gen_frame + 0x30)) != (char *)0x0) {
        do {
          if (pcVar9 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x8))[(int)pcVar5]) break;
          pcVar5 = pcVar5 + 1;
        } while (pcVar5 < (*(char * PTR32 *)(gen_frame + 0x30)));
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar5) {
        if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) != (char * PTR32 *)0x0) {
          F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x8)));
        }
        if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) != (char * PTR32 *)0x0) {
          F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)));
          F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
          return 0;
        }
        goto LAB_00e7b70c;
      }
      pcVar9 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c))[(int)pcVar5];
      pCVar16 = pCVar16 + 8;
      iVar6 = 3;
      do {
        uVar18 = F_00e50570(pcVar9);
        *(int *)pCVar16 = (int)uVar18;
        uVar4 = F_00c51da0(pcVar9,0x2c);
        pCVar16 = pCVar16 + 4;
        iVar6 = iVar6 + -1;
        pcVar9 = (char *)(uVar4 + 2);
      } while (iVar6 != 0);
    }
    pCVar16 = (*(undefined * PTR32 *)(gen_frame + 0x18));
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 4))((*(undefined * PTR32 *)(gen_frame + 0x18)))));
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,2);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
    pcVar9 = (*(char * PTR32 *)(gen_frame + 0x2c));
    pcVar5 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x2c)),((char *)(gen_frame + 0x38)));
    if (pcVar5 != (char *)0x0) {
      pcVar11 = (char *)0x0;
      if ((*(char * PTR32 *)(gen_frame + 0x30)) != (char *)0x0) {
        do {
          if (pcVar5 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x8))[(int)pcVar11]) break;
          pcVar11 = pcVar11 + 1;
        } while (pcVar11 < (*(char * PTR32 *)(gen_frame + 0x30)));
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar11) {
        if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) != (char * PTR32 *)0x0) {
          F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x8)));
        }
        if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) != (char * PTR32 *)0x0) {
          F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)));
          F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
          return 0;
        }
        goto LAB_00e7b70c;
      }
      uVar18 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c))[(int)pcVar11]);
      *(int *)(pCVar16 + 0x14) = (int)uVar18;
    }
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)pCVar16 + 4))(pCVar16)));
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,3);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
    pcVar9 = (char *)F_00fb9ad0(pcVar9,((char *)(gen_frame + 0x38)));
    if (pcVar9 != (char *)0x0) {
      pcVar5 = (char *)0x0;
      if ((*(char * PTR32 *)(gen_frame + 0x30)) != (char *)0x0) {
        pcVar5 = (char *)0x0;
        do {
          if (pcVar9 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x8))[(int)pcVar5]) break;
          pcVar5 = pcVar5 + 1;
        } while (pcVar5 < (*(char * PTR32 *)(gen_frame + 0x30)));
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar5) {
        if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) != (char * PTR32 *)0x0) {
          F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x8)));
        }
        if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) != (char * PTR32 *)0x0) {
          F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)));
          F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
          return 0;
        }
        goto LAB_00e7b70c;
      }
      pcVar9 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c))[(int)pcVar5];
      iVar6 = 0;
      do {
        uVar18 = F_00e50570(pcVar9);
        pCVar16[iVar6 + 0x18] = SUB81(uVar18,0);
        uVar4 = F_00c51da0(pcVar9,0x2c);
        iVar6 = iVar6 + 1;
        pcVar9 = (char *)(uVar4 + 2);
      } while (iVar6 < 3);
    }
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)pCVar16 + 4))(pCVar16)));
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,4);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
    pcVar5 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x2c)),((char *)(gen_frame + 0x38)));
    pcVar9 = (*(char * PTR32 *)(gen_frame + 0x30));
    ppcVar15 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x8));
    if (pcVar5 != (char *)0x0) {
      pcVar11 = (char *)0x0;
      if ((*(char * PTR32 *)(gen_frame + 0x30)) != (char *)0x0) {
        do {
          if (pcVar5 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x8))[(int)pcVar11]) break;
          pcVar11 = pcVar11 + 1;
        } while (pcVar11 < (*(char * PTR32 *)(gen_frame + 0x30)));
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar11) {
        if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) != (char * PTR32 *)0x0) {
          F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x8)));
        }
        if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) != (char * PTR32 *)0x0) {
          F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)));
          F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
          return 0;
        }
        goto LAB_00e7b70c;
      }
      uVar18 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c))[(int)pcVar11]);
      *(short *)(pCVar16 + 0x1c) = (short)uVar18;
    }
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)pCVar16 + 4))(pCVar16)));
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,5);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
    pcVar5 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x2c)),((char *)(gen_frame + 0x38)));
    if (pcVar5 != (char *)0x0) {
      pcVar11 = (char *)0x0;
      if (pcVar9 != (char *)0x0) {
        do {
          if (pcVar5 == ppcVar15[(int)pcVar11]) break;
          pcVar11 = pcVar11 + 1;
        } while (pcVar11 < pcVar9);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar11) goto LAB_00e7b290;
      uVar18 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c))[(int)pcVar11]);
      *(short *)(pCVar16 + 0x1e) = (short)uVar18;
    }
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)pCVar16 + 4))(pCVar16)));
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,6);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
    pcVar5 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x2c)),((char *)(gen_frame + 0x38)));
    if (pcVar5 != (char *)0x0) {
      pcVar11 = (char *)0x0;
      if (pcVar9 != (char *)0x0) {
        do {
          if (pcVar5 == ppcVar15[(int)pcVar11]) break;
          pcVar11 = pcVar11 + 1;
        } while (pcVar11 < pcVar9);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar11) goto LAB_00e7b290;
      uVar18 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c))[(int)pcVar11]);
      *(short *)(pCVar16 + 0x20) = (short)uVar18;
    }
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)pCVar16 + 4))(pCVar16)));
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,7);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
    pcVar5 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x2c)),((char *)(gen_frame + 0x38)));
    if (pcVar5 != (char *)0x0) {
      pcVar11 = (char *)0x0;
      if (pcVar9 != (char *)0x0) {
        do {
          if (pcVar5 == ppcVar15[(int)pcVar11]) break;
          pcVar11 = pcVar11 + 1;
        } while (pcVar11 < pcVar9);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar11) goto LAB_00e7b290;
      uVar18 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c))[(int)pcVar11]);
      *(short *)(pCVar16 + 0x22) = (short)uVar18;
    }
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)pCVar16 + 4))(pCVar16)));
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,8);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
    pcVar5 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x2c)),((char *)(gen_frame + 0x38)));
    if (pcVar5 != (char *)0x0) {
      pcVar11 = (char *)0x0;
      if (pcVar9 != (char *)0x0) {
        do {
          if (pcVar5 == ppcVar15[(int)pcVar11]) break;
          pcVar11 = pcVar11 + 1;
        } while (pcVar11 < pcVar9);
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar11) goto LAB_00e7b290;
      uVar18 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c))[(int)pcVar11]);
      *(short *)(pCVar16 + 0x24) = (short)uVar18;
    }
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)pCVar16 + 4))(pCVar16)));
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,9);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
    pcVar9 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x2c)),((char *)(gen_frame + 0x38)));
    if (pcVar9 != (char *)0x0) {
      pcVar5 = (char *)0x0;
      if ((*(char * PTR32 *)(gen_frame + 0x30)) != (char *)0x0) {
        do {
          if (pcVar9 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x8))[(int)pcVar5]) break;
          pcVar5 = pcVar5 + 1;
        } while (pcVar5 < (*(char * PTR32 *)(gen_frame + 0x30)));
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar5) {
        if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) != (char * PTR32 *)0x0) {
          F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x8)));
        }
        if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) != (char * PTR32 *)0x0) {
          F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)));
          F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
          return 0;
        }
        goto LAB_00e7b70c;
      }
      pcVar9 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c))[(int)pcVar5];
      pCVar16 = pCVar16 + 0x28;
      iVar6 = 3;
      do {
        uVar18 = F_00e50570(pcVar9);
        *(int *)pCVar16 = (int)uVar18;
        uVar4 = F_00c51da0(pcVar9,0x2c);
        pCVar16 = pCVar16 + 4;
        iVar6 = iVar6 + -1;
        pcVar9 = (char *)(uVar4 + 2);
      } while (iVar6 != 0);
    }
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 4))((*(undefined * PTR32 *)(gen_frame + 0x18)))));
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,10);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
    pcVar9 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x2c)),((char *)(gen_frame + 0x38)));
    if (pcVar9 != (char *)0x0) {
      pcVar5 = (char *)0x0;
      if ((*(char * PTR32 *)(gen_frame + 0x30)) != (char *)0x0) {
        do {
          if (pcVar9 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x8))[(int)pcVar5]) break;
          pcVar5 = pcVar5 + 1;
        } while (pcVar5 < (*(char * PTR32 *)(gen_frame + 0x30)));
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar5) {
        if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) != (char * PTR32 *)0x0) {
          F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x8)));
        }
        if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) != (char * PTR32 *)0x0) {
          F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)));
          F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
          return 0;
        }
        goto LAB_00e7b70c;
      }
      pcVar9 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c))[(int)pcVar5];
      pCVar16 = (*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x34;
      iVar6 = 3;
      do {
        uVar18 = F_00e50570(pcVar9);
        *(int *)pCVar16 = (int)uVar18;
        uVar4 = F_00c51da0(pcVar9,0x2c);
        pCVar16 = pCVar16 + 4;
        iVar6 = iVar6 + -1;
        pcVar9 = (char *)(uVar4 + 2);
      } while (iVar6 != 0);
    }
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 4))((*(undefined * PTR32 *)(gen_frame + 0x18)))));
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0xb);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
    pcVar9 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x2c)),((char *)(gen_frame + 0x38)));
    if (pcVar9 != (char *)0x0) {
      pcVar5 = (char *)0x0;
      if ((*(char * PTR32 *)(gen_frame + 0x30)) != (char *)0x0) {
        do {
          if (pcVar9 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x8))[(int)pcVar5]) break;
          pcVar5 = pcVar5 + 1;
        } while (pcVar5 < (*(char * PTR32 *)(gen_frame + 0x30)));
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar5) {
        if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) != (char * PTR32 *)0x0) {
          F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x8)));
        }
        if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) != (char * PTR32 *)0x0) {
          F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)));
          F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
          return 0;
        }
        goto LAB_00e7b70c;
      }
      pcVar9 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c))[(int)pcVar5];
      pCVar16 = (*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x40;
      iVar6 = 3;
      do {
        uVar18 = F_00e50570(pcVar9);
        *(int *)pCVar16 = (int)uVar18;
        uVar4 = F_00c51da0(pcVar9,0x2c);
        pCVar16 = pCVar16 + 4;
        iVar6 = iVar6 + -1;
        pcVar9 = (char *)(uVar4 + 2);
      } while (iVar6 != 0);
    }
    pCVar16 = (*(undefined * PTR32 *)(gen_frame + 0x18));
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 4))((*(undefined * PTR32 *)(gen_frame + 0x18)))));
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0xc);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
    pcVar9 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x2c)),((char *)(gen_frame + 0x38)));
    if (pcVar9 != (char *)0x0) {
      pcVar5 = (char *)0x0;
      if ((*(char * PTR32 *)(gen_frame + 0x30)) != (char *)0x0) {
        do {
          if (pcVar9 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x8))[(int)pcVar5]) break;
          pcVar5 = pcVar5 + 1;
        } while (pcVar5 < (*(char * PTR32 *)(gen_frame + 0x30)));
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar5) {
        if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) != (char * PTR32 *)0x0) {
          F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x8)));
        }
        if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) != (char * PTR32 *)0x0) {
          F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)));
          F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
          return 0;
        }
        goto LAB_00e7b70c;
      }
      pcVar9 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c))[(int)pcVar5];
      pCVar17 = (*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x4c;
      iVar6 = 3;
      do {
        uVar18 = F_00e50570(pcVar9);
        *(short *)pCVar17 = (short)uVar18;
        uVar4 = F_00c51da0(pcVar9,0x2c);
        pCVar17 = pCVar17 + 2;
        iVar6 = iVar6 + -1;
        pcVar9 = (char *)(uVar4 + 2);
        pCVar16 = (*(undefined * PTR32 *)(gen_frame + 0x18));
      } while (iVar6 != 0);
    }
    ppcVar15 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x8));
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)pCVar16 + 4))(pCVar16)));
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0xd);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
    pcVar9 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x2c)),((char *)(gen_frame + 0x38)));
    if (pcVar9 != (char *)0x0) {
      pcVar5 = (char *)0x0;
      if ((*(char * PTR32 *)(gen_frame + 0x30)) != (char *)0x0) {
        do {
          if (pcVar9 == ppcVar15[(int)pcVar5]) break;
          pcVar5 = pcVar5 + 1;
        } while (pcVar5 < (*(char * PTR32 *)(gen_frame + 0x30)));
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar5) {
        if (ppcVar15 != (char * PTR32 *)0x0) {
          F_00406ad0(ppcVar15);
        }
        if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) != (char * PTR32 *)0x0) {
          F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)));
          F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
          return 0;
        }
        goto LAB_00e7b70c;
      }
      pcVar9 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c))[(int)pcVar5];
      pCVar16 = (*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x52;
      iVar6 = 3;
      do {
        uVar18 = F_00e50570(pcVar9);
        *(short *)pCVar16 = (short)uVar18;
        uVar4 = F_00c51da0(pcVar9,0x2c);
        pCVar16 = pCVar16 + 2;
        iVar6 = iVar6 + -1;
        pcVar9 = (char *)(uVar4 + 2);
      } while (iVar6 != 0);
    }
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 4))((*(undefined * PTR32 *)(gen_frame + 0x18)))));
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0xe);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar4);
    pcVar9 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x2c)),((char *)(gen_frame + 0x38)));
    if (pcVar9 != (char *)0x0) {
      pcVar5 = (char *)0x0;
      if ((*(char * PTR32 *)(gen_frame + 0x30)) != (char *)0x0) {
        pcVar5 = (char *)0x0;
        do {
          if (pcVar9 == (*(char * PTR32 * PTR32 *)(gen_frame + 0x8))[(int)pcVar5]) break;
          pcVar5 = pcVar5 + 1;
        } while (pcVar5 < (*(char * PTR32 *)(gen_frame + 0x30)));
      }
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar5) {
        if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) != (char * PTR32 *)0x0) {
          F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x8)));
        }
LAB_00e7b6fc: ;
        if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) != (char * PTR32 *)0x0) {
          F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)));
        }
        goto LAB_00e7b70c;
      }
      pcVar9 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c))[(int)pcVar5];
      pCVar16 = (*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x58;
      iVar6 = 3;
      do {
        uVar18 = F_00e50570(pcVar9);
        *(short *)pCVar16 = (short)uVar18;
        uVar4 = F_00c51da0(pcVar9,0x2c);
        pCVar16 = pCVar16 + 2;
        iVar6 = iVar6 + -1;
        pcVar9 = (char *)(uVar4 + 2);
      } while (iVar6 != 0);
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) != (char * PTR32 *)0x0) {
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x8)));
    }
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) != (char * PTR32 *)0x0) {
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)));
    }
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
    return 1;
  }
  pcVar11 = (char *)0x0;
  if (pcVar9 != (char *)0x0) {
    do {
      if (pcVar5 == ppcVar15[(int)pcVar11]) break;
      pcVar11 = pcVar11 + 1;
    } while (pcVar11 < pcVar9);
  }
  if (pcVar11 < (*(char * PTR32 *)(gen_frame + 0x34))) {
    pcVar9 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x1c))[(int)pcVar11];
    iVar6 = 0;
    do {
      uVar18 = F_00e50570(pcVar9);
      pCVar16[iVar6 + 4] = SUB81(uVar18,0);
      uVar4 = F_00c51da0(pcVar9,0x2c);
      iVar6 = iVar6 + 1;
      pcVar9 = (char *)(uVar4 + 2);
    } while (iVar6 < 3);
    goto LAB_00e7ae5e;
  }
LAB_00e7b290: ;
  if (ppcVar15 != (char * PTR32 *)0x0) {
    F_00406ad0(ppcVar15);
  }
  if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)) != (char * PTR32 *)0x0) {
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x1c)));
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
    return 0;
  }
LAB_00e7b70c: ;
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::CharaRemake::vf20 */
byte F_00e7b790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe7b790u, gen_a0, gen_a1, 0u, 0u);
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
  if (iVar5 != 0) goto LAB_00e7bb68;
  pcVar4 = (char *)F_00fb9ad0(pcVar7,"\"content\":[");
  (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar4;
  if (pcVar4 == (char *)0x0) goto LAB_00e7bb68;
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
  if (pcVar7 == (char *)0x0) goto LAB_00e7bb68;
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
        if (pcVar4 == pcVar11) goto LAB_00e7bb5b;
        do {
          if (*pcVar4 == '{') {
            iVar5 = iVar5 + 1;
          }
          else if ((*pcVar4 == '}') && (iVar5 = iVar5 + -1, iVar5 == 0)) break;
          pcVar4 = pcVar4 + 1;
        } while (pcVar4 != pcVar11);
      }
      else {
        if (cVar1 != '[') goto LAB_00e7b9c3;
        cVar1 = pcVar4[1];
        (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4 + 1;
        iVar5 = 1;
        if (cVar1 == '\"') {
LAB_00e7b98b: ;
          (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4 + 2;
        }
        else if (cVar1 == '[') {
          iVar5 = 2;
          goto LAB_00e7b98b;
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
      if (iVar5 == 1) goto LAB_00e7bb5b;
    }
LAB_00e7b9c3: ;
    pcVar4 = pcVar4 + 1;
    (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar4;
  }
  pcVar7 = (char *)((int)ppcVar12 - (int)((int)(uintptr_t)(*(char * PTR32 * PTR32 *)(gen_frame + 0x20))) >> 2);
  (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar7;
  if ((int)uVar3 < (int)pcVar7) {
LAB_00e7bb5b: ;
    if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != (char * PTR32 *)0x0) {
      F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
    }
    goto LAB_00e7bb68;
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
LAB_00e7bb41: ;
                    
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
          if (0x3ffffffe < uVar8) goto LAB_00e7bb41;
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
        goto LAB_00e7bb5b;
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
    goto LAB_00e7bb68;
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
    goto LAB_00e7bb68;
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
      goto LAB_00e7bb68;
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
      goto LAB_00e7bb68;
    }
    uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar11]);
    this[0x1e] = SUB81(uVar14,0);
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,2);
  F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
  pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
  if (pcVar4 == (char *)0x0) {
LAB_00e7bd9f: ;
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
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar11) goto LAB_00e7bd55;
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
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar11) goto LAB_00e7bd55;
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
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar11) goto LAB_00e7bd55;
      uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar11]);
      this[0x22] = SUB81(uVar14,0);
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,6);
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
      if ((*(char * PTR32 *)(gen_frame + 0x34)) <= pcVar11) goto LAB_00e7bd55;
      uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar11]);
      *(int *)(this + 0x24) = (int)uVar14;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,7);
    F_00c472af(((char *)(gen_frame + 0x38)),0x40,&REFG(undefined, 0x1158ad8),uVar3);
    pcVar4 = (char *)F_00fb9ad0((*(char * PTR32 *)(gen_frame + 0x1c)),((char *)(gen_frame + 0x38)));
    ppcVar13 = (*(char * PTR32 * PTR32 *)(gen_frame + 0x20));
    if (pcVar4 == (char *)0x0) {
LAB_00e7bfa1: ;
      if (ppcVar12 != (char * PTR32 *)0x0) {
        F_00406ad0(ppcVar12);
      }
      if (ppcVar13 != (char * PTR32 *)0x0) {
        F_00406ad0(ppcVar13);
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
      uVar14 = F_00e50570((*(char * PTR32 * PTR32 *)(gen_frame + 0x20))[(int)pcVar11]);
      *(ulonglong *)(this + 0x28) = uVar14;
      goto LAB_00e7bfa1;
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
      goto LAB_00e7bd9f;
    }
  }
LAB_00e7bd55: ;
  if (ppcVar12 != (char * PTR32 *)0x0) {
    F_00406ad0(ppcVar12);
  }
  if ((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)) != (char * PTR32 *)0x0) {
    F_00406ad0((*(char * PTR32 * PTR32 *)(gen_frame + 0x20)));
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
    return 0;
  }
LAB_00e7bb68: ;
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Hater::vf26 */
byte F_00e7bfd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe7bfd0u, gen_a0, gen_a1, gen_a2, 0u);
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
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 4),0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[8],0);
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

/* ref: Application::Network::WorkDefinitions::Hater::vf12 */
byte F_00e7c170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe7c170u, gen_a0, gen_a1, 0u, 0u);
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
  F_00e69490(param_1,"\"datatype\":\"UInt32\",",0x14);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 4),0);
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
  F_00e69490(param_1,"\"datatype\":\"UInt8\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[8],0);
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

/* ref: Application::Network::WorkDefinitions::ClassWork::vf26 */
byte F_00e7c560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe7c560u, gen_a0, gen_a1, gen_a2, 0u);
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
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)*(ushort *)(this + 4),0);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 8),0);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
  iVar9 = 0;
  do {
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\",",(uint)(byte)this[iVar9 + 0xc],0);
    pcVar5 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
    iVar9 = iVar9 + 1;
  } while (iVar9 < 6);
  uVar2 = param_1[4];
  uVar4 = uVar2 - 1;
  if (uVar2 < uVar4) {
                    
    F_00c457e7("invalid string position");
  }
  if (uVar2 - uVar4 != 0) {
    puVar8 = param_1;
    puVar7 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar7 = (undefined4 *)*param_1;
      puVar8 = (undefined4 *)*param_1;
    }
    F_00c46e20((int)puVar8 + uVar4,(int)puVar7 + uVar2,(uVar2 - uVar4) + -1);
    iVar9 = param_1[4];
    param_1[4] = iVar9 + -1;
    puVar7 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar7 = (undefined4 *)*param_1;
    }
    *(undefined1 *)((int)puVar7 + iVar9 + -1) = 0;
  }
  F_00e69490(param_1,&REFG(undefined, 0x1158b08),2);
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

/* ref: Application::Network::WorkDefinitions::ClassWork::vf12 */
byte F_00e7c820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe7c820u, gen_a0, gen_a1, 0u, 0u);
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
  F_00e69490(param_1,"\"datatype\":\"UInt16\",",0x14);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)*(ushort *)(this + 4),0);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
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
  F_00e69490(param_1,"\"datatype\":\"UInt32\",",0x14);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 8),0);
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
  F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
  iVar9 = 0;
  do {
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\",",(uint)(byte)this[iVar9 + 0xc],0);
    pcVar5 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
    iVar9 = iVar9 + 1;
  } while (iVar9 < 6);
  uVar2 = param_1[4];
  uVar4 = uVar2 - 1;
  if (uVar2 < uVar4) {
                    
    F_00c457e7("invalid string position");
  }
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
  F_00e69490(param_1,&REFG(undefined, 0x1158b54),1);
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  uVar2 = param_1[4];
  uVar4 = uVar2 - 1;
  if (uVar4 <= uVar2) {
    if (uVar2 - uVar4 != 0) {
      puVar8 = param_1;
      puVar7 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar7 = (undefined4 *)*param_1;
        puVar8 = (undefined4 *)*param_1;
      }
      F_00c46e20((int)puVar8 + uVar4,(int)puVar7 + uVar2,(uVar2 - uVar4) + -1);
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

/* ref: Application::Network::WorkDefinitions::LeveWork::vf26 */
byte F_00e7ce70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe7ce70u, gen_a0, gen_a1, gen_a2, 0u);
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
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)*(ushort *)(this + 4),0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[6],0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)*(ushort *)(this + 8),0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)*(ushort *)(this + 10),0);
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[0xc],0);
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

/* ref: Application::Network::WorkDefinitions::LeveWork::vf12 */
byte F_00e7d0e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe7d0e0u, gen_a0, gen_a1, 0u, 0u);
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
  F_00e69490(param_1,"\"datatype\":\"UInt16\",",0x14);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)*(ushort *)(this + 4),0);
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
  F_00e69490(param_1,"\"datatype\":\"UInt8\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[6],0);
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
  F_00e69490(param_1,"\"datatype\":\"UInt16\",",0x14);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)*(ushort *)(this + 8),0);
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
  F_00e69490(param_1,"\"datatype\":\"UInt16\",",0x14);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)*(ushort *)(this + 10),0);
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
  F_00e69490(param_1,"\"datatype\":\"UInt8\",",0x13);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[0xc],0);
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

/* ref: Application::Network::WorkDefinitions::MonsterNoteCategory::vf26 */
byte F_00e7d920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe7d920u, gen_a0, gen_a1, gen_a2, 0u);
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
  } while (iVar9 < 0x28);
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
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 0x30),*(undefined4 *)(this + 0x34));
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[0x38],0);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 0x3c),0);
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

/* ref: Application::Network::WorkDefinitions::MonsterNoteCategory::vf12 */
byte F_00e7dc30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe7dc30u, gen_a0, gen_a1, 0u, 0u);
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
  } while (iVar9 < 0x28);
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
  F_00e69490(param_1,"\"datatype\":\"UInt64\",",0x14);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 0x30),*(undefined4 *)(this + 0x34));
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
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)(byte)this[0x38],0);
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
  F_00e69490(param_1,"\"datatype\":\"UInt32\",",0x14);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 0x3c),0);
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

/* ref: Application::Network::WorkDefinitions::CharaPvP::vf26 */
byte F_00e7e3f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe7e3f0u, gen_a0, gen_a1, gen_a2, 0u);
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
  int iVar10;
  undefined * pCVar11;
  
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
  iVar10 = 0;
  do {
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\",",(uint)(byte)this[iVar10 + 4],0);
    pcVar5 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
    iVar10 = iVar10 + 1;
  } while (iVar10 < 3);
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
    iVar10 = param_1[4];
    param_1[4] = iVar10 + -1;
    puVar7 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar7 = (undefined4 *)*param_1;
    }
    *(undefined1 *)((int)puVar7 + iVar10 + -1) = 0;
  }
  F_00e69490(param_1,&REFG(undefined, 0x1158b08),2);
  F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
  pCVar11 = this + 8;
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x3;
  do {
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\",",*(undefined4 *)pCVar11,0);
    pcVar5 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
    pCVar11 = pCVar11 + 4;
    (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + -1);
  } while ((*(undefined4 * PTR32 *)(gen_frame + 0x4)) != (undefined4 *)0x0);
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
    iVar10 = param_1[4];
    param_1[4] = iVar10 + -1;
    puVar7 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar7 = (undefined4 *)*param_1;
    }
    *(undefined1 *)((int)puVar7 + iVar10 + -1) = 0;
  }
  F_00e69490(param_1,&REFG(undefined, 0x1158b08),2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 0x14),0);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
  iVar10 = 0;
  do {
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\",",(uint)(byte)this[iVar10 + 0x18],0);
    pcVar5 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
    iVar10 = iVar10 + 1;
  } while (iVar10 < 3);
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
    iVar10 = param_1[4];
    param_1[4] = iVar10 + -1;
    puVar7 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar7 = (undefined4 *)*param_1;
    }
    *(undefined1 *)((int)puVar7 + iVar10 + -1) = 0;
  }
  F_00e69490(param_1,&REFG(undefined, 0x1158b08),2);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)*(ushort *)(this + 0x1c),0);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)*(ushort *)(this + 0x1e),0);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)*(ushort *)(this + 0x20),0);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)*(ushort *)(this + 0x22),0);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)*(ushort *)(this + 0x24),0);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
  pCVar11 = this + 0x28;
  iVar10 = 3;
  do {
    iVar9 = iVar10;
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\",",*(undefined4 *)pCVar11,0);
    pcVar5 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
    pCVar11 = pCVar11 + 4;
    iVar10 = iVar9 + -1;
  } while (iVar9 + -1 != 0);
  uVar2 = param_1[4];
  uVar4 = uVar2 - 1;
  if (uVar2 < uVar4) {
                    
    F_00c457e7("invalid string position");
  }
  if (uVar2 != uVar4) {
    puVar8 = param_1;
    puVar7 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar7 = (undefined4 *)*param_1;
      puVar8 = (undefined4 *)*param_1;
    }
    F_00c46e20(uVar4 + (int)puVar8,(int)puVar7 + uVar4 + iVar9,(uVar2 - iVar9) - uVar4);
    iVar10 = param_1[4];
    param_1[4] = iVar10 - iVar9;
    puVar7 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar7 = (undefined4 *)*param_1;
    }
    *((undefined1 *)GEN_TOP(((iVar10 - iVar9) + (int)puVar7))) = 0;
  }
  F_00e69490(param_1,&REFG(undefined, 0x1158b08),2);
  F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
  pCVar11 = this + 0x34;
  iVar10 = 3;
  do {
    iVar9 = iVar10;
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\",",*(undefined4 *)pCVar11,0);
    pcVar5 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
    pCVar11 = pCVar11 + 4;
    iVar10 = iVar9 + -1;
  } while (iVar9 + -1 != 0);
  uVar2 = param_1[4];
  uVar4 = uVar2 - 1;
  if (uVar2 < uVar4) {
                    
    F_00c457e7("invalid string position");
  }
  if (uVar2 != uVar4) {
    puVar8 = param_1;
    puVar7 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar7 = (undefined4 *)*param_1;
      puVar8 = (undefined4 *)*param_1;
    }
    F_00c46e20(uVar4 + (int)puVar8,iVar9 + uVar4 + (int)puVar7,(uVar2 - iVar9) - uVar4);
    iVar10 = param_1[4];
    param_1[4] = iVar10 - iVar9;
    puVar7 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar7 = (undefined4 *)*param_1;
    }
    *((undefined1 *)GEN_TOP(((iVar10 - iVar9) + (int)puVar7))) = 0;
  }
  F_00e69490(param_1,&REFG(undefined, 0x1158b08),2);
  F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
  pCVar11 = this + 0x40;
  iVar10 = 3;
  do {
    iVar9 = iVar10;
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\",",*(undefined4 *)pCVar11,0);
    pcVar5 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
    pCVar11 = pCVar11 + 4;
    iVar10 = iVar9 + -1;
  } while (iVar9 + -1 != 0);
  uVar2 = param_1[4];
  uVar4 = uVar2 - 1;
  if (uVar2 < uVar4) {
                    
    F_00c457e7("invalid string position");
  }
  if (uVar2 != uVar4) {
    puVar8 = param_1;
    puVar7 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar7 = (undefined4 *)*param_1;
      puVar8 = (undefined4 *)*param_1;
    }
    F_00c46e20(uVar4 + (int)puVar8,iVar9 + uVar4 + (int)puVar7,(uVar2 - iVar9) - uVar4);
    iVar10 = param_1[4];
    param_1[4] = iVar10 - iVar9;
    puVar7 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar7 = (undefined4 *)*param_1;
    }
    *((undefined1 *)GEN_TOP(((iVar10 - iVar9) + (int)puVar7))) = 0;
  }
  F_00e69490(param_1,&REFG(undefined, 0x1158b08),2);
  F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
  pCVar11 = this + 0x4c;
  iVar10 = 3;
  do {
    iVar9 = iVar10;
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\",",(uint)*(ushort *)pCVar11,0);
    pcVar5 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
    pCVar11 = pCVar11 + 2;
    iVar10 = iVar9 + -1;
  } while (iVar9 + -1 != 0);
  uVar2 = param_1[4];
  uVar4 = uVar2 - 1;
  if (uVar2 < uVar4) {
                    
    F_00c457e7("invalid string position");
  }
  if (uVar2 != uVar4) {
    puVar8 = param_1;
    puVar7 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar7 = (undefined4 *)*param_1;
      puVar8 = (undefined4 *)*param_1;
    }
    F_00c46e20(uVar4 + (int)puVar8,iVar9 + uVar4 + (int)puVar7,(uVar2 - iVar9) - uVar4);
    iVar10 = param_1[4];
    param_1[4] = iVar10 - iVar9;
    puVar7 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar7 = (undefined4 *)*param_1;
    }
    *((undefined1 *)GEN_TOP(((int)puVar7 + (iVar10 - iVar9)))) = 0;
  }
  F_00e69490(param_1,&REFG(undefined, 0x1158b08),2);
  F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
  pCVar11 = this + 0x52;
  iVar10 = 3;
  do {
    iVar9 = iVar10;
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\",",(uint)*(ushort *)pCVar11,0);
    pcVar5 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
    pCVar11 = pCVar11 + 2;
    iVar10 = iVar9 + -1;
  } while (iVar9 + -1 != 0);
  uVar2 = param_1[4];
  uVar4 = uVar2 - 1;
  if (uVar2 < uVar4) {
                    
    F_00c457e7("invalid string position");
  }
  if (uVar2 != uVar4) {
    puVar8 = param_1;
    puVar7 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar7 = (undefined4 *)*param_1;
      puVar8 = (undefined4 *)*param_1;
    }
    F_00c46e20((int)puVar8 + uVar4,(int)puVar7 + uVar4 + iVar9,(uVar2 - iVar9) - uVar4);
    iVar10 = param_1[4];
    param_1[4] = iVar10 - iVar9;
    puVar7 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar7 = (undefined4 *)*param_1;
    }
    *((undefined1 *)GEN_TOP(((int)puVar7 + (iVar10 - iVar9)))) = 0;
  }
  F_00e69490(param_1,&REFG(undefined, 0x1158b08),2);
  F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
  pCVar11 = this + 0x58;
  iVar10 = 3;
  do {
    iVar9 = iVar10;
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\",",(uint)*(ushort *)pCVar11,0);
    pcVar5 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
    pCVar11 = pCVar11 + 2;
    iVar10 = iVar9 + -1;
  } while (iVar9 + -1 != 0);
  uVar2 = param_1[4];
  uVar4 = uVar2 - 1;
  if (uVar2 < uVar4) {
                    
    F_00c457e7("invalid string position");
  }
  if (uVar2 != uVar4) {
    puVar8 = param_1;
    puVar7 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar7 = (undefined4 *)*param_1;
      puVar8 = (undefined4 *)*param_1;
    }
    F_00c46e20(uVar4 + (int)puVar8,iVar9 + uVar4 + (int)puVar7,(uVar2 - iVar9) - uVar4);
    iVar10 = param_1[4];
    param_1[4] = iVar10 - iVar9;
    puVar7 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar7 = (undefined4 *)*param_1;
    }
    *((undefined1 *)GEN_TOP(((iVar10 - iVar9) + (int)puVar7))) = 0;
  }
  F_00e69490(param_1,&REFG(undefined, 0x1158b08),2);
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
      F_00c46e20(uVar4 + (int)puVar8,uVar2 + (int)puVar7,(uVar2 - 1) - uVar4);
      iVar10 = param_1[4];
      param_1[4] = iVar10 + -1;
      puVar7 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar7 = (undefined4 *)*param_1;
      }
      *(undefined1 *)(iVar10 + -1 + (int)puVar7) = 0;
    }
    F_00e69490(param_1,&REFG(undefined, 0x1158afc),2);
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
    return 1;
  }
                    
  F_00c457e7("invalid string position");
}

/* ref: Application::Network::WorkDefinitions::CharaPvP::vf12 */
byte F_00e7ee50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe7ee50u, gen_a0, gen_a1, 0u, 0u);
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
  undefined * pCVar10;
  int iVar11;
  
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
  } while (iVar9 < 3);
  uVar2 = param_1[4];
  uVar4 = uVar2 - 1;
  if (uVar2 < uVar4) {
                    
    F_00c457e7("invalid string position");
  }
  if (uVar2 != uVar4) {
    if ((uint)param_1[5] < 0x10) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = param_1;
    }
    else {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = (undefined4 *)*param_1;
    }
    puVar7 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar7 = (undefined4 *)*param_1;
    }
    F_00c46e20((int)puVar7 + uVar4,(int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) + uVar2,(uVar2 - 1) - uVar4);
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
  F_00e69490(param_1,"\"datatype\":\"UInt32\",",0x14);
  F_00e69490(param_1,"\"value\":",8);
  F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
  pCVar10 = this + 8;
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = (undefined4 *)0x3;
  do {
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\",",*(undefined4 *)pCVar10,0);
    pcVar5 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
    pCVar10 = pCVar10 + 4;
    (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) + -1);
  } while ((*(undefined4 * PTR32 *)(gen_frame + 0x0)) != (undefined4 *)0x0);
  uVar2 = param_1[4];
  uVar4 = uVar2 - 1;
  if (uVar2 < uVar4) {
                    
    F_00c457e7("invalid string position");
  }
  if (uVar2 != uVar4) {
    if ((uint)param_1[5] < 0x10) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = param_1;
    }
    else {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = (undefined4 *)*param_1;
    }
    puVar7 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar7 = (undefined4 *)*param_1;
    }
    F_00c46e20((int)puVar7 + uVar4,(int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) + uVar2,(uVar2 - 1) - uVar4);
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
  F_00e69490(param_1,"\"datatype\":\"UInt32\",",0x14);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 0x14),0);
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
  F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
  iVar9 = 0;
  do {
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\",",(uint)(byte)this[iVar9 + 0x18],0);
    pcVar5 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
    iVar9 = iVar9 + 1;
  } while (iVar9 < 3);
  uVar2 = param_1[4];
  uVar4 = uVar2 - 1;
  if (uVar4 <= uVar2) {
    if (uVar2 != uVar4) {
      if ((uint)param_1[5] < 0x10) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = param_1;
      }
      else {
        (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = (undefined4 *)*param_1;
      }
      if ((uint)param_1[5] < 0x10) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = param_1;
      }
      else {
        (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)*param_1;
      }
      F_00c46e20(uVar4 + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)),uVar2 + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)),(uVar2 - 1) - uVar4)
      ;
      iVar9 = param_1[4];
      param_1[4] = iVar9 + -1;
      puVar7 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar7 = (undefined4 *)*param_1;
      }
      *(undefined1 *)(iVar9 + -1 + (int)puVar7) = 0;
    }
    F_00e69490(param_1,&REFG(undefined, 0x1158b54),1);
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
    F_00e69490(param_1,"\"datatype\":\"UInt16\",",0x14);
    F_00e69490(param_1,"\"value\":",8);
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)*(ushort *)(this + 0x1c),0);
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
    F_00e69490(param_1,"\"datatype\":\"UInt16\",",0x14);
    F_00e69490(param_1,"\"value\":",8);
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)*(ushort *)(this + 0x1e),0);
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
    F_00e69490(param_1,"\"datatype\":\"UInt16\",",0x14);
    F_00e69490(param_1,"\"value\":",8);
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)*(ushort *)(this + 0x20),0);
    pcVar5 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
    F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
    F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
    F_00e69490(param_1,"\"memberidx\":",0xc);
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),7);
    pcVar5 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
    F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
    F_00e69490(param_1,"\"memberid\":",0xb);
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,7);
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
    pcVar6 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,7)));
    pcVar5 = pcVar6;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,pcVar6,(int)pcVar5 - (int)(pcVar6 + 1));
    F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
    F_00e69490(param_1,"\"datatype\":\"UInt16\",",0x14);
    F_00e69490(param_1,"\"value\":",8);
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)*(ushort *)(this + 0x22),0);
    pcVar5 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
    F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
    F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
    F_00e69490(param_1,"\"memberidx\":",0xc);
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),8);
    pcVar5 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
    F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
    F_00e69490(param_1,"\"memberid\":",0xb);
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,8);
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
    pcVar6 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,8)));
    pcVar5 = pcVar6;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,pcVar6,(int)pcVar5 - (int)(pcVar6 + 1));
    F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
    F_00e69490(param_1,"\"datatype\":\"UInt16\",",0x14);
    F_00e69490(param_1,"\"value\":",8);
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",(uint)*(ushort *)(this + 0x24),0);
    pcVar5 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
    F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
    F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
    F_00e69490(param_1,"\"memberidx\":",0xc);
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),9);
    pcVar5 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
    F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
    F_00e69490(param_1,"\"memberid\":",0xb);
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,9);
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
    pcVar6 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,9)));
    pcVar5 = pcVar6;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,pcVar6,(int)pcVar5 - (int)(pcVar6 + 1));
    F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
    F_00e69490(param_1,"\"datatype\":\"UInt32\",",0x14);
    F_00e69490(param_1,"\"value\":",8);
    F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
    pCVar10 = this + 0x28;
    (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x3;
    do {
      F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\",",*(undefined4 *)pCVar10,0);
      pcVar5 = ((char *)(gen_frame + 0x8));
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
      pCVar10 = pCVar10 + 4;
      (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + -1);
    } while ((*(undefined4 * PTR32 *)(gen_frame + 0x4)) != (undefined4 *)0x0);
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
      if ((uint)param_1[5] < 0x10) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = param_1;
      }
      else {
        (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = (undefined4 *)*param_1;
      }
      F_00c46e20(uVar4 + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)),uVar2 + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)),(uVar2 - 1) - uVar4)
      ;
      iVar9 = param_1[4];
      param_1[4] = iVar9 + -1;
      puVar7 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar7 = (undefined4 *)*param_1;
      }
      *(undefined1 *)(iVar9 + -1 + (int)puVar7) = 0;
    }
    F_00e69490(param_1,&REFG(undefined, 0x1158b54),1);
    F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
    F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
    F_00e69490(param_1,"\"memberidx\":",0xc);
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),10);
    pcVar5 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
    F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
    F_00e69490(param_1,"\"memberid\":",0xb);
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,10);
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
    pcVar6 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,10)));
    pcVar5 = pcVar6;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,pcVar6,(int)pcVar5 - (int)(pcVar6 + 1));
    F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
    F_00e69490(param_1,"\"datatype\":\"UInt32\",",0x14);
    F_00e69490(param_1,"\"value\":",8);
    F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
    pCVar10 = this + 0x34;
    (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x3;
    do {
      F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\",",*(undefined4 *)pCVar10,0);
      pcVar5 = ((char *)(gen_frame + 0x8));
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
      pCVar10 = pCVar10 + 4;
      (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + -1);
    } while ((*(undefined4 * PTR32 *)(gen_frame + 0x4)) != (undefined4 *)0x0);
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
      if ((uint)param_1[5] < 0x10) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = param_1;
      }
      else {
        (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = (undefined4 *)*param_1;
      }
      F_00c46e20((int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) + uVar4,uVar2 + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)),(uVar2 - 1) - uVar4)
      ;
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
    F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),0xb);
    pcVar5 = ((char *)(gen_frame + 0x8));
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
    F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
    F_00e69490(param_1,"\"memberid\":",0xb);
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0xb);
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
    pcVar6 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0xb)));
    pcVar5 = pcVar6;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    F_00e69490(param_1,pcVar6,(int)pcVar5 - (int)(pcVar6 + 1));
    F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
    F_00e69490(param_1,"\"datatype\":\"UInt32\",",0x14);
    F_00e69490(param_1,"\"value\":",8);
    F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
    pCVar10 = this + 0x40;
    (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x3;
    do {
      F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\",",*(undefined4 *)pCVar10,0);
      pcVar5 = ((char *)(gen_frame + 0x8));
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
      pCVar10 = pCVar10 + 4;
      (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + -1);
    } while ((*(undefined4 * PTR32 *)(gen_frame + 0x4)) != (undefined4 *)0x0);
    uVar2 = param_1[4];
    uVar4 = uVar2 - 1;
    if (uVar4 <= uVar2) {
      if (uVar2 != uVar4) {
        if ((uint)param_1[5] < 0x10) {
          (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = param_1;
        }
        else {
          (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)*param_1;
        }
        if ((uint)param_1[5] < 0x10) {
          (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = param_1;
        }
        else {
          (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = (undefined4 *)*param_1;
        }
        F_00c46e20(uVar4 + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)),uVar2 + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)),(uVar2 - 1) - uVar4);
        iVar9 = param_1[4];
        param_1[4] = iVar9 + -1;
        puVar7 = param_1;
        if (0xf < (uint)param_1[5]) {
          puVar7 = (undefined4 *)*param_1;
        }
        *(undefined1 *)(iVar9 + -1 + (int)puVar7) = 0;
      }
      F_00e69490(param_1,&REFG(undefined, 0x1158b54),1);
      F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
      F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
      F_00e69490(param_1,"\"memberidx\":",0xc);
      F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),0xc);
      pcVar5 = ((char *)(gen_frame + 0x8));
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
      F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
      F_00e69490(param_1,"\"memberid\":",0xb);
      piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
      uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0xc);
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
      pcVar6 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0xc)));
      pcVar5 = pcVar6;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      F_00e69490(param_1,pcVar6,(int)pcVar5 - (int)(pcVar6 + 1));
      F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
      F_00e69490(param_1,"\"datatype\":\"UInt16\",",0x14);
      F_00e69490(param_1,"\"value\":",8);
      F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
      pCVar10 = this + 0x4c;
      (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x3;
      do {
        F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\",",(uint)*(ushort *)pCVar10,0);
        pcVar5 = ((char *)(gen_frame + 0x8));
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
        pCVar10 = pCVar10 + 2;
        (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + -1);
      } while ((*(undefined4 * PTR32 *)(gen_frame + 0x4)) != (undefined4 *)0x0);
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
        if ((uint)param_1[5] < 0x10) {
          (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = param_1;
        }
        else {
          (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = (undefined4 *)*param_1;
        }
        F_00c46e20(uVar4 + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)),uVar2 + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)),(uVar2 - 1) - uVar4);
        iVar9 = param_1[4];
        param_1[4] = iVar9 + -1;
        puVar7 = param_1;
        if (0xf < (uint)param_1[5]) {
          puVar7 = (undefined4 *)*param_1;
        }
        *(undefined1 *)(iVar9 + -1 + (int)puVar7) = 0;
      }
      F_00e69490(param_1,&REFG(undefined, 0x1158b54),1);
      F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
      F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
      F_00e69490(param_1,"\"memberidx\":",0xc);
      F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),0xd);
      pcVar5 = ((char *)(gen_frame + 0x8));
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
      F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
      F_00e69490(param_1,"\"memberid\":",0xb);
      piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
      uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0xd);
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
      pcVar6 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0xd)));
      pcVar5 = pcVar6;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      F_00e69490(param_1,pcVar6,(int)pcVar5 - (int)(pcVar6 + 1));
      F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
      F_00e69490(param_1,"\"datatype\":\"UInt16\",",0x14);
      F_00e69490(param_1,"\"value\":",8);
      F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
      pCVar10 = this + 0x52;
      (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x3;
      do {
        F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\",",(uint)*(ushort *)pCVar10,0);
        pcVar5 = ((char *)(gen_frame + 0x8));
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
        pCVar10 = pCVar10 + 2;
        (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + -1);
      } while ((*(undefined4 * PTR32 *)(gen_frame + 0x4)) != (undefined4 *)0x0);
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
        if ((uint)param_1[5] < 0x10) {
          (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = param_1;
        }
        else {
          (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = (undefined4 *)*param_1;
        }
        F_00c46e20(uVar4 + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)),uVar2 + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)),(uVar2 - 1) - uVar4);
        iVar9 = param_1[4];
        param_1[4] = iVar9 + -1;
        puVar7 = param_1;
        if (0xf < (uint)param_1[5]) {
          puVar7 = (undefined4 *)*param_1;
        }
        *(undefined1 *)(iVar9 + -1 + (int)puVar7) = 0;
      }
      F_00e69490(param_1,&REFG(undefined, 0x1158b54),1);
      F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
      F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
      F_00e69490(param_1,"\"memberidx\":",0xc);
      F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),0xe);
      pcVar5 = ((char *)(gen_frame + 0x8));
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
      F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
      F_00e69490(param_1,"\"memberid\":",0xb);
      piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
      uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0xe);
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
      pcVar6 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,0xe)));
      pcVar5 = pcVar6;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      F_00e69490(param_1,pcVar6,(int)pcVar5 - (int)(pcVar6 + 1));
      F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
      F_00e69490(param_1,"\"datatype\":\"UInt16\",",0x14);
      F_00e69490(param_1,"\"value\":",8);
      F_00e69490(param_1,&REFG(undefined, 0x1158b14),1);
      pCVar10 = this + 0x58;
      iVar9 = 3;
      do {
        iVar11 = iVar9;
        F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\",",(uint)*(ushort *)pCVar10,0);
        pcVar5 = ((char *)(gen_frame + 0x8));
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
        pCVar10 = pCVar10 + 2;
        iVar9 = iVar11 + -1;
      } while (iVar11 + -1 != 0);
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
          F_00c46e20((int)puVar8 + uVar4,(int)puVar7 + uVar4 + iVar11,(uVar2 - iVar11) - uVar4);
          iVar9 = param_1[4];
          param_1[4] = iVar9 - iVar11;
          puVar7 = param_1;
          if (0xf < (uint)param_1[5]) {
            puVar7 = (undefined4 *)*param_1;
          }
          *((undefined1 *)GEN_TOP(((int)puVar7 + (iVar9 - iVar11)))) = 0;
        }
        F_00e69490(param_1,&REFG(undefined, 0x1158b54),1);
        F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
        uVar2 = param_1[4];
        uVar4 = uVar2 - 1;
        if (uVar4 <= uVar2) {
          if (uVar2 - uVar4 != 0) {
            puVar8 = param_1;
            puVar7 = param_1;
            if (0xf < (uint)param_1[5]) {
              puVar7 = (undefined4 *)*param_1;
              puVar8 = (undefined4 *)*param_1;
            }
            F_00c46e20((int)puVar8 + uVar4,(int)puVar7 + uVar2,(uVar2 - uVar4) + -1);
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
                    
      F_00c457e7("invalid string position");
    }
                    
    F_00c457e7("invalid string position");
  }
                    
  F_00c457e7("invalid string position");
}

/* ref: Application::Network::WorkDefinitions::CharaRemake::vf26 */
byte F_00e80ab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe80ab0u, gen_a0, gen_a1, gen_a2, 0u);
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
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 0x24),0);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 0x28),*(undefined4 *)(this + 0x2c));
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

/* ref: Application::Network::WorkDefinitions::CharaRemake::vf12 */
byte F_00e80ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe80ee0u, gen_a0, gen_a1, 0u, 0u);
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
    F_00c46e20(uVar4 + (int)puVar7,(int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + uVar2,(uVar2 - 1) - uVar4);
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
  F_00e69490(param_1,"\"datatype\":\"UInt32\",",0x14);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 0x24),0);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b70),2);
  F_00e69490(param_1,&REFG(undefined, 0x1092090),1);
  F_00e69490(param_1,"\"memberidx\":",0xc);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,&REFG(undefined, 0x1158a04),7);
  pcVar5 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,((char *)(gen_frame + 0x8)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00e69490(param_1,&REFG(undefined, 0x109208c),1);
  F_00e69490(param_1,"\"memberid\":",0xb);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,7);
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
  pcVar6 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,7)));
  pcVar5 = pcVar6;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_00e69490(param_1,pcVar6,(int)pcVar5 - (int)(pcVar6 + 1));
  F_00e69490(param_1,&REFG(undefined, 0x1158b20),2);
  F_00e69490(param_1,"\"datatype\":\"UInt64\",",0x14);
  F_00e69490(param_1,"\"value\":",8);
  F_00c472af(((char *)(gen_frame + 0x8)),0x20,"\"%llu\"",*(undefined4 *)(this + 0x28),*(undefined4 *)(this + 0x2c));
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

/* ref: Application::Network::WorkDefinitions::Hater::vf15 */
byte F_00e81c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe81c60u, gen_a0, gen_a1, 0u, 0u);
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
  if ((char)uVar5 == '\0') goto LAB_00e81c8b;
  uVar5 = *(uint *)((int)param_1 + 0x10);
  if (uVar5 < 2) {
LAB_00e81d0d: ;
    bVar2 = true;
  }
  else {
    bVar3 = true;
    (*(uint *)(gen_frame + 0x20)) = 0xf;
    (*(uint *)(gen_frame + 0x1c)) = 0;
    (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] + 0)) = 0;
    ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (undefined4 * PTR32 * PTR32 *)((uint)pppuVar4 & 0xffffff00);
    F_00bb4bd0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),param_1,uVar5 - 2,0xffffffff);
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
    if (((uVar9 != 0) || (uVar5 < 2)) || (bVar2 = false, uVar5 != 2)) goto LAB_00e81d0d;
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
LAB_00e81c8b: ;
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ClassWork::vf15 */
byte F_00e81e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe81e50u, gen_a0, gen_a1, 0u, 0u);
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
  if ((char)uVar5 == '\0') goto LAB_00e81e7b;
  uVar5 = *(uint *)((int)param_1 + 0x10);
  if (uVar5 < 2) {
LAB_00e81efd: ;
    bVar2 = true;
  }
  else {
    bVar3 = true;
    (*(uint *)(gen_frame + 0x20)) = 0xf;
    (*(uint *)(gen_frame + 0x1c)) = 0;
    (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] + 0)) = 0;
    ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (undefined4 * PTR32 * PTR32 *)((uint)pppuVar4 & 0xffffff00);
    F_00bb4bd0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),param_1,uVar5 - 2,0xffffffff);
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
    if (((uVar9 != 0) || (uVar5 < 2)) || (bVar2 = false, uVar5 != 2)) goto LAB_00e81efd;
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
LAB_00e81e7b: ;
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::LeveWork::vf15 */
byte F_00e82040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe82040u, gen_a0, gen_a1, 0u, 0u);
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
  if ((char)uVar5 == '\0') goto LAB_00e8206b;
  uVar5 = *(uint *)((int)param_1 + 0x10);
  if (uVar5 < 2) {
LAB_00e820ed: ;
    bVar2 = true;
  }
  else {
    bVar3 = true;
    (*(uint *)(gen_frame + 0x20)) = 0xf;
    (*(uint *)(gen_frame + 0x1c)) = 0;
    (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] + 0)) = 0;
    ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (undefined4 * PTR32 * PTR32 *)((uint)pppuVar4 & 0xffffff00);
    F_00bb4bd0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),param_1,uVar5 - 2,0xffffffff);
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
    if (((uVar9 != 0) || (uVar5 < 2)) || (bVar2 = false, uVar5 != 2)) goto LAB_00e820ed;
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
LAB_00e8206b: ;
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::MonsterNoteCategory::vf15 */
byte F_00e82230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe82230u, gen_a0, gen_a1, 0u, 0u);
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
  if ((char)uVar5 == '\0') goto LAB_00e8225b;
  uVar5 = *(uint *)((int)param_1 + 0x10);
  if (uVar5 < 2) {
LAB_00e822dd: ;
    bVar2 = true;
  }
  else {
    bVar3 = true;
    (*(uint *)(gen_frame + 0x20)) = 0xf;
    (*(uint *)(gen_frame + 0x1c)) = 0;
    (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] + 0)) = 0;
    ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (undefined4 * PTR32 * PTR32 *)((uint)pppuVar4 & 0xffffff00);
    F_00bb4bd0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),param_1,uVar5 - 2,0xffffffff);
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
    if (((uVar9 != 0) || (uVar5 < 2)) || (bVar2 = false, uVar5 != 2)) goto LAB_00e822dd;
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
LAB_00e8225b: ;
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::CharaPvP::vf15 */
byte F_00e82420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe82420u, gen_a0, gen_a1, 0u, 0u);
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
  if ((char)uVar5 == '\0') goto LAB_00e8244b;
  uVar5 = *(uint *)((int)param_1 + 0x10);
  if (uVar5 < 2) {
LAB_00e824cd: ;
    bVar2 = true;
  }
  else {
    bVar3 = true;
    (*(uint *)(gen_frame + 0x20)) = 0xf;
    (*(uint *)(gen_frame + 0x1c)) = 0;
    (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] + 0)) = 0;
    ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (undefined4 * PTR32 * PTR32 *)((uint)pppuVar4 & 0xffffff00);
    F_00bb4bd0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),param_1,uVar5 - 2,0xffffffff);
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
    if (((uVar9 != 0) || (uVar5 < 2)) || (bVar2 = false, uVar5 != 2)) goto LAB_00e824cd;
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
LAB_00e8244b: ;
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::CharaRemake::vf15 */
byte F_00e82610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe82610u, gen_a0, gen_a1, 0u, 0u);
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
  if ((char)uVar5 == '\0') goto LAB_00e8263b;
  uVar5 = *(uint *)((int)param_1 + 0x10);
  if (uVar5 < 2) {
LAB_00e826bd: ;
    bVar2 = true;
  }
  else {
    bVar3 = true;
    (*(uint *)(gen_frame + 0x20)) = 0xf;
    (*(uint *)(gen_frame + 0x1c)) = 0;
    (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] + 0)) = 0;
    ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (undefined4 * PTR32 * PTR32 *)((uint)pppuVar4 & 0xffffff00);
    F_00bb4bd0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),param_1,uVar5 - 2,0xffffffff);
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
    if (((uVar9 != 0) || (uVar5 < 2)) || (bVar2 = false, uVar5 != 2)) goto LAB_00e826bd;
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
LAB_00e8263b: ;
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 0;
}

/* ref: Application::Network::WorkDefinitions::ClassWork_TypeInfo::vf5 */
uint F_00e82800(void)
{
  GEN_ENTER(0xe82800u, 0u, 0u, 0u, 0u);
  return 3;
}

/* ref: Application::Network::WorkDefinitions::ClassWork::vf1 */
uint F_00e82810(void)
{
  GEN_ENTER(0xe82810u, 0u, 0u, 0u, 0u);
  return 0x135b290;
}

/* ref: Application::Network::WorkDefinitions::LeveWork_TypeInfo::vf5 */
uint F_00e82820(void)
{
  GEN_ENTER(0xe82820u, 0u, 0u, 0u, 0u);
  return 5;
}

/* ref: Application::Network::WorkDefinitions::LeveWork::vf1 */
uint F_00e82830(void)
{
  GEN_ENTER(0xe82830u, 0u, 0u, 0u, 0u);
  return 0x135b294;
}

/* ref: Application::Network::WorkDefinitions::MonsterNoteCategory_TypeInfo::vf5 */
uint F_00e82840(void)
{
  GEN_ENTER(0xe82840u, 0u, 0u, 0u, 0u);
  return 4;
}

/* ref: Application::Network::WorkDefinitions::MonsterNoteCategory::vf1 */
uint F_00e82850(void)
{
  GEN_ENTER(0xe82850u, 0u, 0u, 0u, 0u);
  return 0x135b298;
}

/* ref: Application::Network::WorkDefinitions::CharaPvP_TypeInfo::vf5 */
uint F_00e82860(void)
{
  GEN_ENTER(0xe82860u, 0u, 0u, 0u, 0u);
  return 0xf;
}

/* ref: Application::Network::WorkDefinitions::CharaPvP::vf1 */
uint F_00e82870(void)
{
  GEN_ENTER(0xe82870u, 0u, 0u, 0u, 0u);
  return 0x135b29c;
}

/* ref: Application::Network::WorkDefinitions::CharaRemake_TypeInfo::vf5 */
uint F_00e82880(void)
{
  GEN_ENTER(0xe82880u, 0u, 0u, 0u, 0u);
  return 8;
}

/* ref: FUN_00e82890 */
uint F_00e82890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe82890u, gen_a0, gen_a1, 0u, 0u);
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;
  *param_2 = *param_1;
  return 2;
}

/* ref: Application::Network::WorkDefinitions::Hater_TypeInfo::vf5 */
uint F_00e828b0(void)
{
  GEN_ENTER(0xe828b0u, 0u, 0u, 0u, 0u);
  return 2;
}

/* ref: Application::Network::WorkDefinitions::Hater_TypeInfo::vf0 */
uint F_00e828c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe828c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[21])REFP(0x11584bc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Hater::vf1 */
uint F_00e828f0(void)
{
  GEN_ENTER(0xe828f0u, 0u, 0u, 0u, 0u);
  return 0x135b28c;
}

/* ref: Application::Network::WorkDefinitions::Hater::vf0 */
uint F_00e82900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe82900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::ClassWork_TypeInfo::vf0 */
uint F_00e82930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe82930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[21])REFP(0x11584bc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::ClassWork::vf0 */
uint F_00e82960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe82960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::LeveWork_TypeInfo::vf0 */
uint F_00e82990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe82990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[21])REFP(0x11584bc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::LeveWork::vf0 */
uint F_00e829c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe829c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::MonsterNoteCategory_TypeInfo::vf0 */
uint F_00e829f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe829f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[21])REFP(0x11584bc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::MonsterNoteCategory::vf0 */
uint F_00e82a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe82a20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::CharaPvP_TypeInfo::vf0 */
uint F_00e82a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe82a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[21])REFP(0x11584bc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::CharaPvP::vf0 */
uint F_00e82a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe82a80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::CharaRemake_TypeInfo::vf0 */
uint F_00e82ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe82ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[21])REFP(0x11584bc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::CharaRemake::vf0 */
uint F_00e82ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe82ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x1158514));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::PoolStatusInterface::vf0 */
uint F_00e82b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe82b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x11598e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00e82b60 */
uint F_00e82b60(unsigned int gen_a0)
{
  GEN_ENTER(0xe82b60u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
  in_ecx[2] = 0;
  in_ecx[4] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00e82b80 */
uint F_00e82b80(unsigned int gen_a0)
{
  GEN_ENTER(0xe82b80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
  uVar1 = F_00ea7c20(this);
  return uVar1;
}

/* ref: FUN_00e82b90 */
uint F_00e82b90(unsigned int gen_a0)
{
  GEN_ENTER(0xe82b90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: FUN_00e82bd0 */
uint F_00e82bd0(unsigned int gen_a0)
{
  GEN_ENTER(0xe82bd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x310];
  byte bVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  undefined3 uVar10;
  bool bVar11;
  ulonglong uVar12;
  
  uVar9 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x30c);
  (*(uint *)(gen_frame + 0x308)) = uVar9;
  iVar2 = *(int *)((int)this + 8);
  ((byte *)(gen_frame + 0xc))[0] = 0;
  ((byte *)(gen_frame + 0xc))[1] = 0;
  ((byte *)(gen_frame + 0xc))[2] = 0;
  ((byte *)(gen_frame + 0xc))[3] = 0;
  if (iVar2 == 1) {
    if (*(int *)((int)this + 0x10) != 0 || *(int *)((int)this + 0x14) != 0) {
LAB_00e82edf: ;
      F_00c47745(uVar9 ^ (uint)(uint)(gen_frame + 0x30c));
      return 1;
    }
  }
  else {
    if (iVar2 != 2) {
      if (iVar2 == 3) {
        bVar1 = *(byte *)((int)this + 0x10);
        F_00c47745(uVar9 ^ (uint)(uint)(gen_frame + 0x30c));
        return (uint)bVar1;
      }
      ((byte *)(gen_frame + 0xc))[6] = 0;
      F_0042cc20(((undefined1 *)(gen_frame + 0x20c)),&REFG(undefined1, 0x113bf28),REFG(undefined4, 0x108cc50));
      bVar8 = false;
      bVar7 = false;
      bVar6 = false;
      bVar5 = false;
      bVar4 = false;
      bVar3 = false;
      bVar11 = false;
      uVar9 = F_0042bba0(*(undefined * PTR32 *)((int)this + 0x10),((undefined1 *)(gen_frame + 0x20c)));
      if (uVar9 == 0) {
LAB_00e82dcd: ;
        ((byte *)(gen_frame + 0xc))[7] = 1;
      }
      else {
        F_0042cc20(((undefined1 *)(gen_frame + 0x1b8)),&REFG(undefined, 0x1159a54),REFG(undefined4, 0x108cc50));
        bVar8 = false;
        bVar7 = true;
        bVar6 = false;
        bVar5 = false;
        bVar4 = false;
        bVar3 = false;
        bVar11 = false;
        uVar9 = F_0042bba0(*(undefined * PTR32 *)((int)this + 0x10),((undefined1 *)(gen_frame + 0x1b8)));
        if (uVar9 == 0) goto LAB_00e82dcd;
        F_0042cc20(((byte *)(gen_frame + 0xc)) + 8,&REFG(undefined, 0x1159a4c),REFG(undefined4, 0x108cc50));
        bVar8 = false;
        bVar7 = true;
        bVar6 = true;
        bVar5 = false;
        bVar4 = false;
        bVar3 = false;
        bVar11 = false;
        uVar9 = F_0042bba0(*(undefined * PTR32 *)((int)this + 0x10),((byte *)(gen_frame + 0xc)) + 8);
        if (uVar9 == 0) goto LAB_00e82dcd;
        F_0042cc20(((undefined1 *)(gen_frame + 0xbc)),(*(undefined * PTR32 (*)[1])REFP(0x1159a48)),REFG(undefined4, 0x108cc50));
        bVar8 = false;
        bVar7 = true;
        bVar6 = true;
        bVar5 = true;
        bVar4 = false;
        bVar3 = false;
        bVar11 = false;
        uVar9 = F_0042bba0(*(undefined * PTR32 *)((int)this + 0x10),((undefined1 *)(gen_frame + 0xbc)));
        if (uVar9 == 0) goto LAB_00e82dcd;
        F_0042cc20(((undefined1 *)(gen_frame + 0x164)),(*(undefined * PTR32 (*)[1])REFP(0x1159a44)),REFG(undefined4, 0x108cc50));
        bVar8 = false;
        bVar7 = true;
        bVar6 = true;
        bVar5 = true;
        bVar4 = true;
        bVar3 = false;
        bVar11 = false;
        uVar9 = F_0042bba0(*(undefined * PTR32 *)((int)this + 0x10),((undefined1 *)(gen_frame + 0x164)));
        if (uVar9 == 0) goto LAB_00e82dcd;
        F_0042cc20(((undefined1 *)(gen_frame + 0x260)),(*(undefined * PTR32 (*)[1])REFP(0x1159a40)),REFG(undefined4, 0x108cc50));
        bVar8 = false;
        bVar7 = true;
        bVar6 = true;
        bVar5 = true;
        bVar4 = true;
        bVar3 = true;
        bVar11 = false;
        uVar9 = F_0042bba0(*(undefined * PTR32 *)((int)this + 0x10),((undefined1 *)(gen_frame + 0x260)));
        if (uVar9 == 0) goto LAB_00e82dcd;
        F_0042cc20(((undefined1 *)(gen_frame + 0x2b4)),&REFG(undefined, 0x1091540),REFG(undefined4, 0x108cc50));
        bVar8 = false;
        bVar7 = true;
        bVar6 = true;
        bVar5 = true;
        bVar4 = true;
        bVar3 = true;
        bVar11 = true;
        uVar9 = F_0042bba0(*(undefined * PTR32 *)((int)this + 0x10),((undefined1 *)(gen_frame + 0x2b4)));
        if (uVar9 == 0) goto LAB_00e82dcd;
        F_0042cc20(((undefined1 *)(gen_frame + 0x110)),&REFG(undefined, 0x1159a3c),REFG(undefined4, 0x108cc50));
        bVar8 = false;
        bVar7 = true;
        bVar6 = true;
        bVar5 = true;
        bVar4 = true;
        bVar3 = true;
        bVar11 = true;
        uVar9 = F_0042bba0(*(undefined * PTR32 *)((int)this + 0x10),((undefined1 *)(gen_frame + 0x110)));
        if (uVar9 == 0) goto LAB_00e82dcd;
        F_0042cc20(((undefined1 *)(gen_frame + 0x68)),&REFG(undefined, 0x1159a38),REFG(undefined4, 0x108cc50));
        bVar8 = true;
        bVar7 = true;
        bVar6 = true;
        bVar5 = true;
        bVar4 = true;
        bVar3 = true;
        bVar11 = true;
        uVar9 = F_0042bba0(*(undefined * PTR32 *)((int)this + 0x10),((undefined1 *)(gen_frame + 0x68)));
        ((byte *)(gen_frame + 0xc))[7] = 0;
        if (uVar9 == 0) goto LAB_00e82dcd;
      }
      if (bVar8) {
        F_0042c880(((undefined1 *)(gen_frame + 0x68)));
      }
      if (bVar11) {
        F_0042c880(((undefined1 *)(gen_frame + 0x2b4)));
      }
      if (bVar3) {
        F_0042c880(((undefined1 *)(gen_frame + 0x260)));
      }
      if (bVar4) {
        F_0042c880(((undefined1 *)(gen_frame + 0x164)));
      }
      if (bVar5) {
        F_0042c880(((undefined1 *)(gen_frame + 0xbc)));
      }
      if (bVar6) {
        F_0042c880(((byte *)(gen_frame + 0xc)) + 8);
      }
      if (bVar7) {
        F_0042c880(((undefined1 *)(gen_frame + 0x1b8)));
      }
      uVar12 = F_0042c880(((undefined1 *)(gen_frame + 0x20c)));
      uVar10 = (undefined3)(uVar12 >> 8);
      uVar9 = CONCAT31(uVar10,1);
      if (((byte *)(gen_frame + 0xc))[7] == 0) {
        uVar9 = CONCAT31(uVar10,((byte *)(gen_frame + 0xc))[6]);
        F_00c47745((*(uint *)(gen_frame + 0x308)) ^ (uint)(uint)(gen_frame + 0x30c));
        return uVar9;
      }
      goto LAB_00e82ec8;
    }
    bVar11 = GEN_ISNAN(*(float *)((int)this + 0x10)) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
    if (bVar11 == (bVar11 || *(float *)((int)this + 0x10) == *(float *)&REFG(undefined, 0x1088114)))
    goto LAB_00e82edf;
  }
  uVar9 = 0;
LAB_00e82ec8: ;
  F_00c47745((*(uint *)(gen_frame + 0x308)) ^ (uint)(uint)(gen_frame + 0x30c));
  return uVar9;
}

/* ref: FUN_00e82f00 */
uint F_00e82f00(unsigned int gen_a0)
{
  GEN_ENTER(0xe82f00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: FUN_00e82f40 */
uint F_00e82f40(unsigned int gen_a0)
{
  GEN_ENTER(0xe82f40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (REFG(undefined4, 0x135eb88) != 0) {
    do {
      if (param_1 == (ushort)(&REFG(undefined2, 0x135d0b8))[uVar1]) {
        return CONCAT22((short)(uVar1 >> 0x10),(&REFG(undefined2, 0x135b5e8))[uVar1]);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < REFG(undefined4, 0x135eb88));
  }
  return 0xffff;
}

/* ref: FUN_00e82f80 */
uint F_00e82f80(unsigned int gen_a0)
{
  GEN_ENTER(0xe82f80u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  code * pcVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  int * piVar5;
  uint local_8;
  
  piVar5 = (*(int * PTR32 *)&gen_args[0]);
  if ((*(int * PTR32 *)&gen_args[0]) == (int *)0x0) {
    return 0;
  }
  pcVar1 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 8)));
  (*(int * PTR32 *)&gen_args[0]) = (int *)0x0;
  uVar2 = (*pcVar1)(piVar5,&(*(int * PTR32 *)&gen_args[0]));
  local_8 = 1;
  if (0 < (int)(*(int * PTR32 *)&gen_args[0])) {
    piVar5 = (int *)(uVar2 + 4);
    iVar4 = 0;
    do {
      piVar5[2] = -1;
      if (*piVar5 == 0) {
LAB_00e83084: ;
        uVar2 = 0;
      }
      else if (piVar5[1] == -1) {
        piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*piVar5 + 4))((int *)*piVar5)));
        uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x2c))(piVar3);
      }
      else {
        uVar2 = piVar5[3] & 7;
        if (uVar2 == 0) {
          piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*piVar5 + 4))((int *)*piVar5)));
          uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x38))(piVar3,piVar5[1]);
        }
        else if (uVar2 == 1) {
          piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*piVar5 + 4))((int *)*piVar5)));
          uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x34))
                            (piVar3,piVar5[1],(uint)(*(byte *)(piVar5 + 3) & 7),
                             (uint)piVar5[3] >> 3 & 0xfffffff);
        }
        else {
          if (uVar2 != 2) goto LAB_00e83084;
          piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*piVar5 + 4))((int *)*piVar5)));
          uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x30))
                            (piVar3,piVar5[1],(uint)(*(byte *)(piVar5 + 3) & 7),
                             (uint)piVar5[3] >> 3 & 0x3fff,(uint)piVar5[3] >> 0x11 & 0x3fff,
                             piVar5 + 2);
        }
      }
      local_8 = local_8 + uVar2;
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 5;
    } while (iVar4 < (int)(*(int * PTR32 *)&gen_args[0]));
  }
  return local_8;
}

/* ref: FUN_00e830a0 */
uint F_00e830a0(unsigned int gen_a0)
{
  GEN_ENTER(0xe830a0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  code * pcVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  int * piVar5;
  uint local_8;
  
  piVar5 = (*(int * PTR32 *)&gen_args[0]);
  if ((*(int * PTR32 *)&gen_args[0]) == (int *)0x0) {
    return 0;
  }
  pcVar1 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 8)));
  (*(int * PTR32 *)&gen_args[0]) = (int *)0x0;
  uVar2 = (*pcVar1)(piVar5,&(*(int * PTR32 *)&gen_args[0]));
  local_8 = 1;
  if (0 < (int)(*(int * PTR32 *)&gen_args[0])) {
    piVar5 = (int *)(uVar2 + 4);
    iVar4 = 0;
    do {
      if (piVar5[2] != 0) {
        if (*piVar5 == 0) {
LAB_00e831a8: ;
          uVar2 = 0;
        }
        else if (piVar5[1] == -1) {
          piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*piVar5 + 4))((int *)*piVar5)));
          uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x2c))(piVar3);
        }
        else {
          uVar2 = piVar5[3] & 7;
          if (uVar2 == 0) {
            piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*piVar5 + 4))((int *)*piVar5)));
            uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x38))(piVar3,piVar5[1]);
          }
          else if (uVar2 == 1) {
            piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*piVar5 + 4))((int *)*piVar5)));
            uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x34))
                              (piVar3,piVar5[1],(uint)(*(byte *)(piVar5 + 3) & 7),
                               (uint)piVar5[3] >> 3 & 0xfffffff);
          }
          else {
            if (uVar2 != 2) goto LAB_00e831a8;
            piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*piVar5 + 4))((int *)*piVar5)));
            uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x30))
                              (piVar3,piVar5[1],(uint)(*(byte *)(piVar5 + 3) & 7),
                               (uint)piVar5[3] >> 3 & 0x3fff,(uint)piVar5[3] >> 0x11 & 0x3fff,
                               piVar5 + 2);
          }
        }
        local_8 = local_8 + uVar2;
      }
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 5;
    } while (iVar4 < (int)(*(int * PTR32 *)&gen_args[0]));
  }
  return local_8;
}

/* ref: FUN_00e831d0 */
uint F_00e831d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe831d0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  code * pcVar1;
  uint uVar2;
  int * piVar3;
  undefined1 * puVar4;
  int iVar5;
  undefined1 * puVar6;
  int * piVar7;
  undefined1 * puVar8;
  int local_8;
  
  puVar6 = (*(undefined1 * PTR32 *)&gen_args[1]);
  piVar7 = (*(int * PTR32 *)&gen_args[0]);
  if (((*(int * PTR32 *)&gen_args[0]) != (int *)0x0) && ((*(undefined1 * PTR32 *)&gen_args[1]) != (undefined1 *)0x0)) {
    pcVar1 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 8)));
    (*(int * PTR32 *)&gen_args[0]) = (int *)0x0;
    uVar2 = (*pcVar1)(piVar7,&(*(int * PTR32 *)&gen_args[0]));
    *puVar6 = (char)(*(int * PTR32 *)&gen_args[0]);
    puVar8 = puVar6 + 1;
    local_8 = 0;
    if (0 < (int)(*(int * PTR32 *)&gen_args[0])) {
      piVar7 = (int *)(uVar2 + 4);
      iVar5 = (int)(*(int * PTR32 *)&gen_args[0]);
      do {
        if (*piVar7 == 0) {
          uVar2 = 0;
        }
        else if (piVar7[1] == -1) {
          piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*piVar7 + 4))((int *)*piVar7)));
          uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x3c))(piVar3,*piVar7,puVar8);
          iVar5 = (int)(*(int * PTR32 *)&gen_args[0]);
        }
        else {
          uVar2 = piVar7[3] & 7;
          if (uVar2 == 0) {
            piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*piVar7 + 4))((int *)*piVar7)));
            uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x48))(piVar3,*piVar7,piVar7[1],puVar8);
            iVar5 = (int)(*(int * PTR32 *)&gen_args[0]);
          }
          else if (uVar2 == 1) {
            piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*piVar7 + 4))((int *)*piVar7)));
            uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x44))
                              (piVar3,*piVar7,piVar7[1],(uint)(*(byte *)(piVar7 + 3) & 7),
                               (uint)piVar7[3] >> 3 & 0xfffffff,puVar8);
            iVar5 = (int)(*(int * PTR32 *)&gen_args[0]);
          }
          else {
            puVar4 = puVar8;
            if (uVar2 == 2) {
              piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*piVar7 + 4))((int *)*piVar7)));
              uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x40))
                                (piVar3,*piVar7,piVar7[1],(uint)(*(byte *)(piVar7 + 3) & 7),
                                 (uint)piVar7[3] >> 3 & 0x3fff,(uint)piVar7[3] >> 0x11 & 0x3fff,
                                 piVar7 + 2,puVar8);
              puVar4 = puVar8 + uVar2;
              puVar6 = (*(undefined1 * PTR32 *)&gen_args[1]);
            }
            uVar2 = (int)puVar4 - (int)puVar8;
            iVar5 = (int)(*(int * PTR32 *)&gen_args[0]);
          }
        }
        puVar8 = puVar8 + uVar2;
        local_8 = local_8 + 1;
        piVar7 = piVar7 + 5;
      } while (local_8 < iVar5);
    }
    return (int)puVar8 - (int)puVar6;
  }
  return 0;
}

/* ref: FUN_00e83330 */
uint F_00e83330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe83330u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  code * pcVar2;
  undefined * this;
  uint uVar3;
  int iVar4;
  char * pcVar5;
  
  iVar4 = 0;
  if ((param_1 != (int *)0x0) && (param_2 != (char *)0x0)) {
    pcVar2 = *(gen_code32 *)(*param_1 + 8);
    (*(int *)(gen_frame + 0x8)) = 0;
    this = ((undefined *)GEN_TOP((*pcVar2)(param_1,&(*(int *)(gen_frame + 0x8)))));
    cVar1 = '\0';
    pcVar5 = param_2 + 1;
    if (0 < (*(int *)(gen_frame + 0x8))) {
      do {
        if (*(int *)((int)this + 0xc) != 0) {
          uVar3 = F_00ea9fc0(this,pcVar5);
          pcVar5 = pcVar5 + uVar3;
          cVar1 = cVar1 + '\x01';
        }
        iVar4 = iVar4 + 1;
        this = (undefined *)((int)this + 0x14);
      } while (iVar4 < (*(int *)(gen_frame + 0x8)));
    }
    *param_2 = cVar1;
    return (int)pcVar5 - (int)param_2;
  }
  return 0;
}

/* ref: FUN_00e833a0 */
uint F_00e833a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe833a0u, gen_a0, gen_a1, 0u, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  code * pcVar2;
  undefined4 uVar3;
  byte * pbVar4;
  uint uVar5;
  int * piVar6;
  int * piVar7;
  uint uVar8;
  int iVar9;
  
  bVar1 = *param_1;
  (*(byte * PTR32 *)(gen_frame + 0x8)) = param_1 + 1;
  pcVar2 = *(gen_code32 *)(*param_2 + 8);
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(int *)(gen_frame + 0x0)) = 0;
  uVar5 = (*pcVar2)(param_2,&(*(int *)(gen_frame + 0x4)));
  if (bVar1 != 0) {
    while( true ) {
      uVar3 = *(undefined4 *)(*(byte * PTR32 *)(gen_frame + 0x8));
      iVar9 = 0;
      if ((*(int *)(gen_frame + 0x4)) < 1) break;
      while (piVar6 = *(int * PTR32 *)(uVar5 + iVar9 * 4),
            piVar6 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar6 + 8))(piVar6,uVar3))), piVar6 == (int *)0x0) {
        iVar9 = iVar9 + 1;
        if ((*(int *)(gen_frame + 0x4)) <= iVar9) {
          return (int)(*(byte * PTR32 *)(gen_frame + 0x8)) - (int)param_1;
        }
      }
      piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar6 + 4))(piVar6)));
      pbVar4 = (*(byte * PTR32 *)(gen_frame + 0x8));
      iVar9 = *piVar7;
      uVar8 = ((code *)*(gen_code32 *)(iVar9 + 0x10))(piVar7,uVar3,(*(byte * PTR32 *)(gen_frame + 0x8)),piVar6);
      uVar8 = ((code *)*(gen_code32 *)(iVar9 + 0x50))(piVar7,uVar8);
      iVar9 = (*(int *)(gen_frame + 0x0)) + 1;
      (*(byte * PTR32 *)(gen_frame + 0x8)) = pbVar4 + uVar8;
      if (((*(int *)(gen_frame + 0x0)) == iVar9) || ((*(int *)(gen_frame + 0x0)) = iVar9, (int)(uint)bVar1 <= iVar9)) break;
    }
  }
  return (int)(*(byte * PTR32 *)(gen_frame + 0x8)) - (int)param_1;
}

/* ref: FUN_00e83460 */
uint F_00e83460(unsigned int gen_a0)
{
  GEN_ENTER(0xe83460u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  switch((unsigned int)(uintptr_t)((undefined2)param_1)) {
  case 1: ;
  case 2: ;
  case 0x13: ;
  case 0x14: ;
  case 0x15: ;
  case 0x17: ;
  case 0x1e: ;
  case 0x1f: ;
  case 0x21: ;
  case 0x22: ;
  case 0x23: ;
  case 0x24: ;
  case 0x3c: ;
  case 0x3d: ;
  case 0x3f: ;
  case 0x40: ;
  case 0x41: ;
  case 0x42: ;
  case 0x43: ;
  case 0x44: ;
  case 0x45: ;
  case 0x46: ;
  case 0x47: ;
  case 0x48: ;
  case 0x49: ;
  case 0x4a: ;
  case 0x4b: ;
  case 0x4c: ;
  case 0x4d: ;
  case 0x4e: ;
  case 0x4f: ;
  case 0x50: ;
  case 0x51: ;
  case 0x52: ;
  case 0x53: ;
  case 0x54: ;
  case 0x56: ;
  case 0x57: ;
  case 0x58: ;
  case 0x59: ;
  case 0x5c: ;
  case 0x5d: ;
  case 0x5e: ;
  case 0x5f: ;
  case 0x60: ;
  case 0x61: ;
  case 0x62: ;
  case 99: ;
  case 100: ;
  case 0x65: ;
  case 0x66: ;
  case 0x67: ;
  case 0x68: ;
  case 0x69: ;
  case 0x6a: ;
  case 0x6b: ;
  case 0x6c: ;
  case 0x6d: ;
  case 0x6e: ;
  case 0x6f: ;
  case 0x70: ;
  case 0x71: ;
  case 0x72: ;
  case 0x73: ;
  case 0x78: ;
  case 0x79: ;
  case 0x7a: ;
  case 0x7b: ;
  case 0x7c: ;
  case 0x7d: ;
  case 0x7e: ;
  case 0x7f: ;
  case 0x80: ;
  case 0x84: ;
  case 0x85: ;
  case 0x86: ;
  case 0x87: ;
  case 0x88: ;
  case 0x89: ;
  case 0x8a: ;
  case 0x8b: ;
  case 0x8c: ;
  case 0x8d: ;
  case 0x8e: ;
  case 0x8f: ;
  case 0x90: ;
  case 0x91: ;
  case 0x92: ;
  case 0x93: ;
  case 0x94: ;
  case 0x95: ;
  case 0x96: ;
  case 0x97: ;
  case 0x98: ;
  case 0x99: ;
  case 0x9a: ;
  case 0x9b: ;
  case 0x9c: ;
  case 0x9d: ;
  case 0x9e: ;
  case 0x9f: ;
  case 0xa0: ;
  case 0xa1: ;
  case 0xa2: ;
  case 0xa3: ;
  case 0xa4: ;
  case 0xa5: ;
  case 0xa6: ;
  case 0xa7: ;
  case 0xa8: ;
  case 0xa9: ;
  case 0xaa: ;
  case 0xab: ;
  case 0xac: ;
  case 0xad: ;
  case 0xae: ;
  case 0xaf: ;
  case 0xb0: ;
  case 0xb1: ;
  case 0xb2: ;
  case 0xb3: ;
  case 0xb4: ;
  case 0xb5: ;
  case 0xb6: ;
  case 0xb7: ;
  case 0xb8: ;
  case 0xb9: ;
  case 0xba: ;
  case 0xbb: ;
  case 0xbc: ;
  case 0xbd: ;
  case 0xbe: ;
  case 0xbf: ;
  case 0xc0: ;
  case 0xd6: ;
  case 0xd7: ;
  case 0xd8: ;
  case 0xd9: ;
  case 0xda: ;
  case 0xdb: ;
  case 0xdc: ;
  case 0xdd: ;
  case 0xde: ;
  case 0xdf: ;
  case 0xe0: ;
  case 0xe1: ;
    goto switchD_00e8347d_caseD_1;
  case 3: ;
    return 0x136b480;
  case 4: ;
    return 0x136b850;
  case 5: ;
    return 0x136bda8;
  case 6: ;
    return 0x136aedc;
  case 7: ;
    return 0x136962c;
  case 8: ;
    return 0x136a4fc;
  case 9: ;
    return 0x1369c8c;
  case 10: ;
    return 0x135ae3c;
  case 0xb: ;
    return 0x135b28c;
  case 0xc: ;
    return 0x136c22c;
  case 0xd: ;
    return 0x136b484;
  case 0xe: ;
    return 0x136b854;
  case 0xf: ;
    return 0x136bdac;
  case 0x10: ;
    return 0x136aee0;
  case 0x11: ;
    return 0x1369630;
  case 0x12: ;
    return 0x136a500;
  default: ;
switchD_00e8347d_caseD_1: ;
    return 0;
  case 0x18: ;
    return 0x136bdb0;
  case 0x19: ;
    return 0x136aee4;
  case 0x1a: ;
    return 0x1369634;
  case 0x1b: ;
    return 0x136a504;
  case 0x1c: ;
    return 0x1369c90;
  case 0x1d: ;
    return 0x135ae40;
  case 0x25: ;
    return 0x135ae44;
  case 0x26: ;
    return 0x135b290;
  case 0x27: ;
    return 0x136c230;
  case 0x28: ;
    return 0x136b488;
  case 0x29: ;
    return 0x136b858;
  case 0x2a: ;
    return 0x136bdb4;
  case 0x2b: ;
    return 0x136aee8;
  case 0x2c: ;
    return 0x1369638;
  case 0x2d: ;
    return 0x1369c94;
  case 0x2e: ;
    return 0x135ae48;
  case 0x30: ;
    return 0x136c234;
  case 0x31: ;
    return 0x136b48c;
  case 0x32: ;
    return 0x136b85c;
  case 0x33: ;
    return 0x136bdb8;
  case 0x34: ;
    return 0x1369c98;
  case 0x36: ;
    return 0x135b298;
  case 0x37: ;
    return 0x136b490;
  case 0x38: ;
    return 0x136b860;
  case 0x39: ;
    return 0x136bdbc;
  case 0x3a: ;
    return 0x136aef0;
  case 0x3b: ;
    return 0x135b29c;
  case 0x3e: ;
    return 0x136b864;
  case 0x55: ;
    return 0x136b868;
  case 0x5a: ;
    return 0x1369640;
  case 0x5b: ;
    return 0x136a510;
  case 0x74: ;
    return 0x136a514;
  case 0x75: ;
    return 0x1369c9c;
  case 0x76: ;
    return 0x135ae50;
  case 0x77: ;
    return 0x135b2a0;
  case 0x81: ;
    return 0x136bdc0;
  case 0x82: ;
    return 0x136aef4;
  case 0x83: ;
    return 0x1369644;
  case 0xc1: ;
    return 0x136c52c;
  case 0xc2: ;
    return 0x136c530;
  case 0xc3: ;
    return 0x136c534;
  case 0xc4: ;
    return 0x136c538;
  case 0xc5: ;
    return 0x136c53c;
  case 0xc6: ;
    return 0x136c540;
  case 199: ;
    return 0x136c544;
  case 200: ;
    return 0x136c548;
  case 0xc9: ;
    return 0x136c54c;
  case 0xca: ;
    return 0x136c550;
  case 0xcb: ;
    return 0x136c554;
  case 0xcc: ;
    return 0x136c558;
  case 0xcd: ;
    return 0x136c55c;
  case 0xce: ;
    return 0x136c560;
  case 0xcf: ;
    return 0x136c564;
  case 0xd0: ;
    return 0x136aeec;
  case 0xd1: ;
    return 0x136a50c;
  case 0xd2: ;
    return 0x135b294;
  case 0xd3: ;
    return 0x136963c;
  case 0xd4: ;
    return 0x135ae4c;
  case 0xd5: ;
    return 0x136c238;
  case 0xe2: ;
    return 0x136a508;
  }
}

/* ref: FUN_00e838c0 */
uint F_00e838c0(void)
{
  GEN_ENTER(0xe838c0u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x15e3898);
}

/* ref: FUN_00e838d0 */
uint F_00e838d0(void)
{
  GEN_ENTER(0xe838d0u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x135b5b8);
}

/* ref: Application::Network::WorkDefinitions::Tag_DbDefault_def_false_TypeInfo::vf1 */
uint F_00e83970(void)
{
  GEN_ENTER(0xe83970u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x135b5e0);
}

/* ref: FUN_00e83980 */
uint F_00e83980(void)
{
  GEN_ENTER(0xe83980u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x135b5e4);
}

/* ref: FUN_00e83990 */
uint F_00e83990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe83990u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 < 0x51) {
    *param_2 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + param_1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[param_1];
  }
  *param_2 = 0;
  return 0;
}

/* ref: FUN_00e839c0 */
uint F_00e839c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe839c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(&REFG(undefined, 0x136066c) + param_1 * 4);
  return (uint)(&REFG(undefined * PTR32, 0x1360638))[param_1];
}

/* ref: FUN_00e83ac0 */
uint F_00e83ac0(unsigned int gen_a0)
{
  GEN_ENTER(0xe83ac0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(REFG(int, 0x15e38b8) + param_1 * 4);
}

/* ref: FUN_00e83af0 */
uint F_00e83af0(unsigned int gen_a0)
{
  GEN_ENTER(0xe83af0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(REFG(int, 0x15e38bc) + param_1 * 4);
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_Parameter_TypeInfo::vf3 */
uint F_00e83b30(void)
{
  GEN_ENTER(0xe83b30u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_Parameter_TypeInfo::vf4 */
uint F_00e83b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe83b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[uVar1];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_Parameter_TypeInfo::vf5 */
uint F_00e83b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe83b80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_Parameter_TypeInfo::vf6 */
uint F_00e83ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe83ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_Parameter_TypeInfo::vf7 */
uint F_00e83bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe83bc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_Parameter_TypeInfo::vf8 */
uint F_00e83be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe83be0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_Parameter_TypeInfo::vf9 */
uint F_00e83c00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe83c00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_2 + 4))(param_2);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_Parameter::vf1 */
uint F_00e83c20(unsigned int gen_a0)
{
  GEN_ENTER(0xe83c20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_Parameter::vf2 */
uint F_00e83c30(unsigned int gen_a0)
{
  GEN_ENTER(0xe83c30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0x84) {
    return in_ecx + 0x1a0;
  }
  return 0;
}

/* ref: FUN_00e83c50 */
uint F_00e83c50(void)
{
  GEN_ENTER(0xe83c50u, 0u, 0u, 0u, 0u);
  return 0x135ebb8;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_Parameter::vf3 */
uint F_00e83c60(void)
{
  GEN_ENTER(0xe83c60u, 0u, 0u, 0u, 0u);
  return 0x135ebb8;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_StartTown_TypeInfo::vf3 */
uint F_00e83c80(void)
{
  GEN_ENTER(0xe83c80u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_StartTown_TypeInfo::vf4 */
uint F_00e83c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe83c90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[uVar1];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_StartTown_TypeInfo::vf5 */
uint F_00e83cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe83cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_StartTown_TypeInfo::vf6 */
uint F_00e83cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe83cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_StartTown_TypeInfo::vf7 */
uint F_00e83d10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe83d10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_StartTown_TypeInfo::vf8 */
uint F_00e83d30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe83d30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_StartTown_TypeInfo::vf9 */
uint F_00e83d50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe83d50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_2 + 4))(param_2);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_StartTown::vf1 */
uint F_00e83d70(unsigned int gen_a0)
{
  GEN_ENTER(0xe83d70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_StartTown::vf2 */
uint F_00e83d80(unsigned int gen_a0)
{
  GEN_ENTER(0xe83d80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0x84) {
    return in_ecx + 0x140;
  }
  return 0;
}

/* ref: FUN_00e83da0 */
uint F_00e83da0(void)
{
  GEN_ENTER(0xe83da0u, 0u, 0u, 0u, 0u);
  return 0x135ebc4;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_StartTown::vf3 */
uint F_00e83db0(void)
{
  GEN_ENTER(0xe83db0u, 0u, 0u, 0u, 0u);
  return 0x135ebc4;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringChainLevel_TypeInfo::vf3 */
uint F_00e83dd0(void)
{
  GEN_ENTER(0xe83dd0u, 0u, 0u, 0u, 0u);
  return 2;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringChainLevel_TypeInfo::vf4 */
uint F_00e83de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe83de0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[uVar1];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringChainLevel_TypeInfo::vf5 */
uint F_00e83e20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe83e20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringChainLevel_TypeInfo::vf6 */
uint F_00e83e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe83e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringChainLevel_TypeInfo::vf7 */
uint F_00e83e60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe83e60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringChainLevel_TypeInfo::vf8 */
uint F_00e83e80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe83e80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringChainLevel_TypeInfo::vf9 */
uint F_00e83ea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe83ea0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_2 + 4))(param_2);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringChainLevel::vf1 */
uint F_00e83ec0(unsigned int gen_a0)
{
  GEN_ENTER(0xe83ec0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringChainLevel::vf2 */
uint F_00e83ed0(unsigned int gen_a0)
{
  GEN_ENTER(0xe83ed0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0x84) {
    return in_ecx + 0x140;
  }
  return 0;
}

/* ref: FUN_00e83ef0 */
uint F_00e83ef0(void)
{
  GEN_ENTER(0xe83ef0u, 0u, 0u, 0u, 0u);
  return 0x135ebd0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringChainLevel::vf3 */
uint F_00e83f00(void)
{
  GEN_ENTER(0xe83f00u, 0u, 0u, 0u, 0u);
  return 0x135ebd0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringMap_TypeInfo::vf3 */
uint F_00e83f20(void)
{
  GEN_ENTER(0xe83f20u, 0u, 0u, 0u, 0u);
  return 3;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringMap_TypeInfo::vf4 */
uint F_00e83f30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe83f30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[uVar1];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringMap_TypeInfo::vf5 */
uint F_00e83f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe83f70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringMap_TypeInfo::vf6 */
uint F_00e83f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe83f90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringMap_TypeInfo::vf7 */
uint F_00e83fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe83fb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringMap_TypeInfo::vf8 */
uint F_00e83fd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe83fd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringMap_TypeInfo::vf9 */
uint F_00e83ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe83ff0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_2 + 4))(param_2);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringMap::vf1 */
uint F_00e84010(unsigned int gen_a0)
{
  GEN_ENTER(0xe84010u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringMap::vf2 */
uint F_00e84020(unsigned int gen_a0)
{
  GEN_ENTER(0xe84020u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0x84) {
    return in_ecx + 0x140;
  }
  return 0;
}

/* ref: FUN_00e84040 */
uint F_00e84040(void)
{
  GEN_ENTER(0xe84040u, 0u, 0u, 0u, 0u);
  return 0x135ebdc;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringMap::vf3 */
uint F_00e84050(void)
{
  GEN_ENTER(0xe84050u, 0u, 0u, 0u, 0u);
  return 0x135ebdc;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringPopPattern_TypeInfo::vf3 */
uint F_00e84070(void)
{
  GEN_ENTER(0xe84070u, 0u, 0u, 0u, 0u);
  return 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringPopPattern_TypeInfo::vf4 */
uint F_00e84080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe84080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[uVar1];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringPopPattern_TypeInfo::vf5 */
uint F_00e840c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe840c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringPopPattern_TypeInfo::vf6 */
uint F_00e840e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe840e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringPopPattern_TypeInfo::vf7 */
uint F_00e84100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe84100u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringPopPattern_TypeInfo::vf8 */
uint F_00e84120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe84120u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringPopPattern_TypeInfo::vf9 */
uint F_00e84140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe84140u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_2 + 4))(param_2);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringPopPattern::vf1 */
uint F_00e84160(unsigned int gen_a0)
{
  GEN_ENTER(0xe84160u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringPopPattern::vf2 */
uint F_00e84170(unsigned int gen_a0)
{
  GEN_ENTER(0xe84170u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0x84) {
    return in_ecx + 0x230;
  }
  return 0;
}

/* ref: FUN_00e84190 */
uint F_00e84190(void)
{
  GEN_ENTER(0xe84190u, 0u, 0u, 0u, 0u);
  return 0x135ebe8;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringPopPattern::vf3 */
uint F_00e841a0(void)
{
  GEN_ENTER(0xe841a0u, 0u, 0u, 0u, 0u);
  return 0x135ebe8;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringDivisionOpenFlags_TypeInfo::vf3 */
uint F_00e841c0(void)
{
  GEN_ENTER(0xe841c0u, 0u, 0u, 0u, 0u);
  return 5;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringDivisionOpenFlags_TypeInfo::vf4 */
uint F_00e841d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe841d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[uVar1];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringDivisionOpenFlags_TypeInfo::vf5 */
uint F_00e84210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe84210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringDivisionOpenFlags_TypeInfo::vf6 */
uint F_00e84230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe84230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringDivisionOpenFlags_TypeInfo::vf7 */
uint F_00e84250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe84250u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringDivisionOpenFlags_TypeInfo::vf8 */
uint F_00e84270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe84270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringDivisionOpenFlags_TypeInfo::vf9 */
uint F_00e84290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe84290u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_2 + 4))(param_2);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringDivisionOpenFlags::vf1 */
uint F_00e842b0(unsigned int gen_a0)
{
  GEN_ENTER(0xe842b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringDivisionOpenFlags::vf2 */
uint F_00e842c0(unsigned int gen_a0)
{
  GEN_ENTER(0xe842c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0x84) {
    return in_ecx + 0x170;
  }
  return 0;
}

/* ref: FUN_00e842e0 */
uint F_00e842e0(void)
{
  GEN_ENTER(0xe842e0u, 0u, 0u, 0u, 0u);
  return 0x135ebf4;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringDivisionOpenFlags::vf3 */
uint F_00e842f0(void)
{
  GEN_ENTER(0xe842f0u, 0u, 0u, 0u, 0u);
  return 0x135ebf4;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringItemGetFlags_TypeInfo::vf3 */
uint F_00e84310(void)
{
  GEN_ENTER(0xe84310u, 0u, 0u, 0u, 0u);
  return 6;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringItemGetFlags_TypeInfo::vf4 */
uint F_00e84320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe84320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[uVar1];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringItemGetFlags_TypeInfo::vf5 */
uint F_00e84360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe84360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringItemGetFlags_TypeInfo::vf6 */
uint F_00e84380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe84380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringItemGetFlags_TypeInfo::vf7 */
uint F_00e843a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe843a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringItemGetFlags_TypeInfo::vf8 */
uint F_00e843c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe843c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringItemGetFlags_TypeInfo::vf9 */
uint F_00e843e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe843e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_2 + 4))(param_2);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringItemGetFlags::vf1 */
uint F_00e84400(unsigned int gen_a0)
{
  GEN_ENTER(0xe84400u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringItemGetFlags::vf2 */
uint F_00e84410(unsigned int gen_a0)
{
  GEN_ENTER(0xe84410u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0x84) {
    return in_ecx + 0x170;
  }
  return 0;
}

/* ref: FUN_00e84430 */
uint F_00e84430(void)
{
  GEN_ENTER(0xe84430u, 0u, 0u, 0u, 0u);
  return 0x135ec00;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringItemGetFlags::vf3 */
uint F_00e84440(void)
{
  GEN_ENTER(0xe84440u, 0u, 0u, 0u, 0u);
  return 0x135ec00;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_RecipeDivisionOpenFlags_TypeInfo::vf3 */
uint F_00e84460(void)
{
  GEN_ENTER(0xe84460u, 0u, 0u, 0u, 0u);
  return 7;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_RecipeDivisionOpenFlags_TypeInfo::vf4 */
uint F_00e84470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe84470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[uVar1];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_RecipeDivisionOpenFlags_TypeInfo::vf5 */
uint F_00e844b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe844b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_RecipeDivisionOpenFlags_TypeInfo::vf6 */
uint F_00e844d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe844d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_RecipeDivisionOpenFlags_TypeInfo::vf7 */
uint F_00e844f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe844f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_RecipeDivisionOpenFlags_TypeInfo::vf8 */
uint F_00e84510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe84510u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_RecipeDivisionOpenFlags_TypeInfo::vf9 */
uint F_00e84530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe84530u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_2 + 4))(param_2);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_RecipeDivisionOpenFlags::vf1 */
uint F_00e84550(unsigned int gen_a0)
{
  GEN_ENTER(0xe84550u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_RecipeDivisionOpenFlags::vf2 */
uint F_00e84560(unsigned int gen_a0)
{
  GEN_ENTER(0xe84560u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0x84) {
    return in_ecx + 0x1a0;
  }
  return 0;
}

/* ref: FUN_00e84580 */
uint F_00e84580(void)
{
  GEN_ENTER(0xe84580u, 0u, 0u, 0u, 0u);
  return 0x135ec0c;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_RecipeDivisionOpenFlags::vf3 */
uint F_00e84590(void)
{
  GEN_ENTER(0xe84590u, 0u, 0u, 0u, 0u);
  return 0x135ec0c;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_RecipeCreateFlags_TypeInfo::vf3 */
uint F_00e845b0(void)
{
  GEN_ENTER(0xe845b0u, 0u, 0u, 0u, 0u);
  return 8;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_RecipeCreateFlags_TypeInfo::vf4 */
uint F_00e845c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe845c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[uVar1];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_RecipeCreateFlags_TypeInfo::vf5 */
uint F_00e84600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe84600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_RecipeCreateFlags_TypeInfo::vf6 */
uint F_00e84620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe84620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_RecipeCreateFlags_TypeInfo::vf7 */
uint F_00e84640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe84640u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_RecipeCreateFlags_TypeInfo::vf8 */
uint F_00e84660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe84660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_RecipeCreateFlags_TypeInfo::vf9 */
uint F_00e84680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe84680u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_2 + 4))(param_2);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_RecipeCreateFlags::vf1 */
uint F_00e846a0(unsigned int gen_a0)
{
  GEN_ENTER(0xe846a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_RecipeCreateFlags::vf2 */
uint F_00e846b0(unsigned int gen_a0)
{
  GEN_ENTER(0xe846b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0x84) {
    return in_ecx + 0x290;
  }
  return 0;
}

/* ref: FUN_00e846d0 */
uint F_00e846d0(void)
{
  GEN_ENTER(0xe846d0u, 0u, 0u, 0u, 0u);
  return 0x135ec18;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_RecipeCreateFlags::vf3 */
uint F_00e846e0(void)
{
  GEN_ENTER(0xe846e0u, 0u, 0u, 0u, 0u);
  return 0x135ec18;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_JournalConfig_TypeInfo::vf3 */
uint F_00e84700(void)
{
  GEN_ENTER(0xe84700u, 0u, 0u, 0u, 0u);
  return 9;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_JournalConfig_TypeInfo::vf4 */
uint F_00e84710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe84710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[uVar1];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_JournalConfig_TypeInfo::vf5 */
uint F_00e84750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe84750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_JournalConfig_TypeInfo::vf6 */
uint F_00e84770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe84770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_JournalConfig_TypeInfo::vf7 */
uint F_00e84790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe84790u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_JournalConfig_TypeInfo::vf8 */
uint F_00e847b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe847b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_JournalConfig_TypeInfo::vf9 */
uint F_00e847d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe847d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_2 + 4))(param_2);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_JournalConfig::vf1 */
uint F_00e847f0(unsigned int gen_a0)
{
  GEN_ENTER(0xe847f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_JournalConfig::vf2 */
uint F_00e84800(unsigned int gen_a0)
{
  GEN_ENTER(0xe84800u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0x84) {
    return in_ecx + 0x1a0;
  }
  return 0;
}

/* ref: FUN_00e84820 */
uint F_00e84820(void)
{
  GEN_ENTER(0xe84820u, 0u, 0u, 0u, 0u);
  return 0x135ec24;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_JournalConfig::vf3 */
uint F_00e84830(void)
{
  GEN_ENTER(0xe84830u, 0u, 0u, 0u, 0u);
  return 0x135ec24;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_LeveProperty_TypeInfo::vf3 */
uint F_00e84850(void)
{
  GEN_ENTER(0xe84850u, 0u, 0u, 0u, 0u);
  return 10;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_LeveProperty_TypeInfo::vf4 */
uint F_00e84860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe84860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[uVar1];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_LeveProperty_TypeInfo::vf5 */
uint F_00e848a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe848a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_LeveProperty_TypeInfo::vf6 */
uint F_00e848c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe848c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_LeveProperty_TypeInfo::vf7 */
uint F_00e848e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe848e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_LeveProperty_TypeInfo::vf8 */
uint F_00e84900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe84900u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_LeveProperty_TypeInfo::vf9 */
uint F_00e84920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe84920u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_2 + 4))(param_2);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_LeveProperty::vf1 */
uint F_00e84940(unsigned int gen_a0)
{
  GEN_ENTER(0xe84940u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_LeveProperty::vf2 */
uint F_00e84950(unsigned int gen_a0)
{
  GEN_ENTER(0xe84950u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0x84) {
    return in_ecx + 0x2c0;
  }
  return 0;
}

/* ref: FUN_00e84970 */
uint F_00e84970(void)
{
  GEN_ENTER(0xe84970u, 0u, 0u, 0u, 0u);
  return 0x135ec30;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_LeveProperty::vf3 */
uint F_00e84980(void)
{
  GEN_ENTER(0xe84980u, 0u, 0u, 0u, 0u);
  return 0x135ec30;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GrandCompany_TypeInfo::vf3 */
uint F_00e849a0(void)
{
  GEN_ENTER(0xe849a0u, 0u, 0u, 0u, 0u);
  return 0xb;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GrandCompany_TypeInfo::vf4 */
uint F_00e849b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe849b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[uVar1];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GrandCompany_TypeInfo::vf5 */
uint F_00e849f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe849f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GrandCompany_TypeInfo::vf6 */
uint F_00e84a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe84a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GrandCompany_TypeInfo::vf7 */
uint F_00e84a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe84a30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GrandCompany_TypeInfo::vf8 */
uint F_00e84a50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe84a50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GrandCompany_TypeInfo::vf9 */
uint F_00e84a70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe84a70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_2 + 4))(param_2);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GrandCompany::vf1 */
uint F_00e84a90(unsigned int gen_a0)
{
  GEN_ENTER(0xe84a90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GrandCompany::vf2 */
uint F_00e84aa0(unsigned int gen_a0)
{
  GEN_ENTER(0xe84aa0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0x84) {
    return in_ecx + 0x1a0;
  }
  return 0;
}

/* ref: FUN_00e84ac0 */
uint F_00e84ac0(void)
{
  GEN_ENTER(0xe84ac0u, 0u, 0u, 0u, 0u);
  return 0x135ec3c;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GrandCompany::vf3 */
uint F_00e84ad0(void)
{
  GEN_ENTER(0xe84ad0u, 0u, 0u, 0u, 0u);
  return 0x135ec3c;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_HpParams_TypeInfo::vf3 */
uint F_00e84af0(void)
{
  GEN_ENTER(0xe84af0u, 0u, 0u, 0u, 0u);
  return 0xc;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_HpParams_TypeInfo::vf4 */
uint F_00e84b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe84b00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[uVar1];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_HpParams_TypeInfo::vf5 */
uint F_00e84b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe84b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_HpParams_TypeInfo::vf6 */
uint F_00e84b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe84b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_HpParams_TypeInfo::vf7 */
uint F_00e84b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe84b80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_HpParams_TypeInfo::vf8 */
uint F_00e84ba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe84ba0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_HpParams_TypeInfo::vf9 */
uint F_00e84bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe84bc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_2 + 4))(param_2);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_HpParams::vf1 */
uint F_00e84be0(unsigned int gen_a0)
{
  GEN_ENTER(0xe84be0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_HpParams::vf2 */
uint F_00e84bf0(unsigned int gen_a0)
{
  GEN_ENTER(0xe84bf0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0xc4) {
    return in_ecx + 0x2a0;
  }
  return 0;
}

/* ref: FUN_00e84c10 */
uint F_00e84c10(void)
{
  GEN_ENTER(0xe84c10u, 0u, 0u, 0u, 0u);
  return 0x135ec48;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_HpParams::vf3 */
uint F_00e84c20(void)
{
  GEN_ENTER(0xe84c20u, 0u, 0u, 0u, 0u);
  return 0x135ec48;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_MpParams_TypeInfo::vf3 */
uint F_00e84c40(void)
{
  GEN_ENTER(0xe84c40u, 0u, 0u, 0u, 0u);
  return 0xd;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_MpParams_TypeInfo::vf4 */
uint F_00e84c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe84c50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[uVar1];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_MpParams_TypeInfo::vf5 */
uint F_00e84c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe84c90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_MpParams_TypeInfo::vf6 */
uint F_00e84cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe84cb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_MpParams_TypeInfo::vf7 */
uint F_00e84cd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe84cd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_MpParams_TypeInfo::vf8 */
uint F_00e84cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe84cf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_MpParams_TypeInfo::vf9 */
uint F_00e84d10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe84d10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_2 + 4))(param_2);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_MpParams::vf1 */
uint F_00e84d30(unsigned int gen_a0)
{
  GEN_ENTER(0xe84d30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_MpParams::vf2 */
uint F_00e84d40(unsigned int gen_a0)
{
  GEN_ENTER(0xe84d40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0x84) {
    return in_ecx + 0x1a0;
  }
  return 0;
}

/* ref: FUN_00e84d60 */
uint F_00e84d60(void)
{
  GEN_ENTER(0xe84d60u, 0u, 0u, 0u, 0u);
  return 0x135ec54;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_MpParams::vf3 */
uint F_00e84d70(void)
{
  GEN_ENTER(0xe84d70u, 0u, 0u, 0u, 0u);
  return 0x135ec54;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_TpParams_TypeInfo::vf3 */
uint F_00e84d90(void)
{
  GEN_ENTER(0xe84d90u, 0u, 0u, 0u, 0u);
  return 0xe;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_TpParams_TypeInfo::vf4 */
uint F_00e84da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe84da0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[uVar1];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_TpParams_TypeInfo::vf5 */
uint F_00e84de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe84de0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_TpParams_TypeInfo::vf6 */
uint F_00e84e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe84e00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_TpParams_TypeInfo::vf7 */
uint F_00e84e20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe84e20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_TpParams_TypeInfo::vf8 */
uint F_00e84e40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe84e40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_TpParams_TypeInfo::vf9 */
uint F_00e84e60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe84e60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_2 + 4))(param_2);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_TpParams::vf1 */
uint F_00e84e80(unsigned int gen_a0)
{
  GEN_ENTER(0xe84e80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_TpParams::vf2 */
uint F_00e84e90(unsigned int gen_a0)
{
  GEN_ENTER(0xe84e90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0x84) {
    return in_ecx + 0x200;
  }
  return 0;
}

/* ref: FUN_00e84eb0 */
uint F_00e84eb0(void)
{
  GEN_ENTER(0xe84eb0u, 0u, 0u, 0u, 0u);
  return 0x135ec60;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_TpParams::vf3 */
uint F_00e84ec0(void)
{
  GEN_ENTER(0xe84ec0u, 0u, 0u, 0u, 0u);
  return 0x135ec60;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbChara_TypeInfo::vf3 */
uint F_00e84ee0(void)
{
  GEN_ENTER(0xe84ee0u, 0u, 0u, 0u, 0u);
  return 0xf;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbChara_TypeInfo::vf4 */
uint F_00e84ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe84ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[uVar1];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbChara_TypeInfo::vf5 */
uint F_00e84f30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe84f30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbChara_TypeInfo::vf6 */
uint F_00e84f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe84f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbChara_TypeInfo::vf7 */
uint F_00e84f70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe84f70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbChara_TypeInfo::vf8 */
uint F_00e84f90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe84f90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbChara_TypeInfo::vf9 */
uint F_00e84fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe84fb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_2 + 4))(param_2);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbChara::vf1 */
uint F_00e84fd0(unsigned int gen_a0)
{
  GEN_ENTER(0xe84fd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbChara::vf2 */
uint F_00e84fe0(unsigned int gen_a0)
{
  GEN_ENTER(0xe84fe0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0xe4) {
    return in_ecx + 0xa70;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbChara::vf3 */
uint F_00e85010(void)
{
  GEN_ENTER(0xe85010u, 0u, 0u, 0u, 0u);
  return 0x135ec6c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaStatus_TypeInfo::vf3 */
uint F_00e850a0(void)
{
  GEN_ENTER(0xe850a0u, 0u, 0u, 0u, 0u);
  return 0x10;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaStatus_TypeInfo::vf4 */
uint F_00e850b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe850b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[uVar1];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaStatus_TypeInfo::vf5 */
uint F_00e850f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe850f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaStatus_TypeInfo::vf6 */
uint F_00e85110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe85110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaStatus_TypeInfo::vf7 */
uint F_00e85130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe85130u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaStatus_TypeInfo::vf8 */
uint F_00e85150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe85150u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaStatus_TypeInfo::vf9 */
uint F_00e85170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe85170u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_2 + 4))(param_2);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaStatus::vf1 */
uint F_00e85190(unsigned int gen_a0)
{
  GEN_ENTER(0xe85190u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaStatus::vf2 */
uint F_00e851a0(unsigned int gen_a0)
{
  GEN_ENTER(0xe851a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0xa4) {
    return in_ecx + 0x280;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaStatus::vf3 */
uint F_00e851d0(void)
{
  GEN_ENTER(0xe851d0u, 0u, 0u, 0u, 0u);
  return 0x135ec9c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaAchievement_TypeInfo::vf3 */
uint F_00e85260(void)
{
  GEN_ENTER(0xe85260u, 0u, 0u, 0u, 0u);
  return 0x11;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaAchievement_TypeInfo::vf4 */
uint F_00e85270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe85270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[uVar1];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaAchievement_TypeInfo::vf5 */
uint F_00e852b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe852b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaAchievement_TypeInfo::vf6 */
uint F_00e852d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe852d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaAchievement_TypeInfo::vf7 */
uint F_00e852f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe852f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaAchievement_TypeInfo::vf8 */
uint F_00e85310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe85310u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaAchievement_TypeInfo::vf9 */
uint F_00e85330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe85330u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_2 + 4))(param_2);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaAchievement::vf1 */
uint F_00e85350(unsigned int gen_a0)
{
  GEN_ENTER(0xe85350u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaAchievement::vf2 */
uint F_00e85360(unsigned int gen_a0)
{
  GEN_ENTER(0xe85360u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0xa4) {
    return in_ecx + 0x400;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaAchievement::vf3 */
uint F_00e85390(void)
{
  GEN_ENTER(0xe85390u, 0u, 0u, 0u, 0u);
  return 0x135eccc;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaCountFreq_TypeInfo::vf3 */
uint F_00e85420(void)
{
  GEN_ENTER(0xe85420u, 0u, 0u, 0u, 0u);
  return 0x12;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaCountFreq_TypeInfo::vf4 */
uint F_00e85430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe85430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[uVar1];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaCountFreq_TypeInfo::vf5 */
uint F_00e85470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe85470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaCountFreq_TypeInfo::vf6 */
uint F_00e85490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe85490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaCountFreq_TypeInfo::vf7 */
uint F_00e854b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe854b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaCountFreq_TypeInfo::vf8 */
uint F_00e854d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe854d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaCountFreq_TypeInfo::vf9 */
uint F_00e854f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe854f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_2 + 4))(param_2);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaCountFreq::vf1 */
uint F_00e85510(unsigned int gen_a0)
{
  GEN_ENTER(0xe85510u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaCountFreq::vf2 */
uint F_00e85520(unsigned int gen_a0)
{
  GEN_ENTER(0xe85520u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0xa4) {
    return in_ecx + 0x2e0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaCountFreq::vf3 */
uint F_00e85550(void)
{
  GEN_ENTER(0xe85550u, 0u, 0u, 0u, 0u);
  return 0x135ecfc;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaCount_TypeInfo::vf3 */
uint F_00e855e0(void)
{
  GEN_ENTER(0xe855e0u, 0u, 0u, 0u, 0u);
  return 0x13;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaCount_TypeInfo::vf4 */
uint F_00e855f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe855f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[uVar1];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaCount_TypeInfo::vf5 */
uint F_00e85630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe85630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaCount_TypeInfo::vf6 */
uint F_00e85650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe85650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaCount_TypeInfo::vf7 */
uint F_00e85670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe85670u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaCount_TypeInfo::vf8 */
uint F_00e85690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe85690u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaCount_TypeInfo::vf9 */
uint F_00e856b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe856b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_2 + 4))(param_2);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaCount::vf1 */
uint F_00e856d0(unsigned int gen_a0)
{
  GEN_ENTER(0xe856d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaCount::vf2 */
uint F_00e856e0(unsigned int gen_a0)
{
  GEN_ENTER(0xe856e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0xa4) {
    return in_ecx + 0x670;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaCount::vf3 */
uint F_00e85710(void)
{
  GEN_ENTER(0xe85710u, 0u, 0u, 0u, 0u);
  return 0x135ed2c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPc_TypeInfo::vf3 */
uint F_00e857a0(void)
{
  GEN_ENTER(0xe857a0u, 0u, 0u, 0u, 0u);
  return 0x14;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPc_TypeInfo::vf4 */
uint F_00e857b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe857b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[uVar1];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPc_TypeInfo::vf5 */
uint F_00e857f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe857f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPc_TypeInfo::vf6 */
uint F_00e85810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe85810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPc_TypeInfo::vf7 */
uint F_00e85830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe85830u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPc_TypeInfo::vf8 */
uint F_00e85850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe85850u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPc_TypeInfo::vf9 */
uint F_00e85870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe85870u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_2 + 4))(param_2);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPc::vf1 */
uint F_00e85890(unsigned int gen_a0)
{
  GEN_ENTER(0xe85890u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPc::vf2 */
uint F_00e858a0(unsigned int gen_a0)
{
  GEN_ENTER(0xe858a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0xa4) {
    return in_ecx + 0x25c0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPc::vf3 */
uint F_00e858d0(void)
{
  GEN_ENTER(0xe858d0u, 0u, 0u, 0u, 0u);
  return 0x135ed5c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPcClass_TypeInfo::vf3 */
uint F_00e85960(void)
{
  GEN_ENTER(0xe85960u, 0u, 0u, 0u, 0u);
  return 0x15;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPcClass_TypeInfo::vf4 */
uint F_00e85970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe85970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[uVar1];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPcClass_TypeInfo::vf5 */
uint F_00e859b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe859b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPcClass_TypeInfo::vf6 */
uint F_00e859d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe859d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPcClass_TypeInfo::vf7 */
uint F_00e859f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe859f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPcClass_TypeInfo::vf8 */
uint F_00e85a10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe85a10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPcClass_TypeInfo::vf9 */
uint F_00e85a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe85a30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_2 + 4))(param_2);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPcClass::vf1 */
uint F_00e85a50(unsigned int gen_a0)
{
  GEN_ENTER(0xe85a50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPcClass::vf2 */
uint F_00e85a60(unsigned int gen_a0)
{
  GEN_ENTER(0xe85a60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0xa4) {
    return in_ecx + 0x1c0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPcClass::vf3 */
uint F_00e85a90(void)
{
  GEN_ENTER(0xe85a90u, 0u, 0u, 0u, 0u);
  return 0x135ed8c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPcClassJob_TypeInfo::vf3 */
uint F_00e85b20(void)
{
  GEN_ENTER(0xe85b20u, 0u, 0u, 0u, 0u);
  return 0x16;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPcClassJob_TypeInfo::vf4 */
uint F_00e85b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe85b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[uVar1];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPcClassJob_TypeInfo::vf5 */
uint F_00e85b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe85b70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPcClassJob_TypeInfo::vf6 */
uint F_00e85b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe85b90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPcClassJob_TypeInfo::vf7 */
uint F_00e85bb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe85bb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPcClassJob_TypeInfo::vf8 */
uint F_00e85bd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe85bd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPcClassJob_TypeInfo::vf9 */
uint F_00e85bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe85bf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_2 + 4))(param_2);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPcClassJob::vf1 */
uint F_00e85c10(unsigned int gen_a0)
{
  GEN_ENTER(0xe85c10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPcClassJob::vf2 */
uint F_00e85c20(unsigned int gen_a0)
{
  GEN_ENTER(0xe85c20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0xa4) {
    return in_ecx + 0x1c0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPcClassJob::vf3 */
uint F_00e85c50(void)
{
  GEN_ENTER(0xe85c50u, 0u, 0u, 0u, 0u);
  return 0x135edbc;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaQuest_TypeInfo::vf3 */
uint F_00e85ce0(void)
{
  GEN_ENTER(0xe85ce0u, 0u, 0u, 0u, 0u);
  return 0x17;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaQuest_TypeInfo::vf4 */
uint F_00e85cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe85cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[uVar1];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaQuest_TypeInfo::vf5 */
uint F_00e85d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe85d30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaQuest_TypeInfo::vf6 */
uint F_00e85d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe85d50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaQuest_TypeInfo::vf7 */
uint F_00e85d70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe85d70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaQuest_TypeInfo::vf8 */
uint F_00e85d90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe85d90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaQuest_TypeInfo::vf9 */
uint F_00e85db0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe85db0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_2 + 4))(param_2);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaQuest::vf1 */
uint F_00e85dd0(unsigned int gen_a0)
{
  GEN_ENTER(0xe85dd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaQuest::vf2 */
uint F_00e85de0(unsigned int gen_a0)
{
  GEN_ENTER(0xe85de0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0xa4) {
    return in_ecx + 0x1c0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaQuest::vf3 */
uint F_00e85e10(void)
{
  GEN_ENTER(0xe85e10u, 0u, 0u, 0u, 0u);
  return 0x135edec;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPvP_TypeInfo::vf3 */
uint F_00e85ea0(void)
{
  GEN_ENTER(0xe85ea0u, 0u, 0u, 0u, 0u);
  return 0x18;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPvP_TypeInfo::vf4 */
uint F_00e85eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe85eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[uVar1];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPvP_TypeInfo::vf5 */
uint F_00e85ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe85ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPvP_TypeInfo::vf6 */
uint F_00e85f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe85f10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPvP_TypeInfo::vf7 */
uint F_00e85f30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe85f30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPvP_TypeInfo::vf8 */
uint F_00e85f50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe85f50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPvP_TypeInfo::vf9 */
uint F_00e85f70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe85f70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_2 + 4))(param_2);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPvP::vf1 */
uint F_00e85f90(unsigned int gen_a0)
{
  GEN_ENTER(0xe85f90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPvP::vf2 */
uint F_00e85fa0(unsigned int gen_a0)
{
  GEN_ENTER(0xe85fa0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0xa4) {
    return in_ecx + 0x1c0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPvP::vf3 */
uint F_00e85fd0(void)
{
  GEN_ENTER(0xe85fd0u, 0u, 0u, 0u, 0u);
  return 0x135ee1c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaRetainer_TypeInfo::vf3 */
uint F_00e86060(void)
{
  GEN_ENTER(0xe86060u, 0u, 0u, 0u, 0u);
  return 0x19;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaRetainer_TypeInfo::vf4 */
uint F_00e86070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe86070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[uVar1];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaRetainer_TypeInfo::vf5 */
uint F_00e860b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe860b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaRetainer_TypeInfo::vf6 */
uint F_00e860d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe860d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaRetainer_TypeInfo::vf7 */
uint F_00e860f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe860f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaRetainer_TypeInfo::vf8 */
uint F_00e86110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe86110u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaRetainer_TypeInfo::vf9 */
uint F_00e86130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe86130u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_2 + 4))(param_2);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaRetainer::vf1 */
uint F_00e86150(unsigned int gen_a0)
{
  GEN_ENTER(0xe86150u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaRetainer::vf2 */
uint F_00e86160(unsigned int gen_a0)
{
  GEN_ENTER(0xe86160u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0xa4) {
    return in_ecx + 0x340;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaRetainer::vf3 */
uint F_00e86190(void)
{
  GEN_ENTER(0xe86190u, 0u, 0u, 0u, 0u);
  return 0x135ee4c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItem_TypeInfo::vf3 */
uint F_00e86220(void)
{
  GEN_ENTER(0xe86220u, 0u, 0u, 0u, 0u);
  return 0x1a;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItem_TypeInfo::vf4 */
uint F_00e86230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe86230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[uVar1];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItem_TypeInfo::vf5 */
uint F_00e86270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe86270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItem_TypeInfo::vf6 */
uint F_00e86290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe86290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItem_TypeInfo::vf7 */
uint F_00e862b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe862b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItem_TypeInfo::vf8 */
uint F_00e862d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe862d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItem_TypeInfo::vf9 */
uint F_00e862f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe862f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_2 + 4))(param_2);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItem::vf1 */
uint F_00e86310(unsigned int gen_a0)
{
  GEN_ENTER(0xe86310u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItem::vf2 */
uint F_00e86320(unsigned int gen_a0)
{
  GEN_ENTER(0xe86320u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0xa4) {
    return in_ecx + 0x4c0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItem::vf3 */
uint F_00e86350(void)
{
  GEN_ENTER(0xe86350u, 0u, 0u, 0u, 0u);
  return 0x135ee7c;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbGilItem_TypeInfo::vf3 */
uint F_00e863e0(void)
{
  GEN_ENTER(0xe863e0u, 0u, 0u, 0u, 0u);
  return 0x1b;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbGilItem_TypeInfo::vf4 */
uint F_00e863f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe863f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  if (uVar1 < 0x51) {
    *param_1 = *(undefined4 *)(&REFG(undefined, 0x135fd10) + uVar1 * 4);
    return (uint)(&REFG(undefined * PTR32, 0x135fbc8))[uVar1];
  }
  *param_1 = 0;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbGilItem_TypeInfo::vf5 */
uint F_00e86430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe86430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e82f80(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbGilItem_TypeInfo::vf6 */
uint F_00e86450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe86450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e830a0(uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbGilItem_TypeInfo::vf7 */
uint F_00e86470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe86470u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e831d0(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbGilItem_TypeInfo::vf8 */
uint F_00e86490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe86490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  uVar1 = F_00e83330(uVar1,param_2);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbGilItem_TypeInfo::vf9 */
uint F_00e864b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe864b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_2 + 4))(param_2);
  uVar1 = F_00e833a0(param_1,uVar1);
  return uVar1;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbGilItem::vf1 */
uint F_00e864d0(unsigned int gen_a0)
{
  GEN_ENTER(0xe864d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbGilItem::vf2 */
uint F_00e864e0(unsigned int gen_a0)
{
  GEN_ENTER(0xe864e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != -0xa4) {
    return in_ecx + 0x220;
  }
  return 0;
}

