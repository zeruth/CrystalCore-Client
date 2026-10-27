#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_0090c650 */
uint F_0090c650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90c650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)((int)this + 4);
  if (*(char *)((int)this + 0x58) != '\0') {
    uVar1 = F_00461bb0(param_1,0x12,*(undefined4 *)((int)this + 0x5c));
    F_0042e430(this_00,uVar1);
    uVar1 = F_0042a990(this_00);
    return uVar1;
  }
  uVar1 = F_0043bd00(param_1,0x7d9,0,0);
  F_0042e430(this_00,uVar1);
  uVar1 = F_0042a990(this_00);
  return uVar1;
}

/* ref: FUN_0090c6b0 */
uint F_0090c6b0(unsigned int gen_a0)
{
  GEN_ENTER(0x90c6b0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx + 0xc);
  return in_ecx;
}

/* ref: FUN_0090c6d0 */
byte F_0090c6d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x90c6d0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  ushort * param_3 = (ushort *)(uintptr_t)gen_a2;
  char cVar1;
  byte bVar2;
  ushort * puVar3;
  int iVar4;
  int * piVar5;
  int iVar6;
  ushort local_8;
  
  bVar2 = *(byte *)(param_1 + 0x38);
  if (((bVar2 != 2) && (bVar2 != 6)) && (bVar2 != 9)) {
    return 0;
  }
  cVar1 = '\0';
  piVar5 = (int *)(param_1 + 0xc);
  iVar6 = 9;
  puVar3 = param_3;
  do {
    iVar4 = *piVar5;
    if (iVar4 < 1) {
      if (param_3 != (ushort *)0x0) {
        iVar4 = 0;
        *puVar3 = 0;
        goto LAB_0090c72f;
      }
    }
    else {
      cVar1 = cVar1 + '\x01';
      if (param_3 != (ushort *)0x0) {
        local_8 = (ushort)bVar2;
        *puVar3 = local_8;
LAB_0090c72f: ;
        *(int *)(puVar3 + 2) = iVar4;
      }
    }
    piVar5 = piVar5 + 1;
    puVar3 = puVar3 + 0x30;
    iVar6 = iVar6 + -1;
    if (iVar6 == 0) {
      *param_2 = cVar1;
      return 1;
    }
  } while( true );
}

/* ref: FUN_0090c800 */
ushort F_0090c800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90c800u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0xa4) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_0090c880 */
uint F_0090c880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90c880u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx + 0x40 + param_2 * 4;
}

/* ref: FUN_0090c890 */
uint F_0090c890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90c890u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x48 + in_ecx;
}

/* ref: FUN_0090c8a0 */
uint F_0090c8a0(unsigned int gen_a0)
{
  GEN_ENTER(0x90c8a0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  *(undefined4 *)(in_ecx + 0x54) = 0;
  *(undefined4 *)(in_ecx + 0x58) = 0;
  *(undefined4 *)(in_ecx + 0x5c) = 0;
  *(undefined4 *)(in_ecx + 0x60) = 0;
  *(undefined1 *)(in_ecx + 100) = 0;
  return in_ecx;
}

/* ref: FUN_0090c8c0 */
uint F_0090c8c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x90c8c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  F_0042cbc0(this,param_1);
  *(undefined4 *)((int)this + 0x54) = param_2;
  *(undefined4 *)((int)this + 0x58) = param_3;
  *(undefined4 *)((int)this + 0x5c) = param_4;
  *(undefined4 *)((int)this + 0x60) = param_5;
  *(undefined1 *)((int)this + 100) = (undefined1)param_6;
  return (uint)this;
}

/* ref: FUN_0090c920 */
uint F_0090c920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90c920u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (uint)(*(uint *)(param_1 + 0x60) < *(uint *)(param_2 + 0x60));
}

/* ref: FUN_0090c940 */
uint F_0090c940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x90c940u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  F_0042cbc0(this,param_1);
  *(undefined4 *)((int)this + 0x5c) = param_4;
  *(undefined4 *)((int)this + 0x54) = param_2;
  *(undefined4 *)((int)this + 0x58) = param_3;
  *(undefined4 *)((int)this + 0x68) = param_7;
  *(undefined4 *)((int)this + 0x60) = param_5;
  *(undefined4 *)((int)this + 100) = param_6;
  return (uint)this;
}

/* ref: FUN_0090c980 */
uint F_0090c980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90c980u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  bool bVar1;
  
  bVar1 = *(uint *)(param_1 + 0x5c) < *(uint *)(param_2 + 0x5c);
  if (*(uint *)(param_1 + 0x5c) == *(uint *)(param_2 + 0x5c)) {
    bVar1 = *(uint *)(param_1 + 0x68) < *(uint *)(param_2 + 0x68);
  }
  return (uint)bVar1;
}

/* ref: FUN_0090c9b0 */
uint F_0090c9b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x90c9b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined1 *)((int)this + 4) = (undefined1)param_2;
  return (uint)this;
}

/* ref: FUN_0090c9d0 */
uint F_0090c9d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90c9d0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (uint)(*(byte *)(param_1 + 4) < *(byte *)(param_2 + 4));
}

/* ref: FUN_0090cb80 */
uint F_0090cb80(unsigned int gen_a0)
{
  GEN_ENTER(0x90cb80u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  F_0042b630(in_ecx + 0x54);
  F_0042b630(in_ecx + 0xa8);
  *(undefined4 *)(in_ecx + 0xfc) = 0;
  *(undefined4 *)(in_ecx + 0x100) = 0;
  *(undefined4 *)(in_ecx + 0x115) = 0;
  *(undefined1 *)(in_ecx + 0x119) = 0;
  *(undefined4 *)(in_ecx + 0x104) = 0;
  *(undefined4 *)(in_ecx + 0x108) = 0;
  *(undefined4 *)(in_ecx + 0x10c) = 0;
  *(undefined4 *)(in_ecx + 0x110) = 0;
  *(undefined1 *)(in_ecx + 0x114) = 0;
  return in_ecx;
}

/* ref: FUN_0090cc90 */
ushort F_0090cc90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90cc90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0xc) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_0090cca0 */
uint F_0090cca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x90cca0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  ((code *)*(gen_code32 *)(*(int *)this + 8))(this,param_1,param_2);
  uVar1 = *(uint *)(param_2 + 0x28);
  *(uint *)((int)this + 0x68) = uVar1;
  return uVar1;
}

/* ref: FUN_0090ccd0 */
uint F_0090ccd0(unsigned int gen_a0)
{
  GEN_ENTER(0x90ccd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
  *(undefined4 *)((int)this + 0x68) = 0;
  return uVar1;
}

/* ref: FUN_0090cd00 */
uint F_0090cd00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90cd00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10c43e4));
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  F_0042b630(in_ecx + 3);
  return (uint)in_ecx;
}

/* ref: FUN_0090cd40 */
uint F_0090cd40(unsigned int gen_a0)
{
  GEN_ENTER(0x90cd40u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10c43e4));
  in_ecx[1] = 1;
  in_ecx[2] = 0;
  F_0042b630(in_ecx + 3);
  in_ecx[0x18] = 0;
  in_ecx[0x19] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10c43ec));
  return (uint)in_ecx;
}

/* ref: FUN_0090cd80 */
uint F_0090cd80(unsigned int gen_a0)
{
  GEN_ENTER(0x90cd80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  ulonglong uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 100);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10c43ec));
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 100) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10c43e4));
  uVar2 = F_0042c880((undefined *)((int)this + 0xc));
  return (uint)uVar2;
}

/* ref: FUN_0090cdb0 */
uint F_0090cdb0(unsigned int gen_a0)
{
  GEN_ENTER(0x90cdb0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10c43e4));
  in_ecx[1] = 2;
  in_ecx[2] = 0;
  F_0042b630(in_ecx + 3);
  *(undefined2 *)(in_ecx + 0x18) = 0;
  in_ecx[0x1a] = 0;
  in_ecx[0x1b] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10c43f4));
  *(undefined1 *)(in_ecx + 0x1c) = 1;
  return (uint)in_ecx;
}

/* ref: FUN_0090cdf0 */
uint F_0090cdf0(unsigned int gen_a0)
{
  GEN_ENTER(0x90cdf0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10c43e4));
  in_ecx[1] = 4;
  in_ecx[2] = 0;
  F_0042b630(in_ecx + 3);
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10c43fc));
  *(undefined1 *)(in_ecx + 0x18) = 0;
  in_ecx[0x19] = 0;
  *(undefined2 *)(in_ecx + 0x1a) = 0;
  *(undefined1 *)((int)in_ecx + 0x6a) = 0;
  F_0042b630(in_ecx + 0x1b);
  return (uint)in_ecx;
}

/* ref: FUN_0090ce30 */
uint F_0090ce30(unsigned int gen_a0)
{
  GEN_ENTER(0x90ce30u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10c43e4));
  in_ecx[1] = 5;
  in_ecx[2] = 0;
  F_0042b630(in_ecx + 3);
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10c4404));
  in_ecx[0x18] = 0;
  return (uint)in_ecx;
}

