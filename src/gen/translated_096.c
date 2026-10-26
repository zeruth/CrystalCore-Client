#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00975090 */
uint F_00975090(unsigned int gen_a0)
{
  GEN_ENTER(0x975090u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 4) != 0) {
    return *((uint *)GEN_TOP((*(int *)(in_ecx + 4) + 0x358)));
  }
  return 0;
}

/* ref: FUN_009750b0 */
uint F_009750b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9750b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 4) != 0) {
    return *((uint *)GEN_TOP((*(int *)(in_ecx + 4) + 0x35c)));
  }
  return 0;
}

/* ref: FUN_009750d0 */
uint F_009750d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9750d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 4) != 0) {
    return (int)*((float *)GEN_TOP((*(int *)(in_ecx + 4) + 0x3b8)));
  }
  return 0;
}

/* ref: FUN_009750f0 */
uint F_009750f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9750f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 4);
  if (uVar1 != 0) {
    *(undefined4 *)(uVar1 + 0x2a8) = param_2;
  }
  return uVar1;
}

/* ref: FUN_00975110 */
unsigned int F_00975110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x975110u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (*(int *)(in_ecx + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(in_ecx + 4) + 0x2ac))) = param_2;
  }
  return 0;
}

/* ref: FUN_00975140 */
uint F_00975140(unsigned int gen_a0)
{
  GEN_ENTER(0x975140u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10da92c));
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00975170 */
byte F_00975170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x975170u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x390];
  byte bVar1;
  uint uVar2;
  undefined * this_00;
  undefined4 * puVar3;
  bool bVar4;
  
  (*(uint *)(gen_frame + 0x388)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x38c);
  ((byte *)(gen_frame + 0x4))[0] = 0;
  ((byte *)(gen_frame + 0x4))[1] = 0;
  ((byte *)(gen_frame + 0x4))[2] = 0;
  ((byte *)(gen_frame + 0x4))[3] = 0;
  bVar4 = false;
  if (*(int *)((int)this + 4) == 0) {
    F_0042b630(((undefined1 *)(gen_frame + 0xb8)));
    F_0042b630(((undefined1 *)(gen_frame + 0x110)));
    F_0042b630(((undefined1 *)(gen_frame + 0x174)));
    F_0042b630(((undefined1 *)(gen_frame + 0x1c8)));
    F_0042b630(((char * PTR32 *)(gen_frame + 0x220)));
    F_0042b630(((char * PTR32 *)(gen_frame + 0x274)));
    F_0042b630(((undefined1 *)(gen_frame + 0x2c8)));
    uVar2 = F_00414500(param_2,0x23);
    (*(undefined4 *)(gen_frame + 0xb4)) = *(undefined4 *)(uVar2 + 0x14);
    uVar2 = F_00414500(param_2,0x22);
    F_0042cbc0(((undefined1 *)(gen_frame + 0x334)),*(undefined4 *)(uVar2 + 0x14));
    F_0042ccf0(((undefined1 *)(gen_frame + 0xb8)),((undefined1 *)(gen_frame + 0x334)));
    F_0042c880(((undefined1 *)(gen_frame + 0x334)));
    uVar2 = F_00414500(param_2,0x25);
    (*(undefined4 *)(gen_frame + 0x10c)) = *(undefined4 *)(uVar2 + 0x14);
    uVar2 = F_00414500(param_2,0x24);
    F_0042cbc0(((undefined1 *)(gen_frame + 0x334)),*(undefined4 *)(uVar2 + 0x14));
    F_0042ccf0(((undefined1 *)(gen_frame + 0x110)),((undefined1 *)(gen_frame + 0x334)));
    F_0042c880(((undefined1 *)(gen_frame + 0x334)));
    uVar2 = F_00414500(param_2,0x26);
    (*(undefined4 *)(gen_frame + 0x164)) = *(undefined4 *)(uVar2 + 0x14);
    uVar2 = F_00414500(param_2,0x27);
    (*(undefined4 *)(gen_frame + 0x168)) = *(undefined4 *)(uVar2 + 0x14);
    uVar2 = F_00414500(param_2,0x28);
    (*(undefined4 *)(gen_frame + 0x16c)) = *(undefined4 *)(uVar2 + 0x14);
    uVar2 = F_00414500(param_2,0x29);
    (*(undefined4 *)(gen_frame + 0x170)) = *(undefined4 *)(uVar2 + 0x14);
    uVar2 = F_00414500(param_2,0x2b);
    F_0042cbc0(((undefined1 *)(gen_frame + 0x334)),*(undefined4 *)(uVar2 + 0x14));
    F_0042ccf0(((undefined1 *)(gen_frame + 0x1c8)),((undefined1 *)(gen_frame + 0x334)));
    F_0042c880(((undefined1 *)(gen_frame + 0x334)));
    uVar2 = F_00414500(param_2,0x2c);
    (*(undefined4 *)(gen_frame + 0x21c)) = *(undefined4 *)(uVar2 + 0x14);
    uVar2 = F_00414500(param_2,0x2e);
    F_0042cbc0(((undefined1 *)(gen_frame + 0x334)),*(undefined4 *)(uVar2 + 0x14));
    F_0042ccf0(((char * PTR32 *)(gen_frame + 0x220)),((undefined1 *)(gen_frame + 0x334)));
    F_0042c880(((undefined1 *)(gen_frame + 0x334)));
    uVar2 = F_00414500(param_2,0x32);
    bVar4 = *(int *)(uVar2 + 0x14) == 0;
    if (bVar4) {
      uVar2 = F_00414500(param_2,0x2f);
      uVar2 = F_0042cbc0(((undefined1 *)(gen_frame + 0x60)),*(undefined4 *)(uVar2 + 0x14));
    }
    else {
      uVar2 = F_0042cc20(((byte *)(gen_frame + 0x4)) + 8,&REFG(undefined, 0x10da8e0),REFG(undefined4, 0x108cc50));
    }
    F_0042cbc0(((undefined1 *)(gen_frame + 0x334)),uVar2);
    F_0042ccf0(((char * PTR32 *)(gen_frame + 0x274)),((undefined1 *)(gen_frame + 0x334)));
    F_0042c880(((undefined1 *)(gen_frame + 0x334)));
    if (bVar4) {
      F_0042c880(((undefined1 *)(gen_frame + 0x60)));
    }
    else {
      F_0042c880(((byte *)(gen_frame + 0x4)) + 8);
    }
    uVar2 = F_00414500(param_2,0x33);
    (*(undefined4 *)(gen_frame + 0x32c)) = *(undefined4 *)(uVar2 + 0x14);
    uVar2 = F_00414500(param_2,0x34);
    (*(undefined4 *)(gen_frame + 0x330)) = *(undefined4 *)(uVar2 + 0x14);
    uVar2 = F_00414500(param_2,0x35);
    (*(undefined4 *)(gen_frame + 0x324)) = *(undefined4 *)(uVar2 + 0x14);
    uVar2 = F_00414500(param_2,0x36);
    (*(undefined4 *)(gen_frame + 0x328)) = *(undefined4 *)(uVar2 + 0x14);
    F_0042e170(((undefined1 *)(gen_frame + 0x334)),L"00000");
    bVar1 = F_0042b660(((char * PTR32 *)(gen_frame + 0x220)),((undefined1 *)(gen_frame + 0x334)));
    if ((bVar1 == 0) || (((byte *)(gen_frame + 0x4))[7] = 1, *((char * PTR32 *)(gen_frame + 0x274))[0] != '\0')) {
      ((byte *)(gen_frame + 0x4))[7] = 0;
    }
    F_0042c880(((undefined1 *)(gen_frame + 0x334)));
    if (((byte *)(gen_frame + 0x4))[7] == 0) {
      if ((*((char * PTR32 *)(gen_frame + 0x220))[0] == '\0') || ((*(undefined1 *)(gen_frame + 0x320)) = 1, *((char * PTR32 *)(gen_frame + 0x274))[0] == '\0')) {
        (*(undefined1 *)(gen_frame + 0x320)) = 0;
      }
    }
    else {
      (*(undefined1 *)(gen_frame + 0x320)) = 1;
    }
    uVar2 = F_00414500(param_2,0x30);
    F_0042cbc0(((undefined1 *)(gen_frame + 0x334)),*(undefined4 *)(uVar2 + 0x14));
    F_0042ccf0(((undefined1 *)(gen_frame + 0x2c8)),((undefined1 *)(gen_frame + 0x334)));
    F_0042c880(((undefined1 *)(gen_frame + 0x334)));
    (*(undefined4 *)(gen_frame + 0x31c)) = 0;
    this_00 = (undefined *)F_00406b90(0x3f0,0,0);
    if (this_00 == (undefined *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = F_00c2ec70(this_00,&(*(undefined4 *)(gen_frame + 0xb4)));
    }
    *(uint *)((int)this + 4) = uVar2;
    puVar3 = (undefined4 *)F_00406b90(0x10,0,0);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      *puVar3 = (*(undefined * PTR32 (*)[3])REFP(0x10da8f4));
      F_00ba5190(puVar3 + 1,this);
      *puVar3 = (*(undefined * PTR32 (*)[3])REFP(0x10da91c));
      puVar3[1] = (*(undefined * PTR32 (*)[2])REFP(0x10da910));
      puVar3[2] = (*(undefined * PTR32 (*)[2])REFP(0x10da904));
    }
    *(undefined4 * PTR32 *)((int)this + 8) = puVar3;
    F_00c2b160(*(undefined * PTR32 *)((int)this + 4),puVar3);
    F_0042c880(((undefined1 *)(gen_frame + 0x2c8)));
    F_0042c880(((char * PTR32 *)(gen_frame + 0x274)));
    F_0042c880(((char * PTR32 *)(gen_frame + 0x220)));
    F_0042c880(((undefined1 *)(gen_frame + 0x1c8)));
    F_0042c880(((undefined1 *)(gen_frame + 0x174)));
    F_0042c880(((undefined1 *)(gen_frame + 0x110)));
    F_0042c880(((undefined1 *)(gen_frame + 0xb8)));
    bVar4 = *(int *)((int)this + 4) == 0;
  }
  F_00c47745((*(uint *)(gen_frame + 0x388)) ^ (uint)(uint)(gen_frame + 0x38c));
  return !bVar4;
}

/* ref: FUN_00975570 */
unsigned int F_00975570(unsigned int gen_a0)
{
  GEN_ENTER(0x975570u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  undefined4 * puVar1;
  
  if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
    F_00c2e7f0(*(undefined * PTR32 *)((int)this + 4));
    this_00 = *(undefined * PTR32 *)((int)this + 4);
    if (this_00 != (undefined *)0x0) {
      F_00c2ef00(this_00);
      F_00406ad0(this_00);
      *(undefined4 *)((int)this + 4) = 0;
    }
    puVar1 = *(undefined4 * PTR32 *)((int)this + 8);
    *(undefined4 *)((int)this + 4) = 0;
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *(undefined4 *)((int)this + 8) = 0;
    }
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  return 0;
}

/* ref: FUN_009755c0 */
byte F_009755c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9755c0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) != 0) {
    F_004142d0(&(*(undefined4 * PTR32 *)&gen_args[1]),*(*(undefined4 * PTR32 *)&gen_args[1]));
    F_00c2b3a0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),&(*(undefined4 * PTR32 *)&gen_args[1]));
  }
  return 1;
}

/* ref: FUN_009755f0 */
unsigned int F_009755f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9755f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  
  if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
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
    (*(undefined4 *)(gen_frame + 0x34)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    F_00c2e1f0(*(undefined * PTR32 *)((int)this + 4),&(*(undefined4 *)(gen_frame + 0xc)));
    *param_1 = (*(undefined4 *)(gen_frame + 0xc));
    param_1[1] = (*(undefined4 *)(gen_frame + 0x10));
    param_1[2] = (*(undefined4 *)(gen_frame + 0x14));
    param_1[3] = (*(undefined4 *)(gen_frame + 0x18));
    param_1[4] = (*(undefined4 *)(gen_frame + 0x1c));
    param_1[5] = (*(undefined4 *)(gen_frame + 0x20));
    param_1[6] = (*(undefined4 *)(gen_frame + 0x24));
    param_1[7] = (*(undefined4 *)(gen_frame + 0x28));
    param_1[8] = (*(undefined4 *)(gen_frame + 0x2c));
    param_1[9] = (*(undefined4 *)(gen_frame + 0x30));
    param_1[10] = (*(undefined4 *)(gen_frame + 0x34));
    param_1[0xb] = (*(undefined4 *)(gen_frame + 0x38));
  }
  return 0;
}

/* ref: FUN_00975680 */
uint F_00975680(unsigned int gen_a0)
{
  GEN_ENTER(0x975680u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  if (*(int *)((int)this + 4) != 0) {
    return *((uint *)GEN_TOP((*(int *)((int)this + 4) + 0x30c)));
  }
  uVar1 = F_0046ff40();
  return (uint)(uVar1 / 1000);
}

/* ref: FUN_009756b0 */
ulonglong F_009756b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9756b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    return (ulonglong)*(uint *)(iVar1 + 0x30c) * 1000 + (ulonglong)*(uint *)(iVar1 + 0x310);
  }
  uVar2 = F_0046ff40();
  return uVar2 & 0xffffffff;
}

/* ref: FUN_009756e0 */
uint F_009756e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9756e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10da8f4));
  F_00ba5190(in_ecx + 1,param_2);
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10da91c));
  in_ecx[1] = (*(undefined * PTR32 (*)[2])REFP(0x10da910));
  in_ecx[2] = (*(undefined * PTR32 (*)[2])REFP(0x10da904));
  return (uint)in_ecx;
}

/* ref: FUN_00975720 */
unsigned int F_00975720(unsigned int gen_a0)
{
  GEN_ENTER(0x975720u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10da91c));
  in_ecx[1] = (*(undefined * PTR32 (*)[2])REFP(0x10da910));
  in_ecx[2] = (*(undefined * PTR32 (*)[2])REFP(0x10da904));
  F_00ba51c0(in_ecx + 1);
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10da8f4));
  return 0;
}

/* ref: Client::Network::NetworkModulePacketReceiverCallback::vf1 */
uint F_00975750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x975750u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 4) + 4))))
                    (this + 4,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::Network::NetworkModulePacketReceiverCallback::vf2 */
uint F_00975760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x975760u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 8) + 4))))
                    (this + 8,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::Network::NetworkModulePacketReceiverCallback::vf0 */
uint F_00975770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x975770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10da91c));
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[2])REFP(0x10da910));
  *(undefined * PTR32 * PTR32 *)(this + 8) = (*(undefined * PTR32 (*)[2])REFP(0x10da904));
  F_00ba51c0(this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10da8f4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_009757b0 */
uint F_009757b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9757b0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx + 4);
  F_0042b630(in_ecx + 0x5c);
  F_0042b630(in_ecx + 0xc0);
  F_0042b630(in_ecx + 0x114);
  F_0042b630(in_ecx + 0x16c);
  F_0042b630(in_ecx + 0x1c0);
  F_0042b630(in_ecx + 0x214);
  return in_ecx;
}

/* ref: FUN_00975800 */
uint F_00975800(unsigned int gen_a0)
{
  GEN_ENTER(0x975800u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0x214));
  F_0042c880((undefined *)((int)this + 0x1c0));
  F_0042c880((undefined *)((int)this + 0x16c));
  F_0042c880((undefined *)((int)this + 0x114));
  F_0042c880((undefined *)((int)this + 0xc0));
  F_0042c880((undefined *)((int)this + 0x5c));
  uVar1 = F_0042c880((undefined *)((int)this + 4));
  return (uint)uVar1;
}

/* ref: FUN_00975850 */
uint F_00975850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x975850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00c2ef00(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00975880 */
uint F_00975880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x975880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00975770((undefined *)((int)this + -4),param_1);
  return uVar1;
}

/* ref: FUN_00975890 */
uint F_00975890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x975890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00975770((undefined *)((int)this + -8),param_1);
  return uVar1;
}

/* ref: Client::Network::NetworkModuleProxy::vf0 */
uint F_009758d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9758d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10da92c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00975900 */
unsigned int F_00975900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x975900u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  iVar2 = 0x65;
  puVar1 = param_1;
  do {
    *puVar1 = *((undefined4 *)GEN_TOP(((param_2 - (int)param_1) + (int)puVar1)));
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 0;
}

/* ref: FUN_00975920 */
unsigned int F_00975920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x975920u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  iVar2 = 0xb;
  puVar1 = param_1;
  do {
    *puVar1 = *((undefined4 *)GEN_TOP(((param_2 - (int)param_1) + (int)puVar1)));
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 0;
}

/* ref: FUN_00975940 */
unsigned int F_00975940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x975940u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  iVar2 = 0x125;
  puVar1 = param_1;
  do {
    *puVar1 = *((undefined4 *)GEN_TOP(((param_2 - (int)param_1) + (int)puVar1)));
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 0;
}

/* ref: FUN_00975960 */
int F_00975960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x975960u, gen_a0, gen_a1, 0u, 0u);
  int * in_edx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar1 = *in_edx;
  iVar2 = iVar1 + 1;
  *in_edx = iVar2;
  if (0x1f < iVar2) {
    *in_edx = 0;
  }
  return iVar1 * 0x194 + param_2;
}

/* ref: FUN_00975980 */
int F_00975980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x975980u, gen_a0, gen_a1, 0u, 0u);
  int * in_edx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar1 = *in_edx;
  iVar2 = iVar1 + 1;
  *in_edx = iVar2;
  if (0x1f < iVar2) {
    *in_edx = 0;
  }
  return iVar1 * 0x2c + param_2;
}

/* ref: FUN_009759a0 */
int F_009759a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9759a0u, gen_a0, gen_a1, 0u, 0u);
  int * in_edx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar1 = *in_edx;
  iVar2 = iVar1 + 1;
  *in_edx = iVar2;
  if (0x1f < iVar2) {
    *in_edx = 0;
  }
  return iVar1 * 0x494 + param_2;
}

/* ref: FUN_009759f0 */
uint F_009759f0(void)
{
  GEN_ENTER(0x9759f0u, 0u, 0u, 0u, 0u);
  int iVar1;
  
  iVar1 = REFG(int, 0x1493c1c) * 0x2c;
  REFG(int, 0x1493c1c) = REFG(int, 0x1493c1c) + 1;
  if (0x1f < REFG(int, 0x1493c1c)) {
    REFG(int, 0x1493c1c) = 0;
  }
  return (uint)(&REFG(undefined, 0x1496ea8) + iVar1);
}

/* ref: FUN_00975a50 */
uint F_00975a50(unsigned int gen_a0)
{
  GEN_ENTER(0x975a50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  HANDLE pvVar1;
  
  F_00509590(this);
  F_004cefe0((undefined *)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10da978));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[6])REFP(0x10da95c));
  gen_imp_QueryPerformanceFrequency(&(*(LARGE_INTEGER *)(gen_frame + 0x4)));
  *(DWORD *)((int)this + 0x20) = (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.LowPart;
  *(LONG *)((int)this + 0x24) = (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.HighPart;
  gen_imp_QueryPerformanceCounter(&(*(LARGE_INTEGER *)(gen_frame + 0x4)));
  *(undefined8 *)((int)this + 0x30) = 0;
  *(DWORD *)((int)this + 0x28) = (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.LowPart;
  *(LONG *)((int)this + 0x2c) = (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.HighPart;
  pvVar1 = gen_imp_CreateEventA((GEN_LPANY)0x0,0,0,(LPCSTR)0x0);
  *(HANDLE *)((int)this + 0x38) = pvVar1;
  F_004cf0c0((undefined *)((int)this + 0x48),4,0x21,0);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x48) =
       (*(undefined * PTR32 (*)[1])REFP(0x10da944));
  F_004cf0c0((undefined *)((int)this + 0x6c),4,0x21,0);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x6c) =
       (*(undefined * PTR32 (*)[1])REFP(0x10da94c));
  F_004cf0c0((undefined *)((int)this + 0x90),4,0x21,0);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x90) =
       (*(undefined * PTR32 (*)[1])REFP(0x10da954));
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  gen_imp_QueryPerformanceCounter(&(*(LARGE_INTEGER *)(gen_frame + 0x4)));
  *(DWORD *)((int)this + 0x28) = (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.LowPart;
  *(LONG *)((int)this + 0x2c) = (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.HighPart;
  LOCK();
  *(undefined4 *)((int)this + 0xb4) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)((int)this + 0xb8) = 0;
  UNLOCK();
  return (uint)this;
}

/* ref: FUN_00975b50 */
uint F_00975b50(unsigned int gen_a0)
{
  GEN_ENTER(0x975b50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10da978));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[6])REFP(0x10da95c));
  *(undefined4 *)((int)this + 0x90) =
       (*(undefined * PTR32 (*)[1])REFP(0x10da954));
  F_004cf160((undefined4 *)((int)this + 0x90));
  *(undefined4 *)((int)this + 0x6c) =
       (*(undefined * PTR32 (*)[1])REFP(0x10da94c));
  F_004cf160((undefined4 *)((int)this + 0x6c));
  *(undefined4 *)((int)this + 0x48) =
       (*(undefined * PTR32 (*)[1])REFP(0x10da944));
  F_004cf160((undefined4 *)((int)this + 0x48));
  gen_imp_CloseHandle(*(HANDLE *)((int)this + 0x38));
  F_004cf880((undefined *)((int)this + 4));
  uVar1 = F_005095f0(this);
  return uVar1;
}

