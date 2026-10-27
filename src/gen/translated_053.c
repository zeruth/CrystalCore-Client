#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_006c3a70 */
byte F_006c3a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c3a70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  piVar2 = (int *)((int)this + 0x37c);
  do {
    if (*piVar2 == *(int *)(param_1 + 0x80)) goto LAB_006c3a97;
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 0xc;
  } while (uVar1 < 8);
  uVar1 = 0xff;
LAB_006c3a97: ;
  return (byte)uVar1;
}

/* ref: FUN_006c3aa0 */
uint F_006c3aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c3aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  ushort uVar1;
  uint uVar2;
  uint * puVar3;
  
  uVar2 = param_1;
  if ((param_1 < 3) &&
     (uVar1 = *(ushort *)((int)this + param_1 * 2 + 0x4ec), uVar2 = (uint)uVar1, uVar1 != 0)) {
    puVar3 = (uint *)F_00ab33c0(uVar2);
    uVar2 = 0;
    if (puVar3 != (uint *)0x0) {
      uVar2 = F_0042e430((undefined *)((int)this + 0x23c),(*puVar3 & 0xffffff) + (int)puVar3);
    }
  }
  return uVar2;
}

/* ref: FUN_006c3af0 */
uint F_006c3af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c3af0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  puVar1 = (uint *)F_00ab33c0(param_1);
  uVar2 = 0;
  if (puVar1 != (uint *)0x0) {
    uVar2 = F_0042e430((undefined *)((int)this + 0x290),(*puVar1 & 0xffffff) + (int)puVar1);
  }
  return uVar2;
}

/* ref: FUN_006c3b30 */
uint F_006c3b30(unsigned int gen_a0)
{
  GEN_ENTER(0x6c3b30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_0042a990((int)this + 0x16c);
  uVar1 = F_00a024d0(*(undefined * PTR32 *)((int)this + 0xf8),"OnInitialize",uVar1,uVar2);
  if (*(int *)((int)this + 0x4e8) == 10) {
    uVar1 = CONCAT31((int3)(uVar1 >> 8),1);
    if (*(char *)((int)this + 0x4f6) == '\x01') {
      *(undefined1 *)((int)this + 0x511) = 1;
      return uVar1;
    }
    *(undefined1 *)((int)this + 0x510) = 1;
  }
  return uVar1;
}

/* ref: FUN_006c3b90 */
uint F_006c3b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c3b90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + (uint)(byte)param_1 * 0x30 + 0x364) == 3) {
    uVar1 = *(uint *)((int)this + (uint)(byte)param_1 * 0x30 + 0x368);
  }
  return uVar1;
}

/* ref: FUN_006c3bc0 */
uint F_006c3bc0(unsigned int gen_a0)
{
  GEN_ENTER(0x6c3bc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  undefined * puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0xf8);
  uVar2 = F_00b9a750(*(undefined4 *)((int)this_00 + 8));
  uVar3 = F_0042a990((int)this + 0x118);
  puVar1 = REFG(undefined * PTR32, 0x1323758);
  F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar3);
  F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
  uVar4 = F_00b9a940(*(undefined4 *)((int)this_00 + 8),0xffffffff);
  if (uVar4 != 0) {
    uVar2 = F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
    return uVar2;
  }
  F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
  F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar3);
  F_00b9b150(*(undefined4 *)((int)this_00 + 8),0,0);
  iVar5 = uVar2 + 2;
  F_00a01c40(this_00,iVar5,"className",uVar3);
  F_00a01c80(this_00,iVar5,"referenceCount",0);
  if (puVar1 == (undefined *)0x0) {
    F_00b9bc00(*(undefined4 *)((int)this_00 + 8),uVar3);
    F_00b9a910(*(undefined4 *)((int)this_00 + 8),iVar5);
    F_00b9b290(*(undefined4 *)((int)this_00 + 8),0xfffffffe,"__index");
    F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
    uVar2 = F_00b9b2f0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
    return uVar2;
  }
  F_00b9bc00(*(undefined4 *)((int)this_00 + 8),uVar3);
  F_00b9a910(*(undefined4 *)((int)this_00 + 8),iVar5);
  F_00b9b290(*(undefined4 *)((int)this_00 + 8),0xfffffffe,"__index");
  F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
  F_00b9ae60(*(undefined4 *)((int)this_00 + 8),puVar1);
  F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
  F_00b9b290(*(undefined4 *)((int)this_00 + 8),iVar5,"__index");
  F_00b9a910(*(undefined4 *)((int)this_00 + 8),iVar5);
  F_00b9b3d0(*(undefined4 *)((int)this_00 + 8),iVar5);
  F_00b9b2f0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
  uVar2 = F_00a01ad0(this_00,puVar1);
  return uVar2;
}

/* ref: FUN_006c3d50 */
uint F_006c3d50(unsigned int gen_a0)
{
  GEN_ENTER(0x6c3d50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  undefined * puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0xf8);
  uVar2 = F_00b9a750(*(undefined4 *)((int)this_00 + 8));
  uVar3 = F_0042a990((int)this + 0x118);
  puVar1 = REFG(undefined * PTR32, 0x1323760);
  F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar3);
  F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
  uVar4 = F_00b9a940(*(undefined4 *)((int)this_00 + 8),0xffffffff);
  if (uVar4 != 0) {
    uVar2 = F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
    return uVar2;
  }
  F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
  F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar3);
  F_00b9b150(*(undefined4 *)((int)this_00 + 8),0,0);
  iVar5 = uVar2 + 2;
  F_00a01c40(this_00,iVar5,"className",uVar3);
  F_00a01c80(this_00,iVar5,"referenceCount",0);
  if (puVar1 == (undefined *)0x0) {
    F_00b9bc00(*(undefined4 *)((int)this_00 + 8),uVar3);
    F_00b9a910(*(undefined4 *)((int)this_00 + 8),iVar5);
    F_00b9b290(*(undefined4 *)((int)this_00 + 8),0xfffffffe,"__index");
    F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
    uVar2 = F_00b9b2f0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
    return uVar2;
  }
  F_00b9bc00(*(undefined4 *)((int)this_00 + 8),uVar3);
  F_00b9a910(*(undefined4 *)((int)this_00 + 8),iVar5);
  F_00b9b290(*(undefined4 *)((int)this_00 + 8),0xfffffffe,"__index");
  F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
  F_00b9ae60(*(undefined4 *)((int)this_00 + 8),puVar1);
  F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
  F_00b9b290(*(undefined4 *)((int)this_00 + 8),iVar5,"__index");
  F_00b9a910(*(undefined4 *)((int)this_00 + 8),iVar5);
  F_00b9b3d0(*(undefined4 *)((int)this_00 + 8),iVar5);
  F_00b9b2f0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
  uVar2 = F_00a01ad0(this_00,puVar1);
  return uVar2;
}

/* ref: Client::Game::Event::TestDirector::vf110 */
uint F_006c3f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c3f10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_0042ccf0(param_1,this + 0x118);
  return uVar1;
}

/* ref: FUN_006c3f30 */
uint F_006c3f30(unsigned int gen_a0)
{
  GEN_ENTER(0x6c3f30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  undefined * puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0xf8);
  uVar2 = F_00b9a750(*(undefined4 *)((int)this_00 + 8));
  uVar3 = F_0042a990((int)this + 0x118);
  puVar1 = REFG(undefined * PTR32, 0x1323768);
  F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar3);
  F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
  uVar4 = F_00b9a940(*(undefined4 *)((int)this_00 + 8),0xffffffff);
  if (uVar4 != 0) {
    uVar2 = F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
    return uVar2;
  }
  F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
  F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar3);
  F_00b9b150(*(undefined4 *)((int)this_00 + 8),0,0);
  iVar5 = uVar2 + 2;
  F_00a01c40(this_00,iVar5,"className",uVar3);
  F_00a01c80(this_00,iVar5,"referenceCount",0);
  if (puVar1 == (undefined *)0x0) {
    F_00b9bc00(*(undefined4 *)((int)this_00 + 8),uVar3);
    F_00b9a910(*(undefined4 *)((int)this_00 + 8),iVar5);
    F_00b9b290(*(undefined4 *)((int)this_00 + 8),0xfffffffe,"__index");
    F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
    uVar2 = F_00b9b2f0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
    return uVar2;
  }
  F_00b9bc00(*(undefined4 *)((int)this_00 + 8),uVar3);
  F_00b9a910(*(undefined4 *)((int)this_00 + 8),iVar5);
  F_00b9b290(*(undefined4 *)((int)this_00 + 8),0xfffffffe,"__index");
  F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
  F_00b9ae60(*(undefined4 *)((int)this_00 + 8),puVar1);
  F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
  F_00b9b290(*(undefined4 *)((int)this_00 + 8),iVar5,"__index");
  F_00b9a910(*(undefined4 *)((int)this_00 + 8),iVar5);
  F_00b9b3d0(*(undefined4 *)((int)this_00 + 8),iVar5);
  F_00b9b2f0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
  uVar2 = F_00a01ad0(this_00,puVar1);
  return uVar2;
}

/* ref: FUN_006c40c0 */
uint F_006c40c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6c40c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  
  uVar1 = F_00ab3330(param_1 & 0xffff);
  return uVar1;
}

/* ref: FUN_006c40e0 */
uint F_006c40e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6c40e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00ab2260(param_1);
  return uVar1;
}

/* ref: FUN_006c40f0 */
byte F_006c40f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6c40f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  undefined4 uVar2;
  
  switch((unsigned int)(uintptr_t)((undefined1)param_1)) {
  case 1: ;
    uVar2 = 0x22;
    break;
  case 2: ;
    uVar2 = 0x21;
    break;
  case 3: ;
    uVar2 = 0x20;
    break;
  case 4: ;
    uVar2 = 0x1f;
    break;
  case 5: ;
    uVar2 = 0x1e;
    break;
  default: ;
    goto switchD_006c40fd_default;
  }
  uVar1 = F_00ab3300(uVar2);
  if (uVar1 != 0) {
    return *(byte *)(uVar1 + 4);
  }
switchD_006c40fd_default: ;
  return 0;
}

/* ref: FUN_006c4140 */
uint F_006c4140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c4140u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  bool bVar1;
  
  if (param_1 == 0x10) {
    bVar1 = (char)param_2 == '\x01';
  }
  else {
    if (param_1 != 0x11) {
      if (param_1 != 0x12) {
        return 0;
      }
      if ((char)param_2 != '\x03') {
        return 0;
      }
      return 1;
    }
    bVar1 = (char)param_2 == '\x02';
  }
  if (!bVar1) {
    return 0;
  }
  return 1;
}

/* ref: FUN_006c41b0 */
float10 F_006c41b0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6c41b0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  uint param_1 = (uint)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  uVar1 = F_00ab2260(param_1 & 0xffff);
  if (uVar1 != 0) {
    iVar2 = (uint)*(byte *)(uVar1 + 0x20) * (uint)*(ushort *)(uVar1 + 0x1a);
  }
  return (float10)(float)((float10)iVar2 * (float10)param_2);
}

/* ref: FUN_006c41f0 */
float10 F_006c41f0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6c41f0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  uint param_1 = (uint)gen_a0;
  float param_2 = (float)gen_a1;
  ushort * puVar1;
  
  puVar1 = (ushort *)F_00ab2fc0(param_1 & 0xffff);
  return (float10)(float)((float10)*puVar1 * (float10)param_2);
}

/* ref: FUN_006c4220 */
ushort F_006c4220(unsigned int gen_a0)
{
  GEN_ENTER(0x6c4220u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  short sVar1;
  
  sVar1 = *(short *)(in_ecx + 0xe);
  if (sVar1 == 1) {
    return 0xf025;
  }
  if (sVar1 != 2) {
    if (sVar1 != 3) {
      return 0;
    }
    return 0xf027;
  }
  return 0xf026;
}

/* ref: FUN_006c4250 */
uint F_006c4250(unsigned int gen_a0)
{
  GEN_ENTER(0x6c4250u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint * puVar1;
  
  puVar1 = (uint *)F_00ab3480(param_1);
  return (*puVar1 & 0xffffff) + (int)puVar1;
}

/* ref: FUN_006c4270 */
uint F_006c4270(unsigned int gen_a0)
{
  GEN_ENTER(0x6c4270u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint * puVar1;
  
  puVar1 = (uint *)F_00ab21d0(param_1);
  if (puVar1 != (uint *)0x0) {
    return (*puVar1 & 0xffffff) + (int)puVar1;
  }
  return 0;
}

/* ref: FUN_006c42a0 */
uint F_006c42a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6c42a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * puVar1;
  uint uVar2;
  int iVar3;
  
  *(undefined4 *)this = 0;
  iVar3 = 4;
  puVar1 = this;
  do {
    F_0042aca0(puVar1 + 8);
    uVar2 = F_00a35f30(puVar1 + 0x60);
    puVar1[0xa8] = 0;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + 0xa8;
  } while (iVar3 != 0);
  *(undefined4 *)((int)this + 0x2a8) = 0;
  return uVar2;
}

/* ref: FUN_006c42f0 */
uint F_006c42f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c42f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = F_00a4ffd0();
  uVar2 = 0;
  iVar3 = uVar1 + 0x1684;
  do {
    if (*(short *)(iVar3 + 4) == (short)param_1) {
      *param_2 = iVar3;
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    iVar3 = iVar3 + 0x10;
  } while ((int)uVar2 < 0x10);
  return 0xffffffff;
}

/* ref: FUN_006c4360 */
uint F_006c4360(unsigned int gen_a0)
{
  GEN_ENTER(0x6c4360u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(ushort *)(param_1 + 8) & 7;
}

/* ref: FUN_006c4370 */
uint F_006c4370(unsigned int gen_a0)
{
  GEN_ENTER(0x6c4370u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (uint)((*(byte *)(param_1 + 8) & 8) != 0);
}

/* ref: FUN_006c4390 */
uint F_006c4390(unsigned int gen_a0)
{
  GEN_ENTER(0x6c4390u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (uint)((*(byte *)(param_1 + 8) & 0x20) != 0);
}

/* ref: FUN_006c43b0 */
uint F_006c43b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6c43b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (uint)((*(byte *)(param_1 + 8) & 0x40) != 0);
}

/* ref: FUN_006c43d0 */
uint F_006c43d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6c43d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(ushort *)(param_1 + 8) & 7;
}

/* ref: FUN_006c43e0 */
uint F_006c43e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6c43e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(ushort *)(param_1 + 8) >> 5 & 7;
}

/* ref: FUN_006c4400 */
uint F_006c4400(unsigned int gen_a0)
{
  GEN_ENTER(0x6c4400u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(ushort *)(param_1 + 8) >> 7 & 7;
}

/* ref: FUN_006c4420 */
uint F_006c4420(unsigned int gen_a0)
{
  GEN_ENTER(0x6c4420u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(ushort *)(param_1 + 8) >> 7 & 0xf;
}

/* ref: FUN_006c4440 */
uint F_006c4440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c4440u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * this;
  short sVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint * puVar9;
  
  piVar5 = param_1;
  uVar6 = F_0042a990(param_1 + 0xe);
  F_005a2710((undefined *)((int)param_2 + 8),6);
  *(uint *)((int)param_2 + 0xc) = uVar6;
  uVar6 = F_0042a990(param_1 + 0x27);
  F_005a2710(param_2,6);
  *(uint *)((int)param_2 + 4) = uVar6;
  iVar3 = param_1[0x25];
  F_005a2710((undefined *)((int)param_2 + 600),4);
  *(int *)((int)param_2 + 0x25c) = iVar3;
  iVar3 = param_1[0x26];
  F_005a2710((undefined *)((int)param_2 + 0x260),4);
  *(int *)((int)param_2 + 0x264) = iVar3;
  iVar3 = param_1[0x24];
  F_005a2710((undefined *)((int)param_2 + 0x2a0),4);
  *(int *)((int)param_2 + 0x2a4) = iVar3;
  iVar3 = param_1[0x23];
  F_005a2710((undefined *)((int)param_2 + 0x290),4);
  *(int *)((int)param_2 + 0x294) = iVar3;
  F_005a2710((undefined *)((int)param_2 + 0x298),4);
  *(undefined4 *)((int)param_2 + 0x29c) = 0xefee;
  F_00424750(REFG(undefined4, 0x137104c));
  iVar3 = *param_1;
  if (iVar3 != 0) {
    F_005a2710((undefined *)((int)param_2 + 0x18),4);
    *(undefined4 *)((int)param_2 + 0x1c) = 2;
    F_005a2710((undefined *)((int)param_2 + 0x40),4);
    *(undefined4 *)((int)param_2 + 0x44) = 0;
    F_005a2710((undefined *)((int)param_2 + 0x68),4);
    *(undefined4 *)((int)param_2 + 0x6c) = 0xf01f;
    iVar4 = *param_1;
    F_005a2710((undefined *)((int)param_2 + 0xb8),4);
    *(int *)((int)param_2 + 0xbc) = iVar4;
    uVar6 = F_0042a990(&REFG(undefined, 0x1489e08));
    F_005a2710((undefined *)((int)param_2 + 0xe0),6);
    *(uint *)((int)param_2 + 0xe4) = uVar6;
  }
  uVar6 = (uint)(iVar3 != 0);
  if (param_1[1] != 0) {
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0x18),4);
    *(undefined4 *)((int)param_2 + uVar6 * 8 + 0x1c) = 2;
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0x40),4);
    *(undefined4 *)((int)param_2 + uVar6 * 8 + 0x44) = 0;
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0x68),4);
    *(undefined4 *)((int)param_2 + uVar6 * 8 + 0x6c) = 0xf020;
    iVar3 = param_1[1];
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0xb8),4);
    *(int *)((int)param_2 + uVar6 * 8 + 0xbc) = iVar3;
    uVar7 = F_0042a990(&REFG(undefined, 0x1489e60));
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0xe0),6);
    *(uint *)((int)param_2 + uVar6 * 8 + 0xe4) = uVar7;
    uVar6 = uVar6 + 1;
  }
  if ((param_1[5] != 0) && (param_1[6] != 0)) {
    uVar7 = F_00ab24a0(param_1[5]);
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0x18),4);
    *(undefined4 *)((int)param_2 + uVar6 * 8 + 0x1c) = 2;
    iVar3 = param_1[5];
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0x40),4);
    *(int *)((int)param_2 + uVar6 * 8 + 0x44) = iVar3;
    uVar8 = F_00ab65a0(param_1[5],uVar7);
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0x68),4);
    *(uint *)((int)param_2 + uVar6 * 8 + 0x6c) = uVar8;
    iVar3 = param_1[6];
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0xb8),4);
    *(int *)((int)param_2 + uVar6 * 8 + 0xbc) = iVar3;
    uVar7 = F_00ab6240(param_1[5],0,uVar7);
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0xe0),6);
    *(uint *)((int)param_2 + uVar6 * 8 + 0xe4) = uVar7;
    uVar6 = uVar6 + 1;
  }
  if ((short)param_1[4] != 0) {
    puVar9 = (uint *)F_00ab3570((uint)*(ushort *)((int)param_1 + 0xe));
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0x18),4);
    *(undefined4 *)((int)param_2 + uVar6 * 8 + 0x1c) = 2;
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0x40),4);
    *(undefined4 *)((int)param_2 + uVar6 * 8 + 0x44) = 0;
    sVar1 = *(short *)((int)param_1 + 0xe);
    if (sVar1 == 1) {
      param_1 = (int *)0xf025;
    }
    else if (sVar1 == 2) {
      param_1 = (int *)0xf026;
    }
    else if (sVar1 == 3) {
      param_1 = (int *)0xf027;
    }
    else {
      param_1 = (int *)0x0;
    }
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0x68),4);
    *(int * PTR32 *)((int)param_2 + uVar6 * 8 + 0x6c) = param_1;
    uVar2 = *(ushort *)(piVar5 + 4);
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0xb8),4);
    *(uint *)((int)param_2 + uVar6 * 8 + 0xbc) = (uint)uVar2;
    uVar7 = *puVar9;
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0xe0),6);
    *(uint *)((int)param_2 + uVar6 * 8 + 0xe4) = (uVar7 & 0xffffff) + (int)puVar9;
    uVar6 = uVar6 + 1;
  }
  if ((piVar5[2] != 0) && ((short)piVar5[3] != 0)) {
    uVar7 = F_00ab24a0(piVar5[2]);
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0x18),4);
    *(undefined4 *)((int)param_2 + uVar6 * 8 + 0x1c) = 0x81;
    iVar3 = piVar5[2];
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0x40),4);
    *(int *)((int)param_2 + uVar6 * 8 + 0x44) = iVar3;
    uVar8 = F_00ab65a0(piVar5[2],uVar7);
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0x68),4);
    *(uint *)((int)param_2 + uVar6 * 8 + 0x6c) = uVar8;
    uVar2 = *(ushort *)(piVar5 + 3);
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0xb8),4);
    *(uint *)((int)param_2 + uVar6 * 8 + 0xbc) = (uint)uVar2;
    uVar7 = F_00ab6240(piVar5[2],0,uVar7);
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0xe0),6);
    *(uint *)((int)param_2 + uVar6 * 8 + 0xe4) = uVar7;
    uVar6 = uVar6 + 1;
  }
  F_005a2710((undefined *)((int)param_2 + 0x10),4);
  *(uint *)((int)param_2 + 0x14) = uVar6;
  iVar3 = piVar5[7];
  if (iVar3 != 0) {
    F_005a2710((undefined *)((int)param_2 + 0x1b8),4);
    *(undefined4 *)((int)param_2 + 0x1bc) = 2;
    F_005a2710((undefined *)((int)param_2 + 0x1d8),4);
    *(undefined4 *)((int)param_2 + 0x1dc) = 0;
    F_005a2710((undefined *)((int)param_2 + 0x218),4);
    *(undefined4 *)((int)param_2 + 0x21c) = 0xf01f;
    iVar4 = piVar5[7];
    F_005a2710((undefined *)((int)param_2 + 0x238),4);
    *(int *)((int)param_2 + 0x23c) = iVar4;
    uVar6 = F_0042a990(&REFG(undefined, 0x1489e08));
    F_005a2710((undefined *)((int)param_2 + 0x1f8),6);
    *(uint *)((int)param_2 + 0x1fc) = uVar6;
  }
  uVar6 = (uint)(iVar3 != 0);
  if (piVar5[8] != 0) {
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0x1b8),4);
    *(undefined4 *)((int)param_2 + uVar6 * 8 + 0x1bc) = 2;
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0x1d8),4);
    *(undefined4 *)((int)param_2 + uVar6 * 8 + 0x1dc) = 0;
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0x218),4);
    *(undefined4 *)((int)param_2 + uVar6 * 8 + 0x21c) = 0xf020;
    iVar3 = piVar5[8];
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0x238),4);
    *(int *)((int)param_2 + uVar6 * 8 + 0x23c) = iVar3;
    uVar7 = F_0042a990(&REFG(undefined, 0x1489e60));
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0x1f8),6);
    *(uint *)((int)param_2 + uVar6 * 8 + 0x1fc) = uVar7;
    uVar6 = uVar6 + 1;
  }
  if (piVar5[0xc] != 0) {
    uVar7 = F_00ab24a0(piVar5[5]);
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0x1b8),4);
    *(undefined4 *)((int)param_2 + uVar6 * 8 + 0x1bc) = 2;
    iVar3 = piVar5[5];
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0x1d8),4);
    *(int *)((int)param_2 + uVar6 * 8 + 0x1dc) = iVar3;
    uVar8 = F_00ab65a0(piVar5[5],uVar7);
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0x218),4);
    *(uint *)((int)param_2 + uVar6 * 8 + 0x21c) = uVar8;
    iVar3 = piVar5[0xc];
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0x238),4);
    *(int *)((int)param_2 + uVar6 * 8 + 0x23c) = iVar3;
    uVar7 = F_00ab6240(piVar5[5],0,uVar7);
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0x1f8),6);
    *(uint *)((int)param_2 + uVar6 * 8 + 0x1fc) = uVar7;
    uVar6 = uVar6 + 1;
  }
  if (*(short *)((int)piVar5 + 0x2a) != 0) {
    puVar9 = (uint *)F_00ab3570((uint)*(ushort *)((int)piVar5 + 0xe));
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0x1b8),4);
    *(undefined4 *)((int)param_2 + uVar6 * 8 + 0x1bc) = 2;
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0x1d8),4);
    *(undefined4 *)((int)param_2 + uVar6 * 8 + 0x1dc) = 0;
    sVar1 = *(short *)((int)piVar5 + 0xe);
    if (sVar1 == 1) {
      param_1 = (int *)0xf025;
    }
    else if (sVar1 == 2) {
      param_1 = (int *)0xf026;
    }
    else if (sVar1 == 3) {
      param_1 = (int *)0xf027;
    }
    else {
      param_1 = (int *)0x0;
    }
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0x218),4);
    *(int * PTR32 *)((int)param_2 + uVar6 * 8 + 0x21c) = param_1;
    uVar2 = *(ushort *)((int)piVar5 + 0x2a);
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0x238),4);
    *(uint *)((int)param_2 + uVar6 * 8 + 0x23c) = (uint)uVar2;
    uVar7 = *puVar9;
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0x1f8),6);
    *(uint *)((int)param_2 + uVar6 * 8 + 0x1fc) = (uVar7 & 0xffffff) + (int)puVar9;
    uVar6 = uVar6 + 1;
  }
  if ((piVar5[9] != 0) && ((short)piVar5[10] != 0)) {
    uVar7 = F_00ab24a0(piVar5[9]);
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0x1b8),4);
    *(undefined4 *)((int)param_2 + uVar6 * 8 + 0x1bc) = 0x81;
    iVar3 = piVar5[9];
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0x1d8),4);
    *(int *)((int)param_2 + uVar6 * 8 + 0x1dc) = iVar3;
    uVar8 = F_00ab65a0(piVar5[9],uVar7);
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0x218),4);
    *(uint *)((int)param_2 + uVar6 * 8 + 0x21c) = uVar8;
    uVar2 = *(ushort *)(piVar5 + 10);
    F_005a2710((undefined *)((int)param_2 + uVar6 * 8 + 0x238),4);
    *(uint *)((int)param_2 + uVar6 * 8 + 0x23c) = (uint)uVar2;
    uVar7 = F_00ab6240(piVar5[9],0,uVar7);
    this = (undefined *)((int)param_2 + uVar6 * 8 + 0x1f8);
    F_005a2710(this,6);
    *(uint *)((int)this + 4) = uVar7;
    uVar6 = uVar6 + 1;
  }
  uVar7 = F_005a2710((undefined *)((int)param_2 + 0x268),4);
  *(uint *)((int)param_2 + 0x26c) = uVar6;
  return uVar7;
}

/* ref: Client::Game::Event::OpeningEventHandler::vf131 */
uint F_006c4c20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6c4c20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  if (((char)param_3 != '\n') && ((char)param_3 != '\v')) {
    return 0;
  }
  return 1;
}

/* ref: Client::Game::Event::ExitRangeEventHandler::vf46 */
uint F_006c4c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6c4c60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_00ab5b10(&REFG(undefined4, 0x14bcc80),2);
  return uVar1;
}

/* ref: Client::Game::Event::ExitRangeEventHandler::vf131 */
byte F_006c4c70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6c4c70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 1;
}

/* ref: FUN_006c4c80 */
byte F_006c4c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c4c80u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = F_00ab1c90(param_2 & 0xffff);
  if (uVar1 == 0) {
    return 0;
  }
  if ((*(char *)(uVar1 + 0x2e) == '\0') && (*(char *)(param_1 + 0x2e08) != '\0')) {
    return 1;
  }
  return *(int *)(param_1 + 0xe4) != 0;
}

/* ref: Client::Game::Event::ChocoboTaxiStandEventHandler::vf128 */
uint F_006c4cd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6c4cd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0xeb97;
}

/* ref: Client::Game::Event::ChocoboTaxiStandEventHandler::vf112 */
uint F_006c4ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c4ce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (((&REFG(undefined, 0x14b4f0c))[(int)(**(ushort * PTR32 *)(this + 0x1d4) >> 3)] &
      (byte)(1 << ((byte)**(ushort * PTR32 *)(this + 0x1d4) & 7))) == 0) {
    uVar1 = F_00a68310(&REFG(undefined1, 0x14ab070),1);
    if (9 < (ushort)uVar1) {
      return 0xeabb;
    }
  }
  return 0;
}

/* ref: FUN_006c4d40 */
uint F_006c4d40(unsigned int gen_a0)
{
  GEN_ENTER(0x6c4d40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00ab3e50(param_1);
  if (uVar1 != 0) {
    return (uint)*(ushort *)(uVar1 + 0xc);
  }
  return 0;
}

/* ref: Client::Game::Event::Director::vf131 */
byte F_006c4d80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6c4d80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  if ((0xb < (byte)param_3) && (((byte)param_3 < 0xf || ((byte)param_3 == 0x11)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_006c4da0 */
uint F_006c4da0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6c4da0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int iVar2;
  undefined4 * puVar3;
  uint * puVar4;
  uint uVar5;
  byte * pbVar6;
  byte * pbVar7;
  bool bVar8;
  
  cVar1 = *((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1dc)));
  (*(undefined4 *)(gen_frame + 0x7)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x7)), 1, 3),cVar1);
  if (cVar1 != (char)(*(undefined4 *)&gen_args[1])) {
    *((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1dc))) = (char)(*(undefined4 *)&gen_args[1]);
  }
  bVar8 = *((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1dd))) != (char)(*(undefined4 *)&gen_args[2]);
  if (bVar8) {
    *((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1dd))) = (char)(*(undefined4 *)&gen_args[2]);
  }
  (*(undefined4 *)&gen_args[2]) = 10;
  puVar4 = &(*(uint *)&gen_args[4]);
  if (9 < (*(uint *)&gen_args[4])) {
    puVar4 = &(*(undefined4 *)&gen_args[2]);
  }
  pbVar7 = ((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1de)));
  pbVar6 = (*(byte * PTR32 *)&gen_args[3]);
  for (uVar5 = *puVar4; 3 < uVar5; uVar5 = uVar5 - 4) {
    puVar4 = *(uint * PTR32 *)pbVar7;
    if (puVar4 != *(uint * PTR32 *)pbVar6) goto LAB_006c4e19;
    pbVar6 = pbVar6 + 4;
    pbVar7 = pbVar7 + 4;
  }
  if (uVar5 != 0) {
LAB_006c4e19: ;
    iVar2 = (uint)*pbVar7 - (uint)*pbVar6;
    if (iVar2 == 0) {
      puVar4 = (uint *)0x0;
      if (uVar5 < 2) goto LAB_006c4e87;
      iVar2 = (uint)pbVar7[1] - (uint)pbVar6[1];
      if (iVar2 == 0) {
        puVar4 = (uint *)0x0;
        if (uVar5 < 3) goto LAB_006c4e87;
        iVar2 = (uint)pbVar7[2] - (uint)pbVar6[2];
        if (iVar2 == 0) {
          puVar4 = (uint *)0x0;
          if (uVar5 < 4) goto LAB_006c4e87;
          iVar2 = (uint)pbVar7[3] - (uint)pbVar6[3];
        }
      }
    }
    puVar4 = (uint *)0x0;
    if ((iVar2 >> 0x1f | 1U) != 0) {
      (*(undefined4 *)&gen_args[2]) = 10;
      puVar3 = &(*(uint *)&gen_args[4]);
      if (9 < (*(uint *)&gen_args[4])) {
        puVar3 = &(*(undefined4 *)&gen_args[2]);
      }
      F_00c46aa0((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1de,(*(byte * PTR32 *)&gen_args[3]),*puVar3);
      goto LAB_006c4e8d;
    }
  }
LAB_006c4e87: ;
  if (!bVar8 && cVar1 == (char)(*(undefined4 *)&gen_args[1])) {
    return (uint)puVar4;
  }
LAB_006c4e8d: ;
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x268))))((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)(gen_frame + 0x7)),(*(undefined4 *)&gen_args[1]));
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x26c))))((*(undefined * PTR32 *)&gen_args[0]));
  if ((REFG(int, 0x14b119c) != 0) && (REFG(char, 0x14b11f5) != '\0')) {
    F_00a69750(&REFG(int, 0x14b119c));
  }
  return uVar5;
}

/* ref: Client::Game::Event::Director::vf154 */
uint F_006c4ee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6c4ee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar1 = param_2 & 0xff;
  uVar3 = param_1 & 0xff;
  uVar4 = 0;
  uVar2 = F_0042a990(this + 0x16c);
  uVar1 = F_00a02640(*(undefined * PTR32 *)(this + 0xf8),"OnSequence",uVar2,uVar3,uVar1,uVar4);
  return uVar1;
}

/* ref: Client::Game::Event::Director::vf155 */
uint F_006c4f20(unsigned int gen_a0)
{
  GEN_ENTER(0x6c4f20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_0042a990(this + 0x16c);
  uVar1 = F_00a024d0(*(undefined * PTR32 *)(this + 0xf8),"OnSynchronize",uVar1,uVar2);
  return uVar1;
}

/* ref: FUN_006c4f50 */
uint F_006c4f50(unsigned int gen_a0)
{
  GEN_ENTER(0x6c4f50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x308) = 0;
  *(undefined4 *)(in_ecx + 0x30c) = 0;
  return 0;
}

/* ref: Client::Game::Event::Director::vf35 */
uint F_006c4f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6c4f60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  
  uVar2 = (uint)*((ushort *)GEN_TOP((*(int *)(*param_1 + 4) + 0x1c)));
  puVar1 = *(undefined4 * PTR32 *)(this + 0x6c);
  *(uint *)(this + 0x30c) = uVar2;
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)(this + 0x6c) = 0;
  }
  *(undefined4 *)(this + 0x70) = 0;
  return uVar2;
}

/* ref: Client::Game::Event::Director::vf143 */
uint F_006c4fa0(unsigned int gen_a0)
{
  GEN_ENTER(0x6c4fa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x1379694);
  if ((REFG(undefined4, 0x1379694) != 0) && (*(int *)(REFG(undefined4, 0x1379694) + 0xe4) == **(int * PTR32 *)(this + 0x1d4))) {
    F_00a79840(&REFG(undefined4, 0x14b119c),this);
    uVar1 = F_00a84350(&REFG(undefined, 0x14b1258),this);
  }
  REFG(undefined4, 0x14b0ee0) = 1;
  return uVar1;
}

/* ref: FUN_006c4fe0 */
ulonglong F_006c4fe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6c4fe0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int iVar2;
  
  iVar1 = *(uint *)((int)this + 0x2f0) - param_1;
  iVar2 = (*(int *)((int)this + 0x2f4) - param_2) - (uint)(*(uint *)((int)this + 0x2f0) < param_1);
  if ((iVar2 < 1) && (iVar2 < 0)) {
    iVar1 = 0;
    iVar2 = 0;
  }
  return CONCAT44(iVar2,iVar1);
}

/* ref: Client::Game::Event::QuestBattleDirector::vf17 */
byte F_006c5010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c5010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: Client::Game::Event::QuestBattleDirector::vf29 */
uint F_006c5020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6c5020u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  uint uVar2;
  
  if (((char)param_1 == '\0') && ((char)param_3 == '\x02')) {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    *(undefined4 *)(this + 0x2ec) = 0;
    *(uint *)(this + 0x2f4) = (uint)CARRY4(uVar2,uVar1);
    *(uint *)(this + 0x2e8) = uVar1;
    *(uint *)(this + 0x2f0) = uVar2 + uVar1;
  }
  uVar2 = F_006bd3a0((undefined *)this,param_1,param_2,param_3);
  return uVar2;
}

/* ref: FUN_006c5070 */
uint F_006c5070(unsigned int gen_a0)
{
  GEN_ENTER(0x6c5070u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  
  F_00a01860(((undefined1 *)(gen_frame + 0xc)),param_1);
  F_00ab6b60();
  F_00a01890(((undefined1 *)(gen_frame + 0xc)));
  return 0;
}

/* ref: FUN_006c50b0 */
uint F_006c50b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6c50b0u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_eax = (int *)(uintptr_t)gen_a0;
  int * in_edx = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  if (*param_3 < *in_eax) {
    in_eax = param_3;
  }
  if (*in_eax <= *in_edx) {
    in_eax = in_edx;
  }
  return (uint)in_eax;
}

/* ref: FUN_006c5150 */
unsigned int F_006c5150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c5150u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (*(int *)(in_ecx + 0x224) != 0) {
    *(undefined1 *)(in_ecx + 0x7a8) = 1;
  }
  return 0;
}

/* ref: FUN_006c5170 */
unsigned int F_006c5170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6c5170u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if ((char)param_3 != '\0') {
    *(undefined1 *)(in_ecx + 0x1d4) = 1;
  }
  return 0;
}

/* ref: FUN_006c5190 */
uint F_006c5190(unsigned int gen_a0)
{
  GEN_ENTER(0x6c5190u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((((REFG(int, 0x13238f8) == 0) && (*(int *)(in_ecx + 0x238) == 0)) && (*(int *)(in_ecx + 0x224) == 0))
     && (*(int *)(in_ecx + 0x738) == 0)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_006c51c0 */
uint F_006c51c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6c51c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  short sVar1;
  uint uVar2;
  int * piVar3;
  undefined * this;
  undefined4 uVar4;
  
  uVar2 = param_1 >> 0x10;
  sVar1 = (short)(param_1 >> 0x10);
  if (((sVar1 == -0x7fff) || (sVar1 == -0x7ffe)) || (sVar1 == -0x7ff9)) {
    piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar4 = 0x57a;
    this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3)));
    uVar2 = F_0046a630(this,uVar4);
  }
  return uVar2;
}

/* ref: FUN_006c5210 */
byte F_006c5210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c5210u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  int * piVar2;
  undefined * this;
  undefined4 uVar3;
  
  bVar1 = F_00538870(&REFG(undefined4, 0x1375bc0),param_1,0);
  if (bVar1 != 0) {
    return 1;
  }
  if ((char)param_2 != '\0') {
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar3 = 0x523;
    this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2)));
    F_0046a630(this,uVar3);
  }
  return 0;
}

/* ref: FUN_006c5260 */
byte F_006c5260(unsigned int gen_a0)
{
  GEN_ENTER(0x6c5260u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (*(uint *)(in_ecx + 0x16c) & 0x400) == 0x400;
}

/* ref: FUN_006c5280 */
uint F_006c5280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6c5280u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * this_00;
  uint uVar1;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x1e4);
  if (*(char *)((int)this_00 + 0xc) == '\0') {
    uVar1 = param_1 - *(uint *)((int)this_00 + 0x10);
    if ((param_2 - *(int *)((int)this_00 + 0x14) != (uint)(param_1 < *(uint *)((int)this_00 + 0x10))
        ) || (59999 < uVar1)) {
      uVar1 = F_00a036e0(this_00);
    }
  }
  else {
    uVar1 = F_00a021f0(this_00,1);
    if (uVar1 == 1) {
      uVar1 = F_00a021d0(*(undefined * PTR32 *)((int)this + 0x1e4));
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_006c52d0 */
uint F_006c52d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6c52d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  int * piVar1;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  if (param_3 == 1) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xa4))(piVar1,1,0x18,1);
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xa4))(piVar1,0,0x18,1)));
  }
  return (uint)piVar1;
}

/* ref: FUN_006c5310 */
byte F_006c5310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6c5310u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  int * piVar2;
  undefined * this;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float local_8;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)param_1 + 4))(param_1);
  if (uVar1 != 1) {
    return 0;
  }
  fVar4 = F_00a601f0((undefined *)param_1,param_2);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)param_2 + 4))(param_2);
  fVar5 = F_00a602d0((undefined *)param_1,param_2);
  param_1 = (uint)gen_fl2bits((float)(REFG(float, 0x10adb9c)));
  param_2 = (uint)gen_fl2bits((float)(REFG(float, 0x10a509c)));
  local_8 = REFG(float, 0x109cb08);
  switch((unsigned int)(uintptr_t)((undefined1)param_3)) {
  case 1: ;
    if (uVar1 == 5) {
      param_1 = (uint)gen_fl2bits((float)(REFG(float, 0x1094880)));
    }
    else if (uVar1 == 6) {
      param_2 = (uint)gen_fl2bits((float)(REFG(float, 0x1087ef8)));
      param_1 = param_2;
      local_8 = REFG(float, 0x10adb88);
    }
    else if (uVar1 == 7) {
      param_1 = (uint)gen_fl2bits((float)(REFG(float, 0x10b930c)));
    }
    break;
  case 2: ;
    if (uVar1 == 2) {
      param_2 = (uint)gen_fl2bits((float)(REFG(float, 0x10b9308)));
      param_1 = param_2;
      local_8 = REFG(float, 0x10b9304);
    }
    break;
  case 8: ;
  case 0x12: ;
    goto switchD_006c538f_caseD_8;
  }
  if (((float10)GEN_TOD(gen_bits2f(param_1))) < (float10)fVar4) {
    uVar3 = 0x51e;
  }
  else if (((float10)GEN_TOD(gen_bits2f(param_2))) < (float10)fVar5) {
    uVar3 = 0x524;
  }
  else {
    if (!((float10)fVar5 < (float10)local_8)) {
switchD_006c538f_caseD_8: ;
      return 1;
    }
    uVar3 = 0x525;
  }
  if ((char)param_4 != '\0') {
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2)));
    F_0046a630(this,uVar3);
  }
  return 0;
}

/* ref: FUN_006c5500 */
uint F_006c5500(unsigned int gen_a0)
{
  GEN_ENTER(0x6c5500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  undefined4 uVar1;
  char cVar2;
  uint * puVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  cVar2 = *(char *)((int)this + 0x40);
  uVar4 = CONCAT31((int3)((REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac)) >> 8),cVar2);
  if (-1 < cVar2) {
    puVar3 = (uint *)F_00ab3ae0(*(undefined4 *)((int)this + cVar2 * 4));
    uVar4 = 0;
    if (puVar3 != (uint *)0x0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x54)),"sound/",REFG(undefined4, 0x108cc50));
      F_0042cc20(((undefined1 *)(gen_frame + 0x0)),(*puVar3 & 0xffffff) + (int)puVar3,REFG(undefined4, 0x108cc50));
      F_0042e360(((undefined1 *)(gen_frame + 0x54)),((undefined1 *)(gen_frame + 0x0)));
      uVar1 = *(undefined4 *)(REFG(int, 0x137104c) + 0x25f8);
      uVar10 = 1;
      uVar9 = 0;
      uVar8 = 0;
      fVar7 = (float)(float10)1;
      uVar4 = F_0042a990(((undefined1 *)(gen_frame + 0x54)));
      F_004e9a80(uVar1,uVar4,fVar7,uVar8,uVar9,uVar10);
      *((undefined4 *)GEN_TOP(((int)this + *(char *)((int)this + 0x40) * 4))) = 0;
      iVar5 = 0;
      do {
        cVar2 = (char)iVar5 + '\x01' + *(char *)((int)this + 0x40);
        if ('\x0f' < cVar2) {
          cVar2 = cVar2 + -0x10;
        }
      } while ((*(int *)((int)this + cVar2 * 4) == 0) &&
              (iVar5 = iVar5 + 1, cVar2 = -1, iVar5 < 0xf));
      *(char *)((int)this + 0x40) = cVar2;
      F_0042c880(((undefined1 *)(gen_frame + 0x0)));
      uVar6 = F_0042c880(((undefined1 *)(gen_frame + 0x54)));
      uVar4 = (uint)uVar6;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return uVar4;
}

/* ref: FUN_006c5600 */
uint F_006c5600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c5600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 in_EAX = 0;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),(byte)param_1);
  uVar3 = 0;
  if ((((byte)param_1 & 2) != 0) &&
     (*(char *)((int)this + 0xd6) = *(char *)((int)this + 0xd6) + '\x01',
     *(char *)((int)this + 0xd6) == '\x01')) {
    uVar3 = 2;
  }
  if ((((byte)param_1 & 4) != 0) &&
     (*(char *)((int)this + 0xd7) = *(char *)((int)this + 0xd7) + '\x01',
     *(char *)((int)this + 0xd7) == '\x01')) {
    uVar3 = uVar3 | 4;
  }
  if ((((byte)param_1 & 8) != 0) &&
     (*(char *)((int)this + 0xd8) = *(char *)((int)this + 0xd8) + '\x01',
     *(char *)((int)this + 0xd8) == '\x01')) {
    uVar3 = uVar3 | 8;
  }
  if ((((byte)param_1 & 0x20) != 0) &&
     (*(char *)((int)this + 0xd9) = *(char *)((int)this + 0xd9) + '\x01',
     *(char *)((int)this + 0xd9) == '\x01')) {
    uVar3 = uVar3 | 0x20;
  }
  if ((((byte)param_1 & 1) != 0) &&
     (*(char *)((int)this + 0xda) = *(char *)((int)this + 0xda) + '\x01',
     *(char *)((int)this + 0xda) == '\x01')) {
    uVar3 = uVar3 | 1;
  }
  if ((((byte)param_1 & 0x10) != 0) &&
     (*(char *)((int)this + 0xdb) = *(char *)((int)this + 0xdb) + '\x01',
     *(char *)((int)this + 0xdb) == '\x01')) {
    uVar3 = uVar3 | 0x10;
  }
  if (uVar3 != 0) {
    piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar2 = 0;
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xb0))(piVar1,uVar3,0,1);
    }
  }
  return uVar2;
}

/* ref: FUN_006c56c0 */
unsigned int F_006c56c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c56c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  char cVar1;
  int * piVar2;
  uint uVar3;
  
  uVar3 = 0;
  if ((((param_1 & 2) != 0) && (*(char *)((int)this + 0xd6) != '\0')) &&
     (cVar1 = *(char *)((int)this + 0xd6) + -1, *(char *)((int)this + 0xd6) = cVar1, cVar1 == '\0'))
  {
    uVar3 = 2;
  }
  if ((((param_1 & 4) != 0) && (*(char *)((int)this + 0xd7) != '\0')) &&
     (cVar1 = *(char *)((int)this + 0xd7) + -1, *(char *)((int)this + 0xd7) = cVar1, cVar1 == '\0'))
  {
    uVar3 = uVar3 | 4;
  }
  if ((((param_1 & 8) != 0) && (*(char *)((int)this + 0xd8) != '\0')) &&
     (cVar1 = *(char *)((int)this + 0xd8) + -1, *(char *)((int)this + 0xd8) = cVar1, cVar1 == '\0'))
  {
    uVar3 = uVar3 | 8;
  }
  if ((((param_1 & 0x20) != 0) && (*(char *)((int)this + 0xd9) != '\0')) &&
     (cVar1 = *(char *)((int)this + 0xd9) + -1, *(char *)((int)this + 0xd9) = cVar1, cVar1 == '\0'))
  {
    uVar3 = uVar3 | 0x20;
  }
  if ((((param_1 & 1) != 0) && (*(char *)((int)this + 0xda) != '\0')) &&
     (cVar1 = *(char *)((int)this + 0xda) + -1, *(char *)((int)this + 0xda) = cVar1, cVar1 == '\0'))
  {
    uVar3 = uVar3 | 1;
  }
  if ((((param_1 & 0x10) != 0) && (*(char *)((int)this + 0xdb) != '\0')) &&
     (cVar1 = *(char *)((int)this + 0xdb) + -1, *(char *)((int)this + 0xdb) = cVar1, cVar1 == '\0'))
  {
    uVar3 = uVar3 | 0x10;
  }
  if (uVar3 != 0) {
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    if (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 0xb0))(piVar2,uVar3,1,1);
    }
  }
  return 0;
}

/* ref: FUN_006c57a0 */
uint F_006c57a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c57a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 in_EAX = 0;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),(byte)param_1);
  uVar3 = 0;
  if ((((byte)param_1 & 2) != 0) && (*(char *)((int)this + 0xd6) != '\0')) {
    *(undefined1 *)((int)this + 0xd6) = 0;
    uVar3 = 2;
  }
  if ((((byte)param_1 & 4) != 0) && (*(char *)((int)this + 0xd7) != '\0')) {
    *(undefined1 *)((int)this + 0xd7) = 0;
    uVar3 = uVar3 | 4;
  }
  if ((((byte)param_1 & 8) != 0) && (*(char *)((int)this + 0xd8) != '\0')) {
    *(undefined1 *)((int)this + 0xd8) = 0;
    uVar3 = uVar3 | 8;
  }
  if ((((byte)param_1 & 0x20) != 0) && (*(char *)((int)this + 0xd9) != '\0')) {
    *(undefined1 *)((int)this + 0xd9) = 0;
    uVar3 = uVar3 | 0x20;
  }
  if ((((byte)param_1 & 1) != 0) && (*(char *)((int)this + 0xda) != '\0')) {
    *(undefined1 *)((int)this + 0xda) = 0;
    uVar3 = uVar3 | 1;
  }
  if ((((byte)param_1 & 0x10) != 0) && (*(char *)((int)this + 0xdb) != '\0')) {
    *(undefined1 *)((int)this + 0xdb) = 0;
    uVar3 = uVar3 | 0x10;
  }
  if (uVar3 != 0) {
    piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar2 = 0;
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xb0))(piVar1,uVar3,1,1);
    }
  }
  return uVar2;
}

/* ref: FUN_006c5860 */
unsigned int F_006c5860(unsigned int gen_a0)
{
  GEN_ENTER(0x6c5860u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(char *)((int)this + 0xd6) != '\0') {
    *(undefined1 *)((int)this + 0xd6) = 0;
    uVar2 = 2;
  }
  if (*(char *)((int)this + 0xd7) != '\0') {
    *(undefined1 *)((int)this + 0xd7) = 0;
    uVar2 = uVar2 | 4;
  }
  if (*(char *)((int)this + 0xd8) != '\0') {
    *(undefined1 *)((int)this + 0xd8) = 0;
    uVar2 = uVar2 | 8;
  }
  if (*(char *)((int)this + 0xd9) != '\0') {
    *(undefined1 *)((int)this + 0xd9) = 0;
    uVar2 = uVar2 | 0x20;
  }
  if (*(char *)((int)this + 0xda) != '\0') {
    *(undefined1 *)((int)this + 0xda) = 0;
    uVar2 = uVar2 | 1;
  }
  if (*(char *)((int)this + 0xdb) != '\0') {
    *(undefined1 *)((int)this + 0xdb) = 0;
    uVar2 = uVar2 | 0x10;
  }
  if (uVar2 != 0) {
    piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0xb0))(piVar1,uVar2,1,1);
    }
  }
  return 0;
}

/* ref: FUN_006c5900 */
uint F_006c5900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c5900u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xa4))(piVar1,(uint)((char)param_2 != '\0'),param_1,1);
  return uVar2;
}

/* ref: FUN_006c5940 */
uint F_006c5940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c5940u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xa8))(piVar1,(uint)((char)param_2 != '\0'),param_1,1);
  return uVar2;
}

/* ref: FUN_006c5980 */
uint F_006c5980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6c5980u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  float fVar1;
  float fVar2;
  float10 fVar3;
  float * pfVar4;
  uint uVar5;
  
  (*(undefined4 *)(gen_frame + 0x10)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10b3ae0)));
  (*(undefined4 *)(gen_frame + 0x18)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10b3ae0)));
  (*(undefined4 *)(gen_frame + 0x1c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10b3ae0)));
  (*(undefined4 *)(gen_frame + 0x20)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10b3ae0)));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 (*)[1])REFP(0x109c96c));
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined1 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  if (param_3 == 0) {
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x30)) + 3)) = 1;
    (*(undefined4 *)(gen_frame + 0x30)) = 0x1000000;
  }
  else if (param_3 == 1) {
    (*(undefined4 *)(gen_frame + 0x10)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10a509c)));
  }
  (*(undefined4 *)(gen_frame + 0x14)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x13237f0)));
  pfVar4 = (float *)F_00a5feb0(param_1);
  (*(float *)(gen_frame + 0x68)) = *param_2;
  fVar1 = (float)((float10)*param_2 - (float10)*pfVar4);
  (*(float *)(gen_frame + 0x40)) = fVar1;
  (*(float *)(gen_frame + 0x6c)) = param_2[2];
  fVar2 = (float)((float10)param_2[2] - (float10)pfVar4[2]);
  (*(float *)(gen_frame + 0x48)) = fVar2;
  (*(float *)(gen_frame + 0x50)) = fVar1;
  (*(float *)(gen_frame + 0x58)) = fVar2;
  if (param_3 == 2) {
    (*(float *)(gen_frame + 0x50)) = gen_bits2f((uint)gen_fl2bits(fVar1) ^ REFG(uint, 0x10920d0));
    (*(float *)(gen_frame + 0x58)) = gen_bits2f((uint)gen_fl2bits(fVar2) ^ REFG(uint, 0x10920d0));
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x34)) + 0)) = 1;
    (*(undefined4 *)(gen_frame + 0x34)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x34)), 1, 3),1);
    (*(undefined4 *)(gen_frame + 0x10)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10928e4)));
  }
  (*(float *)(gen_frame + 0x54)) = 0.0;
  pfVar4 = (float *)F_004bd580(&(*(float *)(gen_frame + 0x50)));
  fVar1 = *pfVar4;
  (*(float *)(gen_frame + 0x50)) = fVar1;
  (*(float *)(gen_frame + 0x54)) = pfVar4[1];
  (*(float *)(gen_frame + 0x58)) = pfVar4[2];
  fVar3 = ((float10)GEN_TOD(atan2((float10)fVar1,(float10)pfVar4[2])));
  (*(float *)(gen_frame + 0x64)) = (float)fVar3;
  uVar5 = F_00a9f7c0(param_1,(*(float *)(gen_frame + 0x68)),param_2[1],(*(float *)(gen_frame + 0x6c)),(float)fVar3,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)));
  return uVar5;
}

/* ref: FUN_006c5ae0 */
uint F_006c5ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c5ae0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte bVar1;
  uint uVar2;
  
  if ((param_2 != 0xffffffff) && (bVar1 = F_00ae0dd0(param_2), bVar1 != 0)) {
    if (0x157 < param_2) {
      return 0;
    }
    return (&REFG(undefined4, 0x14a31f0))[(int)(param_2)];
  }
  if (*param_1 == -0x20000000) {
    return 0;
  }
  uVar2 = F_00a354d0(&REFG(undefined4, 0x14a31f0),*param_1,param_1[1]);
  return uVar2;
}

/* ref: FUN_006c5b30 */
uint F_006c5b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c5b30u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte bVar1;
  uint uVar2;
  
  if ((param_2 != 0xffffffff) && (bVar1 = F_00ae0dd0(param_2), bVar1 != 0)) {
    if (0x157 < param_2) {
      return 0;
    }
    return (&REFG(undefined4, 0x14a31f0))[(int)(param_2)];
  }
  if (*param_1 == -0x20000000) {
    return 0;
  }
  uVar2 = F_00a354d0(&REFG(undefined4, 0x14a31f0),*param_1,param_1[1]);
  return uVar2;
}

/* ref: FUN_006c5b80 */
uint F_006c5b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6c5b80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a3;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  undefined * this;
  undefined * puVar4;
  
  bVar1 = F_00a01f60(param_1,param_2);
  if (bVar1 != 0) {
    uVar2 = F_00a01e40(param_1,param_2);
    F_0042e430(param_4,uVar2);
    return 0;
  }
  bVar1 = F_00a01f40(param_1,param_2);
  if (bVar1 == 0) {
    return 0;
  }
  uVar2 = F_00b9c9b0(*(undefined4 *)((int)param_1 + 8),param_2);
  piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  if (piVar3 != (int *)0x0) {
    this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3)));
    puVar4 = (undefined *)F_0043bd00(this,uVar2,2,param_3);
    if (puVar4 != (undefined *)0x0) goto LAB_006c5bf5;
  }
  puVar4 = &REFG(undefined, 0x10b3a22);
LAB_006c5bf5: ;
  F_0042e430(param_4,puVar4);
  return 0;
}

/* ref: FUN_006c5c10 */
uint F_006c5c10(unsigned int gen_a0)
{
  GEN_ENTER(0x6c5c10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  undefined4 uVar4;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  if (REFG(int, 0x1323910) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,REFG(int, 0x1323910),0);
  }
  if (REFG(int, 0x1323954) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,REFG(int, 0x1323954),0);
  }
  if (REFG(int, 0x1323984) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,REFG(int, 0x1323984),0);
  }
  if (REFG(int, 0x13239bc) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,REFG(int, 0x13239bc),0);
  }
  if (REFG(int, 0x13239f8) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,REFG(int, 0x13239f8),0);
  }
  if (REFG(int, 0x1323ab0) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,REFG(int, 0x1323ab0),0);
  }
  if (REFG(int, 0x1323a30) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,REFG(int, 0x1323a30),0);
  }
  if (REFG(int, 0x1323adc) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,REFG(int, 0x1323adc),0);
  }
  uVar4 = 0x1d;
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
  piVar2 = (int *)F_00763050(uVar3,uVar4);
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2);
  if ((char)uVar3 != '\0') {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
  }
  uVar4 = 0x21;
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
  piVar2 = (int *)F_00763050(uVar3,uVar4);
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2);
  if ((char)uVar3 != '\0') {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
  }
  uVar4 = 0x3a;
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
  piVar2 = (int *)F_00763050(uVar3,uVar4);
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2);
  if ((char)uVar3 != '\0') {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    F_00a6cdf0(1);
  }
  uVar4 = 0x22;
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
  piVar2 = (int *)F_00763050(uVar3,uVar4);
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2);
  if ((char)uVar3 != '\0') {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
  }
  uVar4 = 0x4c;
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
  piVar2 = (int *)F_00763050(uVar3,uVar4);
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2);
  if ((char)uVar3 != '\0') {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
  }
  uVar4 = 0x4b;
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
  piVar2 = (int *)F_00763050(uVar3,uVar4);
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2);
  if ((char)uVar3 != '\0') {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
  }
  uVar4 = 0x37;
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
  piVar2 = (int *)F_00763050(uVar3,uVar4);
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2);
  if ((char)uVar3 != '\0') {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
  }
  uVar4 = 0x3c;
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
  piVar2 = (int *)F_00763050(uVar3,uVar4);
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2);
  if ((char)uVar3 != '\0') {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
  }
  uVar4 = 0x32;
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
  piVar2 = (int *)F_00763050(uVar3,uVar4);
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2);
  if ((char)uVar3 != '\0') {
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
  }
  if (*(char *)((int)this + 0xd2) != '\0') {
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x110))(piVar1);
    return uVar3;
  }
  return uVar3;
}

/* ref: FUN_006c5ef0 */
uint F_006c5ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c5ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  undefined * this;
  uint uVar2;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
  uVar2 = F_0046aa70(this,param_1,param_2);
  return uVar2;
}

/* ref: FUN_006c5f20 */
uint F_006c5f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c5f20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  undefined * this;
  uint uVar2;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
  uVar2 = F_0046a6b0(this,param_1,param_2);
  return uVar2;
}

/* ref: FUN_006c5f50 */
uint F_006c5f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c5f50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  undefined * this;
  uint uVar2;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
  uVar2 = F_0046a880(this,param_1,param_2);
  return uVar2;
}

/* ref: FUN_006c5f80 */
uint F_006c5f80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6c5f80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * piVar1;
  undefined * this;
  uint uVar2;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
  uVar2 = F_0046ab30(this,param_1,param_2,param_3);
  return uVar2;
}

/* ref: FUN_006c5fb0 */
uint F_006c5fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6c5fb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * piVar1;
  undefined * this;
  uint uVar2;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
  uVar2 = F_0046abb0(this,param_1,param_2,param_3,param_4);
  return uVar2;
}

/* ref: FUN_006c5ff0 */
uint F_006c5ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6c5ff0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * piVar1;
  undefined * this;
  uint uVar2;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
  uVar2 = F_0046ac40(this,param_1,param_2,param_3);
  return uVar2;
}

/* ref: FUN_006c6040 */
uint F_006c6040(void)
{
  GEN_ENTER(0x6c6040u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x90];
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  undefined * this;
  uint uVar5;
  int iVar6;
  byte * pbVar7;
  undefined4 uVar8;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  ((byte *)(gen_frame + 0x8))[0x80] = (char)uVar2;
  ((byte *)(gen_frame + 0x8))[0x81] = (char)(uVar2 >> 8);
  ((byte *)(gen_frame + 0x8))[0x82] = (char)(uVar2 >> 0x10);
  ((byte *)(gen_frame + 0x8))[0x83] = (char)(uVar2 >> 0x18);
  uVar2 = F_00b9cdd0(&REFG(undefined, 0x14b3134));
  piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar8 = 0x4e;
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x48))(piVar3);
  this = (undefined *)F_00763050(uVar4,uVar8);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 12)) = this;
  F_0082afe0(this,(*(int *)(uVar2 + 0x4d4) - *(int *)(uVar2 + 0x4d0)) / 0x70 + 0xb);
  uVar4 = F_00b9d400();
  ((byte *)(gen_frame + 0x8))[0] = (char)uVar4;
  ((byte *)(gen_frame + 0x8))[1] = (char)(uVar4 >> 8);
  ((byte *)(gen_frame + 0x8))[2] = (char)(uVar4 >> 0x10);
  ((byte *)(gen_frame + 0x8))[3] = (char)(uVar4 >> 0x18);
  uVar4 = 0;
  pbVar7 = (byte *)(uVar2 + 8);
  do {
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 16)) = *(undefined4 *)(pbVar7 + -8);
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 20)) = *(undefined4 *)(pbVar7 + -4);
    ((byte *)(gen_frame + 0x8))[0x1c] = pbVar7[4];
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 24)) = *(undefined4 *)pbVar7;
    ((byte *)(gen_frame + 0x8))[0x1d] = pbVar7[5];
    ((byte *)(gen_frame + 0x8))[0x1f] = pbVar7[7];
    ((byte *)(gen_frame + 0x8))[0x1e] = pbVar7[6];
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)) = *(undefined4 *)(pbVar7 + 8);
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 36)) = *(undefined4 *)(pbVar7 + 0xc);
    F_0042cbc0(((byte *)(gen_frame + 0x8)) + 0x28,pbVar7 + 0x10);
    uVar8 = *(undefined4 *)(pbVar7 + 100);
    ((byte *)(gen_frame + 0x8))[0x7c] = (byte)uVar8;
    ((byte *)(gen_frame + 0x8))[0x7d] = SUB41(uVar8,1);
    ((byte *)(gen_frame + 0x8))[0x7e] = SUB41(uVar8,2);
    ((byte *)(gen_frame + 0x8))[0x7f] = SUB41(uVar8,3);
    uVar5 = F_0042a990(((byte *)(gen_frame + 0x8)) + 0x28);
    F_007793c0((undefined *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 12)),uVar4,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 16)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 20)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 24)),
                 CONCAT13(((byte *)(gen_frame + 0x8))[0x1f],CONCAT12(((byte *)(gen_frame + 0x8))[0x1e],CONCAT11(((byte *)(gen_frame + 0x8))[0x1d],((byte *)(gen_frame + 0x8))[0x1c]))),
                 CONCAT13(((byte *)(gen_frame + 0x8))[0x20],CONCAT12(((byte *)(gen_frame + 0x8))[0x1f],CONCAT11(((byte *)(gen_frame + 0x8))[0x1e],((byte *)(gen_frame + 0x8))[0x1d]))),
                 (uint)(((byte *)(gen_frame + 0x8))[0x1f] == 0),(uint)((byte *)(gen_frame + 0x8))[0x1e],(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)),uVar5,uVar8);
    F_0042c880(((byte *)(gen_frame + 0x8)) + 0x28);
    uVar4 = uVar4 + 1;
    pbVar7 = pbVar7 + 0x70;
  } while (uVar4 < 0xb);
  iVar6 = *(int *)(uVar2 + 0x4d4) - *(int *)(uVar2 + 0x4d0);
  iVar1 = iVar6 >> 0x1f;
  ((byte *)(gen_frame + 0x8))[4] = 0;
  ((byte *)(gen_frame + 0x8))[5] = 0;
  ((byte *)(gen_frame + 0x8))[6] = 0;
  ((byte *)(gen_frame + 0x8))[7] = 0;
  if (iVar6 / 0x70 + iVar1 != iVar1) {
    ((byte *)(gen_frame + 0x8))[8] = 0;
    ((byte *)(gen_frame + 0x8))[9] = 0;
    ((byte *)(gen_frame + 0x8))[10] = 0;
    ((byte *)(gen_frame + 0x8))[0xb] = 0;
    do {
      pbVar7 = ((byte *)GEN_TOP((*(int *)(uVar2 + 0x4d0) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)))));
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 16)) = *(undefined4 *)pbVar7;
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 20)) = *(undefined4 *)(pbVar7 + 4);
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 24)) = *(undefined4 *)(pbVar7 + 8);
      ((byte *)(gen_frame + 0x8))[0x1c] = pbVar7[0xc];
      ((byte *)(gen_frame + 0x8))[0x1d] = pbVar7[0xd];
      ((byte *)(gen_frame + 0x8))[0x1e] = pbVar7[0xe];
      ((byte *)(gen_frame + 0x8))[0x1f] = pbVar7[0xf];
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)) = *(undefined4 *)(pbVar7 + 0x10);
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 36)) = *(undefined4 *)(pbVar7 + 0x14);
      F_0042cbc0(((byte *)(gen_frame + 0x8)) + 0x28,pbVar7 + 0x18);
      uVar8 = *(undefined4 *)(pbVar7 + 0x6c);
      ((byte *)(gen_frame + 0x8))[0x7c] = (byte)uVar8;
      ((byte *)(gen_frame + 0x8))[0x7d] = SUB41(uVar8,1);
      ((byte *)(gen_frame + 0x8))[0x7e] = SUB41(uVar8,2);
      ((byte *)(gen_frame + 0x8))[0x7f] = SUB41(uVar8,3);
      uVar5 = F_0042a990(((byte *)(gen_frame + 0x8)) + 0x28);
      F_007793c0((undefined *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 12)),uVar4,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 16)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 20)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 24)),
                   CONCAT13(((byte *)(gen_frame + 0x8))[0x1f],CONCAT12(((byte *)(gen_frame + 0x8))[0x1e],CONCAT11(((byte *)(gen_frame + 0x8))[0x1d],((byte *)(gen_frame + 0x8))[0x1c])))
                   ,CONCAT13(((byte *)(gen_frame + 0x8))[0x20],CONCAT12(((byte *)(gen_frame + 0x8))[0x1f],CONCAT11(((byte *)(gen_frame + 0x8))[0x1e],((byte *)(gen_frame + 0x8))[0x1d]))
                            ),(uint)(((byte *)(gen_frame + 0x8))[0x1f] == 0),(uint)((byte *)(gen_frame + 0x8))[0x1e],(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)),uVar5,uVar8
                  );
      uVar4 = uVar4 + 1;
      F_0042c880(((byte *)(gen_frame + 0x8)) + 0x28);
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) + 0x70;
      uVar5 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)) + 1;
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)) = uVar5;
    } while (uVar5 < (uint)((*(int *)(uVar2 + 0x4d4) - *(int *)(uVar2 + 0x4d0)) / 0x70));
  }
  uVar8 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 12));
  if (REFG(undefined4, 0x1323bf0) == 0) {
    uVar2 = F_00876c80((undefined *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 12)),&REFG(undefined * PTR32, 0x1323be8),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)));
    REFG(undefined4, 0x1323bf0) = uVar2;
    F_00c47745((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 128)) ^ (uint)(uint)(gen_frame + 0x8c));
    return uVar2;
  }
  F_007dd800((undefined *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 12)));
  uVar2 = F_00877190((undefined *)uVar8,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)));
  F_00c47745((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 128)) ^ (uint)(uint)(gen_frame + 0x8c));
  return uVar2;
}

/* ref: FUN_006c62c0 */
uint F_006c62c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6c62c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined1 uVar1;
  int * piVar2;
  uint uVar3;
  undefined * this;
  uint uVar4;
  undefined4 uVar5;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar5 = 0x4e;
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
  this = (undefined *)F_00763050(uVar3,uVar5);
  uVar1 = REFG(undefined1, 0x14ab29a);
  if (REFG(char, 0x14ab0d0) == '\x01') {
    uVar3 = param_2 >> 1;
  }
  else {
    uVar3 = param_2;
    if (REFG(char, 0x14ab0d0) == '\x02') {
      uVar3 = 0;
    }
  }
  uVar4 = F_00b9cec0(uVar3);
  *(uint *)&REFG(undefined, 0x13240f4) = F_00b9cf90(param_3);
  (*(undefined4 *)(gen_frame + 0x0)) = param_1;
  (*(uint *)(gen_frame + 0x10)) = *(uint *)&REFG(undefined, 0x13240f4);
  (*(undefined1 *)(gen_frame + 0x15)) = (undefined1)param_4;
  (*(uint *)(gen_frame + 0x4)) = uVar3;
  (*(undefined4 *)(gen_frame + 0xc)) = param_3;
  (*(uint *)(gen_frame + 0x8)) = uVar4;
  (*(undefined1 *)(gen_frame + 0x14)) = uVar1;
  *(uint *)&REFG(undefined, 0x13240f0) = uVar4;
  uVar3 = F_00876ee0(this,&REFG(undefined * PTR32, 0x13240e0),&(*(undefined4 *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar3;
}

/* ref: FUN_006c6380 */
uint F_006c6380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x6c6380u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int * piVar1;
  undefined * this;
  uint uVar2;
  uint * this_00;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 * puVar6;
  undefined * PTR32 * ppuVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),6);
  (*(undefined4 *)(gen_frame + 0xc)) = param_1;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),6);
  (*(undefined4 *)(gen_frame + 0x14)) = param_2;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),4);
  (*(undefined4 *)(gen_frame + 0x1c)) = param_3;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),4);
  (*(undefined4 *)(gen_frame + 0x24)) = param_4;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),4);
  (*(undefined4 *)(gen_frame + 0x2c)) = param_5;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),6);
  (*(undefined * PTR32 *)(gen_frame + 0x34)) = &REFG(undefined, 0x10b3a23);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x38)),6);
  uVar10 = 4;
  uVar9 = 0;
  uVar8 = 0;
  ppuVar7 = &REFG(undefined * PTR32, 0x13240f8);
  puVar6 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0x3c)) = param_6;
  uVar5 = 8;
  uVar4 = 0xe;
  this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1)));
  *(uint *)&REFG(undefined, 0x1324100) = F_008668b0(this,uVar4,uVar5,puVar6,ppuVar7,uVar8,uVar9,uVar10);
  this_00 = &(*(uint *)(gen_frame + 0x48));
  iVar3 = 7;
  do {
    this_00 = this_00 + -2;
    uVar2 = F_005a2670(this_00);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar2;
}

/* ref: FUN_006c64b0 */
uint F_006c64b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6c64b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * piVar1;
  uint uVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = 0x1d;
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
  piVar1 = (int *)F_00763050(uVar2,uVar3);
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x40))(piVar1,param_1,param_2,param_3,((char)param_4 != '\0') + 1);
  return uVar2;
}

/* ref: FUN_006c6500 */
uint F_006c6500(unsigned int gen_a0)
{
  GEN_ENTER(0x6c6500u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  
  puVar1 = (undefined4 *)F_00ab3d50(param_1);
  uVar3 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xd8))
                      (piVar2,*puVar1,(uint)*(byte *)((int)puVar1 + 5),0,(int)*(char *)(puVar1 + 1))
    ;
  }
  return uVar3;
}

/* ref: FUN_006c6580 */
uint F_006c6580(unsigned int gen_a0)
{
  GEN_ENTER(0x6c6580u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined * this;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = 0x4b;
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
  this = (undefined *)F_00763050(uVar2,uVar3);
  uVar2 = F_0089dd90(this,param_1,&REFG(undefined * PTR32, 0x1323b94));
  return uVar2;
}

/* ref: FUN_006c65c0 */
uint F_006c65c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c65c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  F_00424750(REFG(undefined4, 0x137104c));
  uVar1 = F_00a6e080(&REFG(undefined, 0x14a9e40),param_1,param_2,1);
  return uVar1;
}

/* ref: FUN_006c6610 */
uint F_006c6610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c6610u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  int * piVar2;
  uint in_ecx;
  undefined3 extraout_var = 0;
  undefined4 uVar3;
  
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = 3;
  in_ecx = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
  F_00763050(in_ecx,uVar3);
  bVar1 = F_0076ec40(param_1,param_2,0xffffffff);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_006c6650 */
uint F_006c6650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6c6650u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x104))(piVar1,param_1 & 0xff,param_2 & 0xff,param_3);
  return uVar2;
}

/* ref: FUN_006c6680 */
uint F_006c6680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c6680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  if (*(char *)((int)this + 0xd2) == '\0') {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x114))(piVar1);
    *(bool *)((int)this + 0xd2) = (char)uVar2 == '\0';
  }
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10c))(piVar1,param_1);
  return uVar2;
}

/* ref: FUN_006c66f0 */
uint F_006c66f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6c66f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined * this;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = 0x29;
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
  this = (undefined *)F_00763050(uVar2,uVar3);
  uVar2 = F_008d2930(this,param_1,0);
  return uVar2;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf42 */
uint F_006c6730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c6730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar5 = 0;
  uVar4 = F_00a019d0(((byte *)(gen_frame + 0xc)));
  if (2 < (int)uVar4) {
    uVar5 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),3);
  }
  if (iVar1 != 0) {
    F_00424750(REFG(undefined4, 0x137104c));
    F_00a6e080(&REFG(undefined, 0x14a9e40),uVar2,uVar5,1);
  }
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf43 */
uint F_006c67c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c67c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if (*piVar2 != 0) {
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    ((code *)*(gen_code32 *)(*piVar2 + 0xc4))(piVar2);
  }
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf6 */
uint F_006c6820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c6820u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  
  F_00a02210(((undefined1 *)(gen_frame + 0xc)),param_1);
  *(undefined2 *)&REFG(undefined, 0x132393e) = 1;
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1)));
  ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,REFG(undefined4, 0x1323910),0);
  F_00a02240(((undefined1 *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf53 */
uint F_006c6880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c6880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  undefined * this_00;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if (*piVar2 != 0) {
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
    F_007c94c0(this_00);
  }
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf54 */
uint F_006c68e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c68e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if (*piVar2 != 0) {
    *(undefined4 *)&REFG(undefined, 0x1323bfc) = *(undefined4 *)(this + 4);
    *(int *)&REFG(undefined, 0x1323bec) = *piVar2;
    F_00b9e250(&REFG(undefined, 0x14b3134),&REFG(undefined * PTR32, 0x1323bf8));
    uVar1 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return uVar1;
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf55 */
uint F_006c6960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c6960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
  F_00a02210(((byte *)(gen_frame + 0x8)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  if (iVar1 != 0) {
    uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2);
    uVar4 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),3);
    uVar5 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),4);
    uVar6 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),5);
    *(int *)&REFG(undefined, 0x13240e4) = iVar1;
    F_006c62c0(uVar2,uVar4,uVar5,uVar6);
    uVar2 = F_00a02290(((byte *)(gen_frame + 0x8)),0);
    F_00a02240(((byte *)(gen_frame + 0x8)));
    return uVar2;
  }
  F_00a02240(((byte *)(gen_frame + 0x8)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf52 */
uint F_006c6a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c6a20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  int * piVar5;
  uint uVar6;
  uint uVar7;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  F_00a01860(((byte *)(gen_frame + 0x4)),param_1);
  uVar4 = F_00a01d20(((byte *)(gen_frame + 0x4)),1);
  piVar5 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),1,uVar4);
  if (*piVar5 != 0) {
    uVar4 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),2);
    bVar3 = (char)uVar4 - 1;
    ((byte *)(gen_frame + 0x4))[0x28] = bVar3;
    uVar6 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),3);
    uVar4 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),4);
    ((byte *)(gen_frame + 0x4))[0x20] = (char)uVar4;
    ((byte *)(gen_frame + 0x4))[0x21] = (char)(uVar4 >> 8);
    ((byte *)(gen_frame + 0x4))[0x22] = (char)(uVar4 >> 0x10);
    ((byte *)(gen_frame + 0x4))[0x23] = (char)(uVar4 >> 0x18);
    bVar3 = F_00a01e10(((byte *)(gen_frame + 0x4)),5);
    ((byte *)(gen_frame + 0x4))[0x24] = bVar3;
    (*(undefined2 *)(gen_frame + 0x34)) = 0;
    (*(undefined4 *)(gen_frame + 0x36)) = 0;
    (*(undefined4 *)(gen_frame + 0x3a)) = 0;
    (*(undefined1 *)(gen_frame + 0x40)) = 0;
    (*(undefined4 *)(gen_frame + 0x41)) = 0;
    uVar4 = 0;
    do {
      uVar7 = uVar4 & 0x80000001;
      if ((int)uVar7 < 0) {
        uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
      }
      if (uVar7 == 0) {
        uVar7 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),uVar4 + 6);
        (&(*(undefined2 *)(gen_frame + 0x34)))[(int)uVar4 / 2] = (short)uVar7;
      }
      else if (uVar7 == 1) {
        uVar7 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),uVar4 + 6);
        (&(*(undefined1 *)(gen_frame + 0x40)))[(int)uVar4 / 2] = (char)uVar7;
      }
      uVar2 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 44));
      iVar1 = uVar4 + 7;
      uVar4 = uVar4 + 1;
    } while (iVar1 < 0x10);
    ((byte *)(gen_frame + 0x4))[0x2c] = 0;
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 44)) = uVar2 & 0xffffff00;
    bVar3 = F_00a01f40(((byte *)(gen_frame + 0x4)),0x10);
    if (bVar3 != 0) {
      uVar4 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),0x10);
      ((byte *)(gen_frame + 0x4))[0x2c] = (byte)uVar4;
    }
    F_00ba0800(&REFG(undefined, 0x14b0f2c),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 40)),uVar6,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 32)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 36)),&(*(undefined2 *)(gen_frame + 0x34)),&(*(undefined1 *)(gen_frame + 0x40)),
                 (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 44)));
  }
  F_00a01890(((byte *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf16 */
uint F_006c6b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c6b70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if (*piVar2 != 0) {
    F_00a48ae0(&REFG(undefined, 0x14a4230));
  }
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf17 */
uint F_006c6bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c6bc0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  undefined4 * puVar3;
  int * piVar4;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),(*(int *)&gen_args[1]));
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  piVar2 = (int *)*piVar2;
  if (piVar2 != (int *)0x0) {
    puVar3 = (undefined4 *)F_00ab3d50(1);
    if (puVar3 != (undefined4 *)0x0) {
      piVar4 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      ((code *)*(gen_code32 *)(*piVar4 + 0xd8))
                (piVar4,*puVar3,(uint)*(byte *)((int)puVar3 + 5),0,(int)*(char *)(puVar3 + 1));
    }
    (*(int *)&gen_args[1]) = piVar2[2];
    ((code *)*(gen_code32 *)(*piVar2 + 0x7c))(piVar2,0x641,&(*(int *)&gen_args[1]),1);
  }
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf18 */
uint F_006c6c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c6c60u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  undefined4 * puVar3;
  int * piVar4;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),(*(int *)&gen_args[1]));
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  piVar2 = (int *)*piVar2;
  if (piVar2 != (int *)0x0) {
    puVar3 = (undefined4 *)F_00ab3d50(2);
    if (puVar3 != (undefined4 *)0x0) {
      piVar4 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      ((code *)*(gen_code32 *)(*piVar4 + 0xd8))
                (piVar4,*puVar3,(uint)*(byte *)((int)puVar3 + 5),0,(int)*(char *)(puVar3 + 1));
    }
    (*(int *)&gen_args[1]) = piVar2[2];
    ((code *)*(gen_code32 *)(*piVar2 + 0x7c))(piVar2,0x642,&(*(int *)&gen_args[1]),1);
  }
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf19 */
uint F_006c6d00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c6d00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  undefined4 * puVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if ((*piVar2 != 0) && (puVar3 = (undefined4 *)F_00ab3d50(6), puVar3 != (undefined4 *)0x0)) {
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    ((code *)*(gen_code32 *)(*piVar2 + 0xd8))
              (piVar2,*puVar3,(uint)*(byte *)((int)puVar3 + 5),0,(int)*(char *)(puVar3 + 1));
  }
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf20 */
uint F_006c6d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c6d80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  undefined4 * puVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if ((*piVar2 != 0) && (puVar3 = (undefined4 *)F_00ab3d50(7), puVar3 != (undefined4 *)0x0)) {
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    ((code *)*(gen_code32 *)(*piVar2 + 0xd8))
              (piVar2,*puVar3,(uint)*(byte *)((int)puVar3 + 5),0,(int)*(char *)(puVar3 + 1));
  }
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf21 */
uint F_006c6e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c6e00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  undefined4 * puVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if ((*piVar2 != 0) && (puVar3 = (undefined4 *)F_00ab3d50(8), puVar3 != (undefined4 *)0x0)) {
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    ((code *)*(gen_code32 *)(*piVar2 + 0xd8))
              (piVar2,*puVar3,(uint)*(byte *)((int)puVar3 + 5),0,(int)*(char *)(puVar3 + 1));
  }
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf22 */
uint F_006c6e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c6e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  undefined4 * puVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if ((*piVar2 != 0) && (puVar3 = (undefined4 *)F_00ab3d50(9), puVar3 != (undefined4 *)0x0)) {
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    ((code *)*(gen_code32 *)(*piVar2 + 0xd8))
              (piVar2,*puVar3,(uint)*(byte *)((int)puVar3 + 5),0,(int)*(char *)(puVar3 + 1));
  }
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf23 */
uint F_006c6f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c6f00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  undefined4 * puVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if ((*piVar2 != 0) && (puVar3 = (undefined4 *)F_00ab3d50(10), puVar3 != (undefined4 *)0x0)) {
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    ((code *)*(gen_code32 *)(*piVar2 + 0xd8))
              (piVar2,*puVar3,(uint)*(byte *)((int)puVar3 + 5),0,(int)*(char *)(puVar3 + 1));
  }
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf24 */
uint F_006c6f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c6f80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  undefined4 * puVar4;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  if (iVar1 != 0) {
    puVar4 = (undefined4 *)F_00ab3d50(uVar2);
    if (puVar4 != (undefined4 *)0x0) {
      piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      ((code *)*(gen_code32 *)(*piVar3 + 0xd8))
                (piVar3,*puVar4,(uint)*(byte *)((int)puVar4 + 5),0,(int)*(char *)(puVar4 + 1));
    }
  }
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf25 */
uint F_006c7010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c7010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar4 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),3);
  if (iVar1 != 0) {
    F_00a7d830(uVar2 & 0xff,uVar4);
  }
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf38 */
uint F_006c7080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c7080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  undefined * this_00;
  undefined4 uVar3;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if (*piVar2 != 0) {
    *(int *)&REFG(undefined, 0x1323b88) = *piVar2;
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar3 = 0x4c;
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
    this_00 = (undefined *)F_00763050(uVar1,uVar3);
    F_00777c00(this_00,&REFG(undefined * PTR32, 0x1323b84));
    uVar1 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return uVar1;
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf39 */
uint F_006c7110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c7110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint in_ecx;
  undefined * this_00;
  undefined4 uVar4;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  if (iVar1 != 0) {
    uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
    *(int *)&REFG(undefined, 0x1323b98) = iVar1;
    piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar4 = 0x4b;
    in_ecx = ((code *)*(gen_code32 *)(*piVar3 + 0x48))(piVar3);
    this_00 = (undefined *)F_00763050(in_ecx,uVar4);
    F_0089dd90(this_00,uVar2,&REFG(undefined * PTR32, 0x1323b94));
    uVar2 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return uVar2;
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf44 */
uint F_006c71c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c71c0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  uint in_ecx;
  undefined4 uVar5;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),(*(undefined4 *)&gen_args[1]));
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar4 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar3);
  iVar1 = *piVar4;
  uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  bVar2 = F_00a01e10(((byte *)(gen_frame + 0xc)),3);
  (*(undefined4 *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(undefined4 *)&gen_args[1]), 1, 3),bVar2);
  if (iVar1 != 0) {
    piVar4 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar5 = 3;
    in_ecx = ((code *)*(gen_code32 *)(*piVar4 + 0x48))(piVar4);
    F_00763050(in_ecx,uVar5);
    F_0076ec40(uVar3,(*(undefined4 *)&gen_args[1]),0xffffffff);
  }
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf48 */
uint F_006c7250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c7250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar4 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),3);
  uVar5 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),4);
  if (iVar1 != 0) {
    piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    ((code *)*(gen_code32 *)(*piVar3 + 0x104))(piVar3,uVar2 & 0xff,uVar4 & 0xff,uVar5);
  }
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf49 */
uint F_006c72e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c72e0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),(*(undefined4 *)&gen_args[1]));
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar4 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar3);
  iVar1 = *piVar4;
  bVar2 = F_00a01e10(((byte *)(gen_frame + 0xc)),2);
  (*(undefined4 *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(undefined4 *)&gen_args[1]), 1, 3),bVar2);
  if (iVar1 != 0) {
    iVar1 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4)));
    piVar4 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    if (*(char *)(iVar1 + 0xd2) == '\0') {
      uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x114))(piVar4);
      *(bool *)(iVar1 + 0xd2) = (char)uVar3 == '\0';
    }
    ((code *)*(gen_code32 *)(*piVar4 + 0x10c))(piVar4,(*(undefined4 *)&gen_args[1]));
  }
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf50 */
uint F_006c7380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c7380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if (*piVar2 != 0) {
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    ((code *)*(gen_code32 *)(*piVar2 + 0x110))(piVar2);
  }
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf57 */
uint F_006c73e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c73e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint in_ecx;
  undefined * this_00;
  undefined4 uVar4;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  if (iVar1 != 0) {
    piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar4 = 0x29;
    in_ecx = ((code *)*(gen_code32 *)(*piVar3 + 0x48))(piVar3);
    this_00 = (undefined *)F_00763050(in_ecx,uVar4);
    F_008d2930(this_00,uVar2,0);
  }
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: FUN_006c7460 */
byte F_006c7460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6c7460u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  uint uVar1;
  uint uVar2;
  float10 fVar3;
  
  *param_3 = 0.0;
  *param_4 = 0.0;
  uVar1 = F_00a019d0(param_1);
  if ((int)uVar1 < param_2) {
    return 0;
  }
  uVar2 = F_00b9c9b0(*(undefined4 *)(param_1 + 8),param_2);
  fVar3 = (float10)(int)uVar2;
  if ((int)uVar2 < 0) {
    fVar3 = fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  *param_3 = (float)(fVar3 * (float10)*(double *)&REFG(double, 0x10b9470));
  if (param_2 + 1 <= (int)uVar1) {
    uVar1 = F_00b9c9b0(*(undefined4 *)(param_1 + 8),param_2 + 1);
    fVar3 = (float10)(int)uVar1;
    if ((int)uVar1 < 0) {
      fVar3 = fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    *param_4 = (float)(fVar3 * (float10)*(double *)&REFG(double, 0x10b9470));
  }
  return 1;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf67 */
uint F_006c7b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c7b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x2f0];
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int * piVar7;
  uint uVar8;
  uint uVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float fVar14;
  
  (*(uint *)(gen_frame + 0x2dc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2e0);
  (*(undefined * PTR32 *)(gen_frame + 0xe0)) = this;
  F_00a02210(((undefined1 *)(gen_frame + 0x10)),param_1);
  uVar6 = F_00a019d0(((undefined1 *)(gen_frame + 0x10)));
  (*(float *)(gen_frame + 0xe4)) = gen_bits2f(uVar6);
  if (REFG(int, 0x1375bbc) != 1) {
    F_00b70d10(&REFG(undefined4, 0x1375b90),1);
  }
  if (REFG(int, 0x1375bbc) == -1) {
    (*(undefined * PTR32 *)(gen_frame + 0x88)) = (undefined *)0x0;
  }
  else {
    (*(undefined * PTR32 *)(gen_frame + 0x88)) = ((undefined *)GEN_TOP((&REFG(undefined4, 0x1375b90))[(int)(REFG(int, 0x1375bbc))]));
  }
  if ((*(uint *)&REFG(undefined, 0x1489f10) & 1) == 0) {
    REFG(float, 0x1489f0c) = *((float *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x88)) + 0xd0) + 0xa4)));
    *(uint *)&REFG(undefined, 0x1489f10) = *(uint *)&REFG(undefined, 0x1489f10) | 1;
  }
  uVar6 = F_00b9c9b0((*(undefined4 *)(gen_frame + 0x18)),2);
  (*(uint *)(gen_frame + 0xa8)) = uVar6;
  if (((int)uVar6 < 0) || (6 < (int)uVar6)) {
    (*(uint *)(gen_frame + 0xa8)) = 0;
  }
  uVar6 = F_00a01d20(((undefined1 *)(gen_frame + 0x10)),3);
  piVar7 = (int *)F_00b9c710((*(undefined4 *)(gen_frame + 0x18)),3,uVar6);
  iVar4 = *piVar7;
  uVar6 = F_00a01d20(((undefined1 *)(gen_frame + 0x10)),4);
  piVar7 = (int *)F_00b9c710((*(undefined4 *)(gen_frame + 0x18)),4,uVar6);
  iVar5 = *piVar7;
  (*(float *)(gen_frame + 0xdc)) = REFG(float, 0x1087f04);
  if ((int)gen_fl2bits((*(float *)(gen_frame + 0xe4))) < 6) {
    fVar10 = F_00a01dd0(((undefined1 *)(gen_frame + 0x10)),5);
    (*(float *)(gen_frame + 0xdc)) = (float)fVar10;
  }
  if (((*(uint *)(gen_frame + 0xa8)) == 5) || ((*(byte *)(gen_frame + 0xef)) = 1, (*(uint *)(gen_frame + 0xa8)) == 6)) {
    (*(byte *)(gen_frame + 0xef)) = 0;
  }
  (*(float *)(gen_frame + 0xd8)) = 4.06377e-44;
  (*(float *)(gen_frame + 0xd4)) = REFG(float, 0x1489f0c);
  if ((*(byte *)(gen_frame + 0xef)) == 0) {
    (*(float *)(gen_frame + 0xd8)) = 7.42688e-44;
  }
  piVar7 = (int *)F_00a5f8a0(*(undefined * PTR32 *)(iVar4 + 4));
  ((code *)*(gen_code32 *)(*piVar7 + 0x40))(piVar7,((undefined1 *)(gen_frame + 0x1f0)),(undefined4)gen_fl2bits((*(float *)(gen_frame + 0xd8))));
  (*(float *)(gen_frame + 0x90)) = (*(float *)(gen_frame + 0x220));
  (*(float *)(gen_frame + 0x94)) = (*(float *)(gen_frame + 0x224));
  (*(float *)(gen_frame + 0x98)) = (*(float *)(gen_frame + 0x228));
  piVar7 = (int *)F_00a5f8a0(*(undefined * PTR32 *)(iVar5 + 4));
  ((code *)*(gen_code32 *)(*piVar7 + 0x40))(piVar7,((undefined1 *)(gen_frame + 0x230)),(undefined4)gen_fl2bits((*(float *)(gen_frame + 0xd8))));
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  fVar14 = (float)((float10)(*(float *)(gen_frame + 0x260)) - (float10)(*(float *)(gen_frame + 0x90)));
  (*(float *)(gen_frame + 0xc0)) = fVar14;
  (*(float *)(gen_frame + 0x4)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  fVar1 = (float)((float10)(*(float *)(gen_frame + 0x264)) - (float10)(*(float *)(gen_frame + 0x94)));
  (*(float *)(gen_frame + 0xc4)) = fVar1;
  fVar2 = (float)((float10)(*(float *)(gen_frame + 0x268)) - (float10)(*(float *)(gen_frame + 0x98)));
  (*(float *)(gen_frame + 0xc8)) = fVar2;
  fVar3 = ((float)GEN_TOF(((float10)fVar2 * (float10)fVar2 +
                 ((float10)fVar1 * (float10)fVar1 + (float10)fVar14 * (float10)fVar14))));
  (*(float *)(gen_frame + 0xe4)) = fVar3;
  fVar3 = ((float)GEN_TOF(SQRT((float10)fVar3)));
  (*(float *)(gen_frame + 0xe4)) = fVar3;
  fVar3 = (float)((float10)1 / (float10)fVar3);
  (*(float *)(gen_frame + 0xac)) = fVar3;
  fVar11 = (float10)fVar3;
  (*(float *)(gen_frame + 0xb0)) = (float)(fVar11 * (float10)fVar14);
  (*(float *)(gen_frame + 0xb4)) = (float)((float10)fVar1 * fVar11);
  (*(float *)(gen_frame + 0xb8)) = (float)(fVar11 * (float10)fVar2);
  fVar10 = (float10)0;
  fVar13 = (float10)(float)((float10)fVar1 * fVar11) * fVar10;
  fVar12 = (float10)(float)(fVar11 * (float10)fVar2);
  (*(float *)(gen_frame + 0x50)) = (float)(fVar13 - fVar12);
  fVar11 = (float10)(float)(fVar11 * (float10)fVar14);
  (*(float *)(gen_frame + 0xd8)) = 0.0;
  (*(float *)(gen_frame + 0xac)) = 0.0;
  (*(float *)(gen_frame + 0x54)) = (float)(fVar12 * fVar10 - fVar11 * fVar10);
  (*(float *)(gen_frame + 0x8c)) = REFG(float, 0x1088068);
  (*(float *)(gen_frame + 0x58)) = (float)(fVar11 - fVar13);
  if ((*(byte *)(gen_frame + 0xef)) == 0) {
    piVar7 = (int *)F_00a5f8a0(*(undefined * PTR32 *)(iVar4 + 4));
    ((code *)*(gen_code32 *)(*piVar7 + 0x40))(piVar7,((undefined1 *)(gen_frame + 0x130)),0x19);
    (*(float *)(gen_frame + 0xb4)) = (*(float *)(gen_frame + 0x164));
    piVar7 = (int *)F_00a5f8a0(*(undefined * PTR32 *)(iVar5 + 4));
    ((code *)*(gen_code32 *)(*piVar7 + 0x40))(piVar7,((undefined1 *)(gen_frame + 0xf0)),0x19);
    ((float *)(gen_frame + 0x2b0))[1] = (*(float *)(gen_frame + 0x124));
    piVar7 = (int *)F_00a5f8a0(*(undefined * PTR32 *)(iVar4 + 4));
    ((code *)*(gen_code32 *)(*piVar7 + 0x40))(piVar7,((undefined1 *)(gen_frame + 0x170)),0x47);
    piVar7 = (int *)F_00a5f8a0(*(undefined * PTR32 *)(iVar5 + 4));
    ((code *)*(gen_code32 *)(*piVar7 + 0x40))(piVar7,((undefined1 *)(gen_frame + 0x1b0)),0x47);
    fVar14 = (float)((float10)(*(float *)(gen_frame + 0xb4)) - (float10)(*(float *)(gen_frame + 0x1a4)));
    (*(float *)(gen_frame + 0x68)) = fVar14;
    fVar1 = (float)((float10)((float *)(gen_frame + 0x2b0))[1] - (float10)(*(float *)(gen_frame + 0x1e4)));
    (*(float *)(gen_frame + 0xdc)) = fVar1;
    (*(float *)(gen_frame + 0x6c)) = fVar14;
    (*(int * PTR32 *)(gen_frame + 0xe8)) = ((int *)(uintptr_t)gen_fl2bits((float)(fVar1)));
    if ((float10)fVar1 < (float10)fVar14) {
      (*(float *)(gen_frame + 0x6c)) = fVar1;
      (*(int * PTR32 *)(gen_frame + 0xe8)) = ((int *)(uintptr_t)gen_fl2bits((float)(fVar14)));
    }
    fVar14 = (float)((float10)(*(float *)(gen_frame + 0x6c)) / (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0xe8))))));
    (*(int * PTR32 *)(gen_frame + 0xe8)) = ((int *)(uintptr_t)gen_fl2bits((float)(fVar14)));
    fVar10 = (float10)fVar14;
    if ((float10)REFG(float, 0x1094824) < fVar10) {
      (*(float *)(gen_frame + 0xac)) = ((float)GEN_TOF(((fVar10 * (float10)(*(float *)(gen_frame + 0x6c))) * (float10)REFG(double, 0x1094800))));
    }
    fVar14 = ((float)GEN_TOF((((float10)1 - fVar10) * (float10)*(double *)&REFG(undefined, 0x10b9488))));
    (*(float *)(gen_frame + 0xdc)) = fVar14;
    if ((float10)fVar14 < (float10)0) {
      (*(float *)(gen_frame + 0xdc)) = 0.0;
    }
    if ((*(uint *)(gen_frame + 0xa8)) == 5) {
      (*(float *)(gen_frame + 0x8c)) = REFG(float, 0x10ac1a8);
      piVar7 = (int *)F_00a5f290(*(undefined * PTR32 *)(iVar5 + 4));
      (*(int * PTR32 *)(gen_frame + 0xe8)) = piVar7;
      piVar7 = (int *)F_00a5f290(*(undefined * PTR32 *)(iVar4 + 4));
      if (((*(int * PTR32 *)(gen_frame + 0xe8)) == (int *)0x0) || (piVar7 == (int *)0x0)) goto LAB_006c80d5;
      (*(byte *)(gen_frame + 0xef)) = *(byte *)(piVar7 + 0xb6e);
      (*(byte *)(gen_frame + 0xee)) = *(byte *)((*(int * PTR32 *)(gen_frame + 0xe8)) + 0xb6e);
      uVar6 = ((code *)*(gen_code32 *)(*piVar7 + 0x1c))(piVar7);
      uVar9 = (uint)(*(byte *)(gen_frame + 0xef));
      uVar6 = uVar6 & 0xff;
      uVar8 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0xe8)) + 0x1c))((*(int * PTR32 *)(gen_frame + 0xe8)));
      fVar14 = F_006b9c10((uint)(*(byte *)(gen_frame + 0xee)),uVar8 & 0xff,uVar9,uVar6);
      fVar10 = (float10)fVar14;
    }
    else {
      (*(float *)(gen_frame + 0x8c)) = REFG(float, 0x10ac168);
      piVar7 = (int *)F_00a5f290(*(undefined * PTR32 *)(iVar4 + 4));
      (*(int * PTR32 *)(gen_frame + 0xe8)) = piVar7;
      piVar7 = (int *)F_00a5f290(*(undefined * PTR32 *)(iVar5 + 4));
      if (((*(int * PTR32 *)(gen_frame + 0xe8)) == (int *)0x0) || (piVar7 == (int *)0x0)) goto LAB_006c80d5;
      (*(byte *)(gen_frame + 0xee)) = *(byte *)(piVar7 + 0xb6e);
      (*(byte *)(gen_frame + 0xef)) = *(byte *)((*(int * PTR32 *)(gen_frame + 0xe8)) + 0xb6e);
      uVar6 = ((code *)*(gen_code32 *)(*piVar7 + 0x1c))(piVar7);
      uVar9 = (uint)(*(byte *)(gen_frame + 0xee));
      uVar6 = uVar6 & 0xff;
      uVar8 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0xe8)) + 0x1c))((*(int * PTR32 *)(gen_frame + 0xe8)));
      fVar14 = F_006b9c10((uint)(*(byte *)(gen_frame + 0xef)),uVar8 & 0xff,uVar9,uVar6);
      fVar10 = -(float10)fVar14;
    }
    (*(float *)(gen_frame + 0xd8)) = (float)fVar10;
  }
LAB_006c80d5: ;
  ((float *)(gen_frame + 0x2b0))[0] = 0.0;
  ((float *)(gen_frame + 0x2b0))[1] = gen_bits2f(REFG(float, 0x10946b8));
  ((float *)(gen_frame + 0x2b0))[2] = gen_bits2f(REFG(float, 0x10b9484));
  ((float *)(gen_frame + 0x2b0))[3] = gen_bits2f(REFG(float, 0x10b9480));
  (*(undefined4 *)(gen_frame + 0x2c0)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10b947c)));
  (*(undefined4 *)(gen_frame + 0x2c4)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10947a4)));
  (*(undefined4 *)(gen_frame + 0x2c8)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10b9478)));
  fVar14 = ((float)GEN_TOF((((float10)((float *)(gen_frame + 0x2b0))[(int)((*(uint *)(gen_frame + 0xa8)))] * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                  (float10)*(double *)&REFG(undefined, 0x1080220))));
  (*(undefined * PTR32 *)(gen_frame + 0xe0)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar14)));
  fVar10 = ((float10)GEN_TOD(fsin((float10)fVar14)));
  fVar1 = (float)fVar10;
  (*(int * PTR32 *)(gen_frame + 0xe8)) = ((int *)(uintptr_t)gen_fl2bits((float)(fVar1)));
  fVar10 = ((float10)GEN_TOD(fcos((float10)fVar14)));
  fVar14 = (float)fVar10;
  (*(undefined * PTR32 *)(gen_frame + 0xe0)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar14)));
  ((float *)(gen_frame + 0x270))[1] = 0.0;
  ((float *)(gen_frame + 0x270))[0] = fVar14;
  (*(undefined4 *)(gen_frame + 0x280)) = 0;
  (*(float *)(gen_frame + 0x284)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x288)) = 0;
  (*(undefined4 *)(gen_frame + 0x294)) = 0;
  ((float *)(gen_frame + 0x270))[2] = ((float)GEN_TOF(-(float10)fVar1));
  (*(undefined4 *)(gen_frame + 0x2a0)) = 0;
  (*(undefined4 *)(gen_frame + 0x2a4)) = 0;
  (*(float *)(gen_frame + 0x290)) = fVar1;
  (*(undefined4 *)(gen_frame + 0x2a8)) = 0;
  (*(float *)(gen_frame + 0x298)) = fVar14;
  fVar10 = (float10)(*(float *)(gen_frame + 0x8c));
  (*(float *)(gen_frame + 0xb0)) = (float)(fVar10 * (float10)(*(float *)(gen_frame + 0xc0)));
  (*(float *)(gen_frame + 0xb4)) = (float)((float10)(*(float *)(gen_frame + 0xc4)) * fVar10);
  (*(float *)(gen_frame + 0xb8)) = (float)(fVar10 * (float10)(*(float *)(gen_frame + 0xc8)));
  fVar14 = ((float)GEN_TOF(((float10)(float)(fVar10 * (float10)(*(float *)(gen_frame + 0xc0))) + (float10)(*(float *)(gen_frame + 0x90)))));
  (*(float *)(gen_frame + 0xc0)) = fVar14;
  fVar1 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0xc4)) * fVar10) + (float10)(*(float *)(gen_frame + 0x94)))));
  (*(float *)(gen_frame + 0xc4)) = fVar1;
  fVar2 = ((float)GEN_TOF(((float10)(float)(fVar10 * (float10)(*(float *)(gen_frame + 0xc8))) + (float10)(*(float *)(gen_frame + 0x98)))));
  (*(float *)(gen_frame + 0xc8)) = fVar2;
  (*(float *)(gen_frame + 0x70)) = fVar14;
  (*(float *)(gen_frame + 0x78)) = fVar2;
  (*(float *)(gen_frame + 0x74)) = (float)((float10)fVar1 - (float10)(*(float *)(gen_frame + 0xac)));
  fVar14 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0xdc)) +
                  ((float10)(*(float *)(gen_frame + 0xe4)) +
                  ((float10)*((float *)GEN_TOP((*(int *)(iVar5 + 4) + 0xc0))) +
                  (float10)*((float *)GEN_TOP((*(int *)(iVar4 + 4) + 0xc0)))) * (float10)REFG(double, 0x1088108)))));
  (*(float *)(gen_frame + 0xe4)) = fVar14;
  fVar14 = (float)((float10)REFG(double, 0x1088108) * (float10)fVar14);
  (*(float *)(gen_frame + 0xe4)) = fVar14;
  fVar10 = (float10)(*(float *)(gen_frame + 0xd4));
  (*(float *)(gen_frame + 0xd4)) = (float)(fVar10 * (float10)*(double *)&REFG(undefined, 0x10968c8));
  fVar10 = ((float10)GEN_TOD(fsin((float10)(float)(fVar10 * (float10)*(double *)&REFG(undefined, 0x10968c8)))));
  (*(float *)(gen_frame + 0xd4)) = (float)fVar10;
  fVar14 = ((float)GEN_TOF(((float10)fVar14 / ((float10)(float)fVar10 * (float10)REFG(double, 0x1088108)))));
  (*(float *)(gen_frame + 0xd4)) = fVar14;
  fVar10 = (float10)fVar14;
  (*(float *)(gen_frame + 0xb0)) = (float)(fVar10 * (float10)(*(float *)(gen_frame + 0x50)));
  (*(float *)(gen_frame + 0xb4)) = (float)((float10)(*(float *)(gen_frame + 0x54)) * fVar10);
  (*(float *)(gen_frame + 0xb8)) = (float)(fVar10 * (float10)(*(float *)(gen_frame + 0x58)));
  (*(float *)(gen_frame + 0x40)) = (float)(fVar10 * (float10)(*(float *)(gen_frame + 0x50)));
  (*(float *)(gen_frame + 0x44)) = (float)((float10)(*(float *)(gen_frame + 0x54)) * fVar10);
  (*(float *)(gen_frame + 0x48)) = (float)(fVar10 * (float10)(*(float *)(gen_frame + 0x58)));
  F_004eea10(&(*(float *)(gen_frame + 0x40)),(uint)((float *)(gen_frame + 0x270)));
  fVar14 = (float)((float10)(*(float *)(gen_frame + 0x70)) + (float10)(*(float *)(gen_frame + 0x40)));
  (*(float *)(gen_frame + 0x90)) = fVar14;
  (*(float *)(gen_frame + 0x94)) = (float)((float10)(*(float *)(gen_frame + 0x44)) + (float10)(*(float *)(gen_frame + 0x74)));
  fVar1 = (float)((float10)(*(float *)(gen_frame + 0x78)) + (float10)(*(float *)(gen_frame + 0x48)));
  (*(float *)(gen_frame + 0x98)) = fVar1;
  (*(float *)(gen_frame + 0x30)) = fVar14;
  (*(float *)(gen_frame + 0x34)) = (float)((float10)(*(float *)(gen_frame + 0x44)) + (float10)(*(float *)(gen_frame + 0x74)));
  (*(float *)(gen_frame + 0x38)) = fVar1;
  if (GEN_ISNAN((*(float *)(gen_frame + 0xd8))) == (GEN_ISNAN((*(float *)(gen_frame + 0xd8))) || (*(float *)(gen_frame + 0xd8)) == 0.0)) {
    fVar14 = (float)((float10)(*(float *)(gen_frame + 0x70)) - (float10)fVar14);
    (*(float *)(gen_frame + 0x50)) = fVar14;
    (*(float *)(gen_frame + 0xb4)) = 0.0;
    fVar1 = (float)((float10)(*(float *)(gen_frame + 0x78)) - (float10)fVar1);
    (*(float *)(gen_frame + 0x58)) = fVar1;
    (*(float *)(gen_frame + 0xb0)) = fVar14;
    (*(float *)(gen_frame + 0xb8)) = fVar1;
    F_0065e920(((float *)(gen_frame + 0x2b0)),(uint)&(*(float *)(gen_frame + 0xb0)));
    F_0054ce40(&(*(float *)(gen_frame + 0xc0)),(uint)((float *)(gen_frame + 0x2b0)),(uint)&(*(undefined4 *)(gen_frame + 0x0)));
    fVar11 = (float10)(*(float *)(gen_frame + 0xc0));
    fVar12 = (float10)(*(float *)(gen_frame + 0xd8));
    (*(float *)(gen_frame + 0xc0)) = (float)(fVar12 * fVar11);
    fVar13 = (float10)(*(float *)(gen_frame + 0xc4));
    (*(float *)(gen_frame + 0xc4)) = (float)(fVar13 * fVar12);
    fVar10 = (float10)(*(float *)(gen_frame + 0xc8));
    (*(float *)(gen_frame + 0xc8)) = (float)(fVar12 * fVar10);
    fVar11 = (float10)(float)(fVar12 * fVar11);
    (*(float *)(gen_frame + 0x70)) = (float)(fVar11 + (float10)(*(float *)(gen_frame + 0x70)));
    fVar13 = (float10)(float)(fVar13 * fVar12);
    (*(float *)(gen_frame + 0x74)) = (float)(fVar13 + (float10)(*(float *)(gen_frame + 0x74)));
    fVar10 = (float10)(float)(fVar12 * fVar10);
    (*(float *)(gen_frame + 0x78)) = (float)(fVar10 + (float10)(*(float *)(gen_frame + 0x78)));
    (*(float *)(gen_frame + 0x30)) = (float)((float10)(*(float *)(gen_frame + 0x90)) + fVar11);
    (*(float *)(gen_frame + 0x34)) = (float)(fVar13 + (float10)(*(float *)(gen_frame + 0x94)));
    (*(float *)(gen_frame + 0x38)) = (float)(fVar10 + (float10)(*(float *)(gen_frame + 0x98)));
  }
  F_00b718e0((*(undefined * PTR32 *)(gen_frame + 0x88)),&(*(float *)(gen_frame + 0x70)),&(*(float *)(gen_frame + 0x30)));
  F_00a02240(((undefined1 *)(gen_frame + 0x10)));
  F_00c47745((*(uint *)(gen_frame + 0x2dc)) ^ (uint)(uint)(gen_frame + 0x2e0));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf79 */
uint F_006c8500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c8500u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  undefined * this_00;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),(*(undefined4 *)&gen_args[1]));
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  (*(undefined4 *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(undefined4 *)&gen_args[1]), 1, 3),uVar1 != 0);
  if (REFG(int, 0x1375bbc) != 1) {
    F_00b70d10(&REFG(undefined4, 0x1375b90),1);
  }
  if (REFG(int, 0x1375bbc) == -1) {
    this_00 = (undefined *)0x0;
  }
  else {
    this_00 = ((undefined *)GEN_TOP((&REFG(undefined4, 0x1375b90))[(int)(REFG(int, 0x1375bbc))]));
  }
  F_00b72010(this_00,(*(undefined4 *)&gen_args[1]));
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf86 */
uint F_006c8570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c8570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  F_00ab6c00(uVar1,0,0,0,0,0);
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf89 */
uint F_006c85b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c85b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0xd4 + uVar1))) = 1;
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf90 */
uint F_006c85f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c85f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0xd4 + uVar1))) = 0;
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf97 */
uint F_006c8630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c8630u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),(*(undefined4 *)&gen_args[1]));
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  (*(undefined4 *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(undefined4 *)&gen_args[1]), 1, 3),(char)uVar1);
  F_00b7c0d0(&REFG(undefined, 0x133e5c0),1,(*(undefined4 *)&gen_args[1]),*(float *)&REFG(undefined, 0x10b4230));
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf98 */
uint F_006c8680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c8680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),3);
  iVar1 = REFG(int, 0x137104c);
  uVar4 = uVar2 * 0x3c + uVar3;
  iVar5 = ((((((int)uVar2 >> 0x1f) << 4 | uVar2 >> 0x1c) - ((int)uVar2 >> 0x1f)) -
           (uint)(uVar2 * 0x10 < uVar2)) * 4 | uVar2 * 0xf >> 0x1e) + ((int)uVar3 >> 0x1f) +
          (uint)CARRY4(uVar2 * 0x3c,uVar3);
  *(undefined1 *)(REFG(int, 0x137104c) + 0x1250) = 1;
  *(uint *)(iVar1 + 0x1248) = uVar4 * 0x3c;
  *(uint *)(iVar1 + 0x124c) =
       (((iVar5 * 0x10 | uVar4 >> 0x1c) - iVar5) - (uint)(uVar4 * 0x10 < uVar4)) * 4 |
       uVar4 * 0xf >> 0x1e;
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf101 */
uint F_006c8720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c8720u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  int * piVar2;
  
  F_00a02210(((undefined1 *)(gen_frame + 0xc)),(*(undefined4 *)&gen_args[1]));
  bVar1 = F_00a01e10(((undefined1 *)(gen_frame + 0xc)),2);
  (*(undefined4 *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(undefined4 *)&gen_args[1]), 1, 3),bVar1);
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  ((code *)*(gen_code32 *)(*piVar2 + 0x74))(piVar2,(*(undefined4 *)&gen_args[1]));
  F_00a02240(((undefined1 *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf64 */
uint F_006c8770(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6c8770u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  F_00a02210(((undefined1 *)(gen_frame + 0xc)),(undefined4)gen_fl2bits((*(float *)&gen_args[1])));
  fVar3 = F_00a01dd0(((undefined1 *)(gen_frame + 0xc)),2);
  (*(float *)(gen_frame + 0x2c)) = ((float)GEN_TOF(((fVar3 * (float10)*(double *)&REFG(undefined, 0x1080228)) / (float10)*(double *)&REFG(undefined, 0x1080220)
                    )));
  fVar3 = F_00a01dd0(((undefined1 *)(gen_frame + 0xc)),3);
  (*(float *)(gen_frame + 0x30)) = ((float)GEN_TOF(((fVar3 * (float10)*(double *)&REFG(undefined, 0x1080228)) / (float10)*(double *)&REFG(undefined, 0x1080220)
                    )));
  uVar1 = F_00b9c9b0((*(undefined4 *)(gen_frame + 0x14)),4);
  fVar3 = (float10)(int)uVar1;
  if ((int)uVar1 < 0) {
    fVar3 = fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  (*(float *)(gen_frame + 0x34)) = (float)(fVar3 * (float10)*(double *)&REFG(double, 0x10b9470));
  (*(float *)(gen_frame + 0x38)) = 0.0;
  (*(float *)&gen_args[1]) = 0.0;
  F_006c7460(((undefined1 *)(gen_frame + 0xc)),5,&(*(float *)(gen_frame + 0x38)),&(*(float *)&gen_args[1]));
  if (REFG(int, 0x1375bbc) != 1) {
    F_00b70d10(&REFG(undefined4, 0x1375b90),1);
  }
  if (REFG(int, 0x1375bbc) == -1) {
    uVar2 = 0;
  }
  else {
    uVar2 = (&REFG(undefined4, 0x1375b90))[(int)(REFG(int, 0x1375bbc))];
  }
  F_00b71b90(uVar2,(*(float *)(gen_frame + 0x2c)),(*(float *)(gen_frame + 0x30)),(*(float *)(gen_frame + 0x34)),(*(float *)(gen_frame + 0x38)),(*(float *)&gen_args[1]));
  F_00a02240(((undefined1 *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf65 */
uint F_006c8870(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6c8870u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  F_00a02210(((undefined1 *)(gen_frame + 0xc)),(undefined4)gen_fl2bits((*(float *)&gen_args[1])));
  fVar3 = F_00a01dd0(((undefined1 *)(gen_frame + 0xc)),2);
  (*(float *)(gen_frame + 0x2c)) = ((float)GEN_TOF(((fVar3 * (float10)*(double *)&REFG(undefined, 0x1080228)) / (float10)*(double *)&REFG(undefined, 0x1080220)
                    )));
  fVar3 = F_00a01dd0(((undefined1 *)(gen_frame + 0xc)),3);
  (*(float *)(gen_frame + 0x30)) = ((float)GEN_TOF(((fVar3 * (float10)*(double *)&REFG(undefined, 0x1080228)) / (float10)*(double *)&REFG(undefined, 0x1080220)
                    )));
  uVar1 = F_00b9c9b0((*(undefined4 *)(gen_frame + 0x14)),4);
  fVar3 = (float10)(int)uVar1;
  if ((int)uVar1 < 0) {
    fVar3 = fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  (*(float *)(gen_frame + 0x34)) = (float)(fVar3 * (float10)*(double *)&REFG(double, 0x10b9470));
  (*(float *)(gen_frame + 0x38)) = 0.0;
  (*(float *)&gen_args[1]) = 0.0;
  F_006c7460(((undefined1 *)(gen_frame + 0xc)),5,&(*(float *)(gen_frame + 0x38)),&(*(float *)&gen_args[1]));
  if (REFG(int, 0x1375bbc) != 1) {
    F_00b70d10(&REFG(undefined4, 0x1375b90),1);
  }
  if (REFG(int, 0x1375bbc) == -1) {
    uVar2 = 0;
  }
  else {
    uVar2 = (&REFG(undefined4, 0x1375b90))[(int)(REFG(int, 0x1375bbc))];
  }
  F_00b71be0(uVar2,(*(float *)(gen_frame + 0x2c)),(*(float *)(gen_frame + 0x30)),(*(float *)(gen_frame + 0x34)),(*(float *)(gen_frame + 0x38)),(*(float *)&gen_args[1]));
  F_00a02240(((undefined1 *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf69 */
uint F_006c8970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c8970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  
  ((uint *)(gen_frame + 0x2c))[3] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  bVar1 = 0;
  uVar3 = F_00a019d0(((byte *)(gen_frame + 0xc)));
  if ((2 < (int)uVar3) && (uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),3), uVar3 != 0)) {
    bVar1 = 1;
  }
  if (((int)uVar2 < 0) || (2 < (int)uVar2)) {
    uVar2 = 0;
  }
  ((uint *)(gen_frame + 0x2c))[0] = 0x3c;
  ((uint *)(gen_frame + 0x2c))[1] = 0x1e;
  ((uint *)(gen_frame + 0x2c))[2] = 0x5a;
  uVar2 = ((uint *)(gen_frame + 0x2c))[(int)(uVar2)];
  piVar4 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  ((code *)*(gen_code32 *)(*piVar4 + 0xa4))(piVar4,(uint)bVar1,uVar2,1);
  F_00a02240(((byte *)(gen_frame + 0xc)));
  F_00c47745(((uint *)(gen_frame + 0x2c))[3] ^ (uint)(uint)(gen_frame + 0x3c));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf70 */
uint F_006c8a30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c8a30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  
  ((uint *)(gen_frame + 0x2c))[3] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  bVar1 = 0;
  uVar3 = F_00a019d0(((byte *)(gen_frame + 0xc)));
  if ((2 < (int)uVar3) && (uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),3), uVar3 != 0)) {
    bVar1 = 1;
  }
  if (((int)uVar2 < 0) || (2 < (int)uVar2)) {
    uVar2 = 0;
  }
  ((uint *)(gen_frame + 0x2c))[0] = 0x3c;
  ((uint *)(gen_frame + 0x2c))[1] = 0x1e;
  ((uint *)(gen_frame + 0x2c))[2] = 0x5a;
  uVar2 = ((uint *)(gen_frame + 0x2c))[(int)(uVar2)];
  piVar4 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  ((code *)*(gen_code32 *)(*piVar4 + 0xa8))(piVar4,(uint)bVar1,uVar2,1);
  F_00a02240(((byte *)(gen_frame + 0xc)));
  F_00c47745(((uint *)(gen_frame + 0x2c))[3] ^ (uint)(uint)(gen_frame + 0x3c));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf74 */
uint F_006c8af0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6c8af0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  F_00a02210(((undefined1 *)(gen_frame + 0xc)),(undefined4)gen_fl2bits((*(float *)&gen_args[1])));
  fVar3 = F_00a01dd0(((undefined1 *)(gen_frame + 0xc)),2);
  (*(float *)(gen_frame + 0x2c)) = (float)fVar3;
  fVar3 = F_00a01dd0(((undefined1 *)(gen_frame + 0xc)),3);
  (*(float *)(gen_frame + 0x30)) = (float)fVar3;
  uVar1 = F_00b9c9b0((*(undefined4 *)(gen_frame + 0x14)),4);
  fVar3 = (float10)(int)uVar1;
  if ((int)uVar1 < 0) {
    fVar3 = fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  (*(float *)(gen_frame + 0x34)) = (float)(fVar3 * (float10)*(double *)&REFG(double, 0x10b9470));
  (*(float *)(gen_frame + 0x38)) = 0.0;
  (*(float *)&gen_args[1]) = 0.0;
  F_006c7460(((undefined1 *)(gen_frame + 0xc)),5,&(*(float *)(gen_frame + 0x38)),&(*(float *)&gen_args[1]));
  if (REFG(int, 0x1375bbc) != 1) {
    F_00b70d10(&REFG(undefined4, 0x1375b90),1);
  }
  if (REFG(int, 0x1375bbc) == -1) {
    uVar2 = 0;
  }
  else {
    uVar2 = (&REFG(undefined4, 0x1375b90))[(int)(REFG(int, 0x1375bbc))];
  }
  F_00b71d10(uVar2,(*(float *)(gen_frame + 0x2c)),(*(float *)(gen_frame + 0x30)),(*(float *)(gen_frame + 0x34)),(*(float *)(gen_frame + 0x38)),(*(float *)&gen_args[1]));
  F_00a02240(((undefined1 *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf75 */
uint F_006c8bd0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6c8bd0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  F_00a02210(((undefined1 *)(gen_frame + 0xc)),(undefined4)gen_fl2bits((*(float *)&gen_args[1])));
  fVar3 = F_00a01dd0(((undefined1 *)(gen_frame + 0xc)),2);
  (*(float *)(gen_frame + 0x2c)) = (float)fVar3;
  fVar3 = F_00a01dd0(((undefined1 *)(gen_frame + 0xc)),3);
  (*(float *)(gen_frame + 0x30)) = (float)fVar3;
  uVar1 = F_00b9c9b0((*(undefined4 *)(gen_frame + 0x14)),4);
  fVar3 = (float10)(int)uVar1;
  if ((int)uVar1 < 0) {
    fVar3 = fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  (*(float *)(gen_frame + 0x34)) = (float)(fVar3 * (float10)*(double *)&REFG(double, 0x10b9470));
  (*(float *)(gen_frame + 0x38)) = 0.0;
  (*(float *)&gen_args[1]) = 0.0;
  F_006c7460(((undefined1 *)(gen_frame + 0xc)),5,&(*(float *)(gen_frame + 0x38)),&(*(float *)&gen_args[1]));
  if (REFG(int, 0x1375bbc) != 1) {
    F_00b70d10(&REFG(undefined4, 0x1375b90),1);
  }
  if (REFG(int, 0x1375bbc) == -1) {
    uVar2 = 0;
  }
  else {
    uVar2 = (&REFG(undefined4, 0x1375b90))[(int)(REFG(int, 0x1375bbc))];
  }
  F_00b71d60(uVar2,(*(float *)(gen_frame + 0x2c)),(*(float *)(gen_frame + 0x30)),(*(float *)(gen_frame + 0x34)),(*(float *)(gen_frame + 0x38)),(*(float *)&gen_args[1]));
  F_00a02240(((undefined1 *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf77 */
uint F_006c8cb0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6c8cb0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  F_00a02210(((undefined1 *)(gen_frame + 0xc)),(undefined4)gen_fl2bits((*(float *)&gen_args[1])));
  fVar3 = F_00a01dd0(((undefined1 *)(gen_frame + 0xc)),2);
  (*(float *)(gen_frame + 0x2c)) = (float)fVar3;
  fVar3 = F_00a01dd0(((undefined1 *)(gen_frame + 0xc)),3);
  (*(float *)(gen_frame + 0x30)) = (float)fVar3;
  uVar1 = F_00b9c9b0((*(undefined4 *)(gen_frame + 0x14)),4);
  fVar3 = (float10)(int)uVar1;
  if ((int)uVar1 < 0) {
    fVar3 = fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  (*(float *)(gen_frame + 0x34)) = (float)(fVar3 * (float10)*(double *)&REFG(double, 0x10b9470));
  (*(float *)(gen_frame + 0x38)) = 0.0;
  (*(float *)&gen_args[1]) = 0.0;
  F_006c7460(((undefined1 *)(gen_frame + 0xc)),5,&(*(float *)(gen_frame + 0x38)),&(*(float *)&gen_args[1]));
  if (REFG(int, 0x1375bbc) != 1) {
    F_00b70d10(&REFG(undefined4, 0x1375b90),1);
  }
  if (REFG(int, 0x1375bbc) == -1) {
    uVar2 = 0;
  }
  else {
    uVar2 = (&REFG(undefined4, 0x1375b90))[(int)(REFG(int, 0x1375bbc))];
  }
  F_00b71e90(uVar2,(*(float *)(gen_frame + 0x2c)),(*(float *)(gen_frame + 0x30)),(*(float *)(gen_frame + 0x34)),(*(float *)(gen_frame + 0x38)),(*(float *)&gen_args[1]));
  F_00a02240(((undefined1 *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf80 */
uint F_006c8d90(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6c8d90u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  F_00a02210(((undefined1 *)(gen_frame + 0xc)),(undefined4)gen_fl2bits((*(float *)&gen_args[1])));
  fVar3 = F_00a01dd0(((undefined1 *)(gen_frame + 0xc)),2);
  (*(float *)(gen_frame + 0x2c)) = ((float)GEN_TOF(((fVar3 * (float10)*(double *)&REFG(undefined, 0x1080228)) / (float10)*(double *)&REFG(undefined, 0x1080220)
                    )));
  fVar3 = F_00a01dd0(((undefined1 *)(gen_frame + 0xc)),3);
  (*(float *)(gen_frame + 0x30)) = ((float)GEN_TOF(((fVar3 * (float10)*(double *)&REFG(undefined, 0x1080228)) / (float10)*(double *)&REFG(undefined, 0x1080220)
                    )));
  uVar1 = F_00b9c9b0((*(undefined4 *)(gen_frame + 0x14)),4);
  fVar3 = (float10)(int)uVar1;
  if ((int)uVar1 < 0) {
    fVar3 = fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  (*(float *)(gen_frame + 0x34)) = (float)(fVar3 * (float10)*(double *)&REFG(double, 0x10b9470));
  (*(float *)(gen_frame + 0x38)) = 0.0;
  (*(float *)&gen_args[1]) = 0.0;
  F_006c7460(((undefined1 *)(gen_frame + 0xc)),5,&(*(float *)(gen_frame + 0x38)),&(*(float *)&gen_args[1]));
  if (REFG(int, 0x1375bbc) != 1) {
    F_00b70d10(&REFG(undefined4, 0x1375b90),1);
  }
  if (REFG(int, 0x1375bbc) == -1) {
    uVar2 = 0;
  }
  else {
    uVar2 = (&REFG(undefined4, 0x1375b90))[(int)(REFG(int, 0x1375bbc))];
  }
  F_00b71f50(uVar2,(*(float *)(gen_frame + 0x2c)),(*(float *)(gen_frame + 0x30)),(*(float *)(gen_frame + 0x34)),(*(float *)(gen_frame + 0x38)),(*(float *)&gen_args[1]));
  F_00a02240(((undefined1 *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf82 */
uint F_006c8e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c8e90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  byte bVar2;
  uint uVar3;
  float10 fVar4;
  
  F_00a02210(((undefined1 *)(gen_frame + 0x4)),param_1);
  uVar3 = F_00a019d0(((undefined1 *)(gen_frame + 0x4)));
  fVar4 = F_00a01dd0(((undefined1 *)(gen_frame + 0x4)),2);
  (*(float *)(gen_frame + 0x24)) = (float)fVar4;
  (*(float *)(gen_frame + 0x28)) = 0.0;
  if (3 < (int)uVar3) {
    bVar2 = F_00a01f20(((undefined1 *)(gen_frame + 0x4)),4);
    if (bVar2 == 0) {
      param_1 = F_00b9c9b0((*(undefined4 *)(gen_frame + 0xc)),4);
      (*(float *)(gen_frame + 0x28)) = (float)((float10)(int)param_1 * (float10)*(double *)&REFG(double, 0x10b9470));
    }
  }
  uVar1 = param_1 >> 8;
  param_1 = param_1 & 0xffffff00;
  if (2 < (int)uVar3) {
    bVar2 = F_00a01f20(((undefined1 *)(gen_frame + 0x4)),3);
    if (bVar2 == 0) {
      bVar2 = F_00a01e10(((undefined1 *)(gen_frame + 0x4)),3);
      param_1 = CONCAT31((int3)uVar1,bVar2);
    }
  }
  F_00b6b910(&REFG(undefined, 0x1375b9c),1,(*(float *)(gen_frame + 0x24)),(*(float *)(gen_frame + 0x28)),param_1);
  F_00a02240(((undefined1 *)(gen_frame + 0x4)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf83 */
uint F_006c8f50(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6c8f50u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float param_1 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),(undefined4)gen_fl2bits(param_1));
  param_1 = 0.0;
  uVar2 = F_00a019d0(((byte *)(gen_frame + 0xc)));
  if (1 < (int)uVar2) {
    bVar1 = F_00a01f20(((byte *)(gen_frame + 0xc)),2);
    if (bVar1 == 0) {
      uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
      param_1 = (float)((float10)(int)uVar2 * (float10)*(double *)&REFG(double, 0x10b9470));
    }
  }
  F_00b6b970(&REFG(undefined, 0x1375b9c),param_1,1);
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf87 */
uint F_006c8fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c8fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  F_006b93e0(((undefined *)GEN_TOP((*(int *)(this + 4) + 0x70))),uVar1);
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf91 */
uint F_006c9010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c9010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint in_ecx;
  int * piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  in_ecx = F_00424810(REFG(undefined4, 0x137104c));
  if (in_ecx != 0) {
    piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    if (piVar1 != (int *)0x0) {
      uVar4 = 0;
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
      uVar2 = F_00763050(uVar2,uVar4);
      if (uVar2 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = uVar2 + 0x10;
      }
      F_00975110(in_ecx,iVar3);
    }
  }
  if (*(char *)(REFG(int, 0x1488344) + 0x725) == '\0') {
    *(undefined1 *)(REFG(int, 0x1488344) + 0x725) = 1;
  }
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf108 */
uint F_006c9080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c9080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  piVar3 = *(int * PTR32 *)(iVar1 + 4);
  if (uVar2 != 0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,2,0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return 0;
  }
  ((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,2,0);
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf109 */
uint F_006c9100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c9100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float fVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  int * piVar5;
  float * pfVar6;
  float * pfVar7;
  code * pcVar8;
  float10 fVar9;
  
  F_00a02210(((undefined1 *)(gen_frame + 0x0)),param_1);
  uVar3 = F_00a01d20(((undefined1 *)(gen_frame + 0x0)),1);
  piVar4 = (int *)F_00b9c710((*(undefined4 *)(gen_frame + 0x8)),1,uVar3);
  piVar4 = *(int * PTR32 *)(*piVar4 + 4);
  bVar2 = F_00a01f40(((undefined1 *)(gen_frame + 0x0)),2);
  if (bVar2 == 1) {
    (*(undefined * PTR32 *)(gen_frame + 0x38)) = (undefined *)piVar4[0x2c];
    fVar9 = F_00a01dd0(((undefined1 *)(gen_frame + 0x0)),2);
    (*(float *)(gen_frame + 0x3c)) = (float)fVar9;
    pcVar8 = *(gen_code32 *)(*piVar4 + 0x48);
    fVar1 = ((float)GEN_TOF((((float10)(float)fVar9 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                   (float10)*(double *)&REFG(undefined, 0x1080220))));
    (*(float *)(gen_frame + 0x3c)) = fVar1;
    (*(undefined * PTR32 *)(gen_frame + 0x38)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)((float10)fVar1 + (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x38)))))))));
  }
  else {
    uVar3 = F_00a01d20(((undefined1 *)(gen_frame + 0x0)),2);
    piVar5 = (int *)F_00b9c710((*(undefined4 *)(gen_frame + 0x8)),2,uVar3);
    (*(undefined * PTR32 *)(gen_frame + 0x38)) = *(undefined * PTR32 *)(*piVar5 + 4);
    pfVar6 = (float *)F_00a5feb0(piVar4);
    pfVar7 = (float *)F_00a5feb0((*(undefined * PTR32 *)(gen_frame + 0x38)));
    (*(float *)(gen_frame + 0x20)) = (float)((float10)*pfVar7 - (float10)*pfVar6);
    (*(float *)(gen_frame + 0x28)) = (float)((float10)pfVar7[2] - (float10)pfVar6[2]);
    fVar9 = ((float10)GEN_TOD(atan2((float10)(float)((float10)*pfVar7 - (float10)*pfVar6),
                            (float10)(float)((float10)pfVar7[2] - (float10)pfVar6[2]))));
    (*(undefined * PTR32 *)(gen_frame + 0x38)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)fVar9)));
    pcVar8 = *(gen_code32 *)(*piVar4 + 0x48);
  }
  (*pcVar8)(piVar4,(*(undefined * PTR32 *)(gen_frame + 0x38)));
  F_00a02240(((undefined1 *)(gen_frame + 0x0)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf110 */
uint F_006c9200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c9200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this_00;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  this_00 = *(undefined * PTR32 *)(*piVar2 + 4);
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar4 = 0;
  uVar3 = F_00a019d0(((byte *)(gen_frame + 0xc)));
  if (2 < (int)uVar3) {
    uVar4 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),3);
  }
  F_00a5f860(this_00,uVar1,uVar4);
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf111 */
uint F_006c9280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c9280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this_00;
  uint uVar1;
  int * piVar2;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  this_00 = *(undefined * PTR32 *)(*piVar2 + 0x60);
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  F_00ae2030(this_00,uVar1 & 0xffff);
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf112 */
uint F_006c92e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c92e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this_00;
  undefined * this_01;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  piVar3 = (int *)*piVar3;
  this_00 = (undefined *)piVar3[0x18];
  this_01 = *(undefined * PTR32 *)((int)this_00 + 0xf0);
  uVar2 = 0;
  bVar1 = F_005dbc90(this_01,1);
  if (bVar1 != 0) {
    uVar2 = 2;
  }
  bVar1 = F_005dbc90(this_01,2);
  if (bVar1 != 0) {
    uVar2 = uVar2 | 4;
  }
  bVar1 = F_005dbc90(this_01,4);
  if (bVar1 != 0) {
    uVar2 = uVar2 | 0x10;
  }
  if ((short)uVar2 != 0) {
    F_00ae2030(this_00,uVar2);
    ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,5,0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return 0;
  }
  F_005f51d0(this_01,0,1);
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf114 */
uint F_006c93a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c93a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  this_00 = *(undefined * PTR32 *)(iVar1 + 0x60);
  uVar4 = F_00aa02d0(this_00,uVar2,0);
  if ((char)uVar4 != '\0') {
    F_00aa01d0(this_00,uVar2,0);
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf118 */
uint F_006c9410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c9410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 in_ecx;
  uint uVar1;
  int * piVar2;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  in_ecx = *(undefined4 *)(*piVar2 + 0x60);
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  F_00aa0560(in_ecx,uVar1);
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf123 */
uint F_006c9470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c9470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *(int *)(*piVar3 + 0x60);
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  *(bool *)(iVar1 + 0x2ea7) = uVar2 != 0;
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf130 */
uint F_006c94d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c94d0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  undefined4 uVar4;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),(*(undefined4 *)&gen_args[1]));
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  this_00 = *(undefined * PTR32 *)(*piVar3 + 0x60);
  bVar1 = F_00a01e10(((byte *)(gen_frame + 0xc)),2);
  (*(undefined4 *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(undefined4 *)&gen_args[1]), 1, 3),bVar1);
  F_00aa6f20(this_00,(*(undefined4 *)&gen_args[1]),1);
  if (bVar1 == 0) {
    uVar4 = 0x30f;
  }
  else {
    uVar4 = 0x22;
  }
  F_00aa0560(this_00,uVar4);
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf131 */
uint F_006c9550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c9550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),3);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar4 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar3);
  F_00aa80c0(*(undefined * PTR32 *)(*piVar4 + 0x60),uVar1,uVar2,0);
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf132 */
uint F_006c95c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c95c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),3);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar4 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar3);
  F_00aa2260(*(undefined * PTR32 *)(*piVar4 + 0x60),uVar1,uVar2);
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf134 */
uint F_006c9630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c9630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  bVar1 = F_00a01e10(((byte *)(gen_frame + 0xc)),2);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  if (bVar1 != 0) {
    F_00aa05d0(*(undefined * PTR32 *)(*piVar3 + 0x60),0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return 0;
  }
  F_00aa0600(*(undefined * PTR32 *)(*piVar3 + 0x60),0);
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf125 */
uint F_006c96a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c96a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2);
  (*(uint *)(gen_frame + 0x28)) = uVar2;
  uVar2 = param_1 >> 8;
  param_1 = param_1 & 0xffffff00;
  uVar4 = F_00a019d0(((byte *)(gen_frame + 0x8)));
  iVar6 = iVar1;
  if (2 < (int)uVar4) {
    uVar5 = F_00a01d20(((byte *)(gen_frame + 0x8)),3);
    piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),3,uVar5);
    iVar6 = *piVar3;
  }
  if (3 < (int)uVar4) {
    uVar4 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),4);
    param_1 = CONCAT31((int3)uVar2,(char)uVar4);
  }
  F_00ab4370((*(uint *)(gen_frame + 0x28)),*(undefined4 *)(iVar1 + 0x60),*(undefined4 *)(iVar6 + 0x60),param_1,0);
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf126 */
uint F_006c9760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6c9760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  float10 fVar2;
  uint uVar3;
  int * piVar4;
  float10 fVar5;
  
  F_00a02210(((byte *)(gen_frame + 0x8)),param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar4 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar3);
  iVar1 = *piVar4;
  uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2);
  iVar1 = *(int *)(iVar1 + 0x60);
  if (uVar3 == 0) {
    uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),3);
    fVar5 = (float10)(int)uVar3;
    if ((int)uVar3 < 0) {
      fVar5 = fVar5 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    fVar2 = (float10)*(double *)&REFG(undefined, 0x1088070);
    F_00aa0980(iVar1,(float)(float10)0,0);
    *(float *)(iVar1 + 0x2ec8) = ((float)GEN_TOF((((float10)1 / fVar5) * fVar2)));
    F_00a02240(((byte *)(gen_frame + 0x8)));
    return 0;
  }
  if (uVar3 == 1) {
    uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),3);
    fVar5 = (float10)(int)uVar3;
    if ((int)uVar3 < 0) {
      fVar5 = fVar5 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    (*(float *)(gen_frame + 0x28)) = ((float)GEN_TOF((((float10)1 / fVar5) * (float10)*(double *)&REFG(undefined, 0x1088070))));
    F_00aa0980(iVar1,(float)((float10)1 - (float10)*(double *)&REFG(undefined, 0x108bec8)),0);
    *(float *)(iVar1 + 0x2ec8) = ((float)GEN_TOF(-(float10)(*(float *)(gen_frame + 0x28))));
    F_00a02240(((byte *)(gen_frame + 0x8)));
    return 0;
  }
  if (uVar3 == 2) {
    fVar5 = (float10)(float)((float10)1 - (float10)*(double *)&REFG(undefined, 0x108bec8));
  }
  else {
    if (uVar3 != 3) goto LAB_006c9896;
    fVar5 = (float10)0;
  }
  F_00aa0980(iVar1,(float)fVar5,0);
  *(undefined4 *)(iVar1 + 0x2ec8) = GEN_FLT_TO(*(undefined4 *)(iVar1 + 0x2ec8), REFG(float, 0x10b9490));
LAB_006c9896: ;
  F_00a02240(((byte *)(gen_frame + 0x8)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneTaskInterface::vf3 */
byte F_006c98b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6c98b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  
  if (param_2 != (int *)0x0) {
    if ((*(uint *)(param_1 + 0x6c) & 0x400) != 0) {
      piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      ((code *)*(gen_code32 *)(*piVar1 + 0xa8))(piVar1,0,0xf,1);
    }
    ((code *)*(gen_code32 *)(*param_2 + 0x14c))(param_2,param_2[0x18]);
  }
  return 1;
}

/* ref: Client::Game::Event::CreateAppearanceTask::vf3 */
byte F_006c9900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6c9900u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  
  if (*(int *)(this + 0x90) != 0) {
    F_00ae0cd0(&REFG(undefined, 0x14c0920),*(undefined4 *)(this + 0x14));
  }
  if (param_2 != (int *)0x0) {
    if ((*(uint *)(param_1 + 0x6c) & 0x400) != 0) {
      piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      ((code *)*(gen_code32 *)(*piVar1 + 0xa8))(piVar1,0,0xf,1);
    }
    ((code *)*(gen_code32 *)(*param_2 + 0x14c))(param_2,param_2[0x18]);
  }
  return 1;
}

/* ref: Client::Game::Event::PlayCutSceneTask::vf2 */
uint F_006c9970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6c9970u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  
  if ((*(uint *)(param_1 + 0x6c) & 0x400) != 0) {
    F_00a06560(0);
  }
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1)));
  uVar2 = F_007cbc20(this_00);
  if (param_2 != (int *)0x0) {
    uVar2 = F_00b5f400(REFG(void * PTR32, 0x14c4ea0),0x1000000f);
    uVar2 = ((code *)*(gen_code32 *)(*param_2 + 0x17c))(param_2,uVar2);
  }
  return uVar2;
}

/* ref: Client::Game::Event::PostCutSceneTask::vf1 */
uint F_006c99d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6c99d0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float fVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  int * piVar5;
  uint uVar6;
  undefined * pvVar7;
  undefined4 * in_ecx;
  
  if (*(char *)(param_1 + 4) != '\0') goto LAB_006c9bd5;
  piVar5 = (int *)F_00424750(REFG(int, 0x137104c));
  in_ecx = (undefined4 *)(param_1 + 0x10);
  if ((*(char *)*in_ecx != '\0') && (*(char *)(param_1 + 5) == '\0')) {
    uVar6 = ((code *)*(gen_code32 *)(*piVar5 + 0xa0))(piVar5);
    pvVar7 = REFG(void * PTR32, 0x1375b00);
    if ((uVar6 & 8) != 0) {
      return 0;
    }
    if (*(char *)(param_2 + 0xd4) == '\0') {
      uVar6 = F_0042a990(in_ecx);
      bVar3 = F_0052f530(pvVar7,uVar6);
      pvVar7 = REFG(void * PTR32, 0x1375b00);
      if (bVar3 == 0) {
        return 0;
      }
      uVar6 = F_0042a990(in_ecx);
      bVar3 = F_0052f640(pvVar7,uVar6);
      pvVar7 = REFG(void * PTR32, 0x1375b00);
      if (bVar3 == 0) {
        uVar6 = F_0042a990(in_ecx);
        F_0052f780(pvVar7,uVar6);
      }
    }
    pvVar7 = REFG(void * PTR32, 0x1375b00);
    uVar6 = F_0042a990(in_ecx);
    F_0052f5e0(pvVar7,uVar6);
    *(undefined1 *)(param_1 + 5) = 1;
  }
  if ((*(char *)(param_1 + 5) != '\0') && (*((int *)GEN_TOP(((int)REFG(void * PTR32, 0x1375b00) + 0x28))) != 0)) {
    return 0;
  }
  F_005d54a0(&REFG(undefined, 0x1379c6c),1);
  iVar2 = *(int *)(REFG(int, 0x137104c) + 0x25f8);
  if (*(int *)(param_1 + 0xc) == 2) {
    if (iVar2 != 0) {
      F_004e7f70(iVar2,(float)(float10)1);
      goto LAB_006c9ae7;
    }
  }
  else {
LAB_006c9ae7: ;
    if (iVar2 != 0) {
      F_004e7cc0(iVar2,(float)(float10)0);
    }
  }
  pvVar7 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar5 + 0x1c))(piVar5)));
  F_007cbc20(pvVar7);
  *(undefined1 *)(param_2 + 0xd4) = 0;
  F_004d1650(REFG(undefined4, 0x1370c18));
  uVar6 = 0;
  if ((*(char *)(param_2 + 0xd6) != '\0') &&
     (cVar4 = *(char *)(param_2 + 0xd6) + -1, *(char *)(param_2 + 0xd6) = cVar4, cVar4 == '\0')) {
    uVar6 = 2;
  }
  if ((*(char *)(param_2 + 0xd7) != '\0') &&
     (cVar4 = *(char *)(param_2 + 0xd7) + -1, *(char *)(param_2 + 0xd7) = cVar4, cVar4 == '\0')) {
    uVar6 = uVar6 | 4;
  }
  if ((*(char *)(param_2 + 0xd8) != '\0') &&
     (cVar4 = *(char *)(param_2 + 0xd8) + -1, *(char *)(param_2 + 0xd8) = cVar4, cVar4 == '\0')) {
    uVar6 = uVar6 | 8;
  }
  if ((*(char *)(param_2 + 0xd9) != '\0') &&
     (cVar4 = *(char *)(param_2 + 0xd9) + -1, *(char *)(param_2 + 0xd9) = cVar4, cVar4 == '\0')) {
    uVar6 = uVar6 | 0x20;
  }
  if ((*(char *)(param_2 + 0xda) != '\0') &&
     (cVar4 = *(char *)(param_2 + 0xda) + -1, *(char *)(param_2 + 0xda) = cVar4, cVar4 == '\0')) {
    uVar6 = uVar6 | 1;
  }
  if ((*(char *)(param_2 + 0xdb) != '\0') &&
     (cVar4 = *(char *)(param_2 + 0xdb) + -1, *(char *)(param_2 + 0xdb) = cVar4, cVar4 == '\0')) {
    uVar6 = uVar6 | 0x10;
  }
  if ((uVar6 != 0) && (piVar5 = (int *)F_00424750(REFG(int, 0x137104c)), piVar5 != (int *)0x0)) {
    ((code *)*(gen_code32 *)(*piVar5 + 0xb0))(piVar5,uVar6,1,1);
  }
  *(undefined1 *)(param_1 + 4) = 1;
LAB_006c9bd5: ;
  bVar3 = F_005e1600();
  if ((((bVar3 != 0) && (bVar3 = F_005d99e0(), piVar5 = REFG(int * PTR32, 0x1379694), bVar3 != 0)) &&
      (REFG(int * PTR32, 0x1379694) != (int *)0x0)) &&
     (((uVar6 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1379694) + 0x68))))(REFG(int * PTR32, 0x1379694)), (char)uVar6 != '\0' &&
       (uVar6 = ((code *)*(gen_code32 *)(*piVar5 + 0x70))(piVar5), (char)uVar6 != '\0')) &&
      ((bVar3 = F_00a355b0(0x80), bVar3 != 0 &&
       (fVar1 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 8) -
                       (float10)*(float *)(REFG(int, 0x137104c) + 0x1198)))), *(float *)(param_1 + 8) = fVar1,
       !((float10)0 < (float10)fVar1))))))) {
    if (*(int *)(REFG(int, 0x137104c) + 0x25f8) != 0) {
      F_004e7cc0(*(int *)(REFG(int, 0x137104c) + 0x25f8),(float)(float10)1);
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_006c9c80 */
uint F_006c9c80(unsigned int gen_a0)
{
  GEN_ENTER(0x6c9c80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int * piVar2;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087ef8)));
  *(byte *)((int)this + 8) = *(byte *)((int)this + 8) & 0xfc;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b9498));
  *(undefined4 *)((int)this + 4) = 2;
  *(undefined4 *)((int)this + 0xc) = uVar1;
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  ((code *)*(gen_code32 *)(*piVar2 + 0xa8))(piVar2,1,0,1);
  ((code *)*(gen_code32 *)(*piVar2 + 0xa4))(piVar2,0,0x18,1);
  F_00ab6c00(0x84,1,0,0,0,0);
  return (uint)this;
}

/* ref: Client::Game::Event::PlayStaffRollTask::vf1 */
uint F_006c9cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6c9cf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  float fVar1;
  byte bVar2;
  int * piVar3;
  undefined * pvVar4;
  uint uVar5;
  int iVar6;
  float10 fVar7;
  int iVar8;
  undefined4 uVar9;
  
  piVar3 = (int *)F_00424750(REFG(int, 0x137104c));
  fVar1 = *(float *)(this + 0xc);
  if (((!GEN_ISNAN(fVar1) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(fVar1 <= *(float *)&REFG(undefined, 0x1088114))) &&
     (fVar1 = ((float)GEN_TOF(((float10)fVar1 - (float10)*(float *)(REFG(int, 0x137104c) + 0x1198)))),
     fVar7 = (float10)fVar1, *(float *)(this + 0xc) = fVar1,
     (!GEN_ISNAN(fVar7) && !GEN_ISNAN((float10)0)) && !(fVar7 <= (float10)0))) {
    return 0;
  }
  if (((byte)this[8] & 1) == 0) {
    uVar9 = *(undefined4 *)(this + 4);
    pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3)));
    bVar2 = F_008976b0(pvVar4,uVar9);
    if (bVar2 != 0) {
      this[8] = (undefined1)((byte)this[8] | 1);
    }
  }
  else {
    if (((byte)this[8] & 2) == 0) {
      pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3)));
      bVar2 = F_007cbcf0(pvVar4);
      if (bVar2 != 0) {
        F_00ab6c00(1,1,3000,3000,0,0);
        this[8] = (undefined1)((byte)this[8] | 2);
        return 0;
      }
    }
    pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3)));
    uVar5 = F_007cbb90(pvVar4);
    if ((char)uVar5 != '\0') {
      pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3)));
      F_007cbc20(pvVar4);
      this[8] = (undefined1)((byte)this[8] & 0xfd);
      iVar6 = *(int *)(this + 4) + 1;
      if (4 < iVar6) {
        return 1;
      }
      *(undefined4 *)(this + 0xc) = 0;
      iVar8 = iVar6;
      pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3)));
      bVar2 = F_008976b0(pvVar4,iVar8);
      if ((bVar2 != 0) && (*(int *)(this + 4) = iVar6, iVar6 == 3)) {
        F_00ab6c00(0x85,1,0,0,0,0);
      }
      return 0;
    }
  }
  return 0;
}

/* ref: Client::Game::Event::PlayStaffRollTask::vf2 */
uint F_006c9e30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6c9e30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1)));
  F_007cbc20(this_00);
  uVar2 = F_00ab6c00(1,1,1000,1000,0,0);
  if (param_2 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*param_2 + 0x1b0))(param_2);
  }
  return uVar2;
}

/* ref: Client::Game::Event::PlayStaffRollTask::vf3 */
byte F_006c9e80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6c9e80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  
  if (param_2 != (int *)0x0) {
    if ((*(uint *)(param_1 + 0x6c) & 0x400) != 0) {
      piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      ((code *)*(gen_code32 *)(*piVar1 + 0xa8))(piVar1,0,0xf,1);
    }
    ((code *)*(gen_code32 *)(*param_2 + 0x14c))(param_2,param_2[0x18]);
  }
  return 1;
}

/* ref: Client::Game::Event::PlayToBeContinuedTask::vf1 */
uint F_006c9ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6c9ed0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  int * piVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined4 uVar5;
  
  piVar2 = (int *)F_00424750(REFG(int, 0x137104c));
  if (this[4] == (undefined1)0x0) {
    uVar5 = 5;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
    bVar1 = F_008976b0(pvVar3,uVar5);
    if (bVar1 != 0) {
      F_00ab6c00(1,0,0,0,0,0);
      F_004e7f70(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f8),(float)(float10)0);
      ((code *)*(gen_code32 *)(*piVar2 + 0xa8))(piVar2,1,0,1);
      ((code *)*(gen_code32 *)(*piVar2 + 0xa4))(piVar2,0,0,1);
      this[4] = (undefined1)0x1;
    }
  }
  else {
    pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
    uVar4 = F_007cbb90(pvVar3);
    if ((char)uVar4 != '\0') {
      pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
      F_007cbc20(pvVar3);
      return 1;
    }
  }
  return 0;
}

/* ref: Client::Game::Event::PlayToBeContinuedTask::vf2 */
uint F_006c9f90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6c9f90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  
  piVar1 = (int *)F_00424750(REFG(int, 0x137104c));
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1)));
  F_007cbc20(this_00);
  uVar2 = F_004e7f70(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f8),(float)(float10)0);
  if (param_2 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*param_2 + 0x1b4))(param_2);
  }
  return uVar2;
}

/* ref: Client::Game::Event::PlayToBeContinuedTask::vf3 */
byte F_006c9fe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6c9fe0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  
  if (param_2 != (int *)0x0) {
    if ((*(uint *)(param_1 + 0x6c) & 0x400) != 0) {
      piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      ((code *)*(gen_code32 *)(*piVar1 + 0xa8))(piVar1,0,0xf,1);
    }
    ((code *)*(gen_code32 *)(*param_2 + 0x14c))(param_2,param_2[0x18]);
  }
  return 1;
}

/* ref: FUN_006ca030 */
uint F_006ca030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6ca030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xa0))(piVar1);
  if (uVar2 == 10) {
    *(undefined2 *)((int)this + 0x408) = 0x101;
    return 10;
  }
  *(undefined1 *)((int)this + 0x408) = 1;
  return uVar2;
}

/* ref: FUN_006ca070 */
uint F_006ca070(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6ca070u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_trace_f(gen_a3));
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  float * pfVar5;
  undefined3 extraout_var = 0;
  float10 fVar6;
  float fVar7;
  
  (*(uint *)(gen_frame + 0xfc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x100);
  ((float *)(gen_frame + 0x80))[0] = 0.0;
  ((float *)(gen_frame + 0x80))[1] = 0.0;
  ((float *)(gen_frame + 0x80))[2] = 0.0;
  fVar6 = ((float10)GEN_TOD(fsin((float10)param_2)));
  fVar7 = (float)fVar6;
  (*(float *)(gen_frame + 0xac)) = fVar7;
  (*(float *)(gen_frame + 0x9c)) = fVar7;
  fVar6 = ((float10)GEN_TOD(fcos((float10)param_2)));
  fVar1 = (float)fVar6;
  (*(float *)(gen_frame + 0xac)) = fVar1;
  ((float *)(gen_frame + 0xb0))[0] = fVar1;
  ((float *)(gen_frame + 0xb0))[1] = 0.0;
  (*(undefined4 *)(gen_frame + 0xc0)) = 0;
  (*(undefined4 *)(gen_frame + 0xc8)) = 0;
  (*(undefined4 *)(gen_frame + 0xd4)) = 0;
  ((float *)(gen_frame + 0xb0))[2] = ((float)GEN_TOF(-(float10)fVar7));
  (*(undefined4 *)(gen_frame + 0xe0)) = 0;
  (*(undefined4 *)(gen_frame + 0xe4)) = 0;
  (*(float *)(gen_frame + 0xd0)) = fVar7;
  (*(undefined4 *)(gen_frame + 0xe8)) = 0;
  (*(float *)(gen_frame + 0xd8)) = fVar1;
  (*(undefined4 *)(gen_frame + 0xc4)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  if (param_3 == 1) {
    fVar7 = gen_bits2f((uint)gen_fl2bits(param_4) ^ REFG(uint, 0x10920d0));
  }
  else {
    if (param_3 == 2) {
      ((float *)(gen_frame + 0x80))[0] = gen_bits2f((uint)gen_fl2bits(param_4) ^ REFG(uint, 0x10920d0));
      goto LAB_006ca138;
    }
    fVar7 = param_4;
    if (param_3 == 3) {
      ((float *)(gen_frame + 0x80))[0] = param_4;
      goto LAB_006ca138;
    }
  }
  ((float *)(gen_frame + 0x80))[2] = fVar7;
LAB_006ca138: ;
  pfVar5 = (float *)F_004ee670(&(*(float *)(gen_frame + 0x70)),(uint)((float *)(gen_frame + 0x80)),(uint)((float *)(gen_frame + 0xb0)));
  fVar7 = *pfVar5;
  (*(float *)(gen_frame + 0x90)) = fVar7;
  fVar1 = pfVar5[1];
  (*(float *)(gen_frame + 0x94)) = fVar1;
  fVar2 = pfVar5[2];
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(float *)(gen_frame + 0x98)) = fVar2;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  fVar7 = (float)((float10)*param_1 + (float10)fVar7);
  (*(float *)(gen_frame + 0x70)) = fVar7;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  fVar1 = (float)((float10)param_1[1] + (float10)fVar1);
  (*(float *)(gen_frame + 0x74)) = fVar1;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  fVar3 = param_1[2];
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  fVar2 = (float)((float10)fVar3 + (float10)fVar2);
  (*(float *)(gen_frame + 0x78)) = fVar2;
  (*(undefined4 *)(gen_frame + 0x60)) = 0;
  (*(float *)(gen_frame + 0x98)) = 2.29589e-41;
  (*(float *)(gen_frame + 0x9c)) = 2.29589e-41;
  (*(float *)(gen_frame + 0x68)) = (float)((float10)fVar1 + (float10)*(double *)&REFG(undefined, 0x10947f0));
  (*(float *)(gen_frame + 0x64)) = fVar7;
  (*(undefined4 *)(gen_frame + 0x5c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10b3ae0)));
  (*(float *)(gen_frame + 0x6c)) = fVar2;
  bVar4 = F_005518b0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25e0),&(*(undefined4 *)(gen_frame + 0x8)),&(*(float *)(gen_frame + 0x64)),&(*(undefined4 *)(gen_frame + 0x58)),(unsigned int)gen_fl2bits((float)(REFG(float, 0x1094880))),1,&(*(float *)(gen_frame + 0x98)));
  if (bVar4 != 0) {
    *param_5 = (*(undefined4 *)(gen_frame + 0x8));
    param_5[1] = (*(undefined4 *)(gen_frame + 0xc));
    param_5[2] = (*(undefined4 *)(gen_frame + 0x10));
  }
  F_00c47745((*(uint *)(gen_frame + 0xfc)) ^ (uint)(uint)(gen_frame + 0x100));
  return CONCAT31(extraout_var,bVar4);
}

/* ref: Client::Game::Event::WaitForTimeTask::vf1 */
uint F_006ca300(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6ca300u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float fVar1;
  
  fVar1 = ((float)GEN_TOF(((float10)*(float *)(in_ecx + 4) - (float10)*(float *)(REFG(int, 0x137104c) + 0x1198))));
  *(float *)(in_ecx + 4) = fVar1;
  if ((float10)fVar1 <= (float10)0) {
    return 1;
  }
  return 0;
}

/* ref: Client::Game::Event::CancelEventSceneTask::vf3 */
byte F_006ca340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6ca340u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  
  if (param_2 != (int *)0x0) {
    if ((*(uint *)(param_1 + 0x6c) & 0x400) != 0) {
      piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      ((code *)*(gen_code32 *)(*piVar1 + 0xa8))(piVar1,0,0xf,1);
    }
    ((code *)*(gen_code32 *)(*param_2 + 0x14c))(param_2,param_2[0x18]);
  }
  return 0;
}

/* ref: Client::Game::Event::CharacterTaskBase::vf1 */
uint F_006ca390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6ca390u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(this + 0x10);
  if ((uVar3 == 0xffffffff) || (bVar1 = F_00ae0dd0(uVar3), bVar1 == 0)) {
    if (*(int *)(this + 8) == -0x20000000) {
      uVar3 = 0;
    }
    else {
      uVar3 = F_00a354d0(&REFG(undefined4, 0x14a31f0),*(int *)(this + 8),*(undefined4 *)(this + 0xc));
    }
  }
  else if (uVar3 < 0x158) {
    uVar3 = (&REFG(undefined4, 0x14a31f0))[(int)(uVar3)];
  }
  else {
    uVar3 = 0;
  }
  uVar2 = 0;
  if (uVar3 != 0) {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,param_1,uVar3);
  }
  return uVar2;
}

/* ref: Client::Game::Event::WaitForLookAtTask::vf6 */
uint F_006ca400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6ca400u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  byte bVar1;
  
  bVar1 = F_00aa1320(param_2,0xffffffff);
  if (bVar1 != 0) {
    bVar1 = F_00aa1330(param_2,0xffffffff);
    return (uint)(bVar1 != 0);
  }
  bVar1 = F_00aa1340(param_2,0xffffffff);
  if (bVar1 != 0) {
    bVar1 = F_00aa1350(param_2,0xffffffff);
    return (uint)(bVar1 != 0);
  }
  return 1;
}

/* ref: Client::Game::Event::WaitTimeAfterCharacterTransparency::vf6 */
uint F_006ca470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6ca470u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  float fVar1;
  
  fVar1 = *(float *)(in_ecx + 0x18);
  if ((!GEN_ISNAN(fVar1) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(fVar1 <= *(float *)&REFG(undefined, 0x1088114))) {
    *(float *)(in_ecx + 0x18) = ((float)GEN_TOF(((float10)fVar1 - (float10)*(float *)(REFG(int, 0x137104c) + 0x1198))))
    ;
    return 0;
  }
  F_00aa0980(param_3,(float)((float10)1 - (float10)*(double *)&REFG(undefined, 0x108bec8)),0);
  *(undefined4 *)(param_3 + 0x2ec8) = GEN_FLT_TO(*(undefined4 *)(param_3 + 0x2ec8), REFG(float, 0x10b3ae0));
  return 1;
}

/* ref: Client::Game::Event::WaitForFadeTask::vf1 */
uint F_006ca4e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6ca4e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  if (piVar1 == (int *)0x0) {
    return 1;
  }
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xa0))(piVar1);
  return ((int)(char)~(byte)uVar2 & 8U) >> 3;
}

/* ref: Client::Game::Event::AutoShakeInvokeTask::vf1 */
uint F_006ca520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6ca520u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  undefined * this_00;
  byte bVar2;
  undefined * pvVar3;
  uint uVar4;
  uint * puVar5;
  uint uVar6;
  
  uVar6 = *(uint *)(this + 0x10);
  if ((uVar6 == 0xffffffff) || (bVar2 = F_00ae0dd0(uVar6), bVar2 == 0)) {
    if (*(int *)(this + 8) == -0x20000000) {
      pvVar3 = (undefined *)0x0;
    }
    else {
      pvVar3 = (undefined *)F_00a354d0(&REFG(undefined4, 0x14a31f0),*(int *)(this + 8),*(undefined4 *)(this + 0xc));
    }
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar3;
  }
  else if (uVar6 < 0x158) {
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[(int)(uVar6)]));
  }
  else {
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  }
  pvVar3 = REFG(void * PTR32, 0x14c4e84);
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) == (undefined *)0x0) {
    return 1;
  }
  if (this[0x18] == (undefined1)0x0) {
    F_00aa0600((*(undefined * PTR32 *)(gen_frame + 0x8)),0);
    return 1;
  }
  if (*(int *)(this + 0x14) != 0) {
    uVar6 = *(uint *)(this + 0x14);
    uVar4 = F_00aa0210((*(undefined * PTR32 *)(gen_frame + 0x8)),0,0);
    if (uVar6 != uVar4) {
      return 1;
    }
    puVar5 = (uint *)F_00ab2a20(uVar6);
    if (puVar5 == (uint *)0x0) {
      return 1;
    }
    uVar1 = *(undefined4 *)(this + 0x10);
    ((int *)(gen_frame + 0x0))[0] = (*puVar5 & 0xffffff) + (int)puVar5;
    ((int *)(gen_frame + 0x0))[1] = 0xffffffff;
    bVar2 = F_00b5afa0(pvVar3,uVar1,((int *)(gen_frame + 0x0)));
    if (bVar2 == 0) {
      return 0;
    }
  }
  this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
  uVar6 = F_00b5b160(pvVar3,*(undefined4 *)(this + 0x10),0);
  if ((char)uVar6 != '\0') {
    F_00aa05d0(this_00,0);
    return 1;
  }
  return 0;
}

/* ref: Client::Game::Event::AutoShakeInvokeTask::vf2 */
unsigned int F_006ca630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6ca630u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  byte bVar1;
  uint uVar2;
  
  if (param_2 == (int *)0x0) {
    return 0;
  }
  uVar2 = *(uint *)(this + 0x10);
  if ((uVar2 == 0xffffffff) || (bVar1 = F_00ae0dd0(uVar2), bVar1 == 0)) {
    if (*(int *)(this + 8) != -0x20000000) {
      uVar2 = F_00a354d0(&REFG(undefined4, 0x14a31f0),*(int *)(this + 8),*(undefined4 *)(this + 0xc));
      goto LAB_006ca684;
    }
  }
  else if (uVar2 < 0x158) {
    uVar2 = (&REFG(undefined4, 0x14a31f0))[(int)(uVar2)];
    goto LAB_006ca684;
  }
  uVar2 = 0;
LAB_006ca684: ;
  ((code *)*(gen_code32 *)(*param_2 + 0x1a0))(param_2,uVar2,(uint)(byte)this[0x18]);
  return 0;
}

/* ref: Client::Game::Event::EquipChangeTask::vf1 */
uint F_006ca6a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6ca6a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  byte bVar2;
  uint uVar3;
  undefined * this_00;
  
  uVar3 = F_00ab24a0(*(undefined4 *)(this + 0x18));
  if (uVar3 == 0) {
    return 0;
  }
  uVar1 = *(uint *)(this + 0x10);
  if ((uVar1 == 0xffffffff) || (bVar2 = F_00ae0dd0(uVar1), bVar2 == 0)) {
    if (*(int *)(this + 8) == -0x20000000) {
      this_00 = (undefined *)0x0;
    }
    else {
      this_00 = (undefined *)F_00a354d0(&REFG(undefined4, 0x14a31f0),*(int *)(this + 8),*(undefined4 *)(this + 0xc));
    }
  }
  else if (uVar1 < 0x158) {
    this_00 = ((undefined *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[(int)(uVar1)]));
  }
  else {
    this_00 = (undefined *)0x0;
  }
  if (this_00 != (undefined *)0x0) {
    if (*(int *)(this + 0x14) == 0) {
      F_00aa80c0(this_00,(uint)(byte)this[0x1c],*(undefined4 *)(uVar3 + 0x18),
                   *(undefined4 *)(uVar3 + 0x1c));
      return 1;
    }
    F_00aa2260(this_00,(uint)(byte)this[0x1c],*(undefined4 *)(uVar3 + 0x18));
  }
  return 1;
}

/* ref: Client::Game::Event::EquipChangeTask::vf2 */
unsigned int F_006ca750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6ca750u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  byte bVar1;
  uint uVar2;
  
  if (param_2 != (int *)0x0) {
    uVar2 = *(uint *)(this + 0x10);
    if (uVar2 != 0xffffffff) {
      bVar1 = F_00ae0dd0(uVar2);
      if (bVar1 != 0) {
        if (uVar2 < 0x158) {
          ((code *)*(gen_code32 *)(*param_2 + 0x1a4))(param_2,(&REFG(undefined4, 0x14a31f0))[(int)(uVar2)]);
          return 0;
        }
        goto LAB_006ca7a6;
      }
    }
    if (*(int *)(this + 8) == -0x20000000) {
LAB_006ca7a6: ;
      ((code *)*(gen_code32 *)(*param_2 + 0x1a4))(param_2,0);
      return 0;
    }
    uVar2 = F_00a354d0(&REFG(undefined4, 0x14a31f0),*(int *)(this + 8),*(undefined4 *)(this + 0xc));
    ((code *)*(gen_code32 *)(*param_2 + 0x1a4))(param_2,uVar2);
  }
  return 0;
}

/* ref: FUN_006ca7e0 */
unsigned int F_006ca7e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ca7e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined4 uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b8b60));
  if (*(char *)((int)this + 0xc) == '\0') {
    piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    if (piVar1 != (int *)0x0) {
      uVar3 = 1;
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
      uVar2 = F_00763050(uVar2,uVar3);
      if (uVar2 != 0) {
        F_007e3970(uVar2);
      }
    }
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b8a64));
  return 0;
}

/* ref: FUN_006ca830 */
uint F_006ca830(unsigned int gen_a0)
{
  GEN_ENTER(0x6ca830u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  byte bVar2;
  uint uVar3;
  undefined4 * puVar4;
  uint uVar5;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  puVar4 = (undefined4 *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar3);
  piVar1 = (int *)*puVar4;
  uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2);
  ((byte *)(gen_frame + 0x8))[0x20] = 1;
  ((byte *)(gen_frame + 0x8))[0x20] = 1;
  uVar5 = F_00a019d0(((byte *)(gen_frame + 0x8)));
  if (2 < (int)uVar5) {
    bVar2 = F_00a01e10(((byte *)(gen_frame + 0x8)),3);
    ((byte *)(gen_frame + 0x8))[0x20] = bVar2;
  }
  ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,uVar3,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 0;
}

/* ref: FUN_006ca8b0 */
uint F_006ca8b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ca8b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined * puVar1;
  undefined * puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = F_00b9a750(*(undefined4 *)((int)param_1 + 8));
  puVar2 = REFG(undefined * PTR32, 0x13236dc);
  puVar1 = REFG(undefined * PTR32, 0x13236d8);
  F_00b9ae60(*(undefined4 *)((int)param_1 + 8),REFG(undefined * PTR32, 0x13236d8));
  F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  uVar4 = F_00b9a940(*(undefined4 *)((int)param_1 + 8),0xffffffff);
  if (uVar4 != 0) {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
    return 0;
  }
  F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
  F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar1);
  F_00b9b150(*(undefined4 *)((int)param_1 + 8),0,0);
  iVar5 = uVar3 + 2;
  F_00a01c40(param_1,iVar5,"className",puVar1);
  F_00a01c80(param_1,iVar5,"referenceCount",1);
  F_00a01cc0(param_1,iVar5,"PlayActionTimeline",((code *)REFP(0x6bafe0)));
  F_00a01cc0(param_1,iVar5,"CancelActionTimeline",((code *)REFP(0x6bb000)));
  F_00a01cc0(param_1,iVar5,"WaitForActionTimeline",((code *)REFP(0x6bb020)));
  F_00a01cc0(param_1,iVar5,"TurnTo",((code *)REFP(0x6bb040)));
  F_00a01cc0(param_1,iVar5,"WaitForTurn",((code *)REFP(0x6bb060)));
  F_00a01cc0(param_1,iVar5,&REFG(undefined, 0x10b4444),((code *)REFP(0x6bb080)));
  F_00a01cc0(param_1,iVar5,"LookAt",((code *)REFP(0x6bb0a0)));
  F_00a01cc0(param_1,iVar5,"WaitForLookAt",((code *)REFP(0x6bb0c0)));
  F_00a01cc0(param_1,iVar5,&REFG(undefined, 0x10b4464),((code *)REFP(0x6bb0e0)));
  F_00a01cc0(param_1,iVar5,"WaitForMove",((code *)REFP(0x6bb100)));
  F_00a01cc0(param_1,iVar5,"FootStep",((code *)REFP(0x6bb120)));
  F_00a01cc0(param_1,iVar5,"PlayVfx",((code *)REFP(0x6bb160)));
  F_00a01cc0(param_1,iVar5,"Transparency",((code *)REFP(0x6bb180)));
  F_00a01cc0(param_1,iVar5,"WaitForTransparency",((code *)REFP(0x6bb1a0)));
  if (puVar2 == (undefined *)0x0) {
    F_00b9bc00(*(undefined4 *)((int)param_1 + 8),puVar1);
    F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
    F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
    F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
    return 0;
  }
  F_00b9bc00(*(undefined4 *)((int)param_1 + 8),puVar1);
  F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
  F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
  F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
  F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar2);
  F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  F_00b9b290(*(undefined4 *)((int)param_1 + 8),iVar5,"__index");
  F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
  F_00b9b3d0(*(undefined4 *)((int)param_1 + 8),iVar5);
  F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  F_00a01ad0(param_1,puVar2);
  return 0;
}

/* ref: FUN_006cab30 */
uint F_006cab30(unsigned int gen_a0)
{
  GEN_ENTER(0x6cab30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b8de0));
  if (**(char * PTR32 *)((int)this + 8) != '\0') {
    uVar1 = F_0042a990((int)this + 8);
    F_00a023f0(*(undefined * PTR32 *)((int)this + 0x5c),uVar1);
  }
  uVar2 = F_0042c880((undefined *)((int)this + 8));
  return (uint)uVar2;
}

/* ref: FUN_006cab60 */
uint F_006cab60(unsigned int gen_a0)
{
  GEN_ENTER(0x6cab60u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),*((undefined4 *)GEN_TOP((*(int *)(*piVar2 + 4) + 0x74))));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cabb0 */
uint F_006cabb0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cabb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 4))))(*(int * PTR32 *)((int)this + 4));
  if ((char)uVar1 == '\x01') {
    return 0x4c7250;
  }
  return *((uint *)GEN_TOP((*(int *)((int)this + 4) + 0x80)));
}

/* ref: FUN_006cabe0 */
uint F_006cabe0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cabe0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  undefined4 uVar4;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  piVar3 = *(int * PTR32 *)(iVar1 + 4);
  uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
  if ((char)uVar2 == '\x01') {
    uVar4 = 0x4c7250;
  }
  else {
    uVar4 = *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 4) + 0x80)));
  }
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar4);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cac50 */
uint F_006cac50(unsigned int gen_a0)
{
  GEN_ENTER(0x6cac50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),*((undefined4 *)GEN_TOP((*(int *)(*piVar2 + 4) + 0x78))));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006caca0 */
uint F_006caca0(unsigned int gen_a0)
{
  GEN_ENTER(0x6caca0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  float * pfVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  pfVar3 = (float *)F_00a5feb0(*(undefined * PTR32 *)(*piVar2 + 4));
  F_00a01e60(((byte *)(gen_frame + 0xc)),*pfVar3);
  F_00a01e60(((byte *)(gen_frame + 0xc)),pfVar3[1]);
  F_00a01e60(((byte *)(gen_frame + 0xc)),pfVar3[2]);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 3;
}

/* ref: FUN_006cad20 */
uint F_006cad20(unsigned int gen_a0)
{
  GEN_ENTER(0x6cad20u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)*((ushort *)GEN_TOP((*(int *)(*piVar2 + 4) + 0xe6))));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cad80 */
uint F_006cad80(unsigned int gen_a0)
{
  GEN_ENTER(0x6cad80u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00a01ea0(((byte *)(gen_frame + 0xc)),(uint)(*((short *)GEN_TOP((*(int *)(*piVar2 + 4) + 0xe6))) != 0));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cade0 */
uint F_006cade0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cade0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(*piVar2 + 4) + 4))))(*(int * PTR32 *)(*piVar2 + 4));
  F_00a01ea0(((byte *)(gen_frame + 0xc)),(uint)((char)uVar1 == '\x01'));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cae40 */
uint F_006cae40(unsigned int gen_a0)
{
  GEN_ENTER(0x6cae40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(*piVar2 + 4) + 4))))(*(int * PTR32 *)(*piVar2 + 4));
  F_00a01ea0(((byte *)(gen_frame + 0xc)),(uint)((char)uVar1 == '\x03'));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006caea0 */
uint F_006caea0(unsigned int gen_a0)
{
  GEN_ENTER(0x6caea0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(*piVar2 + 4) + 4))))(*(int * PTR32 *)(*piVar2 + 4));
  F_00a01ea0(((byte *)(gen_frame + 0xc)),(uint)((char)uVar1 == '\x02'));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006caf00 */
uint F_006caf00(unsigned int gen_a0)
{
  GEN_ENTER(0x6caf00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(*piVar2 + 4) + 4))))(*(int * PTR32 *)(*piVar2 + 4));
  F_00a01ea0(((byte *)(gen_frame + 0xc)),(uint)((char)uVar1 == '\x02'));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006caf60 */
uint F_006caf60(unsigned int gen_a0)
{
  GEN_ENTER(0x6caf60u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(*piVar2 + 4) + 4))))(*(int * PTR32 *)(*piVar2 + 4));
  F_00a01ea0(((byte *)(gen_frame + 0xc)),(uint)((char)uVar1 == '\a'));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cafc0 */
uint F_006cafc0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cafc0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(*piVar2 + 4) + 4))))(*(int * PTR32 *)(*piVar2 + 4));
  F_00a01ea0(((byte *)(gen_frame + 0xc)),(uint)((char)uVar1 == '\x05'));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cb020 */
uint F_006cb020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6cb020u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined * puVar1;
  undefined * puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = F_00b9a750(*(undefined4 *)((int)param_1 + 8));
  puVar2 = REFG(undefined * PTR32, 0x13236f8);
  puVar1 = REFG(undefined * PTR32, 0x13236dc);
  F_00b9ae60(*(undefined4 *)((int)param_1 + 8),REFG(undefined * PTR32, 0x13236f8));
  F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  uVar4 = F_00b9a940(*(undefined4 *)((int)param_1 + 8),0xffffffff);
  if (uVar4 != 0) {
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
    return 0;
  }
  F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
  F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar2);
  F_00b9b150(*(undefined4 *)((int)param_1 + 8),0,0);
  iVar5 = uVar3 + 2;
  F_00a01c40(param_1,iVar5,"className",puVar2);
  F_00a01c80(param_1,iVar5,"referenceCount",1);
  F_00a01cc0(param_1,iVar5,"PlaySharedGroupTimeline",((code *)REFP(0x6baf80)));
  if (puVar1 == (undefined *)0x0) {
    F_00b9bc00(*(undefined4 *)((int)param_1 + 8),puVar2);
    F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
    F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
    F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
    F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
    return 0;
  }
  F_00b9bc00(*(undefined4 *)((int)param_1 + 8),puVar2);
  F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
  F_00b9b290(*(undefined4 *)((int)param_1 + 8),0xfffffffe,"__index");
  F_00b9a760(*(undefined4 *)((int)param_1 + 8),0xfffffffe);
  F_00b9ae60(*(undefined4 *)((int)param_1 + 8),puVar1);
  F_00b9b0d0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  F_00b9b290(*(undefined4 *)((int)param_1 + 8),iVar5,"__index");
  F_00b9a910(*(undefined4 *)((int)param_1 + 8),iVar5);
  F_00b9b3d0(*(undefined4 *)((int)param_1 + 8),iVar5);
  F_00b9b2f0(*(undefined4 *)((int)param_1 + 8),0xffffd8ee);
  F_00a01ad0(param_1,puVar1);
  return 0;
}

/* ref: FUN_006cb1c0 */
uint F_006cb1c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cb1c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  undefined4 uVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  uVar3 = 0;
  if (*piVar2 != 0) {
    uVar3 = *((undefined4 *)GEN_TOP((*(int *)(*piVar2 + 0x60) + 0x2e98)));
  }
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar3);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cb220 */
uint F_006cb220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6cb220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 4))))(*(int * PTR32 *)((int)this + 4));
  return (uint)*((byte *)GEN_TOP((param_1 + 0x2db8 + *(int *)((int)this + 4))));
}

/* ref: FUN_006cb250 */
uint F_006cb250(unsigned int gen_a0)
{
  GEN_ENTER(0x6cb250u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)*((byte *)GEN_TOP((*(int *)(*piVar2 + 0x60) + 0x1688))));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cb2b0 */
uint F_006cb2b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cb2b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 4))))(*(int * PTR32 *)((int)this + 4));
  if ((char)uVar1 == '\x01') {
    uVar2 = 0x4c7250;
  }
  else {
    uVar2 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 0x80)));
  }
  uVar1 = F_00ab22f0(uVar2);
  if (uVar1 != 0) {
    return (uint)*(ushort *)(uVar1 + 10);
  }
  return 0;
}

/* ref: FUN_006cb2f0 */
uint F_006cb2f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cb2f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  undefined4 uVar4;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar1 + 4) + 4))))(*(int * PTR32 *)(iVar1 + 4));
    if ((char)uVar2 == '\x01') {
      uVar4 = 0x4c7250;
    }
    else {
      uVar4 = *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 4) + 0x80)));
    }
    uVar2 = F_00ab22f0(uVar4);
    if (uVar2 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uint)*(ushort *)(uVar2 + 10);
    }
  }
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar2);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cb380 */
uint F_006cb380(unsigned int gen_a0)
{
  GEN_ENTER(0x6cb380u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)*((byte *)GEN_TOP((*(int *)(*piVar2 + 0x60) + 0x1689))));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cb3e0 */
uint F_006cb3e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cb3e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),*((undefined4 *)GEN_TOP((*(int *)(*piVar2 + 0x60) + 0x1690))));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cb460 */
uint F_006cb460(unsigned int gen_a0)
{
  GEN_ENTER(0x6cb460u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),
               (uint)(*((int *)GEN_TOP((*(int *)(*piVar2 + 0x60) + 0x1690))) * 100) /
               *((uint *)GEN_TOP((*(int *)(*piVar2 + 0x60) + 0x1694))));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cb4c0 */
uint F_006cb4c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cb4c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),*((undefined4 *)GEN_TOP((*(int *)(*piVar2 + 0x60) + 0x1694))));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cb520 */
uint F_006cb520(unsigned int gen_a0)
{
  GEN_ENTER(0x6cb520u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),*((undefined4 *)GEN_TOP((*(int *)(*piVar2 + 0x60) + 0x1698))));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cb5a0 */
uint F_006cb5a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cb5a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),
               (uint)(*((int *)GEN_TOP((*(int *)(*piVar2 + 0x60) + 0x1698))) * 100) /
               *((uint *)GEN_TOP((*(int *)(*piVar2 + 0x60) + 0x169c))));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cb600 */
uint F_006cb600(unsigned int gen_a0)
{
  GEN_ENTER(0x6cb600u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),*((undefined4 *)GEN_TOP((*(int *)(*piVar2 + 0x60) + 0x169c))));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cb660 */
uint F_006cb660(unsigned int gen_a0)
{
  GEN_ENTER(0x6cb660u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b8de0));
  if (**(char * PTR32 *)((int)this + 8) != '\0') {
    uVar1 = F_0042a990((int)this + 8);
    F_00a023f0(*(undefined * PTR32 *)((int)this + 0x5c),uVar1);
  }
  uVar2 = F_0042c880((undefined *)((int)this + 8));
  return (uint)uVar2;
}

/* ref: FUN_006cb690 */
uint F_006cb690(unsigned int gen_a0)
{
  GEN_ENTER(0x6cb690u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b8de0));
  if (**(char * PTR32 *)((int)this + 8) != '\0') {
    uVar1 = F_0042a990((int)this + 8);
    F_00a023f0(*(undefined * PTR32 *)((int)this + 0x5c),uVar1);
  }
  uVar2 = F_0042c880((undefined *)((int)this + 8));
  return (uint)uVar2;
}

/* ref: FUN_006cb6c0 */
uint F_006cb6c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cb6c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  undefined4 uVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if (REFG(int, 0x1379694) != *(int *)(*piVar2 + 0x60)) {
    F_00a01890(((byte *)(gen_frame + 0xc)));
    return 0;
  }
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = 6;
  uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x44))(piVar2);
  uVar1 = F_00435440(uVar1,uVar3);
  uVar1 = F_00438c90(uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cb750 */
uint F_006cb750(unsigned int gen_a0)
{
  GEN_ENTER(0x6cb750u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  undefined4 uVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if (REFG(int, 0x1379694) != *(int *)(*piVar2 + 0x60)) {
    F_00a01890(((byte *)(gen_frame + 0xc)));
    return 0;
  }
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = 6;
  uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x44))(piVar2);
  uVar1 = F_00435440(uVar1,uVar3);
  uVar1 = F_00438c70(uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cb7e0 */
uint F_006cb7e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cb7e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  undefined * this;
  undefined4 uVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if (REFG(int, 0x1379694) != *(int *)(*piVar2 + 0x60)) {
    F_00a01890(((byte *)(gen_frame + 0xc)));
    return 0;
  }
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = 6;
  uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x44))(piVar2);
  this = (undefined *)F_00435440(uVar1,uVar3);
  uVar1 = F_00438ca0(this);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cb870 */
byte F_006cb870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6cb870u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  ushort uVar2;
  
  uVar1 = F_00ab3fa0((param_2 & 0xff) + 1);
  if (uVar1 == 0) {
    return 0;
  }
  if ((char)param_1 == '\x01') {
    uVar2 = *(ushort *)(uVar1 + 0x14);
  }
  else if ((char)param_1 == '\x02') {
    uVar2 = *(ushort *)(uVar1 + 0x18);
  }
  else {
    if ((char)param_1 != '\x03') {
      return 1;
    }
    uVar2 = *(ushort *)(uVar1 + 0x1c);
  }
  if (uVar2 == 0) {
    return 1;
  }
  uVar1 = F_00a4ffd0();
  if (uVar2 >> 3 < 200) {
    return (*((byte *)GEN_TOP(((uVar2 >> 3) + 0x12ea + uVar1))) & (byte)(0x80 >> ((byte)uVar2 & 7))) != 0;
  }
  return 0;
}

/* ref: FUN_006cb900 */
uint F_006cb900(unsigned int gen_a0)
{
  GEN_ENTER(0x6cb900u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  
  F_00a01860(((byte *)(gen_frame + 0x4)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x4)),1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),1,uVar2);
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),2);
  ((byte *)(gen_frame + 0x4))[0x20] = (byte)uVar2;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),3);
  ((byte *)(gen_frame + 0x4))[0x24] = (byte)uVar2;
  bVar1 = F_006cb870((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 32)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 36)));
  F_00a01ea0(((byte *)(gen_frame + 0x4)),(uint)bVar1);
  F_00a01890(((byte *)(gen_frame + 0x4)));
  return 1;
}

/* ref: FUN_006cb980 */
uint F_006cb980(unsigned int gen_a0)
{
  GEN_ENTER(0x6cb980u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar3);
  uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2);
  ((byte *)(gen_frame + 0x8))[0x20] = (byte)uVar3;
  uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),3);
  uVar3 = F_00ab3fa0((uVar3 & 0xff) + 1);
  uVar1 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32));
  if (uVar3 == 0) {
    ((byte *)(gen_frame + 0x8))[0x20] = 0;
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)) = uVar1 & 0xffffff00;
  }
  else {
    bVar2 = F_00a62b00((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
    ((byte *)(gen_frame + 0x8))[0x20] = bVar2;
    uVar4 = F_00a629e0(&REFG(undefined, 0x14a9728),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
    bVar5 = *(byte *)(uVar3 + 0x22) <= *(byte *)(uVar4 + 0x30);
    ((byte *)(gen_frame + 0x8))[0x20] = bVar5;
  }
  F_00a01ea0(((byte *)(gen_frame + 0x8)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006cba30 */
uint F_006cba30(unsigned int gen_a0)
{
  GEN_ENTER(0x6cba30u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  uVar2 = F_00a4ffd0();
  bVar1 = F_00b8c9f0(uVar2);
  F_00a01ea0(((byte *)(gen_frame + 0xc)),(uint)bVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cba90 */
uint F_006cba90(unsigned int gen_a0)
{
  GEN_ENTER(0x6cba90u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)*((byte *)GEN_TOP((*(int *)(*piVar2 + 0x60) + 0x1688))));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cbaf0 */
uint F_006cbaf0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cbaf0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  uVar1 = F_00435250((uint)*((byte *)GEN_TOP((*(int *)(*piVar2 + 0x60) + 0x1688))),0);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cbb50 */
uint F_006cbb50(unsigned int gen_a0)
{
  GEN_ENTER(0x6cbb50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  int * piVar5;
  uint uVar6;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar4 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar5 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar4);
  uVar2 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32));
  iVar1 = *piVar5;
  ((byte *)(gen_frame + 0x8))[0x20] = 0;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)) = uVar2 & 0xffffff00;
  uVar4 = F_00a019d0(((byte *)(gen_frame + 0x8)));
  if ((int)uVar4 < 2) {
    iVar1 = *(int *)(iVar1 + 0x60);
    if (iVar1 == REFG(int, 0x1379694)) {
      uVar4 = F_00a68280(&REFG(undefined1, 0x14ab070),(uint)*(byte *)(iVar1 + 0x1688),0);
      uVar4 = uVar4 & 0xffff;
    }
    else {
      uVar4 = 0;
    }
    F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),uVar4);
    F_00a01890(((byte *)(gen_frame + 0x8)));
    return 1;
  }
  uVar6 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2);
  if (2 < (int)uVar4) {
    bVar3 = F_00a01e10(((byte *)(gen_frame + 0x8)),3);
    ((byte *)(gen_frame + 0x8))[0x20] = bVar3;
  }
  if (*(int *)(iVar1 + 0x60) == REFG(int, 0x1379694)) {
    uVar4 = F_00a68280(&REFG(undefined1, 0x14ab070),uVar6,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
    uVar4 = uVar4 & 0xffff;
  }
  else {
    uVar4 = 0;
  }
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),uVar4);
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006cbc50 */
uint F_006cbc50(unsigned int gen_a0)
{
  GEN_ENTER(0x6cbc50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar4 = 1;
  uVar2 = F_00a019d0(((byte *)(gen_frame + 0xc)));
  if (1 < (int)uVar2) {
    uVar4 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  }
  if (*(int *)(iVar1 + 0x60) == REFG(int, 0x1379694)) {
    uVar2 = F_00a68310(&REFG(undefined1, 0x14ab070),uVar4);
    uVar2 = uVar2 & 0xffff;
  }
  else {
    uVar2 = 0;
  }
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar2);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cbcf0 */
uint F_006cbcf0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cbcf0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if (*(int *)(*piVar2 + 0x60) == REFG(int, 0x1379694)) {
    uVar1 = (uint)REFG(undefined1, 0x14ab14e);
  }
  else {
    uVar1 = 0;
  }
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cbd60 */
uint F_006cbd60(unsigned int gen_a0)
{
  GEN_ENTER(0x6cbd60u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)REFG(undefined1, 0x14ab0d1));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cbdb0 */
uint F_006cbdb0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cbdb0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)REFG(undefined1, 0x14ab0d2));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cbe00 */
byte F_006cbe00(unsigned int gen_a0)
{
  GEN_ENTER(0x6cbe00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00a4ffd0();
  iVar3 = 0;
  iVar2 = uVar1 + 0x13b4;
  do {
    if (*(short *)(iVar2 + 4) == (short)param_1) {
      if (iVar3 < 0) {
        return 0;
      }
      return *(char *)(iVar2 + 6) != '\0';
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x10;
  } while (iVar3 < 0x1e);
  return 0;
}

/* ref: FUN_006cbe50 */
uint F_006cbe50(unsigned int gen_a0)
{
  GEN_ENTER(0x6cbe50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar3 = F_00a4ffd0();
  iVar5 = 0;
  iVar4 = uVar3 + 0x13b4;
  do {
    if (*(short *)(iVar4 + 4) == (short)uVar2) {
      if (-1 < iVar5) {
        cVar1 = *(char *)(iVar4 + 6);
        goto LAB_006cbea7;
      }
      break;
    }
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 0x10;
  } while (iVar5 < 0x1e);
  cVar1 = '\0';
LAB_006cbea7: ;
  F_00a01ea0(((byte *)(gen_frame + 0xc)),(uint)(cVar1 != '\0'));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cbee0 */
byte F_006cbee0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cbee0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00a4ffd0();
  uVar2 = param_1 >> 3 & 0x1fff;
  if (199 < uVar2) {
    return 0;
  }
  return (*(byte *)(uVar2 + 0x12ea + uVar1) & (byte)(0x80 >> ((byte)param_1 & 7))) != 0;
}

/* ref: FUN_006cbf20 */
uint F_006cbf20(unsigned int gen_a0)
{
  GEN_ENTER(0x6cbf20u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar1);
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2);
  uVar2 = F_00a4ffd0();
  uVar3 = (uVar1 & 0xffff) >> 3;
  if (uVar3 < 200) {
    bVar4 = (*(byte *)(uVar3 + 0x12ea + uVar2) & (byte)(0x80 >> ((byte)(uVar1 & 0xffff) & 7))) != 0;
    ((byte *)(gen_frame + 0x8))[0x20] = bVar4;
  }
  else {
    ((byte *)(gen_frame + 0x8))[0x20] = 0;
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)) = (uint)(uint3)GEN_PIECE(((byte *)(gen_frame + 0x8)), 33, 3) << 8;
  }
  F_00a01ea0(((byte *)(gen_frame + 0x8)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006cbfb0 */
byte F_006cbfb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6cbfb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)((int)this + 0x60) == REFG(int, 0x1379694)) {
    uVar1 = F_00a4ffd0();
    iVar3 = 0;
    iVar2 = uVar1 + 0x13b4;
    do {
      if (*(short *)(iVar2 + 4) == (short)param_1) {
        *param_2 = *(undefined1 *)(iVar2 + 6);
        return 1;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x10;
    } while (iVar3 < 0x1e);
  }
  return 0;
}

/* ref: FUN_006cc000 */
uint F_006cc000(unsigned int gen_a0)
{
  GEN_ENTER(0x6cc000u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  iVar4 = *piVar2;
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  bVar6 = 0;
  if (*(int *)(iVar4 + 0x60) == REFG(int, 0x1379694)) {
    uVar3 = F_00a4ffd0();
    iVar5 = 0;
    iVar4 = uVar3 + 0x13b4;
    do {
      if (*(short *)(iVar4 + 4) == (short)uVar1) {
        bVar6 = *(byte *)(iVar4 + 6);
        break;
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x10;
    } while (iVar5 < 0x1e);
  }
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)bVar6);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cc090 */
byte F_006cc090(unsigned int gen_a0)
{
  GEN_ENTER(0x6cc090u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00a4ffd0();
  bVar1 = F_006c05a0(uVar2,param_1);
  return bVar1;
}

/* ref: FUN_006cc0b0 */
uint F_006cc0b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cc0b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar3 = F_00a4ffd0();
  bVar1 = F_006c05a0(uVar3,uVar2 & 0xffff);
  F_00a01ea0(((byte *)(gen_frame + 0xc)),(uint)bVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cc150 */
uint F_006cc150(unsigned int gen_a0)
{
  GEN_ENTER(0x6cc150u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  byte bVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  uVar2 = F_00a4ffd0();
  bVar3 = 0;
  bVar1 = F_00a50620();
  if (bVar1 != 0) {
    bVar3 = *(byte *)(uVar2 + 0x15bb) & 0xf;
  }
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)bVar3);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cc1f0 */
uint F_006cc1f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cc1f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  byte bVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  uVar2 = F_00a4ffd0();
  bVar3 = 0;
  bVar1 = F_00a50620();
  if (bVar1 != 0) {
    bVar3 = *(byte *)(uVar2 + 0x15bb) >> 4;
  }
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)bVar3);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cc260 */
uint F_006cc260(unsigned int gen_a0)
{
  GEN_ENTER(0x6cc260u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  bool bVar4;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2);
  if (*(int *)(iVar1 + 0x60) == REFG(int, 0x1379694)) {
    bVar4 = ((&REFG(undefined1, 0x14b4ec0))[(int)(uVar2 >> 3)] & (byte)(1 << ((byte)uVar2 & 7))) != 0;
    ((byte *)(gen_frame + 0x8))[0x20] = bVar4;
  }
  else {
    ((byte *)(gen_frame + 0x8))[0x20] = 0;
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)) = (uint)(uint3)GEN_PIECE(((byte *)(gen_frame + 0x8)), 33, 3) << 8;
  }
  F_00a01ea0(((byte *)(gen_frame + 0x8)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006cc2f0 */
uint F_006cc2f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cc2f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  bool bVar5;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar4 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar3);
  iVar2 = *piVar4;
  uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2);
  uVar3 = F_00ab1ed0(uVar3);
  if ((uVar3 == 0) || (bVar1 = *(byte *)(uVar3 + 0x27), bVar1 == 0)) {
    ((byte *)(gen_frame + 0x8))[0x20] = 0;
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)) = (uint)(uint3)GEN_PIECE(((byte *)(gen_frame + 0x8)), 33, 3) << 8;
  }
  else {
    if (*(int *)(iVar2 + 0x60) == REFG(int, 0x1379694)) {
      bVar5 = ((&REFG(undefined1, 0x14b4ec0))[(int)(bVar1 >> 3)] & (byte)(1 << (bVar1 & 7))) != 0;
    }
    else {
      bVar5 = false;
    }
    ((byte *)(gen_frame + 0x8))[0x20] = bVar5;
  }
  F_00a01ea0(((byte *)(gen_frame + 0x8)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006cc390 */
uint F_006cc390(unsigned int gen_a0)
{
  GEN_ENTER(0x6cc390u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  bool bVar4;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2);
  if (*(int *)(iVar1 + 0x60) == REFG(int, 0x1379694)) {
    bVar4 = ((&REFG(undefined1, 0x14b4edc))[(int)(uVar2 >> 3)] & (byte)(1 << ((byte)uVar2 & 7))) != 0;
    ((byte *)(gen_frame + 0x8))[0x20] = bVar4;
  }
  else {
    ((byte *)(gen_frame + 0x8))[0x20] = 0;
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)) = (uint)(uint3)GEN_PIECE(((byte *)(gen_frame + 0x8)), 33, 3) << 8;
  }
  F_00a01ea0(((byte *)(gen_frame + 0x8)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006cc420 */
uint F_006cc420(unsigned int gen_a0)
{
  GEN_ENTER(0x6cc420u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  bool bVar4;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2);
  if (*(int *)(iVar1 + 0x60) == REFG(int, 0x1379694)) {
    bVar4 = ((&REFG(undefined, 0x14b4f0c))[(int)((uVar2 & 0xffff) >> 3)] & (byte)(1 << ((byte)(uVar2 & 0xffff) & 7))) !=
            0;
    ((byte *)(gen_frame + 0x8))[0x20] = bVar4;
  }
  else {
    ((byte *)(gen_frame + 0x8))[0x20] = 0;
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)) = (uint)(uint3)GEN_PIECE(((byte *)(gen_frame + 0x8)), 33, 3) << 8;
  }
  F_00a01ea0(((byte *)(gen_frame + 0x8)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006cc4b0 */
uint F_006cc4b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cc4b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if (*(int *)(*piVar2 + 0x60) == REFG(int, 0x1379694)) {
    uVar1 = F_00a3ace0(&REFG(undefined, 0x14a4230));
  }
  else {
    uVar1 = 0;
  }
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cc520 */
uint F_006cc520(unsigned int gen_a0)
{
  GEN_ENTER(0x6cc520u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar1 = F_00a3c850(&REFG(undefined, 0x14a4230),uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cc580 */
uint F_006cc580(unsigned int gen_a0)
{
  GEN_ENTER(0x6cc580u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint uVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar2 = F_00a3c850(&REFG(undefined, 0x14a4230),uVar1);
  uVar1 = 0;
  if (uVar2 != 0) {
    uVar1 = 0;
    uVar2 = F_00ab24a0(uVar2);
    if (uVar2 != 0) {
      uVar1 = (uint)*(byte *)(uVar2 + 0x9e);
    }
  }
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cc610 */
uint F_006cc610(unsigned int gen_a0)
{
  GEN_ENTER(0x6cc610u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint uVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar2 = F_00a3c850(&REFG(undefined, 0x14a4230),uVar1);
  uVar1 = 0;
  if (uVar2 != 0) {
    uVar1 = 0;
    uVar2 = F_00ab24a0(uVar2);
    if (uVar2 != 0) {
      uVar1 = (uint)*(byte *)(uVar2 + 0x9f);
    }
  }
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cc6a0 */
uint F_006cc6a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cc6a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined1 * puVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  byte * pbVar5;
  uint uVar6;
  int iVar7;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_00a01860(((byte *)(gen_frame + 0x0)),param_1);
  uVar4 = F_00a01d20(((byte *)(gen_frame + 0x0)),1);
  pbVar5 = (byte *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),1,uVar4);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 32)) = *(undefined4 *)pbVar5;
  uVar4 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),2);
  uVar2 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 56));
  ((byte *)(gen_frame + 0x0))[0x28] = (char)uVar4;
  ((byte *)(gen_frame + 0x0))[0x29] = (char)(uVar4 >> 8);
  ((byte *)(gen_frame + 0x0))[0x2a] = (char)(uVar4 >> 0x10);
  ((byte *)(gen_frame + 0x0))[0x2b] = (char)(uVar4 >> 0x18);
  iVar7 = 0;
  (*(uint *)(gen_frame + 0x40)) = 3;
  ((byte *)(gen_frame + 0x0))[0x34] = 1;
  ((byte *)(gen_frame + 0x0))[0x34] = 1;
  ((byte *)(gen_frame + 0x0))[0x3c] = 1;
  ((byte *)(gen_frame + 0x0))[0x3c] = 1;
  (*(undefined2 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x46)) = 0;
  (*(undefined4 *)(gen_frame + 0x4a)) = 0;
  (*(undefined1 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x51)) = 0;
  ((byte *)(gen_frame + 0x0))[0x38] = 0;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 56)) = uVar2 & 0xffffff00;
  uVar4 = F_00a019d0(((byte *)(gen_frame + 0x0)));
  if (2 < (int)uVar4) {
    bVar3 = F_00a01f80(((byte *)(gen_frame + 0x0)),3);
    if (bVar3 == 0) {
      uVar6 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),3);
    }
    else {
      bVar3 = F_00a01e10(((byte *)(gen_frame + 0x0)),3);
      uVar6 = 2 - (bVar3 != 0);
    }
    (*(uint *)(gen_frame + 0x40)) = uVar6;
  }
  if (3 < (int)uVar4) {
    bVar3 = F_00a01e10(((byte *)(gen_frame + 0x0)),4);
    ((byte *)(gen_frame + 0x0))[0x34] = bVar3;
  }
  if (4 < (int)uVar4) {
    bVar3 = F_00a01e10(((byte *)(gen_frame + 0x0)),5);
    ((byte *)(gen_frame + 0x0))[0x3c] = bVar3;
  }
  if (5 < (int)uVar4) {
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 36)) = 7 - (int)&(*(undefined2 *)(gen_frame + 0x44));
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 44)) = 6 - (int)&(*(undefined2 *)(gen_frame + 0x44));
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 48)) = 6 - (int)&(*(undefined1 *)(gen_frame + 0x50));
    do {
      puVar1 = &(*(undefined1 *)(gen_frame + 0x50)) + iVar7;
      if ((int)uVar4 < (int)(puVar1 + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 48)))) break;
      uVar6 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),(int)&(*(undefined2 *)(gen_frame + 0x44)) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 44)) + iVar7 * 2);
      (&(*(undefined2 *)(gen_frame + 0x44)))[iVar7] = (short)uVar6;
      uVar6 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),(int)&(*(undefined2 *)(gen_frame + 0x44)) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 36)) + iVar7 * 2);
      iVar7 = iVar7 + 1;
      *puVar1 = (char)uVar6;
    } while (iVar7 < 5);
    if (0xf < (int)uVar4) {
      uVar4 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),0x10);
      ((byte *)(gen_frame + 0x0))[0x38] = (byte)uVar4;
    }
  }
  uVar4 = F_006bc640((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 40)),(*(uint *)(gen_frame + 0x40)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 52)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 60)),&(*(undefined2 *)(gen_frame + 0x44)),&(*(undefined1 *)(gen_frame + 0x50)),
                       (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 56)));
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),uVar4);
  F_00a01890(((byte *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return 1;
}

/* ref: FUN_006cc850 */
uint F_006cc850(unsigned int gen_a0)
{
  GEN_ENTER(0x6cc850u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  F_00a01860(((byte *)(gen_frame + 0x4)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x4)),1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),1,uVar2);
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),2);
  ((byte *)(gen_frame + 0x4))[0x20] = 1;
  ((byte *)(gen_frame + 0x4))[0x20] = 1;
  ((byte *)(gen_frame + 0x4))[0x24] = 1;
  ((byte *)(gen_frame + 0x4))[0x24] = 1;
  uVar3 = F_00a019d0(((byte *)(gen_frame + 0x4)));
  if (2 < (int)uVar3) {
    bVar1 = F_00a01e10(((byte *)(gen_frame + 0x4)),3);
    ((byte *)(gen_frame + 0x4))[0x20] = bVar1;
  }
  if (3 < (int)uVar3) {
    bVar1 = F_00a01e10(((byte *)(gen_frame + 0x4)),4);
    ((byte *)(gen_frame + 0x4))[0x24] = bVar1;
  }
  uVar2 = F_00a41080(&REFG(undefined, 0x14a4230),uVar2,0,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 32)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 36)));
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),uVar2);
  F_00a01890(((byte *)(gen_frame + 0x4)));
  return 1;
}

/* ref: FUN_006cc900 */
uint F_006cc900(unsigned int gen_a0)
{
  GEN_ENTER(0x6cc900u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  F_00a01860(((byte *)(gen_frame + 0x4)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x4)),1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),1,uVar2);
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),2);
  ((byte *)(gen_frame + 0x4))[0x20] = 1;
  ((byte *)(gen_frame + 0x4))[0x20] = 1;
  ((byte *)(gen_frame + 0x4))[0x24] = 1;
  ((byte *)(gen_frame + 0x4))[0x24] = 1;
  uVar3 = F_00a019d0(((byte *)(gen_frame + 0x4)));
  if (2 < (int)uVar3) {
    bVar1 = F_00a01e10(((byte *)(gen_frame + 0x4)),3);
    ((byte *)(gen_frame + 0x4))[0x20] = bVar1;
  }
  if (3 < (int)uVar3) {
    bVar1 = F_00a01e10(((byte *)(gen_frame + 0x4)),4);
    ((byte *)(gen_frame + 0x4))[0x24] = bVar1;
  }
  uVar2 = F_00a41080(&REFG(undefined, 0x14a4230),uVar2,1,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 32)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 36)));
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),uVar2);
  F_00a01890(((byte *)(gen_frame + 0x4)));
  return 1;
}

/* ref: FUN_006cc9e0 */
uint F_006cc9e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cc9e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar2);
  bVar1 = *((byte *)GEN_TOP((*(int *)(*piVar3 + 0x60) + 0x1688)));
  uVar2 = F_00ab21d0(0x22);
  if (uVar2 == 0) {
    bVar1 = 0;
    ((byte *)(gen_frame + 0x8))[0x20] = 0;
  }
  else {
    bVar1 = *(byte *)(uVar2 + 4 + (uint)bVar1);
    ((byte *)(gen_frame + 0x8))[0x20] = bVar1;
  }
  ((byte *)(gen_frame + 0x8))[0x20] = bVar1;
  F_00a01ea0(((byte *)(gen_frame + 0x8)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006cca80 */
uint F_006cca80(unsigned int gen_a0)
{
  GEN_ENTER(0x6cca80u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar2);
  bVar1 = *((byte *)GEN_TOP((*(int *)(*piVar3 + 0x60) + 0x1688)));
  uVar2 = F_00ab21d0(0x1e);
  if (uVar2 == 0) {
    bVar1 = 0;
    ((byte *)(gen_frame + 0x8))[0x20] = 0;
  }
  else {
    bVar1 = *(byte *)(uVar2 + 4 + (uint)bVar1);
    ((byte *)(gen_frame + 0x8))[0x20] = bVar1;
  }
  ((byte *)(gen_frame + 0x8))[0x20] = bVar1;
  F_00a01ea0(((byte *)(gen_frame + 0x8)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006ccb20 */
uint F_006ccb20(unsigned int gen_a0)
{
  GEN_ENTER(0x6ccb20u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar2);
  bVar1 = *((byte *)GEN_TOP((*(int *)(*piVar3 + 0x60) + 0x1688)));
  uVar2 = F_00ab21d0(0x1f);
  if (uVar2 == 0) {
    bVar1 = 0;
    ((byte *)(gen_frame + 0x8))[0x20] = 0;
  }
  else {
    bVar1 = *(byte *)(uVar2 + 4 + (uint)bVar1);
    ((byte *)(gen_frame + 0x8))[0x20] = bVar1;
  }
  ((byte *)(gen_frame + 0x8))[0x20] = bVar1;
  F_00a01ea0(((byte *)(gen_frame + 0x8)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006ccbc0 */
uint F_006ccbc0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ccbc0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar2);
  bVar1 = *((byte *)GEN_TOP((*(int *)(*piVar3 + 0x60) + 0x1688)));
  uVar2 = F_00ab21d0(0x23);
  if (uVar2 == 0) {
    bVar1 = 0;
    ((byte *)(gen_frame + 0x8))[0x20] = 0;
  }
  else {
    bVar1 = *(byte *)(uVar2 + 4 + (uint)bVar1);
    ((byte *)(gen_frame + 0x8))[0x20] = bVar1;
  }
  ((byte *)(gen_frame + 0x8))[0x20] = bVar1;
  F_00a01ea0(((byte *)(gen_frame + 0x8)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006ccc60 */
uint F_006ccc60(unsigned int gen_a0)
{
  GEN_ENTER(0x6ccc60u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar2);
  bVar1 = *((byte *)GEN_TOP((*(int *)(*piVar3 + 0x60) + 0x1688)));
  uVar2 = F_00ab21d0(0x20);
  if (uVar2 == 0) {
    bVar1 = 0;
    ((byte *)(gen_frame + 0x8))[0x20] = 0;
  }
  else {
    bVar1 = *(byte *)(uVar2 + 4 + (uint)bVar1);
    ((byte *)(gen_frame + 0x8))[0x20] = bVar1;
  }
  ((byte *)(gen_frame + 0x8))[0x20] = bVar1;
  F_00a01ea0(((byte *)(gen_frame + 0x8)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006ccd00 */
uint F_006ccd00(unsigned int gen_a0)
{
  GEN_ENTER(0x6ccd00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar2);
  bVar1 = *((byte *)GEN_TOP((*(int *)(*piVar3 + 0x60) + 0x1688)));
  uVar2 = F_00ab21d0(0x21);
  if (uVar2 == 0) {
    bVar1 = 0;
    ((byte *)(gen_frame + 0x8))[0x20] = 0;
  }
  else {
    bVar1 = *(byte *)(uVar2 + 4 + (uint)bVar1);
    ((byte *)(gen_frame + 0x8))[0x20] = bVar1;
  }
  ((byte *)(gen_frame + 0x8))[0x20] = bVar1;
  F_00a01ea0(((byte *)(gen_frame + 0x8)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006ccd70 */
uint F_006ccd70(unsigned int gen_a0)
{
  GEN_ENTER(0x6ccd70u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this;
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  puVar3 = (undefined4 *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar2);
  this = (undefined *)*puVar3;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2);
  bVar1 = F_006bc7f0(this,uVar2);
  ((byte *)(gen_frame + 0x8))[0x20] = bVar1;
  F_00a01ea0(((byte *)(gen_frame + 0x8)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006ccde0 */
uint F_006ccde0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ccde0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  char cVar5;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar4 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar3);
  iVar2 = *piVar4;
  cVar5 = '\0';
  uVar3 = F_00a019d0(((byte *)(gen_frame + 0x8)));
  if (1 < (int)uVar3) {
    uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2);
    cVar5 = (char)uVar3;
  }
  cVar1 = *((char *)GEN_TOP((*(int *)(iVar2 + 0x60) + 0x2e08)));
  if ((cVar1 == '\0') || ((cVar5 != '\0' && (cVar5 != cVar1)))) {
    ((byte *)(gen_frame + 0x8))[0x20] = 0;
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)) = (uint)(uint3)GEN_PIECE(((byte *)(gen_frame + 0x8)), 33, 3) << 8;
  }
  else {
    ((byte *)(gen_frame + 0x8))[0x20] = 1;
    ((byte *)(gen_frame + 0x8))[0x20] = 1;
  }
  F_00a01ea0(((byte *)(gen_frame + 0x8)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006cce70 */
uint F_006cce70(unsigned int gen_a0)
{
  GEN_ENTER(0x6cce70u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar1);
  if (*(int *)(*piVar2 + 0x60) == REFG(int, 0x1379694)) {
    ((byte *)(gen_frame + 0x8))[0x20] = REFG(char, 0x1338ad4) != '\0';
  }
  else {
    ((byte *)(gen_frame + 0x8))[0x20] = 0;
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)) = (uint)(uint3)GEN_PIECE(((byte *)(gen_frame + 0x8)), 33, 3) << 8;
  }
  F_00a01ea0(((byte *)(gen_frame + 0x8)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006ccee0 */
uint F_006ccee0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ccee0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)((*(int *)(*piVar2 + 0x60) != REFG(int, 0x1379694)) - 1U & REFG(undefined1, 0x14ab29a)));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006ccf40 */
uint F_006ccf40(unsigned int gen_a0)
{
  GEN_ENTER(0x6ccf40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar4 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar3);
  iVar1 = *piVar4;
  uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2);
  ((byte *)(gen_frame + 0x8))[0x20] = (byte)uVar3;
  if (*(int *)(iVar1 + 0x60) == REFG(int, 0x1379694)) {
    bVar2 = F_00a68920(&REFG(undefined1, 0x14ab070),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  }
  else {
    bVar2 = 0;
  }
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),(uint)bVar2);
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006ccfc0 */
uint F_006ccfc0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ccfc0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  uint uVar4;
  uint * puVar5;
  int iVar6;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  puVar3 = (undefined4 *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar2);
  (*(undefined4 *)(gen_frame + 0x28)) = *puVar3;
  (*(int *)(gen_frame + 0x2c)) = 0;
  uVar2 = F_00a019d0(((byte *)(gen_frame + 0x8)));
  iVar6 = 2;
  if (1 < (uVar2 & 0xff)) {
    puVar5 = ((uint *)(gen_frame + 0x30));
    do {
      bVar1 = F_00a01f40(((byte *)(gen_frame + 0x8)),iVar6);
      if ((bVar1 == 0) || (9 < iVar6 + -2)) {
        F_00a01a20(((byte *)(gen_frame + 0x8)),&REFG(undefined, 0x10b4ea8),iVar6 + -1);
      }
      else {
        uVar4 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),iVar6);
        (*(int *)(gen_frame + 0x2c)) = (*(int *)(gen_frame + 0x2c)) + 1;
        *puVar5 = uVar4;
      }
      iVar6 = iVar6 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar6 <= (int)(uVar2 & 0xff));
  }
  bVar1 = F_006bc920(((uint *)(gen_frame + 0x30)),(*(int *)(gen_frame + 0x2c)));
  F_00a01ea0(((byte *)(gen_frame + 0x8)),(uint)bVar1);
  F_00a01890(((byte *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return 1;
}

/* ref: FUN_006cd0a0 */
uint F_006cd0a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cd0a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  bool bVar3;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar1);
  if (*(int *)(*piVar2 + 0x60) == REFG(int, 0x1379694)) {
    bVar3 = (REFG(undefined1, 0x14ab150) & 1) == 1;
    ((byte *)(gen_frame + 0x8))[0x20] = bVar3;
  }
  else {
    ((byte *)(gen_frame + 0x8))[0x20] = 0;
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)) = (uint)(uint3)GEN_PIECE(((byte *)(gen_frame + 0x8)), 33, 3) << 8;
  }
  F_00a01ea0(((byte *)(gen_frame + 0x8)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006cd110 */
uint F_006cd110(unsigned int gen_a0)
{
  GEN_ENTER(0x6cd110u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  bool bVar3;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar1);
  if (*(int *)(*piVar2 + 0x60) == REFG(int, 0x1379694)) {
    bVar3 = (REFG(undefined1, 0x14ab150) & 2) == 2;
    ((byte *)(gen_frame + 0x8))[0x20] = bVar3;
  }
  else {
    ((byte *)(gen_frame + 0x8))[0x20] = 0;
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)) = (uint)(uint3)GEN_PIECE(((byte *)(gen_frame + 0x8)), 33, 3) << 8;
  }
  F_00a01ea0(((byte *)(gen_frame + 0x8)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006cd180 */
uint F_006cd180(unsigned int gen_a0)
{
  GEN_ENTER(0x6cd180u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)REFG(undefined1, 0x14ab29e));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cd1d0 */
uint F_006cd1d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cd1d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  bool bVar4;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2);
  if (*(int *)(iVar1 + 0x60) == REFG(int, 0x1379694)) {
    bVar4 = ((&REFG(undefined1, 0x14b4ed0))[(int)((uVar2 & 0xff) >> 3)] & (byte)(1 << ((byte)uVar2 & 7))) != 0;
    ((byte *)(gen_frame + 0x8))[0x20] = bVar4;
  }
  else {
    ((byte *)(gen_frame + 0x8))[0x20] = 0;
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)) = (uint)(uint3)GEN_PIECE(((byte *)(gen_frame + 0x8)), 33, 3) << 8;
  }
  F_00a01ea0(((byte *)(gen_frame + 0x8)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006cd260 */
uint F_006cd260(unsigned int gen_a0)
{
  GEN_ENTER(0x6cd260u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)(byte)(&REFG(undefined1, 0x14ab29f))[(int)((byte)((char)uVar1 - 1))]);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cd2c0 */
uint F_006cd2c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cd2c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar2);
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2);
  ((byte *)(gen_frame + 0x8))[0x20] = (byte)uVar2;
  bVar1 = F_00a68770(&REFG(undefined1, 0x14ab070),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  F_00a01ea0(((byte *)(gen_frame + 0x8)),(uint)bVar1);
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006cd330 */
uint F_006cd330(unsigned int gen_a0)
{
  GEN_ENTER(0x6cd330u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  bVar1 = F_00a68750(&REFG(undefined1, 0x14ab070));
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)(byte)(bVar1 + 1));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cd390 */
uint F_006cd390(unsigned int gen_a0)
{
  GEN_ENTER(0x6cd390u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)REFG(undefined1, 0x14ab14f));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cd3e0 */
uint F_006cd3e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cd3e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00a01ea0(((byte *)(gen_frame + 0xc)),(uint)((!GEN_ISNAN(REFG(float, 0x14ab588)) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
                            (!(REFG(float, 0x14ab588) < *(float *)&REFG(undefined, 0x1088114)) &&
                            REFG(uint, 0x14ab588) != *(float *)&REFG(undefined, 0x1088114))));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cd440 */
uint F_006cd440(unsigned int gen_a0)
{
  GEN_ENTER(0x6cd440u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar3 = F_00a4ffd0();
  bVar1 = F_00b8de30(uVar3,uVar2);
  F_00a01ea0(((byte *)(gen_frame + 0xc)),(uint)bVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cd4b0 */
uint F_006cd4b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cd4b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar3 = F_00a4ffd0();
  bVar1 = F_00b8df80(uVar3,uVar2);
  F_00a01ea0(((byte *)(gen_frame + 0xc)),(uint)bVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cd520 */
uint F_006cd520(unsigned int gen_a0)
{
  GEN_ENTER(0x6cd520u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00a01ea0(((byte *)(gen_frame + 0xc)),(uint)(*((char *)GEN_TOP((*(int *)(*piVar2 + 0x60) + 0x166c))) != '\0'));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cd580 */
uint F_006cd580(unsigned int gen_a0)
{
  GEN_ENTER(0x6cd580u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),*((undefined4 *)GEN_TOP((*(int *)(*piVar2 + 0x60) + 0x1690))));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cd600 */
uint F_006cd600(unsigned int gen_a0)
{
  GEN_ENTER(0x6cd600u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),
               (uint)(*((int *)GEN_TOP((*(int *)(*piVar2 + 0x60) + 0x1690))) * 100) /
               *((uint *)GEN_TOP((*(int *)(*piVar2 + 0x60) + 0x1694))));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cd660 */
uint F_006cd660(unsigned int gen_a0)
{
  GEN_ENTER(0x6cd660u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),*((undefined4 *)GEN_TOP((*(int *)(*piVar2 + 0x60) + 0x1694))));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cd6c0 */
uint F_006cd6c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cd6c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),*((undefined4 *)GEN_TOP((*(int *)(*piVar2 + 0x60) + 0x1698))));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cd740 */
uint F_006cd740(unsigned int gen_a0)
{
  GEN_ENTER(0x6cd740u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),
               (uint)(*((int *)GEN_TOP((*(int *)(*piVar2 + 0x60) + 0x1698))) * 100) /
               *((uint *)GEN_TOP((*(int *)(*piVar2 + 0x60) + 0x169c))));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cd7a0 */
uint F_006cd7a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cd7a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),*((undefined4 *)GEN_TOP((*(int *)(*piVar2 + 0x60) + 0x169c))));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cd800 */
uint F_006cd800(unsigned int gen_a0)
{
  GEN_ENTER(0x6cd800u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  uint uVar5;
  int * piVar6;
  undefined * this;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar5 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar6 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar5);
  iVar1 = *piVar6;
  uVar5 = F_00a01d20(((byte *)(gen_frame + 0x8)),2);
  piVar6 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2,uVar5);
  iVar2 = *piVar6;
  bVar4 = F_00a9f620(*(undefined4 *)(iVar1 + 0x60));
  if (bVar4 != 0) {
    this = (undefined *)F_00a5f290(*(undefined * PTR32 *)(iVar2 + 4));
    if (this != (undefined *)0x0) {
      bVar4 = F_00a9fd60(this);
      ((byte *)(gen_frame + 0x8))[0x20] = bVar4;
      goto LAB_006cd872;
    }
  }
  uVar3 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32));
  ((byte *)(gen_frame + 0x8))[0x20] = 0;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)) = uVar3 & 0xffffff00;
LAB_006cd872: ;
  F_00a01ea0(((byte *)(gen_frame + 0x8)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 1;
}

/* ref: Client::Game::Event::EventHandler::vf32 */
uint F_006cd8a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6cd8a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  
  puVar1 = (undefined4 *)F_00ab3d50(param_1);
  uVar3 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xd8))
                      (piVar2,*puVar1,(uint)*(byte *)((int)puVar1 + 5),0,(int)*(char *)(puVar1 + 1))
    ;
  }
  return uVar3;
}

/* ref: FUN_006cd8f0 */
uint F_006cd8f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6cd8f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint in_EAX = 0;
  undefined4 * this_00;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 100) == 0) {
    this_00 = (undefined4 *)F_00406b90(0x20,0,0);
    if (this_00 == (undefined4 *)0x0) {
      this_00 = (undefined4 *)0x0;
    }
    else {
      F_00cb4700(this_00,param_2,param_3);
      this_00[5] = param_2;
      *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10b9170));
      this_00[6] = this;
      this_00[7] = ((code *)REFP(0x72dc20));
    }
    *(undefined4 * PTR32 *)((int)this + 100) = this_00;
    uVar2 = 0;
    if (param_2 != 0) {
      do {
        F_00cb4540(*(undefined * PTR32 *)((int)this + 100),uVar2,*(undefined4 *)(param_1 + uVar2 * 4));
        uVar2 = uVar2 + 1;
      } while (uVar2 < param_2);
    }
    piVar1 = (int *)F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),9);
    *(int * PTR32 *)((int)this + 0x68) = piVar1;
    in_EAX = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1,*(undefined4 *)((int)this + 100));
  }
  return in_EAX;
}

/* ref: FUN_006cd980 */
uint F_006cd980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6cd980u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint in_EAX = 0;
  undefined4 * this_00;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x6c) == 0) {
    this_00 = (undefined4 *)F_00406b90(0x20,0,0);
    if (this_00 == (undefined4 *)0x0) {
      this_00 = (undefined4 *)0x0;
    }
    else {
      F_00cb4700(this_00,param_2,param_3);
      this_00[5] = param_2;
      *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10b9170));
      this_00[6] = this;
      this_00[7] = ((code *)REFP(0x72dbf0));
    }
    *(undefined4 * PTR32 *)((int)this + 0x6c) = this_00;
    uVar2 = 0;
    if (param_2 != 0) {
      do {
        F_00cb4540(*(undefined * PTR32 *)((int)this + 0x6c),uVar2,*(undefined4 *)(param_1 + uVar2 * 4));
        uVar2 = uVar2 + 1;
      } while (uVar2 < param_2);
    }
    piVar1 = (int *)F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x52);
    *(int * PTR32 *)((int)this + 0x70) = piVar1;
    in_EAX = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1,*(undefined4 *)((int)this + 0x6c));
  }
  return in_EAX;
}

/* ref: FUN_006cda10 */
byte F_006cda10(unsigned int gen_a0)
{
  GEN_ENTER(0x6cda10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  undefined * pvVar2;
  undefined4 * puVar3;
  undefined * PTR32 * ppvVar4;
  undefined * pvVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  ppvVar4 = (undefined * PTR32 *)((int)this + 0xe0);
  pvVar2 = ((undefined *)GEN_TOP(((*(int *)((int)this + 0xd4) - *(int *)((int)this + 0xd0) >> 2) -
                   *(int *)((int)this + 0xe4))));
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar2;
  if (pvVar2 < *ppvVar4) {
    ppvVar4 = &(*(undefined * PTR32 *)(gen_frame + 0x8));
  }
  pvVar2 = *ppvVar4;
  if (pvVar2 != (undefined *)0x0) {
    puVar3 = *(undefined4 * PTR32 *)((int)this + 0x74);
    if ((puVar3 != (undefined4 *)0x0) && ((undefined *)puVar3[5] != pvVar2)) {
      ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
      *(undefined4 *)((int)this + 0x74) = 0;
    }
    if (*(int *)((int)this + 0x74) == 0) {
      puVar3 = (undefined4 *)F_00406b90(0x1c,0,0);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        F_00cb4700(puVar3,pvVar2,0);
        puVar3[5] = pvVar2;
        puVar3[6] = this;
        *puVar3 = (*(undefined * PTR32 (*)[2])REFP(0x10b94b4));
      }
      *(undefined4 * PTR32 *)((int)this + 0x74) = puVar3;
    }
    pvVar5 = (undefined *)0x0;
    if (pvVar2 != (undefined *)0x0) {
      do {
        F_00cb4540(*(undefined * PTR32 *)((int)this + 0x74),pvVar5,
                     *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xd0) + (*(int *)((int)this + 0xe4) + (int)pvVar5) * 4))))
        ;
        pvVar5 = (undefined *)((int)pvVar5 + 1);
      } while (pvVar5 < pvVar2);
    }
    F_00cb4650(*(undefined4 *)((int)this + 0x74),*(undefined4 *)((int)this + 0x74));
    piVar1 = *(int * PTR32 *)((int)this + 0x78);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1,*(undefined4 *)((int)this + 0x74));
      return 1;
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 0x74);
    if (puVar3 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
      *(undefined4 *)((int)this + 0x74) = 0;
    }
    ((code *)*(gen_code32 *)(*(int *)this + 0x90))(this,0,0,0);
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf43 */
uint F_006cdb20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6cdb20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  byte bVar1;
  uint uVar2;
  
  uVar2 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  uVar2 = uVar2 - 2;
  if ((((uVar2 == 0) && (param_1[0x47] == 0)) &&
      (uVar2 = param_1[0x39], uVar2 == *(uint *)(this + 8))) &&
     ((param_1[0x3b] != 0 || (param_1[0x3c] != 0)))) {
    uVar2 = F_00a5f290(param_1);
    if (REFG(void * PTR32, 0x1379694) != (undefined *)0x0) {
      bVar1 = F_00aa1800(REFG(void * PTR32, 0x1379694),uVar2);
      if (bVar1 != 0) {
        uVar2 = F_00ab4370(0xa3,uVar2,uVar2,0,0);
        return uVar2;
      }
      uVar2 = F_00ab4370(0xa4,uVar2,uVar2,0,0);
    }
  }
  return uVar2;
}

/* ref: FUN_006cdbc0 */
uint F_006cdbc0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cdbc0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  undefined4 * puVar2;
  undefined4 uVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  uVar3 = 0;
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  puVar2 = (undefined4 *)F_00ab3930(uVar1);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = *puVar2;
  }
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar3);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cdc30 */
uint F_006cdc30(unsigned int gen_a0)
{
  GEN_ENTER(0x6cdc30u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  
  F_00a02210(((byte *)(gen_frame + 0x8)),param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar4 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar3);
  iVar1 = *piVar4;
  if (iVar1 != 0) {
    (*(uint *)(gen_frame + 0x28)) = 0;
    bVar2 = F_00a01f40(((byte *)(gen_frame + 0x8)),2);
    if (bVar2 != 0) {
      uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2);
      (*(uint *)(gen_frame + 0x28)) = uVar3;
    }
    if ((*(byte *)(iVar1 + 0x5c) & 1) == 0) {
      F_00a50880(*(undefined4 *)(iVar1 + 8),(uint)*(ushort *)(iVar1 + 0x54),1,&(*(uint *)(gen_frame + 0x28)),1);
      *(byte *)(iVar1 + 0x5c) = *(byte *)(iVar1 + 0x5c) | 1;
    }
    uVar3 = F_00a02290(((byte *)(gen_frame + 0x8)),0);
    F_00a02240(((byte *)(gen_frame + 0x8)));
    return uVar3;
  }
  F_00a02240(((byte *)(gen_frame + 0x8)));
  return 0;
}

/* ref: FUN_006cdce0 */
uint F_006cdce0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cdce0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),*(undefined4 *)&REFG(undefined2, 0x1379c78));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cdd20 */
uint F_006cdd20(unsigned int gen_a0)
{
  GEN_ENTER(0x6cdd20u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = F_00a01e40(((byte *)(gen_frame + 0xc)),2);
  if ((*(byte *)(iVar1 + 0x5c) & 1) == 0) {
    F_00a50ad0(*(undefined4 *)(iVar1 + 8),(uint)*(ushort *)(iVar1 + 0x54),2,uVar2);
    *(byte *)(iVar1 + 0x5c) = *(byte *)(iVar1 + 0x5c) | 1;
  }
  uVar2 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return uVar2;
}

/* ref: FUN_006cdda0 */
uint F_006cdda0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cdda0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  if ((*(byte *)(iVar1 + 0x5c) & 1) == 0) {
    F_00a50880(*(undefined4 *)(iVar1 + 8),(uint)*(ushort *)(iVar1 + 0x54),3,0,0);
    *(byte *)(iVar1 + 0x5c) = *(byte *)(iVar1 + 0x5c) | 1;
  }
  uVar2 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return uVar2;
}

/* ref: FUN_006cde10 */
uint F_006cde10(unsigned int gen_a0)
{
  GEN_ENTER(0x6cde10u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)*(byte *)(*piVar2 + 0x1d4));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cde60 */
uint F_006cde60(unsigned int gen_a0)
{
  GEN_ENTER(0x6cde60u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  uint uVar2;
  int * piVar3;
  bool bVar4;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar2);
  if (*((char *)GEN_TOP((*(int *)(*piVar3 + 0x2d4) + 0x35))) != '\0') {
    uVar2 = F_00ab1c90((uint)*((ushort *)GEN_TOP((*(int *)(*piVar3 + 0x2d4) + 0x28))));
    if (uVar2 != 0) {
      bVar4 = *(char *)(uVar2 + 0x2a) == '\x01';
      ((byte *)(gen_frame + 0x8))[0x20] = bVar4;
      goto LAB_006cdeba;
    }
  }
  uVar1 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32));
  ((byte *)(gen_frame + 0x8))[0x20] = 0;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)) = uVar1 & 0xffffff00;
LAB_006cdeba: ;
  F_00a01ea0(((byte *)(gen_frame + 0x8)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006cdee0 */
uint F_006cdee0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cdee0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  undefined4 uVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if ((*((char *)GEN_TOP((*(int *)(*piVar2 + 0x2d4) + 0x35))) == '\0') ||
     (*((char *)GEN_TOP((*(int *)(*piVar2 + 0x2d4) + 0x32))) == '\0')) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  F_00a01ea0(((byte *)(gen_frame + 0xc)),uVar3);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cdf50 */
uint F_006cdf50(unsigned int gen_a0)
{
  GEN_ENTER(0x6cdf50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00a01ea0(((byte *)(gen_frame + 0xc)),(uint)(*((char *)GEN_TOP((*(int *)(*piVar2 + 0x2d4) + 0x35))) == '\0'));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cdfb0 */
uint F_006cdfb0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cdfb0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)*((byte *)GEN_TOP((*(int *)(*piVar2 + 0x2d4) + 0x32))));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006ce010 */
uint F_006ce010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6ce010u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * PTR32 * ppvVar1;
  uint uVar2;
  int * piVar3;
  undefined * pvVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x10;
  ppvVar1 = &(*(undefined * PTR32 *)(gen_frame + 0x8));
  if ((*(uint *)&gen_args[2]) < 0x11) {
    ppvVar1 = (undefined * PTR32 *)&(*(uint *)&gen_args[2]);
  }
  pvVar4 = *ppvVar1;
  uVar2 = 0;
  if (pvVar4 != (undefined *)0x0) {
    piVar3 = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8)));
    do {
      if (*piVar3 != 0) {
        *(int *)((*(int *)&gen_args[1]) + uVar2 * 4) = *piVar3;
        uVar2 = uVar2 + 1;
      }
      piVar3 = piVar3 + 1;
      pvVar4 = (undefined *)((int)pvVar4 + -1);
    } while (pvVar4 != (undefined *)0x0);
  }
  return uVar2;
}

/* ref: FUN_006ce060 */
uint F_006ce060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ce060u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte * pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x4)) = 0;
  uVar2 = 0;
  do {
    ((byte *)(gen_frame + 0x18))[(int)(uVar2)] = (byte)uVar2;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x10);
  uVar7 = 0;
  uVar2 = 0;
  uVar3 = 0;
  uVar4 = param_2 & 0xffff;
  do {
    uVar8 = uVar3;
    uVar6 = uVar2;
    uVar4 = uVar4 << 0xb ^ uVar4;
    uVar3 = (uVar8 >> 0xb ^ uVar4) >> 8 ^ uVar8 ^ uVar4;
    uVar5 = uVar7 + uVar3 % (0x10 - uVar7) & 0xff;
    pbVar1 = ((byte *)(gen_frame + 0x18)) + uVar7;
    pbVar1[param_1 - (int)((byte *)(gen_frame + 0x18))] = ((byte *)(gen_frame + 0x18))[(int)(uVar5)];
    uVar7 = uVar7 + 1;
    ((byte *)(gen_frame + 0x18))[(int)(uVar5)] = *pbVar1;
    uVar2 = (*(uint *)(gen_frame + 0x4));
    uVar4 = uVar6;
    (*(uint *)(gen_frame + 0x4)) = uVar8;
  } while (uVar7 < 0xf);
  *(byte *)(param_1 + 0xf) = ((byte *)(gen_frame + 0x18))[0xf];
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return (uint)(((byte *)(gen_frame + 0x18)) + uVar5);
}

/* ref: FUN_006ce120 */
byte F_006ce120(unsigned int gen_a0)
{
  GEN_ENTER(0x6ce120u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  ushort * puVar2;
  
  puVar2 = &REFG(undefined2, 0x10b6134);
  while( true ) {
    uVar1 = (uint)(*puVar2 >> 3);
    if ((uVar1 < 200) &&
       ((*(byte *)(uVar1 + 0x12ea + param_1) & (byte)(0x80 >> ((byte)*puVar2 & 7))) != 0)) break;
    puVar2 = puVar2 + 1;
    if (0x10b6139 < (int)puVar2) {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_006ce1b0 */
uint F_006ce1b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ce1b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  *(int *)(*piVar2 + 0x5a4) = *(int *)(*piVar2 + 0x5a4) + 1;
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: FUN_006ce200 */
uint F_006ce200(unsigned int gen_a0)
{
  GEN_ENTER(0x6ce200u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  *(undefined4 *)(*piVar2 + 0x5a4) = 0;
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: FUN_006ce250 */
uint F_006ce250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x6ce250u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * param_1 = (ushort *)(uintptr_t)gen_a1;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;
  undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a3;
  undefined2 * param_4 = (undefined2 *)(uintptr_t)gen_a4;
  byte * param_5 = (byte *)(uintptr_t)gen_a5;
  byte * param_6 = (byte *)(uintptr_t)gen_a6;
  char cVar1;
  uint uVar2;
  uint uVar3;
  byte * pbVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  short * psVar8;
  
  if (*(uint *)((int)this + 0x5a4) <
      (uint)(*(int *)((int)this + 0x578) - *(int *)((int)this + 0x574) >> 2)) {
    psVar8 = ((short *)GEN_TOP((*(int *)((int)this + 0x574) + *(uint *)((int)this + 0x5a4) * 4)));
    if (psVar8 == (short *)0x0) goto LAB_006ce27f;
    sVar6 = *psVar8;
  }
  else {
    psVar8 = (short *)0x0;
LAB_006ce27f: ;
    sVar6 = 0;
  }
  uVar2 = F_00a4ffd0();
  iVar5 = 0;
  iVar7 = uVar2 + 0x1684;
  while (*(short *)(iVar7 + 4) != sVar6) {
    iVar5 = iVar5 + 1;
    iVar7 = iVar7 + 0x10;
    if (0xf < iVar5) {
      return uVar2;
    }
  }
  if (iVar5 < 0) {
    return uVar2;
  }
  *param_1 = (ushort)(*(byte *)(iVar7 + 8) & 7);
  if ((*(byte *)(iVar7 + 8) & 8) != 0) {
    uVar2 = F_00ab3300(0x13);
    *param_2 = *(undefined2 *)(uVar2 + 4);
  }
  if ((*(byte *)(iVar7 + 8) & 0x40) != 0) {
    uVar2 = F_00ab3300(0x14);
    *param_3 = *(undefined2 *)(uVar2 + 4);
  }
  uVar2 = (uint)*(byte *)(psVar8 + 1);
  if (uVar2 == 0x10) {
    if (REFG(char, 0x14ab29a) != '\x01') goto LAB_006ce337;
  }
  else if (uVar2 == 0x11) {
    if (REFG(char, 0x14ab29a) != '\x02') goto LAB_006ce337;
  }
  else if ((uVar2 != 0x12) || (REFG(char, 0x14ab29a) != '\x03')) goto LAB_006ce337;
  uVar3 = F_00ab3300(0x15);
  uVar2 = CONCAT22((short)(uVar3 >> 0x10),*(undefined2 *)(uVar3 + 4));
  *param_4 = *(undefined2 *)(uVar3 + 4);
LAB_006ce337: ;
  cVar1 = (char)psVar8[1];
  pbVar4 = ((byte *)GEN_TOP(CONCAT31((int3)(uVar2 >> 8),cVar1)));
  if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
    *param_5 = (byte)(*(ushort *)(iVar7 + 8) >> 7) & 7;
    pbVar4 = param_5;
  }
  cVar1 = (char)psVar8[1];
  if (((cVar1 == '\x10') || (cVar1 == '\x11')) || (cVar1 == '\x12')) {
    *param_6 = (byte)(*(ushort *)(iVar7 + 8) >> 7) & 0xf;
  }
  return CONCAT31((int3)((uint)((int)(uintptr_t)pbVar4) >> 8),cVar1);
}

/* ref: FUN_006ce380 */
uint F_006ce380(unsigned int gen_a0)
{
  GEN_ENTER(0x6ce380u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  undefined4 uVar4;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  if (((*(char *)(iVar1 + 0x265) == '\0') && (*(char *)(iVar1 + 0x266) == '\0')) &&
     (*(char *)(iVar1 + 0x267) == '\0')) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  F_00a01ea0(((byte *)(gen_frame + 0xc)),uVar4);
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006ce3f0 */
uint F_006ce3f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ce3f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00a01ea0(((byte *)(gen_frame + 0xc)),(uint)*(byte *)(*piVar2 + 0x265));
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006ce440 */
uint F_006ce440(unsigned int gen_a0)
{
  GEN_ENTER(0x6ce440u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00a01ea0(((byte *)(gen_frame + 0xc)),(uint)*(byte *)(*piVar2 + 0x266));
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006ce490 */
uint F_006ce490(unsigned int gen_a0)
{
  GEN_ENTER(0x6ce490u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00a01ea0(((byte *)(gen_frame + 0xc)),(uint)*(byte *)(*piVar2 + 0x267));
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006ce4e0 */
byte F_006ce4e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6ce4e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x538) + param_1 * 0x10)));
  return *(int *)(iVar1 + param_2 * 0x14) == *(int *)(iVar1 + param_2 * 0x14 + 4);
}

/* ref: FUN_006ce510 */
unsigned int F_006ce510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ce510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  short * psVar3;
  
  uVar2 = 0;
  uVar1 = *(int *)((int)this + 0x578) - *(int *)((int)this + 0x574) >> 2;
  if (uVar1 != 0) {
    psVar3 = *(short * PTR32 *)((int)this + 0x574);
    while (*psVar3 != (short)param_1) {
      uVar2 = uVar2 + 1;
      psVar3 = psVar3 + 2;
      if (uVar1 <= uVar2) {
        return 0;
      }
    }
    *(uint *)((int)this + 0x5a4) = uVar2;
  }
  return 0;
}

/* ref: FUN_006ce560 */
uint F_006ce560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ce560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  ushort * puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  
  if ((*(uint *)((int)this + 0x5a4) <
       (uint)(*(int *)((int)this + 0x578) - *(int *)((int)this + 0x574) >> 2)) &&
     (puVar1 = ((ushort *)GEN_TOP((*(int *)((int)this + 0x574) + *(uint *)((int)this + 0x5a4) * 4))),
     puVar1 != (ushort *)0x0)) {
    uVar5 = *puVar1;
  }
  else {
    uVar5 = 0;
  }
  uVar2 = F_00a4ffd0();
  iVar3 = uVar2 + 0x1684;
  iVar4 = 0;
  do {
    if (*(ushort *)(iVar3 + 4) == uVar5) goto LAB_006ce5b2;
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 0x10;
  } while (iVar4 < 0x10);
  iVar4 = -1;
  iVar3 = 0;
LAB_006ce5b2: ;
  uVar2 = F_00ab3330((uint)uVar5);
  *param_1 = 0;
  if ((((-1 < iVar4) && (iVar3 != 0)) && (uVar2 != 0)) &&
     ((*(byte *)(iVar3 + 0xc) != 0 &&
      (uVar2 = F_006c3690((uint)*(byte *)(iVar3 + 0xc),(uint)*(byte *)(uVar2 + 0x55)),
      (char)uVar2 == '\0')))) {
    *param_1 = 1;
  }
  return uVar2;
}

/* ref: FUN_006ce600 */
byte F_006ce600(unsigned int gen_a0)
{
  GEN_ENTER(0x6ce600u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  short sVar1;
  uint uVar2;
  short * psVar3;
  int iVar4;
  
  sVar1 = *(short *)(in_ecx + 0x260);
  if (sVar1 != 0) {
    uVar2 = F_00a4ffd0();
    iVar4 = 0;
    psVar3 = (short *)(uVar2 + 0x13b8);
    do {
      if (*psVar3 == sVar1) {
        return 1;
      }
      iVar4 = iVar4 + 1;
      psVar3 = psVar3 + 8;
    } while (iVar4 < 0x1e);
  }
  return 0;
}

/* ref: FUN_006ce640 */
byte F_006ce640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ce640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  bool bVar3;
  undefined4 uVar4;
  
  if (*(char *)((int)this + 0x146) == '\x03') {
    return *(char *)((int)this + 0x148) != '\0';
  }
  bVar3 = *(char *)((int)this + 0x146) != '\x02';
  if (bVar3) {
    bVar1 = F_006be100(param_1);
    if (bVar1 == 0) {
      return 0;
    }
  }
  else {
    if ((*(byte *)((int)this + 0x14c) & 2) == 0) {
      return 0;
    }
    if (*(char *)((int)this + 0x14b) != (char)((uint)param_1 >> 0x10)) {
      return 0;
    }
  }
  if ((*(char *)((int)this + 0x148) != '\0') && (REFG(void * PTR32, 0x1379694) != (undefined *)0x0)) {
    if ((*(char *)((int)this + 0x145) == '\0') || (*(char *)((int)this + 0x145) == '\x01')) {
      if (bVar3) {
        uVar4 = 0xe1;
      }
      else {
        uVar4 = 0xde;
      }
      uVar2 = F_0071ce90(REFG(void * PTR32, 0x1379694),uVar4);
      if ((char)uVar2 == '\0') {
        return 0;
      }
      uVar4 = 0x10;
    }
    else {
      if (bVar3) {
        uVar4 = 0xd9;
      }
      else {
        uVar4 = 0xdd;
      }
      uVar2 = F_0071ce90(REFG(void * PTR32, 0x1379694),uVar4);
      if ((char)uVar2 == '\0') {
        return 0;
      }
      uVar4 = 0x11;
    }
    uVar2 = F_00a68280(&REFG(undefined1, 0x14ab070),uVar4,1);
    if (((short)uVar2 != 0) &&
       ((ushort)*(byte *)((int)this + 0x147) <= (ushort)((short)(((uVar2 & 0xffff) + 4) / 5) * 5)))
    {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_006ce740 */
uint F_006ce740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ce740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  int * piVar2;
  uint uVar3;
  undefined * this_00;
  uint uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  bVar1 = F_006be920(this);
  if (((bVar1 != 0) && (*(int *)((int)this + 0x120) != 0)) && (*(int *)((int)this + 0x124) != 0)) {
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    if (piVar2 != (int *)0x0) {
      uVar3 = F_0042a990(*(undefined4 *)((int)this + 0x124));
      uVar7 = 0;
      uVar6 = 0;
      this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2,0x26f)));
      uVar3 = F_0043bd00(this_00,uVar6,uVar7,uVar3);
      uVar4 = F_0042a990(*(undefined4 *)((int)this + 0x120));
      uVar3 = F_0042ce40(((undefined4 *)(gen_frame + 0x4)),"%s%s%s",uVar4,uVar3);
      F_0042ccf0(param_1,uVar3);
      uVar5 = F_0042c880(((undefined4 *)(gen_frame + 0x4)));
      ((undefined4 *)(gen_frame + 0x4))[0] = 0x6ce7ec;
      F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
      return (uint)uVar5;
    }
  }
  uVar3 = F_0042e430(param_1,&REFG(undefined, 0x10b3a52));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar3;
}

/* ref: FUN_006ce820 */
uint F_006ce820(unsigned int gen_a0)
{
  GEN_ENTER(0x6ce820u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  switch((unsigned int)(uintptr_t)(*(undefined1 *)(in_ecx + 0x145))) {
  case 0: ;
    return (uint)(*(char *)(in_ecx + 0x146) == '\x02') * 4 + 1;
  case 1: ;
    return (uint)(*(char *)(in_ecx + 0x146) == '\x02') * 4 + 2;
  case 2: ;
    return (uint)(*(char *)(in_ecx + 0x146) == '\x02') * 4 + 3;
  case 3: ;
    return (uint)(*(char *)(in_ecx + 0x146) == '\x02') * 4 + 4;
  default: ;
    return 0;
  }
}

/* ref: FUN_006ce8a0 */
byte F_006ce8a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ce8a0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)(param_2 + param_1 * 0x28) >> 3;
  if (uVar3 < 0x28) {
    uVar2 = F_00a4ffd0();
    bVar1 = *(byte *)(uVar2 + 0x113c + uVar3);
  }
  else {
    bVar1 = 0;
  }
  return (bVar1 & (byte)(0x80 >> ((byte)param_2 & 7))) != 0;
}

/* ref: FUN_006ce8e0 */
byte F_006ce8e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ce8e0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  
  uVar4 = (uint)(param_2 + param_1 * 0x28) >> 3;
  if (0x27 < uVar4) {
    return 0;
  }
  uVar2 = F_00a4ffd0();
  bVar3 = (byte)(0x80 >> ((byte)param_2 & 7));
  if ((*(byte *)(uVar2 + 0x113c + uVar4) & bVar3) != 0) {
    return 0;
  }
  if (uVar4 < 0x28) {
    uVar2 = F_00a4ffd0();
    bVar1 = *(byte *)(uVar2 + 0x113c + uVar4);
  }
  else {
    bVar1 = 0;
  }
  uVar2 = F_00a4ffd0();
  *(byte *)(uVar2 + 0x113c + uVar4) = bVar3 | bVar1;
  return 1;
}

/* ref: FUN_006ce950 */
uint F_006ce950(unsigned int gen_a0)
{
  GEN_ENTER(0x6ce950u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x220];
  uint uVar1;
  int * piVar2;
  undefined4 * puVar3;
  int iVar4;
  uint * this_00;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x21c);
  (*(uint *)(gen_frame + 0x218)) = uVar1;
  if ((REFG(void * PTR32, 0x132412c) == this) && (REFG(int, 0x1324130) != 0)) {
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar1 = 0;
    if (piVar2 != (int *)0x0) {
      if (REFG(char, 0x1324138) == '\0') {
        REFG(undefined1, 0x1324139) = 1;
        F_00c47745((*(uint *)(gen_frame + 0x218)) ^ (uint)(uint)(gen_frame + 0x21c));
        return (uint)piVar2;
      }
      puVar3 = ((undefined4 *)(gen_frame + 0x8));
      iVar4 = 0x41;
      do {
        *puVar3 = 0;
        puVar3 = puVar3 + 2;
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
      F_006be3d0(this,((undefined4 *)(gen_frame + 0x8)));
      piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
      ((code *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2,REFG(int, 0x1324130),0x42,((undefined4 *)(gen_frame + 0x8)));
      this_00 = &(*(uint *)(gen_frame + 0x218));
      iVar4 = 0x41;
      do {
        this_00 = this_00 + -2;
        uVar1 = F_005a2670(this_00);
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x218)) ^ (uint)(uint)(gen_frame + 0x21c));
  return uVar1;
}

/* ref: FUN_006cea30 */
uint F_006cea30(unsigned int gen_a0)
{
  GEN_ENTER(0x6cea30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  
  ((uint *)(gen_frame + 0x8))[8] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  **(undefined1 * PTR32 *)((int)this + 0x10c) = 0xff;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x10c) + 1))) = 0xff;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x10c) + 2))) = 0xff;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x10c) + 3))) = 0xff;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x10c) + 4))) = 0xff;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x10c) + 5))) = 0xff;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x10c) + 6))) = 0xff;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x10c) + 7))) = 0xff;
  iVar5 = 0;
  cVar4 = '\0';
  ((uint *)(gen_frame + 0x8))[0] = 0;
  ((uint *)(gen_frame + 0x8))[1] = 0;
  ((uint *)(gen_frame + 0x8))[2] = 0;
  ((uint *)(gen_frame + 0x8))[3] = 0;
  ((uint *)(gen_frame + 0x8))[4] = 0;
  ((uint *)(gen_frame + 0x8))[5] = 0;
  ((uint *)(gen_frame + 0x8))[6] = 0;
  ((uint *)(gen_frame + 0x8))[7] = 0;
  uVar3 = 0;
  do {
    iVar1 = *(int *)((int)this + 0x10c);
    if (0 < *(int *)(uVar3 + 0x68 + iVar1)) {
      uVar2 = *(uint *)(uVar3 + 0x68 + iVar1);
      *(char *)(iVar1 + iVar5) = cVar4;
      ((uint *)(gen_frame + 0x8))[(int)(iVar5)] = uVar2;
      iVar5 = iVar5 + 1;
    }
    uVar3 = uVar3 + 0x74;
    cVar4 = cVar4 + '\x01';
  } while (uVar3 < 0x3a0);
  if (*(char *)((int)this + 0x146) == '\x03') {
    uVar3 = F_006cd980(this,((uint *)(gen_frame + 0x8)),iVar5,(uint)*(byte *)((int)this + 0x14a));
    F_00c47745(((uint *)(gen_frame + 0x8))[8] ^ (uint)(uint)(gen_frame + 0x2c));
    return uVar3;
  }
  uVar3 = F_006cd8f0(this,((uint *)(gen_frame + 0x8)),iVar5,(uint)*(byte *)((int)this + 0x14a));
  F_00c47745(((uint *)(gen_frame + 0x8))[8] ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar3;
}

/* ref: Client::Game::Event::CustomTalkEventHandler::vf5 */
byte F_006ceb20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ceb20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar1 = REFG(int, 0x1379694);
  if (REFG(int, 0x1379694) != 0) {
    iVar5 = param_1[0x1e];
    iVar4 = param_1[0x20];
    uVar6 = 1;
    uVar3 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
    bVar2 = F_006beac0(this,iVar1,uVar3,iVar4,iVar5,uVar6);
    return bVar2;
  }
  return 0;
}

/* ref: Client::Game::Event::CustomTalkEventHandler::vf17 */
byte F_006ceb60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ceb60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  piVar1 = REFG(int * PTR32, 0x1379694);
  if (REFG(int * PTR32, 0x1379694) != (int *)0x0) {
    iVar5 = REFG(int * PTR32, 0x1379694)[0x1e];
    iVar4 = REFG(int * PTR32, 0x1379694)[0x20];
    uVar6 = 0xf;
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1379694) + 4))))(REFG(int * PTR32, 0x1379694));
    bVar2 = F_006beac0(this,piVar1,uVar3,iVar4,iVar5,uVar6);
    return bVar2;
  }
  return 0;
}

/* ref: FUN_006ceba0 */
uint F_006ceba0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ceba0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar4 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar3);
  iVar1 = *piVar4;
  if (iVar1 != 0) {
    bVar2 = F_00a01f60(((byte *)(gen_frame + 0xc)),2);
    if (bVar2 != 0) {
      uVar3 = F_00a01e40(((byte *)(gen_frame + 0xc)),2);
      if ((*(byte *)(iVar1 + 0x5c) & 1) == 0) {
        F_00a50ad0(*(undefined4 *)(iVar1 + 8),(uint)*(ushort *)(iVar1 + 0x54),0x32,uVar3);
        *(byte *)(iVar1 + 0x5c) = *(byte *)(iVar1 + 0x5c) | 1;
      }
      uVar3 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
      F_00a02240(((byte *)(gen_frame + 0xc)));
      return uVar3;
    }
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: FUN_006cec40 */
uint F_006cec40(unsigned int gen_a0)
{
  GEN_ENTER(0x6cec40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a02210(((byte *)(gen_frame + 0x4)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x4)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  if (iVar1 != 0) {
    (*(uint *)(gen_frame + 0x24)) = 0;
    (*(uint *)(gen_frame + 0x28)) = 0;
    uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),2);
    (*(uint *)(gen_frame + 0x24)) = uVar2;
    uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),3);
    (*(uint *)(gen_frame + 0x28)) = uVar2;
    if ((*(byte *)(iVar1 + 0x5c) & 1) == 0) {
      F_00a50880(*(undefined4 *)(iVar1 + 8),(uint)*(ushort *)(iVar1 + 0x54),0x33,&(*(uint *)(gen_frame + 0x24)),2);
      *(byte *)(iVar1 + 0x5c) = *(byte *)(iVar1 + 0x5c) | 1;
    }
    uVar2 = F_00a02290(((byte *)(gen_frame + 0x4)),0);
    F_00a02240(((byte *)(gen_frame + 0x4)));
    return uVar2;
  }
  F_00a02240(((byte *)(gen_frame + 0x4)));
  return 0;
}

/* ref: FUN_006cecf0 */
uint F_006cecf0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cecf0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  
  F_00a02210(((byte *)(gen_frame + 0x8)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  if (iVar1 != 0) {
    uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2);
    (*(uint *)(gen_frame + 0x28)) = uVar2;
    uVar4 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),3);
    uVar2 = (*(uint *)(gen_frame + 0x28));
    uVar5 = F_00a01e40(((byte *)(gen_frame + 0x8)),4);
    if ((*(byte *)(iVar1 + 0x5c) & 1) == 0) {
      F_00a50c40(*(undefined4 *)(iVar1 + 8),(uint)*(ushort *)(iVar1 + 0x54),0x34,uVar4,uVar2,uVar5
                  );
      *(byte *)(iVar1 + 0x5c) = *(byte *)(iVar1 + 0x5c) | 1;
    }
    uVar2 = F_00a02290(((byte *)(gen_frame + 0x8)),0);
    F_00a02240(((byte *)(gen_frame + 0x8)));
    return uVar2;
  }
  F_00a02240(((byte *)(gen_frame + 0x8)));
  return 0;
}

/* ref: FUN_006cedb0 */
uint F_006cedb0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cedb0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  
  F_00a02210(((byte *)(gen_frame + 0x8)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  if (iVar1 != 0) {
    uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2);
    (*(uint *)(gen_frame + 0x28)) = uVar2;
    uVar4 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),3);
    uVar2 = (*(uint *)(gen_frame + 0x28));
    uVar5 = F_00a01e40(((byte *)(gen_frame + 0x8)),4);
    if ((*(byte *)(iVar1 + 0x5c) & 1) == 0) {
      F_00a50c40(*(undefined4 *)(iVar1 + 8),(uint)*(ushort *)(iVar1 + 0x54),0x43,uVar4,uVar2,uVar5
                  );
      *(byte *)(iVar1 + 0x5c) = *(byte *)(iVar1 + 0x5c) | 1;
    }
    uVar2 = F_00a02290(((byte *)(gen_frame + 0x8)),0);
    F_00a02240(((byte *)(gen_frame + 0x8)));
    return uVar2;
  }
  F_00a02240(((byte *)(gen_frame + 0x8)));
  return 0;
}

/* ref: FUN_006cee70 */
uint F_006cee70(unsigned int gen_a0)
{
  GEN_ENTER(0x6cee70u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int iVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  undefined4 uVar5;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  F_00a02210(((byte *)(gen_frame + 0x4)),param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0x4)),1);
  piVar4 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),1,uVar3);
  iVar1 = *piVar4;
  if (iVar1 != 0) {
    bVar2 = F_00a01f60(((byte *)(gen_frame + 0x4)),2);
    if (bVar2 != 0) {
      bVar2 = F_00a01f60(((byte *)(gen_frame + 0x4)),3);
      if (bVar2 != 0) {
        uVar5 = REFG(undefined4, 0x108cc50);
        uVar3 = F_00a01e40(((byte *)(gen_frame + 0x4)),2);
        F_0042cc20(((undefined1 *)(gen_frame + 0x24)),uVar3,uVar5);
        F_0042e370(((undefined1 *)(gen_frame + 0x24)),&REFG(undefined, 0x10b696c));
        uVar3 = F_00a01e40(((byte *)(gen_frame + 0x4)),3);
        F_0042e370(((undefined1 *)(gen_frame + 0x24)),uVar3);
        uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x24)));
        if ((*(byte *)(iVar1 + 0x5c) & 1) == 0) {
          F_00a50ad0(*(undefined4 *)(iVar1 + 8),(uint)*(ushort *)(iVar1 + 0x54),0x41,uVar3);
          *(byte *)(iVar1 + 0x5c) = *(byte *)(iVar1 + 0x5c) | 1;
        }
        uVar3 = F_00a02290(((byte *)(gen_frame + 0x4)),0);
        F_0042c880(((undefined1 *)(gen_frame + 0x24)));
        F_00a02240(((byte *)(gen_frame + 0x4)));
        F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
        return uVar3;
      }
    }
  }
  F_00a02240(((byte *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return 0;
}

/* ref: FUN_006cef80 */
uint F_006cef80(unsigned int gen_a0)
{
  GEN_ENTER(0x6cef80u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  
  F_00a02210(((byte *)(gen_frame + 0x4)),param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0x4)),1);
  piVar4 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),1,uVar3);
  iVar2 = *piVar4;
  if (iVar2 != 0) {
    uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),2);
    uVar5 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),3);
    bVar1 = *(byte *)(iVar2 + 0x5c);
    (*(uint *)(gen_frame + 0x28)) = 0;
    (*(uint *)(gen_frame + 0x24)) = uVar3;
    (*(uint *)(gen_frame + 0x28)) = uVar5;
    if ((bVar1 & 1) == 0) {
      F_00a50880(*(undefined4 *)(iVar2 + 8),(uint)*(ushort *)(iVar2 + 0x54),0x44,&(*(uint *)(gen_frame + 0x24)),2);
      *(byte *)(iVar2 + 0x5c) = *(byte *)(iVar2 + 0x5c) | 1;
    }
    uVar3 = F_00a02290(((byte *)(gen_frame + 0x4)),0);
    F_00a02240(((byte *)(gen_frame + 0x4)));
    return uVar3;
  }
  F_00a02240(((byte *)(gen_frame + 0x4)));
  return 0;
}

/* ref: FUN_006cf030 */
uint F_006cf030(unsigned int gen_a0)
{
  GEN_ENTER(0x6cf030u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  
  F_00a02210(((byte *)(gen_frame + 0x8)),param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar4 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar3);
  iVar2 = *piVar4;
  if (iVar2 != 0) {
    uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2);
    bVar1 = *(byte *)(iVar2 + 0x5c);
    (*(uint *)(gen_frame + 0x28)) = uVar3;
    if ((bVar1 & 1) == 0) {
      F_00a50880(*(undefined4 *)(iVar2 + 8),(uint)*(ushort *)(iVar2 + 0x54),0x45,&(*(uint *)(gen_frame + 0x28)),1);
      *(byte *)(iVar2 + 0x5c) = *(byte *)(iVar2 + 0x5c) | 1;
    }
    uVar3 = F_00a02290(((byte *)(gen_frame + 0x8)),0);
    F_00a02240(((byte *)(gen_frame + 0x8)));
    return uVar3;
  }
  F_00a02240(((byte *)(gen_frame + 0x8)));
  return 0;
}

/* ref: FUN_006cf0c0 */
uint F_006cf0c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cf0c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int iVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  undefined4 uVar5;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  F_00a02210(((byte *)(gen_frame + 0x4)),param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0x4)),1);
  piVar4 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),1,uVar3);
  iVar1 = *piVar4;
  if (iVar1 == 0) {
    F_00a02240(((byte *)(gen_frame + 0x4)));
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
    return 0;
  }
  bVar2 = F_00a01f60(((byte *)(gen_frame + 0x4)),2);
  if (bVar2 != 0) {
    bVar2 = F_00a01f60(((byte *)(gen_frame + 0x4)),3);
    if (bVar2 != 0) {
      uVar5 = REFG(undefined4, 0x108cc50);
      uVar3 = F_00a01e40(((byte *)(gen_frame + 0x4)),2);
      F_0042cc20(((undefined1 *)(gen_frame + 0x24)),uVar3,uVar5);
      F_0042e370(((undefined1 *)(gen_frame + 0x24)),&REFG(undefined, 0x10b6970));
      uVar3 = F_00a01e40(((byte *)(gen_frame + 0x4)),3);
      F_0042e370(((undefined1 *)(gen_frame + 0x24)),uVar3);
      uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x24)));
      if ((*(byte *)(iVar1 + 0x5c) & 1) == 0) {
        F_00a50ad0(*(undefined4 *)(iVar1 + 8),(uint)*(ushort *)(iVar1 + 0x54),0x42,uVar3);
        *(byte *)(iVar1 + 0x5c) = *(byte *)(iVar1 + 0x5c) | 1;
      }
      uVar3 = F_00a02290(((byte *)(gen_frame + 0x4)),0);
      F_0042c880(((undefined1 *)(gen_frame + 0x24)));
      F_00a02240(((byte *)(gen_frame + 0x4)));
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
      return uVar3;
    }
  }
  if ((*(byte *)(iVar1 + 0x5c) & 1) == 0) {
    F_00a50880(*(undefined4 *)(iVar1 + 8),(uint)*(ushort *)(iVar1 + 0x54),0x42,0,0);
    *(byte *)(iVar1 + 0x5c) = *(byte *)(iVar1 + 0x5c) | 1;
  }
  uVar3 = F_00a02290(((byte *)(gen_frame + 0x4)),0);
  F_00a02240(((byte *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return uVar3;
}

/* ref: FUN_006cf210 */
uint F_006cf210(unsigned int gen_a0)
{
  GEN_ENTER(0x6cf210u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  if (iVar1 != 0) {
    if ((*(byte *)(iVar1 + 0x5c) & 1) == 0) {
      F_00a50880(*(undefined4 *)(iVar1 + 8),(uint)*(ushort *)(iVar1 + 0x54),0x35,0,0);
      *(byte *)(iVar1 + 0x5c) = *(byte *)(iVar1 + 0x5c) | 1;
    }
    uVar2 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return uVar2;
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: FUN_006cf290 */
uint F_006cf290(unsigned int gen_a0)
{
  GEN_ENTER(0x6cf290u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  if (iVar1 != 0) {
    if ((*(byte *)(iVar1 + 0x5c) & 1) == 0) {
      F_00a50880(*(undefined4 *)(iVar1 + 8),(uint)*(ushort *)(iVar1 + 0x54),0x40,0,0);
      *(byte *)(iVar1 + 0x5c) = *(byte *)(iVar1 + 0x5c) | 1;
    }
    uVar2 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return uVar2;
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: FUN_006cf310 */
uint F_006cf310(unsigned int gen_a0)
{
  GEN_ENTER(0x6cf310u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  if (iVar1 != 0) {
    if ((*(byte *)(iVar1 + 0x5c) & 1) == 0) {
      F_00a50880(*(undefined4 *)(iVar1 + 8),(uint)*(ushort *)(iVar1 + 0x54),0x46,0,0);
      *(byte *)(iVar1 + 0x5c) = *(byte *)(iVar1 + 0x5c) | 1;
    }
    uVar2 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return uVar2;
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: FUN_006cf390 */
uint F_006cf390(unsigned int gen_a0)
{
  GEN_ENTER(0x6cf390u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar4 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar3);
  iVar1 = *piVar4;
  if (iVar1 != 0) {
    bVar2 = F_00a01f60(((byte *)(gen_frame + 0xc)),2);
    if (bVar2 != 0) {
      bVar2 = F_00a01f40(((byte *)(gen_frame + 0xc)),3);
      if (bVar2 != 0) {
        uVar3 = F_00a01e40(((byte *)(gen_frame + 0xc)),2);
        *(uint *)&REFG(undefined, 0x14a6568) = F_00a37120(&REFG(undefined, 0x14a4230));
        uVar5 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),3);
        if ((*(byte *)(iVar1 + 0x5c) & 1) == 0) {
          F_00a50c40(*(undefined4 *)(iVar1 + 8),(uint)*(ushort *)(iVar1 + 0x54),0x36,uVar5,0,uVar3
                      );
          *(byte *)(iVar1 + 0x5c) = *(byte *)(iVar1 + 0x5c) | 1;
        }
        uVar3 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
        F_00a02240(((byte *)(gen_frame + 0xc)));
        return uVar3;
      }
    }
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: FUN_006cf460 */
uint F_006cf460(unsigned int gen_a0)
{
  GEN_ENTER(0x6cf460u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  
  F_00a02210(((byte *)(gen_frame + 0x4)),param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0x4)),1);
  piVar4 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),1,uVar3);
  iVar1 = *piVar4;
  if (iVar1 != 0) {
    bVar2 = F_00a01f40(((byte *)(gen_frame + 0x4)),2);
    if (bVar2 != 0) {
      uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),2);
      *(uint *)&REFG(undefined, 0x14a6568) = F_00a37140(&REFG(undefined, 0x14a4230),uVar3);
      bVar2 = *(byte *)(iVar1 + 0x5c);
      (*(undefined4 *)(gen_frame + 0x24)) = (&REFG(undefined4, 0x14a63ac))[(int)(*(uint *)&REFG(undefined, 0x14a6568) * 0xe)];
      (*(undefined4 *)(gen_frame + 0x28)) = (&REFG(undefined4, 0x14a63a8))[(int)(*(uint *)&REFG(undefined, 0x14a6568) * 0xe)];
      if ((bVar2 & 1) == 0) {
        F_00a50880(*(undefined4 *)(iVar1 + 8),(uint)*(ushort *)(iVar1 + 0x54),0x37,&(*(undefined4 *)(gen_frame + 0x24)),2);
        *(byte *)(iVar1 + 0x5c) = *(byte *)(iVar1 + 0x5c) | 1;
      }
      uVar3 = F_00a02290(((byte *)(gen_frame + 0x4)),0);
      F_00a02240(((byte *)(gen_frame + 0x4)));
      return uVar3;
    }
  }
  F_00a02240(((byte *)(gen_frame + 0x4)));
  return 0;
}

/* ref: FUN_006cf550 */
uint F_006cf550(unsigned int gen_a0)
{
  GEN_ENTER(0x6cf550u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  if (iVar1 != 0) {
    if ((*(byte *)(iVar1 + 0x5c) & 1) == 0) {
      F_00a50880(*(undefined4 *)(iVar1 + 8),(uint)*(ushort *)(iVar1 + 0x54),0x38,0,0);
      *(byte *)(iVar1 + 0x5c) = *(byte *)(iVar1 + 0x5c) | 1;
    }
    uVar2 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return uVar2;
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: FUN_006cf5d0 */
uint F_006cf5d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cf5d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  
  F_00a02210(((byte *)(gen_frame + 0x4)),param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0x4)),1);
  piVar4 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),1,uVar3);
  iVar1 = *piVar4;
  if (iVar1 != 0) {
    bVar2 = F_00a01f40(((byte *)(gen_frame + 0x4)),2);
    if (bVar2 != 0) {
      uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),2);
      *(uint *)&REFG(undefined, 0x14a6568) = F_00a37140(&REFG(undefined, 0x14a4230),uVar3);
      (*(undefined4 *)(gen_frame + 0x24)) = (&REFG(undefined4, 0x14a63ac))[(int)(*(uint *)&REFG(undefined, 0x14a6568) * 0xe)];
      (*(undefined4 *)(gen_frame + 0x28)) = (&REFG(undefined4, 0x14a63a8))[(int)(*(uint *)&REFG(undefined, 0x14a6568) * 0xe)];
      if ((*(byte *)(iVar1 + 0x5c) & 1) == 0) {
        F_00a50880(*(undefined4 *)(iVar1 + 8),(uint)*(ushort *)(iVar1 + 0x54),0x39,&(*(undefined4 *)(gen_frame + 0x24)),2);
        *(byte *)(iVar1 + 0x5c) = *(byte *)(iVar1 + 0x5c) | 1;
      }
      uVar3 = F_00a02290(((byte *)(gen_frame + 0x4)),0);
      F_00a02240(((byte *)(gen_frame + 0x4)));
      return uVar3;
    }
  }
  F_00a02240(((byte *)(gen_frame + 0x4)));
  return 0;
}

/* ref: FUN_006cf6c0 */
uint F_006cf6c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cf6c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  int * piVar5;
  uint uVar6;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar4 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar5 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar4);
  iVar1 = *piVar5;
  if (iVar1 != 0) {
    bVar3 = F_00a01f40(((byte *)(gen_frame + 0xc)),2);
    if (bVar3 != 0) {
      bVar3 = F_00a01f40(((byte *)(gen_frame + 0xc)),3);
      if (bVar3 != 0) {
        uVar4 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),3);
        uVar4 = F_00a37140(&REFG(undefined, 0x14a4230),uVar4);
        uVar6 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
        uVar2 = (&REFG(undefined4, 0x14a63ac))[(int)(uVar4 * 0xe)];
        (*(uint *)(gen_frame + 0x2c)) = uVar6;
        (*(undefined4 *)(gen_frame + 0x30)) = uVar2;
        (*(undefined4 *)(gen_frame + 0x34)) = (&REFG(undefined4, 0x14a63a8))[(int)(uVar4 * 0xe)];
        *(uint *)&REFG(undefined, 0x14a6568) = uVar4;
        if ((*(byte *)(iVar1 + 0x5c) & 1) == 0) {
          F_00a50880(*(undefined4 *)(iVar1 + 8),(uint)*(ushort *)(iVar1 + 0x54),0x3a,&(*(uint *)(gen_frame + 0x2c)),3);
          *(byte *)(iVar1 + 0x5c) = *(byte *)(iVar1 + 0x5c) | 1;
        }
        uVar4 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
        F_00a02240(((byte *)(gen_frame + 0xc)));
        F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
        return uVar4;
      }
    }
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return 0;
}

/* ref: FUN_006cf7f0 */
uint F_006cf7f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cf7f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  
  F_00a02210(((byte *)(gen_frame + 0x4)),param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0x4)),1);
  piVar4 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),1,uVar3);
  iVar1 = *piVar4;
  if (iVar1 != 0) {
    bVar2 = F_00a01f40(((byte *)(gen_frame + 0x4)),2);
    if (bVar2 != 0) {
      uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),2);
      uVar3 = F_00a37140(&REFG(undefined, 0x14a4230),uVar3);
      bVar2 = *(byte *)(iVar1 + 0x5c);
      (*(undefined4 *)(gen_frame + 0x24)) = (&REFG(undefined4, 0x14a63ac))[(int)(uVar3 * 0xe)];
      (*(undefined4 *)(gen_frame + 0x28)) = (&REFG(undefined4, 0x14a63a8))[(int)(uVar3 * 0xe)];
      if ((bVar2 & 1) == 0) {
        F_00a50880(*(undefined4 *)(iVar1 + 8),(uint)*(ushort *)(iVar1 + 0x54),0x3b,&(*(undefined4 *)(gen_frame + 0x24)),2);
        *(byte *)(iVar1 + 0x5c) = *(byte *)(iVar1 + 0x5c) | 1;
      }
      uVar3 = F_00a02290(((byte *)(gen_frame + 0x4)),0);
      F_00a02240(((byte *)(gen_frame + 0x4)));
      return uVar3;
    }
  }
  F_00a02240(((byte *)(gen_frame + 0x4)));
  return 0;
}

/* ref: FUN_006cf8d0 */
uint F_006cf8d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cf8d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  if (iVar1 != 0) {
    if ((*(byte *)(iVar1 + 0x5c) & 1) == 0) {
      F_00a50880(*(undefined4 *)(iVar1 + 8),(uint)*(ushort *)(iVar1 + 0x54),0x3c,0,0);
      *(byte *)(iVar1 + 0x5c) = *(byte *)(iVar1 + 0x5c) | 1;
    }
    uVar2 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return uVar2;
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: FUN_006cf950 */
uint F_006cf950(unsigned int gen_a0)
{
  GEN_ENTER(0x6cf950u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  if (*piVar3 != 0) {
    bVar1 = F_00a01f40(((byte *)(gen_frame + 0xc)),2);
    if (bVar1 != 0) {
      uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
      *(uint *)&REFG(undefined, 0x14a6568) = F_00a37140(&REFG(undefined, 0x14a4230),uVar2);
    }
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: FUN_006cf9c0 */
uint F_006cf9c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cf9c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  uint uVar1;
  int * piVar2;
  undefined4 * puVar3;
  int iVar4;
  byte * pbVar5;
  undefined4 uVar6;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if (*piVar2 != 0) {
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar6 = 1;
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
    uVar1 = F_00763050(uVar1,uVar6);
    puVar3 = (undefined4 *)F_007806c0(uVar1);
    pbVar5 = &(*(byte *)(gen_frame + 0x2c));
    for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pbVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      pbVar5 = pbVar5 + 4;
    }
    *(undefined2 *)pbVar5 = *(undefined2 *)puVar3;
    pbVar5[2] = *(byte *)((int)puVar3 + 2);
    F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)(*(byte *)(gen_frame + 0x2c)));
    F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)(*(byte *)(gen_frame + 0x2d)));
    F_00a39f40();
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return 2;
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 2;
}

/* ref: FUN_006cfa80 */
uint F_006cfa80(unsigned int gen_a0)
{
  GEN_ENTER(0x6cfa80u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  if (iVar1 != 0) {
    if ((*(byte *)(iVar1 + 0x5c) & 1) == 0) {
      F_00a50880(*(undefined4 *)(iVar1 + 8),(uint)*(ushort *)(iVar1 + 0x54),0x47,0,0);
      *(byte *)(iVar1 + 0x5c) = *(byte *)(iVar1 + 0x5c) | 1;
    }
    uVar2 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return uVar2;
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: FUN_006cfb00 */
uint F_006cfb00(unsigned int gen_a0)
{
  GEN_ENTER(0x6cfb00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  
  F_00a02210(((byte *)(gen_frame + 0x8)),param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar4 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar3);
  iVar1 = *piVar4;
  if (iVar1 != 0) {
    bVar2 = F_00a01f40(((byte *)(gen_frame + 0x8)),2);
    if (bVar2 != 0) {
      uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2);
      bVar2 = *(byte *)(iVar1 + 0x5c);
      (*(uint *)(gen_frame + 0x28)) = uVar3;
      if ((bVar2 & 1) == 0) {
        F_00a50880(*(undefined4 *)(iVar1 + 8),(uint)*(ushort *)(iVar1 + 0x54),0x48,&(*(uint *)(gen_frame + 0x28)),1);
        *(byte *)(iVar1 + 0x5c) = *(byte *)(iVar1 + 0x5c) | 1;
      }
      uVar3 = F_00a02290(((byte *)(gen_frame + 0x8)),0);
      F_00a02240(((byte *)(gen_frame + 0x8)));
      return uVar3;
    }
  }
  F_00a02240(((byte *)(gen_frame + 0x8)));
  return 0;
}

/* ref: FUN_006cfba0 */
uint F_006cfba0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cfba0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  undefined4 uVar3;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if (*piVar2 != 0) {
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar3 = 0x37;
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
    piVar2 = (int *)F_00763050(uVar1,uVar3);
    if (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
    }
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: FUN_006cfc10 */
uint F_006cfc10(unsigned int gen_a0)
{
  GEN_ENTER(0x6cfc10u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  if (iVar1 != 0) {
    uVar2 = F_00a37110(&REFG(undefined, 0x14a4230));
    uVar2 = F_00a64490(&REFG(undefined, 0x14a9a18),&REFG(undefined, 0x14a63bc) + uVar2 * 0x38,0);
    if (uVar2 != 0) {
      F_00aa0980(uVar2,(float)(float10)0,0);
      F_00aa0980(uVar2,(float)(float10)0,1);
      *(uint *)(uVar2 + 0x11c) = *(ushort *)(uVar2 + 0x11c) | 0x40;
    }
    if ((*(byte *)(iVar1 + 0x5c) & 1) == 0) {
      F_00a50880(*(undefined4 *)(iVar1 + 8),(uint)*(ushort *)(iVar1 + 0x54),0x3d,0,0);
      *(byte *)(iVar1 + 0x5c) = *(byte *)(iVar1 + 0x5c) | 1;
    }
    uVar2 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return uVar2;
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: FUN_006cfcf0 */
uint F_006cfcf0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cfcf0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  undefined4 uVar3;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if (*piVar2 == 0) {
    F_00a01ec0(((byte *)(gen_frame + 0xc)),&REFG(undefined, 0x10b6974));
    uVar1 = 0;
    uVar3 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8));
  }
  else {
    uVar1 = F_00a37110(&REFG(undefined, 0x14a4230));
    F_00a01ec0(((byte *)(gen_frame + 0xc)),&REFG(undefined, 0x14a63bc) + uVar1 * 0x38);
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1379694) + 0x1c))))(REFG(int * PTR32, 0x1379694));
    uVar1 = (uVar1 & 0xff) + 1 & 0x80000001;
    uVar3 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8));
  }
  F_00b9ae00(uVar3,uVar1);
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 2;
}

/* ref: FUN_006cfda0 */
uint F_006cfda0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cfda0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  int * piVar3;
  undefined4 uVar4;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  if (*piVar3 == 0) {
    uVar2 = 0;
    uVar4 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8));
  }
  else {
    bVar1 = F_00a379a0(&REFG(undefined, 0x14a4230));
    uVar2 = (uint)bVar1;
    uVar4 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8));
  }
  F_00b9ae00(uVar4,uVar2);
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cfe10 */
uint F_006cfe10(unsigned int gen_a0)
{
  GEN_ENTER(0x6cfe10u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x1b0];
  uint uVar1;
  int * piVar2;
  undefined * this;
  undefined8 * puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 * puVar7;
  
  (*(uint *)(gen_frame + 0x1a8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1ac);
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar1);
  if (*piVar2 != 0) {
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar6 = 2;
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x44))(piVar2);
    this = (undefined *)F_00435440(uVar1,uVar6);
    F_00439400(this,((undefined8 *)(gen_frame + 0x28)));
    puVar3 = ((undefined8 *)(gen_frame + 0x28));
    iVar5 = 8;
    do {
      iVar4 = iVar5;
      if (*(char *)(puVar3 + 5) == '\0') {
        F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),0);
        F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),0);
        puVar7 = (undefined8 *)&REFG(undefined, 0x10b3a57);
      }
      else {
        F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),(int)((ulonglong)*puVar3 >> 0x20));
        F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),*(undefined4 *)puVar3);
        puVar7 = puVar3 + 1;
      }
      F_00a01ec0(((byte *)(gen_frame + 0x8)),puVar7);
      puVar3 = puVar3 + 6;
      iVar5 = iVar4 + -1;
    } while (iVar5 != 0);
    F_00a01890(((byte *)(gen_frame + 0x8)));
    F_00c47745((*(uint *)(gen_frame + 0x1a8)) ^ (uint)(uint)(gen_frame + 0x1ac));
    return iVar4 + 0x17;
  }
  F_00a01890(((byte *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x1a8)) ^ (uint)(uint)(gen_frame + 0x1ac));
  return 0;
}

/* ref: FUN_006cff40 */
uint F_006cff40(unsigned int gen_a0)
{
  GEN_ENTER(0x6cff40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  cVar1 = (char)uVar2;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),3);
  uVar2 = F_00ab3fa0((uVar2 & 0xff) + 1);
  if (uVar2 != 0) {
    uVar3 = 0;
    if (cVar1 == '\x01') {
      uVar3 = *(undefined4 *)(uVar2 + 0x14);
    }
    else if (cVar1 == '\x02') {
      uVar3 = *(undefined4 *)(uVar2 + 0x18);
    }
    else if (cVar1 == '\x03') {
      uVar3 = *(undefined4 *)(uVar2 + 0x1c);
    }
    F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar3);
    F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)*(byte *)(uVar2 + 0x22));
  }
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 2;
}

/* ref: Client::Game::Event::CustomTalkEventHandler::vf116 */
byte F_006cfff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6cfff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar1 = REFG(int, 0x1379694);
  if (REFG(int, 0x1379694) == 0) {
    return 0;
  }
  iVar5 = param_1[0x1e];
  iVar4 = param_1[0x20];
  uVar6 = 1;
  uVar3 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  bVar2 = F_006beac0(this,iVar1,uVar3,iVar4,iVar5,uVar6);
  return bVar2;
}

/* ref: FUN_006d002f */
unsigned int F_006d002f(void)
{
  GEN_ENTER(0x6d002fu, 0u, 0u, 0u, 0u);
  code * pcVar1;
  
  pcVar1 = ((code *)GEN_TOP(swi(3)));
  (*pcVar1)();
  return 0;
}

/* ref: Client::Game::Event::CustomTalkEventHandler::vf117 */
byte F_006d0030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d0030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  if (REFG(int, 0x1379694) == 0) {
    return 0;
  }
  bVar1 = F_006beb60(this,REFG(int, 0x1379694),param_1,param_2);
  return bVar1;
}

/* ref: FUN_006d0060 */
uint F_006d0060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6d0060u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if ((*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2f0))) & 2) != 0) {
    iVar5 = (*(int * PTR32 *)&gen_args[1])[0x5d];
    if ((iVar5 == 0) || (uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 4))))((*(int * PTR32 *)&gen_args[1])), uVar2 != 1)) {
      iVar5 = 0;
    }
    if ((iVar5 != 0) && (*(int *)((*(int *)&gen_args[2]) + 0x174) != 0)) {
      uVar2 = F_0042a990(*(int *)((*(int *)&gen_args[2]) + 0x174) + 8);
      uVar3 = F_0042a990(iVar5 + 8);
      uVar4 = F_0042a990((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x16c);
      (*(uint *)&gen_args[3]) = F_00a030f0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8))),"GetConditionId",uVar4,uVar3,uVar2,
                             (*(uint *)&gen_args[3]) & 0xff,(*(undefined4 *)&gen_args[4]),1);
      if (((*(uint *)&gen_args[3]) == 0) &&
         (bVar1 = F_00727410(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8))),&(*(uint *)&gen_args[3])), bVar1 != 0)) {
        return (*(uint *)&gen_args[3]);
      }
    }
  }
  return 0x10;
}

/* ref: Client::Game::Event::CustomTalkEventHandler::vf132 */
uint F_006d0110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6d0110u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_006d0060(this,param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Client::Game::Event::CustomTalkEventHandler::vf131 */
byte F_006d0120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6d0120u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_006d0060(this,param_1,param_2,param_3,param_4);
  return uVar1 == 0x11;
}

/* ref: FUN_006d0150 */
uint F_006d0150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6d0150u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int * piVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 * this_00;
  int iVar4;
  
  uVar2 = 0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
  case 2: ;
    uVar2 = 0x21;
    break;
  case 1: ;
  case 3: ;
    uVar2 = 9;
  }
  uVar3 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),uVar2);
  *(uint *)((int)this + param_1 * 4 + 0x108) = uVar3;
  this_00 = (undefined4 *)F_00406b90(0x20,0,0);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(this_00,param_2,param_1);
    this_00[5] = param_2;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10b91e8));
    this_00[6] = this;
    this_00[7] = ((code *)REFP(0x70c7d0));
  }
  *(undefined4 * PTR32 *)((int)this + param_1 * 4 + 0xf8) = this_00;
  iVar4 = 0;
  if (0 < param_2) {
    do {
      F_00cb4540(*(undefined * PTR32 *)((int)this + param_1 * 4 + 0xf8),iVar4,
                   *(undefined4 *)(param_3 + iVar4 * 4));
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_2);
  }
  piVar1 = *(int * PTR32 *)((int)this + param_1 * 4 + 0x108);
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1,*(undefined4 *)((int)this + param_1 * 4 + 0xf8));
  return uVar3;
}

/* ref: FUN_006d0230 */
uint F_006d0230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d0230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  undefined4 * puVar7;
  uint uVar8;
  int * piVar9;
  int * piVar10;
  undefined * this_00;
  int iVar11;
  uint * this_01;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined * PTR32 * ppuVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  uVar2 = *(ushort *)((int)this + 0x15a);
  uVar3 = *(ushort *)((int)this + 0x178);
  uVar4 = *(ushort *)((int)this + 0x15c);
  uVar5 = *(ushort *)((int)this + 0x17a);
  iVar12 = (int)((uint)*(ushort *)((int)this + 0x17c) * (uint)*(ushort *)((int)this + 0x15e)) / 100;
  puVar7 = ((undefined4 *)(gen_frame + 0x0));
  iVar11 = 0xe;
  do {
    *puVar7 = 0;
    puVar7 = puVar7 + 2;
    iVar11 = iVar11 + -1;
  } while (-1 < iVar11);
  *(undefined * PTR32 *)&REFG(undefined, 0x1324140) = this;
  F_005a2710(((undefined4 *)(gen_frame + 0x0)),4);
  uVar13 = *(undefined4 *)((int)this + 300);
  ((undefined4 *)(gen_frame + 0x0))[1] = 0;
  F_005a2710(((undefined1 *)(gen_frame + 0x68)),4);
  (*(undefined4 *)(gen_frame + 0x6c)) = uVar13;
  uVar8 = F_00ab6240(*(undefined4 *)((int)this + 300),0,param_1);
  F_005a2710(((undefined1 *)(gen_frame + 0x8)),6);
  uVar6 = *(ushort *)(param_1 + 0x7c);
  (*(uint *)(gen_frame + 0xc)) = uVar8;
  F_005a2710(((undefined1 *)(gen_frame + 0x10)),4);
  bVar1 = *(byte *)((int)this + 0x167);
  (*(uint *)(gen_frame + 0x14)) = (uint)uVar6;
  F_005a2710(((undefined1 *)(gen_frame + 0x18)),4);
  (*(uint *)(gen_frame + 0x1c)) = (uint)bVar1;
  F_005a2710(((undefined1 *)(gen_frame + 0x28)),4);
  (*(int *)(gen_frame + 0x2c)) = (int)((uint)uVar3 * (uint)uVar2) / 100;
  F_005a2710(((undefined1 *)(gen_frame + 0x38)),4);
  (*(int *)(gen_frame + 0x3c)) = iVar12;
  F_005a2710(((undefined1 *)(gen_frame + 0x70)),4);
  (*(int *)(gen_frame + 0x74)) = (int)((uint)uVar5 * (uint)uVar4) / 100;
  F_005a2710(((undefined1 *)(gen_frame + 0x20)),4);
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  F_005a2710(((undefined1 *)(gen_frame + 0x30)),4);
  (*(int *)(gen_frame + 0x34)) = iVar12;
  uVar2 = *(ushort *)((int)this + 0x122);
  F_005a2710(((undefined1 *)(gen_frame + 0x40)),4);
  (*(uint *)(gen_frame + 0x44)) = (uint)uVar2;
  bVar1 = *(byte *)((int)this + 0x121);
  F_005a2710(((undefined1 *)(gen_frame + 0x48)),4);
  (*(uint *)(gen_frame + 0x4c)) = (uint)bVar1;
  F_005a2710(((undefined1 *)(gen_frame + 0x60)),4);
  (*(undefined4 *)(gen_frame + 0x64)) = 1;
  F_006bed80(this,1,((undefined4 *)(gen_frame + 0x0)));
  piVar9 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  if (REFG(undefined4, 0x1324144) != 0) {
    piVar10 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar9 + 0x1c))(piVar9)));
    ((code *)*(gen_code32 *)(*piVar10 + 0x54))(piVar10,REFG(undefined4, 0x1324144),0);
  }
  uVar18 = 4;
  uVar17 = 0;
  uVar16 = 0;
  ppuVar15 = &REFG(undefined * PTR32, 0x132413c);
  puVar7 = ((undefined4 *)(gen_frame + 0x0));
  uVar14 = 0xf;
  uVar13 = 0x39;
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar9 + 0x1c))(piVar9)));
  REFG(undefined4, 0x1324144) = F_008668b0(this_00,uVar13,uVar14,puVar7,ppuVar15,uVar16,uVar17,uVar18);
  this_01 = &(*(uint *)(gen_frame + 0x78));
  iVar12 = 0xe;
  do {
    this_01 = this_01 + -2;
    uVar8 = F_005a2670(this_01);
    iVar12 = iVar12 + -1;
  } while (-1 < iVar12);
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return uVar8;
}

/* ref: FUN_006d0480 */
uint F_006d0480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d0480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char local_5;
  
  if (*(char *)(param_2 + 0x188) != '\x05') {
    return 0x24a;
  }
  uVar2 = F_00ab1f00(param_1);
  if (uVar2 == 0) {
    return 0x243;
  }
  uVar4 = (uint)REFG(undefined1, 0x14ab0d4);
  local_5 = '\0';
  uVar3 = F_00ab21d0((uint)*(byte *)(uVar2 + 0xe));
  if ((uVar3 != 0) && (uVar4 < 0x1e)) {
    local_5 = *(char *)(uVar3 + 4 + uVar4);
  }
  uVar3 = F_00a68280(&REFG(undefined1, 0x14ab070),(int)*(char *)(uVar2 + 0x11),1);
  if ((ushort)uVar3 < (ushort)*(byte *)(uVar2 + 0xf)) {
    return (local_5 == '\0') + 0x23d;
  }
  if (local_5 != '\0') {
    if (((int)*(char *)(uVar2 + 0x11) == uVar4) || (*(char *)(uVar2 + 0xe) != '!')) {
LAB_006d0559: ;
      uVar3 = F_006bf0c0(this,param_1);
      if (uVar3 != 2) {
        bVar1 = F_006bf130(param_1,param_2,uVar2);
        return (-(uint)(bVar1 != 0) & 0xfffffdc5) + 0x23b;
      }
      return 0x243;
    }
    uVar3 = F_00ac30f0(1);
    iVar5 = 0;
    if (0 < (int)uVar3) {
      do {
        uVar4 = F_00ac3430(&REFG(undefined, 0x14bcf40),iVar5);
        if (uVar4 == param_1) goto LAB_006d0559;
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)uVar3);
    }
  }
  return 0x23e;
}

/* ref: FUN_006d05b0 */
byte F_006d05b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6d05b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  byte bVar2;
  
  if (1999 < param_1) {
    return 0;
  }
  uVar1 = F_00a4ffd0();
  bVar2 = 0;
  if (param_1 >> 3 < 0xfa) {
    bVar2 = *((byte *)GEN_TOP(((param_1 >> 3) + 0x11f0 + uVar1)));
  }
  return (bVar2 & (byte)(0x80 >> ((byte)param_1 & 7))) != 0;
}

/* ref: FUN_006d0600 */
byte F_006d0600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d0600u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (0x27 < param_2) {
    return 0;
  }
  uVar1 = F_00a4ffd0();
  return (*((byte *)GEN_TOP(((param_2 + param_1 * 0x28 >> 3) + 0x11a0 + uVar1))) &
         (byte)(0x80 >> ((byte)param_2 & 7))) != 0;
}

/* ref: FUN_006d0640 */
byte F_006d0640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d0640u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte bVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  
  if (0x27 < param_2) {
    return 0;
  }
  uVar2 = F_00a4ffd0();
  uVar4 = param_2 + param_1 * 0x28 >> 3;
  bVar3 = (byte)(0x80 >> ((byte)param_2 & 7));
  if ((*(byte *)(uVar4 + 0x11a0 + uVar2) & bVar3) != 0) {
    return 0;
  }
  uVar2 = F_00a4ffd0();
  bVar1 = *(byte *)(uVar4 + 0x11a0 + uVar2);
  uVar2 = F_00a4ffd0();
  *(byte *)(uVar2 + 0x11a0 + uVar4) = bVar1 | bVar3;
  return 1;
}

/* ref: FUN_006d06b0 */
byte F_006d06b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d06b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  short * psVar6;
  
  if (REFG(char, 0x14ab845) == '\0') {
    psVar6 = &REFG(undefined2, 0x14ab7d8);
    do {
      iVar5 = *(int *)(psVar6 + -2);
      if (iVar5 != 0) {
        bVar2 = *(byte *)(psVar6 + 2);
        if (bVar2 != 0) {
          if (*psVar6 == 9999) {
            uVar3 = F_006bf440(param_1,iVar5,(uint)bVar2);
            if (uVar3 != 0) {
              return 0;
            }
          }
          else {
            iVar1 = *(int *)(param_1 + 0xdc);
            *(int *)(param_1 + 4 + iVar1 * 4) = iVar5;
            *(byte *)(iVar1 + 0x7c + param_1) = bVar2;
            *(char *)(iVar1 + 0x9c + param_1) = (char)*psVar6;
            *(char *)(iVar1 + 0xbc + param_1) = (char)psVar6[1];
            *(int *)(param_1 + 0xdc) = iVar1 + 1;
          }
        }
        bVar2 = *(byte *)((int)psVar6 + 5);
        if (bVar2 != 0) {
          if (*psVar6 == 9999) {
            uVar3 = F_006bf440(param_1,iVar5 + 1000000,(uint)bVar2);
            if (uVar3 != 0) {
              return 0;
            }
          }
          else {
            iVar1 = *(int *)(param_1 + 0xdc);
            *(int *)(param_1 + 4 + iVar1 * 4) = iVar5 + 1000000;
            *(byte *)(iVar1 + 0x7c + param_1) = bVar2;
            *(char *)(iVar1 + 0x9c + param_1) = (char)*psVar6;
            *(char *)(iVar1 + 0xbc + param_1) = (char)psVar6[1];
            *(int *)(param_1 + 0xdc) = iVar1 + 1;
          }
        }
      }
      psVar6 = psVar6 + 6;
    } while ((int)psVar6 < 0x14ab838);
  }
  else {
    piVar4 = &REFG(undefined4, 0x14ab7d4);
    do {
      iVar5 = *piVar4;
      if (((iVar5 != 0) && (*(byte *)(piVar4 + 2) != 0)) &&
         (uVar3 = F_006bf440(param_1,iVar5,(uint)*(byte *)(piVar4 + 2)), uVar3 != 0)) {
        if (REFG(char, 0x14ab846) == '\0') {
          return 0;
        }
        uVar3 = F_006bf440(param_1,iVar5 + 1000000,uVar3);
        if (uVar3 != 0) {
          return 0;
        }
      }
      piVar4 = piVar4 + 3;
    } while ((int)piVar4 < 0x14ab834);
  }
  iVar5 = 0;
  piVar4 = &REFG(undefined4, 0x14ab834);
  while( true ) {
    if (((*piVar4 != 0) && ((byte)(&REFG(undefined1, 0x14ab842))[(int)(iVar5)] != 0)) &&
       (bVar2 = F_006bf550(param_1,*piVar4,(uint)(byte)(&REFG(undefined1, 0x14ab842))[(int)(iVar5)]), bVar2 == 0))
    break;
    piVar4 = piVar4 + 1;
    iVar5 = iVar5 + 1;
    if (0x14ab83b < (int)piVar4) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_006d0830 */
uint F_006d0830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6d0830u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint * puVar4;
  uint local_8;
  
  if ((**(char * PTR32 *)((int)this + 0x16c) != '\0') && (local_8 = 0, REFG(int * PTR32, 0x1379694) != (int *)0x0)) {
    iVar2 = REFG(int * PTR32, 0x1379694)[0x5d];
    if ((iVar2 == 0) || (uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1379694) + 4))))(REFG(int * PTR32, 0x1379694)), uVar1 != 1)) {
      iVar2 = 0;
    }
    uVar1 = F_0042a990(iVar2 + 8);
    uVar3 = F_0042a990((int)this + 0x16c);
    uVar1 = F_00a028c0(*(undefined * PTR32 *)((int)this + 0xf8),"GetSequenceArgs",uVar3,uVar1,param_1 & 0xff,
                         param_3);
    if ((uVar1 == 0) && (param_3 != 0)) {
      puVar4 = (uint *)(param_2 + -4 + param_3 * 4);
      param_1 = param_3;
      do {
        *puVar4 = 0;
        iVar2 = *(int *)((int)this + 0xf8);
        uVar1 = F_00b9a9b0(*(undefined4 *)(iVar2 + 8),0xffffffff);
        if (uVar1 != 0) {
          uVar3 = F_00b9ab70(*(undefined4 *)(iVar2 + 8),0xffffffff);
          *puVar4 = uVar3;
        }
        F_00b9a760(*(undefined4 *)(iVar2 + 8),0xfffffffe);
        if (uVar1 != 0) {
          local_8 = local_8 + 1;
        }
        puVar4 = puVar4 + -1;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
    return local_8;
  }
  return 0;
}

/* ref: Client::Game::Event::QuestEventHandler::vf127 */
uint F_006d0940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d0940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  
  iVar4 = REFG(int, 0x1379694);
  if (REFG(int, 0x1379694) == 0) {
    return 0;
  }
  iVar1 = *(int *)this;
  iVar2 = param_1[0x20];
  iVar3 = param_1[0x1e];
  uVar6 = ((code *)*(gen_code32 *)(*param_1 + 0xa8))(param_1);
  uVar6 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1,iVar2,iVar3,uVar6);
  uVar6 = ((code *)*(gen_code32 *)(iVar1 + 0x200))(this,uVar6);
  if ((uVar6 != 0) && (bVar5 = F_006c0470(iVar4,param_1), bVar5 != 0)) {
    return 0;
  }
  uVar7 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  if ((uVar7 == 2) && (uVar7 = F_00a5f290(param_1), *(char *)(uVar7 + 0x188) == '\x02')) {
    return 0;
  }
  return uVar6;
}

/* ref: FUN_006d09f0 */
uint F_006d09f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6d09f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  if (iVar1 != 0) {
    if (REFG(int, 0x1324160) == 0) {
      REFG(int, 0x1324160) = iVar1;
      *(byte *)(iVar1 + 800) = *(byte *)(iVar1 + 800) | 0x10;
      F_00a7ed30(&REFG(undefined, 0x14afd38),iVar1 + 0x350,(uint)*(ushort *)(iVar1 + 0x1d4));
      uVar2 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
      F_00a02240(((byte *)(gen_frame + 0xc)));
      return uVar2;
    }
    F_00a01a20(((byte *)(gen_frame + 0xc)),&REFG(undefined, 0x10b6a20));
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: FUN_006d0a90 */
uint F_006d0a90(unsigned int gen_a0)
{
  GEN_ENTER(0x6d0a90u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  if (iVar1 != 0) {
    if (REFG(int, 0x1324170) == 0) {
      REFG(int, 0x1324170) = iVar1;
      *(byte *)(iVar1 + 800) = *(byte *)(iVar1 + 800) & 0xef;
      F_00a7ed30(&REFG(undefined, 0x14afd38),iVar1 + 0x350,(uint)*(ushort *)(iVar1 + 0x1d4));
      uVar2 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
      F_00a02240(((byte *)(gen_frame + 0xc)));
      return uVar2;
    }
    F_00a01a20(((byte *)(gen_frame + 0xc)),&REFG(undefined, 0x10b6a40));
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: FUN_006d0b30 */
uint F_006d0b30(unsigned int gen_a0)
{
  GEN_ENTER(0x6d0b30u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  puVar3 = (undefined4 *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  if ((undefined *)*puVar3 != (undefined *)0x0) {
    bVar1 = F_006bfaf0((undefined *)*puVar3);
    if (bVar1 != 0) {
      uVar2 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
      F_00a02240(((byte *)(gen_frame + 0xc)));
      return uVar2;
    }
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: FUN_006d0ba0 */
uint F_006d0ba0(unsigned int gen_a0)
{
  GEN_ENTER(0x6d0ba0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)*(ushort *)(*piVar2 + 0x1d4));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: Client::Game::Event::QuestEventHandler::vf122 */
uint F_006d0bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d0bf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint * puVar4;
  
  if (((**(char * PTR32 *)(this + 0x16c) != '\0') && (2 < param_2)) && (REFG(int * PTR32, 0x1379694) != (int *)0x0)) {
    iVar2 = REFG(int * PTR32, 0x1379694)[0x5d];
    if ((iVar2 == 0) || (uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1379694) + 4))))(REFG(int * PTR32, 0x1379694)), uVar1 != 1)) {
      iVar2 = 0;
    }
    param_2 = 0;
    uVar1 = F_0042a990(iVar2 + 8);
    uVar3 = F_0042a990(this + 0x16c);
    uVar1 = F_00a02700(*(undefined * PTR32 *)(this + 0xf8),"GetEventItems",uVar3,uVar1,9);
    if (uVar1 == 0) {
      puVar4 = (uint *)(param_1 + 0x24);
      param_1 = 3;
      do {
        *(undefined1 *)(puVar4 + 1) = 0;
        *puVar4 = 0;
        puVar4[-1] = 0;
        F_00a01d80(*(undefined * PTR32 *)(this + 0xf8),puVar4 + 1);
        iVar2 = *(int *)(this + 0xf8);
        uVar1 = F_00b9a9b0(*(undefined4 *)(iVar2 + 8),0xffffffff);
        if (uVar1 != 0) {
          uVar1 = F_00b9ab70(*(undefined4 *)(iVar2 + 8),0xffffffff);
          *puVar4 = uVar1;
        }
        F_00b9a760(*(undefined4 *)(iVar2 + 8),0xfffffffe);
        iVar2 = *(int *)(this + 0xf8);
        uVar1 = F_00b9a9b0(*(undefined4 *)(iVar2 + 8),0xffffffff);
        if (uVar1 != 0) {
          uVar1 = F_00b9ab70(*(undefined4 *)(iVar2 + 8),0xffffffff);
          puVar4[-1] = uVar1;
        }
        F_00b9a760(*(undefined4 *)(iVar2 + 8),0xfffffffe);
        if (puVar4[-1] != 0) {
          param_2 = param_2 + 1;
        }
        puVar4 = puVar4 + -4;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
    return param_2;
  }
  return 0;
}

/* ref: FUN_006d0d30 */
uint F_006d0d30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6d0d30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a3;
  undefined1 * param_4 = (undefined1 *)(uintptr_t)gen_a4;
  uint uVar1;
  int iVar2;
  uint uVar3;
  char * pcVar4;
  
  pcVar4 = *(char * PTR32 *)((int)this + 0x16c);
  if (*pcVar4 != '\0') {
    iVar2 = param_1[0x5d];
    if ((iVar2 == 0) || (uVar1 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1), uVar1 != 1)) {
      iVar2 = 0;
    }
    *param_3 = 0;
    *param_4 = 0;
    uVar1 = F_0042a990(iVar2 + 8);
    uVar3 = F_0042a990((int)this + 0x16c);
    pcVar4 = (char *)F_00a028c0(*(undefined * PTR32 *)((int)this + 0xf8),"GetTodoArgs",uVar3,uVar1,
                                  param_2 & 0xff,2);
    if (pcVar4 == (char *)0x0) {
      iVar2 = *(int *)((int)this + 0xf8);
      uVar3 = 0;
      param_2 = 0;
      uVar1 = F_00b9a9b0(*(undefined4 *)(iVar2 + 8),0xffffffff);
      if (uVar1 != 0) {
        uVar3 = F_00b9ab70(*(undefined4 *)(iVar2 + 8),0xffffffff);
      }
      F_00b9a760(*(undefined4 *)(iVar2 + 8),0xfffffffe);
      iVar2 = *(int *)((int)this + 0xf8);
      uVar1 = F_00b9a9b0(*(undefined4 *)(iVar2 + 8),0xffffffff);
      if (uVar1 != 0) {
        param_2 = F_00b9ab70(*(undefined4 *)(iVar2 + 8),0xffffffff);
      }
      uVar1 = F_00b9a760(*(undefined4 *)(iVar2 + 8),0xfffffffe);
      if ((1 < uVar3) && (uVar3 < param_2)) {
        param_2 = uVar3;
      }
      pcVar4 = ((char *)GEN_TOP(CONCAT31((int3)(uVar1 >> 8),(undefined1)param_2)));
      *param_3 = (undefined1)param_2;
      *param_4 = (char)uVar3;
    }
  }
  return (uint)pcVar4;
}

/* ref: FUN_006d0e40 */
byte F_006d0e40(unsigned int gen_a0)
{
  GEN_ENTER(0x6d0e40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte bVar1;
  
  bVar1 = F_006c05a0(param_1,0);
  return bVar1;
}

/* ref: FUN_006d0e60 */
uint F_006d0e60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6d0e60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  int iVar1;
  undefined4 * puVar2;
  undefined1 * puVar3;
  int * piVar4;
  uint uVar5;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  uVar5 = 0;
  if (param_2 != 0) {
    puVar3 = (undefined1 *)((int)this + 0x1d8);
    do {
      iVar1 = *((int *)GEN_TOP((*(int *)(param_1 + uVar5 * 4) + 4)));
      if (*(int *)(iVar1 + 0xc) == 0) break;
      *(int *)(puVar3 + -0x74) = *(int *)(iVar1 + 0xc);
      *puVar3 = *(undefined1 *)(iVar1 + 0x14);
      *(undefined4 *)(puVar3 + -0x58) = *(undefined4 *)(iVar1 + 0x10);
      uVar5 = uVar5 + 1;
      puVar3 = puVar3 + 0x7c;
    } while (uVar5 < param_2);
  }
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x1c04);
  if (puVar2 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    *(undefined4 *)((int)this + 0x1c04) = 0;
  }
  uVar5 = 0;
  if (*(int *)((int)this + 0x108) != 0) {
    piVar4 = (int *)((int)this + 0x164);
    do {
      if (*piVar4 == 0) break;
      ((int *)(gen_frame + 0x8))[(int)(uVar5)] = *piVar4;
      uVar5 = uVar5 + 1;
      piVar4 = piVar4 + 0x1f;
    } while (uVar5 < *(uint *)((int)this + 0x108));
  }
  uVar5 = F_006cd8f0(this,((int *)(gen_frame + 0x8)),uVar5,0);
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return uVar5;
}

/* ref: FUN_006d0f20 */
byte F_006d0f20(void)
{
  GEN_ENTER(0x6d0f20u, 0u, 0u, 0u, 0u);
  if (REFG(int, 0x1488760) != 0) {
    return *(short *)(REFG(int, 0x1488760) + 0x54) != -1;
  }
  return 0;
}

/* ref: FUN_006d0f40 */
byte F_006d0f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d0f40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  if (REFG(void * PTR32, 0x1488760) != (undefined *)0x0) {
    bVar1 = F_006c2270(REFG(void * PTR32, 0x1488760),param_1,param_2);
    return bVar1;
  }
  return 0;
}

/* ref: FUN_006d0f60 */
byte F_006d0f60(unsigned int gen_a0)
{
  GEN_ENTER(0x6d0f60u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (REFG(int, 0x1488760) != 0) {
    return (byte)*(undefined4 *)(param_1 * 0x7c + 0x180 + REFG(int, 0x1488760));
  }
  return 0;
}

/* ref: FUN_006d0f80 */
byte F_006d0f80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6d0f80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  if ((((*(short *)((int)this + 0x54) != -1) && (*(short *)((int)this + 0x54) == 0x28)) &&
      (*(int *)((int)this + 0x104) == param_1)) && (*(int *)((int)this + 0x100) == param_2)) {
    *(undefined4 *)((int)this + 0x104) = param_3;
    *(undefined4 *)((int)this + 0x100) = param_4;
    return 1;
  }
  return 0;
}

/* ref: FUN_006d0fd0 */
uint F_006d0fd0(void)
{
  GEN_ENTER(0x6d0fd0u, 0u, 0u, 0u, 0u);
  byte bVar1;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  int * piVar2;
  uint uVar3;
  
  if (((REFG(void * PTR32, 0x1488760) != (undefined *)0x0) && (REFG(int, 0x1324194) != 0)) &&
     (*((char *)GEN_TOP(((int)REFG(void * PTR32, 0x1488760) + 0x1bee))) == '\0')) {
    bVar1 = F_006c1d30(REFG(void * PTR32, 0x1488760));
    in_EAX = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      if (REFG(int, 0x13241c4) != 0) {
        piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
        ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,REFG(int, 0x13241c4),0);
        *(undefined4 *)&REFG(undefined, 0x13241c0) = 0;
      }
      in_EAX = F_006c1620(REFG(void * PTR32, 0x1488760));
      if (*((char *)GEN_TOP(((int)REFG(void * PTR32, 0x1488760) + 0x1bf8))) != '\0') {
        uVar3 = F_006c1990(REFG(void * PTR32, 0x1488760));
        return uVar3;
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_006d1050 */
uint F_006d1050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d1050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined * this_00;
  undefined3 extraout_var = 0;
  byte bVar5;
  byte * pbVar6;
  uint * puVar7;
  ushort * puVar8;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(uint *)(gen_frame + 0x38)) = uVar1;
  uVar2 = *param_1;
  if (uVar2 == 1) {
    uVar2 = param_1[1];
    *(uint *)((int)this + 0x1bd0) = uVar2;
    *(uint *)((int)this + 0x1be0) = param_1[2];
    (*(byte *)(gen_frame + 0xf)) = 0;
    if (0 < (int)uVar2) {
      uVar2 = 0;
      do {
        iVar3 = uVar2 * 0x7c;
        *(uint *)(iVar3 + 0x168 + (int)this) = param_1[uVar2 + 3];
        uVar1 = F_00a41080(&REFG(undefined, 0x14a4230),*(undefined4 *)(iVar3 + 0x164 + (int)this),
                             (uint)*(byte *)(iVar3 + 0x1d8 + (int)this),1,1);
        *((uint *)GEN_TOP(((uVar2 + 3) * 0x7c + (int)this))) = uVar1;
        (*(byte *)(gen_frame + 0xf)) = (*(byte *)(gen_frame + 0xf)) + 1;
        uVar2 = (uint)(*(byte *)(gen_frame + 0xf));
      } while ((int)uVar2 < *(int *)((int)this + 0x1bd0));
    }
    iVar3 = *(int *)((int)this + 0x1bd0);
    (*(byte *)(gen_frame + 0xf)) = 0;
    do {
      uVar2 = (uint)(*(byte *)(gen_frame + 0xf));
      iVar4 = iVar3 + 3 + uVar2;
      if ((param_1[iVar4 + 0x14] == 0) && (param_1[iVar4 + 10] == 0)) break;
      *(uint *)((int)this + uVar2 * 0xa8 + 0x1538) = param_1[iVar4];
      *(uint *)((int)this + uVar2 * 0xa8 + 0x153c) = param_1[iVar4 + 10];
      *(uint *)((int)this + uVar2 * 0xa8 + 0x1540) = param_1[iVar4 + 0x14];
      *(char *)((int)this + uVar2 * 0xa8 + 0x1548) = (char)param_1[iVar4 + 0x1e];
      *(char *)((int)this + uVar2 * 0xa8 + 0x15a0) = (char)param_1[iVar4 + 0x28];
      *((uint *)GEN_TOP(((uVar2 + 0x21) * 0xa8 + (int)this))) = param_1[iVar4 + 0x32];
      uVar1 = param_1[iVar4 + 0x3c];
      *(uint *)((int)this + uVar2 * 0xa8 + 0x15b0) = uVar1;
      *(undefined4 *)((int)this + uVar2 * 0xa8 + 0x15b4) = 0;
      *(uint *)((int)this + uVar2 * 0xa8 + 0x15b0) = param_1[iVar4 + 0x46];
      *(uint *)((int)this + uVar2 * 0xa8 + 0x15b4) = uVar1;
      *(undefined2 *)((int)this + uVar2 * 0xa8 + 0x15d2) =
           *(undefined2 *)((int)param_1 + iVar4 * 4 + 0x142);
      *(short *)((int)this + uVar2 * 0xa8 + 0x15d4) = (short)param_1[iVar4 + 0x50];
      *(char *)((int)this + uVar2 * 0xa8 + 0x15d6) = (char)param_1[iVar4 + 0x5a];
      *(uint *)((int)this + uVar2 * 0xa8 + 0x15d8) = param_1[iVar4 + 100];
      uVar1 = F_00a41080(&REFG(undefined, 0x14a4230),*(undefined4 *)((int)this + uVar2 * 0xa8 + 0x1538),
                           (uint)((*(byte *)((int)this + uVar2 * 0xa8 + 0x1548) & 1) == 1),1,1);
      *(uint *)((int)this + uVar2 * 0xa8 + 0x1544) = uVar1;
      pbVar6 = (byte *)((int)this + uVar2 * 0xa8 + 0x15c2);
      ((undefined4 *)(gen_frame + 0x10))[(int)(uVar2)] = *(undefined4 *)((int)this + uVar2 * 0xa8 + 0x1538);
      puVar8 = (ushort *)((int)this + uVar2 * 0xa8 + 0x15b8);
      puVar7 = param_1 + iVar4 + 0x6e;
      (*(int *)(gen_frame + 0x8)) = 5;
      do {
        uVar2 = *puVar7;
        *puVar8 = (ushort)uVar2 >> 4;
        *pbVar6 = (byte)(ushort)uVar2 & 0xf;
        puVar8 = puVar8 + 1;
        puVar7 = puVar7 + 10;
        pbVar6 = pbVar6 + 1;
        (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + -1;
      } while ((*(int *)(gen_frame + 0x8)) != 0);
      (*(byte *)(gen_frame + 0xf)) = (*(byte *)(gen_frame + 0xf)) + 1;
    } while ((*(byte *)(gen_frame + 0xf)) < 10);
    *(undefined1 *)((int)this + 0x1bc8) = 0;
    *(undefined1 *)((int)this + 0x1bef) = 1;
    *(undefined4 *)((int)this + 0x1be4) = 0;
  }
  else {
    if (uVar2 != 0) {
      if (uVar2 == 0xffffffff) {
        iVar3 = *(int *)((int)this + 0x1bd8);
        *(uint *)((int)this + 0x1be0) = param_1[1];
        if (-1 < iVar3) {
          *(uint *)(iVar3 * 0x7c + 0x168 + (int)this) = param_1[2];
        }
        *(uint *)((int)this + 0xfc) = param_1[3];
        *(uint *)((int)this + 0x104) = param_1[4];
        *(uint *)((int)this + 0x1bcc) = param_1[5];
        *(uint *)((int)this + 0x100) = param_1[6];
        uVar2 = (uint)*(byte *)(iVar3 * 0x7c + 0x16c + (int)this) *
                *(int *)(iVar3 * 0x7c + 0x170 + (int)this);
        *(uint *)((int)this + 0x14c8) = (uint)(uVar2 % 100 != 0) + uVar2 / 100;
        *(uint *)((int)this + 0x1be8) = param_1[7];
        uVar2 = param_1[8];
        *(uint *)((int)this + 0x1bd0) = uVar2;
        *(undefined4 *)((int)this + 0x1be4) = 0;
        *(undefined1 *)((int)this + 0x1bc8) = 1;
        F_00c47745(uVar1 ^ (uint)(uint)(gen_frame + 0x3c));
        return uVar2;
      }
      if (uVar2 == 2) {
        uVar2 = param_1[3];
        (*(byte *)(gen_frame + 0xf)) = 0;
        uVar1 = F_006c1e50(this,param_1[1],
                             (uint)((*((byte *)GEN_TOP((*(int *)((int)this + 0x1bd8) * 0xa8 + 0x1548 +
                                              (int)this))) & 1) == 1));
        if (-1 < (int)uVar1) {
          *(uint *)(uVar1 * 0x7c + 0x168 + (int)this) = param_1[2];
          *(uint *)((int)this + 0x1be4) = uVar2;
        }
        do {
          uVar2 = (uint)(*(byte *)(gen_frame + 0xf));
          if ((param_1[uVar2 + 0x18] == 0) && (param_1[uVar2 + 0xe] == 0)) break;
          *(uint *)((int)this + uVar2 * 0xa8 + 0x1538) = param_1[uVar2 + 4];
          *(uint *)((int)this + uVar2 * 0xa8 + 0x153c) = param_1[uVar2 + 0xe];
          *(uint *)((int)this + uVar2 * 0xa8 + 0x1540) = param_1[uVar2 + 0x18];
          *(uint *)((int)this + uVar2 * 0xa8 + 0x1544) = param_1[uVar2 + 0x22];
          *(char *)((int)this + uVar2 * 0xa8 + 0x1548) = (char)param_1[uVar2 + 0x2c];
          *(char *)((int)this + uVar2 * 0xa8 + 0x15a0) = (char)param_1[uVar2 + 0x36];
          *((uint *)GEN_TOP(((uVar2 + 0x21) * 0xa8 + (int)this))) = param_1[uVar2 + 0x40];
          uVar1 = param_1[uVar2 + 0x4a];
          *(uint *)((int)this + uVar2 * 0xa8 + 0x15b0) = uVar1;
          *(undefined4 *)((int)this + uVar2 * 0xa8 + 0x15b4) = 0;
          *(uint *)((int)this + uVar2 * 0xa8 + 0x15b0) = param_1[uVar2 + 0x54];
          *(uint *)((int)this + uVar2 * 0xa8 + 0x15b4) = uVar1;
          *(undefined2 *)((int)this + uVar2 * 0xa8 + 0x15d2) =
               *(undefined2 *)((int)param_1 + uVar2 * 4 + 0x17a);
          *(short *)((int)this + uVar2 * 0xa8 + 0x15d4) = (short)param_1[uVar2 + 0x5e];
          *(char *)((int)this + uVar2 * 0xa8 + 0x15d6) = (char)param_1[uVar2 + 0x68];
          *(uint *)((int)this + uVar2 * 0xa8 + 0x15d8) = param_1[uVar2 + 0x72];
          ((undefined4 *)(gen_frame + 0x10))[(int)(uVar2)] = *(undefined4 *)((int)this + uVar2 * 0xa8 + 0x1538);
          pbVar6 = (byte *)((int)this + uVar2 * 0xa8 + 0x15c2);
          puVar8 = (ushort *)((int)this + uVar2 * 0xa8 + 0x15b8);
          puVar7 = param_1 + uVar2 + 0x7c;
          (*(int *)(gen_frame + 0x8)) = 5;
          do {
            uVar2 = *puVar7;
            *puVar8 = (ushort)uVar2 >> 4;
            *pbVar6 = (byte)(ushort)uVar2 & 0xf;
            puVar8 = puVar8 + 1;
            puVar7 = puVar7 + 10;
            pbVar6 = pbVar6 + 1;
            (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + -1;
          } while ((*(int *)(gen_frame + 0x8)) != 0);
          (*(byte *)(gen_frame + 0xf)) = (*(byte *)(gen_frame + 0xf)) + 1;
        } while ((*(byte *)(gen_frame + 0xf)) < 10);
        uVar2 = param_1[(param_2 & 0xff) - 1];
        *(uint *)((int)this + 0x1bdc) = uVar2;
        if ((int)uVar2 < 1) {
          F_0043f8b0(0x14);
        }
        *(uint *)((int)this + 0x1bd4) = (uint)(*(byte *)(gen_frame + 0xf));
        if ((*(byte *)(gen_frame + 0xf)) != 0) {
          *(undefined1 *)((int)this + 0x1bee) = 1;
          F_006cd8f0(this,((undefined4 *)(gen_frame + 0x10)),(uint)(*(byte *)(gen_frame + 0xf)),0);
        }
        bVar5 = F_006c1d30(this);
        uVar2 = CONCAT31(extraout_var,bVar5);
      }
      goto LAB_006d1807;
    }
    uVar2 = param_1[1];
    *(uint *)((int)this + 0x1be0) = uVar2;
    if (uVar2 == 1) {
      iVar3 = *(int *)((int)this + 0x1bd8);
      if (-1 < iVar3) {
        *(uint *)(iVar3 * 0x7c + 0x168 + (int)this) = param_1[2];
        *((uint *)GEN_TOP(((iVar3 + 3) * 0x7c + (int)this))) = param_1[7];
      }
    }
    else {
      this_00 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),*(undefined4 *)((int)this + 0x104));
      uVar2 = 0;
      if (this_00 == (undefined *)0x0) goto LAB_006d1807;
      uVar1 = F_00a37da0(this_00,*(undefined4 *)((int)this + 0x100));
      uVar2 = 0;
      if (uVar1 == 0) goto LAB_006d1807;
      uVar2 = F_006c1e50(this,param_1[3],(uint)(*(byte *)(uVar1 + 0x14) & 1));
      if (-1 < (int)uVar2) {
        *(uint *)(uVar2 * 0x7c + 0x168 + (int)this) = param_1[2];
        *((uint *)GEN_TOP(((uVar2 + 3) * 0x7c + (int)this))) = param_1[7];
      }
      *(uint *)((int)this + 0x1bd8) = uVar2;
    }
    *(uint *)((int)this + 0xfc) = param_1[3];
    *(uint *)((int)this + 0x1bd0) = param_1[5];
    *(uint *)((int)this + 0x1be4) = param_1[6];
    uVar2 = param_1[(param_2 & 0xff) - 1];
    *(uint *)((int)this + 0x1bdc) = uVar2;
    *(undefined1 *)((int)this + 0x1bc8) = 0;
    if (uVar2 == 0) {
      F_0043f8b0(0x14);
    }
    uVar2 = *(uint *)((int)this + 0x1be0);
    if (uVar2 != 2) {
      if ((uVar2 == 1) && (bVar5 = 0, *(int *)((int)this + 0x1bd4) != 0)) {
        uVar2 = 0;
        do {
          bVar5 = bVar5 + 1;
          *(uint *)(uVar2 * 0xa8 + 0x1544 + (int)this) = param_1[uVar2 + 8];
          uVar2 = (uint)bVar5;
        } while (uVar2 < *(uint *)((int)this + 0x1bd4));
        F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
        return uVar2;
      }
      goto LAB_006d1807;
    }
    (*(byte *)(gen_frame + 0xf)) = 0;
    do {
      uVar2 = (uint)(*(byte *)(gen_frame + 0xf));
      if ((param_1[uVar2 + 0x1c] == 0) && (param_1[uVar2 + 0x12] == 0)) break;
      *(uint *)((int)this + uVar2 * 0xa8 + 0x1538) = param_1[uVar2 + 8];
      *(uint *)((int)this + uVar2 * 0xa8 + 0x153c) = param_1[uVar2 + 0x12];
      *(uint *)((int)this + uVar2 * 0xa8 + 0x1540) = param_1[uVar2 + 0x1c];
      *(uint *)((int)this + uVar2 * 0xa8 + 0x1544) = param_1[uVar2 + 0x26];
      *(char *)((int)this + uVar2 * 0xa8 + 0x1548) = (char)param_1[uVar2 + 0x30];
      *(char *)((int)this + uVar2 * 0xa8 + 0x15a0) = (char)param_1[uVar2 + 0x3a];
      *((uint *)GEN_TOP(((uVar2 + 0x21) * 0xa8 + (int)this))) = param_1[uVar2 + 0x44];
      uVar1 = param_1[uVar2 + 0x4e];
      *(uint *)((int)this + uVar2 * 0xa8 + 0x15b0) = uVar1;
      *(undefined4 *)((int)this + uVar2 * 0xa8 + 0x15b4) = 0;
      *(uint *)((int)this + uVar2 * 0xa8 + 0x15b0) = param_1[uVar2 + 0x58];
      *(uint *)((int)this + uVar2 * 0xa8 + 0x15b4) = uVar1;
      *(undefined2 *)((int)this + uVar2 * 0xa8 + 0x15d2) =
           *(undefined2 *)((int)param_1 + uVar2 * 4 + 0x18a);
      *(short *)((int)this + uVar2 * 0xa8 + 0x15d4) = (short)param_1[uVar2 + 0x62];
      *(char *)((int)this + uVar2 * 0xa8 + 0x15d6) = (char)param_1[uVar2 + 0x6c];
      *(uint *)((int)this + uVar2 * 0xa8 + 0x15d8) = param_1[uVar2 + 0x76];
      ((undefined4 *)(gen_frame + 0x10))[(int)(uVar2)] = *(undefined4 *)((int)this + uVar2 * 0xa8 + 0x1538);
      pbVar6 = (byte *)((int)this + uVar2 * 0xa8 + 0x15c2);
      puVar8 = (ushort *)((int)this + uVar2 * 0xa8 + 0x15b8);
      puVar7 = param_1 + uVar2 + 0x80;
      (*(int *)(gen_frame + 0x8)) = 5;
      do {
        uVar2 = *puVar7;
        *puVar8 = (ushort)uVar2 >> 4;
        *pbVar6 = (byte)(ushort)uVar2 & 0xf;
        puVar8 = puVar8 + 1;
        puVar7 = puVar7 + 10;
        pbVar6 = pbVar6 + 1;
        (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + -1;
      } while ((*(int *)(gen_frame + 0x8)) != 0);
      (*(byte *)(gen_frame + 0xf)) = (*(byte *)(gen_frame + 0xf)) + 1;
    } while ((*(byte *)(gen_frame + 0xf)) < 10);
  }
  uVar2 = (uint)(*(byte *)(gen_frame + 0xf));
  *(uint *)((int)this + 0x1bd4) = uVar2;
  if ((*(byte *)(gen_frame + 0xf)) != 0) {
    *(undefined1 *)((int)this + 0x1bee) = 1;
    uVar2 = F_006cd8f0(this,((undefined4 *)(gen_frame + 0x10)),uVar2,0);
    F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
    return uVar2;
  }
LAB_006d1807: ;
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar2;
}

/* ref: FUN_006d1820 */
byte F_006d1820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d1820u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  int * piVar2;
  byte local_5;
  
  local_5 = 0;
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  if (piVar1 != (int *)0x0) {
    F_006c21d0();
    local_5 = 0;
    if (REFG(int, 0x13241b4) != 0) {
      piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1)));
      ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,REFG(int, 0x13241b4),0);
      if ((char)param_1 != '\0') {
        *(undefined4 *)&REFG(undefined, 0x13241b0) = 0;
      }
      local_5 = 1;
    }
    if (REFG(int, 0x13241c4) != 0) {
      piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1)));
      ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,REFG(int, 0x13241c4),0);
      if ((char)param_1 != '\0') {
        *(undefined4 *)&REFG(undefined, 0x13241c0) = 0;
      }
      local_5 = 1;
    }
    if (REFG(int, 0x13241a4) != 0) {
      piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1)));
      ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,REFG(int, 0x13241a4),0);
      if ((char)param_1 != '\0') {
        *(undefined4 *)&REFG(undefined, 0x13241a0) = 0;
      }
      local_5 = 1;
    }
    if (REFG(int, 0x1324194) != 0) {
      piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1)));
      ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,REFG(int, 0x1324194),0);
      if ((char)param_1 != '\0') {
        *(undefined4 *)&REFG(undefined, 0x1324190) = 0;
      }
      return 1;
    }
  }
  return local_5;
}

/* ref: FUN_006d1930 */
uint F_006d1930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d1930u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  F_0071ff70(param_1,param_2 * 0xa8 + 0x1538 + (int)this);
  return (uint)param_1;
}

/* ref: FUN_006d1960 */
uint F_006d1960(unsigned int gen_a0)
{
  GEN_ENTER(0x6d1960u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  
  F_00a02210(((byte *)(gen_frame + 0x8)),param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar4 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar3);
  iVar2 = *piVar4;
  if (iVar2 != 0) {
    bVar1 = *(byte *)(iVar2 + 0x5c);
    (*(uint *)(gen_frame + 0x28)) = (uint)*(ushort *)(iVar2 + 0x1d4);
    if ((bVar1 & 1) == 0) {
      F_00a50880(*(undefined4 *)(iVar2 + 8),(uint)*(ushort *)(iVar2 + 0x54),2,&(*(uint *)(gen_frame + 0x28)),1);
      *(byte *)(iVar2 + 0x5c) = *(byte *)(iVar2 + 0x5c) | 1;
    }
    uVar3 = F_00a02290(((byte *)(gen_frame + 0x8)),0);
    F_00a02240(((byte *)(gen_frame + 0x8)));
    return uVar3;
  }
  F_00a02240(((byte *)(gen_frame + 0x8)));
  return 0;
}

/* ref: FUN_006d19f0 */
uint F_006d19f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d19f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  byte bVar2;
  
  if ((*(int *)(param_1 + 0xfc) != 0) && (*(int *)(param_1 + 0xfc) != 4)) {
    return 0x468;
  }
  if (*(char *)(param_2 + 0x188) != '\x02') {
    bVar2 = F_00a9fca0(param_2);
    if (bVar2 == 0) {
      fVar1 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x104) -
                     (float10)*(float *)(REFG(int, 0x137104c) + 0x1198))));
      *(float *)(param_1 + 0x104) = fVar1;
      if ((float10)fVar1 <= (float10)0) {
        *(undefined4 *)(param_1 + 0x104) = GEN_FLT_TO(*(undefined4 *)(param_1 + 0x104), REFG(float, 0x1087f04));
        bVar2 = F_006c2930(param_2);
        *(byte *)(param_1 + 0x108) = bVar2;
      }
      if (*(char *)(param_1 + 0x108) != '\0') {
        F_00a6e080(&REFG(undefined, 0x14a9e40),0x87,0,0);
        return 0;
      }
    }
  }
  return 0x468;
}

/* ref: FUN_006d1aa0 */
uint F_006d1aa0(unsigned int gen_a0)
{
  GEN_ENTER(0x6d1aa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined4 * this_00;
  byte bVar3;
  uint uVar4;
  int iVar5;
  
  piVar1 = (int *)F_0052fba0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),"GrandCompanySealShopItem");
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
  bVar3 = ((*(char *)((int)this + 0x114) - *(char *)((int)this + 0x110)) -
          *(char *)((int)this + 0x128)) - 1;
  if ((byte)uVar2 < bVar3) {
    bVar3 = (byte)uVar2;
  }
  this_00 = (undefined4 *)F_00406b90(0x28,0,0);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(this_00,(uint)bVar3,0);
    this_00[5] = (uint)bVar3;
    this_00[8] = ((code *)REFP(0x700520));
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10b9258));
    this_00[6] = this;
    this_00[9] = 0;
  }
  uVar2 = 0;
  *(undefined4 * PTR32 *)((int)this + 0x118) = this_00;
  if (*(int *)((int)this + 0x11c) == 0) {
    uVar2 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xe2);
    *(uint *)((int)this + 0x11c) = uVar2;
  }
  if (bVar3 != 0) {
    iVar5 = 0;
    uVar4 = (uint)bVar3;
    do {
      bVar3 = *(byte *)((int)this + 0x128);
      *(byte *)((int)this + 0x128) = bVar3 + 1;
      uVar2 = F_00cb4540(*(undefined * PTR32 *)((int)this + 0x118),iVar5,
                           bVar3 + 1 + *(int *)((int)this + 0x110));
      iVar5 = iVar5 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x11c);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1,*(undefined4 *)((int)this + 0x118));
  }
  return uVar2;
}

/* ref: FUN_006d1bb0 */
byte F_006d1bb0(unsigned int gen_a0)
{
  GEN_ENTER(0x6d1bb0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * piVar1;
  int * piVar2;
  uint in_ecx;
  undefined * this;
  undefined4 uVar3;
  byte local_5;
  
  local_5 = 0;
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = 5;
  in_ecx = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
  this = (undefined *)F_00763050(in_ecx,uVar3);
  if (this != (undefined *)0x0) {
    F_0089aef0(this,4,4);
  }
  if (REFG(int, 0x1324204) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,REFG(int, 0x1324204),0);
    if ((char)param_1 != '\0') {
      *(undefined4 *)&REFG(undefined, 0x1324200) = 0;
    }
    local_5 = 1;
  }
  if (REFG(int, 0x13241f4) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,REFG(int, 0x13241f4),0);
    if ((char)param_1 != '\0') {
      *(undefined4 *)&REFG(undefined, 0x13241f0) = 0;
    }
    local_5 = 1;
  }
  if (REFG(int, 0x13241e4) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,REFG(int, 0x13241e4),0);
    if ((char)param_1 != '\0') {
      *(undefined4 *)&REFG(undefined, 0x13241e0) = 0;
    }
    return 1;
  }
  return local_5;
}

/* ref: FUN_006d1cc0 */
byte F_006d1cc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x6d1cc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined * this_00;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  
  if ((*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) & 1 << ((byte)(*(uint *)&gen_args[5]) & 0x1f)) == 0) {
    return 0;
  }
  cVar1 = *((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x374)));
  iVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x254)));
  iVar3 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 600)));
  iVar4 = (*(int * PTR32 *)&gen_args[1])[0x5d];
  iVar5 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1d8)));
  if (iVar4 != 0) {
    uVar7 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 4))))((*(int * PTR32 *)&gen_args[1]));
    if (uVar7 == 1) {
      if (cVar1 == '\0') {
        if (((*(uint *)&gen_args[5]) & 0xff) == 1) {
          if (iVar2 == 0) {
            uVar7 = F_006c3170((*(undefined * PTR32 *)&gen_args[0]),(*(int * PTR32 *)&gen_args[1]));
            if ((iVar3 == 0) || (uVar7 != 0x10)) {
              return uVar7 == 0;
            }
          }
          return 1;
        }
        if (((*(uint *)&gen_args[5]) & 0xff) == 0xf) {
          return iVar5 == REFG(int, 0x14bccac);
        }
      }
      else {
        uVar7 = F_0042a990(iVar4 + 8);
        uVar8 = F_0042a990((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x16c);
        uVar7 = F_00a02990(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8))),"IsAcceptEvent",uVar8,uVar7,(*(uint *)&gen_args[2]) & 0xff
                             ,(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]),(*(uint *)&gen_args[5]) & 0xff,1);
        if (uVar7 == 0) {
          this_00 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8)));
          (*(undefined1 *)((char *)&(*(uint *)&gen_args[5]) + 3)) = 0;
          bVar6 = F_00a01d80(this_00,(int)&(*(uint *)&gen_args[5]) + 3);
          if (bVar6 != 0) {
            return (*(undefined1 *)((char *)&(*(uint *)&gen_args[5]) + 3));
          }
        }
      }
    }
  }
  return 0;
}

/* ref: Client::Game::Event::WarpEventHandler::vf132 */
uint F_006d1e00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6d1e00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0x10;
}

/* ref: Client::Game::Event::WarpEventHandler::vf131 */
byte F_006d1e10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6d1e10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: FUN_006d1e20 */
uint F_006d1e20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d1e20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_006c3170(this,*(undefined4 *)(param_1 + 0x60));
  return (uint)(uVar1 == 0);
}

/* ref: FUN_006d1e40 */
uint F_006d1e40(unsigned int gen_a0)
{
  GEN_ENTER(0x6d1e40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this;
  uint uVar1;
  undefined4 * puVar2;
  int * piVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  puVar2 = (undefined4 *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  this = (undefined *)*puVar2;
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),2);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2,uVar1);
  uVar1 = F_006c3170(this,*(undefined4 *)(*piVar3 + 0x60));
  F_00a01ea0(((byte *)(gen_frame + 0xc)),(uint)(uVar1 == 0));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006d1ec0 */
uint F_006d1ec0(unsigned int gen_a0)
{
  GEN_ENTER(0x6d1ec0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int * piVar5;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar4 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar5 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar4);
  iVar2 = *piVar5;
  uVar4 = F_00a01d20(((byte *)(gen_frame + 0x8)),2);
  piVar5 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2,uVar4);
  uVar1 = *(ushort *)(iVar2 + 0x360);
  if (uVar1 != 0) {
    if (*(int *)(*piVar5 + 0x60) == REFG(int, 0x1379694)) {
      uVar4 = F_00a3ace0(&REFG(undefined, 0x14a4230));
    }
    else {
      uVar4 = 0;
    }
    uVar3 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32));
    ((byte *)(gen_frame + 0x8))[0x20] = 0;
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)) = uVar3 & 0xffffff00;
    if (uVar4 < uVar1) goto LAB_006d1f3a;
  }
  ((byte *)(gen_frame + 0x8))[0x20] = 1;
  ((byte *)(gen_frame + 0x8))[0x20] = 1;
LAB_006d1f3a: ;
  F_00a01ea0(((byte *)(gen_frame + 0x8)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006d1f60 */
uint F_006d1f60(unsigned int gen_a0)
{
  GEN_ENTER(0x6d1f60u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  ushort uVar4;
  uint uVar5;
  int * piVar6;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar5 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar6 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar5);
  iVar2 = *piVar6;
  uVar5 = F_00a01d20(((byte *)(gen_frame + 0x8)),2);
  piVar6 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2,uVar5);
  uVar1 = *(ushort *)(iVar2 + 0x362);
  if (uVar1 != 0) {
    if (*(int *)(*piVar6 + 0x60) == REFG(int, 0x1379694)) {
      uVar5 = F_00a68310(&REFG(undefined1, 0x14ab070),1);
      uVar4 = (ushort)uVar5;
    }
    else {
      uVar4 = 0;
    }
    uVar3 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32));
    ((byte *)(gen_frame + 0x8))[0x20] = 0;
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)) = uVar3 & 0xffffff00;
    if (uVar4 < uVar1) goto LAB_006d1fe0;
  }
  ((byte *)(gen_frame + 0x8))[0x20] = 1;
  ((byte *)(gen_frame + 0x8))[0x20] = 1;
LAB_006d1fe0: ;
  F_00a01ea0(((byte *)(gen_frame + 0x8)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006d2050 */
uint F_006d2050(unsigned int gen_a0)
{
  GEN_ENTER(0x6d2050u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int * piVar5;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar4 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar5 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar4);
  iVar2 = *piVar5;
  uVar4 = F_00a01d20(((byte *)(gen_frame + 0x8)),2);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2,uVar4);
  uVar1 = *(ushort *)(iVar2 + 0x366);
  if (uVar1 != 0) {
    uVar4 = F_00a4ffd0();
    uVar3 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32));
    if ((199 < uVar1 >> 3) ||
       ((*((byte *)GEN_TOP(((uVar1 >> 3) + 0x12ea + uVar4))) & (byte)(0x80 >> ((byte)uVar1 & 7))) == 0)) {
      ((byte *)(gen_frame + 0x8))[0x20] = 0;
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)) = uVar3 & 0xffffff00;
      goto LAB_006d20dc;
    }
  }
  ((byte *)(gen_frame + 0x8))[0x20] = 1;
  ((byte *)(gen_frame + 0x8))[0x20] = 1;
LAB_006d20dc: ;
  F_00a01ea0(((byte *)(gen_frame + 0x8)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006d2100 */
uint F_006d2100(unsigned int gen_a0)
{
  GEN_ENTER(0x6d2100u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x8)),2);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2,uVar2);
  uVar2 = *(uint *)(iVar1 + 0x370);
  if ((uVar2 == 0) ||
     ((*(int *)(*piVar3 + 0x60) == REFG(int, 0x1379694) &&
      (((&REFG(undefined1, 0x14b4ec0))[(int)(uVar2 >> 3)] & (byte)(1 << ((byte)uVar2 & 7))) != 0)))) {
    ((byte *)(gen_frame + 0x8))[0x20] = 1;
    ((byte *)(gen_frame + 0x8))[0x20] = 1;
  }
  else {
    ((byte *)(gen_frame + 0x8))[0x20] = 0;
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)) = (uint)(uint3)GEN_PIECE(((byte *)(gen_frame + 0x8)), 33, 3) << 8;
  }
  F_00a01ea0(((byte *)(gen_frame + 0x8)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006d21b0 */
uint F_006d21b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6d21b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)*(ushort *)(*piVar2 + 0x360));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006d2200 */
uint F_006d2200(unsigned int gen_a0)
{
  GEN_ENTER(0x6d2200u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)*(ushort *)(*piVar2 + 0x362));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006d2250 */
uint F_006d2250(unsigned int gen_a0)
{
  GEN_ENTER(0x6d2250u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)*(ushort *)(*piVar2 + 0x366));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006d22a0 */
uint F_006d22a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6d22a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),*(undefined4 *)(*piVar2 + 0x370));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006d22f0 */
uint F_006d22f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6d22f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)*(ushort *)(*piVar2 + 0x25c));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006d2340 */
uint F_006d2340(unsigned int gen_a0)
{
  GEN_ENTER(0x6d2340u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)*(ushort *)(*piVar2 + 0x25e));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006d2390 */
uint F_006d2390(unsigned int gen_a0)
{
  GEN_ENTER(0x6d2390u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00a01ea0(((byte *)(gen_frame + 0xc)),(uint)(*(short *)(*piVar2 + 0x25c) != 0));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006d23f0 */
uint F_006d23f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6d23f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00a01ea0(((byte *)(gen_frame + 0xc)),(uint)(*(short *)(*piVar2 + 0x25e) != 0));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006d2450 */
uint F_006d2450(unsigned int gen_a0)
{
  GEN_ENTER(0x6d2450u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  uint uVar3;
  bool bVar4;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar1);
  uVar3 = (uint)REFG(undefined2, 0x1379c78);
  uVar1 = F_00ab37e0(*(undefined4 *)(*piVar2 + 0x1d8));
  if (uVar1 == 0) {
    ((byte *)(gen_frame + 0x8))[0x20] = 0;
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)) = (uint)(uint3)GEN_PIECE(((byte *)(gen_frame + 0x8)), 33, 3) << 8;
  }
  else {
    bVar4 = *(uint *)(uVar1 + 0x20) != uVar3;
    ((byte *)(gen_frame + 0x8))[0x20] = bVar4;
  }
  F_00a01ea0(((byte *)(gen_frame + 0x8)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 1;
}

/* ref: Client::Game::Event::WarpEventHandler::vf5 */
byte F_006d24d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d24d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar1 = REFG(int, 0x1379694);
  if (REFG(int, 0x1379694) != 0) {
    iVar5 = param_1[0x1e];
    iVar4 = param_1[0x20];
    uVar6 = 1;
    uVar3 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
    bVar2 = F_006d1cc0(this,iVar1,uVar3,iVar4,iVar5,uVar6);
    return bVar2;
  }
  return 0;
}

/* ref: Client::Game::Event::WarpEventHandler::vf17 */
byte F_006d2510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d2510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  piVar1 = REFG(int * PTR32, 0x1379694);
  if (REFG(int * PTR32, 0x1379694) != (int *)0x0) {
    iVar5 = REFG(int * PTR32, 0x1379694)[0x1e];
    iVar4 = REFG(int * PTR32, 0x1379694)[0x20];
    uVar6 = 0xf;
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1379694) + 4))))(REFG(int * PTR32, 0x1379694));
    bVar2 = F_006d1cc0(this,piVar1,uVar3,iVar4,iVar5,uVar6);
    return bVar2;
  }
  return 0;
}

/* ref: Client::Game::Event::WarpEventHandler::vf116 */
byte F_006d2550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d2550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar1 = REFG(int, 0x1379694);
  if (REFG(int, 0x1379694) != 0) {
    iVar5 = param_1[0x1e];
    iVar4 = param_1[0x20];
    uVar6 = 1;
    uVar3 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
    bVar2 = F_006d1cc0(this,iVar1,uVar3,iVar4,iVar5,uVar6);
    return bVar2;
  }
  return 0;
}

/* ref: Client::Game::Event::SpecialShopEventHandler::vf5 */
uint F_006d2590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d2590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint in_EAX = 0;
  uint uVar1;
  
  if (REFG(int, 0x1379694) == 0) {
    return in_EAX & 0xffffff00;
  }
  uVar1 = F_006c3410(this,param_1);
  return uVar1;
}

/* ref: Client::Game::Event::LeveDirector::vf29 */
uint F_006d25b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6d25b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined * pvVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  int iStackY_20;
  
  if ((param_1 & 0xff) == 0) {
    if ((char)param_3 != '\x04') goto LAB_006d26ba;
    uVar3 = *(uint *)(param_2 + 8);
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)(this + 0x2e8) = uVar3;
    *(undefined4 *)(this + 0x2ec) = 0;
    *(uint *)(this + 0x2f0) = uVar1 + uVar3;
    *(uint *)(this + 0x2f4) = (uint)CARRY4(uVar1,uVar3);
    pvVar2 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
    if (pvVar2 == (undefined *)0x0) goto LAB_006d265e;
    uVar3 = F_00975680(pvVar2);
  }
  else {
    if (((param_1 & 0xff) != 2) || ((char)param_3 != '\x03')) goto LAB_006d26ba;
    uVar3 = *(uint *)(param_2 + 4);
    uVar1 = *(uint *)(param_2 + 8);
    *(uint *)(this + 0x2e8) = uVar3;
    *(undefined4 *)(this + 0x2ec) = 0;
    *(uint *)(this + 0x2f0) = uVar1 + uVar3;
    *(uint *)(this + 0x2f4) = (uint)CARRY4(uVar1,uVar3);
    pvVar2 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
    if (pvVar2 == (undefined *)0x0) {
LAB_006d265e: ;
      uVar6 = F_0046ff40();
      uVar3 = (uint)(uVar6 / 1000);
    }
    else {
      uVar3 = F_00975680(pvVar2);
    }
  }
  iVar5 = *(uint *)(this + 0x2f0) - uVar3;
  iVar4 = *(int *)(this + 0x2f4) - (uint)(*(uint *)(this + 0x2f0) < uVar3);
  if ((iVar4 < 1) && (iVar4 < 0)) {
    iVar5 = 0;
    iVar4 = 0;
  }
  *(longlong *)&iStackY_20 = CONCAT44(iVar4,iVar5);
  uVar3 = (uint)(*(longlong *)&iStackY_20 / 0x3c);
  ((code *)*(gen_code32 *)(*(int *)this + 0x278))
            (this,*(uint *)(this + 0x338) - uVar3,
             (*(int *)(this + 0x33c) - (int)((ulonglong)(*(longlong *)&iStackY_20 / 0x3c) >> 0x20))
             - (uint)(*(uint *)(this + 0x338) < uVar3));
LAB_006d26ba: ;
  uVar3 = F_006bd3a0((undefined *)this,param_1,param_2,param_3);
  return uVar3;
}

/* ref: Client::Game::Event::LeveDirector::vf150 */
byte F_006d26e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4, float gen_a5, float gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x6d26e0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (*(int *)(param_1 + 0x2fc) - *(int *)(param_1 + 0x2f8)) / 0x140;
  bVar1 = 0;
  if (iVar4 != 0) {
    iVar3 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0x2f8) + iVar3;
      if (*(int *)(iVar2 + 0x70) == 0) {
        *(undefined4 *)(iVar2 + 0x70) = param_8;
        *(undefined4 *)(iVar2 + 0x74) = param_9;
        *(undefined4 *)(iVar2 + 0x78) = param_10;
      }
      bVar1 = F_0071df80(iVar2,param_2,param_3,param_4,param_5,param_6,param_7);
      iVar3 = iVar3 + 0x140;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return bVar1;
}

/* ref: Client::Game::Event::LeveDirector::vf151 */
unsigned int F_006d2770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d2770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  int iVar1;
  int local_8;
  
  local_8 = (*(int *)(this + 0x2fc) - *(int *)(this + 0x2f8)) / 0x140;
  if (local_8 != 0) {
    iVar1 = 0;
    do {
      this_00 = ((undefined *)GEN_TOP((*(int *)(this + 0x2f8) + iVar1)));
      F_0071e040(this_00,param_1);
      if (*(int *)((int)this_00 + 0x13c) == 0) {
        *(undefined4 *)((int)this_00 + 0x70) = 0;
        *(undefined4 *)((int)this_00 + 0x74) = 0;
        *(undefined4 *)((int)this_00 + 0x78) = 0;
      }
      iVar1 = iVar1 + 0x140;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return 0;
}

/* ref: FUN_006d27e0 */
uint F_006d27e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d27e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 0x330) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x32c);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*(int *)((int)this + 0x330));
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 0x330);
    if (puVar3 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
      *(undefined4 *)((int)this + 0x330) = 0;
    }
  }
  uVar2 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x3c);
  *(uint *)((int)this + 0x32c) = uVar2;
  uVar4 = 0;
  if (uVar2 != 0) {
    puVar3 = (undefined4 *)F_00406b90(0x20,0,0);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      F_00cb4700(puVar3,1,0);
      puVar3[5] = 1;
      *puVar3 = (*(undefined * PTR32 (*)[2])REFP(0x10b9298));
      puVar3[6] = this;
      puVar3[7] = ((code *)REFP(0x72dc10));
    }
    *(undefined4 * PTR32 *)((int)this + 0x330) = puVar3;
    F_00cb4540(puVar3,0,param_1);
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x32c) + 0x48))))
                      (*(int * PTR32 *)((int)this + 0x32c),*(undefined4 *)((int)this + 0x330));
  }
  return uVar4;
}

/* ref: FUN_006d28b0 */
uint F_006d28b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6d28b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  if (iVar1 != 0) {
    F_00aa7ae0(REFG(void * PTR32, 0x1379694),*(undefined4 *)(iVar1 + 0x324),*(undefined4 *)(iVar1 + 0x328));
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: FUN_006d2910 */
uint F_006d2910(unsigned int gen_a0)
{
  GEN_ENTER(0x6d2910u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  ushort uVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  uVar3 = 0;
  if (*piVar2 != 0) {
    uVar3 = *(ushort *)(*piVar2 + 0x310);
  }
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)uVar3);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: Client::Game::Event::LeveDirector::vf42 */
uint F_006d2970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6d2970u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong uStackY_1c;
  
  uVar1 = param_1 - 2;
  if (uVar1 == 0) {
    F_00a69770(&REFG(undefined4, 0x14b119c));
    *(uint *)(this + 0x2e8) = param_3;
    *(undefined4 *)(this + 0x2ec) = 0;
    *(uint *)(this + 0x2f0) = param_2 + param_3;
    *(uint *)(this + 0x2f4) = (uint)CARRY4(param_2,param_3);
    this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
    if (this_00 == (undefined *)0x0) {
      uVar4 = F_0046ff40();
      uVar1 = (uint)(uVar4 / 1000);
    }
    else {
      uVar1 = F_00975680(this_00);
    }
    iVar3 = *(uint *)(this + 0x2f0) - uVar1;
    iVar2 = *(int *)(this + 0x2f4) - (uint)(*(uint *)(this + 0x2f0) < uVar1);
    if ((iVar2 < 1) && (iVar2 < 0)) {
      iVar3 = 0;
      iVar2 = 0;
    }
    uStackY_1c = CONCAT44(iVar2,iVar3);
    uVar1 = (uint)(uStackY_1c / 0x3c);
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x278))
                      (this,*(uint *)(this + 0x338) - uVar1,
                       (*(int *)(this + 0x33c) - (int)((ulonglong)(uStackY_1c / 0x3c) >> 0x20)) -
                       (uint)(*(uint *)(this + 0x338) < uVar1));
  }
  return uVar1;
}

/* ref: Client::Game::Event::BattleLeveDirector::vf43 */
uint F_006d2a30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d2a30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined * pBVar3;
  uint uVar4;
  
  if (((*(int *)(this + 0x4e8) == 7) && (param_1[0x47] == 0)) && (param_1[0x39] != 0)) {
    uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0xb8))(param_1);
    if ((char)uVar2 != '\0') {
      uVar2 = F_00a5f290(param_1);
      uVar4 = 0;
      pBVar3 = this + 0x37c;
      do {
        if ((*(int *)(pBVar3 + -0x18) == 3) && (param_1[0x20] == *(int *)pBVar3)) {
          uVar2 = F_00ab4370(0xab,uVar2,uVar2,0,0);
          return uVar2;
        }
        uVar4 = uVar4 + 1;
        pBVar3 = pBVar3 + 0x30;
      } while (uVar4 < 8);
    }
  }
  uVar2 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  uVar2 = uVar2 - 2;
  if (((uVar2 == 0) && (param_1[0x47] == 0)) &&
     ((uVar2 = param_1[0x39], uVar2 == *(uint *)(this + 8) &&
      ((param_1[0x3b] != 0 || (param_1[0x3c] != 0)))))) {
    uVar2 = F_00a5f290(param_1);
    if (REFG(void * PTR32, 0x1379694) != (undefined *)0x0) {
      bVar1 = F_00aa1800(REFG(void * PTR32, 0x1379694),uVar2);
      if (bVar1 != 0) {
        uVar2 = F_00ab4370(0xa3,uVar2,uVar2,0,0);
        return uVar2;
      }
      uVar2 = F_00ab4370(0xa4,uVar2,uVar2,0,0);
    }
  }
  return uVar2;
}

/* ref: FUN_006d2b30 */
uint F_006d2b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d2b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 0x34c) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x348);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*(int *)((int)this + 0x34c));
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 0x34c);
    if (puVar3 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
      *(undefined4 *)((int)this + 0x34c) = 0;
    }
  }
  uVar2 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x67);
  *(uint *)((int)this + 0x348) = uVar2;
  uVar4 = 0;
  if (uVar2 != 0) {
    puVar3 = (undefined4 *)F_00406b90(0x20,0,0);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      F_00cb4700(puVar3,1,0);
      puVar3[5] = 1;
      *puVar3 = (*(undefined * PTR32 (*)[2])REFP(0x10b92a4));
      puVar3[6] = this;
      puVar3[7] = ((code *)REFP(0x72dbe0));
    }
    *(undefined4 * PTR32 *)((int)this + 0x34c) = puVar3;
    F_00cb4540(puVar3,0,param_1);
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x348) + 0x48))))
                      (*(int * PTR32 *)((int)this + 0x348),*(undefined4 *)((int)this + 0x34c));
  }
  return uVar4;
}

/* ref: FUN_006d2c00 */
uint F_006d2c00(unsigned int gen_a0)
{
  GEN_ENTER(0x6d2c00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)*(byte *)(*piVar2 + 0x4f6));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006d2c50 */
uint F_006d2c50(unsigned int gen_a0)
{
  GEN_ENTER(0x6d2c50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  undefined4 uVar5;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar4 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),3);
  if (((byte)(uVar2 - 1) < 8) && ((byte)(uVar4 - 1) < 6)) {
    uVar5 = *((undefined4 *)GEN_TOP((iVar1 + 0x364 + ((uVar4 - 1 & 0xff) + (uVar2 - 1 & 0xff) * 0xc) * 4)));
  }
  else {
    uVar5 = 0;
  }
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar5);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