/* ref: Client::UI2::Agent::AgentRecommendList::ListItemBase::vf0 */
uint F_0090ce60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90ce60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10c43e4));
  F_0042c880(this + 0xc);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentRecommendList::ListItemQuest::vf0 */
uint F_0090ce90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90ce90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)(this + 100);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10c43ec));
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)(this + 100) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10c43e4));
  F_0042c880(this + 0xc);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0090cef0 */
uint F_0090cef0(unsigned int gen_a0)
{
  GEN_ENTER(0x90cef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0x6c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10c43e4));
  uVar1 = F_0042c880((undefined *)((int)this + 0xc));
  return (uint)uVar1;
}

/* ref: FUN_0090cf60 */
uint F_0090cf60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x90cf60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_4;
  *(undefined4 *)((int)this + 0x10) = param_5;
  *(undefined1 *)((int)this + 0x14) = (undefined1)param_6;
  *(undefined1 *)((int)this + 0x15) = 0;
  return (uint)this;
}

/* ref: FUN_0090cf90 */
uint F_0090cf90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90cf90u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (*(uint *)(param_1 + 0x10) != *(uint *)(param_2 + 0x10)) {
    return (uint)(*(uint *)(param_1 + 0x10) < *(uint *)(param_2 + 0x10));
  }
  return CONCAT31((int3)((uint)*(int *)(param_1 + 4) >> 8),
                  *(int *)(param_1 + 4) < *(int *)(param_2 + 4));
}

/* ref: FUN_0090d010 */
uint F_0090d010(unsigned int gen_a0)
{
  GEN_ENTER(0x90d010u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  F_0042b630(in_ecx + 1);
  return (uint)in_ecx;
}

/* ref: FUN_0090d060 */
uint F_0090d060(unsigned int gen_a0)
{
  GEN_ENTER(0x90d060u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  *(undefined1 *)(in_ecx + 1) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_0090d0d0 */
uint F_0090d0d0(unsigned int gen_a0)
{
  GEN_ENTER(0x90d0d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 * puVar2;
  
  *(undefined2 *)this = 0;
  *(undefined1 *)((int)this + 2) = 0;
  puVar2 = (undefined4 *)((int)this + 4);
  iVar1 = 3;
  do {
    *puVar2 = 0;
    *(undefined1 *)(puVar2 + 1) = 0;
    F_00401500(puVar2 + 2,8,4,((code *)REFP(0x90d060)));
    puVar2 = puVar2 + 10;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  return (uint)this;
}

/* ref: FUN_0090d130 */
unsigned int F_0090d130(unsigned int gen_a0)
{
  GEN_ENTER(0x90d130u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * puVar1;
  int iVar2;
  
  *(undefined1 *)this = 0;
  *(undefined1 *)((int)this + 2) = 0;
  puVar1 = (undefined1 *)((int)this + 0x18);
  iVar2 = 4;
  do {
    puVar1[-0x10] = 0;
    *(undefined4 *)(puVar1 + -0x14) = 0;
    *(undefined4 *)(puVar1 + -0xc) = 0;
    *(undefined4 *)(puVar1 + -4) = 0;
    puVar1[-8] = 0;
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0;
    puVar1[0x10] = 0;
    puVar1 = puVar1 + 0x28;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  return 0;
}

/* ref: FUN_0090d1c0 */
uint F_0090d1c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90d1c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  undefined * this_00;
  uint uVar1;
  ulonglong uVar2;
  undefined1 * puVar3;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  F_0042cc20(((undefined1 *)(gen_frame + 0xb4)),&REFG(undefined, 0x10c4408),REFG(undefined4, 0x108cc50));
  puVar3 = ((undefined1 *)(gen_frame + 0xb4));
  this_00 = (undefined *)F_0042cbc0(((undefined1 *)(gen_frame + 0xc)),param_1);
  uVar1 = F_0042e360(this_00,puVar3);
  F_0042cbc0(((undefined1 *)(gen_frame + 0x60)),uVar1);
  F_0042c880(((undefined1 *)(gen_frame + 0xc)));
  F_0042ccf0((undefined *)((int)this + 0xdac),((undefined1 *)(gen_frame + 0x60)));
  F_0042c880(((undefined1 *)(gen_frame + 0x60)));
  uVar2 = F_0042c880(((undefined1 *)(gen_frame + 0xb4)));
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return (uint)uVar2;
}

/* ref: FUN_0090d270 */
uint F_0090d270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90d270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ulonglong uVar1;
  
  uVar1 = ((gen_lcode *)*(gen_code32 *)(*(int *)this + 4))(this,param_1);
  return (uint)(uVar1 % 0x3c);
}

/* ref: FUN_0090d2a0 */
uint F_0090d2a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90d2a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + param_2 * 4);
}

/* ref: FUN_0090d2b0 */
uint F_0090d2b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x90d2b0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  short * param_2 = (short *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  double dVar1;
  float * pfVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  
  if (param_4 <= 0.0) {
    param_4 = REFG(float, 0x1094884);
  }
  dVar1 = (double)param_4;
  if (*(double *)&REFG(undefined, 0x1094818) <= dVar1) {
    dVar1 = (double)REFG(float, 0x1094820);
  }
  sVar4 = 0;
  iVar5 = -1;
  iVar3 = 0;
  pfVar2 = (float *)(param_1 + 0x24);
  iVar6 = 0x5c;
  do {
    if ((dVar1 <= (double)*pfVar2) && (sVar4 = sVar4 + 1, iVar5 == -1)) {
      iVar5 = iVar3;
    }
    iVar3 = iVar3 + 1;
    pfVar2 = pfVar2 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  *param_2 = sVar4;
  *param_3 = iVar5;
  return (uint)param_2;
}

/* ref: FUN_0090d360 */
uint F_0090d360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90d360u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (uint)(*(uint *)(param_1 + 8) < *(uint *)(param_2 + 8));
}

/* ref: FUN_0090d3c0 */
uint F_0090d3c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90d3c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0090d3d0 */
uint F_0090d3d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90d3d0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (uint)(*(uint *)(param_1 + 8) < *(uint *)(param_2 + 8));
}

/* ref: FUN_0090d430 */
uint F_0090d430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90d430u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (int)(short)CONCAT11((undefined1)param_1,(char)param_2 != '\0');
}

/* ref: FUN_0090d450 */
uint F_0090d450(unsigned int gen_a0)
{
  GEN_ENTER(0x90d450u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0x1e: ;
  case 0x1f: ;
    return 3;
  case 0x20: ;
    return 2;
  case 0x21: ;
    uVar1 = 6;
  }
  return uVar1;
}

/* ref: FUN_0090d490 */
byte F_0090d490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90d490u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  bool bVar1;
  
  bVar1 = false;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0x1e: ;
  case 0x1f: ;
    return (param_1 & 1) != 0;
  case 0x20: ;
    return (param_1 & 2) != 0;
  case 0x21: ;
    bVar1 = (param_1 & 4) != 0;
  }
  return bVar1;
}

/* ref: FUN_0090d4f0 */
uint F_0090d4f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90d4f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042ccf0(this,param_1);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)((int)this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((int)this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined1 *)((int)this + 100) = *(undefined1 *)(param_1 + 100);
  return (uint)this;
}

/* ref: FUN_0090d530 */
uint F_0090d530(unsigned int gen_a0)
{
  GEN_ENTER(0x90d530u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0xa8));
  F_0042c880((undefined *)((int)this + 0x54));
  uVar1 = F_0042c880(this);
  return (uint)uVar1;
}

/* ref: FUN_0090d550 */
uint F_0090d550(unsigned int gen_a0)
{
  GEN_ENTER(0x90d550u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  int iVar1;
  ulonglong uVar2;
  
  F_0042c880((undefined *)((int)this + 900));
  iVar1 = 8;
  this_00 = (undefined *)((int)this + 0x380);
  do {
    this_00 = (undefined *)((int)this_00 + -0x60);
    uVar2 = F_0042c880(this_00);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return (uint)uVar2;
}

/* ref: FUN_0090d590 */
uint F_0090d590(unsigned int gen_a0)
{
  GEN_ENTER(0x90d590u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0x68));
  uVar1 = F_0042c880((undefined *)((int)this + 0x14));
  return (uint)uVar1;
}

/* ref: FUN_0090d5b0 */
uint F_0090d5b0(unsigned int gen_a0)
{
  GEN_ENTER(0x90d5b0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
  F_0042b630(in_ecx + 1);
  in_ecx[0x16] = 0;
  in_ecx[0x17] = 0;
  in_ecx[0x18] = 0;
  *(undefined2 *)(in_ecx + 0x19) = 0;
  *(undefined1 *)((int)in_ecx + 0x66) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_0090d620 */
uint F_0090d620(unsigned int gen_a0)
{
  GEN_ENTER(0x90d620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0x54));
  uVar1 = F_0042c880(this);
  return (uint)uVar1;
}

/* ref: FUN_0090d640 */
uint F_0090d640(unsigned int gen_a0)
{
  GEN_ENTER(0x90d640u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0x58));
  uVar1 = F_0042c880((undefined *)((int)this + 4));
  return (uint)uVar1;
}

/* ref: FUN_0090d660 */
byte F_0090d660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90d660u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  return *param_2 < *param_1;
}