/* ref: FUN_00975bb0 */
uint F_00975bb0(unsigned int gen_a0)
{
  GEN_ENTER(0x975bb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(uint *)((int)this + 0x44) = (uint)(*(int *)(REFG(int, 0x137104c) + 0x127c) != 0);
  uVar1 = F_004cf9e0((undefined *)((int)this + 4),0,0,0,"Input Thread");
  *(undefined4 *)((int)this + 0x3c) = 0;
  return uVar1;
}

/* ref: FUN_00975bf0 */
uint F_00975bf0(unsigned int gen_a0)
{
  GEN_ENTER(0x975bf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  
  if (*(int *)((int)this + 0x40) == 0) {
    in_EAX = gen_imp_SetEvent(*(HANDLE *)((int)this + 0x38));
  }
  return in_EAX;
}

/* ref: FUN_00975c10 */
unsigned int F_00975c10(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x975c10u, gen_a0, 0u, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  int iVar1;
  undefined4 * puVar2;
  
  F_006b89d0(REFG(undefined4, 0x1488338),param_2,param_3,param_4,param_5);
  if (*(int *)(param_1 + 0x44) == 0) {
    param_3[4] = 0;
    param_3[5] = 0;
    param_3[6] = 0;
    param_3[7] = 0;
    param_3[8] = 0;
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    puVar2 = param_3 + 9;
    for (iVar1 = 0x5c; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
  }
  return 0;
}

/* ref: FUN_00975c70 */
uint F_00975c70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x975c70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint * puVar4;
  
  puVar1 = (undefined4 *)((int)this + 0xb4);
  LOCK();
  uVar2 = *puVar1;
  *puVar1 = *puVar1;
  UNLOCK();
  *param_1 = uVar2;
  puVar4 = (uint *)((int)this + 0xb8);
  LOCK();
  uVar3 = *puVar4;
  *puVar4 = *puVar4;
  UNLOCK();
  *param_2 = uVar3;
  return uVar3;
}

/* ref: FUN_00975ca0 */
uint F_00975ca0(unsigned int gen_a0)
{
  GEN_ENTER(0x975ca0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b8a2f0(*param_1,param_1[1]);
  return uVar1;
}

/* ref: FUN_00975cc0 */
byte F_00975cc0(unsigned int gen_a0)
{
  GEN_ENTER(0x975cc0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((((*(uint *)(param_1 + 0x14) & 0xffff) == 0) && ((*(uint *)(param_1 + 0x18) & 0xffff) == 0))
     && ((*(uint *)(param_1 + 0x1c) & 0xffff) == 0)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00975cf0 */
byte F_00975cf0(unsigned int gen_a0)
{
  GEN_ENTER(0x975cf0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((((*(byte *)(param_1 + 0x10) & 0x1f) == 0) && ((*(byte *)(param_1 + 0x18) & 0x1f) == 0)) &&
     ((*(byte *)(param_1 + 0x1c) & 0x1f) == 0)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00975d10 */
byte F_00975d10(unsigned int gen_a0)
{
  GEN_ENTER(0x975d10u, gen_a0, 0u, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  return *param_1 != '\0';
}

/* ref: FUN_00975d20 */
byte F_00975d20(unsigned int gen_a0)
{
  GEN_ENTER(0x975d20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)((int)this + 0x3c) == 0) {
    *(undefined4 *)((int)this + 0x3c) = 1;
    if (*(int *)((int)this + 0x40) == 0) {
      gen_imp_SetEvent(*(HANDLE *)((int)this + 0x38));
    }
    return 0;
  }
  return *(int *)((int)this + 0x40) != 0;
}

/* ref: FUN_00975d50 */
uint F_00975d50(unsigned int gen_a0)
{
  GEN_ENTER(0x975d50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x680];
  float fVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 * puVar6;
  int * piVar7;
  int * piVar8;
  int iVar9;
  uint uVar10;
  DWORD DVar11;
  undefined * pvVar12;
  int iVar13;
  uint * puVar14;
  char * pcVar15;
  uint * puVar16;
  int * piVar17;
  
  (*(uint *)(gen_frame + 0x678)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x67c);
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = this;
  F_00976f30(((uint *)(gen_frame + 0x4b8)));
  F_00a1b190(((int *)(gen_frame + 0x64c)));
  F_00a1b0d0(((char *)(gen_frame + 0x24)));
  gen_imp_QueryPerformanceCounter(&(*(LARGE_INTEGER *)(gen_frame + 0xc)));
  uVar4 = (*(LARGE_INTEGER *)(gen_frame + 0xc)).s.HighPart;
  uVar3 = (*(LARGE_INTEGER *)(gen_frame + 0xc)).s.LowPart;
  DVar11 = (*(LARGE_INTEGER *)(gen_frame + 0xc)).s.LowPart - *(uint *)((int)this + 0x28);
  iVar13 = ((*(LARGE_INTEGER *)(gen_frame + 0xc)).s.HighPart - *(int *)((int)this + 0x2c)) -
           (uint)((*(LARGE_INTEGER *)(gen_frame + 0xc)).s.LowPart < *(uint *)((int)this + 0x28));
  (*(LARGE_INTEGER *)(gen_frame + 0xc)).s.LowPart = DVar11;
  (*(LARGE_INTEGER *)(gen_frame + 0xc)).s.HighPart = iVar13;
  *(undefined4 *)((int)this + 0x28) = uVar3;
  *(undefined4 *)((int)this + 0x2c) = uVar4;
  fVar1 = ((float)GEN_TOF(((float10)(longlong)CONCAT44(iVar13,DVar11) /
                 (float10)*(longlong *)((int)this + 0x20))));
  (*(LARGE_INTEGER *)(gen_frame + 0xc)).s.HighPart = (LONG)gen_fl2bits(fVar1);
  F_006b89d0(REFG(undefined4, 0x1488338),fVar1,((uint *)(gen_frame + 0x4b8)),((int *)(gen_frame + 0x64c)),((char *)(gen_frame + 0x24)));
  if (*(int *)((int)this + 0x44) == 0) {
    ((uint *)(gen_frame + 0x4b8))[4] = 0;
    ((uint *)(gen_frame + 0x4b8))[5] = 0;
    ((uint *)(gen_frame + 0x4b8))[6] = 0;
    ((uint *)(gen_frame + 0x4b8))[7] = 0;
    ((uint *)(gen_frame + 0x4b8))[8] = 0;
    ((uint *)(gen_frame + 0x4b8))[0] = 0;
    ((uint *)(gen_frame + 0x4b8))[1] = 0;
    ((uint *)(gen_frame + 0x4b8))[2] = 0;
    ((uint *)(gen_frame + 0x4b8))[3] = 0;
    puVar14 = ((uint *)(gen_frame + 0x4b8)) + 9;
    for (iVar13 = 0x5c; iVar13 != 0; iVar13 = iVar13 + -1) {
      *puVar14 = 0;
      puVar14 = puVar14 + 1;
    }
  }
  pvVar12 = (undefined *)((int)this + 0x48);
  uVar5 = F_004cf460(pvVar12);
  if ((int)uVar5 < 0x20) {
    if ((((((uint *)(gen_frame + 0x4b8))[5] & 0xffff) == 0) && ((((uint *)(gen_frame + 0x4b8))[6] & 0xffff) == 0)) &&
       ((((uint *)(gen_frame + 0x4b8))[7] & 0xffff) == 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((uVar5 == 0) || (bVar2)) {
      iVar13 = REFG(int, 0x1493c18) * 0x194;
      REFG(int, 0x1493c18) = REFG(int, 0x1493c18) + 1;
      if (0x1f < REFG(int, 0x1493c18)) {
        REFG(int, 0x1493c18) = 0;
      }
      puVar6 = (undefined4 *)F_004cf260(pvVar12,&(*(undefined4 *)(gen_frame + 0x14)));
      *puVar6 = &REFG(undefined, 0x1493c28) + iVar13;
      puVar14 = ((uint *)(gen_frame + 0x4b8));
      puVar16 = (uint *)(&REFG(undefined, 0x1493c28) + iVar13);
      for (iVar9 = 0x65; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar16 = *puVar14;
        puVar14 = puVar14 + 1;
        puVar16 = puVar16 + 1;
      }
      F_004cf2e0(pvVar12,(*(undefined4 *)(gen_frame + 0x14)));
    }
  }
  pvVar12 = (*(undefined * PTR32 *)(gen_frame + 0x1c));
  uVar5 = F_004cf460((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x6c));
  (*(bool *)(gen_frame + 0x1b)) = uVar5 == 0;
  if (((((*(byte *)(gen_frame + 0x65c)) & 0x1f) != 0) || (((*(uint *)(gen_frame + 0x664)) & 0x1f) != 0)) ||
     ((*(char *)(gen_frame + 0x23)) = '\0', ((*(byte *)(gen_frame + 0x668)) & 0x1f) != 0)) {
    (*(char *)(gen_frame + 0x23)) = '\x01';
  }
  if (((uVar5 == 0) || ((*(char *)(gen_frame + 0x23)) != '\0')) || (((int *)(gen_frame + 0x64c))[2] != 0)) {
    if ((int)uVar5 < 0x1f) {
      iVar13 = REFG(int, 0x1493c1c) * 0x2c;
      REFG(int, 0x1493c1c) = REFG(int, 0x1493c1c) + 1;
      if (0x1f < REFG(int, 0x1493c1c)) {
        REFG(int, 0x1493c1c) = 0;
      }
      puVar6 = (undefined4 *)F_004cf260((undefined *)((int)pvVar12 + 0x6c),&(*(undefined4 *)(gen_frame + 0x14)));
      *puVar6 = &REFG(undefined, 0x1496ea8) + iVar13;
      piVar8 = ((int *)(gen_frame + 0x64c));
      piVar17 = (int *)(&REFG(undefined, 0x1496ea8) + iVar13);
      for (iVar9 = 0xb; iVar9 != 0; iVar9 = iVar9 + -1) {
        *piVar17 = *piVar8;
        piVar8 = piVar8 + 1;
        piVar17 = piVar17 + 1;
      }
      F_004cf2e0((undefined *)((int)pvVar12 + 0x6c),(*(undefined4 *)(gen_frame + 0x14)));
    }
    else {
      uVar10 = (*(uint *)(gen_frame + 0x664)) & 0x1f;
      if (uVar5 == 0x1f) {
        if (uVar10 != 0) {
          piVar7 = (int *)F_009759f0();
          puVar6 = (undefined4 *)F_004cf260((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x6c),&(*(undefined4 *)(gen_frame + 0x14)));
          *puVar6 = piVar7;
          piVar8 = ((int *)(gen_frame + 0x64c));
          piVar17 = piVar7;
          for (iVar13 = 0xb; iVar13 != 0; iVar13 = iVar13 + -1) {
            *piVar17 = *piVar8;
            piVar8 = piVar8 + 1;
            piVar17 = piVar17 + 1;
          }
          LOCK();
          *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0xbc) = piVar7;
          UNLOCK();
          F_004cf2e0((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x6c),(*(undefined4 *)(gen_frame + 0x14)));
        }
      }
      else if (uVar10 != 0) {
        piVar8 = (int *)((int)pvVar12 + 0xbc);
        LOCK();
        iVar13 = *piVar8;
        *piVar8 = *piVar8;
        UNLOCK();
        if (iVar13 != 0) {
          uVar5 = *(uint *)(iVar13 + 0x18) & 0x1f;
          if (uVar5 != uVar10) {
            *(uint *)(iVar13 + 0x18) = *(uint *)(iVar13 + 0x18) | uVar5 | uVar10;
          }
        }
      }
    }
  }
  pvVar12 = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x90);
  uVar5 = F_004cf460(pvVar12);
  if (((int)uVar5 < 0x20) && ((uVar5 == 0 || (((char *)(gen_frame + 0x24))[0] != '\0')))) {
    iVar13 = REFG(int, 0x1493c20) * 0x494;
    REFG(int, 0x1493c20) = REFG(int, 0x1493c20) + 1;
    if (0x1f < REFG(int, 0x1493c20)) {
      REFG(int, 0x1493c20) = 0;
    }
    puVar6 = (undefined4 *)F_004cf260(pvVar12,&(*(undefined4 *)(gen_frame + 0x14)));
    *puVar6 = &REFG(undefined, 0x1497428) + iVar13;
    pcVar15 = ((char *)(gen_frame + 0x24));
    puVar6 = (undefined4 *)(&REFG(undefined, 0x1497428) + iVar13);
    for (iVar9 = 0x125; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar6 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      puVar6 = puVar6 + 1;
    }
    F_004cf2e0(pvVar12,(*(undefined4 *)(gen_frame + 0x14)));
  }
  LOCK();
  *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0xb4) = ((int *)(gen_frame + 0x64c))[0];
  UNLOCK();
  puVar6 = (undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0xb8);
  LOCK();
  *puVar6 = ((int *)(gen_frame + 0x64c))[1];
  UNLOCK();
  F_00c47745((*(uint *)(gen_frame + 0x678)) ^ (uint)(uint)(gen_frame + 0x67c));
  return (uint)puVar6;
}

/* ref: FUN_009760b0 */
byte F_009760b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9760b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  undefined * this_01;
  uint uVar1;
  undefined4 * puVar2;
  undefined * this_02;
  int iVar3;
  undefined4 * puVar4;
  
  this_00 = (undefined *)((int)this + 0x6c);
  this_01 = (undefined *)((int)this + 0x48);
  this_02 = (undefined *)((int)this + 0x90);
  uVar1 = F_004cf460(this_01);
  if (0 < (int)uVar1) {
    puVar2 = (undefined4 *)F_004cf3c0(this_01,&(*(undefined4 *)(gen_frame + 0x8)));
    puVar2 = (undefined4 *)*puVar2;
    puVar4 = param_1;
    for (iVar3 = 0x65; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    F_004cf410(this_01,(*(undefined4 *)(gen_frame + 0x8)));
  }
  uVar1 = F_004cf460(this_00);
  if (0 < (int)uVar1) {
    puVar2 = (undefined4 *)F_004cf3c0(this_00,&(*(undefined4 *)(gen_frame + 0x8)));
    puVar2 = (undefined4 *)*puVar2;
    puVar4 = param_2;
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    F_004cf410(this_00,(*(undefined4 *)(gen_frame + 0x8)));
    if (((*(byte *)(param_2 + 4) & 0x1f) != 0) || ((*(byte *)(param_2 + 6) & 0x1f) != 0)) {
      F_00b8a2f0(*param_2,param_2[1]);
    }
  }
  uVar1 = F_004cf460(this_02);
  if (0 < (int)uVar1) {
    puVar2 = (undefined4 *)F_004cf3c0(this_02,&(*(undefined4 *)(gen_frame + 0x8)));
    puVar2 = (undefined4 *)*puVar2;
    puVar4 = param_3;
    for (iVar3 = 0x125; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    F_004cf410(this_02,(*(undefined4 *)(gen_frame + 0x8)));
  }
  return 1;
}

/* ref: FUN_00976190 */
uint F_00976190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x976190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x680];
  float fVar1;
  bool bVar2;
  uint uVar3;
  undefined4 * puVar4;
  DWORD DVar5;
  uint uVar6;
  int iVar7;
  int * piVar8;
  int iVar9;
  uint * puVar10;
  int * piVar11;
  char * pcVar12;
  uint * puVar13;
  int * piVar14;
  
  (*(uint *)(gen_frame + 0x678)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x67c);
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = this;
  do {
    F_00976f30(((uint *)(gen_frame + 0x4b8)));
    F_00a1b190(((int *)(gen_frame + 0x64c)));
    F_00a1b0d0(((char *)(gen_frame + 0x24)));
    gen_imp_QueryPerformanceCounter(&(*(LARGE_INTEGER *)(gen_frame + 0x0)));
    iVar7 = (*(LARGE_INTEGER *)(gen_frame + 0x0)).s.LowPart - *(uint *)((int)this + 0x24);
    iVar9 = ((*(LARGE_INTEGER *)(gen_frame + 0x0)).s.HighPart - *(int *)((int)this + 0x28)) -
            (uint)((*(LARGE_INTEGER *)(gen_frame + 0x0)).s.LowPart < *(uint *)((int)this + 0x24));
    (*(int *)(gen_frame + 0x8)) = iVar7;
    (*(int *)(gen_frame + 0xc)) = iVar9;
    *(DWORD *)((int)this + 0x24) = (*(LARGE_INTEGER *)(gen_frame + 0x0)).s.LowPart;
    *(LONG *)((int)this + 0x28) = (*(LARGE_INTEGER *)(gen_frame + 0x0)).s.HighPart;
    fVar1 = ((float)GEN_TOF(((float10)(longlong)CONCAT44(iVar9,iVar7) /
                   (float10)*(longlong *)((int)this + 0x1c))));
    (*(float *)(gen_frame + 0x10)) = fVar1;
    F_006b89d0(REFG(undefined4, 0x1488338),fVar1,((uint *)(gen_frame + 0x4b8)),((int *)(gen_frame + 0x64c)),((char *)(gen_frame + 0x24)));
    if (*(int *)((int)this + 0x40) == 0) {
      ((uint *)(gen_frame + 0x4b8))[4] = 0;
      ((uint *)(gen_frame + 0x4b8))[5] = 0;
      ((uint *)(gen_frame + 0x4b8))[6] = 0;
      ((uint *)(gen_frame + 0x4b8))[7] = 0;
      ((uint *)(gen_frame + 0x4b8))[8] = 0;
      ((uint *)(gen_frame + 0x4b8))[0] = 0;
      ((uint *)(gen_frame + 0x4b8))[1] = 0;
      ((uint *)(gen_frame + 0x4b8))[2] = 0;
      ((uint *)(gen_frame + 0x4b8))[3] = 0;
      puVar10 = ((uint *)(gen_frame + 0x4b8)) + 9;
      for (iVar7 = 0x5c; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
    }
    uVar3 = F_004cf460((undefined *)((int)this + 0x44));
    if ((int)uVar3 < 0x20) {
      if ((((((uint *)(gen_frame + 0x4b8))[5] & 0xffff) == 0) && ((((uint *)(gen_frame + 0x4b8))[6] & 0xffff) == 0)) &&
         ((((uint *)(gen_frame + 0x4b8))[7] & 0xffff) == 0)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((uVar3 == 0) || (bVar2)) {
        iVar7 = REFG(int, 0x1493c18) * 0x194;
        REFG(int, 0x1493c18) = REFG(int, 0x1493c18) + 1;
        if (0x1f < REFG(int, 0x1493c18)) {
          REFG(int, 0x1493c18) = 0;
        }
        puVar4 = (undefined4 *)F_004cf260((undefined *)((int)this + 0x44),&(*(undefined4 *)(gen_frame + 0x1c)));
        *puVar4 = &REFG(undefined, 0x1493c28) + iVar7;
        puVar10 = ((uint *)(gen_frame + 0x4b8));
        puVar13 = (uint *)(&REFG(undefined, 0x1493c28) + iVar7);
        for (iVar9 = 0x65; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar13 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar13 = puVar13 + 1;
        }
        F_004cf2e0((undefined *)((int)this + 0x44),(*(undefined4 *)(gen_frame + 0x1c)));
      }
    }
    uVar3 = F_004cf460((undefined *)((int)this + 0x68));
    (*(bool *)(gen_frame + 0x1b)) = uVar3 == 0;
    if (((((*(byte *)(gen_frame + 0x65c)) & 0x1f) != 0) || (((*(uint *)(gen_frame + 0x664)) & 0x1f) != 0)) ||
       ((*(char *)(gen_frame + 0x23)) = '\0', ((*(byte *)(gen_frame + 0x668)) & 0x1f) != 0)) {
      (*(char *)(gen_frame + 0x23)) = '\x01';
    }
    if (((uVar3 == 0) || ((*(char *)(gen_frame + 0x23)) != '\0')) || (((int *)(gen_frame + 0x64c))[2] != 0)) {
      if ((int)uVar3 < 0x1f) {
        iVar7 = REFG(int, 0x1493c1c) * 0x2c;
        REFG(int, 0x1493c1c) = REFG(int, 0x1493c1c) + 1;
        if (0x1f < REFG(int, 0x1493c1c)) {
          REFG(int, 0x1493c1c) = 0;
        }
        puVar4 = (undefined4 *)F_004cf260((undefined *)((int)this + 0x68),&(*(undefined4 *)(gen_frame + 0x1c)));
        *puVar4 = &REFG(undefined, 0x1496ea8) + iVar7;
        piVar8 = ((int *)(gen_frame + 0x64c));
        piVar11 = (int *)(&REFG(undefined, 0x1496ea8) + iVar7);
        for (iVar9 = 0xb; iVar9 != 0; iVar9 = iVar9 + -1) {
          *piVar11 = *piVar8;
          piVar8 = piVar8 + 1;
          piVar11 = piVar11 + 1;
        }
        F_004cf2e0((undefined *)((int)this + 0x68),(*(undefined4 *)(gen_frame + 0x1c)));
      }
      else {
        uVar6 = (*(uint *)(gen_frame + 0x664)) & 0x1f;
        if (uVar3 == 0x1f) {
          if (uVar6 != 0) {
            iVar7 = REFG(int, 0x1493c1c) * 0x2c;
            REFG(int, 0x1493c1c) = REFG(int, 0x1493c1c) + 1;
            piVar8 = (int *)(&REFG(undefined, 0x1496ea8) + iVar7);
            if (0x1f < REFG(int, 0x1493c1c)) {
              REFG(int, 0x1493c1c) = 0;
            }
            puVar4 = (undefined4 *)F_004cf260((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x68),&(*(undefined4 *)(gen_frame + 0x1c)));
            *puVar4 = piVar8;
            piVar11 = ((int *)(gen_frame + 0x64c));
            piVar14 = piVar8;
            for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
              *piVar14 = *piVar11;
              piVar11 = piVar11 + 1;
              piVar14 = piVar14 + 1;
            }
            LOCK();
            *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0xb8) = piVar8;
            UNLOCK();
            F_004cf2e0((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x68),(*(undefined4 *)(gen_frame + 0x1c)));
            this = (*(undefined * PTR32 *)(gen_frame + 0x14));
          }
        }
        else if (uVar6 != 0) {
          piVar8 = (int *)((int)this + 0xb8);
          LOCK();
          iVar7 = *piVar8;
          *piVar8 = *piVar8;
          UNLOCK();
          if (iVar7 != 0) {
            uVar3 = *(uint *)(iVar7 + 0x18) & 0x1f;
            if (uVar3 != uVar6) {
              *(uint *)(iVar7 + 0x18) = *(uint *)(iVar7 + 0x18) | uVar3 | uVar6;
            }
          }
        }
      }
    }
    uVar3 = F_004cf460((undefined *)((int)this + 0x8c));
    if (((int)uVar3 < 0x20) && ((uVar3 == 0 || (((char *)(gen_frame + 0x24))[0] != '\0')))) {
      iVar7 = REFG(int, 0x1493c20) * 0x494;
      REFG(int, 0x1493c20) = REFG(int, 0x1493c20) + 1;
      if (0x1f < REFG(int, 0x1493c20)) {
        REFG(int, 0x1493c20) = 0;
      }
      puVar4 = (undefined4 *)F_004cf260((undefined *)((int)this + 0x8c),&(*(undefined4 *)(gen_frame + 0x1c)));
      *puVar4 = &REFG(undefined, 0x1497428) + iVar7;
      pcVar12 = ((char *)(gen_frame + 0x24));
      puVar4 = (undefined4 *)(&REFG(undefined, 0x1497428) + iVar7);
      for (iVar9 = 0x125; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar4 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        puVar4 = puVar4 + 1;
      }
      F_004cf2e0((undefined *)((int)this + 0x8c),(*(undefined4 *)(gen_frame + 0x1c)));
    }
    LOCK();
    *(int *)((int)this + 0xb0) = ((int *)(gen_frame + 0x64c))[0];
    UNLOCK();
    LOCK();
    *(int *)((int)this + 0xb4) = ((int *)(gen_frame + 0x64c))[1];
    UNLOCK();
    DVar5 = gen_imp_WaitForSingleObject(*(HANDLE *)((int)this + 0x34),0xffffffff);
  } while (*(int *)((int)this + 0x38) == 0);
  *(undefined4 *)((int)this + 0x3c) = 1;
  F_00c47745((*(uint *)(gen_frame + 0x678)) ^ (uint)(uint)(gen_frame + 0x67c));
  return DVar5;
}

/* ref: FUN_00976540 */
uint F_00976540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x976540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_004cf0c0(this,4,param_1,0);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10da944));
  return (uint)this;
}

/* ref: FUN_00976570 */
uint F_00976570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x976570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004cf260(this,param_1);
  return uVar1;
}

/* ref: FUN_00976580 */
unsigned int F_00976580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x976580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_004cf2e0(this,param_1);
  return 0;
}

/* ref: FUN_00976590 */
uint F_00976590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x976590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004cf3c0(this,param_1);
  return uVar1;
}

/* ref: FUN_009765a0 */
unsigned int F_009765a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9765a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_004cf410(this,param_1);
  return 0;
}

/* ref: FUN_009765c0 */
uint F_009765c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9765c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_004cf0c0(this,4,param_1,0);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10da94c));
  return (uint)this;
}

/* ref: FUN_009765f0 */
uint F_009765f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9765f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004cf260(this,param_1);
  return uVar1;
}

/* ref: FUN_00976600 */
unsigned int F_00976600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x976600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_004cf2e0(this,param_1);
  return 0;
}

/* ref: FUN_00976610 */
uint F_00976610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x976610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004cf3c0(this,param_1);
  return uVar1;
}

/* ref: FUN_00976620 */
unsigned int F_00976620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x976620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_004cf410(this,param_1);
  return 0;
}

/* ref: FUN_00976640 */
uint F_00976640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x976640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_004cf0c0(this,4,param_1,0);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10da954));
  return (uint)this;
}

/* ref: FUN_00976670 */
uint F_00976670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x976670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004cf260(this,param_1);
  return uVar1;
}

/* ref: FUN_00976680 */
unsigned int F_00976680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x976680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_004cf2e0(this,param_1);
  return 0;
}

/* ref: FUN_00976690 */
uint F_00976690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x976690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004cf3c0(this,param_1);
  return uVar1;
}

/* ref: FUN_009766a0 */
unsigned int F_009766a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9766a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_004cf410(this,param_1);
  return 0;
}

