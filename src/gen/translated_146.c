#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00c2c4d0 */
uint F_00c2c4d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc2c4d0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  F_01050b60(in_ecx + 2);
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x110f834));
  return (uint)in_ecx;
}

/* ref: FUN_00c2c500 */
uint F_00c2c500(unsigned int gen_a0)
{
  GEN_ENTER(0xc2c500u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c2c510 */
uint F_00c2c510(unsigned int gen_a0)
{
  GEN_ENTER(0xc2c510u, gen_a0, 0u, 0u, 0u);
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

/* ref: PacketBufferTmpl_TZoneProtoDown_ZoneProtoChannel_Network_Application_IpcChannel::vf0 */
uint F_00c2c560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2c560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x110f82c));
  F_01050b70();
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PacketBufferTmpl_TChatProtoDown_ChatProtoChannel_Network_Application_IpcChannel::vf0 */
uint F_00c2c590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2c590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x110f834));
  F_01050b70();
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c2c5e0 */
uint F_00c2c5e0(unsigned int gen_a0)
{
  GEN_ENTER(0xc2c5e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c2c5f0 */
unsigned int F_00c2c5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2c5f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return 0;
}

/* ref: FUN_00c2c610 */
uint F_00c2c610(unsigned int gen_a0)
{
  GEN_ENTER(0xc2c610u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c2c650 */
unsigned int F_00c2c650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2c650u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return 0;
}

/* ref: FUN_00c2c670 */
unsigned int F_00c2c670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2c670u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00c2c690 */
uint F_00c2c690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2c690u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c46e20(param_3,param_1,param_2 - param_1);
  return uVar1 + (param_2 - param_1);
}

/* ref: FUN_00c2c6c0 */
uint F_00c2c6c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2c6c0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  uVar2 = F_00c46e20(param_3,param_1,iVar1);
  return uVar2 + iVar1;
}

/* ref: FUN_00c2c6f0 */
uint F_00c2c6f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2c6f0u, gen_a0, gen_a1, gen_a2, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((param_2 - in_ecx[1]) * 1000 - in_ecx[2]) + param_3;
  *in_ecx = uVar1;
  return uVar1;
}

/* ref: FUN_00c2c710 */
uint F_00c2c710(unsigned int gen_a0)
{
  GEN_ENTER(0xc2c710u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0042b630((int)this + 0x18);
  F_0042b630((int)this + 0x6c);
  F_00e75840((int)this + 0xc0);
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc0) = (*(undefined * PTR32 (*)[27])REFP(0x10c45d4))
  ;
  F_00f36280((undefined *)((int)this + 0xf0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xf0) =
       (*(undefined * PTR32 (*)[27])REFP(0x110f694));
  F_00e5bbd0((int)this + 0x1d8);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1d8) = (*(undefined * PTR32 (*)[27])REFP(0x10c4564));
  F_00efc4c0((undefined *)((int)this + 0x200));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x200) =
       (*(undefined * PTR32 (*)[27])REFP(0x110f704));
  return (uint)this;
}

/* ref: FUN_00c2c780 */
uint F_00c2c780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2c780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00c2b050(this,param_1);
  return (uint)this;
}

/* ref: FUN_00c2c7a0 */
uint F_00c2c7a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2c7a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  int * piVar1;
  undefined4 * puVar2;
  __time64_t _Var3;
  ulonglong uVar4;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  piVar1 = (int *)F_00e3bd70(*(undefined4 *)((int)this + 0x298));
  if (*piVar1 == 2) {
    piVar1 = (int *)F_00e3bd20(param_2);
    if (*(int *)((int)this + *piVar1 * 4 + 0x2d8) == 0) {
      _Var3 = F_00c4b7c2((__time64_t *)0x0);
      piVar1 = (int *)F_00e3bd20(param_2);
      *(int *)((int)this + *piVar1 * 4 + 0x2d8) = (int)_Var3;
      F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
      return (uint)piVar1;
    }
    _Var3 = F_00c4b7c2((__time64_t *)0x0);
    puVar2 = (undefined4 *)F_00e3bd20(param_2);
    piVar1 = (int *)*puVar2;
    if ((uint)(*(int *)((int)this + (int)((int)(uintptr_t)piVar1) * 4 + 0x2d8) + *(int *)((int)this + 0x2e4)) <
        (uint)_Var3) {
      F_00e3bd90(((undefined4 *)(gen_frame + 0x54)));
      (*(undefined4 *)(gen_frame + 0x5c)) = 6;
      ((undefined4 *)(gen_frame + 0x54))[0] = 0x7d6;
      F_0042cc20(((undefined1 *)(gen_frame + 0x0)),"TIMEOUT",REFG(undefined4, 0x108cc50));
      F_0042ccf0(((undefined1 *)(gen_frame + 0x60)),((undefined1 *)(gen_frame + 0x0)));
      F_0042c880(((undefined1 *)(gen_frame + 0x0)));
      (*(undefined2 *)(gen_frame + 0xb4)) = 0x32c9;
      ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,((undefined4 *)(gen_frame + 0x54)),param_2);
      uVar4 = F_0042c880(((undefined1 *)(gen_frame + 0x60)));
      piVar1 = (int *)uVar4;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return (uint)piVar1;
}

/* ref: FUN_00c2c8c0 */
byte F_00c2c8c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc2c8c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xd0];
  undefined * this_00;
  byte bVar1;
  
  (*(uint *)(gen_frame + 0xc8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xcc);
  if (*(int *)((int)this + 0x298) == 0) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xcc) ^ (uint)(uint)(gen_frame + 0xcc));
    return 0;
  }
  if (param_3 == 0) {
    F_00e3bd90(((undefined4 *)(gen_frame + 0x64)));
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x6c)) = (undefined * PTR32 *)0x6;
    ((undefined4 *)(gen_frame + 0x64))[0] = 0x7d5;
    F_0042cc20(((byte *)(gen_frame + 0x8)) + 8,"TIMEOUT",REFG(undefined4, 0x108cc50));
    F_0042ccf0(((undefined1 *)(gen_frame + 0x70)),((byte *)(gen_frame + 0x8)) + 8);
    F_0042c880(((byte *)(gen_frame + 0x8)) + 8);
    (*(undefined2 *)(gen_frame + 0xc4)) = 0x32c9;
    ((code *)*(gen_code32 *)(*param_2 + 0x10))(param_2,((undefined4 *)(gen_frame + 0x64)),0);
    F_0042c880(((undefined1 *)(gen_frame + 0x70)));
    F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc));
    return 1;
  }
  F_00c2c7a0(this,param_2,param_3);
  this_00 = *(undefined * PTR32 *)(param_3 + 100);
  *(int * PTR32 *)(param_3 + 0x68) = param_2;
  if (this_00 == (undefined *)0x0) goto LAB_00c2ca06;
  bVar1 = F_00e3e870(this_00);
  if (bVar1 == 0) goto LAB_00c2ca06;
  ((byte *)(gen_frame + 0x8))[4] = 2;
  ((byte *)(gen_frame + 0x8))[5] = 0;
  ((byte *)(gen_frame + 0x8))[6] = 0;
  ((byte *)(gen_frame + 0x8))[7] = 0;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)) = (*(undefined * PTR32 (*)[2])REFP(0x110f814));
  F_0042cbc0(((byte *)(gen_frame + 0x8)) + 8,param_1);
  if (*(int *)((int)this_00 + 0xc) == 0) {
    F_00c2c1a0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x6c)),param_1);
    bVar1 = F_00e3edd0(this_00,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x6c)));
    if (bVar1 != 0) {
      F_0042c880(((undefined1 *)(gen_frame + 0x74)));
      goto LAB_00c2ca20;
    }
    F_0042c880(((undefined1 *)(gen_frame + 0x74)));
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x6c)) = (*(undefined * PTR32 (*)[2])REFP(0x110f688));
  }
  else {
LAB_00c2ca20: ;
    bVar1 = F_00e40ba0(this_00,param_2);
    if (bVar1 != 0) {
      F_00c2bcc0(this,param_3);
      F_0042c880(((byte *)(gen_frame + 0x8)) + 8);
      F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc));
      return 1;
    }
  }
  F_0042c880(((byte *)(gen_frame + 0x8)) + 8);
LAB_00c2ca06: ;
  F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc));
  return 0;
}

/* ref: FUN_00c2ca60 */
byte F_00c2ca60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc2ca60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  undefined * this_00;
  byte bVar1;
  
  (*(uint *)(gen_frame + 0xd8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xdc);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 4)) = this;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) = param_1;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) = param_2;
  if (*(int *)((int)this + 0x298) == 0) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xdc) ^ (uint)(uint)(gen_frame + 0xdc));
    return 0;
  }
  if (param_4 == 0) {
    F_00e3bd90(((undefined4 *)(gen_frame + 0x74)));
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x7c)) = (undefined * PTR32 *)0x6;
    ((undefined4 *)(gen_frame + 0x74))[0] = 0x7d5;
    F_0042cc20(((byte *)(gen_frame + 0xc)) + 0x14,"TIMEOUT",REFG(undefined4, 0x108cc50));
    F_0042ccf0(((undefined1 *)(gen_frame + 0x80)),((byte *)(gen_frame + 0xc)) + 0x14);
    F_0042c880(((byte *)(gen_frame + 0xc)) + 0x14);
    (*(undefined2 *)(gen_frame + 0xd4)) = 0x32c9;
    ((code *)*(gen_code32 *)(*param_3 + 0x10))(param_3,((undefined4 *)(gen_frame + 0x74)),0);
    F_0042c880(((undefined1 *)(gen_frame + 0x80)));
    F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
    return 1;
  }
  F_00c2c7a0(this,param_3,param_4);
  this_00 = *(undefined * PTR32 *)(param_4 + 100);
  *(int * PTR32 *)(param_4 + 0x68) = param_3;
  if (this_00 == (undefined *)0x0) goto LAB_00c2cbae;
  bVar1 = F_00e3e870(this_00);
  if (bVar1 == 0) goto LAB_00c2cbae;
  ((byte *)(gen_frame + 0xc))[0x10] = 2;
  ((byte *)(gen_frame + 0xc))[0x11] = 0;
  ((byte *)(gen_frame + 0xc))[0x12] = 0;
  ((byte *)(gen_frame + 0xc))[0x13] = 0;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 12)) =
       (*(undefined * PTR32 (*)[2])REFP(0x110f814));
  F_0042cbc0(((byte *)(gen_frame + 0xc)) + 0x14,(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)));
  if (*(int *)((int)this_00 + 0xc) == 0) {
    F_00c2c1a0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x7c)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)));
    bVar1 = F_00e3edd0(this_00,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x7c)));
    if (bVar1 != 0) {
      F_0042c880(((undefined1 *)(gen_frame + 0x84)));
      goto LAB_00c2cbc8;
    }
    F_0042c880(((undefined1 *)(gen_frame + 0x84)));
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x7c)) = (*(undefined * PTR32 (*)[2])REFP(0x110f688));
  }
  else {
LAB_00c2cbc8: ;
    bVar1 = F_00e40860(this_00,(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)),param_3);
    if (bVar1 != 0) {
      F_00c2bcc0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 4)),param_4);
      F_0042c880(((byte *)(gen_frame + 0xc)) + 0x14);
      F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
      return 1;
    }
  }
  F_0042c880(((byte *)(gen_frame + 0xc)) + 0x14);
LAB_00c2cbae: ;
  F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
  return 0;
}

/* ref: FUN_00c2cb2d */
byte F_00c2cb2d(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xc2cb2du, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * in_ecx = (undefined *)(uintptr_t)gen_a0;
  int in_esi = (int)gen_a1;
  undefined4 in_edi = (undefined4)gen_a2;
  uint in_ebp = (uint)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined * this;
  undefined4 uVar1;
  byte bVar2;
  
  F_00c2c7a0(in_ecx,in_edi,in_esi);
  this = *(undefined * PTR32 *)(in_esi + 100);
  *(undefined4 *)(in_esi + 0x68) = in_edi;
  if (this == (undefined *)0x0) goto LAB_00c2cbae;
  bVar2 = F_00e3e870(this);
  if (bVar2 == 0) goto LAB_00c2cbae;
  uVar1 = *(undefined4 *)(in_ebp - 200);
  *(undefined4 *)(in_ebp - 0xc0) = 2;
  *(undefined * PTR32 * PTR32 *)(in_ebp - 0xc4) =
       (*(undefined * PTR32 (*)[2])REFP(0x110f814));
  F_0042cbc0((undefined *)(in_ebp - 0xbc),uVar1);
  if (*(int *)((int)this + 0xc) == 0) {
    F_00c2c1a0((undefined *)(in_ebp - 0x60),*(undefined4 *)(in_ebp - 200));
    bVar2 = F_00e3edd0(this,in_ebp - 0x60);
    if (bVar2 != 0) {
      F_0042c880((undefined *)(in_ebp - 0x58));
      goto LAB_00c2cbc8;
    }
    F_0042c880((undefined *)(in_ebp - 0x58));
    *(undefined * PTR32 * PTR32 *)(in_ebp - 0x60) = (*(undefined * PTR32 (*)[2])REFP(0x110f688));
  }
  else {
LAB_00c2cbc8: ;
    bVar2 = F_00e40860(this,*(undefined4 *)(in_ebp - 0xd0),in_edi);
    if (bVar2 != 0) {
      F_00c2bcc0(*(undefined4 *)(in_ebp - 0xcc),in_esi);
      F_0042c880((undefined *)(in_ebp - 0xbc));
      F_00c47745(*(uint *)(in_ebp - 4) ^ in_ebp);
      return 1;
    }
  }
  F_0042c880((undefined *)(in_ebp - 0xbc));
LAB_00c2cbae: ;
  F_00c47745(*(uint *)(in_ebp - 4) ^ in_ebp);
  return 0;
}

/* ref: FUN_00c2cc10 */
byte F_00c2cc10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc2cc10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  int param_5 = (int)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0xd0];
  undefined * this_00;
  byte bVar1;
  
  (*(uint *)(gen_frame + 0xc8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xcc);
  if (*(int *)((int)this + 0x298) == 0) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xcc) ^ (uint)(uint)(gen_frame + 0xcc));
    return 0;
  }
  if (param_5 == 0) {
    F_00e3bd90(((undefined4 *)(gen_frame + 0x8)));
    (*(undefined4 *)(gen_frame + 0x10)) = 6;
    ((undefined4 *)(gen_frame + 0x8))[0] = 0x7d5;
    F_0042cc20(((undefined1 *)(gen_frame + 0x74)),"TIMEOUT",REFG(undefined4, 0x108cc50));
    F_0042ccf0(((undefined1 *)(gen_frame + 0x14)),((undefined1 *)(gen_frame + 0x74)));
    F_0042c880(((undefined1 *)(gen_frame + 0x74)));
    (*(undefined2 *)(gen_frame + 0x68)) = 0x32c9;
    ((code *)*(gen_code32 *)(*param_4 + 0x10))(param_4,((undefined4 *)(gen_frame + 0x8)),0);
    F_0042c880(((undefined1 *)(gen_frame + 0x14)));
    F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc));
    return 1;
  }
  F_00c2c7a0(this,param_4,param_5);
  this_00 = *(undefined * PTR32 *)(param_5 + 100);
  *(int * PTR32 *)(param_5 + 0x68) = param_4;
  if (this_00 == (undefined *)0x0) goto LAB_00c2cd92;
  bVar1 = F_00e3e870(this_00);
  if (bVar1 == 0) goto LAB_00c2cd92;
  (*(undefined4 *)(gen_frame + 0x70)) = 2;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x6c)) = (*(undefined * PTR32 (*)[2])REFP(0x110f814));
  F_0042cbc0(((undefined1 *)(gen_frame + 0x74)),param_1);
  if (*(int *)((int)this_00 + 0xc) == 0) {
    bVar1 = F_00e3edd0(this_00,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x6c)));
    if (bVar1 != 0) goto LAB_00c2cd47;
  }
  else {
LAB_00c2cd47: ;
    bVar1 = F_00e3f450(this_00,param_2,param_3,param_4);
    if (bVar1 != 0) {
      F_00c2bcc0(this,param_5);
      F_0042c880(((undefined1 *)(gen_frame + 0x74)));
      F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc));
      return 1;
    }
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x74)));
LAB_00c2cd92: ;
  F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc));
  return 0;
}

/* ref: FUN_00c2cdb0 */
byte F_00c2cdb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc2cdb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  int param_5 = (int)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0xd0];
  undefined * this_00;
  byte bVar1;
  
  (*(uint *)(gen_frame + 0xc8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xcc);
  if (*(int *)((int)this + 0x298) == 0) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xcc) ^ (uint)(uint)(gen_frame + 0xcc));
    return 0;
  }
  if (param_5 == 0) {
    F_00e3bd90(((undefined4 *)(gen_frame + 0x64)));
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x6c)) = (undefined * PTR32 *)0x6;
    ((undefined4 *)(gen_frame + 0x64))[0] = 0x7d5;
    F_0042cc20(((byte *)(gen_frame + 0x8)) + 8,"TIMEOUT",REFG(undefined4, 0x108cc50));
    F_0042ccf0(((undefined1 *)(gen_frame + 0x70)),((byte *)(gen_frame + 0x8)) + 8);
    F_0042c880(((byte *)(gen_frame + 0x8)) + 8);
    (*(undefined2 *)(gen_frame + 0xc4)) = 0x32c9;
    ((code *)*(gen_code32 *)(*param_4 + 0x10))(param_4,((undefined4 *)(gen_frame + 0x64)),0);
    F_0042c880(((undefined1 *)(gen_frame + 0x70)));
    F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc));
    return 1;
  }
  F_00c2c7a0(this,param_4,param_5);
  this_00 = *(undefined * PTR32 *)(param_5 + 100);
  *(int * PTR32 *)(param_5 + 0x68) = param_4;
  if (this_00 == (undefined *)0x0) goto LAB_00c2cf08;
  bVar1 = F_00e3e870(this_00);
  if (bVar1 == 0) goto LAB_00c2cf08;
  ((byte *)(gen_frame + 0x8))[4] = 2;
  ((byte *)(gen_frame + 0x8))[5] = 0;
  ((byte *)(gen_frame + 0x8))[6] = 0;
  ((byte *)(gen_frame + 0x8))[7] = 0;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)) = (*(undefined * PTR32 (*)[2])REFP(0x110f814));
  F_0042cbc0(((byte *)(gen_frame + 0x8)) + 8,param_1);
  if (*(int *)((int)this_00 + 0xc) == 0) {
    F_00c2c210(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x6c)),param_1);
    bVar1 = F_00e3edd0(this_00,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x6c)));
    if (bVar1 != 0) {
      F_0042c880(((undefined1 *)(gen_frame + 0x74)));
      goto LAB_00c2cf22;
    }
    F_0042c880(((undefined1 *)(gen_frame + 0x74)));
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x6c)) = (*(undefined * PTR32 (*)[2])REFP(0x110f688));
  }
  else {
LAB_00c2cf22: ;
    bVar1 = F_00e3f450(this_00,param_2,param_3,param_4);
    if (bVar1 != 0) {
      F_00c2bcc0(this,param_5);
      F_0042c880(((byte *)(gen_frame + 0x8)) + 8);
      F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc));
      return 1;
    }
  }
  F_0042c880(((byte *)(gen_frame + 0x8)) + 8);
LAB_00c2cf08: ;
  F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc));
  return 0;
}

/* ref: FUN_00c2cf70 */
uint F_00c2cf70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc2cf70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  int param_5 = (int)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  ulonglong uVar3;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xd0);
  (*(uint *)(gen_frame + 0xcc)) = uVar2;
  if (*(int *)((int)this + 0x298) != 0) {
    if (param_5 == 0) {
      F_00e3bd90(((undefined4 *)(gen_frame + 0x8)));
      (*(undefined4 *)(gen_frame + 0x10)) = 6;
      ((undefined4 *)(gen_frame + 0x8))[0] = 0x7d5;
      F_0042cc20(&(*(undefined4 *)(gen_frame + 0x70)),"TIMEOUT",REFG(undefined4, 0x108cc50));
      F_0042ccf0(((undefined1 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x70)));
      F_0042c880(&(*(undefined4 *)(gen_frame + 0x70)));
      (*(undefined2 *)(gen_frame + 0x68)) = 0x32c9;
      ((code *)*(gen_code32 *)(*param_4 + 0x10))(param_4,((undefined4 *)(gen_frame + 0x8)),0);
      uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x14)));
      uVar2 = CONCAT31((int3)(uVar3 >> 8),1);
      goto LAB_00c2d083;
    }
    uVar2 = F_00c2c7a0(this,param_4,param_5);
    this_00 = *(undefined * PTR32 *)(param_5 + 100);
    *(int * PTR32 *)(param_5 + 0x68) = param_4;
    if (this_00 != (undefined *)0x0) {
      bVar1 = F_00e3e870(this_00);
      uVar2 = CONCAT31(extraout_var,bVar1);
      if (bVar1 != 0) {
        (*(undefined1 *)(gen_frame + 0x78)) = (undefined1)param_1;
        (*(undefined4 *)(gen_frame + 0x70)) = param_2;
        (*(undefined4 *)(gen_frame + 0x74)) = param_3;
        (*(undefined1 *)(gen_frame + 0x79)) = 0;
        bVar1 = F_00e40d30(this_00,&(*(undefined4 *)(gen_frame + 0x70)),param_4);
        uVar2 = CONCAT31(extraout_var_00,bVar1);
        if (bVar1 != 0) {
          uVar2 = F_00c2bcc0(this,param_5);
          uVar2 = CONCAT31((int3)(uVar2 >> 8),1);
          goto LAB_00c2d083;
        }
      }
    }
  }
  uVar2 = uVar2 & 0xffffff00;
LAB_00c2d083: ;
  F_00c47745((*(uint *)(gen_frame + 0xcc)) ^ (uint)(uint)(gen_frame + 0xd0));
  return uVar2;
}

/* ref: FUN_00c2d0a0 */
byte F_00c2d0a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc2d0a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  int param_5 = (int)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  undefined * this_00;
  byte bVar1;
  
  (*(uint *)(gen_frame + 0xcc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xd0);
  if (*(int *)((int)this + 0x298) != 0) {
    if (param_5 == 0) {
      F_00e3bd90(((undefined4 *)(gen_frame + 0x8)));
      (*(undefined4 *)(gen_frame + 0x10)) = 6;
      ((undefined4 *)(gen_frame + 0x8))[0] = 0x7d5;
      F_0042cc20(&(*(undefined4 *)(gen_frame + 0x70)),"TIMEOUT",REFG(undefined4, 0x108cc50));
      F_0042ccf0(((undefined1 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x70)));
      F_0042c880(&(*(undefined4 *)(gen_frame + 0x70)));
      (*(undefined2 *)(gen_frame + 0x68)) = 0x32c9;
      ((code *)*(gen_code32 *)(*param_4 + 0x10))(param_4,((undefined4 *)(gen_frame + 0x8)),0);
      F_0042c880(((undefined1 *)(gen_frame + 0x14)));
      bVar1 = 1;
      goto LAB_00c2d1b3;
    }
    F_00c2c7a0(this,param_4,param_5);
    this_00 = *(undefined * PTR32 *)(param_5 + 100);
    *(int * PTR32 *)(param_5 + 0x68) = param_4;
    if (this_00 != (undefined *)0x0) {
      bVar1 = F_00e3e870(this_00);
      if (bVar1 != 0) {
        (*(undefined1 *)(gen_frame + 0x78)) = (undefined1)param_1;
        (*(undefined4 *)(gen_frame + 0x70)) = param_2;
        (*(undefined4 *)(gen_frame + 0x74)) = param_3;
        (*(undefined1 *)(gen_frame + 0x79)) = 1;
        bVar1 = F_00e40d30(this_00,&(*(undefined4 *)(gen_frame + 0x70)),param_4);
        if (bVar1 != 0) {
          F_00c2bcc0(this,param_5);
          bVar1 = 1;
          goto LAB_00c2d1b3;
        }
      }
    }
  }
  bVar1 = 0;
LAB_00c2d1b3: ;
  F_00c47745((*(uint *)(gen_frame + 0xcc)) ^ (uint)(uint)(gen_frame + 0xd0));
  return bVar1;
}

/* ref: FUN_00c2d1d0 */
byte F_00c2d1d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc2d1d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  int param_5 = (int)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x118)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x11c);
  if (*(int *)((int)this + 0x298) != 0) {
    if (param_5 == 0) {
      F_00e3bd90(((undefined4 *)(gen_frame + 0xb4)));
      (*(undefined4 *)(gen_frame + 0xbc)) = 6;
      ((undefined4 *)(gen_frame + 0xb4))[0] = 0x7d5;
      F_0042cc20(((undefined1 *)(gen_frame + 0x4)),"TIMEOUT",REFG(undefined4, 0x108cc50));
      F_0042ccf0(((undefined1 *)(gen_frame + 0xc0)),((undefined1 *)(gen_frame + 0x4)));
      F_0042c880(((undefined1 *)(gen_frame + 0x4)));
      (*(undefined2 *)(gen_frame + 0x114)) = 0x32c9;
      ((code *)*(gen_code32 *)(*param_4 + 0x10))(param_4,((undefined4 *)(gen_frame + 0xb4)),0);
      F_0042c880(((undefined1 *)(gen_frame + 0xc0)));
      F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c));
      return 1;
    }
    F_00c2c7a0(this,param_4,param_5);
    this_00 = *(undefined * PTR32 *)(param_5 + 100);
    *(int * PTR32 *)(param_5 + 0x68) = param_4;
    if (this_00 != (undefined *)0x0) {
      bVar1 = F_00e3e870(this_00);
      if (bVar1 != 0) {
        F_0042b630(((undefined1 *)(gen_frame + 0x70)));
        F_0042b630(((undefined1 *)(gen_frame + 0xc4)));
        ((undefined1 *)(gen_frame + 0x58))[0] = (undefined1)param_1;
        (*(undefined2 *)(gen_frame + 0x5a)) = 0;
        (*(undefined4 *)(gen_frame + 0x60)) = param_2;
        (*(undefined4 *)(gen_frame + 0x64)) = param_3;
        (*(undefined8 *)(gen_frame + 0x68)) = 0;
        F_0042aca0(((undefined1 *)(gen_frame + 0x70)));
        F_0042aca0(((undefined1 *)(gen_frame + 0xc4)));
        if (*(int *)((int)this + 0x29c) == 0) {
          uVar2 = F_00406b90(8,0,0);
          if (uVar2 == 0) {
            uVar2 = 0;
          }
          else {
            uVar2 = F_00c2bda0(uVar2,this);
          }
          *(uint *)((int)this + 0x29c) = uVar2;
        }
        bVar1 = F_00e3f950(this_00,((undefined1 *)(gen_frame + 0x58)),*(undefined4 *)((int)this + 0x29c));
        if (bVar1 != 0) {
          *(int * PTR32 *)((int)this + 0x304) = param_4;
          F_00427f00((undefined *)((int)this + 0x2e8));
          F_00c2bcc0(this,param_5);
          F_0042c880(((undefined1 *)(gen_frame + 0xc4)));
          F_0042c880(((undefined1 *)(gen_frame + 0x70)));
          F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c));
          return 1;
        }
        F_0042c880(((undefined1 *)(gen_frame + 0xc4)));
        F_0042c880(((undefined1 *)(gen_frame + 0x70)));
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c));
  return 0;
}

/* ref: FUN_00c2d3b0 */
byte F_00c2d3b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc2d3b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  int param_5 = (int)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x390];
  undefined * this_00;
  byte bVar1;
  
  (*(uint *)(gen_frame + 0x37c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x380);
  if (*(int *)((int)this + 0x298) != 0) {
    if (param_5 == 0) {
      F_00e3bd90(((undefined4 *)(gen_frame + 0x310)));
      (*(undefined4 *)(gen_frame + 0x318)) = 6;
      ((undefined4 *)(gen_frame + 0x310))[0] = 0x7d5;
      F_0042cc20(((undefined1 *)(gen_frame + 0x2b8)),"TIMEOUT",REFG(undefined4, 0x108cc50));
      F_0042ccf0(((undefined1 *)(gen_frame + 0x31c)),((undefined1 *)(gen_frame + 0x2b8)));
      F_0042c880(((undefined1 *)(gen_frame + 0x2b8)));
      (*(undefined2 *)(gen_frame + 0x370)) = 0x32c9;
      ((code *)*(gen_code32 *)(*param_4 + 0x10))(param_4,((undefined4 *)(gen_frame + 0x310)),0);
      F_0042c880(((undefined1 *)(gen_frame + 0x31c)));
      bVar1 = 1;
      goto LAB_00c2d54d;
    }
    F_00c2c7a0(this,param_4,param_5);
    this_00 = *(undefined * PTR32 *)(param_5 + 100);
    *(int * PTR32 *)(param_5 + 0x68) = param_4;
    if (this_00 != (undefined *)0x0) {
      bVar1 = F_00e3e870(this_00);
      if (bVar1 != 0) {
        F_00c2c710(&(*(undefined4 *)(gen_frame + 0x0)));
        (*(undefined8 *)(gen_frame + 0x8)) = 0;
        (*(undefined2 *)(gen_frame + 0x6)) = (undefined2)param_3;
        (*(undefined4 *)(gen_frame + 0x0)) = 1;
        (*(undefined1 *)(gen_frame + 0x4)) = (undefined1)param_1;
        (*(undefined8 *)(gen_frame + 0x10)) = 0;
        F_0042ccf0(((undefined1 *)(gen_frame + 0x18)),param_2);
        F_0042ccf0(((undefined1 *)(gen_frame + 0x6c)),(int)this + 0x1d8);
        F_00e3f250(this_00,&(*(undefined4 *)(gen_frame + 0x0)));
        bVar1 = F_00e3fab0(this_00,param_4);
        if (bVar1 != 0) {
          F_00c2bcc0(this,param_5);
          F_00c2bfb0(&(*(undefined4 *)(gen_frame + 0x0)));
          bVar1 = 1;
          goto LAB_00c2d54d;
        }
        F_00c2bfb0(&(*(undefined4 *)(gen_frame + 0x0)));
      }
    }
  }
  bVar1 = 0;
LAB_00c2d54d: ;
  F_00c47745((*(uint *)(gen_frame + 0x37c)) ^ (uint)(uint)(gen_frame + 0x380));
  return bVar1;
}

/* ref: FUN_00c2d570 */
byte F_00c2d570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc2d570u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int * param_5 = (int *)(uintptr_t)gen_a5;
  int param_6 = (int)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x390];
  undefined * this_00;
  byte bVar1;
  
  (*(uint *)(gen_frame + 0x37c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x380);
  if (*(int *)((int)this + 0x298) != 0) {
    if (param_6 == 0) {
      F_00e3bd90(((undefined4 *)(gen_frame + 0x2b8)));
      (*(undefined4 *)(gen_frame + 0x2c0)) = 6;
      ((undefined4 *)(gen_frame + 0x2b8))[0] = 0x7d5;
      F_0042cc20(((undefined1 *)(gen_frame + 0x320)),"TIMEOUT",REFG(undefined4, 0x108cc50));
      F_0042ccf0(((undefined1 *)(gen_frame + 0x2c4)),((undefined1 *)(gen_frame + 0x320)));
      F_0042c880(((undefined1 *)(gen_frame + 0x320)));
      (*(undefined2 *)(gen_frame + 0x318)) = 0x32c9;
      ((code *)*(gen_code32 *)(*param_5 + 0x10))(param_5,((undefined4 *)(gen_frame + 0x2b8)),0);
      F_0042c880(((undefined1 *)(gen_frame + 0x2c4)));
      bVar1 = 1;
      goto LAB_00c2d71b;
    }
    F_00c2c7a0(this,param_5,param_6);
    this_00 = *(undefined * PTR32 *)(param_6 + 100);
    *(int * PTR32 *)(param_6 + 0x68) = param_5;
    if (this_00 != (undefined *)0x0) {
      bVar1 = F_00e3e870(this_00);
      if (bVar1 != 0) {
        F_00c2c710(&(*(undefined4 *)(gen_frame + 0x0)));
        (*(undefined4 *)(gen_frame + 0x8)) = param_2;
        (*(undefined1 *)(gen_frame + 0x4)) = (undefined1)param_1;
        (*(undefined4 *)(gen_frame + 0x0)) = 2;
        (*(undefined4 *)(gen_frame + 0xc)) = param_3;
        (*(undefined8 *)(gen_frame + 0x10)) = 0;
        (*(undefined2 *)(gen_frame + 0x6)) = 0;
        F_0042cc20(((undefined1 *)(gen_frame + 0x320)),&REFG(undefined1, 0x107fc63),REFG(undefined4, 0x108cc50));
        F_0042ccf0(((undefined1 *)(gen_frame + 0x18)),((undefined1 *)(gen_frame + 0x320)));
        F_0042c880(((undefined1 *)(gen_frame + 0x320)));
        F_0090e260(((undefined1 *)(gen_frame + 0x1d8)),param_4);
        F_00e3f250(this_00,&(*(undefined4 *)(gen_frame + 0x0)));
        bVar1 = F_00e3fab0(this_00,param_5);
        if (bVar1 != 0) {
          F_00c2bcc0(this,param_6);
          F_00c2bfb0(&(*(undefined4 *)(gen_frame + 0x0)));
          bVar1 = 1;
          goto LAB_00c2d71b;
        }
        F_00c2bfb0(&(*(undefined4 *)(gen_frame + 0x0)));
      }
    }
  }
  bVar1 = 0;
LAB_00c2d71b: ;
  F_00c47745((*(uint *)(gen_frame + 0x37c)) ^ (uint)(uint)(gen_frame + 0x380));
  return bVar1;
}

/* ref: FUN_00c2d730 */
byte F_00c2d730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xc2d730u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int * param_6 = (int *)(uintptr_t)gen_a6;
  int param_7 = (int)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x390];
  undefined * this_00;
  byte bVar1;
  
  (*(uint *)(gen_frame + 0x37c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x380);
  if (*(int *)((int)this + 0x298) != 0) {
    if (param_7 == 0) {
      F_00e3bd90(((undefined4 *)(gen_frame + 0x310)));
      (*(undefined4 *)(gen_frame + 0x318)) = 6;
      ((undefined4 *)(gen_frame + 0x310))[0] = 0x7d5;
      F_0042cc20(((undefined1 *)(gen_frame + 0x2b8)),"TIMEOUT",REFG(undefined4, 0x108cc50));
      F_0042ccf0(((undefined1 *)(gen_frame + 0x31c)),((undefined1 *)(gen_frame + 0x2b8)));
      F_0042c880(((undefined1 *)(gen_frame + 0x2b8)));
      (*(undefined2 *)(gen_frame + 0x370)) = 0x32c9;
      ((code *)*(gen_code32 *)(*param_6 + 0x10))(param_6,((undefined4 *)(gen_frame + 0x310)),0);
      F_0042c880(((undefined1 *)(gen_frame + 0x31c)));
      bVar1 = 1;
      goto LAB_00c2d8c3;
    }
    F_00c2c7a0(this,param_6,param_7);
    this_00 = *(undefined * PTR32 *)(param_7 + 100);
    *(int * PTR32 *)(param_7 + 0x68) = param_6;
    if (this_00 != (undefined *)0x0) {
      bVar1 = F_00e3e870(this_00);
      if (bVar1 != 0) {
        F_00c2c710(&(*(undefined4 *)(gen_frame + 0x0)));
        (*(undefined4 *)(gen_frame + 0x8)) = param_2;
        (*(undefined1 *)(gen_frame + 0x4)) = (undefined1)param_1;
        (*(undefined4 *)(gen_frame + 0x0)) = 7;
        (*(undefined4 *)(gen_frame + 0xc)) = param_3;
        (*(undefined8 *)(gen_frame + 0x10)) = 0;
        (*(undefined2 *)(gen_frame + 0x6)) = 0;
        F_0042ccf0(((undefined1 *)(gen_frame + 0x18)),param_4);
        F_00c2b050(((undefined1 *)(gen_frame + 0xc0)),param_5);
        F_00e3f250(this_00,&(*(undefined4 *)(gen_frame + 0x0)));
        bVar1 = F_00e3fab0(this_00,param_6);
        if (bVar1 != 0) {
          F_00c2bcc0(this,param_7);
          F_00c2bfb0(&(*(undefined4 *)(gen_frame + 0x0)));
          bVar1 = 1;
          goto LAB_00c2d8c3;
        }
        F_00c2bfb0(&(*(undefined4 *)(gen_frame + 0x0)));
      }
    }
  }
  bVar1 = 0;
LAB_00c2d8c3: ;
  F_00c47745((*(uint *)(gen_frame + 0x37c)) ^ (uint)(uint)(gen_frame + 0x380));
  return bVar1;
}

/* ref: FUN_00c2d8e0 */
byte F_00c2d8e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc2d8e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int * param_5 = (int *)(uintptr_t)gen_a5;
  int param_6 = (int)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x390];
  undefined * this_00;
  byte bVar1;
  
  (*(uint *)(gen_frame + 0x37c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x380);
  if (*(int *)((int)this + 0x298) != 0) {
    if (param_6 == 0) {
      F_00e3bd90(((undefined4 *)(gen_frame + 0x310)));
      (*(undefined4 *)(gen_frame + 0x318)) = 6;
      ((undefined4 *)(gen_frame + 0x310))[0] = 0x7d5;
      F_0042cc20(((undefined1 *)(gen_frame + 0x2b8)),"TIMEOUT",REFG(undefined4, 0x108cc50));
      F_0042ccf0(((undefined1 *)(gen_frame + 0x31c)),((undefined1 *)(gen_frame + 0x2b8)));
      F_0042c880(((undefined1 *)(gen_frame + 0x2b8)));
      (*(undefined2 *)(gen_frame + 0x370)) = 0x32c9;
      ((code *)*(gen_code32 *)(*param_5 + 0x10))(param_5,((undefined4 *)(gen_frame + 0x310)),0);
      F_0042c880(((undefined1 *)(gen_frame + 0x31c)));
      bVar1 = 1;
      goto LAB_00c2da64;
    }
    F_00c2c7a0(this,param_5,param_6);
    this_00 = *(undefined * PTR32 *)(param_6 + 100);
    *(int * PTR32 *)(param_6 + 0x68) = param_5;
    if (this_00 != (undefined *)0x0) {
      bVar1 = F_00e3e870(this_00);
      if (bVar1 != 0) {
        F_00c2c710(&(*(undefined4 *)(gen_frame + 0x0)));
        (*(undefined4 *)(gen_frame + 0x8)) = param_2;
        (*(undefined1 *)(gen_frame + 0x4)) = (undefined1)param_1;
        (*(undefined4 *)(gen_frame + 0x0)) = 4;
        (*(undefined4 *)(gen_frame + 0xc)) = param_3;
        (*(undefined8 *)(gen_frame + 0x10)) = 0;
        (*(undefined2 *)(gen_frame + 0x6)) = 0;
        F_0042ccf0(((undefined1 *)(gen_frame + 0x18)),param_4);
        F_00e3f250(this_00,&(*(undefined4 *)(gen_frame + 0x0)));
        bVar1 = F_00e3fab0(this_00,param_5);
        if (bVar1 != 0) {
          F_00c2bcc0(this,param_6);
          F_00c2bfb0(&(*(undefined4 *)(gen_frame + 0x0)));
          bVar1 = 1;
          goto LAB_00c2da64;
        }
        F_00c2bfb0(&(*(undefined4 *)(gen_frame + 0x0)));
      }
    }
  }
  bVar1 = 0;
LAB_00c2da64: ;
  F_00c47745((*(uint *)(gen_frame + 0x37c)) ^ (uint)(uint)(gen_frame + 0x380));
  return bVar1;
}

/* ref: FUN_00c2da80 */
byte F_00c2da80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc2da80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int * param_5 = (int *)(uintptr_t)gen_a5;
  int param_6 = (int)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x390];
  undefined * this_00;
  byte bVar1;
  
  (*(uint *)(gen_frame + 0x37c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x380);
  if (*(int *)((int)this + 0x298) != 0) {
    if (param_6 == 0) {
      F_00e3bd90(((undefined4 *)(gen_frame + 0x310)));
      (*(undefined4 *)(gen_frame + 0x318)) = 6;
      ((undefined4 *)(gen_frame + 0x310))[0] = 0x7d5;
      F_0042cc20(((undefined1 *)(gen_frame + 0x2b8)),"TIMEOUT",REFG(undefined4, 0x108cc50));
      F_0042ccf0(((undefined1 *)(gen_frame + 0x31c)),((undefined1 *)(gen_frame + 0x2b8)));
      F_0042c880(((undefined1 *)(gen_frame + 0x2b8)));
      (*(undefined2 *)(gen_frame + 0x370)) = 0x32c9;
      ((code *)*(gen_code32 *)(*param_5 + 0x10))(param_5,((undefined4 *)(gen_frame + 0x310)),0);
      F_0042c880(((undefined1 *)(gen_frame + 0x31c)));
      bVar1 = 1;
      goto LAB_00c2dc04;
    }
    F_00c2c7a0(this,param_5,param_6);
    this_00 = *(undefined * PTR32 *)(param_6 + 100);
    *(int * PTR32 *)(param_6 + 0x68) = param_5;
    if (this_00 != (undefined *)0x0) {
      bVar1 = F_00e3e870(this_00);
      if (bVar1 != 0) {
        F_00c2c710(&(*(undefined4 *)(gen_frame + 0x0)));
        (*(undefined4 *)(gen_frame + 0x8)) = param_2;
        (*(undefined1 *)(gen_frame + 0x4)) = (undefined1)param_1;
        (*(undefined4 *)(gen_frame + 0x0)) = 3;
        (*(undefined4 *)(gen_frame + 0xc)) = param_3;
        (*(undefined8 *)(gen_frame + 0x10)) = 0;
        (*(undefined2 *)(gen_frame + 0x6)) = 0;
        F_0042ccf0(((undefined1 *)(gen_frame + 0x18)),param_4);
        F_00e3f250(this_00,&(*(undefined4 *)(gen_frame + 0x0)));
        bVar1 = F_00e3fab0(this_00,param_5);
        if (bVar1 != 0) {
          F_00c2bcc0(this,param_6);
          F_00c2bfb0(&(*(undefined4 *)(gen_frame + 0x0)));
          bVar1 = 1;
          goto LAB_00c2dc04;
        }
        F_00c2bfb0(&(*(undefined4 *)(gen_frame + 0x0)));
      }
    }
  }
  bVar1 = 0;
LAB_00c2dc04: ;
  F_00c47745((*(uint *)(gen_frame + 0x37c)) ^ (uint)(uint)(gen_frame + 0x380));
  return bVar1;
}

/* ref: FUN_00c2dc20 */
byte F_00c2dc20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xc2dc20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int * param_6 = (int *)(uintptr_t)gen_a6;
  int param_7 = (int)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x390];
  undefined * this_00;
  byte bVar1;
  
  (*(uint *)(gen_frame + 0x37c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x380);
  if (*(int *)((int)this + 0x298) != 0) {
    if (param_7 == 0) {
      F_00e3bd90(((undefined4 *)(gen_frame + 0x310)));
      (*(undefined4 *)(gen_frame + 0x318)) = 6;
      ((undefined4 *)(gen_frame + 0x310))[0] = 0x7d5;
      F_0042cc20(((undefined1 *)(gen_frame + 0x2b8)),"TIMEOUT",REFG(undefined4, 0x108cc50));
      F_0042ccf0(((undefined1 *)(gen_frame + 0x31c)),((undefined1 *)(gen_frame + 0x2b8)));
      F_0042c880(((undefined1 *)(gen_frame + 0x2b8)));
      (*(undefined2 *)(gen_frame + 0x370)) = 0x32c9;
      ((code *)*(gen_code32 *)(*param_6 + 0x10))(param_6,((undefined4 *)(gen_frame + 0x310)),0);
      F_0042c880(((undefined1 *)(gen_frame + 0x31c)));
      bVar1 = 1;
      goto LAB_00c2ddad;
    }
    F_00c2c7a0(this,param_6,param_7);
    this_00 = *(undefined * PTR32 *)(param_7 + 100);
    *(int * PTR32 *)(param_7 + 0x68) = param_6;
    if (this_00 != (undefined *)0x0) {
      bVar1 = F_00e3e870(this_00);
      if (bVar1 != 0) {
        F_00c2c710(&(*(undefined4 *)(gen_frame + 0x0)));
        (*(undefined1 *)(gen_frame + 0x5)) = (undefined1)param_4;
        (*(undefined4 *)(gen_frame + 0x8)) = param_2;
        (*(undefined1 *)(gen_frame + 0x4)) = (undefined1)param_1;
        (*(undefined2 *)(gen_frame + 0x6)) = 0;
        (*(undefined4 *)(gen_frame + 0x0)) = 6;
        (*(undefined4 *)(gen_frame + 0xc)) = param_3;
        (*(undefined8 *)(gen_frame + 0x10)) = 0;
        F_0042ccf0(((undefined1 *)(gen_frame + 0x18)),param_5);
        F_00e3f250(this_00,&(*(undefined4 *)(gen_frame + 0x0)));
        bVar1 = F_00e3fab0(this_00,param_6);
        if (bVar1 != 0) {
          F_00c2bcc0(this,param_7);
          F_00c2bfb0(&(*(undefined4 *)(gen_frame + 0x0)));
          bVar1 = 1;
          goto LAB_00c2ddad;
        }
        F_00c2bfb0(&(*(undefined4 *)(gen_frame + 0x0)));
      }
    }
  }
  bVar1 = 0;
LAB_00c2ddad: ;
  F_00c47745((*(uint *)(gen_frame + 0x37c)) ^ (uint)(uint)(gen_frame + 0x380));
  return bVar1;
}

/* ref: FUN_00c2de40 */
uint F_00c2de40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2de40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c2de50 */
byte F_00c2de50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2de50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00c2de80 */
uint F_00c2de80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2de80u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00c2deb0 */
uint F_00c2deb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2deb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c2dec0 */
uint F_00c2dec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2dec0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c2ded0 */
uint F_00c2ded0(unsigned int gen_a0)
{
  GEN_ENTER(0xc2ded0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00c2df20 */
byte F_00c2df20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2df20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00c2df40 */
uint F_00c2df40(unsigned int gen_a0)
{
  GEN_ENTER(0xc2df40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 8)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,*(int *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0xc) = 0;
  return uVar2;
}

/* ref: FUN_00c2df60 */
uint F_00c2df60(unsigned int gen_a0)
{
  GEN_ENTER(0xc2df60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 8)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,*(int *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0xc) = 0;
  return uVar2;
}

/* ref: FUN_00c2df80 */
unsigned int F_00c2df80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2df80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00c2dfc0 */
unsigned int F_00c2dfc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2dfc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return 0;
}

/* ref: FUN_00c2dfe0 */
uint F_00c2dfe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2dfe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  gen_size32 param_2 = (gen_size32)gen_a1;
  undefined * pvVar1;
  
  pvVar1 = (undefined *)0x0;
  if (param_2 != 0) {
    pvVar1 = F_00c48350(param_1,0,param_2);
  }
  return (uint)pvVar1;
}

/* ref: FUN_00c2e000 */
uint F_00c2e000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2e000u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c46e20(param_3,param_1,param_2 - param_1);
  return uVar1 + (param_2 - param_1);
}

/* ref: FUN_00c2e020 */
uint F_00c2e020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2e020u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  uVar2 = F_00c46e20(param_3,param_1,iVar1);
  return uVar2 + iVar1;
}

/* ref: FUN_00c2e050 */
unsigned int F_00c2e050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2e050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  double dVar1;
  int * piVar2;
  longlong lVar3;
  byte bVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  float10 fVar8;
  float10 fVar9;
  
  if (*(undefined * PTR32 *)((int)this + 0x28c) != (undefined *)0x0) {
    F_00c31370(*(undefined * PTR32 *)((int)this + 0x28c));
    F_01050b60(((undefined1 *)(gen_frame + 0x14)));
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f834));
    (*(int *)(gen_frame + 0x18)) = 0;
    (*(undefined8 *)(gen_frame + 0x1c)) = 0;
    bVar4 = F_00c31330(*(undefined * PTR32 *)((int)this + 0x28c),((undefined * PTR32 * PTR32 *)(gen_frame + 0xc)));
    while (bVar4 != 0) {
      piVar2 = *(int * PTR32 *)((int)this + 0x2a4);
      if (piVar2 != (int *)0x0) {
        if ((*(int *)(gen_frame + 0x18)) == 0) {
          uVar7 = 0;
          uVar5 = 0;
        }
        else {
          uVar7 = *(undefined4 *)((*(int *)(gen_frame + 0x18)) + 0x14);
          uVar5 = *(undefined4 *)((*(int *)(gen_frame + 0x18)) + 0x24);
        }
        ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2,uVar7,uVar5);
      }
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)(gen_frame + 0x18)) + 8) + 0x10))))(*(int * PTR32 *)((*(int *)(gen_frame + 0x18)) + 8),(*(int *)(gen_frame + 0x18)));
      (*(int *)(gen_frame + 0x18)) = 0;
      bVar4 = F_00c31330(*(undefined * PTR32 *)((int)this + 0x28c),((undefined * PTR32 * PTR32 *)(gen_frame + 0xc)));
    }
    if ((char)param_1 != '\0') {
      uVar6 = F_00c31550(*(undefined4 *)((int)this + 0x28c));
      fVar8 = (float10)(int)uVar6;
      if ((int)uVar6 < 0) {
        fVar8 = fVar8 + (float10)*(double *)&REFG(double, 0x10b8de8);
      }
      fVar9 = (float10)*(int *)((int)this + 0x380);
      if (*(int *)((int)this + 0x380) < 0) {
        fVar9 = fVar9 + (float10)*(double *)&REFG(double, 0x10b8de8);
      }
      dVar1 = ((double)GEN_TOD(((fVar8 * (float10)*(double *)&REFG(undefined, 0x10912a8)) / fVar9)));
      fVar8 = F_00c4ed10((uint)(ulonglong)gen_d2bits(dVar1),
                           (int)((ulonglong)gen_d2bits(dVar1) >> 0x20));
      (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x24)) + 4)) = ((undefined2)0x27f) | 0xc00;
      (*(longlong *)(gen_frame + 0x24)) = (longlong)TRUNC(fVar8);
      lVar3 = (*(longlong *)(gen_frame + 0x24));
      (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x24)) + 0)) = (undefined4)(longlong)TRUNC(fVar8);
      *(undefined4 *)((int)this + 0x360) = (undefined4)(*(longlong *)(gen_frame + 0x24));
      (*(longlong *)(gen_frame + 0x24)) = lVar3;
      uVar6 = F_00c31560(*(undefined4 *)((int)this + 0x28c));
      fVar8 = (float10)(int)uVar6;
      if ((int)uVar6 < 0) {
        fVar8 = fVar8 + (float10)*(double *)&REFG(double, 0x10b8de8);
      }
      fVar9 = (float10)*(int *)((int)this + 0x380);
      if (*(int *)((int)this + 0x380) < 0) {
        fVar9 = fVar9 + (float10)*(double *)&REFG(double, 0x10b8de8);
      }
      dVar1 = ((double)GEN_TOD(((fVar8 * (float10)*(double *)&REFG(undefined, 0x10912a8)) / fVar9)));
      fVar8 = F_00c4ed10((uint)(ulonglong)gen_d2bits(dVar1),
                           (int)((ulonglong)gen_d2bits(dVar1) >> 0x20));
      (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x24)) + 4)) = ((undefined2)0x27f) | 0xc00;
      (*(longlong *)(gen_frame + 0x24)) = (longlong)TRUNC(fVar8);
      lVar3 = (*(longlong *)(gen_frame + 0x24));
      (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x24)) + 0)) = (undefined4)(longlong)TRUNC(fVar8);
      *(undefined4 *)((int)this + 0x364) = (undefined4)(*(longlong *)(gen_frame + 0x24));
      (*(longlong *)(gen_frame + 0x24)) = lVar3;
      F_00c31570(*(undefined4 *)((int)this + 0x28c));
    }
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f834));
    F_01050b70();
  }
  return 0;
}

/* ref: FUN_00c2e1f0 */
unsigned int F_00c2e1f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2e1f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  
  if (*(undefined * PTR32 *)((int)this + 0x288) != (undefined *)0x0) {
    (*(undefined8 *)(gen_frame + 0x1c)) = 0;
    (*(undefined8 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined8 *)(gen_frame + 0x2c)) = 0;
    (*(undefined8 *)(gen_frame + 0x34)) = 0;
    F_00c30dd0(*(undefined * PTR32 *)((int)this + 0x288),&(*(undefined4 *)(gen_frame + 0xc)));
    *param_1 = (*(undefined4 *)(gen_frame + 0xc));
    param_1[1] = (*(undefined4 *)(gen_frame + 0x10));
    param_1[2] = (*(undefined4 *)(gen_frame + 0x14));
    param_1[3] = (*(undefined4 *)(gen_frame + 0x18));
    param_1[4] = (undefined4)(*(undefined8 *)(gen_frame + 0x1c));
    param_1[5] = (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x1c)) + 4));
    param_1[6] = (undefined4)(*(undefined8 *)(gen_frame + 0x24));
    param_1[7] = (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x24)) + 4));
    param_1[8] = (undefined4)(*(undefined8 *)(gen_frame + 0x2c));
    param_1[9] = (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x2c)) + 4));
    param_1[10] = (undefined4)(*(undefined8 *)(gen_frame + 0x34));
    param_1[0xb] = (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x34)) + 4));
  }
  return 0;
}

/* ref: FUN_00c2e290 */
byte F_00c2e290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc2e290u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  byte bVar1;
  
  bVar1 = F_00c2d3b0(this,0,param_1,param_2,param_3,param_4);
  return bVar1;
}

/* ref: FUN_00c2e2b0 */
byte F_00c2e2b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc2e2b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined1, 0x107fc63),REFG(undefined4, 0x108cc50));
  bVar1 = F_00c2d730(this,param_1,param_2,param_3,((undefined1 *)(gen_frame + 0x4)),param_4,param_5,param_6);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return bVar1;
}

/* ref: FUN_00c2e320 */
uint F_00c2e320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2e320u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00c2e330 */
uint F_00c2e330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2e330u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00c2e340 */
byte F_00c2e340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2e340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00c2e360 */
uint F_00c2e360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2e360u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00c2e370 */
uint F_00c2e370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2e370u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00c2e380 */
uint F_00c2e380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2e380u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  *param_2 = *in_ecx + param_3;
  return (uint)param_2;
}

/* ref: FUN_00c2e3a0 */
uint F_00c2e3a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2e3a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00c2e3c0 */
byte F_00c2e3c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2e3c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00c2e3f0 */
uint F_00c2e3f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2e3f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  gen_size32 param_2 = (gen_size32)gen_a1;
  undefined * pvVar1;
  
  pvVar1 = (undefined *)0x0;
  if (param_2 != 0) {
    pvVar1 = F_00c48350(param_1,0,param_2);
  }
  return (uint)pvVar1;
}

/* ref: FUN_00c2e410 */
unsigned int F_00c2e410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2e410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00c2e430 */
uint F_00c2e430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2e430u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c46e20(param_3,param_1,param_2 - param_1);
  return uVar1 + (param_2 - param_1);
}

/* ref: FUN_00c2e460 */
uint F_00c2e460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc2e460u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  uVar2 = F_00c46e20(param_3,param_1,iVar1);
  return uVar2 + iVar1;
}

/* ref: FUN_00c2e490 */
uint F_00c2e490(unsigned int gen_a0)
{
  GEN_ENTER(0xc2e490u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined * pvVar2;
  undefined4 * puVar3;
  uint uVar4;
  int * piVar5;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x298);
  uVar4 = 0;
  if (piVar1 != (int *)0x0) {
    piVar5 = (int *)*piVar1;
    if (piVar5 != (int *)piVar1[1]) {
      do {
        if ((*piVar5 != 0) && (pvVar2 = *(undefined * PTR32 *)(*piVar5 + 100), pvVar2 != (undefined *)0x0)) {
          F_00c31c30(pvVar2);
          puVar3 = *(undefined4 * PTR32 *)(*piVar5 + 100);
          if (puVar3 != (undefined4 *)0x0) {
            ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
          }
          *(undefined4 *)(*piVar5 + 100) = 0;
        }
        piVar5 = piVar5 + 1;
      } while (piVar5 != *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x298) + 4))));
    }
    uVar4 = F_00e3c600(*(undefined * PTR32 *)((int)this + 0x298));
    pvVar2 = *(undefined * PTR32 *)((int)this + 0x298);
    if (pvVar2 != (undefined *)0x0) {
      F_00e3c590(pvVar2);
      uVar4 = F_00406ad0(pvVar2);
    }
    *(undefined4 *)((int)this + 0x298) = 0;
  }
  return uVar4;
}

/* ref: FUN_00c2e520 */
uint F_00c2e520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc2e520u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  
  if (param_2 != param_3) {
    iVar1 = *(int *)((int)this + 4) - param_3;
    F_00c46e20(param_2,param_3,iVar1);
    *(int *)((int)this + 4) = iVar1 + param_2;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00c2e570 */
uint F_00c2e570(unsigned int gen_a0)
{
  GEN_ENTER(0xc2e570u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00c2e5a0 */
unsigned int F_00c2e5a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2e5a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((uint)(*(int *)((int)this + 8) - *(int *)this) < param_1) {
    uVar3 = 0;
    if ((param_1 != 0) && (uVar3 = F_004069f0(param_1), uVar3 == 0)) {
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
    }
    F_00c46e20(uVar3,*(int *)this,*(int *)((int)this + 4) - *(int *)this);
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00406ad0(iVar1);
    }
    *(uint *)this = uVar3;
    *(uint *)((int)this + 8) = uVar3 + param_1;
    *(uint *)((int)this + 4) = uVar3 + (iVar2 - iVar1);
  }
  return 0;
}

/* ref: FUN_00c2e640 */
unsigned int F_00c2e640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2e640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (0x3fffffff < param_1) {
                    
    F_00c4579a("vector<T> too long");
  }
  if ((uint)(*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2) < param_1) {
    uVar3 = 0;
    if (param_1 != 0) {
      uVar3 = F_004069f0(param_1 * 4);
      if (uVar3 == 0) {
        (*(undefined4 *)(gen_frame + 0x8)) = 0;
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
        F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
      }
    }
    F_00c46e20(uVar3,*(int *)this,(*(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2) * 4);
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00406ad0(iVar1);
    }
    *(uint *)this = uVar3;
    *(uint *)((int)this + 8) = uVar3 + param_1 * 4;
    *(uint *)((int)this + 4) = uVar3 + (iVar2 - iVar1 >> 2) * 4;
  }
  return 0;
}

/* ref: FUN_00c2e6f0 */
uint F_00c2e6f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc2e6f0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00c2e720 */
unsigned int F_00c2e720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2e720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)this;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)this;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      F_00c2e5a0(this,uVar2);
      return 0;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    F_00c2e5a0(this,uVar2);
  }
  return 0;
}

/* ref: FUN_00c2e780 */
unsigned int F_00c2e780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2e780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2;
  if (0x3fffffffU - param_1 < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (0x3fffffff - (uVar2 >> 1) < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      F_00c2e640(this,uVar2);
      return 0;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    F_00c2e640(this,uVar2);
  }
  return 0;
}

/* ref: FUN_00c2e7f0 */
uint F_00c2e7f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc2e7f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined * pvVar2;
  uint uVar3;
  
  *(undefined4 *)((int)this + 0x2a4) = 0;
  *(undefined4 *)((int)this + 0x2a8) = 0;
  *(undefined4 *)((int)this + 0x2ac) = 0;
  if (*(undefined * PTR32 *)((int)this + 0x290) != (undefined *)0x0) {
    F_00c31c30(*(undefined * PTR32 *)((int)this + 0x290));
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x290);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    }
    *(undefined4 *)((int)this + 0x290) = 0;
  }
  if (*(undefined * PTR32 *)((int)this + 0x288) != (undefined *)0x0) {
    *(undefined4 *)((int)this + 0x358) = 0;
    *(undefined4 *)((int)this + 0x35c) = 0;
    F_00c30870(*(undefined * PTR32 *)((int)this + 0x288));
    pvVar2 = *(undefined * PTR32 *)((int)this + 0x288);
    if (pvVar2 != (undefined *)0x0) {
      F_00c31190(pvVar2);
      F_00406ad0(pvVar2);
    }
    *(undefined4 *)((int)this + 0x288) = 0;
  }
  if (*(undefined * PTR32 *)((int)this + 0x28c) != (undefined *)0x0) {
    *(undefined4 *)((int)this + 0x360) = 0;
    *(undefined4 *)((int)this + 0x364) = 0;
    F_00c31310(*(undefined * PTR32 *)((int)this + 0x28c));
    pvVar2 = *(undefined * PTR32 *)((int)this + 0x28c);
    if (pvVar2 != (undefined *)0x0) {
      F_00c318c0(pvVar2);
      F_00406ad0(pvVar2);
    }
    *(undefined4 *)((int)this + 0x28c) = 0;
  }
  uVar3 = F_004cc540(this);
  return uVar3;
}

/* ref: FUN_00c2e8b0 */
uint F_00c2e8b0(unsigned int gen_a0)
{
  GEN_ENTER(0xc2e8b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  if (*(int *)((int)this + 0x60) != 0) {
    F_00406ad0(*(int *)((int)this + 0x60));
  }
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  uVar1 = F_0042c880(this);
  return (uint)uVar1;
}

/* ref: FUN_00c2e8e0 */
uint F_00c2e8e0(unsigned int gen_a0)
{
  GEN_ENTER(0xc2e8e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  if (*(int *)((int)this + 0x60) != 0) {
    F_00406ad0(*(int *)((int)this + 0x60));
  }
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  uVar1 = F_0042c880(this);
  return (uint)uVar1;
}

/* ref: Global::FinishLogout */
uint F_00c2e910(unsigned int gen_a0)
{
  GEN_ENTER(0xc2e910u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  int * piVar2;
  byte bVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  
  F_00c30870(*(undefined * PTR32 *)((int)this + 0x288));
  if (*(undefined * PTR32 *)((int)this + 0x28c) != (undefined *)0x0) {
    F_00c31310(*(undefined * PTR32 *)((int)this + 0x28c));
  }
  uVar1 = *(undefined4 *)((int)this + 0x2a4);
  piVar2 = *(int * PTR32 *)((int)this + 0x2ac);
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)((int)this + 0x2a8);
  F_00c2e7f0(this);
  bVar3 = F_00c2b160(this,uVar1);
  uVar4 = CONCAT31(extraout_var,bVar3);
  *(undefined4 *)((int)this + 0x2a8) = (*(undefined4 *)(gen_frame + 0x8));
  *(int * PTR32 *)((int)this + 0x2ac) = piVar2;
  if (piVar2 != (int *)0x0) {
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,&(*(undefined4 *)(gen_frame + 0x4)));
  }
  return uVar4;
}

/* ref: FUN_00c2e990 */
byte F_00c2e990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc2e990u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 * puVar4;
  __time64_t _Var5;
  ulonglong uVar6;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  if (param_4 == 0) {
    F_00e3bd90(((undefined4 *)(gen_frame + 0x54)));
    (*(undefined4 *)(gen_frame + 0x5c)) = 6;
    ((undefined4 *)(gen_frame + 0x54))[0] = 0x7d5;
    F_0042cc20(((undefined1 *)(gen_frame + 0x0)),"TIMEOUT",REFG(undefined4, 0x108cc50));
    F_0042ccf0(((undefined1 *)(gen_frame + 0x60)),((undefined1 *)(gen_frame + 0x0)));
    F_0042c880(((undefined1 *)(gen_frame + 0x0)));
    (*(undefined2 *)(gen_frame + 0xb4)) = 0x32c9;
    ((code *)*(gen_code32 *)(*param_3 + 0x10))(param_3,((undefined4 *)(gen_frame + 0x54)),0);
    F_0042c880(((undefined1 *)(gen_frame + 0x60)));
    F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
    return 1;
  }
  if ((**(char * PTR32 *)(param_4 + 8) != '\0') && (0 < *(int *)(param_4 + 4))) {
    uVar1 = *(undefined4 *)((int)this + 0x2a8);
    uVar2 = *(undefined4 *)((int)this + 0x2ac);
    uVar3 = *(undefined4 *)((int)this + 0x2a4);
    F_00c2e7f0(this);
    F_00c2b160(this,uVar3);
    *(undefined4 *)((int)this + 0x2a8) = uVar1;
    *(undefined4 *)((int)this + 0x2ac) = uVar2;
    if (*(undefined * PTR32 *)(param_4 + 100) != (undefined *)0x0) {
      F_00c31c30(*(undefined * PTR32 *)(param_4 + 100));
      puVar4 = *(undefined4 * PTR32 *)(param_4 + 100);
      if (puVar4 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar4)(puVar4,1);
      }
      *(undefined4 *)(param_4 + 100) = 0;
    }
    *(undefined1 *)(param_4 + 0x70) = 1;
    *(undefined4 *)(param_4 + 0x94) = param_2;
    *(undefined4 *)(param_4 + 0x90) = param_1;
    *(int * PTR32 *)(param_4 + 0x68) = param_3;
    _Var5 = F_00c4b7c2((__time64_t *)0x0);
    *(int *)(param_4 + 0x78) = (int)_Var5;
    uVar6 = F_00427d90();
    *(ulonglong *)(param_4 + 0x80) = uVar6;
    uVar6 = F_00427e30();
    *(ulonglong *)(param_4 + 0x88) = uVar6;
    *(undefined4 *)((int)this + 0x304) = 0;
    F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
    return 1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc) ^ (uint)(uint)(gen_frame + 0xbc));
  return 0;
}

/* ref: FUN_00c2eb30 */
uint F_00c2eb30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2eb30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  gen_size32 _Size;
  
  iVar2 = *(int *)((int)this + 4);
  uVar3 = *(uint *)this;
  if (param_1 < iVar2 - uVar3) {
    iVar1 = uVar3 + param_1;
    if (iVar1 != iVar2) {
      uVar3 = F_00c46e20(iVar1,iVar2,0);
      *(int *)((int)this + 4) = iVar1;
    }
  }
  else if (iVar2 - uVar3 < param_1) {
    F_00c2e720(this,(uVar3 - iVar2) + param_1);
    _Size = (*(int *)this - (int)*(undefined * PTR32 *)((int)this + 4)) + param_1;
    if (_Size != 0) {
      F_00c48350(*(undefined * PTR32 *)((int)this + 4),0,_Size);
    }
    *(uint *)((int)this + 4) = *(int *)this + param_1;
    return *(int *)this + param_1;
  }
  return uVar3;
}

/* ref: FUN_00c2eba0 */
unsigned int F_00c2eba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2eba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00c2e780(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) =
           *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar2) >> 2) * 4)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
      return 0;
    }
  }
  else {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00c2e780(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return 0;
}

/* ref: FUN_00c2ec50 */
uint F_00c2ec50(unsigned int gen_a0)
{
  GEN_ENTER(0xc2ec50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_004cc540(this);
  uVar1 = F_00429760(*(undefined4 *)this,8,0x66);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00c2ec70 */
uint F_00c2ec70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2ec70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  __time64_t _Var3;
  
  *(undefined4 *)this = 0;
  puVar1 = (undefined4 *)F_004296a0(8,0,0x66);
  *(undefined4 * PTR32 *)this = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  **(undefined4 * PTR32 *)this = this;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = *param_1;
  F_0042cbc0((undefined *)((int)this + 0x1c),param_1 + 1);
  *(undefined4 *)((int)this + 0x70) = param_1[0x16];
  F_0042cbc0((undefined *)((int)this + 0x74),param_1 + 0x17);
  *(undefined4 *)((int)this + 200) = param_1[0x2c];
  *(undefined4 *)((int)this + 0xcc) = param_1[0x2d];
  *(undefined4 *)((int)this + 0xd0) = param_1[0x2e];
  *(undefined4 *)((int)this + 0xd4) = param_1[0x2f];
  F_0042cbc0((undefined *)((int)this + 0xd8),param_1 + 0x30);
  F_0042cbc0((undefined *)((int)this + 300),param_1 + 0x45);
  *(undefined4 *)((int)this + 0x180) = param_1[0x5a];
  F_0042cbc0((undefined *)((int)this + 0x184),param_1 + 0x5b);
  F_0042cbc0((undefined *)((int)this + 0x1d8),param_1 + 0x70);
  F_0042cbc0((undefined *)((int)this + 0x22c),param_1 + 0x85);
  *(undefined1 *)((int)this + 0x280) = *(undefined1 *)(param_1 + 0x9b);
  *(undefined4 *)((int)this + 0x284) = param_1[0x9a];
  *(undefined4 *)((int)this + 0x288) = 0;
  *(undefined4 *)((int)this + 0x28c) = 0;
  *(undefined4 *)((int)this + 0x290) = 0;
  *(undefined4 *)((int)this + 0x294) = 0;
  *(undefined4 *)((int)this + 0x298) = 0;
  *(undefined4 *)((int)this + 0x29c) = 0;
  *(undefined2 *)((int)this + 0x2a0) = 0;
  *(undefined4 *)((int)this + 0x2a4) = 0;
  *(undefined4 *)((int)this + 0x2a8) = 0;
  *(undefined4 *)((int)this + 0x2ac) = 0;
  *(undefined4 *)((int)this + 0x2b0) = 0;
  *(undefined4 *)((int)this + 0x2b4) = 0;
  *(undefined1 *)((int)this + 0x2b8) = 0;
  F_00a1af40((undefined *)((int)this + 0x2c0));
  *(undefined4 *)((int)this + 0x2d8) = 0;
  *(undefined4 *)((int)this + 0x2e4) = 0x1e;
  F_00a1af40((undefined *)((int)this + 0x2e8));
  *(undefined4 *)((int)this + 0x300) = 0x1e;
  *(undefined4 *)((int)this + 0x304) = 0;
  *(undefined4 *)((int)this + 0x308) = 0;
  _Var3 = F_00c4b7c2((__time64_t *)0x0);
  *(int *)((int)this + 0x30c) = (int)_Var3;
  *(undefined4 *)((int)this + 0x310) = 0;
  *(undefined4 *)((int)this + 0x314) = 0;
  *(undefined4 *)((int)this + 0x318) = 0;
  *(undefined4 *)((int)this + 0x31c) = 0;
  F_00a1af40((undefined *)((int)this + 800));
  *(undefined1 *)((int)this + 0x338) = 0;
  F_00a1af40((undefined *)((int)this + 0x340));
  *(undefined4 *)((int)this + 0x358) = 0;
  *(undefined4 *)((int)this + 0x35c) = 0;
  *(undefined4 *)((int)this + 0x360) = 0;
  *(undefined4 *)((int)this + 0x364) = 0;
  F_00a1af40((undefined *)((int)this + 0x368));
  *(undefined4 *)((int)this + 0x380) = 3000;
  *(undefined4 *)((int)this + 900) = 0;
  F_00a1af40((undefined *)((int)this + 0x388));
  F_00a1af40((undefined *)((int)this + 0x3a0));
  *(undefined4 *)((int)this + 0x3b8) = REFG(float, 0x10916ec);
  *(undefined1 *)((int)this + 0x3bc) = 0;
  *(undefined4 *)((int)this + 0x3c4) = param_1[0x9c];
  *(undefined4 *)((int)this + 0x3c8) = param_1[0x9d];
  *(undefined4 *)((int)this + 0x3cc) = param_1[0x9e];
  *(undefined4 *)((int)this + 0x3d0) = param_1[0x9f];
  F_00a1af40((undefined *)((int)this + 0x3d8));
  uVar2 = F_00ba7c10();
  if ((int)uVar2 < 0) {
    *(undefined1 *)((int)this + 0x2a1) = 1;
  }
  return (uint)this;
}

/* ref: FUN_00c2ef00 */
uint F_00c2ef00(unsigned int gen_a0)
{
  GEN_ENTER(0xc2ef00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  ulonglong uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x29c);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x29c) = 0;
  }
  F_00c2e490(this);
  F_00c2e7f0(this);
  F_00bacd70();
  F_0042c880((undefined *)((int)this + 0x22c));
  F_0042c880((undefined *)((int)this + 0x1d8));
  F_0042c880((undefined *)((int)this + 0x184));
  F_0042c880((undefined *)((int)this + 300));
  F_0042c880((undefined *)((int)this + 0xd8));
  F_0042c880((undefined *)((int)this + 0x74));
  F_0042c880((undefined *)((int)this + 0x1c));
  F_004cc540(this);
  uVar2 = F_00429760(*(undefined4 *)this,8,0x66);
  *(undefined4 *)this = 0;
  return (uint)uVar2;
}

/* ref: FUN_00c2efa0 */
uint F_00c2efa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc2efa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x150];
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined * pvVar6;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  ulonglong uVar7;
  
  (*(uint *)(gen_frame + 0x148)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x14c);
  *(undefined1 *)((int)this + 0x2a0) = 1;
  uVar4 = param_1;
  if (0 < param_2) {
    F_0042cbc0(((undefined1 *)(gen_frame + 0x8)),(int)this + 0x184);
    F_01046b00(((undefined1 *)(gen_frame + 0x5c)));
    uVar1 = REFG(undefined4, 0x108cc50);
    uVar4 = F_0042a990(param_1);
    F_0042cc20(((undefined1 *)(gen_frame + 0xd4)),uVar4,uVar1);
    F_0042ccf0(((undefined1 *)(gen_frame + 0x5c)),((undefined1 *)(gen_frame + 0xd4)));
    F_0042c880(((undefined1 *)(gen_frame + 0xd4)));
    (*(undefined2 *)(gen_frame + 0xb0)) = (short)param_2;
    if (**(char * PTR32 *)((int)this + 300) != '\0') {
      F_0042cc20(((undefined1 *)(gen_frame + 0xd4)),(*(undefined * PTR32 (*)[1])REFP(0x110f854)),REFG(undefined4, 0x108cc50));
      uVar4 = F_0042bba0((undefined *)((int)this + 300),((undefined1 *)(gen_frame + 0xd4)));
      F_0042c880(((undefined1 *)(gen_frame + 0xd4)));
      if (uVar4 == 0) {
        (*(undefined4 *)(gen_frame + 0xb4)) = 0;
      }
      else {
        F_0042cc20(((undefined1 *)(gen_frame + 0xd4)),&REFG(undefined, 0x110f84c),REFG(undefined4, 0x108cc50));
        uVar4 = F_0042bba0((undefined *)((int)this + 300),((undefined1 *)(gen_frame + 0xd4)));
        F_0042c880(((undefined1 *)(gen_frame + 0xd4)));
        if (uVar4 == 0) {
          (*(undefined4 *)(gen_frame + 0xb4)) = 2;
        }
        else {
          F_0042cc20(((undefined1 *)(gen_frame + 0xd4)),"RUDP2",REFG(undefined4, 0x108cc50));
          uVar4 = F_0042bba0((undefined *)((int)this + 300),((undefined1 *)(gen_frame + 0xd4)));
          F_0042c880(((undefined1 *)(gen_frame + 0xd4)));
          if (uVar4 == 0) {
            (*(undefined4 *)(gen_frame + 0xb4)) = 3;
          }
        }
      }
    }
    if (param_3 != 0) {
      F_00c472af(((undefined1 *)(gen_frame + 0x128)),0x20,&REFG(undefined, 0x110f840),param_3);
      F_0042cc20(((undefined1 *)(gen_frame + 0xd4)),((undefined1 *)(gen_frame + 0x128)),REFG(undefined4, 0x108cc50));
      F_0042ccf0(((undefined1 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0xd4)));
      F_0042c880(((undefined1 *)(gen_frame + 0xd4)));
    }
    uVar4 = F_0042a970(((undefined1 *)(gen_frame + 0x8)));
    F_00c2eb30(((int *)(gen_frame + 0xbc)),uVar4 + 1);
    iVar2 = ((int *)(gen_frame + 0xbc))[0];
    uVar4 = F_0042a970(((undefined1 *)(gen_frame + 0x8)));
    iVar5 = uVar4 + 1;
    uVar4 = F_0042a990(((undefined1 *)(gen_frame + 0x8)));
    F_00c46aa0(iVar2,uVar4,iVar5);
    (*(undefined2 *)(gen_frame + 0xba)) = 0x14d;
    (*(undefined4 *)(gen_frame + 0xcc)) = *(undefined4 *)((int)this + 0x3c4);
    (*(undefined4 *)(gen_frame + 0xd0)) = *(undefined4 *)((int)this + 0x3c8);
    if (*(int *)((int)this + 0x288) == 0) {
      pvVar6 = (undefined *)F_00406b90(0x7c,0,0);
      if (pvVar6 == (undefined *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = F_00c31240(pvVar6,((undefined1 *)(gen_frame + 0x5c)));
      }
      *(uint *)((int)this + 0x288) = uVar4;
    }
    if (((int *)(gen_frame + 0xbc))[0] != 0) {
      F_00406ad0(((int *)(gen_frame + 0xbc))[0]);
    }
    ((int *)(gen_frame + 0xbc))[0] = 0;
    ((int *)(gen_frame + 0xbc))[1] = 0;
    ((int *)(gen_frame + 0xbc))[2] = 0;
    F_0042c880(((undefined1 *)(gen_frame + 0x5c)));
    uVar7 = F_0042c880(((undefined1 *)(gen_frame + 0x8)));
    uVar4 = (uint)uVar7;
  }
  if (*(undefined * PTR32 *)((int)this + 0x288) == (undefined *)0x0) {
LAB_00c2f23a: ;
    if ((0 < param_2) && (*(char *)((int)this + 0x280) != '\0')) {
      F_0042cbc0(((undefined1 *)(gen_frame + 0x8)),(int)this + 0x184);
      F_00e35070(((undefined1 *)(gen_frame + 0x5c)));
      uVar1 = REFG(undefined4, 0x108cc50);
      uVar4 = F_0042a990(param_1);
      F_0042cc20(((undefined1 *)(gen_frame + 0xd4)),uVar4,uVar1);
      F_0042ccf0(((undefined1 *)(gen_frame + 0x5c)),((undefined1 *)(gen_frame + 0xd4)));
      F_0042c880(((undefined1 *)(gen_frame + 0xd4)));
      (*(undefined2 *)(gen_frame + 0xb0)) = (short)param_2;
      if (**(char * PTR32 *)((int)this + 300) != '\0') {
        F_0042cc20(((undefined1 *)(gen_frame + 0xd4)),(*(undefined * PTR32 (*)[1])REFP(0x110f854)),REFG(undefined4, 0x108cc50));
        uVar4 = F_0042bba0((undefined *)((int)this + 300),((undefined1 *)(gen_frame + 0xd4)));
        F_0042c880(((undefined1 *)(gen_frame + 0xd4)));
        if (uVar4 == 0) {
          (*(undefined4 *)(gen_frame + 0xb4)) = 0;
        }
        else {
          F_0042cc20(((undefined1 *)(gen_frame + 0xd4)),&REFG(undefined, 0x110f84c),REFG(undefined4, 0x108cc50));
          uVar4 = F_0042bba0((undefined *)((int)this + 300),((undefined1 *)(gen_frame + 0xd4)));
          F_0042c880(((undefined1 *)(gen_frame + 0xd4)));
          if (uVar4 == 0) {
            (*(undefined4 *)(gen_frame + 0xb4)) = 2;
          }
          else {
            F_0042cc20(((undefined1 *)(gen_frame + 0xd4)),"RUDP2",REFG(undefined4, 0x108cc50));
            uVar4 = F_0042bba0((undefined *)((int)this + 300),((undefined1 *)(gen_frame + 0xd4)));
            F_0042c880(((undefined1 *)(gen_frame + 0xd4)));
            if (uVar4 == 0) {
              (*(undefined4 *)(gen_frame + 0xb4)) = 3;
            }
          }
        }
      }
      if (param_3 != 0) {
        F_00c472af(((undefined1 *)(gen_frame + 0x128)),0x20,&REFG(undefined, 0x110f840),param_3);
        F_0042cc20(((undefined1 *)(gen_frame + 0xd4)),((undefined1 *)(gen_frame + 0x128)),REFG(undefined4, 0x108cc50));
        F_0042ccf0(((undefined1 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0xd4)));
        F_0042c880(((undefined1 *)(gen_frame + 0xd4)));
      }
      uVar4 = F_0042a970(((undefined1 *)(gen_frame + 0x8)));
      F_00c2eb30(((int *)(gen_frame + 0xbc)),uVar4 + 1);
      iVar2 = ((int *)(gen_frame + 0xbc))[0];
      uVar4 = F_0042a970(((undefined1 *)(gen_frame + 0x8)));
      iVar5 = uVar4 + 1;
      uVar4 = F_0042a990(((undefined1 *)(gen_frame + 0x8)));
      F_00c46aa0(iVar2,uVar4,iVar5);
      (*(undefined2 *)(gen_frame + 0xba)) = 0x14d;
      (*(undefined4 *)(gen_frame + 0xcc)) = *(undefined4 *)((int)this + 0x3cc);
      (*(undefined4 *)(gen_frame + 0xd0)) = *(undefined4 *)((int)this + 0x3d0);
      if (*(int *)((int)this + 0x28c) == 0) {
        pvVar6 = (undefined *)F_00406b90(0x7c,0,0);
        if (pvVar6 == (undefined *)0x0) {
          uVar4 = 0;
        }
        else {
          uVar4 = F_00c31970(pvVar6,((undefined1 *)(gen_frame + 0x5c)));
        }
        *(uint *)((int)this + 0x28c) = uVar4;
      }
      if (((int *)(gen_frame + 0xbc))[0] != 0) {
        F_00406ad0(((int *)(gen_frame + 0xbc))[0]);
      }
      ((int *)(gen_frame + 0xbc))[0] = 0;
      ((int *)(gen_frame + 0xbc))[1] = 0;
      ((int *)(gen_frame + 0xbc))[2] = 0;
      F_0042c880(((undefined1 *)(gen_frame + 0x5c)));
      uVar7 = F_0042c880(((undefined1 *)(gen_frame + 0x8)));
      uVar4 = (uint)uVar7;
    }
    if (*(undefined * PTR32 *)((int)this + 0x28c) == (undefined *)0x0) goto LAB_00c2f49b;
    bVar3 = F_00c312d0(*(undefined * PTR32 *)((int)this + 0x28c));
    uVar4 = CONCAT31(extraout_var_00,bVar3);
    if (bVar3 != 0) goto LAB_00c2f49b;
  }
  else {
    bVar3 = F_00c30830(*(undefined * PTR32 *)((int)this + 0x288));
    uVar4 = CONCAT31(extraout_var,bVar3);
    if (bVar3 != 0) goto LAB_00c2f23a;
  }
  uVar4 = F_00c2e7f0(this);
LAB_00c2f49b: ;
  F_00c47745((*(uint *)(gen_frame + 0x148)) ^ (uint)(uint)(gen_frame + 0x14c));
  return uVar4;
}

/* ref: FUN_00c2f4b0 */
uint F_00c2f4b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2f4b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (*(int *)((int)this + 0x298) == 0) {
    pvVar1 = (undefined *)F_00406b90(0x28,0,0);
    if (pvVar1 == (undefined *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = F_00e3c560(pvVar1,*(undefined4 *)((int)this + 0xd0));
    }
    *(uint *)((int)this + 0x298) = uVar2;
    pvVar1 = (undefined *)F_00406b90(0x98,0,0);
    if (pvVar1 == (undefined *)0x0) {
      pvVar1 = (undefined *)0x0;
    }
    else {
      pvVar1 = (undefined *)F_00e3bcb0(pvVar1);
    }
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar1;
    *(undefined4 *)((int)pvVar1 + 4) = *(undefined4 *)((int)this + 0x18);
    F_0042ccf0((undefined *)((int)pvVar1 + 8),(int)this + 0x1c);
    uVar2 = F_00e3bd60(*(undefined4 *)((int)this + 0x298));
    *(uint *)((int)pvVar1 + 0x5c) = uVar2;
    F_00c2eba0(*(undefined * PTR32 *)((int)this + 0x298),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
    *(undefined4 *)((int)this + 0x2dc) = 0;
    pvVar1 = (undefined *)F_00406b90(0x98,0,0);
    if (pvVar1 == (undefined *)0x0) {
      pvVar1 = (undefined *)0x0;
    }
    else {
      pvVar1 = (undefined *)F_00e3bcb0(pvVar1);
    }
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar1;
    *(undefined4 *)((int)pvVar1 + 4) = *(undefined4 *)((int)this + 0x70);
    F_0042ccf0((undefined *)((int)pvVar1 + 8),(int)this + 0x74);
    uVar2 = F_00e3bd60(*(undefined4 *)((int)this + 0x298));
    *(uint *)((int)pvVar1 + 0x5c) = uVar2;
    F_00c2eba0(*(undefined * PTR32 *)((int)this + 0x298),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
    *(undefined4 *)((int)this + 0x2e0) = 0;
  }
  puVar3 = (undefined4 *)F_00e3c380(*(undefined * PTR32 *)((int)this + 0x298));
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = param_1;
    return (uint)puVar3;
  }
  puVar3 = (undefined4 *)F_00e3c4e0(*(undefined * PTR32 *)((int)this + 0x298));
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = param_1;
  }
  return (uint)puVar3;
}

/* ref: FUN_00c2f5f0 */
undefined * F_00c2f5f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc2f5f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  __time64_t _Var3;
  
  *(undefined4 *)this = 0;
  puVar1 = (undefined4 *)F_004296a0(8,0,0x66);
  *(undefined4 * PTR32 *)this = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  **(undefined4 * PTR32 *)this = this;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0xd6d2;
  F_0042cc20((undefined *)((int)this + 0x1c),"xiv-0017",REFG(undefined4, 0x108cc50));
  *(undefined4 *)((int)this + 0x70) = 0xd6d2;
  F_0042cc20((undefined *)((int)this + 0x74),"xiv-0017",REFG(undefined4, 0x108cc50));
  *(undefined4 *)((int)this + 200) = 0x1e;
  *(undefined4 *)((int)this + 0xcc) = 5;
  *(undefined4 *)((int)this + 0xd0) = 1;
  *(undefined4 *)((int)this + 0xd4) = 0;
  F_0042cc20((undefined *)((int)this + 0xd8),"xiv-0017",REFG(undefined4, 0x108cc50));
  F_0042cc20((undefined *)((int)this + 300),(*(undefined * PTR32 (*)[1])REFP(0x110f854)),REFG(undefined4, 0x108cc50));
  *(undefined4 *)((int)this + 0x180) = 0;
  F_0042cc20((undefined *)((int)this + 0x184),"10005",REFG(undefined4, 0x108cc50));
  F_0042cc20((undefined *)((int)this + 0x1d8),"dev_test",REFG(undefined4, 0x108cc50));
  F_0042cc20((undefined *)((int)this + 0x22c),&REFG(undefined1, 0x107fc63),REFG(undefined4, 0x108cc50));
  *(undefined1 *)((int)this + 0x280) = 1;
  *(undefined4 *)((int)this + 0x284) = 0;
  *(undefined4 *)((int)this + 0x288) = 0;
  *(undefined4 *)((int)this + 0x28c) = 0;
  *(undefined4 *)((int)this + 0x290) = 0;
  *(undefined4 *)((int)this + 0x294) = 0;
  *(undefined4 *)((int)this + 0x298) = 0;
  *(undefined4 *)((int)this + 0x29c) = 0;
  *(undefined2 *)((int)this + 0x2a0) = 0;
  *(undefined4 *)((int)this + 0x2a4) = 0;
  *(undefined4 *)((int)this + 0x2a8) = 0;
  *(undefined4 *)((int)this + 0x2ac) = 0;
  *(undefined4 *)((int)this + 0x2b0) = 0;
  *(undefined4 *)((int)this + 0x2b4) = 0;
  *(undefined1 *)((int)this + 0x2b8) = 0;
  F_00a1af40((undefined *)((int)this + 0x2c0));
  *(undefined4 *)((int)this + 0x2d8) = 0;
  *(undefined4 *)((int)this + 0x2e4) = 0x1e;
  F_00a1af40((undefined *)((int)this + 0x2e8));
  *(undefined4 *)((int)this + 0x300) = 0x1e;
  *(undefined4 *)((int)this + 0x304) = 0;
  *(undefined4 *)((int)this + 0x308) = 0;
  _Var3 = F_00c4b7c2((__time64_t *)0x0);
  *(int *)((int)this + 0x30c) = (int)_Var3;
  *(undefined4 *)((int)this + 0x310) = 0;
  *(undefined4 *)((int)this + 0x314) = 0;
  *(undefined4 *)((int)this + 0x318) = 0;
  *(undefined4 *)((int)this + 0x31c) = 0;
  F_00a1af40((undefined *)((int)this + 800));
  *(undefined1 *)((int)this + 0x338) = 0;
  F_00a1af40((undefined *)((int)this + 0x340));
  *(undefined4 *)((int)this + 0x358) = 0;
  *(undefined4 *)((int)this + 0x35c) = 0;
  *(undefined4 *)((int)this + 0x360) = 0;
  *(undefined4 *)((int)this + 0x364) = 0;
  F_00a1af40((undefined *)((int)this + 0x368));
  *(undefined4 *)((int)this + 0x380) = 3000;
  *(undefined4 *)((int)this + 900) = 0;
  F_00a1af40((undefined *)((int)this + 0x388));
  F_00a1af40((undefined *)((int)this + 0x3a0));
  *(undefined4 *)((int)this + 0x3b8) = REFG(float, 0x10916ec);
  *(undefined1 *)((int)this + 0x3bc) = 0;
  *(undefined4 *)((int)this + 0x3c4) = 0x2d;
  *(undefined4 *)((int)this + 0x3c8) = 0x14;
  *(undefined4 *)((int)this + 0x3cc) = 600;
  *(undefined4 *)((int)this + 0x3d0) = 0x14;
  F_00a1af40((undefined *)((int)this + 0x3d8));
  uVar2 = F_00ba7c10();
  if ((int)uVar2 < 0) {
    *(undefined1 *)((int)this + 0x2a1) = 1;
  }
  return this;
}

/* ref: Global::ZoneClientUpdate */
uint F_00c2fb20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc2fb20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc60];
  float fVar1;
  double dVar2;
  int * piVar3;
  uint uVar4;
  longlong lVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  float10 fVar11;
  float10 fVar12;
  __time64_t _Var13;
  ulonglong uVar14;
  
  uVar7 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc50);
  (*(uint *)(gen_frame + 0xc4c)) = uVar7;
  if (*(undefined * PTR32 *)((int)this + 0x288) == (undefined *)0x0) goto LAB_00c302ef;
  F_00c308f0(*(undefined * PTR32 *)((int)this + 0x288));
  F_01050b60(((undefined1 *)(gen_frame + 0x8)));
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f82c));
  (*(float *)(gen_frame + 0xc)) = 0.0;
  (*(undefined8 *)(gen_frame + 0x10)) = 0;
  bVar6 = F_00c30890(*(undefined * PTR32 *)((int)this + 0x288),((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
  while (bVar6 != 0) {
    _Var13 = F_00c4b7c2((__time64_t *)0x0);
    *(int *)((int)this + 0x388) = (int)_Var13;
    uVar14 = F_00427d90();
    *(ulonglong *)((int)this + 0x390) = uVar14;
    uVar14 = F_00427e30();
    *(ulonglong *)((int)this + 0x398) = uVar14;
    (*(float *)(gen_frame + 0x1c)) = (*(float *)(gen_frame + 0xc));
    if ((*(float *)(gen_frame + 0xc)) == 0.0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)((int)gen_fl2bits((*(float *)(gen_frame + 0xc))) + 0x24);
    }
    iVar8 = *(int *)(iVar8 + 8);
    if (*(char *)((int)this + 0x338) == '\0') {
      if (*(uint *)((int)this + 900) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(uint *)((int)this + 900) >> 1;
      }
      *(uint *)((int)this + 0x30c) = uVar7 / 1000 + iVar8;
      *(uint *)((int)this + 0x310) = uVar7 % 1000;
      *(undefined4 *)((int)this + 0x308) = 0;
      _Var13 = F_00c4b7c2((__time64_t *)0x0);
      *(int *)((int)this + 800) = (int)_Var13;
      uVar14 = F_00427d90();
      *(ulonglong *)((int)this + 0x328) = uVar14;
      uVar14 = F_00427e30();
      *(ulonglong *)((int)this + 0x330) = uVar14;
      *(undefined1 *)((int)this + 0x338) = 1;
      _Var13 = F_00c4b7c2((__time64_t *)0x0);
      *(int *)((int)this + 0x3d8) = (int)_Var13;
      uVar14 = F_00427d90();
      *(ulonglong *)((int)this + 0x3e0) = uVar14;
      uVar14 = F_00427e30();
      *(ulonglong *)((int)this + 1000) = uVar14;
    }
    if (*(uint *)((int)this + 900) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(uint *)((int)this + 900) >> 1;
    }
    *(uint *)((int)this + 0x308) =
         ((iVar8 - *(int *)((int)this + 0x30c)) * 1000 - *(int *)((int)this + 0x310)) + uVar7;
    if ((*(float *)(gen_frame + 0x1c)) == 0.0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(uint *)((int)gen_fl2bits((*(float *)(gen_frame + 0x1c))) + 0x14);
    }
    if ((uVar7 & 0x5ff80000) == 0x5ff80000) {
      uVar7 = 0x5ff80002 - ((uVar7 & 1) != 0);
    }
    piVar3 = *(int * PTR32 *)((int)this + 0x2a4);
    if (piVar3 != (int *)0x0) {
      if ((*(float *)(gen_frame + 0xc)) == 0.0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined4 *)((int)gen_fl2bits((*(float *)(gen_frame + 0xc))) + 0x24);
      }
      ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,uVar7,uVar9);
    }
    if ((*(float *)(gen_frame + 0xc)) == 0.0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)((int)gen_fl2bits((*(float *)(gen_frame + 0xc))) + 0x24);
    }
    if (*(short *)(iVar8 + 2) == 0x65) {
      uVar14 = F_00427d90();
      uVar7 = (uint)uVar14;
      if ((*(float *)(gen_frame + 0xc)) == 0.0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)((int)gen_fl2bits((*(float *)(gen_frame + 0xc))) + 0x24);
      }
      uVar4 = *(uint *)(iVar8 + 0x10);
      if (uVar4 < uVar7) {
        iVar8 = uVar7 - uVar4;
      }
      else {
        iVar8 = (uVar7 - uVar4) + -1;
      }
      *(int *)((int)this + 900) = iVar8;
      if ((*(float *)(gen_frame + 0xc)) == 0.0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)((int)gen_fl2bits((*(float *)(gen_frame + 0xc))) + 0x24);
      }
      if (99 < *(uint *)(iVar8 + 0x14)) {
        if ((*(float *)(gen_frame + 0xc)) == 0.0) {
          iVar8 = 0;
        }
        else {
          iVar8 = *(int *)((int)gen_fl2bits((*(float *)(gen_frame + 0xc))) + 0x24);
        }
        F_00c30920(*(undefined4 *)((int)this + 0x288),(uint)*(ushort *)(iVar8 + 0x14));
      }
    }
    else if (*(short *)(iVar8 + 2) == 0x19a) {
      piVar3 = *(int * PTR32 *)((int)this + 0x2a8);
      if (piVar3 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
      }
      (*(undefined4 *)(gen_frame + 0x28)) = 0x69;
      (*(undefined4 *)(gen_frame + 0x2c)) = 0x18;
      (*(undefined4 *)(gen_frame + 0x40)) = 0;
      (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x44)) + 0)) = *(undefined4 *)((int)this + 0x3c0);
      (*(undefined8 *)(gen_frame + 0x44)) = CONCAT44((*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x44)) + 4)),*(undefined4 *)((int)this + 0x3c0));
      F_00c308b0(*(undefined * PTR32 *)((int)this + 0x288),&(*(undefined4 *)(gen_frame + 0x28)),0,0);
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)gen_fl2bits((*(float *)(gen_frame + 0xc))) + 8) + 0x10))))
              (*(int * PTR32 *)((int)gen_fl2bits((*(float *)(gen_frame + 0xc))) + 8),(undefined4)gen_fl2bits((*(float *)(gen_frame + 0xc))));
    (*(float *)(gen_frame + 0xc)) = 0.0;
    bVar6 = F_00c30890(*(undefined * PTR32 *)((int)this + 0x288),((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
  }
  uVar14 = F_00427d90();
  iVar10 = (uint)uVar14 - *(uint *)((int)this + 0x3e0);
  (*(float *)(gen_frame + 0x1c)) = gen_bits2f(((int)(uVar14 >> 0x20) - *(int *)((int)this + 0x3e4)) -
                         (uint)((uint)uVar14 < *(uint *)((int)this + 0x3e0)));
  _Var13 = F_00c4b7c2((__time64_t *)0x0);
  *(int *)((int)this + 0x3d8) = (int)_Var13;
  uVar14 = F_00427d90();
  *(ulonglong *)((int)this + 0x3e0) = uVar14;
  uVar14 = F_00427e30();
  *(ulonglong *)((int)this + 1000) = uVar14;
  uVar14 = F_00427e30();
  iVar8 = (uint)uVar14 - *(uint *)((int)this + 0x398);
  uVar7 = ((int)(uVar14 >> 0x20) - *(int *)((int)this + 0x39c)) -
          (uint)((uint)uVar14 < *(uint *)((int)this + 0x398));
  (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 0)) = iVar8;
  (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)) = uVar7 & 0x7fffffff;
  (*(ulonglong *)(gen_frame + 0x20)) = CONCAT44(uVar7,iVar8) & 0x7fffffffffffffff;
  fVar11 = (float10)(*(ulonglong *)(gen_frame + 0x20));
  (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)) = uVar7 & 0x80000000;
  (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 0)) = 0;
  (*(ulonglong *)(gen_frame + 0x20)) = (ulonglong)(uVar7 & 0x80000000) << 0x20;
  if ((float10)*(double *)&REFG(undefined, 0x110f888) <= -(float10)(longlong)(*(ulonglong *)(gen_frame + 0x20)) + fVar11) {
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 0)) = iVar10;
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)) = (uint)gen_fl2bits((*(float *)(gen_frame + 0x1c))) & 0x7fffffff;
    (*(ulonglong *)(gen_frame + 0x20)) = CONCAT44((uint)gen_fl2bits((*(float *)(gen_frame + 0x1c))),iVar10) & 0x7fffffffffffffff;
    fVar11 = (float10)(*(ulonglong *)(gen_frame + 0x20));
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)) = (uint)gen_fl2bits((*(float *)(gen_frame + 0x1c))) & 0x80000000;
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 0)) = 0;
    (*(ulonglong *)(gen_frame + 0x20)) = (ulonglong)((uint)gen_fl2bits((*(float *)(gen_frame + 0x1c))) & 0x80000000) << 0x20;
    fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x3b8) -
                   (-(float10)(longlong)(*(ulonglong *)(gen_frame + 0x20)) + fVar11) / (float10)*(double *)&REFG(undefined, 0x1094560))));
    (*(float *)(gen_frame + 0x1c)) = fVar1;
    *(float *)((int)this + 0x3b8) = fVar1;
    uVar9 = REFG(float, 0x110f878);
    if ((double)fVar1 < *(double *)&REFG(undefined, 0x110f880)) {
LAB_00c2ff99: ;
      *(undefined4 *)((int)this + 0x3b8) = uVar9;
    }
  }
  else {
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 0)) = iVar10;
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)) = (uint)gen_fl2bits((*(float *)(gen_frame + 0x1c))) & 0x7fffffff;
    (*(ulonglong *)(gen_frame + 0x20)) = CONCAT44((uint)gen_fl2bits((*(float *)(gen_frame + 0x1c))),iVar10) & 0x7fffffffffffffff;
    fVar11 = (float10)(*(ulonglong *)(gen_frame + 0x20));
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)) = (uint)gen_fl2bits((*(float *)(gen_frame + 0x1c))) & 0x80000000;
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 0)) = 0;
    (*(ulonglong *)(gen_frame + 0x20)) = (ulonglong)((uint)gen_fl2bits((*(float *)(gen_frame + 0x1c))) & 0x80000000) << 0x20;
    fVar1 = ((float)GEN_TOF(((-(float10)(longlong)(*(ulonglong *)(gen_frame + 0x20)) + fVar11) / (float10)*(double *)&REFG(undefined, 0x1094560) +
                   (float10)*(float *)((int)this + 0x3b8))));
    (*(float *)(gen_frame + 0x1c)) = fVar1;
    *(float *)((int)this + 0x3b8) = fVar1;
    uVar9 = REFG(float, 0x10916ec);
    if (*(double *)&REFG(undefined, 0x1088118) < (double)fVar1) goto LAB_00c2ff99;
  }
  uVar7 = F_00c30900(*(undefined4 *)((int)this + 0x288));
  if ((int)uVar7 < 4) {
    uVar14 = F_00427d90();
    uVar7 = (uint)uVar14 - *(uint *)((int)this + 0x348);
    iVar8 = ((int)(uVar14 >> 0x20) - *(int *)((int)this + 0x34c)) -
            (uint)((uint)uVar14 < *(uint *)((int)this + 0x348));
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)) = iVar8;
    (*(ulonglong *)(gen_frame + 0x20)) = CONCAT44(iVar8,(int)(*(ulonglong *)(gen_frame + 0x20)));
    if ((iVar8 != 0) || (9999 < uVar7)) {
      (*(undefined4 *)(gen_frame + 0x28)) = 0x65;
      (*(undefined4 *)(gen_frame + 0x2c)) = 0x28;
      uVar14 = F_00427d90();
      (*(undefined4 *)(gen_frame + 0x54)) = 0;
      (*(undefined8 *)(gen_frame + 0x44)) = 0;
      (*(undefined4 *)(gen_frame + 0x40)) = (int)uVar14;
      (*(undefined8 *)(gen_frame + 0x4c)) = 0;
      if (*(undefined * PTR32 *)((int)this + 0x288) != (undefined *)0x0) {
        F_00c308b0(*(undefined * PTR32 *)((int)this + 0x288),&(*(undefined4 *)(gen_frame + 0x28)),0x65,0);
      }
      _Var13 = F_00c4b7c2((__time64_t *)0x0);
      *(int *)((int)this + 0x340) = (int)_Var13;
      uVar14 = F_00427d90();
      *(ulonglong *)((int)this + 0x348) = uVar14;
      uVar14 = F_00427e30();
      uVar7 = (uint)uVar14;
      *(ulonglong *)((int)this + 0x350) = uVar14;
    }
    if ((char)param_1 != '\0') {
      uVar7 = F_00c30be0(*(undefined4 *)((int)this + 0x288));
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)) = uVar7;
      (*(ulonglong *)(gen_frame + 0x20)) = CONCAT44(uVar7,(int)(*(ulonglong *)(gen_frame + 0x20)));
      fVar11 = (float10)(int)uVar7;
      if ((int)uVar7 < 0) {
        fVar11 = fVar11 + (float10)*(double *)&REFG(double, 0x10b8de8);
      }
      fVar12 = (float10)*(int *)((int)this + 0x380);
      if (*(int *)((int)this + 0x380) < 0) {
        fVar12 = fVar12 + (float10)*(double *)&REFG(double, 0x10b8de8);
      }
      dVar2 = ((double)GEN_TOD(((fVar11 * (float10)*(double *)&REFG(undefined, 0x10912a8)) / fVar12)));
      fVar11 = F_00c4ed10((uint)(ulonglong)gen_d2bits(dVar2),
                            (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
      (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x1c)) + 2)) = ((undefined2)0x27f);
      (*(float *)(gen_frame + 0x1c)) = gen_bits2f(CONCAT22(((undefined2)0x27f),(*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x1c)) + 0))));
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)) = ((undefined2)0x27f) | 0xc00;
      (*(ulonglong *)(gen_frame + 0x20)) = (longlong)TRUNC(fVar11);
      lVar5 = (*(ulonglong *)(gen_frame + 0x20));
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 0)) = (int)(longlong)TRUNC(fVar11);
      *(int *)((int)this + 0x358) = (int)(*(ulonglong *)(gen_frame + 0x20));
      (*(ulonglong *)(gen_frame + 0x20)) = lVar5;
      uVar7 = F_00c30bf0(*(undefined4 *)((int)this + 0x288));
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)) = uVar7;
      (*(ulonglong *)(gen_frame + 0x20)) = CONCAT44(uVar7,(int)(*(ulonglong *)(gen_frame + 0x20)));
      fVar11 = (float10)(int)uVar7;
      if ((int)uVar7 < 0) {
        fVar11 = fVar11 + (float10)*(double *)&REFG(double, 0x10b8de8);
      }
      fVar12 = (float10)*(int *)((int)this + 0x380);
      if (*(int *)((int)this + 0x380) < 0) {
        fVar12 = fVar12 + (float10)*(double *)&REFG(double, 0x10b8de8);
      }
      dVar2 = ((double)GEN_TOD(((fVar11 * (float10)*(double *)&REFG(undefined, 0x10912a8)) / fVar12)));
      fVar11 = F_00c4ed10((uint)(ulonglong)gen_d2bits(dVar2),
                            (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
      (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x1c)) + 2)) = ((undefined2)0x27f);
      (*(float *)(gen_frame + 0x1c)) = gen_bits2f(CONCAT22(((undefined2)0x27f),(*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x1c)) + 0))));
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)) = ((undefined2)0x27f) | 0xc00;
      (*(ulonglong *)(gen_frame + 0x20)) = (longlong)TRUNC(fVar11);
      lVar5 = (*(ulonglong *)(gen_frame + 0x20));
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 0)) = (int)(longlong)TRUNC(fVar11);
      *(int *)((int)this + 0x35c) = (int)(*(ulonglong *)(gen_frame + 0x20));
      (*(ulonglong *)(gen_frame + 0x20)) = lVar5;
      uVar7 = F_00c30c00(*(undefined4 *)((int)this + 0x288));
    }
  }
  else {
    uVar7 = F_00c30900(*(undefined4 *)((int)this + 0x288));
    (*(float *)(gen_frame + 0x1c)) = gen_bits2f(uVar7);
    F_004cd120(this,&(*(float *)(gen_frame + 0x1c)));
    uVar7 = F_00c31260(*(undefined * PTR32 *)((int)this + 0x288));
    (*(float *)(gen_frame + 0x1c)) = gen_bits2f(uVar7);
    F_004cd120(this,&(*(float *)(gen_frame + 0x1c)));
    _Var13 = F_00c4b7c2((__time64_t *)0x0);
    (*(float *)(gen_frame + 0x1c)) = gen_bits2f((int)_Var13);
    F_004cd120(this,&(*(float *)(gen_frame + 0x1c)));
    if (*(int *)((int)this + 0x2ac) != 0) {
      uVar7 = F_00c30900(*(undefined4 *)((int)this + 0x288));
      if (uVar7 == 4) {
        (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 0)) = 1;
        (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)) = 0x2775;
        (*(ulonglong *)(gen_frame + 0x20)) = 0x277500000001;
      }
      else {
        (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 0)) = 2;
        (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)) = 90000;
        (*(ulonglong *)(gen_frame + 0x20)) = 0x15f9000000002;
      }
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2ac) + 4))))(*(int * PTR32 *)((int)this + 0x2ac),&(*(ulonglong *)(gen_frame + 0x20)));
    }
    F_00c30870(*(undefined * PTR32 *)((int)this + 0x288));
    if (*(undefined * PTR32 *)((int)this + 0x28c) != (undefined *)0x0) {
      F_00c31310(*(undefined * PTR32 *)((int)this + 0x28c));
    }
    uVar9 = *(undefined4 *)((int)this + 0x2a4);
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)) = *(undefined4 *)((int)this + 0x2ac);
    (*(ulonglong *)(gen_frame + 0x20)) = CONCAT44(*(undefined4 *)((int)this + 0x2ac),(int)(*(ulonglong *)(gen_frame + 0x20)));
    *(undefined4 *)((int)this + 0x3b8) = 0;
    (*(float *)(gen_frame + 0x1c)) = *(float *)((int)this + 0x2a8);
    F_00c2e7f0(this);
    F_00c2b160(this,uVar9);
    *(float *)((int)this + 0x2a8) = (*(float *)(gen_frame + 0x1c));
    *(uint *)((int)this + 0x2ac) = (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4));
    uVar7 = (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4));
  }
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f82c));
  F_01050b70();
LAB_00c302ef: ;
  F_00c47745((*(uint *)(gen_frame + 0xc4c)) ^ (uint)(uint)(gen_frame + 0xc50));
  return uVar7;
}

/* ref: FUN_00c30310 */
uint F_00c30310(unsigned int gen_a0)
{
  GEN_ENTER(0xc30310u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int * piVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  uint uVar5;
  undefined * pvVar6;
  __time64_t _Var7;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  piVar1 = *(int * PTR32 *)((int)this + 0x304);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,0);
  }
  if (*(undefined * PTR32 *)((int)this + 0x298) == (undefined *)0x0) {
    *(undefined4 *)((int)this + 0x294) = 0;
  }
  else {
    F_00e3c330(*(undefined * PTR32 *)((int)this + 0x298));
    uVar5 = F_00e3c350(*(undefined * PTR32 *)((int)this + 0x298));
    *(uint *)((int)this + 0x294) = uVar5;
    F_00e3c4d0(*(undefined * PTR32 *)((int)this + 0x298));
  }
  iVar2 = *(int *)((int)this + 0x294);
  if (((iVar2 != 0) && (*(char *)(iVar2 + 0x70) != '\0')) &&
     (_Var7 = F_00c4b7c2((__time64_t *)0x0), 0x1e < (uint)((int)_Var7 - *(int *)(iVar2 + 0x78)))) {
    F_00e3ee60(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x294) + 0x68))),*(int *)((int)this + 0x294));
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x294) + 0x70))) = 0;
  }
  switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 0x2b0))) {
  case 0: ;
    iVar2 = *(int *)((int)this + 0x294);
    if ((iVar2 != 0) && (*(char *)(iVar2 + 0x70) != '\0')) {
      if (*(int *)(iVar2 + 100) == 0) {
        pvVar6 = (undefined *)F_00406b90(0x5c0,0,0);
        if (pvVar6 == (undefined *)0x0) {
          uVar5 = 0;
        }
        else {
          iVar2 = *(int *)((int)this + 0x294);
          uVar5 = F_00c31a70(pvVar6,iVar2 + 8,*(undefined4 *)(iVar2 + 4),(int)this + 0x184,iVar2);
        }
        *((uint *)GEN_TOP((*(int *)((int)this + 0x294) + 100))) = uVar5;
      }
      iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0x294) + 100)));
      if ((iVar2 != 0) && (bVar4 = F_00e3e7d0(iVar2), bVar4 == 0)) {
        F_00e37350(((undefined1 *)(gen_frame + 0x10)));
        F_0042ccf0(((undefined1 *)(gen_frame + 0x10)),*(int *)((int)this + 0x294) + 8);
        iVar2 = *(int *)((int)this + 0x294);
        (*(undefined2 *)(gen_frame + 0x64)) = *(undefined2 *)(iVar2 + 4);
        F_00e3efd0(*(undefined * PTR32 *)(iVar2 + 100),((undefined1 *)(gen_frame + 0x10)),*(undefined4 *)(iVar2 + 0x90),
                     *(undefined4 *)(iVar2 + 0x94),*(undefined4 *)(iVar2 + 0x68));
        *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x294) + 0x70))) = 0;
        F_0042c880(((undefined1 *)(gen_frame + 0x10)));
      }
    }
    if (*(int *)((int)this + 0x290) != 0) {
      *(undefined4 *)((int)this + 0x2b0) = 1;
    }
    break;
  case 1: ;
    F_00c2f870(this);
    if (*(char *)((int)this + 0x2a0) != '\0') {
      piVar1 = *(int * PTR32 *)((int)this + 0x304);
      *(undefined4 *)((int)this + 0x2b0) = 3;
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,0);
        *(undefined4 *)((int)this + 0x304) = 0;
        F_00c2e490(this);
      }
    }
    break;
  case 2: ;
  case 3: ;
    *(undefined4 *)((int)this + 0x2b0) = 4;
  }
  if ((*(int *)((int)this + 0x294) != 0) &&
     (pvVar6 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x294) + 100))), pvVar6 != (undefined *)0x0)) {
    F_00c338f0(pvVar6);
  }
  uVar5 = *(uint *)((int)this + 0x2b0);
  if (((0 < (int)uVar5) && (*(char *)((int)this + 0x2a0) != '\0')) && (uVar5 != 5)) {
    _Var7 = F_00c4b7c2((__time64_t *)0x0);
    uVar5 = (int)_Var7 - *(int *)((int)this + 0x2e8);
    if ((*(uint *)((int)this + 0x300) < uVar5) && (*(int *)((int)this + 0x2ac) != 0)) {
      if (*(undefined * PTR32 *)((int)this + 0x288) != (undefined *)0x0) {
        F_00c30870(*(undefined * PTR32 *)((int)this + 0x288));
      }
      if (*(undefined * PTR32 *)((int)this + 0x28c) != (undefined *)0x0) {
        F_00c31310(*(undefined * PTR32 *)((int)this + 0x28c));
      }
      uVar3 = *(undefined4 *)((int)this + 0x2a4);
      piVar1 = *(int * PTR32 *)((int)this + 0x2ac);
      (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)((int)this + 0x2a8);
      F_00c2e7f0(this);
      F_00c2b160(this,uVar3);
      *(undefined4 *)((int)this + 0x2a8) = (*(undefined4 *)(gen_frame + 0xc));
      *(int * PTR32 *)((int)this + 0x2ac) = piVar1;
      (*(undefined4 *)(gen_frame + 0x4)) = 1;
      (*(undefined4 *)(gen_frame + 0x8)) = 0x2776;
      uVar5 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,&(*(undefined4 *)(gen_frame + 0x4)));
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return uVar5;
}

/* ref: FUN_00c305d0 */
uint F_00c305d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc305d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c2efa0(this,param_1,(uint)*(ushort *)(param_1 + 0x54),
                       *(undefined4 *)(param_1 + 0x58),param_1 + 0x5c,param_1 + 0xb0);
  return uVar1;
}

/* ref: Application::Network::MyGameLoginCallback::vf23 */
unsigned int F_00c30600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc30600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (*(undefined * PTR32 *)(this + 4) != (undefined *)0x0) {
    F_00c2efa0(*(undefined * PTR32 *)(this + 4),param_1,(uint)*(ushort *)(param_1 + 0x54),
                 *(undefined4 *)(param_1 + 0x58),param_1 + 0x5c,param_1 + 0xb0);
  }
  return 0;
}

/* ref: FUN_00c30630 */
unsigned int F_00c30630(unsigned int gen_a0)
{
  GEN_ENTER(0xc30630u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  __time64_t _Var4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  uVar2 = (*(uint *)(gen_frame + 0x4)) >> 8;
  (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) & 0xffffff00;
  uVar3 = F_00427d90();
  if (((int)(uVar3 >> 0x20) - *(int *)((int)this + 0x374) !=
       (uint)((uint)uVar3 < *(uint *)((int)this + 0x370))) ||
     (*(uint *)((int)this + 0x380) <= (uint)uVar3 - *(uint *)((int)this + 0x370))) {
    (*(uint *)(gen_frame + 0x4)) = CONCAT31((int3)uVar2,1);
    _Var4 = F_00c4b7c2((__time64_t *)0x0);
    *(int *)((int)this + 0x368) = (int)_Var4;
    uVar3 = F_00427d90();
    *(ulonglong *)((int)this + 0x370) = uVar3;
    uVar3 = F_00427e30();
    *(ulonglong *)((int)this + 0x378) = uVar3;
  }
  if (*(int *)((int)this + 0x2b0) == 4) {
    F_00c2fb20(this,(*(uint *)(gen_frame + 0x4)));
    if (((*(undefined * PTR32 *)((int)this + 0x28c) == (undefined *)0x0) ||
        (uVar2 = F_00c31990(*(undefined * PTR32 *)((int)this + 0x28c)), uVar2 != 0)) &&
       (this_00 = *(undefined * PTR32 *)((int)this + 0x288), this_00 != (undefined *)0x0)) {
      uVar2 = F_00c2aac0(((undefined1 *)(gen_frame + 0x8)),0,0,0,0,0,0,0,0,0,0,0,"client",&REFG(undefined1, 0x107fc63));
      bVar1 = F_00c308b0(this_00,uVar2,0,0);
      if (bVar1 != 0) {
        *(undefined4 *)((int)this + 0x2b0) = 5;
        F_00c2e490(this);
      }
    }
  }
  else if (*(int *)((int)this + 0x2b0) == 5) {
    F_00c2fb20(this,(*(uint *)(gen_frame + 0x4)));
    goto LAB_00c30764;
  }
  F_00c30310(this);
LAB_00c30764: ;
  F_00bada50();
  uVar3 = F_00427d90();
  if (((int)(uVar3 >> 0x20) - *(int *)((int)this + 0x3ac) !=
       (uint)((uint)uVar3 < *(uint *)((int)this + 0x3a8))) ||
     (99 < (uint)uVar3 - *(uint *)((int)this + 0x3a8))) {
    _Var4 = F_00c4b7c2((__time64_t *)0x0);
    *(int *)((int)this + 0x3a0) = (int)_Var4;
    uVar3 = F_00427d90();
    *(ulonglong *)((int)this + 0x3a8) = uVar3;
    uVar3 = F_00427e30();
    *(ulonglong *)((int)this + 0x3b0) = uVar3;
    F_01050d70((undefined *)((int)this + 0x308));
    F_00c2e050(this,(*(uint *)(gen_frame + 0x4)));
  }
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return 0;
}

/* ref: FUN_00c307f0 */
uint F_00c307f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc307f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: FUN_00c30830 */
byte F_00c30830(unsigned int gen_a0)
{
  GEN_ENTER(0xc30830u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00406b90(200,0,0);
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_01047a50(this_00,this);
    *(uint *)((int)this + 0x78) = uVar1;
    return uVar1 != 0;
  }
  *(undefined4 *)((int)this + 0x78) = 0;
  return 0;
}

/* ref: FUN_00c30870 */
unsigned int F_00c30870(unsigned int gen_a0)
{
  GEN_ENTER(0xc30870u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x78);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x78) = 0;
  }
  return 0;
}

/* ref: FUN_00c30890 */
byte F_00c30890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc30890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    bVar1 = F_01047bd0(*(undefined * PTR32 *)((int)this + 0x78),param_1);
    return bVar1;
  }
  return 0;
}

/* ref: FUN_00c308b0 */
byte F_00c308b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc308b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    (*(undefined4 *)(gen_frame + 0x4)) = param_2;
    (*(undefined4 *)(gen_frame + 0x8)) = param_3;
    bVar1 = F_01047820(*(undefined * PTR32 *)((int)this + 0x78),param_1,&(*(undefined4 *)(gen_frame + 0x4)));
    return bVar1;
  }
  return 0;
}

/* ref: FUN_00c308f0 */
unsigned int F_00c308f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc308f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    F_01047b20(*(undefined * PTR32 *)((int)this + 0x78));
    return 0;
  }
  return 0;
}

/* ref: FUN_00c30900 */
uint F_00c30900(unsigned int gen_a0)
{
  GEN_ENTER(0xc30900u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x78) == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x78) + 0xc0)));
}

/* ref: FUN_00c30920 */
unsigned int F_00c30920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc30920u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (*(int *)(in_ecx + 0x78) != 0) {
    F_010477e0(*(int *)(in_ecx + 0x78),param_2);
    return 0;
  }
  return 0;
}

/* ref: FUN_00c30990 */
unsigned int F_00c30990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc30990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if (this != param_1) {
    *(undefined4 *)this = *param_1;
    *(undefined4 *)((int)this + 4) = param_1[1];
    *(undefined4 *)((int)this + 8) = param_1[2];
    *(undefined4 *)((int)this + 0xc) = param_1[3];
    *(undefined4 *)((int)this + 0x10) = param_1[4];
    *(undefined4 *)((int)this + 0x14) = param_1[5];
    *(undefined4 *)((int)this + 0x18) = param_1[6];
    *(undefined4 *)((int)this + 0x1c) = param_1[7];
    *(undefined4 *)((int)this + 0x28) = param_1[10];
    *(undefined4 *)((int)this + 0x2c) = param_1[0xb];
    *(undefined4 *)((int)this + 0x20) = param_1[8];
    *(undefined4 *)((int)this + 0x24) = param_1[9];
  }
  return 0;
}

/* ref: FUN_00c30a00 */
byte F_00c30a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc30a00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00c30a30 */
uint F_00c30a30(unsigned int gen_a0)
{
  GEN_ENTER(0xc30a30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_00c30a40 */
uint F_00c30a40(unsigned int gen_a0)
{
  GEN_ENTER(0xc30a40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c30a50 */
uint F_00c30a50(unsigned int gen_a0)
{
  GEN_ENTER(0xc30a50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00c30a60 */
uint F_00c30a60(unsigned int gen_a0)
{
  GEN_ENTER(0xc30a60u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00c30a70 */
uint F_00c30a70(unsigned int gen_a0)
{
  GEN_ENTER(0xc30a70u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00c30a90 */
uint F_00c30a90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc30a90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c30aa0 */
byte F_00c30aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc30aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00c30ac0 */
byte F_00c30ac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc30ac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00c30ae0 */
uint F_00c30ae0(unsigned int gen_a0)
{
  GEN_ENTER(0xc30ae0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_00c30af0 */
uint F_00c30af0(unsigned int gen_a0)
{
  GEN_ENTER(0xc30af0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c30b00 */
uint F_00c30b00(unsigned int gen_a0)
{
  GEN_ENTER(0xc30b00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00c30b10 */
uint F_00c30b10(unsigned int gen_a0)
{
  GEN_ENTER(0xc30b10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00c30b20 */
uint F_00c30b20(unsigned int gen_a0)
{
  GEN_ENTER(0xc30b20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00c30b50 */
uint F_00c30b50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc30b50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c30b80 */
uint F_00c30b80(unsigned int gen_a0)
{
  GEN_ENTER(0xc30b80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c30b90 */
uint F_00c30b90(unsigned int gen_a0)
{
  GEN_ENTER(0xc30b90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c30ba0 */
uint F_00c30ba0(unsigned int gen_a0)
{
  GEN_ENTER(0xc30ba0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10c8));
  iVar1 = *(int *)((int)this + 0x10a4);
  iVar2 = *(int *)((int)this + 0x10a0);
  iVar3 = *(int *)((int)this + 0x34);
  iVar4 = *(int *)((int)this + 0x30);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10c8));
  return ((iVar1 - iVar2) - iVar3) + iVar4;
}

/* ref: FUN_00c30be0 */
uint F_00c30be0(unsigned int gen_a0)
{
  GEN_ENTER(0xc30be0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  if (*(int *)(in_ecx + 0x78) == 0) {
    return 0;
  }
  uVar1 = F_01044460(*((undefined4 *)GEN_TOP((*(int *)(in_ecx + 0x78) + 8))));
  return uVar1;
}

/* ref: FUN_00c30bf0 */
uint F_00c30bf0(unsigned int gen_a0)
{
  GEN_ENTER(0xc30bf0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  if (*(int *)(in_ecx + 0x78) == 0) {
    return 0;
  }
  uVar1 = F_01044480(*((undefined4 *)GEN_TOP((*(int *)(in_ecx + 0x78) + 8))));
  return uVar1;
}

/* ref: FUN_00c30c00 */
uint F_00c30c00(unsigned int gen_a0)
{
  GEN_ENTER(0xc30c00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  if (*(int *)(in_ecx + 0x78) != 0) {
    uVar1 = F_010444a0(*((undefined4 *)GEN_TOP((*(int *)(in_ecx + 0x78) + 8))));
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00c30c10 */
uint F_00c30c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc30c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  
  iVar1 = *(int *)((int)this + 8);
  puVar2 = (undefined4 *)(iVar1 + 0x20);
  if (param_1 != puVar2) {
    *param_1 = *puVar2;
    param_1[1] = *(undefined4 *)(iVar1 + 0x24);
    param_1[2] = *(undefined4 *)(iVar1 + 0x28);
    param_1[3] = *(undefined4 *)(iVar1 + 0x2c);
    param_1[4] = *(undefined4 *)(iVar1 + 0x30);
    param_1[5] = *(undefined4 *)(iVar1 + 0x34);
    param_1[6] = *(undefined4 *)(iVar1 + 0x38);
    param_1[7] = *(undefined4 *)(iVar1 + 0x3c);
    param_1[10] = *(undefined4 *)(iVar1 + 0x48);
    param_1[0xb] = *(undefined4 *)(iVar1 + 0x4c);
    param_1[8] = *(undefined4 *)(iVar1 + 0x40);
    puVar2 = *(undefined4 * PTR32 *)(iVar1 + 0x44);
    param_1[9] = puVar2;
  }
  return (uint)puVar2;
}

/* ref: FUN_00c30cc0 */
uint F_00c30cc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc30cc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c30ce0 */
uint F_00c30ce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc30ce0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c30d10 */
uint F_00c30d10(unsigned int gen_a0)
{
  GEN_ENTER(0xc30d10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00c30d20 */
uint F_00c30d20(unsigned int gen_a0)
{
  GEN_ENTER(0xc30d20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00c30d30 */
undefined4 * F_00c30d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc30d30u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00c30d60 */
undefined4 * F_00c30d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc30d60u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00c30dd0 */
unsigned int F_00c30dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc30dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    F_00c30c10(*(undefined * PTR32 *)((int)this + 0x78),param_1);
    return 0;
  }
  return 0;
}

/* ref: FUN_00c30e90 */
uint F_00c30e90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc30e90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c30ea0 */
uint F_00c30ea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc30ea0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c30eb0 */
uint F_00c30eb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc30eb0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00c30ef0 */
uint F_00c30ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc30ef0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00c30f30 */
unsigned int F_00c30f30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc30f30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 8);
  if (param_1 != (undefined4 *)(iVar1 + 0x20)) {
    *param_1 = *(undefined4 *)(iVar1 + 0x20);
    param_1[1] = *(undefined4 *)(iVar1 + 0x24);
    param_1[2] = *(undefined4 *)(iVar1 + 0x28);
    param_1[3] = *(undefined4 *)(iVar1 + 0x2c);
    param_1[4] = *(undefined4 *)(iVar1 + 0x30);
    param_1[5] = *(undefined4 *)(iVar1 + 0x34);
    param_1[6] = *(undefined4 *)(iVar1 + 0x38);
    param_1[7] = *(undefined4 *)(iVar1 + 0x3c);
    param_1[10] = *(undefined4 *)(iVar1 + 0x48);
    param_1[0xb] = *(undefined4 *)(iVar1 + 0x4c);
    param_1[8] = *(undefined4 *)(iVar1 + 0x40);
    param_1[9] = *(undefined4 *)(iVar1 + 0x44);
  }
  iVar1 = *(int *)((int)this + 8);
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  *(undefined4 *)(iVar1 + 0x30) = 0;
  *(undefined4 *)(iVar1 + 0x34) = 0;
  *(undefined4 *)(iVar1 + 0x38) = 0;
  *(undefined4 *)(iVar1 + 0x3c) = 0;
  *(undefined4 *)(iVar1 + 0x48) = 0;
  *(undefined4 *)(iVar1 + 0x4c) = 0;
  *(undefined4 *)(iVar1 + 0x40) = 0;
  *(undefined4 *)(iVar1 + 0x44) = 0;
  return 0;
}

/* ref: FUN_00c30fc0 */
uint F_00c30fc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc30fc0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00c30fd0 */
uint F_00c30fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc30fd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00c30fe0 */
uint F_00c30fe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc30fe0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00c31050 */
uint F_00c31050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc31050u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00c310c0 */
unsigned int F_00c310c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc310c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    F_00c30f30(*(undefined * PTR32 *)((int)this + 0x78),param_1);
    return 0;
  }
  return 0;
}

/* ref: FUN_00c310e0 */
uint F_00c310e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc310e0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int * piVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))))();
  piVar2 = (int *)F_00c30fe0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  if (*piVar2 != *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)))) {
    uVar1 = *(uint *)(*piVar2 + 0x10);
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))))((*(undefined * PTR32 *)&gen_args[0]));
    return uVar1;
  }
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))))((*(undefined * PTR32 *)&gen_args[0]));
  return 0;
}

/* ref: FUN_00c31130 */
uint F_00c31130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc31130u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 4))))();
  F_00c31050(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) == *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18)))) {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 8))))((*(undefined * PTR32 *)&gen_args[0]));
    return 0;
  }
  uVar1 = *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 8))))((*(undefined * PTR32 *)&gen_args[0]));
  return uVar1;
}

/* ref: FUN_00c31190 */
uint F_00c31190(unsigned int gen_a0)
{
  GEN_ENTER(0xc31190u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  ulonglong uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x78);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x78) = 0;
  }
  if (*(int *)((int)this + 0x60) != 0) {
    F_00406ad0(*(int *)((int)this + 0x60));
  }
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  uVar2 = F_0042c880(this);
  return (uint)uVar2;
}

/* ref: FUN_00c311d0 */
uint F_00c311d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc311d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0xbc) == 0) {
    return 0;
  }
  (*(int *)(gen_frame + 0x8)) = *(int *)((int)this + 0xbc);
  ((code *)*(gen_code32 *)(*(int *)this + 0x44))(this);
  piVar1 = (int *)F_00c30fe0((undefined *)((int)this + 0x1c),((undefined1 *)(gen_frame + 0x4)),&(*(int *)(gen_frame + 0x8)));
  if (*piVar1 == *(int *)((int)this + 0x20)) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this);
  }
  else {
    this_00 = *(undefined * PTR32 *)(*piVar1 + 0x10);
    ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this);
    if (this_00 != (undefined *)0x0) {
      uVar2 = F_00c31130(this_00,*(undefined4 *)((int)this + 0xbc));
      return uVar2;
    }
  }
  return 0;
}

/* ref: FUN_00c31240 */
uint F_00c31240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc31240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_01046cd0(this,param_1);
  *(undefined4 *)((int)this + 0x78) = 0;
  return (uint)this;
}

/* ref: FUN_00c31260 */
uint F_00c31260(unsigned int gen_a0)
{
  GEN_ENTER(0xc31260u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    uVar1 = F_00c311d0(*(undefined * PTR32 *)((int)this + 0x78));
    if (uVar1 != 0) {
      if (*(int *)(uVar1 + 0x20) != 0) {
        return *((uint *)GEN_TOP((*(int *)(uVar1 + 0x20) + 8)));
      }
      return *(uint *)(uVar1 + 0x1c);
    }
  }
  return 0;
}

/* ref: FUN_00c312d0 */
byte F_00c312d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc312d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00406b90(0xc4,0,0);
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_00e28fa0(this_00,this);
    *(uint *)((int)this + 0x78) = uVar1;
    return uVar1 != 0;
  }
  *(undefined4 *)((int)this + 0x78) = 0;
  return 0;
}

/* ref: FUN_00c31310 */
unsigned int F_00c31310(unsigned int gen_a0)
{
  GEN_ENTER(0xc31310u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x78);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x78) = 0;
  }
  return 0;
}

/* ref: FUN_00c31330 */
byte F_00c31330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc31330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    bVar1 = F_00e290e0(*(undefined * PTR32 *)((int)this + 0x78),param_1);
    return bVar1;
  }
  return 0;
}

/* ref: FUN_00c31350 */
byte F_00c31350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc31350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    bVar1 = F_00e28d90(*(undefined * PTR32 *)((int)this + 0x78),param_1);
    return bVar1;
  }
  return 0;
}

/* ref: FUN_00c31370 */
unsigned int F_00c31370(unsigned int gen_a0)
{
  GEN_ENTER(0xc31370u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    F_00e29060(*(undefined * PTR32 *)((int)this + 0x78));
    return 0;
  }
  return 0;
}

/* ref: FUN_00c313b0 */
byte F_00c313b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc313b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00c313d0 */
uint F_00c313d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc313d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_00c313e0 */
uint F_00c313e0(unsigned int gen_a0)
{
  GEN_ENTER(0xc313e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c313f0 */
uint F_00c313f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc313f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00c31400 */
uint F_00c31400(unsigned int gen_a0)
{
  GEN_ENTER(0xc31400u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00c31410 */
uint F_00c31410(unsigned int gen_a0)
{
  GEN_ENTER(0xc31410u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00c31430 */
uint F_00c31430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc31430u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c31440 */
byte F_00c31440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc31440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00c31460 */
byte F_00c31460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc31460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00c31480 */
uint F_00c31480(unsigned int gen_a0)
{
  GEN_ENTER(0xc31480u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_00c31490 */
uint F_00c31490(unsigned int gen_a0)
{
  GEN_ENTER(0xc31490u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c314a0 */
uint F_00c314a0(unsigned int gen_a0)
{
  GEN_ENTER(0xc314a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00c314b0 */
uint F_00c314b0(unsigned int gen_a0)
{
  GEN_ENTER(0xc314b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00c314c0 */
uint F_00c314c0(unsigned int gen_a0)
{
  GEN_ENTER(0xc314c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00c314f0 */
uint F_00c314f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc314f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c31510 */
uint F_00c31510(unsigned int gen_a0)
{
  GEN_ENTER(0xc31510u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c31520 */
uint F_00c31520(unsigned int gen_a0)
{
  GEN_ENTER(0xc31520u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c31550 */
uint F_00c31550(unsigned int gen_a0)
{
  GEN_ENTER(0xc31550u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  if (*(int *)(in_ecx + 0x78) == 0) {
    return 0;
  }
  uVar1 = F_00e33cd0(*((undefined4 *)GEN_TOP((*(int *)(in_ecx + 0x78) + 8))));
  return uVar1;
}

/* ref: FUN_00c31560 */
uint F_00c31560(unsigned int gen_a0)
{
  GEN_ENTER(0xc31560u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  if (*(int *)(in_ecx + 0x78) == 0) {
    return 0;
  }
  uVar1 = F_00e33cf0(*((undefined4 *)GEN_TOP((*(int *)(in_ecx + 0x78) + 8))));
  return uVar1;
}

/* ref: FUN_00c31570 */
unsigned int F_00c31570(unsigned int gen_a0)
{
  GEN_ENTER(0xc31570u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x78) != 0) {
    F_00e33d10(*((undefined4 *)GEN_TOP((*(int *)(in_ecx + 0x78) + 8))));
    return 0;
  }
  return 0;
}

/* ref: FUN_00c315a0 */
uint F_00c315a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc315a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c315c0 */
uint F_00c315c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc315c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c315e0 */
uint F_00c315e0(unsigned int gen_a0)
{
  GEN_ENTER(0xc315e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00c315f0 */
uint F_00c315f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc315f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00c31600 */
undefined4 * F_00c31600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc31600u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00c31630 */
undefined4 * F_00c31630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc31630u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00c31670 */
uint F_00c31670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc31670u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c31680 */
uint F_00c31680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc31680u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c31690 */
uint F_00c31690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc31690u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00c316d0 */
uint F_00c316d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc316d0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00c31710 */
uint F_00c31710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc31710u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00c31720 */
uint F_00c31720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc31720u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00c31730 */
uint F_00c31730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc31730u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00c317a0 */
uint F_00c317a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc317a0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00c31810 */
uint F_00c31810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc31810u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int * piVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))))();
  piVar2 = (int *)F_00c31730(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  if (*piVar2 != *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)))) {
    uVar1 = *(uint *)(*piVar2 + 0x10);
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))))((*(undefined * PTR32 *)&gen_args[0]));
    return uVar1;
  }
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))))((*(undefined * PTR32 *)&gen_args[0]));
  return 0;
}

/* ref: FUN_00c31860 */
uint F_00c31860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc31860u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 4))))();
  F_00c317a0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) == *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18)))) {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 8))))((*(undefined * PTR32 *)&gen_args[0]));
    return 0;
  }
  uVar1 = *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 8))))((*(undefined * PTR32 *)&gen_args[0]));
  return uVar1;
}

/* ref: FUN_00c318c0 */
uint F_00c318c0(unsigned int gen_a0)
{
  GEN_ENTER(0xc318c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  ulonglong uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x78);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x78) = 0;
  }
  if (*(int *)((int)this + 0x60) != 0) {
    F_00406ad0(*(int *)((int)this + 0x60));
  }
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  uVar2 = F_0042c880(this);
  return (uint)uVar2;
}

/* ref: FUN_00c31900 */
uint F_00c31900(unsigned int gen_a0)
{
  GEN_ENTER(0xc31900u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0xbc) == 0) {
    return 0;
  }
  (*(int *)(gen_frame + 0x8)) = *(int *)((int)this + 0xbc);
  ((code *)*(gen_code32 *)(*(int *)this + 0x44))(this);
  piVar1 = (int *)F_00c31730((undefined *)((int)this + 0x1c),((undefined1 *)(gen_frame + 0x4)),&(*(int *)(gen_frame + 0x8)));
  if (*piVar1 == *(int *)((int)this + 0x20)) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this);
  }
  else {
    this_00 = *(undefined * PTR32 *)(*piVar1 + 0x10);
    ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this);
    if (this_00 != (undefined *)0x0) {
      uVar2 = F_00c31860(this_00,*(undefined4 *)((int)this + 0xbc));
      return uVar2;
    }
  }
  return 0;
}

/* ref: FUN_00c31970 */
uint F_00c31970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc31970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00e351c0(this,param_1);
  *(undefined4 *)((int)this + 0x78) = 0;
  return (uint)this;
}

/* ref: FUN_00c31990 */
uint F_00c31990(unsigned int gen_a0)
{
  GEN_ENTER(0xc31990u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    uVar1 = F_00c31900(*(undefined * PTR32 *)((int)this + 0x78));
    if (uVar1 != 0) {
      if (*(int *)(uVar1 + 0x20) != 0) {
        return *((uint *)GEN_TOP((*(int *)(uVar1 + 0x20) + 8)));
      }
      return *(uint *)(uVar1 + 0x1c);
    }
  }
  return 0;
}

/* ref: FUN_00c319e0 */
byte F_00c319e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc319e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  if ((*(int *)this != 0) && (*(int *)this == *param_1)) {
    return *(int *)((int)this + 4) == param_1[1];
  }
  return 0;
}

/* ref: FUN_00c31a30 */
uint F_00c31a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc31a30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  LOCK();
  uVar1 = *(uint *)this;
  if (param_1 == uVar1) {
    *(undefined4 *)this = param_2;
    uVar1 = param_1;
  }
  UNLOCK();
  return uVar1;
}

/* ref: FUN_00c31a50 */
uint F_00c31a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc31a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  LPCRITICAL_SECTION param_1 = (LPCRITICAL_SECTION)gen_a1;
  *(LPCRITICAL_SECTION *)this = param_1;
  gen_imp_EnterCriticalSection(param_1);
  return (uint)this;
}

/* ref: FUN_00c31a70 */
uint F_00c31a70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc31a70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00e40eb0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x110f8a0));
  F_00e37350((undefined *)((int)this + 0x358));
  *(undefined4 *)((int)this + 0x3b0) = 0;
  *(undefined4 *)((int)this + 0x3b4) = 0;
  F_0042cbc0((undefined *)((int)this + 0x3b8),param_3);
  F_0042b630((int)this + 0x40c);
  F_0042b630((int)this + 0x460);
  F_0042b630((int)this + 0x4b4);
  *(undefined2 *)((int)this + 0x508) = 0;
  *(undefined4 *)((int)this + 0x510) = 0;
  F_0042b630((int)this + 0x514);
  F_0042b630((int)this + 0x568);
  F_0042ccf0((undefined *)((int)this + 0x358),param_1);
  *(undefined2 *)((int)this + 0x3ac) = (undefined2)param_2;
  *(undefined4 *)((int)this + 0x350) = param_4;
  return (uint)this;
}

/* ref: FUN_00c31b30 */
uint F_00c31b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc31b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0042ccf0((undefined *)((int)this + 0x460),param_1);
  return uVar1;
}

/* ref: FUN_00c31b40 */
uint F_00c31b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc31b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  if (*(char *)*param_1 != '\0') {
    bVar1 = F_0042b6a0(param_1,&REFG(undefined, 0x10c4408));
    if (bVar1 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x110f8a4),REFG(undefined4, 0x108cc50));
      F_0042ccf0((undefined *)((int)this + 0x40c),((undefined1 *)(gen_frame + 0x4)));
      F_0042c880(((undefined1 *)(gen_frame + 0x4)));
      uVar2 = F_0042e360((undefined *)((int)this + 0x40c),param_1);
      F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
      return uVar2;
    }
  }
  uVar2 = F_0042aca0((int)this + 0x40c);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar2;
}

/* ref: FUN_00c31be0 */
byte F_00c31be0(unsigned int gen_a0)
{
  GEN_ENTER(0xc31be0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00406b90(0xe0,0,0);
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_00e47780(this_00,(int)this + 0x358);
    *(uint *)((int)this + 0x3b0) = uVar1;
    return uVar1 != 0;
  }
  *(undefined4 *)((int)this + 0x3b0) = 0;
  return 0;
}

/* ref: FUN_00c31c30 */
unsigned int F_00c31c30(unsigned int gen_a0)
{
  GEN_ENTER(0xc31c30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x3b0);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x3b0) = 0;
  }
  return 0;
}

/* ref: FUN_00c31c60 */
uint F_00c31c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc31c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  
  if (*(undefined * PTR32 *)((int)this + 0x3b0) != (undefined *)0x0) {
    bVar1 = F_00e47880(*(undefined * PTR32 *)((int)this + 0x3b0),param_1);
    return CONCAT31(extraout_var,bVar1);
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_00c31c80 */
byte F_00c31c80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc31c80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  
  if (*(int *)((int)this + 0x3b0) != 0) {
    (*(undefined4 *)(gen_frame + 0x4)) = param_2;
    (*(undefined4 *)(gen_frame + 0x8)) = param_3;
    bVar1 = F_00e476f0(param_1,&(*(undefined4 *)(gen_frame + 0x4)));
    return bVar1;
  }
  return 0;
}

/* ref: FUN_00c31cd0 */
byte F_00c31cd0(unsigned int gen_a0)
{
  GEN_ENTER(0xc31cd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((*(int *)(in_ecx + 0x3b4) != 3) && (*(int *)(in_ecx + 0x3b4) != 4)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00c31cf0 */
byte F_00c31cf0(unsigned int gen_a0)
{
  GEN_ENTER(0xc31cf0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x3b4) == 2;
}

/* ref: FUN_00c31d00 */
byte F_00c31d00(unsigned int gen_a0)
{
  GEN_ENTER(0xc31d00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x3b4) != 2) {
    return 0;
  }
  if ((**(char * PTR32 *)(in_ecx + 0x4b4) != '\0') && (*(short *)(in_ecx + 0x508) != 0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00c31d30 */
unsigned int F_00c31d30(unsigned int gen_a0)
{
  GEN_ENTER(0xc31d30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x3b4) == 2) {
    *(undefined4 *)(in_ecx + 0x3b4) = 0;
  }
  return 0;
}

/* ref: FUN_00c31dc0 */
uint F_00c31dc0(unsigned int gen_a0)
{
  GEN_ENTER(0xc31dc0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  F_01050b60(in_ecx + 2);
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x110f8ac));
  return (uint)in_ecx;
}

/* ref: PacketBufferTmpl_TLobbyProtoDown_LobbyProtoChannel_Network_Application_IpcChannel::vf0 */
uint F_00c31de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc31de0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x110f8ac));
  F_01050b70();
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c31e60 */
uint F_00c31e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc31e60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x14) = param_2;
  return param_2;
}

/* ref: FUN_00c31e70 */
uint F_00c31e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc31e70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x18) = param_2;
  return param_2;
}

/* ref: FUN_00c31e80 */
uint F_00c31e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc31e80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x20) = param_2;
  return param_2;
}

/* ref: FUN_00c31ea0 */
byte F_00c31ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc31ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00c31ec0 */
uint F_00c31ec0(unsigned int gen_a0)
{
  GEN_ENTER(0xc31ec0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_00c31ed0 */
uint F_00c31ed0(unsigned int gen_a0)
{
  GEN_ENTER(0xc31ed0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c31ee0 */
uint F_00c31ee0(unsigned int gen_a0)
{
  GEN_ENTER(0xc31ee0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00c31ef0 */
uint F_00c31ef0(unsigned int gen_a0)
{
  GEN_ENTER(0xc31ef0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00c31f00 */
uint F_00c31f00(unsigned int gen_a0)
{
  GEN_ENTER(0xc31f00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00c31f10 */
uint F_00c31f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc31f10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00c31f40 */
uint F_00c31f40(unsigned int gen_a0)
{
  GEN_ENTER(0xc31f40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c31f50 */
uint F_00c31f50(unsigned int gen_a0)
{
  GEN_ENTER(0xc31f50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00c31f60 */
uint F_00c31f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc31f60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c31f70 */
byte F_00c31f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc31f70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00c31f90 */
byte F_00c31f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc31f90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00c31fb0 */
byte F_00c31fb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc31fb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00c31fd0 */
byte F_00c31fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc31fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00c31ff0 */
uint F_00c31ff0(unsigned int gen_a0)
{
  GEN_ENTER(0xc31ff0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_00c32000 */
uint F_00c32000(unsigned int gen_a0)
{
  GEN_ENTER(0xc32000u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c32010 */
uint F_00c32010(unsigned int gen_a0)
{
  GEN_ENTER(0xc32010u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00c32020 */
uint F_00c32020(unsigned int gen_a0)
{
  GEN_ENTER(0xc32020u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00c32030 */
uint F_00c32030(unsigned int gen_a0)
{
  GEN_ENTER(0xc32030u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00c32040 */
uint F_00c32040(unsigned int gen_a0)
{
  GEN_ENTER(0xc32040u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_00c32050 */
uint F_00c32050(unsigned int gen_a0)
{
  GEN_ENTER(0xc32050u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c32060 */
uint F_00c32060(unsigned int gen_a0)
{
  GEN_ENTER(0xc32060u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00c32070 */
uint F_00c32070(unsigned int gen_a0)
{
  GEN_ENTER(0xc32070u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00c32080 */
uint F_00c32080(unsigned int gen_a0)
{
  GEN_ENTER(0xc32080u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00c320c0 */
uint F_00c320c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc320c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c320d0 */
uint F_00c320d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc320d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c32130 */
unsigned int F_00c32130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc32130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if ((undefined4 *)((int)this + 0xc) != param_1) {
    *(undefined4 *)((int)this + 0xc) = *param_1;
    *(undefined4 *)((int)this + 0x10) = param_1[1];
  }
  return 0;
}

/* ref: FUN_00c32180 */
uint F_00c32180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc32180u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c32190 */
uint F_00c32190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc32190u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xc) = param_2;
  return param_2;
}

/* ref: FUN_00c321c0 */
uint F_00c321c0(unsigned int gen_a0)
{
  GEN_ENTER(0xc321c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c321d0 */
uint F_00c321d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc321d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c321e0 */
uint F_00c321e0(unsigned int gen_a0)
{
  GEN_ENTER(0xc321e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c32250 */
uint F_00c32250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc32250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00c32280 */
uint F_00c32280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc32280u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00c322a0 */
byte F_00c322a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc322a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00c322d0 */
uint F_00c322d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc322d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00c322f0 */
uint F_00c322f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc322f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c32300 */
uint F_00c32300(unsigned int gen_a0)
{
  GEN_ENTER(0xc32300u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00c323a0 */
byte F_00c323a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc323a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00c323c0 */
uint F_00c323c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc323c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c323d0 */
uint F_00c323d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc323d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c323e0 */
unsigned int F_00c323e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc323e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return 0;
}

/* ref: FUN_00c32400 */
uint F_00c32400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc32400u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c32410 */
byte F_00c32410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc32410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if ((*(int *)(param_1 + 0xc) != 0) && (*(int *)(param_1 + 0xc) == *(int *)this)) {
    return *(int *)(param_1 + 0x10) == *(int *)((int)this + 4);
  }
  return 0;
}

/* ref: FUN_00c32440 */
uint F_00c32440(unsigned int gen_a0)
{
  GEN_ENTER(0xc32440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10e0));
  iVar1 = *(int *)((int)this + 0x10a4);
  iVar2 = *(int *)((int)this + 0x10a0);
  iVar3 = *(int *)((int)this + 0x34);
  iVar4 = *(int *)((int)this + 0x30);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10e0));
  return ((iVar1 - iVar2) - iVar3) + iVar4;
}

/* ref: FUN_00c32480 */
uint F_00c32480(unsigned int gen_a0)
{
  GEN_ENTER(0xc32480u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x3b0);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x110f8a0));
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x3b0) = 0;
  }
  F_0042c880((undefined *)((int)this + 0x568));
  F_0042c880((undefined *)((int)this + 0x514));
  F_0042c880((undefined *)((int)this + 0x4b4));
  F_0042c880((undefined *)((int)this + 0x460));
  F_0042c880((undefined *)((int)this + 0x40c));
  F_0042c880((undefined *)((int)this + 0x3b8));
  F_0042c880((undefined *)((int)this + 0x358));
  uVar2 = F_00e40a10(this);
  return uVar2;
}

/* ref: FUN_00c32510 */
uint F_00c32510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc32510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  
  iVar1 = *(int *)((int)this + 8);
  puVar2 = (undefined4 *)(iVar1 + 0x20);
  if (param_1 != puVar2) {
    *param_1 = *puVar2;
    param_1[1] = *(undefined4 *)(iVar1 + 0x24);
    param_1[2] = *(undefined4 *)(iVar1 + 0x28);
    param_1[3] = *(undefined4 *)(iVar1 + 0x2c);
    param_1[4] = *(undefined4 *)(iVar1 + 0x30);
    param_1[5] = *(undefined4 *)(iVar1 + 0x34);
    param_1[6] = *(undefined4 *)(iVar1 + 0x38);
    param_1[7] = *(undefined4 *)(iVar1 + 0x3c);
    param_1[10] = *(undefined4 *)(iVar1 + 0x48);
    param_1[0xb] = *(undefined4 *)(iVar1 + 0x4c);
    param_1[8] = *(undefined4 *)(iVar1 + 0x40);
    puVar2 = *(undefined4 * PTR32 *)(iVar1 + 0x44);
    param_1[9] = puVar2;
  }
  return (uint)puVar2;
}

/* ref: FUN_00c32590 */
uint F_00c32590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc32590u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c325c0 */
uint F_00c325c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc325c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c325d0 */
uint F_00c325d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc325d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c325e0 */
uint F_00c325e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc325e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x38))(this)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*param_2,0);
  if (uVar2 != 0) {
    *(uint *)(param_1 + 0xc) = uVar2;
    return param_1;
  }
  return 0;
}

/* ref: FUN_00c32660 */
uint F_00c32660(unsigned int gen_a0)
{
  GEN_ENTER(0xc32660u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00c32670 */
uint F_00c32670(unsigned int gen_a0)
{
  GEN_ENTER(0xc32670u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00c32680 */
uint F_00c32680(unsigned int gen_a0)
{
  GEN_ENTER(0xc32680u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00c326a0 */
undefined4 * F_00c326a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc326a0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00c326d0 */
undefined4 * F_00c326d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc326d0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00c32700 */
undefined4 * F_00c32700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc32700u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00c32730 */
uint F_00c32730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc32730u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c32740 */
uint F_00c32740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc32740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0xc);
  if (((-1 < param_1) || ((uint)-param_1 <= (uint)piVar1[8])) &&
     ((param_1 < 1 || ((uint)(piVar1[8] + param_1) < 0x241)))) {
    if (param_1 != 0) {
      piVar1[8] = piVar1[8] + param_1;
      ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1);
    }
    *(undefined4 *)((int)this + 0xc) = 0;
    return (uint)piVar1;
  }
  piVar1[8] = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return (uint)piVar1;
}

/* ref: FUN_00c327b0 */
byte F_00c327b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc327b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00c327f0 */
uint F_00c327f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc327f0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00c32840 */
byte F_00c32840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc32840u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  short * psVar2;
  undefined8 * puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  ulonglong * puVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined2 uStack_1a;
  
  if (*(char *)((int)this + 0x18) != '\0') {
    LOCK();
    iVar6 = *(int *)((int)this + 0x14);
    if (iVar6 == 0) {
      *(int *)((int)this + 0x14) = 1;
      iVar6 = 0;
    }
    UNLOCK();
    if (iVar6 != 0) {
      return 0;
    }
  }
  if (*(int *)((int)this + 0x10) != 0) {
    if (*(char *)((int)this + 0x18) != '\0') {
      LOCK();
      *(undefined4 *)((int)this + 0x14) = 0;
      UNLOCK();
    }
    return 0;
  }
  iVar6 = *(int *)(param_1 + 0x20);
  uVar9 = iVar6 + 0x13U & 0xfffffffc;
  if (*(int *)((int)this + 0xc) + 0x20 + uVar9 <= *(uint *)this) {
    if (*(int *)((int)this + 0xc) == 0) {
      puVar3 = *(undefined8 * PTR32 *)((int)this + 8);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 0x10))) = 0x20;
      *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x18))) = 1;
      *((undefined2 *)GEN_TOP((*(int *)((int)this + 8) + 0x14))) = 0;
      *((undefined2 *)GEN_TOP((*(int *)((int)this + 8) + 0x16))) = 0;
      *(undefined4 *)((int)this + 0xc) = 0x20;
      **(undefined1 * PTR32 *)((int)this + 8) = 0x52;
      *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 1))) = 0x52;
      *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 2))) = 0xa0;
      *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 3))) = 0x41;
      *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 4))) = 0xff;
    }
    uVar4 = *(undefined4 *)(param_1 + 0x14);
    uVar5 = *(undefined4 *)(param_1 + 0x18);
    puVar7 = ((ulonglong *)GEN_TOP((*(int *)((int)this + 0xc) + *(int *)((int)this + 8))));
    *puVar7 = CONCAT44(uVar4,iVar6 + 0x13U) & 0xfffffffffffffffc;
    puVar7[1] = CONCAT26(uStack_1a,CONCAT24(3,uVar5));
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 0x10;
    F_00c46aa0(*(int *)((int)this + 8) + *(int *)((int)this + 0xc),*(undefined4 *)(param_1 + 0x24),
               iVar6);
    if (param_2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*param_2 + 0x18))
                (param_2,uVar4,*(int *)((int)this + 0xc) + *(int *)((int)this + 8),iVar6);
    }
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + iVar6;
    piVar1 = ((int *)GEN_TOP((*(int *)((int)this + 8) + 0x10)));
    *piVar1 = *piVar1 + uVar9;
    psVar2 = ((short *)GEN_TOP((*(int *)((int)this + 8) + 0x16)));
    *psVar2 = *psVar2 + 1;
    uVar10 = F_0046ff40();
    *((ulonglong *)GEN_TOP((*(int *)((int)this + 8) + 8))) = uVar10;
    for (uVar8 = iVar6 + 0x10; uVar8 < uVar9; uVar8 = uVar8 + 1) {
      *((undefined1 *)GEN_TOP((*(int *)((int)this + 0xc) + *(int *)((int)this + 8)))) = 0;
      *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
    }
    if (*(char *)((int)this + 0x18) != '\0') {
      LOCK();
      *(undefined4 *)((int)this + 0x14) = 0;
      UNLOCK();
    }
    return 1;
  }
  if (*(char *)((int)this + 0x18) != '\0') {
    LOCK();
    *(undefined4 *)((int)this + 0x14) = 0;
    UNLOCK();
  }
  return 0;
}

/* ref: FUN_00c32a00 */
unsigned int F_00c32a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc32a00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return 0;
}

/* ref: FUN_00c32a20 */
uint F_00c32a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc32a20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00c32a30 */
byte F_00c32a30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc32a30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00c32a70 */
uint F_00c32a70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc32a70u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  int iVar1;
  int * piVar2;
  
  piVar2 = param_2;
  if (param_2 == param_3) {
    *param_1 = (int)param_2;
    return (uint)param_1;
  }
  do {
    iVar1 = *(int *)(piVar2[2] + 0xc);
    if (((iVar1 != 0) && (iVar1 == param_4)) && (*(int *)(piVar2[2] + 0x10) == param_5)) break;
    piVar2 = (int *)*piVar2;
  } while (piVar2 != param_3);
  *param_1 = (int)piVar2;
  return (uint)param_1;
}

/* ref: FUN_00c32ac0 */
uint F_00c32ac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc32ac0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: Application::Network::LobbyClientModule::vf0 */
uint F_00c32b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc32b10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00c32480(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c32b40 */
unsigned int F_00c32b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc32b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(undefined * PTR32 *)((int)this + 0x3b0) != (undefined *)0x0) {
    F_00c32510(*(undefined * PTR32 *)((int)this + 0x3b0),param_1);
    return 0;
  }
  return 0;
}

/* ref: FUN_00c32c00 */
uint F_00c32c00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc32c00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c32c10 */
uint F_00c32c10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc32c10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c32c20 */
uint F_00c32c20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc32c20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c32c50 */
uint F_00c32c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc32c50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x14);
  if ((param_1 < 0) && ((uint)piVar1[8] < (uint)-param_1)) {
    piVar1[8] = 0;
  }
  else if ((param_1 < 1) || ((uint)(piVar1[8] + param_1) < 0x241)) {
    if (param_1 != 0) {
      piVar1[8] = piVar1[8] + param_1;
      ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1);
    }
  }
  else {
    piVar1[8] = 0;
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
  if (piVar1 + 3 != (int *)(uVar2 + 8)) {
    piVar1[3] = *(int *)(uVar2 + 8);
    piVar1[4] = *(int *)(uVar2 + 0xc);
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,piVar1[9],piVar1[8]);
  return (uint)piVar1;
}

/* ref: FUN_00c32d00 */
uint F_00c32d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc32d00u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00c32d40 */
uint F_00c32d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc32d40u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00c32d80 */
uint F_00c32d80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc32d80u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00c32dc0 */
uint F_00c32dc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc32dc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c32de0 */
uint F_00c32de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc32de0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00c32df0 */
uint F_00c32df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc32df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if (0x3ffffffeU - *(int *)((int)this + 4) < param_1) {
                    
    F_00c4579a("list<T> too long");
  }
  uVar1 = *(int *)((int)this + 4) + param_1;
  *(uint *)((int)this + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_00c32e20 */
uint F_00c32e20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc32e20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00c32e30 */
unsigned int F_00c32e30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc32e30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00c32e50 */
unsigned int F_00c32e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc32e50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 8);
  if (param_1 != (undefined4 *)(iVar1 + 0x20)) {
    *param_1 = *(undefined4 *)(iVar1 + 0x20);
    param_1[1] = *(undefined4 *)(iVar1 + 0x24);
    param_1[2] = *(undefined4 *)(iVar1 + 0x28);
    param_1[3] = *(undefined4 *)(iVar1 + 0x2c);
    param_1[4] = *(undefined4 *)(iVar1 + 0x30);
    param_1[5] = *(undefined4 *)(iVar1 + 0x34);
    param_1[6] = *(undefined4 *)(iVar1 + 0x38);
    param_1[7] = *(undefined4 *)(iVar1 + 0x3c);
    param_1[10] = *(undefined4 *)(iVar1 + 0x48);
    param_1[0xb] = *(undefined4 *)(iVar1 + 0x4c);
    param_1[8] = *(undefined4 *)(iVar1 + 0x40);
    param_1[9] = *(undefined4 *)(iVar1 + 0x44);
  }
  iVar1 = *(int *)((int)this + 8);
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  *(undefined4 *)(iVar1 + 0x30) = 0;
  *(undefined4 *)(iVar1 + 0x34) = 0;
  *(undefined4 *)(iVar1 + 0x38) = 0;
  *(undefined4 *)(iVar1 + 0x3c) = 0;
  *(undefined4 *)(iVar1 + 0x48) = 0;
  *(undefined4 *)(iVar1 + 0x4c) = 0;
  *(undefined4 *)(iVar1 + 0x40) = 0;
  *(undefined4 *)(iVar1 + 0x44) = 0;
  return 0;
}

/* ref: FUN_00c32ee0 */
uint F_00c32ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc32ee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  gen_size32 * psVar4;
  undefined4 uVar5;
  
  piVar2 = *(int * PTR32 *)((int)this + 0x10);
  puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x38))(piVar2)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,*puVar1,0);
  if (uVar3 == 0) {
    return 0;
  }
  param_1[5] = uVar3;
  if (param_1 != (int *)0xfffffff8) {
    *(undefined4 *)(uVar3 + 0x14) = *(undefined4 *)((int)this + 0x14);
    if (*(int *)((int)this + 0x20) == 0) {
      uVar5 = *(undefined4 *)((int)this + 0x1c);
    }
    else {
      uVar5 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x20) + 8)));
    }
    *(undefined4 *)(uVar3 + 0x18) = uVar5;
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
    *(undefined4 *)(uVar3 + 0x20) = *puVar1;
    psVar4 = ((gen_size32 *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
    F_00c48350(*(undefined * PTR32 *)(uVar3 + 0x24),0,*psVar4);
    if (param_1[5] != 0) {
      ((code *)*(gen_code32 *)(*param_1 + 8))(param_1,*(undefined4 *)(param_1[5] + 0x24));
      return (uint)(param_1 + 2);
    }
    ((code *)*(gen_code32 *)(*param_1 + 8))(param_1,0);
    return (uint)(param_1 + 2);
  }
  return 0;
}

/* ref: FUN_00c32fb0 */
uint F_00c32fb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc32fb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00c32fc0 */
uint F_00c32fc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc32fc0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00c32fd0 */
uint F_00c32fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc32fd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00c32fe0 */
uint F_00c32fe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc32fe0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00c33050 */
uint F_00c33050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc33050u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00c330c0 */
uint F_00c330c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc330c0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00c33130 */
uint F_00c33130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc33130u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)*in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00c33140 */
uint F_00c33140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc33140u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00c33150 */
byte F_00c33150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc33150u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  undefined3 uVar2;
  byte bVar3;
  uint uVar4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x68);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  F_00c32fe0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))),&(*(int *)&gen_args[1]),(*(int *)&gen_args[1]));
  if ((*(int *)&gen_args[1]) == *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10)))) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  piVar1 = *(int * PTR32 *)((*(int *)&gen_args[1]) + 0x10);
  if ((char)(*(undefined4 *)&gen_args[3]) == '\0') {
    uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
    if ((char)uVar4 == '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return 0;
    }
  }
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50));
  uVar2 = (undefined3)(*(int *)&gen_args[1]);
  (*(undefined1 *)((char *)&(*(int *)&gen_args[1]) + 3)) = piVar1[5] == 0;
  bVar3 = F_00c32840(piVar1 + 2,(*(undefined4 *)&gen_args[2]),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x80))));
  if ((bVar3 != 0) &&
     (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) + 1, (*(undefined1 *)((char *)&(*(int *)&gen_args[1]) + 3)) != '\0')) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) + 1;
  }
  (*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[2]) + 3)) = bVar3;
  if (((char)(*(undefined4 *)&gen_args[3]) != '\0') && (piVar1[5] != 0)) {
    uVar2 = (undefined3)(*(undefined4 *)&gen_args[2]);
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,(*(undefined * PTR32 *)&gen_args[0]));
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50));
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return (*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[2]) + 3));
}

/* ref: FUN_00c33230 */
uint F_00c33230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc33230u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00c33270 */
uint F_00c33270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc33270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004069f0(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    if (puVar1 + 2 != (undefined4 *)0x0) {
      puVar1[2] = *param_3;
    }
    return (uint)puVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00c332c0 */
uint F_00c332c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc332c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_00c32a70(((undefined1 *)(gen_frame + 0x8)),param_2,param_3,param_4,param_5);
  *param_1 = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00c332f0 */
unsigned int F_00c332f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc332f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(undefined * PTR32 *)((int)this + 0x3b0) != (undefined *)0x0) {
    F_00c32e50(*(undefined * PTR32 *)((int)this + 0x3b0),param_1);
    return 0;
  }
  return 0;
}

/* ref: FUN_00c33310 */
uint F_00c33310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc33310u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int * piVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))))();
  piVar2 = (int *)F_00c33050(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  if (*piVar2 != *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)))) {
    uVar1 = *(uint *)(*piVar2 + 0x10);
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))))((*(undefined * PTR32 *)&gen_args[0]));
    return uVar1;
  }
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))))((*(undefined * PTR32 *)&gen_args[0]));
  return 0;
}

/* ref: FUN_00c33360 */
uint F_00c33360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc33360u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 4))))();
  F_00c330c0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) == *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18)))) {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 8))))((*(undefined * PTR32 *)&gen_args[0]));
    return 0;
  }
  uVar1 = *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 8))))((*(undefined * PTR32 *)&gen_args[0]));
  return uVar1;
}

/* ref: FUN_00c333c0 */
uint F_00c333c0(unsigned int gen_a0)
{
  GEN_ENTER(0xc333c0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00c333f0 */
uint F_00c333f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc333f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  piVar2 = (int *)F_004069f0(0xc);
  if (piVar2 == (int *)0x0) {
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
    F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
  }
  *piVar2 = param_1;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != (int *)0x0) {
    piVar2[2] = *param_2;
  }
  if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) == 0x3ffffffe) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) + 1;
  *(int * PTR32 *)(param_1 + 4) = piVar2;
  *(int * PTR32 *)piVar2[1] = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_00c33470 */
uint F_00c33470(unsigned int gen_a0)
{
  GEN_ENTER(0xc33470u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0xbc) == 0) {
    return 0;
  }
  (*(int *)(gen_frame + 0x8)) = *(int *)((int)this + 0xbc);
  ((code *)*(gen_code32 *)(*(int *)this + 0x44))(this);
  piVar1 = (int *)F_00c33050((undefined *)((int)this + 0x1c),((undefined1 *)(gen_frame + 0x4)),&(*(int *)(gen_frame + 0x8)));
  if (*piVar1 == *(int *)((int)this + 0x20)) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this);
  }
  else {
    this_00 = *(undefined * PTR32 *)(*piVar1 + 0x10);
    ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this);
    if (this_00 != (undefined *)0x0) {
      uVar2 = F_00c33360(this_00,*(undefined4 *)((int)this + 0xbc));
      return uVar2;
    }
  }
  return 0;
}

/* ref: FUN_00c334e0 */
uint F_00c334e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc334e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = **(int * PTR32 *)this;
  iVar2 = *(int *)(iVar1 + 4);
  piVar3 = (int *)F_004069f0(0xc);
  if (piVar3 == (int *)0x0) {
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
    F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
  }
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != (int *)0x0) {
    piVar3[2] = *param_1;
  }
  if (*(int *)((int)this + 4) == 0x3ffffffe) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(iVar1 + 4) = piVar3;
  *(int * PTR32 *)piVar3[1] = piVar3;
  return (uint)piVar3;
}

/* ref: FUN_00c33560 */
uint F_00c33560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc33560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)(iVar1 + 4);
  piVar3 = (int *)F_004069f0(0xc);
  if (piVar3 == (int *)0x0) {
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
    F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
  }
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != (int *)0x0) {
    piVar3[2] = *param_1;
  }
  if (*(int *)((int)this + 4) == 0x3ffffffe) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(iVar1 + 4) = piVar3;
  *(int * PTR32 *)piVar3[1] = piVar3;
  return (uint)piVar3;
}

/* ref: FUN_00c33650 */
uint F_00c33650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc33650u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  undefined4 * puVar5;
  uint uVar6;
  
  iVar2 = (*(int *)&gen_args[1]);
  if ((*(int *)&gen_args[1]) != 0) {
    if (*(int *)((*(int *)&gen_args[1]) + 0xc) != 0) {
      piVar4 = (int *)F_00c32a70(((undefined1 *)(gen_frame + 0x4)),**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),
                                   *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),*(undefined4 *)((*(int *)&gen_args[1]) + 0xc),
                                   *(undefined4 *)((*(int *)&gen_args[1]) + 0x10));
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
      if ((undefined4 *)*piVar4 != puVar1) {
        puVar5 = (undefined4 *)
                 F_00c32a70(((undefined1 *)(gen_frame + 0x4)),*(undefined4 *)*piVar4,puVar1,*(undefined4 *)(iVar2 + 0xc),
                              *(undefined4 *)(iVar2 + 0x10));
        puVar5 = (undefined4 *)*puVar5;
        if (puVar5 != puVar1) {
          iVar2 = puVar5[2];
          F_00c33230(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),((undefined1 *)(gen_frame + 0x4)),puVar5);
          piVar4 = *(int * PTR32 *)(iVar2 + 8);
          ((code *)*(gen_code32 *)(*piVar4 + 0x10))(piVar4,iVar2);
        }
      }
    }
    F_00c33560(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),&(*(int *)&gen_args[1]));
  }
  piVar4 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  uVar6 = 0;
  if ((int *)*piVar4 != piVar4) {
    piVar3 = (int *)*piVar4;
    uVar6 = ((int *)*piVar4)[2];
    if (piVar3 != piVar4) {
      *(int *)piVar3[1] = *piVar3;
      *(int *)(*piVar3 + 4) = piVar3[1];
      F_00406ad0(piVar3);
      *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + -1;
    }
  }
  return uVar6;
}

/* ref: FUN_00c33710 */
unsigned int F_00c33710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc33710u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  if ((*(int *)&gen_args[1]) != 0) {
    F_00c334e0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),&(*(int *)&gen_args[1]));
  }
  return 0;
}

/* ref: FUN_00c33730 */
uint F_00c33730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc33730u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  byte bVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * PTR32 * ppuVar6;
  undefined4 * puVar7;
  int iVar8;
  
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = (*(undefined * PTR32 *)&gen_args[0]);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) == 0) {
    uVar3 = 0;
    if ((*(uint *)&gen_args[1]) != 0) {
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(uint *)&gen_args[1]) + 8) + 0x10))))(*(int * PTR32 *)((*(uint *)&gen_args[1]) + 8),(*(uint *)&gen_args[1]));
      return uVar3;
    }
  }
  else {
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) + 8)));
    }
    ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))));
    (*(uint *)&gen_args[1]) = F_00c33650(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))),(*(uint *)&gen_args[1]));
    while ((*(uint *)&gen_args[1]) != 0) {
      if (iVar8 == 0) {
joined_r0x00c338c0: ;
        if ((*(uint *)&gen_args[1]) != 0) {
          F_00c334e0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) + 4))),&(*(uint *)&gen_args[1]));
        }
        break;
      }
      lpCriticalSection = (LPCRITICAL_SECTION)(iVar8 + 0x68);
      gen_imp_EnterCriticalSection(lpCriticalSection);
      puVar7 = *(undefined4 * PTR32 *)(iVar8 + 0x10);
      if (*(char *)((int)puVar7[1] + 0x15) == '\0') {
        puVar4 = (undefined4 *)puVar7[1];
        do {
          if ((uint)puVar4[3] < *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)))) {
            puVar5 = (undefined4 *)puVar4[2];
          }
          else {
            puVar5 = (undefined4 *)*puVar4;
            puVar7 = puVar4;
          }
          puVar4 = puVar5;
        } while (*(char *)((int)puVar5 + 0x15) == '\0');
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar7;
      if ((puVar7 == *(undefined4 * PTR32 *)(iVar8 + 0x10)) || (*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) < (uint)puVar7[3])
         ) {
        (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = *(undefined4 * PTR32 *)(iVar8 + 0x10);
        ppuVar6 = &(*(undefined4 * PTR32 *)(gen_frame + 0xc));
      }
      else {
        ppuVar6 = &(*(undefined4 * PTR32 *)(gen_frame + 0x10));
      }
      if (*ppuVar6 == *(undefined4 * PTR32 *)(iVar8 + 0x10)) {
        gen_imp_LeaveCriticalSection(lpCriticalSection);
        goto joined_r0x00c338c0;
      }
      piVar1 = ((int *)GEN_TOP((*ppuVar6)[4]));
      uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
      if ((char)uVar3 == '\0') {
        gen_imp_LeaveCriticalSection(lpCriticalSection);
        (*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 *)(gen_frame + 0x14));
        goto joined_r0x00c338c0;
      }
      gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(iVar8 + 0x50));
      (*(bool *)(gen_frame + 0x1b)) = piVar1[5] == 0;
      bVar2 = F_00c32840(piVar1 + 2,(*(uint *)&gen_args[1]),*(undefined4 *)(iVar8 + 0x80));
      (*(byte *)(gen_frame + 0x1a)) = bVar2;
      if ((bVar2 != 0) && (*(int *)(iVar8 + 0x24) = *(int *)(iVar8 + 0x24) + 1, (*(bool *)(gen_frame + 0x1b)) != false)) {
        *(int *)(iVar8 + 0x20) = *(int *)(iVar8 + 0x20) + 1;
      }
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(iVar8 + 0x50));
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      (*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 *)(gen_frame + 0x14));
      if ((*(byte *)(gen_frame + 0x1a)) == 0) goto joined_r0x00c338c0;
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(uint *)&gen_args[1]) + 8) + 0x10))))(*(int * PTR32 *)((*(uint *)&gen_args[1]) + 8),(*(uint *)&gen_args[1]));
      (*(uint *)&gen_args[1]) = F_00c33650(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x24),0);
      (*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 *)(gen_frame + 0x14));
    }
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))));
  }
  return uVar3;
}

/* ref: FUN_00c338d0 */
uint F_00c338d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc338d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c32c50(param_1,param_2);
  uVar1 = F_00c33730(*(undefined * PTR32 *)((int)this + 0x20),uVar1);
  return uVar1;
}

/* ref: FUN_00c338f0 */
uint F_00c338f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc338f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  byte bVar1;
  undefined * this_00;
  uint uVar2;
  undefined4 * puVar3;
  uint uVar4;
  int iVar5;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  if (*(undefined * PTR32 *)((int)this + 0x3b0) == (undefined *)0x0) goto LAB_00c33c5a;
  if (*(int *)((int)this + 0x3b4) == 0) {
    this_00 = (undefined *)F_00c33470(*(undefined * PTR32 *)((int)this + 0x3b0));
    (*(undefined * PTR32 *)(gen_frame + 0x50)) = this_00;
    if (this_00 != (undefined *)0x0) {
      if (**(char * PTR32 *)((int)this + 0x460) == '\0') {
LAB_00c33958: ;
        if ((**(char * PTR32 *)((int)this + 0x514) != '\0') || (**(char * PTR32 *)((int)this + 0x568) != '\0'))
        goto LAB_00c33a19;
        F_00e39ed0((undefined *)((int *)(gen_frame + 0x18)),0x1f5,0x38,0);
        uVar2 = F_00c32ee0(this_00,((int *)(gen_frame + 0x18)));
        if (uVar2 != 0) {
          puVar3 = (undefined4 *)F_00e3bc00(((int *)(gen_frame + 0x18)));
          *(int *)((int)this + 0x510) = *(int *)((int)this + 0x510) + 1;
          *puVar3 = *(undefined4 *)((int)this + 0x510);
          uVar2 = F_0042a990((int)this + 0x3b8);
          uVar2 = F_00c4c74c(uVar2);
          puVar3[1] = uVar2 | 0x80000000;
          *(undefined8 *)(puVar3 + 2) = 0;
          *(undefined8 *)(puVar3 + 4) = 0;
          *(undefined8 *)(puVar3 + 6) = 0;
          *(undefined8 *)(puVar3 + 8) = 0;
          uVar2 = F_0042a970((int)this + 0x40c);
          uVar4 = F_0042a990((int)this + 0x40c);
          F_00c4d9ef(puVar3 + 2,0x20,uVar4,uVar2);
          goto LAB_00c33b2b;
        }
      }
      else {
        bVar1 = F_0042b6a0((undefined *)((int)this + 0x460),&REFG(undefined, 0x10c4408));
        if (bVar1 != 0) goto LAB_00c33958;
LAB_00c33a19: ;
        F_00e39ed0((undefined *)((int *)(gen_frame + 0x18)),0x1f6,0x98,0);
        uVar2 = F_00c32ee0(this_00,((int *)(gen_frame + 0x18)));
        if (uVar2 != 0) {
          puVar3 = (undefined4 *)F_00e3bc20(((int *)(gen_frame + 0x18)));
          *(int *)((int)this + 0x510) = *(int *)((int)this + 0x510) + 1;
          *puVar3 = *(undefined4 *)((int)this + 0x510);
          uVar2 = F_0042a990((int)this + 0x3b8);
          uVar2 = F_00c4c74c(uVar2);
          puVar3[1] = uVar2 | 0x80000000;
          *(undefined8 *)(puVar3 + 2) = 0;
          *(undefined8 *)(puVar3 + 4) = 0;
          *(undefined8 *)(puVar3 + 6) = 0;
          *(undefined8 *)(puVar3 + 8) = 0;
          F_00c48350(puVar3 + 10,0,0x40);
          uVar2 = F_0042a970((int)this + 0x40c);
          uVar4 = F_0042a990((int)this + 0x40c);
          F_00c4d9ef(puVar3 + 2,0x20,uVar4,uVar2);
          uVar2 = F_0042a970((int)this + 0x460);
          uVar4 = F_0042a990((int)this + 0x460);
          F_00c4d9ef(puVar3 + 0x1a,0x20,uVar4,uVar2);
          bVar1 = F_0042b6a0((undefined *)((int)this + 0x460),&REFG(undefined, 0x10c4408));
          if (bVar1 != 0) {
            F_0042cc20(((undefined1 *)(gen_frame + 0x54)),&REFG(undefined1, 0x107fc63),REFG(undefined4, 0x108cc50));
            F_0042ccf0((undefined *)((int)this + 0x460),((undefined1 *)(gen_frame + 0x54)));
            F_0042c880(((undefined1 *)(gen_frame + 0x54)));
          }
LAB_00c33b2b: ;
          iVar5 = (*(int *)(gen_frame + 0x2c));
          (*(int *)(gen_frame + 0x2c)) = 0;
          uVar2 = ((code *)*(gen_code32 *)(((int *)(gen_frame + 0x18))[0] + 4))(((int *)(gen_frame + 0x18)));
          if ((undefined4 *)(iVar5 + 0xc) != (undefined4 *)(uVar2 + 8)) {
            *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(uVar2 + 8);
            *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(uVar2 + 0xc);
          }
          ((code *)*(gen_code32 *)(((int *)(gen_frame + 0x18))[0] + 0xc))
                    (((int *)(gen_frame + 0x18)),*(undefined4 *)(iVar5 + 0x24),*(undefined4 *)(iVar5 + 0x20));
          F_00c33730(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x50)) + 0x20),iVar5);
          *(undefined4 *)((int)this + 0x3b4) = 1;
        }
      }
      F_00e39da0(((int *)(gen_frame + 0x18)));
    }
  }
  if (*(undefined * PTR32 *)((int)this + 0x3b0) != (undefined *)0x0) {
    F_00e47910(*(undefined * PTR32 *)((int)this + 0x3b0));
  }
  F_01050b60(((undefined1 *)(gen_frame + 0x8)));
  iVar5 = 0;
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f8ac));
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(undefined8 *)(gen_frame + 0x10)) = 0;
  if (*(undefined * PTR32 *)((int)this + 0x3b0) != (undefined *)0x0) {
    bVar1 = F_00e47880(*(undefined * PTR32 *)((int)this + 0x3b0),((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
    if (bVar1 != 0) {
      if ((*(int *)(gen_frame + 0xc)) != 0) {
        iVar5 = *(int *)((*(int *)(gen_frame + 0xc)) + 0x24);
      }
      if (*(short *)(iVar5 + 2) == 0x1f5) {
        F_0042cc20(((undefined1 *)(gen_frame + 0x54)),iVar5 + 0x1c,REFG(undefined4, 0x108cc50));
        F_0042ccf0((undefined *)((int)this + 0x4b4),((undefined1 *)(gen_frame + 0x54)));
        F_0042c880(((undefined1 *)(gen_frame + 0x54)));
        *(undefined2 *)((int)this + 0x508) = *(undefined2 *)(iVar5 + 0x1a);
        *(undefined4 *)((int)this + 0x50c) = *(undefined4 *)(iVar5 + 0x14);
        *(undefined4 *)((int)this + 0x3b4) = 2;
      }
    }
  }
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f8ac));
  F_01050b70();
LAB_00c33c5a: ;
  uVar2 = F_00e40300(this);
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return uVar2;
}

/* ref: FUN_00c33c70 */
uint F_00c33c70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc33c70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  ulonglong uVar1;
  
  uVar1 = F_00c46aa0(param_2,param_1,param_4);
  return (uint)uVar1;
}

/* ref: FUN_00c33c90 */
uint F_00c33c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc33c90u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(param_2 + 0x58);
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      (&REFG(undefined1, 0x14c5c30))[iVar3] = *(undefined1 *)(iVar1 + iVar3);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  uVar4 = F_00c46aa0(*(undefined4 *)(param_2 + 0x60),&REFG(undefined1, 0x14c5c30),*(undefined4 *)(param_2 + 0x68));
  return (uint)uVar4;
}

/* ref: FUN_00c33cf0 */
uint F_00c33cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc33cf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  ulonglong uVar1;
  
  uVar1 = F_00c46aa0(param_2,param_1,param_4);
  return (uint)uVar1;
}

/* ref: FUN_00c33d10 */
uint F_00c33d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc33d10u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00c46aa0(*(undefined4 *)(param_2 + 0x60),*(undefined4 *)(param_1 + 4),
                     *(undefined4 *)(param_2 + 0x58));
  return (uint)uVar1;
}

/* ref: FUN_00c33d30 */
uint F_00c33d30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc33d30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int param_4 = (int)gen_a3;
  ulonglong uVar1;
  
  uVar1 = F_00c46aa0(*(undefined4 *)(param_4 + 4),param_1,(uint)*(ushort *)(param_4 + 2));
  return (uint)uVar1;
}

/* ref: FUN_00c33d60 */
uint F_00c33d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc33d60u, gen_a0, gen_a1, 0u, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  int iVar1;
  byte * pbVar2;
  byte * pbVar3;
  uint uVar4;
  
  pbVar3 = param_1;
  pbVar2 = param_2;
  for (uVar4 = REFG(undefined4, 0x14c9c30); 3 < uVar4; uVar4 = uVar4 - 4) {
    if (*(int *)pbVar3 != *(int *)pbVar2) goto LAB_00c33d8e;
    pbVar2 = pbVar2 + 4;
    pbVar3 = pbVar3 + 4;
  }
  if (uVar4 == 0) {
    return 0;
  }
LAB_00c33d8e: ;
  iVar1 = (uint)*pbVar3 - (uint)*pbVar2;
  if (iVar1 == 0) {
    if (uVar4 < 2) {
      return 0;
    }
    iVar1 = (uint)pbVar3[1] - (uint)pbVar2[1];
    if (iVar1 == 0) {
      if (uVar4 < 3) {
        return 0;
      }
      iVar1 = (uint)pbVar3[2] - (uint)pbVar2[2];
      if (iVar1 == 0) {
        if (uVar4 < 4) {
          return 0;
        }
        iVar1 = (uint)pbVar3[3] - (uint)pbVar2[3];
      }
    }
  }
  return iVar1 >> 0x1f | 1;
}

/* ref: FUN_00c33de0 */
uint F_00c33de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc33de0u, gen_a0, gen_a1, 0u, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  int iVar1;
  byte * pbVar2;
  byte * pbVar3;
  uint uVar4;
  
  pbVar3 = param_1;
  pbVar2 = param_2;
  for (uVar4 = REFG(undefined4, 0x14c9c30); 3 < uVar4; uVar4 = uVar4 - 4) {
    if (*(int *)pbVar3 != *(int *)pbVar2) goto LAB_00c33e0e;
    pbVar2 = pbVar2 + 4;
    pbVar3 = pbVar3 + 4;
  }
  if (uVar4 == 0) {
    return 0;
  }
LAB_00c33e0e: ;
  iVar1 = (uint)*pbVar3 - (uint)*pbVar2;
  if (iVar1 == 0) {
    if (uVar4 < 2) {
      return 0;
    }
    iVar1 = (uint)pbVar3[1] - (uint)pbVar2[1];
    if (iVar1 == 0) {
      if (uVar4 < 3) {
        return 0;
      }
      iVar1 = (uint)pbVar3[2] - (uint)pbVar2[2];
      if (iVar1 == 0) {
        if (uVar4 < 4) {
          return 0;
        }
        iVar1 = (uint)pbVar3[3] - (uint)pbVar2[3];
      }
    }
  }
  return -(iVar1 >> 0x1f | 1U);
}

/* ref: FUN_00c33e60 */
uint F_00c33e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc33e60u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 uVar1;
  undefined * _Base;
  int iVar2;
  code * _PtFuncCompare;
  uint uVar3;
  ulonglong uVar4;
  
  REFG(undefined4, 0x14c9c30) = *(gen_size32 *)(param_2 + 0x58);
  uVar1 = *(undefined4 *)(param_2 + 0x68);
  _Base = *(undefined * PTR32 *)(param_1 + 4);
  uVar3 = *(gen_size32 *)(param_2 + 0x60) * REFG(undefined4, 0x14c9c30);
  _PtFuncCompare = ((code *)REFP(0xc33d60));
  if (*(int *)(param_2 + 0x70) == 0 && *(int *)(param_2 + 0x74) == 0) {
    _PtFuncCompare = ((code *)REFP(0xc33de0));
  }
  F_00c4f040(_Base,*(gen_size32 *)(param_2 + 0x60),REFG(undefined4, 0x14c9c30),_PtFuncCompare);
  iVar2 = *(int *)(param_1 + 8);
  *(short *)(iVar2 + 2) = (short)uVar3;
  *(undefined4 *)(iVar2 + 4) = uVar1;
  uVar4 = F_00c46aa0(uVar1,_Base,uVar3 & 0xffff);
  return (uint)uVar4;
}

/* ref: FUN_00c33f00 */
unsigned int F_00c33f00(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc33f00u, gen_a0, 0u, gen_a2, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  float in_xmm0 = (float)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  undefined1 in_register_00001204 [12];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  uint uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  
  if ((REFG(undefined4, 0x14c9c70) & 1) == 0) {
    REFG(undefined4, 0x14c9c70) = REFG(undefined4, 0x14c9c70) | 1;
    *(uint *)&REFG(undefined, 0x14c9c60) = *(uint *)&REFG(undefined, 0x110f8c0);
    REFG(uint, 0x014c9c64) = *(uint *)&REFG(undefined, 0x110f8c4);
    REFG(uint, 0x014c9c68) = *(uint *)&REFG(undefined, 0x110f8c8);
    REFG(uint, 0x014c9c6c) = *(uint *)&REFG(undefined, 0x110f8cc);
  }
  if ((REFG(undefined4, 0x14c9c70) & 2) == 0) {
    REFG(undefined4, 0x14c9c70) = REFG(undefined4, 0x14c9c70) | 2;
    *(uint *)&REFG(undefined, 0x14c9c50) = *(uint *)&REFG(undefined, 0x110f8d0);
    REFG(uint, 0x014c9c54) = *(uint *)&REFG(undefined, 0x110f8d4);
    REFG(uint, 0x014c9c58) = *(uint *)&REFG(undefined, 0x110f8d8);
    REFG(uint, 0x014c9c5c) = *(uint *)&REFG(undefined, 0x110f8dc);
  }
  if ((REFG(undefined4, 0x14c9c70) & 4) == 0) {
    REFG(undefined4, 0x14c9c70) = REFG(undefined4, 0x14c9c70) | 4;
    *(uint *)&REFG(undefined, 0x14c9c40) = *(uint *)&REFG(undefined, 0x110f8e0);
    REFG(uint, 0x014c9c44) = *(uint *)&REFG(undefined, 0x110f8e4);
    REFG(uint, 0x014c9c48) = *(uint *)&REFG(undefined, 0x110f8e8);
    REFG(uint, 0x014c9c4c) = *(uint *)&REFG(undefined, 0x110f8ec);
  }
  uVar16 = (uint)(*(float *)&REFG(undefined, 0x110f9b4) * (*(float *)((char *)&in_register_00001204 + 0)));
  uVar19 = (uint)(*(float *)&REFG(undefined, 0x110f9b8) * (*(float *)((char *)&in_register_00001204 + 4)));
  uVar22 = (uint)(*(float *)&REFG(undefined, 0x110f9bc) * (*(float *)((char *)&in_register_00001204 + 8)));
  uVar2 = (int)(*(float *)&REFG(undefined, 0x110f9b0) * in_xmm0) & *(uint *)&REFG(undefined, 0x14c9c60);
  uVar5 = uVar16 & REFG(uint, 0x014c9c64);
  uVar9 = uVar19 & REFG(uint, 0x014c9c68);
  uVar25 = uVar22 & REFG(uint, 0x014c9c6c);
  fVar14 = (float)(int)(*(float *)&REFG(undefined, 0x110f9b0) * in_xmm0);
  fVar17 = (float)(int)uVar16;
  fVar20 = (float)(int)uVar19;
  fVar23 = (float)(int)uVar22;
  fVar14 = (in_xmm0 - *(float *)&REFG(undefined, 0x110f9a0) * fVar14) - *(float *)&REFG(undefined, 0x110f990) * fVar14;
  fVar10 = ((*(float *)((char *)&in_register_00001204 + 0)) - *(float *)&REFG(undefined, 0x110f9a4) * fVar17) -
           *(float *)&REFG(undefined, 0x110f994) * fVar17;
  fVar11 = ((*(float *)((char *)&in_register_00001204 + 4)) - *(float *)&REFG(undefined, 0x110f9a8) * fVar20) -
           *(float *)&REFG(undefined, 0x110f998) * fVar20;
  fVar12 = ((*(float *)((char *)&in_register_00001204 + 8)) - *(float *)&REFG(undefined, 0x110f9ac) * fVar23) -
           *(float *)&REFG(undefined, 0x110f99c) * fVar23;
  fVar17 = fVar14 * fVar14;
  fVar20 = fVar10 * fVar10;
  fVar23 = fVar11 * fVar11;
  fVar13 = fVar12 * fVar12;
  fVar15 = ((*(float *)&REFG(undefined, 0x110f980) * fVar17 + *(float *)&REFG(undefined, 0x110f960)) * fVar17 +
           *(float *)&REFG(undefined, 0x110f950)) * fVar17 + *(float *)&REFG(undefined, 0x110f930);
  fVar18 = ((*(float *)&REFG(undefined, 0x110f984) * fVar20 + *(float *)&REFG(undefined, 0x110f964)) * fVar20 +
           *(float *)&REFG(undefined, 0x110f954)) * fVar20 + *(float *)&REFG(undefined, 0x110f934);
  fVar21 = ((*(float *)&REFG(undefined, 0x110f988) * fVar23 + *(float *)&REFG(undefined, 0x110f968)) * fVar23 +
           *(float *)&REFG(undefined, 0x110f958)) * fVar23 + *(float *)&REFG(undefined, 0x110f938);
  fVar24 = ((*(float *)&REFG(undefined, 0x110f98c) * fVar13 + *(float *)&REFG(undefined, 0x110f96c)) * fVar13 +
           *(float *)&REFG(undefined, 0x110f95c)) * fVar13 + *(float *)&REFG(undefined, 0x110f93c);
  fVar14 = ((*(float *)&REFG(undefined, 0x110f970) * fVar17 + *(float *)&REFG(undefined, 0x110f940)) * fVar17 +
           *(float *)&REFG(undefined, 0x110f920)) * (fVar17 * fVar14) + fVar14;
  fVar10 = ((*(float *)&REFG(undefined, 0x110f974) * fVar20 + *(float *)&REFG(undefined, 0x110f944)) * fVar20 +
           *(float *)&REFG(undefined, 0x110f924)) * (fVar20 * fVar10) + fVar10;
  fVar11 = ((*(float *)&REFG(undefined, 0x110f978) * fVar23 + *(float *)&REFG(undefined, 0x110f948)) * fVar23 +
           *(float *)&REFG(undefined, 0x110f928)) * (fVar23 * fVar11) + fVar11;
  fVar12 = ((*(float *)&REFG(undefined, 0x110f97c) * fVar13 + *(float *)&REFG(undefined, 0x110f94c)) * fVar13 +
           *(float *)&REFG(undefined, 0x110f92c)) * (fVar13 * fVar12) + fVar12;
  uVar16 = -(uint)((float)(int)(uVar2 & *(uint *)&REFG(undefined, 0x14c9c50)) == *(float *)&REFG(undefined, 0x110f910));
  uVar19 = -(uint)((float)(int)(uVar5 & REFG(uint, 0x014c9c54)) == *(float *)&REFG(undefined, 0x110f914));
  uVar22 = -(uint)((float)(int)(uVar9 & REFG(uint, 0x014c9c58)) == *(float *)&REFG(undefined, 0x110f918));
  uVar6 = -(uint)((float)(int)(uVar25 & REFG(uint, 0x014c9c5c)) == *(float *)&REFG(undefined, 0x110f91c));
  fVar23 = gen_bits2f(uVar16 & (uint)gen_fl2bits(fVar14) | ~uVar16 & (uint)gen_fl2bits(fVar15));
  fVar13 = gen_bits2f(uVar19 & (uint)gen_fl2bits(fVar10) | ~uVar19 & (uint)gen_fl2bits(fVar18));
  fVar26 = gen_bits2f(uVar22 & (uint)gen_fl2bits(fVar11) | ~uVar22 & (uint)gen_fl2bits(fVar21));
  fVar27 = gen_bits2f(uVar6 & (uint)gen_fl2bits(fVar12) | ~uVar6 & (uint)gen_fl2bits(fVar24));
  uVar16 = -(uint)((float)(int)(*(uint *)&REFG(undefined, 0x14c9c50) + uVar2 & *(uint *)&REFG(undefined, 0x14c9c50)) ==
                  *(float *)&REFG(undefined, 0x110f910));
  uVar6 = -(uint)((float)(int)(REFG(uint, 0x014c9c54) + uVar5 & REFG(uint, 0x014c9c54)) == *(float *)&REFG(undefined, 0x110f914));
  uVar3 = -(uint)((float)(int)(REFG(uint, 0x014c9c58) + uVar9 & REFG(uint, 0x014c9c58)) == *(float *)&REFG(undefined, 0x110f918));
  uVar7 = -(uint)((float)(int)(REFG(uint, 0x014c9c5c) + uVar25 & REFG(uint, 0x014c9c5c)) == *(float *)&REFG(undefined, 0x110f91c));
  uVar19 = -(uint)((float)(int)(uVar2 & *(uint *)&REFG(undefined, 0x14c9c40)) == *(float *)&REFG(undefined, 0x110f910));
  uVar1 = -(uint)((float)(int)(uVar5 & REFG(uint, 0x014c9c44)) == *(float *)&REFG(undefined, 0x110f914));
  uVar4 = -(uint)((float)(int)(uVar9 & REFG(uint, 0x014c9c48)) == *(float *)&REFG(undefined, 0x110f918));
  uVar8 = -(uint)((float)(int)(uVar25 & REFG(uint, 0x014c9c4c)) == *(float *)&REFG(undefined, 0x110f91c));
  uVar22 = -(uint)((float)(int)(*(uint *)&REFG(undefined, 0x14c9c50) + uVar2 & *(uint *)&REFG(undefined, 0x14c9c40)) ==
                  *(float *)&REFG(undefined, 0x110f910));
  uVar2 = -(uint)((float)(int)(REFG(uint, 0x014c9c54) + uVar5 & REFG(uint, 0x014c9c44)) == *(float *)&REFG(undefined, 0x110f914));
  uVar5 = -(uint)((float)(int)(REFG(uint, 0x014c9c58) + uVar9 & REFG(uint, 0x014c9c48)) == *(float *)&REFG(undefined, 0x110f918));
  uVar9 = -(uint)((float)(int)(REFG(uint, 0x014c9c5c) + uVar25 & REFG(uint, 0x014c9c4c)) == *(float *)&REFG(undefined, 0x110f91c));
  fVar28 = *(float *)&REFG(undefined, 0x110f914) - fVar13;
  fVar29 = *(float *)&REFG(undefined, 0x110f918) - fVar26;
  fVar30 = *(float *)&REFG(undefined, 0x110f91c) - fVar27;
  fVar15 = gen_bits2f(uVar16 & (uint)gen_fl2bits(fVar14) | ~uVar16 & (uint)gen_fl2bits(fVar15));
  fVar18 = gen_bits2f(uVar6 & (uint)gen_fl2bits(fVar10) | ~uVar6 & (uint)gen_fl2bits(fVar18));
  fVar11 = gen_bits2f(uVar3 & (uint)gen_fl2bits(fVar11) | ~uVar3 & (uint)gen_fl2bits(fVar21));
  fVar12 = gen_bits2f(uVar7 & (uint)gen_fl2bits(fVar12) | ~uVar7 & (uint)gen_fl2bits(fVar24));
  fVar14 = *(float *)&REFG(undefined, 0x110f910) - fVar15;
  fVar17 = *(float *)&REFG(undefined, 0x110f914) - fVar18;
  fVar10 = *(float *)&REFG(undefined, 0x110f918) - fVar11;
  fVar20 = *(float *)&REFG(undefined, 0x110f91c) - fVar12;
  *param_3 = ~uVar19 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x110f910) - fVar23) |
             (uint)gen_fl2bits(fVar23) & uVar19;
  param_3[1] = ~uVar1 & (uint)gen_fl2bits(fVar28) | (uint)gen_fl2bits(fVar13) & uVar1;
  param_3[2] = ~uVar4 & (uint)gen_fl2bits(fVar29) | (uint)gen_fl2bits(fVar26) & uVar4;
  param_3[3] = ~uVar8 & (uint)gen_fl2bits(fVar30) | (uint)gen_fl2bits(fVar27) & uVar8;
  *in_ecx = ~uVar22 & (uint)gen_fl2bits(fVar14) | (uint)gen_fl2bits(fVar15) & uVar22;
  in_ecx[1] = ~uVar2 & (uint)gen_fl2bits(fVar17) | (uint)gen_fl2bits(fVar18) & uVar2;
  in_ecx[2] = ~uVar5 & (uint)gen_fl2bits(fVar10) | (uint)gen_fl2bits(fVar11) & uVar5;
  in_ecx[3] = ~uVar9 & (uint)gen_fl2bits(fVar20) | (uint)gen_fl2bits(fVar12) & uVar9;
  return 0;
}

/* ref: FUN_00c34080 */
uint F_00c34080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc34080u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  int iVar2;
  undefined * this;
  undefined * pvVar3;
  int iVar4;
  ulonglong uVar5;
  
  pvVar3 = *(undefined * PTR32 *)(param_1 + 4);
  iVar2 = *(int *)(param_2 + 0x60);
  (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)(param_2 + 0x58);
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = pvVar3;
  (*(float *)(gen_frame + 0x24)) = *(float *)(param_2 + 0x6c);
  (*(undefined4 *)(gen_frame + 0x1c)) = *(undefined4 *)(param_2 + 0x70);
  (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(param_2 + 0x80);
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(param_2 + 0x88);
  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(param_2 + 0x90);
  (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(param_2 + 0x98);
  (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(param_2 + 0xa0);
  this = pvVar3;
  iVar1 = iVar2;
  if (*(int *)(param_2 + 0x78) != 0 || *(int *)(param_2 + 0x7c) != 0) {
    for (; iVar1 != 0; iVar1 = iVar1 + -1) {
      (*(undefined * PTR32 *)(gen_frame + 0x28)) = pvVar3;
      F_00c34870(this,&(*(undefined4 *)(gen_frame + 0x8)));
      this = (undefined *)((int)this + 0x40);
      pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x28));
    }
  }
  iVar4 = *(int *)(param_1 + 8);
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)iVar4;
  for (iVar1 = iVar2; iVar1 != 0; iVar1 = iVar1 + -1) {
    F_00c34d30(pvVar3,&(*(undefined4 *)(gen_frame + 0x8)),(*(float *)(gen_frame + 0x24)),iVar4);
    iVar4 = iVar4 + 0x30;
    pvVar3 = (undefined *)((int)pvVar3 + 0x40);
  }
  F_00c46aa0((*(undefined4 *)(gen_frame + 0x1c)),*(undefined4 *)(param_1 + 4),(*(undefined4 *)(gen_frame + 0x20)));
  uVar5 = F_00c46aa0((*(undefined4 *)(gen_frame + 0x18)),(*(undefined * PTR32 *)(gen_frame + 0x28)),iVar2 * 0x30);
  return (uint)uVar5;
}

/* ref: FUN_00c34180 */
unsigned int F_00c34180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc34180u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  
  fVar1 = param_2[2];
  fVar2 = param_2[3];
  *(ulonglong *)in_ecx =
       CONCAT44((uint)gen_fl2bits(gen_bits2f((uint)((ulonglong)*(undefined8 *)((int)(uintptr_t)param_2) >> 0x20)) +
                                  in_ecx[1]),(uint)gen_fl2bits(*param_2 + *in_ecx));
  *(ulonglong *)(in_ecx + 2) =
       CONCAT44((uint)gen_fl2bits(fVar2 + in_ecx[3]),(uint)gen_fl2bits(fVar1 + in_ecx[2]));
  return 0;
}

/* ref: FUN_00c34320 */
uint F_00c34320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc34320u, gen_a0, gen_a1, gen_a2, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar1 = param_3[3];
  fVar2 = param_3[2];
  fVar3 = *param_3;
  fVar4 = param_3[1];
  fVar5 = in_ecx[7];
  fVar6 = in_ecx[3];
  fVar7 = in_ecx[5];
  fVar8 = in_ecx[6];
  fVar9 = in_ecx[2];
  fVar10 = in_ecx[1];
  fVar11 = in_ecx[0xb];
  fVar12 = in_ecx[10];
  fVar13 = in_ecx[9];
  fVar14 = in_ecx[0xf];
  fVar15 = in_ecx[0xe];
  fVar16 = in_ecx[0xd];
  *param_2 = ((in_ecx[4] * fVar4 + *in_ecx * fVar3) + in_ecx[8] * fVar2) + in_ecx[0xc] * fVar1;
  param_2[1] = ((fVar7 * fVar4 + fVar10 * fVar3) + fVar13 * fVar2) + fVar16 * fVar1;
  param_2[2] = ((fVar8 * fVar4 + fVar9 * fVar3) + fVar12 * fVar2) + fVar15 * fVar1;
  param_2[3] = ((fVar5 * fVar4 + fVar6 * fVar3) + fVar11 * fVar2) + fVar14 * fVar1;
  return (uint)param_2;
}

/* ref: FUN_00c34430 */
unsigned int F_00c34430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc34430u, gen_a0, gen_a1, 0u, 0u);
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  (*(float *)(gen_frame + 0x20)) = gen_bits2f(-(uint)(*(float *)&REFG(undefined, 0x110f9d0) == *(float *)&REFG(undefined, 0x110f9c0)));
  (*(float *)(gen_frame + 0x24)) = gen_bits2f(-(uint)(*(float *)&REFG(undefined, 0x110f9d4) == *(float *)&REFG(undefined, 0x110f9c4)));
  (*(float *)(gen_frame + 0x28)) = gen_bits2f(-(uint)(*(float *)&REFG(undefined, 0x110f9d8) == *(float *)&REFG(undefined, 0x110f9c8)));
  (*(float *)(gen_frame + 0x2c)) = gen_bits2f(-(uint)(REFG(float, 0x110f9dc) == *(float *)&REFG(undefined, 0x110f9cc)));
  F_00c33f00(&(*(float *)(gen_frame + 0x10)),GEN_TOF(gen_bits2f(*param_2 & -(uint)(*(float *)&REFG(undefined, 0x110f9d0) == *(float *)&REFG(undefined, 0x110f9c0)))),
               &(*(float *)(gen_frame + 0x0)));
  fVar3 = (*(float *)(gen_frame + 0x1c));
  fVar6 = (*(float *)(gen_frame + 0x18));
  fVar9 = (*(float *)(gen_frame + 0x14));
  fVar2 = (*(float *)(gen_frame + 0x10));
  fVar10 = (*(float *)(gen_frame + 0xc));
  fVar7 = (*(float *)(gen_frame + 0x8));
  fVar8 = (*(float *)(gen_frame + 0x4));
  fVar11 = (*(float *)(gen_frame + 0x0));
  fVar1 = REFG(float, 0x110f9dc);
  fVar12 = *(float *)&REFG(undefined, 0x110f9c0) - (*(float *)(gen_frame + 0x0));
  fVar13 = *(float *)&REFG(undefined, 0x110f9c4) - (*(float *)(gen_frame + 0x4));
  fVar15 = *(float *)&REFG(undefined, 0x110f9c8) - (*(float *)(gen_frame + 0x8));
  fVar16 = *(float *)&REFG(undefined, 0x110f9cc) - (*(float *)(gen_frame + 0xc));
  (*(float *)(gen_frame + 0x0)) = fVar12;
  (*(float *)(gen_frame + 0x4)) = fVar13;
  (*(float *)(gen_frame + 0x8)) = fVar15;
  (*(float *)(gen_frame + 0xc)) = fVar16;
  fVar15 = gen_bits2f((uint)gen_fl2bits(fVar15) & (uint)gen_fl2bits((*(float *)(gen_frame + 0x20))));
  fVar14 = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x18))) & (uint)gen_fl2bits((*(float *)(gen_frame + 0x24))));
  fVar16 = gen_bits2f((uint)gen_fl2bits(fVar16) & (uint)gen_fl2bits((*(float *)(gen_frame + 0x28))));
  fVar17 = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x1c))) & (uint)gen_fl2bits((*(float *)(gen_frame + 0x2c))));
  fVar4 = (*(float *)(gen_frame + 0x14)) * (*(float *)(gen_frame + 0x18));
  fVar5 = (*(float *)(gen_frame + 0x14)) * fVar7;
  fVar13 = fVar13 * (*(float *)(gen_frame + 0x1c));
  fVar12 = fVar12 * fVar10;
  (*(float *)(gen_frame + 0x0)) = fVar4;
  (*(float *)(gen_frame + 0x4)) = fVar5;
  (*(float *)(gen_frame + 0x8)) = fVar13;
  (*(float *)(gen_frame + 0xc)) = fVar12;
  (*(float *)(gen_frame + 0x10)) = 0.0;
  (*(float *)(gen_frame + 0x14)) = 0.0;
  (*(float *)(gen_frame + 0x18)) = 0.0;
  (*(float *)(gen_frame + 0x1c)) = REFG(float, 0x110f9dc);
  fVar6 = fVar8 * fVar6;
  fVar8 = fVar8 * fVar7;
  fVar10 = fVar2 * fVar10;
  fVar18 = fVar6 * fVar2 - fVar11 * fVar15;
  fVar19 = fVar8 * fVar2 - fVar11 * fVar14;
  fVar20 = (fVar9 * fVar3) * fVar2 - fVar11 * fVar16;
  fVar21 = fVar10 * fVar2 - fVar11 * fVar17;
  (*(float *)(gen_frame + 0x30)) = fVar18;
  (*(float *)(gen_frame + 0x34)) = fVar19;
  (*(float *)(gen_frame + 0x38)) = fVar20;
  (*(float *)(gen_frame + 0x3c)) = fVar21;
  (*(float *)(gen_frame + 0x20)) = fVar18;
  (*(float *)(gen_frame + 0x24)) = fVar19;
  (*(float *)(gen_frame + 0x28)) = fVar20;
  (*(float *)(gen_frame + 0x2c)) = fVar21;
  fVar7 = fVar6 * fVar11 + fVar2 * fVar15;
  fVar8 = fVar8 * fVar11 + fVar2 * fVar14;
  fVar9 = (fVar9 * fVar3) * fVar11 + fVar2 * fVar16;
  fVar11 = fVar10 * fVar11 + fVar2 * fVar17;
  (*(float *)(gen_frame + 0x40)) = fVar7;
  (*(float *)(gen_frame + 0x44)) = fVar8;
  (*(float *)(gen_frame + 0x48)) = fVar9;
  (*(float *)(gen_frame + 0x4c)) = fVar11;
  (*(float *)(gen_frame + 0x30)) = fVar7;
  (*(float *)(gen_frame + 0x34)) = fVar8;
  (*(float *)(gen_frame + 0x38)) = fVar9;
  (*(float *)(gen_frame + 0x3c)) = fVar11;
  (*(float *)(gen_frame + 0x40)) = fVar4;
  (*(float *)(gen_frame + 0x44)) = fVar5;
  (*(float *)(gen_frame + 0x48)) = fVar13;
  (*(float *)(gen_frame + 0x4c)) = fVar12;
  *param_1 = CONCAT44((uint)gen_fl2bits(fVar5),(uint)gen_fl2bits(fVar4));
  param_1[1] = CONCAT44((uint)gen_fl2bits(fVar12),(uint)gen_fl2bits(fVar13));
  param_1[2] = CONCAT44((uint)gen_fl2bits(fVar8),(uint)gen_fl2bits(fVar7));
  param_1[3] = CONCAT44((uint)gen_fl2bits(fVar11),(uint)gen_fl2bits(fVar9));
  param_1[4] = CONCAT44((uint)gen_fl2bits(fVar19),(uint)gen_fl2bits(fVar18));
  param_1[5] = CONCAT44((uint)gen_fl2bits(fVar21),(uint)gen_fl2bits(fVar20));
  param_1[6] = 0;
  param_1[7] = (ulonglong)(uint)gen_fl2bits(fVar1) << 0x20;
  return 0;
}

/* ref: FUN_00c345f0 */
uint F_00c345f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc345f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = in_ecx[1];
  uVar2 = in_ecx[2];
  uVar3 = in_ecx[3];
  *param_2 = *in_ecx;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  return (uint)param_2;
}

/* ref: FUN_00c34600 */
uint F_00c34600(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xc34600u, gen_a0, 0u, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  *in_ecx = param_2;
  in_ecx[1] = 0.0;
  in_ecx[2] = 0.0;
  in_ecx[3] = 0.0;
  return (uint)in_ecx;
}

/* ref: FUN_00c34620 */
uint F_00c34620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc34620u, gen_a0, gen_a1, gen_a2, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = in_ecx[1];
  fVar2 = in_ecx[2];
  fVar3 = in_ecx[3];
  *param_2 = *in_ecx / *param_3;
  param_2[1] = fVar1;
  param_2[2] = fVar2;
  param_2[3] = fVar3;
  return (uint)param_2;
}

/* ref: FUN_00c34640 */
uint F_00c34640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc34640u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_4;
  return param_3;
}

/* ref: FUN_00c34690 */
float10 F_00c34690(unsigned int gen_a0)
{
  GEN_ENTER(0xc34690u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)(uintptr_t)this) << 0xb ^ *(uint *)this;
  *(undefined4 *)this = *(undefined4 *)((int)this + 4);
  *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 8);
  uVar1 = *(uint *)((int)this + 0xc);
  uVar2 = (uVar1 >> 0xb ^ uVar2) >> 8 ^ uVar1 ^ uVar2;
  *(uint *)((int)this + 0xc) = uVar2;
  *(uint *)((int)this + 8) = uVar1;
  return (float10)((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f(uVar2 >> 9 | 0x3f800000))) - (float10)REFG(double, 0x1088130))));
}

/* ref: FUN_00c346e0 */
uint F_00c346e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc346e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined8 * in_ecx = (undefined8 *)(uintptr_t)gen_a0;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  *(uint *)((int)in_ecx + 0xc) = param_3;
  return param_3;
}

/* ref: FUN_00c34800 */
uint F_00c34800(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc34800u, gen_a0, 0u, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  *param_1 = param_2 / *param_3;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  return (uint)param_1;
}

/* ref: FUN_00c34820 */
unsigned int F_00c34820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc34820u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_4;
  return 0;
}

/* ref: FUN_00c34840 */
unsigned int F_00c34840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc34840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  *param_1 = *(undefined4 *)((int)this + 0x88);
  param_1[1] = *(undefined4 *)((int)this + 0x90);
  uVar1 = *(undefined4 *)((int)this + 0xa0);
  param_1[2] = *(undefined4 *)((int)this + 0x98);
  param_1[3] = uVar1;
  return 0;
}

/* ref: FUN_00c34870 */
unsigned int F_00c34870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc34870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)((int)this + 8) = 0;
  uVar3 = *param_1 << 0xb ^ *param_1;
  *param_1 = param_1[1];
  param_1[1] = param_1[2];
  uVar1 = param_1[3];
  uVar3 = (uVar1 >> 0xb ^ uVar3) >> 8 ^ uVar1 ^ uVar3;
  param_1[2] = uVar1;
  uVar4 = *param_1 << 0xb ^ *param_1;
  param_1[3] = uVar3;
  *param_1 = param_1[1];
  uVar1 = param_1[2];
  param_1[2] = uVar3;
  param_1[3] = param_1[3] ^ (uVar3 >> 0xb ^ uVar4) >> 8 ^ uVar4;
  uVar4 = param_1[3];
  param_1[1] = uVar1;
  dVar2 = REFG(double, 0x1088130);
  uVar5 = *param_1 << 0xb ^ *param_1;
  *param_1 = param_1[1];
  uVar1 = param_1[2];
  param_1[2] = uVar4;
  param_1[3] = param_1[3] ^ (uVar4 >> 0xb ^ uVar5) >> 8 ^ uVar5;
  uVar5 = param_1[3];
  param_1[1] = uVar1;
  fVar10 = REFG(float, 0x110f9dc);
  fVar7 = ((float)GEN_TOF(((double)((float)GEN_TOF((((double)GEN_TOD(gen_bits2f(uVar3 >> 9 | 0x3f800000))) - dVar2))) -
                 REFG(double, 0x1088108))));
  fVar12 = ((float)GEN_TOF(((double)((float)GEN_TOF((((double)GEN_TOD(gen_bits2f(uVar5 >> 9 | 0x3f800000))) - dVar2))) -
                  REFG(double, 0x1088108))));
  uVar3 = *param_1 << 0xb ^ *param_1;
  fVar14 = ((float)GEN_TOF(((double)((float)GEN_TOF((((double)GEN_TOD(gen_bits2f(uVar4 >> 9 | 0x3f800000))) - dVar2))) -
                  *(double *)&REFG(undefined, 0x1090b18))));
  *param_1 = param_1[1];
  uVar1 = param_1[2];
  param_1[2] = uVar5;
  param_1[3] = param_1[3] ^ (uVar5 >> 0xb ^ uVar3) >> 8 ^ uVar3;
  fVar8 = fVar10 / SQRT((fVar7 * fVar7 + fVar12 * fVar12) + fVar14 * fVar14);
  fVar9 = ((float)GEN_TOF(((double)((float)GEN_TOF((((double)GEN_TOD(gen_bits2f(param_1[3] >> 9 | 0x3f800000))) - dVar2))) +
                 REFG(double, 0x1094800))));
  param_1[1] = uVar1;
  fVar7 = (fVar9 * (fVar8 * fVar7)) * *(float *)&REFG(undefined, 0x110f8f8);
  fVar10 = (fVar9 * (fVar8 * fVar10)) * *(float *)&REFG(undefined, 0x110f8fc);
  *(ulonglong *)((int)this + 0x10) =
       CONCAT44((uint)gen_fl2bits((fVar9 * (fVar8 * fVar14)) * *(float *)&REFG(undefined, 0x110f8f4)),
                (uint)gen_fl2bits((fVar9 * (fVar8 * fVar12)) * *(float *)&REFG(undefined, 0x110f8f0)));
  *(ulonglong *)((int)this + 0x18) = CONCAT44((uint)gen_fl2bits(fVar10),(uint)gen_fl2bits(fVar7));
  uVar1 = param_1[3];
  uVar3 = *param_1 << 0xb ^ *param_1;
  *param_1 = param_1[1];
  param_1[1] = param_1[2];
  uVar3 = (uVar1 >> 0xb ^ uVar3) >> 8 ^ uVar1 ^ uVar3;
  param_1[2] = uVar1;
  uVar4 = *param_1 << 0xb ^ *param_1;
  param_1[3] = uVar3;
  *param_1 = param_1[1];
  uVar1 = param_1[2];
  param_1[2] = uVar3;
  param_1[3] = param_1[3] ^ (uVar3 >> 0xb ^ uVar4) >> 8 ^ uVar4;
  uVar4 = param_1[3];
  param_1[1] = uVar1;
  uVar5 = *param_1 << 0xb ^ *param_1;
  *param_1 = param_1[1];
  uVar1 = param_1[2];
  param_1[2] = uVar4;
  param_1[3] = param_1[3] ^ (uVar4 >> 0xb ^ uVar5) >> 8 ^ uVar5;
  uVar5 = param_1[3];
  param_1[1] = uVar1;
  uVar6 = *param_1 << 0xb ^ *param_1;
  *param_1 = param_1[1];
  uVar1 = param_1[2];
  param_1[2] = uVar5;
  param_1[1] = uVar1;
  param_1[3] = param_1[3] ^ (uVar5 >> 0xb ^ uVar6) >> 8 ^ uVar6;
  dVar13 = (double)((float)GEN_TOF((((double)GEN_TOD(gen_bits2f(uVar4 >> 9 | 0x3f800000))) - dVar2))) *
           *(double *)&REFG(undefined, 0x1094810);
  dVar11 = (double)((float)GEN_TOF((((double)GEN_TOD(gen_bits2f(uVar3 >> 9 | 0x3f800000))) - dVar2))) *
           *(double *)&REFG(undefined, 0x1094810);
  *(ulonglong *)((int)this + 0x20) =
       CONCAT44((uint)gen_fl2bits(((float)GEN_TOF((((double)GEN_TOD(gen_bits2f(uVar5 >> 9 | 0x3f800000))) - dVar2))) *
                                  REFG(float, 0x134a810)),
                (uint)gen_fl2bits(((float)GEN_TOF((((double)GEN_TOD(gen_bits2f(param_1[3] >> 9 | 0x3f800000))) - dVar2)))
                                  * REFG(float, 0x134a810)));
  *(ulonglong *)((int)this + 0x28) =
       CONCAT44((uint)gen_fl2bits((float)dVar11),(uint)gen_fl2bits((float)dVar13));
  uVar1 = param_1[3];
  uVar4 = *param_1 << 0xb ^ *param_1;
  *param_1 = param_1[1];
  param_1[1] = param_1[2];
  uVar4 = (uVar1 >> 0xb ^ uVar4) >> 8 ^ uVar1 ^ uVar4;
  param_1[2] = uVar1;
  param_1[3] = uVar4;
  *(uint *)((int)this + 0x30) = uVar4;
  return 0;
}

/* ref: FUN_00c34cd0 */
uint F_00c34cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc34cd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(in_ecx + 8);
  uVar2 = *(undefined4 *)(in_ecx + 0xc);
  *param_2 = uVar1;
  param_2[1] = uVar2;
  param_2[2] = uVar1;
  param_2[3] = uVar2;
  return (uint)param_2;
}

/* ref: FUN_00c34d30 */
uint F_00c34d30(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc34d30u, gen_a0, gen_a1, 0u, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  undefined8 * param_4 = (undefined8 *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  float * pfVar1;
  undefined8 * puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar7 = REFG(float, 0x110f9dc);
  if ((REFG(undefined4, 0x14c9cb4) & 1) == 0) {
    REFG(undefined4, 0x14c9cb4) = REFG(undefined4, 0x14c9cb4) | 1;
    REFG(float, 0x14c9ca4) = 0.0;
    REFG(float, 0x14c9ca8) = REFG(float, 0x10df028);
    REFG(float, 0x14c9cac) = 0.0;
    REFG(float, 0x14c9cb0) = REFG(float, 0x110f9dc);
  }
  pfVar1 = param_1 + 8;
  fVar3 = param_1[4] * param_3;
  fVar4 = gen_bits2f((uint)((ulonglong)*(undefined8 *)(param_1 + 4) >> 0x20)) * param_3;
  (*(float *)(gen_frame + 0x50)) = fVar3;
  (*(float *)(gen_frame + 0x54)) = fVar4;
  (*(float *)(gen_frame + 0x58)) = param_1[6] * param_3;
  (*(float *)(gen_frame + 0x5c)) = param_1[7] * param_3;
  fVar3 = *param_1 + fVar3;
  fVar4 = param_1[1] + fVar4;
  fVar5 = param_1[2] + param_1[6] * param_3;
  fVar6 = param_1[3] + param_1[7] * param_3;
  (*(float *)(gen_frame + 0x40)) = fVar3;
  (*(float *)(gen_frame + 0x44)) = fVar4;
  (*(float *)(gen_frame + 0x48)) = fVar5;
  (*(float *)(gen_frame + 0x4c)) = fVar6;
  (*(float *)(gen_frame + 0x50)) = fVar3;
  (*(float *)(gen_frame + 0x54)) = fVar4;
  (*(float *)(gen_frame + 0x58)) = fVar5;
  (*(float *)(gen_frame + 0x5c)) = fVar6;
  *(ulonglong *)param_1 = CONCAT44((uint)gen_fl2bits(fVar4),(uint)gen_fl2bits(fVar3));
  *(ulonglong *)(param_1 + 2) = CONCAT44((uint)gen_fl2bits(fVar6),(uint)gen_fl2bits(fVar5));
  (*(float *)(gen_frame + 0x40)) = REFG(float, 0x14c9ca4) * param_3;
  (*(float *)(gen_frame + 0x44)) = REFG(float, 0x14c9ca8) * param_3;
  (*(float *)(gen_frame + 0x48)) = REFG(float, 0x14c9cac) * param_3;
  (*(float *)(gen_frame + 0x4c)) = REFG(float, 0x14c9cb0) * param_3;
  fVar3 = param_1[4] + REFG(float, 0x14c9ca4) * param_3;
  fVar4 = param_1[5] + REFG(float, 0x14c9ca8) * param_3;
  fVar5 = param_1[6] + REFG(float, 0x14c9cac) * param_3;
  fVar6 = param_1[7] + REFG(float, 0x14c9cb0) * param_3;
  (*(float *)(gen_frame + 0x40)) = fVar3;
  (*(float *)(gen_frame + 0x44)) = fVar4;
  (*(float *)(gen_frame + 0x48)) = fVar5;
  (*(float *)(gen_frame + 0x4c)) = fVar6;
  (*(float *)(gen_frame + 0x50)) = fVar3;
  (*(float *)(gen_frame + 0x54)) = fVar4;
  (*(float *)(gen_frame + 0x58)) = fVar5;
  (*(float *)(gen_frame + 0x5c)) = fVar6;
  *(ulonglong *)(param_1 + 4) = CONCAT44((uint)gen_fl2bits(fVar4),(uint)gen_fl2bits(fVar3));
  *(ulonglong *)(param_1 + 6) = CONCAT44((uint)gen_fl2bits(fVar6),(uint)gen_fl2bits(fVar5));
  fVar3 = param_1[10];
  fVar4 = param_1[0xb];
  fVar5 = fVar3 * param_3;
  fVar6 = fVar4 * param_3;
  (*(float *)(gen_frame + 0x40)) = *pfVar1 * param_3;
  (*(float *)(gen_frame + 0x44)) = param_1[9] * param_3;
  (*(float *)(gen_frame + 0x48)) = fVar5;
  (*(float *)(gen_frame + 0x4c)) = fVar6;
  fVar8 = fVar5 + *pfVar1;
  fVar9 = fVar6 + param_1[9];
  (*(float *)(gen_frame + 0x40)) = fVar8;
  (*(float *)(gen_frame + 0x44)) = fVar9;
  (*(float *)(gen_frame + 0x48)) = fVar5 + fVar3;
  (*(float *)(gen_frame + 0x4c)) = fVar6 + fVar4;
  (*(float *)(gen_frame + 0x48)) = fVar3;
  (*(float *)(gen_frame + 0x4c)) = fVar4;
  (*(float *)(gen_frame + 0x50)) = fVar8;
  (*(float *)(gen_frame + 0x54)) = fVar9;
  (*(float *)(gen_frame + 0x58)) = fVar3;
  (*(float *)(gen_frame + 0x5c)) = fVar4;
  *(ulonglong *)pfVar1 = CONCAT44((uint)gen_fl2bits(fVar9),(uint)gen_fl2bits(fVar8));
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_1 + 10);
  if ((!GEN_ISNAN(param_1[1]) && !GEN_ISNAN(REFG(float, 0x10a0d00))) && !(param_1[1] <= REFG(float, 0x10a0d00))) {
    F_00c34870(param_1,param_2);
    fVar7 = REFG(float, 0x110f9dc);
  }
  if ((REFG(undefined4, 0x14c9cb4) & 2) == 0) {
    *(undefined4 *)&REFG(undefined, 0x14c9c94) = 0;
    REFG(undefined4, 0x14c9cb4) = REFG(undefined4, 0x14c9cb4) | 2;
    *(undefined4 *)&REFG(undefined, 0x14c9c98) = REFG(float, 0x110f9e4);
    *(undefined4 *)&REFG(undefined, 0x14c9c9c) = 0;
    *(float *)&REFG(undefined, 0x14c9ca0) = fVar7;
  }
  if ((REFG(undefined4, 0x14c9cb4) & 4) == 0) {
    REFG(undefined4, 0x14c9cb4) = REFG(undefined4, 0x14c9cb4) | 4;
    *(undefined4 *)&REFG(undefined, 0x14c9c84) = REFG(float, 0x10b2cc4);
    *(undefined4 *)&REFG(undefined, 0x14c9c88) = REFG(float, 0x10c75a0);
    *(undefined4 *)&REFG(undefined, 0x14c9c8c) = 0;
    *(float *)&REFG(undefined, 0x14c9c90) = fVar7;
  }
  if ((REFG(undefined4, 0x14c9cb4) & 8) == 0) {
    REFG(undefined4, 0x14c9cb4) = REFG(undefined4, 0x14c9cb4) | 8;
    *(undefined4 *)&REFG(undefined, 0x14c9c78) = REFG(float, 0x10c75a0);
    *(undefined4 *)&REFG(undefined, 0x14c9c74) = REFG(float, 0x110f9e0);
    *(undefined4 *)&REFG(undefined, 0x14c9c7c) = 0;
    *(float *)&REFG(undefined, 0x14c9c80) = fVar7;
  }
  F_00c34430(((undefined1 *)(gen_frame + 0x0)),pfVar1);
  (*(undefined8 *)(gen_frame + 0x30)) = *(undefined8 *)param_1;
  (*(undefined8 *)(gen_frame + 0x38)) = *(undefined8 *)(param_1 + 2);
  (*(float *)(gen_frame + 0x6c)) = param_1[0xc];
  puVar2 = (undefined8 *)F_00c34320(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x40)),&REFG(undefined, 0x14c9c94));
  *param_4 = *puVar2;
  param_4[1] = puVar2[1];
  *(float *)((int)param_4 + 0xc) = (*(float *)(gen_frame + 0x6c));
  (*(float *)(gen_frame + 0x6c)) = param_1[0xc];
  puVar2 = (undefined8 *)F_00c34320(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x40)),&REFG(undefined, 0x14c9c84));
  param_4[2] = *puVar2;
  param_4[3] = puVar2[1];
  *(float *)((int)param_4 + 0x1c) = (*(float *)(gen_frame + 0x6c));
  fVar7 = param_1[0xc];
  puVar2 = (undefined8 *)F_00c34320(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x40)),&REFG(undefined, 0x14c9c74));
  param_4[4] = *puVar2;
  param_4[5] = puVar2[1];
  *(float *)((int)param_4 + 0x2c) = fVar7;
  return (uint)puVar2;
}

/* ref: FUN_00c35130 */
uint F_00c35130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc35130u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_eax = (uint)gen_a0;
  uint * in_ecx = (uint *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = ~in_eax;
  uVar3 = param_3;
  for (; (uVar3 != 0 && (((uint)in_ecx & 3) != 0)); in_ecx = (uint *)((int)in_ecx + 1)) {
    uVar1 = uVar1 >> 8 ^ *(uint *)(&REFG(undefined, 0x110faf0) + (((byte)*in_ecx ^ uVar1) & 0xff) * 4);
    uVar3 = uVar3 - 1;
  }
  if (0x1f < uVar3) {
    uVar4 = uVar3 >> 5;
    puVar2 = in_ecx;
    do {
      uVar1 = uVar1 ^ *puVar2;
      uVar1 = *(uint *)(&REFG(undefined, 0x110fef0) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11102f0) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x110faf0) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11106f0) + (uVar1 & 0xff) * 4) ^ puVar2[1];
      uVar1 = *(uint *)(&REFG(undefined, 0x110fef0) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11102f0) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x110faf0) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11106f0) + (uVar1 & 0xff) * 4) ^ puVar2[2];
      uVar1 = *(uint *)(&REFG(undefined, 0x110fef0) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11102f0) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x110faf0) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11106f0) + (uVar1 & 0xff) * 4) ^ puVar2[3];
      uVar1 = *(uint *)(&REFG(undefined, 0x110fef0) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11102f0) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x110faf0) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11106f0) + (uVar1 & 0xff) * 4) ^ puVar2[4];
      uVar1 = *(uint *)(&REFG(undefined, 0x110fef0) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11102f0) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x110faf0) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11106f0) + (uVar1 & 0xff) * 4) ^ puVar2[5];
      in_ecx = puVar2 + 8;
      uVar1 = *(uint *)(&REFG(undefined, 0x110fef0) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11102f0) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x110faf0) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11106f0) + (uVar1 & 0xff) * 4) ^ puVar2[6];
      uVar3 = uVar3 - 0x20;
      uVar1 = *(uint *)(&REFG(undefined, 0x110fef0) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11102f0) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x110faf0) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11106f0) + (uVar1 & 0xff) * 4) ^ puVar2[7];
      uVar1 = *(uint *)(&REFG(undefined, 0x110fef0) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11102f0) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x110faf0) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11106f0) + (uVar1 & 0xff) * 4);
      uVar4 = uVar4 - 1;
      puVar2 = in_ecx;
    } while (uVar4 != 0);
  }
  if (3 < uVar3) {
    uVar4 = uVar3 >> 2;
    do {
      uVar1 = uVar1 ^ *in_ecx;
      in_ecx = in_ecx + 1;
      uVar1 = *(uint *)(&REFG(undefined, 0x110fef0) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11102f0) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x110faf0) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11106f0) + (uVar1 & 0xff) * 4);
      uVar3 = uVar3 - 4;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    uVar1 = uVar1 >> 8 ^ *(uint *)(&REFG(undefined, 0x110faf0) + (((byte)*in_ecx ^ uVar1) & 0xff) * 4);
    in_ecx = (uint *)((int)in_ecx + 1);
  }
  return ~uVar1;
}

/* ref: FUN_00c353f0 */
uint F_00c353f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc353f0u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_eax = (uint)gen_a0;
  byte * in_ecx = (byte *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint * puVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = ~(((in_eax & 0xff00) + in_eax * 0x10000) * 0x100 + (in_eax >> 8 & 0xff00) +
           (in_eax >> 0x18));
  uVar4 = param_3;
  for (; (uVar4 != 0 && (((uint)in_ecx & 3) != 0)); in_ecx = in_ecx + 1) {
    uVar3 = uVar3 << 8 ^ *(uint *)(&REFG(undefined, 0x1110af0) + (uVar3 >> 0x18 ^ (uint)*in_ecx) * 4);
    uVar4 = uVar4 - 1;
  }
  puVar2 = (uint *)(in_ecx + -4);
  if (0x1f < uVar4) {
    uVar5 = uVar4 >> 5;
    puVar1 = puVar2;
    do {
      uVar3 = uVar3 ^ puVar1[1];
      uVar3 = *(uint *)(&REFG(undefined, 0x11112f0) + (uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1110ef0) + (uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11116f0) + (uVar3 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x1110af0) + (uVar3 & 0xff) * 4) ^ puVar1[2];
      uVar3 = *(uint *)(&REFG(undefined, 0x11112f0) + (uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1110ef0) + (uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11116f0) + (uVar3 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x1110af0) + (uVar3 & 0xff) * 4) ^ puVar1[3];
      uVar3 = *(uint *)(&REFG(undefined, 0x11112f0) + (uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1110ef0) + (uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11116f0) + (uVar3 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x1110af0) + (uVar3 & 0xff) * 4) ^ puVar1[4];
      uVar3 = *(uint *)(&REFG(undefined, 0x11112f0) + (uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1110ef0) + (uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11116f0) + (uVar3 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x1110af0) + (uVar3 & 0xff) * 4) ^ puVar1[5];
      uVar3 = *(uint *)(&REFG(undefined, 0x11112f0) + (uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1110ef0) + (uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11116f0) + (uVar3 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x1110af0) + (uVar3 & 0xff) * 4) ^ puVar1[6];
      puVar2 = puVar1 + 8;
      uVar3 = *(uint *)(&REFG(undefined, 0x11112f0) + (uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1110ef0) + (uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11116f0) + (uVar3 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x1110af0) + (uVar3 & 0xff) * 4) ^ puVar1[7];
      uVar4 = uVar4 - 0x20;
      uVar3 = *(uint *)(&REFG(undefined, 0x11112f0) + (uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1110ef0) + (uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11116f0) + (uVar3 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x1110af0) + (uVar3 & 0xff) * 4) ^ *puVar2;
      uVar3 = *(uint *)(&REFG(undefined, 0x11112f0) + (uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1110ef0) + (uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11116f0) + (uVar3 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x1110af0) + (uVar3 & 0xff) * 4);
      uVar5 = uVar5 - 1;
      puVar1 = puVar2;
    } while (uVar5 != 0);
  }
  if (3 < uVar4) {
    uVar5 = uVar4 >> 2;
    do {
      uVar3 = uVar3 ^ puVar2[1];
      puVar2 = puVar2 + 1;
      uVar3 = *(uint *)(&REFG(undefined, 0x11112f0) + (uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1110ef0) + (uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11116f0) + (uVar3 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x1110af0) + (uVar3 & 0xff) * 4);
      uVar4 = uVar4 - 4;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  puVar2 = puVar2 + 1;
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    uVar3 = uVar3 << 8 ^ *(uint *)(&REFG(undefined, 0x1110af0) + (uVar3 >> 0x18 ^ (uint)(byte)*puVar2) * 4);
    puVar2 = (uint *)((int)puVar2 + 1);
  }
  uVar3 = ~uVar3;
  return ((uVar3 & 0xff00) + uVar3 * 0x10000) * 0x100 + (uVar3 >> 8 & 0xff00) + (uVar3 >> 0x18);
}

/* ref: FUN_00c35710 */
uint F_00c35710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc35710u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  for (; param_1 != 0; param_1 = param_1 >> 1) {
    if ((param_1 & 1) != 0) {
      uVar1 = uVar1 ^ *param_2;
    }
    param_2 = param_2 + 1;
  }
  return uVar1;
}

/* ref: FUN_00c35730 */
uint F_00c35730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc35730u, gen_a0, gen_a1, 0u, 0u);
  uint * in_eax = (uint *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_2 - (int)in_eax;
  iVar2 = 0x20;
  do {
    uVar1 = F_00c35710(*(undefined4 *)(iVar3 + (int)in_eax),param_2);
    *in_eax = uVar1;
    in_eax = in_eax + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return uVar1;
}

/* ref: FUN_00c35760 */
uint F_00c35760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc35760u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  int iVar1;
  int iVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  if ((int)param_2 < 1) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c) ^ (uint)(uint)(gen_frame + 0x10c));
    return (uint)this;
  }
  iVar2 = 1;
  ((int *)(gen_frame + 0x88))[0] = -0x12477ce0;
  iVar1 = 1;
  do {
    ((int *)(gen_frame + 0x88))[(int)(iVar1)] = iVar2;
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 * 2;
  } while (iVar1 < 0x20);
  F_00c35730(((undefined1 *)(gen_frame + 0x8)),((int *)(gen_frame + 0x88)));
  F_00c35730(((int *)(gen_frame + 0x88)),((undefined1 *)(gen_frame + 0x8)));
  uVar3 = param_2;
  do {
    F_00c35730(((undefined1 *)(gen_frame + 0x8)),((int *)(gen_frame + 0x88)));
    if ((uVar3 & 1) != 0) {
      this = (undefined *)F_00c35710(this,((undefined1 *)(gen_frame + 0x8)));
    }
    if ((int)uVar3 >> 1 == 0) break;
    F_00c35730(((int *)(gen_frame + 0x88)),((undefined1 *)(gen_frame + 0x8)));
    if (((int)uVar3 >> 1 & 1U) != 0) {
      this = (undefined *)F_00c35710(this,((int *)(gen_frame + 0x88)));
    }
    uVar3 = (int)uVar3 >> 2;
  } while (uVar3 != 0);
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return (uint)this ^ param_1;
}

/* ref: FUN_00c35850 */
uint F_00c35850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc35850u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c35760(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c35870 */
uint F_00c35870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc35870u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c35760(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c35890 */
uint F_00c35890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc35890u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  byte * pbVar20;
  uint uVar21;
  
  uVar21 = param_1 >> 0x10;
  uVar3 = param_1 & 0xffff;
  if (param_3 == 1) {
    uVar3 = uVar3 + *param_2;
    if (0xfff0 < uVar3) {
      uVar3 = uVar3 - 0xfff1;
    }
    uVar21 = uVar21 + uVar3;
    if (0xfff0 < uVar21) {
      uVar21 = uVar21 - 0xfff1;
    }
    return uVar21 << 0x10 | uVar3;
  }
  if (param_2 == (byte *)0x0) {
    return 1;
  }
  pbVar20 = param_2;
  uVar19 = param_3;
  if (param_3 < 0x10) {
    for (; uVar19 != 0; uVar19 = uVar19 - 1) {
      uVar3 = uVar3 + *pbVar20;
      pbVar20 = pbVar20 + 1;
      uVar21 = uVar21 + uVar3;
    }
    if (0xfff0 < uVar3) {
      uVar3 = uVar3 - 0xfff1;
    }
    return ((uVar21 / 0xfff1) * 0xf + uVar21) * 0x10000 | uVar3;
  }
  if (0x15af < param_3) {
    param_2 = (byte *)(param_3 / 0x15b0);
    do {
      uVar19 = uVar19 - 0x15b0;
      iVar1 = 0x15b;
      do {
        iVar4 = uVar3 + *pbVar20;
        iVar5 = iVar4 + (uint)pbVar20[1];
        iVar6 = iVar5 + (uint)pbVar20[2];
        iVar7 = iVar6 + (uint)pbVar20[3];
        iVar8 = iVar7 + (uint)pbVar20[4];
        iVar9 = iVar8 + (uint)pbVar20[5];
        iVar10 = iVar9 + (uint)pbVar20[6];
        iVar11 = iVar10 + (uint)pbVar20[7];
        iVar12 = iVar11 + (uint)pbVar20[8];
        iVar13 = iVar12 + (uint)pbVar20[9];
        iVar14 = iVar13 + (uint)pbVar20[10];
        iVar15 = iVar14 + (uint)pbVar20[0xb];
        iVar16 = iVar15 + (uint)pbVar20[0xc];
        iVar17 = iVar16 + (uint)pbVar20[0xd];
        iVar18 = iVar17 + (uint)pbVar20[0xe];
        uVar3 = iVar18 + (uint)pbVar20[0xf];
        uVar21 = uVar21 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 + iVar12 +
                 iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + iVar18 + uVar3;
        pbVar20 = pbVar20 + 0x10;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      uVar3 = uVar3 % 0xfff1;
      uVar21 = uVar21 % 0xfff1;
      param_2 = (byte *)((int)param_2 - 1);
    } while (param_2 != (byte *)0x0);
  }
  if (uVar19 != 0) {
    if (0xf < uVar19) {
      uVar2 = uVar19 >> 4;
      do {
        iVar1 = uVar3 + *pbVar20;
        iVar4 = iVar1 + (uint)pbVar20[1];
        iVar5 = iVar4 + (uint)pbVar20[2];
        iVar6 = iVar5 + (uint)pbVar20[3];
        iVar7 = iVar6 + (uint)pbVar20[4];
        iVar8 = iVar7 + (uint)pbVar20[5];
        iVar9 = iVar8 + (uint)pbVar20[6];
        iVar10 = iVar9 + (uint)pbVar20[7];
        iVar11 = iVar10 + (uint)pbVar20[8];
        iVar12 = iVar11 + (uint)pbVar20[9];
        iVar13 = iVar12 + (uint)pbVar20[10];
        iVar14 = iVar13 + (uint)pbVar20[0xb];
        iVar15 = iVar14 + (uint)pbVar20[0xc];
        iVar16 = iVar15 + (uint)pbVar20[0xd];
        iVar17 = iVar16 + (uint)pbVar20[0xe];
        uVar3 = iVar17 + (uint)pbVar20[0xf];
        uVar19 = uVar19 - 0x10;
        uVar21 = uVar21 + iVar1 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
                 iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + uVar3;
        pbVar20 = pbVar20 + 0x10;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    for (; uVar19 != 0; uVar19 = uVar19 - 1) {
      uVar3 = uVar3 + *pbVar20;
      pbVar20 = pbVar20 + 1;
      uVar21 = uVar21 + uVar3;
    }
    uVar3 = uVar3 % 0xfff1;
    uVar21 = uVar21 % 0xfff1;
  }
  return uVar21 << 0x10 | uVar3;
}

/* ref: FUN_00c35b00 */
uint F_00c35b00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc35b00u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_eax = (uint)gen_a0;
  uint in_ecx = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (in_ecx & 0xffff) * (in_eax % 0xfff1);
  uVar1 = (in_ecx & 0xffff) + 0xfff0 + (param_3 & 0xffff);
  uVar3 = uVar3 + 0xfff1 +
          (((in_ecx >> 0x10) + (uVar3 / 0xfff1) * -0xfff1 + (param_3 >> 0x10)) - in_eax % 0xfff1);
  uVar2 = uVar1;
  if ((0xfff0 < uVar1) && (uVar2 = uVar1 - 0xfff1, 0xfff0 < uVar2)) {
    uVar2 = uVar1 - 0x1ffe2;
  }
  if (0x1ffe1 < uVar3) {
    uVar3 = uVar3 - 0x1ffe2;
  }
  if (0xfff0 < uVar3) {
    uVar3 = uVar3 - 0xfff1;
  }
  return uVar3 << 0x10 | uVar2;
}

/* ref: FUN_00c35ba0 */
uint F_00c35ba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc35ba0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c35b00(param_3,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00c35bc0 */
uint F_00c35bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc35bc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c35b00(param_3,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00c35be0 */
uint F_00c35be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc35be0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  uint * param_5 = (uint *)(uintptr_t)gen_a4;
  ushort * param_6 = (ushort *)(uintptr_t)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  undefined4 * puVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  ushort * puVar12;
  int iVar13;
  bool bVar14;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  ((ushort *)(gen_frame + 0x68))[0] = 0;
  ((ushort *)(gen_frame + 0x68))[1] = 0;
  ((ushort *)(gen_frame + 0x68))[2] = 0;
  ((ushort *)(gen_frame + 0x68))[3] = 0;
  ((ushort *)(gen_frame + 0x68))[4] = 0;
  ((ushort *)(gen_frame + 0x68))[5] = 0;
  ((ushort *)(gen_frame + 0x68))[6] = 0;
  ((ushort *)(gen_frame + 0x68))[7] = 0;
  ((ushort *)(gen_frame + 0x68))[8] = 0;
  ((ushort *)(gen_frame + 0x68))[9] = 0;
  ((ushort *)(gen_frame + 0x68))[10] = 0;
  ((ushort *)(gen_frame + 0x68))[0xb] = 0;
  ((ushort *)(gen_frame + 0x68))[0xc] = 0;
  ((ushort *)(gen_frame + 0x68))[0xd] = 0;
  ((ushort *)(gen_frame + 0x68))[0xe] = 0;
  ((ushort *)(gen_frame + 0x68))[0xf] = 0;
  uVar2 = 0;
  if (param_3 != 0) {
    do {
      ((ushort *)(gen_frame + 0x68))[(int)(*(ushort *)(param_2 + uVar2 * 2))] = ((ushort *)(gen_frame + 0x68))[(int)(*(ushort *)(param_2 + uVar2 * 2))] + 1;
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_3);
  }
  uVar2 = 0xf;
  do {
    if (((ushort *)(gen_frame + 0x68))[(int)(uVar2)] != 0) break;
    uVar2 = uVar2 - 1;
  } while (uVar2 != 0);
  (*(uint *)(gen_frame + 0x40)) = *param_5;
  if (uVar2 < *param_5) {
    (*(uint *)(gen_frame + 0x40)) = uVar2;
  }
  if (uVar2 == 0) {
    *(undefined4 *)*param_4 = 0x140;
    *param_4 = *param_4 + 4;
    *(undefined4 *)*param_4 = 0x140;
    *param_4 = *param_4 + 4;
    *param_5 = 1;
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
    return 0;
  }
  (*(uint *)(gen_frame + 0x3c)) = 1;
  if (1 < uVar2) {
    do {
      if (((ushort *)(gen_frame + 0x68))[(int)((*(uint *)(gen_frame + 0x3c)))] != 0) break;
      (*(uint *)(gen_frame + 0x3c)) = (*(uint *)(gen_frame + 0x3c)) + 1;
    } while ((*(uint *)(gen_frame + 0x3c)) < uVar2);
  }
  if ((*(uint *)(gen_frame + 0x40)) < (*(uint *)(gen_frame + 0x3c))) {
    (*(uint *)(gen_frame + 0x40)) = (*(uint *)(gen_frame + 0x3c));
  }
  iVar13 = 1;
  uVar9 = 1;
  do {
    iVar13 = iVar13 * 2 - (uint)((ushort *)(gen_frame + 0x68))[(int)(uVar9)];
    if (iVar13 < 0) goto LAB_00c35d81;
    uVar9 = uVar9 + 1;
  } while (uVar9 < 0x10);
  if ((0 < iVar13) && ((param_1 == 0 || (uVar2 != 1)))) {
LAB_00c35d81: ;
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
    return 0xffffffff;
  }
  ((ushort *)(gen_frame + 0x48))[1] = 0;
  uVar9 = 2;
  do {
    uVar3 = uVar9 + 2;
    *(short *)((int)((ushort *)(gen_frame + 0x48)) + uVar9 + 2) =
         *(short *)((int)((ushort *)(gen_frame + 0x48)) + uVar9) + *(short *)((int)((ushort *)(gen_frame + 0x68)) + uVar9);
    uVar9 = uVar3;
  } while (uVar3 < 0x1e);
  uVar9 = 0;
  if (param_3 != 0) {
    do {
      if (*(short *)(param_2 + uVar9 * 2) != 0) {
        param_6[((ushort *)(gen_frame + 0x48))[(int)(*(ushort *)(param_2 + uVar9 * 2))]] = (ushort)uVar9;
        ((ushort *)(gen_frame + 0x48))[(int)(*(ushort *)(param_2 + uVar9 * 2))] =
             ((ushort *)(gen_frame + 0x48))[(int)(*(ushort *)(param_2 + uVar9 * 2))] + 1;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < param_3);
  }
  if (param_1 == 0) {
    (*(ushort * PTR32 *)(gen_frame + 0x14)) = param_6;
    (*(ushort * PTR32 *)(gen_frame + 0x20)) = param_6;
    (*(int *)(gen_frame + 0x18)) = 0x13;
  }
  else if (param_1 == 1) {
    (*(ushort * PTR32 *)(gen_frame + 0x20)) = (ushort *)0x1111c46;
    (*(ushort * PTR32 *)(gen_frame + 0x14)) = (ushort *)0x1111c06;
    (*(int *)(gen_frame + 0x18)) = 0x100;
  }
  else {
    (*(ushort * PTR32 *)(gen_frame + 0x20)) = (ushort *)&REFG(undefined, 0x1111ec8);
    (*(ushort * PTR32 *)(gen_frame + 0x14)) = (ushort *)&REFG(undefined, 0x1111e88);
    (*(int *)(gen_frame + 0x18)) = -1;
  }
  (*(int *)(gen_frame + 0x30)) = *param_4;
  bVar5 = (byte)(*(uint *)(gen_frame + 0x40));
  (*(uint *)(gen_frame + 0xc)) = 1 << (bVar5 & 0x1f);
  uVar3 = 0;
  (*(uint *)(gen_frame + 0x1c)) = 0xffffffff;
  (*(uint *)(gen_frame + 0x2c)) = 0;
  uVar9 = (*(uint *)(gen_frame + 0xc)) - 1;
  if (param_1 == 1) {
    bVar14 = (*(uint *)(gen_frame + 0xc)) < 0x354;
  }
  else {
    if (param_1 != 2) goto LAB_00c35e0c;
    bVar14 = (*(uint *)(gen_frame + 0xc)) < 0x250;
  }
  if (!bVar14) {
LAB_00c36040: ;
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
    return 1;
  }
LAB_00c35e0c: ;
  (*(ushort * PTR32 *)(gen_frame + 0x24)) = param_6;
  (*(uint *)(gen_frame + 0x38)) = (*(uint *)(gen_frame + 0xc));
LAB_00c35e14: ;
  do {
    bVar11 = (byte)uVar3;
    bVar8 = (char)(*(uint *)(gen_frame + 0x3c)) - bVar11;
    uVar1 = *(*(ushort * PTR32 *)(gen_frame + 0x24));
    if ((int)(uint)uVar1 < (*(int *)(gen_frame + 0x18))) {
      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x44)) + 0)) = (ushort)bVar8 << 8;
LAB_00c35e54: ;
      (*(uint *)(gen_frame + 0x44)) = CONCAT22(uVar1,(ushort)(*(uint *)(gen_frame + 0x44)));
    }
    else {
      if ((int)(uint)uVar1 <= (*(int *)(gen_frame + 0x18))) {
        (*(uint *)(gen_frame + 0x44)) = CONCAT31((uint3)bVar8,0x60);
        uVar1 = 0;
        goto LAB_00c35e54;
      }
      (*(uint *)(gen_frame + 0x44)) = CONCAT22((*(ushort * PTR32 *)(gen_frame + 0x20))[*(*(ushort * PTR32 *)(gen_frame + 0x24))],CONCAT11(bVar8,(char)(*(ushort * PTR32 *)(gen_frame + 0x14))[*(*(ushort * PTR32 *)(gen_frame + 0x24))]));
    }
    iVar13 = 1 << ((char)(*(uint *)(gen_frame + 0x3c)) - bVar11 & 0x1f);
    puVar6 = ((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x30)) + (((*(uint *)(gen_frame + 0x2c)) >> (bVar11 & 0x1f)) + (*(uint *)(gen_frame + 0xc))) * 4)));
    uVar4 = (*(uint *)(gen_frame + 0xc));
    do {
      puVar6 = puVar6 - iVar13;
      uVar4 = uVar4 - iVar13;
      *puVar6 = (*(uint *)(gen_frame + 0x44));
    } while (uVar4 != 0);
    for (uVar4 = 1 << ((char)(*(uint *)(gen_frame + 0x3c)) - 1U & 0x1f); ((*(uint *)(gen_frame + 0x2c)) & uVar4) != 0; uVar4 = uVar4 >> 1) {
    }
    if (uVar4 == 0) {
      (*(uint *)(gen_frame + 0x2c)) = 0;
    }
    else {
      (*(uint *)(gen_frame + 0x2c)) = (uVar4 - 1 & (*(uint *)(gen_frame + 0x2c))) + uVar4;
    }
    (*(ushort * PTR32 *)(gen_frame + 0x24)) = (*(ushort * PTR32 *)(gen_frame + 0x24)) + 1;
    puVar12 = ((ushort *)(gen_frame + 0x68)) + (*(uint *)(gen_frame + 0x3c));
    *puVar12 = *puVar12 - 1;
    if (*puVar12 == 0) {
      if ((*(uint *)(gen_frame + 0x3c)) == uVar2) {
        (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x44)) + 0)) = CONCAT11((char)(*(uint *)(gen_frame + 0x3c)) - bVar11,0x40);
        (*(uint *)(gen_frame + 0x44)) = (uint)(ushort)(*(uint *)(gen_frame + 0x44));
        uVar2 = (*(uint *)(gen_frame + 0x2c));
        iVar13 = (*(int *)(gen_frame + 0x30));
        uVar4 = (*(uint *)(gen_frame + 0x3c));
        goto joined_r0x00c35fbc;
      }
      (*(uint *)(gen_frame + 0x3c)) = (uint)*(ushort *)(param_2 + (uint)*(*(ushort * PTR32 *)(gen_frame + 0x24)) * 2);
    }
  } while (((*(uint *)(gen_frame + 0x3c)) <= (*(uint *)(gen_frame + 0x40))) || (uVar4 = uVar9 & (*(uint *)(gen_frame + 0x2c)), uVar4 == (*(uint *)(gen_frame + 0x1c))));
  (*(int *)(gen_frame + 0x30)) = (*(int *)(gen_frame + 0x30)) + (*(uint *)(gen_frame + 0xc)) * 4;
  if (uVar3 == 0) {
    uVar3 = (*(uint *)(gen_frame + 0x40));
  }
  iVar7 = (*(uint *)(gen_frame + 0x3c)) - uVar3;
  uVar10 = uVar3 + iVar7;
  iVar13 = 1 << ((byte)iVar7 & 0x1f);
  if (uVar10 < uVar2) {
    puVar12 = ((ushort *)(gen_frame + 0x68)) + uVar10;
    do {
      uVar1 = *puVar12;
      if ((int)(iVar13 - (uint)uVar1) < 1) break;
      uVar10 = uVar10 + 1;
      iVar7 = iVar7 + 1;
      puVar12 = puVar12 + 1;
      iVar13 = (iVar13 - (uint)uVar1) * 2;
    } while (uVar10 < uVar2);
  }
  (*(uint *)(gen_frame + 0xc)) = 1 << ((byte)iVar7 & 0x1f);
  (*(uint *)(gen_frame + 0x38)) = (*(uint *)(gen_frame + 0x38)) + (*(uint *)(gen_frame + 0xc));
  if (param_1 == 1) {
    bVar14 = (*(uint *)(gen_frame + 0x38)) < 0x354;
LAB_00c35f79: ;
    if (!bVar14) goto LAB_00c36040;
  }
  else if (param_1 == 2) {
    bVar14 = (*(uint *)(gen_frame + 0x38)) < 0x250;
    goto LAB_00c35f79;
  }
  *(byte *)(*param_4 + uVar4 * 4) = (byte)iVar7;
  *(byte *)(*param_4 + 1 + uVar4 * 4) = bVar5;
  *(short *)(*param_4 + 2 + uVar4 * 4) = (short)((*(int *)(gen_frame + 0x30)) - *param_4 >> 2);
  (*(uint *)(gen_frame + 0x1c)) = uVar4;
  goto LAB_00c35e14;
joined_r0x00c35fbc: ;
  if (uVar2 == 0) {
LAB_00c36013: ;
    *param_4 = *param_4 + (*(uint *)(gen_frame + 0x38)) * 4;
    *param_5 = (*(uint *)(gen_frame + 0x40));
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
    return 0;
  }
  if ((uVar3 != 0) && ((uVar9 & uVar2) != (*(uint *)(gen_frame + 0x1c)))) {
    iVar13 = *param_4;
    uVar3 = 0;
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x44)) + 0)) = CONCAT11(bVar5,(undefined1)(*(uint *)(gen_frame + 0x44)));
    (*(uint *)(gen_frame + 0x44)) = (uint)(ushort)(*(uint *)(gen_frame + 0x44));
    uVar4 = (*(uint *)(gen_frame + 0x40));
  }
  *((uint *)GEN_TOP((iVar13 + (uVar2 >> ((byte)uVar3 & 0x1f)) * 4))) = (*(uint *)(gen_frame + 0x44));
  for (uVar10 = 1 << ((char)uVar4 - 1U & 0x1f); (uVar2 & uVar10) != 0; uVar10 = uVar10 >> 1) {
  }
  if (uVar10 == 0) goto LAB_00c36013;
  uVar2 = (uVar2 & uVar10 - 1) + uVar10;
  goto joined_r0x00c35fbc;
}

/* ref: FUN_00c36080 */
uint F_00c36080(unsigned int gen_a0)
{
  GEN_ENTER(0xc36080u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (uint)(&REFG(undefined * PTR32, 0x1111b5c))[-param_1];
}

/* ref: FUN_00c360a0 */
uint F_00c360a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc360a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  uint uVar1;
  
  if (0x10000 < (uint)(param_2 * param_3)) {
    uVar1 = F_00406a50(param_2 * param_3);
    return uVar1;
  }
  return *(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1d8;
}

/* ref: FUN_00c360e0 */
uint F_00c360e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc360e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = param_2;
  if (*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1d8U != param_2) {
    uVar2 = F_00406b30(param_2);
    uVar1 = (uint)uVar2;
  }
  return uVar1;
}

/* ref: FUN_00c36110 */
unsigned int F_00c36110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc36110u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte * pbVar1;
  undefined1 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  undefined1 uVar12;
  byte * pbVar13;
  uint uVar14;
  int iVar15;
  undefined1 * puVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  undefined1 * puVar20;
  undefined1 * puVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  byte * local_8;
  
  puVar3 = (undefined4 *)param_1[7];
  local_8 = (byte *)(*param_1 + -1);
  uVar19 = puVar3[0xe];
  pbVar1 = local_8 + param_1[1] + -5;
  puVar20 = (undefined1 *)(param_1[3] + -1);
  puVar16 = puVar20 + (param_1[4] - param_2);
  puVar2 = puVar20 + param_1[4] + -0x101;
  iVar4 = puVar3[10];
  uVar5 = puVar3[0xb];
  uVar6 = puVar3[0xc];
  iVar24 = puVar3[0xd];
  iVar7 = puVar3[0x13];
  iVar8 = puVar3[0x14];
  uVar9 = puVar3[0x15];
  uVar10 = puVar3[0x16];
  uVar22 = puVar3[0xf];
LAB_00c36198: ;
  if (uVar22 < 0xf) {
    pbVar13 = local_8 + 1;
    local_8 = local_8 + 2;
    uVar19 = uVar19 + ((uint)*pbVar13 << ((byte)uVar22 & 0x1f)) +
             ((uint)*local_8 << ((byte)uVar22 + 8 & 0x1f));
    uVar22 = uVar22 + 0x10;
  }
  uVar17 = *((uint *)GEN_TOP((iVar7 + ((1 << ((byte)uVar9 & 0x1f)) - 1U & uVar19) * 4)));
  uVar19 = uVar19 >> ((byte)(uVar17 >> 8) & 0x1f);
  uVar22 = uVar22 - (uVar17 >> 8 & 0xff);
  cVar11 = (char)uVar17;
  while (cVar11 != '\0') {
    if ((uVar17 & 0x10) != 0) {
      param_2 = uVar17 >> 0x10;
      uVar17 = uVar17 & 0xf;
      if (uVar17 != 0) {
        if (uVar22 < uVar17) {
          local_8 = local_8 + 1;
          uVar19 = uVar19 + ((uint)*local_8 << ((byte)uVar22 & 0x1f));
          uVar22 = uVar22 + 8;
        }
        param_2 = param_2 + ((1 << (sbyte)uVar17) - 1U & uVar19);
        uVar19 = uVar19 >> (sbyte)uVar17;
        uVar22 = uVar22 - uVar17;
      }
      if (uVar22 < 0xf) {
        pbVar13 = local_8 + 1;
        local_8 = local_8 + 2;
        uVar19 = uVar19 + ((uint)*pbVar13 << ((byte)uVar22 & 0x1f)) +
                 ((uint)*local_8 << ((byte)uVar22 + 8 & 0x1f));
        uVar22 = uVar22 + 0x10;
      }
      uVar17 = *((uint *)GEN_TOP((iVar8 + ((1 << ((byte)uVar10 & 0x1f)) - 1U & uVar19) * 4)));
      uVar19 = uVar19 >> ((byte)(uVar17 >> 8) & 0x1f);
      uVar22 = uVar22 - (uVar17 >> 8 & 0xff);
      goto joined_r0x00c3629a;
    }
    if ((uVar17 & 0x40) != 0) {
      if ((uVar17 & 0x20) == 0) {
        param_1[6] = (int)"invalid literal/length code";
        goto LAB_00c364b6;
      }
      *puVar3 = 0xb;
      goto LAB_00c364bf;
    }
    uVar17 = *((uint *)GEN_TOP((iVar7 + (((1 << ((byte)uVar17 & 0x1f)) - 1U & uVar19) + (uVar17 >> 0x10)) * 4
                      )));
    uVar19 = uVar19 >> ((byte)(uVar17 >> 8) & 0x1f);
    uVar22 = uVar22 - (uVar17 >> 8 & 0xff);
    cVar11 = (char)uVar17;
  }
  uVar12 = (undefined1)(uVar17 >> 0x10);
  goto LAB_00c3646a;
joined_r0x00c3629a: ;
  if ((uVar17 & 0x10) != 0) goto LAB_00c362d6;
  if ((uVar17 & 0x40) != 0) {
    param_1[6] = (int)"invalid distance code";
    goto LAB_00c364b6;
  }
  uVar17 = *((uint *)GEN_TOP((iVar8 + (((1 << ((byte)uVar17 & 0x1f)) - 1U & uVar19) + (uVar17 >> 0x10)) * 4)));
  uVar19 = uVar19 >> ((byte)(uVar17 >> 8) & 0x1f);
  uVar22 = uVar22 - (uVar17 >> 8 & 0xff);
  goto joined_r0x00c3629a;
LAB_00c362d6: ;
  uVar14 = uVar17 & 0xf;
  uVar23 = uVar22;
  pbVar13 = local_8;
  if (uVar22 < uVar14) {
    uVar23 = uVar22 + 8;
    uVar19 = uVar19 + ((uint)local_8[1] << ((byte)uVar22 & 0x1f));
    pbVar13 = local_8 + 1;
    if (uVar23 < uVar14) {
      uVar19 = uVar19 + ((uint)local_8[2] << ((byte)uVar23 & 0x1f));
      uVar23 = uVar22 + 0x10;
      pbVar13 = local_8 + 2;
    }
  }
  local_8 = pbVar13;
  uVar22 = uVar23 - uVar14;
  uVar23 = (1 << (sbyte)uVar14) - 1U & uVar19;
  uVar19 = uVar19 >> (sbyte)uVar14;
  uVar23 = (uVar17 >> 0x10) + uVar23;
  if ((uint)((int)puVar20 - (int)puVar16) < uVar23) {
    uVar17 = uVar23 - ((int)puVar20 - (int)puVar16);
    if ((uVar5 < uVar17) && (puVar3[0x6f0] != 0)) {
      param_1[6] = (int)"invalid distance too far back";
LAB_00c364b6: ;
      *puVar3 = 0x1d;
LAB_00c364bf: ;
      iVar4 = (int)local_8 - (uVar22 >> 3);
      iVar24 = uVar22 + (uVar22 >> 3) * -8;
      *param_1 = iVar4 + 1;
      param_1[3] = (int)(puVar20 + 1);
      param_1[4] = (int)(puVar2 + (0x101 - (int)puVar20));
      param_1[1] = (int)(pbVar1 + (5 - iVar4));
      puVar3[0xf] = iVar24;
      puVar3[0xe] = uVar19 & (1 << ((byte)iVar24 & 0x1f)) - 1U;
      return 0;
    }
    iVar15 = iVar24 + -1;
    if (uVar6 == 0) {
      iVar15 = iVar15 + (iVar4 - uVar17);
      if (uVar17 < param_2) {
        param_2 = param_2 - uVar17;
        do {
          puVar21 = (undefined1 *)(iVar15 + 1);
          iVar15 = iVar15 + 1;
          puVar20 = puVar20 + 1;
          uVar17 = uVar17 - 1;
          *puVar20 = *puVar21;
        } while (uVar17 != 0);
LAB_00c363da: ;
        iVar15 = (int)puVar20 - uVar23;
      }
    }
    else if (uVar6 < uVar17) {
      uVar14 = uVar17 - uVar6;
      iVar15 = iVar15 + (uVar6 - uVar17) + iVar4;
      if (uVar14 < param_2) {
        param_2 = param_2 - uVar14;
        iVar15 = iVar15 - (int)puVar20;
        do {
          puVar21 = puVar20 + iVar15 + 1;
          puVar20 = puVar20 + 1;
          uVar14 = uVar14 - 1;
          *puVar20 = *puVar21;
        } while (uVar14 != 0);
        iVar15 = iVar24 + -1;
        if (uVar6 < param_2) {
          param_2 = param_2 - uVar6;
          uVar17 = uVar6;
          do {
            puVar21 = (undefined1 *)(iVar15 + 1);
            iVar15 = iVar15 + 1;
            puVar20 = puVar20 + 1;
            uVar17 = uVar17 - 1;
            *puVar20 = *puVar21;
          } while (uVar17 != 0);
          goto LAB_00c363da;
        }
      }
    }
    else {
      iVar15 = iVar15 + (uVar6 - uVar17);
      if (uVar17 < param_2) {
        param_2 = param_2 - uVar17;
        do {
          puVar21 = (undefined1 *)(iVar15 + 1);
          iVar15 = iVar15 + 1;
          puVar20 = puVar20 + 1;
          uVar17 = uVar17 - 1;
          *puVar20 = *puVar21;
        } while (uVar17 != 0);
        goto LAB_00c363da;
      }
    }
    if (2 < param_2) {
      iVar18 = (param_2 - 3) / 3 + 1;
      do {
        param_2 = param_2 - 3;
        puVar20[1] = *(undefined1 *)(iVar15 + 1);
        puVar20[2] = *(undefined1 *)(iVar15 + 2);
        puVar21 = (undefined1 *)(iVar15 + 3);
        iVar15 = iVar15 + 3;
        puVar20 = puVar20 + 3;
        iVar18 = iVar18 + -1;
        *puVar20 = *puVar21;
      } while (iVar18 != 0);
    }
    if (param_2 == 0) goto LAB_00c3646c;
    puVar20 = puVar20 + 1;
    *puVar20 = *(undefined1 *)(iVar15 + 1);
    if (param_2 < 2) goto LAB_00c3646c;
    uVar12 = *(undefined1 *)(iVar15 + 2);
  }
  else {
    iVar15 = (int)puVar20 - uVar23;
    do {
      puVar21 = puVar20;
      iVar18 = iVar15;
      puVar21[1] = *(undefined1 *)(iVar18 + 1);
      puVar21[2] = *(undefined1 *)(iVar18 + 2);
      puVar20 = puVar21 + 3;
      *puVar20 = *(undefined1 *)(iVar18 + 3);
      param_2 = param_2 - 3;
      iVar15 = iVar18 + 3;
    } while (2 < param_2);
    if (param_2 == 0) goto LAB_00c3646c;
    puVar20 = puVar21 + 4;
    *puVar20 = *(undefined1 *)(iVar18 + 4);
    if (param_2 < 2) goto LAB_00c3646c;
    uVar12 = *(undefined1 *)(iVar18 + 5);
  }
LAB_00c3646a: ;
  puVar20 = puVar20 + 1;
  *puVar20 = uVar12;
LAB_00c3646c: ;
  if ((pbVar1 <= local_8) || (puVar2 <= puVar20)) goto LAB_00c364bf;
  goto LAB_00c36198;
}

/* ref: FUN_00c36520 */
uint F_00c36520(unsigned int gen_a0)
{
  GEN_ENTER(0xc36520u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  if ((param_1 != 0) && (puVar2 = *(undefined4 * PTR32 *)(param_1 + 0x1c), puVar2 != (undefined4 *)0x0)) {
    puVar2[7] = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x30) = 1;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[3] = 0;
    puVar2[8] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0;
    puVar1 = puVar2 + 0x14c;
    puVar2[5] = 0x8000;
    puVar2[0x1b] = puVar1;
    puVar2[0x14] = puVar1;
    puVar2[0x13] = puVar1;
    puVar2[0x6f0] = 1;
    puVar2[0x6f1] = 0xffffffff;
    return 0;
  }
  return 0xfffffffe;
}

/* ref: FUN_00c365a0 */
uint F_00c365a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc365a0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((param_1 == 0) || (iVar1 = *(int *)(param_1 + 0x1c), iVar1 == 0)) {
    return 0xfffffffe;
  }
  if ((int)param_2 < 0) {
    iVar2 = 0;
    uVar3 = -param_2;
  }
  else {
    iVar2 = ((int)param_2 >> 4) + 1;
    uVar3 = param_2;
    if ((int)param_2 < 0x30) {
      uVar3 = param_2 & 0xf;
    }
  }
  if ((uVar3 != 0) && (((int)uVar3 < 8 || (0xf < (int)uVar3)))) {
    return 0xfffffffe;
  }
  if ((*(int *)(iVar1 + 0x34) != 0) && (*(uint *)(iVar1 + 0x24) != uVar3)) {
    ((code *)*(gen_code32 *)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),*(int *)(iVar1 + 0x34));
    *(undefined4 *)(iVar1 + 0x34) = 0;
  }
  *(int *)(iVar1 + 8) = iVar2;
  *(uint *)(iVar1 + 0x24) = uVar3;
  uVar3 = F_00c36520(param_1);
  return uVar3;
}

/* ref: FUN_00c36630 */
uint F_00c36630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc36630u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  char * param_3 = (char *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  uint uVar1;
  uint uVar2;
  
  if (((param_3 == (char *)0x0) || (*param_3 != '1')) || (param_4 != 0x38)) {
    return 0xfffffffa;
  }
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x20) == 0) {
    *(gen_code32 *)(param_1 + 0x20) = ((code *)REFP(0xc360a0));
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    *(gen_code32 *)(param_1 + 0x24) = ((code *)REFP(0xc360e0));
  }
  uVar1 = ((code *)*(gen_code32 *)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),1,0x1bcc);
  if (uVar1 == 0) {
    return 0xfffffffc;
  }
  *(uint *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(uVar1 + 0x34) = 0;
  uVar2 = F_00c365a0(param_1,param_2);
  if (uVar2 != 0) {
    ((code *)*(gen_code32 *)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),uVar1);
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return uVar2;
}

/* ref: FUN_00c366f0 */
uint F_00c366f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc366f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c36630(param_1,0xf,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c36710 */
uint F_00c36710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc36710u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (((*(int *)&gen_args[0]) != 0) && (iVar2 = *(int *)((*(int *)&gen_args[0]) + 0x1c), iVar2 != 0)) {
    if ((*(int *)&gen_args[1]) < 0) {
      *(undefined4 *)(iVar2 + 0x38) = 0;
      *(undefined4 *)(iVar2 + 0x3c) = 0;
      return 0;
    }
    if ((*(int *)&gen_args[1]) < 0x11) {
      iVar3 = *(int *)(iVar2 + 0x3c);
      uVar1 = iVar3 + (*(int *)&gen_args[1]);
      if (uVar1 < 0x21) {
        *(uint *)(iVar2 + 0x3c) = uVar1;
        *(int *)(iVar2 + 0x38) =
             *(int *)(iVar2 + 0x38) +
             (((1 << ((byte)(*(int *)&gen_args[1]) & 0x1f)) - 1U & (*(uint *)&gen_args[2])) << ((byte)iVar3 & 0x1f));
        return 0;
      }
    }
    return 0xfffffffe;
  }
  return 0xfffffffe;
}

/* ref: FUN_00c36780 */
unsigned int F_00c36780(unsigned int gen_a0)
{
  GEN_ENTER(0xc36780u, gen_a0, 0u, 0u, 0u);
  int in_eax = (int)gen_a0;
  *(undefined * PTR32 *)(in_eax + 0x4c) = &REFG(undefined, 0x1111f88);
  *(undefined4 *)(in_eax + 0x54) = 9;
  *(undefined * PTR32 *)(in_eax + 0x50) = &REFG(undefined, 0x1111f08);
  *(undefined4 *)(in_eax + 0x58) = 5;
  return 0;
}

/* ref: FUN_00c367a0 */
uint F_00c367a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc367a0u, gen_a0, gen_a1, 0u, 0u);
  int in_eax = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_2 + 0x1c);
  if (*(int *)(iVar1 + 0x34) == 0) {
    uVar2 = ((code *)*(gen_code32 *)(param_2 + 0x20))
                      (*(undefined4 *)(param_2 + 0x28),
                       1 << ((byte)*(undefined4 *)(iVar1 + 0x24) & 0x1f),1);
    *(uint *)(iVar1 + 0x34) = uVar2;
    if (uVar2 == 0) {
      return 1;
    }
  }
  if (*(int *)(iVar1 + 0x28) == 0) {
    *(undefined4 *)(iVar1 + 0x30) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    *(int *)(iVar1 + 0x28) = 1 << ((byte)*(undefined4 *)(iVar1 + 0x24) & 0x1f);
  }
  uVar3 = in_eax - *(int *)(param_2 + 0x10);
  uVar2 = *(uint *)(iVar1 + 0x28);
  if (uVar2 <= uVar3) {
    F_00c46aa0(*(undefined4 *)(iVar1 + 0x34),*(int *)(param_2 + 0xc) - uVar2,uVar2);
    *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(iVar1 + 0x28);
    *(undefined4 *)(iVar1 + 0x30) = 0;
    return 0;
  }
  uVar2 = uVar2 - *(int *)(iVar1 + 0x30);
  if (uVar3 < uVar2) {
    uVar2 = uVar3;
  }
  F_00c46aa0(*(int *)(iVar1 + 0x34) + *(int *)(iVar1 + 0x30),*(int *)(param_2 + 0xc) - uVar3,uVar2);
  iVar4 = uVar3 - uVar2;
  if (iVar4 != 0) {
    F_00c46aa0(*(undefined4 *)(iVar1 + 0x34),*(int *)(param_2 + 0xc) - iVar4,iVar4);
    *(int *)(iVar1 + 0x30) = iVar4;
    *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(iVar1 + 0x28);
    return 0;
  }
  *(int *)(iVar1 + 0x30) = *(int *)(iVar1 + 0x30) + uVar2;
  if (*(uint *)(iVar1 + 0x30) == *(uint *)(iVar1 + 0x28)) {
    *(undefined4 *)(iVar1 + 0x30) = 0;
  }
  if (*(uint *)(iVar1 + 0x2c) < *(uint *)(iVar1 + 0x28)) {
    *(uint *)(iVar1 + 0x2c) = *(uint *)(iVar1 + 0x2c) + uVar2;
  }
  return 0;
}

/* ref: FUN_00c368a0 */
uint F_00c368a0(unsigned int gen_a0)
{
  GEN_ENTER(0xc368a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  
  if (((param_1 != 0) && (*(int *)(param_1 + 0x1c) != 0)) &&
     ((code *)*(gen_code32 *)(param_1 + 0x24) != (code *)0x0)) {
    iVar1 = *((int *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0x34)));
    if (iVar1 != 0) {
      ((code *)*(gen_code32 *)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),iVar1);
    }
    ((code *)*(gen_code32 *)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = 0;
    return 0;
  }
  return 0xfffffffe;
}

/* ref: FUN_00c36900 */
uint F_00c36900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc36900u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if ((param_1 == 0) || (piVar1 = *(int * PTR32 *)(param_1 + 0x1c), piVar1 == (int *)0x0)) {
    return 0xfffffffe;
  }
  if (piVar1[2] == 0) {
    if (*piVar1 != 10) goto LAB_00c36965;
  }
  else if (*piVar1 != 10) {
    return 0xfffffffe;
  }
  iVar4 = param_2;
  uVar3 = param_3;
  uVar2 = F_00c35890(0,0,0);
  uVar3 = F_00c35890(uVar2,iVar4,uVar3);
  if (uVar3 != piVar1[6]) {
    return 0xfffffffd;
  }
LAB_00c36965: ;
  uVar3 = F_00c367a0(*(undefined4 *)(param_1 + 0x10),param_1);
  if (uVar3 != 0) {
    *piVar1 = 0x1e;
    return 0xfffffffc;
  }
  uVar3 = piVar1[10];
  if (param_3 <= uVar3) {
    F_00c46aa0((piVar1[0xd] - param_3) + uVar3,param_2,param_3);
    piVar1[0xb] = param_3;
    piVar1[3] = 1;
    return 0;
  }
  F_00c46aa0(piVar1[0xd],(param_2 - uVar3) + param_3,uVar3);
  piVar1[0xb] = piVar1[10];
  piVar1[3] = 1;
  return 0;
}

/* ref: FUN_00c369f0 */
uint F_00c369f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc369f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  
  if (((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0x1c), iVar1 != 0)) &&
     ((*(byte *)(iVar1 + 8) & 2) != 0)) {
    *(int *)(iVar1 + 0x20) = param_2;
    *(undefined4 *)(param_2 + 0x30) = 0;
    return 0;
  }
  return 0xfffffffe;
}

/* ref: FUN_00c36a30 */
uint F_00c36a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc36a30u, gen_a0, gen_a1, gen_a2, 0u);
  int in_esi = (int)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (param_3 != 0) {
    do {
      if (3 < uVar2) break;
      if ((uint)*(byte *)(uVar1 + in_esi) == (-(uint)(uVar2 < 2) & 0xffffff01) + 0xff) {
        uVar2 = uVar2 + 1;
      }
      else if (*(byte *)(uVar1 + in_esi) == 0) {
        uVar2 = 4 - uVar2;
      }
      else {
        uVar2 = 0;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_3);
  }
  *param_2 = uVar2;
  return uVar1;
}

/* ref: FUN_00c36a90 */
uint F_00c36a90(unsigned int gen_a0)
{
  GEN_ENTER(0xc36a90u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  if (((*(int * PTR32 *)&gen_args[0]) == (int *)0x0) || (piVar1 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[7])), piVar1 == (int *)0x0)) {
    return 0xfffffffe;
  }
  if (((*(int * PTR32 *)&gen_args[0])[1] == 0) && ((uint)piVar1[0xf] < 8)) {
    return 0xfffffffb;
  }
  if (*piVar1 != 0x1f) {
    uVar3 = piVar1[0xf] & 7;
    piVar1[0xe] = piVar1[0xe] << (sbyte)uVar3;
    uVar3 = piVar1[0xf] - uVar3;
    iVar4 = 0;
    *piVar1 = 0x1f;
    piVar1[0xf] = uVar3;
    if (7 < uVar3) {
      uVar5 = piVar1[0xe];
      do {
        uVar3 = uVar3 - 8;
        *((char *)GEN_TOP(((int)&(*(int * PTR32 *)&gen_args[0]) + iVar4))) = (char)piVar1[0xe];
        uVar5 = uVar5 >> 8;
        iVar4 = iVar4 + 1;
        piVar1[0xe] = uVar5;
        piVar1[0xf] = uVar3;
      } while (7 < uVar3);
    }
    piVar1[0x1a] = 0;
    F_00c36a30(&(*(int * PTR32 *)&gen_args[0]),piVar1 + 0x1a,iVar4);
  }
  uVar3 = F_00c36a30(*piVar2,piVar1 + 0x1a,piVar2[1]);
  piVar2[2] = piVar2[2] + uVar3;
  piVar2[1] = piVar2[1] - uVar3;
  *piVar2 = *piVar2 + uVar3;
  iVar4 = piVar2[2];
  if (piVar1[0x1a] != 4) {
    return 0xfffffffd;
  }
  (*(int * PTR32 *)&gen_args[0]) = (int *)piVar2[5];
  F_00c36520(piVar2);
  piVar2[2] = iVar4;
  piVar2[5] = (int)(*(int * PTR32 *)&gen_args[0]);
  *piVar1 = 0xb;
  return 0;
}

/* ref: FUN_00c36b80 */
uint F_00c36b80(unsigned int gen_a0)
{
  GEN_ENTER(0xc36b80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  
  if ((param_1 == 0) || (piVar1 = *(int * PTR32 *)(param_1 + 0x1c), piVar1 == (int *)0x0)) {
    return 0xfffffffe;
  }
  if ((*piVar1 == 0xd) && (piVar1[0xf] == 0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00c36bc0 */
uint F_00c36bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc36bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  puVar5 = param_2;
  if ((((param_1 == (undefined4 *)0x0) || (param_2 == (undefined4 *)0x0)) ||
      (iVar1 = param_2[7], iVar1 == 0)) ||
     (((code *)param_2[8] == (code *)0x0 || (param_2[9] == 0)))) {
    return 0xfffffffe;
  }
  uVar3 = (*(code *)param_2[8])(param_2[10],1,0x1bcc);
  if (uVar3 == 0) {
    return 0xfffffffc;
  }
  param_2 = (undefined4 *)0x0;
  if ((*(int *)(iVar1 + 0x34) != 0) &&
     (param_2 = ((undefined4 *)GEN_TOP((*(code *)puVar5[8])(puVar5[10],1 << ((byte)*(undefined4 *)(iVar1 + 0x24) & 0x1f),1)))
     , param_2 == (undefined4 *)0x0)) {
    (*(code *)puVar5[9])(puVar5[10],uVar3);
    return 0xfffffffc;
  }
  puVar6 = param_1;
  for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  F_00c46aa0(uVar3,iVar1,0x1bcc);
  uVar2 = *(uint *)(iVar1 + 0x4c);
  if ((iVar1 + 0x530U <= uVar2) && (uVar2 <= iVar1 + 0x1bbcU)) {
    *(uint *)(uVar3 + 0x4c) = uVar3 + 0x530 + ((int)((uVar2 - iVar1) + -0x530) >> 2) * 4;
    *(uint *)(uVar3 + 0x50) = uVar3 + 0x530 + ((*(int *)(iVar1 + 0x50) - iVar1) + -0x530 >> 2) * 4;
  }
  *(uint *)(uVar3 + 0x6c) = uVar3 + 0x530 + ((*(int *)(iVar1 + 0x6c) - iVar1) + -0x530 >> 2) * 4;
  if (param_2 != (undefined4 *)0x0) {
    F_00c46aa0(param_2,*(undefined4 *)(iVar1 + 0x34),
               1 << ((byte)*(undefined4 *)(iVar1 + 0x24) & 0x1f));
  }
  *(undefined4 * PTR32 *)(uVar3 + 0x34) = param_2;
  param_1[7] = uVar3;
  return 0;
}

/* ref: FUN_00c36d20 */
uint F_00c36d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc36d20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x1c) != 0)) {
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0x1bc0))) = 1;
    return 0xfffffffd;
  }
  return 0xfffffffe;
}

/* ref: FUN_00c36d50 */
uint F_00c36d50(unsigned int gen_a0)
{
  GEN_ENTER(0xc36d50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  
  if ((param_1 == 0) || (piVar1 = *(int * PTR32 *)(param_1 + 0x1c), piVar1 == (int *)0x0)) {
    return 0xffff0000;
  }
  if (*piVar1 == 0xf) {
    return piVar1[0x6f1] * 0x10000 + piVar1[0x10];
  }
  if (*piVar1 == 0x18) {
    return piVar1[0x6f1] * 0x10000 + (piVar1[0x6f2] - piVar1[0x10]);
  }
  return piVar1[0x6f1] << 0x10;
}

/* ref: FUN_00c36dc0 */
uint F_00c36dc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc36dc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar1 = F_00c35130(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c36df0 */
uint F_00c36df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc36df0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined2 uVar1;
  uint * in_eax;
  int * piVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte * pbVar10;
  byte * pbVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  
  piVar2 = param_1;
  if ((((param_1 == (int *)0x0) || (in_eax = (uint *)param_1[7], in_eax == (uint *)0x0)) ||
      (param_1[3] == 0)) || ((*param_1 == 0 && (param_1[1] != 0)))) {
    return 0xfffffffe;
  }
  if (*in_eax == 0xb) {
    *in_eax = 0xc;
  }
  (*(undefined1 * PTR32 *)(gen_frame + 0x14)) = (undefined1 *)param_1[3];
  pbVar10 = (byte *)*param_1;
  (*(uint *)(gen_frame + 0xc)) = param_1[4];
  uVar6 = param_1[1];
  uVar14 = in_eax[0xe];
  (*(uint *)(gen_frame + 0x28)) = uVar6;
  uVar4 = *in_eax;
  uVar16 = in_eax[0xf];
  (*(uint *)(gen_frame + 0x1c)) = (*(uint *)(gen_frame + 0xc));
  (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar10;
  (*(uint *)(gen_frame + 0x4)) = 0;
  do {
    pbVar11 = pbVar10;
    uVar13 = (*(uint *)(gen_frame + 0x20));
    switch((unsigned int)(uintptr_t)(uVar4)) {
    case 0: ;
      pbVar11 = (*(byte * PTR32 *)(gen_frame + 0x24));
      if (in_eax[2] == 0) {
        *in_eax = 0xc;
      }
      else {
        for (; (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11, uVar16 < 0x10; uVar16 = uVar16 + 8) {
          if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c38165;
          bVar7 = *pbVar10;
          (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
          pbVar10 = pbVar10 + 1;
          (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar10;
          uVar14 = uVar14 + ((uint)bVar7 << ((byte)uVar16 & 0x1f));
          pbVar11 = (*(byte * PTR32 *)(gen_frame + 0x24));
        }
        if (((in_eax[2] & 2) == 0) || (uVar14 != 0x8b1f)) {
          in_eax[4] = 0;
          if (in_eax[8] != 0) {
            *(undefined4 *)(in_eax[8] + 0x30) = 0xffffffff;
          }
          if (((in_eax[2] & 1) == 0) || (((uVar14 & 0xff) * 0x100 + (uVar14 >> 8)) % 0x1f != 0)) {
            param_1[6] = (int)"incorrect header check";
          }
          else {
            if (((byte)uVar14 & 0xf) == 8) {
              uVar16 = uVar16 - 4;
              uVar4 = (uVar14 >> 4 & 0xf) + 8;
              if (in_eax[9] == 0) {
                in_eax[9] = uVar4;
              }
              else if (in_eax[9] < uVar4) {
                param_1[6] = (int)"invalid window size";
                uVar14 = uVar14 >> 4;
                goto LAB_00c38101;
              }
              in_eax[5] = 1 << (sbyte)uVar4;
              uVar4 = F_00c35890(0,0,0);
              in_eax[6] = uVar4;
              param_1[0xc] = uVar4;
              *in_eax = ~(uVar14 >> 0xc) & 2 | 9;
              uVar14 = 0;
              uVar16 = 0;
              pbVar10 = (*(byte * PTR32 *)(gen_frame + 0x24));
              break;
            }
            param_1[6] = (int)"unknown compression method";
          }
          goto LAB_00c38101;
        }
        uVar4 = F_00c36dc0(0,0,0);
        in_eax[6] = uVar4;
        (*(undefined2 *)(gen_frame + 0x18)) = 0x8b1f;
        uVar4 = F_00c36dc0(uVar4,&(*(undefined2 *)(gen_frame + 0x18)),2);
        uVar14 = 0;
        in_eax[6] = uVar4;
        uVar16 = 0;
        *in_eax = 1;
        pbVar10 = (*(byte * PTR32 *)(gen_frame + 0x24));
      }
      break;
    case 1: ;
      for (; uVar16 < 0x10; uVar16 = uVar16 + 8) {
        pbVar10 = pbVar11;
        if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c38165;
        bVar7 = *pbVar11;
        (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
        pbVar11 = pbVar11 + 1;
        (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
        uVar14 = uVar14 + ((uint)bVar7 << ((byte)uVar16 & 0x1f));
      }
      in_eax[4] = uVar14;
      if ((char)uVar14 == '\b') {
        if ((uVar14 & 0xe000) == 0) {
          if ((uint *)in_eax[8] != (uint *)0x0) {
            *(uint *)in_eax[8] = uVar14 >> 8 & 1;
          }
          if ((in_eax[4] & 0x200) != 0) {
            (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x18)) + 0)) = (char)uVar14;
            (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x18)) + 1)) = (char)(uVar14 >> 8);
            (*(undefined2 *)(gen_frame + 0x18)) = (undefined2)uVar14;
            uVar4 = F_00c36dc0(in_eax[6],&(*(undefined2 *)(gen_frame + 0x18)),2);
            in_eax[6] = uVar4;
            pbVar11 = (*(byte * PTR32 *)(gen_frame + 0x24));
          }
          uVar14 = 0;
          uVar16 = 0;
          *in_eax = 2;
          do {
            pbVar10 = pbVar11;
            uVar13 = (*(uint *)(gen_frame + 0x20));
            if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c38165;
            bVar7 = *pbVar11;
            (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
            bVar9 = (byte)uVar16;
            pbVar11 = pbVar11 + 1;
            uVar16 = uVar16 + 8;
            (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
            uVar14 = uVar14 + ((uint)bVar7 << (bVar9 & 0x1f));
joined_r0x00c37057: ;
          } while (uVar16 < 0x20);
          if (in_eax[8] != 0) {
            *(uint *)(in_eax[8] + 4) = uVar14;
          }
          if ((in_eax[4] & 0x200) != 0) {
            (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x18)) + 1)) = (char)(uVar14 >> 8);
            (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x18)) + 0)) = (char)uVar14;
            (*(undefined2 *)(gen_frame + 0x18)) = (undefined2)uVar14;
            (*(undefined1 *)(gen_frame + 0x1a)) = (char)(uVar14 >> 0x10);
            (*(undefined1 *)(gen_frame + 0x1b)) = (char)(uVar14 >> 0x18);
            uVar4 = F_00c36dc0(in_eax[6],&(*(undefined2 *)(gen_frame + 0x18)),4);
            in_eax[6] = uVar4;
            pbVar11 = (*(byte * PTR32 *)(gen_frame + 0x24));
          }
          uVar14 = 0;
          uVar16 = 0;
          *in_eax = 3;
          do {
            pbVar10 = pbVar11;
            uVar13 = (*(uint *)(gen_frame + 0x20));
            if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c38165;
            (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
            bVar7 = (byte)uVar16;
            pbVar10 = pbVar11 + 1;
            uVar16 = uVar16 + 8;
            (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar10;
            uVar14 = uVar14 + ((uint)*pbVar11 << (bVar7 & 0x1f));
joined_r0x00c370d2: ;
            pbVar11 = pbVar10;
          } while (uVar16 < 0x10);
          if (in_eax[8] != 0) {
            *(uint *)(in_eax[8] + 8) = uVar14 & 0xff;
            *(uint *)(in_eax[8] + 0xc) = uVar14 >> 8;
          }
          if ((in_eax[4] & 0x200) != 0) {
            (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x18)) + 0)) = (char)uVar14;
            (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x18)) + 1)) = (char)(uVar14 >> 8);
            (*(undefined2 *)(gen_frame + 0x18)) = (undefined2)uVar14;
            uVar4 = F_00c36dc0(in_eax[6],&(*(undefined2 *)(gen_frame + 0x18)),2);
            in_eax[6] = uVar4;
            pbVar10 = (*(byte * PTR32 *)(gen_frame + 0x24));
          }
          uVar14 = 0;
          uVar16 = 0;
          *in_eax = 4;
          goto switchD_00c36e68_caseD_4;
        }
        param_1[6] = (int)"unknown header flags set";
      }
      else {
        param_1[6] = (int)"unknown compression method";
      }
      goto LAB_00c38101;
    case 2: ;
      goto joined_r0x00c37057;
    case 3: ;
      goto joined_r0x00c370d2;
    case 4: ;
switchD_00c36e68_caseD_4: ;
      if ((in_eax[4] & 0x400) == 0) {
        if (in_eax[8] != 0) {
          *(undefined4 *)(in_eax[8] + 0x10) = 0;
        }
      }
      else {
        for (; uVar16 < 0x10; uVar16 = uVar16 + 8) {
          uVar13 = (*(uint *)(gen_frame + 0x20));
          if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c38165;
          bVar7 = *pbVar10;
          (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
          pbVar10 = pbVar10 + 1;
          (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar10;
          uVar14 = uVar14 + ((uint)bVar7 << ((byte)uVar16 & 0x1f));
        }
        in_eax[0x10] = uVar14;
        if (in_eax[8] != 0) {
          *(uint *)(in_eax[8] + 0x14) = uVar14;
        }
        if ((in_eax[4] & 0x200) != 0) {
          (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x18)) + 0)) = (char)uVar14;
          (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x18)) + 1)) = (char)(uVar14 >> 8);
          (*(undefined2 *)(gen_frame + 0x18)) = (undefined2)uVar14;
          uVar4 = F_00c36dc0(in_eax[6],&(*(undefined2 *)(gen_frame + 0x18)),2);
          in_eax[6] = uVar4;
          pbVar10 = (*(byte * PTR32 *)(gen_frame + 0x24));
        }
        uVar14 = 0;
        uVar16 = 0;
      }
      *in_eax = 5;
    case 5: ;
      if ((in_eax[4] & 0x400) == 0) {
LAB_00c37262: ;
        in_eax[0x10] = 0;
        *in_eax = 6;
switchD_00c36e68_caseD_6: ;
        if ((in_eax[4] & 0x800) == 0) {
          if (in_eax[8] != 0) {
            *(undefined4 *)(in_eax[8] + 0x1c) = 0;
          }
LAB_00c3730e: ;
          in_eax[0x10] = 0;
          *in_eax = 7;
switchD_00c36e68_caseD_7: ;
          if ((in_eax[4] & 0x1000) == 0) {
            if (in_eax[8] != 0) {
              *(undefined4 *)(in_eax[8] + 0x24) = 0;
            }
LAB_00c373ba: ;
            *in_eax = 8;
switchD_00c36e68_caseD_8: ;
            pbVar11 = pbVar10;
            if ((in_eax[4] & 0x200) != 0) {
              for (; uVar16 < 0x10; uVar16 = uVar16 + 8) {
                pbVar10 = pbVar11;
                uVar13 = (*(uint *)(gen_frame + 0x20));
                if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c38165;
                (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
                (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11 + 1;
                uVar14 = uVar14 + ((uint)*pbVar11 << ((byte)uVar16 & 0x1f));
                pbVar11 = pbVar11 + 1;
              }
              if (uVar14 != (ushort)in_eax[6]) {
                param_1[6] = (int)"header crc mismatch";
                goto LAB_00c38101;
              }
              uVar14 = 0;
              uVar16 = 0;
            }
            if (in_eax[8] != 0) {
              *(uint *)(in_eax[8] + 0x2c) = (int)in_eax[4] >> 9 & 1;
              *(undefined4 *)(in_eax[8] + 0x30) = 1;
            }
            uVar4 = F_00c36dc0(0,0,0);
            in_eax[6] = uVar4;
            param_1[0xc] = uVar4;
            *in_eax = 0xb;
            pbVar10 = (*(byte * PTR32 *)(gen_frame + 0x24));
            break;
          }
          uVar13 = (*(uint *)(gen_frame + 0x20));
          if ((*(uint *)(gen_frame + 0x28)) != 0) {
            uVar4 = 0;
            do {
              bVar7 = pbVar10[uVar4];
              uVar4 = uVar4 + 1;
              (*(uint *)(gen_frame + 0x20)) = uVar4;
              uVar13 = in_eax[8];
              if (((uVar13 != 0) && (*(int *)(uVar13 + 0x24) != 0)) &&
                 (in_eax[0x10] < *(uint *)(uVar13 + 0x28))) {
                *((byte *)GEN_TOP((*(int *)(uVar13 + 0x24) + in_eax[0x10]))) = bVar7;
                in_eax[0x10] = in_eax[0x10] + 1;
                pbVar10 = (*(byte * PTR32 *)(gen_frame + 0x24));
              }
            } while ((bVar7 != 0) && (uVar4 = (*(uint *)(gen_frame + 0x20)), uVar4 < (*(uint *)(gen_frame + 0x28))));
            if ((in_eax[4] & 0x200) != 0) {
              uVar4 = F_00c36dc0(in_eax[6],(*(byte * PTR32 *)(gen_frame + 0x24)),uVar4);
              in_eax[6] = uVar4;
              pbVar10 = (*(byte * PTR32 *)(gen_frame + 0x24));
            }
            (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - (*(uint *)(gen_frame + 0x20));
            pbVar10 = pbVar10 + (*(uint *)(gen_frame + 0x20));
            (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar10;
            uVar13 = (*(uint *)(gen_frame + 0x20));
            if (bVar7 == 0) goto LAB_00c373ba;
          }
        }
        else {
          uVar13 = (*(uint *)(gen_frame + 0x20));
          if ((*(uint *)(gen_frame + 0x28)) != 0) {
            uVar4 = 0;
            do {
              bVar7 = pbVar10[uVar4];
              uVar4 = uVar4 + 1;
              (*(uint *)(gen_frame + 0x20)) = uVar4;
              uVar13 = in_eax[8];
              if (((uVar13 != 0) && (*(int *)(uVar13 + 0x1c) != 0)) &&
                 (in_eax[0x10] < *(uint *)(uVar13 + 0x20))) {
                *((byte *)GEN_TOP((*(int *)(uVar13 + 0x1c) + in_eax[0x10]))) = bVar7;
                in_eax[0x10] = in_eax[0x10] + 1;
                pbVar10 = (*(byte * PTR32 *)(gen_frame + 0x24));
              }
            } while ((bVar7 != 0) && (uVar4 = (*(uint *)(gen_frame + 0x20)), uVar4 < (*(uint *)(gen_frame + 0x28))));
            if ((in_eax[4] & 0x200) != 0) {
              uVar4 = F_00c36dc0(in_eax[6],(*(byte * PTR32 *)(gen_frame + 0x24)),uVar4);
              in_eax[6] = uVar4;
              pbVar10 = (*(byte * PTR32 *)(gen_frame + 0x24));
            }
            (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - (*(uint *)(gen_frame + 0x20));
            pbVar10 = pbVar10 + (*(uint *)(gen_frame + 0x20));
            (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar10;
            uVar13 = (*(uint *)(gen_frame + 0x20));
            if (bVar7 == 0) goto LAB_00c3730e;
          }
        }
      }
      else {
        (*(uint *)(gen_frame + 0x20)) = in_eax[0x10];
        if ((*(uint *)(gen_frame + 0x28)) < (*(uint *)(gen_frame + 0x20))) {
          (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x28));
        }
        if ((*(uint *)(gen_frame + 0x20)) != 0) {
          if ((in_eax[8] != 0) && (iVar5 = *(int *)(in_eax[8] + 0x10), iVar5 != 0)) {
            iVar15 = *(int *)(in_eax[8] + 0x14) - in_eax[0x10];
            uVar4 = *(uint *)(in_eax[8] + 0x18);
            uVar13 = (*(uint *)(gen_frame + 0x20));
            if (uVar4 < iVar15 + (*(uint *)(gen_frame + 0x20))) {
              uVar13 = uVar4 - iVar15;
            }
            F_00c46aa0(iVar5 + iVar15,(*(byte * PTR32 *)(gen_frame + 0x24)),uVar13);
            pbVar10 = (*(byte * PTR32 *)(gen_frame + 0x24));
          }
          if ((in_eax[4] & 0x200) != 0) {
            uVar4 = F_00c36dc0(in_eax[6],(*(byte * PTR32 *)(gen_frame + 0x24)),(*(uint *)(gen_frame + 0x20)));
            in_eax[6] = uVar4;
            pbVar10 = (*(byte * PTR32 *)(gen_frame + 0x24));
          }
          (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - (*(uint *)(gen_frame + 0x20));
          pbVar10 = pbVar10 + (*(uint *)(gen_frame + 0x20));
          in_eax[0x10] = in_eax[0x10] - (*(uint *)(gen_frame + 0x20));
          (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar10;
        }
        uVar13 = (*(uint *)(gen_frame + 0x20));
        if (in_eax[0x10] == 0) goto LAB_00c37262;
      }
LAB_00c38165: ;
      (*(uint *)(gen_frame + 0x20)) = uVar13;
      param_1[3] = (int)(*(undefined1 * PTR32 *)(gen_frame + 0x14));
      *param_1 = (int)pbVar10;
      param_1[4] = (*(uint *)(gen_frame + 0x1c));
      param_1[1] = (*(uint *)(gen_frame + 0x28));
      in_eax[0xe] = uVar14;
      in_eax[0xf] = uVar16;
      if (((in_eax[10] == 0) && ((0x19 < (int)*in_eax || ((*(uint *)(gen_frame + 0xc)) == param_1[4])))) ||
         (uVar4 = F_00c367a0((*(uint *)(gen_frame + 0xc)),param_1), uVar4 == 0)) {
        iVar5 = uVar6 - param_1[1];
        iVar15 = (*(uint *)(gen_frame + 0xc)) - param_1[4];
        param_1[2] = param_1[2] + iVar5;
        param_1[5] = param_1[5] + iVar15;
        in_eax[7] = in_eax[7] + iVar15;
        if ((in_eax[2] != 0) && (iVar15 != 0)) {
          if (in_eax[4] == 0) {
            uVar6 = F_00c35890(in_eax[6],param_1[3] - iVar15,iVar15);
          }
          else {
            uVar6 = F_00c36dc0(in_eax[6],param_1[3] - iVar15,iVar15);
          }
          in_eax[6] = uVar6;
          param_1[0xc] = uVar6;
        }
        uVar6 = *in_eax;
        if ((uVar6 == 0x13) || (param_1 = (int *)0x0, uVar6 == 0xe)) {
          param_1 = (int *)0x100;
        }
        piVar2[0xb] = ((uVar6 != 0xb) - 1 & 0x80) + (-(uint)(in_eax[1] != 0) & 0x40) + (int)param_1
                      + in_eax[0xf];
        if (((iVar5 != 0) || (iVar15 != 0)) && (param_2 != 4)) {
          return (*(uint *)(gen_frame + 0x4));
        }
        if ((*(uint *)(gen_frame + 0x4)) != 0) {
          return (*(uint *)(gen_frame + 0x4));
        }
        return 0xfffffffb;
      }
      *in_eax = 0x1e;
switchD_00c36e68_caseD_1e: ;
      return 0xfffffffc;
    case 6: ;
      goto switchD_00c36e68_caseD_6;
    case 7: ;
      goto switchD_00c36e68_caseD_7;
    case 8: ;
      goto switchD_00c36e68_caseD_8;
    case 9: ;
      for (; uVar16 < 0x20; uVar16 = uVar16 + 8) {
        if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c38165;
        bVar7 = *pbVar10;
        (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
        pbVar10 = pbVar10 + 1;
        (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar10;
        uVar14 = uVar14 + ((uint)bVar7 << ((byte)uVar16 & 0x1f));
      }
      uVar4 = (uVar14 >> 8 & 0xff00) + ((uVar14 & 0xff00) + uVar14 * 0x10000) * 0x100 +
              (uVar14 >> 0x18);
      in_eax[6] = uVar4;
      param_1[0xc] = uVar4;
      uVar14 = 0;
      uVar16 = 0;
      *in_eax = 10;
    case 10: ;
      if (in_eax[3] == 0) {
        param_1[3] = (int)(*(undefined1 * PTR32 *)(gen_frame + 0x14));
        *param_1 = (int)pbVar10;
        param_1[4] = (*(uint *)(gen_frame + 0x1c));
        param_1[1] = (*(uint *)(gen_frame + 0x28));
        in_eax[0xf] = uVar16;
        in_eax[0xe] = uVar14;
        return 2;
      }
      uVar4 = F_00c35890(0,0,0);
      in_eax[6] = uVar4;
      param_1[0xc] = uVar4;
      *in_eax = 0xb;
      pbVar10 = (*(byte * PTR32 *)(gen_frame + 0x24));
switchD_00c36e68_caseD_b: ;
      uVar13 = (*(uint *)(gen_frame + 0x20));
      if ((param_2 == 5) || (param_2 == 6)) goto LAB_00c38165;
switchD_00c36e68_caseD_c: ;
      if (in_eax[1] != 0) {
        uVar14 = uVar14 >> (sbyte)(uVar16 & 7);
        uVar16 = uVar16 - (uVar16 & 7);
        *in_eax = 0x1a;
        break;
      }
      for (; uVar16 < 3; uVar16 = uVar16 + 8) {
        uVar13 = (*(uint *)(gen_frame + 0x20));
        if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c38165;
        bVar7 = *pbVar10;
        (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
        pbVar10 = pbVar10 + 1;
        (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar10;
        uVar14 = uVar14 + ((uint)bVar7 << ((byte)uVar16 & 0x1f));
      }
      in_eax[1] = uVar14 & 1;
      switch((unsigned int)(uintptr_t)(uVar14 >> 1 & 3)) {
      case 0: ;
        uVar14 = uVar14 >> 3;
        *in_eax = 0xd;
        uVar16 = uVar16 - 3;
        goto LAB_00c38107;
      case 1: ;
        F_00c36780(in_eax);
        *in_eax = 0x13;
        if (param_2 == 6) {
          uVar14 = uVar14 >> 3;
          uVar16 = uVar16 - 3;
          uVar13 = (*(uint *)(gen_frame + 0x20));
          goto LAB_00c38165;
        }
        break;
      case 2: ;
        uVar14 = uVar14 >> 3;
        *in_eax = 0x10;
        uVar16 = uVar16 - 3;
        goto LAB_00c38107;
      case 3: ;
        param_1[6] = (int)"invalid block type";
        *in_eax = 0x1d;
      }
      uVar14 = uVar14 >> 3;
      uVar16 = uVar16 - 3;
      break;
    case 0xb: ;
      goto switchD_00c36e68_caseD_b;
    case 0xc: ;
      goto switchD_00c36e68_caseD_c;
    case 0xd: ;
      uVar14 = uVar14 >> (sbyte)(uVar16 & 7);
      for (uVar16 = uVar16 - (uVar16 & 7); pbVar10 = pbVar11, uVar16 < 0x20; uVar16 = uVar16 + 8) {
        if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c38165;
        bVar7 = *pbVar11;
        (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
        pbVar11 = pbVar11 + 1;
        (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
        uVar14 = uVar14 + ((uint)bVar7 << ((byte)uVar16 & 0x1f));
      }
      uVar4 = uVar14 & 0xffff;
      if (uVar4 == ~uVar14 >> 0x10) {
        uVar14 = 0;
        uVar16 = 0;
        in_eax[0x10] = uVar4;
        *in_eax = 0xe;
        if (param_2 != 6) goto switchD_00c36e68_caseD_e;
        goto LAB_00c38165;
      }
      param_1[6] = (int)"invalid stored block lengths";
      goto LAB_00c38101;
    case 0xe: ;
switchD_00c36e68_caseD_e: ;
      *in_eax = 0xf;
    case 0xf: ;
      (*(uint *)(gen_frame + 0x20)) = in_eax[0x10];
      if ((*(uint *)(gen_frame + 0x20)) == 0) {
LAB_00c37cd1: ;
        *in_eax = 0xb;
        pbVar10 = pbVar11;
        break;
      }
      if ((*(uint *)(gen_frame + 0x28)) < (*(uint *)(gen_frame + 0x20))) {
        (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x28));
      }
      if ((*(uint *)(gen_frame + 0x1c)) < (*(uint *)(gen_frame + 0x20))) {
        (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x1c));
      }
      pbVar10 = pbVar11;
      uVar13 = (*(uint *)(gen_frame + 0x20));
      if ((*(uint *)(gen_frame + 0x20)) != 0) {
        F_00c46aa0((*(undefined1 * PTR32 *)(gen_frame + 0x14)),(*(byte * PTR32 *)(gen_frame + 0x24)),(*(uint *)(gen_frame + 0x20)));
        pbVar10 = (*(byte * PTR32 *)(gen_frame + 0x24)) + (*(uint *)(gen_frame + 0x20));
        (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar10;
        (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - (*(uint *)(gen_frame + 0x20));
        (*(uint *)(gen_frame + 0x1c)) = (*(uint *)(gen_frame + 0x1c)) - (*(uint *)(gen_frame + 0x20));
        (*(undefined1 * PTR32 *)(gen_frame + 0x14)) = (*(undefined1 * PTR32 *)(gen_frame + 0x14)) + (*(uint *)(gen_frame + 0x20));
        in_eax[0x10] = in_eax[0x10] - (*(uint *)(gen_frame + 0x20));
        break;
      }
      goto LAB_00c38165;
    case 0x10: ;
      for (; uVar16 < 0xe; uVar16 = uVar16 + 8) {
        pbVar10 = pbVar11;
        if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c38165;
        bVar7 = *pbVar11;
        (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
        pbVar11 = pbVar11 + 1;
        (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
        uVar14 = uVar14 + ((uint)bVar7 << ((byte)uVar16 & 0x1f));
      }
      in_eax[0x18] = (uVar14 & 0x1f) + 0x101;
      uVar12 = uVar14 >> 10;
      uVar4 = (uVar14 >> 5 & 0x1f) + 1;
      uVar14 = uVar14 >> 0xe;
      uVar16 = uVar16 - 0xe;
      in_eax[0x19] = uVar4;
      in_eax[0x17] = (uVar12 & 0xf) + 4;
      if ((in_eax[0x18] < 0x11f) && (uVar4 < 0x1f)) {
        in_eax[0x1a] = 0;
        *in_eax = 0x11;
        goto switchD_00c36e68_caseD_11;
      }
      param_1[6] = (int)"too many length or distance symbols";
      goto LAB_00c38101;
    case 0x11: ;
switchD_00c36e68_caseD_11: ;
      if (in_eax[0x1a] < in_eax[0x17]) {
        do {
          for (; uVar16 < 3; uVar16 = uVar16 + 8) {
            pbVar10 = pbVar11;
            if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c38165;
            bVar7 = *pbVar11;
            (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
            pbVar11 = pbVar11 + 1;
            (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
            uVar14 = uVar14 + ((uint)bVar7 << ((byte)uVar16 & 0x1f));
          }
          *((ushort *)GEN_TOP(((int)in_eax + (uint)*(ushort *)(&REFG(undefined, 0x1112788) + in_eax[0x1a] * 2) * 2 + 0x70)))
               = (ushort)uVar14 & 7;
          in_eax[0x1a] = in_eax[0x1a] + 1;
          uVar14 = uVar14 >> 3;
          uVar16 = uVar16 - 3;
        } while (in_eax[0x1a] < in_eax[0x17]);
      }
      uVar4 = in_eax[0x1a];
      while (uVar4 < 0x13) {
        *((undefined2 *)GEN_TOP(((int)in_eax + (uint)*(ushort *)(&REFG(undefined, 0x1112788) + in_eax[0x1a] * 2) * 2 + 0x70))) = 0;
        in_eax[0x1a] = in_eax[0x1a] + 1;
        uVar4 = in_eax[0x1a];
      }
      in_eax[0x1b] = (uint)(in_eax + 0x14c);
      in_eax[0x13] = (uint)(in_eax + 0x14c);
      in_eax[0x15] = 7;
      (*(uint *)(gen_frame + 0x4)) = F_00c35be0(0,in_eax + 0x1c,0x13,in_eax + 0x1b,in_eax + 0x15,in_eax + 0xbc);
      pbVar11 = (*(byte * PTR32 *)(gen_frame + 0x24));
      if ((*(uint *)(gen_frame + 0x4)) == 0) {
        in_eax[0x1a] = 0;
        *in_eax = 0x12;
        goto switchD_00c36e68_caseD_12;
      }
      param_1[6] = (int)"invalid code lengths set";
LAB_00c38101: ;
      *in_eax = 0x1d;
      pbVar10 = pbVar11;
      break;
    case 0x12: ;
switchD_00c36e68_caseD_12: ;
      if (in_eax[0x1a] < in_eax[0x19] + in_eax[0x18]) {
        do {
          uVar13 = *((uint *)GEN_TOP((in_eax[0x13] + ((1 << ((byte)in_eax[0x15] & 0x1f)) - 1U & uVar14) * 4)));
          (*(uint *)(gen_frame + 0x20)) = uVar13;
          if (uVar16 < (uVar13 >> 8 & 0xff)) {
            do {
              pbVar10 = pbVar11;
              uVar13 = (*(uint *)(gen_frame + 0x20));
              if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c38165;
              bVar7 = *pbVar11;
              (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
              bVar9 = (byte)uVar16;
              pbVar11 = pbVar11 + 1;
              uVar16 = uVar16 + 8;
              uVar14 = uVar14 + ((uint)bVar7 << (bVar9 & 0x1f));
              (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
              uVar13 = *((uint *)GEN_TOP((in_eax[0x13] +
                                ((1 << ((byte)in_eax[0x15] & 0x1f)) - 1U & uVar14) * 4)));
              (*(uint *)(gen_frame + 0x20)) = uVar13;
            } while (uVar16 < (uVar13 >> 8 & 0xff));
          }
          (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x20)) + 2)) = (short)(uVar13 >> 0x10);
          bVar7 = (byte)(uVar13 >> 8);
          (*(uint *)(gen_frame + 0x20)) = uVar13;
          if (uVar13 >> 0x10 < 0x10) {
            if (uVar16 < (uVar13 >> 8 & 0xff)) {
              do {
                pbVar10 = pbVar11;
                if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c38165;
                bVar9 = *pbVar11;
                (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
                bVar8 = (byte)uVar16;
                pbVar11 = pbVar11 + 1;
                uVar16 = uVar16 + 8;
                (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
                uVar14 = uVar14 + ((uint)bVar9 << (bVar8 & 0x1f));
              } while (uVar16 < (uVar13 >> 8 & 0xff));
            }
            uVar14 = uVar14 >> (bVar7 & 0x1f);
            uVar16 = uVar16 - (uVar13 >> 8 & 0xff);
            *(short *)((int)in_eax + in_eax[0x1a] * 2 + 0x70) = (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x20)) + 2));
            in_eax[0x1a] = in_eax[0x1a] + 1;
          }
          else {
            if ((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x20)) + 2)) == 0x10) {
              uVar4 = uVar13 >> 8 & 0xff;
              if (uVar16 < uVar4 + 2) {
                do {
                  pbVar10 = pbVar11;
                  if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c38165;
                  bVar9 = *pbVar11;
                  (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
                  bVar8 = (byte)uVar16;
                  pbVar11 = pbVar11 + 1;
                  uVar16 = uVar16 + 8;
                  uVar14 = uVar14 + ((uint)bVar9 << (bVar8 & 0x1f));
                  (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
                } while (uVar16 < uVar4 + 2);
              }
              uVar13 = uVar14 >> (bVar7 & 0x1f);
              uVar16 = uVar16 - uVar4;
              if (in_eax[0x1a] == 0) {
                param_1[6] = (int)"invalid bit length repeat";
                uVar14 = uVar13;
                goto LAB_00c38101;
              }
              uVar1 = *(undefined2 *)((int)in_eax + in_eax[0x1a] * 2 + 0x6e);
              uVar14 = uVar13 >> 2;
              (*(uint *)(gen_frame + 0x20)) = (uVar13 & 3) + 3;
              uVar16 = uVar16 - 2;
            }
            else {
              uVar4 = uVar13 >> 8 & 0xff;
              if ((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x20)) + 2)) == 0x11) {
                if (uVar16 < uVar4 + 3) {
                  do {
                    pbVar10 = pbVar11;
                    if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c38165;
                    bVar9 = *pbVar11;
                    (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
                    bVar8 = (byte)uVar16;
                    pbVar11 = pbVar11 + 1;
                    uVar16 = uVar16 + 8;
                    uVar14 = uVar14 + ((uint)bVar9 << (bVar8 & 0x1f));
                    (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
                  } while (uVar16 < uVar4 + 3);
                }
                uVar14 = uVar14 >> (bVar7 & 0x1f);
                (*(uint *)(gen_frame + 0x20)) = (uVar14 & 7) + 3;
                uVar14 = uVar14 >> 3;
                iVar5 = -3;
              }
              else {
                if (uVar16 < uVar4 + 7) {
                  do {
                    pbVar10 = pbVar11;
                    if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c38165;
                    bVar9 = *pbVar11;
                    (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
                    bVar8 = (byte)uVar16;
                    pbVar11 = pbVar11 + 1;
                    uVar16 = uVar16 + 8;
                    uVar14 = uVar14 + ((uint)bVar9 << (bVar8 & 0x1f));
                    (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
                  } while (uVar16 < uVar4 + 7);
                }
                uVar14 = uVar14 >> (bVar7 & 0x1f);
                (*(uint *)(gen_frame + 0x20)) = (uVar14 & 0x7f) + 0xb;
                uVar14 = uVar14 >> 7;
                iVar5 = -7;
              }
              uVar16 = uVar16 + (iVar5 - uVar4);
              uVar1 = 0;
            }
            if (in_eax[0x19] + in_eax[0x18] < in_eax[0x1a] + (*(uint *)(gen_frame + 0x20))) {
              param_1[6] = (int)"invalid bit length repeat";
              goto LAB_00c38101;
            }
            while ((*(uint *)(gen_frame + 0x20)) != 0) {
              (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x20)) - 1;
              *(undefined2 *)((int)in_eax + in_eax[0x1a] * 2 + 0x70) = uVar1;
              in_eax[0x1a] = in_eax[0x1a] + 1;
            }
          }
        } while (in_eax[0x1a] < in_eax[0x19] + in_eax[0x18]);
      }
      pbVar10 = pbVar11;
      if (*in_eax != 0x1d) {
        if ((short)in_eax[0x9c] == 0) {
          param_1[6] = (int)"invalid code -- missing end-of-block";
        }
        else {
          in_eax[0x1b] = (uint)(in_eax + 0x14c);
          in_eax[0x13] = (uint)(in_eax + 0x14c);
          in_eax[0x15] = 9;
          (*(uint *)(gen_frame + 0x4)) = F_00c35be0(1,in_eax + 0x1c,in_eax[0x18],in_eax + 0x1b,in_eax + 0x15,
                                  in_eax + 0xbc);
          if ((*(uint *)(gen_frame + 0x4)) == 0) {
            in_eax[0x14] = in_eax[0x1b];
            in_eax[0x16] = 6;
            (*(uint *)(gen_frame + 0x4)) = F_00c35be0(2,(int)in_eax + in_eax[0x18] * 2 + 0x70,in_eax[0x19],
                                    in_eax + 0x1b,in_eax + 0x16,in_eax + 0xbc);
            if ((*(uint *)(gen_frame + 0x4)) == 0) {
              *in_eax = 0x13;
              pbVar10 = (*(byte * PTR32 *)(gen_frame + 0x24));
              uVar13 = (*(uint *)(gen_frame + 0x20));
              if (param_2 != 6) goto switchD_00c36e68_caseD_13;
              goto LAB_00c38165;
            }
            param_1[6] = (int)"invalid distances set";
            pbVar11 = (*(byte * PTR32 *)(gen_frame + 0x24));
          }
          else {
            param_1[6] = (int)"invalid literal/lengths set";
            pbVar11 = (*(byte * PTR32 *)(gen_frame + 0x24));
          }
        }
        goto LAB_00c38101;
      }
      break;
    case 0x13: ;
switchD_00c36e68_caseD_13: ;
      *in_eax = 0x14;
      pbVar11 = pbVar10;
    case 0x14: ;
      if ((5 < (*(uint *)(gen_frame + 0x28))) && (0x101 < (*(uint *)(gen_frame + 0x1c)))) {
        param_1[3] = (int)(*(undefined1 * PTR32 *)(gen_frame + 0x14));
        *param_1 = (int)(*(byte * PTR32 *)(gen_frame + 0x24));
        param_1[4] = (*(uint *)(gen_frame + 0x1c));
        param_1[1] = (*(uint *)(gen_frame + 0x28));
        in_eax[0xe] = uVar14;
        in_eax[0xf] = uVar16;
        F_00c36110(param_1,(*(uint *)(gen_frame + 0xc)));
        (*(undefined1 * PTR32 *)(gen_frame + 0x14)) = (undefined1 *)param_1[3];
        uVar14 = in_eax[0xe];
        uVar16 = in_eax[0xf];
        pbVar10 = (byte *)*param_1;
        (*(uint *)(gen_frame + 0x1c)) = param_1[4];
        (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar10;
        (*(uint *)(gen_frame + 0x28)) = param_1[1];
        if (*in_eax == 0xb) {
          in_eax[0x6f1] = 0xffffffff;
        }
        break;
      }
      in_eax[0x6f1] = 0;
      uVar4 = *((uint *)GEN_TOP((in_eax[0x13] + ((1 << ((byte)in_eax[0x15] & 0x1f)) - 1U & uVar14) * 4)));
      (*(uint *)(gen_frame + 0x20)) = uVar4;
      if (uVar16 < (uVar4 >> 8 & 0xff)) {
        do {
          pbVar10 = pbVar11;
          uVar13 = (*(uint *)(gen_frame + 0x20));
          if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c38165;
          bVar7 = *pbVar11;
          (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
          bVar9 = (byte)uVar16;
          pbVar11 = pbVar11 + 1;
          uVar16 = uVar16 + 8;
          uVar14 = uVar14 + ((uint)bVar7 << (bVar9 & 0x1f));
          (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
          uVar4 = *((uint *)GEN_TOP((in_eax[0x13] + ((1 << ((byte)in_eax[0x15] & 0x1f)) - 1U & uVar14) * 4)));
          (*(uint *)(gen_frame + 0x20)) = uVar4;
        } while (uVar16 < (uVar4 >> 8 & 0xff));
      }
      cVar3 = (char)uVar4;
      (*(uint *)(gen_frame + 0x20)) = uVar4;
      if ((cVar3 != '\0') && ((uVar4 & 0xf0) == 0)) {
        bVar7 = (byte)(uVar4 >> 8);
        uVar13 = *((uint *)GEN_TOP((in_eax[0x13] +
                          ((((1 << (cVar3 + bVar7 & 0x1f)) - 1U & uVar14) >> (bVar7 & 0x1f)) +
                          (uVar4 >> 0x10)) * 4)));
        (*(uint *)(gen_frame + 0x20)) = uVar13;
        if (uVar16 < (uVar13 >> 8 & 0xff) + (uVar4 >> 8 & 0xff)) {
          do {
            pbVar10 = pbVar11;
            uVar13 = (*(uint *)(gen_frame + 0x20));
            if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c38165;
            bVar9 = *pbVar11;
            (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
            pbVar11 = pbVar11 + 1;
            uVar14 = uVar14 + ((uint)bVar9 << ((byte)uVar16 & 0x1f));
            uVar16 = uVar16 + 8;
            (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
            uVar13 = *((uint *)GEN_TOP((in_eax[0x13] +
                              ((((1 << (cVar3 + bVar7 & 0x1f)) - 1U & uVar14) >> (bVar7 & 0x1f)) +
                              (uVar4 >> 0x10)) * 4)));
            (*(uint *)(gen_frame + 0x20)) = uVar13;
          } while (uVar16 < (uVar13 >> 8 & 0xff) + (uVar4 >> 8 & 0xff));
        }
        uVar14 = uVar14 >> (bVar7 & 0x1f);
        uVar16 = uVar16 - bVar7;
        in_eax[0x6f1] = (uint)bVar7;
      }
      uVar4 = (*(uint *)(gen_frame + 0x20)) >> 8 & 0xff;
      in_eax[0x6f1] = in_eax[0x6f1] + uVar4;
      uVar14 = uVar14 >> ((byte)((*(uint *)(gen_frame + 0x20)) >> 8) & 0x1f);
      uVar16 = uVar16 - uVar4;
      in_eax[0x10] = (*(uint *)(gen_frame + 0x20)) >> 0x10;
      if ((char)(*(uint *)(gen_frame + 0x20)) == '\0') {
        *in_eax = 0x19;
        pbVar10 = pbVar11;
        break;
      }
      if (((*(uint *)(gen_frame + 0x20)) & 0x20) != 0) {
        in_eax[0x6f1] = 0xffffffff;
        goto LAB_00c37cd1;
      }
      if (((*(uint *)(gen_frame + 0x20)) & 0x40) != 0) {
        param_1[6] = (int)"invalid literal/length code";
        goto LAB_00c38101;
      }
      in_eax[0x12] = (*(uint *)(gen_frame + 0x20)) & 0xf;
      *in_eax = 0x15;
switchD_00c36e68_caseD_15: ;
      if (in_eax[0x12] != 0) {
        if (uVar16 < in_eax[0x12]) {
          do {
            pbVar10 = pbVar11;
            uVar13 = (*(uint *)(gen_frame + 0x20));
            if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c38165;
            bVar7 = *pbVar11;
            (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
            bVar9 = (byte)uVar16;
            pbVar11 = pbVar11 + 1;
            uVar16 = uVar16 + 8;
            (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
            uVar14 = uVar14 + ((uint)bVar7 << (bVar9 & 0x1f));
          } while (uVar16 < in_eax[0x12]);
        }
        uVar4 = in_eax[0x12];
        uVar16 = uVar16 - uVar4;
        in_eax[0x10] = in_eax[0x10] + ((1 << ((byte)uVar4 & 0x1f)) - 1U & uVar14);
        uVar14 = uVar14 >> ((byte)uVar4 & 0x1f);
        in_eax[0x6f1] = in_eax[0x6f1] + uVar4;
      }
      in_eax[0x6f2] = in_eax[0x10];
      *in_eax = 0x16;
switchD_00c36e68_caseD_16: ;
      uVar4 = *((uint *)GEN_TOP((in_eax[0x14] + ((1 << ((byte)in_eax[0x16] & 0x1f)) - 1U & uVar14) * 4)));
      (*(uint *)(gen_frame + 0x20)) = uVar4;
      if (uVar16 < (uVar4 >> 8 & 0xff)) {
        do {
          pbVar10 = pbVar11;
          uVar13 = (*(uint *)(gen_frame + 0x20));
          if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c38165;
          bVar7 = *pbVar11;
          (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
          bVar9 = (byte)uVar16;
          pbVar11 = pbVar11 + 1;
          uVar16 = uVar16 + 8;
          uVar14 = uVar14 + ((uint)bVar7 << (bVar9 & 0x1f));
          (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
          uVar4 = *((uint *)GEN_TOP((in_eax[0x14] + ((1 << ((byte)in_eax[0x16] & 0x1f)) - 1U & uVar14) * 4)));
          (*(uint *)(gen_frame + 0x20)) = uVar4;
        } while (uVar16 < (uVar4 >> 8 & 0xff));
      }
      (*(uint *)(gen_frame + 0x20)) = uVar4;
      if ((uVar4 & 0xf0) == 0) {
        bVar7 = (byte)(uVar4 >> 8);
        uVar13 = *((uint *)GEN_TOP((in_eax[0x14] +
                          ((((1 << ((char)uVar4 + bVar7 & 0x1f)) - 1U & uVar14) >> (bVar7 & 0x1f)) +
                          (uVar4 >> 0x10)) * 4)));
        (*(uint *)(gen_frame + 0x20)) = uVar13;
        if (uVar16 < (uVar13 >> 8 & 0xff) + (uVar4 >> 8 & 0xff)) {
          do {
            pbVar10 = pbVar11;
            uVar13 = (*(uint *)(gen_frame + 0x20));
            if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c38165;
            bVar9 = *pbVar11;
            (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
            pbVar11 = pbVar11 + 1;
            uVar14 = uVar14 + ((uint)bVar9 << ((byte)uVar16 & 0x1f));
            uVar16 = uVar16 + 8;
            (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
            uVar13 = *((uint *)GEN_TOP((in_eax[0x14] +
                              ((((1 << ((char)uVar4 + bVar7 & 0x1f)) - 1U & uVar14) >>
                               (bVar7 & 0x1f)) + (uVar4 >> 0x10)) * 4)));
            (*(uint *)(gen_frame + 0x20)) = uVar13;
          } while (uVar16 < (uVar13 >> 8 & 0xff) + (uVar4 >> 8 & 0xff));
        }
        uVar14 = uVar14 >> (bVar7 & 0x1f);
        uVar16 = uVar16 - bVar7;
        in_eax[0x6f1] = in_eax[0x6f1] + (uint)bVar7;
      }
      uVar4 = (*(uint *)(gen_frame + 0x20)) >> 8 & 0xff;
      in_eax[0x6f1] = in_eax[0x6f1] + uVar4;
      uVar14 = uVar14 >> ((byte)((*(uint *)(gen_frame + 0x20)) >> 8) & 0x1f);
      uVar16 = uVar16 - uVar4;
      if (((*(uint *)(gen_frame + 0x20)) & 0x40) != 0) {
        param_1[6] = (int)"invalid distance code";
        goto LAB_00c38101;
      }
      in_eax[0x11] = (*(uint *)(gen_frame + 0x20)) >> 0x10;
      in_eax[0x12] = (*(uint *)(gen_frame + 0x20)) & 0xf;
      *in_eax = 0x17;
switchD_00c36e68_caseD_17: ;
      if (in_eax[0x12] != 0) {
        if (uVar16 < in_eax[0x12]) {
          do {
            pbVar10 = pbVar11;
            uVar13 = (*(uint *)(gen_frame + 0x20));
            if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c38165;
            bVar7 = *pbVar11;
            (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
            bVar9 = (byte)uVar16;
            pbVar11 = pbVar11 + 1;
            uVar16 = uVar16 + 8;
            (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
            uVar14 = uVar14 + ((uint)bVar7 << (bVar9 & 0x1f));
          } while (uVar16 < in_eax[0x12]);
        }
        uVar4 = in_eax[0x12];
        uVar16 = uVar16 - uVar4;
        in_eax[0x11] = in_eax[0x11] + ((1 << ((byte)uVar4 & 0x1f)) - 1U & uVar14);
        uVar14 = uVar14 >> ((byte)uVar4 & 0x1f);
        in_eax[0x6f1] = in_eax[0x6f1] + uVar4;
      }
      *in_eax = 0x18;
switchD_00c36e68_caseD_18: ;
      pbVar10 = pbVar11;
      uVar13 = (*(uint *)(gen_frame + 0x20));
      if ((*(uint *)(gen_frame + 0x1c)) != 0) {
        uVar4 = in_eax[0x11];
        if ((*(uint *)(gen_frame + 0xc)) - (*(uint *)(gen_frame + 0x1c)) < uVar4) {
          (*(uint *)(gen_frame + 0x20)) = uVar4 - ((*(uint *)(gen_frame + 0xc)) - (*(uint *)(gen_frame + 0x1c)));
          if ((in_eax[0xb] < (*(uint *)(gen_frame + 0x20))) && (in_eax[0x6f0] != 0)) {
            param_1[6] = (int)"invalid distance too far back";
            goto LAB_00c38101;
          }
          if (in_eax[0xc] < (*(uint *)(gen_frame + 0x20))) {
            (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x20)) - in_eax[0xc];
            (*(int *)(gen_frame + 0x0)) = (in_eax[0xd] + in_eax[10]) - (*(uint *)(gen_frame + 0x20));
          }
          else {
            (*(int *)(gen_frame + 0x0)) = (in_eax[0xd] - (*(uint *)(gen_frame + 0x20))) + in_eax[0xc];
          }
          (*(uint *)(gen_frame + 0x8)) = in_eax[0x10];
          if ((*(uint *)(gen_frame + 0x8)) < (*(uint *)(gen_frame + 0x20))) goto LAB_00c37f7c;
        }
        else {
          (*(int *)(gen_frame + 0x0)) = (int)(*(undefined1 * PTR32 *)(gen_frame + 0x14)) - uVar4;
          (*(uint *)(gen_frame + 0x8)) = in_eax[0x10];
LAB_00c37f7c: ;
          (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x8));
        }
        if ((*(uint *)(gen_frame + 0x1c)) < (*(uint *)(gen_frame + 0x20))) {
          (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x1c));
        }
        (*(uint *)(gen_frame + 0x1c)) = (*(uint *)(gen_frame + 0x1c)) - (*(uint *)(gen_frame + 0x20));
        in_eax[0x10] = (*(uint *)(gen_frame + 0x8)) - (*(uint *)(gen_frame + 0x20));
        iVar5 = (*(int *)(gen_frame + 0x0)) - (int)(*(undefined1 * PTR32 *)(gen_frame + 0x14));
        do {
          *(*(undefined1 * PTR32 *)(gen_frame + 0x14)) = (*(undefined1 * PTR32 *)(gen_frame + 0x14))[iVar5];
          (*(undefined1 * PTR32 *)(gen_frame + 0x14)) = (*(undefined1 * PTR32 *)(gen_frame + 0x14)) + 1;
          uVar4 = (*(uint *)(gen_frame + 0x20)) - 1;
          (*(uint *)(gen_frame + 0x20)) = uVar4;
        } while (uVar4 != 0);
        if (in_eax[0x10] == 0) {
          *in_eax = 0x14;
        }
        break;
      }
      goto LAB_00c38165;
    case 0x15: ;
      goto switchD_00c36e68_caseD_15;
    case 0x16: ;
      goto switchD_00c36e68_caseD_16;
    case 0x17: ;
      goto switchD_00c36e68_caseD_17;
    case 0x18: ;
      goto switchD_00c36e68_caseD_18;
    case 0x19: ;
      if ((*(uint *)(gen_frame + 0x1c)) == 0) goto LAB_00c38165;
      *(*(undefined1 * PTR32 *)(gen_frame + 0x14)) = (char)in_eax[0x10];
      (*(undefined1 * PTR32 *)(gen_frame + 0x14)) = (*(undefined1 * PTR32 *)(gen_frame + 0x14)) + 1;
      (*(uint *)(gen_frame + 0x1c)) = (*(uint *)(gen_frame + 0x1c)) - 1;
      *in_eax = 0x14;
      break;
    case 0x1a: ;
      if (in_eax[2] != 0) {
        for (; uVar16 < 0x20; uVar16 = uVar16 + 8) {
          pbVar10 = pbVar11;
          if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c38165;
          (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
          (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11 + 1;
          uVar14 = uVar14 + ((uint)*pbVar11 << ((byte)uVar16 & 0x1f));
          pbVar11 = pbVar11 + 1;
        }
        iVar5 = (*(uint *)(gen_frame + 0xc)) - (*(uint *)(gen_frame + 0x1c));
        param_1[5] = param_1[5] + iVar5;
        in_eax[7] = in_eax[7] + iVar5;
        if (iVar5 != 0) {
          if (in_eax[4] == 0) {
            uVar4 = F_00c35890(in_eax[6],(int)(*(undefined1 * PTR32 *)(gen_frame + 0x14)) - iVar5,iVar5);
          }
          else {
            uVar4 = F_00c36dc0(in_eax[6],(int)(*(undefined1 * PTR32 *)(gen_frame + 0x14)) - iVar5,iVar5);
          }
          in_eax[6] = uVar4;
          param_1[0xc] = uVar4;
          pbVar11 = (*(byte * PTR32 *)(gen_frame + 0x24));
        }
        (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0x1c));
        uVar4 = uVar14;
        if (in_eax[4] == 0) {
          uVar4 = ((uVar14 & 0xff00) + uVar14 * 0x10000) * 0x100 + (uVar14 >> 8 & 0xff00) +
                  (uVar14 >> 0x18);
        }
        if (uVar4 != in_eax[6]) {
          param_1[6] = (int)"incorrect data check";
          goto LAB_00c38101;
        }
        uVar14 = 0;
        uVar16 = 0;
      }
      *in_eax = 0x1b;
    case 0x1b: ;
      if ((in_eax[2] != 0) && (in_eax[4] != 0)) {
        for (; uVar16 < 0x20; uVar16 = uVar16 + 8) {
          pbVar10 = pbVar11;
          uVar13 = (*(uint *)(gen_frame + 0x20));
          if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c38165;
          bVar7 = *pbVar11;
          (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
          pbVar11 = pbVar11 + 1;
          (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
          uVar14 = uVar14 + ((uint)bVar7 << ((byte)uVar16 & 0x1f));
        }
        if (uVar14 != in_eax[7]) {
          param_1[6] = (int)"incorrect length check";
          goto LAB_00c38101;
        }
        uVar14 = 0;
        uVar16 = 0;
      }
      *in_eax = 0x1c;
switchD_00c36e68_caseD_1c: ;
      (*(uint *)(gen_frame + 0x4)) = 1;
      pbVar10 = pbVar11;
      uVar13 = (*(uint *)(gen_frame + 0x20));
      goto LAB_00c38165;
    case 0x1c: ;
      goto switchD_00c36e68_caseD_1c;
    case 0x1d: ;
      (*(uint *)(gen_frame + 0x4)) = 0xfffffffd;
      goto LAB_00c38165;
    case 0x1e: ;
      goto switchD_00c36e68_caseD_1e;
    default: ;
      return 0xfffffffe;
    }
LAB_00c38107: ;
    uVar4 = *in_eax;
  } while( true );
}

/* ref: FUN_00c38320 */
uint F_00c38320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc38320u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) = param_4;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)) = param_3;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 12)) = param_1;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 16)) = *(undefined4 *)param_2;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  uVar1 = F_00c36630(((byte *)(gen_frame + 0x4)),0xfffffff1,"1.2.5",0x38);
  if (uVar1 == 0) {
    uVar1 = F_00c36df0(((byte *)(gen_frame + 0x4)),4);
    if (uVar1 != 1) {
      F_00c368a0(((byte *)(gen_frame + 0x4)));
      if ((uVar1 != 2) && ((uVar1 != 0xfffffffb || ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) != 0)))) {
        return uVar1;
      }
      return 0xfffffffd;
    }
    *(undefined4 *)param_2 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 20));
    uVar1 = F_00c368a0(((byte *)(gen_frame + 0x4)));
  }
  return uVar1;
}

/* ref: FUN_00c383c0 */
uint F_00c383c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc383c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x14030];
  undefined8 * puVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  
  (*(uint *)(gen_frame + 0x1401c)) = 0xc383e0;
  (*(uint *)(gen_frame + 0x1401c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  puVar1 = *(undefined8 * PTR32 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_2 + 0x60);
  (*(int *)(gen_frame + 0x10000)) = (int)*puVar1;
  (*(undefined4 *)(gen_frame + 0x10008)) = (undefined4)puVar1[1];
  F_00c38320(((undefined1 *)(gen_frame + 0x10010)),&REFG(undefined4, 0x134a814),(*(int *)(gen_frame + 0x10000)) + (int)puVar1,(*(undefined4 *)(gen_frame + 0x10008)));
  REFG(undefined4, 0x134a814) = REFG(undefined4, 0x134a814) + 0xf & 0xfffffff0;
  uVar3 = F_00c46aa0(uVar2,((undefined1 *)(gen_frame + 0x10010)),REFG(undefined4, 0x134a814));
  F_00c47745((*(uint *)(gen_frame + 0x1401c)) ^ (uint)(uint)(gen_frame + 0x0));
  return (uint)uVar3;
}

/* ref: FUN_00c38490 */
uint F_00c38490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc38490u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return (*(int *)&gen_args[0]) - ((*(int *)&gen_args[0]) - 1U & (*(uint *)&gen_args[1])) & (*(int *)&gen_args[0]) - 1U;
}

/* ref: FUN_00c384b0 */
uint F_00c384b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc384b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  undefined1 * puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  
  iVar2 = *(int *)(param_1 + 4);
  iVar3 = *(int *)(param_1 + 8);
  uVar5 = *(int *)(param_2 + 0x60) + 8;
  uVar9 = 8;
  iVar10 = 0;
  if (8 < uVar5) {
    do {
      uVar6 = (uint)*(byte *)(uVar9 + iVar2);
      bVar4 = *(byte *)(uVar9 + iVar2) >> 6;
      if (bVar4 == 0) {
        for (iVar8 = (uVar6 & 0xffffff3f) + 1; iVar8 != 0; iVar8 = iVar8 + -1) {
          iVar1 = uVar9 + 1;
          uVar9 = uVar9 + 1;
          *(undefined1 *)(iVar10 + iVar3) = *(undefined1 *)(iVar1 + iVar2);
          iVar10 = iVar10 + 1;
        }
        uVar9 = uVar9 + 1;
      }
      else if (bVar4 == 1) {
        iVar8 = (uVar6 & 0xffffff3f) + 2;
        if (iVar8 != 0) {
          puVar7 = ((undefined1 *)GEN_TOP(((iVar10 - (uint)*(byte *)(uVar9 + 1 + iVar2)) + -1 + iVar3)));
          do {
            *(undefined1 *)(iVar10 + iVar3) = *puVar7;
            iVar10 = iVar10 + 1;
            puVar7 = puVar7 + 1;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        uVar9 = uVar9 + 2;
      }
      else if (bVar4 == 3) {
        param_1 = *(byte *)(uVar9 + 2 + iVar2) + 3;
        if (param_1 != 0) {
          puVar7 = ((undefined1 *)GEN_TOP(((iVar10 - ((uint)*(byte *)(uVar9 + 1 + iVar2) | (uVar6 & 0xffffff3f) << 8)) + -1
                   + iVar3)));
          do {
            *(undefined1 *)(iVar10 + iVar3) = *puVar7;
            iVar10 = iVar10 + 1;
            puVar7 = puVar7 + 1;
            param_1 = param_1 + -1;
          } while (param_1 != 0);
        }
        uVar9 = uVar9 + 3;
      }
    } while (uVar9 < uVar5);
  }
  uVar9 = F_00c38490(0x10,iVar10);
  uVar11 = F_00c46aa0(*(undefined4 *)(param_2 + 0x58),iVar3,uVar9 + iVar10);
  return (uint)uVar11;
}

/* ref: FUN_00c385b0 */
uint F_00c385b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc385b0u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_eax = (uint)gen_a0;
  uint * in_ecx = (uint *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = ~in_eax;
  uVar3 = param_3;
  for (; (uVar3 != 0 && (((uint)in_ecx & 3) != 0)); in_ecx = (uint *)((int)in_ecx + 1)) {
    uVar1 = uVar1 >> 8 ^ *(uint *)(&REFG(undefined, 0x11128c0) + (((byte)*in_ecx ^ uVar1) & 0xff) * 4);
    uVar3 = uVar3 - 1;
  }
  if (0x1f < uVar3) {
    uVar4 = uVar3 >> 5;
    puVar2 = in_ecx;
    do {
      uVar1 = uVar1 ^ *puVar2;
      uVar1 = *(uint *)(&REFG(undefined, 0x1112cc0) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11130c0) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11128c0) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11134c0) + (uVar1 & 0xff) * 4) ^ puVar2[1];
      uVar1 = *(uint *)(&REFG(undefined, 0x1112cc0) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11130c0) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11128c0) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11134c0) + (uVar1 & 0xff) * 4) ^ puVar2[2];
      uVar1 = *(uint *)(&REFG(undefined, 0x1112cc0) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11130c0) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11128c0) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11134c0) + (uVar1 & 0xff) * 4) ^ puVar2[3];
      uVar1 = *(uint *)(&REFG(undefined, 0x1112cc0) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11130c0) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11128c0) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11134c0) + (uVar1 & 0xff) * 4) ^ puVar2[4];
      uVar1 = *(uint *)(&REFG(undefined, 0x1112cc0) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11130c0) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11128c0) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11134c0) + (uVar1 & 0xff) * 4) ^ puVar2[5];
      in_ecx = puVar2 + 8;
      uVar1 = *(uint *)(&REFG(undefined, 0x1112cc0) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11130c0) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11128c0) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11134c0) + (uVar1 & 0xff) * 4) ^ puVar2[6];
      uVar3 = uVar3 - 0x20;
      uVar1 = *(uint *)(&REFG(undefined, 0x1112cc0) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11130c0) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11128c0) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11134c0) + (uVar1 & 0xff) * 4) ^ puVar2[7];
      uVar1 = *(uint *)(&REFG(undefined, 0x1112cc0) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11130c0) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11128c0) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11134c0) + (uVar1 & 0xff) * 4);
      uVar4 = uVar4 - 1;
      puVar2 = in_ecx;
    } while (uVar4 != 0);
  }
  if (3 < uVar3) {
    uVar4 = uVar3 >> 2;
    do {
      uVar1 = uVar1 ^ *in_ecx;
      in_ecx = in_ecx + 1;
      uVar1 = *(uint *)(&REFG(undefined, 0x1112cc0) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11130c0) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11128c0) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11134c0) + (uVar1 & 0xff) * 4);
      uVar3 = uVar3 - 4;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    uVar1 = uVar1 >> 8 ^ *(uint *)(&REFG(undefined, 0x11128c0) + (((byte)*in_ecx ^ uVar1) & 0xff) * 4);
    in_ecx = (uint *)((int)in_ecx + 1);
  }
  return ~uVar1;
}

/* ref: FUN_00c38870 */
uint F_00c38870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc38870u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_eax = (uint)gen_a0;
  byte * in_ecx = (byte *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint * puVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = ~(((in_eax & 0xff00) + in_eax * 0x10000) * 0x100 + (in_eax >> 8 & 0xff00) +
           (in_eax >> 0x18));
  uVar4 = param_3;
  for (; (uVar4 != 0 && (((uint)in_ecx & 3) != 0)); in_ecx = in_ecx + 1) {
    uVar3 = uVar3 << 8 ^ *(uint *)(&REFG(undefined, 0x11138c0) + (uVar3 >> 0x18 ^ (uint)*in_ecx) * 4);
    uVar4 = uVar4 - 1;
  }
  puVar2 = (uint *)(in_ecx + -4);
  if (0x1f < uVar4) {
    uVar5 = uVar4 >> 5;
    puVar1 = puVar2;
    do {
      uVar3 = uVar3 ^ puVar1[1];
      uVar3 = *(uint *)(&REFG(undefined, 0x11140c0) + (uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1113cc0) + (uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11144c0) + (uVar3 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11138c0) + (uVar3 & 0xff) * 4) ^ puVar1[2];
      uVar3 = *(uint *)(&REFG(undefined, 0x11140c0) + (uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1113cc0) + (uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11144c0) + (uVar3 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11138c0) + (uVar3 & 0xff) * 4) ^ puVar1[3];
      uVar3 = *(uint *)(&REFG(undefined, 0x11140c0) + (uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1113cc0) + (uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11144c0) + (uVar3 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11138c0) + (uVar3 & 0xff) * 4) ^ puVar1[4];
      uVar3 = *(uint *)(&REFG(undefined, 0x11140c0) + (uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1113cc0) + (uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11144c0) + (uVar3 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11138c0) + (uVar3 & 0xff) * 4) ^ puVar1[5];
      uVar3 = *(uint *)(&REFG(undefined, 0x11140c0) + (uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1113cc0) + (uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11144c0) + (uVar3 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11138c0) + (uVar3 & 0xff) * 4) ^ puVar1[6];
      puVar2 = puVar1 + 8;
      uVar3 = *(uint *)(&REFG(undefined, 0x11140c0) + (uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1113cc0) + (uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11144c0) + (uVar3 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11138c0) + (uVar3 & 0xff) * 4) ^ puVar1[7];
      uVar4 = uVar4 - 0x20;
      uVar3 = *(uint *)(&REFG(undefined, 0x11140c0) + (uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1113cc0) + (uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11144c0) + (uVar3 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11138c0) + (uVar3 & 0xff) * 4) ^ *puVar2;
      uVar3 = *(uint *)(&REFG(undefined, 0x11140c0) + (uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1113cc0) + (uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11144c0) + (uVar3 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11138c0) + (uVar3 & 0xff) * 4);
      uVar5 = uVar5 - 1;
      puVar1 = puVar2;
    } while (uVar5 != 0);
  }
  if (3 < uVar4) {
    uVar5 = uVar4 >> 2;
    do {
      uVar3 = uVar3 ^ puVar2[1];
      puVar2 = puVar2 + 1;
      uVar3 = *(uint *)(&REFG(undefined, 0x11140c0) + (uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1113cc0) + (uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11144c0) + (uVar3 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11138c0) + (uVar3 & 0xff) * 4);
      uVar4 = uVar4 - 4;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  puVar2 = puVar2 + 1;
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    uVar3 = uVar3 << 8 ^ *(uint *)(&REFG(undefined, 0x11138c0) + (uVar3 >> 0x18 ^ (uint)(byte)*puVar2) * 4);
    puVar2 = (uint *)((int)puVar2 + 1);
  }
  uVar3 = ~uVar3;
  return ((uVar3 & 0xff00) + uVar3 * 0x10000) * 0x100 + (uVar3 >> 8 & 0xff00) + (uVar3 >> 0x18);
}

/* ref: FUN_00c38b90 */
uint F_00c38b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc38b90u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  for (; param_1 != 0; param_1 = param_1 >> 1) {
    if ((param_1 & 1) != 0) {
      uVar1 = uVar1 ^ *param_2;
    }
    param_2 = param_2 + 1;
  }
  return uVar1;
}

/* ref: FUN_00c38bb0 */
uint F_00c38bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc38bb0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_eax = (uint *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_2 - (int)in_eax;
  iVar2 = 0x20;
  do {
    uVar1 = F_00c38b90(*(undefined4 *)(iVar3 + (int)in_eax),param_2);
    *in_eax = uVar1;
    in_eax = in_eax + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return uVar1;
}

/* ref: FUN_00c38be0 */
uint F_00c38be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc38be0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  int iVar1;
  int iVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  if ((int)param_2 < 1) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c) ^ (uint)(uint)(gen_frame + 0x10c));
    return (uint)this;
  }
  iVar2 = 1;
  ((int *)(gen_frame + 0x88))[0] = -0x12477ce0;
  iVar1 = 1;
  do {
    ((int *)(gen_frame + 0x88))[(int)(iVar1)] = iVar2;
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 * 2;
  } while (iVar1 < 0x20);
  F_00c38bb0(((undefined1 *)(gen_frame + 0x8)),((int *)(gen_frame + 0x88)));
  F_00c38bb0(((int *)(gen_frame + 0x88)),((undefined1 *)(gen_frame + 0x8)));
  uVar3 = param_2;
  do {
    F_00c38bb0(((undefined1 *)(gen_frame + 0x8)),((int *)(gen_frame + 0x88)));
    if ((uVar3 & 1) != 0) {
      this = (undefined *)F_00c38b90(this,((undefined1 *)(gen_frame + 0x8)));
    }
    if ((int)uVar3 >> 1 == 0) break;
    F_00c38bb0(((int *)(gen_frame + 0x88)),((undefined1 *)(gen_frame + 0x8)));
    if (((int)uVar3 >> 1 & 1U) != 0) {
      this = (undefined *)F_00c38b90(this,((int *)(gen_frame + 0x88)));
    }
    uVar3 = (int)uVar3 >> 2;
  } while (uVar3 != 0);
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return (uint)this ^ param_1;
}

/* ref: FUN_00c38cd0 */
uint F_00c38cd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc38cd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c38be0(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c38cf0 */
uint F_00c38cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc38cf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c38be0(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c38d10 */
uint F_00c38d10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc38d10u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  byte * pbVar20;
  uint uVar21;
  
  uVar21 = param_1 >> 0x10;
  uVar3 = param_1 & 0xffff;
  if (param_3 == 1) {
    uVar3 = uVar3 + *param_2;
    if (0xfff0 < uVar3) {
      uVar3 = uVar3 - 0xfff1;
    }
    uVar21 = uVar21 + uVar3;
    if (0xfff0 < uVar21) {
      uVar21 = uVar21 - 0xfff1;
    }
    return uVar21 << 0x10 | uVar3;
  }
  if (param_2 == (byte *)0x0) {
    return 1;
  }
  pbVar20 = param_2;
  uVar19 = param_3;
  if (param_3 < 0x10) {
    for (; uVar19 != 0; uVar19 = uVar19 - 1) {
      uVar3 = uVar3 + *pbVar20;
      pbVar20 = pbVar20 + 1;
      uVar21 = uVar21 + uVar3;
    }
    if (0xfff0 < uVar3) {
      uVar3 = uVar3 - 0xfff1;
    }
    return ((uVar21 / 0xfff1) * 0xf + uVar21) * 0x10000 | uVar3;
  }
  if (0x15af < param_3) {
    param_2 = (byte *)(param_3 / 0x15b0);
    do {
      uVar19 = uVar19 - 0x15b0;
      iVar1 = 0x15b;
      do {
        iVar4 = uVar3 + *pbVar20;
        iVar5 = iVar4 + (uint)pbVar20[1];
        iVar6 = iVar5 + (uint)pbVar20[2];
        iVar7 = iVar6 + (uint)pbVar20[3];
        iVar8 = iVar7 + (uint)pbVar20[4];
        iVar9 = iVar8 + (uint)pbVar20[5];
        iVar10 = iVar9 + (uint)pbVar20[6];
        iVar11 = iVar10 + (uint)pbVar20[7];
        iVar12 = iVar11 + (uint)pbVar20[8];
        iVar13 = iVar12 + (uint)pbVar20[9];
        iVar14 = iVar13 + (uint)pbVar20[10];
        iVar15 = iVar14 + (uint)pbVar20[0xb];
        iVar16 = iVar15 + (uint)pbVar20[0xc];
        iVar17 = iVar16 + (uint)pbVar20[0xd];
        iVar18 = iVar17 + (uint)pbVar20[0xe];
        uVar3 = iVar18 + (uint)pbVar20[0xf];
        uVar21 = uVar21 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 + iVar12 +
                 iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + iVar18 + uVar3;
        pbVar20 = pbVar20 + 0x10;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      uVar3 = uVar3 % 0xfff1;
      uVar21 = uVar21 % 0xfff1;
      param_2 = (byte *)((int)param_2 - 1);
    } while (param_2 != (byte *)0x0);
  }
  if (uVar19 != 0) {
    if (0xf < uVar19) {
      uVar2 = uVar19 >> 4;
      do {
        iVar1 = uVar3 + *pbVar20;
        iVar4 = iVar1 + (uint)pbVar20[1];
        iVar5 = iVar4 + (uint)pbVar20[2];
        iVar6 = iVar5 + (uint)pbVar20[3];
        iVar7 = iVar6 + (uint)pbVar20[4];
        iVar8 = iVar7 + (uint)pbVar20[5];
        iVar9 = iVar8 + (uint)pbVar20[6];
        iVar10 = iVar9 + (uint)pbVar20[7];
        iVar11 = iVar10 + (uint)pbVar20[8];
        iVar12 = iVar11 + (uint)pbVar20[9];
        iVar13 = iVar12 + (uint)pbVar20[10];
        iVar14 = iVar13 + (uint)pbVar20[0xb];
        iVar15 = iVar14 + (uint)pbVar20[0xc];
        iVar16 = iVar15 + (uint)pbVar20[0xd];
        iVar17 = iVar16 + (uint)pbVar20[0xe];
        uVar3 = iVar17 + (uint)pbVar20[0xf];
        uVar19 = uVar19 - 0x10;
        uVar21 = uVar21 + iVar1 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
                 iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + uVar3;
        pbVar20 = pbVar20 + 0x10;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    for (; uVar19 != 0; uVar19 = uVar19 - 1) {
      uVar3 = uVar3 + *pbVar20;
      pbVar20 = pbVar20 + 1;
      uVar21 = uVar21 + uVar3;
    }
    uVar3 = uVar3 % 0xfff1;
    uVar21 = uVar21 % 0xfff1;
  }
  return uVar21 << 0x10 | uVar3;
}

/* ref: FUN_00c38f80 */
uint F_00c38f80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc38f80u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_eax = (uint)gen_a0;
  uint in_ecx = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (in_ecx & 0xffff) * (in_eax % 0xfff1);
  uVar1 = (in_ecx & 0xffff) + 0xfff0 + (param_3 & 0xffff);
  uVar3 = uVar3 + 0xfff1 +
          (((in_ecx >> 0x10) + (uVar3 / 0xfff1) * -0xfff1 + (param_3 >> 0x10)) - in_eax % 0xfff1);
  uVar2 = uVar1;
  if ((0xfff0 < uVar1) && (uVar2 = uVar1 - 0xfff1, 0xfff0 < uVar2)) {
    uVar2 = uVar1 - 0x1ffe2;
  }
  if (0x1ffe1 < uVar3) {
    uVar3 = uVar3 - 0x1ffe2;
  }
  if (0xfff0 < uVar3) {
    uVar3 = uVar3 - 0xfff1;
  }
  return uVar3 << 0x10 | uVar2;
}

/* ref: FUN_00c39020 */
uint F_00c39020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc39020u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c38f80(param_3,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00c39040 */
uint F_00c39040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc39040u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c38f80(param_3,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00c39060 */
uint F_00c39060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc39060u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  uint * param_5 = (uint *)(uintptr_t)gen_a4;
  ushort * param_6 = (ushort *)(uintptr_t)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  undefined4 * puVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  ushort * puVar12;
  int iVar13;
  bool bVar14;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  ((ushort *)(gen_frame + 0x68))[0] = 0;
  ((ushort *)(gen_frame + 0x68))[1] = 0;
  ((ushort *)(gen_frame + 0x68))[2] = 0;
  ((ushort *)(gen_frame + 0x68))[3] = 0;
  ((ushort *)(gen_frame + 0x68))[4] = 0;
  ((ushort *)(gen_frame + 0x68))[5] = 0;
  ((ushort *)(gen_frame + 0x68))[6] = 0;
  ((ushort *)(gen_frame + 0x68))[7] = 0;
  ((ushort *)(gen_frame + 0x68))[8] = 0;
  ((ushort *)(gen_frame + 0x68))[9] = 0;
  ((ushort *)(gen_frame + 0x68))[10] = 0;
  ((ushort *)(gen_frame + 0x68))[0xb] = 0;
  ((ushort *)(gen_frame + 0x68))[0xc] = 0;
  ((ushort *)(gen_frame + 0x68))[0xd] = 0;
  ((ushort *)(gen_frame + 0x68))[0xe] = 0;
  ((ushort *)(gen_frame + 0x68))[0xf] = 0;
  uVar2 = 0;
  if (param_3 != 0) {
    do {
      ((ushort *)(gen_frame + 0x68))[(int)(*(ushort *)(param_2 + uVar2 * 2))] = ((ushort *)(gen_frame + 0x68))[(int)(*(ushort *)(param_2 + uVar2 * 2))] + 1;
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_3);
  }
  uVar2 = 0xf;
  do {
    if (((ushort *)(gen_frame + 0x68))[(int)(uVar2)] != 0) break;
    uVar2 = uVar2 - 1;
  } while (uVar2 != 0);
  (*(uint *)(gen_frame + 0x40)) = *param_5;
  if (uVar2 < *param_5) {
    (*(uint *)(gen_frame + 0x40)) = uVar2;
  }
  if (uVar2 == 0) {
    *(undefined4 *)*param_4 = 0x140;
    *param_4 = *param_4 + 4;
    *(undefined4 *)*param_4 = 0x140;
    *param_4 = *param_4 + 4;
    *param_5 = 1;
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
    return 0;
  }
  (*(uint *)(gen_frame + 0x3c)) = 1;
  if (1 < uVar2) {
    do {
      if (((ushort *)(gen_frame + 0x68))[(int)((*(uint *)(gen_frame + 0x3c)))] != 0) break;
      (*(uint *)(gen_frame + 0x3c)) = (*(uint *)(gen_frame + 0x3c)) + 1;
    } while ((*(uint *)(gen_frame + 0x3c)) < uVar2);
  }
  if ((*(uint *)(gen_frame + 0x40)) < (*(uint *)(gen_frame + 0x3c))) {
    (*(uint *)(gen_frame + 0x40)) = (*(uint *)(gen_frame + 0x3c));
  }
  iVar13 = 1;
  uVar9 = 1;
  do {
    iVar13 = iVar13 * 2 - (uint)((ushort *)(gen_frame + 0x68))[(int)(uVar9)];
    if (iVar13 < 0) goto LAB_00c39201;
    uVar9 = uVar9 + 1;
  } while (uVar9 < 0x10);
  if ((0 < iVar13) && ((param_1 == 0 || (uVar2 != 1)))) {
LAB_00c39201: ;
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
    return 0xffffffff;
  }
  ((ushort *)(gen_frame + 0x48))[1] = 0;
  uVar9 = 2;
  do {
    uVar3 = uVar9 + 2;
    *(short *)((int)((ushort *)(gen_frame + 0x48)) + uVar9 + 2) =
         *(short *)((int)((ushort *)(gen_frame + 0x48)) + uVar9) + *(short *)((int)((ushort *)(gen_frame + 0x68)) + uVar9);
    uVar9 = uVar3;
  } while (uVar3 < 0x1e);
  uVar9 = 0;
  if (param_3 != 0) {
    do {
      if (*(short *)(param_2 + uVar9 * 2) != 0) {
        param_6[((ushort *)(gen_frame + 0x48))[(int)(*(ushort *)(param_2 + uVar9 * 2))]] = (ushort)uVar9;
        ((ushort *)(gen_frame + 0x48))[(int)(*(ushort *)(param_2 + uVar9 * 2))] =
             ((ushort *)(gen_frame + 0x48))[(int)(*(ushort *)(param_2 + uVar9 * 2))] + 1;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < param_3);
  }
  if (param_1 == 0) {
    (*(ushort * PTR32 *)(gen_frame + 0x14)) = param_6;
    (*(ushort * PTR32 *)(gen_frame + 0x20)) = param_6;
    (*(int *)(gen_frame + 0x18)) = 0x13;
  }
  else if (param_1 == 1) {
    (*(ushort * PTR32 *)(gen_frame + 0x20)) = (ushort *)&REFG(undefined, 0x111757e);
    (*(ushort * PTR32 *)(gen_frame + 0x14)) = (ushort *)&REFG(undefined, 0x111753e);
    (*(int *)(gen_frame + 0x18)) = 0x100;
  }
  else {
    (*(ushort * PTR32 *)(gen_frame + 0x20)) = (ushort *)&REFG(undefined, 0x1117800);
    (*(ushort * PTR32 *)(gen_frame + 0x14)) = (ushort *)&REFG(undefined, 0x11177c0);
    (*(int *)(gen_frame + 0x18)) = -1;
  }
  (*(int *)(gen_frame + 0x30)) = *param_4;
  bVar5 = (byte)(*(uint *)(gen_frame + 0x40));
  (*(uint *)(gen_frame + 0xc)) = 1 << (bVar5 & 0x1f);
  uVar3 = 0;
  (*(uint *)(gen_frame + 0x1c)) = 0xffffffff;
  (*(uint *)(gen_frame + 0x2c)) = 0;
  uVar9 = (*(uint *)(gen_frame + 0xc)) - 1;
  if (param_1 == 1) {
    bVar14 = (*(uint *)(gen_frame + 0xc)) < 0x354;
  }
  else {
    if (param_1 != 2) goto LAB_00c3928c;
    bVar14 = (*(uint *)(gen_frame + 0xc)) < 0x250;
  }
  if (!bVar14) {
LAB_00c394c0: ;
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
    return 1;
  }
LAB_00c3928c: ;
  (*(ushort * PTR32 *)(gen_frame + 0x24)) = param_6;
  (*(uint *)(gen_frame + 0x38)) = (*(uint *)(gen_frame + 0xc));
LAB_00c39294: ;
  do {
    bVar11 = (byte)uVar3;
    bVar8 = (char)(*(uint *)(gen_frame + 0x3c)) - bVar11;
    uVar1 = *(*(ushort * PTR32 *)(gen_frame + 0x24));
    if ((int)(uint)uVar1 < (*(int *)(gen_frame + 0x18))) {
      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x44)) + 0)) = (ushort)bVar8 << 8;
LAB_00c392d4: ;
      (*(uint *)(gen_frame + 0x44)) = CONCAT22(uVar1,(ushort)(*(uint *)(gen_frame + 0x44)));
    }
    else {
      if ((int)(uint)uVar1 <= (*(int *)(gen_frame + 0x18))) {
        (*(uint *)(gen_frame + 0x44)) = CONCAT31((uint3)bVar8,0x60);
        uVar1 = 0;
        goto LAB_00c392d4;
      }
      (*(uint *)(gen_frame + 0x44)) = CONCAT22((*(ushort * PTR32 *)(gen_frame + 0x20))[*(*(ushort * PTR32 *)(gen_frame + 0x24))],CONCAT11(bVar8,(char)(*(ushort * PTR32 *)(gen_frame + 0x14))[*(*(ushort * PTR32 *)(gen_frame + 0x24))]));
    }
    iVar13 = 1 << ((char)(*(uint *)(gen_frame + 0x3c)) - bVar11 & 0x1f);
    puVar6 = ((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x30)) + (((*(uint *)(gen_frame + 0x2c)) >> (bVar11 & 0x1f)) + (*(uint *)(gen_frame + 0xc))) * 4)));
    uVar4 = (*(uint *)(gen_frame + 0xc));
    do {
      puVar6 = puVar6 - iVar13;
      uVar4 = uVar4 - iVar13;
      *puVar6 = (*(uint *)(gen_frame + 0x44));
    } while (uVar4 != 0);
    for (uVar4 = 1 << ((char)(*(uint *)(gen_frame + 0x3c)) - 1U & 0x1f); ((*(uint *)(gen_frame + 0x2c)) & uVar4) != 0; uVar4 = uVar4 >> 1) {
    }
    if (uVar4 == 0) {
      (*(uint *)(gen_frame + 0x2c)) = 0;
    }
    else {
      (*(uint *)(gen_frame + 0x2c)) = (uVar4 - 1 & (*(uint *)(gen_frame + 0x2c))) + uVar4;
    }
    (*(ushort * PTR32 *)(gen_frame + 0x24)) = (*(ushort * PTR32 *)(gen_frame + 0x24)) + 1;
    puVar12 = ((ushort *)(gen_frame + 0x68)) + (*(uint *)(gen_frame + 0x3c));
    *puVar12 = *puVar12 - 1;
    if (*puVar12 == 0) {
      if ((*(uint *)(gen_frame + 0x3c)) == uVar2) {
        (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x44)) + 0)) = CONCAT11((char)(*(uint *)(gen_frame + 0x3c)) - bVar11,0x40);
        (*(uint *)(gen_frame + 0x44)) = (uint)(ushort)(*(uint *)(gen_frame + 0x44));
        uVar2 = (*(uint *)(gen_frame + 0x2c));
        iVar13 = (*(int *)(gen_frame + 0x30));
        uVar4 = (*(uint *)(gen_frame + 0x3c));
        goto joined_r0x00c3943c;
      }
      (*(uint *)(gen_frame + 0x3c)) = (uint)*(ushort *)(param_2 + (uint)*(*(ushort * PTR32 *)(gen_frame + 0x24)) * 2);
    }
  } while (((*(uint *)(gen_frame + 0x3c)) <= (*(uint *)(gen_frame + 0x40))) || (uVar4 = uVar9 & (*(uint *)(gen_frame + 0x2c)), uVar4 == (*(uint *)(gen_frame + 0x1c))));
  (*(int *)(gen_frame + 0x30)) = (*(int *)(gen_frame + 0x30)) + (*(uint *)(gen_frame + 0xc)) * 4;
  if (uVar3 == 0) {
    uVar3 = (*(uint *)(gen_frame + 0x40));
  }
  iVar7 = (*(uint *)(gen_frame + 0x3c)) - uVar3;
  uVar10 = uVar3 + iVar7;
  iVar13 = 1 << ((byte)iVar7 & 0x1f);
  if (uVar10 < uVar2) {
    puVar12 = ((ushort *)(gen_frame + 0x68)) + uVar10;
    do {
      uVar1 = *puVar12;
      if ((int)(iVar13 - (uint)uVar1) < 1) break;
      uVar10 = uVar10 + 1;
      iVar7 = iVar7 + 1;
      puVar12 = puVar12 + 1;
      iVar13 = (iVar13 - (uint)uVar1) * 2;
    } while (uVar10 < uVar2);
  }
  (*(uint *)(gen_frame + 0xc)) = 1 << ((byte)iVar7 & 0x1f);
  (*(uint *)(gen_frame + 0x38)) = (*(uint *)(gen_frame + 0x38)) + (*(uint *)(gen_frame + 0xc));
  if (param_1 == 1) {
    bVar14 = (*(uint *)(gen_frame + 0x38)) < 0x354;
LAB_00c393f9: ;
    if (!bVar14) goto LAB_00c394c0;
  }
  else if (param_1 == 2) {
    bVar14 = (*(uint *)(gen_frame + 0x38)) < 0x250;
    goto LAB_00c393f9;
  }
  *(byte *)(*param_4 + uVar4 * 4) = (byte)iVar7;
  *(byte *)(*param_4 + 1 + uVar4 * 4) = bVar5;
  *(short *)(*param_4 + 2 + uVar4 * 4) = (short)((*(int *)(gen_frame + 0x30)) - *param_4 >> 2);
  (*(uint *)(gen_frame + 0x1c)) = uVar4;
  goto LAB_00c39294;
joined_r0x00c3943c: ;
  if (uVar2 == 0) {
LAB_00c39493: ;
    *param_4 = *param_4 + (*(uint *)(gen_frame + 0x38)) * 4;
    *param_5 = (*(uint *)(gen_frame + 0x40));
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
    return 0;
  }
  if ((uVar3 != 0) && ((uVar9 & uVar2) != (*(uint *)(gen_frame + 0x1c)))) {
    iVar13 = *param_4;
    uVar3 = 0;
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x44)) + 0)) = CONCAT11(bVar5,(undefined1)(*(uint *)(gen_frame + 0x44)));
    (*(uint *)(gen_frame + 0x44)) = (uint)(ushort)(*(uint *)(gen_frame + 0x44));
    uVar4 = (*(uint *)(gen_frame + 0x40));
  }
  *((uint *)GEN_TOP((iVar13 + (uVar2 >> ((byte)uVar3 & 0x1f)) * 4))) = (*(uint *)(gen_frame + 0x44));
  for (uVar10 = 1 << ((char)uVar4 - 1U & 0x1f); (uVar2 & uVar10) != 0; uVar10 = uVar10 >> 1) {
  }
  if (uVar10 == 0) goto LAB_00c39493;
  uVar2 = (uVar2 & uVar10 - 1) + uVar10;
  goto joined_r0x00c3943c;
}

/* ref: FUN_00c39500 */
uint F_00c39500(unsigned int gen_a0)
{
  GEN_ENTER(0xc39500u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (uint)(&REFG(undefined * PTR32, 0x111492c))[-param_1];
}

/* ref: FUN_00c39520 */
uint F_00c39520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc39520u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  uint uVar1;
  
  if (0x10000 < (uint)(param_2 * param_3)) {
    uVar1 = F_00406a50(param_2 * param_3);
    return uVar1;
  }
  return *(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x101d8;
}

/* ref: FUN_00c39560 */
uint F_00c39560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc39560u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = param_2;
  if (*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x101d8U != param_2) {
    uVar2 = F_00406b30(param_2);
    uVar1 = (uint)uVar2;
  }
  return uVar1;
}

/* ref: FUN_00c39590 */
unsigned int F_00c39590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc39590u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte * pbVar1;
  undefined1 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  undefined1 uVar12;
  byte * pbVar13;
  uint uVar14;
  int iVar15;
  undefined1 * puVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  undefined1 * puVar20;
  undefined1 * puVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  byte * local_8;
  
  puVar3 = (undefined4 *)param_1[7];
  local_8 = (byte *)(*param_1 + -1);
  uVar19 = puVar3[0xe];
  pbVar1 = local_8 + param_1[1] + -5;
  puVar20 = (undefined1 *)(param_1[3] + -1);
  puVar16 = puVar20 + (param_1[4] - param_2);
  puVar2 = puVar20 + param_1[4] + -0x101;
  iVar4 = puVar3[10];
  uVar5 = puVar3[0xb];
  uVar6 = puVar3[0xc];
  iVar24 = puVar3[0xd];
  iVar7 = puVar3[0x13];
  iVar8 = puVar3[0x14];
  uVar9 = puVar3[0x15];
  uVar10 = puVar3[0x16];
  uVar22 = puVar3[0xf];
LAB_00c39618: ;
  if (uVar22 < 0xf) {
    pbVar13 = local_8 + 1;
    local_8 = local_8 + 2;
    uVar19 = uVar19 + ((uint)*pbVar13 << ((byte)uVar22 & 0x1f)) +
             ((uint)*local_8 << ((byte)uVar22 + 8 & 0x1f));
    uVar22 = uVar22 + 0x10;
  }
  uVar17 = *((uint *)GEN_TOP((iVar7 + ((1 << ((byte)uVar9 & 0x1f)) - 1U & uVar19) * 4)));
  uVar19 = uVar19 >> ((byte)(uVar17 >> 8) & 0x1f);
  uVar22 = uVar22 - (uVar17 >> 8 & 0xff);
  cVar11 = (char)uVar17;
  while (cVar11 != '\0') {
    if ((uVar17 & 0x10) != 0) {
      param_2 = uVar17 >> 0x10;
      uVar17 = uVar17 & 0xf;
      if (uVar17 != 0) {
        if (uVar22 < uVar17) {
          local_8 = local_8 + 1;
          uVar19 = uVar19 + ((uint)*local_8 << ((byte)uVar22 & 0x1f));
          uVar22 = uVar22 + 8;
        }
        param_2 = param_2 + ((1 << (sbyte)uVar17) - 1U & uVar19);
        uVar19 = uVar19 >> (sbyte)uVar17;
        uVar22 = uVar22 - uVar17;
      }
      if (uVar22 < 0xf) {
        pbVar13 = local_8 + 1;
        local_8 = local_8 + 2;
        uVar19 = uVar19 + ((uint)*pbVar13 << ((byte)uVar22 & 0x1f)) +
                 ((uint)*local_8 << ((byte)uVar22 + 8 & 0x1f));
        uVar22 = uVar22 + 0x10;
      }
      uVar17 = *((uint *)GEN_TOP((iVar8 + ((1 << ((byte)uVar10 & 0x1f)) - 1U & uVar19) * 4)));
      uVar19 = uVar19 >> ((byte)(uVar17 >> 8) & 0x1f);
      uVar22 = uVar22 - (uVar17 >> 8 & 0xff);
      goto joined_r0x00c3971a;
    }
    if ((uVar17 & 0x40) != 0) {
      if ((uVar17 & 0x20) == 0) {
        param_1[6] = (int)"invalid literal/length code";
        goto LAB_00c39936;
      }
      *puVar3 = 0xb;
      goto LAB_00c3993f;
    }
    uVar17 = *((uint *)GEN_TOP((iVar7 + (((1 << ((byte)uVar17 & 0x1f)) - 1U & uVar19) + (uVar17 >> 0x10)) * 4
                      )));
    uVar19 = uVar19 >> ((byte)(uVar17 >> 8) & 0x1f);
    uVar22 = uVar22 - (uVar17 >> 8 & 0xff);
    cVar11 = (char)uVar17;
  }
  uVar12 = (undefined1)(uVar17 >> 0x10);
  goto LAB_00c398ea;
joined_r0x00c3971a: ;
  if ((uVar17 & 0x10) != 0) goto LAB_00c39756;
  if ((uVar17 & 0x40) != 0) {
    param_1[6] = (int)"invalid distance code";
    goto LAB_00c39936;
  }
  uVar17 = *((uint *)GEN_TOP((iVar8 + (((1 << ((byte)uVar17 & 0x1f)) - 1U & uVar19) + (uVar17 >> 0x10)) * 4)));
  uVar19 = uVar19 >> ((byte)(uVar17 >> 8) & 0x1f);
  uVar22 = uVar22 - (uVar17 >> 8 & 0xff);
  goto joined_r0x00c3971a;
LAB_00c39756: ;
  uVar14 = uVar17 & 0xf;
  uVar23 = uVar22;
  pbVar13 = local_8;
  if (uVar22 < uVar14) {
    uVar23 = uVar22 + 8;
    uVar19 = uVar19 + ((uint)local_8[1] << ((byte)uVar22 & 0x1f));
    pbVar13 = local_8 + 1;
    if (uVar23 < uVar14) {
      uVar19 = uVar19 + ((uint)local_8[2] << ((byte)uVar23 & 0x1f));
      uVar23 = uVar22 + 0x10;
      pbVar13 = local_8 + 2;
    }
  }
  local_8 = pbVar13;
  uVar22 = uVar23 - uVar14;
  uVar23 = (1 << (sbyte)uVar14) - 1U & uVar19;
  uVar19 = uVar19 >> (sbyte)uVar14;
  uVar23 = (uVar17 >> 0x10) + uVar23;
  if ((uint)((int)puVar20 - (int)puVar16) < uVar23) {
    uVar17 = uVar23 - ((int)puVar20 - (int)puVar16);
    if ((uVar5 < uVar17) && (puVar3[0x6f0] != 0)) {
      param_1[6] = (int)"invalid distance too far back";
LAB_00c39936: ;
      *puVar3 = 0x1d;
LAB_00c3993f: ;
      iVar4 = (int)local_8 - (uVar22 >> 3);
      iVar24 = uVar22 + (uVar22 >> 3) * -8;
      *param_1 = iVar4 + 1;
      param_1[3] = (int)(puVar20 + 1);
      param_1[4] = (int)(puVar2 + (0x101 - (int)puVar20));
      param_1[1] = (int)(pbVar1 + (5 - iVar4));
      puVar3[0xf] = iVar24;
      puVar3[0xe] = uVar19 & (1 << ((byte)iVar24 & 0x1f)) - 1U;
      return 0;
    }
    iVar15 = iVar24 + -1;
    if (uVar6 == 0) {
      iVar15 = iVar15 + (iVar4 - uVar17);
      if (uVar17 < param_2) {
        param_2 = param_2 - uVar17;
        do {
          puVar21 = (undefined1 *)(iVar15 + 1);
          iVar15 = iVar15 + 1;
          puVar20 = puVar20 + 1;
          uVar17 = uVar17 - 1;
          *puVar20 = *puVar21;
        } while (uVar17 != 0);
LAB_00c3985a: ;
        iVar15 = (int)puVar20 - uVar23;
      }
    }
    else if (uVar6 < uVar17) {
      uVar14 = uVar17 - uVar6;
      iVar15 = iVar15 + (uVar6 - uVar17) + iVar4;
      if (uVar14 < param_2) {
        param_2 = param_2 - uVar14;
        iVar15 = iVar15 - (int)puVar20;
        do {
          puVar21 = puVar20 + iVar15 + 1;
          puVar20 = puVar20 + 1;
          uVar14 = uVar14 - 1;
          *puVar20 = *puVar21;
        } while (uVar14 != 0);
        iVar15 = iVar24 + -1;
        if (uVar6 < param_2) {
          param_2 = param_2 - uVar6;
          uVar17 = uVar6;
          do {
            puVar21 = (undefined1 *)(iVar15 + 1);
            iVar15 = iVar15 + 1;
            puVar20 = puVar20 + 1;
            uVar17 = uVar17 - 1;
            *puVar20 = *puVar21;
          } while (uVar17 != 0);
          goto LAB_00c3985a;
        }
      }
    }
    else {
      iVar15 = iVar15 + (uVar6 - uVar17);
      if (uVar17 < param_2) {
        param_2 = param_2 - uVar17;
        do {
          puVar21 = (undefined1 *)(iVar15 + 1);
          iVar15 = iVar15 + 1;
          puVar20 = puVar20 + 1;
          uVar17 = uVar17 - 1;
          *puVar20 = *puVar21;
        } while (uVar17 != 0);
        goto LAB_00c3985a;
      }
    }
    if (2 < param_2) {
      iVar18 = (param_2 - 3) / 3 + 1;
      do {
        param_2 = param_2 - 3;
        puVar20[1] = *(undefined1 *)(iVar15 + 1);
        puVar20[2] = *(undefined1 *)(iVar15 + 2);
        puVar21 = (undefined1 *)(iVar15 + 3);
        iVar15 = iVar15 + 3;
        puVar20 = puVar20 + 3;
        iVar18 = iVar18 + -1;
        *puVar20 = *puVar21;
      } while (iVar18 != 0);
    }
    if (param_2 == 0) goto LAB_00c398ec;
    puVar20 = puVar20 + 1;
    *puVar20 = *(undefined1 *)(iVar15 + 1);
    if (param_2 < 2) goto LAB_00c398ec;
    uVar12 = *(undefined1 *)(iVar15 + 2);
  }
  else {
    iVar15 = (int)puVar20 - uVar23;
    do {
      puVar21 = puVar20;
      iVar18 = iVar15;
      puVar21[1] = *(undefined1 *)(iVar18 + 1);
      puVar21[2] = *(undefined1 *)(iVar18 + 2);
      puVar20 = puVar21 + 3;
      *puVar20 = *(undefined1 *)(iVar18 + 3);
      param_2 = param_2 - 3;
      iVar15 = iVar18 + 3;
    } while (2 < param_2);
    if (param_2 == 0) goto LAB_00c398ec;
    puVar20 = puVar21 + 4;
    *puVar20 = *(undefined1 *)(iVar18 + 4);
    if (param_2 < 2) goto LAB_00c398ec;
    uVar12 = *(undefined1 *)(iVar18 + 5);
  }
LAB_00c398ea: ;
  puVar20 = puVar20 + 1;
  *puVar20 = uVar12;
LAB_00c398ec: ;
  if ((pbVar1 <= local_8) || (puVar2 <= puVar20)) goto LAB_00c3993f;
  goto LAB_00c39618;
}

/* ref: FUN_00c399a0 */
uint F_00c399a0(unsigned int gen_a0)
{
  GEN_ENTER(0xc399a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  if ((param_1 != 0) && (puVar2 = *(undefined4 * PTR32 *)(param_1 + 0x1c), puVar2 != (undefined4 *)0x0)) {
    puVar2[7] = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x30) = 1;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[3] = 0;
    puVar2[8] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0;
    puVar1 = puVar2 + 0x14c;
    puVar2[5] = 0x8000;
    puVar2[0x1b] = puVar1;
    puVar2[0x14] = puVar1;
    puVar2[0x13] = puVar1;
    puVar2[0x6f0] = 1;
    puVar2[0x6f1] = 0xffffffff;
    return 0;
  }
  return 0xfffffffe;
}

/* ref: FUN_00c39a20 */
uint F_00c39a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc39a20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((param_1 == 0) || (iVar1 = *(int *)(param_1 + 0x1c), iVar1 == 0)) {
    return 0xfffffffe;
  }
  if ((int)param_2 < 0) {
    iVar2 = 0;
    uVar3 = -param_2;
  }
  else {
    iVar2 = ((int)param_2 >> 4) + 1;
    uVar3 = param_2;
    if ((int)param_2 < 0x30) {
      uVar3 = param_2 & 0xf;
    }
  }
  if ((uVar3 != 0) && (((int)uVar3 < 8 || (0xf < (int)uVar3)))) {
    return 0xfffffffe;
  }
  if ((*(int *)(iVar1 + 0x34) != 0) && (*(uint *)(iVar1 + 0x24) != uVar3)) {
    ((code *)*(gen_code32 *)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),*(int *)(iVar1 + 0x34));
    *(undefined4 *)(iVar1 + 0x34) = 0;
  }
  *(int *)(iVar1 + 8) = iVar2;
  *(uint *)(iVar1 + 0x24) = uVar3;
  uVar3 = F_00c399a0(param_1);
  return uVar3;
}

/* ref: FUN_00c39ab0 */
uint F_00c39ab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc39ab0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  char * param_3 = (char *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  uint uVar1;
  uint uVar2;
  
  if (((param_3 == (char *)0x0) || (*param_3 != '1')) || (param_4 != 0x38)) {
    return 0xfffffffa;
  }
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x20) == 0) {
    *(gen_code32 *)(param_1 + 0x20) = ((code *)REFP(0xc39520));
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    *(gen_code32 *)(param_1 + 0x24) = ((code *)REFP(0xc39560));
  }
  uVar1 = ((code *)*(gen_code32 *)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),1,0x1bcc);
  if (uVar1 == 0) {
    return 0xfffffffc;
  }
  *(uint *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(uVar1 + 0x34) = 0;
  uVar2 = F_00c39a20(param_1,param_2);
  if (uVar2 != 0) {
    ((code *)*(gen_code32 *)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),uVar1);
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return uVar2;
}

/* ref: FUN_00c39b70 */
uint F_00c39b70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc39b70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c39ab0(param_1,0xf,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c39b90 */
uint F_00c39b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc39b90u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (((*(int *)&gen_args[0]) != 0) && (iVar2 = *(int *)((*(int *)&gen_args[0]) + 0x1c), iVar2 != 0)) {
    if ((*(int *)&gen_args[1]) < 0) {
      *(undefined4 *)(iVar2 + 0x38) = 0;
      *(undefined4 *)(iVar2 + 0x3c) = 0;
      return 0;
    }
    if ((*(int *)&gen_args[1]) < 0x11) {
      iVar3 = *(int *)(iVar2 + 0x3c);
      uVar1 = iVar3 + (*(int *)&gen_args[1]);
      if (uVar1 < 0x21) {
        *(uint *)(iVar2 + 0x3c) = uVar1;
        *(int *)(iVar2 + 0x38) =
             *(int *)(iVar2 + 0x38) +
             (((1 << ((byte)(*(int *)&gen_args[1]) & 0x1f)) - 1U & (*(uint *)&gen_args[2])) << ((byte)iVar3 & 0x1f));
        return 0;
      }
    }
    return 0xfffffffe;
  }
  return 0xfffffffe;
}

/* ref: FUN_00c39c00 */
unsigned int F_00c39c00(unsigned int gen_a0)
{
  GEN_ENTER(0xc39c00u, gen_a0, 0u, 0u, 0u);
  int in_eax = (int)gen_a0;
  *(undefined * PTR32 *)(in_eax + 0x4c) = &REFG(undefined, 0x11178c0);
  *(undefined4 *)(in_eax + 0x54) = 9;
  *(undefined * PTR32 *)(in_eax + 0x50) = &REFG(undefined, 0x1117840);
  *(undefined4 *)(in_eax + 0x58) = 5;
  return 0;
}

/* ref: FUN_00c39c20 */
uint F_00c39c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc39c20u, gen_a0, gen_a1, 0u, 0u);
  int in_eax = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_2 + 0x1c);
  if (*(int *)(iVar1 + 0x34) == 0) {
    uVar2 = ((code *)*(gen_code32 *)(param_2 + 0x20))
                      (*(undefined4 *)(param_2 + 0x28),
                       1 << ((byte)*(undefined4 *)(iVar1 + 0x24) & 0x1f),1);
    *(uint *)(iVar1 + 0x34) = uVar2;
    if (uVar2 == 0) {
      return 1;
    }
  }
  if (*(int *)(iVar1 + 0x28) == 0) {
    *(undefined4 *)(iVar1 + 0x30) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    *(int *)(iVar1 + 0x28) = 1 << ((byte)*(undefined4 *)(iVar1 + 0x24) & 0x1f);
  }
  uVar3 = in_eax - *(int *)(param_2 + 0x10);
  uVar2 = *(uint *)(iVar1 + 0x28);
  if (uVar2 <= uVar3) {
    F_00c46aa0(*(undefined4 *)(iVar1 + 0x34),*(int *)(param_2 + 0xc) - uVar2,uVar2);
    *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(iVar1 + 0x28);
    *(undefined4 *)(iVar1 + 0x30) = 0;
    return 0;
  }
  uVar2 = uVar2 - *(int *)(iVar1 + 0x30);
  if (uVar3 < uVar2) {
    uVar2 = uVar3;
  }
  F_00c46aa0(*(int *)(iVar1 + 0x34) + *(int *)(iVar1 + 0x30),*(int *)(param_2 + 0xc) - uVar3,uVar2);
  iVar4 = uVar3 - uVar2;
  if (iVar4 != 0) {
    F_00c46aa0(*(undefined4 *)(iVar1 + 0x34),*(int *)(param_2 + 0xc) - iVar4,iVar4);
    *(int *)(iVar1 + 0x30) = iVar4;
    *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(iVar1 + 0x28);
    return 0;
  }
  *(int *)(iVar1 + 0x30) = *(int *)(iVar1 + 0x30) + uVar2;
  if (*(uint *)(iVar1 + 0x30) == *(uint *)(iVar1 + 0x28)) {
    *(undefined4 *)(iVar1 + 0x30) = 0;
  }
  if (*(uint *)(iVar1 + 0x2c) < *(uint *)(iVar1 + 0x28)) {
    *(uint *)(iVar1 + 0x2c) = *(uint *)(iVar1 + 0x2c) + uVar2;
  }
  return 0;
}

/* ref: FUN_00c39d20 */
uint F_00c39d20(unsigned int gen_a0)
{
  GEN_ENTER(0xc39d20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  
  if (((param_1 != 0) && (*(int *)(param_1 + 0x1c) != 0)) &&
     ((code *)*(gen_code32 *)(param_1 + 0x24) != (code *)0x0)) {
    iVar1 = *((int *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0x34)));
    if (iVar1 != 0) {
      ((code *)*(gen_code32 *)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),iVar1);
    }
    ((code *)*(gen_code32 *)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = 0;
    return 0;
  }
  return 0xfffffffe;
}

/* ref: FUN_00c39d80 */
uint F_00c39d80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc39d80u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if ((param_1 == 0) || (piVar1 = *(int * PTR32 *)(param_1 + 0x1c), piVar1 == (int *)0x0)) {
    return 0xfffffffe;
  }
  if (piVar1[2] == 0) {
    if (*piVar1 != 10) goto LAB_00c39de5;
  }
  else if (*piVar1 != 10) {
    return 0xfffffffe;
  }
  iVar4 = param_2;
  uVar3 = param_3;
  uVar2 = F_00c38d10(0,0,0);
  uVar3 = F_00c38d10(uVar2,iVar4,uVar3);
  if (uVar3 != piVar1[6]) {
    return 0xfffffffd;
  }
LAB_00c39de5: ;
  uVar3 = F_00c39c20(*(undefined4 *)(param_1 + 0x10),param_1);
  if (uVar3 != 0) {
    *piVar1 = 0x1e;
    return 0xfffffffc;
  }
  uVar3 = piVar1[10];
  if (param_3 <= uVar3) {
    F_00c46aa0((piVar1[0xd] - param_3) + uVar3,param_2,param_3);
    piVar1[0xb] = param_3;
    piVar1[3] = 1;
    return 0;
  }
  F_00c46aa0(piVar1[0xd],(param_2 - uVar3) + param_3,uVar3);
  piVar1[0xb] = piVar1[10];
  piVar1[3] = 1;
  return 0;
}