/* ref: FUN_0090d680 */
uint F_0090d680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90d680u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  return (uint)(*param_1 < *param_2);
}

/* ref: FUN_0090d6a0 */
uint F_0090d6a0(unsigned int gen_a0)
{
  GEN_ENTER(0x90d6a0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx + 0x14);
  return in_ecx;
}

/* ref: FUN_0090d740 */
uint F_0090d740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90d740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * this_00;
  undefined * this_01;
  int local_10;
  int local_c;
  undefined4 * local_8;
  
  local_8 = param_1;
  this_01 = (undefined *)((int)this + 4);
  local_10 = 2;
  do {
    *(undefined4 *)((int)this_01 + -4) = *local_8;
    F_0042ccf0(this_01,((int)param_1 - (int)this) + (int)this_01);
    local_c = 0xf;
    this_00 = this_01;
    do {
      this_00 = (undefined *)((int)this_00 + 0x54);
      F_0042ccf0(this_00,((int)local_8 - ((int)this_01 + -4)) + (int)this_00);
      local_c = local_c + -1;
    } while (local_c != 0);
    local_8 = local_8 + 0x151;
    this_01 = (undefined *)((int)this_01 + 0x544);
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  *(undefined4 *)((int)this + 0xa88) = param_1[0x2a2];
  *(undefined4 *)((int)this + 0xa8c) = param_1[0x2a3];
  *(undefined4 *)((int)this + 0xa90) = param_1[0x2a4];
  *(undefined1 *)((int)this + 0xa94) = *(undefined1 *)(param_1 + 0x2a5);
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentMap::MapStructCompareSameWorld::vf0 */
uint F_0090d8c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90d8c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10c3f38));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentMap::MapStructCompareSameRegion::vf0 */
uint F_0090d8f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90d8f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10c3f38));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentMap::MapStructCompareSameArea::vf0 */
uint F_0090d920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90d920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10c3f38));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentMap::MapStructCompareSameFloor::vf0 */
uint F_0090d950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90d950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10c3f38));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentMap::MapStructCompareSameAreaOrFloor::vf0 */
uint F_0090d980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90d980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10c3f38));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0090d9f0 */
uint F_0090d9f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x90d9f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00ab3d80((char)param_1 * param_2 + (char)param_3 * 10 + 1 + (int)(char)param_4);
  return uVar1;
}

/* ref: FUN_0090da20 */
byte F_0090da20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90da20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_1 != '\0') {
    if ((char)param_1 == '\x01') {
      return (byte)param_2;
    }
    if ((char)param_1 == '\x02') {
      return (byte)param_2 == 0;
    }
  }
  return 1;
}

/* ref: FUN_0090da50 */
uint F_0090da50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90da50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  F_0042cbc0((undefined *)((int)this + 0xc),param_1 + 3);
  *(undefined1 *)((int)this + 0x60) = *(undefined1 *)(param_1 + 0x18);
  *(undefined4 *)((int)this + 0x62) = *(undefined4 *)((int)param_1 + 0x62);
  *(undefined4 *)((int)this + 0x66) = *(undefined4 *)((int)param_1 + 0x66);
  *(undefined2 *)((int)this + 0x6a) = *(undefined2 *)((int)param_1 + 0x6a);
  *(undefined4 *)((int)this + 0x6c) = param_1[0x1b];
  *(undefined1 *)((int)this + 0x70) = *(undefined1 *)(param_1 + 0x1c);
  *(undefined1 *)((int)this + 0x71) = *(undefined1 *)((int)param_1 + 0x71);
  *(undefined1 *)((int)this + 0x72) = *(undefined1 *)((int)param_1 + 0x72);
  *(undefined1 *)((int)this + 0x73) = *(undefined1 *)((int)param_1 + 0x73);
  return (uint)this;
}

/* ref: FUN_0090dac0 */
uint F_0090dac0(unsigned int gen_a0)
{
  GEN_ENTER(0x90dac0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  default: ;
    return 1;
  case 0x15db: ;
    return 2;
  case 0x15dc: ;
    return 3;
  case 0x15dd: ;
    return 4;
  case 0x15de: ;
    return 5;
  }
}

/* ref: FUN_0090db20 */
uint F_0090db20(unsigned int gen_a0)
{
  GEN_ENTER(0x90db20u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  default: ;
    return 0x15da;
  case 2: ;
    return 0x15db;
  case 3: ;
    return 0x15dc;
  case 4: ;
    return 0x15dd;
  case 5: ;
    return 0x15de;
  }
}

/* ref: FUN_0090db80 */
uint F_0090db80(unsigned int gen_a0)
{
  GEN_ENTER(0x90db80u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx + 8);
  F_0042b630(in_ecx + 0x60);
  return in_ecx;
}

/* ref: FUN_0090dba0 */
uint F_0090dba0(unsigned int gen_a0)
{
  GEN_ENTER(0x90dba0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0x60));
  uVar1 = F_0042c880((undefined *)((int)this + 8));
  return (uint)uVar1;
}

/* ref: FUN_0090dbc0 */
byte F_0090dbc0(unsigned int gen_a0)
{
  GEN_ENTER(0x90dbc0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0xc: ;
  case 0xd: ;
  case 0xe: ;
  case 0x13: ;
  case 0x14: ;
  case 0x16: ;
  case 0x17: ;
  case 0x18: ;
  case 0x21: ;
  case 0x22: ;
  case 0x23: ;
    return 1;
  default: ;
    return 0;
  }
}

/* ref: FUN_0090dc50 */
uint F_0090dc50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90dc50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (0 < param_1) {
    *(uint *)((int)this + 0x28) = *(uint *)((int)this + 0x28) & ~(1 << ((byte)param_1 & 0x1f));
  }
  return (uint)this;
}

/* ref: FUN_0090dc70 */
uint F_0090dc70(unsigned int gen_a0)
{
  GEN_ENTER(0x90dc70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 100));
  uVar1 = F_0042c880((undefined *)((int)this + 0x10));
  return (uint)uVar1;
}

/* ref: FUN_0090dca0 */
uint F_0090dca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90dca0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if ((float10)*(float *)(param_2 + 0xc0) < (float10)*(float *)(param_1 + 0xc0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_0090dcd0 */
uint F_0090dcd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90dcd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0090dcf0 */
uint F_0090dcf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90dcf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((param_1 & 2) == 0) {
    if ((param_1 & 1) != 0) {
      F_00406ad0(this);
    }
  }
  else {
    this = (undefined *)((int)this - 4);
    if ((param_1 & 1) != 0) {
      F_00406b30(this);
      return (uint)this;
    }
  }
  return (uint)this;
}

/* ref: FUN_0090dd30 */
uint F_0090dd30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90dd30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((param_1 & 2) == 0) {
    if ((param_1 & 1) != 0) {
      F_00406ad0(this);
    }
  }
  else {
    this = (undefined *)((int)this - 4);
    if ((param_1 & 1) != 0) {
      F_00406b30(this);
      return (uint)this;
    }
  }
  return (uint)this;
}

/* ref: FUN_0090dd70 */
uint F_0090dd70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90dd70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((param_1 & 2) == 0) {
    if ((param_1 & 1) != 0) {
      F_00406ad0(this);
    }
  }
  else {
    this = (undefined *)((int)this - 4);
    if ((param_1 & 1) != 0) {
      F_00406b30(this);
      return (uint)this;
    }
  }
  return (uint)this;
}