/* ref: ITQueue_VPadData_Input_System_Client_InputThread::vf0 */
uint F_009766c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9766c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10da944));
  F_004cf160(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: ITQueue_VMouseData_Input_System_Client_InputThread::vf0 */
uint F_009766f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9766f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10da94c));
  F_004cf160(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: ITQueue_VKeyboardData_Input_System_Client_InputThread::vf0 */
uint F_00976720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x976720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10da954));
  F_004cf160(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00976750 */
float10 F_00976750(unsigned int gen_a0)
{
  GEN_ENTER(0x976750u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  undefined4 uVar2;
  DWORD DVar3;
  int iVar4;
  
  gen_imp_QueryPerformanceCounter(&(*(LARGE_INTEGER *)(gen_frame + 0x4)));
  uVar2 = (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.HighPart;
  uVar1 = (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.LowPart;
  DVar3 = (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.LowPart - *(uint *)((int)this + 8);
  iVar4 = ((*(LARGE_INTEGER *)(gen_frame + 0x4)).s.HighPart - *(int *)((int)this + 0xc)) -
          (uint)((*(LARGE_INTEGER *)(gen_frame + 0x4)).s.LowPart < *(uint *)((int)this + 8));
  (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.LowPart = DVar3;
  (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.HighPart = iVar4;
  *(undefined4 *)((int)this + 8) = uVar1;
  *(undefined4 *)((int)this + 0xc) = uVar2;
  return (float10)(longlong)CONCAT44(iVar4,DVar3) / (float10)*(longlong *)this;
}

/* ref: FUN_009767a0 */
uint F_009767a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9767a0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return *(uint *)((*(int *)&gen_args[0]) + 0x10) & (*(uint *)&gen_args[1]);
}

/* ref: FUN_009767b0 */
uint F_009767b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9767b0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return *(uint *)((*(int *)&gen_args[0]) + 0x1c) & (*(uint *)&gen_args[1]);
}

/* ref: FUN_009767c0 */
uint F_009767c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9767c0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return *(uint *)((*(int *)&gen_args[0]) + 0x1c) & (*(uint *)&gen_args[1]);
}

/* ref: FUN_009767e0 */
uint F_009767e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9767e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_009767f0((undefined *)((int)this + -4),param_1);
  return uVar1;
}

/* ref: FUN_009767f0 */
uint F_009767f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9767f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00975b50(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00976820 */
unsigned int F_00976820(float gen_a0)
{
  GEN_ENTER(0x976820u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00976840 */
unsigned int F_00976840(unsigned int gen_a0)
{
  GEN_ENTER(0x976840u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00406b90(0x198,0,0);
  if (uVar1 != 0) {
    uVar1 = F_00aca8c0(uVar1);
    *(uint *)((int)this + 0x18) = uVar1;
    F_00ac9f90();
    return 0;
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  F_00ac9f90();
  return 0;
}

/* ref: FUN_00976880 */
uint F_00976880(unsigned int gen_a0)
{
  GEN_ENTER(0x976880u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00aca160(param_1);
  return uVar1;
}

/* ref: FUN_00976890 */
unsigned int F_00976890(unsigned int gen_a0)
{
  GEN_ENTER(0x976890u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)((int)this + 0x18) != (undefined *)0x0) {
    F_00aca930(*(undefined * PTR32 *)((int)this + 0x18));
    return 0;
  }
  return 0;
}

/* ref: FUN_009768c0 */
byte F_009768c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9768c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  byte bVar1;
  
  bVar1 = F_00acb3c0(*(undefined * PTR32 *)((int)this + 0x18),param_1,param_2,param_3,param_4,0);
  return bVar1;
}

/* ref: FUN_009768f0 */
byte F_009768f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9768f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  bVar1 = F_00acb6d0(*(undefined * PTR32 *)((int)this + 0x18),param_1,param_2);
  return bVar1;
}

/* ref: FUN_00976910 */
byte F_00976910(unsigned int gen_a0)
{
  GEN_ENTER(0x976910u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00aca130(*(undefined * PTR32 *)((int)this + 0x18));
  return bVar1;
}

/* ref: FUN_00976940 */
uint F_00976940(void)
{
  GEN_ENTER(0x976940u, 0u, 0u, 0u, 0u);
  return 0xfa000;
}

/* ref: FUN_00976950 */
unsigned int F_00976950(unsigned int gen_a0)
{
  GEN_ENTER(0x976950u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  
  if (*(int *)((int)this + 0x18) != 0) {
    F_00acd450();
    this_00 = *(undefined * PTR32 *)((int)this + 0x18);
    if (this_00 != (undefined *)0x0) {
      F_00ac9ed0(this_00);
      F_00406ad0(this_00);
      *(undefined4 *)((int)this + 0x18) = 0;
    }
  }
  return 0;
}

/* ref: FUN_00976990 */
unsigned int F_00976990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x976990u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if (*(int *)((int)this + 0x26b4) != 0) {
    uVar1 = F_00aca150(param_1);
    ((code *)*(gen_code32 *)((int)this + 0x26b0))
              (*(undefined4 *)((int)this + 0x26b4),(int)this + 0x26b8,uVar1,param_2);
  }
  return 0;
}

/* ref: FUN_009769d0 */
byte F_009769d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9769d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  uVar2 = F_0042cc20(((undefined1 *)(gen_frame + 0x0)),&REFG(undefined, 0x10daa0c),REFG(undefined4, 0x108cc50));
  uVar3 = F_0042cc20(((undefined1 *)(gen_frame + 0x54)),"CharacharConfig",REFG(undefined4, 0x108cc50));
  bVar1 = F_00acb3c0(*(undefined * PTR32 *)((int)this + 0x18),param_1,param_2,uVar3,uVar2,0);
  F_0042c880(((undefined1 *)(gen_frame + 0x54)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return bVar1;
}

/* ref: FUN_00976a60 */
byte F_00976a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x976a60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 in_edi = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  
  if (*(undefined * PTR32 *)(in_ecx + 0x18) == (undefined *)0x0) {
    return 1;
  }
  if (REFG(char, 0x14a06a8) == '\0') {
    F_0041d240(*(undefined * PTR32 *)(in_ecx + 0x10));
    (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0x9127c0));
    (*(gen_code32 *)(gen_frame + 0x10)) = ((code *)REFP(0x976880));
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    bVar1 = F_00acb340(*(undefined4 *)(in_ecx + 0x18),in_edi,*(undefined4 *)(in_ecx + 0x10),
                         &(*(gen_code32 *)(gen_frame + 0xc)),0);
    if (bVar1 == 0) {
      return 1;
    }
    REFG(char, 0x14a06a8) = '\x01';
  }
  else {
    bVar1 = F_00aca130(*(undefined * PTR32 *)(in_ecx + 0x18));
    if (bVar1 == 0) {
      F_00aca160(*(undefined * PTR32 *)(in_ecx + 0x18));
      bVar1 = F_00ac9fa0(*(undefined4 *)(in_ecx + 0x18));
      if (bVar1 != 0) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00976af0 */
byte F_00976af0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x976af0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_ecx = (int)gen_a0;
  undefined4 in_edi = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  
  bVar1 = F_00aca130(*(undefined * PTR32 *)(in_ecx + 0x18));
  if (bVar1 == 0) {
    (*(gen_code32 *)(gen_frame + 0x14)) = (code *)0x0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0x976ef0));
    (*(int *)(gen_frame + 0x10)) = in_ecx;
    (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x976990));
    bVar1 = F_00acb340(*(undefined4 *)(in_ecx + 0x18),in_edi,*(undefined4 *)(in_ecx + 0x10),
                         &(*(gen_code32 *)(gen_frame + 0xc)),0);
    if (bVar1 != 0) {
      *(undefined4 *)(in_ecx + 0x26b0) = *param_3;
      *(undefined4 *)(in_ecx + 0x26b4) = param_3[1];
      *(undefined4 *)(in_ecx + 0x26b8) = param_3[2];
      *(undefined4 *)(in_ecx + 0x26bc) = param_3[3];
      *(undefined4 *)(in_ecx + 0x26c0) = param_4;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00976b80 */
byte F_00976b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x976b80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  
  bVar1 = F_00aca130(*(undefined * PTR32 *)((int)this + 0x18));
  if (bVar1 == 0) {
    (*(gen_code32 *)(gen_frame + 0x14)) = (code *)0x0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0x976ef0));
    (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
    (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x976990));
    bVar1 = F_00acb0a0(*(undefined * PTR32 *)((int)this + 0x18),*(undefined4 *)((int)this + 0x10),&(*(gen_code32 *)(gen_frame + 0xc)),0)
    ;
    if (bVar1 != 0) {
      *(undefined4 *)((int)this + 0x26b0) = *param_1;
      *(undefined4 *)((int)this + 0x26b4) = param_1[1];
      *(undefined4 *)((int)this + 0x26b8) = param_1[2];
      *(undefined4 *)((int)this + 0x26bc) = param_1[3];
      *(undefined4 *)((int)this + 0x26c0) = param_2;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00976c10 */
byte F_00976c10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x976c10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  
  bVar1 = F_00aca130(*(undefined * PTR32 *)((int)this + 0x18));
  if (bVar1 == 0) {
    (*(gen_code32 *)(gen_frame + 0x14)) = (code *)0x0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0x976ef0));
    (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
    (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x976990));
    bVar1 = F_00acb660(*(undefined * PTR32 *)((int)this + 0x18),param_1,param_2,param_3,param_4,&(*(gen_code32 *)(gen_frame + 0xc)),0,0)
    ;
    if (bVar1 != 0) {
      *(undefined4 *)((int)this + 0x26b0) = *param_5;
      *(undefined4 *)((int)this + 0x26b4) = param_5[1];
      *(undefined4 *)((int)this + 0x26b8) = param_5[2];
      *(undefined4 *)((int)this + 0x26bc) = param_5[3];
      *(undefined4 *)((int)this + 0x26c0) = param_6;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00976cb0 */
byte F_00976cb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x976cb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  
  bVar1 = F_00aca130(*(undefined * PTR32 *)((int)this + 0x18));
  if (bVar1 == 0) {
    (*(gen_code32 *)(gen_frame + 0x14)) = (code *)0x0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0x976ef0));
    (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
    (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x976990));
    bVar1 = F_00acbaa0(*(undefined * PTR32 *)((int)this + 0x18),param_1,param_2,&(*(gen_code32 *)(gen_frame + 0xc)),0);
    if (bVar1 != 0) {
      *(undefined4 *)((int)this + 0x26b0) = *param_3;
      *(undefined4 *)((int)this + 0x26b4) = param_3[1];
      *(undefined4 *)((int)this + 0x26b8) = param_3[2];
      *(undefined4 *)((int)this + 0x26bc) = param_3[3];
      *(undefined4 *)((int)this + 0x26c0) = param_4;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00976d40 */
byte F_00976d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x976d40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  
  bVar1 = F_00aca130(*(undefined * PTR32 *)((int)this + 0x18));
  if (bVar1 != 0) {
    return 0;
  }
  *(undefined4 *)((int)this + 0x26b0) = *param_3;
  *(undefined4 *)((int)this + 0x26b4) = param_3[1];
  *(undefined4 *)((int)this + 0x26b8) = param_3[2];
  *(undefined4 *)((int)this + 0x26bc) = param_3[3];
  *(undefined4 *)((int)this + 0x26c0) = param_4;
  (*(gen_code32 *)(gen_frame + 0x14)) = (code *)0x0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0x976ef0));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
  (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x976990));
  bVar1 = F_00acab80(*(undefined * PTR32 *)((int)this + 0x18),param_1,param_2,&(*(gen_code32 *)(gen_frame + 0xc)),0);
  return bVar1;
}

/* ref: FUN_00976dd0 */
byte F_00976dd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x976dd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  uVar2 = F_0042cc20(((undefined1 *)(gen_frame + 0x0)),&REFG(undefined, 0x10daa0d),REFG(undefined4, 0x108cc50));
  uVar3 = F_0042cc20(((undefined1 *)(gen_frame + 0x54)),"CharacharConfig",REFG(undefined4, 0x108cc50));
  bVar1 = F_00976c10(this,param_1,param_2,uVar3,uVar2,param_3,param_4);
  F_0042c880(((undefined1 *)(gen_frame + 0x54)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return bVar1;
}

/* ref: FUN_00976e70 */
uint F_00976e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x976e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00ac9ed0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00976ea0 */
uint F_00976ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x976ea0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00976ec0 */
uint F_00976ec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x976ec0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)this)(*(undefined4 *)((int)this + 4),(int)this + 8,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00976ef0 */
uint F_00976ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x976ef0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = (*(code *)*param_2)(param_1,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00976f10 */
uint F_00976f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x976f10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 4) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0x976ef0));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: FUN_00976f30 */
uint F_00976f30(unsigned int gen_a0)
{
  GEN_ENTER(0x976f30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 * puVar2;
  
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  puVar2 = (undefined4 *)((int)this + 0x24);
  for (iVar1 = 0x5c; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00976f60 */
byte F_00976f60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x976f60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = param_1 - (int)this;
  while ((*(int *)this == *(int *)(iVar2 + (int)this) && (*(int *)this == 0))) {
    iVar1 = iVar1 + 1;
    this = (undefined *)((int)this + 4);
    if (3 < iVar1) {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00976fa0 */
byte F_00976fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x976fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if ((((*(int *)((int)this + 0x10) == *(int *)(param_1 + 0x10)) &&
       (*(int *)((int)this + 0x14) == *(int *)(param_1 + 0x14))) &&
      (*(int *)((int)this + 0x18) == *(int *)(param_1 + 0x18))) &&
     (*(int *)((int)this + 0x1c) == *(int *)(param_1 + 0x1c))) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00976fe0 */
uint F_00976fe0(unsigned int gen_a0)
{
  GEN_ENTER(0x976fe0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x1c) = 0;
  *(undefined4 *)(in_ecx + 0x18) = 0;
  *(undefined4 *)(in_ecx + 0x14) = 0;
  *(undefined4 *)(in_ecx + 0x10) = 0;
  return 0;
}

/* ref: FUN_00977000 */
unsigned int F_00977000(unsigned int gen_a0)
{
  GEN_ENTER(0x977000u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  in_ecx[1] = 0;
  return 0;
}

/* ref: FUN_00977010 */
uint F_00977010(unsigned int gen_a0)
{
  GEN_ENTER(0x977010u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 8) = 0;
  *(undefined4 *)(in_ecx + 0xc) = 0;
  return 0;
}

/* ref: FUN_00977020 */
uint F_00977020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x977020u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  *(uint *)((*(int *)&gen_args[0]) + 0x10) = *(uint *)((*(int *)&gen_args[0]) + 0x10) & (*(uint *)&gen_args[1]);
  *(uint *)((*(int *)&gen_args[0]) + 0x14) = *(uint *)((*(int *)&gen_args[0]) + 0x14) & (*(uint *)&gen_args[1]);
  *(uint *)((*(int *)&gen_args[0]) + 0x18) = *(uint *)((*(int *)&gen_args[0]) + 0x18) & (*(uint *)&gen_args[1]);
  *(uint *)((*(int *)&gen_args[0]) + 0x1c) = *(uint *)((*(int *)&gen_args[0]) + 0x1c) & (*(uint *)&gen_args[1]);
  return (*(uint *)&gen_args[1]);
}

/* ref: Apricot::Engine::Data::Interface::IModel::vf0 */
uint F_00977050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x977050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10dd1f4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::ITexture::vf0 */
uint F_00977090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x977090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10dd200));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_009770d0 */
uint F_009770d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9770d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 * 8 + 4;
}

/* ref: Apricot::Engine::Data::Interface::IFunctionCurve::vf0 */
uint F_009770f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9770f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::IValueFunctionCurve::vf0 */
uint F_00977130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x977130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::IPointBinder::vf0 */
uint F_00977170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x977170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10dd244));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::ILinearBinder::vf0 */
uint F_009771b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9771b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10dd250));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::ISplineBinder::vf0 */
uint F_009771f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9771f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10dd25c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::ICameraBinder::vf0 */
uint F_00977230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x977230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10dd268));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::IAxis3Parameter::vf0 */
uint F_00977270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x977270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10dd274));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::IRgbFunctionCurve::vf0 */
uint F_009772b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9772b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10dd28c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::IColorFunctionCurve::vf0 */
uint F_009772f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9772f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10dd298));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::IBindPointProperty::vf0 */
uint F_00977330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x977330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[14])REFP(0x10dd2b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::IBinder::vf0 */
uint F_00977370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x977370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x10dd2ec));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::IScheduler::vf0 */
uint F_009773b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9773b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10dd320));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::ITimeline::vf0 */
uint F_009773f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9773f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x10dd338));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::IValue::vf0 */
uint F_00977430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x977430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10dd358));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::IPointEmitter::vf0 */
uint F_00977470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x977470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10dd36c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::IConeEmitter::vf0 */
uint F_009774b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9774b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10dd374));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::IConeModelEmitter::vf0 */
uint F_009774f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9774f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x10dd39c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::ISphereModelEmitter::vf0 */
uint F_00977530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x977530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10dd3cc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::ICylinderModelEmitter::vf0 */
uint F_00977570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x977570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x10dd3f8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::IModelEmitter::vf0 */
uint F_009775b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9775b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10dd428));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::IEmitter::vf0 */
uint F_009775f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9775f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[38])REFP(0x10dd44c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00977640 */
unsigned int F_00977640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x977640u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  code * pcVar1;
  int * piVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  uVar4 = 0;
  puVar3 = param_1;
  if (param_2 != 0) {
    do {
      pcVar1 = (code *)*puVar3;
      piVar2 = puVar3 + 2;
      if (pcVar1 < (code *)0x4372494d) {
        if (pcVar1 == (code *)0x4372494c) {
          *(short *)((int)this + 0xbc) = (short)*piVar2;
        }
        else if (pcVar1 < (code *)0x52495a) {
          if (pcVar1 == (code *)0x524959) {
            *(int *)((int)this + 0x4c) = *piVar2;
          }
          else if (pcVar1 < (code *)0x43724a) {
            if (pcVar1 == (code *)0x437249) {
              *(char *)((int)this + 0xc9) = (char)*piVar2;
            }
            else if (&REFG(undefined, 0x43415a) < pcVar1) {
              if (pcVar1 == (code *)0x434758) {
                *(int *)((int)this + 0x18) = *piVar2;
              }
              else if (pcVar1 == (code *)0x434759) {
                *(int *)((int)this + 0x1c) = *piVar2;
              }
              else if (pcVar1 == (code *)0x43475a) {
                *(int *)((int)this + 0x20) = *piVar2;
              }
            }
            else if (pcVar1 == (code *)&REFG(undefined, 0x43415a)) {
              *(int *)((int)this + 0x14) = *piVar2;
            }
            else if (pcVar1 == (code *)0x5343) {
              *(int *)((int)this + 0x34) = *piVar2;
            }
            else if (pcVar1 == (code *)0x434158) {
              *(int *)((int)this + 0xc) = *piVar2;
            }
            else if (pcVar1 == (code *)&REFG(undefined, 0x434159)) {
              *(int *)((int)this + 0x10) = *piVar2;
            }
          }
          else if (pcVar1 < (code *)0x524259) {
            if (pcVar1 == (code *)0x524258) {
              *(int *)((int)this + 0x60) = *piVar2;
            }
            else if (pcVar1 == (code *)0x524158) {
              *(int *)((int)this + 0x54) = *piVar2;
            }
            else if (pcVar1 == (code *)0x524159) {
              *(int *)((int)this + 0x58) = *piVar2;
            }
            else if (pcVar1 == (code *)0x52415a) {
              *(int *)((int)this + 0x5c) = *piVar2;
            }
          }
          else if (pcVar1 == (code *)0x524259) {
            *(int *)((int)this + 100) = *piVar2;
          }
          else if (pcVar1 == (code *)0x52425a) {
            *(int *)((int)this + 0x68) = *piVar2;
          }
          else if (pcVar1 == (code *)0x524958) {
            *(int *)((int)this + 0x48) = *piVar2;
          }
        }
        else if (((code *)REFP(0x534559)) < pcVar1) {
          if (pcVar1 < (code *)0x43724159) {
            if (pcVar1 == (code *)0x43724158) {
              *(int *)this = *piVar2;
            }
            else if (pcVar1 == (code *)0x426c6b4e) {
              *(char *)((int)this + 0xbe) = (char)*piVar2;
            }
            else if (pcVar1 == (code *)0x43436e74) {
              *(short *)((int)this + 0xb8) = (short)*piVar2;
            }
            else if (pcVar1 == (code *)0x436f6c73) {
              *(int *)((int)this + 0xa8) = *piVar2;
              *(undefined4 *)((int)this + 0xac) = puVar3[3];
              *(undefined4 *)((int)this + 0xb0) = puVar3[4];
              *(undefined4 *)((int)this + 0xb4) = puVar3[5];
            }
          }
          else if (pcVar1 == (code *)0x43724159) {
            *(int *)((int)this + 4) = *piVar2;
          }
          else if (pcVar1 == (code *)0x4372415a) {
            *(int *)((int)this + 8) = *piVar2;
          }
          else if (pcVar1 == (code *)0x43724943) {
            *(short *)((int)this + 0xba) = (short)*piVar2;
          }
        }
        else if (pcVar1 == ((code *)REFP(0x534559))) {
          *(int *)((int)this + 0x30) = *piVar2;
        }
        else if (pcVar1 < (code *)0x52565b) {
          if (pcVar1 == (code *)0x52565a) {
            *(int *)((int)this + 0x74) = *piVar2;
          }
          else if (pcVar1 == (code *)0x52495a) {
            *(int *)((int)this + 0x50) = *piVar2;
          }
          else if (pcVar1 == (code *)0x525658) {
            *(int *)((int)this + 0x6c) = *piVar2;
          }
          else if (pcVar1 == (code *)0x525659) {
            *(int *)((int)this + 0x70) = *piVar2;
          }
        }
        else if (pcVar1 == (code *)0x534258) {
          *(int *)((int)this + 0x24) = *piVar2;
        }
        else if (pcVar1 == (code *)0x534259) {
          *(int *)((int)this + 0x28) = *piVar2;
        }
        else if (pcVar1 == (code *)&REFG(undefined, 0x534558)) {
          *(int *)((int)this + 0x2c) = *piVar2;
        }
      }
      else if (pcVar1 < (code *)0x53525832) {
        if (pcVar1 == (code *)0x53525831) {
          *(int *)((int)this + 0x3c) = *piVar2;
        }
        else if (pcVar1 < (code *)0x4c4c6179) {
          if (pcVar1 == (code *)0x4c4c6178) {
            *(int *)((int)this + 0x9c) = *piVar2;
          }
          else if (pcVar1 < (code *)0x46726d74) {
            if (pcVar1 == (code *)0x46726d73) {
              *(int *)((int)this + 0xa0) = *piVar2;
              *(undefined4 *)((int)this + 0xa4) = puVar3[3];
            }
            else if (pcVar1 == (code *)0x43724952) {
              *(char *)((int)this + 0xca) = (char)*piVar2;
            }
            else if (pcVar1 == (code *)0x466c7452) {
              *(int *)((int)this + 0x88) = *piVar2;
            }
            else if (pcVar1 == (code *)0x466c7453) {
              *(int *)((int)this + 0x8c) = *piVar2;
            }
          }
          else if (pcVar1 == (code *)0x494a4d4e) {
            *(char *)((int)this + 199) = (char)*piVar2;
          }
          else if (pcVar1 == (code *)0x49524430) {
            *(int *)((int)this + 0x80) = *piVar2;
          }
          else if (pcVar1 == (code *)0x49524431) {
            *(int *)((int)this + 0x84) = *piVar2;
          }
        }
        else if (pcVar1 < (code *)0x53424455) {
          if (pcVar1 == (code *)0x53424454) {
            *(char *)((int)this + 0xc1) = (char)*piVar2;
          }
          else if (pcVar1 == (code *)0x4c4c696e) {
            *(int *)((int)this + 0x98) = *piVar2;
          }
          else if (pcVar1 == (code *)0x50767458) {
            *(int *)((int)this + 0x90) = *piVar2;
          }
          else if (pcVar1 == (code *)0x50767459) {
            *(int *)((int)this + 0x94) = *piVar2;
          }
        }
        else if (pcVar1 == (code *)0x53494454) {
          *(char *)((int)this + 0xbf) = (char)*piVar2;
        }
        else if (pcVar1 == (code *)0x53495054) {
          *(char *)((int)this + 0xc0) = (char)*piVar2;
        }
        else if (pcVar1 == (code *)0x53525830) {
          *(int *)((int)this + 0x38) = *piVar2;
        }
      }
      else if (pcVar1 < (code *)0x56424d4f) {
        if (pcVar1 == (code *)0x56424d4e) {
          *(char *)((int)this + 200) = (char)*piVar2;
        }
        else if (pcVar1 < (code *)0x55764357) {
          if (pcVar1 == (code *)0x55764356) {
            *(char *)((int)this + 0xc3) = (char)*piVar2;
          }
          else if (pcVar1 == (code *)0x53525930) {
            *(int *)((int)this + 0x40) = *piVar2;
          }
          else if (pcVar1 == (code *)0x53525931) {
            *(int *)((int)this + 0x44) = *piVar2;
          }
          else if (pcVar1 == (code *)0x55764355) {
            *(char *)((int)this + 0xc2) = (char)*piVar2;
          }
        }
        else if (pcVar1 == (code *)0x55764976) {
          *(char *)((int)this + 0xc4) = (char)*piVar2;
        }
        else if (pcVar1 == (code *)0x55764c43) {
          *(char *)((int)this + 0xc6) = (char)*piVar2;
        }
        else if (pcVar1 == (code *)0x55764e52) {
          *(char *)((int)this + 0xc5) = (char)*piVar2;
        }
      }
      else if (pcVar1 < (code *)0x6243724f) {
        if (pcVar1 == (code *)0x6243724e) {
          *(bool *)((int)this + 0xcb) = *piVar2 != 0;
        }
        else if (pcVar1 == (code *)0x564d6178) {
          *(int *)((int)this + 0x7c) = *piVar2;
        }
        else if (pcVar1 == (code *)0x564d696e) {
          *(int *)((int)this + 0x78) = *piVar2;
        }
        else if (pcVar1 == (code *)0x62426e50) {
          *(bool *)((int)this + 0xce) = *piVar2 != 0;
        }
      }
      else if (pcVar1 == (code *)0x62525556) {
        *(bool *)((int)this + 0xcc) = *piVar2 != 0;
      }
      else if (pcVar1 == (code *)0x6253524c) {
        *(bool *)((int)this + 0xcd) = *piVar2 != 0;
      }
      else if (pcVar1 == (code *)0x62536e50) {
        *(bool *)((int)this + 0xcf) = *piVar2 != 0;
      }
      uVar4 = uVar4 + 8 + (puVar3[1] + 3 & 0xfffffffc);
      puVar3 = ((undefined4 *)GEN_TOP(((int)piVar2 + (puVar3[1] + 3 & 0xfffffffc))));
    } while (uVar4 < param_2);
  }
  return 0;
}

/* ref: Apricot::Engine::Data::Interface::ILineParticle::vf0 */
uint F_00977ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x977ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10dd4e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::IPowderParticle::vf0 */
uint F_00977be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x977be0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10dd500));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::IWindmillParticle::vf0 */
uint F_00977c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x977c20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10dd514));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::IQuadParticle::vf0 */
uint F_00977c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x977c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10dd520));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::IPolygonParticle::vf0 */
uint F_00977ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x977ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10dd528));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::ILaserParticle::vf0 */
uint F_00977ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x977ce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10dd534));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::IPolyLineParticle::vf0 */
uint F_00977d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x977d20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[25])REFP(0x10dd544));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::IModelParticle::vf0 */
uint F_00977d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x977d60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[14])REFP(0x10dd5ac));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::ILightModelParticle::vf0 */
uint F_00977da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x977da0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10dd5e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::IDecalParticle::vf0 */
uint F_00977de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x977de0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10dd5f4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::IDecalRingParticle::vf0 */
uint F_00977e20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x977e20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10dd600));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::IDiscParticle::vf0 */
uint F_00977e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x977e60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10dd614));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::IAxis2Parameter::vf0 */
uint F_00977ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x977ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10dd658));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::ITextureUvSet::vf0 */
uint F_00977ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x977ee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10dd668));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::ITextureProperty_Color1::vf0 */
uint F_00977f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x977f20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x10dd680));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::ITextureProperty_Color2::vf0 */
uint F_00977f60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x977f60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x10dd6b8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::ITextureProperty_Normal::vf0 */
uint F_00977fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x977fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10dd6e8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::ITextureProperty_Reflection::vf0 */
uint F_00977fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x977fe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x10dd70c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::ITextureProperty_Distortion::vf0 */
uint F_00978020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x978020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x10dd72c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::ITextureProperty_Palette::vf0 */
uint F_00978060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x978060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10dd760));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::IParticle::vf0 */
uint F_009780a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9780a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[63])REFP(0x10dd77c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::IPointLightEffector::vf0 */
uint F_009780e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9780e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x10dd87c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::IDirectionalLightEffector::vf0 */
uint F_00978120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x978120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10dd8b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::IRadialBlurEffector::vf0 */
uint F_00978160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x978160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10dd8c8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::IBlackHoleEffector::vf0 */
uint F_009781a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9781a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10dd8ec));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::ICameraQuakeEffector::vf0 */
uint F_009781e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9781e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10dd910));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::IEffector::vf0 */
uint F_00978220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x978220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x10dd92c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Interface::IDocument::vf1 */
byte F_00978260(void)
{
  GEN_ENTER(0x978260u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::Engine::Data::Interface::IDocument::vf2 */
unsigned int F_00978270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x978270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Apricot::Engine::Data::Interface::IDocument::vf3 */
uint F_00978280(void)
{
  GEN_ENTER(0x978280u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::Engine::Data::Interface::IDocument::vf4 */
uint F_00978290(void)
{
  GEN_ENTER(0x978290u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::Engine::Data::Interface::IDocument::vf15 */
uint F_009782a0(void)
{
  GEN_ENTER(0x9782a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::Engine::Data::Interface::IDocument::vf16 */
uint F_009782b0(void)
{
  GEN_ENTER(0x9782b0u, 0u, 0u, 0u, 0u);
  return 0xffffffff;
}

/* ref: Apricot::Engine::Data::Interface::IDocument::vf0 */
uint F_009782c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9782c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[63])REFP(0x10dd964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_009784d0 */
uint F_009784d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9784d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (param_1 + -1) * 0x10 + 0x14;
}

/* ref: FUN_00978520 */
unsigned int F_00978520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6, float gen_a7, float gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12, unsigned int gen_a13)
{
  GEN_ENTER(0x978520u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  float param_9 = (float)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  undefined4 param_11 = (undefined4)gen_a10;
  undefined4 param_12 = (undefined4)gen_a11;
  undefined4 param_13 = (undefined4)gen_a12;
  undefined4 param_14 = (undefined4)gen_a13;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  param_1[8] = param_10;
  param_1[5] = (undefined4)gen_fl2bits(param_7);
  param_1[9] = param_11;
  *(undefined1 *)(param_1 + 10) = (undefined1)param_13;
  param_1[6] = (undefined4)gen_fl2bits(param_8);
  param_1[7] = (undefined4)gen_fl2bits(param_9);
  *(undefined1 *)((int)param_1 + 0x29) = (undefined1)param_14;
  param_1[0xb] = param_12;
  return 0;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf4 */
uint F_009785c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9785c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: FUN_00978640 */
uint F_00978640(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x978640u, gen_a0, 0u, gen_a2, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  longlong lVar1;
  double dVar2;
  
  dVar2 = (double)param_2 * *(double *)&REFG(undefined, 0x10912a8);
  REFG(int, 0x14a0a10) = REFG(int, 0x14a0a10) + 1;
  *(ushort *)param_1 = (ushort)REFG(int, 0x14a0a10);
  lVar1 = (longlong)dVar2 + 0x7fffffffffff;
  param_1[1] = (uint)((ulonglong)lVar1 >> 0x10);
  *param_1 = (uint)(lVar1 * 0x10000) ^ (uint)(ushort)*param_1;
  param_1[2] = param_3;
  return (uint)param_1;
}

/* ref: FUN_00978690 */
uint F_00978690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x978690u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  if ((param_1[1] <= param_2[1]) && ((param_1[1] < param_2[1] || (*param_1 < *param_2)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_009786c0 */
uint F_009786c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9786c0u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  if ((float10)*param_1 < (float10)*param_2) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00978720 */
uint F_00978720(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x978720u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x1ec);
  *(float *)(uVar1 + 0x94) = param_2;
  return uVar1;
}

/* ref: FUN_00978750 */
unsigned int F_00978750(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x978750u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x318) = param_2;
  return 0;
}

/* ref: FUN_00978780 */
ushort F_00978780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x978780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ushort uVar1;
  
  uVar1 = *(ushort *)((int)this + 0x3ac) & 0xfbff;
  *(ushort *)((int)this + 0x3ac) = (ushort)((byte)param_1 & 1) << 10 | uVar1;
  return uVar1;
}

/* ref: FUN_009787c0 */
ushort F_009787c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9787c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ushort uVar1;
  
  uVar1 = *(ushort *)((int)this + 0x3ac) & 0xefff;
  *(ushort *)((int)this + 0x3ac) = (ushort)((byte)param_1 & 1) << 0xc | uVar1;
  return uVar1;
}

/* ref: FUN_009787f0 */
ushort F_009787f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9787f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ushort uVar1;
  
  uVar1 = *(ushort *)((int)this + 0x3ac) & 0xdfff;
  *(ushort *)((int)this + 0x3ac) = (ushort)((byte)param_1 & 1) << 0xd | uVar1;
  return uVar1;
}

/* ref: FUN_00978830 */
ushort F_00978830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x978830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ushort uVar1;
  
  uVar1 = *(ushort *)((int)this + 0x3ac) & 0xbfff;
  *(ushort *)((int)this + 0x3ac) = (ushort)((byte)param_1 & 1) << 0xe | uVar1;
  return uVar1;
}

/* ref: FUN_00978870 */
uint F_00978870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x978870u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  if ((float10)*param_1 < (float10)*param_2) {
    return 1;
  }
  return 0;
}

/* ref: FUN_009788a0 */
float10 F_009788a0(float gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x9788a0u, 0u, 0u, 0u, 0u);
  float in_xmm1 = (float)gen_a0;
  float in_xmm2 = (float)gen_a1;
  float in_xmm3 = (float)gen_a2;
  float in_xmm7 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float10 fVar1;
  
  fVar1 = F_00c4cde0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)param_5);
  return (float10)(float)fVar1;
}

/* ref: FUN_009788c0 */
float10 F_009788c0(float gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x9788c0u, 0u, 0u, 0u, 0u);
  float in_xmm1 = (float)gen_a0;
  float in_xmm2 = (float)gen_a1;
  float in_xmm3 = (float)gen_a2;
  float in_xmm7 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float10 fVar1;
  
  fVar1 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)param_5);
  return (float10)(float)fVar1;
}

