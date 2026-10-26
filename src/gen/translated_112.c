#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: Client::Game::Object::GameObject::vf50 */
byte F_00a5f840(void)
{
  GEN_ENTER(0xa5f840u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Object::GameObject::vf51 */
uint F_00a5f850(void)
{
  GEN_ENTER(0xa5f850u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00a5f860 */
uint F_00a5f860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5f860u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  
  if (*(undefined * PTR32 *)((int)this + 0xf0) != (undefined *)0x0) {
    bVar1 = F_005dbc90(*(undefined * PTR32 *)((int)this + 0xf0),param_1);
    in_EAX = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      in_EAX = F_005eb180(*(undefined * PTR32 *)((int)this + 0xf0),param_1,param_2);
    }
  }
  return in_EAX;
}

/* ref: FUN_00a5f8a0 */
uint F_00a5f8a0(unsigned int gen_a0)
{
  GEN_ENTER(0xa5f8a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0xec);
  if (uVar1 == 0) {
    if (*(undefined * PTR32 *)((int)this + 0xf0) != (undefined *)0x0) {
      uVar1 = F_005e3290(*(undefined * PTR32 *)((int)this + 0xf0),0x2d);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_00a5f8c0 */
uint F_00a5f8c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5f8c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  byte bVar2;
  uint in_EAX = 0;
  char * pcVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_1 == (char *)0x0) {
    *(undefined1 *)((int)this + 0x30) = 0;
    return in_EAX;
  }
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  uVar4 = F_00c4d9ef((int)this + 0x30,0x40,param_1,0xffffffff);
  if (0x3f < (uint)((int)pcVar3 - (int)(param_1 + 1))) {
    uVar5 = 0x3e;
    do {
      bVar2 = *(byte *)((int)this + 0x30 + uVar5);
      if ((bVar2 & 0xc0) == 0xc0) {
        *(undefined1 *)(uVar5 + 0x30 + (int)this) = 0;
        return uVar5;
      }
      if (-1 < (char)bVar2) {
        return uVar5;
      }
      uVar4 = uVar5 - 1;
      *(undefined1 *)((int)this + uVar5 + 0x30) = 0;
      uVar5 = uVar4;
    } while (-1 < (int)uVar4);
  }
  return uVar4;
}

/* ref: Client::Game::Object::GameObject::vf31 */
byte F_00a5f940(unsigned int gen_a0)
{
  GEN_ENTER(0xa5f940u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x8e) >> 5 & 1;
}

/* ref: Client::Game::Object::GameObject::vf32 */
unsigned int F_00a5f950(unsigned int gen_a0)
{
  GEN_ENTER(0xa5f950u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(byte *)(in_ecx + 0x8e) = *(byte *)(in_ecx + 0x8e) | 0x20;
  return 0;
}

/* ref: Client::Game::Object::GameObject::vf48 */
byte F_00a5f960(void)
{
  GEN_ENTER(0xa5f960u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Game::Object::GameObject::vf43 */
unsigned int F_00a5f970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5f970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  
  this[0x90] = (undefined1)((byte)this[0x90] & 0xfc);
  uVar1 = REFG(float, 0x1087f04);
  *(undefined4 *)(this + 0x74) = 0xe0000000;
  *(undefined4 *)(this + 0x84) = 0xe0000000;
  *(undefined2 *)(this + 0x88) = (undefined2)param_1;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x170) = 0;
  this[0x70] = (undefined1)0x0;
  *(undefined2 *)(this + 0x8a) = 0;
  this[0x8e] = (undefined1)((byte)this[0x8e] & 0x7c | 3);
  this[0x8f] = (undefined1)((byte)this[0x8f] & 3 | 0xec);
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  this[0x8e] = (undefined1)((byte)this[0x8e] & 0x83);
  this[0x8f] = (undefined1)((byte)this[0x8f] & 0xfd);
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined2 *)(this + 0x8c) = 0xd;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0xb4) = uVar1;
  *(undefined4 *)(this + 0xb8) = uVar1;
  *(undefined4 *)(this + 0xbc) = uVar1;
  uVar1 = REFG(float, 0x1088068);
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0x174) = 0;
  *(undefined4 *)(this + 0x178) = 0;
  *(undefined4 *)(this + 0xc0) = uVar1;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xc4) = 0;
  *(undefined2 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0x100) = 0;
  *(undefined4 *)(this + 0x104) = 0;
  *(undefined4 *)(this + 0x108) = 0;
  *(undefined4 *)(this + 0x10c) = 0;
  *(undefined4 *)(this + 0x110) = 0;
  *(undefined4 *)(this + 0x114) = 0;
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 0x124) = 0;
  *(undefined4 *)(this + 0x128) = 0;
  *(undefined4 *)(this + 0x130) = 0;
  *(undefined4 *)(this + 0x134) = 0;
  *(undefined4 *)(this + 0x138) = 0;
  *(undefined4 *)(this + 0x140) = *(undefined4 *)(this + 0x120);
  *(undefined4 *)(this + 0x144) = *(undefined4 *)(this + 0x124);
  *(undefined4 *)(this + 0x148) = *(undefined4 *)(this + 0x128);
  *(undefined4 *)(this + 0x150) = *(undefined4 *)(this + 0x130);
  *(undefined4 *)(this + 0x154) = *(undefined4 *)(this + 0x134);
  *(undefined4 *)(this + 0x158) = *(undefined4 *)(this + 0x138);
  this[0x8f] = (undefined1)((byte)this[0x8f] & 0xfe);
  *(undefined4 *)(this + 0x11c) = 0x900;
  *(undefined4 *)(this + 0x160) = 0;
  *(undefined4 *)(this + 0x164) = 0;
  *(undefined4 *)(this + 0x168) = 0;
  this[0x90] = (undefined1)((byte)this[0x90] & 0xf3);
  return 0;
}

/* ref: Client::Game::Object::GameObject::vf44 */
uint F_00a5fb90(unsigned int gen_a0)
{
  GEN_ENTER(0xa5fb90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  code * pcVar3;
  uint uVar4;
  undefined * this_00;
  undefined * pGVar5;
  
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0xb8))(this);
  if ((char)uVar4 == '\0') {
    pGVar5 = this;
    this_00 = (undefined *)F_006b8c00();
    uVar4 = F_006e5b10(this_00,pGVar5);
  }
  piVar1 = *(int * PTR32 *)(this + 0xec);
  *(undefined4 *)(this + 0x174) = 0;
  if (piVar1 == (int *)0x0) goto LAB_00a5fbf9;
  if (*(int *)(this + 0x7c) == 0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    puVar2 = *(undefined4 * PTR32 *)(this + 0xec);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      goto LAB_00a5fbe2;
    }
  }
  else {
LAB_00a5fbe2: ;
    *(undefined4 *)(this + 0xec) = 0;
  }
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,0xb,0);
LAB_00a5fbf9: ;
  if (*(int *)(this + 0xf0) != 0) {
    if (*(int *)(this + 0x7c) == 0) {
      F_00a1b5a0(this + 0xf0);
    }
    pcVar3 = *(gen_code32 *)(*(int *)this + 0x28);
    *(undefined4 *)(this + 0xf0) = 0;
    uVar4 = (*pcVar3)(this,0xb,0);
  }
  return uVar4;
}

/* ref: Client::Game::Object::GameObject::vf12 */
unsigned int F_00a5fc30(unsigned int gen_a0)
{
  GEN_ENTER(0xa5fc30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  code * pcVar3;
  
  if (((byte)this[0x8e] & 0x80) == 0) {
    return 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0xec);
  if (piVar1 == (int *)0x0) goto LAB_00a5fc7c;
  if (*(int *)(this + 0x7c) == 0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    puVar2 = *(undefined4 * PTR32 *)(this + 0xec);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      goto LAB_00a5fc65;
    }
  }
  else {
LAB_00a5fc65: ;
    *(undefined4 *)(this + 0xec) = 0;
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,0xb,0);
LAB_00a5fc7c: ;
  if (*(int *)(this + 0xf0) != 0) {
    if (*(int *)(this + 0x7c) == 0) {
      F_00a1b5a0(this + 0xf0);
    }
    pcVar3 = *(gen_code32 *)(*(int *)this + 0x28);
    *(undefined4 *)(this + 0xf0) = 0;
    (*pcVar3)(this,0xb,0);
  }
  this[0x8e] = (undefined1)((byte)this[0x8e] & 0x6f);
  return 0;
}

/* ref: FUN_00a5fcc0 */
byte F_00a5fcc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5fcc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  byte bVar2;
  uint uVar3;
  
  if (*(undefined * PTR32 *)((int)this + 0xf0) == (undefined *)0x0) {
    piVar1 = *(int * PTR32 *)((int)this + 0xec);
    if ((piVar1 != (int *)0x0) && (*(char *)((int)piVar1 + 0x65) == '\x03')) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x50))(piVar1,param_1);
      return (byte)uVar3;
    }
  }
  else {
    bVar2 = F_005d5fe0(*(undefined * PTR32 *)((int)this + 0xf0));
    if (bVar2 != 0) {
      bVar2 = F_005eae70(*(undefined * PTR32 *)((int)this + 0xf0),param_1);
      return bVar2;
    }
  }
  return 0;
}

/* ref: FUN_00a5fd10 */
uint F_00a5fd10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5fd10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  float fVar2;
  int * piVar3;
  byte bVar4;
  float * pfVar5;
  uint uVar6;
  float10 fVar7;
  
  *param_1 = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  if (*(undefined * PTR32 *)((int)this + 0xf0) != (undefined *)0x0) {
    bVar4 = F_005d5fe0(*(undefined * PTR32 *)((int)this + 0xf0));
    if (bVar4 != 0) {
      bVar4 = F_005eae70(*(undefined * PTR32 *)((int)this + 0xf0),param_2);
      if (bVar4 == 0) {
        param_2 = 0x2e;
      }
      bVar4 = F_005eae70(*(undefined * PTR32 *)((int)this + 0xf0),param_2);
      if (bVar4 != 0) {
        F_005eb040(*(undefined * PTR32 *)((int)this + 0xf0),param_1,param_2);
      }
      goto LAB_00a5fdf3;
    }
  }
  piVar3 = *(int * PTR32 *)((int)this + 0xec);
  if ((piVar3 != (int *)0x0) && (*(char *)((int)piVar3 + 0x65) == '\x03')) {
    uVar6 = ((code *)*(gen_code32 *)(*piVar3 + 0x50))(piVar3,param_2);
    if ((char)uVar6 == '\0') {
      param_2 = 0x2e;
    }
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xec) + 0x50))))(*(int * PTR32 *)((int)this + 0xec),param_2);
    if ((char)uVar6 != '\0') {
      pfVar5 = ((float *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xec) + 0x48))))
                                  (*(int * PTR32 *)((int)this + 0xec),&(*(float *)(gen_frame + 0x0)),param_2)));
      *param_1 = *pfVar5;
      param_1[1] = pfVar5[1];
      param_1[2] = pfVar5[2];
    }
  }
LAB_00a5fdf3: ;
  if (*(int *)((int)this + 0x7c) == 0) {
    (*(float *)(gen_frame + 0x1c)) = *(float *)((int)this + 0xb4);
    fVar7 = (float10)*(float *)((int)this + 0xb4);
    *param_1 = (float)(fVar7 * (float10)*param_1);
    param_1[1] = (float)((float10)param_1[1] * fVar7);
    param_1[2] = (float)(fVar7 * (float10)param_1[2]);
    uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0xb8))(this);
    if (((char)uVar6 != '\0') && (*(int *)((int)this + 0xec) != 0)) {
      fVar1 = *((float *)GEN_TOP((*(int *)((int)this + 0xec) + 0x294)));
      (*(float *)(gen_frame + 0x1c)) = fVar1;
      fVar7 = (float10)fVar1;
      *param_1 = (float)(fVar7 * (float10)*param_1);
      param_1[1] = (float)((float10)param_1[1] * fVar7);
      param_1[2] = (float)(fVar7 * (float10)param_1[2]);
    }
  }
  fVar1 = *(float *)((int)this + 0xd8);
  (*(float *)(gen_frame + 0x0)) = *(float *)((int)this + 0xd0);
  (*(float *)(gen_frame + 0x8)) = fVar1;
  (*(float *)(gen_frame + 0x4)) = *(float *)((int)this + 0xd4);
  fVar2 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0xc4) + (float10)*(float *)((int)this + 0xd4))));
  (*(float *)(gen_frame + 0x4)) = fVar2;
  *param_1 = ((float)GEN_TOF(((float10)*param_1 + (float10)*(float *)((int)this + 0xd0))));
  param_1[1] = (float)((float10)param_1[1] + (float10)fVar2);
  param_1[2] = (float)((float10)param_1[2] + (float10)fVar1);
  return (uint)param_1;
}

/* ref: FUN_00a5feb0 */
uint F_00a5feb0(unsigned int gen_a0)
{
  GEN_ENTER(0xa5feb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x7c) != 0) {
    if (*(int *)((int)this + 0xf0) != 0) {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xf0) + 0xe4))))(*(int * PTR32 *)((int)this + 0xf0));
      return uVar1;
    }
    if (*(int *)((int)this + 0xec) != 0) {
      return *(int *)((int)this + 0xec) + 0x30;
    }
  }
  return (int)this + 0xa0;
}

/* ref: FUN_00a5fef0 */
uint F_00a5fef0(unsigned int gen_a0)
{
  GEN_ENTER(0xa5fef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 0xf0) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xf0) + 0xe4))))(*(int * PTR32 *)((int)this + 0xf0));
    return uVar1;
  }
  if (*(int *)((int)this + 0xec) != 0) {
    return *(int *)((int)this + 0xec) + 0x30;
  }
  return (int)this + 0xa0;
}

/* ref: Client::Game::Object::GameObject::vf21 */
uint F_00a5ff20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5ff20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined1 GVar1;
  uint uVar2;
  byte bVar3;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this,param_1,(uint)((byte)this[0x8e] >> 6 & 1));
  GVar1 = this[0x8e];
  uVar2 = CONCAT31((int3)(uVar2 >> 8),GVar1);
  bVar3 = (byte)param_1;
  if ((((byte)GVar1 >> 6 & 1) != bVar3) &&
     (this[0x8e] = (undefined1)((bVar3 << 6 ^ (byte)GVar1) & 0x40 ^ (byte)GVar1), bVar3 != 0)) {
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(this + 0xa0);
    *(undefined4 *)(this + 0x14) = *(undefined4 *)(this + 0xa4);
    *(undefined4 *)(this + 0x18) = *(undefined4 *)(this + 0xa8);
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this);
  }
  return uVar2;
}

/* ref: FUN_00a5ffa0 */
float F_00a5ffa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5ffa0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  float10 fVar3;
  
  if (*(int *)(param_1 + 0x7c) == 0) {
LAB_00a5ffef: ;
    uVar1 = param_1 + 0xa0;
  }
  else if (*(int *)(param_1 + 0xf0) == 0) {
    uVar1 = *(int *)(param_1 + 0xec) + 0x30;
    if (*(int *)(param_1 + 0xec) == 0) goto LAB_00a5ffef;
  }
  else {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xf0) + 0xe4))))(*(int * PTR32 *)(param_1 + 0xf0));
  }
  if (*(int *)(param_2 + 0x7c) != 0) {
    if (*(int *)(param_2 + 0xf0) != 0) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_2 + 0xf0) + 0xe4))))(*(int * PTR32 *)(param_2 + 0xf0));
      goto LAB_00a6002f;
    }
    if (*(int *)(param_2 + 0xec) != 0) {
      uVar2 = *(int *)(param_2 + 0xec) + 0x30;
      goto LAB_00a6002f;
    }
  }
  uVar2 = param_2 + 0xa0;
LAB_00a6002f: ;
  fVar3 = F_00c4d1fa((float10)((float)GEN_TOF(((float10)*(float *)(uVar2 + 8) -
                                       (float10)*(float *)(uVar1 + 8)))));
  fVar3 = (float10)(float)fVar3;
  if ((float10)*(double *)&REFG(undefined, 0x1080228) < fVar3) {
    fVar3 = (float10)(float)(fVar3 - (float10)*(float *)&REFG(undefined, 0x1334a30));
  }
  if (fVar3 <= (float10)*(double *)&REFG(undefined, 0x109c9b8)) {
    return (float)((float10)*(float *)&REFG(undefined, 0x1334a30) + fVar3);
  }
  return (float)fVar3;
}

/* ref: FUN_00a600a0 */
double F_00a600a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa600a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  float * pfVar1;
  float * pfVar2;
  
  if (((param_1 != (undefined *)0x0) && (param_2 != (undefined *)0x0)) && (param_1 != param_2)) {
    pfVar1 = (float *)F_00a5feb0(param_2);
    pfVar2 = (float *)F_00a5feb0(param_1);
    return (double)((float)GEN_TOF((((float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)(float)((float10)*pfVar2
                                                                                  - (float10)*pfVar1
                                                                                  ) *
                                                                  (float10)(float)((float10)*pfVar2
                                                                                  - (float10)*pfVar1
                                                                                  ) +
                                                                 (float10)(float)((float10)pfVar2[2]
                                                                                 - (float10)pfVar1[2
                                                  ]) * (float10)(float)((float10)pfVar2[2] -
                                                                       (float10)pfVar1[2]))))))) -
                           (float10)*(float *)((int)param_1 + 0xc0)) -
                          (float10)*(float *)((int)param_2 + 0xc0))));
  }
  return 0.0;
}

/* ref: FUN_00a60140 */
float F_00a60140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa60140u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  float * pfVar1;
  float * pfVar2;
  
  if (((param_1 != (undefined *)0x0) && (param_2 != (undefined *)0x0)) && (param_1 != param_2)) {
    pfVar1 = (float *)F_00a5feb0(param_2);
    pfVar2 = (float *)F_00a5feb0(param_1);
    return ((float)GEN_TOF((((float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)(float)((float10)pfVar2[2] -
                                                                          (float10)pfVar1[2]) *
                                                          (float10)(float)((float10)pfVar2[2] -
                                                                          (float10)pfVar1[2]) +
                                                         ((float10)(float)((float10)*pfVar2 -
                                                                          (float10)*pfVar1) *
                                                          (float10)(float)((float10)*pfVar2 -
                                                                          (float10)*pfVar1) +
                                                         (float10)(float)((float10)pfVar2[1] -
                                                                         (float10)pfVar1[1]) *
                                                         (float10)(float)((float10)pfVar2[1] -
                                                                         (float10)pfVar1[1])))))))) -
                   (float10)*(float *)((int)param_1 + 0xc0)) -
                  (float10)*(float *)((int)param_2 + 0xc0))));
  }
  return (float)(float10)0;
}

/* ref: FUN_00a601f0 */
float F_00a601f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa601f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  double dVar1;
  
  dVar1 = F_00a600a0(this,param_1);
  return (float)dVar1;
}

/* ref: FUN_00a60210 */
float F_00a60210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa60210u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if (param_1 == param_2) {
    return 0.0;
  }
  if (*(int *)(param_2 + 0x7c) != 0) {
    if (*(int *)(param_2 + 0xf0) != 0) {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_2 + 0xf0) + 0xe4))))(*(int * PTR32 *)(param_2 + 0xf0));
      goto LAB_00a60264;
    }
    uVar1 = *(int *)(param_2 + 0xec) + 0x30;
    if (*(int *)(param_2 + 0xec) != 0) goto LAB_00a60264;
  }
  uVar1 = param_2 + 0xa0;
LAB_00a60264: ;
  if (*(int *)(param_1 + 0x7c) != 0) {
    if (*(int *)(param_1 + 0xf0) != 0) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xf0) + 0xe4))))(*(int * PTR32 *)(param_1 + 0xf0));
      return ((float)GEN_TOF(((float10)*(float *)(uVar1 + 4) - (float10)*(float *)(uVar2 + 4))));
    }
    if (*(int *)(param_1 + 0xec) != 0) {
      return ((float)GEN_TOF(((float10)*(float *)(uVar1 + 4) -
                    (float10)*((float *)GEN_TOP((*(int *)(param_1 + 0xec) + 0x34))))));
    }
  }
  return ((float)GEN_TOF(((float10)*(float *)(uVar1 + 4) - (float10)*(float *)(param_1 + 0xa4))));
}

/* ref: FUN_00a602d0 */
float F_00a602d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa602d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  float fVar1;
  
  fVar1 = F_00a60210(this,param_1);
  return fVar1;
}

/* ref: FUN_00a602f0 */
unsigned int F_00a602f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa602f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x88)) = this;
  if ((((*(byte *)((int)this + 0x8f) & 4) != 0) && (REFG(int, 0x1379694) != 0)) &&
     (uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this), (char)uVar2 != '\0')) {
    uVar2 = F_00a5f3d0(this,((int *)(gen_frame + 0x0)));
    this_00 = (undefined *)F_006b8c00();
    F_006d9de0(this_00);
    F_006d9e70(this_00);
    if (uVar2 != 0) {
      uVar5 = 0;
      if (uVar2 != 0) {
        do {
          piVar4 = (int *)((int *)(gen_frame + 0x0))[(int)(uVar5)];
          if ((piVar4 != (int *)0x0) &&
             (uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x1c4))(piVar4), (char)uVar3 == '\0')) {
            return 0;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar2);
      }
      uVar5 = 0;
      piVar4 = (int *)0x0;
      (*(uint *)(gen_frame + 0x84)) = 0;
      if (uVar2 != 0) {
        do {
          piVar1 = (int *)((int *)(gen_frame + 0x0))[(int)(uVar5)];
          if (piVar1 != (int *)0x0) {
            uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x1cc))(piVar1,(*(undefined * PTR32 *)(gen_frame + 0x88)));
            if (((ushort)uVar3 != 0) && ((ushort)(*(uint *)(gen_frame + 0x84)) < (ushort)uVar3)) {
              piVar4 = (int *)((int *)(gen_frame + 0x0))[(int)(uVar5)];
              (*(uint *)(gen_frame + 0x84)) = uVar3 & 0xffff;
            }
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar2);
      }
      uVar2 = 0;
      if (piVar4 != (int *)0x0) {
        uVar2 = ((code *)*(gen_code32 *)(*piVar4 + 0x1c0))(piVar4,(*(undefined * PTR32 *)(gen_frame + 0x88)));
      }
      *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x88)) + 0x118) = uVar2;
      this = (*(undefined * PTR32 *)(gen_frame + 0x88));
    }
    *(byte *)((int)this + 0x8f) = *(byte *)((int)this + 0x8f) & 0xfb;
  }
  return 0;
}

/* ref: FUN_00a60400 */
unsigned int F_00a60400(unsigned int gen_a0)
{
  GEN_ENTER(0xa60400u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  int * piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x88)) = this;
  if ((((*(byte *)((int)this + 0x8f) & 0x20) != 0) && (REFG(int, 0x1379694) != 0)) &&
     (uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this), (char)uVar2 != '\0')) {
    uVar2 = F_00a5f3d0(this,((int *)(gen_frame + 0x0)));
    if (uVar2 != 0) {
      uVar4 = 0;
      if (uVar2 != 0) {
        do {
          piVar5 = (int *)((int *)(gen_frame + 0x0))[(int)(uVar4)];
          if ((piVar5 != (int *)0x0) &&
             (uVar3 = ((code *)*(gen_code32 *)(*piVar5 + 0x208))(piVar5), (char)uVar3 == '\0')) {
            return 0;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar2);
      }
      uVar4 = 0;
      piVar5 = (int *)0x0;
      (*(uint *)(gen_frame + 0x84)) = 0;
      if (uVar2 != 0) {
        do {
          piVar1 = (int *)((int *)(gen_frame + 0x0))[(int)(uVar4)];
          if (piVar1 != (int *)0x0) {
            uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x1cc))(piVar1,(*(undefined * PTR32 *)(gen_frame + 0x88)));
            if (((ushort)uVar3 != 0) && ((ushort)(*(uint *)(gen_frame + 0x84)) < (ushort)uVar3)) {
              piVar5 = (int *)((int *)(gen_frame + 0x0))[(int)(uVar4)];
              (*(uint *)(gen_frame + 0x84)) = uVar3 & 0xffff;
            }
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar2);
      }
      uVar2 = 0;
      if (piVar5 != (int *)0x0) {
        uVar2 = ((code *)*(gen_code32 *)(*piVar5 + 0x1fc))(piVar5,(*(undefined * PTR32 *)(gen_frame + 0x88)));
      }
      *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x88)) + 0x170) = uVar2;
      this = (*(undefined * PTR32 *)(gen_frame + 0x88));
    }
    *(byte *)((int)this + 0x8f) = *(byte *)((int)this + 0x8f) & 0xdf;
  }
  return 0;
}

/* ref: Client::Game::Object::GameObject::vf28 */
byte F_00a60500(unsigned int gen_a0)
{
  GEN_ENTER(0xa60500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  if (((byte)this[0x8e] & 0x80) != 0) {
    if ((*(int *)(this + 0xec) == 0) && (*(int *)(this + 0xf0) == 0)) {
      return 1;
    }
    if ((*(undefined * PTR32 *)(this + 0xf0) != (undefined *)0x0) &&
       (bVar1 = F_005d5fe0(*(undefined * PTR32 *)(this + 0xf0)), bVar1 != 0)) {
      return 1;
    }
    if (((*(int *)(this + 0xec) != 0) && (*((char *)GEN_TOP((*(int *)(this + 0xec) + 0x65))) == '\x03')) &&
       (bVar1 = F_00b5ba80(REFG(void * PTR32, 0x14c4e84),(uint)*(ushort *)(this + 0x88)), bVar1 != 0)) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00a60560 */
unsigned int F_00a60560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa60560u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  float * pfVar2;
  undefined4 * puVar3;
  
  (*(undefined4 *)(gen_frame + 0x10)) = REFG(undefined4, 0x1302cf0);
  (*(undefined4 *)(gen_frame + 0x14)) = REFG(undefined4, 0x1302cf4);
  (*(undefined4 *)(gen_frame + 0x18)) = REFG(undefined4, 0x1302cf8);
  (*(undefined4 *)(gen_frame + 0x1c)) = REFG(undefined4, 0x1302cfc);
  if (*(int *)((int)this + 0xf0) == 0) {
    if (*(int *)((int)this + 0xec) != 0) {
      iVar1 = *(int *)((int)this + 0xec);
      *param_1 = *(float *)(iVar1 + 0x30);
      param_1[1] = *(float *)(iVar1 + 0x34);
      param_1[2] = *(float *)(iVar1 + 0x38);
      iVar1 = *(int *)((int)this + 0xec);
      (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(iVar1 + 0x40);
      (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(iVar1 + 0x44);
      (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(iVar1 + 0x48);
      (*(undefined4 *)(gen_frame + 0x1c)) = *(undefined4 *)(iVar1 + 0x4c);
      (*(float *)(gen_frame + 0x0)) = *(float *)(iVar1 + 0x50);
      (*(float *)(gen_frame + 0x4)) = *(float *)(iVar1 + 0x54);
      (*(float *)(gen_frame + 0x8)) = *(float *)(iVar1 + 0x58);
    }
  }
  else {
    pfVar2 = ((float *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xf0) + 0xe4))))
                                (*(int * PTR32 *)((int)this + 0xf0))));
    *param_1 = *pfVar2;
    param_1[1] = pfVar2[1];
    param_1[2] = pfVar2[2];
    puVar3 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xf0) + 0xec))))(*(int * PTR32 *)((int)this + 0xf0))));
    (*(undefined4 *)(gen_frame + 0x10)) = *puVar3;
    (*(undefined4 *)(gen_frame + 0x14)) = puVar3[1];
    (*(undefined4 *)(gen_frame + 0x18)) = puVar3[2];
    (*(undefined4 *)(gen_frame + 0x1c)) = puVar3[3];
    pfVar2 = ((float *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xf0) + 0xf4))))
                                (*(int * PTR32 *)((int)this + 0xf0))));
    (*(float *)(gen_frame + 0x0)) = *pfVar2;
    (*(float *)(gen_frame + 0x4)) = pfVar2[1];
    (*(float *)(gen_frame + 0x8)) = pfVar2[2];
  }
  F_00a1e160(&(*(float *)(gen_frame + 0x2c)),&(*(undefined4 *)(gen_frame + 0x10)));
  *param_2 = (float)((float10)*param_2 * (float10)(*(float *)(gen_frame + 0x0)));
  param_2[1] = (float)((float10)param_2[1] * (float10)(*(float *)(gen_frame + 0x4)));
  param_2[2] = (float)((float10)param_2[2] * (float10)(*(float *)(gen_frame + 0x8)));
  F_00aaeb00((uint)param_2,(*(float *)(gen_frame + 0x2c)));
  *param_1 = (float)((float10)*param_1 + (float10)*param_2);
  param_1[1] = (float)((float10)param_1[1] + (float10)param_2[1]);
  param_1[2] = (float)((float10)param_2[2] + (float10)param_1[2]);
  return 0;
}

/* ref: FUN_00a606e0 */
byte F_00a606e0(unsigned int gen_a0)
{
  GEN_ENTER(0xa606e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  int * piVar1;
  bool bVar2;
  uint uVar3;
  undefined * pvVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  uVar3 = F_00424810(REFG(undefined4, 0x137104c));
  if ((uVar3 == 0) || (uVar3 = F_00974710(uVar3), (char)uVar3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    if (REFG(int, 0x1379694) == 0) {
      return 0;
    }
  }
  else if (REFG(int, 0x1379694) == 0) goto LAB_00a6075d;
  if ((((*(uint *)(REFG(int, 0x1379694) + 0xe4) != 0) &&
       (uVar3 = *(uint *)((int)this + 0xe4), *(uint *)(REFG(int, 0x1379694) + 0xe4) == uVar3)) &&
      (uVar3 != 0)) && ((uVar3 & 0x80000000) == 0x80000000)) {
    pvVar4 = (undefined *)F_006b8c00();
    uVar3 = F_006da050(pvVar4,uVar3);
    if (uVar3 == 0) {
      return 0;
    }
  }
LAB_00a6075d: ;
  uVar3 = *(uint *)((int)this + 0xe4);
  iVar6 = 0;
  if ((uVar3 != 0) && ((uVar3 & 0x80000000) == 0x80000000)) {
    pvVar4 = (undefined *)F_006b8c00();
    uVar3 = F_006da050(pvVar4,uVar3);
    if (uVar3 != 0) {
      ((uint *)(gen_frame + 0x8))[0] = uVar3;
      iVar6 = 1;
    }
  }
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x60))(this,((uint *)(gen_frame + 0x8)) + iVar6);
  uVar3 = uVar3 + iVar6;
  if ((uVar3 != 0) && (uVar7 = 0, uVar3 != 0)) {
    do {
      piVar1 = (int *)((uint *)(gen_frame + 0x8))[(int)(uVar7)];
      if ((piVar1 != (int *)0x0) &&
         (uVar5 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1), (char)uVar5 == '\0')) {
        return 0;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar3);
  }
  return 1;
}

/* ref: FUN_00a607e0 */
uint F_00a607e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa607e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00463610(param_1,param_2,param_3);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = F_00a5f8c0(this,uVar1);
    *(byte *)((int)this + 0x8f) = *(byte *)((int)this + 0x8f) | 1;
  }
  return uVar2;
}

/* ref: FUN_00a60820 */
uint F_00a60820(unsigned int gen_a0)
{
  GEN_ENTER(0xa60820u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 0x7c);
  if ((((uVar2 != 0) && (*(int *)((int)this + 0xf0) == 0)) && (*(int *)((int)this + 0xec) == 0)) &&
     (REFG(char, 0x1379c96) == '\0')) {
    piVar1 = (int *)F_005f3270(1,uVar2,0);
    if ((piVar1 == (int *)0x0) &&
       (piVar1 = (int *)F_005f3270(6,*(undefined4 *)((int)this + 0x7c),0), piVar1 == (int *)0x0))
    {
      return 0;
    }
    *(undefined4 *)((int)this + 0xc0) = REFG(float, 0x10928e4);
    if (*(byte *)((int)piVar1 + 0x11) == 1) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x5c))(piVar1);
        *(uint *)((int)this + 0xec) = uVar2;
      }
    }
    else {
      uVar2 = *(byte *)((int)piVar1 + 0x11) - 6;
      if (uVar2 == 0) {
        *(int * PTR32 *)((int)this + 0xf0) = piVar1;
        return 0;
      }
    }
  }
  return uVar2;
}

/* ref: Client::Game::Object::GameObject::vf11 */
uint F_00a608c0(unsigned int gen_a0)
{
  GEN_ENTER(0xa608c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 GVar1;
  undefined4 in_EAX = 0;
  undefined3 uVar3;
  uint uVar2;
  
  GVar1 = this[0x8e];
  uVar3 = (undefined3)((uint)in_EAX >> 8);
  uVar2 = CONCAT31(uVar3,GVar1);
  if ((-1 < (char)GVar1) && (((byte)GVar1 & 0x20) != 0)) {
    uVar2 = CONCAT31(uVar3,GVar1) & 0xffffffef | 0x80;
    this[0x8e] = SUB41(uVar2,0);
    if (*(int *)(this + 0x7c) != 0) {
      uVar2 = F_00a60820(this);
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_00a608f0 */
uint F_00a608f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa608f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined * this_00;
  int * piVar1;
  byte bVar2;
  float * pfVar3;
  int iVar4;
  float * pfVar5;
  float10 fVar6;
  float10 fVar7;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  this_00 = *(undefined * PTR32 *)((int)this + 0xf0);
  if (this_00 == (undefined *)0x0) {
    piVar1 = *(int * PTR32 *)((int)this + 0xec);
    if ((piVar1 != (int *)0x0) && (*(char *)((int)piVar1 + 0x65) == '\x03')) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x40))(piVar1,param_1,param_2);
      goto LAB_00a60a28;
    }
LAB_00a60967: ;
    fVar6 = ((float10)GEN_TOD(fsin((float10)*(float *)((int)this + 0xb0))));
    fVar7 = ((float10)GEN_TOD(fcos((float10)*(float *)((int)this + 0xb0))));
    ((float *)(gen_frame + 0x0))[0] = (float)fVar7;
    ((float *)(gen_frame + 0x0))[1] = 0.0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = REFG(float, 0x1087f04);
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    ((float *)(gen_frame + 0x0))[2] = ((float)GEN_TOF(-(float10)(float)fVar6));
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(float *)(gen_frame + 0x20)) = (float)fVar6;
    (*(float *)(gen_frame + 0x28)) = (float)fVar7;
    if (*(int *)((int)this + 0x7c) == 0) {
LAB_00a609fc: ;
      pfVar3 = (float *)((int)this + 0xa0);
    }
    else if (*(int *)((int)this + 0xf0) == 0) {
      if (*(int *)((int)this + 0xec) == 0) goto LAB_00a609fc;
      pfVar3 = ((float *)GEN_TOP((*(int *)((int)this + 0xec) + 0x30)));
    }
    else {
      pfVar3 = ((float *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xf0) + 0xe4))))
                                  (*(int * PTR32 *)((int)this + 0xf0))));
    }
    fVar6 = (float10)0;
    (*(float *)(gen_frame + 0x30)) = (float)((float10)*pfVar3 + fVar6);
    (*(float *)(gen_frame + 0x34)) = (float)((float10)pfVar3[1] + fVar6);
    (*(float *)(gen_frame + 0x38)) = (float)(fVar6 + (float10)pfVar3[2]);
  }
  else {
    bVar2 = F_005d5fe0(this_00);
    if (bVar2 == 0) goto LAB_00a60967;
    F_005eaf50(this_00,((float *)(gen_frame + 0x0)),param_2);
  }
  pfVar3 = ((float *)(gen_frame + 0x0));
  pfVar5 = param_1;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar5 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pfVar5 = pfVar5 + 1;
  }
LAB_00a60a28: ;
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50));
  return (uint)param_1;
}

/* ref: FUN_00a60a40 */
uint F_00a60a40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa60a40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  undefined4 uVar1;
  undefined4 uVar2;
  int * piVar3;
  byte bVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  int iVar8;
  
  (*(uint *)(gen_frame + 0xcc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xd0);
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = param_1;
  (*(int *)(gen_frame + 0x3c)) = param_2;
  if (*(int *)((int)this + 0x7c) != 0) {
    piVar3 = *(int * PTR32 *)((int)this + 0xf0);
    if (piVar3 != (int *)0x0) {
      puVar5 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0xe4))(piVar3)));
      goto LAB_00a60aad;
    }
    if (*(int *)((int)this + 0xec) != 0) {
      puVar5 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xec) + 0x30)));
      goto LAB_00a60aad;
    }
  }
  puVar5 = (undefined4 *)((int)this + 0xa0);
LAB_00a60aad: ;
  *param_1 = *puVar5;
  param_1[1] = puVar5[1];
  param_1[2] = puVar5[2];
  piVar3 = *(int * PTR32 *)((int)this + 0xf0);
  (*(int * PTR32 *)(gen_frame + 0x38)) = piVar3;
  puVar5 = param_1;
  if (piVar3 == (int *)0x0) {
    piVar3 = *(int * PTR32 *)((int)this + 0xec);
    (*(int * PTR32 *)(gen_frame + 0x38)) = piVar3;
    if ((piVar3 != (int *)0x0) && (*(char *)((int)piVar3 + 0x65) == '\x03')) {
      uVar6 = ((code *)*(gen_code32 *)(*piVar3 + 0x50))(piVar3,(*(int *)(gen_frame + 0x3c)));
      if (((char)uVar6 == '\0') || ((*(int *)(gen_frame + 0x3c)) == 0x2e)) {
        if ((*(byte *)((int)this + 0x8f) & 0x80) != 0) {
          ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xec) + 0x48))))
                    (*(int * PTR32 *)((int)this + 0xec),&(*(undefined4 *)(gen_frame + 0x20)),0x2e);
          puVar7 = (undefined4 *)F_004bd7b0(((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x20)),*(float *)((int)this + 0xb4));
          (*(undefined4 *)(gen_frame + 0x20)) = *puVar7;
          uVar1 = puVar7[1];
          (*(undefined4 *)(gen_frame + 0x24)) = uVar1;
          uVar2 = puVar7[2];
          *(undefined4 *)((int)this + 0x160) = *puVar7;
          *(undefined4 *)((int)this + 0x164) = uVar1;
          *(undefined4 *)((int)this + 0x168) = uVar2;
          *(byte *)((int)this + 0x8f) = *(byte *)((int)this + 0x8f) & 0x7f;
        }
        (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)((int)this + 0x160);
        (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)((int)this + 0x164);
        (*(undefined4 *)(gen_frame + 0x28)) = *(undefined4 *)((int)this + 0x168);
        puVar7 = (undefined4 *)F_004bd670(((undefined1 *)(gen_frame + 0x0)),(*(int * PTR32 *)(gen_frame + 0x38)) + 0xc,&(*(undefined4 *)(gen_frame + 0x20)));
        *param_1 = *puVar7;
        param_1[1] = puVar7[1];
        param_1[2] = puVar7[2];
      }
      else {
        puVar5 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x38)) + 0x40))((*(int * PTR32 *)(gen_frame + 0x38)),((undefined1 *)(gen_frame + 0x40)),(*(int *)(gen_frame + 0x3c)))));
        puVar7 = ((undefined4 *)(gen_frame + 0x80));
        for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        *(*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = (*(undefined4 *)(gen_frame + 0xb0));
        (*(undefined4 * PTR32 *)(gen_frame + 0x1c))[1] = (*(undefined4 *)(gen_frame + 0xb4));
        (*(undefined4 * PTR32 *)(gen_frame + 0x1c))[2] = (*(undefined4 *)(gen_frame + 0xb8));
        puVar5 = (*(undefined4 * PTR32 *)(gen_frame + 0x1c));
      }
    }
  }
  else {
    bVar4 = F_005d5fe0(piVar3);
    piVar3 = (*(int * PTR32 *)(gen_frame + 0x38));
    if (bVar4 != 0) {
      bVar4 = F_005eae70((*(int * PTR32 *)(gen_frame + 0x38)),(*(int *)(gen_frame + 0x3c)));
      if (bVar4 == 0) {
        (*(int *)(gen_frame + 0x3c)) = 0x2e;
      }
      F_005eaf50(piVar3,((undefined4 *)(gen_frame + 0x80)),(*(int *)(gen_frame + 0x3c)));
      *param_1 = (*(undefined4 *)(gen_frame + 0xb0));
      param_1[1] = (*(undefined4 *)(gen_frame + 0xb4));
      param_1[2] = (*(undefined4 *)(gen_frame + 0xb8));
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xcc)) ^ (uint)(uint)(gen_frame + 0xd0));
  return (uint)puVar5;
}

/* ref: FUN_00a60ca0 */
byte F_00a60ca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa60ca0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int * piVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined4 * puVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),(undefined1)param_3);
  if (*(undefined * PTR32 *)((int)this + 0xf0) == (undefined *)0x0) {
    piVar1 = *(int * PTR32 *)((int)this + 0xec);
    if ((piVar1 != (int *)0x0) && (*(char *)((int)piVar1 + 0x65) == '\x03')) {
      puVar4 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,((undefined1 *)(gen_frame + 0x10)),0x3d,param_2,(*(undefined4 *)(gen_frame + 0x4)))));
      puVar6 = puVar4;
      puVar7 = param_1;
      for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      goto LAB_00a60dc0;
    }
  }
  else {
    bVar3 = F_005d5fe0(*(undefined * PTR32 *)((int)this + 0xf0));
    if (bVar3 != 0) {
      bVar3 = F_005eaf50(*(undefined * PTR32 *)((int)this + 0xf0),param_1,0x2e);
      puVar4 = (undefined4 *)(uint)bVar3;
      goto LAB_00a60dc0;
    }
  }
  puVar4 = &REFG(float, 0x1302d00);
  puVar6 = param_1;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  if (*(int *)((int)this + 0x7c) == 0) {
LAB_00a60d70: ;
    puVar4 = (undefined4 *)((int)this + 0xa0);
  }
  else if (*(int *)((int)this + 0xf0) == 0) {
    if (*(int *)((int)this + 0xec) == 0) goto LAB_00a60d70;
    puVar4 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xec) + 0x30)));
  }
  else {
    puVar4 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xf0) + 0xe4))))(*(int * PTR32 *)((int)this + 0xf0))));
  }
  uVar2 = REFG(float, 0x1087f04);
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1087f04));
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = uVar2;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = uVar2;
  param_1[0xc] = *puVar4;
  param_1[0xd] = puVar4[1];
  param_1[0xe] = puVar4[2];
LAB_00a60dc0: ;
  F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)(uint)(gen_frame + 0x60));
  return (byte)puVar4;
}

/* ref: FUN_00a60de0 */
uint F_00a60de0(unsigned int gen_a0)
{
  GEN_ENTER(0xa60de0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  int * piVar2;
  byte bVar3;
  uint in_EAX = 0;
  uint uVar4;
  float * pfVar5;
  
  if (*(int *)((int)this + 0x7c) == 0) {
    if (*(int *)((int)this + 0xf0) != 0) {
      (*(float *)(gen_frame + 0x28)) = *(float *)((int)this + 0xc4);
      (*(float *)(gen_frame + 0x10)) = *(float *)((int)this + 0xa0);
      (*(float *)(gen_frame + 0x18)) = *(float *)((int)this + 0xa8);
      fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0xa4) + (float10)*(float *)((int)this + 0xc4))))
      ;
      (*(float *)(gen_frame + 0x28)) = fVar1;
      (*(float *)(gen_frame + 0x14)) = fVar1;
      bVar3 = F_0054ccb0((undefined *)((int)this + 0xd0),&REFG(float, 0x1375ac0));
      if (bVar3 == 0) {
        (*(float *)(gen_frame + 0x0)) = *(float *)((int)this + 0xd0);
        (*(float *)(gen_frame + 0x4)) = *(float *)((int)this + 0xd4);
        (*(float *)(gen_frame + 0x8)) = *(float *)((int)this + 0xd8);
        fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0xe0) +
                       (float10)*(float *)((int)this + 0xb0))));
        (*(float *)(gen_frame + 0x28)) = fVar1;
        F_00aaeb00((uint)&(*(float *)(gen_frame + 0x0)),fVar1);
        (*(float *)(gen_frame + 0x10)) = (float)((float10)(*(float *)(gen_frame + 0x0)) + (float10)(*(float *)(gen_frame + 0x10)));
        (*(float *)(gen_frame + 0x14)) = (float)((float10)(*(float *)(gen_frame + 0x4)) + (float10)(*(float *)(gen_frame + 0x14)));
        (*(float *)(gen_frame + 0x18)) = (float)((float10)(*(float *)(gen_frame + 0x8)) + (float10)(*(float *)(gen_frame + 0x18)));
      }
      uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xf0) + 0xe8))))
                        (*(int * PTR32 *)((int)this + 0xf0),&(*(float *)(gen_frame + 0x10)));
      return uVar4;
    }
    if (*(int *)((int)this + 0xec) != 0) {
      (*(float *)(gen_frame + 0x28)) = *(float *)((int)this + 0xc4);
      pfVar5 = (float *)F_00a5feb0(this);
      (*(float *)(gen_frame + 0x2c)) = *pfVar5;
      uVar4 = F_00a5feb0(this);
      (*(float *)(gen_frame + 0x10)) = (*(float *)(gen_frame + 0x2c));
      fVar1 = ((float)GEN_TOF(((float10)*(float *)(uVar4 + 4) + (float10)(*(float *)(gen_frame + 0x28)))));
      (*(float *)(gen_frame + 0x28)) = fVar1;
      (*(float *)(gen_frame + 0x14)) = fVar1;
      uVar4 = F_00a5feb0(this);
      (*(float *)(gen_frame + 0x18)) = *(float *)(uVar4 + 8);
      bVar3 = F_0054ccb0((undefined *)((int)this + 0xd0),&REFG(float, 0x1375ac0));
      if (bVar3 == 0) {
        (*(float *)(gen_frame + 0x0)) = *(float *)((int)this + 0xd0);
        (*(float *)(gen_frame + 0x4)) = *(float *)((int)this + 0xd4);
        (*(float *)(gen_frame + 0x8)) = *(float *)((int)this + 0xd8);
        fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0xe0) +
                       (float10)*(float *)((int)this + 0xb0))));
        (*(float *)(gen_frame + 0x24)) = fVar1;
        F_00aaeb00((uint)&(*(float *)(gen_frame + 0x0)),fVar1);
        (*(float *)(gen_frame + 0x10)) = (float)((float10)(*(float *)(gen_frame + 0x0)) + (float10)(*(float *)(gen_frame + 0x2c)));
        (*(float *)(gen_frame + 0x14)) = (float)((float10)(*(float *)(gen_frame + 0x4)) + (float10)(*(float *)(gen_frame + 0x28)));
        (*(float *)(gen_frame + 0x18)) = (float)((float10)(*(float *)(gen_frame + 0x8)) + (float10)(*(float *)(gen_frame + 0x18)));
      }
      in_EAX = ((code *)*(gen_code32 *)(*(int *)this + 0xb8))(this);
      if (((char)in_EAX == '\0') || (*(char *)((int)this + 0x2e08) == '\0')) {
        in_EAX = *(uint *)((int)this + 0xec);
        *(float *)(in_EAX + 0x30) = (*(float *)(gen_frame + 0x10));
        *(float *)(in_EAX + 0x34) = (*(float *)(gen_frame + 0x14));
        *(float *)(in_EAX + 0x38) = (*(float *)(gen_frame + 0x18));
        *(uint *)(in_EAX + 0x24) = *(uint *)(in_EAX + 0x24) | 2;
      }
      piVar2 = *(int * PTR32 *)((int)this + 0xec);
      if (*(char *)((int)piVar2 + 0x65) == '\x03') {
        in_EAX = ((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2,1);
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_00a61000 */
uint F_00a61000(unsigned int gen_a0)
{
  GEN_ENTER(0xa61000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  float fVar2;
  int iVar3;
  int * piVar4;
  byte bVar5;
  uint in_EAX = 0;
  uint uVar6;
  undefined3 extraout_var = 0;
  float10 fVar7;
  
  if (*(int *)((int)this + 0x7c) == 0) {
    if (*(int *)((int)this + 0xf0) != 0) {
      fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0xe0) + (float10)*(float *)((int)this + 0xb0))))
      ;
      (*(float *)(gen_frame + 0x1c)) = fVar1;
      fVar1 = (float)((float10)fVar1 * (float10)REFG(double, 0x1088108));
      (*(float *)(gen_frame + 0x1c)) = fVar1;
      fVar7 = ((float10)GEN_TOD(fsin((float10)fVar1)));
      fVar2 = (float)fVar7;
      (*(float *)(gen_frame + 0x18)) = fVar2;
      fVar7 = (float10)fVar2;
      (*(float *)(gen_frame + 0x0)) = (float)(fVar7 * (float10)REFG(float, 0x1302c80));
      (*(float *)(gen_frame + 0x4)) = (float)((float10)REFG(float, 0x1302c84) * fVar7);
      (*(float *)(gen_frame + 0x8)) = (float)(fVar7 * (float10)REFG(float, 0x1302c88));
      fVar7 = ((float10)GEN_TOD(fcos((float10)fVar1)));
      (*(float *)(gen_frame + 0x18)) = (float)fVar7;
      (*(float *)(gen_frame + 0xc)) = (float)fVar7;
      uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xf0) + 0xf0))))
                        (*(int * PTR32 *)((int)this + 0xf0),&(*(float *)(gen_frame + 0x0)));
      return uVar6;
    }
    iVar3 = *(int *)((int)this + 0xec);
    if (iVar3 != 0) {
      fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0xe0) + (float10)*(float *)((int)this + 0xb0))))
      ;
      (*(float *)(gen_frame + 0x18)) = fVar1;
      F_0054cfd0(&(*(float *)(gen_frame + 0x0)),&REFG(float, 0x1302c80),fVar1);
      *(uint *)(iVar3 + 0x24) = *(uint *)(iVar3 + 0x24) | 2;
      *(float *)(iVar3 + 0x40) = (*(float *)(gen_frame + 0x0));
      *(float *)(iVar3 + 0x44) = (*(float *)(gen_frame + 0x4));
      *(float *)(iVar3 + 0x48) = (*(float *)(gen_frame + 0x8));
      *(float *)(iVar3 + 0x4c) = (*(float *)(gen_frame + 0xc));
      piVar4 = *(int * PTR32 *)((int)this + 0xec);
      if (*(char *)((int)piVar4 + 0x65) == '\x03') {
        ((code *)*(gen_code32 *)(*piVar4 + 0x1c))(piVar4,1);
      }
    }
    bVar5 = F_0054ccb0((undefined *)((int)this + 0xd0),&REFG(float, 0x1375ac0));
    in_EAX = CONCAT31(extraout_var,bVar5);
    if (bVar5 == 0) {
      in_EAX = F_00a60de0(this);
    }
  }
  return in_EAX;
}

/* ref: FUN_00a61140 */
unsigned int F_00a61140(unsigned int gen_a0)
{
  GEN_ENTER(0xa61140u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  int iVar2;
  int * piVar3;
  
  if (*(int *)((int)this + 0x7c) == 0) {
    if (*(int *)((int)this + 0xf0) != 0) {
      uVar1 = *(undefined4 *)((int)this + 0xb4);
      (*(undefined4 *)(gen_frame + 0x0)) = uVar1;
      (*(undefined4 *)(gen_frame + 0x4)) = uVar1;
      (*(undefined4 *)(gen_frame + 0x8)) = uVar1;
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xf0) + 0xf8))))(*(int * PTR32 *)((int)this + 0xf0),&(*(undefined4 *)(gen_frame + 0x0)));
      return 0;
    }
    if (*(int *)((int)this + 0xec) != 0) {
      uVar1 = *(undefined4 *)((int)this + 0xb4);
      iVar2 = *(int *)((int)this + 0xec);
      *(undefined4 *)(iVar2 + 0x58) = uVar1;
      *(undefined4 *)(iVar2 + 0x50) = uVar1;
      *(undefined4 *)(iVar2 + 0x54) = uVar1;
      *(uint *)(iVar2 + 0x24) = *(uint *)(iVar2 + 0x24) | 2;
      piVar3 = *(int * PTR32 *)((int)this + 0xec);
      if (*(char *)((int)piVar3 + 0x65) == '\x03') {
        ((code *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3,1);
      }
    }
  }
  return 0;
}

/* ref: FUN_00a611f0 */
byte F_00a611f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa611f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  if (param_2 == (uint *)0x0) {
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x2c)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(uint *)(gen_frame + 0x34)) = 0;
    (*(uint *)(gen_frame + 0x38)) = 0;
    puVar4 = &(*(undefined4 *)(gen_frame + 0xc));
    this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
    F_009755f0(this_00,puVar4);
    uVar2 = (*(uint *)(gen_frame + 0x34));
    uVar3 = (*(uint *)(gen_frame + 0x38));
  }
  else {
    uVar2 = *param_2;
    uVar3 = param_2[1];
  }
  uVar1 = *(uint *)((int)this + param_1 * 8 + 0xfc);
  if ((uVar3 <= uVar1) && ((uVar3 < uVar1 || (uVar2 < *(uint *)((int)this + param_1 * 8 + 0xf8)))))
  {
    return 0;
  }
  *(uint *)((int)this + param_1 * 8 + 0xf8) = uVar2;
  *(uint *)((int)this + param_1 * 8 + 0xfc) = uVar3;
  return 1;
}

/* ref: FUN_00a61290 */
uint F_00a61290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa61290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  
  *param_1 = *(float *)((int)this + 0xa0);
  param_1[1] = *(float *)((int)this + 0xa4);
  param_1[2] = *(float *)((int)this + 0xa8);
  (*(float *)(gen_frame + 0x0)) = *(float *)((int)this + 0x120);
  (*(float *)(gen_frame + 0x4)) = *(float *)((int)this + 0x124);
  (*(float *)(gen_frame + 0x8)) = *(float *)((int)this + 0x128);
  if (*(int *)((int)this + 0x7c) != 0) {
    F_00a60560(this,param_1,&(*(float *)(gen_frame + 0x0)));
    return (uint)param_1;
  }
  fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0xe0) + (float10)*(float *)((int)this + 0xb0))));
  (*(float *)(gen_frame + 0x1c)) = fVar1;
  F_00aaeb00((uint)&(*(float *)(gen_frame + 0x0)),fVar1);
  *param_1 = (float)((float10)*param_1 + (float10)(*(float *)(gen_frame + 0x0)));
  param_1[1] = (float)((float10)param_1[1] + (float10)(*(float *)(gen_frame + 0x4)));
  param_1[2] = (float)((float10)param_1[2] + (float10)(*(float *)(gen_frame + 0x8)));
  return (uint)param_1;
}

/* ref: FUN_00a61360 */
uint F_00a61360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa61360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  
  *param_1 = *(float *)((int)this + 0xa0);
  param_1[1] = *(float *)((int)this + 0xa4);
  param_1[2] = *(float *)((int)this + 0xa8);
  (*(float *)(gen_frame + 0x0)) = *(float *)((int)this + 0x130);
  (*(float *)(gen_frame + 0x4)) = *(float *)((int)this + 0x134);
  (*(float *)(gen_frame + 0x8)) = *(float *)((int)this + 0x138);
  if (*(int *)((int)this + 0x7c) != 0) {
    F_00a60560(this,param_1,&(*(float *)(gen_frame + 0x0)));
    return (uint)param_1;
  }
  fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0xe0) + (float10)*(float *)((int)this + 0xb0))));
  (*(float *)(gen_frame + 0x1c)) = fVar1;
  F_00aaeb00((uint)&(*(float *)(gen_frame + 0x0)),fVar1);
  *param_1 = (float)((float10)*param_1 + (float10)(*(float *)(gen_frame + 0x0)));
  param_1[1] = (float)((float10)param_1[1] + (float10)(*(float *)(gen_frame + 0x4)));
  param_1[2] = (float)((float10)param_1[2] + (float10)(*(float *)(gen_frame + 0x8)));
  return (uint)param_1;
}

/* ref: Client::Game::Object::GameObject::vf33 */
uint F_00a61430(unsigned int gen_a0)
{
  GEN_ENTER(0xa61430u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  float fVar2;
  undefined1 GVar3;
  code * pcVar4;
  byte bVar5;
  uint uVar6;
  float * pfVar7;
  bool bVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  
  if ((((byte)this[0x8e] & 0x20) == 0) &&
     (uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0xc0))(this), (char)uVar6 != '\0')) {
    this[0x8e] = (undefined1)((byte)this[0x8e] | 0x20);
  }
  if (((((byte)this[0x8e] & 8) == 0) && (((byte)this[0x8e] & 0x20) != 0)) &&
     (bVar5 = F_00a606e0(this), bVar5 != 0)) {
    pcVar4 = *(gen_code32 *)(*(int *)this + 0x74);
    this[0x8e] = (undefined1)((byte)this[0x8e] | 8);
    (*pcVar4)(this);
  }
  if ((((byte)this[0x8e] & 0x10) == 0) &&
     (uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0x70))(this), (char)uVar6 != '\0')) {
    pcVar4 = *(gen_code32 *)(*(int *)this + 0x6c);
    this[0x8e] = (undefined1)((byte)this[0x8e] | 0x10);
    (*pcVar4)(this);
  }
  GVar3 = this[0x8e];
  if (((((byte)GVar3 & 4) == 0) && (((byte)GVar3 & 0x20) != 0)) &&
     ((((byte)GVar3 & 8) != 0 &&
      ((((byte)GVar3 & 0x10) != 0 && (bVar5 = F_00a606e0(this), bVar5 != 0)))))) {
    pcVar4 = *(gen_code32 *)(*(int *)this + 100);
    this[0x8e] = (undefined1)((byte)this[0x8e] | 4);
    (*pcVar4)(this);
  }
  fVar1 = *(float *)(this + 0x140);
  (*(float *)(gen_frame + 0x28)) = fVar1;
  fVar9 = (float10)((float)GEN_TOF(((float10)fVar1 - (float10)*(float *)(this + 0x120))));
  (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF(((float10)fVar1 - (float10)*(float *)(this + 0x120))));
  fVar10 = (float10)((float)GEN_TOF(((float10)*(float *)(this + 0x144) - (float10)*(float *)(this + 0x124))));
  (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x144) - (float10)*(float *)(this + 0x124))));
  fVar11 = (float10)((float)GEN_TOF(((float10)*(float *)(this + 0x148) - (float10)*(float *)(this + 0x128))));
  (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x148) - (float10)*(float *)(this + 0x128))));
  fVar2 = ((float)GEN_TOF((fVar11 * fVar11 + (fVar9 * fVar9 + fVar10 * fVar10))));
  (*(float *)(gen_frame + 0x2c)) = fVar2;
  fVar12 = (float10)fVar2;
  bVar8 = GEN_ISNAN(fVar12) || GEN_ISNAN((float10)0);
  if (bVar8 == (bVar8 || fVar12 == (float10)0)) {
    if (fVar2 < REFG(float, 0x10e5d90)) {
      *(float *)(this + 0x120) = fVar1;
      *(undefined4 *)(this + 0x124) = *(undefined4 *)(this + 0x144);
      *(undefined4 *)(this + 0x128) = *(undefined4 *)(this + 0x148);
    }
    else {
      fVar13 = (float10)*(double *)&REFG(undefined, 0x10a1b58);
      if (fVar12 * fVar13 < (float10)*(double *)&REFG(undefined, 0x10e5d88)) {
        pfVar7 = (float *)F_004bd580(&(*(float *)(gen_frame + 0x10)));
        fVar11 = (float10)*(double *)&REFG(undefined, 0x10e5d88);
        fVar9 = (float10)*pfVar7 * fVar11;
        fVar10 = (float10)pfVar7[1] * fVar11;
        fVar11 = fVar11 * (float10)pfVar7[2];
      }
      else {
        fVar9 = fVar9 * fVar13;
        fVar10 = fVar10 * fVar13;
        fVar11 = fVar11 * fVar13;
      }
      (*(float *)(gen_frame + 0x4)) = (float)fVar10;
      (*(float *)(gen_frame + 0x0)) = (float)fVar9;
      *(float *)(this + 0x120) = ((float)GEN_TOF(((float10)*(float *)(this + 0x120) + (float10)(*(float *)(gen_frame + 0x0)))));
      *(float *)(this + 0x124) = ((float)GEN_TOF(((float10)*(float *)(this + 0x124) + (float10)(*(float *)(gen_frame + 0x4)))));
      *(float *)(this + 0x128) = ((float)GEN_TOF(((float10)*(float *)(this + 0x128) + (float10)(float)fVar11)))
      ;
    }
  }
  fVar1 = *(float *)(this + 0x150);
  (*(float *)(gen_frame + 0x28)) = fVar1;
  fVar9 = (float10)((float)GEN_TOF(((float10)fVar1 - (float10)*(float *)(this + 0x130))));
  (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF(((float10)fVar1 - (float10)*(float *)(this + 0x130))));
  fVar12 = (float10)((float)GEN_TOF(((float10)*(float *)(this + 0x154) - (float10)*(float *)(this + 0x134))));
  (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x154) - (float10)*(float *)(this + 0x134))));
  fVar10 = (float10)((float)GEN_TOF(((float10)*(float *)(this + 0x158) - (float10)*(float *)(this + 0x138))));
  (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x158) - (float10)*(float *)(this + 0x138))));
  fVar2 = ((float)GEN_TOF(((fVar9 * fVar9 + fVar12 * fVar12) + fVar10 * fVar10)));
  (*(float *)(gen_frame + 0x2c)) = fVar2;
  bVar8 = GEN_ISNAN((float10)fVar2) || GEN_ISNAN((float10)0);
  if (bVar8 == (bVar8 || (float10)fVar2 == (float10)0)) {
    if (fVar2 <= REFG(float, 0x10e5d84)) {
      *(float *)(this + 0x130) = fVar1;
      *(undefined4 *)(this + 0x134) = *(undefined4 *)(this + 0x154);
      fVar9 = (float10)*(float *)(this + 0x158);
    }
    else {
      pfVar7 = (float *)F_004bd580(&(*(float *)(gen_frame + 0x10)));
      fVar9 = (float10)REFG(double, 0x1094800);
      fVar1 = pfVar7[1];
      fVar2 = pfVar7[2];
      *(float *)(this + 0x130) =
           ((float)GEN_TOF(((float10)*(float *)(this + 0x130) + (float10)(float)((float10)*pfVar7 * fVar9))));
      *(float *)(this + 0x134) =
           ((float)GEN_TOF(((float10)*(float *)(this + 0x134) + (float10)(float)((float10)fVar1 * fVar9))));
      fVar9 = (float10)(float)(fVar9 * (float10)fVar2) + (float10)*(float *)(this + 0x138);
    }
    *(float *)(this + 0x138) = (float)fVar9;
  }
  F_00a602f0(this);
  F_00a60400(this);
  ((code *)*(gen_code32 *)(*(int *)this + 0x94))(this);
  uVar6 = F_00a5f7a0(this);
  return uVar6;
}

/* ref: FUN_00a61740 */
unsigned int F_00a61740(unsigned int gen_a0)
{
  GEN_ENTER(0xa61740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  if (*(int *)((int)this + 0xf0) == 0) {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 200))(this);
    if ((char)uVar2 != '\0') {
      piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xcc))(this)));
      if (piVar3 != (int *)0x0) {
        bVar1 = *(byte *)((int)this + 0x8e);
        *(int * PTR32 *)((int)this + 0xf0) = piVar3;
        if (((-1 < (char)bVar1) && ((bVar1 & 0x20) != 0)) &&
           (*(byte *)((int)this + 0x8e) = bVar1 & 0xef | 0x80, *(int *)((int)this + 0x7c) != 0)) {
          F_00a60820(this);
        }
        F_00a1eab0(((undefined1 *)(gen_frame + 0x0)),this);
        ((code *)*(gen_code32 *)(*piVar3 + 0x100))(piVar3,((undefined1 *)(gen_frame + 0x0)));
      }
    }
  }
  return 0;
}

/* ref: Client::Game::Object::GameObject::vf5 */
uint F_00a617e0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0xa617e0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  uint uVar1;
  
  *(float *)((int)param_1 + 0xd0) = param_2;
  *(float *)((int)param_1 + 0xd4) = param_3;
  *(float *)((int)param_1 + 0xd8) = param_4;
  uVar1 = F_00a60de0(param_1);
  return uVar1;
}

/* ref: Client::Game::Object::GameObject::vf6 */
uint F_00a61820(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xa61820u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 in_EAX = 0;
  uint uVar1;
  bool bVar2;
  bool bVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar4 = (float10)param_2;
  fVar5 = (float10)*(float *)((int)param_1 + 0xe0);
  bVar2 = GEN_ISNAN(fVar5) || GEN_ISNAN(fVar4);
  bVar3 = bVar2 || fVar5 == fVar4;
  uVar1 = CONCAT22((short)((uint)in_EAX >> 0x10),
                   CONCAT11(bVar3 << 6 | bVar2 << 2 | 2U | !(fVar4 <= fVar5),(char)in_EAX));
  if (bVar2 == bVar3) {
    *(float *)((int)param_1 + 0xe0) = param_2;
    uVar1 = F_00a61000(param_1);
  }
  return uVar1;
}

/* ref: Client::Game::Object::GameObject::vf16 */
uint F_00a61850(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0xa61850u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  uint uVar1;
  
  *(float *)((int)param_1 + 0xa0) = param_2;
  *(float *)((int)param_1 + 0xa4) = param_3;
  *(float *)((int)param_1 + 0xa8) = param_4;
  uVar1 = F_00a60de0(param_1);
  return uVar1;
}

/* ref: Client::Game::Object::GameObject::vf18 */
uint F_00a61890(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xa61890u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  *(float *)((int)param_1 + 0xb0) = param_2;
  uVar1 = F_00a61000(param_1);
  return uVar1;
}

/* ref: Client::Game::Object::GameObject::vf19 */
unsigned int F_00a618b0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xa618b0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)((int)param_1 + 0xb4) = param_2;
  F_00a61140(param_1);
  *(byte *)((int)param_1 + 0x8f) = *(byte *)((int)param_1 + 0x8f) | 0x80;
  return 0;
}

/* ref: FUN_00a618e0 */
byte F_00a618e0(unsigned int gen_a0)
{
  GEN_ENTER(0xa618e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0xec) == 0) {
    return 1;
  }
  return *((byte *)GEN_TOP((*(int *)(in_ecx + 0xec) + 100))) >> 3 & 1;
}

/* ref: FUN_00a61900 */
uint F_00a61900(unsigned int gen_a0)
{
  GEN_ENTER(0xa61900u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * pbVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)((int)this + 0xec) != 0) {
    pbVar1 = ((byte *)GEN_TOP((*(int *)((int)this + 0xec) + 100)));
    *pbVar1 = *pbVar1 | 1;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xec) + 8))))(*(int * PTR32 *)((int)this + 0xec));
    if (uVar2 == 4) {
      uVar2 = F_00699cb0(*(undefined4 *)((int)this + 0xec),(float)(float10)0);
    }
  }
  return uVar2;
}

/* ref: FUN_00a61940 */
uint F_00a61940(unsigned int gen_a0)
{
  GEN_ENTER(0xa61940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * pbVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)((int)this + 0xec) != 0) {
    pbVar1 = ((byte *)GEN_TOP((*(int *)((int)this + 0xec) + 100)));
    *pbVar1 = *pbVar1 & 0xfe;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xec) + 8))))(*(int * PTR32 *)((int)this + 0xec));
    if (uVar2 == 4) {
      uVar2 = F_0068b730(*(undefined4 *)((int)this + 0xec),(float)(float10)0);
    }
  }
  return uVar2;
}

/* ref: Client::Game::Object::GameObject::vf9 */
byte F_00a61980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa61980u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(this + 0x11c);
  uVar2 = ~(1 << ((byte)param_1 & 0x1f)) & uVar1;
  *(uint *)(this + 0x11c) = uVar2;
  if (((*(int *)(this + 0xf0) != 0) && (uVar1 != 0)) && (uVar2 == 0)) {
    F_00a5f680(this,param_2);
    return 1;
  }
  if (((*(int *)(this + 0xec) != 0) && (uVar1 != 0)) && (uVar2 == 0)) {
    F_00a61900(this);
    return 1;
  }
  return 0;
}

/* ref: Client::Game::Object::GameObject::vf10 */
byte F_00a619f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa619f0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x11c)));
  uVar2 = 1 << ((byte)(*(int *)&gen_args[1]) & 0x1f) | uVar1;
  *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x11c))) = uVar2;
  if (((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xf0))) != 0) && (uVar1 == 0)) && (uVar2 != 0)) {
    (*(int *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[1]), 1, 3),1);
    if ((char)(*(undefined4 *)&gen_args[2]) == '\x01') {
      (*(int *)&gen_args[1]) = (uint)GEN_PIECE(&(*(int *)&gen_args[1]), 1, 3) << 8;
    }
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xbc))))((*(undefined * PTR32 *)&gen_args[0]),0,(*(int *)&gen_args[1]));
    return 1;
  }
  if (((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xec))) != 0) && (uVar1 == 0)) && (uVar2 != 0)) {
    F_00a61940((*(undefined * PTR32 *)&gen_args[0]));
    return 1;
  }
  return 0;
}

/* ref: Client::Game::Object::GameObject::vf37 */
uint F_00a61a70(unsigned int gen_a0)
{
  GEN_ENTER(0xa61a70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  int * piVar1;
  char cVar2;
  byte bVar3;
  uint in_EAX = 0;
  uint uVar4;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  code * pcVar5;
  uint uVar6;
  int * piVar7;
  uint uVar8;
  bool bVar9;
  
  if (((byte)this[0x8f] & 8) == 0) {
LAB_00a61a85: ;
    return in_EAX & 0xffffff00;
  }
  uVar4 = F_00424810(REFG(undefined4, 0x137104c));
  in_EAX = F_00974710(uVar4);
  if ((((char)in_EAX != '\0') && (REFG(int, 0x1379694) == 0)) ||
     (in_EAX = ((code *)*(gen_code32 *)(*(int *)this + 0x78))(this), (char)in_EAX == '\0')) goto LAB_00a61a85;
  if (*(undefined * PTR32 *)(this + 0xf0) != (undefined *)0x0) {
    bVar3 = F_005d5fe0(*(undefined * PTR32 *)(this + 0xf0));
    if (bVar3 == 0) {
      return CONCAT31(extraout_var,bVar3);
    }
  }
  uVar4 = F_00a5f380(this,((int *)(gen_frame + 0x4)));
  (*(uint *)(gen_frame + 0xc4)) = uVar4;
  (*(int * PTR32 *)(gen_frame + 0xd4)) = (int *)0x0;
  (*(int * PTR32 *)(gen_frame + 0xc8)) = (int *)0x0;
  if (uVar4 != 0) {
    (*(char *)(gen_frame + 0xdb)) = '\0';
    piVar7 = ((int *)(gen_frame + 0x4));
    (*(uint *)(gen_frame + 0xd0)) = uVar4;
    do {
      piVar1 = (int *)*piVar7;
      if (piVar1 != (int *)0x0) {
        if (*(short *)((int)piVar1 + 10) == 0xd) {
          uVar4 = F_006ce010(piVar1,((undefined4 *)(gen_frame + 0x84)),0x10);
          uVar6 = 0;
          (*(uint *)(gen_frame + 0xcc)) = uVar4;
          if (uVar4 != 0) {
            do {
              bVar9 = (*(int * PTR32 *)(gen_frame + 0xd4)) == (int *)0x0;
              piVar1 = (int *)((undefined4 *)(gen_frame + 0x84))[(int)(uVar6)];
              *piVar7 = (int)piVar1;
              if ((bVar9) &&
                 (uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x1d0))(piVar1,this), (char)uVar4 != '\0')) {
                (*(char *)(gen_frame + 0xdb)) = '\x01';
                (*(int * PTR32 *)(gen_frame + 0xd4)) = (int *)*piVar7;
              }
              if (*(short *)(*piVar7 + 10) == 0x1a) {
                (*(int * PTR32 *)(gen_frame + 0xc8)) = (int *)*piVar7;
              }
              uVar6 = uVar6 + 1;
            } while (uVar6 < (*(uint *)(gen_frame + 0xcc)));
          }
        }
        else {
          if (((*(int * PTR32 *)(gen_frame + 0xd4)) == (int *)0x0) &&
             (uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x1d0))(piVar1,this), (char)uVar4 != '\0')) {
            (*(char *)(gen_frame + 0xdb)) = '\x01';
            (*(int * PTR32 *)(gen_frame + 0xd4)) = (int *)*piVar7;
          }
          if (*(short *)(*piVar7 + 10) == 0x1a) {
            (*(int * PTR32 *)(gen_frame + 0xc8)) = (int *)*piVar7;
          }
        }
      }
      piVar7 = piVar7 + 1;
      uVar4 = (*(uint *)(gen_frame + 0xd0)) - 1;
      (*(uint *)(gen_frame + 0xd0)) = uVar4;
    } while (uVar4 != 0);
    if ((((*(int * PTR32 *)(gen_frame + 0xd4)) != (int *)0x0) && ((*(int * PTR32 *)(gen_frame + 0xc8)) != (int *)0x0)) && ((*(int * PTR32 *)(gen_frame + 0xd4)) != (*(int * PTR32 *)(gen_frame + 0xc8)))) {
      uVar4 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0xc8)) + 0x1d0))((*(int * PTR32 *)(gen_frame + 0xc8)),this);
      (*(char *)(gen_frame + 0xdb)) = (char)uVar4;
    }
    this[0x8f] = (undefined1)((byte)this[0x8f] ^ ((*(char *)(gen_frame + 0xdb)) << 4 ^ (byte)this[0x8f]) & 0x10);
  }
  piVar7 = (*(int * PTR32 *)(gen_frame + 0xd4));
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x90))(this);
  cVar2 = (char)uVar4;
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0xd0)) + 0)) = cVar2;
  (*(uint *)(gen_frame + 0xd0)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0xd0)), 1, 3),cVar2);
  bVar3 = F_00a5f230(this);
  if (bVar3 == 0) {
    pcVar5 = *(gen_code32 *)(*(int *)this + 0x28);
  }
  else {
    pcVar5 = *(gen_code32 *)(*(int *)this + 0x24);
  }
  (*pcVar5)(8,(*(uint *)(gen_frame + 0xd0)));
  if (cVar2 == '\x01') {
    if (*(int *)(this + 0x11c) == 0) {
      if (*(int *)(this + 0xf0) != 0) {
        ((code *)*(gen_code32 *)(*(int *)this + 0xbc))(this,1,0);
        ((code *)*(gen_code32 *)(*(int *)this + 0xd0))(this);
      }
      if (*(int *)(this + 0xec) != 0) {
        F_00a61900(this);
      }
    }
    else {
      if (*(int *)(this + 0xf0) != 0) {
        ((code *)*(gen_code32 *)(*(int *)this + 0xbc))(this,0,0);
      }
      if (*(int *)(this + 0xec) != 0) {
        F_00a61940(this);
      }
    }
  }
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x70))(this);
  if ((char)uVar4 != '\0') {
    bVar3 = F_005e1600();
    uVar4 = CONCAT31(extraout_var_00,bVar3);
    if (bVar3 != 0) {
      bVar3 = F_005d99e0();
      uVar4 = CONCAT31(extraout_var_01,bVar3);
      if (bVar3 != 0) goto LAB_00a61c9e;
    }
  }
  if (((byte)this[0x8e] & 0x80) != 0) {
    return uVar4 & 0xffffff00;
  }
LAB_00a61c9e: ;
  uVar4 = CONCAT31((int3)(uVar4 >> 8),(byte)this[0x8e] >> 1) & 0xffffff01;
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0xcc)) + 0)) = (char)uVar4;
  (*(uint *)(gen_frame + 0xcc)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0xcc)), 1, 3),(char)uVar4);
  if (piVar7 != (int *)0x0) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar7 + 0x1d4))(piVar7,this,(*(uint *)(gen_frame + 0xcc)));
  }
  uVar6 = (*(uint *)(gen_frame + 0xc4));
  uVar8 = 0;
  uVar4 = CONCAT31((int3)(uVar4 >> 8),(char)uVar4 * '\x02' ^ (byte)this[0x8e]) & 0xffffff02;
  this[0x8e] = (undefined1)((byte)this[0x8e] ^ (byte)uVar4);
  if ((*(uint *)(gen_frame + 0xc4)) != 0) {
    do {
      piVar7 = (int *)((int *)(gen_frame + 0x4))[(int)(uVar8)];
      if (piVar7 != (int *)0x0) {
        uVar4 = ((code *)*(gen_code32 *)(*piVar7 + 0xc0))(piVar7,this);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar6);
  }
  this[0x8f] = (undefined1)((byte)this[0x8f] & 0xf7);
  return CONCAT31((int3)(uVar4 >> 8),1);
}

/* ref: Client::Game::Object::GameObject::vf27 */
uint F_00a61d10(unsigned int gen_a0)
{
  GEN_ENTER(0xa61d10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code * pcVar4;
  undefined4 * puVar5;
  uint uVar6;
  
  puVar5 = (undefined4 *)F_00a5fd10(this,((undefined1 *)(gen_frame + 0x0)),0x2d);
  uVar1 = *puVar5;
  uVar2 = puVar5[1];
  uVar3 = puVar5[2];
  *(undefined4 *)(this + 0x120) = uVar1;
  *(undefined4 *)(this + 0x124) = uVar2;
  *(undefined4 *)(this + 0x128) = uVar3;
  *(undefined4 *)(this + 0x140) = uVar1;
  *(undefined4 *)(this + 0x144) = uVar2;
  *(undefined4 *)(this + 0x148) = uVar3;
  puVar5 = (undefined4 *)F_00a5fd10(this,((undefined1 *)(gen_frame + 0x0)),0x46);
  uVar1 = *puVar5;
  uVar2 = puVar5[1];
  uVar3 = puVar5[2];
  *(undefined4 *)(this + 0x130) = uVar1;
  *(undefined4 *)(this + 0x134) = uVar2;
  *(undefined4 *)(this + 0x138) = uVar3;
  *(undefined4 *)(this + 0x150) = uVar1;
  *(undefined4 *)(this + 0x154) = uVar2;
  *(undefined4 *)(this + 0x158) = uVar3;
  F_00a60de0(this);
  F_00a61000(this);
  F_00a61140(this);
  ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this,0xb,(uint)(*(int *)(this + 0x7c) != 0));
  pcVar4 = *(gen_code32 *)(*(int *)this + 0x8c);
  this[0x8f] = (undefined1)((byte)this[0x8f] | 8);
  uVar6 = (*pcVar4)(this);
  if ((char)uVar6 == '\x01') {
    if (*(int *)(this + 0x11c) == 0) {
      if (*(int *)(this + 0xf0) != 0) {
        ((code *)*(gen_code32 *)(*(int *)this + 0xbc))(this,1,0);
        uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0xd0))(this);
      }
      if (*(int *)(this + 0xec) != 0) {
        uVar6 = F_00a61900(this);
      }
    }
    else {
      if (*(int *)(this + 0xf0) != 0) {
        uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0xbc))(this,0,0);
      }
      if (*(int *)(this + 0xec) != 0) {
        uVar6 = F_00a61940(this);
        return uVar6;
      }
    }
  }
  return uVar6;
}

/* ref: FUN_00a61e80 */
uint F_00a61e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa61e80u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  *in_ecx = (float)((float10)*param_2 * (float10)*in_ecx);
  in_ecx[1] = (float)((float10)param_2[1] * (float10)in_ecx[1]);
  in_ecx[2] = (float)((float10)param_2[2] * (float10)in_ecx[2]);
  return (uint)in_ecx;
}

/* ref: FUN_00a61eb0 */
uint F_00a61eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa61eb0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  *in_ecx = (float)((float10)*param_2 * (float10)*in_ecx);
  in_ecx[1] = (float)((float10)param_2[1] * (float10)in_ecx[1]);
  in_ecx[2] = (float)((float10)param_2[2] * (float10)in_ecx[2]);
  return (uint)in_ecx;
}

/* ref: FUN_00a61ee0 */
uint F_00a61ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa61ee0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x160) = *param_2;
  *(undefined4 *)(in_ecx + 0x164) = param_2[1];
  *(undefined4 *)(in_ecx + 0x168) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00a61f10 */
uint F_00a61f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa61f10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 0x160);
  param_2[1] = *(undefined4 *)(in_ecx + 0x164);
  param_2[2] = *(undefined4 *)(in_ecx + 0x168);
  return (uint)param_2;
}

/* ref: FUN_00a61f40 */
unsigned int F_00a61f40(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0xa61f40u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  *(float *)(in_ecx + 0x10) = param_2;
  *(float *)(in_ecx + 0x14) = param_3;
  *(float *)(in_ecx + 0x18) = param_4;
  return 0;
}

/* ref: FUN_00a61f70 */
uint F_00a61f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa61f70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *(undefined4 *)(in_ecx + 0x10) = *param_2;
  *(undefined4 *)(in_ecx + 0x14) = uVar1;
  *(undefined4 *)(in_ecx + 0x18) = uVar2;
  return (uint)param_2;
}

/* ref: FUN_00a61fd0 */
uint F_00a61fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa61fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)((int)this + param_1 * 8 + 0x58);
}

/* ref: FUN_00a62010 */
byte F_00a62010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa62010u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x149) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a62020 */
uint F_00a62020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa62020u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a62040 */
unsigned int F_00a62040(float gen_a0)
{
  GEN_ENTER(0xa62040u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00a620a0 */
byte F_00a620a0(void)
{
  GEN_ENTER(0xa620a0u, 0u, 0u, 0u, 0u);
  int iVar1;
  
  iVar1 = *(int *)&REFG(undefined2, 0x1379c78);
  if (REFG(int, 0x1334d6c) != *(int *)&REFG(undefined2, 0x1379c78)) {
    REFG(undefined4, 0x14a9a08) = F_00ab1c90(*(int *)&REFG(undefined2, 0x1379c78));
    REFG(int, 0x1334d6c) = iVar1;
  }
  if (((REFG(undefined4, 0x14a9a08) != 0) && (1 < *(byte *)(REFG(undefined4, 0x14a9a08) + 0x28))) &&
     (*(byte *)(REFG(undefined4, 0x14a9a08) + 0x28) < 5)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a620f0 */
uint F_00a620f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa620f0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)&REFG(undefined2, 0x1379c78);
  if (REFG(int, 0x1334d6c) != *(int *)&REFG(undefined2, 0x1379c78)) {
    REFG(undefined4, 0x14a9a08) = F_00ab1c90(*(int *)&REFG(undefined2, 0x1379c78));
    REFG(int, 0x1334d6c) = iVar2;
  }
  if (REFG(undefined4, 0x14a9a08) != 0) {
    bVar1 = *(byte *)(REFG(undefined4, 0x14a9a08) + 0x28);
    if (bVar1 == 1) {
      uVar3 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
      if ((uVar3 != 1) && (uVar3 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1), uVar3 == 2)) {
        return (uint)*(byte *)(param_1 + 0x65);
      }
    }
    else if ((1 < bVar1) && (bVar1 < 5)) {
      return (uint)*(byte *)(param_1 + 0x65);
    }
  }
  return 0;
}

/* ref: FUN_00a62170 */
byte F_00a62170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa62170u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  
  iVar1 = *(int *)&REFG(undefined2, 0x1379c78);
  if (REFG(int, 0x1334d6c) != *(int *)&REFG(undefined2, 0x1379c78)) {
    REFG(undefined4, 0x14a9a08) = F_00ab1c90(*(int *)&REFG(undefined2, 0x1379c78));
    REFG(int, 0x1334d6c) = iVar1;
  }
  if (REFG(undefined4, 0x14a9a08) == 0) {
    cVar4 = '\0';
  }
  else {
    cVar4 = *(char *)(REFG(undefined4, 0x14a9a08) + 0x28);
  }
  uVar2 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  if ((((uVar2 == 1) || (uVar2 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1), uVar2 == 2)) &&
      ((uVar2 = ((code *)*(gen_code32 *)(*param_2 + 4))(param_2), uVar2 == 1 ||
       (uVar2 = ((code *)*(gen_code32 *)(*param_2 + 4))(param_2), uVar2 == 2)))) && (cVar4 != '\0')) {
    uVar2 = F_00a620f0(param_1);
    uVar3 = F_00a620f0(param_2);
    uVar2 = F_00ab22c0(uVar2);
    return *(char *)(uVar2 + uVar3) == '\x01';
  }
  return 0;
}

/* ref: FUN_00a62220 */
uint F_00a62220(unsigned int gen_a0)
{
  GEN_ENTER(0xa62220u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  
  iVar1 = REFG(int, 0x1379694);
  uVar3 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  uVar4 = 0;
  if (uVar3 != 1) {
    uVar4 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
    if (uVar4 != 2) goto LAB_00a6224a;
  }
  if (iVar1 != 0) {
    bVar2 = F_00a62170(iVar1,param_1);
    return CONCAT31(extraout_var,bVar2);
  }
LAB_00a6224a: ;
  return uVar4 & 0xffffff00;
}

/* ref: FUN_00a62270 */
byte F_00a62270(unsigned int gen_a0)
{
  GEN_ENTER(0xa62270u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int iVar1;
  byte bVar2;
  uint uVar3;
  
  iVar1 = REFG(int, 0x1379694);
  uVar3 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  if ((uVar3 != 1) && (uVar3 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1), uVar3 != 2)) {
    return 1;
  }
  if (iVar1 == 0) {
    return 1;
  }
  bVar2 = F_00a62170(iVar1,param_1);
  return bVar2 == 0;
}

/* ref: FUN_00a622c0 */
unsigned int F_00a622c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa622c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_00a622d0 */
unsigned int F_00a622d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa622d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_00a622e0 */
unsigned int F_00a622e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa622e0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  if (param_1 != (int *)0x0) {
    if (param_2 == 3) {
      uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0xd8))(param_1);
      uVar1 = F_00ab24a0(*(undefined4 *)(uVar1 + 0x48));
      if (uVar1 != 0) {
        F_00aa8240(param_1,*(undefined4 *)(uVar1 + 0x18),*(undefined4 *)(uVar1 + 0x1c));
      }
    }
    else {
      if (param_2 == 6) {
        F_00aa8240(param_1,0x102b9,1);
        return 0;
      }
      if (param_2 == 7) {
        F_00aa8240(param_1,0x10707,1);
        return 0;
      }
    }
  }
  return 0;
}

/* ref: FUN_00a62350 */
unsigned int F_00a62350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa62350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_1 != (undefined *)0x0) {
    F_00aa2e00(param_1,param_2,param_3,0,1,0);
  }
  return 0;
}

/* ref: FUN_00a62370 */
uint F_00a62370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa62370u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint in_EAX = 0;
  
  if (param_1 != (undefined *)0x0) {
    in_EAX = F_00aa3ff0(param_1,0,param_2);
  }
  return in_EAX;
}

/* ref: FUN_00a62390 */
uint F_00a62390(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0xa62390u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  ushort uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = F_00a9faf0(param_1);
  uVar3 = param_2;
  if ((-1 < (int)param_2) || ((int)param_2 < 3)) {
    if (((uVar1 & 0x7f) < 0x12) && (((uVar1 & 0x7f) != 0 && (*(char *)(param_1 + 0x2ea7) != '\0'))))
    {
      switch((unsigned int)(uintptr_t)(uVar1 & 0x7f)) {
      case 1: ;
        iVar2 = param_2 + 0x90;
        break;
      case 2: ;
        iVar2 = param_2 + 0x93;
        break;
      case 3: ;
        iVar2 = param_2 + 0x96;
        break;
      default: ;
        iVar2 = param_2 + 0x9c;
        break;
      case 0xb: ;
        iVar2 = param_2 + 0x9f;
        break;
      case 0xd: ;
        iVar2 = param_2 + 0x99;
      }
      uVar3 = F_00ab4730(iVar2,param_1,param_3,param_4,param_5,param_6,0);
    }
  }
  return uVar3;
}

/* ref: FUN_00a62460 */
uint F_00a62460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa62460u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  byte bVar1;
  undefined4 * puVar2;
  undefined * this;
  float * pfVar3;
  float * pfVar4;
  uint uVar5;
  uint uVar6;
  int local_18;
  int local_14;
  
  local_14 = 0;
  if (((param_1 != (undefined *)0x0) && (param_2 != 0)) &&
     (uVar6 = (uint)*(byte *)(param_2 + 0x2de8), uVar6 != 0)) {
    if (REFG(undefined1, 0x1338ad4) == 0) {
      local_14 = *(byte *)((int)param_1 + 0x1689) + 10;
    }
    else {
      local_18 = 0;
      if (REFG(undefined1, 0x1338ad4) != 0) {
        do {
          puVar2 = (undefined4 *)F_00ae0850(&REFG(undefined, 0x1336e40),local_18);
          this = (undefined *)F_00a64450(&REFG(undefined, 0x14a9a18),*puVar2);
          if (this != (undefined *)0x0) {
            pfVar3 = (float *)F_00a5feb0(param_1);
            pfVar4 = (float *)F_00a5feb0(this);
            if (!(*(double *)&REFG(undefined, 0x1088118) <=
                 (double)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)(float)((float10)pfVar4[2] -
                                                                      (float10)pfVar3[2]) *
                                                      (float10)(float)((float10)pfVar4[2] -
                                                                      (float10)pfVar3[2]) +
                                                     ((float10)(float)((float10)*pfVar4 -
                                                                      (float10)*pfVar3) *
                                                      (float10)(float)((float10)*pfVar4 -
                                                                      (float10)*pfVar3) +
                                                     (float10)(float)((float10)pfVar4[1] -
                                                                     (float10)pfVar3[1]) *
                                                     (float10)(float)((float10)pfVar4[1] -
                                                                     (float10)pfVar3[1])))))))))) {
              bVar1 = F_0054c430(this);
              if (bVar1 == 0) {
                local_14 = local_14 + 10 + (uint)*(byte *)((int)this + 0x1689);
              }
              else {
                local_14 = local_14 + (*(byte *)((int)this + 0x1689) + 10) / 2;
              }
            }
          }
          local_18 = local_18 + 1;
        } while (local_18 < (int)(uint)REFG(undefined1, 0x1338ad4));
      }
    }
    uVar5 = local_14 / (int)(*(byte *)(param_2 + 0x1689) + 10) - 1;
    if ((int)uVar5 < 0) {
      uVar5 = 0;
    }
    if ((int)uVar6 < (int)uVar5) {
      uVar5 = uVar6;
    }
    if (6 < (int)uVar5) {
      uVar5 = 6;
    }
    return uVar5;
  }
  return 0;
}

/* ref: FUN_00a625d0 */
byte F_00a625d0(unsigned int gen_a0)
{
  GEN_ENTER(0xa625d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(byte *)(param_1 + 0x2deb) >> 1 & 1;
}

/* ref: FUN_00a625f0 */
byte F_00a625f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa625f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  byte bVar1;
  byte bVar2;
  uint uVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 != 0) {
    uVar3 = F_00ab22f0(*(undefined4 *)(param_1 + 0x80));
    bVar1 = *(byte *)(uVar3 + 0x13);
    uVar3 = F_00ab22f0(*(undefined4 *)(param_2 + 0x80));
    bVar2 = *(byte *)(uVar3 + 0x13);
    uVar3 = F_00ab2900((uint)bVar1);
    if (uVar3 != 0) {
      return *(byte *)(uVar3 + bVar2);
    }
  }
  return 0;
}

/* ref: FUN_00a62650 */
uint F_00a62650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa62650u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * this;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined * pvVar4;
  float fVar5;
  
  if (param_2 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*param_2 + 4))(param_2);
    if ((uVar2 == 2) &&
       ((*(uint *)(gen_frame + 0x10)) = (uint)*(byte *)((int)param_2 + 0x2dea), *(byte *)((int)param_2 + 0x2dea) != 0)) {
      (*(float *)(gen_frame + 0x14)) = gen_bits2f(param_2[0xb79]);
      (*(uint *)(gen_frame + 0x1c)) = 0;
      (*(uint *)(gen_frame + 0x18)) = 0;
      do {
        this = *(int * PTR32 *)((int)&REFG(undefined4, 0x14a9a1c) + (*(uint *)(gen_frame + 0x18)));
        if ((this != (int *)0x0) && (this != param_2)) {
          uVar2 = ((code *)*(gen_code32 *)(*this + 4))(this);
          if ((uVar2 == 2) &&
             (((char)this[0x62] != '\x02' && ((*(byte *)((int)this + 0x2dd2) & 2) == 0)))) {
            uVar2 = F_00a5feb0(this);
            uVar3 = F_00a5feb0(param_2);
            pvVar4 = (undefined *)F_0046f4a0(((undefined1 *)(gen_frame + 0x0)),uVar3,uVar2);
            fVar5 = F_004bd280(pvVar4);
            if (!((float10)(*(float *)(gen_frame + 0x14)) < (float10)fVar5)) {
              pvVar4 = (undefined *)F_006b8c00();
              bVar1 = F_006d7160(pvVar4);
              if ((((bVar1 != 0) || (param_2[0x39] == this[0x39])) &&
                  (*(byte *)((int)this + 0x2dea) == (*(uint *)(gen_frame + 0x10)))) &&
                 ((*(byte *)((int)this + 0x2deb) & 1) == (byte)param_3)) {
                *(int * PTR32 *)(param_1 + (*(uint *)(gen_frame + 0x1c)) * 4) = this;
                (*(uint *)(gen_frame + 0x1c)) = (*(uint *)(gen_frame + 0x1c)) + 1;
              }
            }
          }
        }
        uVar2 = (*(uint *)(gen_frame + 0x18)) + 4;
        (*(uint *)(gen_frame + 0x18)) = uVar2;
      } while (uVar2 < 400);
      return (*(uint *)(gen_frame + 0x1c));
    }
  }
  return 0;
}

/* ref: FUN_00a62780 */
unsigned int F_00a62780(unsigned int gen_a0)
{
  GEN_ENTER(0xa62780u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0xe0000000;
  in_ecx[1] = 0xe0000000;
  return 0;
}

/* ref: FUN_00a62930 */
unsigned int F_00a62930(void)
{
  GEN_ENTER(0xa62930u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00a62940 */
unsigned int F_00a62940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa62940u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 uVar1;
  
  uVar1 = REFG(float, 0x10e64e4);
  if ((char)param_2 != '\0') {
    *(undefined1 *)(in_ecx + 0x2c8) = 1;
    *(undefined4 *)(in_ecx + 0x2c4) = uVar1;
    return 0;
  }
  *(undefined1 *)(in_ecx + 0x2c8) = 0;
  return 0;
}

/* ref: FUN_00a62970 */
unsigned int F_00a62970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa62970u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 uVar1;
  
  uVar1 = REFG(float, 0x10928e4);
  if ((char)param_2 != '\0') {
    *(undefined1 *)(in_ecx + 0x2d0) = 1;
    *(undefined4 *)(in_ecx + 0x2cc) = uVar1;
    return 0;
  }
  *(undefined1 *)(in_ecx + 0x2d0) = 0;
  return 0;
}

/* ref: FUN_00a629a0 */
unsigned int F_00a629a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa629a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 uVar1;
  
  uVar1 = REFG(float, 0x10adb9c);
  if ((char)param_2 != '\0') {
    *(undefined1 *)(in_ecx + 0x2d8) = 1;
    *(undefined4 *)(in_ecx + 0x2d4) = uVar1;
    return 0;
  }
  *(undefined1 *)(in_ecx + 0x2d8) = 0;
  return 0;
}

/* ref: FUN_00a629e0 */
uint F_00a629e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa629e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (uint)(byte)param_2 * 0x40 + in_ecx;
}

/* ref: FUN_00a629f0 */
byte F_00a629f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa629f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  switch((unsigned int)(uintptr_t)((undefined1)param_1)) {
  case 1: ;
  case 0x13: ;
    return 0;
  case 2: ;
  case 0x14: ;
    return 1;
  case 3: ;
  case 0x15: ;
    return 2;
  case 4: ;
  case 0x16: ;
    return 3;
  case 5: ;
  case 0x17: ;
    return 4;
  case 6: ;
  case 0x18: ;
    return 5;
  case 7: ;
  case 0x19: ;
    return 6;
  default: ;
    return 0xff;
  case 0x1a: ;
  case 0x1b: ;
  case 0x1c: ;
    return 7;
  }
}

/* ref: FUN_00a62a70 */
byte F_00a62a70(unsigned int gen_a0)
{
  GEN_ENTER(0xa62a70u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  switch((unsigned int)(uintptr_t)((undefined1)param_1)) {
  case 0: ;
    return 1;
  case 1: ;
    return 2;
  case 2: ;
    return 3;
  case 3: ;
    return 4;
  case 4: ;
    return 5;
  case 5: ;
    return 6;
  case 6: ;
    return 7;
  case 7: ;
    return 0x1a;
  default: ;
    return 0xff;
  }
}

/* ref: FUN_00a62ad0 */
byte F_00a62ad0(unsigned int gen_a0)
{
  GEN_ENTER(0xa62ad0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  if ((char)param_1 == '\b') {
    return 1;
  }
  if ((char)param_1 != '\t') {
    if ((char)param_1 != '\n') {
      return 0xff;
    }
    return 3;
  }
  return 2;
}

/* ref: FUN_00a62b00 */
byte F_00a62b00(unsigned int gen_a0)
{
  GEN_ENTER(0xa62b00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  if ((char)param_1 == '\x01') {
    return 8;
  }
  if ((char)param_1 != '\x02') {
    if ((char)param_1 != '\x03') {
      return 0xff;
    }
    return 10;
  }
  return 9;
}

/* ref: FUN_00a62b20 */
byte F_00a62b20(unsigned int gen_a0)
{
  GEN_ENTER(0xa62b20u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  if ((7 < (byte)param_1) && ((byte)param_1 < 0xb)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a62b40 */
byte F_00a62b40(unsigned int gen_a0)
{
  GEN_ENTER(0xa62b40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  if ((7 < (byte)param_1) && ((byte)param_1 < 0xb)) {
    return 3;
  }
  return -((byte)param_1 < 0xb) & 5;
}

/* ref: FUN_00a62b60 */
uint F_00a62b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa62b60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  
  if (((byte)param_1 < 8) || (10 < (byte)param_1)) {
    switch((unsigned int)(uintptr_t)((byte)param_1)) {
    case 0: ;
      iVar1 = 1;
      break;
    case 1: ;
      iVar1 = 2;
      break;
    case 2: ;
      iVar1 = 3;
      break;
    case 3: ;
      iVar1 = 4;
      break;
    case 4: ;
      iVar1 = 5;
      break;
    case 5: ;
      iVar1 = 6;
      break;
    case 6: ;
      iVar1 = 7;
      break;
    case 7: ;
      iVar1 = 0x1a;
      break;
    default: ;
      iVar1 = 0xff;
    }
    iVar1 = iVar1 * 1000;
  }
  else if ((byte)param_1 == 8) {
    iVar1 = 100000;
  }
  else if ((byte)param_1 == 9) {
    iVar1 = 200000;
  }
  else if ((byte)param_1 == 10) {
    iVar1 = 300000;
  }
  else {
    iVar1 = 25500000;
  }
  return (byte)param_3 + 1 + (iVar1 + (uint)(byte)param_2) * 10;
}

/* ref: FUN_00a62c20 */
uint F_00a62c20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa62c20u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x100];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined * this;
  undefined3 extraout_var = 0;
  int * in_ecx;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  (*(uint *)(gen_frame + 0xec)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xf0);
  if (param_1 < 0x158) {
    in_ecx = ((int *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[param_1]));
  }
  else {
    in_ecx = (int *)0x0;
  }
  uVar3 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x54)) = REFG(void * PTR32, 0x14c4e84);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = REFG(float, 0x10e64e4);
  (*(undefined4 *)(gen_frame + 0xc)) = REFG(float, 0x10e64e4);
  (*(undefined4 *)(gen_frame + 0x10)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x14)) = 1;
  (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  if (in_ecx != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*in_ecx + 0xd8))(in_ecx);
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = ((code *)*(gen_code32 *)(*in_ecx + 0xd8))(in_ecx);
      uVar2 = *(uint *)(uVar3 + 0x40);
      (*(uint *)(gen_frame + 0x5c)) = uVar2;
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar2 = F_00ab1ed0(uVar2);
        uVar3 = 0;
        if (uVar2 != 0) {
          uVar3 = ((code *)*(gen_code32 *)(*in_ecx + 0xd8))(in_ecx);
          if (*(int *)(uVar3 + 0x50) == param_3) {
            uVar3 = ((code *)*(gen_code32 *)(*in_ecx + 0xd8))(in_ecx);
            uVar3 = F_00475fa0(*(undefined4 *)(uVar3 + 0x58),*(undefined4 *)(uVar3 + 0x5c));
            uVar2 = ((code *)*(gen_code32 *)(*in_ecx + 0xd8))(in_ecx);
            (*(uint *)(gen_frame + 0x68)) = *(undefined4 *)(uVar2 + 0x48);
            uVar2 = ((code *)*(gen_code32 *)(*in_ecx + 0xd8))(in_ecx);
            F_00ac9740(in_ecx,uVar3,(uint)*(byte *)(uVar2 + 0x44),(*(uint *)(gen_frame + 0x68)));
            uVar3 = F_00ab1ed0((*(uint *)(gen_frame + 0x5c)));
            (*(uint *)(gen_frame + 0x68)) = (uint)*(ushort *)(uVar3 + 0xc);
            uVar3 = ((code *)*(gen_code32 *)(*in_ecx + 0xd8))(in_ecx);
            (*(undefined4 *)(gen_frame + 0x40)) = *(undefined4 *)(uVar3 + 0x4c);
            iVar4 = 0;
            (*(int *)(gen_frame + 0x64)) = 0;
            (*(int *)(gen_frame + 0x60)) = 0;
            uVar3 = ((code *)*(gen_code32 *)(*in_ecx + 0xd8))(in_ecx);
            if (*(char *)(uVar3 + 0x148) != '\0') {
              iVar5 = 0x58;
              do {
                uVar3 = ((code *)*(gen_code32 *)(*in_ecx + 0xd8))(in_ecx);
                if ((*(int *)(iVar5 + uVar3) != -0x20000000) &&
                   (uVar3 = F_00a354d0(&REFG(undefined4, 0x14a31f0),*(int *)(iVar5 + uVar3),
                                         *(undefined4 *)(iVar5 + 4 + uVar3)), uVar3 != 0)) {
                  ((uint *)(gen_frame + 0x70))[(int)((*(int *)(gen_frame + 0x64)))] = (uint)*(ushort *)(uVar3 + 0x88);
                  (*(int *)(gen_frame + 0x64)) = (*(int *)(gen_frame + 0x64)) + 1;
                }
                (*(int *)(gen_frame + 0x60)) = (*(int *)(gen_frame + 0x60)) + 1;
                iVar5 = iVar5 + 8;
                uVar3 = ((code *)*(gen_code32 *)(*in_ecx + 0xd8))(in_ecx);
                iVar4 = (*(int *)(gen_frame + 0x64));
              } while ((*(int *)(gen_frame + 0x60)) < (int)(uint)*(byte *)(uVar3 + 0x148));
            }
            uVar3 = ((code *)*(gen_code32 *)(*in_ecx + 0xd8))(in_ecx);
            (*(char *)(gen_frame + 0x6f)) = *(char *)(uVar3 + 0x149) + '\x01';
            uVar3 = ((code *)*(gen_code32 *)(*in_ecx + 0xd8))(in_ecx);
            *(char *)(uVar3 + 0x149) = (*(char *)(gen_frame + 0x6f));
            uVar3 = ((code *)*(gen_code32 *)(*in_ecx + 0xd8))(in_ecx);
            if (((*(char *)(uVar3 + 0x148) == '\0') && ((*(uint *)(gen_frame + 0x5c)) != 0x2dd)) && ((*(uint *)(gen_frame + 0x5c)) != 0x2de))
            {
              F_00a7d290(600,in_ecx,0,0,0,REFG(float, 0x10916ec));
            }
            if (iVar4 != 0) {
              uVar3 = F_0068eb90((*(uint *)(gen_frame + 0x68)));
              (*(uint *)(gen_frame + 0x58)) = uVar3;
              (*(uint *)(gen_frame + 0x5c)) = (*(uint *)(gen_frame + 0x68));
              F_00b5be60((*(undefined * PTR32 *)(gen_frame + 0x54)),&(*(undefined * PTR32 *)(gen_frame + 0x54)),(uint)*(ushort *)(in_ecx + 0x22),&(*(uint *)(gen_frame + 0x58)),iVar4,
                           ((uint *)(gen_frame + 0x70)),&(*(undefined4 *)(gen_frame + 0x0)));
            }
            uVar3 = ((code *)*(gen_code32 *)(*in_ecx + 0xd8))(in_ecx);
            F_00ac3da0(uVar3);
            uVar8 = 0;
            uVar7 = 0;
            uVar6 = 0;
            this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*in_ecx + 0xd8))(in_ecx)));
            F_00ac3e30(this,uVar6,uVar7,uVar8);
          }
          bVar1 = F_00a9f620(in_ecx);
          uVar3 = CONCAT31(extraout_var,bVar1);
          if (bVar1 != 0) {
            REFG(int, 0x14bd004) = param_3;
          }
        }
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xec)) ^ (uint)(uint)(gen_frame + 0xf0));
  return uVar3;
}

/* ref: FUN_00a62f70 */
uint F_00a62f70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa62f70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  undefined * this;
  
  uVar2 = param_2;
  if (((param_2 < 0x158) && (piVar1 = ((int *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[param_2])), piVar1 != (int *)0x0)) &&
     (uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xb8))(piVar1), (char)uVar2 != '\0')) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0xdc))(piVar1);
    uVar2 = 0;
    if (uVar3 != 0) {
      this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xdc))(piVar1)));
      uVar2 = F_00ac69e0(this,param_3,param_4);
    }
  }
  return uVar2;
}

/* ref: FUN_00a62fd0 */
unsigned int F_00a62fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa62fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined *)0x0) {
    switch((unsigned int)(uintptr_t)(param_2)) {
    case 1: ;
      F_00aa3950(param_1,0,1);
      return 0;
    case 2: ;
      F_00aa3950(param_1,1,1);
      return 0;
    case 3: ;
    case 6: ;
    case 7: ;
      F_00a622e0(param_1,param_2);
    }
  }
  return 0;
}

/* ref: FUN_00a63030 */
unsigned int F_00a63030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa63030u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined *)0x0) {
    switch((unsigned int)(uintptr_t)(param_2)) {
    case 1: ;
      F_00aa3950(param_1,1,2);
      return 0;
    case 3: ;
    case 6: ;
    case 7: ;
      F_00a622e0(param_1,param_2);
    }
  }
  return 0;
}

/* ref: FUN_00a63080 */
uint F_00a63080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa63080u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int * this;
  undefined4 uVar1;
  byte bVar2;
  undefined4 * puVar3;
  undefined1 * puVar4;
  uint uVar5;
  undefined * pvVar6;
  uint uVar7;
  float fVar8;
  
  uVar1 = REFG(undefined4, 0x1379694);
  *param_1 = 0;
  puVar3 = param_1;
  if ((param_2 != (int *)0x0) &&
     (puVar3 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*param_2 + 4))(param_2))), puVar3 == (undefined4 *)0x2)) {
    if (*(byte *)((int)param_2 + 0x2de9) == 0) {
      (*(uint *)(gen_frame + 0x28)) = 0;
      puVar4 = (undefined1 *)F_00a62460(uVar1,param_2);
      (*(undefined1 * PTR32 *)(gen_frame + 0x2c)) = puVar4;
      if ((int)puVar4 < 1) {
        return (uint)puVar4;
      }
    }
    else {
      (*(uint *)(gen_frame + 0x28)) = (uint)*(byte *)((int)param_2 + 0x2de9);
      (*(undefined1 * PTR32 *)(gen_frame + 0x2c)) = (undefined1 *)(uint)*(byte *)(param_2 + 0xb7a);
      if (&REFG(undefined, 0x6) < (undefined1 *)(uint)*(byte *)(param_2 + 0xb7a)) {
        (*(undefined1 * PTR32 *)(gen_frame + 0x2c)) = &REFG(undefined, 0x6);
      }
    }
    (*(float *)(gen_frame + 0x1c)) = gen_bits2f(param_2[0xb79]);
    (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = &REFG(undefined4, 0x14a9a1c);
    do {
      this = (int *)*(*(undefined4 * PTR32 *)(gen_frame + 0x24));
      if (((((this != (int *)0x0) && (this != param_2)) &&
           (uVar5 = ((code *)*(gen_code32 *)(*this + 4))(this), uVar5 == 2)) &&
          (((char)this[0x62] != '\x02' && ((*(byte *)((int)this + 0x2dd2) & 2) == 0)))) &&
         (bVar2 = F_00a62170(param_2,this), bVar2 == 0)) {
        if ((*(uint *)(gen_frame + 0x28)) == 0) {
          if (((*(char *)((int)this + 0x2de9) == '\0') && ((*(byte *)((int)this + 0x2deb) & 2) != 0)
              ) && (bVar2 = F_00a625f0(param_2,this), bVar2 != 0)) goto LAB_00a631a6;
        }
        else if (*(byte *)((int)this + 0x2de9) == (*(uint *)(gen_frame + 0x28))) {
LAB_00a631a6: ;
          pvVar6 = (undefined *)F_006b8c00();
          bVar2 = F_006d7160(pvVar6);
          if ((bVar2 != 0) || (param_2[0x39] == this[0x39])) {
            uVar5 = F_00a5feb0(this);
            uVar7 = F_00a5feb0(param_2);
            pvVar6 = (undefined *)F_0046f4a0(((undefined1 *)(gen_frame + 0x0)),uVar7,uVar5);
            fVar8 = F_004bd280(pvVar6);
            (*(float *)(gen_frame + 0x20)) = fVar8;
            if (!((float10)(*(float *)(gen_frame + 0x1c)) < (float10)fVar8)) {
              F_00a627d0(param_1,this,fVar8,(uint)(*(undefined1 * PTR32 *)(gen_frame + 0x2c)));
            }
          }
        }
      }
      puVar3 = (*(undefined4 * PTR32 *)(gen_frame + 0x24)) + 1;
      (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = puVar3;
    } while ((int)puVar3 < 0x14a9bac);
  }
  return (uint)puVar3;
}

/* ref: FUN_00a63230 */
uint F_00a63230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa63230u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  
  piVar1 = param_1;
  *param_1 = 0;
  param_1[1] = param_2;
  if (*(char *)(param_2 + 0x2dea) != '\0') {
    if ((*(byte *)(param_2 + 0x2deb) & 1) == 0) {
      uVar2 = F_00a62650(((int *)(gen_frame + 0x0)),param_2,1);
      if (uVar2 == 0) {
        return 0;
      }
      param_1[1] = ((int *)(gen_frame + 0x0))[0];
      param_1[2] = param_2;
      uVar2 = F_00a62650(((int *)(gen_frame + 0x0)),((int *)(gen_frame + 0x0))[0],0);
      iVar3 = 0;
      if (0 < (int)uVar2) {
        piVar4 = param_1 + 3;
        do {
          if (((int *)(gen_frame + 0x0))[(int)(iVar3)] != param_2) {
            *piVar4 = ((int *)(gen_frame + 0x0))[(int)(iVar3)];
            piVar4 = piVar4 + 1;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < (int)uVar2);
      }
    }
    else {
      uVar2 = F_00a62650(((int *)(gen_frame + 0x0)),param_2,0);
      if (0 < (int)uVar2) {
        piVar4 = ((int *)(gen_frame + 0x0));
        piVar5 = param_1 + 2;
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *piVar5 = *piVar4;
          piVar4 = piVar4 + 1;
          piVar5 = piVar5 + 1;
        }
      }
    }
  }
  uVar2 = F_00a63080(param_1,param_1[1]);
  iVar3 = *param_1;
  param_1 = (int *)0x0;
  if (0 < iVar3) {
    piVar4 = piVar1 + 7;
    do {
      uVar2 = F_00a62650(((int *)(gen_frame + 0x0)),piVar4[-2],0);
      if (0 < (int)uVar2) {
        piVar5 = ((int *)(gen_frame + 0x0));
        piVar6 = piVar4;
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *piVar6 = *piVar5;
          piVar5 = piVar5 + 1;
          piVar6 = piVar6 + 1;
        }
      }
      uVar2 = (int)param_1 + 1;
      piVar4 = piVar4 + 5;
      param_1 = (int *)uVar2;
    } while ((int)uVar2 < *piVar1);
  }
  return uVar2;
}

/* ref: FUN_00a63320 */
unsigned int F_00a63320(unsigned int gen_a0)
{
  GEN_ENTER(0xa63320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  byte * pbVar2;
  
  bVar1 = 0;
  pbVar2 = (byte *)((int)this + 0x38);
  do {
    *pbVar2 = bVar1;
    bVar1 = bVar1 + 1;
    pbVar2 = pbVar2 + 0x40;
  } while (bVar1 < 0xb);
  *(undefined1 *)((int)this + 0x2c0) = 0;
  *(undefined1 *)((int)this + 0x2c8) = 0;
  *(undefined1 *)((int)this + 0x2d0) = 0;
  *(undefined1 *)((int)this + 0x2d8) = 0;
  *(undefined4 *)((int)this + 0x2c4) = 0;
  *(undefined4 *)((int)this + 0x2cc) = 0;
  *(undefined4 *)((int)this + 0x2d4) = 0;
  return 0;
}

/* ref: FUN_00a63370 */
unsigned int F_00a63370(unsigned int gen_a0)
{
  GEN_ENTER(0xa63370u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined * this_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (*(char *)((int)this + 0x2c8) != '\0') {
    F_00ab1160((float *)((int)this + 0x2c4),1);
    if (*(float *)((int)this + 0x2c4) <= 0.0) {
      *(undefined1 *)((int)this + 0x2c8) = 0;
      F_00ab4370(0xae,REFG(undefined4, 0x1379694),REFG(undefined4, 0x1379694),0,0);
    }
  }
  if (*(char *)((int)this + 0x2d0) != '\0') {
    F_00ab1160((float *)((int)this + 0x2cc),1);
    if (*(float *)((int)this + 0x2cc) <= 0.0) {
      *(undefined1 *)((int)this + 0x2d0) = 0;
      F_00ab4370(0xd7,REFG(undefined4, 0x1379694),REFG(undefined4, 0x1379694),0,0);
    }
  }
  if (*(char *)((int)this + 0x2d8) != '\0') {
    F_00ab1160((float *)((int)this + 0x2d4),1);
    if (*(float *)((int)this + 0x2d4) <= 0.0) {
      *(undefined1 *)((int)this + 0x2d8) = 0;
      piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      uVar5 = 0xffffffff;
      uVar4 = 0;
      uVar3 = 1;
      uVar2 = 0x1d507;
      this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1)));
      F_007c8bb0(this_00,uVar2,uVar3,uVar4,uVar5);
    }
  }
  return 0;
}

/* ref: FUN_00a63450 */
byte F_00a63450(unsigned int gen_a0)
{
  GEN_ENTER(0xa63450u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (*(char *)((int)this + 0x30) == '\0') {
    return 0;
  }
  bVar1 = *(byte *)((int)this + 0x38);
  if ((bVar1 < 8) || (10 < bVar1)) {
    switch((unsigned int)(uintptr_t)(bVar1)) {
    case 0: ;
      uVar3 = 1;
      break;
    case 1: ;
      uVar3 = 2;
      break;
    case 2: ;
      uVar3 = 3;
      break;
    case 3: ;
      uVar3 = 4;
      break;
    case 4: ;
      uVar3 = 5;
      break;
    case 5: ;
      uVar3 = 6;
      break;
    case 6: ;
      uVar3 = 7;
      break;
    case 7: ;
      uVar3 = 0x1a;
      break;
    default: ;
      uVar3 = 0xff;
    }
    uVar2 = F_00a68280(&REFG(undefined1, 0x14ab070),uVar3,0);
    bVar1 = *(byte *)((int)this + 0x30);
    if ((((uVar2 & 0xffff) < (uint)bVar1 * 10) || ((short)uVar2 == 0)) || (4 < bVar1)) {
      bVar1 = bVar1 - 1;
    }
  }
  else {
    bVar1 = F_00a68940(&REFG(undefined1, 0x14ab070));
    uVar2 = F_00ab3fa0((uint)bVar1);
    if ((uVar2 == 0) || (bVar1 = *(byte *)((int)this + 0x30), *(byte *)(uVar2 + 0x20) <= bVar1)) {
      return *(char *)((int)this + 0x30) - 1;
    }
    if (2 < bVar1) {
      return bVar1 - 1;
    }
  }
  return bVar1;
}

/* ref: FUN_00a63520 */
byte F_00a63520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa63520u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  longlong lVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  ushort * puVar6;
  uint uVar7;
  undefined * this_00;
  
  iVar2 = REFG(int, 0x1379694);
  if ((char)(*(uint *)&gen_args[2]) == '\0') {
    if ((REFG(undefined1, 0x14b4ec2) & 0x20) == 0) {
      return 0;
    }
  }
  else if ((REFG(undefined1, 0x14b4ec2) & 0x40) == 0) {
    return 0;
  }
  if ((REFG(int, 0x1379694) == 0) || (uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0xa8))))((*(int * PTR32 *)&gen_args[1])), uVar5 == 0)) {
    return 0;
  }
  if ((char)(*(uint *)&gen_args[2]) == '\0') {
    bVar4 = F_00a629f0((uint)*(byte *)(iVar2 + 0x1688));
    uVar5 = (uint)bVar4;
    if (0x7e < bVar4) {
      return 0;
    }
  }
  else {
    if (REFG(char, 0x14ab29a) == '\x01') {
      uVar5 = 8;
    }
    else if (REFG(char, 0x14ab29a) == '\x02') {
      uVar5 = 9;
    }
    else {
      if (REFG(char, 0x14ab29a) != '\x03') {
        return 0;
      }
      uVar5 = 10;
    }
    bVar4 = (byte)uVar5;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar4);
  this_00 = ((undefined *)GEN_TOP((uVar5 * 0x40 + (int)(*(undefined * PTR32 *)&gen_args[0]))));
  bVar4 = *(byte *)((int)this_00 + 0x30);
  (*(undefined4 *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x0)), 1, 3),bVar4);
  if ((char)(*(uint *)&gen_args[2]) == '\0') {
    uVar5 = F_00a68280(&REFG(undefined1, 0x14ab070),(uint)*(byte *)(iVar2 + 0x1688),0);
    if (((uint)bVar4 * 10 <= (uVar5 & 0xffff)) &&
       (uVar5 = F_00a68280(&REFG(undefined1, 0x14ab070),(uint)*(byte *)(iVar2 + 0x1688),0), (short)uVar5 != 0))
    goto LAB_00a6362e;
  }
  else {
    bVar3 = F_00a68940(&REFG(undefined1, 0x14ab070));
    uVar5 = F_00ab3fa0((uint)bVar3);
    if ((uVar5 != 0) && (bVar4 < *(byte *)(uVar5 + 0x20))) {
LAB_00a6362e: ;
      (*(uint *)&gen_args[2]) = (*(uint *)&gen_args[2]) & 0xffffff00;
      do {
        uVar5 = F_00a62b60((*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)&gen_args[2]));
        uVar5 = F_00ab3d80(uVar5);
        if ((uVar5 != 0) && (bVar4 = F_0090bbf0(this_00,(*(uint *)&gen_args[2])), bVar4 == 0)) {
          bVar4 = 0;
          do {
            puVar6 = (ushort *)F_00ab3db0((uint)*(ushort *)(uVar5 + 8 + (uint)bVar4 * 2));
            lVar1 = ((ulonglong)(((ulonglong)bVar4 < 0x40) ? ((((ulonglong)(((ulonglong)(byte)((char)(*(uint *)&gen_args[2]) * '\x05') < 0x40) ? ((1L << (ulonglong)(byte)((char)(*(uint *)&gen_args[2]) * '\x05'))) : 0)) << (ulonglong)bVar4)) : 0));
            if (((((uint)lVar1 & *(uint *)((int)this_00 + 0x28)) == 0 &&
                  ((uint)((ulonglong)lVar1 >> 0x20) & *(uint *)((int)this_00 + 0x2c)) == 0) &&
                (*puVar6 != 0)) &&
               (uVar7 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0xa8))))((*(int * PTR32 *)&gen_args[1])), uVar7 == *puVar6)) {
              return 1;
            }
            bVar4 = bVar4 + 1;
          } while (bVar4 < 4);
        }
        bVar4 = (char)(*(uint *)&gen_args[2]) + 1;
        (*(uint *)&gen_args[2]) = CONCAT31(GEN_PIECE(&(*(uint *)&gen_args[2]), 1, 3),bVar4);
        if (9 < bVar4) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}

/* ref: FUN_00a63700 */
uint F_00a63700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa63700u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  undefined * this_00;
  int iVar4;
  undefined4 uVar5;
  
  bVar1 = *(byte *)(param_2 + 5);
  *(undefined4 *)((int)this + (uint)bVar1 * 0x40 + 0x28) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)((int)this + (uint)bVar1 * 0x40 + 0x2c) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)((int)this + (uint)bVar1 * 0x40 + 0x34) = *(undefined4 *)(param_2 + 0x38);
  *(undefined1 *)((int)this + (uint)bVar1 * 0x40 + 0x30) = *(undefined1 *)(param_2 + 4);
  iVar4 = 0;
  do {
    *(undefined1 *)((int)this + iVar4 + (uint)bVar1 * 0x40) = *(undefined1 *)(param_2 + 6 + iVar4);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x28);
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar5 = 0x3b;
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
  this_00 = (undefined *)F_00763050(uVar3,uVar5);
  F_008df6e0(this_00,0);
  uVar3 = F_008df6e0(this_00,2);
  return uVar3;
}

/* ref: FUN_00a63780 */
uint F_00a63780(unsigned int gen_a0)
{
  GEN_ENTER(0xa63780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  byte bVar1;
  undefined4 * puVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  undefined3 extraout_var_00 = 0;
  int iVar5;
  int * piVar6;
  int * piVar7;
  int iVar8;
  
  (*(uint *)(gen_frame + 0x98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  (*(int *)(gen_frame + 0x10)) = 0;
  ((int *)(gen_frame + 0x14))[0] = 0;
  ((int *)(gen_frame + 0x14))[1] = 0;
  ((int *)(gen_frame + 0x14))[2] = 0;
  puVar2 = ((undefined4 *)(gen_frame + 0x24));
  iVar5 = 6;
  do {
    puVar2[-1] = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2 = puVar2 + 5;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  (*(uint *)(gen_frame + 0xc)) = 0;
  uVar3 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0xad);
  if (*(int *)(uVar3 + 0x14) != 0) {
    uVar3 = F_006b8c00();
    bVar1 = F_006c5260(uVar3);
    uVar3 = CONCAT31(extraout_var,bVar1);
    if (bVar1 == 0) {
      uVar4 = F_00533b10(&REFG(undefined4, 0x1375bc0));
      uVar3 = F_00533a10(&REFG(undefined4, 0x1375bc0));
      if (*(uint *)this == uVar4) {
        if (*(uint *)((int)this + 4) == uVar3) goto LAB_00a63953;
        *(uint *)((int)this + 4) = uVar3;
      }
      else {
        *(uint *)this = uVar4;
        uVar3 = uVar4;
      }
      uVar4 = F_00a64450(&REFG(undefined, 0x14a9a18),uVar3);
      uVar3 = 0;
      if ((((uVar4 != 0) &&
           (uVar3 = CONCAT31((int3)(uVar4 >> 8),2), *(char *)(uVar4 + 0x188) != '\x02')) &&
          ((*(byte *)(uVar4 + 0x2dd2) & 2) == 0)) &&
         (uVar3 = F_00a62220(uVar4), (char)uVar3 != '\0')) {
        F_00a63230(&(*(uint *)(gen_frame + 0xc)),uVar4);
        iVar5 = 0;
        do {
          if (((int *)(gen_frame + 0x14))[(int)(iVar5)] != 0) {
            F_00994090(REFG(void * PTR32, 0x1487c8c),(uint)*(ushort *)((*(int *)(gen_frame + 0x10)) + 0x88),
                         (uint)*(ushort *)(((int *)(gen_frame + 0x14))[(int)(iVar5)] + 0x88));
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < 3);
        uVar3 = (*(uint *)(gen_frame + 0xc));
        if (0 < (int)(*(uint *)(gen_frame + 0xc))) {
          piVar6 = ((int *)(gen_frame + 0x14)) + 3;
          (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0xc));
          do {
            iVar5 = *piVar6;
            F_00994090(REFG(void * PTR32, 0x1487c8c),(uint)*(ushort *)((*(int *)(gen_frame + 0x10)) + 0x88),
                         (uint)*(ushort *)(iVar5 + 0x88));
            piVar7 = piVar6 + 2;
            iVar8 = 3;
            do {
              uVar3 = 0;
              if (*piVar7 != 0) {
                bVar1 = F_00994090(REFG(void * PTR32, 0x1487c8c),(uint)*(ushort *)(iVar5 + 0x88),
                                     (uint)*(ushort *)(*piVar7 + 0x88));
                uVar3 = CONCAT31(extraout_var_00,bVar1);
              }
              piVar7 = piVar7 + 1;
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
            piVar6 = piVar6 + 5;
            (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) - 1;
          } while ((*(uint *)(gen_frame + 0x4)) != 0);
        }
      }
    }
  }
LAB_00a63953: ;
  F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
  return uVar3;
}

/* ref: FUN_00a63970 */
byte F_00a63970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa63970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00a63520(this,param_1,0);
  if (bVar1 == 0) {
    bVar1 = F_00a63520(this,param_1,1);
    if (bVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00a63a40 */
uint F_00a63a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa63a40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xc4) = param_2;
  return param_2;
}

/* ref: FUN_00a63a90 */
uint F_00a63a90(unsigned int gen_a0)
{
  GEN_ENTER(0xa63a90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((int)this + 0x28);
  iVar2 = 10;
  do {
    *(undefined1 *)(puVar1 + 4) = 0xff;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined1 *)(puVar1 + 2) = 0;
    puVar1[3] = 0xffffffff;
    puVar1[-10] = 0;
    puVar1[-9] = 0;
    puVar1[-8] = 0;
    puVar1[-7] = 0;
    puVar1[-6] = 0;
    puVar1[-5] = 0;
    puVar1[-4] = 0;
    puVar1[-3] = 0;
    puVar1[-2] = 0;
    puVar1[-1] = 0;
    puVar1 = puVar1 + 0x10;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return (uint)this;
}

/* ref: Client::Game::Object::GameObject::vf2 */
byte F_00a63b00(void)
{
  GEN_ENTER(0xa63b00u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Object::GameObject::vf3 */
uint F_00a63b10(unsigned int gen_a0)
{
  GEN_ENTER(0xa63b10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x30;
}

/* ref: Client::Game::Object::GameObject::vf4 */
uint F_00a63b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa63b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this);
  return uVar1;
}

/* ref: Client::Game::Object::GameObject::vf7 */
byte F_00a63b50(unsigned int gen_a0)
{
  GEN_ENTER(0xa63b50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x8b);
}

/* ref: Client::Game::Object::GameObject::vf8 */
byte F_00a63b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa63b60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x8b) = (byte)param_2;
  return (byte)param_2;
}

/* ref: Client::Game::Object::GameObject::vf14 */
uint F_00a63b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa63b70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xec) = param_2;
  return param_2;
}

/* ref: Client::Game::Object::GameObject::vf15 */
uint F_00a63b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa63b80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x40))(this);
  return uVar1;
}

/* ref: Client::Game::Object::GameObject::vf20 */
unsigned int F_00a63bb0(void)
{
  GEN_ENTER(0xa63bb0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Object::GameObject::vf38 */
uint F_00a63bc0(unsigned int gen_a0)
{
  GEN_ENTER(0xa63bc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)((*(uint *)(in_ecx + 0x11c) & 0xfffffff7) == 0);
}

/* ref: Client::Game::Object::GameObject::vf39 */
uint F_00a63bd0(unsigned int gen_a0)
{
  GEN_ENTER(0xa63bd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)((*(uint *)(in_ecx + 0x11c) & 0xfffff7ff) == 0);
}

/* ref: Client::Game::Object::GameObject::vf40 */
uint F_00a63bf0(unsigned int gen_a0)
{
  GEN_ENTER(0xa63bf0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)((*(uint *)(in_ecx + 0x11c) & 0xfffff7f7) == 0);
}

/* ref: Client::Game::Object::GameObject::vf41 */
uint F_00a63c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa63c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00a60a40(this,param_1,0x2e);
  return param_1;
}

/* ref: Client::Game::Object::GameObject::vf42 */
uint F_00a63c30(unsigned int gen_a0)
{
  GEN_ENTER(0xa63c30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x80);
}

/* ref: Client::Game::Object::GameObject::vf46 */
byte F_00a63c40(void)
{
  GEN_ENTER(0xa63c40u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Object::GameObject::vf52 */
unsigned int F_00a63c50(void)
{
  GEN_ENTER(0xa63c50u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Object::GameObject::vf45 */
uint F_00a63c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa63c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[53])REFP(0x10e6c8c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Control::MoveControl::GroundAttributeInfo::vf0 */
uint F_00a63d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa63d20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e6d64));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Control::MoveControl::MoveControllerSubMemberForPacketMove::vf2 */
uint F_00a63d50(unsigned int gen_a0)
{
  GEN_ENTER(0xa63d50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this,0);
  return uVar1;
}

/* ref: Client::Game::Control::MoveControl::JumpPacketInfo::vf0 */
uint F_00a63db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa63db0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e6d6c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Control::MoveControl::JumpController::vf0 */
uint F_00a63e20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa63e20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e6d74));
  *(undefined * PTR32 * PTR32 *)(this + 0xd0) = (*(undefined * PTR32 (*)[1])REFP(0x10e6d6c));
  *(undefined * PTR32 * PTR32 *)(this + 0x80) = (*(undefined * PTR32 (*)[1])REFP(0x10e6d6c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Control::MoveControl::ActionMoveController::vf0 */
uint F_00a63e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa63e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e6d7c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a63ea0 */
uint F_00a63ea0(unsigned int gen_a0)
{
  GEN_ENTER(0xa63ea0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  F_00c9da70(in_ecx);
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10e6d84));
  in_ecx[3] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00a63ee0 */
unsigned int F_00a63ee0(float gen_a0)
{
  GEN_ENTER(0xa63ee0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00a63f00 */
uint F_00a63f00(unsigned int gen_a0)
{
  GEN_ENTER(0xa63f00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  
  uVar1 = F_00406bb0(0x187040,0,0);
  *(uint *)((int)this + 0x3f8) = uVar1;
  *(undefined4 *)((int)this + 0x400) = 0x2f50;
  uVar1 = F_00406bb0(0x127b40,0,0);
  *(uint *)((int)this + 0x3fc) = uVar1;
  puVar3 = this;
  for (iVar2 = 100; puVar3 = puVar3 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
  }
  puVar3 = (undefined4 *)((int)this + 0x19c);
  for (iVar2 = 0x96; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this + 0x3f4) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined1 *)((int)this + 0x408) = 1;
  return 0;
}

/* ref: FUN_00a63f80 */
unsigned int F_00a63f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa63f80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  bool bVar2;
  
  bVar2 = false;
  if (param_1 < 100) {
    piVar1 = *(int * PTR32 *)((int)this + param_1 * 4 + 4);
    if (piVar1 != (int *)0x0) {
      bVar2 = piVar1 == REFG(int * PTR32, 0x1379694);
      if (bVar2) {
        F_00afe380();
      }
      ((code *)*(gen_code32 *)(*piVar1 + 0xb0))(piVar1);
      ((code *)*(gen_code32 *)(*piVar1 + 0xb4))(piVar1,0);
      *(undefined4 *)((int)this + param_1 * 4 + 4) = 0;
    }
    F_00a35760(&REFG(undefined, 0x14a31e0),piVar1);
    if (bVar2) {
      REFG(int * PTR32, 0x1379694) = (int *)0x0;
    }
  }
  return 0;
}

/* ref: FUN_00a64000 */
uint F_00a64000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa64000u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = param_1;
  if ((int)param_1 < 100) {
    piVar1 = *(int * PTR32 *)((int)this + param_1 * 4 + 4);
    if ((piVar1 == (int *)0x0) || (piVar1[0x1d] != param_2)) {
      uVar2 = F_00a54fa0(&REFG(undefined * PTR32, 0x1334920),param_2);
    }
    else {
      bVar3 = piVar1 == REFG(int * PTR32, 0x1379694);
      if (bVar3) {
        F_00afde00(&REFG(undefined, 0x14c0a50),0);
      }
      ((code *)*(gen_code32 *)(*piVar1 + 0xb0))(piVar1);
      ((code *)*(gen_code32 *)(*piVar1 + 0xb4))(piVar1,0);
      *(undefined4 *)((int)this + param_1 * 4 + 4) = 0;
      uVar2 = F_00a35760(&REFG(undefined, 0x14a31e0),piVar1);
      if (bVar3) {
        REFG(int * PTR32, 0x1379694) = (int *)0x0;
        return uVar2;
      }
    }
  }
  return uVar2;
}

/* ref: FUN_00a64090 */
unsigned int F_00a64090(unsigned int gen_a0)
{
  GEN_ENTER(0xa64090u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = 0;
  do {
    this = (undefined *)((int)this + 4);
    bVar3 = false;
    if (iVar2 < 100) {
      piVar1 = *(int * PTR32 *)this;
      if (piVar1 != (int *)0x0) {
        bVar3 = piVar1 == REFG(int * PTR32, 0x1379694);
        if (bVar3) {
          F_00afe380();
        }
        ((code *)*(gen_code32 *)(*piVar1 + 0xb0))(piVar1);
        ((code *)*(gen_code32 *)(*piVar1 + 0xb4))(piVar1,0);
        *(int *)this = 0;
      }
      F_00a35760(&REFG(undefined, 0x14a31e0),piVar1);
      if (bVar3) {
        REFG(int * PTR32, 0x1379694) = (int *)0x0;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 100);
  return 0;
}

/* ref: FUN_00a64110 */
uint F_00a64110(unsigned int gen_a0)
{
  GEN_ENTER(0xa64110u, gen_a0, 0u, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  do {
    in_ecx = in_ecx + 1;
    if (*in_ecx == 0) {
      return uVar1;
    }
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 100);
  return 0xffffffff;
}

/* ref: FUN_00a641b0 */
unsigned int F_00a641b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa641b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * param_1 = (code *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 0x3f4);
  if (0 < iVar2) {
    piVar1 = (int *)((int)this + 0x19c);
    do {
      (*param_1)(*piVar1 + param_2);
      piVar1 = piVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00a642c0 */
uint F_00a642c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa642c0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_3 + 400 + param_2 * 4);
  uVar2 = *(undefined4 *)(param_3 + param_2 * 4);
  *(undefined4 *)(param_3 + param_2 * 4) = *(undefined4 *)(param_3 + param_1 * 4);
  *(undefined4 *)(param_3 + 400 + param_2 * 4) = *(undefined4 *)(param_3 + 400 + param_1 * 4);
  *(undefined4 *)(param_3 + param_1 * 4) = uVar2;
  *(undefined4 *)(param_3 + 400 + param_1 * 4) = uVar1;
  return param_3;
}

/* ref: FUN_00a64300 */
unsigned int F_00a64300(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa64300u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  float * pfVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  float * pfVar5;
  uint uVar6;
  int iVar7;
  float10 fVar8;
  
  uVar6 = param_2;
  do {
    fVar8 = (float10)*((float *)GEN_TOP((param_1 + 400 + ((int)(uVar6 + param_3) >> 1) * 4)));
    uVar4 = uVar6;
    iVar7 = param_3;
    while( true ) {
      pfVar5 = (float *)(param_1 + 400 + uVar4 * 4);
      if ((float10)*pfVar5 < fVar8) {
        do {
          pfVar1 = pfVar5 + 1;
          pfVar5 = pfVar5 + 1;
          uVar4 = uVar4 + 1;
        } while ((!GEN_ISNAN(fVar8) && !GEN_ISNAN((float10)*pfVar1)) && !(fVar8 <= (float10)*pfVar1));
      }
      pfVar5 = (float *)(param_1 + 400 + iVar7 * 4);
      if (fVar8 < (float10)*pfVar5) {
        do {
          pfVar1 = pfVar5 + -1;
          pfVar5 = pfVar5 + -1;
          iVar7 = iVar7 + -1;
        } while ((!GEN_ISNAN((float10)*pfVar1) && !GEN_ISNAN(fVar8)) && !((float10)*pfVar1 <= fVar8));
      }
      if (iVar7 <= (int)uVar4) break;
      uVar3 = *(undefined4 *)(param_1 + uVar4 * 4);
      uVar2 = *(undefined4 *)(param_1 + 400 + uVar4 * 4);
      *(undefined4 *)(param_1 + uVar4 * 4) = *(undefined4 *)(param_1 + iVar7 * 4);
      *(undefined4 *)(param_1 + 400 + uVar4 * 4) = *(undefined4 *)(param_1 + 400 + iVar7 * 4);
      *(undefined4 *)(param_1 + iVar7 * 4) = uVar3;
      *(undefined4 *)(param_1 + 400 + iVar7 * 4) = uVar2;
      uVar4 = uVar4 + 1;
      iVar7 = iVar7 + -1;
    }
    if ((int)uVar6 < (int)(uVar4 - 1)) {
      F_00a64300(param_1,uVar6,uVar4 - 1);
    }
    uVar6 = iVar7 + 1;
  } while ((int)uVar6 < param_3);
  return 0;
}

/* ref: FUN_00a643d0 */
unsigned int F_00a643d0(unsigned int gen_a0)
{
  GEN_ENTER(0xa643d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = 100;
  do {
    this = (undefined *)((int)this + 4);
    if (*(undefined * PTR32 *)this != (undefined *)0x0) {
      F_00aa0be0(*(undefined * PTR32 *)this);
    }
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return 0;
}

/* ref: FUN_00a64400 */
unsigned int F_00a64400(void)
{
  GEN_ENTER(0xa64400u, 0u, 0u, 0u, 0u);
  if (REFG(void * PTR32, 0x1379694) != (undefined *)0x0) {
    F_00aa0c40(REFG(void * PTR32, 0x1379694));
    return 0;
  }
  return 0;
}

/* ref: FUN_00a64420 */
unsigned int F_00a64420(unsigned int gen_a0)
{
  GEN_ENTER(0xa64420u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = 100;
  do {
    this = (undefined *)((int)this + 4);
    if (*(undefined * PTR32 *)this != (undefined *)0x0) {
      F_00aa8770(*(undefined * PTR32 *)this);
    }
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return 0;
}

/* ref: FUN_00a64450 */
uint F_00a64450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa64450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  
  iVar1 = 0;
  piVar2 = this;
  while( true ) {
    piVar2 = piVar2 + 1;
    if ((*piVar2 != 0) && (*(int *)(*piVar2 + 0x74) == param_1)) break;
    iVar1 = iVar1 + 1;
    if (99 < iVar1) {
      return 0;
    }
  }
  return *(uint *)((int)this + iVar1 * 4 + 4);
}

/* ref: FUN_00a64490 */
uint F_00a64490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa64490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  byte * pbVar4;
  int iVar5;
  int iVar6;
  byte * pbVar7;
  int * piVar8;
  bool bVar9;
  
  if (param_1 != (byte *)0x0) {
    iVar6 = 0;
    piVar8 = this;
    do {
      piVar8 = piVar8 + 1;
      piVar2 = (int *)*piVar8;
      if (piVar2 != (int *)0x0) {
        if ((char)param_2 != '\0') {
          uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
          if (uVar3 != 1) goto LAB_00a644f9;
        }
        pbVar4 = ((byte *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*piVar8 + 0xc))((int *)*piVar8)));
        pbVar7 = param_1;
        do {
          bVar1 = *pbVar4;
          bVar9 = bVar1 < *pbVar7;
          if (bVar1 != *pbVar7) {
LAB_00a644f0: ;
            iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_00a644f5;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar9 = bVar1 < pbVar7[1];
          if (bVar1 != pbVar7[1]) goto LAB_00a644f0;
          pbVar4 = pbVar4 + 2;
          pbVar7 = pbVar7 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_00a644f5: ;
        if (iVar5 == 0) {
          return *(uint *)((int)this + iVar6 * 4 + 4);
        }
      }
LAB_00a644f9: ;
      iVar6 = iVar6 + 1;
    } while (iVar6 < 100);
  }
  return 0;
}

/* ref: FUN_00a64520 */
uint F_00a64520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa64520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  
  if (param_1 != 0) {
    iVar3 = 0;
    piVar4 = this;
    do {
      piVar4 = piVar4 + 1;
      piVar1 = (int *)*piVar4;
      if (piVar1 != (int *)0x0) {
        uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
        if (uVar2 == 2) {
          uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
          if (((char)uVar2 == '\x03') && (*(int *)(*piVar4 + 0x84) == *(int *)(param_1 + 0x74))) {
            return *(uint *)((int)this + iVar3 * 4 + 4);
          }
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 100);
  }
  return 0;
}

/* ref: FUN_00a64590 */
uint F_00a64590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa64590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  
  if (param_1 != 0) {
    iVar3 = 0;
    piVar4 = this;
    do {
      piVar4 = piVar4 + 1;
      piVar1 = (int *)*piVar4;
      if (piVar1 != (int *)0x0) {
        uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
        if (uVar2 == 2) {
          uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
          if (((char)uVar2 == '\x02') && (*(int *)(*piVar4 + 0x84) == *(int *)(param_1 + 0x74))) {
            return *(uint *)((int)this + iVar3 * 4 + 4);
          }
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 100);
  }
  return 0;
}

/* ref: FUN_00a64600 */
unsigned int F_00a64600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa64600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  int iVar3;
  
  piVar2 = (int *)((int)this + 8);
  iVar3 = 0x14;
  do {
    iVar1 = piVar2[-1];
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0xe4) == param_1)) {
      *(byte *)(iVar1 + 0x8f) = *(byte *)(iVar1 + 0x8f) | 0x2c;
    }
    iVar1 = *piVar2;
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0xe4) == param_1)) {
      *(byte *)(iVar1 + 0x8f) = *(byte *)(iVar1 + 0x8f) | 0x2c;
    }
    iVar1 = piVar2[1];
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0xe4) == param_1)) {
      *(byte *)(iVar1 + 0x8f) = *(byte *)(iVar1 + 0x8f) | 0x2c;
    }
    iVar1 = piVar2[2];
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0xe4) == param_1)) {
      *(byte *)(iVar1 + 0x8f) = *(byte *)(iVar1 + 0x8f) | 0x2c;
    }
    iVar1 = piVar2[3];
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0xe4) == param_1)) {
      *(byte *)(iVar1 + 0x8f) = *(byte *)(iVar1 + 0x8f) | 0x2c;
    }
    piVar2 = piVar2 + 5;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return 0;
}

/* ref: FUN_00a64690 */
byte F_00a64690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa64690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    this = (undefined *)((int)this + 4);
    piVar1 = *(int * PTR32 *)this;
    if ((piVar1 != (int *)0x0) && (((byte)param_1 & 1 < *(byte *)((int)piVar1 + 0x8a)) != 0)) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x68))(piVar1);
      if ((char)uVar2 == '\0') {
        return 0;
      }
      if (((*(byte *)((int)piVar1 + 0x8e) & 0x80) != 0) &&
         (uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x70))(piVar1), (char)uVar2 == '\0')) {
        return 0;
      }
    }
    uVar3 = uVar3 + 1;
    if (99 < uVar3) {
      return 1;
    }
  } while( true );
}

/* ref: FUN_00a64700 */
uint F_00a64700(unsigned int gen_a0)
{
  GEN_ENTER(0xa64700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00a64090(this);
  F_00406ad0(*(undefined4 *)((int)this + 0x3f8));
  *(undefined4 *)((int)this + 0x3f8) = 0;
  uVar1 = F_00406ad0(*(undefined4 *)((int)this + 0x3fc));
  *(undefined4 *)((int)this + 0x3fc) = 0;
  return uVar1;
}

/* ref: FUN_00a64740 */
unsigned int F_00a64740(unsigned int gen_a0)
{
  GEN_ENTER(0xa64740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  int * piVar3;
  
  F_00a54e30(&REFG(undefined * PTR32, 0x1334920),3);
  F_00a55030(&REFG(undefined * PTR32, 0x1334920),0x14);
  F_00a55210(&REFG(undefined * PTR32, 0x1334920),100);
  iVar2 = 100;
  piVar3 = this;
  do {
    piVar3 = piVar3 + 1;
    if (*piVar3 != 0) {
      ((code *)*(gen_code32 *)(*(int *)*piVar3 + 0x84))((int *)*piVar3);
    }
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (*((int *)GEN_TOP(((int)this + *(int *)((int)this + 0x404) * 4 + 4))) != 0) {
    piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + *(int *)((int)this + 0x404) * 4 + 4)));
    uVar1 = ((code *)*(gen_code32 *)(*piVar3 + 0xdc))(piVar3);
    if (uVar1 != 0) {
      piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + *(int *)((int)this + 0x404) * 4 + 4)));
      this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0xdc))(piVar3)));
      F_00ac3c90(this_00);
    }
  }
  *(int *)((int)this + 0x404) = *(int *)((int)this + 0x404) + 1;
  if (99 < *(int *)((int)this + 0x404)) {
    *(undefined4 *)((int)this + 0x404) = 0;
  }
  return 0;
}

/* ref: FUN_00a647f0 */
uint F_00a647f0(void)
{
  GEN_ENTER(0xa647f0u, 0u, 0u, 0u, 0u);
  undefined1 gen_out[0x4];
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_out + 0x0);
  F_00c47745(uVar1 ^ (uint)(uint)(gen_out + 0x0));
  return uVar1;
}

/* ref: FUN_00a64810 */
unsigned int F_00a64810(unsigned int gen_a0)
{
  GEN_ENTER(0xa64810u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 gen_out[0x4];
  uint uVar1;
  int iVar2;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_out + 0x0);
  F_00ae6910();
  iVar2 = 100;
  do {
    this = (undefined *)((int)this + 4);
    if (*(undefined * PTR32 *)this != (undefined *)0x0) {
      F_00aa0b80(*(undefined * PTR32 *)this);
    }
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  F_00c47745(uVar1 ^ (uint)(uint)(gen_out + 0x0));
  return 0;
}

/* ref: Global::CreateCharacter */
uint F_00a64860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa64860u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * in_ecx = (undefined *)(uintptr_t)gen_a0;
  undefined4 in_edi = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int iVar1;
  int iVar2;
  byte bVar3;
  int * this;
  undefined * this_00;
  
  if ((*(int *)((int)in_ecx + 0x3f8) != 0) && (*(int *)((int)in_ecx + 0x3fc) != 0)) {
    if (99 < param_4) {
      return 0;
    }
    if (*(int *)((int)in_ecx + param_4 * 4 + 4) != 0) {
      F_00a63f80(in_ecx,param_4);
    }
    this_00 = ((undefined *)GEN_TOP((param_4 * 0x3e90 + *(int *)((int)in_ecx + 0x3f8))));
    if (this_00 == (undefined *)0x0) {
      this = (int *)0x0;
    }
    else {
      this = (int *)F_00a668f0(this_00);
    }
    iVar1 = *(int *)((int)in_ecx + 0x400);
    iVar2 = *(int *)((int)in_ecx + 0x3fc);
    ((code *)*(gen_code32 *)(*this + 0xac))(this,param_4 * 2);
    F_00aa1460(this,iVar1 * param_4 + iVar2);
    F_00a5f450(this,param_3);
    ((code *)*(gen_code32 *)(*this + 0x40))(this);
    ((code *)*(gen_code32 *)(*this + 0x48))(this,(undefined4)gen_fl2bits((float)(float10)0));
    bVar3 = F_00ae0910(&REFG(undefined, 0x1336e40),param_3);
    F_00aa6a30(this,(uint)bVar3);
    if (param_3 == REFG(int, 0x1379690)) {
      F_00a9f360(this);
    }
    *(int * PTR32 *)((int)in_ecx + param_4 * 4 + 4) = this;
    F_00a35730(&REFG(undefined, 0x14a31e0),this);
    return (uint)this;
  }
  return 0;
}

/* ref: FUN_00a64960 */
uint F_00a64960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa64960u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  undefined4 in_edi = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 0;
  piVar1 = in_ecx;
  do {
    piVar1 = piVar1 + 1;
    if (*piVar1 == 0) {
      if (uVar2 == 0xffffffff) {
        return 0;
      }
      F_00a64860(in_ecx,in_edi,param_3,uVar2);
      return uVar2;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 100);
  return 0;
}

/* ref: Client::Game::Control::ActionTimelineSequencer::vf0 */
uint F_00a649d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa649d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e6d94));
  *(undefined * PTR32 * PTR32 *)(this + 0x100) = (*(undefined * PTR32 (*)[1])REFP(0x109c94c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Control::EmoteController::vf0 */
uint F_00a64a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa64a40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e6d9c));
  *(undefined * PTR32 * PTR32 *)(this + 0x18) = (*(undefined * PTR32 (*)[1])REFP(0x1090544));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Control::TimelineTransitController::vf0 */
uint F_00a64ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa64ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e6da4));
  *(undefined * PTR32 * PTR32 *)(this + 0xc0) = (*(undefined * PTR32 (*)[1])REFP(0x109c984));
  *(undefined * PTR32 * PTR32 *)(this + 0x70) = (*(undefined * PTR32 (*)[1])REFP(0x109c94c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Control::CharacterLookAtTargetParam::vf0 */
uint F_00a64b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa64b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e6dac));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a64b60 */
uint F_00a64b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa64b60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x10) = param_2;
  return param_2;
}

/* ref: FUN_00a64b70 */
uint F_00a64b70(unsigned int gen_a0)
{
  GEN_ENTER(0xa64b70u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx + 0x14);
  return in_ecx;
}

/* ref: FUN_00a64ba0 */
uint F_00a64ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa64ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  ushort uVar1;
  
  uVar1 = *(ushort *)((int)this + param_1 * 2 + 0x194);
  *(ushort *)((int)this + param_1 * 2 + 0x194) = uVar1 + 1;
  return (uint)uVar1;
}

/* ref: FUN_00a64bd0 */
byte F_00a64bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa64bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)((int)this + 0x3f4)) {
    piVar2 = (int *)((int)this + 0x19c);
    do {
      if (*piVar2 == param_1) {
        return 1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)((int)this + 0x3f4));
  }
  return 0;
}

/* ref: FUN_00a64c10 */
byte F_00a64c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa64c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x3f4);
  if (iVar1 < 0x96) {
    *(undefined4 *)((int)this + iVar1 * 4 + 0x19c) = param_1;
    *(int *)((int)this + 0x3f4) = iVar1 + 1;
    return 1;
  }
  return 0;
}

/* ref: FUN_00a64c40 */
uint F_00a64c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa64c40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x3b04) = param_2;
  return param_2;
}

/* ref: SplineController2D_MMM_MoveControl_Control_Game_Client::vf0 */
uint F_00a64c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa64c80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10e6db4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: SplineController2D_MVSplineVector2_MoveControl_Control_Game_Client::vf0 */
uint F_00a64cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa64cb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10e6dbc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa4) = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x98) = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a64d20 */
uint F_00a64d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa64d20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x28,400);
  return (uint)uVar1;
}

/* ref: Client::Graphics::Vfx::VfxDataListenner::vf1 */
unsigned int F_00a64da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa64da0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Graphics::Vfx::VfxDataListenner::vf0 */
uint F_00a64db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa64db0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e6dc4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Object::GameObject::vf13 */
uint F_00a64de0(unsigned int gen_a0)
{
  GEN_ENTER(0xa64de0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0xec);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x70))(piVar1,(uint)(byte)this[0x8c]);
  }
  return uVar2;
}

/* ref: FUN_00a64e00 */
unsigned int F_00a64e00(unsigned int gen_a0)
{
  GEN_ENTER(0xa64e00u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  in_ecx[10] = 0;
  in_ecx[0xb] = 0;
  in_ecx[0xc] = 0;
  in_ecx[0xd] = 0;
  in_ecx[0xe] = 0;
  in_ecx[0x14] = 0;
  in_ecx[0x15] = 0;
  in_ecx[0x16] = 0;
  *(undefined2 *)(in_ecx + 0x18) = 0;
  *(undefined1 *)((int)in_ecx + 0x62) = 0;
  in_ecx[0x1c] = 0;
  in_ecx[0x1d] = 0;
  in_ecx[0x1e] = 0;
  *(undefined2 *)(in_ecx + 0x20) = 0;
  *(undefined1 *)((int)in_ecx + 0x82) = 0;
  in_ecx[0x21] = 0;
  in_ecx[0x22] = 0;
  return 0;
}

/* ref: Client::Game::Control::MoveControl::MoveControllerSubMemberForAutoMove::vf0 */
uint F_00a64f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa64f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e6dd0));
  (*((code *)GEN_TOP((*(undefined * PTR32 (*)[2])REFP(0x10e6dd4))[0])))(0);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a64fd0 */
unsigned int F_00a64fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa64fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined1 *)((int)this + 0x14) = *(undefined1 *)(param_1 + 0x14);
  *(undefined1 *)((int)this + 0x15) = *(undefined1 *)(param_1 + 0x15);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined1 *)((int)this + 0x24) = *(undefined1 *)(param_1 + 0x24);
  *(undefined1 *)((int)this + 0x25) = *(undefined1 *)(param_1 + 0x25);
  *(undefined1 *)((int)this + 0x26) = *(undefined1 *)(param_1 + 0x26);
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined1 *)((int)this + 0x4c) = *(undefined1 *)(param_1 + 0x4c);
  return 0;
}

/* ref: Client::Game::Control::MoveControl::MoveController::BGCollisionEventCallback::vf1 */
unsigned int F_00a65060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa65060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(undefined * PTR32 *)(this + 0xc) != (undefined *)0x0) {
    F_00aed120(*(undefined * PTR32 *)(this + 0xc),param_1);
    return 0;
  }
  return 0;
}

/* ref: Client::Game::Control::MoveControl::MoveController::BGCollisionEventCallback::vf2 */
unsigned int F_00a65080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa65080u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (*(int *)(in_ecx + 0xc) != 0) {
    return 0;
  }
  return 0;
}

/* ref: FUN_00a650a0 */
uint F_00a650a0(unsigned int gen_a0)
{
  GEN_ENTER(0xa650a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e6de0));
  F_00c9f2d0((undefined *)((int)this + 0x454));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x370) =
       (*(undefined * PTR32 (*)[1])REFP(0x10e6d64));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x310) =
       (*(undefined * PTR32 (*)[1])REFP(0x10e6d7c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1f0) = (*(undefined * PTR32 (*)[1])REFP(0x10e6d74));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2c0) = (*(undefined * PTR32 (*)[1])REFP(0x10e6d6c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x270) = (*(undefined * PTR32 (*)[1])REFP(0x10e6d6c));
  *(undefined4 *)((int)this + 0x1c4) =
       (*(undefined * PTR32 (*)[1])REFP(0x10e6dd0));
  (*((code *)GEN_TOP((*(undefined * PTR32 (*)[2])REFP(0x10e6dd4))[0])))((undefined4 *)((int)this + 0x1c4),0);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x124) =
       (*(undefined * PTR32 (*)[1])REFP(0x10e6db4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x10e6db4));
  return 0x10e6db4;
}

/* ref: FUN_00a65110 */
uint F_00a65110(unsigned int gen_a0)
{
  GEN_ENTER(0xa65110u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x80) = REFG(float, 0x10e6528);
  *(undefined4 *)(in_ecx + 0x36c) = REFG(float, 0x1087f04);
  *(undefined4 *)(in_ecx + 0x10) = 0;
  *(undefined1 *)(in_ecx + 0x420) = 0;
  *(undefined4 *)(in_ecx + 0x360) = 0;
  *(undefined4 *)(in_ecx + 0x364) = 0;
  *(undefined4 *)(in_ecx + 0x368) = 0;
  *(undefined1 *)(in_ecx + 0x422) = 0;
  *(undefined4 *)(in_ecx + 0x410) = 0;
  *(undefined4 *)(in_ecx + 0x414) = 0;
  *(undefined4 *)(in_ecx + 0x418) = 0;
  *(undefined1 *)(in_ecx + 0x421) = 0;
  *(undefined4 *)(in_ecx + 0x430) = 0;
  *(undefined4 *)(in_ecx + 0x434) = 0;
  *(undefined4 *)(in_ecx + 0x438) = 0;
  *(undefined4 *)(in_ecx + 0x440) = 0;
  *(undefined4 *)(in_ecx + 0x444) = 0;
  *(undefined4 *)(in_ecx + 0x448) = 0;
  *(undefined4 *)(in_ecx + 0x44c) = 0;
  *(undefined4 *)(in_ecx + 0x450) = 0;
  return 0;
}

/* ref: Client::Game::Control::MoveControl::MoveController::BGCollisionEventCallback::vf0 */
uint F_00a651c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa651c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00c9f2d0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Control::MoveControl::MoveController::vf0 */
uint F_00a651f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa651f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00a650a0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a65220 */
unsigned int F_00a65220(unsigned int gen_a0)
{
  GEN_ENTER(0xa65220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  uVar2 = REFG(undefined4, 0x1334d70);
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  uVar1 = REFG(float, 0x1087f04);
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0x124) = uVar2;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 300) = uVar1;
  *(undefined4 *)((int)this + 0x128) = 0xffffffff;
  *(undefined4 *)((int)this + 0x130) = REFG(float, 0x1375ac0);
  *(undefined4 *)((int)this + 0x134) = REFG(float, 0x1375ac4);
  *(undefined4 *)((int)this + 0x138) = REFG(float, 0x1375ac8);
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x150) = 0;
  *(undefined4 *)((int)this + 0x154) = 0;
  *(undefined4 *)((int)this + 0x158) = 0;
  *(undefined4 *)((int)this + 0x15c) = 0;
  *(undefined4 *)((int)this + 0x160) = 0xffffffff;
  *(undefined4 *)((int)this + 0x164) = 0;
  *(undefined4 *)((int)this + 0x168) = REFG(float, 0x10e6528);
  *(undefined4 *)((int)this + 0x16c) = 0x3f800000;
  *(undefined4 *)((int)this + 0x170) = 0x3f800000;
  *(undefined4 *)((int)this + 0x174) = 0x3f800000;
  *(undefined4 *)((int)this + 0x178) = 0x3f800000;
  *(undefined4 *)((int)this + 0x17c) = 0x3f800000;
  *(undefined4 *)((int)this + 0x180) = 0x3f800000;
  *(undefined4 *)((int)this + 0x184) = 0x3f800000;
  *(undefined4 *)((int)this + 0x188) = 0x3f800000;
  *(undefined4 *)((int)this + 0x18c) = 0x3f800000;
  *(undefined4 *)((int)this + 400) = 0x3f800000;
  *(undefined4 *)((int)this + 0x194) = 0x3f800000;
  *(undefined4 *)((int)this + 0x198) = 0x3f800000;
  *(undefined4 *)((int)this + 0x19c) = 0x3f800000;
  *(undefined4 *)((int)this + 0x1a0) = 0x3f800000;
  *(undefined1 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0x3f800000;
  *(undefined4 *)((int)this + 0x1ac) = 0x3f800000;
  *(undefined4 *)((int)this + 0x1b0) = 0x3f800000;
  *(undefined4 *)((int)this + 0x1b4) = 0x3f800000;
  *(undefined4 *)((int)this + 0x1b8) = 0x3f800000;
  *(undefined4 *)((int)this + 0x1bc) = 0x3f800000;
  *(undefined4 *)((int)this + 0x1c0) = 0x3f800000;
  *(undefined4 *)((int)this + 0x1c4) = 0x3f800000;
  *(undefined4 *)((int)this + 0x1c8) = 0x3f800000;
  *(undefined4 *)((int)this + 0x1cc) = 0x3f800000;
  *(undefined4 *)((int)this + 0x1d0) = 0x3f800000;
  *(undefined4 *)((int)this + 0x1d4) = 0x3f800000;
  *(undefined4 *)((int)this + 0x1d8) = 0x3f800000;
  *(undefined4 *)((int)this + 0x1dc) = 0x3f800000;
  *(undefined4 *)((int)this + 0x1e0) = 0;
  *(undefined4 *)((int)this + 0x1e4) = 0;
  *(undefined4 *)((int)this + 0x1e8) = 0;
  *(undefined2 *)((int)this + 0x1ec) = 0;
  *(undefined4 *)((int)this + 0x1ee) = 0;
  *(undefined4 *)((int)this + 0x1f2) = 0;
  *(undefined4 *)((int)this + 0x1f6) = 0;
  *(undefined2 *)((int)this + 0x1fa) = 0;
  *(undefined4 *)((int)this + 0x1fc) = 0;
  *(undefined4 *)((int)this + 0x200) = 0;
  *(undefined4 *)((int)this + 0x204) = 0;
  *(undefined2 *)((int)this + 0x208) = 0;
  *(char * PTR32 *)((int)this + 0x20c) = "cbbm_id0";
  *(char * PTR32 *)((int)this + 0x210) = "cbbm_id0";
  *(char * PTR32 *)((int)this + 0x214) = "cbbm_id0";
  *(char * PTR32 *)((int)this + 0x218) = "cbbm_id0";
  *(char * PTR32 *)((int)this + 0x21c) = "cbbm_id0";
  *(char * PTR32 *)((int)this + 0x220) = "cbbm_id0";
  *(char * PTR32 *)((int)this + 0x224) = "cbbm_id0";
  *(char * PTR32 *)((int)this + 0x228) = "cbbm_id0";
  *(char * PTR32 *)((int)this + 0x22c) = "cbbm_id0";
  *(char * PTR32 *)((int)this + 0x230) = "cbbm_id0";
  *(char * PTR32 *)((int)this + 0x234) = "cbbm_id0";
  *(char * PTR32 *)((int)this + 0x238) = "cbbm_id0";
  *(char * PTR32 *)((int)this + 0x23c) = "cbbm_id0";
  *(char * PTR32 *)((int)this + 0x240) = "cbbm_id0";
  *(undefined4 *)((int)this + 0x244) = 0;
  *(undefined4 *)((int)this + 0x248) = 0;
  *(undefined4 *)((int)this + 0x24c) = 0;
  *(undefined4 *)((int)this + 0x250) = 0;
  *(undefined4 *)((int)this + 0x254) = 0;
  *(undefined4 *)((int)this + 600) = 0;
  *(undefined4 *)((int)this + 0x25c) = 0;
  *(undefined4 *)((int)this + 0x260) = 0;
  *(undefined4 *)((int)this + 0x264) = 0;
  *(undefined4 *)((int)this + 0x268) = 0;
  *(undefined4 *)((int)this + 0x26c) = 0;
  *(undefined4 *)((int)this + 0x270) = 0;
  *(undefined4 *)((int)this + 0x274) = 0;
  *(undefined4 *)((int)this + 0x278) = 0;
  *(undefined4 *)((int)this + 0x27c) = 0;
  *(undefined4 *)((int)this + 0x280) = 0;
  *(undefined4 *)((int)this + 0x284) = 0;
  *(undefined4 *)((int)this + 0x288) = 0;
  *(undefined4 *)((int)this + 0x28c) = 0;
  *(undefined4 *)((int)this + 0x290) = 0;
  *(undefined4 *)((int)this + 0x294) = 0;
  *(undefined4 *)((int)this + 0x298) = 0;
  *(undefined4 *)((int)this + 0x29c) = 0;
  *(undefined4 *)((int)this + 0x2a0) = 0;
  *(undefined4 *)((int)this + 0x2a4) = 0;
  *(undefined4 *)((int)this + 0x2a8) = 0;
  *(undefined4 *)((int)this + 0x2ac) = 0;
  *(undefined4 *)((int)this + 0x2b0) = 0;
  *(undefined4 *)((int)this + 0x2b4) = 0;
  return 0;
}

/* ref: Client::Game::Control::CharacterLookAtControlParam::vf0 */
uint F_00a656c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa656c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e6df4));
  *(undefined * PTR32 * PTR32 *)(this + 0x2c4) = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
  *(undefined * PTR32 * PTR32 *)(this + 0x180) = (*(undefined * PTR32 (*)[1])REFP(0x10e6db4));
  *(undefined * PTR32 * PTR32 *)(this + 0xd0) =
       (*(undefined * PTR32 (*)[1])REFP(0x10e6dbc));
  *(undefined * PTR32 * PTR32 *)(this + 0x174) = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
  *(undefined * PTR32 * PTR32 *)(this + 0x168) = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
  *(undefined * PTR32 * PTR32 *)(this + 0x84) = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
  *(undefined * PTR32 * PTR32 *)(this + 0x60) = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
  *(undefined * PTR32 * PTR32 *)(this + 0x10) = (*(undefined * PTR32 (*)[1])REFP(0x10e6dac));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a65720 */
unsigned int F_00a65720(unsigned int gen_a0)
{
  GEN_ENTER(0xa65720u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  int iVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e6dfc));
  puVar2 = (undefined4 *)((int)this + 0x920);
  iVar3 = 2;
  puVar1 = (undefined4 *)((int)this + 0xa88);
  do {
    puVar2 = puVar2 + -0xc0;
    iVar3 = iVar3 + -1;
    *puVar2 = (*(undefined * PTR32 (*)[1])REFP(0x10e6df4));
    puVar1[-0x69] = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
    puVar1[-0xba] =
         (*(undefined * PTR32 (*)[1])REFP(0x10e6db4));
    puVar1[-0xe6] =
         (*(undefined * PTR32 (*)[1])REFP(0x10e6dbc));
    puVar1[-0xbd] = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
    puVar1[-0xc0] = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
    puVar1[-0xf9] = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
    puVar1[-0x102] = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
    puVar1[-0x116] = (*(undefined * PTR32 (*)[1])REFP(0x10e6dac));
    puVar1 = puVar1 + -0xc0;
  } while (-1 < iVar3);
  return 0;
}

/* ref: FUN_00a65790 */
uint F_00a65790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa65790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x920) = 0;
  *(undefined4 *)((int)this + 0x924) = 0xffffffff;
  *(undefined1 *)((int)this + 0x928) = 0;
  F_0053b290(this);
  *(uint *)((int)this + 0x10) = param_1;
  F_00535c40(this);
  return param_1;
}

/* ref: Client::Game::Control::CharacterLookAtController::vf0 */
uint F_00a657d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa657d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00a65720(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a65930 */
uint F_00a65930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa65930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined1 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined1 *)((int)this + 0x1c) = 0;
  F_00af9b10(this);
  *(undefined1 *)((int)this + 9) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  uVar1 = F_00aea850(this);
  return uVar1;
}

/* ref: Client::Game::Control::MoveControl::MoveControllerSubMemberForPacketMove::vf1 */
uint F_00a65980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa65980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)(this + 4) = param_1;
  this[8] = (undefined1)0x0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  this[0x1c] = (undefined1)0x0;
  F_00af9b10(this);
  this[9] = (undefined1)0x0;
  *(undefined4 *)(this + 0x10) = 0;
  uVar1 = F_00aea850(this);
  return uVar1;
}

/* ref: FUN_00a65a30 */
uint F_00a65a30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa65a30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  uint uVar2;
  
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x30) = REFG(float, 0x1375ac0);
  *(undefined4 *)((int)this + 0x34) = REFG(float, 0x1375ac4);
  *(undefined4 *)((int)this + 0x38) = REFG(float, 0x1375ac8);
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = REFG(float, 0x1375ac0);
  *(undefined4 *)((int)this + 100) = REFG(float, 0x1375ac4);
  *(undefined4 *)((int)this + 0x68) = REFG(float, 0x1375ac8);
  *(undefined1 *)((int)this + 0x70) = 0;
  uVar1 = REFG(float, 0x10e6528);
  if ((char)param_1 != '\0') {
    *(undefined4 *)((int)this + 0x90) = REFG(float, 0x10e6528);
    *(undefined2 *)((int)this + 0x94) = 0;
    *(undefined4 *)((int)this + 0x98) = 0;
    *(undefined4 *)((int)this + 0x9c) = 0;
    *(undefined4 *)((int)this + 0xa0) = 0;
    *(undefined2 *)((int)this + 0xa4) = 0;
    *(undefined1 *)((int)this + 0xa6) = 0;
    *(undefined4 *)((int)this + 0xb0) = 0;
    *(undefined4 *)((int)this + 0xb4) = 0;
    *(undefined4 *)((int)this + 0xb8) = 0;
    *(undefined4 *)((int)this + 0xc0) = 0;
    *(undefined4 *)((int)this + 0xc4) = 0;
    *(undefined4 *)((int)this + 200) = uVar1;
    *(undefined1 *)((int)this + 0xcc) = 0;
    *(undefined4 *)((int)this + 0xe0) = uVar1;
    *(undefined2 *)((int)this + 0xe4) = 0;
    *(undefined4 *)((int)this + 0xe8) = 0;
    *(undefined4 *)((int)this + 0xec) = 0;
    *(undefined4 *)((int)this + 0xf0) = 0;
    *(undefined2 *)((int)this + 0xf4) = 0;
    *(undefined1 *)((int)this + 0xf6) = 0;
    *(undefined4 *)((int)this + 0x100) = 0;
    *(undefined4 *)((int)this + 0x104) = 0;
    *(undefined4 *)((int)this + 0x108) = 0;
    *(undefined4 *)((int)this + 0x110) = 0;
    *(undefined4 *)((int)this + 0x114) = 0;
    *(undefined4 *)((int)this + 0x118) = uVar1;
    *(undefined1 *)((int)this + 0x11c) = 0;
    *(undefined4 *)((int)this + 0xe0) = uVar1;
    *(undefined2 *)((int)this + 0xe4) = 0;
    *(undefined4 *)((int)this + 0xe8) = 0;
    *(undefined4 *)((int)this + 0xec) = 0;
    *(undefined4 *)((int)this + 0xf0) = 0;
    *(undefined2 *)((int)this + 0xf4) = 0;
    *(undefined1 *)((int)this + 0xf6) = 0;
    *(undefined4 *)((int)this + 0x100) = 0;
    *(undefined4 *)((int)this + 0x104) = 0;
    *(undefined4 *)((int)this + 0x108) = 0;
    *(undefined4 *)((int)this + 0x110) = 0;
    *(undefined4 *)((int)this + 0x114) = 0;
    *(undefined4 *)((int)this + 0x118) = uVar1;
    *(undefined1 *)((int)this + 0x11c) = 0;
    uVar2 = F_00aeaa80(this);
    return uVar2;
  }
  F_00a64fd0((undefined *)((int)this + 0x80),(int)this + 0xd0);
  uVar1 = REFG(float, 0x10e6528);
  *(undefined4 *)((int)this + 0xe0) = REFG(float, 0x10e6528);
  *(undefined2 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined2 *)((int)this + 0xf4) = 0;
  *(undefined1 *)((int)this + 0xf6) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x118) = uVar1;
  *(undefined1 *)((int)this + 0x11c) = 0;
  uVar2 = F_00aeaa80(this);
  return uVar2;
}

/* ref: FUN_00a65c80 */
uint F_00a65c80(unsigned int gen_a0)
{
  GEN_ENTER(0xa65c80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = REFG(undefined4, 0x1334d70);
  uVar1 = REFG(float, 0x1087f04);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e6d94));
  *(undefined4 *)((int)this + 0x124) = uVar2;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x100) = (*(undefined * PTR32 (*)[1])REFP(0x109c94c));
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x128) = 0xffffffff;
  *(undefined4 *)((int)this + 300) = uVar1;
  *(undefined4 *)((int)this + 0x130) = REFG(float, 0x1375ac0);
  *(undefined4 *)((int)this + 0x134) = REFG(float, 0x1375ac4);
  *(undefined4 *)((int)this + 0x138) = REFG(float, 0x1375ac8);
  *(undefined4 *)((int)this + 0x140) = 0;
  F_00a65220(this);
  return (uint)this;
}

/* ref: FUN_00a65d20 */
unsigned int F_00a65d20(unsigned int gen_a0)
{
  GEN_ENTER(0xa65d20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e6da4));
  uVar1 = REFG(undefined4, 0x1334d70);
  *(undefined4 *)((int)this + 0x9c) = REFG(float, 0x1087f04);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x70) = (*(undefined * PTR32 (*)[1])REFP(0x109c94c));
  *(undefined4 *)((int)this + 0x94) = uVar1;
  *(undefined4 *)((int)this + 0x98) = 0xffffffff;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa0) = REFG(float, 0x1375ac0);
  *(undefined4 *)((int)this + 0xa4) = REFG(float, 0x1375ac4);
  *(undefined4 *)((int)this + 0xa8) = REFG(float, 0x1375ac8);
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc0) = (*(undefined * PTR32 (*)[1])REFP(0x109c984));
  *(undefined2 *)((int)this + 0xc4) = 0;
  *(undefined1 *)((int)this + 0xc6) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined1 *)((int)this + 0x60) = 0;
  *(undefined1 *)((int)this + 200) = 0;
  return 0;
}

/* ref: FUN_00a65e50 */
uint F_00a65e50(unsigned int gen_a0)
{
  GEN_ENTER(0xa65e50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e6df4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[1])REFP(0x10e6dac));
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x28) = 0xe0000000;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x38) = 0xffffffff;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x60) = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xd0) =
       (*(undefined * PTR32 (*)[1])REFP(0x10e6dbc));
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x15c) = 0;
  *(undefined4 *)((int)this + 0x160) = 0;
  *(undefined4 *)((int)this + 0x164) = 0;
  *(undefined4 *)((int)this + 0x168) = 0;
  *(undefined4 *)((int)this + 0x16c) = 0;
  *(undefined4 *)((int)this + 0x170) = 0;
  *(undefined4 *)((int)this + 0x174) = 0;
  *(undefined4 *)((int)this + 0x178) = 0;
  *(undefined4 *)((int)this + 0x17c) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x180) =
       (*(undefined * PTR32 (*)[1])REFP(0x10e6db4));
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x1c8) = 0;
  *(undefined4 *)((int)this + 0x20c) = 0;
  *(undefined4 *)((int)this + 0x210) = 0;
  *(undefined4 *)((int)this + 0x214) = 0;
  *(undefined4 *)((int)this + 0x218) = 0;
  *(undefined4 *)((int)this + 0x21c) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2c4) = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
  *(undefined4 *)((int)this + 0x2c8) = 0;
  *(undefined4 *)((int)this + 0x2cc) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0xffffffff;
  F_0054eb10(this);
  return (uint)this;
}

/* ref: FUN_00a65f70 */
uint F_00a65f70(unsigned int gen_a0)
{
  GEN_ENTER(0xa65f70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e6dfc));
  this_00 = (undefined *)((int)this + 0x20);
  iVar1 = 2;
  do {
    F_00a65e50(this_00);
    this_00 = (undefined *)((int)this_00 + 0x300);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x920) = 0;
  *(undefined4 *)((int)this + 0x924) = 0xffffffff;
  *(undefined1 *)((int)this + 0x928) = 0;
  F_0053b290(this);
  *(undefined4 *)((int)this + 0x10) = 0;
  F_00535c40(this);
  return (uint)this;
}

/* ref: FUN_00a66040 */
uint F_00a66040(unsigned int gen_a0)
{
  GEN_ENTER(0xa66040u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_00429760(*(undefined4 *)this,8,400);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00a66120 */
uint F_00a66120(unsigned int gen_a0)
{
  GEN_ENTER(0xa66120u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10e6dd0));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined1 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined1 *)((int)this + 0x1c) = 0;
  F_00af9b10(this);
  *(undefined1 *)((int)this + 9) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  F_00aea850(this);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x10e6e04));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined1 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined1 *)((int)this + 0x1c) = 0;
  F_00af9b10(this);
  *(undefined1 *)((int)this + 9) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  F_00aea850(this);
  return (uint)this;
}

/* ref: Client::Game::Control::MoveControl::MoveControllerSubMemberForPacketMove::vf0 */
uint F_00a661a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa661a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e6dd0));
  (*((code *)GEN_TOP((*(undefined * PTR32 (*)[2])REFP(0x10e6dd4))[0])))(0);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a661d0 */
uint F_00a661d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa661d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x10) = param_1;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  uVar1 = F_00a65a30(this,1);
  return uVar1;
}

/* ref: FUN_00a66240 */
uint F_00a66240(unsigned int gen_a0)
{
  GEN_ENTER(0xa66240u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  uVar1 = REFG(float, 0x10e6528);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e6d74));
  *(undefined4 *)((int)this + 0x90) = uVar1;
  *(undefined2 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined2 *)((int)this + 0xa4) = 0;
  *(undefined1 *)((int)this + 0xa6) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x80) = (*(undefined * PTR32 (*)[1])REFP(0x10e6d6c));
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = uVar1;
  *(undefined1 *)((int)this + 0xcc) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xd0) = (*(undefined * PTR32 (*)[1])REFP(0x10e6d6c));
  *(undefined4 *)((int)this + 0xe0) = uVar1;
  *(undefined2 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined2 *)((int)this + 0xf4) = 0;
  *(undefined1 *)((int)this + 0xf6) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x118) = uVar1;
  *(undefined1 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  F_00a65a30(this,1);
  return (uint)this;
}

/* ref: FUN_00a66350 */
uint F_00a66350(unsigned int gen_a0)
{
  GEN_ENTER(0xa66350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  uVar1 = REFG(float, 0x10e6528);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e6de0));
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x40) = uVar1;
  *(undefined4 *)((int)this + 0x44) = uVar1;
  *(undefined4 *)((int)this + 0x4c) = uVar1;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined1 *)((int)this + 100) = 0;
  *(undefined2 *)((int)this + 0x68) = 0;
  *(undefined1 *)((int)this + 0x6a) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined2 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x48) = uVar1;
  *(undefined4 *)((int)this + 0x50) = uVar1;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined2 *)((int)this + 0x5c) = 0;
  *(undefined2 *)((int)this + 0x65) = 0;
  *(undefined1 *)((int)this + 0x67) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x10e6db4));
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x124) =
       (*(undefined * PTR32 (*)[1])REFP(0x10e6db4));
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 0x16c) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(undefined4 *)((int)this + 0x1bc) = 0;
  *(undefined4 *)((int)this + 0x1c0) = 0;
  F_00a66120((undefined *)((int)this + 0x1c4));
  F_00a66240((undefined *)((int)this + 0x1f0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x310) =
       (*(undefined * PTR32 (*)[1])REFP(0x10e6d7c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x370) =
       (*(undefined * PTR32 (*)[1])REFP(0x10e6d64));
  *(undefined4 *)((int)this + 0x374) = 0;
  *(undefined4 *)((int)this + 0x378) = 0;
  *(undefined4 *)((int)this + 0x380) = 0;
  *(undefined4 *)((int)this + 900) = 0;
  *(undefined4 *)((int)this + 0x388) = 0;
  *(undefined4 *)((int)this + 0x38c) = 0;
  *(undefined4 *)((int)this + 0x390) = 0;
  *(undefined4 *)((int)this + 0x394) = 0;
  *(undefined4 *)((int)this + 0x398) = 0;
  *(undefined4 *)((int)this + 0x39c) = 0;
  *(undefined4 *)((int)this + 0x3a0) = 0;
  *(undefined4 *)((int)this + 0x3a4) = 0;
  *(undefined4 *)((int)this + 0x3a8) = 0;
  *(undefined4 *)((int)this + 0x3ac) = 0;
  *(undefined4 *)((int)this + 0x3b0) = 0;
  *(undefined4 *)((int)this + 0x3b4) = 0;
  *(undefined4 *)((int)this + 0x3b8) = 0;
  *(undefined4 *)((int)this + 0x3d0) = 0;
  *(undefined4 *)((int)this + 0x3d4) = 0;
  *(undefined4 *)((int)this + 0x3d8) = 0;
  *(undefined2 *)((int)this + 0x3e0) = 0;
  *(undefined1 *)((int)this + 0x3e2) = 0;
  *(undefined4 *)((int)this + 0x3f0) = 0;
  *(undefined4 *)((int)this + 0x3f4) = 0;
  *(undefined4 *)((int)this + 0x3f8) = 0;
  *(undefined2 *)((int)this + 0x400) = 0;
  *(undefined1 *)((int)this + 0x402) = 0;
  *(undefined4 *)((int)this + 0x404) = 0;
  *(undefined4 *)((int)this + 0x408) = 0;
  F_00c9da70((int)this + 0x454);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x454) =
       (*(undefined * PTR32 (*)[3])REFP(0x10e6d84));
  *(undefined4 *)((int)this + 0x460) = 0;
  F_00a65110(this);
  return (uint)this;
}

/* ref: FUN_00a66570 */
uint F_00a66570(unsigned int gen_a0)
{
  GEN_ENTER(0xa66570u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_006ae690((undefined *)((int)this + 0x10));
  F_00690370((int)this + 0x760);
  return (uint)this;
}

/* ref: FUN_00a665b0 */
uint F_00a665b0(unsigned int gen_a0)
{
  GEN_ENTER(0xa665b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int in_ecx;
  int local_8;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 0x180) = (*(undefined * PTR32 (*)[2])REFP(0x10e6dc4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[57])REFP(0x10e6e24));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x180) = (*(undefined * PTR32 (*)[2])REFP(0x10e6e14));
  F_00a66350((undefined *)((int)this + 0x1b0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x620) = (*(undefined * PTR32 (*)[1])REFP(0x10e6d9c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x638) =
       (*(undefined * PTR32 (*)[1])REFP(0x1090544));
  *(undefined4 *)((int)this + 0x644) = 0;
  *(undefined2 *)((int)this + 0x648) = 0;
  *(undefined4 *)((int)this + 0x64c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x650) = 1;
  *(undefined4 *)((int)this + 0x640) = 0xe0000000;
  *(undefined4 *)((int)this + 0x628) = 0;
  *(undefined4 *)((int)this + 0x62c) = 0;
  *(undefined4 *)((int)this + 0x630) = 0;
  *(undefined4 *)((int)this + 0x658) = 0;
  *(undefined1 *)((int)this + 0x65c) = 0;
  *(undefined4 *)((int)this + 0x660) = 0;
  *(undefined4 *)((int)this + 0x668) = 0xe0000000;
  *(undefined4 *)((int)this + 0x66c) = 0;
  *(undefined4 *)((int)this + 0x670) = 0;
  *(undefined4 *)((int)this + 0x674) = 0;
  F_00a65c80((undefined *)((int)this + 0x680));
  F_00a65d20((undefined *)((int)this + 0x940));
  F_00a65f70((undefined *)((int)this + 0xa10));
  F_0042b630((int)this + 0x1584);
  F_00bc5b60((undefined *)((int)this + 0x15dc));
  local_8 = 2;
  in_ecx = (int)this + 0x1e10;
  do {
    F_006ae690((undefined *)(in_ecx + -0x750));
    F_00690370(in_ecx);
    in_ecx = in_ecx + 0x7a0;
    local_8 = local_8 + -1;
  } while (-1 < local_8);
  *(undefined4 *)((int)this + 0x2df4) = 0;
  *(undefined4 *)((int)this + 0x2df8) = 0;
  return (uint)this;
}

/* ref: FUN_00a666e0 */
uint F_00a666e0(unsigned int gen_a0)
{
  GEN_ENTER(0xa666e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x184);
}

/* ref: FUN_00a666f0 */
byte F_00a666f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa666f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x2f03);
}

/* ref: Client::Game::Character::Companion::vf53 */
uint F_00a66700(void)
{
  GEN_ENTER(0xa66700u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Character::Companion::vf54 */
uint F_00a66710(void)
{
  GEN_ENTER(0xa66710u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Character::Companion::vf55 */
uint F_00a66720(void)
{
  GEN_ENTER(0xa66720u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Character::Companion::vf56 */
uint F_00a66730(void)
{
  GEN_ENTER(0xa66730u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00a66740 */
byte F_00a66740(void)
{
  GEN_ENTER(0xa66740u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00a66750 */
uint F_00a66750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa66750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00aa98a0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a66780 */
uint F_00a66780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa66780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a66750((undefined *)((int)this + -0x180),param_1);
  return uVar1;
}

/* ref: FUN_00a66790 */
uint F_00a66790(unsigned int gen_a0)
{
  GEN_ENTER(0xa66790u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  iVar3 = *(int *)((int)this + 0x10);
  while (iVar3 != 0) {
    if (*(int *)((int)this + 0x10) != 0) {
      uVar2 = *(int *)((int)this + 0x10) + -1 + *(int *)((int)this + 0xc);
      if (*(uint *)((int)this + 8) <= uVar2) {
        uVar2 = uVar2 - *(uint *)((int)this + 8);
      }
      iVar3 = *((int *)GEN_TOP((*(int *)((int)this + 4) + uVar2 * 4)));
      F_00492c50((undefined *)(iVar3 + 4));
      F_00429760(*(undefined4 *)(iVar3 + 4),8,0x2c4);
      *(undefined4 *)(iVar3 + 4) = 0;
      piVar1 = (int *)((int)this + 0x10);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        *(undefined4 *)((int)this + 0xc) = 0;
      }
    }
    iVar3 = *(int *)((int)this + 0x10);
  }
  iVar3 = *(int *)((int)this + 8);
  while (iVar3 != 0) {
    iVar3 = iVar3 + -1;
    if (*((int *)GEN_TOP((*(int *)((int)this + 4) + iVar3 * 4))) != 0) {
      F_00429760(*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + iVar3 * 4))),0x28,400);
    }
  }
  uVar2 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar4 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,400);
    uVar2 = (uint)uVar4;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00a66840 */
uint F_00a66840(unsigned int gen_a0)
{
  GEN_ENTER(0xa66840u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00a66790(this);
  uVar1 = F_00429760(*(undefined4 *)this,8,400);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00a668c0 */
uint F_00a668c0(unsigned int gen_a0)
{
  GEN_ENTER(0xa668c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00a66790(this);
  uVar1 = F_00429760(*(undefined4 *)this,8,400);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00a668f0 */
uint F_00a668f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa668f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  F_00a665b0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[57])REFP(0x10e6f1c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x180) = (*(undefined * PTR32 (*)[2])REFP(0x10e6f0c));
  puVar1 = (undefined4 *)((int)this + 0x2f20);
  *puVar1 = 0;
  puVar2 = (undefined4 *)F_004296a0(8,0,400);
  *puVar1 = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *(undefined4 * PTR32 *)*puVar1 = puVar1;
  *(undefined4 *)((int)this + 0x2f24) = 0;
  *(undefined4 *)((int)this + 0x2f28) = 0;
  *(undefined4 *)((int)this + 0x2f2c) = 0;
  *(undefined4 *)((int)this + 0x2f30) = 0;
  *(undefined4 *)((int)this + 0x2f38) = 0;
  *(undefined4 *)((int)this + 0x2f3c) = 0;
  *(undefined4 *)((int)this + 0x2f40) = 0;
  *(undefined4 *)((int)this + 0x2f38) = *puVar1;
  return (uint)this;
}

/* ref: Client::Game::Character::BattleChara::vf56 */
uint F_00a66960(unsigned int gen_a0)
{
  GEN_ENTER(0xa66960u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x2f20;
}

/* ref: Client::Game::Character::BattleChara::vf53 */
uint F_00a66970(unsigned int gen_a0)
{
  GEN_ENTER(0xa66970u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x2f44;
}

/* ref: Client::Game::Character::BattleChara::vf54 */
uint F_00a66980(unsigned int gen_a0)
{
  GEN_ENTER(0xa66980u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x30c0;
}

/* ref: Client::Game::Character::BattleChara::vf55 */
uint F_00a66990(unsigned int gen_a0)
{
  GEN_ENTER(0xa66990u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x3210;
}

/* ref: FUN_00a669a0 */
uint F_00a669a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa669a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a66a00((undefined *)((int)this + -0x180),param_1);
  return uVar1;
}

/* ref: FUN_00a669b0 */
uint F_00a669b0(unsigned int gen_a0)
{
  GEN_ENTER(0xa669b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[57])REFP(0x10e6f1c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x180) = (*(undefined * PTR32 (*)[2])REFP(0x10e6f0c));
  F_00a66790((undefined *)((int)this + 0x2f20));
  F_00429760(*(undefined4 *)((int)this + 0x2f20),8,400);
  *(undefined4 *)((int)this + 0x2f20) = 0;
  uVar1 = F_00aa98a0(this);
  return uVar1;
}

/* ref: Client::Game::Character::BattleChara::vf45 */
uint F_00a66a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa66a00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[57])REFP(0x10e6f1c));
  *(undefined * PTR32 * PTR32 *)(this + 0x180) = (*(undefined * PTR32 (*)[2])REFP(0x10e6f0c));
  F_00a66790(this + 0x2f20);
  F_00429760(*(undefined4 *)(this + 0x2f20),8,400);
  *(undefined4 *)(this + 0x2f20) = 0;
  F_00aa98a0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a66a60 */
unsigned int F_00a66a60(float gen_a0)
{
  GEN_ENTER(0xa66a60u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00a66b10 */
uint F_00a66b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa66b10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  uint in_EAX = 0;
  
  this_00 = REFG(void * PTR32, 0x1379694);
  if (REFG(void * PTR32, 0x1379694) != (undefined *)0x0) {
    in_EAX = param_1;
    if (*(char *)this != (char)param_1) {
      *(char *)this = (char)param_1;
      in_EAX = F_00aa6f20(this_00,param_1,0);
      *(undefined4 *)((int)this + 4) = REFG(float, 0x1087f04);
    }
  }
  return in_EAX;
}

/* ref: FUN_00a66b50 */
unsigned int F_00a66b50(unsigned int gen_a0)
{
  GEN_ENTER(0xa66b50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_00a66b60 */
byte F_00a66b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa66b60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_006ce8a0(param_1,param_2);
  if (bVar1 == 0) {
    F_00a51200(0x46,param_1,param_2,0,0);
    bVar1 = F_006ce8e0(param_1,param_2);
  }
  return bVar1;
}

/* ref: FUN_00a66ba0 */
uint F_00a66ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa66ba0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (uint)*((byte *)GEN_TOP((*(int *)(in_ecx + 0x28) + 8 + param_2)));
}

/* ref: FUN_00a66bc0 */
byte F_00a66bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa66bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_006ce8a0(param_1,param_2);
  return bVar1 == 0;
}

/* ref: FUN_00a66c00 */
unsigned int F_00a66c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa66c00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x24) + 4))))(*(int * PTR32 *)((int)this + 0x24),param_1);
  return 0;
}

/* ref: FUN_00a66c10 */
unsigned int F_00a66c10(unsigned int gen_a0)
{
  GEN_ENTER(0xa66c10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  undefined4 * puVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    iVar1 = *(int *)((int)this + iVar4 * 4);
    if (iVar1 != 0) {
      piVar2 = *(int * PTR32 *)((int)this + iVar4 * 4 + 0xc);
      if (piVar2 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar2 + 0x4c))(piVar2,iVar1);
      }
      puVar3 = *(undefined4 * PTR32 *)((int)this + iVar4 * 4);
      if (puVar3 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
        *(undefined4 *)((int)this + iVar4 * 4) = 0;
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 3);
  return 0;
}

/* ref: FUN_00a66c50 */
uint F_00a66c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa66c50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  uVar3 = *(uint *)((int)this + param_1 * 4);
  if (uVar3 != 0) {
    piVar1 = *(int * PTR32 *)((int)this + param_1 * 4 + 0xc);
    if (piVar1 != (int *)0x0) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,uVar3);
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + param_1 * 4);
    if (puVar2 != (undefined4 *)0x0) {
      uVar3 = ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + param_1 * 4) = 0;
    }
  }
  *(undefined1 *)(param_1 + 0x48 + (int)this) = 0;
  return uVar3;
}

/* ref: FUN_00a66d10 */
uint F_00a66d10(unsigned int gen_a0)
{
  GEN_ENTER(0xa66d10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  undefined * pvVar2;
  
  pvVar1 = (undefined *)F_00533b90(&REFG(undefined4, 0x1375bc0));
  pvVar2 = pvVar1;
  if (pvVar1 != *(undefined * PTR32 *)((int)this + 0x904)) {
    *(undefined4 *)((int)this + 0x900) = 0;
    pvVar2 = F_00c48350(this,0,0x900);
    *(undefined4 *)((int)this + 0x904) = 0;
  }
  *(undefined * PTR32 *)((int)this + 0x904) = pvVar1;
  return (uint)pvVar2;
}

/* ref: FUN_00a66dc0 */
unsigned int F_00a66dc0(unsigned int gen_a0)
{
  GEN_ENTER(0xa66dc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  char * pcVar2;
  int iVar3;
  
  iVar3 = 0;
  pcVar2 = this;
  if (0 < *(int *)((int)this + 0x900)) {
    do {
      if (*pcVar2 == '\0') {
        uVar1 = F_00aadfc0(&REFG(undefined, 0x14b5ef0),*(undefined4 *)(pcVar2 + 0x40));
        F_00c49908(pcVar2,0x40,uVar1);
      }
      iVar3 = iVar3 + 1;
      pcVar2 = pcVar2 + 0x48;
    } while (iVar3 < *(int *)((int)this + 0x900));
  }
  return 0;
}

/* ref: FUN_00a66e00 */
byte F_00a66e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa66e00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)((int)this + 0x900)) {
    piVar2 = (int *)((int)this + 0x40);
    do {
      if (*piVar2 == param_1) {
        return 1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0x12;
    } while (iVar1 < *(int *)((int)this + 0x900));
  }
  return 0;
}

/* ref: FUN_00a66e30 */
uint F_00a66e30(unsigned int gen_a0)
{
  GEN_ENTER(0xa66e30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int local_8;
  
  *(undefined2 *)((int)this + 0x3158) = 0;
  this_00 = (undefined *)((int)this + 0x315c);
  local_8 = 0x18;
  do {
    F_0042e430(this_00,&REFG(undefined1, 0x107fc63));
    *(undefined4 *)((int)this_00 + 0x54) = 0;
    this_00 = (undefined *)((int)this_00 + 0x58);
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  *(undefined2 *)((int)this + 0x39f8) = 0;
  *(undefined4 *)((int)this + 0x39c0) = 0;
  *(undefined4 *)((int)this + 0x39c4) = 0;
  uVar1 = F_0042e430((undefined *)((int)this + 0x3a00),&REFG(undefined, 0x10e70a7));
  *(undefined4 *)((int)this + 0x3a54) = 0;
  *(undefined4 *)((int)this + 0x39b8) = 0;
  *(undefined4 *)((int)this + 0x39bc) = 0;
  *(undefined4 *)((int)this + 0x3a58) = 0;
  *(undefined4 *)((int)this + 0x3a5c) = 0;
  *(undefined4 *)((int)this + 0x3a60) = 0;
  *(undefined1 *)((int)this + 0x3a64) = 0;
  *(undefined1 *)((int)this + 0x3a66) = 0;
  *(undefined1 *)((int)this + 0x3a68) = 0;
  *(undefined4 *)((int)this + 0x39c8) = 0;
  *(undefined4 *)((int)this + 0x39cc) = 0;
  *(undefined4 *)((int)this + 0x39d0) = 0;
  *(undefined4 *)((int)this + 0x39d4) = 0;
  *(undefined4 *)((int)this + 0x39d8) = 0;
  *(undefined4 *)((int)this + 0x39dc) = 0;
  *(undefined4 *)((int)this + 0x39e0) = 0;
  *(undefined4 *)((int)this + 0x39e4) = 0;
  *(undefined4 *)((int)this + 0x3a6c) = 0;
  *(undefined4 *)((int)this + 0x3a70) = 0;
  *(undefined1 *)((int)this + 0x3a74) = 0;
  *(undefined4 *)((int)this + 0x3a78) = 0;
  *(undefined4 *)((int)this + 0x3a80) = 0;
  *(undefined4 *)((int)this + 0x39e8) = 0;
  *(undefined4 *)((int)this + 0x39ec) = 0;
  *(undefined4 *)((int)this + 0x39f0) = 0;
  *(undefined4 *)((int)this + 0x39f4) = 0;
  return uVar1;
}

/* ref: FUN_00a66f30 */
uint F_00a66f30(unsigned int gen_a0)
{
  GEN_ENTER(0xa66f30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  if (*(int *)((int)this + 0x39bc) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x39b8);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*(int *)((int)this + 0x39bc));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x39bc);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x39bc) = 0;
    }
  }
  *(undefined4 *)((int)this + 0x39b8) = 0;
  if (*(int *)((int)this + 0x39c4) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x39c0);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*(int *)((int)this + 0x39c4));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x39c4);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x39c4) = 0;
    }
  }
  *(undefined4 *)((int)this + 0x39c0) = 0;
  if (*(int *)((int)this + 0x39cc) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x39c8);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*(int *)((int)this + 0x39cc));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x39cc);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x39cc) = 0;
    }
  }
  *(undefined4 *)((int)this + 0x39c8) = 0;
  if (*(int *)((int)this + 0x39d4) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x39d0);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*(int *)((int)this + 0x39d4));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x39d4);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x39d4) = 0;
    }
  }
  *(undefined4 *)((int)this + 0x39d0) = 0;
  if (*(int *)((int)this + 0x39dc) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x39d8);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*(int *)((int)this + 0x39dc));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x39dc);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x39dc) = 0;
    }
  }
  *(undefined4 *)((int)this + 0x39d8) = 0;
  if (*(int *)((int)this + 0x39e4) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x39e0);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*(int *)((int)this + 0x39e4));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x39e4);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x39e4) = 0;
    }
  }
  *(undefined4 *)((int)this + 0x39e0) = 0;
  if (*(int *)((int)this + 0x39ec) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x39e8);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*(int *)((int)this + 0x39ec));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x39ec);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x39ec) = 0;
    }
  }
  uVar3 = *(uint *)((int)this + 0x39f4);
  *(undefined4 *)((int)this + 0x39e8) = 0;
  if (uVar3 != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x39f0);
    if (piVar1 != (int *)0x0) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,uVar3);
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x39f4);
    if (puVar2 != (undefined4 *)0x0) {
      uVar3 = ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x39f4) = 0;
    }
  }
  *(undefined4 *)((int)this + 0x39f0) = 0;
  *(undefined4 *)((int)this + 0x3aa0) = 0;
  *(undefined4 *)((int)this + 0x3a9c) = 0;
  *(undefined1 *)((int)this + 0x3a65) = 0;
  *(undefined1 *)((int)this + 0x3a67) = 0;
  return uVar3;
}

/* ref: FUN_00a67140 */
uint F_00a67140(unsigned int gen_a0)
{
  GEN_ENTER(0xa67140u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xd0];
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined * pvVar5;
  bool bVar6;
  
  uVar1 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 17));
  uVar3 = REFG(undefined4, 0x1379694);
  (*(uint *)(gen_frame + 0xc8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xcc);
  bVar6 = *(int *)((int)this + 0x3a54) == 0;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 12)) = REFG(undefined4, 0x1379694);
  ((byte *)(gen_frame + 0x8))[0x15] = 0;
  if (bVar6) {
    *(undefined4 *)((int)this + 0x3a54) = *(undefined4 *)((int)this + 0xc90);
    ((byte *)(gen_frame + 0x8))[0x15] = 1;
  }
  ((byte *)(gen_frame + 0x8))[0x11] = 0;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 17)) = uVar1 & 0xffffff00;
  ((byte *)(gen_frame + 0x8))[0x15] = bVar6;
  if (*(int *)((int)this + 0xc30) != 0) {
    uVar3 = 0;
    do {
      iVar4 = uVar3 * 0x18c;
      if ((*(int *)((int)this + 0x3a54) == *(int *)(iVar4 + 0xc90 + (int)this)) &&
         (((byte *)(gen_frame + 0x8))[0x15] == 0)) {
        uVar3 = *(ushort *)((int)this + 0x39f8) | 0x10000;
        ((byte *)(gen_frame + 0x8))[0x16] = 0;
        ((byte *)(gen_frame + 0x8))[0x17] = 0;
        pvVar5 = (undefined *)F_006b8c00();
        pvVar5 = (undefined *)F_006e3240(pvVar5,uVar3);
        uVar3 = F_00a4ffd0();
        if ((pvVar5 != (undefined *)0x0) &&
           ((bVar2 = F_006bfeb0(uVar3,(uint)*(ushort *)((int)this + 0x39f8)), bVar2 == 0 &&
            ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 12)) != 0)))) {
          F_006d0d30(pvVar5,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 12)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 17)),((byte *)(gen_frame + 0x8)) + 0x17,((byte *)(gen_frame + 0x8)) + 0x16);
        }
        *(uint *)((int)this + iVar4 + 0xcec) = (uint)((byte *)(gen_frame + 0x8))[0x16];
        *(uint *)((int)this + iVar4 + 0xce8) = (uint)((byte *)(gen_frame + 0x8))[0x17];
        F_0042cc20(((undefined1 *)(gen_frame + 0x74)),&REFG(undefined, 0x10e70fd),REFG(undefined4, 0x108cc50));
        if ((((byte *)(gen_frame + 0x8))[0x16] != 0) && (*(char *)((int)this + iVar4 + 0xc38) == '\0')) {
          bVar2 = ((byte *)(gen_frame + 0x8))[0x17];
          if (((byte *)(gen_frame + 0x8))[0x16] < ((byte *)(gen_frame + 0x8))[0x17]) {
            bVar2 = ((byte *)(gen_frame + 0x8))[0x16];
          }
          uVar3 = F_0042ce40(((undefined1 *)(gen_frame + 0x20))," %u/%u",(uint)bVar2,(uint)((byte *)(gen_frame + 0x8))[0x16]);
          F_0042ccf0(((undefined1 *)(gen_frame + 0x74)),uVar3);
          F_0042c880(((undefined1 *)(gen_frame + 0x20)));
        }
        F_0042ccf0((undefined *)((int)this + iVar4 + 0xc94),((undefined1 *)(gen_frame + 0x74)));
        F_0042c880(((undefined1 *)(gen_frame + 0x74)));
      }
      bVar2 = ((byte *)(gen_frame + 0x8))[0x11] + 1;
      ((byte *)(gen_frame + 0x8))[0x11] = bVar2;
      uVar3 = (uint)bVar2;
    } while (uVar3 < *(uint *)((int)this + 0xc30));
  }
  ((byte *)(gen_frame + 0x8))[8] = 0xf5;
  ((byte *)(gen_frame + 0x8))[9] = 0x72;
  ((byte *)(gen_frame + 0x8))[10] = 0xa6;
  ((byte *)(gen_frame + 0x8))[0xb] = 0;
  F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc));
  return uVar3;
}

/* ref: FUN_00a67300 */
byte F_00a67300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa67300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  char cVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  undefined4 * puVar6;
  uint * puVar7;
  byte * pbVar8;
  int * piVar9;
  uint uVar10;
  byte bVar11;
  
  bVar3 = REFG(undefined1, 0x14ab29a);
  bVar4 = REFG(undefined1, 0x14ab0d1);
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  uVar10 = (uint)REFG(undefined1, 0x14ab0d2);
  *(undefined4 *)((int)this + 0x3a94) = 0;
  bVar11 = *(char *)(param_1 + 0xb30) != '\0';
  if ((bool)bVar11) {
    *(undefined4 *)((int)this + 0x450) = 1;
    *(undefined4 *)((int)this + 0x4b4) = 2;
    uVar5 = F_006c0360(param_1);
    *(uint *)((int)this + 0x4ac) = uVar5;
    F_0042b630(((undefined1 *)(gen_frame + 0x14)));
    F_00ab0230(0x18f58,((undefined1 *)(gen_frame + 0x14)));
    F_0042ccf0((undefined *)((int)this + 0x454),((undefined1 *)(gen_frame + 0x14)));
    *(undefined4 *)((int)this + 0x4a8) = 0xf01f;
    F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  }
  if ((*(int *)(param_1 + 0xaf4) != 0) && (bVar11 < 5)) {
    puVar6 = (undefined4 *)((uint)bVar11 * 0x6c + 0x450 + (int)this);
    *puVar6 = 2;
    puVar6[0x19] = 2;
    puVar6[0x17] = *(undefined4 *)(param_1 + 0xaf4);
    bVar11 = bVar11 + 1;
    puVar6[0x18] = 1;
    *(int *)((int)this + 0x3a94) = *(int *)((int)this + 0x3a94) + 1;
  }
  if (*(short *)(param_1 + 0xb28) != 0) {
    cVar1 = *(char *)(param_1 + 0xb31);
    if ((((cVar1 == '\x14') || (cVar1 == '\x15')) || (cVar1 == '\x16')) && (bVar11 < 5)) {
      puVar6 = (undefined4 *)((uint)bVar11 * 0x6c + 0x450 + (int)this);
      *puVar6 = 3;
      puVar6[0x19] = 2;
      puVar6[0x17] = (uint)*(ushort *)(param_1 + 0xb28);
      uVar5 = (uint)*(byte *)(param_1 + 0xb31);
    }
    else {
      if (((cVar1 != '\0') || (4 < bVar11)) || (REFG(undefined1, 0x14ab29a) == 0)) goto LAB_00a67482;
      puVar6 = (undefined4 *)((uint)bVar11 * 0x6c + 0x450 + (int)this);
      puVar6[0x19] = 2;
      *puVar6 = 3;
      puVar6[0x17] = (uint)*(ushort *)(param_1 + 0xb28);
      uVar5 = REFG(undefined1, 0x14ab29a) + 0x13;
    }
    bVar11 = bVar11 + 1;
    puVar6[0x18] = uVar5;
    *(int *)((int)this + 0x3a94) = *(int *)((int)this + 0x3a94) + 1;
  }
LAB_00a67482: ;
  pbVar8 = (byte *)(param_1 + 0xb32);
  (*(int *)(gen_frame + 0xc)) = 3;
  do {
    if (((1 < *pbVar8) && (*pbVar8 < 0x14)) && (bVar11 < 5)) {
      puVar6 = (undefined4 *)((uint)bVar11 * 0x6c + 0x450 + (int)this);
      *puVar6 = 4;
      puVar6[0x19] = 0x81;
      puVar6[0x17] = (uint)pbVar8[3];
      puVar6[0x18] = (uint)*pbVar8;
      bVar11 = bVar11 + 1;
      *(int *)((int)this + 0x3a94) = *(int *)((int)this + 0x3a94) + 1;
    }
    pbVar8 = pbVar8 + 1;
    (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + -1;
  } while ((*(int *)(gen_frame + 0xc)) != 0);
  switch((unsigned int)(uintptr_t)(*(undefined1 *)(param_1 + 0xb38))) {
  case 1: ;
    pbVar8 = (byte *)(param_1 + 0xb39);
    piVar9 = (int *)(param_1 + 0xaf8);
    (*(int *)(gen_frame + 0x10)) = 6;
    do {
      if (((*pbVar8 != 0) && (*piVar9 != 0)) && (bVar11 < 5)) {
        puVar6 = (undefined4 *)((uint)bVar11 * 0x6c + 0x450 + (int)this);
        *puVar6 = 6;
        puVar6[0x19] = 0x81;
        puVar6[0x17] = (uint)*pbVar8;
        puVar6[0x18] = *piVar9;
        bVar11 = bVar11 + 1;
        *(int *)((int)this + 0x3a94) = *(int *)((int)this + 0x3a94) + 1;
      }
      pbVar8 = pbVar8 + 1;
      piVar9 = piVar9 + 1;
      (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + -1;
    } while ((*(int *)(gen_frame + 0x10)) != 0);
    break;
  case 2: ;
    if ((5 < bVar3) || (3 < bVar3)) break;
    uVar10 = (uint)bVar3;
    iVar2 = *(int *)(param_1 + 0xaf8 + uVar10 * 4);
    goto joined_r0x00a675d7;
  case 3: ;
    if ((5 < bVar4) || (1 < bVar4)) break;
    uVar10 = (uint)bVar4;
    iVar2 = *(int *)(param_1 + 0xaf8 + uVar10 * 4);
joined_r0x00a675d7: ;
    if ((iVar2 != 0) && (bVar11 < 5)) {
      puVar6 = (undefined4 *)((uint)bVar11 * 0x6c + 0x450 + (int)this);
      *puVar6 = 6;
      puVar6[0x19] = 0x81;
      puVar6[0x17] = (uint)*(byte *)(uVar10 + 0xb39 + param_1);
      bVar11 = bVar11 + 1;
      puVar6[0x18] = *(undefined4 *)(param_1 + 0xaf8 + uVar10 * 4);
      *(int *)((int)this + 0x3a94) = *(int *)((int)this + 0x3a94) + 1;
    }
    break;
  case 4: ;
    if (((uVar10 < 6) && (*(int *)(param_1 + 0xaf8 + uVar10 * 4) != 0)) && (bVar11 < 5)) {
      puVar6 = (undefined4 *)((uint)bVar11 * 0x6c + 0x450 + (int)this);
      *puVar6 = 6;
      puVar6[0x19] = 0x81;
      puVar6[0x17] = (uint)*(byte *)(param_1 + 0xb39 + uVar10);
      bVar11 = bVar11 + 1;
      puVar6[0x18] = *(undefined4 *)(param_1 + 0xaf8 + uVar10 * 4);
      *(int *)((int)this + 0x3a94) = *(int *)((int)this + 0x3a94) + 1;
    }
  }
  if ((*(byte *)(param_1 + 0xb4f) != 0) && (bVar11 < 5)) {
    puVar6 = (undefined4 *)((uint)bVar11 * 0x6c + 0x450 + (int)this);
    bVar11 = bVar11 + 1;
    puVar7 = (uint *)F_00ab28a0((uint)*(byte *)(param_1 + 0xb4f));
    *puVar6 = 8;
    puVar6[0x19] = 1;
    puVar6[0x18] = (uint)*(byte *)(param_1 + 0xb4f);
    F_0042e430(puVar6 + 1,(*puVar7 & 0xffffff) + (int)puVar7);
    puVar6[0x16] = (uint)(ushort)puVar7[8];
  }
  if ((*(ushort *)(param_1 + 0xb2a) != 0) && (bVar11 < 5)) {
    puVar6 = (undefined4 *)((uint)bVar11 * 0x6c + 0x450 + (int)this);
    bVar11 = bVar11 + 1;
    puVar7 = (uint *)F_00ab1ed0((uint)*(ushort *)(param_1 + 0xb2a));
    *puVar6 = 9;
    puVar6[0x19] = 0x101;
    puVar6[0x18] = (uint)*(ushort *)(param_1 + 0xb2a);
    F_0042e430(puVar6 + 1,(*puVar7 & 0xffffff) + (int)puVar7);
    puVar6[0x16] = (uint)(ushort)puVar7[2];
  }
  if ((*(byte *)(param_1 + 0xb50) != 0) && (bVar11 < 5)) {
    puVar6 = (undefined4 *)((uint)bVar11 * 0x6c + 0x450 + (int)this);
    bVar11 = bVar11 + 1;
    puVar7 = (uint *)F_00ab1f30((uint)*(byte *)(param_1 + 0xb50));
    *puVar6 = 10;
    puVar6[0x19] = 0x301;
    puVar6[0x18] = (uint)*(byte *)(param_1 + 0xb50);
    F_0042e430(puVar6 + 1,(*puVar7 & 0xffffff) + (int)puVar7);
    puVar6[0x16] = puVar7[2];
  }
  *(byte *)((int)this + 0x44c) = bVar11;
  bVar4 = 0;
  if ((*(int *)(param_1 + 0xb10) != 0) && (*(char *)(param_1 + 0xb45) != '\0')) {
    *(undefined4 *)((int)this + 0x66c) = 6;
    *(undefined4 *)((int)this + 0x6d0) = 0x81;
    *(uint *)((int)this + 0x6c8) = (uint)*(byte *)(param_1 + 0xb45);
    bVar4 = 1;
    *(undefined4 *)((int)this + 0x6cc) = *(undefined4 *)(param_1 + 0xb10);
  }
  if ((*(int *)(param_1 + 0xb14) != 0) && (*(char *)(param_1 + 0xb46) != '\0')) {
    puVar6 = (undefined4 *)((uint)bVar4 * 0x6c + 0x66c + (int)this);
    *puVar6 = 6;
    puVar6[0x19] = 0x81;
    puVar6[0x17] = (uint)*(byte *)(param_1 + 0xb46);
    bVar4 = bVar4 + 1;
    puVar6[0x18] = *(undefined4 *)(param_1 + 0xb14);
  }
  if ((*(int *)(param_1 + 0xb18) != 0) && (*(char *)(param_1 + 0xb47) != '\0')) {
    puVar6 = (undefined4 *)((uint)bVar4 * 0x6c + 0x66c + (int)this);
    *puVar6 = 6;
    puVar6[0x19] = 0x81;
    puVar6[0x17] = (uint)*(byte *)(param_1 + 0xb47);
    bVar4 = bVar4 + 1;
    puVar6[0x18] = *(undefined4 *)(param_1 + 0xb18);
  }
  if ((*(int *)(param_1 + 0xb1c) != 0) && (*(char *)(param_1 + 0xb48) != '\0')) {
    puVar6 = (undefined4 *)((uint)bVar4 * 0x6c + 0x66c + (int)this);
    *puVar6 = 6;
    puVar6[0x19] = 0x81;
    puVar6[0x17] = (uint)*(byte *)(param_1 + 0xb48);
    bVar4 = bVar4 + 1;
    puVar6[0x18] = *(undefined4 *)(param_1 + 0xb1c);
  }
  if ((*(int *)(param_1 + 0xb20) != 0) && (*(char *)(param_1 + 0xb49) != '\0')) {
    puVar6 = (undefined4 *)((uint)bVar4 * 0x6c + 0x66c + (int)this);
    *puVar6 = 6;
    puVar6[0x19] = 0x81;
    puVar6[0x17] = (uint)*(byte *)(param_1 + 0xb49);
    bVar4 = bVar4 + 1;
    puVar6[0x18] = *(undefined4 *)(param_1 + 0xb20);
  }
  *(byte *)((int)this + 0x44d) = bVar4;
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return bVar4;
}

/* ref: FUN_00a678f0 */
uint F_00a678f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa678f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0x3a69) = 0;
  return in_ecx + 0x168;
}

/* ref: FUN_00a67900 */
uint F_00a67900(unsigned int gen_a0)
{
  GEN_ENTER(0xa67900u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x78;
}

/* ref: FUN_00a67910 */
uint F_00a67910(unsigned int gen_a0)
{
  GEN_ENTER(0xa67910u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0x3a69) = 1;
  return in_ecx + 0xf8;
}

/* ref: FUN_00a67920 */
uint F_00a67920(unsigned int gen_a0)
{
  GEN_ENTER(0xa67920u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x120;
}

/* ref: FUN_00a67930 */
uint F_00a67930(unsigned int gen_a0)
{
  GEN_ENTER(0xa67930u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x17c;
}

/* ref: FUN_00a67940 */
uint F_00a67940(unsigned int gen_a0)
{
  GEN_ENTER(0xa67940u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xc30;
}

/* ref: FUN_00a67950 */
uint F_00a67950(unsigned int gen_a0)
{
  GEN_ENTER(0xa67950u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x3158;
}

/* ref: FUN_00a67960 */
uint F_00a67960(unsigned int gen_a0)
{
  GEN_ENTER(0xa67960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  bool bVar1;
  uint uVar2;
  int iVar3;
  ushort * puVar4;
  ushort uVar5;
  
  uVar2 = F_00a4ffd0();
  uVar5 = 0;
  if (*(int *)((int)this + 0x39fc) == 1) {
    if (*(short *)((int)this + 0x39f8) == 0) {
      *(undefined2 *)((int)this + 0x39f8) = *(undefined2 *)(uVar2 + 0x188a);
    }
    puVar4 = (ushort *)(uVar2 + 0x13b8);
    bVar1 = false;
    *(undefined4 *)((int)this + 0x78) = 0;
    iVar3 = 0x1e;
    do {
      if (*puVar4 != 0) {
        if (*puVar4 == *(ushort *)((int)this + 0x39f8)) {
          bVar1 = true;
        }
        *(int *)((int)this + 0x78) = *(int *)((int)this + 0x78) + 1;
        uVar5 = *puVar4;
      }
      puVar4 = puVar4 + 8;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (bVar1) {
      return (uint)*(ushort *)((int)this + 0x39f8);
    }
    if (*(int *)((int)this + 0x78) != 0) {
      return (uint)uVar5;
    }
  }
  return 0;
}

/* ref: FUN_00a679e0 */
uint F_00a679e0(unsigned int gen_a0)
{
  GEN_ENTER(0xa679e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00a4ffd0();
  bVar1 = *(byte *)(uVar2 + 0x1888);
  if (bVar1 != 0) {
    *(uint *)(in_ecx + 0x39fc) = (uint)bVar1;
    return (uint)bVar1;
  }
  *(undefined4 *)(in_ecx + 0x39fc) = 1;
  return *(uint *)(in_ecx + 0x39fc);
}

/* ref: FUN_00a67a10 */
byte F_00a67a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa67a10u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  char * pcVar2;
  uint uVar3;
  
  uVar1 = F_00a4ffd0();
  uVar3 = 0;
  pcVar2 = (char *)(uVar1 + 0x1895);
  while (((byte)pcVar2[-1] != param_1 || (*pcVar2 != (char)param_2))) {
    uVar3 = uVar3 + 1;
    pcVar2 = pcVar2 + 8;
    if (4 < uVar3) {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00a67a50 */
uint F_00a67a50(unsigned int gen_a0)
{
  GEN_ENTER(0xa67a50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte bVar1;
  undefined * this;
  uint uVar2;
  
  this = (undefined *)F_006b8c00();
  uVar2 = F_006d6fd0(this);
  bVar1 = F_00a4a790(&REFG(undefined, 0x14a7360),0x49);
  if (((bVar1 == 0) && (uVar2 != 0)) && (*(ushort *)(uVar2 + 0x310) == (ushort)param_1)) {
    uVar2 = F_00a4a810(&REFG(undefined, 0x14a7360),0x49);
    return uVar2;
  }
  uVar2 = F_00a51200(0x50,(uint)(ushort)param_1,0,0,0);
  return uVar2;
}

/* ref: FUN_00a67ab0 */
byte F_00a67ab0(unsigned int gen_a0)
{
  GEN_ENTER(0xa67ab0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(int *)(gen_frame + 0x8)) = 0;
  F_006c42f0(param_1,&(*(int *)(gen_frame + 0x8)));
  if ((*(int *)(gen_frame + 0x8)) != 0) {
    return *(byte *)((*(int *)(gen_frame + 0x8)) + 6);
  }
  return 0;
}

/* ref: FUN_00a67af0 */
uint F_00a67af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa67af0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char cVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int * piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  uVar8 = *(uint *)((int)this + 0x440);
  uVar4 = F_00ab1c90(*(undefined4 *)&REFG(undefined2, 0x1379c78));
  iVar2 = REFG(int, 0x1379694);
  if ((uVar4 == 0) || (*(ushort *)(uVar4 + 0x20) != uVar8)) {
    return 1;
  }
  if ((REFG(int, 0x1379694) != 0) && (*(int *)(REFG(int, 0x1379694) + 0xe4) != 0)) {
    return 2;
  }
  iVar9 = *(int *)((int)this + 0x318);
  if (iVar9 == 1) {
    uVar8 = (uint)REFG(undefined1, 0x1338ad4);
    iVar9 = 0;
    if (uVar8 != 0) {
      do {
        piVar5 = (int *)F_00ae0850(&REFG(undefined, 0x1336e40),iVar9);
        if (iVar2 == 0) {
          iVar7 = -0x20000000;
        }
        else {
          iVar7 = *(int *)(iVar2 + 0x74);
        }
        if (piVar5 == (int *)0x0) {
          iVar6 = -0x20000000;
        }
        else {
          iVar6 = *piVar5;
        }
        if ((iVar6 != -0x20000000) && (iVar6 != iVar7)) {
          if ((char)piVar5[0x78] == '\0') {
            return 3;
          }
          uVar4 = F_00a64450(&REFG(undefined, 0x14a9a18),iVar6);
          if ((uVar4 != 0) &&
             (((cVar1 = *(char *)(uVar4 + 0x18a), cVar1 == '\x0e' || (cVar1 == '\x0f')) ||
              (cVar1 == '\x11')))) {
            return 4;
          }
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)uVar8);
    }
  }
  else if (iVar9 == 2) {
    if (1 < REFG(undefined1, 0x1338ad4)) {
      return 8;
    }
    if (REFG(int, 0x1379694) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = (uint)*(byte *)(REFG(int, 0x1379694) + 0x1688);
    }
    uVar4 = F_00ab21d0(*(undefined4 *)((int)this + 0x280));
    if (((uVar8 == 0) || (uVar4 == 0)) || (*(char *)(uVar4 + 4 + uVar8) == '\0')) {
      return 9;
    }
    uVar8 = F_00ab33f0(*(undefined4 *)((int)this + 0x314));
    if ((uVar8 != 0) && (*(char *)(uVar8 + 0x32) != '\0')) {
      uVar8 = F_00a3c850(&REFG(undefined, 0x14a4230),1);
      if ((int)uVar8 < 1) {
        return 10;
      }
    }
  }
  else if ((iVar9 == 3) && (1 < REFG(undefined1, 0x1338ad4))) {
    return 0xb;
  }
  bVar3 = F_00a4a790(&REFG(undefined, 0x14a7360),0x49);
  return (-(uint)(bVar3 != 0) & 0xfffffffa) + 6;
}

/* ref: FUN_00a67ca0 */
unsigned int F_00a67ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa67ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(char *)((int)this + 0x3aae) == '\0') {
    if (*(int *)((int)this + 0x3a9c) != 0) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x3a9c) + 4))))(*(int * PTR32 *)((int)this + 0x3a9c),param_1);
      return 0;
    }
  }
  else if (*(int *)((int)this + 0x3aa0) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x3aa0) + 4))))(*(int * PTR32 *)((int)this + 0x3aa0),param_1);
    return 0;
  }
  return 0;
}

/* ref: FUN_00a67ce0 */
uint F_00a67ce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa67ce0u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  if (param_1 - 0x39 < 4) {
    return 0xefef;
  }
  if (param_1 - 0x3d < 5) {
    return 0xeffb;
  }
  uVar1 = F_00ab3110((uint)(byte)param_2);
  if (uVar1 == 0) {
    return 0;
  }
  if ((char)param_3 != '\0') {
    return 0xeff9;
  }
  if ((((byte)param_2 == 1) || ((byte)param_2 == 2)) &&
     (((param_1 != 0 && (param_1 < 3)) || (param_1 - 3 < 5)))) {
    return 0xeff7;
  }
  return *(uint *)(uVar1 + 8);
}

/* ref: FUN_00a67d80 */
uint F_00a67d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa67d80u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  if (((((char)param_2 != '\x01') && ((char)param_2 != '\x02')) && ((char)param_2 != '\x03')) ||
     (((param_1 == 0 || (2 < param_1)) && (4 < param_1 - 3)))) {
    uVar1 = F_00ab32a0(param_1);
    if (uVar1 != 0) {
      uVar1 = F_00ab32a0(param_1);
      return *(uint *)(uVar1 + 4);
    }
  }
  return 0;
}

/* ref: FUN_00a67de0 */
byte F_00a67de0(unsigned int gen_a0)
{
  GEN_ENTER(0xa67de0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(int *)(gen_frame + 0x8)) = 0;
  F_006c42f0(param_1,&(*(int *)(gen_frame + 0x8)));
  if ((*(int *)(gen_frame + 0x8)) != 0) {
    return *(char *)((*(int *)(gen_frame + 0x8)) + 6) != '\0';
  }
  return 0;
}

/* ref: FUN_00a67e30 */
byte F_00a67e30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12, unsigned int gen_a13, unsigned int gen_a14, unsigned int gen_a15, unsigned int gen_a16, unsigned int gen_a17, unsigned int gen_a18, unsigned int gen_a19, unsigned int gen_a20, unsigned int gen_a21)
{
  GEN_ENTER(0xa67e30u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[22];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  gen_args[8] = gen_a8;
  gen_args[9] = gen_a9;
  gen_args[10] = gen_a10;
  gen_args[11] = gen_a11;
  gen_args[12] = gen_a12;
  gen_args[13] = gen_a13;
  gen_args[14] = gen_a14;
  gen_args[15] = gen_a15;
  gen_args[16] = gen_a16;
  gen_args[17] = gen_a17;
  gen_args[18] = gen_a18;
  gen_args[19] = gen_a19;
  gen_args[20] = gen_a20;
  gen_args[21] = gen_a21;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar4 = 0;
  (*(uint *)(gen_frame + 0x0)) = 0;
  uVar3 = 0;
  do {
    puVar2 = (uint *)F_00ab32a0(uVar3);
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)),(*puVar2 & 0xffffff) + (int)puVar2,REFG(undefined4, 0x108cc50));
    bVar1 = F_0042ac50(&(*(undefined4 *)&gen_args[0]),((undefined1 *)(gen_frame + 0x4)));
    F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    if (bVar1 != 0) {
      (*(uint *)(gen_frame + 0x0)) = uVar3;
    }
    puVar2 = (uint *)F_00ab32a0(uVar3);
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)),(*puVar2 & 0xffffff) + (int)puVar2,REFG(undefined4, 0x108cc50));
    bVar1 = F_0042ac50(&(*(undefined4 *)&gen_args[21]),((undefined1 *)(gen_frame + 0x4)));
    F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    if (bVar1 != 0) {
      uVar4 = uVar3;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x42);
  if (((*(uint *)(gen_frame + 0x0)) - 8 < 0x1c) && (uVar4 - 8 < 0x1c)) {
    F_0042c880(&(*(undefined4 *)&gen_args[0]));
    F_0042c880(&(*(undefined4 *)&gen_args[21]));
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return (*(uint *)(gen_frame + 0x0)) < uVar4;
  }
  bVar1 = F_0042c7c0(&(*(undefined4 *)&gen_args[0]),&(*(undefined4 *)&gen_args[21]));
  F_0042c880(&(*(undefined4 *)&gen_args[0]));
  F_0042c880(&(*(undefined4 *)&gen_args[21]));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return bVar1;
}

/* ref: FUN_00a67f50 */
uint F_00a67f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa67f50u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  if ((param_1 == -0x20000000) && (param_2 == 0)) {
    return 0;
  }
  uVar1 = 0;
  while (((&REFG(undefined4, 0x14b2790))[uVar1 * 2] != param_1 || ((&REFG(undefined4, 0x14b2794))[uVar1 * 2] != param_2))) {
    uVar1 = uVar1 + 1;
    if (0xd < uVar1) {
      return 0;
    }
  }
  return uVar1 + 1;
}

/* ref: FUN_00a67fa0 */
uint F_00a67fa0(unsigned int gen_a0)
{
  GEN_ENTER(0xa67fa0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != -0x20000000) {
    do {
      if ((&REFG(undefined4, 0x14b2800))[uVar1] == param_1) {
        return uVar1 + 1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 0x1a);
  }
  return 0;
}

/* ref: FUN_00a67fd0 */
uint F_00a67fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa67fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a67f50(param_1,param_2);
  if (uVar1 != 0) {
    uVar1 = F_00ab28d0(uVar1);
    if (uVar1 != 0) {
      return *(uint *)(uVar1 + 4);
    }
  }
  return 0;
}

/* ref: FUN_00a68000 */
uint F_00a68000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa68000u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00a512b0(0x17,param_2,param_3,param_1,0,0,0);
  return uVar1;
}

/* ref: FUN_00a68030 */
uint F_00a68030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa68030u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int * piVar1;
  int * piVar2;
  int iVar3;
  
  iVar3 = 0xe;
  piVar1 = this;
  do {
    piVar2 = piVar1 + 2;
    if ((*piVar2 == param_2) && (piVar1[3] == param_3)) {
      *piVar2 = -0x20000000;
      piVar1[3] = 0;
    }
    iVar3 = iVar3 + -1;
    piVar1 = piVar2;
  } while (iVar3 != 0);
  *(int *)((int)this + param_1 * 8 + 8) = param_2;
  *(int *)((int)this + param_1 * 8 + 0xc) = param_3;
  return param_1;
}

/* ref: FUN_00a68080 */
uint F_00a68080(unsigned int gen_a0)
{
  GEN_ENTER(0xa68080u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * puVar1;
  undefined * pvVar2;
  int iVar3;
  undefined4 * puVar4;
  
  *(undefined2 *)this = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined1 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x66) = 0;
  *(undefined4 *)((int)this + 0x6a) = 0;
  *(undefined4 *)((int)this + 0x6e) = 0;
  *(undefined4 *)((int)this + 0x72) = 0;
  *(undefined4 *)((int)this + 0x76) = 0;
  *(undefined4 *)((int)this + 0x7a) = 0;
  *(undefined4 *)((int)this + 0x7e) = 0;
  *(undefined4 *)((int)this + 0x82) = 0;
  *(undefined4 *)((int)this + 0x86) = 0;
  *(undefined2 *)((int)this + 0x8a) = 0;
  *(undefined2 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xdb) = 0;
  *(undefined2 *)((int)this + 0xdf) = 0;
  *(undefined1 *)((int)this + 0xda) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  puVar4 = (undefined4 *)((int)this + 0xfc);
  for (iVar3 = 0x4a; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)((int)this + 0x224) = 0;
  *(undefined2 *)((int)this + 0x228) = 0;
  *(undefined1 *)((int)this + 0x22a) = 0;
  *(undefined2 *)((int)this + 0x22b) = 0;
  *(undefined2 *)((int)this + 0x22d) = 0;
  *(undefined2 *)((int)this + 0x22f) = 0;
  *(undefined1 *)((int)this + 0x231) = 0;
  *(undefined4 *)((int)this + 0x240) = REFG(float, 0x1375ac0);
  *(undefined4 *)((int)this + 0x244) = REFG(float, 0x1375ac4);
  *(undefined4 *)((int)this + 0x248) = REFG(float, 0x1375ac8);
  *(undefined1 *)((int)this + 0x250) = 0;
  *(undefined4 *)((int)this + 0x254) = 0;
  *(undefined1 *)((int)this + 0x26c) = 0xff;
  *(undefined4 *)((int)this + 0x26d) = 0;
  puVar1 = (undefined2 *)((int)this + 0x296);
  iVar3 = 0x12;
  do {
    puVar1[-0x12] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)((int)this + 0x2ba) = 0;
  *(undefined4 *)((int)this + 0x2be) = 0;
  *(undefined4 *)((int)this + 0x2c2) = 0;
  *(undefined4 *)((int)this + 0x2c6) = 0;
  *(undefined4 *)((int)this + 0x2ca) = 0;
  *(undefined4 *)((int)this + 0x2ce) = 0;
  *(undefined1 *)((int)this + 0x2d2) = 0;
  pvVar2 = F_00c48350((undefined *)((int)this + 0x2d3),0,0x32);
  *(undefined4 *)((int)this + 0x308) = 0;
  *(undefined4 *)((int)this + 0x30c) = 0;
  return (uint)pvVar2;
}

/* ref: FUN_00a68280 */
uint F_00a68280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa68280u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  char cVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  
  uVar6 = param_1;
  if (param_1 == 0xffffffff) {
    uVar6 = (uint)*(byte *)((int)this + 100);
  }
  if ((int)uVar6 < 0x1d) {
    uVar4 = F_00ab21a0((uint)*(byte *)((int)this + 100));
    if (uVar4 != 0) {
      cVar1 = *(char *)(uVar4 + 0x3e);
      uVar6 = F_00ab21a0(uVar6);
      if (((uVar6 != 0) && (cVar2 = *(char *)(uVar6 + 0x43), -1 < cVar2)) && (cVar2 < '\x13')) {
        uVar5 = *(ushort *)((int)this + cVar2 * 2 + 0x66);
        if (((char)param_2 == '\x01') && (cVar1 == *(char *)(uVar6 + 0x3e))) {
          uVar3 = *(ushort *)((int)this + 0xd8);
          uVar6 = (uint)uVar3;
          if ((uVar3 != 0) && (uVar6 < uVar5)) {
            uVar5 = uVar3;
          }
        }
        return CONCAT22((short)(uVar6 >> 0x10),uVar5);
      }
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00a68310 */
uint F_00a68310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa68310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  char cVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ushort * puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  uVar9 = 0;
  if (param_1 == 1) {
    puVar6 = (ushort *)((int)this + 0x66);
    iVar7 = 0x13;
    do {
      if ((ushort)uVar9 < *puVar6) {
        uVar9 = (uint)*puVar6;
      }
      puVar6 = puVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    return uVar9;
  }
  uVar3 = F_00ab21d0(param_1);
  if (uVar3 != 0) {
    uVar8 = 0;
    do {
      uVar5 = uVar3;
      if (*(char *)(uVar3 + 4 + uVar8) != '\0') {
        uVar4 = F_00ab21a0(uVar8);
        uVar5 = 0;
        if (uVar4 != 0) {
          cVar1 = *(char *)(uVar4 + 0x43);
          uVar5 = CONCAT31((int3)(uVar4 >> 8),cVar1);
          if ((-1 < cVar1) &&
             (uVar2 = *(ushort *)((int)this + cVar1 * 2 + 0x66), uVar5 = (uint)uVar2,
             (ushort)uVar9 < uVar2)) {
            uVar9 = uVar5;
          }
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < 0x1d);
    return CONCAT22((short)(uVar5 >> 0x10),(short)uVar9);
  }
  return 0;
}

/* ref: FUN_00a683a0 */
uint F_00a683a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa683a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (param_1 < 0x13) {
    *(undefined2 *)((int)this + param_1 * 2 + 0x66) = (undefined2)param_2;
  }
  return param_1;
}

/* ref: FUN_00a683c0 */
uint F_00a683c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa683c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  char cVar1;
  uint uVar2;
  
  if (param_1 < 0x1d) {
    uVar2 = F_00ab21a0(param_1);
    if (((uVar2 != 0) && (cVar1 = *(char *)(uVar2 + 0x43), -1 < cVar1)) && (cVar1 < '\x13')) {
      return *(uint *)((int)this + cVar1 * 4 + 0x8c);
    }
  }
  return 0;
}

/* ref: FUN_00a68400 */
uint F_00a68400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa68400u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_1;
  if (param_1 < 0x1d) {
    uVar2 = F_00ab21a0(param_1);
    uVar3 = 0;
    if (uVar2 != 0) {
      cVar1 = *(char *)(uVar2 + 0x43);
      uVar3 = CONCAT31((int3)(uVar2 >> 8),cVar1);
      if ((-1 < cVar1) && (cVar1 < '\x13')) {
        uVar3 = (uint)cVar1;
        *(undefined4 *)((int)this + uVar3 * 4 + 0x8c) = param_2;
      }
    }
  }
  return uVar3;
}

/* ref: FUN_00a68440 */
uint F_00a68440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa68440u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if ((int)param_1 < 0x13) {
    *(undefined4 *)((int)this + param_1 * 4 + 0x8c) = param_2;
  }
  return param_1;
}

/* ref: FUN_00a68460 */
uint F_00a68460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa68460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  char cVar1;
  uint uVar2;
  uint * puVar3;
  uint uVar4;
  
  uVar4 = param_1;
  if (param_1 == 0xffffffff) {
    uVar4 = (uint)*(byte *)((int)this + 100);
  }
  if ((int)uVar4 < 0x1d) {
    uVar2 = F_00ab21a0((uint)*(byte *)((int)this + 100));
    if (uVar2 != 0) {
      uVar4 = F_00ab21a0(uVar4);
      if (((uVar4 != 0) && (cVar1 = *(char *)(uVar4 + 0x43), -1 < cVar1)) && (cVar1 < '\x13')) {
        uVar4 = (uint)*(ushort *)((int)this + cVar1 * 2 + 0x66);
        goto LAB_00a684ad;
      }
    }
  }
  uVar4 = 0;
LAB_00a684ad: ;
  puVar3 = (uint *)F_00ab2260(uVar4);
  if (puVar3 == (uint *)0x0) {
    return 0;
  }
  return *puVar3;
}

/* ref: FUN_00a684d0 */
uint F_00a684d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa684d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 - 1U < 6) {
    return *(uint *)((int)this + param_1 * 4 + 0xe0);
  }
  return 0;
}

/* ref: FUN_00a684f0 */
uint F_00a684f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa684f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (param_1 - 1 < 6) {
    *(undefined4 *)((int)this + param_1 * 4 + 0xe0) = param_2;
  }
  return param_1;
}

/* ref: FUN_00a68510 */
uint F_00a68510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa68510u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (0x49 < param_2) {
    return 0;
  }
  return *(uint *)(in_ecx + 0xfc + param_2 * 4);
}

/* ref: FUN_00a68530 */
uint F_00a68530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa68530u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (param_1 < 0x4a) {
    *(undefined4 *)((int)this + param_1 * 4 + 0xfc) = param_2;
  }
  return param_1;
}

/* ref: FUN_00a68550 */
byte F_00a68550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa68550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = F_00ab1f90(param_1);
  if (uVar1 == 0) {
    return 0;
  }
  uVar2 = F_00a68280(this,(uint)*(byte *)((int)this + 100),1);
  uVar3 = F_00ab21a0((uint)*(byte *)((int)this + 100));
  if (((uVar3 != 0) && (*(char *)(uVar1 + 0xe) == *(char *)(uVar3 + 0x3e))) &&
     ((uint)*(byte *)(uVar1 + 0xf) <= (uVar2 & 0xffff))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a685c0 */
uint F_00a685c0(unsigned int gen_a0)
{
  GEN_ENTER(0xa685c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)*(byte *)((int)this + 100);
  if (uVar3 < 0x1d) {
    uVar2 = F_00ab21a0(uVar3);
    if (uVar2 != 0) {
      uVar3 = F_00ab21a0(uVar3);
      if (((uVar3 != 0) && (cVar1 = *(char *)(uVar3 + 0x43), -1 < cVar1)) && (cVar1 < '\x13')) {
        uVar3 = (uint)*(ushort *)((int)this + cVar1 * 2 + 0x66);
        goto LAB_00a685fe;
      }
    }
  }
  uVar3 = 0;
LAB_00a685fe: ;
  uVar3 = F_00ab2260(uVar3);
  if (uVar3 == 0) {
    return 0;
  }
  return (uint)*(byte *)(uVar3 + 0x1f);
}

/* ref: FUN_00a68620 */
uint F_00a68620(unsigned int gen_a0)
{
  GEN_ENTER(0xa68620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)*(byte *)((int)this + 100);
  if (uVar3 < 0x1d) {
    uVar2 = F_00ab21a0(uVar3);
    if (uVar2 != 0) {
      uVar3 = F_00ab21a0(uVar3);
      if (((uVar3 != 0) && (cVar1 = *(char *)(uVar3 + 0x43), -1 < cVar1)) && (cVar1 < '\x13')) {
        uVar3 = (uint)*(ushort *)((int)this + cVar1 * 2 + 0x66);
        goto LAB_00a6865e;
      }
    }
  }
  uVar3 = 0;
LAB_00a6865e: ;
  uVar3 = F_00ab2260(uVar3);
  if (uVar3 == 0) {
    return 0;
  }
  return (uint)*(ushort *)(uVar3 + 0x18);
}

/* ref: FUN_00a68680 */
uint F_00a68680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa68680u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  char cVar1;
  byte bVar2;
  uint in_EAX = 0;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  
  if (param_1 < 6) {
    uVar5 = (uint)*(byte *)((int)this + 100);
    if ((((uVar5 < 0x1d) && (uVar3 = F_00ab21a0(uVar5), uVar3 != 0)) &&
        (uVar5 = F_00ab21a0(uVar5), uVar5 != 0)) &&
       ((cVar1 = *(char *)(uVar5 + 0x43), -1 < cVar1 && (cVar1 < '\x13')))) {
      uVar5 = (uint)*(ushort *)((int)this + cVar1 * 2 + 0x66);
    }
    else {
      uVar5 = 0;
    }
    uVar5 = F_00ab2260(uVar5);
    bVar2 = *(byte *)(uVar5 + 0x1f);
    bVar4 = (byte)param_2;
    if (bVar2 < (byte)param_2) {
      bVar4 = bVar2;
    }
    *(byte *)(param_1 + 0x224 + (int)this) = bVar4;
    return CONCAT31((int3)(uVar5 >> 8),bVar2);
  }
  return in_EAX;
}

/* ref: FUN_00a686f0 */
byte F_00a686f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa686f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x224 + (int)this);
  F_00a68680(this,param_1,param_2);
  F_00a51200(0x1f,(uint)*(byte *)((int)this + 100),param_1,(uint)bVar1,
             (uint)*(byte *)(param_1 + 0x224 + (int)this));
  return 1;
}

/* ref: FUN_00a68750 */
byte F_00a68750(unsigned int gen_a0)
{
  GEN_ENTER(0xa68750u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(char *)(in_ecx + 0x22f + uVar1) == '\0') goto LAB_00a68765;
    uVar1 = uVar1 + 1;
  } while (uVar1 < 3);
  uVar1 = 0xffffffff;
LAB_00a68765: ;
  return (byte)uVar1;
}

/* ref: FUN_00a68770 */
byte F_00a68770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa68770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if ((char)param_1 != '\0') {
    uVar1 = 0;
    do {
      if (*(char *)((int)this + uVar1 + 0x22f) == (char)param_1) {
        return 1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 3);
  }
  return 0;
}

/* ref: FUN_00a687b0 */
uint F_00a687b0(unsigned int gen_a0)
{
  GEN_ENTER(0xa687b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  
  uVar4 = (uint)*(byte *)((int)this + 100);
  if (uVar4 < 0x1d) {
    uVar2 = F_00ab21a0(uVar4);
    if (uVar2 != 0) {
      uVar4 = F_00ab21a0(uVar4);
      if (((uVar4 != 0) && (cVar1 = *(char *)(uVar4 + 0x43), -1 < cVar1)) && (cVar1 < '\x13')) {
        uVar4 = (uint)*(ushort *)((int)this + cVar1 * 2 + 0x66);
        goto LAB_00a687ee;
      }
    }
  }
  uVar4 = 0;
LAB_00a687ee: ;
  piVar3 = (int *)F_00ab2260(uVar4);
  if (piVar3 == (int *)0x0) {
    return 0;
  }
  return (uint)(((longlong)*(int *)((int)this + 0x254) * (longlong)*piVar3) / 0x93a80);
}

/* ref: FUN_00a68850 */
uint F_00a68850(void)
{
  GEN_ENTER(0xa68850u, 0u, 0u, 0u, 0u);
  int iVar1;
  uint uVar2;
  
  uVar2 = F_00a4ffd0();
  iVar1 = *(int *)(uVar2 + 0x18bc);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = F_006c3740();
  return (iVar1 + uVar2) / 0x3c;
}

/* ref: FUN_00a688d0 */
unsigned int F_00a688d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa688d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(byte *)(in_ecx + 0xe0) = *(byte *)(in_ecx + 0xe0) | 1;
    return 0;
  }
  *(undefined1 *)(in_ecx + 0xe0) = 0;
  return 0;
}

/* ref: FUN_00a688f0 */
unsigned int F_00a688f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa688f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(byte *)(in_ecx + 0xe0) = *(byte *)(in_ecx + 0xe0) | 3;
    return 0;
  }
  *(byte *)(in_ecx + 0xe0) = *(byte *)(in_ecx + 0xe0) & 0xfd;
  return 0;
}

/* ref: FUN_00a68910 */
byte F_00a68910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa68910u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x22a) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a68920 */
byte F_00a68920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa68920u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((byte)param_2 - 1 < 3) {
    return *(byte *)((byte)param_2 + 0x22a + in_ecx);
  }
  return 0;
}

/* ref: FUN_00a68940 */
byte F_00a68940(unsigned int gen_a0)
{
  GEN_ENTER(0xa68940u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(byte *)(in_ecx + 0x22a) - 1 < 3) {
    return *((byte *)GEN_TOP((*(byte *)(in_ecx + 0x22a) + 0x22a + in_ecx)));
  }
  return 0;
}

/* ref: FUN_00a68960 */
byte F_00a68960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa68960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_00ab2840(param_1);
  if (((uVar2 != 0) && (cVar1 = *(char *)(uVar2 + 0xa0), -1 < cVar1)) && (cVar1 < ' ')) {
    uVar2 = (uint)cVar1;
    uVar3 = uVar2 & 0x80000007;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffff8) + 1;
    }
    return (*((byte *)GEN_TOP((((int)(uVar2 + ((int)uVar2 >> 0x1f & 7U)) >> 3 & 0xffU) + 0x26d + (int)this))) &
           (byte)(1 << ((byte)uVar3 & 0x1f))) != 0;
  }
  return 0;
}

/* ref: FUN_00a689d0 */
uint F_00a689d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa689d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x40);
  *(undefined2 *)(uVar1 + 8) = (undefined2)param_2;
  return uVar1;
}

/* ref: FUN_00a689f0 */
uint F_00a689f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa689f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = (uint)*((ushort *)GEN_TOP((*(int * PTR32 *)((int)this + 0x40) + 2))) * 0x444 + param_1 * 0x70 +
          **(int * PTR32 *)((int)this + 0x40);
  bVar1 = *(byte *)(iVar2 + 8);
  if ((bVar1 < *(byte *)(iVar2 + 0x6c)) && ((ushort)bVar1 < *(ushort *)(iVar2 + 4))) {
    *(byte *)(iVar2 + 8) = bVar1 + 1;
    if (*(byte *)(iVar2 + 0x6c) < (byte)(bVar1 + 1 + *(char *)(iVar2 + 9))) {
      *(char *)(iVar2 + 9) = *(char *)(iVar2 + 9) + -1;
    }
  }
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x3c) + 4))))(*(int * PTR32 *)((int)this + 0x3c),3);
  return uVar3;
}

/* ref: FUN_00a68a50 */
uint F_00a68a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa68a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = (uint)*((ushort *)GEN_TOP((*(int * PTR32 *)((int)this + 0x40) + 2))) * 0x444 + param_1 * 0x70 +
          **(int * PTR32 *)((int)this + 0x40);
  bVar1 = *(byte *)(iVar2 + 9);
  if ((bVar1 < *(byte *)(iVar2 + 0x6c)) && ((ushort)bVar1 < *(ushort *)(iVar2 + 6))) {
    *(byte *)(iVar2 + 9) = bVar1 + 1;
    if (*(byte *)(iVar2 + 0x6c) < (byte)(bVar1 + 1 + *(char *)(iVar2 + 8))) {
      *(char *)(iVar2 + 8) = *(char *)(iVar2 + 8) + -1;
    }
  }
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x3c) + 4))))(*(int * PTR32 *)((int)this + 0x3c),3);
  return uVar3;
}

/* ref: FUN_00a68ab0 */
uint F_00a68ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa68ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ushort uVar1;
  int iVar2;
  ushort * puVar3;
  uint uVar4;
  byte bVar5;
  
  iVar2 = (uint)*((ushort *)GEN_TOP((*(int * PTR32 *)((int)this + 0x40) + 2))) * 0x444 + **(int * PTR32 *)((int)this + 0x40);
  if ((char)param_1 == '\0') {
    puVar3 = (ushort *)(iVar2 + 0x74);
    iVar2 = 2;
    do {
      if (((*(int *)(puVar3 + -8) != 0) && (bVar5 = (byte)puVar3[-4], bVar5 != 0)) &&
         ((byte)puVar3[-0x36] < bVar5)) {
        uVar1 = puVar3[-0x38];
        if (uVar1 < bVar5) {
          if ((uVar1 != 0) && ((byte)puVar3[-0x36] < uVar1)) {
            bVar5 = bVar5 - (char)puVar3[-0x38];
            *(char *)(puVar3 + -0x36) = (char)puVar3[-0x38];
            if (bVar5 < *(byte *)((int)puVar3 + -0x6b)) {
              *(byte *)((int)puVar3 + -0x6b) = bVar5;
            }
          }
        }
        else {
          *(byte *)(puVar3 + -0x36) = bVar5;
          *(char *)((int)puVar3 + -0x6b) = '\0';
        }
      }
      if (((*(int *)(puVar3 + 0x30) != 0) && (bVar5 = (byte)puVar3[0x34], bVar5 != 0)) &&
         ((byte)puVar3[2] < bVar5)) {
        uVar1 = *puVar3;
        if (uVar1 < bVar5) {
          if ((uVar1 != 0) && ((byte)puVar3[2] < uVar1)) {
            *(char *)(puVar3 + 2) = (char)*puVar3;
            bVar5 = (char)puVar3[0x34] - (char)*puVar3;
            if (bVar5 < *(byte *)((int)puVar3 + 5)) {
              *(byte *)((int)puVar3 + 5) = bVar5;
            }
          }
        }
        else {
          *(byte *)(puVar3 + 2) = bVar5;
          *(char *)((int)puVar3 + 5) = '\0';
        }
      }
      if (((*(int *)(puVar3 + 0x68) != 0) && (bVar5 = (byte)puVar3[0x6c], bVar5 != 0)) &&
         ((byte)puVar3[0x3a] < bVar5)) {
        uVar1 = puVar3[0x38];
        if (uVar1 < bVar5) {
          if ((uVar1 != 0) && ((byte)puVar3[0x3a] < uVar1)) {
            *(char *)(puVar3 + 0x3a) = (char)puVar3[0x38];
            bVar5 = (char)puVar3[0x6c] - (char)puVar3[0x38];
            if (bVar5 < *(byte *)((int)puVar3 + 0x75)) {
              *(byte *)((int)puVar3 + 0x75) = bVar5;
            }
          }
        }
        else {
          *(byte *)(puVar3 + 0x3a) = bVar5;
          *(char *)((int)puVar3 + 0x75) = '\0';
        }
      }
      if (((*(int *)(puVar3 + 0xa0) != 0) && (bVar5 = (byte)puVar3[0xa4], bVar5 != 0)) &&
         ((byte)puVar3[0x72] < bVar5)) {
        uVar1 = puVar3[0x70];
        if (uVar1 < bVar5) {
          if ((uVar1 != 0) && ((byte)puVar3[0x72] < uVar1)) {
            *(char *)(puVar3 + 0x72) = (char)puVar3[0x70];
            bVar5 = (char)puVar3[0xa4] - (char)puVar3[0x70];
            if (bVar5 < *(byte *)((int)puVar3 + 0xe5)) {
              *(byte *)((int)puVar3 + 0xe5) = bVar5;
            }
          }
        }
        else {
          *(byte *)(puVar3 + 0x72) = bVar5;
          *(char *)((int)puVar3 + 0xe5) = '\0';
        }
      }
      puVar3 = puVar3 + 0xe0;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  else {
    puVar3 = (ushort *)(iVar2 + 0x76);
    iVar2 = 2;
    do {
      if (((*(int *)(puVar3 + -9) != 0) && (bVar5 = (byte)puVar3[-5], bVar5 != 0)) &&
         (*(byte *)((int)puVar3 + -0x6d) < bVar5)) {
        uVar1 = puVar3[-0x38];
        if (uVar1 < bVar5) {
          if ((uVar1 != 0) && (*(byte *)((int)puVar3 + -0x6d) < uVar1)) {
            bVar5 = bVar5 - (char)puVar3[-0x38];
            *(char *)((int)puVar3 + -0x6d) = (char)puVar3[-0x38];
            if (bVar5 < (byte)puVar3[-0x37]) {
              *(byte *)(puVar3 + -0x37) = bVar5;
            }
          }
        }
        else {
          *(byte *)((int)puVar3 + -0x6d) = bVar5;
          *(char *)(puVar3 + -0x37) = '\0';
        }
      }
      if (((*(int *)(puVar3 + 0x2f) != 0) && (bVar5 = (byte)puVar3[0x33], bVar5 != 0)) &&
         (*(byte *)((int)puVar3 + 3) < bVar5)) {
        uVar1 = *puVar3;
        if (uVar1 < bVar5) {
          if ((uVar1 != 0) && (*(byte *)((int)puVar3 + 3) < uVar1)) {
            *(char *)((int)puVar3 + 3) = (char)*puVar3;
            bVar5 = (char)puVar3[0x33] - (char)*puVar3;
            if (bVar5 < (byte)puVar3[1]) {
              *(byte *)(puVar3 + 1) = bVar5;
            }
          }
        }
        else {
          *(byte *)((int)puVar3 + 3) = bVar5;
          *(char *)(puVar3 + 1) = '\0';
        }
      }
      if (((*(int *)(puVar3 + 0x67) != 0) && (bVar5 = (byte)puVar3[0x6b], bVar5 != 0)) &&
         (*(byte *)((int)puVar3 + 0x73) < bVar5)) {
        uVar1 = puVar3[0x38];
        if (uVar1 < bVar5) {
          if ((uVar1 != 0) && (*(byte *)((int)puVar3 + 0x73) < uVar1)) {
            *(char *)((int)puVar3 + 0x73) = (char)puVar3[0x38];
            bVar5 = (char)puVar3[0x6b] - (char)puVar3[0x38];
            if (bVar5 < (byte)puVar3[0x39]) {
              *(byte *)(puVar3 + 0x39) = bVar5;
            }
          }
        }
        else {
          *(byte *)((int)puVar3 + 0x73) = bVar5;
          *(char *)(puVar3 + 0x39) = '\0';
        }
      }
      if (((*(int *)(puVar3 + 0x9f) != 0) && (bVar5 = (byte)puVar3[0xa3], bVar5 != 0)) &&
         (*(byte *)((int)puVar3 + 0xe3) < bVar5)) {
        uVar1 = puVar3[0x70];
        if (uVar1 < bVar5) {
          if ((uVar1 != 0) && (*(byte *)((int)puVar3 + 0xe3) < uVar1)) {
            *(char *)((int)puVar3 + 0xe3) = (char)puVar3[0x70];
            bVar5 = (char)puVar3[0xa3] - (char)puVar3[0x70];
            if (bVar5 < (byte)puVar3[0x71]) {
              *(byte *)(puVar3 + 0x71) = bVar5;
            }
          }
        }
        else {
          *(byte *)((int)puVar3 + 0xe3) = bVar5;
          *(char *)(puVar3 + 0x71) = '\0';
        }
      }
      puVar3 = puVar3 + 0xe0;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x3c) + 4))))(*(int * PTR32 *)((int)this + 0x3c),3);
  return uVar4;
}

/* ref: FUN_00a68db0 */
byte F_00a68db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa68db0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  F_00a51200(0x49,param_1,param_2,0,0);
  bVar1 = F_006d0640(param_1,param_2);
  return bVar1;
}

/* ref: FUN_00a68de0 */
uint F_00a68de0(unsigned int gen_a0)
{
  GEN_ENTER(0xa68de0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  byte * pbVar2;
  int iVar3;
  uint uVar4;
  int local_10;
  int local_c;
  int local_8;
  
  if (*((ushort *)GEN_TOP((*(int *)((int)this + 0x40) + 8))) <
      (ushort)*((byte *)GEN_TOP((*(int *)((int)this + 0x40) + 4)))) {
    local_c = 0;
    local_8 = 0;
    iVar3 = (uint)*((ushort *)GEN_TOP((*(int * PTR32 *)((int)this + 0x40) + 2))) * 0x444 +
            **(int * PTR32 *)((int)this + 0x40);
    pbVar2 = (byte *)(iVar3 + 0x6d);
    local_10 = 2;
    do {
      if (*(int *)(pbVar2 + -9) != 0) {
        uVar4 = (uint)pbVar2[-0x65];
        uVar1 = pbVar2[-100] + uVar4;
        if (uVar1 < pbVar2[-1]) {
          uVar4 = uVar4 + (pbVar2[-1] - uVar1);
        }
        local_c = local_c + uVar4 * *pbVar2;
        local_8 = local_8 + (uint)pbVar2[-100] * (uint)*pbVar2;
      }
      if (*(int *)(pbVar2 + 0x67) != 0) {
        uVar4 = (uint)pbVar2[0xb];
        uVar1 = pbVar2[0xc] + uVar4;
        if (uVar1 < pbVar2[0x6f]) {
          uVar4 = uVar4 + (pbVar2[0x6f] - uVar1);
        }
        local_c = local_c + uVar4 * pbVar2[0x70];
        local_8 = local_8 + (uint)pbVar2[0xc] * (uint)pbVar2[0x70];
      }
      if (*(int *)(pbVar2 + 0xd7) != 0) {
        uVar4 = (uint)pbVar2[0x7b];
        uVar1 = pbVar2[0x7c] + uVar4;
        if (uVar1 < pbVar2[0xdf]) {
          uVar4 = uVar4 + (pbVar2[0xdf] - uVar1);
        }
        local_c = local_c + uVar4 * pbVar2[0xe0];
        local_8 = local_8 + (uint)pbVar2[0x7c] * (uint)pbVar2[0xe0];
      }
      if (*(int *)(pbVar2 + 0x147) != 0) {
        uVar4 = (uint)pbVar2[0xeb];
        uVar1 = pbVar2[0xec] + uVar4;
        if (uVar1 < pbVar2[0x14f]) {
          uVar4 = uVar4 + (pbVar2[0x14f] - uVar1);
        }
        local_c = local_c + uVar4 * pbVar2[0x150];
        local_8 = local_8 + (uint)pbVar2[0xec] * (uint)pbVar2[0x150];
      }
      pbVar2 = pbVar2 + 0x1c0;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
    if (local_8 + local_c != 0) {
      return (int)((uint)(*(ushort *)(iVar3 + 0x3e4) >> 1) * local_8) / (local_8 + local_c);
    }
  }
  return 0;
}

/* ref: FUN_00a68f30 */
uint F_00a68f30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa68f30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  byte * pbVar6;
  int iVar7;
  int iVar8;
  
  uVar4 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x28)) = uVar4;
  piVar3 = *(int * PTR32 *)((int)this + 0x40);
  if (((piVar3 != (int *)0x0) && (*piVar3 != 0)) &&
     (*(ushort *)(piVar3 + 2) < (ushort)*(byte *)(piVar3 + 1))) {
    iVar7 = (uint)*(ushort *)(piVar3 + 2) * 0x444 + *piVar3;
    if ((iVar7 != 0) && ((*(byte *)(iVar7 + 0x3f1) & 2) != 0)) {
      (*(uint *)(gen_frame + 0x0)) = 99;
      if ((*(byte *)(iVar7 + 0x380) != 0xff) &&
         ((*(byte *)(iVar7 + 0x381) != 0 &&
          (uVar5 = (uint)((ulonglong)
                          *((ushort *)GEN_TOP(((uint)*(byte *)(iVar7 + 0x380) * 0x60 + 0x388 + (int)this))) /
                         (ulonglong)(longlong)(int)(uint)*(byte *)(iVar7 + 0x381)), uVar5 < 99)))) {
        (*(uint *)(gen_frame + 0x0)) = uVar5;
      }
      (*(uint *)(gen_frame + 0x4)) = 99;
      if (((*(byte *)(iVar7 + 0x382) != 0xff) && (*(byte *)(iVar7 + 899) != 0)) &&
         (uVar5 = (uint)((ulonglong)
                         *((ushort *)GEN_TOP(((uint)*(byte *)(iVar7 + 0x382) * 0x60 + 0x388 + (int)this))) /
                        (ulonglong)(longlong)(int)(uint)*(byte *)(iVar7 + 899)), uVar5 < 99)) {
        (*(uint *)(gen_frame + 0x4)) = uVar5;
      }
      iVar8 = 0;
      pbVar6 = (byte *)(iVar7 + 10);
      do {
        bVar1 = *pbVar6;
        bVar2 = pbVar6[0x62];
        ((uint *)(gen_frame + 0x8))[(int)(iVar8)] = 99;
        if ((((bVar1 & 1) != 0) && (*(int *)(pbVar6 + 0x5a) != 0)) && (bVar2 != 0)) {
          uVar5 = (uint)*(ushort *)(pbVar6 + -6);
          if ((char)param_1 != '\0') {
            uVar5 = uVar5 + *(ushort *)(pbVar6 + -4);
          }
          uVar5 = (uint)((ulonglong)uVar5 / (ulonglong)(longlong)(int)(uint)bVar2);
          if (uVar5 < 99) {
            ((uint *)(gen_frame + 0x8))[(int)(iVar8)] = uVar5;
          }
        }
        iVar8 = iVar8 + 1;
        pbVar6 = pbVar6 + 0x70;
      } while (iVar8 < 8);
      uVar5 = 99;
      if ((*(uint *)(gen_frame + 0x0)) < 99) {
        uVar5 = (*(uint *)(gen_frame + 0x0));
      }
      if ((*(uint *)(gen_frame + 0x4)) < uVar5) {
        uVar5 = (*(uint *)(gen_frame + 0x4));
      }
      if ((int)((uint *)(gen_frame + 0x8))[0] < (int)uVar5) {
        uVar5 = ((uint *)(gen_frame + 0x8))[0];
      }
      if ((int)((uint *)(gen_frame + 0x8))[1] < (int)uVar5) {
        uVar5 = ((uint *)(gen_frame + 0x8))[1];
      }
      if ((int)((uint *)(gen_frame + 0x8))[2] < (int)uVar5) {
        uVar5 = ((uint *)(gen_frame + 0x8))[2];
      }
      if ((int)((uint *)(gen_frame + 0x8))[3] < (int)uVar5) {
        uVar5 = ((uint *)(gen_frame + 0x8))[3];
      }
      if ((int)((uint *)(gen_frame + 0x8))[4] < (int)uVar5) {
        uVar5 = ((uint *)(gen_frame + 0x8))[4];
      }
      if ((int)((uint *)(gen_frame + 0x8))[5] < (int)uVar5) {
        uVar5 = ((uint *)(gen_frame + 0x8))[5];
      }
      if ((int)((uint *)(gen_frame + 0x8))[6] < (int)uVar5) {
        uVar5 = ((uint *)(gen_frame + 0x8))[6];
      }
      if ((int)((uint *)(gen_frame + 0x8))[7] < (int)uVar5) {
        uVar5 = ((uint *)(gen_frame + 0x8))[7];
      }
      F_00c47745(uVar4 ^ (uint)(uint)(gen_frame + 0x2c));
      return uVar5;
    }
    F_00c47745(uVar4 ^ (uint)(uint)(gen_frame + 0x2c));
    return 0;
  }
  F_00c47745(uVar4 ^ (uint)(uint)(gen_frame + 0x2c));
  return 0;
}

/* ref: FUN_00a690c0 */
byte F_00a690c0(unsigned int gen_a0)
{
  GEN_ENTER(0xa690c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte bVar1;
  
  bVar1 = F_006d05b0(param_1);
  return bVar1;
}

/* ref: FUN_00a690e0 */
byte F_00a690e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa690e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_006d0600(param_1,param_2);
  return bVar1 == 0;
}

/* ref: FUN_00a69100 */
uint F_00a69100(unsigned int gen_a0)
{
  GEN_ENTER(0xa69100u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar1 = F_00a68280(&REFG(undefined1, 0x14ab070),8,1);
    return uVar1;
  case 1: ;
    uVar1 = F_00a68280(&REFG(undefined1, 0x14ab070),9,1);
    return uVar1;
  case 2: ;
    uVar1 = F_00a68280(&REFG(undefined1, 0x14ab070),10,1);
    return uVar1;
  case 3: ;
    uVar1 = F_00a68280(&REFG(undefined1, 0x14ab070),0xb,1);
    return uVar1;
  case 4: ;
    uVar1 = F_00a68280(&REFG(undefined1, 0x14ab070),0xc,1);
    return uVar1;
  case 5: ;
    uVar1 = F_00a68280(&REFG(undefined1, 0x14ab070),0xd,1);
    return uVar1;
  case 6: ;
    uVar1 = F_00a68280(&REFG(undefined1, 0x14ab070),0xe,1);
    return uVar1;
  case 7: ;
    uVar1 = F_00a68280(&REFG(undefined1, 0x14ab070),0xf,1);
    return uVar1;
  default: ;
    return 0;
  }
}

/* ref: FUN_00a691f0 */
unsigned int F_00a691f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa691f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  undefined * this_00;
  uint uVar4;
  
  uVar4 = 0;
  *(undefined1 *)((int)this + 0x9ee) = 1;
  if (param_2 != 0) {
    this_00 = (undefined *)((int)this + 0x32c);
    do {
      iVar1 = *((int *)GEN_TOP((*(int *)(param_1 + uVar4 * 4) + 4)));
      uVar3 = F_00ab6240(*(undefined4 *)((int)this_00 + 0x54),0,iVar1);
      F_0042e430(this_00,uVar3);
      *(uint *)((int)this_00 + 0x58) = (uint)*(ushort *)(iVar1 + 0x7c);
      uVar4 = uVar4 + 1;
      this_00 = (undefined *)((int)this_00 + 0x60);
    } while (uVar4 < param_2);
  }
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (puVar2 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  return 0;
}

/* ref: FUN_00a69270 */
byte F_00a69270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa69270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  int iVar2;
  int iVar3;
  undefined1 * puVar4;
  undefined1 * puVar5;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x40);
  if (((piVar1 != (int *)0x0) && (*piVar1 != 0)) &&
     (iVar2 = (uint)*(ushort *)(piVar1 + 2) * 0x444 + *piVar1, (*(byte *)(iVar2 + 0x3f1) & 2) != 0))
  {
    *(undefined2 *)((int)this + 0xac) = *(undefined2 *)(iVar2 + 0x3e0);
    *(byte *)((int)this + 0xb4) = *(byte *)(iVar2 + 0x3f1) & 1;
    *(undefined2 *)((int)this + 0xae) = *(undefined2 *)(iVar2 + 1000);
    *(undefined2 *)((int)this + 0xb0) = *(undefined2 *)(iVar2 + 0x3ea);
    if ((char)param_1 == '\0') {
      puVar5 = (undefined1 *)((int)this + 0x4c);
      puVar4 = (undefined1 *)(iVar2 + 8);
      iVar3 = 8;
      do {
        *(undefined4 *)(puVar5 + -8) = *(undefined4 *)(puVar4 + 0x5c);
        *puVar5 = *puVar4;
        puVar5[1] = puVar4[1];
        *(undefined2 *)(puVar5 + -4) = *(undefined2 *)(puVar4 + -8);
        *(undefined2 *)(puVar5 + -2) = *(undefined2 *)(puVar4 + -6);
        puVar4 = puVar4 + 0x70;
        puVar5 = puVar5 + 0xc;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    else {
      *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(iVar2 + 100);
      *(undefined1 *)((int)this + 0x4c) = *(undefined1 *)(iVar2 + 0x6c);
      *(undefined1 *)((int)this + 0x4d) = 0;
      *(undefined2 *)((int)this + 0x48) = 9999;
      *(undefined2 *)((int)this + 0x4a) = 0;
      *(undefined4 *)((int)this + 0x50) = *(undefined4 *)(iVar2 + 0xd4);
      *(undefined1 *)((int)this + 0x58) = *(undefined1 *)(iVar2 + 0xdc);
      *(undefined1 *)((int)this + 0x59) = 0;
      *(undefined2 *)((int)this + 0x54) = 9999;
      *(undefined2 *)((int)this + 0x56) = 0;
      *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)(iVar2 + 0x144);
      *(undefined1 *)((int)this + 100) = *(undefined1 *)(iVar2 + 0x14c);
      *(undefined1 *)((int)this + 0x65) = 0;
      *(undefined2 *)((int)this + 0x60) = 9999;
      *(undefined2 *)((int)this + 0x62) = 0;
      *(undefined4 *)((int)this + 0x68) = *(undefined4 *)(iVar2 + 0x1b4);
      *(undefined1 *)((int)this + 0x70) = *(undefined1 *)(iVar2 + 0x1bc);
      *(undefined1 *)((int)this + 0x71) = 0;
      *(undefined2 *)((int)this + 0x6c) = 9999;
      *(undefined2 *)((int)this + 0x6e) = 0;
      *(undefined4 *)((int)this + 0x74) = *(undefined4 *)(iVar2 + 0x224);
      *(undefined1 *)((int)this + 0x7c) = *(undefined1 *)(iVar2 + 0x22c);
      *(undefined2 *)((int)this + 0x78) = 9999;
      *(undefined2 *)((int)this + 0x7a) = 0;
      *(undefined1 *)((int)this + 0x7d) = 0;
      *(undefined4 *)((int)this + 0x80) = *(undefined4 *)(iVar2 + 0x294);
      *(undefined1 *)((int)this + 0x88) = *(undefined1 *)(iVar2 + 0x29c);
      *(undefined2 *)((int)this + 0x84) = 9999;
      *(undefined2 *)((int)this + 0x86) = 0;
      *(undefined1 *)((int)this + 0x89) = 0;
      *(undefined4 *)((int)this + 0x8c) = *(undefined4 *)(iVar2 + 0x304);
      *(undefined1 *)((int)this + 0x94) = *(undefined1 *)(iVar2 + 0x30c);
      *(undefined2 *)((int)this + 0x90) = 9999;
      *(undefined2 *)((int)this + 0x92) = 0;
      *(undefined1 *)((int)this + 0x95) = 0;
      *(undefined4 *)((int)this + 0x98) = *(undefined4 *)(iVar2 + 0x374);
      *(undefined1 *)((int)this + 0xa0) = *(undefined1 *)(iVar2 + 0x37c);
      *(undefined2 *)((int)this + 0x9c) = 9999;
      *(undefined1 *)((int)this + 0xa1) = 0;
      *(undefined2 *)((int)this + 0x9e) = 0;
    }
    if (*(char *)(iVar2 + 0x380) != -1) {
      *(undefined4 *)((int)this + 0xa4) =
           *((undefined4 *)GEN_TOP((*(char *)(iVar2 + 0x380) * 0x60 + 0x380 + (int)this)));
    }
    *(undefined1 *)((int)this + 0xb2) = *(undefined1 *)(iVar2 + 0x381);
    if (*(char *)(iVar2 + 0x382) != -1) {
      *(undefined4 *)((int)this + 0xa8) =
           *((undefined4 *)GEN_TOP((*(char *)(iVar2 + 0x382) * 0x60 + 0x380 + (int)this)));
    }
    *(undefined1 *)((int)this + 0xb3) = *(undefined1 *)(iVar2 + 899);
    *(bool *)((int)this + 0xb5) = (char)param_1 != '\0';
    *(undefined1 *)((int)this + 0xb6) = (undefined1)param_2;
    *((char *)GEN_TOP((*(int *)((int)this + 0x40) + 10))) = (char)param_1;
    return 1;
  }
  return 0;
}

/* ref: FUN_00a694f0 */
uint F_00a694f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa694f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte * pbVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  int iVar6;
  uint uVar7;
  int * piVar8;
  uint uVar5;
  
  iVar6 = (uint)(byte)param_1 * 0x444 + **(int * PTR32 *)((int)this + 0x40);
  piVar8 = (int *)(iVar6 + 100);
  param_1 = 8;
  do {
    uVar3 = 0;
    if (*piVar8 != 0) {
      uVar7 = (uint)*(byte *)(piVar8 + 2);
      uVar2 = F_00a41080(&REFG(undefined, 0x14a4230),*piVar8,0,1,1);
      uVar3 = F_00a41080(&REFG(undefined, 0x14a4230),*piVar8,1,1,1);
      uVar4 = 0;
      if (uVar3 + uVar2 < uVar7) {
        *(byte *)((int)piVar8 + -0x5a) = *(byte *)((int)piVar8 + -0x5a) | 2;
      }
      else {
        *(byte *)((int)piVar8 + -0x5a) = *(byte *)((int)piVar8 + -0x5a) & 0xfd;
      }
      if ((char)param_2 != '\0') {
        uVar7 = (uint)*(byte *)(piVar8 + -0x17);
        uVar5 = (uint)*(byte *)((int)piVar8 + -0x5b);
        if (uVar3 < *(byte *)((int)piVar8 + -0x5b)) {
          uVar5 = uVar3;
        }
        uVar4 = (undefined1)uVar5;
      }
      if (uVar2 < uVar7) {
        uVar7 = uVar2;
      }
      *(byte *)((int)piVar8 + -0x5a) = *(byte *)((int)piVar8 + -0x5a) | 1;
      *(short *)(piVar8 + -0x18) = (short)uVar2;
      *(short *)((int)piVar8 + -0x5e) = (short)uVar3;
      *(char *)(piVar8 + -0x17) = (char)uVar7;
      *(undefined1 *)((int)piVar8 + -0x5b) = uVar4;
    }
    piVar8 = piVar8 + 0x1c;
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  pbVar1 = (byte *)(iVar6 + 0x3f1);
  *pbVar1 = *pbVar1 | 2;
  return uVar3;
}

/* ref: FUN_00a695b0 */
unsigned int F_00a695b0(unsigned int gen_a0)
{
  GEN_ENTER(0xa695b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined2 * puVar2;
  int iVar3;
  
  if (*(int *)((int)this + 0x40) != 0) {
    puVar2 = (undefined2 *)((int)this + 0x388);
    iVar3 = 0x12;
    do {
      if (*(int *)(puVar2 + -4) != 0) {
        uVar1 = F_00a41080(&REFG(undefined, 0x14a4230),*(int *)(puVar2 + -4),0,1,1);
        *puVar2 = (short)uVar1;
      }
      puVar2 = puVar2 + 0x30;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}

/* ref: FUN_00a695f0 */
uint F_00a695f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa695f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  uVar3 = *(uint *)((int)this + param_1 * 4);
  if (uVar3 != 0) {
    piVar1 = *(int * PTR32 *)((int)this + param_1 * 4 + 0x14);
    if (piVar1 != (int *)0x0) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,uVar3);
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + param_1 * 4);
    if (puVar2 != (undefined4 *)0x0) {
      uVar3 = ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + param_1 * 4) = 0;
    }
  }
  *(undefined1 *)(param_1 + 0x9ed + (int)this) = 0;
  return uVar3;
}

/* ref: FUN_00a69640 */
uint F_00a69640(unsigned int gen_a0)
{
  GEN_ENTER(0xa69640u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  byte * pbVar3;
  int iVar4;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x40);
  if (((piVar1 != (int *)0x0) && (*piVar1 != 0)) &&
     (iVar2 = (uint)*(ushort *)(piVar1 + 2) * 0x444 + *piVar1, (*(byte *)(iVar2 + 0x3f1) & 2) != 0))
  {
    iVar4 = 0;
    pbVar3 = (byte *)(iVar2 + 0x6e);
    do {
      if (((*(int *)(pbVar3 + -10) != 0) && ((*pbVar3 & 1) != 0)) && ((pbVar3[-100] & 1) != 0)) {
        return (uint)(pbVar3 + -0x6e);
      }
      iVar4 = iVar4 + 1;
      pbVar3 = pbVar3 + 0x70;
    } while (iVar4 < 8);
  }
  return 0;
}

/* ref: FUN_00a69690 */
byte F_00a69690(void)
{
  GEN_ENTER(0xa69690u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00a68310(&REFG(undefined1, 0x14ab070),0x21);
  return 9 < (ushort)uVar1;
}

/* ref: FUN_00a696e0 */
unsigned int F_00a696e0(unsigned int gen_a0)
{
  GEN_ENTER(0xa696e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 4) = 0;
  return 0;
}

/* ref: FUN_00a696f0 */
unsigned int F_00a696f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa696f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 4) != 3) {
    *(undefined4 *)(in_ecx + 4) = 0;
    return 0;
  }
  *(undefined1 *)(in_ecx + 0x1f) = 1;
  return 0;
}

/* ref: FUN_00a69710 */
unsigned int F_00a69710(unsigned int gen_a0)
{
  GEN_ENTER(0xa69710u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 4) == 3) {
    *(undefined1 *)(in_ecx + 0x20) = 1;
  }
  return 0;
}

/* ref: FUN_00a69720 */
unsigned int F_00a69720(unsigned int gen_a0)
{
  GEN_ENTER(0xa69720u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0x21) = 0;
  return 0;
}

/* ref: FUN_00a69750 */
unsigned int F_00a69750(unsigned int gen_a0)
{
  GEN_ENTER(0xa69750u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(char *)(in_ecx + 0x58) == '\0') {
    *(undefined1 *)(in_ecx + 0x58) = 1;
  }
  return 0;
}

/* ref: FUN_00a69760 */
unsigned int F_00a69760(unsigned int gen_a0)
{
  GEN_ENTER(0xa69760u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0x58) = 0;
  return 0;
}

/* ref: FUN_00a69770 */
unsigned int F_00a69770(unsigned int gen_a0)
{
  GEN_ENTER(0xa69770u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0x59) = 1;
  return 0;
}

/* ref: FUN_00a69780 */
unsigned int F_00a69780(unsigned int gen_a0)
{
  GEN_ENTER(0xa69780u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0x59) = 0;
  return 0;
}

/* ref: FUN_00a69790 */
uint F_00a69790(unsigned int gen_a0)
{
  GEN_ENTER(0xa69790u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: FUN_00a697a0 */
uint F_00a697a0(unsigned int gen_a0)
{
  GEN_ENTER(0xa697a0u, gen_a0, 0u, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  return *(uint *)(*in_ecx + 0x3c);
}

/* ref: FUN_00a697b0 */
uint F_00a697b0(unsigned int gen_a0)
{
  GEN_ENTER(0xa697b0u, gen_a0, 0u, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  return *in_ecx + 0x23c;
}

/* ref: FUN_00a697c0 */
uint F_00a697c0(unsigned int gen_a0)
{
  GEN_ENTER(0xa697c0u, gen_a0, 0u, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  return *in_ecx + 0x290;
}

/* ref: FUN_00a697d0 */
uint F_00a697d0(unsigned int gen_a0)
{
  GEN_ENTER(0xa697d0u, gen_a0, 0u, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  return *(uint *)(*in_ecx + 0x308);
}

/* ref: FUN_00a697e0 */
uint F_00a697e0(unsigned int gen_a0)
{
  GEN_ENTER(0xa697e0u, gen_a0, 0u, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  return *(uint *)(*in_ecx + 0x30c);
}

/* ref: FUN_00a697f0 */
uint F_00a697f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa697f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short sVar1;
  int in_ecx;
  ushort uVar2;
  
  in_ecx = *(int *)this;
  sVar1 = *((short *)GEN_TOP((*(int *)(in_ecx + 0x1d4) + 2)));
  if (((sVar1 != -0x7fff) && (sVar1 != -0x7ffe)) && (sVar1 != -0x7ff9)) {
    if (sVar1 == -0x7fe6) {
      return *(uint *)(in_ecx + 0x310);
    }
    return 0xffffffff;
  }
  uVar2 = F_006c3790(in_ecx);
  return (uint)uVar2;
}

/* ref: FUN_00a69840 */
uint F_00a69840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa69840u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  short sVar1;
  uint uVar2;
  
  sVar1 = *((short *)GEN_TOP((*((int *)GEN_TOP(((int)*(undefined * PTR32 *)this + 0x1d4))) + 2)));
  if (((sVar1 != -0x7fff) && (sVar1 != -0x7ffe)) && (sVar1 != -0x7ff9)) {
    *param_1 = 0;
    *param_2 = 0;
    *param_3 = 0;
    return (uint)param_1;
  }
  uVar2 = F_006c3760(*(undefined * PTR32 *)this,param_1,param_2,param_3);
  return uVar2;
}

/* ref: FUN_00a698a0 */
uint F_00a698a0(unsigned int gen_a0)
{
  GEN_ENTER(0xa698a0u, gen_a0, 0u, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  return *in_ecx + 0x2f8;
}

/* ref: FUN_00a698b0 */
byte F_00a698b0(unsigned int gen_a0)
{
  GEN_ENTER(0xa698b0u, gen_a0, 0u, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  if (*(int *)(*in_ecx + 0x2e8) != 0 || *(int *)(*in_ecx + 0x2ec) != 0) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a698d0 */
uint F_00a698d0(unsigned int gen_a0)
{
  GEN_ENTER(0xa698d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short sVar1;
  
  sVar1 = *((short *)GEN_TOP((*(int *)(*(int *)this + 0x1d4) + 2)));
  if (((sVar1 != -0x7fff) && (sVar1 != -0x7ffe)) && (sVar1 != -0x7ff9)) {
    return 0;
  }
  return 2;
}

/* ref: FUN_00a69910 */
ushort F_00a69910(unsigned int gen_a0)
{
  GEN_ENTER(0xa69910u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short sVar1;
  
  sVar1 = *((short *)GEN_TOP((*(int *)(*(int *)this + 0x1d4) + 2)));
  if (((sVar1 != -0x7fff) && (sVar1 != -0x7ffe)) && (sVar1 != -0x7ff9)) {
    return 0;
  }
  return *(ushort *)(*(int *)this + 0x1d8);
}

/* ref: FUN_00a69950 */
byte F_00a69950(unsigned int gen_a0)
{
  GEN_ENTER(0xa69950u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x244))))(*(int * PTR32 *)this);
  return (byte)uVar1;
}

/* ref: FUN_00a69960 */
unsigned int F_00a69960(unsigned int gen_a0)
{
  GEN_ENTER(0xa69960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x248))))(*(int * PTR32 *)this);
  return 0;
}

/* ref: FUN_00a69970 */
byte F_00a69970(unsigned int gen_a0)
{
  GEN_ENTER(0xa69970u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  byte bVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if ((REFG(int * PTR32, 0x1379694) != (int *)0x0) &&
     ((REFG(int * PTR32, 0x1379694) == param_1 || (param_1[0x21] == REFG(int * PTR32, 0x1379694)[0x1d])))) {
    return 1;
  }
  bVar1 = F_00ae0910(&REFG(undefined, 0x1336e40),param_1[0x1d]);
  if (bVar1 == 0) {
    bVar1 = F_00ae0910(&REFG(undefined, 0x1336e40),param_1[0x21]);
    if (bVar1 == 0) {
      iVar2 = 0;
      if (0 < REFG(int, 0x14ab04c)) {
        piVar4 = &REFG(undefined4, 0x14aa78c);
        do {
          if (*piVar4 == param_1[0x1d]) {
            return 5;
          }
          iVar2 = iVar2 + 1;
          piVar4 = piVar4 + 0x12;
        } while (iVar2 < REFG(int, 0x14ab04c));
      }
      uVar3 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
      return (-(uVar3 != 1) & 2U) + 4;
    }
  }
  return 2;
}

/* ref: FUN_00a69a10 */
byte F_00a69a10(unsigned int gen_a0)
{
  GEN_ENTER(0xa69a10u, gen_a0, 0u, 0u, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  byte bVar1;
  byte * pbVar2;
  int iVar3;
  byte * pbVar4;
  bool bVar5;
  
  if ((REFG(int * PTR32, 0x1379694) == (int *)0x0) || (param_1 == (byte *)0x0)) {
    return 0;
  }
  pbVar2 = ((byte *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1379694) + 0xc))))(REFG(int * PTR32, 0x1379694))));
  pbVar4 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_00a69a50: ;
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_00a69a55;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_00a69a50;
    pbVar2 = pbVar2 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00a69a55: ;
  if (iVar3 == 0) {
    return 1;
  }
  bVar1 = F_00ae0950(&REFG(undefined, 0x1336e40),param_1);
  return (bVar1 == 0) * '\x02' + 2;
}

/* ref: FUN_00a69a80 */
uint F_00a69a80(void)
{
  GEN_ENTER(0xa69a80u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00a51200(4,0,0,0,0);
  return uVar1;
}

/* ref: FUN_00a69aa0 */
uint F_00a69aa0(void)
{
  GEN_ENTER(0xa69aa0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00a51200(8,0,0,0,0);
  return uVar1;
}

/* ref: FUN_00a69ac0 */
uint F_00a69ac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa69ac0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte * pbVar1;
  uint uVar2;
  byte bVar3;
  
  uVar2 = param_1 >> 3;
  if (uVar2 < 0xc) {
    bVar3 = '\x01' << ((byte)param_1 & 7);
    if ((char)param_2 != '\0') {
      pbVar1 = (byte *)(uVar2 + 0xb090 + (int)this);
      *pbVar1 = *pbVar1 | bVar3;
      return uVar2;
    }
    pbVar1 = (byte *)(uVar2 + 0xb090 + (int)this);
    *pbVar1 = *pbVar1 & ~bVar3;
  }
  return uVar2;
}

/* ref: FUN_00a69b00 */
uint F_00a69b00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa69b00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte * pbVar1;
  uint uVar2;
  byte bVar3;
  
  uVar2 = param_1 >> 3;
  if (uVar2 < 8) {
    bVar3 = '\x01' << ((byte)param_1 & 7);
    if ((char)param_2 != '\0') {
      pbVar1 = (byte *)(uVar2 + 0xb0cc + (int)this);
      *pbVar1 = *pbVar1 | bVar3;
      return uVar2;
    }
    pbVar1 = (byte *)(uVar2 + 0xb0cc + (int)this);
    *pbVar1 = *pbVar1 & ~bVar3;
  }
  return uVar2;
}

/* ref: FUN_00a69b40 */
uint F_00a69b40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa69b40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte * pbVar1;
  uint uVar2;
  byte bVar3;
  
  uVar2 = param_1 >> 3;
  if (uVar2 < 0x20) {
    bVar3 = '\x01' << ((byte)param_1 & 7);
    if ((char)param_2 != '\0') {
      pbVar1 = (byte *)(uVar2 + 0xb09c + (int)this);
      *pbVar1 = *pbVar1 | bVar3;
      return uVar2;
    }
    pbVar1 = (byte *)(uVar2 + 0xb09c + (int)this);
    *pbVar1 = *pbVar1 & ~bVar3;
  }
  return uVar2;
}

/* ref: FUN_00a69b80 */
uint F_00a69b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa69b80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  if ((char)param_2 == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  *(uint *)(in_ecx + 0xb09c) = uVar1;
  *(uint *)(in_ecx + 0xb0a0) = uVar1;
  *(uint *)(in_ecx + 0xb0a4) = uVar1;
  *(uint *)(in_ecx + 0xb0a8) = uVar1;
  *(uint *)(in_ecx + 0xb0ac) = uVar1;
  *(uint *)(in_ecx + 0xb0b0) = uVar1;
  *(uint *)(in_ecx + 0xb0b4) = uVar1;
  *(uint *)(in_ecx + 0xb0b8) = uVar1;
  return uVar1;
}

/* ref: FUN_00a69bd0 */
uint F_00a69bd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa69bd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte * pbVar1;
  uint uVar2;
  byte bVar3;
  
  uVar2 = param_1 >> 3;
  if (uVar2 < 0x40) {
    bVar3 = '\x01' << ((byte)param_1 & 7);
    if ((char)param_2 != '\0') {
      pbVar1 = (byte *)(uVar2 + 0xb0d4 + (int)this);
      *pbVar1 = *pbVar1 | bVar3;
      return uVar2;
    }
    pbVar1 = (byte *)(uVar2 + 0xb0d4 + (int)this);
    *pbVar1 = *pbVar1 & ~bVar3;
  }
  return uVar2;
}

/* ref: FUN_00a69c10 */
uint F_00a69c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa69c10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a51200(10,param_1,param_2,0,0);
  return uVar1;
}

/* ref: FUN_00a69c30 */
unsigned int F_00a69c30(unsigned int gen_a0)
{
  GEN_ENTER(0xa69c30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (((*(int *)((int)this + 0x92e4) == 0) && (REFG(int, 0x1379694) != 0)) &&
     (*(char *)(REFG(int, 0x1379694) + 0x189) == '\0')) {
    uVar1 = F_00406b90(0x188,0,0);
    if (uVar1 != 0) {
      uVar1 = F_00bc61e0(uVar1);
      *(uint *)((int)this + 0x92e4) = uVar1;
      return 0;
    }
    *(undefined4 *)((int)this + 0x92e4) = 0;
  }
  return 0;
}

/* ref: FUN_00a69c80 */
byte F_00a69c80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa69c80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined1 *)((int)this + 4) = (undefined1)param_1;
  *(undefined2 *)((int)this + 6) = (undefined2)param_2;
  *(byte *)((int)this + 8) = (byte)param_3;
  return (byte)param_3;
}

/* ref: FUN_00a69ca0 */
uint F_00a69ca0(unsigned int gen_a0)
{
  GEN_ENTER(0xa69ca0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  if (*(int *)((int)this + 0x204) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x200);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*(int *)((int)this + 0x204));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x204);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x204) = 0;
    }
  }
  *(undefined4 *)((int)this + 0x200) = 0;
  if (*(int *)((int)this + 0x20c) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x208);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*(int *)((int)this + 0x20c));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x20c);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x20c) = 0;
    }
  }
  *(undefined4 *)((int)this + 0x208) = 0;
  if (*(int *)((int)this + 0x214) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x210);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*(int *)((int)this + 0x214));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x214);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x214) = 0;
    }
  }
  *(undefined4 *)((int)this + 0x210) = 0;
  if (*(int *)((int)this + 0x21c) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x218);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*(int *)((int)this + 0x21c));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x21c);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x21c) = 0;
    }
  }
  uVar3 = *(uint *)((int)this + 0x224);
  *(undefined4 *)((int)this + 0x218) = 0;
  if (uVar3 != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x220);
    if (piVar1 != (int *)0x0) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,uVar3);
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x224);
    if (puVar2 != (undefined4 *)0x0) {
      uVar3 = ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    }
  }
  *(undefined4 *)((int)this + 0x224) = 0;
  return uVar3;
}

/* ref: FUN_00a69df0 */
uint F_00a69df0(unsigned int gen_a0)
{
  GEN_ENTER(0xa69df0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x78;
}

/* ref: FUN_00a69e00 */
byte F_00a69e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa69e00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x194) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a69e10 */
uint F_00a69e10(unsigned int gen_a0)
{
  GEN_ENTER(0xa69e10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  uint uVar2;
  ushort * puVar3;
  
  uVar1 = F_00a4ffd0();
  uVar2 = 0;
  puVar3 = (ushort *)(uVar1 + 0x1688);
  do {
    if (param_1 == *puVar3) {
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    puVar3 = puVar3 + 8;
  } while ((int)uVar2 < 0x10);
  return 0x10;
}

/* ref: FUN_00a69e50 */
uint F_00a69e50(unsigned int gen_a0)
{
  GEN_ENTER(0xa69e50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  if (*(int *)((int)this + 0xe34) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0xe30);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*(int *)((int)this + 0xe34));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0xe34);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0xe34) = 0;
    }
  }
  uVar3 = *(uint *)((int)this + 0xe3c);
  if (uVar3 != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0xe38);
    if (piVar1 != (int *)0x0) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,uVar3);
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0xe3c);
    if (puVar2 != (undefined4 *)0x0) {
      uVar3 = ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0xe3c) = 0;
    }
  }
  *(undefined4 *)((int)this + 0xe9c) = 0;
  return uVar3;
}

/* ref: FUN_00a69ed0 */
uint F_00a69ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa69ed0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined4 * puVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  uVar6 = 0;
  F_0042b630(((undefined1 *)(gen_frame + 0x14)));
  (*(byte *)(gen_frame + 0x13)) = 0;
  if (*(char *)((int)this + 0x1d0) != '\0') {
    (*(int *)(gen_frame + 0xc)) = 0;
    do {
      if (param_2 <= uVar6) break;
      iVar4 = (uint)(*(byte *)(gen_frame + 0x13)) * 0x68;
      iVar3 = *(int *)(iVar4 + 0x1d4 + (int)this);
      if ((((iVar3 == 2) || (iVar3 == 3)) || (iVar3 == 4)) || (iVar3 == 6)) {
        iVar3 = *((int *)GEN_TOP((*(int *)(param_1 + uVar6 * 4) + 4)));
        F_00ab9240(0x18f5f,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xe3c) + 0xc))) + (*(int *)(gen_frame + 0xc)))))
                     ,((undefined1 *)(gen_frame + 0x14)));
        F_0042ccf0((undefined *)(iVar4 + 0x1d8 + (int)this),((undefined1 *)(gen_frame + 0x14)));
        *(uint *)(iVar4 + 0x22c + (int)this) = (uint)*(ushort *)(iVar3 + 0x7c);
        uVar6 = uVar6 + 1;
        (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 0x10;
      }
      (*(byte *)(gen_frame + 0x13)) = (*(byte *)(gen_frame + 0x13)) + 1;
    } while ((*(byte *)(gen_frame + 0x13)) < *(byte *)((int)this + 0x1d0));
  }
  (*(byte *)(gen_frame + 0x13)) = 0;
  if (*(char *)((int)this + 0x1d1) != '\0') {
    iVar3 = uVar6 << 4;
    do {
      if (param_2 <= uVar6) break;
      iVar4 = *((int *)GEN_TOP((*(int *)(param_1 + uVar6 * 4) + 4)));
      F_00ab9240(0x18f5f,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xe3c) + 0xc))) + iVar3))),
                   ((undefined1 *)(gen_frame + 0x14)));
      uVar5 = (uint)(*(byte *)(gen_frame + 0x13));
      F_0042ccf0((undefined *)(uVar5 * 0x68 + 0x3e0 + (int)this),((undefined1 *)(gen_frame + 0x14)));
      iVar3 = iVar3 + 0x10;
      (*(byte *)(gen_frame + 0x13)) = (*(byte *)(gen_frame + 0x13)) + 1;
      *(uint *)(uVar5 * 0x68 + 0x434 + (int)this) = (uint)*(ushort *)(iVar4 + 0x7c);
      uVar6 = uVar6 + 1;
    } while ((*(byte *)(gen_frame + 0x13)) < *(byte *)((int)this + 0x1d1));
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xe3c);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0xe3c) = 0;
  }
  *(undefined4 *)((int)this + 0xe38) = 0;
  piVar2 = *(int * PTR32 *)((int)this + 0xe9c);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,0x13);
  }
  uVar7 = F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return (uint)uVar7;
}

/* ref: FUN_00a6a070 */
byte F_00a6a070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa6a070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  char cVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  undefined4 * puVar6;
  uint * puVar7;
  byte * pbVar8;
  int * piVar9;
  uint uVar10;
  byte bVar11;
  
  bVar3 = REFG(undefined1, 0x14ab29a);
  bVar4 = REFG(undefined1, 0x14ab0d1);
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  uVar10 = (uint)REFG(undefined1, 0x14ab0d2);
  *(undefined4 *)((int)this + 0xea0) = 0;
  bVar11 = *(char *)(param_1 + 0xb30) != '\0';
  if ((bool)bVar11) {
    *(undefined4 *)((int)this + 0x1d4) = 1;
    *(undefined4 *)((int)this + 0x238) = 2;
    uVar5 = F_006c0360(param_1);
    *(uint *)((int)this + 0x230) = uVar5;
    F_0042b630(((undefined1 *)(gen_frame + 0x14)));
    F_00ab0230(0x18f58,((undefined1 *)(gen_frame + 0x14)));
    F_0042ccf0((undefined *)((int)this + 0x1d8),((undefined1 *)(gen_frame + 0x14)));
    *(undefined4 *)((int)this + 0x22c) = 0xf01f;
    F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  }
  if ((*(int *)(param_1 + 0xaf4) != 0) && (bVar11 < 5)) {
    puVar6 = (undefined4 *)((uint)bVar11 * 0x68 + 0x1d4 + (int)this);
    *puVar6 = 2;
    puVar6[0x19] = 2;
    puVar6[0x17] = *(undefined4 *)(param_1 + 0xaf4);
    bVar11 = bVar11 + 1;
    puVar6[0x18] = 1;
    *(int *)((int)this + 0xea0) = *(int *)((int)this + 0xea0) + 1;
  }
  if (*(short *)(param_1 + 0xb28) != 0) {
    cVar1 = *(char *)(param_1 + 0xb31);
    if ((((cVar1 == '\x14') || (cVar1 == '\x15')) || (cVar1 == '\x16')) && (bVar11 < 5)) {
      puVar6 = (undefined4 *)((uint)bVar11 * 0x68 + 0x1d4 + (int)this);
      *puVar6 = 3;
      puVar6[0x19] = 2;
      puVar6[0x17] = (uint)*(ushort *)(param_1 + 0xb28);
      uVar5 = (uint)*(byte *)(param_1 + 0xb31);
    }
    else {
      if (((cVar1 != '\0') || (4 < bVar11)) || (REFG(undefined1, 0x14ab29a) == 0)) goto LAB_00a6a1f2;
      puVar6 = (undefined4 *)((uint)bVar11 * 0x68 + 0x1d4 + (int)this);
      puVar6[0x19] = 2;
      *puVar6 = 3;
      puVar6[0x17] = (uint)*(ushort *)(param_1 + 0xb28);
      uVar5 = REFG(undefined1, 0x14ab29a) + 0x13;
    }
    bVar11 = bVar11 + 1;
    puVar6[0x18] = uVar5;
    *(int *)((int)this + 0xea0) = *(int *)((int)this + 0xea0) + 1;
  }
LAB_00a6a1f2: ;
  pbVar8 = (byte *)(param_1 + 0xb32);
  (*(int *)(gen_frame + 0xc)) = 3;
  do {
    if (((1 < *pbVar8) && (*pbVar8 < 0x14)) && (bVar11 < 5)) {
      puVar6 = (undefined4 *)((uint)bVar11 * 0x68 + 0x1d4 + (int)this);
      *puVar6 = 4;
      puVar6[0x19] = 0x81;
      puVar6[0x17] = (uint)pbVar8[3];
      puVar6[0x18] = (uint)*pbVar8;
      bVar11 = bVar11 + 1;
      *(int *)((int)this + 0xea0) = *(int *)((int)this + 0xea0) + 1;
    }
    pbVar8 = pbVar8 + 1;
    (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + -1;
  } while ((*(int *)(gen_frame + 0xc)) != 0);
  switch((unsigned int)(uintptr_t)(*(undefined1 *)(param_1 + 0xb38))) {
  case 1: ;
    pbVar8 = (byte *)(param_1 + 0xb39);
    piVar9 = (int *)(param_1 + 0xaf8);
    (*(int *)(gen_frame + 0x10)) = 6;
    do {
      if (((*pbVar8 != 0) && (*piVar9 != 0)) && (bVar11 < 5)) {
        puVar6 = (undefined4 *)((uint)bVar11 * 0x68 + 0x1d4 + (int)this);
        *puVar6 = 6;
        puVar6[0x19] = 0x81;
        puVar6[0x17] = (uint)*pbVar8;
        puVar6[0x18] = *piVar9;
        bVar11 = bVar11 + 1;
        *(int *)((int)this + 0xea0) = *(int *)((int)this + 0xea0) + 1;
      }
      pbVar8 = pbVar8 + 1;
      piVar9 = piVar9 + 1;
      (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + -1;
    } while ((*(int *)(gen_frame + 0x10)) != 0);
    break;
  case 2: ;
    if ((5 < bVar3) || (3 < bVar3)) break;
    uVar10 = (uint)bVar3;
    iVar2 = *(int *)(param_1 + 0xaf8 + uVar10 * 4);
    goto joined_r0x00a6a347;
  case 3: ;
    if ((5 < bVar4) || (1 < bVar4)) break;
    uVar10 = (uint)bVar4;
    iVar2 = *(int *)(param_1 + 0xaf8 + uVar10 * 4);
joined_r0x00a6a347: ;
    if ((iVar2 != 0) && (bVar11 < 5)) {
      puVar6 = (undefined4 *)((uint)bVar11 * 0x68 + 0x1d4 + (int)this);
      *puVar6 = 6;
      puVar6[0x19] = 0x81;
      puVar6[0x17] = (uint)*(byte *)(uVar10 + 0xb39 + param_1);
      bVar11 = bVar11 + 1;
      puVar6[0x18] = *(undefined4 *)(param_1 + 0xaf8 + uVar10 * 4);
      *(int *)((int)this + 0xea0) = *(int *)((int)this + 0xea0) + 1;
    }
    break;
  case 4: ;
    if (((uVar10 < 6) && (*(int *)(param_1 + 0xaf8 + uVar10 * 4) != 0)) && (bVar11 < 5)) {
      puVar6 = (undefined4 *)((uint)bVar11 * 0x68 + 0x1d4 + (int)this);
      *puVar6 = 6;
      puVar6[0x19] = 0x81;
      puVar6[0x17] = (uint)*(byte *)(param_1 + 0xb39 + uVar10);
      bVar11 = bVar11 + 1;
      puVar6[0x18] = *(undefined4 *)(param_1 + 0xaf8 + uVar10 * 4);
      *(int *)((int)this + 0xea0) = *(int *)((int)this + 0xea0) + 1;
    }
  }
  if ((*(byte *)(param_1 + 0xb4f) != 0) && (bVar11 < 5)) {
    puVar6 = (undefined4 *)((uint)bVar11 * 0x68 + 0x1d4 + (int)this);
    bVar11 = bVar11 + 1;
    puVar7 = (uint *)F_00ab28a0((uint)*(byte *)(param_1 + 0xb4f));
    *puVar6 = 8;
    puVar6[0x19] = 1;
    puVar6[0x18] = (uint)*(byte *)(param_1 + 0xb4f);
    F_0042e430(puVar6 + 1,(*puVar7 & 0xffffff) + (int)puVar7);
    puVar6[0x16] = (uint)(ushort)puVar7[8];
  }
  if ((*(ushort *)(param_1 + 0xb2a) != 0) && (bVar11 < 5)) {
    puVar6 = (undefined4 *)((uint)bVar11 * 0x68 + 0x1d4 + (int)this);
    bVar11 = bVar11 + 1;
    puVar7 = (uint *)F_00ab1ed0((uint)*(ushort *)(param_1 + 0xb2a));
    *puVar6 = 9;
    puVar6[0x19] = 0x101;
    puVar6[0x18] = (uint)*(ushort *)(param_1 + 0xb2a);
    F_0042e430(puVar6 + 1,(*puVar7 & 0xffffff) + (int)puVar7);
    puVar6[0x16] = (uint)(ushort)puVar7[2];
  }
  if ((*(byte *)(param_1 + 0xb50) != 0) && (bVar11 < 5)) {
    puVar6 = (undefined4 *)((uint)bVar11 * 0x68 + 0x1d4 + (int)this);
    bVar11 = bVar11 + 1;
    puVar7 = (uint *)F_00ab1f30((uint)*(byte *)(param_1 + 0xb50));
    *puVar6 = 10;
    puVar6[0x19] = 0x301;
    puVar6[0x18] = (uint)*(byte *)(param_1 + 0xb50);
    F_0042e430(puVar6 + 1,(*puVar7 & 0xffffff) + (int)puVar7);
    puVar6[0x16] = puVar7[2];
  }
  *(byte *)((int)this + 0x1d0) = bVar11;
  bVar4 = 0;
  if ((*(int *)(param_1 + 0xb10) != 0) && (*(char *)(param_1 + 0xb45) != '\0')) {
    *(undefined4 *)((int)this + 0x3dc) = 6;
    *(undefined4 *)((int)this + 0x440) = 0x81;
    *(uint *)((int)this + 0x438) = (uint)*(byte *)(param_1 + 0xb45);
    bVar4 = 1;
    *(undefined4 *)((int)this + 0x43c) = *(undefined4 *)(param_1 + 0xb10);
  }
  if ((*(int *)(param_1 + 0xb14) != 0) && (*(char *)(param_1 + 0xb46) != '\0')) {
    puVar6 = (undefined4 *)((uint)bVar4 * 0x68 + 0x3dc + (int)this);
    *puVar6 = 6;
    puVar6[0x19] = 0x81;
    puVar6[0x17] = (uint)*(byte *)(param_1 + 0xb46);
    bVar4 = bVar4 + 1;
    puVar6[0x18] = *(undefined4 *)(param_1 + 0xb14);
  }
  if ((*(int *)(param_1 + 0xb18) != 0) && (*(char *)(param_1 + 0xb47) != '\0')) {
    puVar6 = (undefined4 *)((uint)bVar4 * 0x68 + 0x3dc + (int)this);
    *puVar6 = 6;
    puVar6[0x19] = 0x81;
    puVar6[0x17] = (uint)*(byte *)(param_1 + 0xb47);
    bVar4 = bVar4 + 1;
    puVar6[0x18] = *(undefined4 *)(param_1 + 0xb18);
  }
  if ((*(int *)(param_1 + 0xb1c) != 0) && (*(char *)(param_1 + 0xb48) != '\0')) {
    puVar6 = (undefined4 *)((uint)bVar4 * 0x68 + 0x3dc + (int)this);
    *puVar6 = 6;
    puVar6[0x19] = 0x81;
    puVar6[0x17] = (uint)*(byte *)(param_1 + 0xb48);
    bVar4 = bVar4 + 1;
    puVar6[0x18] = *(undefined4 *)(param_1 + 0xb1c);
  }
  if ((*(int *)(param_1 + 0xb20) != 0) && (*(char *)(param_1 + 0xb49) != '\0')) {
    puVar6 = (undefined4 *)((uint)bVar4 * 0x68 + 0x3dc + (int)this);
    *puVar6 = 6;
    puVar6[0x19] = 0x81;
    puVar6[0x17] = (uint)*(byte *)(param_1 + 0xb49);
    bVar4 = bVar4 + 1;
    puVar6[0x18] = *(undefined4 *)(param_1 + 0xb20);
  }
  *(byte *)((int)this + 0x1d1) = bVar4;
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return bVar4;
}

/* ref: FUN_00a6a660 */
uint F_00a6a660(unsigned int gen_a0)
{
  GEN_ENTER(0xa6a660u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x78;
}

/* ref: FUN_00a6a670 */
uint F_00a6a670(unsigned int gen_a0)
{
  GEN_ENTER(0xa6a670u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x5ec;
}

/* ref: FUN_00a6a680 */
uint F_00a6a680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa6a680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint in_EAX = 0;
  uint uVar2;
  
  *(int *)((int)this + 0x5e4) = param_1;
  uVar2 = in_EAX & 0xffffff00;
  while ((*((int *)GEN_TOP(((uVar2 & 0xff) * 0x68 + 0x43c + (int)this))) != param_1 || (param_1 == 0))) {
    bVar1 = (char)uVar2 + 1;
    uVar2 = CONCAT31((int3)(uVar2 >> 8),bVar1);
    if (4 < bVar1) {
      return uVar2;
    }
  }
  *(uint *)((int)this + 0x5e8) = uVar2 & 0xff;
  return uVar2 & 0xff;
}

/* ref: FUN_00a6a6c0 */
uint F_00a6a6c0(unsigned int gen_a0)
{
  GEN_ENTER(0xa6a6c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined2 *)((int)this + 0xc) = 0;
  *(byte *)((int)this + 0x32) = *(byte *)((int)this + 0x32) & 0xfc;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined2 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined2 *)((int)this + 0x30) = 0;
  *(undefined1 *)((int)this + 0x33) = 0xff;
  return (uint)this;
}

/* ref: FUN_00a6a710 */
uint F_00a6a710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, float gen_a5, float gen_a6, float gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12)
{
  GEN_ENTER(0xa6a710u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  undefined4 param_11 = (undefined4)gen_a10;
  undefined4 param_12 = (undefined4)gen_a11;
  undefined4 param_13 = (undefined4)gen_a12;
  undefined * this;
  undefined4 * puVar1;
  
  *param_1 = param_2;
  puVar1 = param_1 + 3;
  param_1[1] = param_3;
  param_1[2] = param_4;
  this = (undefined *)F_006b8c00();
  F_006ded20(this,puVar1,param_4);
  param_1[4] = (undefined4)gen_fl2bits(param_5);
  param_1[5] = (undefined4)gen_fl2bits(param_6);
  *(undefined2 *)(param_1 + 8) = (undefined2)param_9;
  param_1[9] = param_10;
  param_1[10] = param_11;
  param_1[6] = (undefined4)gen_fl2bits(param_7);
  *(byte *)((int)param_1 + 0x32U) = *(byte *)((int)param_1 + 0x32U) & 0xfc;
  param_1[0xb] = param_12;
  param_1[7] = (undefined4)gen_fl2bits(param_8);
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((int)param_1 + 0x33) = (undefined1)param_13;
  return (uint)param_1;
}

/* ref: FUN_00a6a7a0 */
uint F_00a6a7a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa6a7a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  int iVar1;
  
  *(undefined4 *)this = param_1;
  iVar1 = (int)this + 0xc;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = param_2;
  this_00 = (undefined *)F_006b8c00();
  F_006ded20(this_00,iVar1,param_2);
  *(byte *)((int)this + 0x32) = *(byte *)((int)this + 0x32) & 0xfc;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined2 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined2 *)((int)this + 0x20) = 0;
  *(undefined1 *)((int)this + 0x33) = 0xff;
  return (uint)this;
}

/* ref: FUN_00a6a810 */
byte F_00a6a810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa6a810u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  char * pcVar3;
  uint uVar4;
  
  puVar1 = (undefined4 *)(param_1 * 0x70 + 0x30 + (int)this);
  puVar1[1] = param_2 & 0xffff;
  *puVar1 = 1;
  F_0042ccf0(puVar1 + 2,param_3);
  uVar2 = F_00a4ffd0();
  uVar4 = 0;
  pcVar3 = (char *)(uVar2 + 0x1895);
  while ((pcVar3[-1] != '\x01' || (*pcVar3 != (char)param_1))) {
    uVar4 = uVar4 + 1;
    pcVar3 = pcVar3 + 8;
    if (4 < uVar4) {
      *(undefined1 *)((int)puVar1 + 0x6d) = 0;
      return 0;
    }
  }
  *(undefined1 *)((int)puVar1 + 0x6d) = 1;
  return 1;
}

/* ref: FUN_00a6a870 */
uint F_00a6a870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa6a870u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x70 + 0x30 + in_ecx;
}

/* ref: FUN_00a6a890 */
byte F_00a6a890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa6a890u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  char * pcVar3;
  uint uVar4;
  
  puVar1 = (undefined4 *)(param_1 * 0x70 + 0xd50 + (int)this);
  puVar1[1] = param_2 & 0xffff;
  *puVar1 = 2;
  F_0042ccf0(puVar1 + 2,param_3);
  uVar2 = F_00a4ffd0();
  uVar4 = 0;
  pcVar3 = (char *)(uVar2 + 0x1895);
  while ((pcVar3[-1] != '\x02' || (*pcVar3 != (char)param_1))) {
    uVar4 = uVar4 + 1;
    pcVar3 = pcVar3 + 8;
    if (4 < uVar4) {
      *(undefined1 *)((int)puVar1 + 0x6d) = 0;
      return 0;
    }
  }
  *(undefined1 *)((int)puVar1 + 0x6d) = 1;
  return 1;
}

/* ref: FUN_00a6a900 */
uint F_00a6a900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa6a900u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x70 + 0xd50 + in_ecx;
}

/* ref: FUN_00a6a920 */
float F_00a6a920(unsigned int gen_a0)
{
  GEN_ENTER(0xa6a920u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float10 fVar1;
  
  if (param_1 == 0) {
    return (float)(float10)0;
  }
  if ((*(int *)(param_1 + 0x24) != 9) && (*(int *)(param_1 + 0x24) != 0x33)) {
    return *(float *)(param_1 + 0x10);
  }
  fVar1 = F_007733a0(*(float *)(param_1 + 0x10));
  return (float)fVar1;
}

/* ref: FUN_00a6a960 */
uint F_00a6a960(unsigned int gen_a0)
{
  GEN_ENTER(0xa6a960u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  
  uVar1 = F_00a51200(0x18,param_1 & 0xffff,0,0,0);
  return uVar1;
}

/* ref: FUN_00a6a980 */
ushort F_00a6a980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa6a980u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(param_1 + 0x168e) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00a6a9a0 */
uint F_00a6a9a0(unsigned int gen_a0)
{
  GEN_ENTER(0xa6a9a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00a51200(0x19,0,0,0,0);
  *(undefined1 *)((int)this + 0x24) = 1;
  return uVar1;
}

/* ref: FUN_00a6a9c0 */
uint F_00a6a9c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa6a9c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_2;
  puVar3 = in_ecx;
  for (iVar1 = 8; puVar3 = puVar3 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)(in_ecx + 9) = 0x100;
  return (uint)in_ecx;
}

/* ref: FUN_00a6a9e0 */
byte F_00a6a9e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa6a9e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return (*((byte *)GEN_TOP((((ushort)param_1 >> 3) + 4 + (int)this))) & '\x01' << ((byte)(ushort)param_1 & 7))
         != 0;
}

/* ref: FUN_00a6aa10 */
byte F_00a6aa10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa6aa10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  byte bVar3;
  ushort uVar2;
  
  uVar2 = (ushort)param_1;
  if ((ushort)param_1 < 0x100) {
    bVar3 = '\x01' << ((byte)(ushort)param_1 & 7);
    bVar1 = ~bVar3 & *((byte *)GEN_TOP((((ushort)param_1 >> 3) + 4 + (int)this)));
    if ((char)param_2 != '\0') {
      bVar1 = bVar1 | bVar3;
    }
    uVar2 = (ushort)bVar1;
    *((byte *)GEN_TOP((((ushort)param_1 >> 3) + 4 + (int)this))) = bVar1;
  }
  return (byte)uVar2;
}

/* ref: FUN_00a6aad0 */
byte F_00a6aad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa6aad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  
  if ((*(char *)this != '\x01') && (!(*(float *)&REFG(undefined, 0x1088114) < *(float *)((int)this + 4)))) {
    *(undefined4 *)((int)this + 0xc) = 0xe0000000;
    F_00a51200(0x16,param_1,0,0,0);
    *(undefined4 *)((int)this + 8) = 0;
    uVar1 = REFG(float, 0x1087f04);
    *(undefined1 *)this = 1;
    *(undefined4 *)((int)this + 4) = uVar1;
    return 1;
  }
  return 0;
}

/* ref: FUN_00a6ab30 */
uint F_00a6ab30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa6ab30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  undefined2 * puVar1;
  undefined * this_00;
  int iVar2;
  undefined * this_01;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  uint uVar6;
  
  this_00 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),0x7d9);
  *(undefined1 *)this = 0;
  *(uint *)((int)this + 0xc) = param_1;
  F_00c49908((int)this + 0x10,0x40,param_2 + 0x1c8);
  *(undefined4 *)((int)this + 0x50) = *(undefined4 *)(param_2 + 0x1e8);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_2 + 0x1ec);
  *(undefined4 *)((int)this + 0x58) = *(undefined4 *)(param_2 + 0x1f0);
  *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)(param_2 + 500);
  *(undefined1 *)((int)this + 0x60) = param_2[0x1f8];
  *(undefined1 *)((int)this + 0x62) = param_2[1];
  *(undefined1 *)((int)this + 0x61) = *param_2;
  *(undefined1 *)((int)this + 99) = param_2[2];
  *(undefined1 *)((int)this + 100) = param_2[3];
  *(undefined1 *)((int)this + 0x68) = param_2[6];
  *(undefined1 *)((int)this + 0x69) = param_2[7];
  *(undefined2 *)((int)this + 0x66) = *(undefined2 *)(param_2 + 4);
  iVar2 = 0;
  do {
    *(undefined1 *)((int)this + iVar2 + 0x6a) = param_2[iVar2 + 0x1f9];
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x1a);
  param_1 = 0;
  puVar5 = (undefined4 *)(param_2 + 8);
  do {
    this_01 = (undefined *)F_00a37da0(this_00,param_1);
    F_00a35ee0(this_01,*puVar5,1);
    F_00a35f80(this_01,1);
    if (*(char *)(puVar5 + 2) == '\0') {
      *(byte *)((int)this_01 + 0x14) = *(byte *)((int)this_01 + 0x14) & 0xfe;
    }
    else {
      *(byte *)((int)this_01 + 0x14) = *(byte *)((int)this_01 + 0x14) | 1;
    }
    *(undefined1 *)((int)this_01 + 0x2f) = *(undefined1 *)((int)puVar5 + 9);
    *(undefined4 *)((int)this_01 + 0x30) = *puVar5;
    uVar3 = 0;
    puVar4 = puVar5 + 3;
    do {
      uVar6 = uVar3 & 0xff;
      *(undefined2 *)((int)this_01 + uVar6 * 2 + 0x20) = *(undefined2 *)puVar4;
      puVar1 = (undefined2 *)((int)puVar4 + 2);
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 1;
      *(undefined1 *)(uVar6 + 0x2a + (int)this_01) = *(undefined1 *)puVar1;
    } while ((int)uVar3 < 5);
    param_1 = param_1 + 1;
    puVar5 = puVar5 + 8;
  } while ((int)param_1 < 0xe);
  return param_1;
}

/* ref: FUN_00a6ac90 */
uint F_00a6ac90(unsigned int gen_a0)
{
  GEN_ENTER(0xa6ac90u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00a51200(0xf,param_1,0,0,0);
  return uVar1;
}

/* ref: FUN_00a6acb0 */
uint F_00a6acb0(unsigned int gen_a0)
{
  GEN_ENTER(0xa6acb0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00ab4370(0x70,param_1,param_1,0,0);
  return uVar1;
}

/* ref: Client::Game::UI::Telepo::vf1 */
uint F_00a6acd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa6acd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 uVar1;
  
  uVar1 = 0;
  if (((*param_2 & 0xf) != 0) && (*(int *)(param_2 + 4) != 0)) {
    uVar1 = 1;
  }
  if ((REFG(int, 0x1379c70) != 3) && (this[0x15] == (undefined1)0x1)) {
    F_00a51200(0x10,uVar1,0,0,0);
    this[0x15] = (undefined1)0x0;
  }
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  return (uint)param_1;
}

/* ref: FUN_00a6ad20 */
uint F_00a6ad20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa6ad20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar1 = F_00ab2b70((uint)*(byte *)(param_2 + 0x9e));
  uVar2 = F_00ab2290(param_1);
  if ((uVar1 != 0) && (uVar2 != 0)) {
    if ((param_1 - 1U < 0x49) &&
       (((byte)(*(byte *)(param_2 + 0xa6) - 1) < 0x14 && (*(byte *)(param_2 + 0xb0) < 0xb)))) {
      return ((int)((uint)*((ushort *)GEN_TOP(((uVar1 - 2) + param_1 * 2))) *
                    (uint)*((byte *)GEN_TOP((*(byte *)(param_2 + 0xb0) + 0x1a + uVar2))) *
                   (uint)*((byte *)GEN_TOP((*(byte *)(param_2 + 0xa6) + 7 + uVar2)))) / 100 + 0x32) / 100;
    }
  }
  return 0;
}

/* ref: FUN_00a6add0 */
uint F_00a6add0(unsigned int gen_a0)
{
  GEN_ENTER(0xa6add0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = F_00aafbf0();
  uVar4 = 0;
  if (uVar1 != 0) {
    do {
      uVar2 = F_00ab20e0(uVar4);
      if (uVar2 != 0) {
        iVar3 = 0;
        do {
          if (*(int *)(uVar2 + iVar3 * 4) == param_1) {
            return uVar2;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < 10);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  return 0;
}

/* ref: FUN_00a6ae10 */
uint F_00a6ae10(unsigned int gen_a0)
{
  GEN_ENTER(0xa6ae10u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  uint uVar2;
  undefined * this;
  uint uVar3;
  uint uVar4;
  
  if (param_1 == (undefined *)0x0) {
    return 0;
  }
  uVar4 = 0;
  uVar3 = 0;
  do {
    if (*(char *)((int)param_1 + 6) == '\0') {
LAB_00a6ae4b: ;
      uVar1 = *((ushort *)GEN_TOP(((int)param_1 + (uVar3 & 0xff) * 2 + 0x20)));
    }
    else {
      uVar2 = F_00a3a860(param_1);
      if (uVar2 == 0) goto LAB_00a6ae4b;
      uVar2 = uVar3;
      this = (undefined *)F_00a3a860(param_1);
      uVar1 = F_0071d2c0(this,uVar2);
    }
    if (uVar1 != 0) {
      uVar4 = uVar4 + 1;
    }
    uVar3 = uVar3 + 1;
    if (4 < (int)uVar3) {
      return uVar4;
    }
  } while( true );
}

/* ref: FUN_00a6aeb0 */
uint F_00a6aeb0(unsigned int gen_a0)
{
  GEN_ENTER(0xa6aeb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)this = 1;
  uVar1 = F_00a51200(0x5a,0,0,0,0);
  return uVar1;
}

/* ref: FUN_00a6aed0 */
unsigned int F_00a6aed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa6aed0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte * pbVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  
  if (param_1 < 0x100) {
    iVar2 = (int)(param_1 + ((int)param_1 >> 0x1f & 7U)) >> 3;
    uVar4 = param_1 & 0x80000007;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffff8) + 1;
    }
    bVar3 = '\x01' << ((byte)uVar4 & 0x1f);
    if ((char)param_2 == '\x01') {
      pbVar1 = (byte *)(iVar2 + 4 + (int)this);
      *pbVar1 = *pbVar1 | bVar3;
      return 0;
    }
    pbVar1 = (byte *)(iVar2 + 4 + (int)this);
    *pbVar1 = *pbVar1 & ~bVar3;
  }
  return 0;
}

/* ref: FUN_00a6af20 */
uint F_00a6af20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa6af20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_2;
  puVar3 = in_ecx;
  for (iVar1 = 8; puVar3 = puVar3 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
  }
  *in_ecx = 2;
  return (uint)in_ecx;
}

/* ref: FUN_00a6af40 */
uint F_00a6af40(unsigned int gen_a0)
{
  GEN_ENTER(0xa6af40u, gen_a0, 0u, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  return *in_ecx;
}

/* ref: FUN_00a6af60 */
byte F_00a6af60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa6af60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if (param_1 < 0x100) {
    uVar1 = param_1 & 0x80000007;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffff8) + 1;
    }
    return (*((byte *)GEN_TOP((((int)(param_1 + ((int)param_1 >> 0x1f & 7U)) >> 3) + 4 + (int)this))) &
           (byte)(1 << ((byte)uVar1 & 0x1f))) != 0;
  }
  return 0;
}

/* ref: FUN_00a6afb0 */
uint F_00a6afb0(unsigned int gen_a0)
{
  GEN_ENTER(0xa6afb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)this = 0;
  F_00c48350((undefined *)((int)this + 4),0,0x100);
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined2 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  return 0;
}

/* ref: FUN_00a6b020 */
uint F_00a6b020(unsigned int gen_a0)
{
  GEN_ENTER(0xa6b020u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)this = 1;
  uVar1 = F_00a51200(0x5e,0,0,0,0);
  return uVar1;
}

/* ref: FUN_00a6b040 */
uint F_00a6b040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa6b040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x110) = 1;
  uVar1 = F_00a51200(0x5d,param_1,0,0,0);
  return uVar1;
}

/* ref: FUN_00a6b070 */
uint F_00a6b070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa6b070u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_1;
  puVar3 = this;
  for (iVar1 = 0x40; puVar3 = puVar3 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this + 0x104) = *param_2;
  *(undefined4 *)((int)this + 0x108) = param_2[1];
  *(undefined2 *)((int)this + 0x10c) = *(undefined2 *)(param_2 + 2);
  *(undefined4 *)this = 2;
  return (uint)this;
}

/* ref: FUN_00a6b0b0 */
uint F_00a6b0b0(unsigned int gen_a0)
{
  GEN_ENTER(0xa6b0b0u, gen_a0, 0u, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  return *in_ecx;
}

/* ref: FUN_00a6b0c0 */
byte F_00a6b0c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa6b0c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if (param_1 < 0x800) {
    uVar1 = param_1 & 0x80000007;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffff8) + 1;
    }
    return (*((byte *)GEN_TOP((((int)(param_1 + ((int)param_1 >> 0x1f & 7U)) >> 3) + 4 + (int)this))) &
           (byte)(1 << ((byte)uVar1 & 0x1f))) != 0;
  }
  return 0;
}

/* ref: FUN_00a6b110 */
ushort F_00a6b110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa6b110u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (param_2 < 5) {
    return *(ushort *)(in_ecx + 0x104 + param_2 * 2);
  }
  return 0;
}

/* ref: FUN_00a6b130 */
uint F_00a6b130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa6b130u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)((int)this + 0x114) = param_1;
  *(undefined4 *)((int)this + 0x110) = 2;
  *(undefined4 *)((int)this + 0x118) = param_2;
  *(uint *)((int)this + 0x11c) = param_3;
  return param_3;
}

/* ref: FUN_00a6b160 */
uint F_00a6b160(unsigned int gen_a0)
{
  GEN_ENTER(0xa6b160u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x110);
}

/* ref: FUN_00a6b180 */
uint F_00a6b180(unsigned int gen_a0)
{
  GEN_ENTER(0xa6b180u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x118);
}

/* ref: FUN_00a6b190 */
uint F_00a6b190(unsigned int gen_a0)
{
  GEN_ENTER(0xa6b190u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x11c);
}

/* ref: FUN_00a6b200 */
uint F_00a6b200(unsigned int gen_a0)
{
  GEN_ENTER(0xa6b200u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  uVar3 = *(uint *)((int)this + 0x44);
  if (uVar3 != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x40);
    if (piVar1 != (int *)0x0) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,uVar3);
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x44);
    if (puVar2 != (undefined4 *)0x0) {
      uVar3 = ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x44) = 0;
    }
  }
  *(undefined4 *)((int)this + 0x40) = 0;
  return uVar3;
}

/* ref: FUN_00a6b2b0 */
uint F_00a6b2b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa6b2b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (param_1 < 0x40) {
    this = ((undefined *)GEN_TOP(((param_1 >> 3) + 0xc + (int)this)));
    *(byte *)this = *(byte *)this | '\x01' << ((byte)param_1 & 7);
  }
  return (uint)this;
}

/* ref: FUN_00a6b2e0 */
byte F_00a6b2e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa6b2e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (0x3f < param_1) {
    return 0;
  }
  return (*((byte *)GEN_TOP(((param_1 >> 3) + 0xc + (int)this))) & (byte)(1 << ((byte)param_1 & 7))) != 0;
}

/* ref: FUN_00a6b320 */
uint F_00a6b320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa6b320u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  if ((param_1 < 3) && (param_2 < 0x40)) {
    *(char *)(param_1 + 0x14 + (int)this) = (char)param_2;
  }
  return param_1;
}

/* ref: FUN_00a6b340 */
byte F_00a6b340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa6b340u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (2 < param_2) {
    return 0;
  }
  return *(byte *)(param_2 + 0x14 + in_ecx);
}

/* ref: FUN_00a6b360 */
uint F_00a6b360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa6b360u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 in_EAX = 0;
  uint uVar1;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),(byte)param_1);
  if ((byte)param_1 < 3) {
    uVar1 = (uint)(byte)param_1;
    *(undefined1 *)(uVar1 + 0x32 + (int)this) = (undefined1)param_2;
  }
  return uVar1;
}

/* ref: FUN_00a6b380 */
byte F_00a6b380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa6b380u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((byte)param_2 < 3) {
    return *(byte *)((byte)param_2 + 0x32 + in_ecx);
  }
  return 0;
}

/* ref: FUN_00a6b3a0 */
uint F_00a6b3a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa6b3a0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if ((param_1 < 3) && (param_2 < 0x40)) {
    uVar2 = 0;
    if (param_2 == 0) {
      uVar1 = F_00ab2c00(1);
      if (uVar1 != 0) {
        return *(uint *)(uVar1 + 0x10 + param_1 * 4);
      }
    }
    else {
      uVar1 = F_00ab2c60(param_2);
      if (uVar1 != 0) {
        uVar2 = *(uint *)(uVar1 + 0x14 + param_1 * 4);
      }
    }
    return uVar2;
  }
  return 0;
}

/* ref: FUN_00a6b3f0 */
uint F_00a6b3f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa6b3f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  
  uVar1 = F_00a51200(0xc,param_1 & 0xff,0,0,0);
  return uVar1;
}

/* ref: FUN_00a6b410 */
uint F_00a6b410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa6b410u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a51200(10,param_1,param_2,0,0);
  return uVar1;
}

/* ref: FUN_00a6b470 */
uint F_00a6b470(unsigned int gen_a0)
{
  GEN_ENTER(0xa6b470u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  if ((char)param_1 != '\x01') {
    return 0;
  }
  return 0x1304;
}

/* ref: FUN_00a6b490 */
uint F_00a6b490(unsigned int gen_a0)
{
  GEN_ENTER(0xa6b490u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  if ((char)param_1 != '\x01') {
    return 0;
  }
  return 0x1771;
}

/* ref: FUN_00a6b4b0 */
uint F_00a6b4b0(unsigned int gen_a0)
{
  GEN_ENTER(0xa6b4b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  if ((char)param_1 != '\x01') {
    return 0;
  }
  return 1;
}

/* ref: FUN_00a6b4f0 */
uint F_00a6b4f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa6b4f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = param_1;
  if (param_1 != *(uint *)((int)this + 0x38)) {
    *(uint *)((int)this + 0x38) = param_1;
    *(undefined4 *)((int)this + 0x3c) = 0;
    *(undefined4 *)((int)this + 0x40) = 0;
    uVar1 = F_00b7bbd0((undefined *)((int)this + 0x44));
  }
  return uVar1;
}

/* ref: FUN_00a6b540 */
uint F_00a6b540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa6b540u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  
  uVar3 = F_0042e430((undefined *)((int)this + 0x14),
                       (**(uint * PTR32 *)(*param_1 + 4) & 0xffffff) + (int)*(uint * PTR32 *)(*param_1 + 4));
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x6c);
  if (puVar1 != (undefined4 *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x6c) = 0;
  }
  piVar2 = *(int * PTR32 *)this;
  if (piVar2 != (int *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,7);
  }
  return uVar3;
}

/* ref: FUN_00a6b5a0 */
uint F_00a6b5a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa6b5a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  ushort uVar1;
  int iVar2;
  undefined4 * puVar3;
  byte bVar4;
  uint uVar5;
  char cVar6;
  ushort * puVar7;
  uint local_c;
  char local_5;
  
  local_c = 0;
  if (param_2 != 0) {
    puVar7 = (ushort *)((int)this + 8);
    do {
      iVar2 = *((int *)GEN_TOP((*(int *)(param_1 + local_c * 4) + 4)));
      if (*(int *)(iVar2 + 4) != 0) {
        *(int *)(puVar7 + -2) = *(int *)(iVar2 + 4);
        uVar1 = (&REFG(undefined2, 0x14ab306))[local_c];
        *puVar7 = uVar1;
        local_5 = '\x01';
        uVar5 = F_00ab3080((uint)*(byte *)(iVar2 + 0xd));
        if (uVar5 != 0) {
          cVar6 = '\x01';
          do {
            if (*(ushort *)(uVar5 + 4 + cVar6 * 2) <= uVar1) {
              local_5 = cVar6 + '\x02';
              break;
            }
            cVar6 = cVar6 + -1;
          } while (-1 < cVar6);
        }
        *(char *)(puVar7 + 2) = local_5;
        bVar4 = *(byte *)(iVar2 + 0xc);
        cVar6 = '\0';
        if (0x32 < bVar4) {
          if (bVar4 < 0x7d) {
            if (bVar4 < 0x6f) {
              if (bVar4 < 0x60) {
                cVar6 = '\x02' - (bVar4 < 0x42);
              }
              else {
                cVar6 = '\x03';
              }
            }
            else {
              cVar6 = '\x04';
            }
          }
          else {
            cVar6 = '\x05';
          }
        }
        if (0x32 < bVar4) {
          bVar4 = 0x32;
        }
        *(char *)((int)puVar7 + 3) = cVar6;
        *(byte *)(puVar7 + 1) = bVar4;
      }
      local_c = local_c + 1;
      puVar7 = puVar7 + 6;
    } while (local_c < param_2);
  }
  puVar3 = *(undefined4 * PTR32 *)((int)this + 0x4c);
  if (puVar3 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
    *(undefined4 *)((int)this + 0x4c) = 0;
  }
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 4))))(*(int * PTR32 *)this,8);
  return uVar5;
}

/* ref: FUN_00a6b6c0 */
byte F_00a6b6c0(unsigned int gen_a0)
{
  GEN_ENTER(0xa6b6c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(char *)(param_1 + 0xa0) == '\x11';
}

/* ref: FUN_00a6b6e0 */
byte F_00a6b6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa6b6e0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  char cVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  ushort uVar5;
  
  uVar4 = F_00ab21a0((uint)*(byte *)(param_1 + 100));
  if (uVar4 == 0) {
    return (ushort)param_2 == 0;
  }
  cVar1 = *(char *)(uVar4 + 0x3e);
  uVar4 = F_00ab21a0(0x12);
  if (((uVar4 != 0) && (cVar2 = *(char *)(uVar4 + 0x43), -1 < cVar2)) && (cVar2 < '\x13')) {
    uVar5 = *(ushort *)(param_1 + 0x66 + cVar2 * 2);
    if (cVar1 == *(char *)(uVar4 + 0x3e)) {
      uVar3 = *(ushort *)(param_1 + 0xd8);
      if ((uVar3 != 0) && (uVar3 < uVar5)) {
        uVar5 = uVar3;
      }
    }
    return (ushort)param_2 <= uVar5;
  }
  return (ushort)param_2 == 0;
}