/* ref: FUN_0090ddc0 */
uint F_0090ddc0(unsigned int gen_a0)
{
  GEN_ENTER(0x90ddc0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  return in_ecx;
}

/* ref: FUN_0090ddd0 */
uint F_0090ddd0(unsigned int gen_a0)
{
  GEN_ENTER(0x90ddd0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  F_0042b630(in_ecx + 0x54);
  return in_ecx;
}

/* ref: FUN_0090ddf0 */
uint F_0090ddf0(unsigned int gen_a0)
{
  GEN_ENTER(0x90ddf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0x54));
  uVar1 = F_0042c880(this);
  return (uint)uVar1;
}

/* ref: FUN_0090de10 */
uint F_0090de10(unsigned int gen_a0)
{
  GEN_ENTER(0x90de10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  int iVar2;
  ulonglong uVar3;
  
  F_0042c880((undefined *)((int)this + 0xda4));
  F_0042c880((undefined *)((int)this + 0xd50));
  F_0042c880((undefined *)((int)this + 0xcfc));
  F_0042c880((undefined *)((int)this + 0xca8));
  iVar2 = 0xf;
  pvVar1 = (undefined *)((int)this + 0xc48);
  do {
    F_0042c880((undefined *)((int)pvVar1 + -0x70));
    uVar3 = F_0042c880((undefined *)((int)pvVar1 + -0xc4));
    iVar2 = iVar2 + -1;
    pvVar1 = (undefined *)((int)pvVar1 + -0xc4);
  } while (-1 < iVar2);
  return (uint)uVar3;
}

/* ref: FUN_0090de80 */
uint F_0090de80(unsigned int gen_a0)
{
  GEN_ENTER(0x90de80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0x54));
  uVar1 = F_0042c880(this);
  return (uint)uVar1;
}

/* ref: FUN_0090dea0 */
uint F_0090dea0(unsigned int gen_a0)
{
  GEN_ENTER(0x90dea0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  F_0042b630(in_ecx + 0x54);
  return in_ecx;
}

/* ref: FUN_0090ded0 */
uint F_0090ded0(unsigned int gen_a0)
{
  GEN_ENTER(0x90ded0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx + 4);
  return in_ecx;
}

/* ref: FUN_0090df00 */
uint F_0090df00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90df00u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (uint)(*(byte *)(param_1 + 1) < *(byte *)(param_2 + 1));
}

/* ref: FUN_0090df20 */
uint F_0090df20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90df20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (uint)(*(byte *)(param_1 + 4) < *(byte *)(param_2 + 4));
}

/* ref: FUN_0090df40 */
uint F_0090df40(unsigned int gen_a0)
{
  GEN_ENTER(0x90df40u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx + 0x28);
  F_0042b630(in_ecx + 0x7c);
  F_0042b630(in_ecx + 0xd0);
  F_0042b630(in_ecx + 0x124);
  return in_ecx;
}

/* ref: FUN_0090df70 */
uint F_0090df70(unsigned int gen_a0)
{
  GEN_ENTER(0x90df70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0x124));
  F_0042c880((undefined *)((int)this + 0xd0));
  F_0042c880((undefined *)((int)this + 0x7c));
  uVar1 = F_0042c880((undefined *)((int)this + 0x28));
  return (uint)uVar1;
}

/* ref: FUN_0090dfd0 */
uint F_0090dfd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90dfd0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (uint)(*(byte *)(param_1 + 2) < *(byte *)(param_2 + 2));
}

/* ref: FUN_0090dff0 */
uint F_0090dff0(unsigned int gen_a0)
{
  GEN_ENTER(0x90dff0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0x74));
  uVar1 = F_0042c880((undefined *)((int)this + 0x20));
  return (uint)uVar1;
}

/* ref: FUN_0090e040 */
uint F_0090e040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x90e040u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  return (uint)this;
}

/* ref: FUN_0090e0a0 */
uint F_0090e0a0(unsigned int gen_a0)
{
  GEN_ENTER(0x90e0a0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  F_00e5bbd0(in_ecx);
  *in_ecx = (*(undefined * PTR32 (*)[27])REFP(0x10c4564));
  return (uint)in_ecx;
}

/* ref: Application::Network::WorkDefinitions::CharaMake::vf1 */
uint F_0090e0d0(void)
{
  GEN_ENTER(0x90e0d0u, 0u, 0u, 0u, 0u);
  return 0x135ae50;
}

/* ref: Application::Network::LobbyProtoChannel::CharaMake::vf0 */
uint F_0090e0f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90e0f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00e5bc00(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0090e120 */
uint F_0090e120(unsigned int gen_a0)
{
  GEN_ENTER(0x90e120u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  F_0042b630(in_ecx + 0x54);
  return in_ecx;
}

/* ref: FUN_0090e140 */
uint F_0090e140(unsigned int gen_a0)
{
  GEN_ENTER(0x90e140u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0x54));
  uVar1 = F_0042c880(this);
  return (uint)uVar1;
}

/* ref: FUN_0090e160 */
uint F_0090e160(unsigned int gen_a0)
{
  GEN_ENTER(0x90e160u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  F_00e75840(in_ecx);
  *in_ecx = (*(undefined * PTR32 (*)[27])REFP(0x10c45d4));
  return (uint)in_ecx;
}

/* ref: Application::Network::WorkDefinitions::CharaRemake::vf1 */
uint F_0090e190(void)
{
  GEN_ENTER(0x90e190u, 0u, 0u, 0u, 0u);
  return 0x135b2a0;
}

/* ref: Application::Network::LobbyProtoChannel::CharaRemake::vf0 */
uint F_0090e1b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90e1b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00e75880(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0090e1e0 */
uint F_0090e1e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90e1e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0042c880((undefined *)((int)this + 0xc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::Lobby3D::LoadMapEvent::vf0 */
uint F_0090e230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90e230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0090e260 */
unsigned int F_0090e260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90e260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined1 * puVar1;
  int iVar2;
  
  puVar1 = (undefined1 *)((int)this + 4);
  iVar2 = 0x1a;
  do {
    *puVar1 = puVar1[param_1 - (int)this];
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined1 *)((int)this + 0x1e) = *(undefined1 *)(param_1 + 0x1e);
  *(undefined1 *)((int)this + 0x1f) = *(undefined1 *)(param_1 + 0x1f);
  *(undefined1 *)((int)this + 0x20) = *(undefined1 *)(param_1 + 0x20);
  *(undefined1 *)((int)this + 0x21) = *(undefined1 *)(param_1 + 0x21);
  *(undefined1 *)((int)this + 0x22) = *(undefined1 *)(param_1 + 0x22);
  *(undefined1 *)((int)this + 0x23) = *(undefined1 *)(param_1 + 0x23);
  return 0;
}

/* ref: FUN_0090e2b0 */
uint F_0090e2b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90e2b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_0042ccf0(this,param_1);
  return (uint)this;
}

/* ref: FUN_0090e2d0 */
uint F_0090e2d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90e2d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00e78fe0(this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x10c45d4));
  return (uint)this;
}

/* ref: Client::UI2::PopupMenu::vf3 */
byte F_0090e2f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90e2f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: Client::UI2::PopupMenu::vf4 */
unsigned int F_0090e300(void)
{
  GEN_ENTER(0x90e300u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0090e310 */
uint F_0090e310(unsigned int gen_a0)
{
  GEN_ENTER(0x90e310u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx - 0x180;
}

/* ref: FUN_0090e320 */
uint F_0090e320(unsigned int gen_a0)
{
  GEN_ENTER(0x90e320u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx - 0x180;
}

/* ref: FUN_0090e330 */
uint F_0090e330(void)
{
  GEN_ENTER(0x90e330u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0090e340 */
uint F_0090e340(unsigned int gen_a0)
{
  GEN_ENTER(0x90e340u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx - 0x180;
}

/* ref: FUN_0090e350 */
uint F_0090e350(unsigned int gen_a0)
{
  GEN_ENTER(0x90e350u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx + 8);
  return in_ecx;
}

/* ref: FUN_0090e370 */
uint F_0090e370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90e370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *(undefined2 *)this = *param_1;
  *(undefined2 *)((int)this + 2) = param_1[1];
  *(undefined1 *)((int)this + 4) = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)((int)this + 5) = *(undefined1 *)((int)param_1 + 5);
  *(undefined1 *)((int)this + 6) = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)((int)this + 7) = *(undefined1 *)((int)param_1 + 7);
  F_0042ccf0((undefined *)((int)this + 8),param_1 + 4);
  *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)(param_1 + 0x2e);
  return (uint)this;
}

/* ref: Client::UI2::AddonAreaText::vf0 */
uint F_0090e3e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90e3e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10c3f6c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0090e420 */
uint F_0090e420(unsigned int gen_a0)
{
  GEN_ENTER(0x90e420u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  return in_ecx;
}

/* ref: Client::UI2::AddonTextChain::vf0 */
uint F_0090e450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90e450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10c3f6c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonTextError::vf0 */
uint F_0090e490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90e490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10c3f6c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonTextClassChange::vf0 */
uint F_0090e4d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90e4d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10c3f6c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonTextTargetCircle::vf0 */
uint F_0090e510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90e510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10c3f6c));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0090e540 */
uint F_0090e540(unsigned int gen_a0)
{
  GEN_ENTER(0x90e540u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx + 8);
  return in_ecx;
}

/* ref: FUN_0090e560 */
uint F_0090e560(unsigned int gen_a0)
{
  GEN_ENTER(0x90e560u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[66])REFP(0x10c6434));
  return (uint)this;
}

/* ref: Client::UI2::AddonMainCommandInterface::vf0 */
uint F_0090e590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90e590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0090e5c0 */
uint F_0090e5c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90e5c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonNotification::vf51 */
uint F_0090e5f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x90e5f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x6c))(this);
  return uVar1;
}

/* ref: Client::UI2::AddonNotification::vf54 */
uint F_0090e600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x90e600u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x6c))(this);
  return uVar1;
}