/* ref: FUN_00978910 */
unsigned int F_00978910(float gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x978910u, 0u, gen_a1, gen_a2, gen_a3);
  float param_1 = (float)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar2 = (float10)param_1;
  fVar3 = (float10)(float)(fVar2 * fVar2);
  fVar4 = (float10)(float)(fVar3 * fVar2);
  fVar5 = (float10)*(double *)&REFG(undefined, 0x1092098);
  fVar6 = fVar4 * fVar5;
  fVar1 = (float10)*(double *)&REFG(undefined, 0x10944e0);
  *param_2 = ((float)GEN_TOF(((fVar6 - fVar3 * fVar1) + (float10)REFG(double, 0x1088130))));
  *param_3 = (float)(fVar3 * fVar1 - fVar6);
  *param_4 = ((float)GEN_TOF(((fVar4 - fVar3 * fVar5) + fVar2)));
  *param_5 = (float)(fVar4 - fVar3);
  return 0;
}

/* ref: FUN_00978970 */
uint F_00978970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x978970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  *(int * PTR32 *)this = param_1;
  ((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1);
  return (uint)this;
}

/* ref: FUN_009789b0 */
unsigned int F_009789b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9789b0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  *(float *)(in_ecx + 0x140) = (float)param_2;
  *(float *)(in_ecx + 0x144) = (float)param_3;
  return 0;
}

/* ref: FUN_009789e0 */
uint F_009789e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9789e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short * psVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  int * piVar5;
  int iVar6;
  uint local_c;
  int local_8;
  
  local_c = (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0x158) + 0x3b002)));
  if (local_c != 0) {
    local_8 = 0x3a002;
    do {
      iVar4 = *(int *)((int)this + 0x158);
      uVar3 = *(ushort *)(local_8 + iVar4);
      iVar6 = (uint)uVar3 * 0x68;
      iVar2 = iVar6 + 0x1000 + iVar4;
      if (*(int *)(iVar6 + 0x103c + iVar4) != 3) {
        iVar4 = *(int *)(iVar2 + 0x30);
        piVar5 = *(int * PTR32 *)(iVar4 + 0x270);
        if (piVar5 != (int *)0x0) {
          ((code *)*(gen_code32 *)(*piVar5 + 0x20))(piVar5,iVar4);
        }
        *(undefined4 *)(iVar2 + 0x3c) = 2;
      }
      local_8 = local_8 + 2;
      *((ushort *)GEN_TOP((*(int *)((int)this + 0x158) + 0x39000 +
       (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0x158) + 0x3a000))) * 2))) = uVar3;
      psVar1 = ((short *)GEN_TOP((*(int *)((int)this + 0x158) + 0x3a000)));
      *psVar1 = *psVar1 + 1;
      local_c = local_c - 1;
    } while (local_c != 0);
  }
  *((undefined2 *)GEN_TOP((*(int *)((int)this + 0x158) + 0x3b002))) = 0;
  return 0;
}

/* ref: FUN_00978ae0 */
unsigned int F_00978ae0(unsigned int gen_a0)
{
  GEN_ENTER(0x978ae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint local_8;
  
  local_8 = (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0x158) + 0x3a000)));
  if (local_8 != 0) {
    iVar4 = 0x39000;
    do {
      iVar2 = *(int *)((int)this + 0x158);
      iVar3 = (uint)*(ushort *)(iVar4 + iVar2) * 0x68;
      iVar1 = iVar3 + 0x1000 + iVar2;
      if (*(int *)(iVar3 + 0x103c + iVar2) != 4) {
        *((ushort *)GEN_TOP((*(int *)(iVar1 + 0x30) + 0x3ac))) =
             (ushort)(*(byte *)(iVar1 + 0x62) & 1) << 0xd |
             *((ushort *)GEN_TOP((*(int *)(iVar1 + 0x30) + 0x3ac))) & 0xdfff;
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar1 + 0x30) + 0x2c))))(*(int * PTR32 *)(iVar1 + 0x30));
      }
      iVar4 = iVar4 + 2;
      local_8 = local_8 - 1;
    } while (local_8 != 0);
  }
  return 0;
}

/* ref: FUN_00978b90 */
uint F_00978b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x978b90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (uint)(*((short *)GEN_TOP((*(int *)((int)this + 0x158) + 0x46004 + param_1 * 2))) != 0);
}

/* ref: FUN_00978bc0 */
byte F_00978bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x978bc0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x1574) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00978c20 */
float10 F_00978c20(float gen_a0, float gen_a1)
{
  GEN_ENTER(0x978c20u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = REFG(undefined4, 0x13301e4);
  uVar2 = REFG(undefined4, 0x13301e8) << 0xb ^ REFG(undefined4, 0x13301e8);
  REFG(undefined4, 0x13301e4) = REFG(undefined4, 0x13301e0);
  REFG(undefined4, 0x13301e0) = REFG(undefined4, 0x13301dc);
  uVar2 = REFG(undefined4, 0x13301dc) >> 0x13 ^ uVar2 ^ uVar2 >> 8 ^ REFG(undefined4, 0x13301dc);
  REFG(undefined4, 0x13301dc) = uVar2;
  REFG(undefined4, 0x13301e8) = uVar1;
  return (float10)((float)GEN_TOF((((float10)(float)((float10)param_2 - (float10)param_1) *
                          (float10)(uVar2 & 0xffff)) / (float10)REFG(double, 0x109cab0) + (float10)param_1)));
}

/* ref: FUN_00978ca0 */
uint F_00978ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x978ca0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = REFG(undefined4, 0x13301e4);
  uVar2 = REFG(undefined4, 0x13301e8) << 0xb ^ REFG(undefined4, 0x13301e8);
  REFG(undefined4, 0x13301e4) = REFG(undefined4, 0x13301e0);
  REFG(undefined4, 0x13301e0) = REFG(undefined4, 0x13301dc);
  uVar2 = REFG(undefined4, 0x13301dc) >> 0x13 ^ uVar2 ^ uVar2 >> 8 ^ REFG(undefined4, 0x13301dc);
  REFG(undefined4, 0x13301dc) = uVar2;
  iVar3 = ((param_2 - param_1) + 1) * (uVar2 & 0xffff);
  REFG(undefined4, 0x13301e8) = uVar1;
  return ((int)(iVar3 + (iVar3 >> 0x1f & 0xffffU)) >> 0x10) + param_1;
}

/* ref: FUN_00978d10 */
unsigned int F_00978d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x978d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(int *)((int)this + 0x1568) < 0x80) {
    *((undefined4 *)GEN_TOP(((int)this + *(int *)((int)this + 0x1568) * 8 + 0x116c))) = param_1;
    *(int *)((int)this + 0x1568) = *(int *)((int)this + 0x1568) + 1;
  }
  return 0;
}

/* ref: FUN_00978e10 */
uint F_00978e10(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x978e10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x14c) = param_2;
  return in_ecx + 0x140;
}

/* ref: FUN_00978e30 */
uint F_00978e30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x978e30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x158);
  *(undefined4 *)(uVar1 + param_2 * 4) = 0;
  return uVar1;
}

/* ref: FUN_00978e50 */
uint F_00978e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x978e50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  *((undefined4 *)GEN_TOP((*(int *)(in_ecx + 0x158) + 0x1030 + param_2 * 0x68))) = 0;
  return param_2 * 0x68;
}

/* ref: FUN_00978e90 */
uint F_00978e90(unsigned int gen_a0)
{
  GEN_ENTER(0x978e90u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (param_1 != (int *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00978eb0 */
unsigned int F_00978eb0(unsigned int gen_a0)
{
  GEN_ENTER(0x978eb0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  int iVar3;
  
  if (param_1 != (int *)0x0) {
    iVar3 = 0;
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 100))(param_1);
    if (0 < (int)uVar1) {
      do {
        piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0x30))(param_1,iVar3)));
        ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
        iVar3 = iVar3 + 1;
        uVar1 = ((code *)*(gen_code32 *)(*param_1 + 100))(param_1);
      } while (iVar3 < (int)uVar1);
    }
  }
  return 0;
}

/* ref: FUN_00978f00 */
unsigned int F_00978f00(unsigned int gen_a0)
{
  GEN_ENTER(0x978f00u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  
  if (param_1 != (int *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0xf8))(param_1);
    uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0xf4))(param_1);
    iVar5 = 0;
    uVar3 = ((code *)*(gen_code32 *)(*param_1 + 0x68))(param_1);
    if (0 < (int)uVar3) {
      do {
        piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0x34))(param_1,iVar5)));
        ((code *)*(gen_code32 *)(*piVar4 + 4))(piVar4,(uint)(uVar2 != 0) | -(uint)(uVar1 != 0) & 2);
        iVar5 = iVar5 + 1;
        uVar3 = ((code *)*(gen_code32 *)(*param_1 + 0x68))(param_1);
      } while (iVar5 < (int)uVar3);
    }
  }
  return 0;
}

/* ref: FUN_00978f70 */
uint F_00978f70(unsigned int gen_a0)
{
  GEN_ENTER(0x978f70u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  uint uVar1;
  
  if (param_1 != (int *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0xcc))(param_1);
    return uVar1;
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_00979030 */
uint F_00979030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x979030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if (*((int *)GEN_TOP((*(int *)((int)this + 0x158) + param_1 * 4))) == 0) {
    return 0;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x158) + param_1 * 4)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1);
  return uVar2;
}

/* ref: FUN_00979060 */
uint F_00979060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x979060u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined1 * param_4 = (undefined1 *)(uintptr_t)gen_a3;
  undefined1 * param_5 = (undefined1 *)(uintptr_t)gen_a4;
  *param_3 = 0;
  *param_2 = 0;
  *param_5 = 0;
  *param_4 = 0;
  return (uint)param_4;
}

/* ref: FUN_009790a0 */
uint F_009790a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9790a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  
  if (((0x7ff < param_2) || (param_1 == 0)) ||
     (uVar1 = *(int *)((int)this + 0x158) + 0x1000 + param_2 * 0x68,
     *((int *)GEN_TOP((*(int *)((int)this + 0x158) + 0x1040 + param_2 * 0x68))) != param_1)) {
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_009790e0 */
uint F_009790e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9790e0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  if ((REFG(undefined4, 0x14a0a14) != (code *)0x0) && (param_1 != 0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a14))(param_1,param_2,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00979110 */
unsigned int F_00979110(unsigned int gen_a0)
{
  GEN_ENTER(0x979110u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((REFG(undefined4, 0x14a0a18) != (code *)0x0) && (param_1 != 0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(param_1);
  }
  return 0;
}

/* ref: FUN_00979130 */
float10 F_00979130(float gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5, float gen_a6)
{
  GEN_ENTER(0x979130u, 0u, 0u, 0u, 0u);
  float in_xmm0 = (float)gen_a0;
  float in_xmm1 = (float)gen_a1;
  float in_xmm2 = (float)gen_a2;
  float in_xmm3 = (float)gen_a3;
  float in_xmm5 = (float)gen_a4;
  float in_xmm7 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  float10 fVar2;
  
  fVar2 = ((float10)GEN_TOD(pow((float10)param_7,(float10)*(double *)&REFG(undefined, 0x10a1918))));
  return (float10)(float)fVar2;
}

/* ref: FUN_00979150 */
unsigned int F_00979150(float gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12)
{
  GEN_ENTER(0x979150u, 0u, 0u, 0u, 0u);
  float in_xmm1 = (float)gen_a0;
  float in_xmm2 = (float)gen_a1;
  float in_xmm3 = (float)gen_a2;
  float in_xmm7 = (float)gen_a3;
  uint param_5 = (uint)gen_a4;
  float * param_6 = (float *)(uintptr_t)gen_a5;
  float * param_7 = (float *)(uintptr_t)gen_a6;
  float * param_8 = (float *)(uintptr_t)gen_a7;
  float * param_9 = (float *)(uintptr_t)gen_a8;
  float * param_10 = (float *)(uintptr_t)gen_a9;
  float * param_11 = (float *)(uintptr_t)gen_a10;
  float * param_12 = (float *)(uintptr_t)gen_a11;
  float * param_13 = (float *)(uintptr_t)gen_a12;
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  if (*(int *)param_5 != 0) {
    fVar1 = *(float *)(param_5 + 0x14);
    fVar2 = F_00c4cde0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)fVar1);
    fVar5 = (float10)REFG(double, 0x1088108);
    fVar3 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)fVar1);
    fVar4 = (float10)REFG(double, 0x1088108);
    fVar3 = (float10)(float)((float10)(float)fVar3 * fVar4);
    fVar5 = (float10)(float)((float10)(float)fVar2 * fVar5);
    fVar2 = (float10)((float)GEN_TOF(-fVar5));
    *param_6 = (float)((float10)((float)GEN_TOF(-fVar3)) - fVar2);
    *param_7 = (float)(fVar2 - fVar3);
    *param_8 = (float)(fVar3 - fVar2);
    *param_9 = (float)(fVar5 - fVar3);
    *param_10 = (float)((float10)((float)GEN_TOF(-fVar3)) - fVar5);
    *param_11 = (float)(fVar3 - fVar5);
    *param_12 = (float)(fVar3 - fVar5);
    *param_13 = (float)(fVar5 + fVar3);
    *param_6 = ((float)GEN_TOF(((float10)*(float *)(param_5 + 4) * (float10)*param_6)));
    *param_8 = ((float)GEN_TOF(((float10)*param_8 * (float10)*(float *)(param_5 + 4))));
    *param_10 = ((float)GEN_TOF(((float10)*param_10 * (float10)*(float *)(param_5 + 4))));
    *param_12 = ((float)GEN_TOF(((float10)*param_12 * (float10)*(float *)(param_5 + 4))));
    *param_7 = ((float)GEN_TOF(((float10)*param_7 * (float10)*(float *)(param_5 + 8))));
    *param_9 = ((float)GEN_TOF(((float10)*param_9 * (float10)*(float *)(param_5 + 8))));
    *param_11 = ((float)GEN_TOF(((float10)*param_11 * (float10)*(float *)(param_5 + 8))));
    *param_13 = ((float)GEN_TOF(((float10)*param_13 * (float10)*(float *)(param_5 + 8))));
    *param_6 = ((float)GEN_TOF((((float10)*(float *)(param_5 + 0xc) + fVar4) + (float10)*param_6)));
    *param_7 = ((float)GEN_TOF((((float10)*(float *)(param_5 + 0x10) + fVar4) + (float10)*param_7)));
    *param_8 = ((float)GEN_TOF((((float10)*(float *)(param_5 + 0xc) + fVar4) + (float10)*param_8)));
    *param_9 = ((float)GEN_TOF((((float10)*(float *)(param_5 + 0x10) + fVar4) + (float10)*param_9)));
    *param_10 = ((float)GEN_TOF((((float10)*(float *)(param_5 + 0xc) + fVar4) + (float10)*param_10)));
    *param_11 = ((float)GEN_TOF((((float10)*(float *)(param_5 + 0x10) + fVar4) + (float10)*param_11)));
    *param_12 = ((float)GEN_TOF((((float10)*(float *)(param_5 + 0xc) + fVar4) + (float10)*param_12)));
    *param_13 = ((float)GEN_TOF(((fVar4 + (float10)*(float *)(param_5 + 0x10)) + (float10)*param_13)));
  }
  return 0;
}

/* ref: FUN_00979350 */
unsigned int F_00979350(unsigned int gen_a0)
{
  GEN_ENTER(0x979350u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  if ((REFG(undefined4, 0x14a0a14) == (code *)0x0) || (param_1 == 0)) {
    REFG(undefined4, 0x14a09f4) = 0;
  }
  else {
    REFG(undefined4, 0x14a09f4) = ((code *)REFG(gen_code32, 0x14a0a14))(param_1,0x80,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0);
  }
  REFG(undefined4, 0x14a09ec) = param_1 >> 10;
  *(undefined4 *)&REFG(undefined, 0x14a09e4) = 0;
  REFG(undefined4, 0x14a09e8) = 0;
  REFG(undefined4, 0x14a09f0) = REFG(undefined4, 0x14a09ec);
  if (REFG(undefined4, 0x14a09ec) != 0) {
    iVar3 = 0;
    uVar1 = 1;
    do {
      uVar2 = uVar1;
      if (REFG(undefined4, 0x14a09ec) <= uVar1) {
        uVar2 = 0xffffffff;
      }
      *(uint *)(iVar3 + REFG(undefined4, 0x14a09f4)) = uVar2;
      iVar3 = iVar3 + 0x400;
      bVar4 = uVar1 < REFG(undefined4, 0x14a09ec);
      uVar1 = uVar1 + 1;
    } while (bVar4);
  }
  return 0;
}

/* ref: FUN_00979430 */
unsigned int F_00979430(unsigned int gen_a0)
{
  GEN_ENTER(0x979430u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = (uint)(param_1 - REFG(int, 0x14a09f4)) >> 10;
  *(uint *)(uVar1 * 0x400 + REFG(int, 0x14a09f4)) = REFG(undefined4, 0x14a09e8);
  REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
  REFG(undefined4, 0x14a09e8) = uVar1;
  return 0;
}

/* ref: FUN_009794d0 */
unsigned int F_009794d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9794d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  int * piVar3;
  
  piVar3 = *(int * PTR32 *)((int)this + 4);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
    *(undefined4 *)((int)this + 4) = 0;
  }
  piVar3 = *(int * PTR32 *)((int)this + 8);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
    *(undefined4 *)((int)this + 8) = 0;
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x68);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
    *(undefined4 *)((int)this + 0x68) = 0;
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x6c);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
    *(undefined4 *)((int)this + 0x6c) = 0;
  }
  piVar3 = (int *)((int)this + 0xc);
  iVar2 = 2;
  do {
    piVar1 = (int *)*piVar3;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
      *piVar3 = 0;
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  piVar3 = *(int * PTR32 *)this;
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
    *(undefined4 *)this = 0;
  }
  return 0;
}

/* ref: FUN_00979560 */
uint F_00979560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x979560u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  int iVar2;
  code * pcVar3;
  uint * puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  puVar4 = (uint *)F_004069f0(0x18);
  if (puVar4 == (uint *)0x0) {
    return 0;
  }
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  *(undefined2 *)(puVar4 + 4) = *(undefined2 *)(param_1 + 4);
  *(undefined2 *)(puVar4 + 5) = *(undefined2 *)(param_1 + 8);
  pcVar3 = REFG(undefined4, 0x14a0a14);
  *(undefined2 *)((int)puVar4 + 0x16) = *(undefined2 *)(param_1 + 0xc);
  iVar2 = *(int *)(param_1 + 4) * 2;
  iVar6 = param_1 + 0x10 + iVar2;
  uVar5 = iVar2 + 0xfU & 0xfffffff0;
  if ((pcVar3 == (code *)0x0) || (uVar5 == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = (*pcVar3)(uVar5,0x10,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0);
  }
  *puVar4 = uVar5;
  if (uVar5 != 0) {
    F_00c46aa0(uVar5,param_1 + 0x10,*(int *)(param_1 + 4) * 2);
    iVar2 = *(int *)(param_1 + 8) * 0x1c;
    iVar7 = iVar6 + iVar2;
    uVar5 = iVar2 + 0xfU & 0xfffffff0;
    if ((REFG(undefined4, 0x14a0a14) == (code *)0x0) || (uVar5 == 0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = ((code *)REFG(gen_code32, 0x14a0a14))(uVar5,0x10,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0);
    }
    puVar4[1] = uVar5;
    if (uVar5 != 0) {
      F_00c46aa0(uVar5,iVar6,*(int *)(param_1 + 8) * 0x1c);
      iVar2 = *(int *)(param_1 + 8) * 0x24;
      uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x10))))(*(int * PTR32 *)this,iVar2,0);
      puVar4[2] = uVar5;
      if ((uVar5 != 0) &&
         (uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x70))))(*(int * PTR32 *)this,uVar5,0,iVar2,0), uVar5 != 0))
      {
        F_00c46aa0(uVar5,iVar7,iVar2);
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x78))))(*(int * PTR32 *)this,puVar4[2]);
        iVar6 = *(int *)(param_1 + 0xc) * 2;
        uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x14))))(*(int * PTR32 *)this,iVar6,0);
        puVar4[3] = uVar5;
        if ((uVar5 != 0) &&
           (uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x6c))))(*(int * PTR32 *)this,uVar5,0,iVar6,0), uVar5 != 0)
           ) {
          F_00c46aa0(uVar5,iVar7 + iVar2,iVar6);
          ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x74))))(*(int * PTR32 *)this,puVar4[3]);
          return (uint)puVar4;
        }
      }
    }
    if ((*puVar4 != 0) && (REFG(undefined4, 0x14a0a18) != (code *)0x0)) {
      ((code *)REFG(gen_code32, 0x14a0a18))(*puVar4);
    }
  }
  if ((puVar4[1] != 0) && (REFG(undefined4, 0x14a0a18) != (code *)0x0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(puVar4[1]);
  }
  piVar1 = (int *)puVar4[2];
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  }
  piVar1 = (int *)puVar4[3];
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  }
  F_00406ad0(puVar4);
  return 0;
}

/* ref: FUN_00979780 */
uint F_00979780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x979780u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x18))))
                    (*(int * PTR32 *)this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_009797a0 */
uint F_009797a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9797a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x30))))
                    (*(int * PTR32 *)this,param_1,*(undefined4 *)((int)this + param_1 * 4 + 0xc));
  return uVar1;
}

/* ref: FUN_009797d0 */
uint F_009797d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9797d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x50))))(*(int * PTR32 *)this,*(undefined4 *)((int)this + 0x24));
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x58))))(*(int * PTR32 *)this,*(undefined4 *)((int)this + 0x28));
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x60))))(*(int * PTR32 *)this,*(undefined4 *)((int)this + 0x2c));
  return uVar1;
}

/* ref: FUN_00979800 */
uint F_00979800(unsigned int gen_a0)
{
  GEN_ENTER(0x979800u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x20))))
            (*(int * PTR32 *)this,(uint)((byte)(*(uint *)((int)this + 0x30) >> 8) & 1),
             (uint)((byte)(*(uint *)((int)this + 0x30) >> 9) & 1),0);
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x24))))
            (*(int * PTR32 *)this,(uint)((byte)(*(uint *)((int)this + 0x30) >> 10) & 1));
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x2c))))(*(int * PTR32 *)this,*(uint *)((int)this + 0x30) & 0xf);
  return uVar1;
}

/* ref: FUN_00979860 */
unsigned int F_00979860(unsigned int gen_a0)
{
  GEN_ENTER(0x979860u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  byte * pbVar3;
  uint local_8;
  
  uVar1 = *(uint *)((int)this + 100);
  iVar2 = 0;
  local_8 = 1;
  pbVar3 = (byte *)((int)this + 0x3a);
  do {
    if ((local_8 & uVar1) != 0) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x40))))(*(int * PTR32 *)this,iVar2,(uint)pbVar3[1]);
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x44))))(*(int * PTR32 *)this,iVar2,(uint)pbVar3[-1],(uint)*pbVar3);
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x34))))(*(int * PTR32 *)this,iVar2,*(undefined4 *)(pbVar3 + -6));
    }
    iVar2 = iVar2 + 1;
    pbVar3 = pbVar3 + 8;
    local_8 = local_8 << 1 | (uint)((int)local_8 < 0);
  } while (iVar2 < 6);
  return 0;
}

/* ref: FUN_009798d0 */
unsigned int F_009798d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9798d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)((int)this + 0x74) != 0) {
    *(undefined4 *)((int)this + 0x74) = 0;
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x78))))(*(int * PTR32 *)this,*(undefined4 *)((int)this + 0x68));
  }
  if (*(int *)((int)this + 0x84) != 0) {
    *(undefined4 *)((int)this + 0x84) = 0;
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x74))))(*(int * PTR32 *)this,*(undefined4 *)((int)this + 0x6c));
  }
  return 0;
}

/* ref: FUN_00979940 */
uint F_00979940(unsigned int gen_a0)
{
  GEN_ENTER(0x979940u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  if ((REFG(undefined4, 0x14a0a14) != (code *)0x0) && (param_1 != 0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a14))(param_1,0x10,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00979970 */
uint F_00979970(unsigned int gen_a0)
{
  GEN_ENTER(0x979970u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  if ((REFG(undefined4, 0x14a0a14) != (code *)0x0) && (param_1 != 0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a14))(param_1,0x10,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_009799a0 */
unsigned int F_009799a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9799a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((REFG(undefined4, 0x14a0a18) != (code *)0x0) && (param_1 != 0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(param_1);
  }
  return 0;
}

/* ref: FUN_009799c0 */
unsigned int F_009799c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9799c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((REFG(undefined4, 0x14a0a18) != (code *)0x0) && (param_1 != 0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(param_1);
  }
  return 0;
}

/* ref: FUN_009799e0 */
uint F_009799e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9799e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  iVar1 = *(int *)((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10dda64));
  uVar3 = 0;
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 8) != 0) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar1 + 8) + 4))))(*(int * PTR32 *)(iVar1 + 8));
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = 0;
    }
    if (*((int *)GEN_TOP((*(int *)((int)this + 4) + 0xc))) != 0) {
      piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 0xc)));
      ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 0xc))) = 0;
    }
    if ((REFG(undefined4, 0x14a0a18) != (code *)0x0) && (**(int * PTR32 *)((int)this + 4) != 0)) {
      ((code *)REFG(gen_code32, 0x14a0a18))(**(int * PTR32 *)((int)this + 4));
    }
    iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    if ((REFG(undefined4, 0x14a0a18) != (code *)0x0) && (iVar1 != 0)) {
      ((code *)REFG(gen_code32, 0x14a0a18))(iVar1);
    }
    uVar3 = 0;
    if (*(int *)((int)this + 4) != 0) {
      uVar3 = F_00406ad0(*(int *)((int)this + 4));
      *(undefined4 *)((int)this + 4) = 0;
    }
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10dd1f4));
  return uVar3;
}