/* ref: FUN_0090e610 */
uint F_0090e610(unsigned int gen_a0)
{
  GEN_ENTER(0x90e610u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  F_0042b630(in_ecx + 0x54);
  return in_ecx;
}

/* ref: FUN_0090e630 */
uint F_0090e630(unsigned int gen_a0)
{
  GEN_ENTER(0x90e630u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0x54));
  uVar1 = F_0042c880(this);
  return (uint)uVar1;
}

/* ref: Component::GUI2::AtkSimpleTween::vf0 */
uint F_0090e650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90e650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pAVar1;
  int iVar2;
  undefined * this_00;
  
  if ((param_1 & 2) == 0) {
    F_0058d4b0(this);
    if ((param_1 & 1) != 0) {
      F_00406ad0(this);
    }
  }
  else {
    pAVar1 = this + -4;
    iVar2 = *(int *)pAVar1;
    this_00 = this + iVar2 * 0x30;
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      this_00 = this_00 + -0x30;
      F_0058d4b0(this_00);
    }
    this = pAVar1;
    if ((param_1 & 1) != 0) {
      F_00406b30(pAVar1);
      return (uint)pAVar1;
    }
  }
  return (uint)this;
}

/* ref: FUN_0090e6c0 */
uint F_0090e6c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90e6c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0090e6e0 */
uint F_0090e6e0(unsigned int gen_a0)
{
  GEN_ENTER(0x90e6e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0xac));
  F_0042c880((undefined *)((int)this + 0x58));
  uVar1 = F_0042c880((undefined *)((int)this + 4));
  return (uint)uVar1;
}

/* ref: FUN_0090e700 */
uint F_0090e700(unsigned int gen_a0)
{
  GEN_ENTER(0x90e700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0x154));
  F_0042c880((undefined *)((int)this + 0x100));
  F_0042c880((undefined *)((int)this + 0xac));
  F_0042c880((undefined *)((int)this + 0x58));
  uVar1 = F_0042c880((undefined *)((int)this + 4));
  return (uint)uVar1;
}

/* ref: FUN_0090e760 */
uint F_0090e760(unsigned int gen_a0)
{
  GEN_ENTER(0x90e760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0x54));
  uVar1 = F_0042c880(this);
  return (uint)uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyRights::AddonFreeCompanyAuthorityTree::vf2 */
uint F_0090e790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x90e790u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(this + 8))
                    (*(undefined4 *)(this + 4),param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyRights::AddonFreeCompanyAuthorityTree::vf0 */
uint F_0090e7a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90e7a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10a0b64));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyRights::vf50 */
unsigned int F_0090e7d0(void)
{
  GEN_ENTER(0x90e7d0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0090e7e0 */
uint F_0090e7e0(unsigned int gen_a0)
{
  GEN_ENTER(0x90e7e0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  return in_ecx;
}

/* ref: FUN_0090e810 */
uint F_0090e810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90e810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  F_0042cbc0((undefined *)((int)this + 0x10),param_1 + 4);
  return (uint)this;
}

/* ref: FUN_0090e850 */
uint F_0090e850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90e850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  F_0042ccf0((undefined *)((int)this + 0x10),param_1 + 4);
  return (uint)this;
}

/* ref: Client::UI2::AddonJournal::JournalTree::vf2 */
uint F_0090e8a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x90e8a0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(this + 8))
                    (*(undefined4 *)(this + 4),param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: Client::UI2::AddonJournal::JournalTree::vf0 */
uint F_0090e8b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90e8b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10a0b64));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonGuildLeve::GuildLeveTree::vf2 */
uint F_0090e8f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x90e8f0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(this + 8))
                    (*(undefined4 *)(this + 4),param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: Client::UI2::AddonGuildLeve::GuildLeveTree::vf0 */
uint F_0090e900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90e900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10a0b64));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0090e930 */
uint F_0090e930(unsigned int gen_a0)
{
  GEN_ENTER(0x90e930u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0x68));
  uVar1 = F_0042c880((undefined *)((int)this + 0x14));
  return (uint)uVar1;
}

/* ref: FUN_0090e950 */
uint F_0090e950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90e950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  F_0042ccf0((undefined *)((int)this + 0x10),param_1 + 4);
  *(undefined4 *)((int)this + 100) = param_1[0x19];
  return (uint)this;
}

/* ref: Client::UI2::AddonMonsterNote::MonsterNoteTree::vf2 */
uint F_0090e9a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x90e9a0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(this + 8))
                    (*(undefined4 *)(this + 4),param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: Client::UI2::AddonMonsterNote::MonsterNoteTree::vf0 */
uint F_0090e9b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90e9b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10a0b64));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonGatheringNoteBook::GetItemRenderInterface::vf2 */
uint F_0090e9f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x90e9f0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(this + 4))
                    (*(undefined4 *)(this + 8),param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: Client::UI2::AddonGatheringNoteBook::GetItemRenderInterface::vf0 */
uint F_0090ea00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90ea00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10a0b64));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonContentsFinder::ContentsFinderTreeListCallBack::vf2 */
uint F_0090ea60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x90ea60u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(this + 8))
                    (*(undefined4 *)(this + 4),param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: Client::UI2::AddonContentsFinder::ContentsFinderTreeListCallBack::vf0 */
uint F_0090ea70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90ea70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10a0b64));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0090eaa0 */
uint F_0090eaa0(unsigned int gen_a0)
{
  GEN_ENTER(0x90eaa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0xac));
  F_0042c880((undefined *)((int)this + 0x58));
  uVar1 = F_0042c880((undefined *)((int)this + 4));
  return (uint)uVar1;
}

/* ref: FUN_0090ead0 */
uint F_0090ead0(unsigned int gen_a0)
{
  GEN_ENTER(0x90ead0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0x54));
  uVar1 = F_0042c880(this);
  return (uint)uVar1;
}

/* ref: FUN_0090eaf0 */
uint F_0090eaf0(unsigned int gen_a0)
{
  GEN_ENTER(0x90eaf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0x5c));
  uVar1 = F_0042c880((undefined *)((int)this + 4));
  return (uint)uVar1;
}

/* ref: FUN_0090eb30 */
uint F_0090eb30(unsigned int gen_a0)
{
  GEN_ENTER(0x90eb30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005814a0((undefined *)((int)this + 0x10));
  return (uint)this;
}

/* ref: FUN_0090ec40 */
uint F_0090ec40(unsigned int gen_a0)
{
  GEN_ENTER(0x90ec40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx - 0x180;
}

/* ref: Client::UI2::AddonActionDetail::vf22 */
uint F_0090ec50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x90ec50u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  ushort * puVar1;
  undefined4 in_EAX = 0;
  uint uVar2;
  float10 fVar3;
  
  puVar1 = (*(ushort * PTR32 *)&gen_args[1]);
  uVar2 = CONCAT22((short)((uint)in_EAX >> 0x10),*((ushort *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))));
  *(*(ushort * PTR32 *)&gen_args[1]) = *((ushort *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184)));
  *(*(ushort * PTR32 *)&gen_args[2]) = *((ushort *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x186)));
  if ((char)(*(undefined4 *)&gen_args[3]) != '\0') {
    fVar3 = F_0055dfa0((*(undefined * PTR32 *)&gen_args[0]),1);
    (*((undefined2 *)GEN_TOP(((char *)&(*(ushort * PTR32 *)&gen_args[1]) + 0)))) = (ushort)(int)TRUNC(((float10)GEN_TOD(*(*(ushort * PTR32 *)&gen_args[1]))) * fVar3);
    *puVar1 = (ushort)(*(ushort * PTR32 *)&gen_args[1]);
    fVar3 = F_0055dfa0((*(undefined * PTR32 *)&gen_args[0]),1);
    uVar2 = ((undefined2)0x27f) | 0xc00;
    (*((undefined2 *)GEN_TOP(((char *)&(*(ushort * PTR32 *)&gen_args[1]) + 0)))) = (ushort)(int)TRUNC(((float10)GEN_TOD(*(*(ushort * PTR32 *)&gen_args[2]))) * fVar3);
    *(*(ushort * PTR32 *)&gen_args[2]) = (ushort)(*(ushort * PTR32 *)&gen_args[1]);
  }
  return uVar2;
}

/* ref: Client::UI2::AddonActionDetail::vf61 */
ushort F_0090ecf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x90ecf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(ushort *)(this + 0x184) = (ushort)param_1;
  *(undefined2 *)(this + 0x186) = (undefined2)param_2;
  return (ushort)param_1;
}