/* ref: FUN_00979ab0 */
unsigned int F_00979ab0(float gen_a0)
{
  GEN_ENTER(0x979ab0u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00979ad0 */
unsigned int F_00979ad0(unsigned int gen_a0)
{
  GEN_ENTER(0x979ad0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10dda70));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10dd200));
  return 0;
}

/* ref: Apricot::Engine::Data::Communicator::Axis2Parameter::vf2 */
uint F_00979b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x979b10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x78) + 0x14))))(this + 0x78);
  *param_1 = (char)uVar1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0xb0) + 0x14))))(this + 0xb0);
  param_1[1] = (char)uVar1;
  return uVar1;
}

/* ref: Apricot::Engine::Data::Communicator::Axis3Parameter::vf4 */
uint F_00979b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x979b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0xb0) + 0x14))))(this + 0xb0);
  *param_1 = (char)uVar1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0xe8) + 0x14))))(this + 0xe8);
  param_1[1] = (char)uVar1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x120) + 0x14))))(this + 0x120);
  param_1[2] = (char)uVar1;
  return uVar1;
}

/* ref: Apricot::Engine::Data::Communicator::Axis3Parameter::vf2 */
byte F_00979b90(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x979b90u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 8) + 0xc))))((undefined4)gen_fl2bits(param_2));
  if ((char)uVar1 == '\0') {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x40) + 0xc))))((undefined4)gen_fl2bits(param_2));
    if ((char)uVar1 == '\0') {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x78) + 0xc))))((undefined4)gen_fl2bits(param_2));
      if ((char)uVar1 == '\0') {
        uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0xb0) + 0xc))))
                          ((undefined4)gen_fl2bits((float)(float10)0));
        if ((char)uVar1 == '\0') {
          uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0xe8) + 0xc))))
                            ((undefined4)gen_fl2bits((float)(float10)0));
          if ((char)uVar1 == '\0') {
            uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x120) + 0xc))))
                              ((undefined4)gen_fl2bits((float)(float10)0));
            return (char)uVar1 != '\0';
          }
        }
      }
    }
  }
  return 1;
}

/* ref: Apricot::Engine::Data::Communicator::ColorFunctionCurve::vf4 */
uint F_00979c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x979c40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x148) + 0x14))))(this + 0x148);
  *param_1 = (char)uVar1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x180) + 0x14))))(this + 0x180);
  param_1[1] = (char)uVar1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x1b8) + 0x14))))(this + 0x1b8);
  param_1[2] = (char)uVar1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x1f0) + 0x14))))(this + 0x1f0);
  param_1[3] = (char)uVar1;
  return uVar1;
}

/* ref: Apricot::Engine::Data::Communicator::ColorFunctionCurve::vf2 */
uint F_00979ca0(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x979ca0u, gen_a0, 0u, 0u, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1);
  return uVar1;
}

/* ref: FUN_00979cd0 */
uint F_00979cd0(unsigned int gen_a0)
{
  GEN_ENTER(0x979cd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * pcVar1;
  uint uVar2;
  
  pcVar1 = REFG(undefined4, 0x14a0a18);
  uVar2 = *(uint *)((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (uVar2 != 0)) {
    uVar2 = (*pcVar1)(uVar2);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  return uVar2;
}

/* ref: FUN_00979d00 */
unsigned int F_00979d00(float gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x979d00u, 0u, gen_a1, gen_a2, gen_a3);
  float param_1 = (float)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar2 = (float10)param_1;
  fVar3 = (float10)(float)(fVar2 * fVar2);
  fVar4 = (float10)(float)(fVar3 * fVar2);
  fVar5 = (float10)*(double *)&REFG(undefined, 0x1092098);
  fVar6 = fVar4 * fVar5;
  fVar1 = (float10)*(double *)&REFG(undefined, 0x10944e0);
  *param_2 = ((float)GEN_TOF(((fVar6 - fVar3 * fVar1) + (float10)REFG(double, 0x1088130))));
  *param_3 = (float)(fVar3 * fVar1 - fVar6);
  *param_4 = ((float)GEN_TOF(((fVar4 - fVar3 * fVar5) + fVar2)));
  *param_5 = (float)(fVar4 - fVar3);
  return 0;
}

/* ref: FUN_00979d60 */
float10 F_00979d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x979d60u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  float * pfVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  
  iVar1 = *(int *)(param_1 + 4) + param_2 * 8;
  fVar3 = ((float)GEN_TOF(((float10)(int)*(char *)(iVar1 + 10) / (float10)*(double *)&REFG(undefined, 0x1094560))));
  fVar4 = ((float)GEN_TOF(((float10)*(float *)(iVar1 + 0xc) - (float10)*(float *)(iVar1 + 4))));
  if (-1 < (int)(param_2 - 1)) {
    pfVar2 = ((float *)GEN_TOP((*(int *)(param_1 + 4) + -4 + param_2 * 8)));
    uVar5 = *(ushort *)(iVar1 + 0x10) & 0x3fff;
    return (float10)((float)GEN_TOF((((float10)fVar4 * (float10)fVar3 +
                            ((float10)*(float *)(iVar1 + 4) - (float10)*pfVar2) *
                            (float10)((float)GEN_TOF(((float10)(int)*(char *)(iVar1 + 0xb) /
                                            (float10)*(double *)&REFG(undefined, 0x1094560))))) *
                           (float10)((float)GEN_TOF(((float10)(int)(uVar5 - (*(ushort *)(iVar1 + 8) & 0x3fff)
                                                          ) /
                                           (float10)(int)(uVar5 - (*(ushort *)(pfVar2 + 1) & 0x3fff)
                                                         )))))));
  }
  return (float10)(float)((float10)fVar4 * (float10)fVar3);
}

/* ref: FUN_00979e30 */
float10 F_00979e30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x979e30u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  float fVar2;
  uint * puVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = *(int *)(param_1 + 4) + param_2 * 8;
  puVar3 = *(uint * PTR32 *)(param_1 + 4);
  fVar1 = ((float)GEN_TOF(((float10)(int)*(char *)(iVar4 + 0x13) / (float10)*(double *)&REFG(undefined, 0x1094560))));
  fVar2 = ((float)GEN_TOF(((float10)*(float *)(iVar4 + 0xc) - (float10)*(float *)(iVar4 + 4))));
  uVar5 = REFG(undefined4, 0x14a0a38);
  if (puVar3 != (uint *)0x0) {
    uVar5 = *puVar3;
  }
  if ((int)(param_2 + 2) <= (int)((uVar5 >> 9 & 0xffff) - 1)) {
    uVar5 = *(ushort *)(iVar4 + 8) & 0x3fff;
    return (float10)((float)GEN_TOF((((float10)fVar2 * (float10)fVar1 +
                            (float10)((float)GEN_TOF(((float10)(int)*((char *)GEN_TOP((*(int *)(param_1 + 4) + 0x12 +
                                                                    param_2 * 8))) /
                                            (float10)*(double *)&REFG(undefined, 0x1094560)))) *
                            (((float10)GEN_TOD(gen_bits2f(puVar3[param_2 * 2 + 5]))) -
                            (float10)*(float *)(iVar4 + 0xc))) *
                           (float10)((float)GEN_TOF(((float10)(int)((*(ushort *)(iVar4 + 0x10) & 0x3fff) -
                                                          uVar5) /
                                           (float10)(int)(((ushort)puVar3[param_2 * 2 + 6] & 0x3fff)
                                                         - uVar5)))))));
  }
  return (float10)(float)((float10)fVar2 * (float10)fVar1);
}

/* ref: FUN_00979f10 */
unsigned int F_00979f10(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x979f10u, gen_a0, 0u, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  F_00979d60(param_1,param_3);
  F_00979e30(param_1,param_3);
  return 0;
}

/* ref: FUN_00979ff0 */
float10 F_00979ff0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x979ff0u, gen_a0, 0u, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  int iVar1;
  float10 fVar2;
  
  iVar1 = *(int *)(param_1 + 4) + param_3 * 8;
  fVar2 = (float10)*((float *)GEN_TOP((*(int *)(param_1 + 4) + 4 + param_3 * 8)));
  return (float10)((float)GEN_TOF((((float10)*(float *)(iVar1 + 0xc) - fVar2) *
                          (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)param_2 -
                                                           ((float10)GEN_TOD((*(ushort *)(iVar1 + 8) & 0x3fff
                                                                    )))))) /
                                          (float10)(int)((*(ushort *)(iVar1 + 0x10) & 0x3fff) -
                                                        (*(ushort *)(iVar1 + 8) & 0x3fff))))) + fVar2)))
  ;
}

/* ref: FUN_0097a060 */
float10 F_0097a060(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x97a060u, gen_a0, 0u, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (((float10)GEN_TOD((*(ushort *)(iVar1 + 0x10 + param_3 * 8) & 0x3fff))) <= (float10)param_2) {
    return (float10)*(float *)(iVar1 + 0xc + param_3 * 8);
  }
  return (float10)*(float *)(iVar1 + 4 + param_3 * 8);
}

/* ref: FUN_0097a0b0 */
uint F_0097a0b0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x97a0b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint * puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = *(uint * PTR32 *)(param_1 + 4);
  iVar3 = 0;
  uVar2 = REFG(undefined4, 0x14a0a38);
  if (puVar1 != (uint *)0x0) {
    uVar2 = *puVar1;
  }
  iVar4 = (uVar2 >> 9 & 0xffff) - 1;
  if (-1 < iVar4) {
    do {
      uVar2 = (iVar4 - iVar3 >> 1) + iVar3;
      if ((float10)param_2 < ((float10)GEN_TOD(((ushort)puVar1[uVar2 * 2 + 2] & 0x3fff)))) {
        iVar4 = uVar2 - 1;
      }
      else {
        if (!(((float10)GEN_TOD(((ushort)puVar1[uVar2 * 2 + 4] & 0x3fff))) < (float10)param_2)) {
          return uVar2;
        }
        iVar3 = uVar2 + 1;
      }
    } while (iVar3 <= iVar4);
  }
  return 0;
}

/* ref: FUN_0097a140 */
unsigned int F_0097a140(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x97a140u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  return 0;
}

/* ref: FUN_0097a150 */
uint F_0097a150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x97a150u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  return *(uint *)(in_ecx + 4);
}

/* ref: FUN_0097a160 */
uint F_0097a160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97a160u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *(uint *)(in_ecx + 4);
}

/* ref: FUN_0097a170 */
uint F_0097a170(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x97a170u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  
  puVar2 = *(uint * PTR32 *)(param_1 + 4);
  uVar3 = REFG(undefined4, 0x14a0a38);
  if (puVar2 != (uint *)0x0) {
    uVar3 = *puVar2;
  }
  fVar5 = (float10)((ushort)puVar2[2] & 0x3fff);
  fVar6 = ((float10)GEN_TOD(((ushort)puVar2[(uVar3 >> 9 & 0xffff) * 2] & 0x3fff))) - fVar5;
  fVar1 = ((float)GEN_TOF((((float10)GEN_TOD(((int)(fVar5 - (float10)param_2) / (int)fVar6 + 1))) *
                  (float10)(float)fVar6 + (float10)param_2)));
  uVar3 = F_0097a0b0(param_1,fVar1);
  uVar4 = (uint)(*((ushort *)GEN_TOP((*(int *)(param_1 + 4) + 0x10 + uVar3 * 8))) >> 0xe);
  uVar3 = ((code *)*(gen_code32 *)(param_1 + 0x10 + uVar4 * 8))
                    (*(int *)(param_1 + 0x14 + uVar4 * 8) + param_1,(undefined4)gen_fl2bits(fVar1),
                     uVar3);
  return uVar3;
}

/* ref: FUN_0097a220 */
double F_0097a220(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x97a220u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  double dVar7;
  
  puVar2 = *(uint * PTR32 *)(param_1 + 4);
  uVar3 = REFG(undefined4, 0x14a0a38);
  if (puVar2 != (uint *)0x0) {
    uVar3 = *puVar2;
  }
  fVar5 = (float10)((ushort)puVar2[2] & 0x3fff);
  fVar6 = ((float10)GEN_TOD(((ushort)puVar2[(uVar3 >> 9 & 0xffff) * 2] & 0x3fff))) - fVar5;
  fVar1 = ((float)GEN_TOF((((float10)GEN_TOD(((int)(fVar5 - (float10)param_2) / (int)fVar6 + 1))) *
                  (float10)(float)fVar6 + (float10)param_2)));
  uVar3 = F_0097a0b0(param_1,fVar1);
  uVar4 = (uint)(ushort)((ushort)puVar2[uVar3 * 2 + 4] >> 0xe);
  dVar7 = ((code *)*(gen_code32 *)(param_1 + 0x10 + uVar4 * 8))
                    (*(int *)(param_1 + 0x14 + uVar4 * 8) + param_1,(undefined4)gen_fl2bits(fVar1),
                     uVar3);
  return dVar7;
}

/* ref: FUN_0097a2f0 */
uint F_0097a2f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97a2f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x14a0a38);
  if (*(uint * PTR32 *)(in_ecx + 4) != (uint *)0x0) {
    uVar1 = **(uint * PTR32 *)(in_ecx + 4);
  }
  return uVar1 >> 9 & 0xffff;
}

/* ref: FUN_0097a310 */
uint F_0097a310(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x97a310u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  
  puVar2 = *(uint * PTR32 *)(param_1 + 4);
  uVar3 = REFG(undefined4, 0x14a0a38);
  if (puVar2 != (uint *)0x0) {
    uVar3 = *puVar2;
  }
  fVar5 = ((float10)GEN_TOD(((ushort)puVar2[(uVar3 >> 9 & 0xffff) * 2] & 0x3fff)));
  fVar6 = fVar5 - (float10)((ushort)puVar2[2] & 0x3fff);
  fVar1 = ((float)GEN_TOF(((float10)param_2 -
                 ((float10)GEN_TOD(((int)((float10)param_2 - fVar5) / (int)fVar6 + 1))) * (float10)(float)fVar6
                 )));
  uVar3 = F_0097a0b0(param_1,fVar1);
  uVar4 = (uint)(*((ushort *)GEN_TOP((*(int *)(param_1 + 4) + 0x10 + uVar3 * 8))) >> 0xe);
  uVar3 = ((code *)*(gen_code32 *)(param_1 + 0x10 + uVar4 * 8))
                    (*(int *)(param_1 + 0x14 + uVar4 * 8) + param_1,(undefined4)gen_fl2bits(fVar1),
                     uVar3);
  return uVar3;
}

/* ref: FUN_0097a3c0 */
double F_0097a3c0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x97a3c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  double dVar7;
  
  puVar2 = *(uint * PTR32 *)(param_1 + 4);
  uVar3 = REFG(undefined4, 0x14a0a38);
  if (puVar2 != (uint *)0x0) {
    uVar3 = *puVar2;
  }
  fVar5 = ((float10)GEN_TOD(((ushort)puVar2[(uVar3 >> 9 & 0xffff) * 2] & 0x3fff)));
  fVar6 = fVar5 - (float10)((ushort)puVar2[2] & 0x3fff);
  fVar1 = ((float)GEN_TOF(((float10)param_2 -
                 ((float10)GEN_TOD(((int)((float10)param_2 - fVar5) / (int)fVar6 + 1))) * (float10)(float)fVar6
                 )));
  uVar3 = F_0097a0b0(param_1,fVar1);
  uVar4 = (uint)(ushort)((ushort)puVar2[uVar3 * 2 + 4] >> 0xe);
  dVar7 = ((code *)*(gen_code32 *)(param_1 + 0x10 + uVar4 * 8))
                    (*(int *)(param_1 + 0x14 + uVar4 * 8) + param_1,(undefined4)gen_fl2bits(fVar1),
                     uVar3);
  return dVar7;
}

/* ref: FUN_0097a490 */
uint F_0097a490(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x97a490u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_0097a0b0(param_1,param_2);
  uVar2 = (uint)(*((ushort *)GEN_TOP((*(int *)(param_1 + 4) + 0x10 + uVar1 * 8))) >> 0xe);
  uVar1 = ((code *)*(gen_code32 *)(param_1 + 0x10 + uVar2 * 8))
                    (*(int *)(param_1 + 0x14 + uVar2 * 8) + param_1,(undefined4)gen_fl2bits(param_2)
                     ,uVar1);
  return uVar1;
}

/* ref: Apricot::Engine::Data::Communicator::FunctionCurve::vf4 */
uint F_0097a4d0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x97a4d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(param_1 + 8))(*(int *)(param_1 + 0xc) + param_1);
  return uVar1;
}

/* ref: Apricot::Engine::Data::Communicator::FunctionCurve::vf3 */
uint F_0097a500(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x97a500u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint * puVar1;
  uint uVar2;
  bool bVar3;
  
  puVar1 = *(uint * PTR32 *)(param_1 + 4);
  uVar2 = REFG(undefined4, 0x14a0a38);
  if (puVar1 != (uint *)0x0) {
    uVar2 = *puVar1;
  }
  if ((uVar2 >> 9 & 0xffff) == 0) {
    return uVar2 >> 9 & 0xff00;
  }
  uVar2 = REFG(undefined4, 0x14a0a38);
  if (puVar1 != (uint *)0x0) {
    uVar2 = *puVar1;
  }
  uVar2 = uVar2 >> 9 & 0xffff;
  if (uVar2 != 1) {
    return CONCAT31((int3)(uVar2 >> 8),1);
  }
  bVar3 = GEN_ISNAN(((float10)GEN_TOD(gen_bits2f(puVar1[1])))) || GEN_ISNAN((float10)param_2);
  if (bVar3 != (bVar3 || ((float10)GEN_TOD(gen_bits2f(puVar1[1]))) == (float10)param_2)) {
    return 0;
  }
  return 1;
}

/* ref: Apricot::Engine::Data::Communicator::ValueFunctionCurve::vf4 */
uint F_0097a5e0(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x97a5e0u, gen_a0, 0u, 0u, gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(param_1 + 0x78))(*(int *)(param_1 + 0x7c) + param_1);
  return uVar1;
}

/* ref: FUN_0097a610 */
unsigned int F_0097a610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x97a610u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_0097a620 */
uint F_0097a620(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x97a620u, gen_a0, 0u, 0u, gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 8) + 0x10))))(param_1 + 8);
  return uVar1;
}

/* ref: FUN_0097a650 */
uint F_0097a650(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x97a650u, gen_a0, 0u, 0u, gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(param_1 + 0x80))(*(int *)(param_1 + 0x84) + param_1);
  return uVar1;
}

/* ref: FUN_0097a680 */
uint F_0097a680(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x97a680u, gen_a0, 0u, 0u, gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  double dVar1;
  
  ((code *)*(gen_code32 *)(param_1 + 0x80))(*(int *)(param_1 + 0x84) + param_1,(undefined4)gen_fl2bits(param_2))
  ;
  dVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 8) + 0x10))))(param_1 + 8);
  return (uint)(ulonglong)gen_d2bits(dVar1);
}

/* ref: Apricot::Engine::Data::Communicator::ValueFunctionCurve::vf5 */
uint F_0097a6f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x97a6f0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x40) + 0x14))))
                    (this + 0x40,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Apricot::Engine::Data::Communicator::ValueFunctionCurve::vf3 */
uint F_0097a700(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x97a700u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 8) + 0xc))))((undefined4)gen_fl2bits(param_2));
  if ((char)uVar1 == '\0') {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x40) + 0xc))))
                      ((undefined4)gen_fl2bits((float)(float10)0));
    if ((char)uVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}

/* ref: Apricot::Engine::Data::Communicator::TextureUvSet::vf3 */
uint F_0097a750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97a750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x80) + 0x14))))(this + 0x80);
  *param_1 = (char)uVar1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0xb8) + 0x14))))(this + 0xb8);
  param_1[1] = (char)uVar1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x170) + 0x14))))(this + 0x170);
  param_1[2] = (char)uVar1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x1a8) + 0x14))))(this + 0x1a8);
  param_1[3] = (char)uVar1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x1e8) + 0x14))))(this + 0x1e8);
  param_1[4] = (char)uVar1;
  return uVar1;
}

/* ref: FUN_0097a850 */
uint F_0097a850(unsigned int gen_a0)
{
  GEN_ENTER(0x97a850u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * pcVar1;
  
  pcVar1 = REFG(undefined4, 0x14a0a18);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10ddab4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x90) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xd0) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0xd4) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0xd4));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0xd0) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x98) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x9c) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x9c));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x98) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x90) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[6])REFP(0x10dda98))
  ;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x48) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x4c) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x4c));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x48) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x14) != 0)) {
    pcVar1 = ((code *)GEN_TOP((*pcVar1)(*(int *)((int)this + 0x14))));
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10dd534));
  return (uint)pcVar1;
}

/* ref: FUN_0097a930 */
uint F_0097a930(unsigned int gen_a0)
{
  GEN_ENTER(0x97a930u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * pcVar1;
  
  pcVar1 = REFG(undefined4, 0x14a0a18);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10ddac4));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[6])REFP(0x10dda98))
  ;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x48) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x4c) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x4c));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x48) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x14) != 0)) {
    pcVar1 = ((code *)GEN_TOP((*pcVar1)(*(int *)((int)this + 0x14))));
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10dd528));
  return (uint)pcVar1;
}

/* ref: FUN_0097a9e0 */
uint F_0097a9e0(unsigned int gen_a0)
{
  GEN_ENTER(0x97a9e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * pcVar1;
  
  pcVar1 = REFG(undefined4, 0x14a0a18);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10ddad0));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[6])REFP(0x10dda98))
  ;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x48) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x4c) != 0)) {
    (*pcVar1)(*(int *)((int)this + 0x4c));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x48) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != (code *)0x0) && (*(int *)((int)this + 0x14) != 0)) {
    pcVar1 = ((code *)GEN_TOP((*pcVar1)(*(int *)((int)this + 0x14))));
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10dd600));
  return (uint)pcVar1;
}

/* ref: FUN_0097aa50 */
uint F_0097aa50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97aa50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  REFG(undefined4, 0x14a09e0) = param_1;
  REFG(undefined4, 0x14a09dc) = param_2;
  REFG(undefined4, 0x14a09d8) = 0;
  REFG(undefined4, 0x14a09d4) = 0;
  REFG(undefined1, 0x14a06d6) = 0;
  return 0;
}

/* ref: FUN_0097aab0 */
uint F_0097aab0(unsigned int gen_a0)
{
  GEN_ENTER(0x97aab0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = param_1 + 3U & 0xfffffffc;
  REFG(int, 0x14a09d4) = REFG(int, 0x14a09d4) + uVar1;
  return uVar1;
}

/* ref: FUN_0097aad0 */
uint F_0097aad0(unsigned int gen_a0)
{
  GEN_ENTER(0x97aad0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = (REFG(undefined4, 0x14a09d4) + 0xf & 0xfffffff0) + (param_1 + 0xfU & 0xfffffff0);
  REFG(undefined4, 0x14a09d4) = uVar1;
  return uVar1;
}

/* ref: FUN_0097ab00 */
uint F_0097ab00(unsigned int gen_a0)
{
  GEN_ENTER(0x97ab00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  if (REFG(char, 0x14a06d6) != '\0') {
    REFG(int, 0x14a09d4) = REFG(int, 0x14a09d4) + (param_1 + 3U & 0xfffffffc);
    return 0;
  }
  uVar1 = REFG(int, 0x14a09d8) + REFG(int, 0x14a09e0);
  REFG(int, 0x14a09d8) = REFG(int, 0x14a09d8) + (param_1 + 3U & 0xfffffffc);
  return uVar1;
}

/* ref: FUN_0097ab50 */
uint F_0097ab50(unsigned int gen_a0)
{
  GEN_ENTER(0x97ab50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  if (REFG(char, 0x14a06d6) != '\0') {
    REFG(int, 0x14a09d4) = (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0) + (param_1 + 0xfU & 0xfffffff0);
    return 0;
  }
  uVar1 = REFG(int, 0x14a09d8) + 0xfU & 0xfffffff0;
  REFG(int, 0x14a09d8) = uVar1 + (param_1 + 0xfU & 0xfffffff0);
  return REFG(int, 0x14a09e0) + uVar1;
}

/* ref: FUN_0097abd0 */
uint F_0097abd0(unsigned int gen_a0)
{
  GEN_ENTER(0x97abd0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  if (REFG(char, 0x14a06d6) != '\0') {
    REFG(int, 0x14a09d4) = REFG(int, 0x14a09d4) + (param_1 + 3U & 0xfffffffc);
    return 0;
  }
  uVar1 = REFG(int, 0x14a09d8) + REFG(int, 0x14a09e0);
  REFG(int, 0x14a09d8) = REFG(int, 0x14a09d8) + (param_1 + 3U & 0xfffffffc);
  return uVar1;
}

/* ref: FUN_0097ac20 */
uint F_0097ac20(unsigned int gen_a0)
{
  GEN_ENTER(0x97ac20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  if (REFG(char, 0x14a06d6) != '\0') {
    REFG(int, 0x14a09d4) = REFG(int, 0x14a09d4) + (param_1 + 3U & 0xfffffffc);
    return 0;
  }
  uVar1 = REFG(int, 0x14a09d8) + REFG(int, 0x14a09e0);
  REFG(int, 0x14a09d8) = REFG(int, 0x14a09d8) + (param_1 + 3U & 0xfffffffc);
  return uVar1;
}

/* ref: FUN_0097acd0 */
uint F_0097acd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97acd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = REFG(float, 0x1088068);
  *(undefined4 *)((int)this + 0xc) = param_1;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  uVar1 = REFG(float, 0x1087f04);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[63])REFP(0x10ddb1c));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(uint *)((int)this + 0x38) = *(uint *)((int)this + 0x38) & 2 | 0x80;
  *(undefined4 *)((int)this + 0x58) = uVar2;
  *(undefined4 *)((int)this + 0x5c) = uVar2;
  *(undefined4 *)((int)this + 0x60) = uVar2;
  *(undefined4 *)((int)this + 0x7c) = uVar1;
  *(undefined4 *)((int)this + 0x80) = uVar1;
  *(undefined4 *)((int)this + 0x84) = uVar1;
  *(undefined4 *)((int)this + 0x88) = uVar1;
  *(undefined4 *)((int)this + 0x8c) = uVar1;
  *(undefined4 *)((int)this + 0x90) = uVar1;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf6 */
uint F_0097adc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97adc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if ((-1 < param_1) && (param_1 < (char)this[0x94])) {
    piVar1 = ((int *)GEN_TOP((*(int *)(this + 0x10) + param_1 * 0x1c)));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    return uVar2;
  }
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf8 */
uint F_0097ae00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97ae00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if ((-1 < param_1) && (param_1 < (char)this[0x95])) {
    return *(int *)(this + 0x14) + param_1 * 8;
  }
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf7 */
uint F_0097ae30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97ae30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if ((-1 < param_1) && (param_1 < (char)this[0x94])) {
    return *(int *)(this + 0x10) + param_1 * 0x1c;
  }
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf9 */
uint F_0097ae60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97ae60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0x18) + param_2 * 0x24;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf10 */
uint F_0097ae80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97ae80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *(int *)(in_ecx + 0x1c);
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf11 */
uint F_0097ae90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97ae90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x20 + *(int *)(in_ecx + 0x20);
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf12 */
uint F_0097aea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97aea0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x244 + *(int *)(in_ecx + 0x24);
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf13 */
uint F_0097aec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97aec0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x1f8 + *(int *)(in_ecx + 0x28);
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf14 */
uint F_0097aee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97aee0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0x2c) + param_2 * 0x14;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf20 */
uint F_0097af00(unsigned int gen_a0)
{
  GEN_ENTER(0x97af00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 0x94);
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf21 */
uint F_0097af10(unsigned int gen_a0)
{
  GEN_ENTER(0x97af10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 0x95);
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf22 */
uint F_0097af20(unsigned int gen_a0)
{
  GEN_ENTER(0x97af20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 0x96);
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf23 */
uint F_0097af30(unsigned int gen_a0)
{
  GEN_ENTER(0x97af30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 0x97);
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf24 */
uint F_0097af40(unsigned int gen_a0)
{
  GEN_ENTER(0x97af40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 0x98);
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf25 */
uint F_0097af50(unsigned int gen_a0)
{
  GEN_ENTER(0x97af50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 0x99);
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf26 */
uint F_0097af60(unsigned int gen_a0)
{
  GEN_ENTER(0x97af60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 0x9a);
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf27 */
uint F_0097af70(unsigned int gen_a0)
{
  GEN_ENTER(0x97af70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 0x9b);
}

/* ref: FUN_0097afb0 */
unsigned int F_0097afb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x97afb0u, gen_a0, gen_a1, gen_a2, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  uint uVar1;
  uint * puVar2;
  uint * puVar3;
  uint uVar4;
  
  uVar4 = 0;
  *(undefined1 *)((int)param_3 + 0x25) = 1;
  puVar3 = param_1;
  if (param_2 != 0) {
    do {
      uVar1 = *puVar3;
      puVar2 = puVar3 + 2;
      if (uVar1 < 0x4950624d) {
        if (uVar1 == 0x4950624c) {
          uVar1 = ((uint)(*puVar2 != 0) << 5 ^ param_3[0x10]) & 0x20;
        }
        else {
          if (uVar1 < 0x43725073) {
            if (uVar1 == 0x43725072) {
              param_3[3] = *puVar2;
            }
            else if (uVar1 < 0x4249415a) {
              if (uVar1 == 0x42494159) {
                param_3[6] = *puVar2;
              }
              else if (uVar1 == 0x624744) {
                *(bool *)(param_3 + 9) = *puVar2 != 0;
              }
              else if (uVar1 == 0x42494158) {
                param_3[5] = *puVar2;
              }
            }
            else if (uVar1 == 0x4249415a) {
              param_3[7] = *puVar2;
            }
            else if (uVar1 == 0x4372436e) {
              param_3[2] = *puVar2;
            }
            goto LAB_0097b1d5;
          }
          if (uVar1 < 0x49436251) {
            if (uVar1 != 0x49436250) {
              if (uVar1 == 0x4372546d) {
                param_3[1] = *puVar2;
              }
              else if (uVar1 == 0x47656e44) {
                param_3[8] = *puVar2;
              }
              goto LAB_0097b1d5;
            }
            uVar1 = ((uint)(*puVar2 != 0) * 8 ^ param_3[0x10]) & 8;
          }
          else if (uVar1 == 0x49436252) {
            uVar1 = ((uint)(*puVar2 != 0) * 4 ^ param_3[0x10]) & 4;
          }
          else {
            if (uVar1 != 0x49436253) goto LAB_0097b1d5;
            uVar1 = ((uint)(*puVar2 != 0) * 2 ^ param_3[0x10]) & 2;
          }
        }
LAB_0097b1d2: ;
        param_3[0x10] = param_3[0x10] ^ uVar1;
      }
      else if (uVar1 < 0x50494370) {
        if (uVar1 == 0x5049436f) {
          param_3[0xc] = *puVar2;
        }
        else if (uVar1 < 0x4f767253) {
          if (uVar1 == 0x4f767252) {
            param_3[0xf] = *puVar2;
          }
          else {
            if (uVar1 == 0x49506256) {
              uVar1 = ((uint)(*puVar2 != 0) << 4 ^ param_3[0x10]) & 0x10;
              goto LAB_0097b1d2;
            }
            if (uVar1 == 0x4c6f4472) {
              param_3[10] = (int)(char)*puVar2;
            }
          }
        }
        else if (uVar1 == 0x4f767256) {
          param_3[0xe] = *puVar2;
        }
        else if (uVar1 == 0x50494364) {
          param_3[0xb] = *puVar2;
        }
      }
      else {
        if (0x54677442 < uVar1) {
          if (uVar1 == 0x624f7672) {
            uVar1 = ((uint)(*puVar2 != 0) << 6 ^ param_3[0x10]) & 0x40;
          }
          else {
            if (uVar1 != 0x6253744e) goto LAB_0097b1d5;
            uVar1 = ((uint)(*puVar2 != 0) ^ param_3[0x10]) & 1;
          }
          goto LAB_0097b1d2;
        }
        if (uVar1 == 0x54677442) {
          *param_3 = *puVar2;
        }
        else if (uVar1 == 0x50724c6b) {
          param_3[4] = *puVar2;
        }
        else if (uVar1 == 0x53744672) {
          param_3[0xd] = *puVar2;
        }
      }
LAB_0097b1d5: ;
      uVar4 = uVar4 + 8 + (puVar3[1] + 3 & 0xfffffffc);
      puVar3 = ((uint *)GEN_TOP(((int)puVar2 + (puVar3[1] + 3 & 0xfffffffc))));
    } while (uVar4 < param_2);
  }
  switch((unsigned int)(uintptr_t)(param_3[0xb])) {
  case 4: ;
    param_3[0x10] = param_3[0x10] | 0x80;
    param_3[0xb] = 2;
    break;
  case 5: ;
    param_3[0x10] = param_3[0x10] | 0x80;
    param_3[0xb] = 3;
    break;
  case 6: ;
    param_3[0x10] = param_3[0x10] | 0x80;
    param_3[0xb] = 0;
    break;
  case 7: ;
    param_3[0x10] = param_3[0x10] | 0x80;
    param_3[0xb] = 1;
    break;
  default: ;
    param_3[0x10] = param_3[0x10] & 0xffffff7f;
  }
  if (param_3[0xb] == 0) {
    param_3[0x10] = param_3[0x10] & 0xfffffff1;
  }
  else if (param_3[0xb] - 2 < 2) {
    param_3[0x10] = param_3[0x10] | 0xe;
    return 0;
  }
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::Emitter::vf1 */
unsigned int F_0097b280(void)
{
  GEN_ENTER(0x97b280u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0097b2b0 */
unsigned int F_0097b2b0(unsigned int gen_a0)
{
  GEN_ENTER(0x97b2b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0xc);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10ddc54));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x10);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10dd1f4));
  return 0;
}

/* ref: FUN_0097b2f0 */
unsigned int F_0097b2f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97b2f0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  int * piVar2;
  int iVar3;
  
  uVar1 = 0;
  piVar2 = param_1;
  iVar3 = REFG(int, 0x14a09d4);
  if (param_2 != 0) {
    do {
      if ((*piVar2 == 0x56456d74) || (*piVar2 == 0x564e756d)) {
        iVar3 = (iVar3 + 0xfU & 0xfffffff0) + (piVar2[1] + 0xfU & 0xfffffff0);
        REFG(int, 0x14a09d4) = iVar3;
      }
      uVar1 = uVar1 + 8 + (piVar2[1] + 3U & 0xfffffffc);
      piVar2 = ((int *)GEN_TOP(((int)piVar2 + (piVar2[1] + 3U & 0xfffffffc) + 8)));
    } while (uVar1 < param_2);
  }
  return 0;
}

/* ref: FUN_0097b390 */
unsigned int F_0097b390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97b390u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 0;
  piVar1 = param_1;
  if (param_2 != 0) {
    do {
      if ((*piVar1 == 0x4974436e) || (*piVar1 == 0x5472436e)) {
        REFG(int, 0x14a09d4) = REFG(int, 0x14a09d4) + (char)piVar1[2] * 4;
      }
      uVar2 = uVar2 + 8 + (piVar1[1] + 3U & 0xfffffffc);
      piVar1 = ((int *)GEN_TOP(((int)(piVar1 + 2) + (piVar1[1] + 3U & 0xfffffffc))));
    } while (uVar2 < param_2);
  }
  return 0;
}

/* ref: FUN_0097b400 */
unsigned int F_0097b400(unsigned int gen_a0)
{
  GEN_ENTER(0x97b400u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10ddc78));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10dd200));
  return 0;
}

/* ref: FUN_0097b440 */
unsigned int F_0097b440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x97b440u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  if (param_1 != (int *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1,param_2,param_4);
    *(uint *)((int)this + 4) = uVar1;
  }
  return 0;
}

/* ref: FUN_0097b4c0 */
unsigned int F_0097b4c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97b4c0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  piVar2 = param_1;
  if (param_2 != 0) {
    do {
      piVar1 = piVar2 + 2;
      if (*piVar2 == 0x4370436e) {
        iVar4 = (char)*piVar1 * 0xa4;
LAB_0097b4fc: ;
        REFG(int, 0x14a09d4) = REFG(int, 0x14a09d4) + (iVar4 + 3U & 0xfffffffc);
      }
      else if (*piVar2 == 0x5449436e) {
        iVar4 = (char)*piVar1 * 0x2a;
        goto LAB_0097b4fc;
      }
      uVar3 = uVar3 + 8 + (piVar2[1] + 3U & 0xfffffffc);
      piVar2 = ((int *)GEN_TOP(((int)piVar1 + (piVar2[1] + 3U & 0xfffffffc))));
    } while (uVar3 < param_2);
  }
  return 0;
}

/* ref: FUN_0097b530 */
unsigned int F_0097b530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97b530u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = param_1;
  if (param_2 != 0) {
    do {
      uVar1 = uVar1 + 8 + (*(int *)(iVar2 + 4) + 3U & 0xfffffffc);
      iVar2 = iVar2 + 8 + (*(int *)(iVar2 + 4) + 3U & 0xfffffffc);
    } while (uVar1 < param_2);
  }
  return 0;
}

/* ref: FUN_0097b570 */
unsigned int F_0097b570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x97b570u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = param_2;
  if (param_3 != 0) {
    do {
      uVar1 = uVar1 + 8 + (*(int *)(iVar2 + 4) + 3U & 0xfffffffc);
      iVar2 = iVar2 + 8 + (*(int *)(iVar2 + 4) + 3U & 0xfffffffc);
    } while (uVar1 < param_3);
  }
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::Axis2Parameter::vf2 */
uint F_0097b5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97b5f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x14) + 0x14))))(this + 0x14);
  *param_1 = (char)uVar1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x1c) + 0x14))))(this + 0x1c);
  param_1[1] = (char)uVar1;
  return uVar1;
}

/* ref: Apricot::Engine::Data::Runtime::Axis2Parameter::vf1 */
uint F_0097b620(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x97b620u, gen_a0, 0u, 0u, gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0ac4) + *(char *)(param_1 + 0x26) * 8))
                    (*(int *)(&REFG(undefined, 0x14a0ac8) + *(char *)(param_1 + 0x26) * 8) + param_1);
  return uVar1;
}

/* ref: FUN_0097b660 */
uint F_0097b660(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x97b660u, gen_a0, 0u, 0u, gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(char *)(param_1 + 0x24) * 8;
  uVar2 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0ad4) + iVar1))(*(int *)(&REFG(undefined, 0x14a0ad8) + iVar1) + param_1,param_5);
  return uVar2;
}

/* ref: Apricot::Engine::Data::Runtime::Axis3Parameter::vf4 */
uint F_0097b780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97b780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x20) + 0x14))))(this + 0x20);
  *param_1 = (char)uVar1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x28) + 0x14))))(this + 0x28);
  param_1[1] = (char)uVar1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x30) + 0x14))))(this + 0x30);
  param_1[2] = (char)uVar1;
  return uVar1;
}

/* ref: FUN_0097b7c0 */
uint F_0097b7c0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x97b7c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  int iVar1;
  uint uVar2;
  
  iVar1 = (**(uint * PTR32 *)(param_1 + 4) >> 1 & 0xf) * 8;
  uVar2 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0b00) + iVar1))(*(int *)(&REFG(undefined, 0x14a0b04) + iVar1) + param_1,param_6);
  return uVar2;
}

/* ref: Apricot::Engine::Data::Runtime::Axis3Parameter::vf3 */
uint F_0097bbf0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x97bbf0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = **(uint * PTR32 *)(param_1 + 4) & 1;
  uVar1 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0aec) + uVar1 * 8))(*(int *)(&REFG(undefined, 0x14a0af0) + uVar1 * 8) + param_1);
  return uVar1;
}

/* ref: Apricot::Engine::Data::Runtime::Axis3Parameter::vf2 */
byte F_0097bc40(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x97bc40u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 8) + 0xc))))((undefined4)gen_fl2bits(param_2));
  if ((char)uVar1 == '\0') {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x10) + 0xc))))((undefined4)gen_fl2bits(param_2));
    if ((char)uVar1 == '\0') {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x18) + 0xc))))((undefined4)gen_fl2bits(param_2));
      if ((char)uVar1 == '\0') {
        uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x20) + 0xc))))
                          ((undefined4)gen_fl2bits((float)(float10)0));
        if ((char)uVar1 == '\0') {
          uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x28) + 0xc))))
                            ((undefined4)gen_fl2bits((float)(float10)0));
          if ((char)uVar1 == '\0') {
            uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x30) + 0xc))))
                              ((undefined4)gen_fl2bits((float)(float10)0));
            return (char)uVar1 != '\0';
          }
        }
      }
    }
  }
  return 1;
}

/* ref: FUN_0097bce0 */
uint F_0097bce0(unsigned int gen_a0)
{
  GEN_ENTER(0x97bce0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 8))))((int)this + 8);
  bVar2 = (char)uVar1 != '\0';
  if (bVar2) {
    *(uint *)((int)this + 0x68) = *(uint *)((int)this + 0x68) | 2;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0xc))))
                    ((undefined4)gen_fl2bits((float)(float10)1));
  bVar3 = (char)uVar1 != '\0';
  if (bVar3) {
    *(uint *)((int)this + 0x68) = *(uint *)((int)this + 0x68) | 4;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x38) + 0xc))))
                    ((undefined4)gen_fl2bits((float)(float10)0));
  bVar4 = (char)uVar1 != '\0';
  if (bVar4) {
    *(uint *)((int)this + 0x68) = *(uint *)((int)this + 0x68) | 0x10;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x40) + 0xc))))
                    ((undefined4)gen_fl2bits((float)(float10)0));
  bVar5 = (char)uVar1 != '\0';
  if (bVar5) {
    *(uint *)((int)this + 0x68) = *(uint *)((int)this + 0x68) | 0x20;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x48) + 0xc))))
                    ((undefined4)gen_fl2bits((float)(float10)0));
  bVar6 = (char)uVar1 != '\0';
  if (bVar6) {
    *(uint *)((int)this + 0x68) = *(uint *)((int)this + 0x68) | 0x40;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x50) + 0xc))))
                    ((undefined4)gen_fl2bits((float)(float10)0));
  bVar7 = (char)uVar1 != '\0';
  if (bVar7) {
    *(uint *)((int)this + 0x68) = *(uint *)((int)this + 0x68) | 0x80;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x18) + 0xc))))
                    ((undefined4)gen_fl2bits((float)(float10)1));
  bVar8 = (char)uVar1 != '\0';
  if (bVar8) {
    *(uint *)((int)this + 0x68) = *(uint *)((int)this + 0x68) | 0x100;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x20) + 0xc))))
                    ((undefined4)gen_fl2bits((float)(float10)1));
  bVar9 = (char)uVar1 != '\0';
  if (bVar9) {
    *(uint *)((int)this + 0x68) = *(uint *)((int)this + 0x68) | 0x200;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x28) + 0xc))))
                    ((undefined4)gen_fl2bits((float)(float10)1));
  bVar10 = (char)uVar1 != '\0';
  if (bVar10) {
    *(uint *)((int)this + 0x68) = *(uint *)((int)this + 0x68) | 0x400;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x30) + 0xc))))
                    ((undefined4)gen_fl2bits((float)(float10)1));
  bVar11 = (char)uVar1 != '\0';
  if (bVar11) {
    *(uint *)((int)this + 0x68) = *(uint *)((int)this + 0x68) | 0x800;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x58) + 0xc))))
                    ((undefined4)gen_fl2bits((float)(float10)1));
  if ((char)uVar1 != '\0') {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x60) + 0xc))))
                      ((undefined4)gen_fl2bits((float)(float10)0));
    if ((char)uVar1 != '\0') {
      *(uint *)((int)this + 0x68) = *(uint *)((int)this + 0x68) | 0x3000;
      *(uint *)((int)this + 0x68) = *(uint *)((int)this + 0x68) | 1;
      return uVar1;
    }
    uVar1 = *(uint *)((int)this + 0x68) & 0xffffdfff | 0x1000;
    *(uint *)((int)this + 0x68) = uVar1;
    *(uint *)((int)this + 0x68) = *(uint *)((int)this + 0x68) | 1;
    return uVar1;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x60) + 0xc))))
                    ((undefined4)gen_fl2bits((float)(float10)0));
  if ((char)uVar1 != '\0') {
    *(uint *)((int)this + 0x68) = *(uint *)((int)this + 0x68) & 0xffffefff | 0x2000;
    *(uint *)((int)this + 0x68) = *(uint *)((int)this + 0x68) | 1;
    return uVar1;
  }
  *(uint *)((int)this + 0x68) = *(uint *)((int)this + 0x68) & 0xffffcfff;
  uVar1 = *(uint *)((int)this + 0x68);
  if (bVar11 || (bVar10 ||
                (bVar9 || (bVar8 || (bVar7 || (bVar6 || (bVar5 || (bVar4 || (bVar3 || bVar2)))))))))
  {
    *(uint *)((int)this + 0x68) = *(uint *)((int)this + 0x68) | 1;
    return uVar1;
  }
  uVar1 = uVar1 & 0xfffffffe;
  *(uint *)((int)this + 0x68) = uVar1;
  return uVar1;
}

/* ref: Apricot::Engine::Data::Runtime::ColorFunctionCurve::vf4 */
uint F_0097be90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97be90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x38) + 0x14))))(this + 0x38);
  *param_1 = (char)uVar1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x40) + 0x14))))(this + 0x40);
  param_1[1] = (char)uVar1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x48) + 0x14))))(this + 0x48);
  param_1[2] = (char)uVar1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x50) + 0x14))))(this + 0x50);
  param_1[3] = (char)uVar1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x60) + 0x14))))(this + 0x60);
  param_1[4] = (char)uVar1;
  return uVar1;
}

/* ref: FUN_0097bef0 */
uint F_0097bef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x97bef0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  
  uVar1 = REFG(float, 0x1087f04);
  *param_3 = GEN_FLT_TO(*param_3, REFG(float, 0x1087f04));
  param_3[1] = uVar1;
  param_3[2] = uVar1;
  return (uint)param_3;
}

/* ref: FUN_0097bf10 */
uint F_0097bf10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x97bf10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  *(undefined4 *)(param_3 + 0xc) = REFG(float, 0x1087f04);
  return param_3;
}

/* ref: FUN_0097bf60 */
unsigned int F_0097bf60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x97bf60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  return 0;
}

/* ref: FUN_0097bf70 */
unsigned int F_0097bf70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x97bf70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  return 0;
}

/* ref: FUN_0097bf80 */
unsigned int F_0097bf80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x97bf80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  return 0;
}

/* ref: FUN_0097bf90 */
unsigned int F_0097bf90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x97bf90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  return 0;
}

/* ref: FUN_0097bfa0 */
unsigned int F_0097bfa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x97bfa0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_0097bfe0 */
unsigned int F_0097bfe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x97bfe0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_0097c030 */
unsigned int F_0097c030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x97c030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_0097c080 */
unsigned int F_0097c080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x97c080u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_0097c0d0 */
unsigned int F_0097c0d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x97c0d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::ColorFunctionCurve::vf2 */
uint F_0097c130(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x97c130u, gen_a0, 0u, 0u, gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x68) & 1;
  uVar1 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0b60) + uVar1 * 8))(*(int *)(&REFG(undefined, 0x14a0b64) + uVar1 * 8) + param_1);
  return uVar1;
}

/* ref: Apricot::Engine::Data::Runtime::ColorFunctionCurve::vf3 */
uint F_0097c170(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x97c170u, gen_a0, 0u, 0u, gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x68) & 1;
  uVar1 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0b50) + uVar1 * 8))(*(int *)(&REFG(undefined, 0x14a0b54) + uVar1 * 8) + param_1);
  return uVar1;
}

/* ref: FUN_0097c1b0 */
uint F_0097c1b0(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x97c1b0u, gen_a0, 0u, 0u, gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x68) >> 1 & 1;
  ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0b70) + uVar2 * 8))(*(int *)(&REFG(undefined, 0x14a0b74) + uVar2 * 8) + param_1);
  uVar2 = *(uint *)(param_1 + 0x68) >> 2 & 1;
  ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0b80) + uVar2 * 8))
            (*(int *)(&REFG(undefined, 0x14a0b84) + uVar2 * 8) + param_1,(undefined4)gen_fl2bits(param_2));
  uVar2 = *(uint *)(param_1 + 0x68) >> 4 & 1;
  ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0b90) + uVar2 * 8))
            (*(int *)(&REFG(undefined, 0x14a0b94) + uVar2 * 8) + param_1,(undefined4)gen_fl2bits(param_2),
             (undefined4)gen_fl2bits(param_3));
  uVar2 = *(uint *)(param_1 + 0x68) >> 5 & 1;
  ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0ba0) + uVar2 * 8))
            (*(int *)(&REFG(undefined, 0x14a0ba4) + uVar2 * 8) + param_1,(undefined4)gen_fl2bits(param_2),
             (undefined4)gen_fl2bits(param_3));
  iVar1 = (*(uint *)(param_1 + 0x68) >> 6 & 1) * 8;
  ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0bb0) + iVar1))
            (*(int *)(&REFG(undefined, 0x14a0bb4) + iVar1) + param_1,(undefined4)gen_fl2bits(param_2),
             (undefined4)gen_fl2bits(param_3));
  uVar2 = *(uint *)(param_1 + 0x68) >> 7 & 1;
  ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0bc0) + uVar2 * 8))
            (*(int *)(&REFG(undefined, 0x14a0bc4) + uVar2 * 8) + param_1,(undefined4)gen_fl2bits(param_2),
             (undefined4)gen_fl2bits(param_3));
  uVar2 = *(uint *)(param_1 + 0x68) >> 8 & 1;
  ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0bd0) + uVar2 * 8))
            (*(int *)(&REFG(undefined, 0x14a0bd4) + uVar2 * 8) + param_1,(undefined4)gen_fl2bits(param_2));
  uVar2 = *(uint *)(param_1 + 0x68) >> 9 & 1;
  ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0be0) + uVar2 * 8))
            (*(int *)(&REFG(undefined, 0x14a0be4) + uVar2 * 8) + param_1,(undefined4)gen_fl2bits(param_2));
  uVar2 = *(uint *)(param_1 + 0x68) >> 10 & 1;
  ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0bf0) + uVar2 * 8))
            (*(int *)(&REFG(undefined, 0x14a0bf4) + uVar2 * 8) + param_1,(undefined4)gen_fl2bits(param_2));
  iVar1 = (*(uint *)(param_1 + 0x68) >> 0xb & 1) * 8;
  ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0c00) + iVar1))
            (*(int *)(&REFG(undefined, 0x14a0c04) + iVar1) + param_1,(undefined4)gen_fl2bits(param_2));
  uVar2 = *(uint *)(param_1 + 0x68) >> 0xc & 3;
  uVar2 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0c10) + uVar2 * 8))
                    (*(int *)(&REFG(undefined, 0x14a0c14) + uVar2 * 8) + param_1,(undefined4)gen_fl2bits(param_2),
                     (undefined4)gen_fl2bits(param_3));
  return uVar2;
}

/* ref: FUN_0097c3f0 */
uint F_0097c3f0(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x97c3f0u, gen_a0, 0u, 0u, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_0097c1b0(param_1,param_2,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_0097c440 */
unsigned int F_0097c440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97c440u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  char cVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  piVar2 = param_1;
  iVar4 = REFG(int, 0x14a09d4);
  if (param_2 != 0) {
    do {
      if ((*piVar2 == 0x4b657943) && (cVar1 = (char)piVar2[2], '\0' < cVar1)) {
        iVar4 = (iVar4 + 0xfU & 0xfffffff0) + (cVar1 * 8 + 0x13U & 0xfffffff0);
        REFG(int, 0x14a09d4) = iVar4;
      }
      uVar3 = uVar3 + 8 + (piVar2[1] + 3U & 0xfffffffc);
      piVar2 = ((int *)GEN_TOP(((int)(piVar2 + 2) + (piVar2[1] + 3U & 0xfffffffc))));
    } while (uVar3 < param_2);
  }
  return 0;
}

/* ref: FUN_0097c4b0 */
unsigned int F_0097c4b0(float gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x97c4b0u, 0u, gen_a1, gen_a2, gen_a3);
  float param_1 = (float)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar2 = (float10)param_1;
  fVar3 = (float10)(float)(fVar2 * fVar2);
  fVar4 = (float10)(float)(fVar3 * fVar2);
  fVar5 = (float10)*(double *)&REFG(undefined, 0x1092098);
  fVar6 = fVar4 * fVar5;
  fVar1 = (float10)*(double *)&REFG(undefined, 0x10944e0);
  *param_2 = ((float)GEN_TOF(((fVar6 - fVar3 * fVar1) + (float10)REFG(double, 0x1088130))));
  *param_3 = (float)(fVar3 * fVar1 - fVar6);
  *param_4 = ((float)GEN_TOF(((fVar4 - fVar3 * fVar5) + fVar2)));
  *param_5 = (float)(fVar4 - fVar3);
  return 0;
}