/* ref: FUN_0090ed10 */
uint F_0090ed10(unsigned int gen_a0)
{
  GEN_ENTER(0x90ed10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx - 0x180;
}

/* ref: Client::UI2::AddonItemDetail::vf22 */
uint F_0090ed20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x90ed20u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  ushort * puVar1;
  undefined4 in_EAX = 0;
  uint uVar2;
  float10 fVar3;
  
  puVar1 = (*(ushort * PTR32 *)&gen_args[1]);
  uVar2 = CONCAT22((short)((uint)in_EAX >> 0x10),*((ushort *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))));
  *(*(ushort * PTR32 *)&gen_args[1]) = *((ushort *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184)));
  *(*(ushort * PTR32 *)&gen_args[2]) = *((ushort *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x186)));
  if ((char)(*(undefined4 *)&gen_args[3]) != '\0') {
    fVar3 = F_0055dfa0((*(undefined * PTR32 *)&gen_args[0]),1);
    (*((undefined2 *)GEN_TOP(((char *)&(*(ushort * PTR32 *)&gen_args[1]) + 0)))) = (ushort)(int)TRUNC(((float10)GEN_TOD(*(*(ushort * PTR32 *)&gen_args[1]))) * fVar3);
    *puVar1 = (ushort)(*(ushort * PTR32 *)&gen_args[1]);
    fVar3 = F_0055dfa0((*(undefined * PTR32 *)&gen_args[0]),1);
    uVar2 = ((undefined2)0x27f) | 0xc00;
    (*((undefined2 *)GEN_TOP(((char *)&(*(ushort * PTR32 *)&gen_args[1]) + 0)))) = (ushort)(int)TRUNC(((float10)GEN_TOD(*(*(ushort * PTR32 *)&gen_args[2]))) * fVar3);
    *(*(ushort * PTR32 *)&gen_args[2]) = (ushort)(*(ushort * PTR32 *)&gen_args[1]);
  }
  return uVar2;
}

/* ref: Client::UI2::AddonItemDetail::vf61 */
ushort F_0090edc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x90edc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(ushort *)(this + 0x184) = (ushort)param_1;
  *(undefined2 *)(this + 0x186) = (undefined2)param_2;
  return (ushort)param_1;
}

/* ref: FUN_0090edf0 */
uint F_0090edf0(unsigned int gen_a0)
{
  GEN_ENTER(0x90edf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  int iVar1;
  ulonglong uVar2;
  
  F_0042c880((undefined *)((int)this + 0x144));
  iVar1 = 2;
  this_00 = (undefined *)((int)this + 0x140);
  do {
    this_00 = (undefined *)((int)this_00 + -100);
    uVar2 = F_0042c880(this_00);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return (uint)uVar2;
}

/* ref: FUN_0090ee20 */
uint F_0090ee20(unsigned int gen_a0)
{
  GEN_ENTER(0x90ee20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0x5c));
  uVar1 = F_0042c880((undefined *)((int)this + 4));
  return (uint)uVar1;
}

/* ref: Client::UI2::AddonNamePlate::vf26 */
byte F_0090ee40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90ee40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_0090ee50 */
uint F_0090ee50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90ee50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((param_1 & 2) == 0) {
    if ((param_1 & 1) != 0) {
      F_00406ad0(this);
    }
  }
  else {
    this = (undefined *)((int)this - 4);
    if ((param_1 & 1) != 0) {
      F_00406b30(this);
      return (uint)this;
    }
  }
  return (uint)this;
}

/* ref: FUN_0090eea0 */
uint F_0090eea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90eea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  F_00596cd0((undefined *)((int)this + 0xc),param_1 + 3);
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  return (uint)this;
}

/* ref: FUN_0090eee0 */
uint F_0090eee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90eee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  F_00560a60((undefined *)((int)this + 0xc),param_1 + 3);
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  return (uint)this;
}

/* ref: Client::UI2::AddonAchievement::AchievementTree::vf2 */
uint F_0090ef30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x90ef30u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(this + 8))
                    (*(undefined4 *)(this + 4),param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: Client::UI2::AddonAchievement::AchievementTree::vf0 */
uint F_0090ef40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90ef40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10a0b64));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0090ef70 */
uint F_0090ef70(unsigned int gen_a0)
{
  GEN_ENTER(0x90ef70u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  return in_ecx;
}

/* ref: FUN_0090ef90 */
uint F_0090ef90(unsigned int gen_a0)
{
  GEN_ENTER(0x90ef90u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  return in_ecx;
}

/* ref: FUN_0090efb0 */
uint F_0090efb0(unsigned int gen_a0)
{
  GEN_ENTER(0x90efb0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  return in_ecx;
}

/* ref: Client::UI2::AddonGearSet::vf50 */
unsigned int F_0090efd0(void)
{
  GEN_ENTER(0x90efd0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0090f010 */
uint F_0090f010(unsigned int gen_a0)
{
  GEN_ENTER(0x90f010u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0xac));
  F_0042c880((undefined *)((int)this + 0x58));
  uVar1 = F_0042c880(this);
  return (uint)uVar1;
}

/* ref: FUN_0090f030 */
uint F_0090f030(unsigned int gen_a0)
{
  GEN_ENTER(0x90f030u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  return in_ecx;
}

/* ref: FUN_0090f050 */
uint F_0090f050(unsigned int gen_a0)
{
  GEN_ENTER(0x90f050u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx + 4);
  F_0042b630(in_ecx + 0x60);
  return in_ecx;
}

/* ref: FUN_0090f070 */
uint F_0090f070(unsigned int gen_a0)
{
  GEN_ENTER(0x90f070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0x60));
  uVar1 = F_0042c880((undefined *)((int)this + 4));
  return (uint)uVar1;
}

/* ref: FUN_0090f090 */
uint F_0090f090(unsigned int gen_a0)
{
  GEN_ENTER(0x90f090u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  return in_ecx;
}

/* ref: Client::UI2::AddonConfigCharacterBase::CBase::vf1 */
unsigned int F_0090f0c0(void)
{
  GEN_ENTER(0x90f0c0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::UI2::AddonConfigCharacterBase::CBase::vf2 */
unsigned int F_0090f0d0(void)
{
  GEN_ENTER(0x90f0d0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::UI2::AddonConfigCharacterBase::CBase::vf3 */
unsigned int F_0090f0e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90f0e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::UI2::AddonConfigCharacterBase::CBase::vf4 */
unsigned int F_0090f0f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x90f0f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Client::UI2::AddonConfigCharacterBase::CBase::vf0 */
uint F_0090f100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90f100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10cf5e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonConfigCharacterHotBar::CDisplay::vf0 */
uint F_0090f1b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90f1b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10cf5e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonConfigCharacterHotBar::CCommon::vf0 */
uint F_0090f1e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90f1e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10cf5e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonConfigCharacterHotBar::CXhb::vf0 */
uint F_0090f210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90f210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10cf5e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonConfigCharacterHud::CGeneral::vf0 */
uint F_0090f280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90f280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10cf5e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonConfigCharacterHud::CPartyList::vf0 */
uint F_0090f2b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90f2b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10cf5e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonConfigCharacterNamePlate::CMyself::vf0 */
uint F_0090f360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90f360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10cf5e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonConfigCharacterNamePlate::CAnother::vf0 */
uint F_0090f390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90f390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10cf5e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonConfigCharacterNamePlate::CNpc::vf0 */
uint F_0090f3c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90f3c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10cf5e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonConfigCharacterNamePlate::CGeneral::vf0 */
uint F_0090f3f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90f3f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10cf5e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonConfigCharacterOperation::CGeneral::vf0 */
uint F_0090f4c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90f4c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10cf5e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonConfigCharacterOperation::CTarget::vf0 */
uint F_0090f4f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90f4f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10cf5e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonConfigCharacterOperation::CCircle::vf0 */
uint F_0090f520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90f520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10cf5e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonConfigCharacterOperation::CCharacter::vf0 */
uint F_0090f550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90f550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10cf5e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonConfigCharacterOperation::CMouse::vf0 */
uint F_0090f580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90f580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10cf5e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaSelectInfo::vf5 */
unsigned int F_0090f5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90f5f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::UI2::AddonCharaSelectInfo::vf6 */
unsigned int F_0090f600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x90f600u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::UI2::AddonCharaMakeClassSelector::TreeListCallback::vf2 */
uint F_0090f620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x90f620u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(this + 8))
                    (*(undefined4 *)(this + 4),param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeClassSelector::TreeListCallback::vf0 */
uint F_0090f630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90f630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10a0b64));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0090f660 */
uint F_0090f660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90f660u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x18c) = param_2;
  return param_2;
}

/* ref: FUN_0090f670 */
uint F_0090f670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90f670u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 400) = param_2;
  return param_2;
}

/* ref: FUN_0090f690 */
unsigned int F_0090f690(unsigned int gen_a0)
{
  GEN_ENTER(0x90f690u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_0090f6a0 */
unsigned int F_0090f6a0(unsigned int gen_a0)
{
  GEN_ENTER(0x90f6a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_0090f6b0 */
unsigned int F_0090f6b0(unsigned int gen_a0)
{
  GEN_ENTER(0x90f6b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_0090f6c0 */
uint F_0090f6c0(void)
{
  GEN_ENTER(0x90f6c0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0090f6e0 */
uint F_0090f6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90f6e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtk::vf6 */
ushort F_0090f710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90f710u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x1c) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtk::vf7 */
ushort F_0090f720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90f720u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x1e) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtk::vf8 */
uint F_0090f730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90f730u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x10) = param_2;
  return param_2;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtk::vf12 */
uint F_0090f740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90f740u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x24) = param_2;
  return param_2;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtk::vf11 */
unsigned int F_0090f750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90f750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtk::vf13 */
uint F_0090f760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90f760u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x20) = param_2;
  return param_2;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtk::vf14 */
uint F_0090f770(unsigned int gen_a0)
{
  GEN_ENTER(0x90f770u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x20);
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtk::vf9 */
uint F_0090f780(unsigned int gen_a0)
{
  GEN_ENTER(0x90f780u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: FUN_0090f8a0 */
uint F_0090f8a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90f8a0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_0090f8c0 */
uint F_0090f8c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90f8c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  uVar1 = param_1[3];
  *(uint *)((int)this + 0xc) = uVar1;
  return uVar1;
}

/* ref: FUN_0090f8e0 */
uint F_0090f8e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x90f8e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)this)(*(undefined4 *)((int)this + 4),(int)this + 8,param_1,param_2);
  return uVar1;
}

/* ref: FUN_0090f940 */
uint F_0090f940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90f940u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x20 + *in_ecx;
}

/* ref: FUN_0090f9b0 */
byte F_0090f9b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90f9b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_0090f9f0 */
uint F_0090f9f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90f9f0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0x14;
}

/* ref: FUN_0090fa30 */
uint F_0090fa30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90fa30u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x11c + *in_ecx;
}

/* ref: FUN_0090fa50 */
uint F_0090fa50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90fa50u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x2624 + *in_ecx;
}

/* ref: FUN_0090fa70 */
uint F_0090fa70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90fa70u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x140 + *in_ecx;
}