/* ref: FUN_0097c510 */
float10 F_0097c510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97c510u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  float * pfVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  
  iVar1 = *(int *)(param_1 + 4) + param_2 * 8;
  fVar3 = ((float)GEN_TOF(((float10)(int)*(char *)(iVar1 + 10) * (float10)*(double *)&REFG(undefined, 0x10ddcc8))));
  fVar4 = ((float)GEN_TOF(((float10)*(float *)(iVar1 + 0xc) - (float10)*(float *)(iVar1 + 4))));
  if (-1 < (int)(param_2 - 1)) {
    pfVar2 = ((float *)GEN_TOP((*(int *)(param_1 + 4) + -4 + param_2 * 8)));
    uVar5 = *(ushort *)(iVar1 + 0x10) & 0x3fff;
    return (float10)((float)GEN_TOF((((float10)fVar4 * (float10)fVar3 +
                            ((float10)*(float *)(iVar1 + 4) - (float10)*pfVar2) *
                            (float10)((float)GEN_TOF(((float10)(int)*(char *)(iVar1 + 0xb) *
                                            (float10)*(double *)&REFG(undefined, 0x10ddcc8))))) *
                           (float10)((float)GEN_TOF(((float10)(int)(uVar5 - (*(ushort *)(iVar1 + 8) & 0x3fff)
                                                          ) /
                                           (float10)(int)(uVar5 - (*(ushort *)(pfVar2 + 1) & 0x3fff)
                                                         )))))));
  }
  return (float10)(float)((float10)fVar4 * (float10)fVar3);
}

/* ref: FUN_0097c5e0 */
float10 F_0097c5e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97c5e0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  float fVar2;
  uint * puVar3;
  uint uVar4;
  
  puVar3 = *(uint * PTR32 *)(param_1 + 4);
  fVar1 = ((float)GEN_TOF(((float10)(int)*(char *)((int)puVar3 + param_2 * 8 + 0x13) *
                 (float10)*(double *)&REFG(undefined, 0x10ddcc8))));
  fVar2 = ((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f(puVar3[param_2 * 2 + 3]))) -
                 ((float10)GEN_TOD(gen_bits2f(puVar3[param_2 * 2 + 1]))))));
  if ((int)(param_2 + 2) <= (int)((*puVar3 >> 9 & 0xffff) - 1)) {
    uVar4 = (ushort)puVar3[param_2 * 2 + 2] & 0x3fff;
    return (float10)((float)GEN_TOF((((float10)fVar2 * (float10)fVar1 +
                            (((float10)GEN_TOD(gen_bits2f(puVar3[param_2 * 2 + 5]))) -
                            ((float10)GEN_TOD(gen_bits2f(puVar3[param_2 * 2 + 3])))) *
                            (float10)((float)GEN_TOF(((float10)(int)*(char *)((int)puVar3 +
                                                                    param_2 * 8 + 0x12) *
                                            (float10)*(double *)&REFG(undefined, 0x10ddcc8))))) *
                           (float10)((float)GEN_TOF(((float10)(int)(((ushort)puVar3[param_2 * 2 + 4] & 0x3fff
                                                           ) - uVar4) /
                                           (float10)(int)(((ushort)puVar3[param_2 * 2 + 6] & 0x3fff)
                                                         - uVar4)))))));
  }
  return (float10)(float)((float10)fVar2 * (float10)fVar1);
}

/* ref: FUN_0097c6b0 */
unsigned int F_0097c6b0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x97c6b0u, gen_a0, 0u, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  F_0097c510(param_1,param_3);
  F_0097c5e0(param_1,param_3);
  return 0;
}

/* ref: FUN_0097c790 */
float10 F_0097c790(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x97c790u, gen_a0, 0u, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  int iVar1;
  float10 fVar2;
  
  iVar1 = *(int *)(param_1 + 4) + param_3 * 8;
  fVar2 = (float10)*((float *)GEN_TOP((*(int *)(param_1 + 4) + 4 + param_3 * 8)));
  return (float10)((float)GEN_TOF((((float10)*(float *)(iVar1 + 0xc) - fVar2) *
                          (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)param_2 -
                                                           ((float10)GEN_TOD((*(ushort *)(iVar1 + 8) & 0x3fff
                                                                    )))))) /
                                          (float10)(int)((*(ushort *)(iVar1 + 0x10) & 0x3fff) -
                                                        (*(ushort *)(iVar1 + 8) & 0x3fff))))) + fVar2)))
  ;
}

/* ref: FUN_0097c800 */
float10 F_0097c800(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x97c800u, gen_a0, 0u, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (((float10)GEN_TOD((*(ushort *)(iVar1 + 0x10 + param_3 * 8) & 0x3fff))) <= (float10)param_2) {
    return (float10)*(float *)(iVar1 + 0xc + param_3 * 8);
  }
  return (float10)*(float *)(iVar1 + 4 + param_3 * 8);
}

/* ref: FUN_0097c850 */
unsigned int F_0097c850(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x97c850u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  return 0;
}

/* ref: FUN_0097c860 */
uint F_0097c860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x97c860u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  return *(uint *)(in_ecx + 4);
}

/* ref: FUN_0097c870 */
uint F_0097c870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97c870u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *(uint *)(in_ecx + 4);
}

/* ref: FUN_0097c880 */
uint F_0097c880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97c880u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *(uint *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Runtime::FunctionCurve::vf4 */
uint F_0097c8a0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x97c8a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  uint uVar1;
  
  uVar1 = **(uint * PTR32 *)(param_1 + 4) >> 7 & 3;
  uVar1 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0c48) + uVar1 * 8))(*(int *)(&REFG(undefined, 0x14a0c4c) + uVar1 * 8) + param_1);
  return uVar1;
}

/* ref: Apricot::Engine::Data::Runtime::FunctionCurve::vf3 */
uint F_0097c930(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x97c930u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  bool bVar2;
  float10 fVar3;
  
  uVar1 = **(uint * PTR32 *)(in_ecx + 4) >> 9 & 0xffff;
  if (uVar1 == 0) {
    return 0;
  }
  if (uVar1 == 1) {
    fVar3 = ((float10)GEN_TOD(gen_bits2f((*(uint * PTR32 *)(in_ecx + 4))[1])));
    bVar2 = GEN_ISNAN(fVar3) || GEN_ISNAN((float10)param_2);
    if (bVar2 == (bVar2 || fVar3 == (float10)param_2)) {
      return 1;
    }
    return 0;
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}

/* ref: FUN_0097c9a0 */
unsigned int F_0097c9a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97c9a0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  char cVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  piVar2 = param_1;
  iVar4 = REFG(int, 0x14a09d4);
  if (param_2 != 0) {
    do {
      if ((*piVar2 == 0x4b657943) && (cVar1 = (char)piVar2[2], '\0' < cVar1)) {
        iVar4 = (iVar4 + 0xfU & 0xfffffff0) + (cVar1 + -1) * 0x10 + 0x20;
        REFG(int, 0x14a09d4) = iVar4;
      }
      uVar3 = uVar3 + 8 + (piVar2[1] + 3U & 0xfffffffc);
      piVar2 = ((int *)GEN_TOP(((int)(piVar2 + 2) + (piVar2[1] + 3U & 0xfffffffc))));
    } while (uVar3 < param_2);
  }
  return 0;
}

/* ref: FUN_0097ca10 */
unsigned int F_0097ca10(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x97ca10u, gen_a0, 0u, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  int iVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  
  iVar1 = param_3 * 0x10 + *(int *)(param_1 + 4);
  uVar2 = *(uint *)(iVar1 + 4) & 0xfffffff;
  iVar3 = (*(uint *)(iVar1 + 0x14) & 0xfffffff) - uVar2;
  fVar4 = (float10)iVar3;
  if (iVar3 < 0) {
    fVar4 = fVar4 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar4 = (float10)((float)GEN_TOF(((float10)(float)((float10)param_2 - (float10)uVar2) / fVar4)));
  *param_4 = ((float)GEN_TOF((fVar4 * ((float10)*(float *)(iVar1 + 0x18) - (float10)*(float *)(iVar1 + 8)) +
                    (float10)*(float *)(iVar1 + 8))));
  param_4[1] = ((float)GEN_TOF(((float10)*(float *)(iVar1 + 0xc) +
                      fVar4 * ((float10)*(float *)(iVar1 + 0x1c) - (float10)*(float *)(iVar1 + 0xc))
                      )));
  param_4[2] = ((float)GEN_TOF(((float10)*(float *)(iVar1 + 0x10) +
                      ((float10)*(float *)(iVar1 + 0x20) - (float10)*(float *)(iVar1 + 0x10)) *
                      fVar4)));
  return 0;
}

/* ref: FUN_0097cac0 */
unsigned int F_0097cac0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x97cac0u, gen_a0, 0u, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4) + param_3 * 0x10;
  if (!(((float10)GEN_TOD((*((uint *)GEN_TOP((*(int *)(param_1 + 4) + 0x14 + param_3 * 0x10))) & 0xfffffff))) <=
       (float10)param_2)) {
    *param_4 = *(undefined4 *)(iVar1 + 8);
    param_4[1] = *(undefined4 *)(iVar1 + 0xc);
    param_4[2] = *(undefined4 *)(iVar1 + 0x10);
    return 0;
  }
  *param_4 = *(undefined4 *)(iVar1 + 0x18);
  param_4[1] = *(undefined4 *)(iVar1 + 0x1c);
  param_4[2] = *(undefined4 *)(iVar1 + 0x20);
  return 0;
}

/* ref: FUN_0097cb20 */
uint F_0097cb20(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x97cb20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint * puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = *(uint * PTR32 *)(param_1 + 4);
  iVar4 = 0;
  iVar3 = (*puVar1 >> 9 & 0xffff) - 1;
  if (-1 < iVar3) {
    do {
      uVar2 = (iVar3 - iVar4 >> 1) + iVar4;
      if ((float10)param_2 < ((float10)GEN_TOD((puVar1[uVar2 * 4 + 1] & 0xfffffff)))) {
        iVar3 = uVar2 - 1;
      }
      else {
        if (!(((float10)GEN_TOD((puVar1[uVar2 * 4 + 5] & 0xfffffff))) < (float10)param_2)) {
          return uVar2;
        }
        iVar4 = uVar2 + 1;
      }
    } while (iVar4 <= iVar3);
  }
  return 0;
}

/* ref: FUN_0097cbb0 */
uint F_0097cbb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97cbb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = REFG(float, 0x1087f04);
  *param_2 = GEN_FLT_TO(*param_2, REFG(float, 0x1087f04));
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  return (uint)param_2;
}

/* ref: FUN_0097cbd0 */
unsigned int F_0097cbd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x97cbd0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = *(int *)(in_ecx + 4);
  *param_3 = *(undefined4 *)(iVar1 + 8);
  param_3[1] = *(undefined4 *)(iVar1 + 0xc);
  param_3[2] = *(undefined4 *)(iVar1 + 0x10);
  return 0;
}

/* ref: FUN_0097cbf0 */
unsigned int F_0097cbf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x97cbf0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = *(int *)(in_ecx + 4);
  *param_3 = *(undefined4 *)(iVar1 + 8);
  param_3[1] = *(undefined4 *)(iVar1 + 0xc);
  param_3[2] = *(undefined4 *)(iVar1 + 0x10);
  return 0;
}

/* ref: FUN_0097cc10 */
uint F_0097cc10(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x97cc10u, gen_a0, 0u, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float fVar1;
  uint * puVar2;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  
  puVar2 = *(uint * PTR32 *)(param_1 + 4);
  fVar5 = ((float10)GEN_TOD((puVar2[(*puVar2 >> 9 & 0xffff) * 4 + -3] & 0xfffffff))) -
          (float10)(puVar2[1] & 0xfffffff);
  fVar1 = ((float)GEN_TOF((((float10)GEN_TOD(((int)((float10)(puVar2[1] & 0xfffffff) - (float10)param_2) / (int)fVar5
                           + 1))) * (float10)(float)fVar5 + (float10)param_2)));
  uVar4 = F_0097cb20(param_1,fVar1);
  iVar3 = (*((uint *)GEN_TOP((*(int *)(param_1 + 4) + 0x14 + uVar4 * 0x10))) >> 0x1c) * 8;
  uVar4 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0c90) + iVar3))
                    (*(int *)(&REFG(undefined, 0x14a0c94) + iVar3) + param_1,(undefined4)gen_fl2bits(fVar1),uVar4,
                     param_3);
  return uVar4;
}

/* ref: FUN_0097ccd0 */
uint F_0097ccd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x97ccd0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  uint * puVar1;
  uint * puVar2;
  uint uVar3;
  
  puVar2 = *(uint * PTR32 *)(in_ecx + 4);
  uVar3 = *puVar2 >> 9 & 0xffff;
  puVar1 = puVar2 + uVar3 * 4 + -3;
  *param_3 = puVar2[uVar3 * 4 + -2];
  param_3[1] = puVar1[2];
  param_3[2] = puVar1[3];
  return (uint)puVar1;
}

/* ref: FUN_0097cd00 */
uint F_0097cd00(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x97cd00u, gen_a0, 0u, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float fVar1;
  uint * puVar2;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  
  puVar2 = *(uint * PTR32 *)(param_1 + 4);
  fVar5 = ((float10)GEN_TOD((puVar2[(*puVar2 >> 9 & 0xffff) * 4 + -3] & 0xfffffff))) -
          (float10)(puVar2[1] & 0xfffffff);
  fVar1 = ((float)GEN_TOF(((float10)param_2 -
                 ((float10)GEN_TOD(((int)((float10)param_2 -
                                ((float10)GEN_TOD((puVar2[(*puVar2 >> 9 & 0xffff) * 4 + -3] & 0xfffffff)))) /
                           (int)fVar5 + 1))) * (float10)(float)fVar5)));
  uVar4 = F_0097cb20(param_1,fVar1);
  iVar3 = (*((uint *)GEN_TOP((*(int *)(param_1 + 4) + 0x14 + uVar4 * 0x10))) >> 0x1c) * 8;
  uVar4 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0c90) + iVar3))
                    (*(int *)(&REFG(undefined, 0x14a0c94) + iVar3) + param_1,(undefined4)gen_fl2bits(fVar1),uVar4,
                     param_3);
  return uVar4;
}

/* ref: FUN_0097cdc0 */
uint F_0097cdc0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x97cdc0u, gen_a0, 0u, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  uVar2 = F_0097cb20(param_1,param_2);
  iVar1 = (*((uint *)GEN_TOP((*(int *)(param_1 + 4) + 0x14 + uVar2 * 0x10))) >> 0x1c) * 8;
  uVar2 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0c90) + iVar1))
                    (*(int *)(&REFG(undefined, 0x14a0c94) + iVar1) + param_1,(undefined4)gen_fl2bits(param_2),
                     uVar2,param_3);
  return uVar2;
}

/* ref: Apricot::Engine::Data::Runtime::RgbFunctionCurve::vf1 */
uint F_0097ce10(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x97ce10u, gen_a0, 0u, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = (**(uint * PTR32 *)(param_1 + 4) >> 7 & 3) * 8;
  uVar2 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0ca8) + iVar1))
                    (*(int *)(&REFG(undefined, 0x14a0cac) + iVar1) + param_1,(undefined4)gen_fl2bits(param_2),
                     param_3);
  return uVar2;
}

/* ref: Apricot::Engine::Data::Runtime::RgbFunctionCurve::vf2 */
uint F_0097ce90(unsigned int gen_a0)
{
  GEN_ENTER(0x97ce90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint * puVar1;
  uint uVar2;
  bool bVar3;
  
  puVar1 = *(uint * PTR32 *)(in_ecx + 4);
  uVar2 = *puVar1 >> 9 & 0xffff;
  if (uVar2 == 0) {
    return 0;
  }
  if (uVar2 == 1) {
    bVar3 = GEN_ISNAN(gen_bits2f(puVar1[2])) || GEN_ISNAN(REFG(float, 0x1087f04));
    if (((bVar3 != (bVar3 || gen_bits2f(puVar1[2]) == REFG(float, 0x1087f04))) &&
        (bVar3 = GEN_ISNAN(gen_bits2f(puVar1[3])) || GEN_ISNAN(REFG(float, 0x1087f04)),
        bVar3 != (bVar3 || gen_bits2f(puVar1[3]) == REFG(float, 0x1087f04)))) &&
       (bVar3 = GEN_ISNAN(gen_bits2f(puVar1[4])) || GEN_ISNAN(REFG(float, 0x1087f04)),
       bVar3 != (bVar3 || gen_bits2f(puVar1[4]) == REFG(float, 0x1087f04)))) {
      return 0;
    }
    return 1;
  }
  return CONCAT31((int3)(uVar2 >> 8),1);
}

/* ref: FUN_0097cf20 */
unsigned int F_0097cf20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x97cf20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  int iVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  uVar4 = 0;
  piVar3 = param_2;
  if (param_3 != 0) {
    do {
      iVar1 = *piVar3;
      piVar2 = piVar3 + 2;
      if (iVar1 == 0x56616c) {
        *(int *)((int)this + 4) = *piVar2;
      }
      else if (iVar1 == 0x54797065) {
        *(int *)((int)this + 0xc) = (int)(char)*piVar2;
      }
      else if (iVar1 == 0x56616c52) {
        *(int *)((int)this + 8) = *piVar2;
      }
      uVar4 = uVar4 + 8 + (piVar3[1] + 3U & 0xfffffffc);
      piVar3 = ((int *)GEN_TOP(((int)piVar2 + (piVar3[1] + 3U & 0xfffffffc))));
    } while (uVar4 < param_3);
  }
  return 0;
}

/* ref: FUN_0097cfe0 */
uint F_0097cfe0(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x97cfe0u, gen_a0, 0u, 0u, gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 4) + 0x10))))(param_1 + 4);
  return uVar1;
}

/* ref: FUN_0097d010 */
unsigned int F_0097d010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x97d010u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::ValueFunctionCurve::vf4 */
uint F_0097d020(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x97d020u, gen_a0, 0u, 0u, gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x14) & 7;
  uVar1 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0cf0) + uVar1 * 8))(*(int *)(&REFG(undefined, 0x14a0cf4) + uVar1 * 8) + param_1);
  return uVar1;
}

/* ref: Apricot::Engine::Data::Runtime::ValueFunctionCurve::vf5 */
uint F_0097d060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x97d060u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0xc) + 0x14))))
                    (this + 0xc,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Apricot::Engine::Data::Runtime::ValueFunctionCurve::vf3 */
uint F_0097d070(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x97d070u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 4) + 0xc))))((undefined4)gen_fl2bits(param_2));
  if ((char)uVar1 == '\0') {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0xc) + 0xc))))((undefined4)gen_fl2bits((float)(float10)0))
    ;
    if ((char)uVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureUvSet::vf3 */
uint F_0097d0c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97d0c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x1c) + 0x14))))(this + 0x1c);
  *param_1 = (char)uVar1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x24) + 0x14))))(this + 0x24);
  param_1[1] = (char)uVar1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x44) + 0x14))))(this + 0x44);
  param_1[2] = (char)uVar1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x4c) + 0x14))))(this + 0x4c);
  param_1[3] = (char)uVar1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x58) + 0x14))))(this + 0x58);
  param_1[4] = (char)uVar1;
  return uVar1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureUvSet::vf4 */
uint F_0097d120(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x97d120u, gen_a0, 0u, 0u, gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint * param_5 = (uint *)(uintptr_t)gen_a4;
  uint uVar1;
  
  *param_5 = ~(**(uint * PTR32 *)(param_1 + 4) >> 1) & 1;
  uVar1 = **(uint * PTR32 *)(param_1 + 4) & 1;
  uVar1 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x14a0d18) + uVar1 * 8))(*(int *)(&REFG(undefined, 0x14a0d1c) + uVar1 * 8) + param_1);
  return uVar1;
}

/* ref: FUN_0097d170 */
unsigned int F_0097d170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x97d170u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int param_4 = (int)gen_a3;
  undefined4 uVar1;
  
  uVar1 = REFG(float, 0x1087f04);
  *(undefined4 *)(param_4 + 4) = REFG(float, 0x1087f04);
  *(undefined4 *)(param_4 + 8) = uVar1;
  *(undefined4 *)(param_4 + 0xc) = 0;
  *(undefined4 *)(param_4 + 0x10) = 0;
  *(undefined4 *)(param_4 + 0x14) = 0;
  return 0;
}

/* ref: FUN_0097d220 */
uint F_0097d220(unsigned int gen_a0)
{
  GEN_ENTER(0x97d220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined2 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x10ddd18));
  *(ushort *)((int)this + 6) = *(ushort *)((int)this + 6) & 0xf800;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x14) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x18) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x20) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) & 0xfffffff8;
  return (uint)this;
}

/* ref: FUN_0097d280 */
unsigned int F_0097d280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97d280u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  char cVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  int * piVar6;
  
  uVar4 = 0;
  piVar6 = param_1;
  if (param_2 != 0) {
    do {
      iVar2 = *piVar6;
      if (iVar2 == 0x54784e) {
LAB_0097d2c9: ;
        uVar5 = 0;
        piVar3 = piVar6 + 2;
        do {
          if ((*piVar3 == 0x4b657943) && (cVar1 = (char)piVar3[2], '\0' < cVar1)) {
            REFG(int, 0x14a09d4) = (cVar1 * 8 + 0x13U & 0xfffffff0) + (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0);
          }
          uVar5 = uVar5 + 8 + (piVar3[1] + 3U & 0xfffffffc);
          piVar3 = ((int *)GEN_TOP(((int)(piVar3 + 2) + (piVar3[1] + 3U & 0xfffffffc))));
        } while (uVar5 < param_2);
      }
      else if (iVar2 == 0x544c7374) {
        REFG(int, 0x14a09d4) = REFG(int, 0x14a09d4) + (piVar6[1] + 3U & 0xfffffffc);
      }
      else if (iVar2 == 0x54784e52) goto LAB_0097d2c9;
      uVar4 = uVar4 + 8 + (piVar6[1] + 3U & 0xfffffffc);
      piVar6 = ((int *)GEN_TOP(((int)(piVar6 + 2) + (piVar6[1] + 3U & 0xfffffffc))));
    } while (uVar4 < param_2);
  }
  return 0;
}

/* ref: FUN_0097d420 */
unsigned int F_0097d420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x97d420u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint uVar1;
  uint * puVar2;
  uint * puVar3;
  ushort uVar4;
  short sVar5;
  ushort uVar6;
  uint uVar7;
  
  uVar7 = 0;
  puVar3 = param_2;
  if (param_3 != 0) {
    do {
      uVar1 = *puVar3;
      puVar2 = puVar3 + 2;
      if (0x54784e6f < uVar1) {
        if (uVar1 < 0x62456e62) {
          if (uVar1 == 0x62456e61) {
            uVar4 = (ushort)(char)((byte)*puVar2 & 1);
            uVar6 = 0xfffe;
          }
          else {
            if (uVar1 != 0x5576534e) {
              if (uVar1 != 0x62433241) goto LAB_0097d59a;
              sVar5 = (short)(char)((byte)*puVar2 & 1);
              uVar6 = 0xfffb;
              goto LAB_0097d586;
            }
            uVar4 = (short)(char)((byte)*puVar2 & 7) << 4;
            uVar6 = 0xff8f;
          }
        }
        else {
          if (uVar1 == 0x62504643) {
            sVar5 = (char)((byte)*puVar2 & 1) * 2;
            uVar6 = 0xfff7;
LAB_0097d586: ;
            sVar5 = sVar5 * 2;
          }
          else {
            if (uVar1 != 0x62555343) goto LAB_0097d59a;
            sVar5 = (short)(char)((byte)*puVar2 & 1);
            uVar6 = 0xfffd;
          }
          uVar4 = sVar5 * 2;
        }
        goto LAB_0097d58c;
      }
      if (uVar1 == 0x54784e6f) {
        *(byte *)((int)this + 8) = (byte)*puVar2;
        goto LAB_0097d59a;
      }
      if (uVar1 < 0x54425655) {
        if (uVar1 == 0x54425654) {
          uVar4 = (short)(char)(byte)*puVar2 << 0xe;
          uVar6 = 0x3fff;
          goto LAB_0097d58c;
        }
        if (uVar1 == 0x544654) {
          *(ushort *)((int)this + 6) =
               (short)(char)((byte)*puVar2 & 7) | *(ushort *)((int)this + 6) & 0xfff8;
        }
        else if (uVar1 == 0x54425554) {
          uVar4 = (short)(char)((byte)*puVar2 & 3) << 0xc;
          uVar6 = 0xcfff;
          goto LAB_0097d58c;
        }
      }
      else {
        if (uVar1 == 0x54434154) {
          uVar4 = (short)(char)((byte)*puVar2 & 3) << 10;
          uVar6 = 0xf3ff;
        }
        else {
          if (uVar1 != 0x54434354) goto LAB_0097d59a;
          uVar4 = (short)(char)((byte)*puVar2 & 7) << 7;
          uVar6 = 0xfc7f;
        }
LAB_0097d58c: ;
        *(ushort *)((int)this + 4) = uVar4 | *(ushort *)((int)this + 4) & uVar6;
      }
LAB_0097d59a: ;
      uVar7 = uVar7 + 8 + (puVar3[1] + 3 & 0xfffffffc);
      puVar3 = ((uint *)GEN_TOP(((int)puVar2 + (puVar3[1] + 3 & 0xfffffffc))));
    } while (uVar7 < param_3);
  }
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color2::vf1 */
uint F_0097d5c0(unsigned int gen_a0)
{
  GEN_ENTER(0x97d5c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((*(ushort *)(in_ecx + 4) & 2) != 0) {
    return 0xfffffffe - ((*(ushort *)(in_ecx + 4) & 8) != 0);
  }
  return (int)*(char *)(in_ecx + 8);
}

/* ref: FUN_0097d5e0 */
uint F_0097d5e0(unsigned int gen_a0)
{
  GEN_ENTER(0x97d5e0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *(ushort *)(in_ecx + 1) = *(ushort *)(in_ecx + 1) & 0xf800;
  *in_ecx = (*(undefined * PTR32 (*)[8])REFP(0x10ddd84));
  *(undefined1 *)((int)in_ecx + 6) = 0xff;
  in_ecx[2] = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  in_ecx[3] = &REFG(undefined, 0x14a0a44);
  return (uint)in_ecx;
}

/* ref: FUN_0097d620 */
unsigned int F_0097d620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97d620u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  char cVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  
  uVar2 = 0;
  piVar5 = param_1;
  if (param_2 != 0) {
    do {
      if (*piVar5 == 0x4e506f77) {
        uVar4 = 0;
        piVar3 = piVar5 + 2;
        do {
          if ((*piVar3 == 0x4b657943) && (cVar1 = (char)piVar3[2], '\0' < cVar1)) {
            REFG(int, 0x14a09d4) = (cVar1 * 8 + 0x13U & 0xfffffff0) + (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0);
          }
          uVar4 = uVar4 + 8 + (piVar3[1] + 3U & 0xfffffffc);
          piVar3 = ((int *)GEN_TOP(((int)(piVar3 + 2) + (piVar3[1] + 3U & 0xfffffffc))));
        } while (uVar4 < param_2);
      }
      uVar2 = uVar2 + 8 + (piVar5[1] + 3U & 0xfffffffc);
      piVar5 = ((int *)GEN_TOP(((int)(piVar5 + 2) + (piVar5[1] + 3U & 0xfffffffc))));
    } while (uVar2 < param_2);
  }
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Normal::vf1 */
uint F_0097d6d0(unsigned int gen_a0)
{
  GEN_ENTER(0x97d6d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 6);
}

/* ref: FUN_0097d710 */
unsigned int F_0097d710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97d710u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  char cVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  
  uVar2 = 0;
  piVar5 = param_1;
  if (param_2 != 0) {
    do {
      if (*piVar5 == 0x52617465) {
        uVar4 = 0;
        piVar3 = piVar5 + 2;
        do {
          if ((*piVar3 == 0x4b657943) && (cVar1 = (char)piVar3[2], '\0' < cVar1)) {
            REFG(int, 0x14a09d4) = (cVar1 * 8 + 0x13U & 0xfffffff0) + (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0);
          }
          uVar4 = uVar4 + 8 + (piVar3[1] + 3U & 0xfffffffc);
          piVar3 = ((int *)GEN_TOP(((int)(piVar3 + 2) + (piVar3[1] + 3U & 0xfffffffc))));
        } while (uVar4 < param_2);
      }
      uVar2 = uVar2 + 8 + (piVar5[1] + 3U & 0xfffffffc);
      piVar5 = ((int *)GEN_TOP(((int)(piVar5 + 2) + (piVar5[1] + 3U & 0xfffffffc))));
    } while (uVar2 < param_2);
  }
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Reflection::vf1 */
uint F_0097d7c0(unsigned int gen_a0)
{
  GEN_ENTER(0x97d7c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0xfffffffc;
  if ((*(byte *)(in_ecx + 4) & 2) == 0) {
    uVar1 = (uint)*(char *)(in_ecx + 5);
  }
  return uVar1;
}

/* ref: FUN_0097d7d0 */
uint F_0097d7d0(unsigned int gen_a0)
{
  GEN_ENTER(0x97d7d0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *(ushort *)(in_ecx + 1) = *(ushort *)(in_ecx + 1) & 0x8000;
  *in_ecx = (*(undefined * PTR32 (*)[12])REFP(0x10dddc8));
  *(undefined1 *)((int)in_ecx + 6) = 0xff;
  in_ecx[2] = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  in_ecx[3] = &REFG(undefined, 0x14a0a44);
  return (uint)in_ecx;
}

/* ref: FUN_0097d810 */
unsigned int F_0097d810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97d810u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  char cVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  
  uVar2 = 0;
  piVar5 = param_1;
  if (param_2 != 0) {
    do {
      if (*piVar5 == 0x44506f77) {
        uVar4 = 0;
        piVar3 = piVar5 + 2;
        do {
          if ((*piVar3 == 0x4b657943) && (cVar1 = (char)piVar3[2], '\0' < cVar1)) {
            REFG(int, 0x14a09d4) = (cVar1 * 8 + 0x13U & 0xfffffff0) + (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0);
          }
          uVar4 = uVar4 + 8 + (piVar3[1] + 3U & 0xfffffffc);
          piVar3 = ((int *)GEN_TOP(((int)(piVar3 + 2) + (piVar3[1] + 3U & 0xfffffffc))));
        } while (uVar4 < param_2);
      }
      uVar2 = uVar2 + 8 + (piVar5[1] + 3U & 0xfffffffc);
      piVar5 = ((int *)GEN_TOP(((int)(piVar5 + 2) + (piVar5[1] + 3U & 0xfffffffc))));
    } while (uVar2 < param_2);
  }
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Distortion::vf1 */
uint F_0097d8c0(unsigned int gen_a0)
{
  GEN_ENTER(0x97d8c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 6);
}

/* ref: FUN_0097d8d0 */
uint F_0097d8d0(unsigned int gen_a0)
{
  GEN_ENTER(0x97d8d0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *(byte *)(in_ecx + 1) = *(byte *)(in_ecx + 1) & 0xf0;
  *in_ecx = (*(undefined * PTR32 (*)[5])REFP(0x10dddfc));
  *(undefined1 *)((int)in_ecx + 5) = 0xff;
  in_ecx[2] = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  in_ecx[3] = &REFG(undefined, 0x14a0a44);
  return (uint)in_ecx;
}

/* ref: FUN_0097d900 */
unsigned int F_0097d900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97d900u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  char cVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  
  uVar2 = 0;
  piVar5 = param_1;
  if (param_2 != 0) {
    do {
      if (*piVar5 == 0x504f6666) {
        uVar4 = 0;
        piVar3 = piVar5 + 2;
        do {
          if ((*piVar3 == 0x4b657943) && (cVar1 = (char)piVar3[2], '\0' < cVar1)) {
            REFG(int, 0x14a09d4) = (cVar1 * 8 + 0x13U & 0xfffffff0) + (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0);
          }
          uVar4 = uVar4 + 8 + (piVar3[1] + 3U & 0xfffffffc);
          piVar3 = ((int *)GEN_TOP(((int)(piVar3 + 2) + (piVar3[1] + 3U & 0xfffffffc))));
        } while (uVar4 < param_2);
      }
      uVar2 = uVar2 + 8 + (piVar5[1] + 3U & 0xfffffffc);
      piVar5 = ((int *)GEN_TOP(((int)(piVar5 + 2) + (piVar5[1] + 3U & 0xfffffffc))));
    } while (uVar2 < param_2);
  }
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Palette::vf1 */
uint F_0097d9b0(unsigned int gen_a0)
{
  GEN_ENTER(0x97d9b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(char *)(in_ecx + 5);
}

/* ref: FUN_0097d9c0 */
uint F_0097d9c0(unsigned int gen_a0)
{
  GEN_ENTER(0x97d9c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10dde14));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0xc) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x14) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x18) = *(uint *)((int)this + 0x18) & 0xfffffff8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1c) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x20) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x24) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x28) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x2c) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x30) = *(uint *)((int)this + 0x30) & 0xfffffff8;
  return (uint)this;
}

/* ref: FUN_0097da40 */
unsigned int F_0097da40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97da40u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  char cVar1;
  uint uVar2;
  uint * puVar3;
  uint uVar4;
  uint * puVar5;
  
  uVar2 = 0;
  puVar5 = param_1;
  if (param_2 != 0) {
    do {
      uVar4 = *puVar5;
      if (uVar4 < 0x4c656e53) {
        if (((uVar4 == 0x4c656e52) || (uVar4 == 0x4c656e)) || (uVar4 == 0x576474)) {
LAB_0097da8a: ;
          uVar4 = 0;
          puVar3 = puVar5 + 2;
          if (puVar5[1] != 0) {
            do {
              if ((*puVar3 == 0x4b657943) && (cVar1 = (char)puVar3[2], '\0' < cVar1)) {
                REFG(int, 0x14a09d4) = (cVar1 * 8 + 0x13U & 0xfffffff0) + (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0)
                ;
              }
              uVar4 = uVar4 + 8 + (puVar3[1] + 3 & 0xfffffffc);
              puVar3 = ((uint *)GEN_TOP(((int)(puVar3 + 2) + (puVar3[1] + 3 & 0xfffffffc))));
            } while (uVar4 < puVar5[1]);
          }
        }
      }
      else if (uVar4 == 0x57647452) goto LAB_0097da8a;
      uVar2 = uVar2 + 8 + (puVar5[1] + 3 & 0xfffffffc);
      puVar5 = ((uint *)GEN_TOP(((int)(puVar5 + 2) + (puVar5[1] + 3 & 0xfffffffc))));
    } while (uVar2 < param_2);
  }
  return 0;
}

/* ref: Apricot::Engine::Data::Runtime::ModelParticle::vf12 */
uint F_0097db10(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x97db10u, gen_a0, 0u, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0xc) & 0xff;
  if (uVar2 == 1) {
    *param_3 = (int)*(char *)(param_1 + 4);
    *param_4 = (int)*(char *)(param_1 + 4);
    return 0;
  }
  uVar1 = (uint)param_2;
  if ((int)uVar1 < 0) {
    uVar1 = 0;
  }
  uVar2 = uVar2 - 2;
  if ((int)uVar2 < (int)uVar1) {
    uVar1 = uVar2;
  }
  *param_3 = (int)*(char *)(uVar1 + 4 + param_1);
  *param_4 = (int)*(char *)(uVar1 + 5 + param_1);
  return uVar1;
}

/* ref: FUN_0097dc00 */
unsigned int F_0097dc00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x97dc00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 0;
  piVar1 = param_2;
  if (param_3 != 0) {
    do {
      if (*piVar1 == 0x4d4e4f) {
        *(char *)((int)this + 4) = (char)piVar1[2];
      }
      uVar2 = uVar2 + 8 + (piVar1[1] + 3U & 0xfffffffc);
      piVar1 = ((int *)GEN_TOP(((int)(piVar1 + 2) + (piVar1[1] + 3U & 0xfffffffc))));
    } while (uVar2 < param_3);
  }
  return 0;
}

/* ref: FUN_0097dc50 */
uint F_0097dc50(unsigned int gen_a0)
{
  GEN_ENTER(0x97dc50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10dde30));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0xc) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x14) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x18) = *(uint *)((int)this + 0x18) & 0xfffffff8;
  return (uint)this;
}

/* ref: FUN_0097dca0 */
unsigned int F_0097dca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97dca0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  char cVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  
  uVar2 = 0;
  piVar5 = param_1;
  if (param_2 != 0) {
    do {
      if ((*piVar5 == 0x436e74) || (*piVar5 == 0x436e7452)) {
        uVar4 = 0;
        piVar3 = piVar5 + 2;
        if (piVar5[1] != 0) {
          do {
            if ((*piVar3 == 0x4b657943) && (cVar1 = (char)piVar3[2], '\0' < cVar1)) {
              REFG(int, 0x14a09d4) = (cVar1 * 8 + 0x13U & 0xfffffff0) + (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0);
            }
            uVar4 = uVar4 + 8 + (piVar3[1] + 3U & 0xfffffffc);
            piVar3 = ((int *)GEN_TOP(((int)(piVar3 + 2) + (piVar3[1] + 3U & 0xfffffffc))));
          } while (uVar4 < (uint)piVar5[1]);
        }
      }
      uVar2 = uVar2 + 8 + (piVar5[1] + 3U & 0xfffffffc);
      piVar5 = ((int *)GEN_TOP(((int)(piVar5 + 2) + (piVar5[1] + 3U & 0xfffffffc))));
    } while (uVar2 < param_2);
  }
  return 0;
}

/* ref: FUN_0097dda0 */
unsigned int F_0097dda0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x97dda0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  int iVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  uVar4 = 0;
  piVar3 = param_2;
  if (param_3 != 0) {
    do {
      iVar1 = *piVar3;
      piVar2 = piVar3 + 2;
      if (iVar1 == 0x436e4f66) {
        *(int *)((int)this + 8) = *piVar2;
      }
      else if (iVar1 == 0x4c677454) {
        *(char *)((int)this + 5) = (char)*piVar2;
      }
      else if (iVar1 == 0x624c6774) {
        *(char *)((int)this + 4) = (char)*piVar2;
      }
      uVar4 = uVar4 + 8 + (piVar3[1] + 3U & 0xfffffffc);
      piVar3 = ((int *)GEN_TOP(((int)piVar2 + (piVar3[1] + 3U & 0xfffffffc))));
    } while (uVar4 < param_3);
  }
  return 0;
}

/* ref: FUN_0097de40 */
unsigned int F_0097de40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x97de40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 0;
  piVar1 = param_2;
  if (param_3 != 0) {
    do {
      if (*piVar1 == 0x57557654) {
        *(char *)((int)this + 4) = (char)piVar1[2];
      }
      uVar2 = uVar2 + 8 + (piVar1[1] + 3U & 0xfffffffc);
      piVar1 = ((int *)GEN_TOP(((int)(piVar1 + 2) + (piVar1[1] + 3U & 0xfffffffc))));
    } while (uVar2 < param_3);
  }
  return 0;
}

/* ref: FUN_0097df10 */
unsigned int F_0097df10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x97df10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 0;
  piVar1 = param_2;
  if (param_3 != 0) {
    do {
      if (*piVar1 == 0x5353) {
        *(int *)((int)this + 4) = piVar1[2];
      }
      uVar2 = uVar2 + 8 + (piVar1[1] + 3U & 0xfffffffc);
      piVar1 = ((int *)GEN_TOP(((int)(piVar1 + 2) + (piVar1[1] + 3U & 0xfffffffc))));
    } while (uVar2 < param_3);
  }
  return 0;
}

/* ref: FUN_0097df60 */
uint F_0097df60(unsigned int gen_a0)
{
  GEN_ENTER(0x97df60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  uVar1 = REFG(float, 0x1087f04);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10dde70));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0xc) = &REFG(undefined, 0x14a0a44);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x10ddcac));
  *(undefined * PTR32 *)((int)this + 0x14) = &REFG(undefined, 0x14a0a44);
  *(uint *)((int)this + 0x18) = *(uint *)((int)this + 0x18) & 0xfffffff8;
  *(undefined4 *)((int)this + 0x1c) = uVar1;
  *(undefined4 *)((int)this + 0x20) = uVar1;
  return (uint)this;
}

/* ref: FUN_0097dfc0 */
unsigned int F_0097dfc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97dfc0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  char cVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  
  uVar2 = 0;
  piVar5 = param_1;
  if (param_2 != 0) {
    do {
      if ((*piVar5 == 0x574944) || (*piVar5 == 0x57494452)) {
        uVar4 = 0;
        piVar3 = piVar5 + 2;
        if (piVar5[1] != 0) {
          do {
            if ((*piVar3 == 0x4b657943) && (cVar1 = (char)piVar3[2], '\0' < cVar1)) {
              REFG(int, 0x14a09d4) = (cVar1 * 8 + 0x13U & 0xfffffff0) + (REFG(int, 0x14a09d4) + 0xfU & 0xfffffff0);
            }
            uVar4 = uVar4 + 8 + (piVar3[1] + 3U & 0xfffffffc);
            piVar3 = ((int *)GEN_TOP(((int)(piVar3 + 2) + (piVar3[1] + 3U & 0xfffffffc))));
          } while (uVar4 < (uint)piVar5[1]);
        }
      }
      uVar2 = uVar2 + 8 + (piVar5[1] + 3U & 0xfffffffc);
      piVar5 = ((int *)GEN_TOP(((int)(piVar5 + 2) + (piVar5[1] + 3U & 0xfffffffc))));
    } while (uVar2 < param_2);
  }
  return 0;
}

/* ref: Apricot::Engine::Instance::BinderInstance::vf31 */
unsigned int F_0097e080(void)
{
  GEN_ENTER(0x97e080u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0097e0a0 */
uint F_0097e0a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97e0a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  
  uVar2 = (uint)*(ushort *)((int)this + 0x3ac);
  bVar1 = (byte)*(ushort *)((int)this + 0x3ac);
  if (bVar1 < 0x10) {
    uVar2 = (uint)bVar1;
    *(undefined4 *)((int)this + uVar2 * 8 + 0x278) = param_1;
    *(char *)((int)this + 0x3ac) = *(char *)((int)this + 0x3ac) + '\x01';
  }
  return uVar2;
}

/* ref: FUN_0097e0e0 */
unsigned int F_0097e0e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97e0e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  ushort uVar1;
  undefined4 * puVar2;
  
  uVar1 = *(ushort *)((int)this + 0x3aa);
  *(ushort *)((int)this + 0x3aa) = uVar1 + 1;
  if (*(int *)((int)this + 0x31c) != 0) {
    puVar2 = ((undefined4 *)GEN_TOP(((uint)uVar1 * 0x10 + *(int *)((int)this + 0x31c))));
    *puVar2 = *param_1;
    puVar2[1] = param_1[1];
    puVar2[2] = param_1[2];
    puVar2[3] = param_1[3];
  }
  return 0;
}

/* ref: FUN_0097e120 */
uint F_0097e120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97e120u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  short * psVar1;
  
  psVar1 = (short *)(in_ecx + 0x380 + param_2 * 2);
  *psVar1 = *psVar1 + 1;
  return param_2;
}

/* ref: FUN_0097e140 */
unsigned int F_0097e140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x97e140u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  short sVar1;
  undefined4 * puVar2;
  
  if (*(int *)((int)this + param_1 * 4 + 800) != 0) {
    sVar1 = *(short *)((int)this + param_1 * 2 + 0x360);
    *(short *)((int)this + param_1 * 2 + 0x360) = sVar1 + 1;
    puVar2 = ((undefined4 *)GEN_TOP((sVar1 * 0x10 + *(int *)((int)this + param_1 * 4 + 800))));
    *puVar2 = *param_2;
    puVar2[1] = param_2[1];
    puVar2[2] = param_2[2];
    puVar2[3] = param_2[3];
  }
  return 0;
}

/* ref: Apricot::Engine::Instance::DocumentInstance::vf31 */
unsigned int F_0097e1a0(unsigned int gen_a0)
{
  GEN_ENTER(0x97e1a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  if (((((*(ushort *)(this + 0x3ac) & 0x1000) == 0) && (*(int *)(this + 0x1ec) != 0)) &&
      (!(*((float *)GEN_TOP((*(int *)(this + 0x1ec) + 0x3c))) <= REFG(float, 0x10947f8)))) &&
     (uVar2 = (uint)*(ushort *)(this + 0x3aa), uVar2 != 0)) {
    iVar3 = 0;
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((iVar3 + 8 + *(int *)(this + 0x31c))));
      ((code *)*(gen_code32 *)(*piVar1 + 0x74))(piVar1);
      iVar3 = iVar3 + 0x10;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return 0;
}

/* ref: FUN_0097e200 */
unsigned int F_0097e200(unsigned int gen_a0)
{
  GEN_ENTER(0x97e200u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  int local_c;
  short * local_8;
  
  local_8 = (short *)((int)this + 0x360);
  piVar1 = (int *)((int)this + 800);
  local_c = 0x10;
  do {
    iVar3 = (int)*local_8;
    if (0 < iVar3) {
      puVar2 = (undefined4 *)(*piVar1 + 8);
      do {
        ((code *)*(gen_code32 *)(*(int *)*puVar2 + 0x74))((int *)*puVar2);
        puVar2 = puVar2 + 4;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    local_8 = local_8 + 1;
    piVar1 = piVar1 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  return 0;
}

/* ref: FUN_0097e260 */
unsigned int F_0097e260(unsigned int gen_a0)
{
  GEN_ENTER(0x97e260u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  undefined4 * puVar3;
  int local_c;
  short * local_8;
  
  local_8 = (short *)((int)this + 0x360);
  piVar1 = (int *)((int)this + 800);
  local_c = 0x10;
  do {
    iVar2 = *local_8 + -1;
    if (-1 < iVar2) {
      puVar3 = (undefined4 *)(*piVar1 + 8 + iVar2 * 0x10);
      do {
        ((code *)*(gen_code32 *)(*(int *)*puVar3 + 0x74))((int *)*puVar3);
        puVar3 = puVar3 + -4;
        iVar2 = iVar2 + -1;
      } while (-1 < iVar2);
    }
    local_8 = local_8 + 1;
    piVar1 = piVar1 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  return 0;
}

/* ref: FUN_0097e2c0 */
unsigned int F_0097e2c0(unsigned int gen_a0)
{
  GEN_ENTER(0x97e2c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  int local_c;
  short * local_8;
  
  local_8 = (short *)((int)this + 0x360);
  piVar1 = (int *)((int)this + 800);
  local_c = 0x10;
  do {
    iVar3 = (int)*local_8;
    if (0 < iVar3) {
      puVar2 = (undefined4 *)(*piVar1 + 8);
      do {
        ((code *)*(gen_code32 *)(*(int *)*puVar2 + 0x78))((int *)*puVar2);
        puVar2 = puVar2 + 4;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    local_8 = local_8 + 1;
    piVar1 = piVar1 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  return 0;
}

/* ref: FUN_0097e320 */
unsigned int F_0097e320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x97e320u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  *(undefined4 *)(in_ecx + 0x30c) = *param_2;
  *(undefined4 *)(in_ecx + 0x310) = param_2[1];
  *(undefined4 *)(in_ecx + 0x314) = param_2[2];
  *(undefined4 *)(in_ecx + 0x300) = *param_3;
  *(undefined4 *)(in_ecx + 0x304) = param_3[1];
  *(undefined4 *)(in_ecx + 0x308) = param_3[2];
  *(undefined4 *)(in_ecx + 0x2f4) = *param_4;
  *(undefined4 *)(in_ecx + 0x2f8) = param_4[1];
  *(undefined4 *)(in_ecx + 0x2fc) = param_4[2];
  return 0;
}

/* ref: FUN_0097e380 */
uint F_0097e380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x97e380u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  *param_2 = *(undefined4 *)(in_ecx + 0x30c);
  param_2[1] = *(undefined4 *)(in_ecx + 0x310);
  param_2[2] = *(undefined4 *)(in_ecx + 0x314);
  *param_3 = *(undefined4 *)(in_ecx + 0x300);
  param_3[1] = *(undefined4 *)(in_ecx + 0x304);
  param_3[2] = *(undefined4 *)(in_ecx + 0x308);
  *param_4 = *(undefined4 *)(in_ecx + 0x2f4);
  param_4[1] = *(undefined4 *)(in_ecx + 0x2f8);
  param_4[2] = *(undefined4 *)(in_ecx + 0x2fc);
  return (uint)param_4;
}

/* ref: switchD_0097e40e::caseD_0 */
unsigned int F_0097e3e0(void)
{
  GEN_ENTER(0x97e3e0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::Engine::Instance::EmitterInstance::vf27 */
uint F_0097e3f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x97e3f0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  ((code *)*(gen_code32 *)(this + 0x2e0))();
  uVar1 = (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f038))[*(uint *)(this + 0x2ac) & 1])))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_0097e410 */
unsigned int F_0097e410(void)
{
  GEN_ENTER(0x97e410u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0097e420 */
unsigned int F_0097e420(void)
{
  GEN_ENTER(0x97e420u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0097e430 */
unsigned int F_0097e430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97e430u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_0097e440 */
unsigned int F_0097e440(unsigned int gen_a0)
{
  GEN_ENTER(0x97e440u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_0097e450 */
unsigned int F_0097e450(unsigned int gen_a0)
{
  GEN_ENTER(0x97e450u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_0097e460 */
unsigned int F_0097e460(void)
{
  GEN_ENTER(0x97e460u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::Engine::Instance::EmitterInstance::vf15 */
uint F_0097e470(unsigned int gen_a0)
{
  GEN_ENTER(0x97e470u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x88;
}

/* ref: FUN_0097e4c0 */
uint F_0097e4c0(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x97e4c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x1f8) + 0x38))))(*(int * PTR32 *)(param_1 + 0x1f8))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
  return uVar2;
}

/* ref: FUN_0097e5c0 */
uint F_0097e5c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97e5c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if (param_1 != (int *)0x0) {
    uVar1 = *(uint *)((int)this + 0x1d0);
    *(uint *)((int)this + 0x1d0) = ((uVar1 & 0xfffffe00) + 0x200 ^ uVar1) & 0x3fe00 ^ uVar1;
    if (*(int *)((int)this + 0x1e4) == 0) {
      *(int * PTR32 *)((int)this + 0x1e0) = param_1;
      *(int * PTR32 *)((int)this + 0x1e4) = param_1;
      uVar1 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
      return uVar1;
    }
    *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1e4) + 0x1e8))) = param_1;
    *(int * PTR32 *)((int)this + 0x1e4) = param_1;
    this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1)));
  }
  return (uint)this;
}

/* ref: FUN_0097e630 */
unsigned int F_0097e630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97e630u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar2 = param_2;
  for (iVar1 = *(int *)(in_ecx + 0x1e0); (0 < iVar2 && (iVar2 = iVar2 + -1, iVar1 != 0));
      iVar1 = *(int *)(iVar1 + 0x1e8)) {
  }
  return 0;
}

/* ref: FUN_0097e670 */
unsigned int F_0097e670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x97e670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(uint *)((int)this + 0x1d0) ^ param_1) & 0x1ff ^ *(uint *)((int)this + 0x1d0);
  *(uint *)((int)this + 0x1d0) =
       ((uint)((uVar1 & 0x1ff) == 0) * 0x20000000 ^ uVar1) & 0x20000000 ^ uVar1;
  return 0;
}

/* ref: FUN_0097e6f0 */
unsigned int F_0097e6f0(unsigned int gen_a0)
{
  GEN_ENTER(0x97e6f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_0097e700 */
unsigned int F_0097e700(void)
{
  GEN_ENTER(0x97e700u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0097e710 */
uint F_0097e710(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x97e710u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  float fVar1;
  uint uVar2;
  float10 fVar3;
  
  fVar1 = ((float)GEN_TOF(((float10)*(float *)((*(int *)&gen_args[0]) + 0x1bc) * (float10)(*(float *)&gen_args[1]))));
  fVar3 = (float10)fVar1;
  *(float *)((*(int *)&gen_args[0]) + 0x1b0) = fVar1;
  (*(float *)&gen_args[1]) = ((float)GEN_TOF(((float10)*(float *)((*(int *)&gen_args[0]) + 0x1a8) + fVar3)));
  fVar1 = *(float *)((*(int *)&gen_args[0]) + 0x1ac);
  (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f078))[*(uint *)((*(int *)&gen_args[0]) + 0x1d0) >> 0x1c & 1])))((*(int *)&gen_args[0]),&(*(float *)&gen_args[1]));
  (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f080))[*(uint *)((*(int *)&gen_args[0]) + 0x1d0) >> 0x1d & 1])))((*(int *)&gen_args[0]),&(*(float *)&gen_args[1]));
  uVar2 = (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f058))[*(byte *)((*(int *)&gen_args[0]) + 0x1d3) & 1])))((*(int *)&gen_args[0]));
  *(float *)((*(int *)&gen_args[0]) + 0x1a8) = (*(float *)&gen_args[1]);
  *(float *)((*(int *)&gen_args[0]) + 0x1ac) = (float)(fVar3 + (float10)fVar1);
  return uVar2;
}

/* ref: FUN_0097e7b0 */
unsigned int F_0097e7b0(unsigned int gen_a0)
{
  GEN_ENTER(0x97e7b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_0097e7c0 */
unsigned int F_0097e7c0(void)
{
  GEN_ENTER(0x97e7c0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0097e7d0 */
uint F_0097e7d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x97e7d0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x132f060))[*(uint *)((int)this + 0x1d0) >> 0x19 & 1])))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_0097e7f0 */
unsigned int F_0097e7f0(void)
{
  GEN_ENTER(0x97e7f0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0097e800 */
unsigned int F_0097e800(void)
{
  GEN_ENTER(0x97e800u, 0u, 0u, 0u, 0u);
  return 0;
}