/* ref: FUN_0090fab0 */
uint F_0090fab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90fab0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x34 + *in_ecx;
}

/* ref: FUN_0090fb40 */
uint F_0090fb40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90fb40u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_0090fbb0 */
uint F_0090fbb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90fbb0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x54 + *in_ecx;
}

/* ref: FUN_0090fc30 */
uint F_0090fc30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90fc30u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0xd + *in_ecx;
}

/* ref: FUN_0090fc60 */
uint F_0090fc60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90fc60u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 3 + *in_ecx;
}

/* ref: FUN_0090fc90 */
uint F_0090fc90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90fc90u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x60 + *in_ecx;
}

/* ref: FUN_0090fcc0 */
uint F_0090fcc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90fcc0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_0090fcd0 */
uint F_0090fcd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90fcd0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_0090fd00 */
uint F_0090fd00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90fd00u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_0090fd40 */
uint F_0090fd40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90fd40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx + param_2 * 8;
}

/* ref: FUN_0090fde0 */
uint F_0090fde0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90fde0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0xd4 + *in_ecx;
}

/* ref: FUN_0090fe10 */
uint F_0090fe10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90fe10u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_0090fe70 */
uint F_0090fe70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90fe70u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0x14;
}

/* ref: FUN_0090fe90 */
uint F_0090fe90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90fe90u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0x14;
}

/* ref: FUN_0090fec0 */
uint F_0090fec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90fec0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_0090fed0 */
uint F_0090fed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90fed0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_0090fee0 */
uint F_0090fee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90fee0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_0090fef0 */
uint F_0090fef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90fef0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_0090ff10 */
uint F_0090ff10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90ff10u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_0090ff30 */
uint F_0090ff30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90ff30u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_0090ff50 */
uint F_0090ff50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90ff50u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_0090ff60 */
uint F_0090ff60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90ff60u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_0090ff80 */
uint F_0090ff80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90ff80u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_0090ff90 */
uint F_0090ff90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90ff90u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_0090ffa0 */
uint F_0090ffa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90ffa0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x20 + in_ecx;
}

/* ref: FUN_0090ffd0 */
uint F_0090ffd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x90ffd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx + param_2 * 0xc;
}

/* ref: FUN_00910000 */
uint F_00910000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x910000u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx + param_2 * 0xc;
}

/* ref: FUN_00910030 */
uint F_00910030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x910030u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx + param_2 * 8;
}

/* ref: FUN_00910050 */
uint F_00910050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x910050u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x8c + in_ecx;
}

/* ref: FUN_00910080 */
uint F_00910080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x910080u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00910090 */
uint F_00910090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x910090u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_009100d0 */
uint F_009100d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9100d0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0x18;
}

/* ref: FUN_00910110 */
uint F_00910110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x910110u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00910140 */
uint F_00910140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x910140u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00910180 */
uint F_00910180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x910180u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_009101c0 */
uint F_009101c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9101c0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00910260 */
uint F_00910260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x910260u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_009102b0 */
uint F_009102b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9102b0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0xc0 + *in_ecx;
}

/* ref: FUN_00910360 */
uint F_00910360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x910360u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x58 + *in_ecx;
}

/* ref: FUN_00910370 */
uint F_00910370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x910370u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x68 + *in_ecx;
}

/* ref: FUN_00910380 */
uint F_00910380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x910380u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10d39c8));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VRewardLoader_Reward_Agent_UI2_Client::vf1 */
uint F_009103c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9103c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)((int)this + 0x1c))(*(undefined4 *)((int)this + 0x18),param_2,param_1,param_3)
  ;
  return uVar1;
}

/* ref: FUN_00910430 */
byte F_00910430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x910430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00910450 */
byte F_00910450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x910450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00910470 */
byte F_00910470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x910470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00910490 */
byte F_00910490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x910490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00910580 */
uint F_00910580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x910580u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_00cb4700(this,param_4,param_5);
  *(undefined4 *)((int)this + 0x14) = param_4;
  *(undefined4 *)((int)this + 0x24) = param_3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10d39d4));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x20) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VAgentLobby_Agent_UI2_Client_Game::vf1 */
uint F_009105c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9105c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)((int)this + 0x20))
                    (*(int *)((int)this + 0x24) + *(int *)((int)this + 0x18),param_2,param_1,param_3
                    );
  return uVar1;
}

/* ref: FUN_00910620 */
uint F_00910620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x910620u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  
  iVar1 = *(int *)this;
  *param_1 = iVar1;
  *(int *)this = iVar1 + 0x18;
  return (uint)param_1;
}

/* ref: FUN_00910660 */
uint F_00910660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x910660u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10d39e0));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VLobbyUIClient_Agent_UI2_Client_Game::vf1 */
uint F_009106a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9106a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)((int)this + 0x1c))(*(undefined4 *)((int)this + 0x18),param_2,param_1,param_3)
  ;
  return uVar1;
}

/* ref: FUN_009106c0 */
byte F_009106c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9106c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_009106e0 */
byte F_009106e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9106e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00910700 */
uint F_00910700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x910700u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 4) + param_2 * 4;
}

/* ref: FUN_00910730 */
uint F_00910730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x910730u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + in_ecx;
}

/* ref: FUN_009107d0 */
uint F_009107d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9107d0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00910820 */
uint F_00910820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x910820u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00910870 */
uint F_00910870(unsigned int gen_a0)
{
  GEN_ENTER(0x910870u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00910880 */
uint F_00910880(unsigned int gen_a0)
{
  GEN_ENTER(0x910880u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_009108b0 */
uint F_009108b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9108b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x14,400);
  return (uint)uVar1;
}

/* ref: FUN_009108e0 */
uint F_009108e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9108e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009108f0 */
uint F_009108f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9108f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00910920 */
uint F_00910920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x910920u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xc,400);
  return (uint)uVar1;
}

/* ref: FUN_00910950 */
uint F_00910950(unsigned int gen_a0)
{
  GEN_ENTER(0x910950u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00910960 */
uint F_00910960(unsigned int gen_a0)
{
  GEN_ENTER(0x910960u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00910970 */
uint F_00910970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x910970u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xc,400);
  return (uint)uVar1;
}

/* ref: FUN_009109c0 */
uint F_009109c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9109c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_009109f0 */
uint F_009109f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9109f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xe1;
}

/* ref: FUN_00910a00 */
uint F_00910a00(unsigned int gen_a0)
{
  GEN_ENTER(0x910a00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00910a10 */
uint F_00910a10(unsigned int gen_a0)
{
  GEN_ENTER(0x910a10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00910a20 */
uint F_00910a20(unsigned int gen_a0)
{
  GEN_ENTER(0x910a20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00910a30 */
uint F_00910a30(unsigned int gen_a0)
{
  GEN_ENTER(0x910a30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00910a40 */
uint F_00910a40(unsigned int gen_a0)
{
  GEN_ENTER(0x910a40u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0xe1);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0xe1);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00910a60 */
byte F_00910a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x910a60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00910a90 */
unsigned int F_00910a90(unsigned int gen_a0)
{
  GEN_ENTER(0x910a90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0xe1) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0xe1) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0xe1);
      piVar4 = (int *)*piVar3;
      while (piVar5 = piVar4, cVar1 == '\0') {
        piVar4 = (int *)*piVar5;
        cVar1 = *(char *)((int)piVar4 + 0xe1);
        piVar3 = piVar5;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0xe1);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0xe1);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00910af0 */
uint F_00910af0(unsigned int gen_a0)
{
  GEN_ENTER(0x910af0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x14;
}

/* ref: FUN_00910b00 */
uint F_00910b00(unsigned int gen_a0)
{
  GEN_ENTER(0x910b00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_00910b10 */
uint F_00910b10(unsigned int gen_a0)
{
  GEN_ENTER(0x910b10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00910b20 */
uint F_00910b20(unsigned int gen_a0)
{
  GEN_ENTER(0x910b20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00910b30 */
uint F_00910b30(unsigned int gen_a0)
{
  GEN_ENTER(0x910b30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00910b40 */
uint F_00910b40(unsigned int gen_a0)
{
  GEN_ENTER(0x910b40u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00910b50 */
uint F_00910b50(unsigned int gen_a0)
{
  GEN_ENTER(0x910b50u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00910b70 */
uint F_00910b70(unsigned int gen_a0)
{
  GEN_ENTER(0x910b70u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00910bb0 */
uint F_00910bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x910bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,800);
  return (uint)uVar1;
}

/* ref: FUN_00910be0 */
byte F_00910be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x910be0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00910c10 */
unsigned int F_00910c10(unsigned int gen_a0)
{
  GEN_ENTER(0x910c10u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00910c80 */
uint F_00910c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x910c80u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00910cd0 */
uint F_00910cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x910cd0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00910d30 */
uint F_00910d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x910d30u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00910d80 */
uint F_00910d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x910d80u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00910dd0 */
uint F_00910dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x910dd0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00910e60 */
uint F_00910e60(unsigned int gen_a0)
{
  GEN_ENTER(0x910e60u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x38;
}

/* ref: FUN_00910e70 */
uint F_00910e70(unsigned int gen_a0)
{
  GEN_ENTER(0x910e70u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x39;
}

/* ref: FUN_00910e80 */
uint F_00910e80(unsigned int gen_a0)
{
  GEN_ENTER(0x910e80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00910e90 */
uint F_00910e90(unsigned int gen_a0)
{
  GEN_ENTER(0x910e90u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00910ea0 */
uint F_00910ea0(unsigned int gen_a0)
{
  GEN_ENTER(0x910ea0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00910eb0 */
uint F_00910eb0(unsigned int gen_a0)
{
  GEN_ENTER(0x910eb0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x10;
}

/* ref: FUN_00910ec0 */
uint F_00910ec0(unsigned int gen_a0)
{
  GEN_ENTER(0x910ec0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x39)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x39);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00910ee0 */
uint F_00910ee0(unsigned int gen_a0)
{
  GEN_ENTER(0x910ee0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x39);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x39);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00910f20 */
uint F_00910f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x910f20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 << 6,400);
  return (uint)uVar1;
}

/* ref: FUN_00910f70 */
uint F_00910f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x910f70u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 200,param_2,400);
  return uVar1;
}

/* ref: FUN_00910fc0 */
uint F_00910fc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x910fc0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 << 5,param_2,400);
  return uVar1;
}

/* ref: FUN_009110c0 */
uint F_009110c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9110c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009110d0 */
uint F_009110d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9110d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00911100 */
uint F_00911100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x911100u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xc,400);
  return (uint)uVar1;
}

/* ref: FUN_00911130 */
uint F_00911130(unsigned int gen_a0)
{
  GEN_ENTER(0x911130u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00911140 */
uint F_00911140(unsigned int gen_a0)
{
  GEN_ENTER(0x911140u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00911170 */
uint F_00911170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x911170u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,400);
  return (uint)uVar1;
}

/* ref: FUN_009111a0 */
uint F_009111a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9111a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009111b0 */
uint F_009111b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9111b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_009111e0 */
uint F_009111e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9111e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xbc,400);
  return (uint)uVar1;
}

/* ref: FUN_00911210 */
uint F_00911210(unsigned int gen_a0)
{
  GEN_ENTER(0x911210u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00911220 */
uint F_00911220(unsigned int gen_a0)
{
  GEN_ENTER(0x911220u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00911250 */
uint F_00911250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x911250u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x14,400);
  return (uint)uVar1;
}

/* ref: FUN_00911280 */
uint F_00911280(unsigned int gen_a0)
{
  GEN_ENTER(0x911280u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00911290 */
uint F_00911290(unsigned int gen_a0)
{
  GEN_ENTER(0x911290u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_009112c0 */
uint F_009112c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9112c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x6c,400);
  return (uint)uVar1;
}

/* ref: FUN_009112e0 */
uint F_009112e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9112e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009112f0 */
uint F_009112f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9112f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00911320 */
uint F_00911320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x911320u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 100,400);
  return (uint)uVar1;
}

/* ref: FUN_00911340 */
uint F_00911340(unsigned int gen_a0)
{
  GEN_ENTER(0x911340u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00911350 */
uint F_00911350(unsigned int gen_a0)
{
  GEN_ENTER(0x911350u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00911380 */
uint F_00911380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x911380u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x68,400);
  return (uint)uVar1;
}

/* ref: FUN_009113d0 */
uint F_009113d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9113d0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00911430 */
uint F_00911430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x911430u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 << 4,param_2,400);
  return uVar1;
}

/* ref: FUN_00911450 */
uint F_00911450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x911450u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 << 4,400);
  return (uint)uVar1;
}

/* ref: FUN_00911470 */
uint F_00911470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x911470u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_009114d0 */
uint F_009114d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9114d0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00911530 */
uint F_00911530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x911530u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00911580 */
uint F_00911580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x911580u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_009115d0 */
uint F_009115d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9115d0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00911620 */
uint F_00911620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x911620u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00911690 */
uint F_00911690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x911690u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00911700 */
uint F_00911700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x911700u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00911760 */
uint F_00911760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x911760u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,400);
  return uVar1;
}

/* ref: FUN_00911790 */
uint F_00911790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x911790u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,400);
  return (uint)uVar1;
}

/* ref: FUN_009117c0 */
uint F_009117c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9117c0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00911810 */
uint F_00911810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x911810u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00911860 */
uint F_00911860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x911860u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_009118b0 */
uint F_009118b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9118b0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00911900 */
uint F_00911900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x911900u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00911980 */
uint F_00911980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x911980u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_009119a0 */
byte F_009119a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9119a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_009119e0 */
uint F_009119e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9119e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00911a00 */
byte F_00911a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x911a00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00911a90 */
uint F_00911a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x911a90u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00911b00 */
uint F_00911b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x911b00u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x54,param_2,400);
  return uVar1;
}

/* ref: FUN_00911b20 */
uint F_00911b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x911b20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x54,400);
  return (uint)uVar1;
}

/* ref: FUN_00911b60 */
uint F_00911b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x911b60u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00911bc0 */
uint F_00911bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x911bc0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x18,param_2,400);
  return uVar1;
}

/* ref: FUN_00911bf0 */
uint F_00911bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x911bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,400);
  return (uint)uVar1;
}

/* ref: FUN_00911c40 */
uint F_00911c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x911c40u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00911ca0 */
uint F_00911ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x911ca0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00911d10 */
uint F_00911d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x911d10u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00911d70 */
uint F_00911d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x911d70u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00911de0 */
uint F_00911de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x911de0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 << 4,param_2,400);
  return uVar1;
}

/* ref: FUN_00911e00 */
uint F_00911e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x911e00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 << 4,400);
  return (uint)uVar1;
}

/* ref: FUN_00911e40 */
uint F_00911e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x911e40u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00911ea0 */
uint F_00911ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x911ea0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x68,param_2,0x2c0);
  return uVar1;
}

/* ref: FUN_00911ec0 */
uint F_00911ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x911ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x68,0x2c0);
  return (uint)uVar1;
}

/* ref: FUN_00911f00 */
uint F_00911f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x911f00u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00911f60 */
uint F_00911f60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x911f60u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x6c,param_2,0x2c0);
  return uVar1;
}

/* ref: FUN_00911f80 */
uint F_00911f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x911f80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x6c,0x2c0);
  return (uint)uVar1;
}

/* ref: FUN_00911fc0 */
uint F_00911fc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x911fc0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00912020 */
uint F_00912020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x912020u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 8,param_2,0x2c0);
  return uVar1;
}

/* ref: FUN_00912050 */
uint F_00912050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x912050u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 8,0x2c0);
  return (uint)uVar1;
}

/* ref: FUN_00912080 */
uint F_00912080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x912080u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00912150 */
byte F_00912150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x912150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00912170 */
byte F_00912170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x912170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00912190 */
byte F_00912190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x912190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_009121c0 */
byte F_009121c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9121c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_009121f0 */
uint F_009121f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9121f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00912200 */
uint F_00912200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x912200u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00912250 */
byte F_00912250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x912250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00912330 */
uint F_00912330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x912330u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00912350 */
byte F_00912350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x912350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00912370 */
uint F_00912370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x912370u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009123a0 */
byte F_009123a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9123a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00912410 */
uint F_00912410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x912410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00912440 */
uint F_00912440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x912440u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00912450 */
uint F_00912450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x912450u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

